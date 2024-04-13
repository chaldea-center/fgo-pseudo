void __fastcall DataManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_c *v11; // x8
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct DataManager_StaticFields *v20; // x0
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42EA377 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v8, v9, v10);
    byte_42EA377 = 1;
  }
  DataManager_TypeInfo->static_fields->readDataVersion = 0;
  v11 = DataManager_TypeInfo;
  DataManager_TypeInfo->static_fields->readDateVersion = 0LL;
  v11->static_fields->dataVersion = 0;
  v11->static_fields->dateVersion = 0LL;
  static_fields = v11->static_fields;
  static_fields->updateData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->updateData, 0LL, v2, v3, v4, v5, v6, v7);
  v13 = DataManager_TypeInfo->static_fields;
  v13->webViewData = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v13->webViewData, 0LL, v14, v15, v16, v17, v18, v19);
  v20 = DataManager_TypeInfo->static_fields;
  v21 = (System_Int32_array **)StringLiteral_1/*""*/;
  v20->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&v20->serverHash, v21, v22, v23, v24, v25, v26, v27);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  Il2CppObject *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_42EA376 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_long____TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&object_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager___ctor__, v17, v18, v19);
    byte_42EA376 = 1;
  }
  LOBYTE(this->fields.datalist) = 1;
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v20;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.saveDataMapList,
    (System_Int32_array **)v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_long_____ctor__);
  *(_QWORD *)&this->fields.lastFrameTime = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.lastFrameTime,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (Il2CppObject *)sub_B5D694(object_TypeInfo);
  System_Object___ctor(v34, 0LL);
  *(_QWORD *)&this->fields.nowLoadCount = v34;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.nowLoadCount,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42EA354 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, v1, v2, v3);
    byte_42EA354 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  DataManager__ClearCacheAllCommonProc(CachePath, v6);
}


// positive sp value has been detected, the output may be wrong!
void __fastcall DataManager__ClearCacheAllCommonProc(System_String_o *cachePath, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataManager_c *v5; // x0

  if ( (byte_42EA355 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA355 = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete_44512988(cachePath, 1, 0LL);
  v5 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  v5->static_fields->readDataVersion = 0;
  DataManager_TypeInfo->static_fields->readDateVersion = 0LL;
}


void __fastcall DataManager__ClearOldEnvCacheAll(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  DataManager_c *v4; // x0
  System_String_o *OldEnvCachePath; // x0
  const MethodInfo *v6; // x1

  if ( (byte_42EA353 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, v1, v2, v3);
    byte_42EA353 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  OldEnvCachePath = DataManager__getOldEnvCachePath((const MethodInfo *)v4);
  DataManager__ClearCacheAllCommonProc(OldEnvCachePath, v6);
}


void __fastcall DataManager__ClearSaveDataList(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_c *v11; // x0
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x0

  if ( (byte_42EA36D & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____Clear__, v8, v9, v10);
    byte_42EA36D = 1;
  }
  v11 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v11 = DataManager_TypeInfo;
  }
  v11->static_fields->readDataVersion = 0;
  DataManager_TypeInfo->static_fields->readDateVersion = 0LL;
  saveDataMapList = this->fields.saveDataMapList;
  if ( !saveDataMapList
    || (System_Collections_Generic_List_XWeaponTrail_Element___Clear(
          (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
          (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__),
        (saveDataMapList = *(struct System_Collections_Generic_List_long____o **)&this->fields.lastFrameTime) == 0LL) )
  {
    sub_B5D69C(saveDataMapList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_long____Clear__);
}


DataMasterBase_array *__fastcall DataManager__CreateMasterData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  int v58; // w1
  int v59; // w2
  __int64 v60; // x3
  int v61; // w1
  int v62; // w2
  __int64 v63; // x3
  int v64; // w1
  int v65; // w2
  __int64 v66; // x3
  int v67; // w1
  int v68; // w2
  __int64 v69; // x3
  int v70; // w1
  int v71; // w2
  __int64 v72; // x3
  int v73; // w1
  int v74; // w2
  __int64 v75; // x3
  int v76; // w1
  int v77; // w2
  __int64 v78; // x3
  int v79; // w1
  int v80; // w2
  __int64 v81; // x3
  int v82; // w1
  int v83; // w2
  __int64 v84; // x3
  int v85; // w1
  int v86; // w2
  __int64 v87; // x3
  int v88; // w1
  int v89; // w2
  __int64 v90; // x3
  int v91; // w1
  int v92; // w2
  __int64 v93; // x3
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  int v97; // w1
  int v98; // w2
  __int64 v99; // x3
  int v100; // w1
  int v101; // w2
  __int64 v102; // x3
  int v103; // w1
  int v104; // w2
  __int64 v105; // x3
  int v106; // w1
  int v107; // w2
  __int64 v108; // x3
  int v109; // w1
  int v110; // w2
  __int64 v111; // x3
  int v112; // w1
  int v113; // w2
  __int64 v114; // x3
  int v115; // w1
  int v116; // w2
  __int64 v117; // x3
  int v118; // w1
  int v119; // w2
  __int64 v120; // x3
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int v124; // w1
  int v125; // w2
  __int64 v126; // x3
  int v127; // w1
  int v128; // w2
  __int64 v129; // x3
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  int v133; // w1
  int v134; // w2
  __int64 v135; // x3
  int v136; // w1
  int v137; // w2
  __int64 v138; // x3
  int v139; // w1
  int v140; // w2
  __int64 v141; // x3
  int v142; // w1
  int v143; // w2
  __int64 v144; // x3
  int v145; // w1
  int v146; // w2
  __int64 v147; // x3
  int v148; // w1
  int v149; // w2
  __int64 v150; // x3
  int v151; // w1
  int v152; // w2
  __int64 v153; // x3
  int v154; // w1
  int v155; // w2
  __int64 v156; // x3
  int v157; // w1
  int v158; // w2
  __int64 v159; // x3
  int v160; // w1
  int v161; // w2
  __int64 v162; // x3
  int v163; // w1
  int v164; // w2
  __int64 v165; // x3
  int v166; // w1
  int v167; // w2
  __int64 v168; // x3
  int v169; // w1
  int v170; // w2
  __int64 v171; // x3
  int v172; // w1
  int v173; // w2
  __int64 v174; // x3
  int v175; // w1
  int v176; // w2
  __int64 v177; // x3
  int v178; // w1
  int v179; // w2
  __int64 v180; // x3
  int v181; // w1
  int v182; // w2
  __int64 v183; // x3
  int v184; // w1
  int v185; // w2
  __int64 v186; // x3
  int v187; // w1
  int v188; // w2
  __int64 v189; // x3
  int v190; // w1
  int v191; // w2
  __int64 v192; // x3
  int v193; // w1
  int v194; // w2
  __int64 v195; // x3
  int v196; // w1
  int v197; // w2
  __int64 v198; // x3
  int v199; // w1
  int v200; // w2
  __int64 v201; // x3
  int v202; // w1
  int v203; // w2
  __int64 v204; // x3
  int v205; // w1
  int v206; // w2
  __int64 v207; // x3
  int v208; // w1
  int v209; // w2
  __int64 v210; // x3
  int v211; // w1
  int v212; // w2
  __int64 v213; // x3
  int v214; // w1
  int v215; // w2
  __int64 v216; // x3
  int v217; // w1
  int v218; // w2
  __int64 v219; // x3
  int v220; // w1
  int v221; // w2
  __int64 v222; // x3
  int v223; // w1
  int v224; // w2
  __int64 v225; // x3
  int v226; // w1
  int v227; // w2
  __int64 v228; // x3
  int v229; // w1
  int v230; // w2
  __int64 v231; // x3
  int v232; // w1
  int v233; // w2
  __int64 v234; // x3
  int v235; // w1
  int v236; // w2
  __int64 v237; // x3
  int v238; // w1
  int v239; // w2
  __int64 v240; // x3
  int v241; // w1
  int v242; // w2
  __int64 v243; // x3
  int v244; // w1
  int v245; // w2
  __int64 v246; // x3
  int v247; // w1
  int v248; // w2
  __int64 v249; // x3
  int v250; // w1
  int v251; // w2
  __int64 v252; // x3
  int v253; // w1
  int v254; // w2
  __int64 v255; // x3
  int v256; // w1
  int v257; // w2
  __int64 v258; // x3
  int v259; // w1
  int v260; // w2
  __int64 v261; // x3
  int v262; // w1
  int v263; // w2
  __int64 v264; // x3
  int v265; // w1
  int v266; // w2
  __int64 v267; // x3
  int v268; // w1
  int v269; // w2
  __int64 v270; // x3
  int v271; // w1
  int v272; // w2
  __int64 v273; // x3
  int v274; // w1
  int v275; // w2
  __int64 v276; // x3
  int v277; // w1
  int v278; // w2
  __int64 v279; // x3
  int v280; // w1
  int v281; // w2
  __int64 v282; // x3
  int v283; // w1
  int v284; // w2
  __int64 v285; // x3
  int v286; // w1
  int v287; // w2
  __int64 v288; // x3
  int v289; // w1
  int v290; // w2
  __int64 v291; // x3
  int v292; // w1
  int v293; // w2
  __int64 v294; // x3
  int v295; // w1
  int v296; // w2
  __int64 v297; // x3
  int v298; // w1
  int v299; // w2
  __int64 v300; // x3
  int v301; // w1
  int v302; // w2
  __int64 v303; // x3
  int v304; // w1
  int v305; // w2
  __int64 v306; // x3
  int v307; // w1
  int v308; // w2
  __int64 v309; // x3
  int v310; // w1
  int v311; // w2
  __int64 v312; // x3
  int v313; // w1
  int v314; // w2
  __int64 v315; // x3
  int v316; // w1
  int v317; // w2
  __int64 v318; // x3
  int v319; // w1
  int v320; // w2
  __int64 v321; // x3
  int v322; // w1
  int v323; // w2
  __int64 v324; // x3
  int v325; // w1
  int v326; // w2
  __int64 v327; // x3
  int v328; // w1
  int v329; // w2
  __int64 v330; // x3
  int v331; // w1
  int v332; // w2
  __int64 v333; // x3
  int v334; // w1
  int v335; // w2
  __int64 v336; // x3
  int v337; // w1
  int v338; // w2
  __int64 v339; // x3
  int v340; // w1
  int v341; // w2
  __int64 v342; // x3
  int v343; // w1
  int v344; // w2
  __int64 v345; // x3
  int v346; // w1
  int v347; // w2
  __int64 v348; // x3
  int v349; // w1
  int v350; // w2
  __int64 v351; // x3
  int v352; // w1
  int v353; // w2
  __int64 v354; // x3
  int v355; // w1
  int v356; // w2
  __int64 v357; // x3
  int v358; // w1
  int v359; // w2
  __int64 v360; // x3
  int v361; // w1
  int v362; // w2
  __int64 v363; // x3
  int v364; // w1
  int v365; // w2
  __int64 v366; // x3
  int v367; // w1
  int v368; // w2
  __int64 v369; // x3
  int v370; // w1
  int v371; // w2
  __int64 v372; // x3
  int v373; // w1
  int v374; // w2
  __int64 v375; // x3
  int v376; // w1
  int v377; // w2
  __int64 v378; // x3
  int v379; // w1
  int v380; // w2
  __int64 v381; // x3
  int v382; // w1
  int v383; // w2
  __int64 v384; // x3
  int v385; // w1
  int v386; // w2
  __int64 v387; // x3
  int v388; // w1
  int v389; // w2
  __int64 v390; // x3
  int v391; // w1
  int v392; // w2
  __int64 v393; // x3
  int v394; // w1
  int v395; // w2
  __int64 v396; // x3
  int v397; // w1
  int v398; // w2
  __int64 v399; // x3
  int v400; // w1
  int v401; // w2
  __int64 v402; // x3
  int v403; // w1
  int v404; // w2
  __int64 v405; // x3
  int v406; // w1
  int v407; // w2
  __int64 v408; // x3
  int v409; // w1
  int v410; // w2
  __int64 v411; // x3
  int v412; // w1
  int v413; // w2
  __int64 v414; // x3
  int v415; // w1
  int v416; // w2
  __int64 v417; // x3
  int v418; // w1
  int v419; // w2
  __int64 v420; // x3
  int v421; // w1
  int v422; // w2
  __int64 v423; // x3
  int v424; // w1
  int v425; // w2
  __int64 v426; // x3
  int v427; // w1
  int v428; // w2
  __int64 v429; // x3
  int v430; // w1
  int v431; // w2
  __int64 v432; // x3
  int v433; // w1
  int v434; // w2
  __int64 v435; // x3
  int v436; // w1
  int v437; // w2
  __int64 v438; // x3
  int v439; // w1
  int v440; // w2
  __int64 v441; // x3
  int v442; // w1
  int v443; // w2
  __int64 v444; // x3
  int v445; // w1
  int v446; // w2
  __int64 v447; // x3
  int v448; // w1
  int v449; // w2
  __int64 v450; // x3
  int v451; // w1
  int v452; // w2
  __int64 v453; // x3
  int v454; // w1
  int v455; // w2
  __int64 v456; // x3
  int v457; // w1
  int v458; // w2
  __int64 v459; // x3
  int v460; // w1
  int v461; // w2
  __int64 v462; // x3
  int v463; // w1
  int v464; // w2
  __int64 v465; // x3
  int v466; // w1
  int v467; // w2
  __int64 v468; // x3
  int v469; // w1
  int v470; // w2
  __int64 v471; // x3
  int v472; // w1
  int v473; // w2
  __int64 v474; // x3
  int v475; // w1
  int v476; // w2
  __int64 v477; // x3
  int v478; // w1
  int v479; // w2
  __int64 v480; // x3
  int v481; // w1
  int v482; // w2
  __int64 v483; // x3
  int v484; // w1
  int v485; // w2
  __int64 v486; // x3
  int v487; // w1
  int v488; // w2
  __int64 v489; // x3
  int v490; // w1
  int v491; // w2
  __int64 v492; // x3
  int v493; // w1
  int v494; // w2
  __int64 v495; // x3
  int v496; // w1
  int v497; // w2
  __int64 v498; // x3
  int v499; // w1
  int v500; // w2
  __int64 v501; // x3
  int v502; // w1
  int v503; // w2
  __int64 v504; // x3
  int v505; // w1
  int v506; // w2
  __int64 v507; // x3
  int v508; // w1
  int v509; // w2
  __int64 v510; // x3
  int v511; // w1
  int v512; // w2
  __int64 v513; // x3
  int v514; // w1
  int v515; // w2
  __int64 v516; // x3
  int v517; // w1
  int v518; // w2
  __int64 v519; // x3
  int v520; // w1
  int v521; // w2
  __int64 v522; // x3
  int v523; // w1
  int v524; // w2
  __int64 v525; // x3
  int v526; // w1
  int v527; // w2
  __int64 v528; // x3
  int v529; // w1
  int v530; // w2
  __int64 v531; // x3
  int v532; // w1
  int v533; // w2
  __int64 v534; // x3
  int v535; // w1
  int v536; // w2
  __int64 v537; // x3
  int v538; // w1
  int v539; // w2
  __int64 v540; // x3
  int v541; // w1
  int v542; // w2
  __int64 v543; // x3
  int v544; // w1
  int v545; // w2
  __int64 v546; // x3
  int v547; // w1
  int v548; // w2
  __int64 v549; // x3
  int v550; // w1
  int v551; // w2
  __int64 v552; // x3
  int v553; // w1
  int v554; // w2
  __int64 v555; // x3
  int v556; // w1
  int v557; // w2
  __int64 v558; // x3
  int v559; // w1
  int v560; // w2
  __int64 v561; // x3
  int v562; // w1
  int v563; // w2
  __int64 v564; // x3
  int v565; // w1
  int v566; // w2
  __int64 v567; // x3
  int v568; // w1
  int v569; // w2
  __int64 v570; // x3
  int v571; // w1
  int v572; // w2
  __int64 v573; // x3
  int v574; // w1
  int v575; // w2
  __int64 v576; // x3
  int v577; // w1
  int v578; // w2
  __int64 v579; // x3
  int v580; // w1
  int v581; // w2
  __int64 v582; // x3
  int v583; // w1
  int v584; // w2
  __int64 v585; // x3
  int v586; // w1
  int v587; // w2
  __int64 v588; // x3
  int v589; // w1
  int v590; // w2
  __int64 v591; // x3
  int v592; // w1
  int v593; // w2
  __int64 v594; // x3
  int v595; // w1
  int v596; // w2
  __int64 v597; // x3
  int v598; // w1
  int v599; // w2
  __int64 v600; // x3
  int v601; // w1
  int v602; // w2
  __int64 v603; // x3
  int v604; // w1
  int v605; // w2
  __int64 v606; // x3
  int v607; // w1
  int v608; // w2
  __int64 v609; // x3
  int v610; // w1
  int v611; // w2
  __int64 v612; // x3
  int v613; // w1
  int v614; // w2
  __int64 v615; // x3
  int v616; // w1
  int v617; // w2
  __int64 v618; // x3
  int v619; // w1
  int v620; // w2
  __int64 v621; // x3
  int v622; // w1
  int v623; // w2
  __int64 v624; // x3
  int v625; // w1
  int v626; // w2
  __int64 v627; // x3
  int v628; // w1
  int v629; // w2
  __int64 v630; // x3
  int v631; // w1
  int v632; // w2
  __int64 v633; // x3
  int v634; // w1
  int v635; // w2
  __int64 v636; // x3
  int v637; // w1
  int v638; // w2
  __int64 v639; // x3
  int v640; // w1
  int v641; // w2
  __int64 v642; // x3
  int v643; // w1
  int v644; // w2
  __int64 v645; // x3
  int v646; // w1
  int v647; // w2
  __int64 v648; // x3
  int v649; // w1
  int v650; // w2
  __int64 v651; // x3
  int v652; // w1
  int v653; // w2
  __int64 v654; // x3
  int v655; // w1
  int v656; // w2
  __int64 v657; // x3
  int v658; // w1
  int v659; // w2
  __int64 v660; // x3
  int v661; // w1
  int v662; // w2
  __int64 v663; // x3
  int v664; // w1
  int v665; // w2
  __int64 v666; // x3
  int v667; // w1
  int v668; // w2
  __int64 v669; // x3
  int v670; // w1
  int v671; // w2
  __int64 v672; // x3
  int v673; // w1
  int v674; // w2
  __int64 v675; // x3
  int v676; // w1
  int v677; // w2
  __int64 v678; // x3
  int v679; // w1
  int v680; // w2
  __int64 v681; // x3
  int v682; // w1
  int v683; // w2
  __int64 v684; // x3
  int v685; // w1
  int v686; // w2
  __int64 v687; // x3
  int v688; // w1
  int v689; // w2
  __int64 v690; // x3
  int v691; // w1
  int v692; // w2
  __int64 v693; // x3
  int v694; // w1
  int v695; // w2
  __int64 v696; // x3
  int v697; // w1
  int v698; // w2
  __int64 v699; // x3
  int v700; // w1
  int v701; // w2
  __int64 v702; // x3
  int v703; // w1
  int v704; // w2
  __int64 v705; // x3
  int v706; // w1
  int v707; // w2
  __int64 v708; // x3
  int v709; // w1
  int v710; // w2
  __int64 v711; // x3
  int v712; // w1
  int v713; // w2
  __int64 v714; // x3
  int v715; // w1
  int v716; // w2
  __int64 v717; // x3
  int v718; // w1
  int v719; // w2
  __int64 v720; // x3
  int v721; // w1
  int v722; // w2
  __int64 v723; // x3
  int v724; // w1
  int v725; // w2
  __int64 v726; // x3
  int v727; // w1
  int v728; // w2
  __int64 v729; // x3
  int v730; // w1
  int v731; // w2
  __int64 v732; // x3
  int v733; // w1
  int v734; // w2
  __int64 v735; // x3
  int v736; // w1
  int v737; // w2
  __int64 v738; // x3
  int v739; // w1
  int v740; // w2
  __int64 v741; // x3
  int v742; // w1
  int v743; // w2
  __int64 v744; // x3
  int v745; // w1
  int v746; // w2
  __int64 v747; // x3
  int v748; // w1
  int v749; // w2
  __int64 v750; // x3
  int v751; // w1
  int v752; // w2
  __int64 v753; // x3
  int v754; // w1
  int v755; // w2
  __int64 v756; // x3
  int v757; // w1
  int v758; // w2
  __int64 v759; // x3
  int v760; // w1
  int v761; // w2
  __int64 v762; // x3
  int v763; // w1
  int v764; // w2
  __int64 v765; // x3
  int v766; // w1
  int v767; // w2
  __int64 v768; // x3
  int v769; // w1
  int v770; // w2
  __int64 v771; // x3
  int v772; // w1
  int v773; // w2
  __int64 v774; // x3
  int v775; // w1
  int v776; // w2
  __int64 v777; // x3
  int v778; // w1
  int v779; // w2
  __int64 v780; // x3
  int v781; // w1
  int v782; // w2
  __int64 v783; // x3
  int v784; // w1
  int v785; // w2
  __int64 v786; // x3
  int v787; // w1
  int v788; // w2
  __int64 v789; // x3
  int v790; // w1
  int v791; // w2
  __int64 v792; // x3
  int v793; // w1
  int v794; // w2
  __int64 v795; // x3
  int v796; // w1
  int v797; // w2
  __int64 v798; // x3
  int v799; // w1
  int v800; // w2
  __int64 v801; // x3
  int v802; // w1
  int v803; // w2
  __int64 v804; // x3
  int v805; // w1
  int v806; // w2
  __int64 v807; // x3
  int v808; // w1
  int v809; // w2
  __int64 v810; // x3
  int v811; // w1
  int v812; // w2
  __int64 v813; // x3
  int v814; // w1
  int v815; // w2
  __int64 v816; // x3
  int v817; // w1
  int v818; // w2
  __int64 v819; // x3
  int v820; // w1
  int v821; // w2
  __int64 v822; // x3
  int v823; // w1
  int v824; // w2
  __int64 v825; // x3
  int v826; // w1
  int v827; // w2
  __int64 v828; // x3
  int v829; // w1
  int v830; // w2
  __int64 v831; // x3
  int v832; // w1
  int v833; // w2
  __int64 v834; // x3
  int v835; // w1
  int v836; // w2
  __int64 v837; // x3
  int v838; // w1
  int v839; // w2
  __int64 v840; // x3
  int v841; // w1
  int v842; // w2
  __int64 v843; // x3
  int v844; // w1
  int v845; // w2
  __int64 v846; // x3
  int v847; // w1
  int v848; // w2
  __int64 v849; // x3
  int v850; // w1
  int v851; // w2
  __int64 v852; // x3
  int v853; // w1
  int v854; // w2
  __int64 v855; // x3
  int v856; // w1
  int v857; // w2
  __int64 v858; // x3
  int v859; // w1
  int v860; // w2
  __int64 v861; // x3
  int v862; // w1
  int v863; // w2
  __int64 v864; // x3
  int v865; // w1
  int v866; // w2
  __int64 v867; // x3
  int v868; // w1
  int v869; // w2
  __int64 v870; // x3
  int v871; // w1
  int v872; // w2
  __int64 v873; // x3
  int v874; // w1
  int v875; // w2
  __int64 v876; // x3
  int v877; // w1
  int v878; // w2
  __int64 v879; // x3
  int v880; // w1
  int v881; // w2
  __int64 v882; // x3
  int v883; // w1
  int v884; // w2
  __int64 v885; // x3
  int v886; // w1
  int v887; // w2
  __int64 v888; // x3
  int v889; // w1
  int v890; // w2
  __int64 v891; // x3
  int v892; // w1
  int v893; // w2
  __int64 v894; // x3
  int v895; // w1
  int v896; // w2
  __int64 v897; // x3
  int v898; // w1
  int v899; // w2
  __int64 v900; // x3
  int v901; // w1
  int v902; // w2
  __int64 v903; // x3
  int v904; // w1
  int v905; // w2
  __int64 v906; // x3
  int v907; // w1
  int v908; // w2
  __int64 v909; // x3
  int v910; // w1
  int v911; // w2
  __int64 v912; // x3
  int v913; // w1
  int v914; // w2
  __int64 v915; // x3
  int v916; // w1
  int v917; // w2
  __int64 v918; // x3
  int v919; // w1
  int v920; // w2
  __int64 v921; // x3
  int v922; // w1
  int v923; // w2
  __int64 v924; // x3
  int v925; // w1
  int v926; // w2
  __int64 v927; // x3
  int v928; // w1
  int v929; // w2
  __int64 v930; // x3
  int v931; // w1
  int v932; // w2
  __int64 v933; // x3
  int v934; // w1
  int v935; // w2
  __int64 v936; // x3
  int v937; // w1
  int v938; // w2
  __int64 v939; // x3
  int v940; // w1
  int v941; // w2
  __int64 v942; // x3
  int v943; // w1
  int v944; // w2
  __int64 v945; // x3
  int v946; // w1
  int v947; // w2
  __int64 v948; // x3
  int v949; // w1
  int v950; // w2
  __int64 v951; // x3
  int v952; // w1
  int v953; // w2
  __int64 v954; // x3
  int v955; // w1
  int v956; // w2
  __int64 v957; // x3
  int v958; // w1
  int v959; // w2
  __int64 v960; // x3
  int v961; // w1
  int v962; // w2
  __int64 v963; // x3
  int v964; // w1
  int v965; // w2
  __int64 v966; // x3
  int v967; // w1
  int v968; // w2
  __int64 v969; // x3
  int v970; // w1
  int v971; // w2
  __int64 v972; // x3
  int v973; // w1
  int v974; // w2
  __int64 v975; // x3
  int v976; // w1
  int v977; // w2
  __int64 v978; // x3
  int v979; // w1
  int v980; // w2
  __int64 v981; // x3
  int v982; // w1
  int v983; // w2
  __int64 v984; // x3
  int v985; // w1
  int v986; // w2
  __int64 v987; // x3
  int v988; // w1
  int v989; // w2
  __int64 v990; // x3
  int v991; // w1
  int v992; // w2
  __int64 v993; // x3
  int v994; // w1
  int v995; // w2
  __int64 v996; // x3
  int v997; // w1
  int v998; // w2
  __int64 v999; // x3
  int v1000; // w1
  int v1001; // w2
  __int64 v1002; // x3
  int v1003; // w1
  int v1004; // w2
  __int64 v1005; // x3
  int v1006; // w1
  int v1007; // w2
  __int64 v1008; // x3
  int v1009; // w1
  int v1010; // w2
  __int64 v1011; // x3
  int v1012; // w1
  int v1013; // w2
  __int64 v1014; // x3
  int v1015; // w1
  int v1016; // w2
  __int64 v1017; // x3
  int v1018; // w1
  int v1019; // w2
  __int64 v1020; // x3
  int v1021; // w1
  int v1022; // w2
  __int64 v1023; // x3
  int v1024; // w1
  int v1025; // w2
  __int64 v1026; // x3
  int v1027; // w1
  int v1028; // w2
  __int64 v1029; // x3
  int v1030; // w1
  int v1031; // w2
  __int64 v1032; // x3
  int v1033; // w1
  int v1034; // w2
  __int64 v1035; // x3
  int v1036; // w1
  int v1037; // w2
  __int64 v1038; // x3
  int v1039; // w1
  int v1040; // w2
  __int64 v1041; // x3
  int v1042; // w1
  int v1043; // w2
  __int64 v1044; // x3
  int v1045; // w1
  int v1046; // w2
  __int64 v1047; // x3
  int v1048; // w1
  int v1049; // w2
  __int64 v1050; // x3
  int v1051; // w1
  int v1052; // w2
  __int64 v1053; // x3
  int v1054; // w1
  int v1055; // w2
  __int64 v1056; // x3
  int v1057; // w1
  int v1058; // w2
  __int64 v1059; // x3
  int v1060; // w1
  int v1061; // w2
  __int64 v1062; // x3
  int v1063; // w1
  int v1064; // w2
  __int64 v1065; // x3
  int v1066; // w1
  int v1067; // w2
  __int64 v1068; // x3
  int v1069; // w1
  int v1070; // w2
  __int64 v1071; // x3
  int v1072; // w1
  int v1073; // w2
  __int64 v1074; // x3
  int v1075; // w1
  int v1076; // w2
  __int64 v1077; // x3
  int v1078; // w1
  int v1079; // w2
  __int64 v1080; // x3
  int v1081; // w1
  int v1082; // w2
  __int64 v1083; // x3
  int v1084; // w1
  int v1085; // w2
  __int64 v1086; // x3
  int v1087; // w1
  int v1088; // w2
  __int64 v1089; // x3
  int v1090; // w1
  int v1091; // w2
  __int64 v1092; // x3
  int v1093; // w1
  int v1094; // w2
  __int64 v1095; // x3
  int v1096; // w1
  int v1097; // w2
  __int64 v1098; // x3
  int v1099; // w1
  int v1100; // w2
  __int64 v1101; // x3
  int v1102; // w1
  int v1103; // w2
  __int64 v1104; // x3
  int v1105; // w1
  int v1106; // w2
  __int64 v1107; // x3
  int v1108; // w1
  int v1109; // w2
  __int64 v1110; // x3
  int v1111; // w1
  int v1112; // w2
  __int64 v1113; // x3
  int v1114; // w1
  int v1115; // w2
  __int64 v1116; // x3
  int v1117; // w1
  int v1118; // w2
  __int64 v1119; // x3
  int v1120; // w1
  int v1121; // w2
  __int64 v1122; // x3
  int v1123; // w1
  int v1124; // w2
  __int64 v1125; // x3
  int v1126; // w1
  int v1127; // w2
  __int64 v1128; // x3
  int v1129; // w1
  int v1130; // w2
  __int64 v1131; // x3
  int v1132; // w1
  int v1133; // w2
  __int64 v1134; // x3
  int v1135; // w1
  int v1136; // w2
  __int64 v1137; // x3
  int v1138; // w1
  int v1139; // w2
  __int64 v1140; // x3
  int v1141; // w1
  int v1142; // w2
  __int64 v1143; // x3
  int v1144; // w1
  int v1145; // w2
  __int64 v1146; // x3
  int v1147; // w1
  int v1148; // w2
  __int64 v1149; // x3
  int v1150; // w1
  int v1151; // w2
  __int64 v1152; // x3
  int v1153; // w1
  int v1154; // w2
  __int64 v1155; // x3
  int v1156; // w1
  int v1157; // w2
  __int64 v1158; // x3
  int v1159; // w1
  int v1160; // w2
  __int64 v1161; // x3
  int v1162; // w1
  int v1163; // w2
  __int64 v1164; // x3
  int v1165; // w1
  int v1166; // w2
  __int64 v1167; // x3
  int v1168; // w1
  int v1169; // w2
  __int64 v1170; // x3
  int v1171; // w1
  int v1172; // w2
  __int64 v1173; // x3
  int v1174; // w1
  int v1175; // w2
  __int64 v1176; // x3
  int v1177; // w1
  int v1178; // w2
  __int64 v1179; // x3
  int v1180; // w1
  int v1181; // w2
  __int64 v1182; // x3
  int v1183; // w1
  int v1184; // w2
  __int64 v1185; // x3
  int v1186; // w1
  int v1187; // w2
  __int64 v1188; // x3
  int v1189; // w1
  int v1190; // w2
  __int64 v1191; // x3
  int v1192; // w1
  int v1193; // w2
  __int64 v1194; // x3
  int v1195; // w1
  int v1196; // w2
  __int64 v1197; // x3
  int v1198; // w1
  int v1199; // w2
  __int64 v1200; // x3
  int v1201; // w1
  int v1202; // w2
  __int64 v1203; // x3
  int v1204; // w1
  int v1205; // w2
  __int64 v1206; // x3
  int v1207; // w1
  int v1208; // w2
  __int64 v1209; // x3
  int v1210; // w1
  int v1211; // w2
  __int64 v1212; // x3
  int v1213; // w1
  int v1214; // w2
  __int64 v1215; // x3
  int v1216; // w1
  int v1217; // w2
  __int64 v1218; // x3
  int v1219; // w1
  int v1220; // w2
  __int64 v1221; // x3
  int v1222; // w1
  int v1223; // w2
  __int64 v1224; // x3
  int v1225; // w1
  int v1226; // w2
  __int64 v1227; // x3
  int v1228; // w1
  int v1229; // w2
  __int64 v1230; // x3
  int v1231; // w1
  int v1232; // w2
  __int64 v1233; // x3
  int v1234; // w1
  int v1235; // w2
  __int64 v1236; // x3
  int v1237; // w1
  int v1238; // w2
  __int64 v1239; // x3
  int v1240; // w1
  int v1241; // w2
  __int64 v1242; // x3
  int v1243; // w1
  int v1244; // w2
  __int64 v1245; // x3
  int v1246; // w1
  int v1247; // w2
  __int64 v1248; // x3
  int v1249; // w1
  int v1250; // w2
  __int64 v1251; // x3
  int v1252; // w1
  int v1253; // w2
  __int64 v1254; // x3
  int v1255; // w1
  int v1256; // w2
  __int64 v1257; // x3
  int v1258; // w1
  int v1259; // w2
  __int64 v1260; // x3
  int v1261; // w1
  int v1262; // w2
  __int64 v1263; // x3
  int v1264; // w1
  int v1265; // w2
  __int64 v1266; // x3
  int v1267; // w1
  int v1268; // w2
  __int64 v1269; // x3
  int v1270; // w1
  int v1271; // w2
  __int64 v1272; // x3
  int v1273; // w1
  int v1274; // w2
  __int64 v1275; // x3
  int v1276; // w1
  int v1277; // w2
  __int64 v1278; // x3
  int v1279; // w1
  int v1280; // w2
  __int64 v1281; // x3
  int v1282; // w1
  int v1283; // w2
  __int64 v1284; // x3
  int v1285; // w1
  int v1286; // w2
  __int64 v1287; // x3
  int v1288; // w1
  int v1289; // w2
  __int64 v1290; // x3
  int v1291; // w1
  int v1292; // w2
  __int64 v1293; // x3
  int v1294; // w1
  int v1295; // w2
  __int64 v1296; // x3
  int v1297; // w1
  int v1298; // w2
  __int64 v1299; // x3
  int v1300; // w1
  int v1301; // w2
  __int64 v1302; // x3
  int v1303; // w1
  int v1304; // w2
  __int64 v1305; // x3
  int v1306; // w1
  int v1307; // w2
  __int64 v1308; // x3
  int v1309; // w1
  int v1310; // w2
  __int64 v1311; // x3
  int v1312; // w1
  int v1313; // w2
  __int64 v1314; // x3
  int v1315; // w1
  int v1316; // w2
  __int64 v1317; // x3
  int v1318; // w1
  int v1319; // w2
  __int64 v1320; // x3
  int v1321; // w1
  int v1322; // w2
  __int64 v1323; // x3
  int v1324; // w1
  int v1325; // w2
  __int64 v1326; // x3
  int v1327; // w1
  int v1328; // w2
  __int64 v1329; // x3
  int v1330; // w1
  int v1331; // w2
  __int64 v1332; // x3
  int v1333; // w1
  int v1334; // w2
  __int64 v1335; // x3
  int v1336; // w1
  int v1337; // w2
  __int64 v1338; // x3
  int v1339; // w1
  int v1340; // w2
  __int64 v1341; // x3
  int v1342; // w1
  int v1343; // w2
  __int64 v1344; // x3
  int v1345; // w1
  int v1346; // w2
  __int64 v1347; // x3
  int v1348; // w1
  int v1349; // w2
  __int64 v1350; // x3
  int v1351; // w1
  int v1352; // w2
  __int64 v1353; // x3
  int v1354; // w1
  int v1355; // w2
  __int64 v1356; // x3
  int v1357; // w1
  int v1358; // w2
  __int64 v1359; // x3
  int v1360; // w1
  int v1361; // w2
  __int64 v1362; // x3
  int v1363; // w1
  int v1364; // w2
  __int64 v1365; // x3
  int v1366; // w1
  int v1367; // w2
  __int64 v1368; // x3
  int v1369; // w1
  int v1370; // w2
  __int64 v1371; // x3
  int v1372; // w1
  int v1373; // w2
  __int64 v1374; // x3
  int v1375; // w1
  int v1376; // w2
  __int64 v1377; // x3
  int v1378; // w1
  int v1379; // w2
  __int64 v1380; // x3
  int v1381; // w1
  int v1382; // w2
  __int64 v1383; // x3
  int v1384; // w1
  int v1385; // w2
  __int64 v1386; // x3
  int v1387; // w1
  int v1388; // w2
  __int64 v1389; // x3
  int v1390; // w1
  int v1391; // w2
  __int64 v1392; // x3
  int v1393; // w1
  int v1394; // w2
  __int64 v1395; // x3
  int v1396; // w1
  int v1397; // w2
  __int64 v1398; // x3
  int v1399; // w1
  int v1400; // w2
  __int64 v1401; // x3
  int v1402; // w1
  int v1403; // w2
  __int64 v1404; // x3
  int v1405; // w1
  int v1406; // w2
  __int64 v1407; // x3
  int v1408; // w1
  int v1409; // w2
  __int64 v1410; // x3
  int v1411; // w1
  int v1412; // w2
  __int64 v1413; // x3
  int v1414; // w1
  int v1415; // w2
  __int64 v1416; // x3
  int v1417; // w1
  int v1418; // w2
  __int64 v1419; // x3
  int v1420; // w1
  int v1421; // w2
  __int64 v1422; // x3
  int v1423; // w1
  int v1424; // w2
  __int64 v1425; // x3
  int v1426; // w1
  int v1427; // w2
  __int64 v1428; // x3
  int v1429; // w1
  int v1430; // w2
  __int64 v1431; // x3
  int v1432; // w1
  int v1433; // w2
  __int64 v1434; // x3
  int v1435; // w1
  int v1436; // w2
  __int64 v1437; // x3
  int v1438; // w1
  int v1439; // w2
  __int64 v1440; // x3
  int v1441; // w1
  int v1442; // w2
  __int64 v1443; // x3
  int v1444; // w1
  int v1445; // w2
  __int64 v1446; // x3
  int v1447; // w1
  int v1448; // w2
  __int64 v1449; // x3
  int v1450; // w1
  int v1451; // w2
  __int64 v1452; // x3
  int v1453; // w1
  int v1454; // w2
  __int64 v1455; // x3
  DataMasterBase_array *v1456; // x19
  ServantMaster_o *v1457; // x20
  __int64 v1458; // x0
  __int64 v1459; // x1
  System_String_array **v1460; // x2
  System_String_array **v1461; // x3
  System_Boolean_array **v1462; // x4
  System_Int32_array **v1463; // x5
  System_Int32_array *v1464; // x6
  System_Int32_array *v1465; // x7
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v1467; // x20
  System_String_array **v1468; // x2
  System_String_array **v1469; // x3
  System_Boolean_array **v1470; // x4
  System_Int32_array **v1471; // x5
  System_Int32_array *v1472; // x6
  System_Int32_array *v1473; // x7
  ServantCommentMaster_o *v1474; // x20
  System_String_array **v1475; // x2
  System_String_array **v1476; // x3
  System_Boolean_array **v1477; // x4
  System_Int32_array **v1478; // x5
  System_Int32_array *v1479; // x6
  System_Int32_array *v1480; // x7
  ServantProfileMaster_o *v1481; // x20
  System_String_array **v1482; // x2
  System_String_array **v1483; // x3
  System_Boolean_array **v1484; // x4
  System_Int32_array **v1485; // x5
  System_Int32_array *v1486; // x6
  System_Int32_array *v1487; // x7
  WarMaster_o *v1488; // x20
  System_String_array **v1489; // x2
  System_String_array **v1490; // x3
  System_Boolean_array **v1491; // x4
  System_Int32_array **v1492; // x5
  System_Int32_array *v1493; // x6
  System_Int32_array *v1494; // x7
  UserMaster_o *v1495; // x20
  System_String_array **v1496; // x2
  System_String_array **v1497; // x3
  System_Boolean_array **v1498; // x4
  System_Int32_array **v1499; // x5
  System_Int32_array *v1500; // x6
  System_Int32_array *v1501; // x7
  UserGameMaster_o *v1502; // x20
  System_String_array **v1503; // x2
  System_String_array **v1504; // x3
  System_Boolean_array **v1505; // x4
  System_Int32_array **v1506; // x5
  System_Int32_array *v1507; // x6
  System_Int32_array *v1508; // x7
  TblUserMaster_o *v1509; // x20
  System_String_array **v1510; // x2
  System_String_array **v1511; // x3
  System_Boolean_array **v1512; // x4
  System_Int32_array **v1513; // x5
  System_Int32_array *v1514; // x6
  System_Int32_array *v1515; // x7
  UserItemMaster_o *v1516; // x20
  System_String_array **v1517; // x2
  System_String_array **v1518; // x3
  System_Boolean_array **v1519; // x4
  System_Int32_array **v1520; // x5
  System_Int32_array *v1521; // x6
  System_Int32_array *v1522; // x7
  UserServantMaster_o *v1523; // x20
  System_String_array **v1524; // x2
  System_String_array **v1525; // x3
  System_Boolean_array **v1526; // x4
  System_Int32_array **v1527; // x5
  System_Int32_array *v1528; // x6
  System_Int32_array *v1529; // x7
  UserServantStorageMaster_o *v1530; // x20
  System_String_array **v1531; // x2
  System_String_array **v1532; // x3
  System_Boolean_array **v1533; // x4
  System_Int32_array **v1534; // x5
  System_Int32_array *v1535; // x6
  System_Int32_array *v1536; // x7
  UserAccessaryMaster_o *v1537; // x20
  System_String_array **v1538; // x2
  System_String_array **v1539; // x3
  System_Boolean_array **v1540; // x4
  System_Int32_array **v1541; // x5
  System_Int32_array *v1542; // x6
  System_Int32_array *v1543; // x7
  UserQuestMaster_o *v1544; // x20
  System_String_array **v1545; // x2
  System_String_array **v1546; // x3
  System_Boolean_array **v1547; // x4
  System_Int32_array **v1548; // x5
  System_Int32_array *v1549; // x6
  System_Int32_array *v1550; // x7
  BattleMaster_o *v1551; // x20
  System_String_array **v1552; // x2
  System_String_array **v1553; // x3
  System_Boolean_array **v1554; // x4
  System_Int32_array **v1555; // x5
  System_Int32_array *v1556; // x6
  System_Int32_array *v1557; // x7
  OtherUserGameMaster_o *v1558; // x20
  System_String_array **v1559; // x2
  System_String_array **v1560; // x3
  System_Boolean_array **v1561; // x4
  System_Int32_array **v1562; // x5
  System_Int32_array *v1563; // x6
  System_Int32_array *v1564; // x7
  TblFriendMaster_o *v1565; // x20
  System_String_array **v1566; // x2
  System_String_array **v1567; // x3
  System_Boolean_array **v1568; // x4
  System_Int32_array **v1569; // x5
  System_Int32_array *v1570; // x6
  System_Int32_array *v1571; // x7
  AreaMaster_o *v1572; // x20
  System_String_array **v1573; // x2
  System_String_array **v1574; // x3
  System_Boolean_array **v1575; // x4
  System_Int32_array **v1576; // x5
  System_Int32_array *v1577; // x6
  System_Int32_array *v1578; // x7
  ServantCardMaster_o *v1579; // x20
  System_String_array **v1580; // x2
  System_String_array **v1581; // x3
  System_Boolean_array **v1582; // x4
  System_Int32_array **v1583; // x5
  System_Int32_array *v1584; // x6
  System_Int32_array *v1585; // x7
  EventMaster_o *v1586; // x20
  System_String_array **v1587; // x2
  System_String_array **v1588; // x3
  System_Boolean_array **v1589; // x4
  System_Int32_array **v1590; // x5
  System_Int32_array *v1591; // x6
  System_Int32_array *v1592; // x7
  ItemMaster_o *v1593; // x20
  System_String_array **v1594; // x2
  System_String_array **v1595; // x3
  System_Boolean_array **v1596; // x4
  System_Int32_array **v1597; // x5
  System_Int32_array *v1598; // x6
  System_Int32_array *v1599; // x7
  QuestMaster_o *v1600; // x20
  System_String_array **v1601; // x2
  System_String_array **v1602; // x3
  System_Boolean_array **v1603; // x4
  System_Int32_array **v1604; // x5
  System_Int32_array *v1605; // x6
  System_Int32_array *v1606; // x7
  QuestAddMaster_o *v1607; // x20
  System_String_array **v1608; // x2
  System_String_array **v1609; // x3
  System_Boolean_array **v1610; // x4
  System_Int32_array **v1611; // x5
  System_Int32_array *v1612; // x6
  System_Int32_array *v1613; // x7
  QuestReleaseMaster_o *v1614; // x20
  System_String_array **v1615; // x2
  System_String_array **v1616; // x3
  System_Boolean_array **v1617; // x4
  System_Int32_array **v1618; // x5
  System_Int32_array *v1619; // x6
  System_Int32_array *v1620; // x7
  QuestDateRangeMaster_o *v1621; // x20
  System_String_array **v1622; // x2
  System_String_array **v1623; // x3
  System_Boolean_array **v1624; // x4
  System_Int32_array **v1625; // x5
  System_Int32_array *v1626; // x6
  System_Int32_array *v1627; // x7
  QuestPhaseMaster_o *v1628; // x20
  System_String_array **v1629; // x2
  System_String_array **v1630; // x3
  System_Boolean_array **v1631; // x4
  System_Int32_array **v1632; // x5
  System_Int32_array *v1633; // x6
  System_Int32_array *v1634; // x7
  QuestPhaseDetailMaster_o *v1635; // x20
  System_String_array **v1636; // x2
  System_String_array **v1637; // x3
  System_Boolean_array **v1638; // x4
  System_Int32_array **v1639; // x5
  System_Int32_array *v1640; // x6
  System_Int32_array *v1641; // x7
  QuestGroupMaster_o *v1642; // x20
  System_String_array **v1643; // x2
  System_String_array **v1644; // x3
  System_Boolean_array **v1645; // x4
  System_Int32_array **v1646; // x5
  System_Int32_array *v1647; // x6
  System_Int32_array *v1648; // x7
  QuestRandomGroupMaster_o *v1649; // x20
  System_String_array **v1650; // x2
  System_String_array **v1651; // x3
  System_Boolean_array **v1652; // x4
  System_Int32_array **v1653; // x5
  System_Int32_array *v1654; // x6
  System_Int32_array *v1655; // x7
  QuestConsumeItemMaster_o *v1656; // x20
  System_String_array **v1657; // x2
  System_String_array **v1658; // x3
  System_Boolean_array **v1659; // x4
  System_Int32_array **v1660; // x5
  System_Int32_array *v1661; // x6
  System_Int32_array *v1662; // x7
  QuestMessageMaster_o *v1663; // x20
  System_String_array **v1664; // x2
  System_String_array **v1665; // x3
  System_Boolean_array **v1666; // x4
  System_Int32_array **v1667; // x5
  System_Int32_array *v1668; // x6
  System_Int32_array *v1669; // x7
  UserQuestInfoMaster_o *v1670; // x20
  System_String_array **v1671; // x2
  System_String_array **v1672; // x3
  System_Boolean_array **v1673; // x4
  System_Int32_array **v1674; // x5
  System_Int32_array *v1675; // x6
  System_Int32_array *v1676; // x7
  UserQuestRecordMaster_o *v1677; // x20
  System_String_array **v1678; // x2
  System_String_array **v1679; // x3
  System_Boolean_array **v1680; // x4
  System_Int32_array **v1681; // x5
  System_Int32_array *v1682; // x6
  System_Int32_array *v1683; // x7
  ViewQuestInfoMaster_o *v1684; // x20
  System_String_array **v1685; // x2
  System_String_array **v1686; // x3
  System_Boolean_array **v1687; // x4
  System_Int32_array **v1688; // x5
  System_Int32_array *v1689; // x6
  System_Int32_array *v1690; // x7
  ViewEnemyMaster_o *v1691; // x20
  System_String_array **v1692; // x2
  System_String_array **v1693; // x3
  System_Boolean_array **v1694; // x4
  System_Int32_array **v1695; // x5
  System_Int32_array *v1696; // x6
  System_Int32_array *v1697; // x7
  ViewQuestEnemyInfoMaster_o *v1698; // x20
  System_String_array **v1699; // x2
  System_String_array **v1700; // x3
  System_Boolean_array **v1701; // x4
  System_Int32_array **v1702; // x5
  System_Int32_array *v1703; // x6
  System_Int32_array *v1704; // x7
  BlankEarthSpotMaster_o *v1705; // x20
  System_String_array **v1706; // x2
  System_String_array **v1707; // x3
  System_Boolean_array **v1708; // x4
  System_Int32_array **v1709; // x5
  System_Int32_array *v1710; // x6
  System_Int32_array *v1711; // x7
  BlankEarthSpotAddMaster_o *v1712; // x20
  System_String_array **v1713; // x2
  System_String_array **v1714; // x3
  System_Boolean_array **v1715; // x4
  System_Int32_array **v1716; // x5
  System_Int32_array *v1717; // x6
  System_Int32_array *v1718; // x7
  SpotMaster_o *v1719; // x20
  System_String_array **v1720; // x2
  System_String_array **v1721; // x3
  System_Boolean_array **v1722; // x4
  System_Int32_array **v1723; // x5
  System_Int32_array *v1724; // x6
  System_Int32_array *v1725; // x7
  SpotImageMaster_o *v1726; // x20
  System_String_array **v1727; // x2
  System_String_array **v1728; // x3
  System_Boolean_array **v1729; // x4
  System_Int32_array **v1730; // x5
  System_Int32_array *v1731; // x6
  System_Int32_array *v1732; // x7
  SpotRoadMaster_o *v1733; // x20
  System_String_array **v1734; // x2
  System_String_array **v1735; // x3
  System_Boolean_array **v1736; // x4
  System_Int32_array **v1737; // x5
  System_Int32_array *v1738; // x6
  System_Int32_array *v1739; // x7
  SpotPathMaster_o *v1740; // x20
  System_String_array **v1741; // x2
  System_String_array **v1742; // x3
  System_Boolean_array **v1743; // x4
  System_Int32_array **v1744; // x5
  System_Int32_array *v1745; // x6
  System_Int32_array *v1746; // x7
  SpotAddMaster_o *v1747; // x20
  System_String_array **v1748; // x2
  System_String_array **v1749; // x3
  System_Boolean_array **v1750; // x4
  System_Int32_array **v1751; // x5
  System_Int32_array *v1752; // x6
  System_Int32_array *v1753; // x7
  MapGimmickMaster_o *v1754; // x20
  System_String_array **v1755; // x2
  System_String_array **v1756; // x3
  System_Boolean_array **v1757; // x4
  System_Int32_array **v1758; // x5
  System_Int32_array *v1759; // x6
  System_Int32_array *v1760; // x7
  GiftMaster_o *v1761; // x20
  System_String_array **v1762; // x2
  System_String_array **v1763; // x3
  System_Boolean_array **v1764; // x4
  System_Int32_array **v1765; // x5
  System_Int32_array *v1766; // x6
  System_Int32_array *v1767; // x7
  GiftAddMaster_o *v1768; // x20
  System_String_array **v1769; // x2
  System_String_array **v1770; // x3
  System_Boolean_array **v1771; // x4
  System_Int32_array **v1772; // x5
  System_Int32_array *v1773; // x6
  System_Int32_array *v1774; // x7
  ShopMaster_o *v1775; // x20
  System_String_array **v1776; // x2
  System_String_array **v1777; // x3
  System_Boolean_array **v1778; // x4
  System_Int32_array **v1779; // x5
  System_Int32_array *v1780; // x6
  System_Int32_array *v1781; // x7
  StoneShopMaster_o *v1782; // x20
  System_String_array **v1783; // x2
  System_String_array **v1784; // x3
  System_Boolean_array **v1785; // x4
  System_Int32_array **v1786; // x5
  System_Int32_array *v1787; // x6
  System_Int32_array *v1788; // x7
  BankShopMaster_o *v1789; // x20
  System_String_array **v1790; // x2
  System_String_array **v1791; // x3
  System_Boolean_array **v1792; // x4
  System_Int32_array **v1793; // x5
  System_Int32_array *v1794; // x6
  System_Int32_array *v1795; // x7
  ShopScriptMaster_o *v1796; // x20
  System_String_array **v1797; // x2
  System_String_array **v1798; // x3
  System_Boolean_array **v1799; // x4
  System_Int32_array **v1800; // x5
  System_Int32_array *v1801; // x6
  System_Int32_array *v1802; // x7
  StageMaster_o *v1803; // x20
  System_String_array **v1804; // x2
  System_String_array **v1805; // x3
  System_Boolean_array **v1806; // x4
  System_Int32_array **v1807; // x5
  System_Int32_array *v1808; // x6
  System_Int32_array *v1809; // x7
  ServantGroupMaster_o *v1810; // x20
  System_String_array **v1811; // x2
  System_String_array **v1812; // x3
  System_Boolean_array **v1813; // x4
  System_Int32_array **v1814; // x5
  System_Int32_array *v1815; // x6
  System_Int32_array *v1816; // x7
  ServantLimitMaster_o *v1817; // x20
  System_String_array **v1818; // x2
  System_String_array **v1819; // x3
  System_Boolean_array **v1820; // x4
  System_Int32_array **v1821; // x5
  System_Int32_array *v1822; // x6
  System_Int32_array *v1823; // x7
  ServantLimitAddMaster_o *v1824; // x20
  System_String_array **v1825; // x2
  System_String_array **v1826; // x3
  System_Boolean_array **v1827; // x4
  System_Int32_array **v1828; // x5
  System_Int32_array *v1829; // x6
  System_Int32_array *v1830; // x7
  ServantSkillMaster_o *v1831; // x20
  System_String_array **v1832; // x2
  System_String_array **v1833; // x3
  System_Boolean_array **v1834; // x4
  System_Int32_array **v1835; // x5
  System_Int32_array *v1836; // x6
  System_Int32_array *v1837; // x7
  ServantPassiveSkillMaster_o *v1838; // x20
  System_String_array **v1839; // x2
  System_String_array **v1840; // x3
  System_Boolean_array **v1841; // x4
  System_Int32_array **v1842; // x5
  System_Int32_array *v1843; // x6
  System_Int32_array *v1844; // x7
  BgmMaster_o *v1845; // x20
  System_String_array **v1846; // x2
  System_String_array **v1847; // x3
  System_Boolean_array **v1848; // x4
  System_Int32_array **v1849; // x5
  System_Int32_array *v1850; // x6
  System_Int32_array *v1851; // x7
  ServantScriptMaster_o *v1852; // x20
  System_String_array **v1853; // x2
  System_String_array **v1854; // x3
  System_Boolean_array **v1855; // x4
  System_Int32_array **v1856; // x5
  System_Int32_array *v1857; // x6
  System_Int32_array *v1858; // x7
  NewsMaster_o *v1859; // x20
  System_String_array **v1860; // x2
  System_String_array **v1861; // x3
  System_Boolean_array **v1862; // x4
  System_Int32_array **v1863; // x5
  System_Int32_array *v1864; // x6
  System_Int32_array *v1865; // x7
  TelopMaster_o *v1866; // x20
  System_String_array **v1867; // x2
  System_String_array **v1868; // x3
  System_Boolean_array **v1869; // x4
  System_Int32_array **v1870; // x5
  System_Int32_array *v1871; // x6
  System_Int32_array *v1872; // x7
  UserExpMaster_o *v1873; // x20
  System_String_array **v1874; // x2
  System_String_array **v1875; // x3
  System_Boolean_array **v1876; // x4
  System_Int32_array **v1877; // x5
  System_Int32_array *v1878; // x6
  System_Int32_array *v1879; // x7
  TreasureDvcMaster_o *v1880; // x20
  System_String_array **v1881; // x2
  System_String_array **v1882; // x3
  System_Boolean_array **v1883; // x4
  System_Int32_array **v1884; // x5
  System_Int32_array *v1885; // x6
  System_Int32_array *v1886; // x7
  ServantTreasureDvcMaster_o *v1887; // x20
  System_String_array **v1888; // x2
  System_String_array **v1889; // x3
  System_Boolean_array **v1890; // x4
  System_Int32_array **v1891; // x5
  System_Int32_array *v1892; // x6
  System_Int32_array *v1893; // x7
  SkillMaster_o *v1894; // x20
  System_String_array **v1895; // x2
  System_String_array **v1896; // x3
  System_Boolean_array **v1897; // x4
  System_Int32_array **v1898; // x5
  System_Int32_array *v1899; // x6
  System_Int32_array *v1900; // x7
  SkillLvMaster_o *v1901; // x20
  System_String_array **v1902; // x2
  System_String_array **v1903; // x3
  System_Boolean_array **v1904; // x4
  System_Int32_array **v1905; // x5
  System_Int32_array *v1906; // x6
  System_Int32_array *v1907; // x7
  SkillDetailMaster_o *v1908; // x20
  System_String_array **v1909; // x2
  System_String_array **v1910; // x3
  System_Boolean_array **v1911; // x4
  System_Int32_array **v1912; // x5
  System_Int32_array *v1913; // x6
  System_Int32_array *v1914; // x7
  CommandSpellMaster_o *v1915; // x20
  System_String_array **v1916; // x2
  System_String_array **v1917; // x3
  System_Boolean_array **v1918; // x4
  System_Int32_array **v1919; // x5
  System_Int32_array *v1920; // x6
  System_Int32_array *v1921; // x7
  EquipMaster_o *v1922; // x20
  System_String_array **v1923; // x2
  System_String_array **v1924; // x3
  System_Boolean_array **v1925; // x4
  System_Int32_array **v1926; // x5
  System_Int32_array *v1927; // x6
  System_Int32_array *v1928; // x7
  EquipExpMaster_o *v1929; // x20
  System_String_array **v1930; // x2
  System_String_array **v1931; // x3
  System_Boolean_array **v1932; // x4
  System_Int32_array **v1933; // x5
  System_Int32_array *v1934; // x6
  System_Int32_array *v1935; // x7
  EquipSkillMaster_o *v1936; // x20
  System_String_array **v1937; // x2
  System_String_array **v1938; // x3
  System_Boolean_array **v1939; // x4
  System_Int32_array **v1940; // x5
  System_Int32_array *v1941; // x6
  System_Int32_array *v1942; // x7
  SubEquipMaster_o *v1943; // x20
  System_String_array **v1944; // x2
  System_String_array **v1945; // x3
  System_Boolean_array **v1946; // x4
  System_Int32_array **v1947; // x5
  System_Int32_array *v1948; // x6
  System_Int32_array *v1949; // x7
  AccessaryMaster_o *v1950; // x20
  System_String_array **v1951; // x2
  System_String_array **v1952; // x3
  System_Boolean_array **v1953; // x4
  System_Int32_array **v1954; // x5
  System_Int32_array *v1955; // x6
  System_Int32_array *v1956; // x7
  UserPresentBoxMaster_o *v1957; // x20
  System_String_array **v1958; // x2
  System_String_array **v1959; // x3
  System_Boolean_array **v1960; // x4
  System_Int32_array **v1961; // x5
  System_Int32_array *v1962; // x6
  System_Int32_array *v1963; // x7
  UserDeckMaster_o *v1964; // x20
  System_String_array **v1965; // x2
  System_String_array **v1966; // x3
  System_Boolean_array **v1967; // x4
  System_Int32_array **v1968; // x5
  System_Int32_array *v1969; // x6
  System_Int32_array *v1970; // x7
  UserSubEquipMaster_o *v1971; // x20
  System_String_array **v1972; // x2
  System_String_array **v1973; // x3
  System_Boolean_array **v1974; // x4
  System_Int32_array **v1975; // x5
  System_Int32_array *v1976; // x6
  System_Int32_array *v1977; // x7
  GachaMaster_o *v1978; // x20
  System_String_array **v1979; // x2
  System_String_array **v1980; // x3
  System_Boolean_array **v1981; // x4
  System_Int32_array **v1982; // x5
  System_Int32_array *v1983; // x6
  System_Int32_array *v1984; // x7
  GachaImageMaster_o *v1985; // x20
  System_String_array **v1986; // x2
  System_String_array **v1987; // x3
  System_Boolean_array **v1988; // x4
  System_Int32_array **v1989; // x5
  System_Int32_array *v1990; // x6
  System_Int32_array *v1991; // x7
  UserGachaMaster_o *v1992; // x20
  System_String_array **v1993; // x2
  System_String_array **v1994; // x3
  System_Boolean_array **v1995; // x4
  System_Int32_array **v1996; // x5
  System_Int32_array *v1997; // x6
  System_Int32_array *v1998; // x7
  UserEquipMaster_o *v1999; // x20
  System_String_array **v2000; // x2
  System_String_array **v2001; // x3
  System_Boolean_array **v2002; // x4
  System_Int32_array **v2003; // x5
  System_Int32_array *v2004; // x6
  System_Int32_array *v2005; // x7
  UserServantCollectionMaster_o *v2006; // x20
  System_String_array **v2007; // x2
  System_String_array **v2008; // x3
  System_Boolean_array **v2009; // x4
  System_Int32_array **v2010; // x5
  System_Int32_array *v2011; // x6
  System_Int32_array *v2012; // x7
  FriendshipMaster_o *v2013; // x20
  System_String_array **v2014; // x2
  System_String_array **v2015; // x3
  System_Boolean_array **v2016; // x4
  System_Int32_array **v2017; // x5
  System_Int32_array *v2018; // x6
  System_Int32_array *v2019; // x7
  GachaTicketMaster_o *v2020; // x20
  System_String_array **v2021; // x2
  System_String_array **v2022; // x3
  System_Boolean_array **v2023; // x4
  System_Int32_array **v2024; // x5
  System_Int32_array *v2025; // x6
  System_Int32_array *v2026; // x7
  UserFormationMaster_o *v2027; // x20
  System_String_array **v2028; // x2
  System_String_array **v2029; // x3
  System_Boolean_array **v2030; // x4
  System_Int32_array **v2031; // x5
  System_Int32_array *v2032; // x6
  System_Int32_array *v2033; // x7
  FunctionMaster_o *v2034; // x20
  System_String_array **v2035; // x2
  System_String_array **v2036; // x3
  System_Boolean_array **v2037; // x4
  System_Int32_array **v2038; // x5
  System_Int32_array *v2039; // x6
  System_Int32_array *v2040; // x7
  BuffMaster_o *v2041; // x20
  System_String_array **v2042; // x2
  System_String_array **v2043; // x3
  System_Boolean_array **v2044; // x4
  System_Int32_array **v2045; // x5
  System_Int32_array *v2046; // x6
  System_Int32_array *v2047; // x7
  GachaReleaseMaster_o *v2048; // x20
  System_String_array **v2049; // x2
  System_String_array **v2050; // x3
  System_Boolean_array **v2051; // x4
  System_Int32_array **v2052; // x5
  System_Int32_array *v2053; // x6
  System_Int32_array *v2054; // x7
  CombineQpMaster_o *v2055; // x20
  System_String_array **v2056; // x2
  System_String_array **v2057; // x3
  System_Boolean_array **v2058; // x4
  System_Int32_array **v2059; // x5
  System_Int32_array *v2060; // x6
  System_Int32_array *v2061; // x7
  CombineMaterialMaster_o *v2062; // x20
  System_String_array **v2063; // x2
  System_String_array **v2064; // x3
  System_Boolean_array **v2065; // x4
  System_Int32_array **v2066; // x5
  System_Int32_array *v2067; // x6
  System_Int32_array *v2068; // x7
  EventCombineMaster_o *v2069; // x20
  System_String_array **v2070; // x2
  System_String_array **v2071; // x3
  System_Boolean_array **v2072; // x4
  System_Int32_array **v2073; // x5
  System_Int32_array *v2074; // x6
  System_Int32_array *v2075; // x7
  ServantExpMaster_o *v2076; // x20
  System_String_array **v2077; // x2
  System_String_array **v2078; // x3
  System_Boolean_array **v2079; // x4
  System_Int32_array **v2080; // x5
  System_Int32_array *v2081; // x6
  System_Int32_array *v2082; // x7
  CombineSkillMaster_o *v2083; // x20
  System_String_array **v2084; // x2
  System_String_array **v2085; // x3
  System_Boolean_array **v2086; // x4
  System_Int32_array **v2087; // x5
  System_Int32_array *v2088; // x6
  System_Int32_array *v2089; // x7
  CombineTdMaster_o *v2090; // x20
  System_String_array **v2091; // x2
  System_String_array **v2092; // x3
  System_Boolean_array **v2093; // x4
  System_Int32_array **v2094; // x5
  System_Int32_array *v2095; // x6
  System_Int32_array *v2096; // x7
  EventQuestMaster_o *v2097; // x20
  System_String_array **v2098; // x2
  System_String_array **v2099; // x3
  System_Boolean_array **v2100; // x4
  System_Int32_array **v2101; // x5
  System_Int32_array *v2102; // x6
  System_Int32_array *v2103; // x7
  EventCampaignMaster_o *v2104; // x20
  System_String_array **v2105; // x2
  System_String_array **v2106; // x3
  System_Boolean_array **v2107; // x4
  System_Int32_array **v2108; // x5
  System_Int32_array *v2109; // x6
  System_Int32_array *v2110; // x7
  IllustratorMaster_o *v2111; // x20
  System_String_array **v2112; // x2
  System_String_array **v2113; // x3
  System_Boolean_array **v2114; // x4
  System_Int32_array **v2115; // x5
  System_Int32_array *v2116; // x6
  System_Int32_array *v2117; // x7
  CvMaster_o *v2118; // x20
  const MethodInfo *v2119; // x1
  System_String_array **v2120; // x2
  System_String_array **v2121; // x3
  System_Boolean_array **v2122; // x4
  System_Int32_array **v2123; // x5
  System_Int32_array *v2124; // x6
  System_Int32_array *v2125; // x7
  TreasureDvcLvMaster_o *v2126; // x20
  System_String_array **v2127; // x2
  System_String_array **v2128; // x3
  System_Boolean_array **v2129; // x4
  System_Int32_array **v2130; // x5
  System_Int32_array *v2131; // x6
  System_Int32_array *v2132; // x7
  TreasureDvcDetailMaster_o *v2133; // x20
  System_String_array **v2134; // x2
  System_String_array **v2135; // x3
  System_Boolean_array **v2136; // x4
  System_Int32_array **v2137; // x5
  System_Int32_array *v2138; // x6
  System_Int32_array *v2139; // x7
  UserFollowerMaster_o *v2140; // x20
  System_String_array **v2141; // x2
  System_String_array **v2142; // x3
  System_Boolean_array **v2143; // x4
  System_Int32_array **v2144; // x5
  System_Int32_array *v2145; // x6
  System_Int32_array *v2146; // x7
  NpcFollowerMaster_o *v2147; // x20
  System_String_array **v2148; // x2
  System_String_array **v2149; // x3
  System_Boolean_array **v2150; // x4
  System_Int32_array **v2151; // x5
  System_Int32_array *v2152; // x6
  System_Int32_array *v2153; // x7
  NpcServantFollowerMaster_o *v2154; // x20
  System_String_array **v2155; // x2
  System_String_array **v2156; // x3
  System_Boolean_array **v2157; // x4
  System_Int32_array **v2158; // x5
  System_Int32_array *v2159; // x6
  System_Int32_array *v2160; // x7
  UserEventMaster_o *v2161; // x20
  System_String_array **v2162; // x2
  System_String_array **v2163; // x3
  System_Boolean_array **v2164; // x4
  System_Int32_array **v2165; // x5
  System_Int32_array *v2166; // x6
  System_Int32_array *v2167; // x7
  UserShopMaster_o *v2168; // x20
  System_String_array **v2169; // x2
  System_String_array **v2170; // x3
  System_Boolean_array **v2171; // x4
  System_Int32_array **v2172; // x5
  System_Int32_array *v2173; // x6
  System_Int32_array *v2174; // x7
  UserContinueMaster_o *v2175; // x20
  System_String_array **v2176; // x2
  System_String_array **v2177; // x3
  System_Boolean_array **v2178; // x4
  System_Int32_array **v2179; // x5
  System_Int32_array *v2180; // x6
  System_Int32_array *v2181; // x7
  ConstantMaster_o *v2182; // x20
  System_String_array **v2183; // x2
  System_String_array **v2184; // x3
  System_Boolean_array **v2185; // x4
  System_Int32_array **v2186; // x5
  System_Int32_array *v2187; // x6
  System_Int32_array *v2188; // x7
  ConstantLongMaster_o *v2189; // x20
  System_String_array **v2190; // x2
  System_String_array **v2191; // x3
  System_Boolean_array **v2192; // x4
  System_Int32_array **v2193; // x5
  System_Int32_array *v2194; // x6
  System_Int32_array *v2195; // x7
  ConstantStrMaster_o *v2196; // x20
  System_String_array **v2197; // x2
  System_String_array **v2198; // x3
  System_Boolean_array **v2199; // x4
  System_Int32_array **v2200; // x5
  System_Int32_array *v2201; // x6
  System_Int32_array *v2202; // x7
  AiMaster_o *v2203; // x20
  System_String_array **v2204; // x2
  System_String_array **v2205; // x3
  System_Boolean_array **v2206; // x4
  System_Int32_array **v2207; // x5
  System_Int32_array *v2208; // x6
  System_Int32_array *v2209; // x7
  AiActMaster_o *v2210; // x20
  System_String_array **v2211; // x2
  System_String_array **v2212; // x3
  System_Boolean_array **v2213; // x4
  System_Int32_array **v2214; // x5
  System_Int32_array *v2215; // x6
  System_Int32_array *v2216; // x7
  AttriRelationMaster_o *v2217; // x20
  System_String_array **v2218; // x2
  System_String_array **v2219; // x3
  System_Boolean_array **v2220; // x4
  System_Int32_array **v2221; // x5
  System_Int32_array *v2222; // x6
  System_Int32_array *v2223; // x7
  ClassRelationMaster_o *v2224; // x20
  System_String_array **v2225; // x2
  System_String_array **v2226; // x3
  System_Boolean_array **v2227; // x4
  System_Int32_array **v2228; // x5
  System_Int32_array *v2229; // x6
  System_Int32_array *v2230; // x7
  EffectMaster_o *v2231; // x20
  System_String_array **v2232; // x2
  System_String_array **v2233; // x3
  System_Boolean_array **v2234; // x4
  System_Int32_array **v2235; // x5
  System_Int32_array *v2236; // x6
  System_Int32_array *v2237; // x7
  EquipImageMaster_o *v2238; // x20
  System_String_array **v2239; // x2
  System_String_array **v2240; // x3
  System_Boolean_array **v2241; // x4
  System_Int32_array **v2242; // x5
  System_Int32_array *v2243; // x6
  System_Int32_array *v2244; // x7
  ServantVoiceMaster_o *v2245; // x20
  System_String_array **v2246; // x2
  System_String_array **v2247; // x3
  System_Boolean_array **v2248; // x4
  System_Int32_array **v2249; // x5
  System_Int32_array *v2250; // x6
  System_Int32_array *v2251; // x7
  CombineLimitMaster_o *v2252; // x20
  System_String_array **v2253; // x2
  System_String_array **v2254; // x3
  System_Boolean_array **v2255; // x4
  System_Int32_array **v2256; // x5
  System_Int32_array *v2257; // x6
  System_Int32_array *v2258; // x7
  CardMaster_o *v2259; // x20
  System_String_array **v2260; // x2
  System_String_array **v2261; // x3
  System_Boolean_array **v2262; // x4
  System_Int32_array **v2263; // x5
  System_Int32_array *v2264; // x6
  System_Int32_array *v2265; // x7
  CombineQpSvtEquipMaster_o *v2266; // x20
  System_String_array **v2267; // x2
  System_String_array **v2268; // x3
  System_Boolean_array **v2269; // x4
  System_Int32_array **v2270; // x5
  System_Int32_array *v2271; // x6
  System_Int32_array *v2272; // x7
  ServantRarityMaster_o *v2273; // x20
  System_String_array **v2274; // x2
  System_String_array **v2275; // x3
  System_Boolean_array **v2276; // x4
  System_Int32_array **v2277; // x5
  System_Int32_array *v2278; // x6
  System_Int32_array *v2279; // x7
  SetItemMaster_o *v2280; // x20
  System_String_array **v2281; // x2
  System_String_array **v2282; // x3
  System_Boolean_array **v2283; // x4
  System_Int32_array **v2284; // x5
  System_Int32_array *v2285; // x6
  System_Int32_array *v2286; // x7
  RecoverMaster_o *v2287; // x20
  System_String_array **v2288; // x2
  System_String_array **v2289; // x3
  System_Boolean_array **v2290; // x4
  System_Int32_array **v2291; // x5
  System_Int32_array *v2292; // x6
  System_Int32_array *v2293; // x7
  BannerMaster_o *v2294; // x20
  System_String_array **v2295; // x2
  System_String_array **v2296; // x3
  System_Boolean_array **v2297; // x4
  System_Int32_array **v2298; // x5
  System_Int32_array *v2299; // x6
  System_Int32_array *v2300; // x7
  ShopReleaseMaster_o *v2301; // x20
  System_String_array **v2302; // x2
  System_String_array **v2303; // x3
  System_Boolean_array **v2304; // x4
  System_Int32_array **v2305; // x5
  System_Int32_array *v2306; // x6
  System_Int32_array *v2307; // x7
  EventRewardMaster_o *v2308; // x20
  System_String_array **v2309; // x2
  System_String_array **v2310; // x3
  System_Boolean_array **v2311; // x4
  System_Int32_array **v2312; // x5
  System_Int32_array *v2313; // x6
  System_Int32_array *v2314; // x7
  EventDetailMaster_o *v2315; // x20
  System_String_array **v2316; // x2
  System_String_array **v2317; // x3
  System_Boolean_array **v2318; // x4
  System_Int32_array **v2319; // x5
  System_Int32_array *v2320; // x6
  System_Int32_array *v2321; // x7
  EventServantMaster_o *v2322; // x20
  System_String_array **v2323; // x2
  System_String_array **v2324; // x3
  System_Boolean_array **v2325; // x4
  System_Int32_array **v2326; // x5
  System_Int32_array *v2327; // x6
  System_Int32_array *v2328; // x7
  BoxGachaMaster_o *v2329; // x20
  System_String_array **v2330; // x2
  System_String_array **v2331; // x3
  System_Boolean_array **v2332; // x4
  System_Int32_array **v2333; // x5
  System_Int32_array *v2334; // x6
  System_Int32_array *v2335; // x7
  BoxGachaBaseMaster_o *v2336; // x20
  System_String_array **v2337; // x2
  System_String_array **v2338; // x3
  System_Boolean_array **v2339; // x4
  System_Int32_array **v2340; // x5
  System_Int32_array *v2341; // x6
  System_Int32_array *v2342; // x7
  BoxGachaTalkMaster_o *v2343; // x20
  System_String_array **v2344; // x2
  System_String_array **v2345; // x3
  System_Boolean_array **v2346; // x4
  System_Int32_array **v2347; // x5
  System_Int32_array *v2348; // x6
  System_Int32_array *v2349; // x7
  UserBoxGachaMaster_o *v2350; // x20
  System_String_array **v2351; // x2
  System_String_array **v2352; // x3
  System_Boolean_array **v2353; // x4
  System_Int32_array **v2354; // x5
  System_Int32_array *v2355; // x6
  System_Int32_array *v2356; // x7
  BoxGachaHistoryMaster_o *v2357; // x20
  System_String_array **v2358; // x2
  System_String_array **v2359; // x3
  System_Boolean_array **v2360; // x4
  System_Int32_array **v2361; // x5
  System_Int32_array *v2362; // x6
  System_Int32_array *v2363; // x7
  BattleBgMaster_o *v2364; // x20
  System_String_array **v2365; // x2
  System_String_array **v2366; // x3
  System_Boolean_array **v2367; // x4
  System_Int32_array **v2368; // x5
  System_Int32_array *v2369; // x6
  System_Int32_array *v2370; // x7
  TipsBattleMaster_o *v2371; // x20
  System_String_array **v2372; // x2
  System_String_array **v2373; // x3
  System_Boolean_array **v2374; // x4
  System_Int32_array **v2375; // x5
  System_Int32_array *v2376; // x6
  System_Int32_array *v2377; // x7
  UserLoginMaster_o *v2378; // x20
  System_String_array **v2379; // x2
  System_String_array **v2380; // x3
  System_Boolean_array **v2381; // x4
  System_Int32_array **v2382; // x5
  System_Int32_array *v2383; // x6
  System_Int32_array *v2384; // x7
  VoiceMaster_o *v2385; // x20
  System_String_array **v2386; // x2
  System_String_array **v2387; // x3
  System_Boolean_array **v2388; // x4
  System_Int32_array **v2389; // x5
  System_Int32_array *v2390; // x6
  System_Int32_array *v2391; // x7
  EventRewardExtraMaster_o *v2392; // x20
  System_String_array **v2393; // x2
  System_String_array **v2394; // x3
  System_Boolean_array **v2395; // x4
  System_Int32_array **v2396; // x5
  System_Int32_array *v2397; // x6
  System_Int32_array *v2398; // x7
  EventMissionMaster_o *v2399; // x20
  System_String_array **v2400; // x2
  System_String_array **v2401; // x3
  System_Boolean_array **v2402; // x4
  System_Int32_array **v2403; // x5
  System_Int32_array *v2404; // x6
  System_Int32_array *v2405; // x7
  EventMissionActionMaster_o *v2406; // x20
  System_String_array **v2407; // x2
  System_String_array **v2408; // x3
  System_Boolean_array **v2409; // x4
  System_Int32_array **v2410; // x5
  System_Int32_array *v2411; // x6
  System_Int32_array *v2412; // x7
  EventMissionActionAddMaster_o *v2413; // x20
  System_String_array **v2414; // x2
  System_String_array **v2415; // x3
  System_Boolean_array **v2416; // x4
  System_Int32_array **v2417; // x5
  System_Int32_array *v2418; // x6
  System_Int32_array *v2419; // x7
  EventMissionConditionMaster_o *v2420; // x20
  System_String_array **v2421; // x2
  System_String_array **v2422; // x3
  System_Boolean_array **v2423; // x4
  System_Int32_array **v2424; // x5
  System_Int32_array *v2425; // x6
  System_Int32_array *v2426; // x7
  EventMissionCondDetailMaster_o *v2427; // x20
  System_String_array **v2428; // x2
  System_String_array **v2429; // x3
  System_Boolean_array **v2430; // x4
  System_Int32_array **v2431; // x5
  System_Int32_array *v2432; // x6
  System_Int32_array *v2433; // x7
  EventMissionAddMaster_o *v2434; // x20
  System_String_array **v2435; // x2
  System_String_array **v2436; // x3
  System_Boolean_array **v2437; // x4
  System_Int32_array **v2438; // x5
  System_Int32_array *v2439; // x6
  System_Int32_array *v2440; // x7
  CompleteMissionMaster_o *v2441; // x20
  System_String_array **v2442; // x2
  System_String_array **v2443; // x3
  System_Boolean_array **v2444; // x4
  System_Int32_array **v2445; // x5
  System_Int32_array *v2446; // x6
  System_Int32_array *v2447; // x7
  EventRewardSetMaster_o *v2448; // x20
  System_String_array **v2449; // x2
  System_String_array **v2450; // x3
  System_Boolean_array **v2451; // x4
  System_Int32_array **v2452; // x5
  System_Int32_array *v2453; // x6
  System_Int32_array *v2454; // x7
  UserEventMissionMaster_o *v2455; // x20
  System_String_array **v2456; // x2
  System_String_array **v2457; // x3
  System_Boolean_array **v2458; // x4
  System_Int32_array **v2459; // x5
  System_Int32_array *v2460; // x6
  System_Int32_array *v2461; // x7
  UserEventMissionCondDetailMaster_o *v2462; // x20
  System_String_array **v2463; // x2
  System_String_array **v2464; // x3
  System_Boolean_array **v2465; // x4
  System_Int32_array **v2466; // x5
  System_Int32_array *v2467; // x6
  System_Int32_array *v2468; // x7
  BoxGachaBaseDetailMaster_o *v2469; // x20
  System_String_array **v2470; // x2
  System_String_array **v2471; // x3
  System_Boolean_array **v2472; // x4
  System_Int32_array **v2473; // x5
  System_Int32_array *v2474; // x6
  System_Int32_array *v2475; // x7
  UserServantLeaderMaster_o *v2476; // x20
  System_String_array **v2477; // x2
  System_String_array **v2478; // x3
  System_Boolean_array **v2479; // x4
  System_Int32_array **v2480; // x5
  System_Int32_array *v2481; // x6
  System_Int32_array *v2482; // x7
  ClosedMessageMaster_o *v2483; // x20
  System_String_array **v2484; // x2
  System_String_array **v2485; // x3
  System_Boolean_array **v2486; // x4
  System_Int32_array **v2487; // x5
  System_Int32_array *v2488; // x6
  System_Int32_array *v2489; // x7
  FunctionGroupMaster_o *v2490; // x20
  System_String_array **v2491; // x2
  System_String_array **v2492; // x3
  System_Boolean_array **v2493; // x4
  System_Int32_array **v2494; // x5
  System_Int32_array *v2495; // x6
  System_Int32_array *v2496; // x7
  EventRaidMaster_o *v2497; // x20
  System_String_array **v2498; // x2
  System_String_array **v2499; // x3
  System_Boolean_array **v2500; // x4
  System_Int32_array **v2501; // x5
  System_Int32_array *v2502; // x6
  System_Int32_array *v2503; // x7
  TotalEventRaidMaster_o *v2504; // x20
  __int64 v2505; // x0
  System_String_array **v2506; // x2
  System_String_array **v2507; // x3
  System_Boolean_array **v2508; // x4
  System_Int32_array **v2509; // x5
  System_Int32_array *v2510; // x6
  System_Int32_array *v2511; // x7
  UserEventRaidMaster_o *v2512; // x20
  System_String_array **v2513; // x2
  System_String_array **v2514; // x3
  System_Boolean_array **v2515; // x4
  System_Int32_array **v2516; // x5
  System_Int32_array *v2517; // x6
  System_Int32_array *v2518; // x7
  EventPointMaster_o *v2519; // x20
  System_String_array **v2520; // x2
  System_String_array **v2521; // x3
  System_Boolean_array **v2522; // x4
  System_Int32_array **v2523; // x5
  System_Int32_array *v2524; // x6
  System_Int32_array *v2525; // x7
  EventPointGroupMaster_o *v2526; // x20
  System_String_array **v2527; // x2
  System_String_array **v2528; // x3
  System_Boolean_array **v2529; // x4
  System_Int32_array **v2530; // x5
  System_Int32_array *v2531; // x6
  System_Int32_array *v2532; // x7
  TotalEventPointMaster_o *v2533; // x20
  System_String_array **v2534; // x2
  System_String_array **v2535; // x3
  System_Boolean_array **v2536; // x4
  System_Int32_array **v2537; // x5
  System_Int32_array *v2538; // x6
  System_Int32_array *v2539; // x7
  UserEventPointMaster_o *v2540; // x20
  System_String_array **v2541; // x2
  System_String_array **v2542; // x3
  System_Boolean_array **v2543; // x4
  System_Int32_array **v2544; // x5
  System_Int32_array *v2545; // x6
  System_Int32_array *v2546; // x7
  EventPointUpperMaster_o *v2547; // x20
  System_String_array **v2548; // x2
  System_String_array **v2549; // x3
  System_Boolean_array **v2550; // x4
  System_Int32_array **v2551; // x5
  System_Int32_array *v2552; // x6
  System_Int32_array *v2553; // x7
  EventPointUpperReleaseMaster_o *v2554; // x20
  System_String_array **v2555; // x2
  System_String_array **v2556; // x3
  System_Boolean_array **v2557; // x4
  System_Int32_array **v2558; // x5
  System_Int32_array *v2559; // x6
  System_Int32_array *v2560; // x7
  EventRaceMaster_o *v2561; // x20
  System_String_array **v2562; // x2
  System_String_array **v2563; // x3
  System_Boolean_array **v2564; // x4
  System_Int32_array **v2565; // x5
  System_Int32_array *v2566; // x6
  System_Int32_array *v2567; // x7
  EventRaceResultMaster_o *v2568; // x20
  System_String_array **v2569; // x2
  System_String_array **v2570; // x3
  System_Boolean_array **v2571; // x4
  System_Int32_array **v2572; // x5
  System_Int32_array *v2573; // x6
  System_Int32_array *v2574; // x7
  QuestRacePointMaster_o *v2575; // x20
  System_String_array **v2576; // x2
  System_String_array **v2577; // x3
  System_Boolean_array **v2578; // x4
  System_Int32_array **v2579; // x5
  System_Int32_array *v2580; // x6
  System_Int32_array *v2581; // x7
  UserEventRaceMaster_o *v2582; // x20
  System_String_array **v2583; // x2
  System_String_array **v2584; // x3
  System_Boolean_array **v2585; // x4
  System_Int32_array **v2586; // x5
  System_Int32_array *v2587; // x6
  System_Int32_array *v2588; // x7
  EventScriptMaster_o *v2589; // x20
  System_String_array **v2590; // x2
  System_String_array **v2591; // x3
  System_Boolean_array **v2592; // x4
  System_Int32_array **v2593; // x5
  System_Int32_array *v2594; // x6
  System_Int32_array *v2595; // x7
  EventScriptReleaseMaster_o *v2596; // x20
  System_String_array **v2597; // x2
  System_String_array **v2598; // x3
  System_Boolean_array **v2599; // x4
  System_Int32_array **v2600; // x5
  System_Int32_array *v2601; // x6
  System_Int32_array *v2602; // x7
  UserPresentHistoryMaster_o *v2603; // x20
  System_String_array **v2604; // x2
  System_String_array **v2605; // x3
  System_Boolean_array **v2606; // x4
  System_Int32_array **v2607; // x5
  System_Int32_array *v2608; // x6
  System_Int32_array *v2609; // x7
  MstMissionMaster_o *v2610; // x20
  System_String_array **v2611; // x2
  System_String_array **v2612; // x3
  System_Boolean_array **v2613; // x4
  System_Int32_array **v2614; // x5
  System_Int32_array *v2615; // x6
  System_Int32_array *v2616; // x7
  ServantExceedMaster_o *v2617; // x20
  System_String_array **v2618; // x2
  System_String_array **v2619; // x3
  System_Boolean_array **v2620; // x4
  System_Int32_array **v2621; // x5
  System_Int32_array *v2622; // x6
  System_Int32_array *v2623; // x7
  PartialMaintenanceMaster_o *v2624; // x20
  System_String_array **v2625; // x2
  System_String_array **v2626; // x3
  System_Boolean_array **v2627; // x4
  System_Int32_array **v2628; // x5
  System_Int32_array *v2629; // x6
  System_Int32_array *v2630; // x7
  GuideMaster_o *v2631; // x20
  System_String_array **v2632; // x2
  System_String_array **v2633; // x3
  System_Boolean_array **v2634; // x4
  System_Int32_array **v2635; // x5
  System_Int32_array *v2636; // x6
  System_Int32_array *v2637; // x7
  MstMissionDisplayInfoMaster_o *v2638; // x20
  System_String_array **v2639; // x2
  System_String_array **v2640; // x3
  System_Boolean_array **v2641; // x4
  System_Int32_array **v2642; // x5
  System_Int32_array *v2643; // x6
  System_Int32_array *v2644; // x7
  GachaGroupMaster_o *v2645; // x20
  System_String_array **v2646; // x2
  System_String_array **v2647; // x3
  System_Boolean_array **v2648; // x4
  System_Int32_array **v2649; // x5
  System_Int32_array *v2650; // x6
  System_Int32_array *v2651; // x7
  QuestResetMaster_o *v2652; // x20
  System_String_array **v2653; // x2
  System_String_array **v2654; // x3
  System_Boolean_array **v2655; // x4
  System_Int32_array **v2656; // x5
  System_Int32_array *v2657; // x6
  System_Int32_array *v2658; // x7
  WarAddMaster_o *v2659; // x20
  System_String_array **v2660; // x2
  System_String_array **v2661; // x3
  System_Boolean_array **v2662; // x4
  System_Int32_array **v2663; // x5
  System_Int32_array *v2664; // x6
  System_Int32_array *v2665; // x7
  EventItemDisplayMaster_o *v2666; // x20
  System_String_array **v2667; // x2
  System_String_array **v2668; // x3
  System_Boolean_array **v2669; // x4
  System_Int32_array **v2670; // x5
  System_Int32_array *v2671; // x6
  System_Int32_array *v2672; // x7
  EventItemDisplayGroupMaster_o *v2673; // x20
  System_String_array **v2674; // x2
  System_String_array **v2675; // x3
  System_Boolean_array **v2676; // x4
  System_Int32_array **v2677; // x5
  System_Int32_array *v2678; // x6
  System_Int32_array *v2679; // x7
  EventItemDisplayReleaseMaster_o *v2680; // x20
  System_String_array **v2681; // x2
  System_String_array **v2682; // x3
  System_Boolean_array **v2683; // x4
  System_Int32_array **v2684; // x5
  System_Int32_array *v2685; // x6
  System_Int32_array *v2686; // x7
  EventTutorialMaster_o *v2687; // x20
  System_String_array **v2688; // x2
  System_String_array **v2689; // x3
  System_Boolean_array **v2690; // x4
  System_Int32_array **v2691; // x5
  System_Int32_array *v2692; // x6
  System_Int32_array *v2693; // x7
  EventTutorialCondMaster_o *v2694; // x20
  System_String_array **v2695; // x2
  System_String_array **v2696; // x3
  System_Boolean_array **v2697; // x4
  System_Int32_array **v2698; // x5
  System_Int32_array *v2699; // x6
  System_Int32_array *v2700; // x7
  VoiceReleaseMaster_o *v2701; // x20
  System_String_array **v2702; // x2
  System_String_array **v2703; // x3
  System_Boolean_array **v2704; // x4
  System_Int32_array **v2705; // x5
  System_Int32_array *v2706; // x6
  System_Int32_array *v2707; // x7
  EventSuperBossMaster_o *v2708; // x20
  System_String_array **v2709; // x2
  System_String_array **v2710; // x3
  System_Boolean_array **v2711; // x4
  System_Int32_array **v2712; // x5
  System_Int32_array *v2713; // x6
  System_Int32_array *v2714; // x7
  UserSuperBossMaster_o *v2715; // x20
  System_String_array **v2716; // x2
  System_String_array **v2717; // x3
  System_Boolean_array **v2718; // x4
  System_Int32_array **v2719; // x5
  System_Int32_array *v2720; // x6
  System_Int32_array *v2721; // x7
  QuestScriptMaster_o *v2722; // x20
  System_String_array **v2723; // x2
  System_String_array **v2724; // x3
  System_Boolean_array **v2725; // x4
  System_Int32_array **v2726; // x5
  System_Int32_array *v2727; // x6
  System_Int32_array *v2728; // x7
  QuestScriptReleaseMaster_o *v2729; // x20
  System_String_array **v2730; // x2
  System_String_array **v2731; // x3
  System_Boolean_array **v2732; // x4
  System_Int32_array **v2733; // x5
  System_Int32_array *v2734; // x6
  System_Int32_array *v2735; // x7
  MaterialFolderMaster_o *v2736; // x20
  System_String_array **v2737; // x2
  System_String_array **v2738; // x3
  System_Boolean_array **v2739; // x4
  System_Int32_array **v2740; // x5
  System_Int32_array *v2741; // x6
  System_Int32_array *v2742; // x7
  RestrictionMaster_o *v2743; // x20
  System_String_array **v2744; // x2
  System_String_array **v2745; // x3
  System_Boolean_array **v2746; // x4
  System_Int32_array **v2747; // x5
  System_Int32_array *v2748; // x6
  System_Int32_array *v2749; // x7
  QuestRestrictionMaster_o *v2750; // x20
  System_String_array **v2751; // x2
  System_String_array **v2752; // x3
  System_Boolean_array **v2753; // x4
  System_Int32_array **v2754; // x5
  System_Int32_array *v2755; // x6
  System_Int32_array *v2756; // x7
  ServantVoiceRelationMaster_o *v2757; // x20
  System_String_array **v2758; // x2
  System_String_array **v2759; // x3
  System_Boolean_array **v2760; // x4
  System_Int32_array **v2761; // x5
  System_Int32_array *v2762; // x6
  System_Int32_array *v2763; // x7
  ShopDetailMaster_o *v2764; // x20
  System_String_array **v2765; // x2
  System_String_array **v2766; // x3
  System_Boolean_array **v2767; // x4
  System_Int32_array **v2768; // x5
  System_Int32_array *v2769; // x6
  System_Int32_array *v2770; // x7
  ServantScriptAddMaster_o *v2771; // x20
  System_String_array **v2772; // x2
  System_String_array **v2773; // x3
  System_Boolean_array **v2774; // x4
  System_Int32_array **v2775; // x5
  System_Int32_array *v2776; // x6
  System_Int32_array *v2777; // x7
  CombineMaster_o *v2778; // x20
  System_String_array **v2779; // x2
  System_String_array **v2780; // x3
  System_Boolean_array **v2781; // x4
  System_Int32_array **v2782; // x5
  System_Int32_array *v2783; // x6
  System_Int32_array *v2784; // x7
  AiFieldMaster_o *v2785; // x20
  System_String_array **v2786; // x2
  System_String_array **v2787; // x3
  System_Boolean_array **v2788; // x4
  System_Int32_array **v2789; // x5
  System_Int32_array *v2790; // x6
  System_Int32_array *v2791; // x7
  ServantCommentAddMaster_o *v2792; // x20
  System_String_array **v2793; // x2
  System_String_array **v2794; // x3
  System_Boolean_array **v2795; // x4
  System_Int32_array **v2796; // x5
  System_Int32_array *v2797; // x6
  System_Int32_array *v2798; // x7
  EventFilterMaster_o *v2799; // x20
  System_String_array **v2800; // x2
  System_String_array **v2801; // x3
  System_Boolean_array **v2802; // x4
  System_Int32_array **v2803; // x5
  System_Int32_array *v2804; // x6
  System_Int32_array *v2805; // x7
  UserSupportDeckMaster_o *v2806; // x20
  System_String_array **v2807; // x2
  System_String_array **v2808; // x3
  System_Boolean_array **v2809; // x4
  System_Int32_array **v2810; // x5
  System_Int32_array *v2811; // x6
  System_Int32_array *v2812; // x7
  EventRewardSceneMaster_o *v2813; // x20
  System_String_array **v2814; // x2
  System_String_array **v2815; // x3
  System_Boolean_array **v2816; // x4
  System_Int32_array **v2817; // x5
  System_Int32_array *v2818; // x6
  System_Int32_array *v2819; // x7
  EventVoicePlayMaster_o *v2820; // x20
  System_String_array **v2821; // x2
  System_String_array **v2822; // x3
  System_Boolean_array **v2823; // x4
  System_Int32_array **v2824; // x5
  System_Int32_array *v2825; // x6
  System_Int32_array *v2826; // x7
  GachaSubMaster_o *v2827; // x20
  System_String_array **v2828; // x2
  System_String_array **v2829; // x3
  System_Boolean_array **v2830; // x4
  System_Int32_array **v2831; // x5
  System_Int32_array *v2832; // x6
  System_Int32_array *v2833; // x7
  GachaDetailMaster_o *v2834; // x20
  System_String_array **v2835; // x2
  System_String_array **v2836; // x3
  System_Boolean_array **v2837; // x4
  System_Int32_array **v2838; // x5
  System_Int32_array *v2839; // x6
  System_Int32_array *v2840; // x7
  GachaBonusSelectMaster_o *v2841; // x20
  System_String_array **v2842; // x2
  System_String_array **v2843; // x3
  System_Boolean_array **v2844; // x4
  System_Int32_array **v2845; // x5
  System_Int32_array *v2846; // x6
  System_Int32_array *v2847; // x7
  GachaBonusSelectLineupMaster_o *v2848; // x20
  System_String_array **v2849; // x2
  System_String_array **v2850; // x3
  System_Boolean_array **v2851; // x4
  System_Int32_array **v2852; // x5
  System_Int32_array *v2853; // x6
  System_Int32_array *v2854; // x7
  ServantChangeMaster_o *v2855; // x20
  System_String_array **v2856; // x2
  System_String_array **v2857; // x3
  System_Boolean_array **v2858; // x4
  System_Int32_array **v2859; // x5
  System_Int32_array *v2860; // x6
  System_Int32_array *v2861; // x7
  VoiceCondMaster_o *v2862; // x20
  System_String_array **v2863; // x2
  System_String_array **v2864; // x3
  System_Boolean_array **v2865; // x4
  System_Int32_array **v2866; // x5
  System_Int32_array *v2867; // x6
  System_Int32_array *v2868; // x7
  BgmReleaseMaster_o *v2869; // x20
  System_String_array **v2870; // x2
  System_String_array **v2871; // x3
  System_Boolean_array **v2872; // x4
  System_Int32_array **v2873; // x5
  System_Int32_array *v2874; // x6
  System_Int32_array *v2875; // x7
  MyRoomAddMaster_o *v2876; // x20
  System_String_array **v2877; // x2
  System_String_array **v2878; // x3
  System_Boolean_array **v2879; // x4
  System_Int32_array **v2880; // x5
  System_Int32_array *v2881; // x6
  System_Int32_array *v2882; // x7
  ShopActionMaster_o *v2883; // x20
  System_String_array **v2884; // x2
  System_String_array **v2885; // x3
  System_Boolean_array **v2886; // x4
  System_Int32_array **v2887; // x5
  System_Int32_array *v2888; // x6
  System_Int32_array *v2889; // x7
  EventRewardSceneReleaseMaster_o *v2890; // x20
  System_String_array **v2891; // x2
  System_String_array **v2892; // x3
  System_Boolean_array **v2893; // x4
  System_Int32_array **v2894; // x5
  System_Int32_array *v2895; // x6
  System_Int32_array *v2896; // x7
  QuestBehaviorMaster_o *v2897; // x20
  System_String_array **v2898; // x2
  System_String_array **v2899; // x3
  System_Boolean_array **v2900; // x4
  System_Int32_array **v2901; // x5
  System_Int32_array *v2902; // x6
  System_Int32_array *v2903; // x7
  MapMaster_o *v2904; // x20
  System_String_array **v2905; // x2
  System_String_array **v2906; // x3
  System_Boolean_array **v2907; // x4
  System_Int32_array **v2908; // x5
  System_Int32_array *v2909; // x6
  System_Int32_array *v2910; // x7
  MapCondMaster_o *v2911; // x20
  System_String_array **v2912; // x2
  System_String_array **v2913; // x3
  System_Boolean_array **v2914; // x4
  System_Int32_array **v2915; // x5
  System_Int32_array *v2916; // x6
  System_Int32_array *v2917; // x7
  MapButtonMaster_o *v2918; // x20
  System_String_array **v2919; // x2
  System_String_array **v2920; // x3
  System_Boolean_array **v2921; // x4
  System_Int32_array **v2922; // x5
  System_Int32_array *v2923; // x6
  System_Int32_array *v2924; // x7
  BannerAddMaster_o *v2925; // x20
  System_String_array **v2926; // x2
  System_String_array **v2927; // x3
  System_Boolean_array **v2928; // x4
  System_Int32_array **v2929; // x5
  System_Int32_array *v2930; // x6
  System_Int32_array *v2931; // x7
  EventAddMaster_o *v2932; // x20
  System_String_array **v2933; // x2
  System_String_array **v2934; // x3
  System_Boolean_array **v2935; // x4
  System_Int32_array **v2936; // x5
  System_Int32_array *v2937; // x6
  System_Int32_array *v2938; // x7
  TotalLoginMaster_o *v2939; // x20
  System_String_array **v2940; // x2
  System_String_array **v2941; // x3
  System_Boolean_array **v2942; // x4
  System_Int32_array **v2943; // x5
  System_Int32_array *v2944; // x6
  System_Int32_array *v2945; // x7
  ServantFilterMaster_o *v2946; // x20
  System_String_array **v2947; // x2
  System_String_array **v2948; // x3
  System_Boolean_array **v2949; // x4
  System_Int32_array **v2950; // x5
  System_Int32_array *v2951; // x6
  System_Int32_array *v2952; // x7
  CombineCostumeMaster_o *v2953; // x20
  System_String_array **v2954; // x2
  System_String_array **v2955; // x3
  System_Boolean_array **v2956; // x4
  System_Int32_array **v2957; // x5
  System_Int32_array *v2958; // x6
  System_Int32_array *v2959; // x7
  ServantCostumeMaster_o *v2960; // x20
  System_String_array **v2961; // x2
  System_String_array **v2962; // x3
  System_Boolean_array **v2963; // x4
  System_Int32_array **v2964; // x5
  System_Int32_array *v2965; // x6
  System_Int32_array *v2966; // x7
  ServantCostumeReleaseMaster_o *v2967; // x20
  System_String_array **v2968; // x2
  System_String_array **v2969; // x3
  System_Boolean_array **v2970; // x4
  System_Int32_array **v2971; // x5
  System_Int32_array *v2972; // x6
  System_Int32_array *v2973; // x7
  UserFriendRequestHistoryMaster_o *v2974; // x20
  System_String_array **v2975; // x2
  System_String_array **v2976; // x3
  System_Boolean_array **v2977; // x4
  System_Int32_array **v2978; // x5
  System_Int32_array *v2979; // x6
  System_Int32_array *v2980; // x7
  UserBlacklistMaster_o *v2981; // x20
  System_String_array **v2982; // x2
  System_String_array **v2983; // x3
  System_Boolean_array **v2984; // x4
  System_Int32_array **v2985; // x5
  System_Int32_array *v2986; // x6
  System_Int32_array *v2987; // x7
  ItemSelectMaster_o *v2988; // x20
  System_String_array **v2989; // x2
  System_String_array **v2990; // x3
  System_Boolean_array **v2991; // x4
  System_Int32_array **v2992; // x5
  System_Int32_array *v2993; // x6
  System_Int32_array *v2994; // x7
  TotalEventRaceMaster_o *v2995; // x20
  System_String_array **v2996; // x2
  System_String_array **v2997; // x3
  System_Boolean_array **v2998; // x4
  System_Int32_array **v2999; // x5
  System_Int32_array *v3000; // x6
  System_Int32_array *v3001; // x7
  EventPointGroupAddMaster_o *v3002; // x20
  System_String_array **v3003; // x2
  System_String_array **v3004; // x3
  System_Boolean_array **v3005; // x4
  System_Int32_array **v3006; // x5
  System_Int32_array *v3007; // x6
  System_Int32_array *v3008; // x7
  VoicePlayGroupMaster_o *v3009; // x20
  System_String_array **v3010; // x2
  System_String_array **v3011; // x3
  System_Boolean_array **v3012; // x4
  System_Int32_array **v3013; // x5
  System_Int32_array *v3014; // x6
  System_Int32_array *v3015; // x7
  VoicePlayCondMaster_o *v3016; // x20
  System_String_array **v3017; // x2
  System_String_array **v3018; // x3
  System_Boolean_array **v3019; // x4
  System_Int32_array **v3020; // x5
  System_Int32_array *v3021; // x6
  System_Int32_array *v3022; // x7
  GachaStoryAdjustMaster_o *v3023; // x20
  System_String_array **v3024; // x2
  System_String_array **v3025; // x3
  System_Boolean_array **v3026; // x4
  System_Int32_array **v3027; // x5
  System_Int32_array *v3028; // x6
  System_Int32_array *v3029; // x7
  ServantFlagMaster_o *v3030; // x20
  __int64 v3031; // x0
  System_String_array **v3032; // x2
  System_String_array **v3033; // x3
  System_Boolean_array **v3034; // x4
  System_Int32_array **v3035; // x5
  System_Int32_array *v3036; // x6
  System_Int32_array *v3037; // x7
  ServantFlagReleaseMaster_o *v3038; // x20
  System_String_array **v3039; // x2
  System_String_array **v3040; // x3
  System_Boolean_array **v3041; // x4
  System_Int32_array **v3042; // x5
  System_Int32_array *v3043; // x6
  System_Int32_array *v3044; // x7
  EventLocationCampaignMaster_o *v3045; // x20
  System_String_array **v3046; // x2
  System_String_array **v3047; // x3
  System_Boolean_array **v3048; // x4
  System_Int32_array **v3049; // x5
  System_Int32_array *v3050; // x6
  System_Int32_array *v3051; // x7
  CampaignInfoMaster_o *v3052; // x20
  System_String_array **v3053; // x2
  System_String_array **v3054; // x3
  System_Boolean_array **v3055; // x4
  System_Int32_array **v3056; // x5
  System_Int32_array *v3057; // x6
  System_Int32_array *v3058; // x7
  DialogMessageMaster_o *v3059; // x20
  System_String_array **v3060; // x2
  System_String_array **v3061; // x3
  System_Boolean_array **v3062; // x4
  System_Int32_array **v3063; // x5
  System_Int32_array *v3064; // x6
  System_Int32_array *v3065; // x7
  ServantIndividualityMaster_o *v3066; // x20
  System_String_array **v3067; // x2
  System_String_array **v3068; // x3
  System_Boolean_array **v3069; // x4
  System_Int32_array **v3070; // x5
  System_Int32_array *v3071; // x6
  System_Int32_array *v3072; // x7
  BoardMessageMaster_o *v3073; // x20
  System_String_array **v3074; // x2
  System_String_array **v3075; // x3
  System_Boolean_array **v3076; // x4
  System_Int32_array **v3077; // x5
  System_Int32_array *v3078; // x6
  System_Int32_array *v3079; // x7
  BoardMessageReleaseMaster_o *v3080; // x20
  System_String_array **v3081; // x2
  System_String_array **v3082; // x3
  System_Boolean_array **v3083; // x4
  System_Int32_array **v3084; // x5
  System_Int32_array *v3085; // x6
  System_Int32_array *v3086; // x7
  EventServantFatigueMaster_o *v3087; // x20
  System_String_array **v3088; // x2
  System_String_array **v3089; // x3
  System_Boolean_array **v3090; // x4
  System_Int32_array **v3091; // x5
  System_Int32_array *v3092; // x6
  System_Int32_array *v3093; // x7
  UserEventDeckMaster_o *v3094; // x20
  System_String_array **v3095; // x2
  System_String_array **v3096; // x3
  System_Boolean_array **v3097; // x4
  System_Int32_array **v3098; // x5
  System_Int32_array *v3099; // x6
  System_Int32_array *v3100; // x7
  EventTowerMaster_o *v3101; // x20
  System_String_array **v3102; // x2
  System_String_array **v3103; // x3
  System_Boolean_array **v3104; // x4
  System_Int32_array **v3105; // x5
  System_Int32_array *v3106; // x6
  System_Int32_array *v3107; // x7
  EventTowerRewardMaster_o *v3108; // x20
  System_String_array **v3109; // x2
  System_String_array **v3110; // x3
  System_Boolean_array **v3111; // x4
  System_Int32_array **v3112; // x5
  System_Int32_array *v3113; // x6
  System_Int32_array *v3114; // x7
  EventBulletinBoardMaster_o *v3115; // x20
  System_String_array **v3116; // x2
  System_String_array **v3117; // x3
  System_Boolean_array **v3118; // x4
  System_Int32_array **v3119; // x5
  System_Int32_array *v3120; // x6
  System_Int32_array *v3121; // x7
  EventBulletinBoardReleaseMaster_o *v3122; // x20
  System_String_array **v3123; // x2
  System_String_array **v3124; // x3
  System_Boolean_array **v3125; // x4
  System_Int32_array **v3126; // x5
  System_Int32_array *v3127; // x6
  System_Int32_array *v3128; // x7
  EventFactoryMaster_o *v3129; // x20
  System_String_array **v3130; // x2
  System_String_array **v3131; // x3
  System_Boolean_array **v3132; // x4
  System_Int32_array **v3133; // x5
  System_Int32_array *v3134; // x6
  System_Int32_array *v3135; // x7
  ShopGroupMaster_o *v3136; // x20
  System_String_array **v3137; // x2
  System_String_array **v3138; // x3
  System_Boolean_array **v3139; // x4
  System_Int32_array **v3140; // x5
  System_Int32_array *v3141; // x6
  System_Int32_array *v3142; // x7
  AuraEffectMaster_o *v3143; // x20
  System_String_array **v3144; // x2
  System_String_array **v3145; // x3
  System_Boolean_array **v3146; // x4
  System_Int32_array **v3147; // x5
  System_Int32_array *v3148; // x6
  System_Int32_array *v3149; // x7
  AuraEffectPosOverwriteMaster_o *v3150; // x20
  System_String_array **v3151; // x2
  System_String_array **v3152; // x3
  System_Boolean_array **v3153; // x4
  System_Int32_array **v3154; // x5
  System_Int32_array *v3155; // x6
  System_Int32_array *v3156; // x7
  UserEventMissionFixMaster_o *v3157; // x20
  System_String_array **v3158; // x2
  System_String_array **v3159; // x3
  System_Boolean_array **v3160; // x4
  System_Int32_array **v3161; // x5
  System_Int32_array *v3162; // x6
  System_Int32_array *v3163; // x7
  NotEndEventMissionFixMaster_o *v3164; // x20
  System_String_array **v3165; // x2
  System_String_array **v3166; // x3
  System_Boolean_array **v3167; // x4
  System_Int32_array **v3168; // x5
  System_Int32_array *v3169; // x6
  System_Int32_array *v3170; // x7
  EnemyMstMaster_o *v3171; // x20
  System_String_array **v3172; // x2
  System_String_array **v3173; // x3
  System_Boolean_array **v3174; // x4
  System_Int32_array **v3175; // x5
  System_Int32_array *v3176; // x6
  System_Int32_array *v3177; // x7
  EnemyMstBattleMaster_o *v3178; // x20
  System_String_array **v3179; // x2
  System_String_array **v3180; // x3
  System_Boolean_array **v3181; // x4
  System_Int32_array **v3182; // x5
  System_Int32_array *v3183; // x6
  System_Int32_array *v3184; // x7
  ServantSkillReleaseMaster_o *v3185; // x20
  System_String_array **v3186; // x2
  System_String_array **v3187; // x3
  System_Boolean_array **v3188; // x4
  System_Int32_array **v3189; // x5
  System_Int32_array *v3190; // x6
  System_Int32_array *v3191; // x7
  ServantPassiveSkillReleaseMaster_o *v3192; // x20
  System_String_array **v3193; // x2
  System_String_array **v3194; // x3
  System_Boolean_array **v3195; // x4
  System_Int32_array **v3196; // x5
  System_Int32_array *v3197; // x6
  System_Int32_array *v3198; // x7
  ServantTreasureDeviceReleaseMaster_o *v3199; // x20
  System_String_array **v3200; // x2
  System_String_array **v3201; // x3
  System_Boolean_array **v3202; // x4
  System_Int32_array **v3203; // x5
  System_Int32_array *v3204; // x6
  System_Int32_array *v3205; // x7
  MapGimmickReleaseMaster_o *v3206; // x20
  System_String_array **v3207; // x2
  System_String_array **v3208; // x3
  System_Boolean_array **v3209; // x4
  System_Int32_array **v3210; // x5
  System_Int32_array *v3211; // x6
  System_Int32_array *v3212; // x7
  CommandCodeMaster_o *v3213; // x20
  System_String_array **v3214; // x2
  System_String_array **v3215; // x3
  System_Boolean_array **v3216; // x4
  System_Int32_array **v3217; // x5
  System_Int32_array *v3218; // x6
  System_Int32_array *v3219; // x7
  ServantCommandCodeUnlockMaster_o *v3220; // x20
  System_String_array **v3221; // x2
  System_String_array **v3222; // x3
  System_Boolean_array **v3223; // x4
  System_Int32_array **v3224; // x5
  System_Int32_array *v3225; // x6
  System_Int32_array *v3226; // x7
  UserCommandCodeMaster_o *v3227; // x20
  System_String_array **v3228; // x2
  System_String_array **v3229; // x3
  System_Boolean_array **v3230; // x4
  System_Int32_array **v3231; // x5
  System_Int32_array *v3232; // x6
  System_Int32_array *v3233; // x7
  UserCommandCodeCollectionMaster_o *v3234; // x20
  System_String_array **v3235; // x2
  System_String_array **v3236; // x3
  System_Boolean_array **v3237; // x4
  System_Int32_array **v3238; // x5
  System_Int32_array *v3239; // x6
  System_Int32_array *v3240; // x7
  UserServantCommandCodeMaster_o *v3241; // x20
  System_String_array **v3242; // x2
  System_String_array **v3243; // x3
  System_Boolean_array **v3244; // x4
  System_Int32_array **v3245; // x5
  System_Int32_array *v3246; // x6
  System_Int32_array *v3247; // x7
  UserServantCommandCardMaster_o *v3248; // x20
  System_String_array **v3249; // x2
  System_String_array **v3250; // x3
  System_Boolean_array **v3251; // x4
  System_Int32_array **v3252; // x5
  System_Int32_array *v3253; // x6
  System_Int32_array *v3254; // x7
  CommandCardRankParamMaster_o *v3255; // x20
  System_String_array **v3256; // x2
  System_String_array **v3257; // x3
  System_Boolean_array **v3258; // x4
  System_Int32_array **v3259; // x5
  System_Int32_array *v3260; // x6
  System_Int32_array *v3261; // x7
  CommandCodeSkillMaster_o *v3262; // x20
  System_String_array **v3263; // x2
  System_String_array **v3264; // x3
  System_Boolean_array **v3265; // x4
  System_Int32_array **v3266; // x5
  System_Int32_array *v3267; // x6
  System_Int32_array *v3268; // x7
  CommandCodeSkillReleaseMaster_o *v3269; // x20
  System_String_array **v3270; // x2
  System_String_array **v3271; // x3
  System_Boolean_array **v3272; // x4
  System_Int32_array **v3273; // x5
  System_Int32_array *v3274; // x6
  System_Int32_array *v3275; // x7
  CommandCodeCommentMaster_o *v3276; // x20
  System_String_array **v3277; // x2
  System_String_array **v3278; // x3
  System_Boolean_array **v3279; // x4
  System_Int32_array **v3280; // x5
  System_Int32_array *v3281; // x6
  System_Int32_array *v3282; // x7
  EventStatusMaster_o *v3283; // x20
  System_String_array **v3284; // x2
  System_String_array **v3285; // x3
  System_Boolean_array **v3286; // x4
  System_Int32_array **v3287; // x5
  System_Int32_array *v3288; // x6
  System_Int32_array *v3289; // x7
  EventStatusQuestMaster_o *v3290; // x20
  System_String_array **v3291; // x2
  System_String_array **v3292; // x3
  System_Boolean_array **v3293; // x4
  System_Int32_array **v3294; // x5
  System_Int32_array *v3295; // x6
  System_Int32_array *v3296; // x7
  CommonRestrictionMaster_o *v3297; // x20
  System_String_array **v3298; // x2
  System_String_array **v3299; // x3
  System_Boolean_array **v3300; // x4
  System_Int32_array **v3301; // x5
  System_Int32_array *v3302; // x6
  System_Int32_array *v3303; // x7
  EventPointBuffMaster_o *v3304; // x20
  System_String_array **v3305; // x2
  System_String_array **v3306; // x3
  System_Boolean_array **v3307; // x4
  System_Int32_array **v3308; // x5
  System_Int32_array *v3309; // x6
  System_Int32_array *v3310; // x7
  UserFollowMaster_o *v3311; // x20
  System_String_array **v3312; // x2
  System_String_array **v3313; // x3
  System_Boolean_array **v3314; // x4
  System_Int32_array **v3315; // x5
  System_Int32_array *v3316; // x6
  System_Int32_array *v3317; // x7
  EventRewardGuideReleaseMaster_o *v3318; // x20
  System_String_array **v3319; // x2
  System_String_array **v3320; // x3
  System_Boolean_array **v3321; // x4
  System_Int32_array **v3322; // x5
  System_Int32_array *v3323; // x6
  System_Int32_array *v3324; // x7
  NpcServantEquipMaster_o *v3325; // x20
  System_String_array **v3326; // x2
  System_String_array **v3327; // x3
  System_Boolean_array **v3328; // x4
  System_Int32_array **v3329; // x5
  System_Int32_array *v3330; // x6
  System_Int32_array *v3331; // x7
  EventCampaignReleaseMaster_o *v3332; // x20
  System_String_array **v3333; // x2
  System_String_array **v3334; // x3
  System_Boolean_array **v3335; // x4
  System_Int32_array **v3336; // x5
  System_Int32_array *v3337; // x6
  System_Int32_array *v3338; // x7
  ServantMaterialFolderMaster_o *v3339; // x20
  System_String_array **v3340; // x2
  System_String_array **v3341; // x3
  System_Boolean_array **v3342; // x4
  System_Int32_array **v3343; // x5
  System_Int32_array *v3344; // x6
  System_Int32_array *v3345; // x7
  EventEquipSkillReleaseMaster_o *v3346; // x20
  System_String_array **v3347; // x2
  System_String_array **v3348; // x3
  System_Boolean_array **v3349; // x4
  System_Int32_array **v3350; // x5
  System_Int32_array *v3351; // x6
  System_Int32_array *v3352; // x7
  EventPointActivityMaster_o *v3353; // x20
  System_String_array **v3354; // x2
  System_String_array **v3355; // x3
  System_Boolean_array **v3356; // x4
  System_Int32_array **v3357; // x5
  System_Int32_array *v3358; // x6
  System_Int32_array *v3359; // x7
  FunctionCategoryMaster_o *v3360; // x20
  System_String_array **v3361; // x2
  System_String_array **v3362; // x3
  System_Boolean_array **v3363; // x4
  System_Int32_array **v3364; // x5
  System_Int32_array *v3365; // x6
  System_Int32_array *v3366; // x7
  QuestPickupMaster_o *v3367; // x20
  System_String_array **v3368; // x2
  System_String_array **v3369; // x3
  System_Boolean_array **v3370; // x4
  System_Int32_array **v3371; // x5
  System_Int32_array *v3372; // x6
  System_Int32_array *v3373; // x7
  EventUiMaster_o *v3374; // x20
  System_String_array **v3375; // x2
  System_String_array **v3376; // x3
  System_Boolean_array **v3377; // x4
  System_Int32_array **v3378; // x5
  System_Int32_array *v3379; // x6
  System_Int32_array *v3380; // x7
  EventUiReleaseMaster_o *v3381; // x20
  System_String_array **v3382; // x2
  System_String_array **v3383; // x3
  System_Boolean_array **v3384; // x4
  System_Int32_array **v3385; // x5
  System_Int32_array *v3386; // x6
  System_Int32_array *v3387; // x7
  EventUiValueMaster_o *v3388; // x20
  System_String_array **v3389; // x2
  System_String_array **v3390; // x3
  System_Boolean_array **v3391; // x4
  System_Int32_array **v3392; // x5
  System_Int32_array *v3393; // x6
  System_Int32_array *v3394; // x7
  EventConquestRewardMaster_o *v3395; // x20
  System_String_array **v3396; // x2
  System_String_array **v3397; // x3
  System_Boolean_array **v3398; // x4
  System_Int32_array **v3399; // x5
  System_Int32_array *v3400; // x6
  System_Int32_array *v3401; // x7
  NpcFollowerReleaseMaster_o *v3402; // x20
  System_String_array **v3403; // x2
  System_String_array **v3404; // x3
  System_Boolean_array **v3405; // x4
  System_Int32_array **v3406; // x5
  System_Int32_array *v3407; // x6
  System_Int32_array *v3408; // x7
  EventBonusFilterMaster_o *v3409; // x20
  System_String_array **v3410; // x2
  System_String_array **v3411; // x3
  System_Boolean_array **v3412; // x4
  System_Int32_array **v3413; // x5
  System_Int32_array *v3414; // x6
  System_Int32_array *v3415; // x7
  EventBonusFilterGroupInfoMaster_o *v3416; // x20
  System_String_array **v3417; // x2
  System_String_array **v3418; // x3
  System_Boolean_array **v3419; // x4
  System_Int32_array **v3420; // x5
  System_Int32_array *v3421; // x6
  System_Int32_array *v3422; // x7
  EventBonusFilterGroupMemberMaster_o *v3423; // x20
  System_String_array **v3424; // x2
  System_String_array **v3425; // x3
  System_Boolean_array **v3426; // x4
  System_Int32_array **v3427; // x5
  System_Int32_array *v3428; // x6
  System_Int32_array *v3429; // x7
  UserGachaExtraCountMaster_o *v3430; // x20
  System_String_array **v3431; // x2
  System_String_array **v3432; // x3
  System_Boolean_array **v3433; // x4
  System_Int32_array **v3434; // x5
  System_Int32_array *v3435; // x6
  System_Int32_array *v3436; // x7
  PrivilegeMaster_o *v3437; // x20
  System_String_array **v3438; // x2
  System_String_array **v3439; // x3
  System_Boolean_array **v3440; // x4
  System_Int32_array **v3441; // x5
  System_Int32_array *v3442; // x6
  System_Int32_array *v3443; // x7
  UserPrivilegeMaster_o *v3444; // x20
  System_String_array **v3445; // x2
  System_String_array **v3446; // x3
  System_Boolean_array **v3447; // x4
  System_Int32_array **v3448; // x5
  System_Int32_array *v3449; // x6
  System_Int32_array *v3450; // x7
  UserQuestRouteMaster_o *v3451; // x20
  System_String_array **v3452; // x2
  System_String_array **v3453; // x3
  System_Boolean_array **v3454; // x4
  System_Int32_array **v3455; // x5
  System_Int32_array *v3456; // x6
  System_Int32_array *v3457; // x7
  EventBossStatusUiMaster_o *v3458; // x20
  System_String_array **v3459; // x2
  System_String_array **v3460; // x3
  System_Boolean_array **v3461; // x4
  System_Int32_array **v3462; // x5
  System_Int32_array *v3463; // x6
  System_Int32_array *v3464; // x7
  CommonReleaseMaster_o *v3465; // x20
  System_String_array **v3466; // x2
  System_String_array **v3467; // x3
  System_Boolean_array **v3468; // x4
  System_Int32_array **v3469; // x5
  System_Int32_array *v3470; // x6
  System_Int32_array *v3471; // x7
  QuestSpotReleaseMaster_o *v3472; // x20
  System_String_array **v3473; // x2
  System_String_array **v3474; // x3
  System_Boolean_array **v3475; // x4
  System_Int32_array **v3476; // x5
  System_Int32_array *v3477; // x6
  System_Int32_array *v3478; // x7
  VoiceMaterialCondMaster_o *v3479; // x20
  System_String_array **v3480; // x2
  System_String_array **v3481; // x3
  System_Boolean_array **v3482; // x4
  System_Int32_array **v3483; // x5
  System_Int32_array *v3484; // x6
  System_Int32_array *v3485; // x7
  ClassRelationOverwriteMaster_o *v3486; // x20
  System_String_array **v3487; // x2
  System_String_array **v3488; // x3
  System_Boolean_array **v3489; // x4
  System_Int32_array **v3490; // x5
  System_Int32_array *v3491; // x6
  System_Int32_array *v3492; // x7
  EventGroupMaster_o *v3493; // x20
  System_String_array **v3494; // x2
  System_String_array **v3495; // x3
  System_Boolean_array **v3496; // x4
  System_Int32_array **v3497; // x5
  System_Int32_array *v3498; // x6
  System_Int32_array *v3499; // x7
  TotalBoxGachaMaster_o *v3500; // x20
  System_String_array **v3501; // x2
  System_String_array **v3502; // x3
  System_Boolean_array **v3503; // x4
  System_Int32_array **v3504; // x5
  System_Int32_array *v3505; // x6
  System_Int32_array *v3506; // x7
  ServantTreasureDeviceDamageMaster_o *v3507; // x20
  System_String_array **v3508; // x2
  System_String_array **v3509; // x3
  System_Boolean_array **v3510; // x4
  System_Int32_array **v3511; // x5
  System_Int32_array *v3512; // x6
  System_Int32_array *v3513; // x7
  UserEventServantFatigueMaster_o *v3514; // x20
  System_String_array **v3515; // x2
  System_String_array **v3516; // x3
  System_Boolean_array **v3517; // x4
  System_Int32_array **v3518; // x5
  System_Int32_array *v3519; // x6
  System_Int32_array *v3520; // x7
  EventRewardBgMaster_o *v3521; // x20
  System_String_array **v3522; // x2
  System_String_array **v3523; // x3
  System_Boolean_array **v3524; // x4
  System_Int32_array **v3525; // x5
  System_Int32_array *v3526; // x6
  System_Int32_array *v3527; // x7
  EventFatigueRecoveryMaster_o *v3528; // x20
  System_String_array **v3529; // x2
  System_String_array **v3530; // x3
  System_Boolean_array **v3531; // x4
  System_Int32_array **v3532; // x5
  System_Int32_array *v3533; // x6
  System_Int32_array *v3534; // x7
  EventBoostItemUsedMaster_o *v3535; // x20
  System_String_array **v3536; // x2
  System_String_array **v3537; // x3
  System_Boolean_array **v3538; // x4
  System_Int32_array **v3539; // x5
  System_Int32_array *v3540; // x6
  System_Int32_array *v3541; // x7
  StatusEffectPosOverwriteMaster_o *v3542; // x20
  System_String_array **v3543; // x2
  System_String_array **v3544; // x3
  System_Boolean_array **v3545; // x4
  System_Int32_array **v3546; // x5
  System_Int32_array *v3547; // x6
  System_Int32_array *v3548; // x7
  QuestPhaseDetailAddMaster_o *v3549; // x20
  System_String_array **v3550; // x2
  System_String_array **v3551; // x3
  System_Boolean_array **v3552; // x4
  System_Int32_array **v3553; // x5
  System_Int32_array *v3554; // x6
  System_Int32_array *v3555; // x7
  VoiceClosedMessageMaster_o *v3556; // x20
  __int64 v3557; // x0
  System_String_array **v3558; // x2
  System_String_array **v3559; // x3
  System_Boolean_array **v3560; // x4
  System_Int32_array **v3561; // x5
  System_Int32_array *v3562; // x6
  System_Int32_array *v3563; // x7
  ReprintStageMaster_o *v3564; // x20
  System_String_array **v3565; // x2
  System_String_array **v3566; // x3
  System_Boolean_array **v3567; // x4
  System_Int32_array **v3568; // x5
  System_Int32_array *v3569; // x6
  System_Int32_array *v3570; // x7
  UserCombineExpMaster_o *v3571; // x20
  System_String_array **v3572; // x2
  System_String_array **v3573; // x3
  System_Boolean_array **v3574; // x4
  System_Int32_array **v3575; // x5
  System_Int32_array *v3576; // x6
  System_Int32_array *v3577; // x7
  EventBoardGameCellMaster_o *v3578; // x20
  System_String_array **v3579; // x2
  System_String_array **v3580; // x3
  System_Boolean_array **v3581; // x4
  System_Int32_array **v3582; // x5
  System_Int32_array *v3583; // x6
  System_Int32_array *v3584; // x7
  EventBoardGameTokenMaster_o *v3585; // x20
  System_String_array **v3586; // x2
  System_String_array **v3587; // x3
  System_Boolean_array **v3588; // x4
  System_Int32_array **v3589; // x5
  System_Int32_array *v3590; // x6
  System_Int32_array *v3591; // x7
  EventBoardGameTokenRewardMaster_o *v3592; // x20
  System_String_array **v3593; // x2
  System_String_array **v3594; // x3
  System_Boolean_array **v3595; // x4
  System_Int32_array **v3596; // x5
  System_Int32_array *v3597; // x6
  System_Int32_array *v3598; // x7
  UserEventBoardGameTokenMaster_o *v3599; // x20
  System_String_array **v3600; // x2
  System_String_array **v3601; // x3
  System_Boolean_array **v3602; // x4
  System_Int32_array **v3603; // x5
  System_Int32_array *v3604; // x6
  System_Int32_array *v3605; // x7
  ServantAnimationOverwriteMaster_o *v3606; // x20
  System_String_array **v3607; // x2
  System_String_array **v3608; // x3
  System_Boolean_array **v3609; // x4
  System_Int32_array **v3610; // x5
  System_Int32_array *v3611; // x6
  System_Int32_array *v3612; // x7
  OpeningMovieMaster_o *v3613; // x20
  System_String_array **v3614; // x2
  System_String_array **v3615; // x3
  System_Boolean_array **v3616; // x4
  System_Int32_array **v3617; // x5
  System_Int32_array *v3618; // x6
  System_Int32_array *v3619; // x7
  ServantLimitSpoilerProtectionMaster_o *v3620; // x20
  System_String_array **v3621; // x2
  System_String_array **v3622; // x3
  System_Boolean_array **v3623; // x4
  System_Int32_array **v3624; // x5
  System_Int32_array *v3625; // x6
  System_Int32_array *v3626; // x7
  PickupUserFollowerMaster_o *v3627; // x20
  System_String_array **v3628; // x2
  System_String_array **v3629; // x3
  System_Boolean_array **v3630; // x4
  System_Int32_array **v3631; // x5
  System_Int32_array *v3632; // x6
  System_Int32_array *v3633; // x7
  ServantCollectionMaster_o *v3634; // x20
  System_String_array **v3635; // x2
  System_String_array **v3636; // x3
  System_Boolean_array **v3637; // x4
  System_Int32_array **v3638; // x5
  System_Int32_array *v3639; // x6
  System_Int32_array *v3640; // x7
  GachaBehaviorMaster_o *v3641; // x20
  System_String_array **v3642; // x2
  System_String_array **v3643; // x3
  System_Boolean_array **v3644; // x4
  System_Int32_array **v3645; // x5
  System_Int32_array *v3646; // x6
  System_Int32_array *v3647; // x7
  EventQuestCooltimeMaster_o *v3648; // x20
  System_String_array **v3649; // x2
  System_String_array **v3650; // x3
  System_Boolean_array **v3651; // x4
  System_Int32_array **v3652; // x5
  System_Int32_array *v3653; // x6
  System_Int32_array *v3654; // x7
  UserEventQuestCooltimeMaster_o *v3655; // x20
  System_String_array **v3656; // x2
  System_String_array **v3657; // x3
  System_Boolean_array **v3658; // x4
  System_Int32_array **v3659; // x5
  System_Int32_array *v3660; // x6
  System_Int32_array *v3661; // x7
  BoostMaster_o *v3662; // x20
  System_String_array **v3663; // x2
  System_String_array **v3664; // x3
  System_Boolean_array **v3665; // x4
  System_Int32_array **v3666; // x5
  System_Int32_array *v3667; // x6
  System_Int32_array *v3668; // x7
  WarBoardMaster_o *v3669; // x20
  System_String_array **v3670; // x2
  System_String_array **v3671; // x3
  System_Boolean_array **v3672; // x4
  System_Int32_array **v3673; // x5
  System_Int32_array *v3674; // x6
  System_Int32_array *v3675; // x7
  WarBoardSquareMaster_o *v3676; // x20
  System_String_array **v3677; // x2
  System_String_array **v3678; // x3
  System_Boolean_array **v3679; // x4
  System_Int32_array **v3680; // x5
  System_Int32_array *v3681; // x6
  System_Int32_array *v3682; // x7
  WarBoardRoadMaster_o *v3683; // x20
  System_String_array **v3684; // x2
  System_String_array **v3685; // x3
  System_Boolean_array **v3686; // x4
  System_Int32_array **v3687; // x5
  System_Int32_array *v3688; // x6
  System_Int32_array *v3689; // x7
  WarBoardStageMaster_o *v3690; // x20
  System_String_array **v3691; // x2
  System_String_array **v3692; // x3
  System_Boolean_array **v3693; // x4
  System_Int32_array **v3694; // x5
  System_Int32_array *v3695; // x6
  System_Int32_array *v3696; // x7
  WarBoardActionPointMaster_o *v3697; // x20
  System_String_array **v3698; // x2
  System_String_array **v3699; // x3
  System_Boolean_array **v3700; // x4
  System_Int32_array **v3701; // x5
  System_Int32_array *v3702; // x6
  System_Int32_array *v3703; // x7
  WarBoardActionTrendMaster_o *v3704; // x20
  System_String_array **v3705; // x2
  System_String_array **v3706; // x3
  System_Boolean_array **v3707; // x4
  System_Int32_array **v3708; // x5
  System_Int32_array *v3709; // x6
  System_Int32_array *v3710; // x7
  WarBoardTacticalTrendMaster_o *v3711; // x20
  System_String_array **v3712; // x2
  System_String_array **v3713; // x3
  System_Boolean_array **v3714; // x4
  System_Int32_array **v3715; // x5
  System_Int32_array *v3716; // x6
  System_Int32_array *v3717; // x7
  WarBoardStageLayoutMaster_o *v3718; // x20
  System_String_array **v3719; // x2
  System_String_array **v3720; // x3
  System_Boolean_array **v3721; // x4
  System_Int32_array **v3722; // x5
  System_Int32_array *v3723; // x6
  System_Int32_array *v3724; // x7
  WarBoardStageNpcMaster_o *v3725; // x20
  System_String_array **v3726; // x2
  System_String_array **v3727; // x3
  System_Boolean_array **v3728; // x4
  System_Int32_array **v3729; // x5
  System_Int32_array *v3730; // x6
  System_Int32_array *v3731; // x7
  WarBoardStageWallMaster_o *v3732; // x20
  System_String_array **v3733; // x2
  System_String_array **v3734; // x3
  System_Boolean_array **v3735; // x4
  System_Int32_array **v3736; // x5
  System_Int32_array *v3737; // x6
  System_Int32_array *v3738; // x7
  WarBoardAIMaster_o *v3739; // x20
  System_String_array **v3740; // x2
  System_String_array **v3741; // x3
  System_Boolean_array **v3742; // x4
  System_Int32_array **v3743; // x5
  System_Int32_array *v3744; // x6
  System_Int32_array *v3745; // x7
  WarBoardRatingBaseMaster_o *v3746; // x20
  System_String_array **v3747; // x2
  System_String_array **v3748; // x3
  System_Boolean_array **v3749; // x4
  System_Int32_array **v3750; // x5
  System_Int32_array *v3751; // x6
  System_Int32_array *v3752; // x7
  WarBoardRatingOffsetMaster_o *v3753; // x20
  System_String_array **v3754; // x2
  System_String_array **v3755; // x3
  System_Boolean_array **v3756; // x4
  System_Int32_array **v3757; // x5
  System_Int32_array *v3758; // x6
  System_Int32_array *v3759; // x7
  WarBoardItemMaster_o *v3760; // x20
  System_String_array **v3761; // x2
  System_String_array **v3762; // x3
  System_Boolean_array **v3763; // x4
  System_Int32_array **v3764; // x5
  System_Int32_array *v3765; // x6
  System_Int32_array *v3766; // x7
  WarBoardTreasureMaster_o *v3767; // x20
  System_String_array **v3768; // x2
  System_String_array **v3769; // x3
  System_Boolean_array **v3770; // x4
  System_Int32_array **v3771; // x5
  System_Int32_array *v3772; // x6
  System_Int32_array *v3773; // x7
  WarBoardQuestMaster_o *v3774; // x20
  System_String_array **v3775; // x2
  System_String_array **v3776; // x3
  System_Boolean_array **v3777; // x4
  System_Int32_array **v3778; // x5
  System_Int32_array *v3779; // x6
  System_Int32_array *v3780; // x7
  WarBoardDataMaster_o *v3781; // x20
  System_String_array **v3782; // x2
  System_String_array **v3783; // x3
  System_Boolean_array **v3784; // x4
  System_Int32_array **v3785; // x5
  System_Int32_array *v3786; // x6
  System_Int32_array *v3787; // x7
  WarBoardIndividualityClassMaster_o *v3788; // x20
  System_String_array **v3789; // x2
  System_String_array **v3790; // x3
  System_Boolean_array **v3791; // x4
  System_Int32_array **v3792; // x5
  System_Int32_array *v3793; // x6
  System_Int32_array *v3794; // x7
  WarBoardActionTrendConditionMaster_o *v3795; // x20
  System_String_array **v3796; // x2
  System_String_array **v3797; // x3
  System_Boolean_array **v3798; // x4
  System_Int32_array **v3799; // x5
  System_Int32_array *v3800; // x6
  System_Int32_array *v3801; // x7
  WarBoardActionPointClassMaster_o *v3802; // x20
  System_String_array **v3803; // x2
  System_String_array **v3804; // x3
  System_Boolean_array **v3805; // x4
  System_Int32_array **v3806; // x5
  System_Int32_array *v3807; // x6
  System_Int32_array *v3808; // x7
  EventPanelMapMaster_o *v3809; // x20
  System_String_array **v3810; // x2
  System_String_array **v3811; // x3
  System_Boolean_array **v3812; // x4
  System_Int32_array **v3813; // x5
  System_Int32_array *v3814; // x6
  System_Int32_array *v3815; // x7
  EventPanelMapDetailMaster_o *v3816; // x20
  System_String_array **v3817; // x2
  System_String_array **v3818; // x3
  System_Boolean_array **v3819; // x4
  System_Int32_array **v3820; // x5
  System_Int32_array *v3821; // x6
  System_Int32_array *v3822; // x7
  EventPanelSpotMaster_o *v3823; // x20
  System_String_array **v3824; // x2
  System_String_array **v3825; // x3
  System_Boolean_array **v3826; // x4
  System_Int32_array **v3827; // x5
  System_Int32_array *v3828; // x6
  System_Int32_array *v3829; // x7
  EventPanelScanMaster_o *v3830; // x20
  System_String_array **v3831; // x2
  System_String_array **v3832; // x3
  System_Boolean_array **v3833; // x4
  System_Int32_array **v3834; // x5
  System_Int32_array *v3835; // x6
  System_Int32_array *v3836; // x7
  CommonConsumeMaster_o *v3837; // x20
  System_String_array **v3838; // x2
  System_String_array **v3839; // x3
  System_Boolean_array **v3840; // x4
  System_Int32_array **v3841; // x5
  System_Int32_array *v3842; // x6
  System_Int32_array *v3843; // x7
  UserEventMapMaster_o *v3844; // x20
  System_String_array **v3845; // x2
  System_String_array **v3846; // x3
  System_Boolean_array **v3847; // x4
  System_Int32_array **v3848; // x5
  System_Int32_array *v3849; // x6
  System_Int32_array *v3850; // x7
  UserEventSpotMaster_o *v3851; // x20
  System_String_array **v3852; // x2
  System_String_array **v3853; // x3
  System_Boolean_array **v3854; // x4
  System_Int32_array **v3855; // x5
  System_Int32_array *v3856; // x6
  System_Int32_array *v3857; // x7
  WarGroupMaster_o *v3858; // x20
  System_String_array **v3859; // x2
  System_String_array **v3860; // x3
  System_Boolean_array **v3861; // x4
  System_Int32_array **v3862; // x5
  System_Int32_array *v3863; // x6
  System_Int32_array *v3864; // x7
  ServantLimitImageMaster_o *v3865; // x20
  System_String_array **v3866; // x2
  System_String_array **v3867; // x3
  System_Boolean_array **v3868; // x4
  System_Int32_array **v3869; // x5
  System_Int32_array *v3870; // x6
  System_Int32_array *v3871; // x7
  FriendshipQuestDialogInfoMaster_o *v3872; // x20
  System_String_array **v3873; // x2
  System_String_array **v3874; // x3
  System_Boolean_array **v3875; // x4
  System_Int32_array **v3876; // x5
  System_Int32_array *v3877; // x6
  System_Int32_array *v3878; // x7
  QuestRestrictionInfoMaster_o *v3879; // x20
  System_String_array **v3880; // x2
  System_String_array **v3881; // x3
  System_Boolean_array **v3882; // x4
  System_Int32_array **v3883; // x5
  System_Int32_array *v3884; // x6
  System_Int32_array *v3885; // x7
  AssistMaster_o *v3886; // x20
  System_String_array **v3887; // x2
  System_String_array **v3888; // x3
  System_Boolean_array **v3889; // x4
  System_Int32_array **v3890; // x5
  System_Int32_array *v3891; // x6
  System_Int32_array *v3892; // x7
  WarBoardEffectMaster_o *v3893; // x20
  System_String_array **v3894; // x2
  System_String_array **v3895; // x3
  System_Boolean_array **v3896; // x4
  System_Int32_array **v3897; // x5
  System_Int32_array *v3898; // x6
  System_Int32_array *v3899; // x7
  WarBoardOnboardSkillMaster_o *v3900; // x20
  System_String_array **v3901; // x2
  System_String_array **v3902; // x3
  System_Boolean_array **v3903; // x4
  System_Int32_array **v3904; // x5
  System_Int32_array *v3905; // x6
  System_Int32_array *v3906; // x7
  BeforeBirthDayMaster_o *v3907; // x20
  System_String_array **v3908; // x2
  System_String_array **v3909; // x3
  System_Boolean_array **v3910; // x4
  System_Int32_array **v3911; // x5
  System_Int32_array *v3912; // x6
  System_Int32_array *v3913; // x7
  LoginQuestMaster_o *v3914; // x20
  System_String_array **v3915; // x2
  System_String_array **v3916; // x3
  System_Boolean_array **v3917; // x4
  System_Int32_array **v3918; // x5
  System_Int32_array *v3919; // x6
  System_Int32_array *v3920; // x7
  EventCombineCostumeMaster_o *v3921; // x20
  System_String_array **v3922; // x2
  System_String_array **v3923; // x3
  System_Boolean_array **v3924; // x4
  System_Int32_array **v3925; // x5
  System_Int32_array *v3926; // x6
  System_Int32_array *v3927; // x7
  WarBoardStagePieceDetailMaster_o *v3928; // x20
  System_String_array **v3929; // x2
  System_String_array **v3930; // x3
  System_Boolean_array **v3931; // x4
  System_Int32_array **v3932; // x5
  System_Int32_array *v3933; // x6
  System_Int32_array *v3934; // x7
  ServantTreasureDeviceAddMaster_o *v3935; // x20
  System_String_array **v3936; // x2
  System_String_array **v3937; // x3
  System_Boolean_array **v3938; // x4
  System_Int32_array **v3939; // x5
  System_Int32_array *v3940; // x6
  System_Int32_array *v3941; // x7
  SkillAddMaster_o *v3942; // x20
  System_String_array **v3943; // x2
  System_String_array **v3944; // x3
  System_Boolean_array **v3945; // x4
  System_Int32_array **v3946; // x5
  System_Int32_array *v3947; // x6
  System_Int32_array *v3948; // x7
  ServantLvDetailMaster_o *v3949; // x20
  System_String_array **v3950; // x2
  System_String_array **v3951; // x3
  System_Boolean_array **v3952; // x4
  System_Int32_array **v3953; // x5
  System_Int32_array *v3954; // x6
  System_Int32_array *v3955; // x7
  GachaAppendMaster_o *v3956; // x20
  System_String_array **v3957; // x2
  System_String_array **v3958; // x3
  System_Boolean_array **v3959; // x4
  System_Int32_array **v3960; // x5
  System_Int32_array *v3961; // x6
  System_Int32_array *v3962; // x7
  UserGachaDrawLogMaster_o *v3963; // x20
  System_String_array **v3964; // x2
  System_String_array **v3965; // x3
  System_Boolean_array **v3966; // x4
  System_Int32_array **v3967; // x5
  System_Int32_array *v3968; // x6
  System_Int32_array *v3969; // x7
  ServantAppendPassiveSkillMaster_o *v3970; // x20
  System_String_array **v3971; // x2
  System_String_array **v3972; // x3
  System_Boolean_array **v3973; // x4
  System_Int32_array **v3974; // x5
  System_Int32_array *v3975; // x6
  System_Int32_array *v3976; // x7
  UserServantAppendPassiveSkillMaster_o *v3977; // x20
  System_String_array **v3978; // x2
  System_String_array **v3979; // x3
  System_Boolean_array **v3980; // x4
  System_Int32_array **v3981; // x5
  System_Int32_array *v3982; // x6
  System_Int32_array *v3983; // x7
  UserServantAppendPassiveSkillLvMaster_o *v3984; // x20
  System_String_array **v3985; // x2
  System_String_array **v3986; // x3
  System_Boolean_array **v3987; // x4
  System_Int32_array **v3988; // x5
  System_Int32_array *v3989; // x6
  System_Int32_array *v3990; // x7
  SvtAppendPassiveSkillUnlockMaster_o *v3991; // x20
  System_String_array **v3992; // x2
  System_String_array **v3993; // x3
  System_Boolean_array **v3994; // x4
  System_Int32_array **v3995; // x5
  System_Int32_array *v3996; // x6
  System_Int32_array *v3997; // x7
  CombineAppendPassiveSkillMaster_o *v3998; // x20
  System_String_array **v3999; // x2
  System_String_array **v4000; // x3
  System_Boolean_array **v4001; // x4
  System_Int32_array **v4002; // x5
  System_Int32_array *v4003; // x6
  System_Int32_array *v4004; // x7
  SvtCoinMaster_o *v4005; // x20
  System_String_array **v4006; // x2
  System_String_array **v4007; // x3
  System_Boolean_array **v4008; // x4
  System_Int32_array **v4009; // x5
  System_Int32_array *v4010; // x6
  System_Int32_array *v4011; // x7
  UserSvtCoinMaster_o *v4012; // x20
  System_String_array **v4013; // x2
  System_String_array **v4014; // x3
  System_Boolean_array **v4015; // x4
  System_Int32_array **v4016; // x5
  System_Int32_array *v4017; // x6
  System_Int32_array *v4018; // x7
  ServantAddMaster_o *v4019; // x20
  System_String_array **v4020; // x2
  System_String_array **v4021; // x3
  System_Boolean_array **v4022; // x4
  System_Int32_array **v4023; // x5
  System_Int32_array *v4024; // x6
  System_Int32_array *v4025; // x7
  TreasureBoxMaster_o *v4026; // x20
  System_String_array **v4027; // x2
  System_String_array **v4028; // x3
  System_Boolean_array **v4029; // x4
  System_Int32_array **v4030; // x5
  System_Int32_array *v4031; // x6
  System_Int32_array *v4032; // x7
  TreasureBoxGiftMaster_o *v4033; // x20
  System_String_array **v4034; // x2
  System_String_array **v4035; // x3
  System_Boolean_array **v4036; // x4
  System_Int32_array **v4037; // x5
  System_Int32_array *v4038; // x6
  System_Int32_array *v4039; // x7
  TreasureBoxTalkMaster_o *v4040; // x20
  System_String_array **v4041; // x2
  System_String_array **v4042; // x3
  System_Boolean_array **v4043; // x4
  System_Int32_array **v4044; // x5
  System_Int32_array *v4045; // x6
  System_Int32_array *v4046; // x7
  UserEventExpeditionMaster_o *v4047; // x20
  System_String_array **v4048; // x2
  System_String_array **v4049; // x3
  System_Boolean_array **v4050; // x4
  System_Int32_array **v4051; // x5
  System_Int32_array *v4052; // x6
  System_Int32_array *v4053; // x7
  EventExpeditionMaster_o *v4054; // x20
  System_String_array **v4055; // x2
  System_String_array **v4056; // x3
  System_Boolean_array **v4057; // x4
  System_Int32_array **v4058; // x5
  System_Int32_array *v4059; // x6
  System_Int32_array *v4060; // x7
  EventExpeditionPieceMaster_o *v4061; // x20
  System_String_array **v4062; // x2
  System_String_array **v4063; // x3
  System_Boolean_array **v4064; // x4
  System_Int32_array **v4065; // x5
  System_Int32_array *v4066; // x6
  System_Int32_array *v4067; // x7
  EventRecipeMaster_o *v4068; // x20
  System_String_array **v4069; // x2
  System_String_array **v4070; // x3
  System_Boolean_array **v4071; // x4
  System_Int32_array **v4072; // x5
  System_Int32_array *v4073; // x6
  System_Int32_array *v4074; // x7
  EventRecipeGiftMaster_o *v4075; // x20
  System_String_array **v4076; // x2
  System_String_array **v4077; // x3
  System_Boolean_array **v4078; // x4
  System_Int32_array **v4079; // x5
  System_Int32_array *v4080; // x6
  System_Int32_array *v4081; // x7
  UserEventFortificationMaster_o *v4082; // x20
  __int64 v4083; // x0
  System_String_array **v4084; // x2
  System_String_array **v4085; // x3
  System_Boolean_array **v4086; // x4
  System_Int32_array **v4087; // x5
  System_Int32_array *v4088; // x6
  System_Int32_array *v4089; // x7
  EventFortificationMaster_o *v4090; // x20
  System_String_array **v4091; // x2
  System_String_array **v4092; // x3
  System_Boolean_array **v4093; // x4
  System_Int32_array **v4094; // x5
  System_Int32_array *v4095; // x6
  System_Int32_array *v4096; // x7
  EventFortificationDetailMaster_o *v4097; // x20
  System_String_array **v4098; // x2
  System_String_array **v4099; // x3
  System_Boolean_array **v4100; // x4
  System_Int32_array **v4101; // x5
  System_Int32_array *v4102; // x6
  System_Int32_array *v4103; // x7
  EventFortificationSvtMaster_o *v4104; // x20
  System_String_array **v4105; // x2
  System_String_array **v4106; // x3
  System_Boolean_array **v4107; // x4
  System_Int32_array **v4108; // x5
  System_Int32_array *v4109; // x6
  System_Int32_array *v4110; // x7
  UserServantVoicePlayedMaster_o *v4111; // x20
  System_String_array **v4112; // x2
  System_String_array **v4113; // x3
  System_Boolean_array **v4114; // x4
  System_Int32_array **v4115; // x5
  System_Int32_array *v4116; // x6
  System_Int32_array *v4117; // x7
  UpdateProfileDialogInfoMaster_o *v4118; // x20
  System_String_array **v4119; // x2
  System_String_array **v4120; // x3
  System_Boolean_array **v4121; // x4
  System_Int32_array **v4122; // x5
  System_Int32_array *v4123; // x6
  System_Int32_array *v4124; // x7
  SvtMaterialTdMaster_o *v4125; // x20
  System_String_array **v4126; // x2
  System_String_array **v4127; // x3
  System_Boolean_array **v4128; // x4
  System_Int32_array **v4129; // x5
  System_Int32_array *v4130; // x6
  System_Int32_array *v4131; // x7
  BattleMasterImageMaster_o *v4132; // x20
  System_String_array **v4133; // x2
  System_String_array **v4134; // x3
  System_Boolean_array **v4135; // x4
  System_Int32_array **v4136; // x5
  System_Int32_array *v4137; // x6
  System_Int32_array *v4138; // x7
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v4139; // x20
  System_String_array **v4140; // x2
  System_String_array **v4141; // x3
  System_Boolean_array **v4142; // x4
  System_Int32_array **v4143; // x5
  System_Int32_array *v4144; // x6
  System_Int32_array *v4145; // x7
  UserEventRandomMissionMaster_o *v4146; // x20
  System_String_array **v4147; // x2
  System_String_array **v4148; // x3
  System_Boolean_array **v4149; // x4
  System_Int32_array **v4150; // x5
  System_Int32_array *v4151; // x6
  System_Int32_array *v4152; // x7
  EventProgressValueMaster_o *v4153; // x20
  System_String_array **v4154; // x2
  System_String_array **v4155; // x3
  System_Boolean_array **v4156; // x4
  System_Int32_array **v4157; // x5
  System_Int32_array *v4158; // x6
  System_Int32_array *v4159; // x7
  SvtMultiPortraitMaster_o *v4160; // x20
  System_String_array **v4161; // x2
  System_String_array **v4162; // x3
  System_Boolean_array **v4163; // x4
  System_Int32_array **v4164; // x5
  System_Int32_array *v4165; // x6
  System_Int32_array *v4166; // x7
  EventRandomMissionMaster_o *v4167; // x20
  System_String_array **v4168; // x2
  System_String_array **v4169; // x3
  System_Boolean_array **v4170; // x4
  System_Int32_array **v4171; // x5
  System_Int32_array *v4172; // x6
  System_Int32_array *v4173; // x7
  UserGachaHistoryMaster_o *v4174; // x20
  System_String_array **v4175; // x2
  System_String_array **v4176; // x3
  System_Boolean_array **v4177; // x4
  System_Int32_array **v4178; // x5
  System_Int32_array *v4179; // x6
  System_Int32_array *v4180; // x7
  UserCoinRoomMaster_o *v4181; // x20
  System_String_array **v4182; // x2
  System_String_array **v4183; // x3
  System_Boolean_array **v4184; // x4
  System_Int32_array **v4185; // x5
  System_Int32_array *v4186; // x6
  System_Int32_array *v4187; // x7
  EventBuddyPointMaster_o *v4188; // x20
  System_String_array **v4189; // x2
  System_String_array **v4190; // x3
  System_Boolean_array **v4191; // x4
  System_Int32_array **v4192; // x5
  System_Int32_array *v4193; // x6
  System_Int32_array *v4194; // x7
  EventServantPointRankMaster_o *v4195; // x20
  System_String_array **v4196; // x2
  System_String_array **v4197; // x3
  System_Boolean_array **v4198; // x4
  System_Int32_array **v4199; // x5
  System_Int32_array *v4200; // x6
  System_Int32_array *v4201; // x7
  UserEventServantPointMaster_o *v4202; // x20
  System_String_array **v4203; // x2
  System_String_array **v4204; // x3
  System_Boolean_array **v4205; // x4
  System_Int32_array **v4206; // x5
  System_Int32_array *v4207; // x6
  System_Int32_array *v4208; // x7
  FieldMotionMaster_o *v4209; // x20
  System_String_array **v4210; // x2
  System_String_array **v4211; // x3
  System_Boolean_array **v4212; // x4
  System_Int32_array **v4213; // x5
  System_Int32_array *v4214; // x6
  System_Int32_array *v4215; // x7
  UserDeleteReservationMaster_o *v4216; // x20
  System_String_array **v4217; // x2
  System_String_array **v4218; // x3
  System_Boolean_array **v4219; // x4
  System_Int32_array **v4220; // x5
  System_Int32_array *v4221; // x6
  System_Int32_array *v4222; // x7
  ServantScriptMultipleMaster_o *v4223; // x20
  System_String_array **v4224; // x2
  System_String_array **v4225; // x3
  System_Boolean_array **v4226; // x4
  System_Int32_array **v4227; // x5
  System_Int32_array *v4228; // x6
  System_Int32_array *v4229; // x7
  EquipAddMaster_o *v4230; // x20
  System_String_array **v4231; // x2
  System_String_array **v4232; // x3
  System_Boolean_array **v4233; // x4
  System_Int32_array **v4234; // x5
  System_Int32_array *v4235; // x6
  System_Int32_array *v4236; // x7
  QuestReleaseOverwriteMaster_o *v4237; // x20
  System_String_array **v4238; // x2
  System_String_array **v4239; // x3
  System_Boolean_array **v4240; // x4
  System_Int32_array **v4241; // x5
  System_Int32_array *v4242; // x6
  System_Int32_array *v4243; // x7
  UserEventAlloutBattleMaster_o *v4244; // x20
  System_String_array **v4245; // x2
  System_String_array **v4246; // x3
  System_Boolean_array **v4247; // x4
  System_Int32_array **v4248; // x5
  System_Int32_array *v4249; // x6
  System_Int32_array *v4250; // x7
  QuestScriptMaterialNextMaster_o *v4251; // x20
  System_String_array **v4252; // x2
  System_String_array **v4253; // x3
  System_Boolean_array **v4254; // x4
  System_Int32_array **v4255; // x5
  System_Int32_array *v4256; // x6
  System_Int32_array *v4257; // x7
  EventDiggingMaster_o *v4258; // x20
  System_String_array **v4259; // x2
  System_String_array **v4260; // x3
  System_Boolean_array **v4261; // x4
  System_Int32_array **v4262; // x5
  System_Int32_array *v4263; // x6
  System_Int32_array *v4264; // x7
  EventDiggingBlockMaster_o *v4265; // x20
  System_String_array **v4266; // x2
  System_String_array **v4267; // x3
  System_Boolean_array **v4268; // x4
  System_Int32_array **v4269; // x5
  System_Int32_array *v4270; // x6
  System_Int32_array *v4271; // x7
  EventDiggingRewardMaster_o *v4272; // x20
  System_String_array **v4273; // x2
  System_String_array **v4274; // x3
  System_Boolean_array **v4275; // x4
  System_Int32_array **v4276; // x5
  System_Int32_array *v4277; // x6
  System_Int32_array *v4278; // x7
  UserEventDiggingMaster_o *v4279; // x20
  System_String_array **v4280; // x2
  System_String_array **v4281; // x3
  System_Boolean_array **v4282; // x4
  System_Int32_array **v4283; // x5
  System_Int32_array *v4284; // x6
  System_Int32_array *v4285; // x7
  BattleMessageMaster_o *v4286; // x20
  System_String_array **v4287; // x2
  System_String_array **v4288; // x3
  System_Boolean_array **v4289; // x4
  System_Int32_array **v4290; // x5
  System_Int32_array *v4291; // x6
  System_Int32_array *v4292; // x7
  BattleMessageGroupMaster_o *v4293; // x20
  System_String_array **v4294; // x2
  System_String_array **v4295; // x3
  System_Boolean_array **v4296; // x4
  System_Int32_array **v4297; // x5
  System_Int32_array *v4298; // x6
  System_Int32_array *v4299; // x7
  UserNpcSvtRecordMaster_o *v4300; // x20
  System_String_array **v4301; // x2
  System_String_array **v4302; // x3
  System_Boolean_array **v4303; // x4
  System_Int32_array **v4304; // x5
  System_Int32_array *v4305; // x6
  System_Int32_array *v4306; // x7
  BuffTypeDetailMaster_o *v4307; // x20
  System_String_array **v4308; // x2
  System_String_array **v4309; // x3
  System_Boolean_array **v4310; // x4
  System_Int32_array **v4311; // x5
  System_Int32_array *v4312; // x6
  System_Int32_array *v4313; // x7
  WarBoardMessageMaster_o *v4314; // x20
  System_String_array **v4315; // x2
  System_String_array **v4316; // x3
  System_Boolean_array **v4317; // x4
  System_Int32_array **v4318; // x5
  System_Int32_array *v4319; // x6
  System_Int32_array *v4320; // x7
  WarBoardPartySkillMaster_o *v4321; // x20
  System_String_array **v4322; // x2
  System_String_array **v4323; // x3
  System_Boolean_array **v4324; // x4
  System_Int32_array **v4325; // x5
  System_Int32_array *v4326; // x6
  System_Int32_array *v4327; // x7
  WarBoardMessageScriptMaster_o *v4328; // x20
  System_String_array **v4329; // x2
  System_String_array **v4330; // x3
  System_Boolean_array **v4331; // x4
  System_Int32_array **v4332; // x5
  System_Int32_array *v4333; // x6
  System_Int32_array *v4334; // x7
  WarQuestSelectionMaster_o *v4335; // x20
  System_String_array **v4336; // x2
  System_String_array **v4337; // x3
  System_Boolean_array **v4338; // x4
  System_Int32_array **v4339; // x5
  System_Int32_array *v4340; // x6
  System_Int32_array *v4341; // x7
  WarBoardStageDetailMaster_o *v4342; // x20
  System_String_array **v4343; // x2
  System_String_array **v4344; // x3
  System_Boolean_array **v4345; // x4
  System_Int32_array **v4346; // x5
  System_Int32_array *v4347; // x6
  System_Int32_array *v4348; // x7
  QuestScriptMaterialOverwriteMaster_o *v4349; // x20
  System_String_array **v4350; // x2
  System_String_array **v4351; // x3
  System_Boolean_array **v4352; // x4
  System_Int32_array **v4353; // x5
  System_Int32_array *v4354; // x6
  System_Int32_array *v4355; // x7
  QuestScriptBranchMaterialMaster_o *v4356; // x20
  System_String_array **v4357; // x2
  System_String_array **v4358; // x3
  System_Boolean_array **v4359; // x4
  System_Int32_array **v4360; // x5
  System_Int32_array *v4361; // x6
  System_Int32_array *v4362; // x7
  AdCheckPointMaster_o *v4363; // x20
  System_String_array **v4364; // x2
  System_String_array **v4365; // x3
  System_Boolean_array **v4366; // x4
  System_Int32_array **v4367; // x5
  System_Int32_array *v4368; // x6
  System_Int32_array *v4369; // x7
  GiftDetailMaster_o *v4370; // x20
  System_String_array **v4371; // x2
  System_String_array **v4372; // x3
  System_Boolean_array **v4373; // x4
  System_Int32_array **v4374; // x5
  System_Int32_array *v4375; // x6
  System_Int32_array *v4376; // x7
  CombineLimitGiftMaster_o *v4377; // x20
  System_String_array **v4378; // x2
  System_String_array **v4379; // x3
  System_Boolean_array **v4380; // x4
  System_Int32_array **v4381; // x5
  System_Int32_array *v4382; // x6
  System_Int32_array *v4383; // x7
  EventCooltimeRewardMaster_o *v4384; // x20
  System_String_array **v4385; // x2
  System_String_array **v4386; // x3
  System_Boolean_array **v4387; // x4
  System_Int32_array **v4388; // x5
  System_Int32_array *v4389; // x6
  System_Int32_array *v4390; // x7
  UserEventCooltimeRewardMaster_o *v4391; // x20
  System_String_array **v4392; // x2
  System_String_array **v4393; // x3
  System_Boolean_array **v4394; // x4
  System_Int32_array **v4395; // x5
  System_Int32_array *v4396; // x6
  System_Int32_array *v4397; // x7
  ClassBoardBaseMaster_o *v4398; // x20
  System_String_array **v4399; // x2
  System_String_array **v4400; // x3
  System_Boolean_array **v4401; // x4
  System_Int32_array **v4402; // x5
  System_Int32_array *v4403; // x6
  System_Int32_array *v4404; // x7
  ClassBoardLockMaster_o *v4405; // x20
  System_String_array **v4406; // x2
  System_String_array **v4407; // x3
  System_Boolean_array **v4408; // x4
  System_Int32_array **v4409; // x5
  System_Int32_array *v4410; // x6
  System_Int32_array *v4411; // x7
  ClassBoardSquareMaster_o *v4412; // x20
  System_String_array **v4413; // x2
  System_String_array **v4414; // x3
  System_Boolean_array **v4415; // x4
  System_Int32_array **v4416; // x5
  System_Int32_array *v4417; // x6
  System_Int32_array *v4418; // x7
  ClassBoardLineMaster_o *v4419; // x20
  System_String_array **v4420; // x2
  System_String_array **v4421; // x3
  System_Boolean_array **v4422; // x4
  System_Int32_array **v4423; // x5
  System_Int32_array *v4424; // x6
  System_Int32_array *v4425; // x7
  UserClassBoardSquareMaster_o *v4426; // x20
  System_String_array **v4427; // x2
  System_String_array **v4428; // x3
  System_Boolean_array **v4429; // x4
  System_Int32_array **v4430; // x5
  System_Int32_array *v4431; // x6
  System_Int32_array *v4432; // x7
  ServantCardAddMaster_o *v4433; // x20
  System_String_array **v4434; // x2
  System_String_array **v4435; // x3
  System_Boolean_array **v4436; // x4
  System_Int32_array **v4437; // x5
  System_Int32_array *v4438; // x6
  System_Int32_array *v4439; // x7
  MapLayerMaster_o *v4440; // x20
  System_String_array **v4441; // x2
  System_String_array **v4442; // x3
  System_Boolean_array **v4443; // x4
  System_Int32_array **v4444; // x5
  System_Int32_array *v4445; // x6
  System_Int32_array *v4446; // x7
  SpotLayerMaster_o *v4447; // x20
  System_String_array **v4448; // x2
  System_String_array **v4449; // x3
  System_Boolean_array **v4450; // x4
  System_Int32_array **v4451; // x5
  System_Int32_array *v4452; // x6
  System_Int32_array *v4453; // x7
  MapGimmickLayerMaster_o *v4454; // x20
  System_String_array **v4455; // x2
  System_String_array **v4456; // x3
  System_Boolean_array **v4457; // x4
  System_Int32_array **v4458; // x5
  System_Int32_array *v4459; // x6
  System_Int32_array *v4460; // x7
  EventDataLostBattleMaster_o *v4461; // x20
  System_String_array **v4462; // x2
  System_String_array **v4463; // x3
  System_Boolean_array **v4464; // x4
  System_Int32_array **v4465; // x5
  System_Int32_array *v4466; // x6
  System_Int32_array *v4467; // x7
  EventDataLostBattleResetMaster_o *v4468; // x20
  System_String_array **v4469; // x2
  System_String_array **v4470; // x3
  System_Boolean_array **v4471; // x4
  System_Int32_array **v4472; // x5
  System_Int32_array *v4473; // x6
  System_Int32_array *v4474; // x7
  UserEventDataLostMaster_o *v4475; // x20
  System_String_array **v4476; // x2
  System_String_array **v4477; // x3
  System_Boolean_array **v4478; // x4
  System_Int32_array **v4479; // x5
  System_Int32_array *v4480; // x6
  System_Int32_array *v4481; // x7
  QuestHintMaster_o *v4482; // x20
  System_String_array **v4483; // x2
  System_String_array **v4484; // x3
  System_Boolean_array **v4485; // x4
  System_Int32_array **v4486; // x5
  System_Int32_array *v4487; // x6
  System_Int32_array *v4488; // x7
  FuncTypeDetailMaster_o *v4489; // x20
  System_String_array **v4490; // x2
  System_String_array **v4491; // x3
  System_Boolean_array **v4492; // x4
  System_Int32_array **v4493; // x5
  System_Int32_array *v4494; // x6
  System_Int32_array *v4495; // x7
  BuffConvertMaster_o *v4496; // x20
  System_String_array **v4497; // x2
  System_String_array **v4498; // x3
  System_Boolean_array **v4499; // x4
  System_Int32_array **v4500; // x5
  System_Int32_array *v4501; // x6
  System_Int32_array *v4502; // x7
  SkillGroupMaster_o *v4503; // x20
  System_String_array **v4504; // x2
  System_String_array **v4505; // x3
  System_Boolean_array **v4506; // x4
  System_Int32_array **v4507; // x5
  System_Int32_array *v4508; // x6
  System_Int32_array *v4509; // x7
  SkillGroupOverwriteMaster_o *v4510; // x20
  System_String_array **v4511; // x2
  System_String_array **v4512; // x3
  System_Boolean_array **v4513; // x4
  System_Int32_array **v4514; // x5
  System_Int32_array *v4515; // x6
  System_Int32_array *v4516; // x7
  SkillIndividualityMaster_o *v4517; // x20
  System_String_array **v4518; // x2
  System_String_array **v4519; // x3
  System_Boolean_array **v4520; // x4
  System_Int32_array **v4521; // x5
  System_Int32_array *v4522; // x6
  System_Int32_array *v4523; // x7
  RestrictionBaseMaster_o *v4524; // x20
  System_String_array **v4525; // x2
  System_String_array **v4526; // x3
  System_Boolean_array **v4527; // x4
  System_Int32_array **v4528; // x5
  System_Int32_array *v4529; // x6
  System_Int32_array *v4530; // x7
  RestrictionSlotMaster_o *v4531; // x20
  System_String_array **v4532; // x2
  System_String_array **v4533; // x3
  System_Boolean_array **v4534; // x4
  System_Int32_array **v4535; // x5
  System_Int32_array *v4536; // x6
  System_Int32_array *v4537; // x7
  RestrictionSlotDetailMaster_o *v4538; // x20
  System_String_array **v4539; // x2
  System_String_array **v4540; // x3
  System_Boolean_array **v4541; // x4
  System_Int32_array **v4542; // x5
  System_Int32_array *v4543; // x6
  System_Int32_array *v4544; // x7
  RestrictionMessageMaster_o *v4545; // x20
  System_String_array **v4546; // x2
  System_String_array **v4547; // x3
  System_Boolean_array **v4548; // x4
  System_Int32_array **v4549; // x5
  System_Int32_array *v4550; // x6
  System_Int32_array *v4551; // x7
  RestrictionWholeMaster_o *v4552; // x20
  System_String_array **v4553; // x2
  System_String_array **v4554; // x3
  System_Boolean_array **v4555; // x4
  System_Int32_array **v4556; // x5
  System_Int32_array *v4557; // x6
  System_Int32_array *v4558; // x7
  FuncDispMaster_o *v4559; // x20
  System_String_array **v4560; // x2
  System_String_array **v4561; // x3
  System_Boolean_array **v4562; // x4
  System_Int32_array **v4563; // x5
  System_Int32_array *v4564; // x6
  System_Int32_array *v4565; // x7
  ClassBoardCommandSpellMaster_o *v4566; // x20
  System_String_array **v4567; // x2
  System_String_array **v4568; // x3
  System_Boolean_array **v4569; // x4
  System_Int32_array **v4570; // x5
  System_Int32_array *v4571; // x6
  System_Int32_array *v4572; // x7
  ClassBoardClassMaster_o *v4573; // x20
  System_String_array **v4574; // x2
  System_String_array **v4575; // x3
  System_Boolean_array **v4576; // x4
  System_Int32_array **v4577; // x5
  System_Int32_array *v4578; // x6
  System_Int32_array *v4579; // x7
  EventCommandAssistMaster_o *v4580; // x20
  System_String_array **v4581; // x2
  System_String_array **v4582; // x3
  System_Boolean_array **v4583; // x4
  System_Int32_array **v4584; // x5
  System_Int32_array *v4585; // x6
  System_Int32_array *v4586; // x7
  EventMissionGroupMaster_o *v4587; // x20
  System_String_array **v4588; // x2
  System_String_array **v4589; // x3
  System_Boolean_array **v4590; // x4
  System_Int32_array **v4591; // x5
  System_Int32_array *v4592; // x6
  System_Int32_array *v4593; // x7
  CombineLimitReleaseMaster_o *v4594; // x20
  System_String_array **v4595; // x2
  System_String_array **v4596; // x3
  System_Boolean_array **v4597; // x4
  System_Int32_array **v4598; // x5
  System_Int32_array *v4599; // x6
  System_Int32_array *v4600; // x7
  HeelPortraitMaster_o *v4601; // x20
  System_String_array **v4602; // x2
  System_String_array **v4603; // x3
  System_Boolean_array **v4604; // x4
  System_Int32_array **v4605; // x5
  System_Int32_array *v4606; // x6
  System_Int32_array *v4607; // x7
  UserHeelPortraitMaster_o *v4608; // x20
  __int64 v4609; // x0
  System_String_array **v4610; // x2
  System_String_array **v4611; // x3
  System_Boolean_array **v4612; // x4
  System_Int32_array **v4613; // x5
  System_Int32_array *v4614; // x6
  System_Int32_array *v4615; // x7
  TreasureDeviceSequenceWeightMaster_o *v4616; // x20
  System_String_array **v4617; // x2
  System_String_array **v4618; // x3
  System_Boolean_array **v4619; // x4
  System_Int32_array **v4620; // x5
  System_Int32_array *v4621; // x6
  System_Int32_array *v4622; // x7
  NpcServantFollowerIndividualityMaster_o *v4623; // x20
  System_String_array **v4624; // x2
  System_String_array **v4625; // x3
  System_Boolean_array **v4626; // x4
  System_Int32_array **v4627; // x5
  System_Int32_array *v4628; // x6
  System_Int32_array *v4629; // x7
  GachaExtraGiftMaster_o *v4630; // x20
  System_String_array **v4631; // x2
  System_String_array **v4632; // x3
  System_Boolean_array **v4633; // x4
  System_Int32_array **v4634; // x5
  System_Int32_array *v4635; // x6
  System_Int32_array *v4636; // x7
  EventMuralMaster_o *v4637; // x20
  System_String_array **v4638; // x2
  System_String_array **v4639; // x3
  System_Boolean_array **v4640; // x4
  System_Int32_array **v4641; // x5
  System_Int32_array *v4642; // x6
  System_Int32_array *v4643; // x7
  ViewWaveEnemyMaster_o *v4644; // x20
  System_String_array **v4645; // x2
  System_String_array **v4646; // x3
  System_Boolean_array **v4647; // x4
  System_Int32_array **v4648; // x5
  System_Int32_array *v4649; // x6
  System_Int32_array *v4650; // x7
  BlankEarthSpotNavimenuMaster_o *v4651; // x20
  System_String_array **v4652; // x2
  System_String_array **v4653; // x3
  System_Boolean_array **v4654; // x4
  System_Int32_array **v4655; // x5
  System_Int32_array *v4656; // x6
  System_Int32_array *v4657; // x7
  BlankEarthGimmickMaster_o *v4658; // x20
  System_String_array **v4659; // x2
  System_String_array **v4660; // x3
  System_Boolean_array **v4661; // x4
  System_Int32_array **v4662; // x5
  System_Int32_array *v4663; // x6
  System_Int32_array *v4664; // x7
  TerminalOverwriteMaster_o *v4665; // x20
  System_String_array **v4666; // x2
  System_String_array **v4667; // x3
  System_Boolean_array **v4668; // x4
  System_Int32_array **v4669; // x5
  System_Int32_array *v4670; // x6
  System_Int32_array *v4671; // x7
  UserExchangeSvtMaster_o *v4672; // x20
  System_String_array **v4673; // x2
  System_String_array **v4674; // x3
  System_Boolean_array **v4675; // x4
  System_Int32_array **v4676; // x5
  System_Int32_array *v4677; // x6
  System_Int32_array *v4678; // x7
  WarBoardCommonReleaseMaster_o *v4679; // x20
  System_String_array **v4680; // x2
  System_String_array **v4681; // x3
  System_Boolean_array **v4682; // x4
  System_Int32_array **v4683; // x5
  System_Int32_array *v4684; // x6
  System_Int32_array *v4685; // x7
  WarBoardEventMaster_o *v4686; // x20
  System_String_array **v4687; // x2
  System_String_array **v4688; // x3
  System_Boolean_array **v4689; // x4
  System_Int32_array **v4690; // x5
  System_Int32_array *v4691; // x6
  System_Int32_array *v4692; // x7
  WarBoardEventScriptMaster_o *v4693; // x20
  System_String_array **v4694; // x2
  System_String_array **v4695; // x3
  System_Boolean_array **v4696; // x4
  System_Int32_array **v4697; // x5
  System_Int32_array *v4698; // x6
  System_Int32_array *v4699; // x7
  WarBoardStageBossMaster_o *v4700; // x20
  System_String_array **v4701; // x2
  System_String_array **v4702; // x3
  System_Boolean_array **v4703; // x4
  System_Int32_array **v4704; // x5
  System_Int32_array *v4705; // x6
  System_Int32_array *v4706; // x7
  WarBoardSquareIndexGroupMaster_o *v4707; // x20
  System_String_array **v4708; // x2
  System_String_array **v4709; // x3
  System_Boolean_array **v4710; // x4
  System_Int32_array **v4711; // x5
  System_Int32_array *v4712; // x6
  System_Int32_array *v4713; // x7
  WarBoardActionTrendGroupMaster_o *v4714; // x20
  System_String_array **v4715; // x2
  System_String_array **v4716; // x3
  System_Boolean_array **v4717; // x4
  System_Int32_array **v4718; // x5
  System_Int32_array *v4719; // x6
  System_Int32_array *v4720; // x7
  WarBoardRatingOffsetGroupMaster_o *v4721; // x20
  System_String_array **v4722; // x2
  System_String_array **v4723; // x3
  System_Boolean_array **v4724; // x4
  System_Int32_array **v4725; // x5
  System_Int32_array *v4726; // x6
  System_Int32_array *v4727; // x7
  WarBoardReinforcementsMaster_o *v4728; // x20
  System_String_array **v4729; // x2
  System_String_array **v4730; // x3
  System_Boolean_array **v4731; // x4
  System_Int32_array **v4732; // x5
  System_Int32_array *v4733; // x6
  System_Int32_array *v4734; // x7
  WarBoardStageReinforcementsMaster_o *v4735; // x20
  System_String_array **v4736; // x2
  System_String_array **v4737; // x3
  System_Boolean_array **v4738; // x4
  System_Int32_array **v4739; // x5
  System_Int32_array *v4740; // x6
  System_Int32_array *v4741; // x7
  WarBoardFutureActionTrendMaster_o *v4742; // x20
  System_String_array **v4743; // x2
  System_String_array **v4744; // x3
  System_Boolean_array **v4745; // x4
  System_Int32_array **v4746; // x5
  System_Int32_array *v4747; // x6
  System_Int32_array *v4748; // x7
  ServantProfilePushMaster_o *v4749; // x20
  System_String_array **v4750; // x2
  System_String_array **v4751; // x3
  System_Boolean_array **v4752; // x4
  System_Int32_array **v4753; // x5
  System_Int32_array *v4754; // x6
  System_Int32_array *v4755; // x7
  MapGimmickPathMaster_o *v4756; // x20
  System_String_array **v4757; // x2
  System_String_array **v4758; // x3
  System_Boolean_array **v4759; // x4
  System_Int32_array **v4760; // x5
  System_Int32_array *v4761; // x6
  System_Int32_array *v4762; // x7
  MapGimmickPathReleaseMaster_o *v4763; // x20
  System_String_array **v4764; // x2
  System_String_array **v4765; // x3
  System_Boolean_array **v4766; // x4
  System_Int32_array **v4767; // x5
  System_Int32_array *v4768; // x6
  System_Int32_array *v4769; // x7
  ServantOverwriteMaster_o *v4770; // x20
  System_String_array **v4771; // x2
  System_String_array **v4772; // x3
  System_Boolean_array **v4773; // x4
  System_Int32_array **v4774; // x5
  System_Int32_array *v4775; // x6
  System_Int32_array *v4776; // x7
  IndividualityPolicyMaster_o *v4777; // x20
  System_String_array **v4778; // x2
  System_String_array **v4779; // x3
  System_Boolean_array **v4780; // x4
  System_Int32_array **v4781; // x5
  System_Int32_array *v4782; // x6
  System_Int32_array *v4783; // x7
  IndividualityPersonalityMaster_o *v4784; // x20
  System_String_array **v4785; // x2
  System_String_array **v4786; // x3
  System_Boolean_array **v4787; // x4
  System_Int32_array **v4788; // x5
  System_Int32_array *v4789; // x6
  System_Int32_array *v4790; // x7
  AttriMaster_o *v4791; // x20
  System_String_array **v4792; // x2
  System_String_array **v4793; // x3
  System_Boolean_array **v4794; // x4
  System_Int32_array **v4795; // x5
  System_Int32_array *v4796; // x6
  System_Int32_array *v4797; // x7
  ServantVoicePatternMaster_o *v4798; // x20
  System_String_array **v4799; // x2
  System_String_array **v4800; // x3
  System_Boolean_array **v4801; // x4
  System_Int32_array **v4802; // x5
  System_Int32_array *v4803; // x6
  System_Int32_array *v4804; // x7
  UserGameCommonMaster_o *v4805; // x20
  System_String_array **v4806; // x2
  System_String_array **v4807; // x3
  System_Boolean_array **v4808; // x4
  System_Int32_array **v4809; // x5
  System_Int32_array *v4810; // x6
  System_Int32_array *v4811; // x7
  ServantPhotoMaster_o *v4812; // x20
  System_String_array **v4813; // x2
  System_String_array **v4814; // x3
  System_Boolean_array **v4815; // x4
  System_Int32_array **v4816; // x5
  System_Int32_array *v4817; // x6
  System_Int32_array *v4818; // x7
  MasterPhotoMaster_o *v4819; // x20
  System_String_array **v4820; // x2
  System_String_array **v4821; // x3
  System_Boolean_array **v4822; // x4
  System_Int32_array **v4823; // x5
  System_Int32_array *v4824; // x6
  System_Int32_array *v4825; // x7
  WarMessageMaster_o *v4826; // x20
  System_String_array **v4827; // x2
  System_String_array **v4828; // x3
  System_Boolean_array **v4829; // x4
  System_Int32_array **v4830; // x5
  System_Int32_array *v4831; // x6
  System_Int32_array *v4832; // x7
  QuestAutoOrganizationAdjustMaster_o *v4833; // x20
  System_String_array **v4834; // x2
  System_String_array **v4835; // x3
  System_Boolean_array **v4836; // x4
  System_Int32_array **v4837; // x5
  System_Int32_array *v4838; // x6
  System_Int32_array *v4839; // x7
  ExcludeMotionMaster_o *v4840; // x20
  System_String_array **v4841; // x2
  System_String_array **v4842; // x3
  System_Boolean_array **v4843; // x4
  System_Int32_array **v4844; // x5
  System_Int32_array *v4845; // x6
  System_Int32_array *v4846; // x7
  UserInterruptionQuestMaster_o *v4847; // x20
  System_String_array **v4848; // x2
  System_String_array **v4849; // x3
  System_Boolean_array **v4850; // x4
  System_Int32_array **v4851; // x5
  System_Int32_array *v4852; // x6
  System_Int32_array *v4853; // x7
  __int64 v4855; // x0
  __int64 v4856; // x0
  __int64 v4857; // x0
  __int64 v4858; // x0
  __int64 v4859; // x0
  __int64 v4860; // x0
  __int64 v4861; // x0
  __int64 v4862; // x0
  __int64 v4863; // x0
  __int64 v4864; // x0
  __int64 v4865; // x0
  __int64 v4866; // x0
  __int64 v4867; // x0
  __int64 v4868; // x0

  if ( (byte_42EA375 & 1) == 0 )
  {
    sub_B5D5C4(&AccessaryMaster_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&AdCheckPointMaster_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&AiActMaster_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&AiFieldMaster_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&AiMaster_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&AreaMaster_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&AssistMaster_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&AttriMaster_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&AttriRelationMaster_TypeInfo, v25, v26, v27);
    sub_B5D5C4(&AuraEffectMaster_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&AuraEffectPosOverwriteMaster_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&BankShopMaster_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&BannerAddMaster_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&BannerMaster_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&BattleBgMaster_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&BattleMasterImageMaster_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&BattleMaster_TypeInfo, v49, v50, v51);
    sub_B5D5C4(&BattleMessageGroupMaster_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&BattleMessageMaster_TypeInfo, v55, v56, v57);
    sub_B5D5C4(&BeforeBirthDayMaster_TypeInfo, v58, v59, v60);
    sub_B5D5C4(&BgmMaster_TypeInfo, v61, v62, v63);
    sub_B5D5C4(&BgmReleaseMaster_TypeInfo, v64, v65, v66);
    sub_B5D5C4(&BlankEarthGimmickMaster_TypeInfo, v67, v68, v69);
    sub_B5D5C4(&BlankEarthSpotAddMaster_TypeInfo, v70, v71, v72);
    sub_B5D5C4(&BlankEarthSpotMaster_TypeInfo, v73, v74, v75);
    sub_B5D5C4(&BlankEarthSpotNavimenuMaster_TypeInfo, v76, v77, v78);
    sub_B5D5C4(&BoardMessageMaster_TypeInfo, v79, v80, v81);
    sub_B5D5C4(&BoardMessageReleaseMaster_TypeInfo, v82, v83, v84);
    sub_B5D5C4(&BoostMaster_TypeInfo, v85, v86, v87);
    sub_B5D5C4(&BoxGachaBaseDetailMaster_TypeInfo, v88, v89, v90);
    sub_B5D5C4(&BoxGachaBaseMaster_TypeInfo, v91, v92, v93);
    sub_B5D5C4(&BoxGachaHistoryMaster_TypeInfo, v94, v95, v96);
    sub_B5D5C4(&BoxGachaMaster_TypeInfo, v97, v98, v99);
    sub_B5D5C4(&BoxGachaTalkMaster_TypeInfo, v100, v101, v102);
    sub_B5D5C4(&BuffConvertMaster_TypeInfo, v103, v104, v105);
    sub_B5D5C4(&BuffMaster_TypeInfo, v106, v107, v108);
    sub_B5D5C4(&BuffTypeDetailMaster_TypeInfo, v109, v110, v111);
    sub_B5D5C4(&CampaignInfoMaster_TypeInfo, v112, v113, v114);
    sub_B5D5C4(&CardMaster_TypeInfo, v115, v116, v117);
    sub_B5D5C4(&ClassBoardBaseMaster_TypeInfo, v118, v119, v120);
    sub_B5D5C4(&ClassBoardClassMaster_TypeInfo, v121, v122, v123);
    sub_B5D5C4(&ClassBoardCommandSpellMaster_TypeInfo, v124, v125, v126);
    sub_B5D5C4(&ClassBoardLineMaster_TypeInfo, v127, v128, v129);
    sub_B5D5C4(&ClassBoardLockMaster_TypeInfo, v130, v131, v132);
    sub_B5D5C4(&ClassBoardSquareMaster_TypeInfo, v133, v134, v135);
    sub_B5D5C4(&ClassRelationMaster_TypeInfo, v136, v137, v138);
    sub_B5D5C4(&ClassRelationOverwriteMaster_TypeInfo, v139, v140, v141);
    sub_B5D5C4(&ClosedMessageMaster_TypeInfo, v142, v143, v144);
    sub_B5D5C4(&CombineAppendPassiveSkillMaster_TypeInfo, v145, v146, v147);
    sub_B5D5C4(&CombineCostumeMaster_TypeInfo, v148, v149, v150);
    sub_B5D5C4(&CombineLimitGiftMaster_TypeInfo, v151, v152, v153);
    sub_B5D5C4(&CombineLimitMaster_TypeInfo, v154, v155, v156);
    sub_B5D5C4(&CombineLimitReleaseMaster_TypeInfo, v157, v158, v159);
    sub_B5D5C4(&CombineMaster_TypeInfo, v160, v161, v162);
    sub_B5D5C4(&CombineMaterialMaster_TypeInfo, v163, v164, v165);
    sub_B5D5C4(&CombineQpMaster_TypeInfo, v166, v167, v168);
    sub_B5D5C4(&CombineQpSvtEquipMaster_TypeInfo, v169, v170, v171);
    sub_B5D5C4(&CombineSkillMaster_TypeInfo, v172, v173, v174);
    sub_B5D5C4(&CombineTdMaster_TypeInfo, v175, v176, v177);
    sub_B5D5C4(&CommandCardRankParamMaster_TypeInfo, v178, v179, v180);
    sub_B5D5C4(&CommandCodeCommentMaster_TypeInfo, v181, v182, v183);
    sub_B5D5C4(&CommandCodeMaster_TypeInfo, v184, v185, v186);
    sub_B5D5C4(&CommandCodeSkillMaster_TypeInfo, v187, v188, v189);
    sub_B5D5C4(&CommandCodeSkillReleaseMaster_TypeInfo, v190, v191, v192);
    sub_B5D5C4(&CommandSpellMaster_TypeInfo, v193, v194, v195);
    sub_B5D5C4(&CommonConsumeMaster_TypeInfo, v196, v197, v198);
    sub_B5D5C4(&CommonReleaseMaster_TypeInfo, v199, v200, v201);
    sub_B5D5C4(&CommonRestrictionMaster_TypeInfo, v202, v203, v204);
    sub_B5D5C4(&CompleteMissionMaster_TypeInfo, v205, v206, v207);
    sub_B5D5C4(&ConstantLongMaster_TypeInfo, v208, v209, v210);
    sub_B5D5C4(&ConstantMaster_TypeInfo, v211, v212, v213);
    sub_B5D5C4(&ConstantStrMaster_TypeInfo, v214, v215, v216);
    sub_B5D5C4(&CvMaster_TypeInfo, v217, v218, v219);
    sub_B5D5C4(&DataMasterBase___TypeInfo, v220, v221, v222);
    sub_B5D5C4(&DialogMessageMaster_TypeInfo, v223, v224, v225);
    sub_B5D5C4(&EffectMaster_TypeInfo, v226, v227, v228);
    sub_B5D5C4(&EnemyMstBattleMaster_TypeInfo, v229, v230, v231);
    sub_B5D5C4(&EnemyMstMaster_TypeInfo, v232, v233, v234);
    sub_B5D5C4(&EquipAddMaster_TypeInfo, v235, v236, v237);
    sub_B5D5C4(&EquipExpMaster_TypeInfo, v238, v239, v240);
    sub_B5D5C4(&EquipImageMaster_TypeInfo, v241, v242, v243);
    sub_B5D5C4(&EquipMaster_TypeInfo, v244, v245, v246);
    sub_B5D5C4(&EquipSkillMaster_TypeInfo, v247, v248, v249);
    sub_B5D5C4(&EventAddMaster_TypeInfo, v250, v251, v252);
    sub_B5D5C4(&EventBoardGameCellMaster_TypeInfo, v253, v254, v255);
    sub_B5D5C4(&EventBoardGameTokenMaster_TypeInfo, v256, v257, v258);
    sub_B5D5C4(&EventBoardGameTokenRewardMaster_TypeInfo, v259, v260, v261);
    sub_B5D5C4(&EventBonusFilterGroupInfoMaster_TypeInfo, v262, v263, v264);
    sub_B5D5C4(&EventBonusFilterGroupMemberMaster_TypeInfo, v265, v266, v267);
    sub_B5D5C4(&EventBonusFilterMaster_TypeInfo, v268, v269, v270);
    sub_B5D5C4(&EventBoostItemUsedMaster_TypeInfo, v271, v272, v273);
    sub_B5D5C4(&EventBossStatusUiMaster_TypeInfo, v274, v275, v276);
    sub_B5D5C4(&EventBuddyPointMaster_TypeInfo, v277, v278, v279);
    sub_B5D5C4(&EventBulletinBoardMaster_TypeInfo, v280, v281, v282);
    sub_B5D5C4(&EventBulletinBoardReleaseMaster_TypeInfo, v283, v284, v285);
    sub_B5D5C4(&EventCampaignMaster_TypeInfo, v286, v287, v288);
    sub_B5D5C4(&EventCampaignReleaseMaster_TypeInfo, v289, v290, v291);
    sub_B5D5C4(&EventCombineCostumeMaster_TypeInfo, v292, v293, v294);
    sub_B5D5C4(&EventCombineMaster_TypeInfo, v295, v296, v297);
    sub_B5D5C4(&EventCommandAssistMaster_TypeInfo, v298, v299, v300);
    sub_B5D5C4(&EventConquestRewardMaster_TypeInfo, v301, v302, v303);
    sub_B5D5C4(&EventCooltimeRewardMaster_TypeInfo, v304, v305, v306);
    sub_B5D5C4(&EventDataLostBattleMaster_TypeInfo, v307, v308, v309);
    sub_B5D5C4(&EventDataLostBattleResetMaster_TypeInfo, v310, v311, v312);
    sub_B5D5C4(&EventDetailMaster_TypeInfo, v313, v314, v315);
    sub_B5D5C4(&EventDiggingBlockMaster_TypeInfo, v316, v317, v318);
    sub_B5D5C4(&EventDiggingMaster_TypeInfo, v319, v320, v321);
    sub_B5D5C4(&EventDiggingRewardMaster_TypeInfo, v322, v323, v324);
    sub_B5D5C4(&EventEquipSkillReleaseMaster_TypeInfo, v325, v326, v327);
    sub_B5D5C4(&EventExpeditionMaster_TypeInfo, v328, v329, v330);
    sub_B5D5C4(&EventExpeditionPieceMaster_TypeInfo, v331, v332, v333);
    sub_B5D5C4(&EventFactoryMaster_TypeInfo, v334, v335, v336);
    sub_B5D5C4(&EventFatigueRecoveryMaster_TypeInfo, v337, v338, v339);
    sub_B5D5C4(&EventFilterMaster_TypeInfo, v340, v341, v342);
    sub_B5D5C4(&EventFortificationDetailMaster_TypeInfo, v343, v344, v345);
    sub_B5D5C4(&EventFortificationMaster_TypeInfo, v346, v347, v348);
    sub_B5D5C4(&EventFortificationSvtMaster_TypeInfo, v349, v350, v351);
    sub_B5D5C4(&EventGroupMaster_TypeInfo, v352, v353, v354);
    sub_B5D5C4(&EventItemDisplayGroupMaster_TypeInfo, v355, v356, v357);
    sub_B5D5C4(&EventItemDisplayMaster_TypeInfo, v358, v359, v360);
    sub_B5D5C4(&EventItemDisplayReleaseMaster_TypeInfo, v361, v362, v363);
    sub_B5D5C4(&EventLocationCampaignMaster_TypeInfo, v364, v365, v366);
    sub_B5D5C4(&EventMaster_TypeInfo, v367, v368, v369);
    sub_B5D5C4(&EventMissionActionAddMaster_TypeInfo, v370, v371, v372);
    sub_B5D5C4(&EventMissionActionMaster_TypeInfo, v373, v374, v375);
    sub_B5D5C4(&EventMissionAddMaster_TypeInfo, v376, v377, v378);
    sub_B5D5C4(&EventMissionCondDetailMaster_TypeInfo, v379, v380, v381);
    sub_B5D5C4(&EventMissionConditionMaster_TypeInfo, v382, v383, v384);
    sub_B5D5C4(&EventMissionGroupMaster_TypeInfo, v385, v386, v387);
    sub_B5D5C4(&EventMissionMaster_TypeInfo, v388, v389, v390);
    sub_B5D5C4(&EventMuralMaster_TypeInfo, v391, v392, v393);
    sub_B5D5C4(&EventPanelMapDetailMaster_TypeInfo, v394, v395, v396);
    sub_B5D5C4(&EventPanelMapMaster_TypeInfo, v397, v398, v399);
    sub_B5D5C4(&EventPanelScanMaster_TypeInfo, v400, v401, v402);
    sub_B5D5C4(&EventPanelSpotMaster_TypeInfo, v403, v404, v405);
    sub_B5D5C4(&EventPointActivityMaster_TypeInfo, v406, v407, v408);
    sub_B5D5C4(&EventPointBuffMaster_TypeInfo, v409, v410, v411);
    sub_B5D5C4(&EventPointGroupAddMaster_TypeInfo, v412, v413, v414);
    sub_B5D5C4(&EventPointGroupMaster_TypeInfo, v415, v416, v417);
    sub_B5D5C4(&EventPointMaster_TypeInfo, v418, v419, v420);
    sub_B5D5C4(&EventPointUpperMaster_TypeInfo, v421, v422, v423);
    sub_B5D5C4(&EventPointUpperReleaseMaster_TypeInfo, v424, v425, v426);
    sub_B5D5C4(&EventProgressValueMaster_TypeInfo, v427, v428, v429);
    sub_B5D5C4(&EventQuestCooltimeMaster_TypeInfo, v430, v431, v432);
    sub_B5D5C4(&EventQuestMaster_TypeInfo, v433, v434, v435);
    sub_B5D5C4(&EventRaceMaster_TypeInfo, v436, v437, v438);
    sub_B5D5C4(&EventRaceResultMaster_TypeInfo, v439, v440, v441);
    sub_B5D5C4(&EventRaidMaster_TypeInfo, v442, v443, v444);
    sub_B5D5C4(&EventRandomMissionMaster_TypeInfo, v445, v446, v447);
    sub_B5D5C4(&EventRecipeGiftMaster_TypeInfo, v448, v449, v450);
    sub_B5D5C4(&EventRecipeMaster_TypeInfo, v451, v452, v453);
    sub_B5D5C4(&EventRewardBgMaster_TypeInfo, v454, v455, v456);
    sub_B5D5C4(&EventRewardExtraMaster_TypeInfo, v457, v458, v459);
    sub_B5D5C4(&EventRewardGuideReleaseMaster_TypeInfo, v460, v461, v462);
    sub_B5D5C4(&EventRewardMaster_TypeInfo, v463, v464, v465);
    sub_B5D5C4(&EventRewardSceneMaster_TypeInfo, v466, v467, v468);
    sub_B5D5C4(&EventRewardSceneReleaseMaster_TypeInfo, v469, v470, v471);
    sub_B5D5C4(&EventRewardSetMaster_TypeInfo, v472, v473, v474);
    sub_B5D5C4(&EventScriptMaster_TypeInfo, v475, v476, v477);
    sub_B5D5C4(&EventScriptReleaseMaster_TypeInfo, v478, v479, v480);
    sub_B5D5C4(&EventServantFatigueMaster_TypeInfo, v481, v482, v483);
    sub_B5D5C4(&EventServantMaster_TypeInfo, v484, v485, v486);
    sub_B5D5C4(&EventServantPointRankMaster_TypeInfo, v487, v488, v489);
    sub_B5D5C4(&EventStatusMaster_TypeInfo, v490, v491, v492);
    sub_B5D5C4(&EventStatusQuestMaster_TypeInfo, v493, v494, v495);
    sub_B5D5C4(&EventSuperBossMaster_TypeInfo, v496, v497, v498);
    sub_B5D5C4(&EventTowerMaster_TypeInfo, v499, v500, v501);
    sub_B5D5C4(&EventTowerRewardMaster_TypeInfo, v502, v503, v504);
    sub_B5D5C4(&EventTutorialCondMaster_TypeInfo, v505, v506, v507);
    sub_B5D5C4(&EventTutorialMaster_TypeInfo, v508, v509, v510);
    sub_B5D5C4(&EventUiMaster_TypeInfo, v511, v512, v513);
    sub_B5D5C4(&EventUiReleaseMaster_TypeInfo, v514, v515, v516);
    sub_B5D5C4(&EventUiValueMaster_TypeInfo, v517, v518, v519);
    sub_B5D5C4(&EventVoicePlayMaster_TypeInfo, v520, v521, v522);
    sub_B5D5C4(&ExcludeMotionMaster_TypeInfo, v523, v524, v525);
    sub_B5D5C4(&FieldMotionMaster_TypeInfo, v526, v527, v528);
    sub_B5D5C4(&FriendshipMaster_TypeInfo, v529, v530, v531);
    sub_B5D5C4(&FriendshipQuestDialogInfoMaster_TypeInfo, v532, v533, v534);
    sub_B5D5C4(&FuncDispMaster_TypeInfo, v535, v536, v537);
    sub_B5D5C4(&FuncTypeDetailMaster_TypeInfo, v538, v539, v540);
    sub_B5D5C4(&FunctionCategoryMaster_TypeInfo, v541, v542, v543);
    sub_B5D5C4(&FunctionGroupMaster_TypeInfo, v544, v545, v546);
    sub_B5D5C4(&FunctionMaster_TypeInfo, v547, v548, v549);
    sub_B5D5C4(&GachaAppendMaster_TypeInfo, v550, v551, v552);
    sub_B5D5C4(&GachaBehaviorMaster_TypeInfo, v553, v554, v555);
    sub_B5D5C4(&GachaBonusSelectLineupMaster_TypeInfo, v556, v557, v558);
    sub_B5D5C4(&GachaBonusSelectMaster_TypeInfo, v559, v560, v561);
    sub_B5D5C4(&GachaDetailMaster_TypeInfo, v562, v563, v564);
    sub_B5D5C4(&GachaExtraGiftMaster_TypeInfo, v565, v566, v567);
    sub_B5D5C4(&GachaGroupMaster_TypeInfo, v568, v569, v570);
    sub_B5D5C4(&GachaImageMaster_TypeInfo, v571, v572, v573);
    sub_B5D5C4(&GachaMaster_TypeInfo, v574, v575, v576);
    sub_B5D5C4(&GachaReleaseMaster_TypeInfo, v577, v578, v579);
    sub_B5D5C4(&GachaStoryAdjustMaster_TypeInfo, v580, v581, v582);
    sub_B5D5C4(&GachaSubMaster_TypeInfo, v583, v584, v585);
    sub_B5D5C4(&GachaTicketMaster_TypeInfo, v586, v587, v588);
    sub_B5D5C4(&GiftAddMaster_TypeInfo, v589, v590, v591);
    sub_B5D5C4(&GiftDetailMaster_TypeInfo, v592, v593, v594);
    sub_B5D5C4(&GiftMaster_TypeInfo, v595, v596, v597);
    sub_B5D5C4(&GuideMaster_TypeInfo, v598, v599, v600);
    sub_B5D5C4(&HeelPortraitMaster_TypeInfo, v601, v602, v603);
    sub_B5D5C4(&IllustratorMaster_TypeInfo, v604, v605, v606);
    sub_B5D5C4(&IndividualityPersonalityMaster_TypeInfo, v607, v608, v609);
    sub_B5D5C4(&IndividualityPolicyMaster_TypeInfo, v610, v611, v612);
    sub_B5D5C4(&ItemMaster_TypeInfo, v613, v614, v615);
    sub_B5D5C4(&ItemSelectMaster_TypeInfo, v616, v617, v618);
    sub_B5D5C4(&LoginQuestMaster_TypeInfo, v619, v620, v621);
    sub_B5D5C4(&MapButtonMaster_TypeInfo, v622, v623, v624);
    sub_B5D5C4(&MapCondMaster_TypeInfo, v625, v626, v627);
    sub_B5D5C4(&MapGimmickLayerMaster_TypeInfo, v628, v629, v630);
    sub_B5D5C4(&MapGimmickMaster_TypeInfo, v631, v632, v633);
    sub_B5D5C4(&MapGimmickPathMaster_TypeInfo, v634, v635, v636);
    sub_B5D5C4(&MapGimmickPathReleaseMaster_TypeInfo, v637, v638, v639);
    sub_B5D5C4(&MapGimmickReleaseMaster_TypeInfo, v640, v641, v642);
    sub_B5D5C4(&MapLayerMaster_TypeInfo, v643, v644, v645);
    sub_B5D5C4(&MapMaster_TypeInfo, v646, v647, v648);
    sub_B5D5C4(&MasterPhotoMaster_TypeInfo, v649, v650, v651);
    sub_B5D5C4(&MaterialFolderMaster_TypeInfo, v652, v653, v654);
    sub_B5D5C4(&MstMissionDisplayInfoMaster_TypeInfo, v655, v656, v657);
    sub_B5D5C4(&MstMissionMaster_TypeInfo, v658, v659, v660);
    sub_B5D5C4(&MyRoomAddMaster_TypeInfo, v661, v662, v663);
    sub_B5D5C4(&NewsMaster_TypeInfo, v664, v665, v666);
    sub_B5D5C4(&NotEndEventMissionFixMaster_TypeInfo, v667, v668, v669);
    sub_B5D5C4(&NpcFollowerMaster_TypeInfo, v670, v671, v672);
    sub_B5D5C4(&NpcFollowerReleaseMaster_TypeInfo, v673, v674, v675);
    sub_B5D5C4(&NpcServantEquipMaster_TypeInfo, v676, v677, v678);
    sub_B5D5C4(&NpcServantFollowerIndividualityMaster_TypeInfo, v679, v680, v681);
    sub_B5D5C4(&NpcServantFollowerMaster_TypeInfo, v682, v683, v684);
    sub_B5D5C4(&OpeningMovieMaster_TypeInfo, v685, v686, v687);
    sub_B5D5C4(&OtherUserGameMaster_TypeInfo, v688, v689, v690);
    sub_B5D5C4(&PartialMaintenanceMaster_TypeInfo, v691, v692, v693);
    sub_B5D5C4(&PickupUserFollowerMaster_TypeInfo, v694, v695, v696);
    sub_B5D5C4(&PrivilegeMaster_TypeInfo, v697, v698, v699);
    sub_B5D5C4(&QuestAddMaster_TypeInfo, v700, v701, v702);
    sub_B5D5C4(&QuestAutoOrganizationAdjustMaster_TypeInfo, v703, v704, v705);
    sub_B5D5C4(&QuestBehaviorMaster_TypeInfo, v706, v707, v708);
    sub_B5D5C4(&QuestConsumeItemMaster_TypeInfo, v709, v710, v711);
    sub_B5D5C4(&QuestDateRangeMaster_TypeInfo, v712, v713, v714);
    sub_B5D5C4(&QuestGroupMaster_TypeInfo, v715, v716, v717);
    sub_B5D5C4(&QuestHintMaster_TypeInfo, v718, v719, v720);
    sub_B5D5C4(&QuestMaster_TypeInfo, v721, v722, v723);
    sub_B5D5C4(&QuestMessageMaster_TypeInfo, v724, v725, v726);
    sub_B5D5C4(&QuestPhaseDetailAddMaster_TypeInfo, v727, v728, v729);
    sub_B5D5C4(&QuestPhaseDetailMaster_TypeInfo, v730, v731, v732);
    sub_B5D5C4(&QuestPhaseMaster_TypeInfo, v733, v734, v735);
    sub_B5D5C4(&QuestPickupMaster_TypeInfo, v736, v737, v738);
    sub_B5D5C4(&QuestRacePointMaster_TypeInfo, v739, v740, v741);
    sub_B5D5C4(&QuestRandomGroupMaster_TypeInfo, v742, v743, v744);
    sub_B5D5C4(&QuestReleaseMaster_TypeInfo, v745, v746, v747);
    sub_B5D5C4(&QuestReleaseOverwriteMaster_TypeInfo, v748, v749, v750);
    sub_B5D5C4(&QuestResetMaster_TypeInfo, v751, v752, v753);
    sub_B5D5C4(&QuestRestrictionInfoMaster_TypeInfo, v754, v755, v756);
    sub_B5D5C4(&QuestRestrictionMaster_TypeInfo, v757, v758, v759);
    sub_B5D5C4(&QuestScriptBranchMaterialMaster_TypeInfo, v760, v761, v762);
    sub_B5D5C4(&QuestScriptMaster_TypeInfo, v763, v764, v765);
    sub_B5D5C4(&QuestScriptMaterialNextMaster_TypeInfo, v766, v767, v768);
    sub_B5D5C4(&QuestScriptMaterialOverwriteMaster_TypeInfo, v769, v770, v771);
    sub_B5D5C4(&QuestScriptReleaseMaster_TypeInfo, v772, v773, v774);
    sub_B5D5C4(&QuestSpotReleaseMaster_TypeInfo, v775, v776, v777);
    sub_B5D5C4(&RecoverMaster_TypeInfo, v778, v779, v780);
    sub_B5D5C4(&ReprintStageMaster_TypeInfo, v781, v782, v783);
    sub_B5D5C4(&RestrictionBaseMaster_TypeInfo, v784, v785, v786);
    sub_B5D5C4(&RestrictionMaster_TypeInfo, v787, v788, v789);
    sub_B5D5C4(&RestrictionMessageMaster_TypeInfo, v790, v791, v792);
    sub_B5D5C4(&RestrictionSlotDetailMaster_TypeInfo, v793, v794, v795);
    sub_B5D5C4(&RestrictionSlotMaster_TypeInfo, v796, v797, v798);
    sub_B5D5C4(&RestrictionWholeMaster_TypeInfo, v799, v800, v801);
    sub_B5D5C4(&ServantAddMaster_TypeInfo, v802, v803, v804);
    sub_B5D5C4(&ServantAnimationOverwriteMaster_TypeInfo, v805, v806, v807);
    sub_B5D5C4(&ServantAppendPassiveSkillMaster_TypeInfo, v808, v809, v810);
    sub_B5D5C4(&ServantCardAddMaster_TypeInfo, v811, v812, v813);
    sub_B5D5C4(&ServantCardMaster_TypeInfo, v814, v815, v816);
    sub_B5D5C4(&ServantChangeMaster_TypeInfo, v817, v818, v819);
    sub_B5D5C4(&ServantClassMaster_TypeInfo, v820, v821, v822);
    sub_B5D5C4(&ServantCollectionMaster_TypeInfo, v823, v824, v825);
    sub_B5D5C4(&ServantCommandCodeUnlockMaster_TypeInfo, v826, v827, v828);
    sub_B5D5C4(&ServantCommentAddMaster_TypeInfo, v829, v830, v831);
    sub_B5D5C4(&ServantCommentMaster_TypeInfo, v832, v833, v834);
    sub_B5D5C4(&ServantCostumeMaster_TypeInfo, v835, v836, v837);
    sub_B5D5C4(&ServantCostumeReleaseMaster_TypeInfo, v838, v839, v840);
    sub_B5D5C4(&ServantExceedMaster_TypeInfo, v841, v842, v843);
    sub_B5D5C4(&ServantExpMaster_TypeInfo, v844, v845, v846);
    sub_B5D5C4(&ServantFilterMaster_TypeInfo, v847, v848, v849);
    sub_B5D5C4(&ServantFlagMaster_TypeInfo, v850, v851, v852);
    sub_B5D5C4(&ServantFlagReleaseMaster_TypeInfo, v853, v854, v855);
    sub_B5D5C4(&ServantGroupMaster_TypeInfo, v856, v857, v858);
    sub_B5D5C4(&ServantIndividualityMaster_TypeInfo, v859, v860, v861);
    sub_B5D5C4(&ServantLimitAddMaster_TypeInfo, v862, v863, v864);
    sub_B5D5C4(&ServantLimitImageMaster_TypeInfo, v865, v866, v867);
    sub_B5D5C4(&ServantLimitMaster_TypeInfo, v868, v869, v870);
    sub_B5D5C4(&ServantLimitSpoilerProtectionMaster_TypeInfo, v871, v872, v873);
    sub_B5D5C4(&ServantLvDetailMaster_TypeInfo, v874, v875, v876);
    sub_B5D5C4(&ServantMaster_TypeInfo, v877, v878, v879);
    sub_B5D5C4(&ServantMaterialFolderMaster_TypeInfo, v880, v881, v882);
    sub_B5D5C4(&ServantOverwriteMaster_TypeInfo, v883, v884, v885);
    sub_B5D5C4(&ServantPassiveSkillMaster_TypeInfo, v886, v887, v888);
    sub_B5D5C4(&ServantPassiveSkillReleaseMaster_TypeInfo, v889, v890, v891);
    sub_B5D5C4(&ServantPhotoMaster_TypeInfo, v892, v893, v894);
    sub_B5D5C4(&ServantProfileMaster_TypeInfo, v895, v896, v897);
    sub_B5D5C4(&ServantProfilePushMaster_TypeInfo, v898, v899, v900);
    sub_B5D5C4(&ServantRarityMaster_TypeInfo, v901, v902, v903);
    sub_B5D5C4(&ServantScriptAddMaster_TypeInfo, v904, v905, v906);
    sub_B5D5C4(&ServantScriptMaster_TypeInfo, v907, v908, v909);
    sub_B5D5C4(&ServantScriptMultipleMaster_TypeInfo, v910, v911, v912);
    sub_B5D5C4(&ServantSkillMaster_TypeInfo, v913, v914, v915);
    sub_B5D5C4(&ServantSkillReleaseMaster_TypeInfo, v916, v917, v918);
    sub_B5D5C4(&ServantTreasureDeviceAddMaster_TypeInfo, v919, v920, v921);
    sub_B5D5C4(&ServantTreasureDeviceDamageMaster_TypeInfo, v922, v923, v924);
    sub_B5D5C4(&ServantTreasureDeviceReleaseMaster_TypeInfo, v925, v926, v927);
    sub_B5D5C4(&ServantTreasureDvcMaster_TypeInfo, v928, v929, v930);
    sub_B5D5C4(&ServantVoiceMaster_TypeInfo, v931, v932, v933);
    sub_B5D5C4(&ServantVoicePatternMaster_TypeInfo, v934, v935, v936);
    sub_B5D5C4(&ServantVoiceRelationMaster_TypeInfo, v937, v938, v939);
    sub_B5D5C4(&SetItemMaster_TypeInfo, v940, v941, v942);
    sub_B5D5C4(&ShopActionMaster_TypeInfo, v943, v944, v945);
    sub_B5D5C4(&ShopDetailMaster_TypeInfo, v946, v947, v948);
    sub_B5D5C4(&ShopGroupMaster_TypeInfo, v949, v950, v951);
    sub_B5D5C4(&ShopMaster_TypeInfo, v952, v953, v954);
    sub_B5D5C4(&ShopReleaseMaster_TypeInfo, v955, v956, v957);
    sub_B5D5C4(&ShopScriptMaster_TypeInfo, v958, v959, v960);
    sub_B5D5C4(&SkillAddMaster_TypeInfo, v961, v962, v963);
    sub_B5D5C4(&SkillDetailMaster_TypeInfo, v964, v965, v966);
    sub_B5D5C4(&SkillGroupMaster_TypeInfo, v967, v968, v969);
    sub_B5D5C4(&SkillGroupOverwriteMaster_TypeInfo, v970, v971, v972);
    sub_B5D5C4(&SkillIndividualityMaster_TypeInfo, v973, v974, v975);
    sub_B5D5C4(&SkillLvMaster_TypeInfo, v976, v977, v978);
    sub_B5D5C4(&SkillMaster_TypeInfo, v979, v980, v981);
    sub_B5D5C4(&SpotAddMaster_TypeInfo, v982, v983, v984);
    sub_B5D5C4(&SpotImageMaster_TypeInfo, v985, v986, v987);
    sub_B5D5C4(&SpotLayerMaster_TypeInfo, v988, v989, v990);
    sub_B5D5C4(&SpotMaster_TypeInfo, v991, v992, v993);
    sub_B5D5C4(&SpotPathMaster_TypeInfo, v994, v995, v996);
    sub_B5D5C4(&SpotRoadMaster_TypeInfo, v997, v998, v999);
    sub_B5D5C4(&StageMaster_TypeInfo, v1000, v1001, v1002);
    sub_B5D5C4(&StatusEffectPosOverwriteMaster_TypeInfo, v1003, v1004, v1005);
    sub_B5D5C4(&StoneShopMaster_TypeInfo, v1006, v1007, v1008);
    sub_B5D5C4(&SubEquipMaster_TypeInfo, v1009, v1010, v1011);
    sub_B5D5C4(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v1012, v1013, v1014);
    sub_B5D5C4(&SvtCoinMaster_TypeInfo, v1015, v1016, v1017);
    sub_B5D5C4(&SvtMaterialTdMaster_TypeInfo, v1018, v1019, v1020);
    sub_B5D5C4(&SvtMultiPortraitMaster_TypeInfo, v1021, v1022, v1023);
    sub_B5D5C4(&TblFriendMaster_TypeInfo, v1024, v1025, v1026);
    sub_B5D5C4(&TblUserMaster_TypeInfo, v1027, v1028, v1029);
    sub_B5D5C4(&TelopMaster_TypeInfo, v1030, v1031, v1032);
    sub_B5D5C4(&TerminalOverwriteMaster_TypeInfo, v1033, v1034, v1035);
    sub_B5D5C4(&TipsBattleMaster_TypeInfo, v1036, v1037, v1038);
    sub_B5D5C4(&TotalBoxGachaMaster_TypeInfo, v1039, v1040, v1041);
    sub_B5D5C4(&TotalEventPointMaster_TypeInfo, v1042, v1043, v1044);
    sub_B5D5C4(&TotalEventRaceMaster_TypeInfo, v1045, v1046, v1047);
    sub_B5D5C4(&TotalEventRaidMaster_TypeInfo, v1048, v1049, v1050);
    sub_B5D5C4(&TotalLoginMaster_TypeInfo, v1051, v1052, v1053);
    sub_B5D5C4(&TreasureBoxGiftMaster_TypeInfo, v1054, v1055, v1056);
    sub_B5D5C4(&TreasureBoxMaster_TypeInfo, v1057, v1058, v1059);
    sub_B5D5C4(&TreasureBoxTalkMaster_TypeInfo, v1060, v1061, v1062);
    sub_B5D5C4(&TreasureDeviceSequenceWeightMaster_TypeInfo, v1063, v1064, v1065);
    sub_B5D5C4(&TreasureDvcDetailMaster_TypeInfo, v1066, v1067, v1068);
    sub_B5D5C4(&TreasureDvcLvMaster_TypeInfo, v1069, v1070, v1071);
    sub_B5D5C4(&TreasureDvcMaster_TypeInfo, v1072, v1073, v1074);
    sub_B5D5C4(&UpdateProfileDialogInfoMaster_TypeInfo, v1075, v1076, v1077);
    sub_B5D5C4(&UserAccessaryMaster_TypeInfo, v1078, v1079, v1080);
    sub_B5D5C4(&UserBlacklistMaster_TypeInfo, v1081, v1082, v1083);
    sub_B5D5C4(&UserBoxGachaMaster_TypeInfo, v1084, v1085, v1086);
    sub_B5D5C4(&UserClassBoardSquareMaster_TypeInfo, v1087, v1088, v1089);
    sub_B5D5C4(&UserCoinRoomMaster_TypeInfo, v1090, v1091, v1092);
    sub_B5D5C4(&UserCombineExpMaster_TypeInfo, v1093, v1094, v1095);
    sub_B5D5C4(&UserCommandCodeCollectionMaster_TypeInfo, v1096, v1097, v1098);
    sub_B5D5C4(&UserCommandCodeMaster_TypeInfo, v1099, v1100, v1101);
    sub_B5D5C4(&UserContinueMaster_TypeInfo, v1102, v1103, v1104);
    sub_B5D5C4(&UserDeckMaster_TypeInfo, v1105, v1106, v1107);
    sub_B5D5C4(&UserDeleteReservationMaster_TypeInfo, v1108, v1109, v1110);
    sub_B5D5C4(&UserEquipMaster_TypeInfo, v1111, v1112, v1113);
    sub_B5D5C4(&UserEventAlloutBattleMaster_TypeInfo, v1114, v1115, v1116);
    sub_B5D5C4(&UserEventBoardGameTokenMaster_TypeInfo, v1117, v1118, v1119);
    sub_B5D5C4(&UserEventCooltimeRewardMaster_TypeInfo, v1120, v1121, v1122);
    sub_B5D5C4(&UserEventDataLostMaster_TypeInfo, v1123, v1124, v1125);
    sub_B5D5C4(&UserEventDeckMaster_TypeInfo, v1126, v1127, v1128);
    sub_B5D5C4(&UserEventDiggingMaster_TypeInfo, v1129, v1130, v1131);
    sub_B5D5C4(&UserEventExpeditionMaster_TypeInfo, v1132, v1133, v1134);
    sub_B5D5C4(&UserEventFortificationMaster_TypeInfo, v1135, v1136, v1137);
    sub_B5D5C4(&UserEventMapMaster_TypeInfo, v1138, v1139, v1140);
    sub_B5D5C4(&UserEventMaster_TypeInfo, v1141, v1142, v1143);
    sub_B5D5C4(&UserEventMissionCondDetailMaster_TypeInfo, v1144, v1145, v1146);
    sub_B5D5C4(&UserEventMissionFixMaster_TypeInfo, v1147, v1148, v1149);
    sub_B5D5C4(&UserEventMissionMaster_TypeInfo, v1150, v1151, v1152);
    sub_B5D5C4(&UserEventPointMaster_TypeInfo, v1153, v1154, v1155);
    sub_B5D5C4(&UserEventQuestCooltimeMaster_TypeInfo, v1156, v1157, v1158);
    sub_B5D5C4(&UserEventRaceMaster_TypeInfo, v1159, v1160, v1161);
    sub_B5D5C4(&UserEventRaidMaster_TypeInfo, v1162, v1163, v1164);
    sub_B5D5C4(&UserEventRandomMissionMaster_TypeInfo, v1165, v1166, v1167);
    sub_B5D5C4(&UserEventServantFatigueMaster_TypeInfo, v1168, v1169, v1170);
    sub_B5D5C4(&UserEventServantPointMaster_TypeInfo, v1171, v1172, v1173);
    sub_B5D5C4(&UserEventSpotMaster_TypeInfo, v1174, v1175, v1176);
    sub_B5D5C4(&UserExchangeSvtMaster_TypeInfo, v1177, v1178, v1179);
    sub_B5D5C4(&UserExpMaster_TypeInfo, v1180, v1181, v1182);
    sub_B5D5C4(&UserFollowMaster_TypeInfo, v1183, v1184, v1185);
    sub_B5D5C4(&UserFollowerMaster_TypeInfo, v1186, v1187, v1188);
    sub_B5D5C4(&UserFormationMaster_TypeInfo, v1189, v1190, v1191);
    sub_B5D5C4(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v1192, v1193, v1194);
    sub_B5D5C4(&UserFriendRequestHistoryMaster_TypeInfo, v1195, v1196, v1197);
    sub_B5D5C4(&UserGachaDrawLogMaster_TypeInfo, v1198, v1199, v1200);
    sub_B5D5C4(&UserGachaExtraCountMaster_TypeInfo, v1201, v1202, v1203);
    sub_B5D5C4(&UserGachaHistoryMaster_TypeInfo, v1204, v1205, v1206);
    sub_B5D5C4(&UserGachaMaster_TypeInfo, v1207, v1208, v1209);
    sub_B5D5C4(&UserGameCommonMaster_TypeInfo, v1210, v1211, v1212);
    sub_B5D5C4(&UserGameMaster_TypeInfo, v1213, v1214, v1215);
    sub_B5D5C4(&UserHeelPortraitMaster_TypeInfo, v1216, v1217, v1218);
    sub_B5D5C4(&UserInterruptionQuestMaster_TypeInfo, v1219, v1220, v1221);
    sub_B5D5C4(&UserItemMaster_TypeInfo, v1222, v1223, v1224);
    sub_B5D5C4(&UserLoginMaster_TypeInfo, v1225, v1226, v1227);
    sub_B5D5C4(&UserMaster_TypeInfo, v1228, v1229, v1230);
    sub_B5D5C4(&UserNpcSvtRecordMaster_TypeInfo, v1231, v1232, v1233);
    sub_B5D5C4(&UserPresentBoxMaster_TypeInfo, v1234, v1235, v1236);
    sub_B5D5C4(&UserPresentHistoryMaster_TypeInfo, v1237, v1238, v1239);
    sub_B5D5C4(&UserPrivilegeMaster_TypeInfo, v1240, v1241, v1242);
    sub_B5D5C4(&UserQuestInfoMaster_TypeInfo, v1243, v1244, v1245);
    sub_B5D5C4(&UserQuestMaster_TypeInfo, v1246, v1247, v1248);
    sub_B5D5C4(&UserQuestRecordMaster_TypeInfo, v1249, v1250, v1251);
    sub_B5D5C4(&UserQuestRouteMaster_TypeInfo, v1252, v1253, v1254);
    sub_B5D5C4(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v1255, v1256, v1257);
    sub_B5D5C4(&UserServantAppendPassiveSkillMaster_TypeInfo, v1258, v1259, v1260);
    sub_B5D5C4(&UserServantCollectionMaster_TypeInfo, v1261, v1262, v1263);
    sub_B5D5C4(&UserServantCommandCardMaster_TypeInfo, v1264, v1265, v1266);
    sub_B5D5C4(&UserServantCommandCodeMaster_TypeInfo, v1267, v1268, v1269);
    sub_B5D5C4(&UserServantLeaderMaster_TypeInfo, v1270, v1271, v1272);
    sub_B5D5C4(&UserServantMaster_TypeInfo, v1273, v1274, v1275);
    sub_B5D5C4(&UserServantStorageMaster_TypeInfo, v1276, v1277, v1278);
    sub_B5D5C4(&UserServantVoicePlayedMaster_TypeInfo, v1279, v1280, v1281);
    sub_B5D5C4(&UserShopMaster_TypeInfo, v1282, v1283, v1284);
    sub_B5D5C4(&UserSubEquipMaster_TypeInfo, v1285, v1286, v1287);
    sub_B5D5C4(&UserSuperBossMaster_TypeInfo, v1288, v1289, v1290);
    sub_B5D5C4(&UserSupportDeckMaster_TypeInfo, v1291, v1292, v1293);
    sub_B5D5C4(&UserSvtCoinMaster_TypeInfo, v1294, v1295, v1296);
    sub_B5D5C4(&ViewEnemyMaster_TypeInfo, v1297, v1298, v1299);
    sub_B5D5C4(&ViewQuestEnemyInfoMaster_TypeInfo, v1300, v1301, v1302);
    sub_B5D5C4(&ViewQuestInfoMaster_TypeInfo, v1303, v1304, v1305);
    sub_B5D5C4(&ViewWaveEnemyMaster_TypeInfo, v1306, v1307, v1308);
    sub_B5D5C4(&VoiceClosedMessageMaster_TypeInfo, v1309, v1310, v1311);
    sub_B5D5C4(&VoiceCondMaster_TypeInfo, v1312, v1313, v1314);
    sub_B5D5C4(&VoiceMaster_TypeInfo, v1315, v1316, v1317);
    sub_B5D5C4(&VoiceMaterialCondMaster_TypeInfo, v1318, v1319, v1320);
    sub_B5D5C4(&VoicePlayCondMaster_TypeInfo, v1321, v1322, v1323);
    sub_B5D5C4(&VoicePlayGroupMaster_TypeInfo, v1324, v1325, v1326);
    sub_B5D5C4(&VoiceReleaseMaster_TypeInfo, v1327, v1328, v1329);
    sub_B5D5C4(&WarAddMaster_TypeInfo, v1330, v1331, v1332);
    sub_B5D5C4(&WarBoardAIMaster_TypeInfo, v1333, v1334, v1335);
    sub_B5D5C4(&WarBoardActionPointClassMaster_TypeInfo, v1336, v1337, v1338);
    sub_B5D5C4(&WarBoardActionPointMaster_TypeInfo, v1339, v1340, v1341);
    sub_B5D5C4(&WarBoardActionTrendConditionMaster_TypeInfo, v1342, v1343, v1344);
    sub_B5D5C4(&WarBoardActionTrendGroupMaster_TypeInfo, v1345, v1346, v1347);
    sub_B5D5C4(&WarBoardActionTrendMaster_TypeInfo, v1348, v1349, v1350);
    sub_B5D5C4(&WarBoardCommonReleaseMaster_TypeInfo, v1351, v1352, v1353);
    sub_B5D5C4(&WarBoardDataMaster_TypeInfo, v1354, v1355, v1356);
    sub_B5D5C4(&WarBoardEffectMaster_TypeInfo, v1357, v1358, v1359);
    sub_B5D5C4(&WarBoardEventMaster_TypeInfo, v1360, v1361, v1362);
    sub_B5D5C4(&WarBoardEventScriptMaster_TypeInfo, v1363, v1364, v1365);
    sub_B5D5C4(&WarBoardFutureActionTrendMaster_TypeInfo, v1366, v1367, v1368);
    sub_B5D5C4(&WarBoardIndividualityClassMaster_TypeInfo, v1369, v1370, v1371);
    sub_B5D5C4(&WarBoardItemMaster_TypeInfo, v1372, v1373, v1374);
    sub_B5D5C4(&WarBoardMaster_TypeInfo, v1375, v1376, v1377);
    sub_B5D5C4(&WarBoardMessageMaster_TypeInfo, v1378, v1379, v1380);
    sub_B5D5C4(&WarBoardMessageScriptMaster_TypeInfo, v1381, v1382, v1383);
    sub_B5D5C4(&WarBoardOnboardSkillMaster_TypeInfo, v1384, v1385, v1386);
    sub_B5D5C4(&WarBoardPartySkillMaster_TypeInfo, v1387, v1388, v1389);
    sub_B5D5C4(&WarBoardQuestMaster_TypeInfo, v1390, v1391, v1392);
    sub_B5D5C4(&WarBoardRatingBaseMaster_TypeInfo, v1393, v1394, v1395);
    sub_B5D5C4(&WarBoardRatingOffsetGroupMaster_TypeInfo, v1396, v1397, v1398);
    sub_B5D5C4(&WarBoardRatingOffsetMaster_TypeInfo, v1399, v1400, v1401);
    sub_B5D5C4(&WarBoardReinforcementsMaster_TypeInfo, v1402, v1403, v1404);
    sub_B5D5C4(&WarBoardRoadMaster_TypeInfo, v1405, v1406, v1407);
    sub_B5D5C4(&WarBoardSquareIndexGroupMaster_TypeInfo, v1408, v1409, v1410);
    sub_B5D5C4(&WarBoardSquareMaster_TypeInfo, v1411, v1412, v1413);
    sub_B5D5C4(&WarBoardStageBossMaster_TypeInfo, v1414, v1415, v1416);
    sub_B5D5C4(&WarBoardStageDetailMaster_TypeInfo, v1417, v1418, v1419);
    sub_B5D5C4(&WarBoardStageLayoutMaster_TypeInfo, v1420, v1421, v1422);
    sub_B5D5C4(&WarBoardStageMaster_TypeInfo, v1423, v1424, v1425);
    sub_B5D5C4(&WarBoardStageNpcMaster_TypeInfo, v1426, v1427, v1428);
    sub_B5D5C4(&WarBoardStagePieceDetailMaster_TypeInfo, v1429, v1430, v1431);
    sub_B5D5C4(&WarBoardStageReinforcementsMaster_TypeInfo, v1432, v1433, v1434);
    sub_B5D5C4(&WarBoardStageWallMaster_TypeInfo, v1435, v1436, v1437);
    sub_B5D5C4(&WarBoardTacticalTrendMaster_TypeInfo, v1438, v1439, v1440);
    sub_B5D5C4(&WarBoardTreasureMaster_TypeInfo, v1441, v1442, v1443);
    sub_B5D5C4(&WarGroupMaster_TypeInfo, v1444, v1445, v1446);
    sub_B5D5C4(&WarMaster_TypeInfo, v1447, v1448, v1449);
    sub_B5D5C4(&WarMessageMaster_TypeInfo, v1450, v1451, v1452);
    sub_B5D5C4(&WarQuestSelectionMaster_TypeInfo, v1453, v1454, v1455);
    byte_42EA375 = 1;
  }
  v1456 = (DataMasterBase_array *)sub_B5D5DC(DataMasterBase___TypeInfo, 484LL);
  v1457 = (ServantMaster_o *)sub_B5D694(ServantMaster_TypeInfo);
  ServantMaster___ctor(v1457, 0LL);
  if ( !v1456 )
    sub_B5D69C(v1458, v1459);
  if ( v1457 )
  {
    v1458 = sub_B5D684(v1457, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  p_max_length = &v1456->max_length;
  if ( !v1456->max_length )
    goto LABEL_1462;
  v1456->m_Items[0] = (DataMasterBase_o *)v1457;
  sub_B5D560(
    (BattleServantConfConponent_o *)v1456->m_Items,
    (System_Int32_array **)v1457,
    v1460,
    v1461,
    v1462,
    v1463,
    v1464,
    v1465);
  v1467 = (ServantClassMaster_o *)sub_B5D694(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v1467, 0LL);
  if ( v1467 )
  {
    v1458 = sub_B5D684(v1467, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1462;
  v1456->m_Items[1] = (DataMasterBase_o *)v1467;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[1],
    (System_Int32_array **)v1467,
    v1468,
    v1469,
    v1470,
    v1471,
    v1472,
    v1473);
  v1474 = (ServantCommentMaster_o *)sub_B5D694(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v1474, 0LL);
  if ( v1474 )
  {
    v1458 = sub_B5D684(v1474, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1462;
  v1456->m_Items[2] = (DataMasterBase_o *)v1474;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[2],
    (System_Int32_array **)v1474,
    v1475,
    v1476,
    v1477,
    v1478,
    v1479,
    v1480);
  v1481 = (ServantProfileMaster_o *)sub_B5D694(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v1481, 0LL);
  if ( v1481 )
  {
    v1458 = sub_B5D684(v1481, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1462;
  v1456->m_Items[3] = (DataMasterBase_o *)v1481;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[3],
    (System_Int32_array **)v1481,
    v1482,
    v1483,
    v1484,
    v1485,
    v1486,
    v1487);
  v1488 = (WarMaster_o *)sub_B5D694(WarMaster_TypeInfo);
  WarMaster___ctor(v1488, 0LL);
  if ( v1488 )
  {
    v1458 = sub_B5D684(v1488, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1462;
  v1456->m_Items[4] = (DataMasterBase_o *)v1488;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[4],
    (System_Int32_array **)v1488,
    v1489,
    v1490,
    v1491,
    v1492,
    v1493,
    v1494);
  v1495 = (UserMaster_o *)sub_B5D694(UserMaster_TypeInfo);
  UserMaster___ctor(v1495, 0LL);
  if ( v1495 )
  {
    v1458 = sub_B5D684(v1495, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1462;
  v1456->m_Items[5] = (DataMasterBase_o *)v1495;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[5],
    (System_Int32_array **)v1495,
    v1496,
    v1497,
    v1498,
    v1499,
    v1500,
    v1501);
  v1502 = (UserGameMaster_o *)sub_B5D694(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v1502, 0LL);
  if ( v1502 )
  {
    v1458 = sub_B5D684(v1502, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1462;
  v1456->m_Items[6] = (DataMasterBase_o *)v1502;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[6],
    (System_Int32_array **)v1502,
    v1503,
    v1504,
    v1505,
    v1506,
    v1507,
    v1508);
  v1509 = (TblUserMaster_o *)sub_B5D694(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v1509, 0LL);
  if ( v1509 )
  {
    v1458 = sub_B5D684(v1509, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1462;
  v1456->m_Items[7] = (DataMasterBase_o *)v1509;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[7],
    (System_Int32_array **)v1509,
    v1510,
    v1511,
    v1512,
    v1513,
    v1514,
    v1515);
  v1516 = (UserItemMaster_o *)sub_B5D694(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v1516, 0LL);
  if ( v1516 )
  {
    v1458 = sub_B5D684(v1516, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1462;
  v1456->m_Items[8] = (DataMasterBase_o *)v1516;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[8],
    (System_Int32_array **)v1516,
    v1517,
    v1518,
    v1519,
    v1520,
    v1521,
    v1522);
  v1523 = (UserServantMaster_o *)sub_B5D694(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v1523, 0LL);
  if ( v1523 )
  {
    v1458 = sub_B5D684(v1523, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1462;
  v1456->m_Items[9] = (DataMasterBase_o *)v1523;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[9],
    (System_Int32_array **)v1523,
    v1524,
    v1525,
    v1526,
    v1527,
    v1528,
    v1529);
  v1530 = (UserServantStorageMaster_o *)sub_B5D694(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v1530, 0LL);
  if ( v1530 )
  {
    v1458 = sub_B5D684(v1530, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1462;
  v1456->m_Items[10] = (DataMasterBase_o *)v1530;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[10],
    (System_Int32_array **)v1530,
    v1531,
    v1532,
    v1533,
    v1534,
    v1535,
    v1536);
  v1537 = (UserAccessaryMaster_o *)sub_B5D694(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v1537, 0LL);
  if ( v1537 )
  {
    v1458 = sub_B5D684(v1537, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1462;
  v1456->m_Items[11] = (DataMasterBase_o *)v1537;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[11],
    (System_Int32_array **)v1537,
    v1538,
    v1539,
    v1540,
    v1541,
    v1542,
    v1543);
  v1544 = (UserQuestMaster_o *)sub_B5D694(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v1544, 0LL);
  if ( v1544 )
  {
    v1458 = sub_B5D684(v1544, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1462;
  v1456->m_Items[12] = (DataMasterBase_o *)v1544;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[12],
    (System_Int32_array **)v1544,
    v1545,
    v1546,
    v1547,
    v1548,
    v1549,
    v1550);
  v1551 = (BattleMaster_o *)sub_B5D694(BattleMaster_TypeInfo);
  BattleMaster___ctor(v1551, 0LL);
  if ( v1551 )
  {
    v1458 = sub_B5D684(v1551, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1462;
  v1456->m_Items[13] = (DataMasterBase_o *)v1551;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[13],
    (System_Int32_array **)v1551,
    v1552,
    v1553,
    v1554,
    v1555,
    v1556,
    v1557);
  v1558 = (OtherUserGameMaster_o *)sub_B5D694(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v1558, 0LL);
  if ( v1558 )
  {
    v1458 = sub_B5D684(v1558, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1462;
  v1456->m_Items[14] = (DataMasterBase_o *)v1558;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[14],
    (System_Int32_array **)v1558,
    v1559,
    v1560,
    v1561,
    v1562,
    v1563,
    v1564);
  v1565 = (TblFriendMaster_o *)sub_B5D694(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v1565, 0LL);
  if ( v1565 )
  {
    v1458 = sub_B5D684(v1565, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1462;
  v1456->m_Items[15] = (DataMasterBase_o *)v1565;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[15],
    (System_Int32_array **)v1565,
    v1566,
    v1567,
    v1568,
    v1569,
    v1570,
    v1571);
  v1572 = (AreaMaster_o *)sub_B5D694(AreaMaster_TypeInfo);
  AreaMaster___ctor(v1572, 0LL);
  if ( v1572 )
  {
    v1458 = sub_B5D684(v1572, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1462;
  v1456->m_Items[16] = (DataMasterBase_o *)v1572;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[16],
    (System_Int32_array **)v1572,
    v1573,
    v1574,
    v1575,
    v1576,
    v1577,
    v1578);
  v1579 = (ServantCardMaster_o *)sub_B5D694(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v1579, 0LL);
  if ( v1579 )
  {
    v1458 = sub_B5D684(v1579, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1462;
  v1456->m_Items[17] = (DataMasterBase_o *)v1579;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[17],
    (System_Int32_array **)v1579,
    v1580,
    v1581,
    v1582,
    v1583,
    v1584,
    v1585);
  v1586 = (EventMaster_o *)sub_B5D694(EventMaster_TypeInfo);
  EventMaster___ctor(v1586, 0LL);
  if ( v1586 )
  {
    v1458 = sub_B5D684(v1586, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1462;
  v1456->m_Items[18] = (DataMasterBase_o *)v1586;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[18],
    (System_Int32_array **)v1586,
    v1587,
    v1588,
    v1589,
    v1590,
    v1591,
    v1592);
  v1593 = (ItemMaster_o *)sub_B5D694(ItemMaster_TypeInfo);
  ItemMaster___ctor(v1593, 0LL);
  if ( v1593 )
  {
    v1458 = sub_B5D684(v1593, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1462;
  v1456->m_Items[19] = (DataMasterBase_o *)v1593;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[19],
    (System_Int32_array **)v1593,
    v1594,
    v1595,
    v1596,
    v1597,
    v1598,
    v1599);
  v1600 = (QuestMaster_o *)sub_B5D694(QuestMaster_TypeInfo);
  QuestMaster___ctor(v1600, 0LL);
  if ( v1600 )
  {
    v1458 = sub_B5D684(v1600, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1462;
  v1456->m_Items[20] = (DataMasterBase_o *)v1600;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[20],
    (System_Int32_array **)v1600,
    v1601,
    v1602,
    v1603,
    v1604,
    v1605,
    v1606);
  v1607 = (QuestAddMaster_o *)sub_B5D694(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v1607, 0LL);
  if ( v1607 )
  {
    v1458 = sub_B5D684(v1607, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1462;
  v1456->m_Items[21] = (DataMasterBase_o *)v1607;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[21],
    (System_Int32_array **)v1607,
    v1608,
    v1609,
    v1610,
    v1611,
    v1612,
    v1613);
  v1614 = (QuestReleaseMaster_o *)sub_B5D694(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v1614, 0LL);
  if ( v1614 )
  {
    v1458 = sub_B5D684(v1614, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1462;
  v1456->m_Items[22] = (DataMasterBase_o *)v1614;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[22],
    (System_Int32_array **)v1614,
    v1615,
    v1616,
    v1617,
    v1618,
    v1619,
    v1620);
  v1621 = (QuestDateRangeMaster_o *)sub_B5D694(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v1621, 0LL);
  if ( v1621 )
  {
    v1458 = sub_B5D684(v1621, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1462;
  v1456->m_Items[23] = (DataMasterBase_o *)v1621;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[23],
    (System_Int32_array **)v1621,
    v1622,
    v1623,
    v1624,
    v1625,
    v1626,
    v1627);
  v1628 = (QuestPhaseMaster_o *)sub_B5D694(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v1628, 0LL);
  if ( v1628 )
  {
    v1458 = sub_B5D684(v1628, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1462;
  v1456->m_Items[24] = (DataMasterBase_o *)v1628;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[24],
    (System_Int32_array **)v1628,
    v1629,
    v1630,
    v1631,
    v1632,
    v1633,
    v1634);
  v1635 = (QuestPhaseDetailMaster_o *)sub_B5D694(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v1635, 0LL);
  if ( v1635 )
  {
    v1458 = sub_B5D684(v1635, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1462;
  v1456->m_Items[25] = (DataMasterBase_o *)v1635;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[25],
    (System_Int32_array **)v1635,
    v1636,
    v1637,
    v1638,
    v1639,
    v1640,
    v1641);
  v1642 = (QuestGroupMaster_o *)sub_B5D694(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v1642, 0LL);
  if ( v1642 )
  {
    v1458 = sub_B5D684(v1642, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1462;
  v1456->m_Items[26] = (DataMasterBase_o *)v1642;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[26],
    (System_Int32_array **)v1642,
    v1643,
    v1644,
    v1645,
    v1646,
    v1647,
    v1648);
  v1649 = (QuestRandomGroupMaster_o *)sub_B5D694(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v1649, 0LL);
  if ( v1649 )
  {
    v1458 = sub_B5D684(v1649, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1462;
  v1456->m_Items[27] = (DataMasterBase_o *)v1649;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[27],
    (System_Int32_array **)v1649,
    v1650,
    v1651,
    v1652,
    v1653,
    v1654,
    v1655);
  v1656 = (QuestConsumeItemMaster_o *)sub_B5D694(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v1656, 0LL);
  if ( v1656 )
  {
    v1458 = sub_B5D684(v1656, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1462;
  v1456->m_Items[28] = (DataMasterBase_o *)v1656;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[28],
    (System_Int32_array **)v1656,
    v1657,
    v1658,
    v1659,
    v1660,
    v1661,
    v1662);
  v1663 = (QuestMessageMaster_o *)sub_B5D694(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v1663, 0LL);
  if ( v1663 )
  {
    v1458 = sub_B5D684(v1663, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1462;
  v1456->m_Items[29] = (DataMasterBase_o *)v1663;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[29],
    (System_Int32_array **)v1663,
    v1664,
    v1665,
    v1666,
    v1667,
    v1668,
    v1669);
  v1670 = (UserQuestInfoMaster_o *)sub_B5D694(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v1670, 0LL);
  if ( v1670 )
  {
    v1458 = sub_B5D684(v1670, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1462;
  v1456->m_Items[30] = (DataMasterBase_o *)v1670;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[30],
    (System_Int32_array **)v1670,
    v1671,
    v1672,
    v1673,
    v1674,
    v1675,
    v1676);
  v1677 = (UserQuestRecordMaster_o *)sub_B5D694(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v1677, 0LL);
  if ( v1677 )
  {
    v1458 = sub_B5D684(v1677, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1462;
  v1456->m_Items[31] = (DataMasterBase_o *)v1677;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[31],
    (System_Int32_array **)v1677,
    v1678,
    v1679,
    v1680,
    v1681,
    v1682,
    v1683);
  v1684 = (ViewQuestInfoMaster_o *)sub_B5D694(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v1684, 0LL);
  if ( v1684 )
  {
    v1458 = sub_B5D684(v1684, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1462;
  v1456->m_Items[32] = (DataMasterBase_o *)v1684;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[32],
    (System_Int32_array **)v1684,
    v1685,
    v1686,
    v1687,
    v1688,
    v1689,
    v1690);
  v1691 = (ViewEnemyMaster_o *)sub_B5D694(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v1691, 0LL);
  if ( v1691 )
  {
    v1458 = sub_B5D684(v1691, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1462;
  v1456->m_Items[33] = (DataMasterBase_o *)v1691;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[33],
    (System_Int32_array **)v1691,
    v1692,
    v1693,
    v1694,
    v1695,
    v1696,
    v1697);
  v1698 = (ViewQuestEnemyInfoMaster_o *)sub_B5D694(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v1698, 0LL);
  if ( v1698 )
  {
    v1458 = sub_B5D684(v1698, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1462;
  v1456->m_Items[34] = (DataMasterBase_o *)v1698;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[34],
    (System_Int32_array **)v1698,
    v1699,
    v1700,
    v1701,
    v1702,
    v1703,
    v1704);
  v1705 = (BlankEarthSpotMaster_o *)sub_B5D694(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v1705, 0LL);
  if ( v1705 )
  {
    v1458 = sub_B5D684(v1705, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1462;
  v1456->m_Items[35] = (DataMasterBase_o *)v1705;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[35],
    (System_Int32_array **)v1705,
    v1706,
    v1707,
    v1708,
    v1709,
    v1710,
    v1711);
  v1712 = (BlankEarthSpotAddMaster_o *)sub_B5D694(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v1712, 0LL);
  if ( v1712 )
  {
    v1458 = sub_B5D684(v1712, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1462;
  v1456->m_Items[36] = (DataMasterBase_o *)v1712;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[36],
    (System_Int32_array **)v1712,
    v1713,
    v1714,
    v1715,
    v1716,
    v1717,
    v1718);
  v1719 = (SpotMaster_o *)sub_B5D694(SpotMaster_TypeInfo);
  SpotMaster___ctor(v1719, 0LL);
  if ( v1719 )
  {
    v1458 = sub_B5D684(v1719, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1462;
  v1456->m_Items[37] = (DataMasterBase_o *)v1719;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[37],
    (System_Int32_array **)v1719,
    v1720,
    v1721,
    v1722,
    v1723,
    v1724,
    v1725);
  v1726 = (SpotImageMaster_o *)sub_B5D694(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v1726, 0LL);
  if ( v1726 )
  {
    v1458 = sub_B5D684(v1726, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1462;
  v1456->m_Items[38] = (DataMasterBase_o *)v1726;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[38],
    (System_Int32_array **)v1726,
    v1727,
    v1728,
    v1729,
    v1730,
    v1731,
    v1732);
  v1733 = (SpotRoadMaster_o *)sub_B5D694(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v1733, 0LL);
  if ( v1733 )
  {
    v1458 = sub_B5D684(v1733, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1462;
  v1456->m_Items[39] = (DataMasterBase_o *)v1733;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[39],
    (System_Int32_array **)v1733,
    v1734,
    v1735,
    v1736,
    v1737,
    v1738,
    v1739);
  v1740 = (SpotPathMaster_o *)sub_B5D694(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v1740, 0LL);
  if ( v1740 )
  {
    v1458 = sub_B5D684(v1740, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1462;
  v1456->m_Items[40] = (DataMasterBase_o *)v1740;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[40],
    (System_Int32_array **)v1740,
    v1741,
    v1742,
    v1743,
    v1744,
    v1745,
    v1746);
  v1747 = (SpotAddMaster_o *)sub_B5D694(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v1747, 0LL);
  if ( v1747 )
  {
    v1458 = sub_B5D684(v1747, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1462;
  v1456->m_Items[41] = (DataMasterBase_o *)v1747;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[41],
    (System_Int32_array **)v1747,
    v1748,
    v1749,
    v1750,
    v1751,
    v1752,
    v1753);
  v1754 = (MapGimmickMaster_o *)sub_B5D694(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v1754, 0LL);
  if ( v1754 )
  {
    v1458 = sub_B5D684(v1754, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1462;
  v1456->m_Items[42] = (DataMasterBase_o *)v1754;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[42],
    (System_Int32_array **)v1754,
    v1755,
    v1756,
    v1757,
    v1758,
    v1759,
    v1760);
  v1761 = (GiftMaster_o *)sub_B5D694(GiftMaster_TypeInfo);
  GiftMaster___ctor(v1761, 0LL);
  if ( v1761 )
  {
    v1458 = sub_B5D684(v1761, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1462;
  v1456->m_Items[43] = (DataMasterBase_o *)v1761;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[43],
    (System_Int32_array **)v1761,
    v1762,
    v1763,
    v1764,
    v1765,
    v1766,
    v1767);
  v1768 = (GiftAddMaster_o *)sub_B5D694(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v1768, 0LL);
  if ( v1768 )
  {
    v1458 = sub_B5D684(v1768, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1462;
  v1456->m_Items[44] = (DataMasterBase_o *)v1768;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[44],
    (System_Int32_array **)v1768,
    v1769,
    v1770,
    v1771,
    v1772,
    v1773,
    v1774);
  v1775 = (ShopMaster_o *)sub_B5D694(ShopMaster_TypeInfo);
  ShopMaster___ctor(v1775, 0LL);
  if ( v1775 )
  {
    v1458 = sub_B5D684(v1775, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1462;
  v1456->m_Items[45] = (DataMasterBase_o *)v1775;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[45],
    (System_Int32_array **)v1775,
    v1776,
    v1777,
    v1778,
    v1779,
    v1780,
    v1781);
  v1782 = (StoneShopMaster_o *)sub_B5D694(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v1782, 0LL);
  if ( v1782 )
  {
    v1458 = sub_B5D684(v1782, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1462;
  v1456->m_Items[46] = (DataMasterBase_o *)v1782;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[46],
    (System_Int32_array **)v1782,
    v1783,
    v1784,
    v1785,
    v1786,
    v1787,
    v1788);
  v1789 = (BankShopMaster_o *)sub_B5D694(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v1789, 0LL);
  if ( v1789 )
  {
    v1458 = sub_B5D684(v1789, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1462;
  v1456->m_Items[47] = (DataMasterBase_o *)v1789;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[47],
    (System_Int32_array **)v1789,
    v1790,
    v1791,
    v1792,
    v1793,
    v1794,
    v1795);
  v1796 = (ShopScriptMaster_o *)sub_B5D694(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v1796, 0LL);
  if ( v1796 )
  {
    v1458 = sub_B5D684(v1796, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1462;
  v1456->m_Items[48] = (DataMasterBase_o *)v1796;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[48],
    (System_Int32_array **)v1796,
    v1797,
    v1798,
    v1799,
    v1800,
    v1801,
    v1802);
  v1803 = (StageMaster_o *)sub_B5D694(StageMaster_TypeInfo);
  StageMaster___ctor(v1803, 0LL);
  if ( v1803 )
  {
    v1458 = sub_B5D684(v1803, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1462;
  v1456->m_Items[49] = (DataMasterBase_o *)v1803;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[49],
    (System_Int32_array **)v1803,
    v1804,
    v1805,
    v1806,
    v1807,
    v1808,
    v1809);
  v1810 = (ServantGroupMaster_o *)sub_B5D694(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v1810, 0LL);
  if ( v1810 )
  {
    v1458 = sub_B5D684(v1810, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1462;
  v1456->m_Items[50] = (DataMasterBase_o *)v1810;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[50],
    (System_Int32_array **)v1810,
    v1811,
    v1812,
    v1813,
    v1814,
    v1815,
    v1816);
  v1817 = (ServantLimitMaster_o *)sub_B5D694(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v1817, 0LL);
  if ( v1817 )
  {
    v1458 = sub_B5D684(v1817, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1462;
  v1456->m_Items[51] = (DataMasterBase_o *)v1817;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[51],
    (System_Int32_array **)v1817,
    v1818,
    v1819,
    v1820,
    v1821,
    v1822,
    v1823);
  v1824 = (ServantLimitAddMaster_o *)sub_B5D694(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v1824, 0LL);
  if ( v1824 )
  {
    v1458 = sub_B5D684(v1824, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1462;
  v1456->m_Items[52] = (DataMasterBase_o *)v1824;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[52],
    (System_Int32_array **)v1824,
    v1825,
    v1826,
    v1827,
    v1828,
    v1829,
    v1830);
  v1831 = (ServantSkillMaster_o *)sub_B5D694(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v1831, 0LL);
  if ( v1831 )
  {
    v1458 = sub_B5D684(v1831, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1462;
  v1456->m_Items[53] = (DataMasterBase_o *)v1831;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[53],
    (System_Int32_array **)v1831,
    v1832,
    v1833,
    v1834,
    v1835,
    v1836,
    v1837);
  v1838 = (ServantPassiveSkillMaster_o *)sub_B5D694(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v1838, 0LL);
  if ( v1838 )
  {
    v1458 = sub_B5D684(v1838, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1462;
  v1456->m_Items[54] = (DataMasterBase_o *)v1838;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[54],
    (System_Int32_array **)v1838,
    v1839,
    v1840,
    v1841,
    v1842,
    v1843,
    v1844);
  v1845 = (BgmMaster_o *)sub_B5D694(BgmMaster_TypeInfo);
  BgmMaster___ctor(v1845, 0LL);
  if ( v1845 )
  {
    v1458 = sub_B5D684(v1845, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1462;
  v1456->m_Items[55] = (DataMasterBase_o *)v1845;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[55],
    (System_Int32_array **)v1845,
    v1846,
    v1847,
    v1848,
    v1849,
    v1850,
    v1851);
  v1852 = (ServantScriptMaster_o *)sub_B5D694(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v1852, 0LL);
  if ( v1852 )
  {
    v1458 = sub_B5D684(v1852, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1462;
  v1456->m_Items[56] = (DataMasterBase_o *)v1852;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[56],
    (System_Int32_array **)v1852,
    v1853,
    v1854,
    v1855,
    v1856,
    v1857,
    v1858);
  v1859 = (NewsMaster_o *)sub_B5D694(NewsMaster_TypeInfo);
  NewsMaster___ctor(v1859, 0LL);
  if ( v1859 )
  {
    v1458 = sub_B5D684(v1859, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1462;
  v1456->m_Items[57] = (DataMasterBase_o *)v1859;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[57],
    (System_Int32_array **)v1859,
    v1860,
    v1861,
    v1862,
    v1863,
    v1864,
    v1865);
  v1866 = (TelopMaster_o *)sub_B5D694(TelopMaster_TypeInfo);
  TelopMaster___ctor(v1866, 0LL);
  if ( v1866 )
  {
    v1458 = sub_B5D684(v1866, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1462;
  v1456->m_Items[58] = (DataMasterBase_o *)v1866;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[58],
    (System_Int32_array **)v1866,
    v1867,
    v1868,
    v1869,
    v1870,
    v1871,
    v1872);
  v1873 = (UserExpMaster_o *)sub_B5D694(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v1873, 0LL);
  if ( v1873 )
  {
    v1458 = sub_B5D684(v1873, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1462;
  v1456->m_Items[59] = (DataMasterBase_o *)v1873;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[59],
    (System_Int32_array **)v1873,
    v1874,
    v1875,
    v1876,
    v1877,
    v1878,
    v1879);
  v1880 = (TreasureDvcMaster_o *)sub_B5D694(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v1880, 0LL);
  if ( v1880 )
  {
    v1458 = sub_B5D684(v1880, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1462;
  v1456->m_Items[60] = (DataMasterBase_o *)v1880;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[60],
    (System_Int32_array **)v1880,
    v1881,
    v1882,
    v1883,
    v1884,
    v1885,
    v1886);
  v1887 = (ServantTreasureDvcMaster_o *)sub_B5D694(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v1887, 0LL);
  if ( v1887 )
  {
    v1458 = sub_B5D684(v1887, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1462;
  v1456->m_Items[61] = (DataMasterBase_o *)v1887;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[61],
    (System_Int32_array **)v1887,
    v1888,
    v1889,
    v1890,
    v1891,
    v1892,
    v1893);
  v1894 = (SkillMaster_o *)sub_B5D694(SkillMaster_TypeInfo);
  SkillMaster___ctor(v1894, 0LL);
  if ( v1894 )
  {
    v1458 = sub_B5D684(v1894, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1462;
  v1456->m_Items[62] = (DataMasterBase_o *)v1894;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[62],
    (System_Int32_array **)v1894,
    v1895,
    v1896,
    v1897,
    v1898,
    v1899,
    v1900);
  v1901 = (SkillLvMaster_o *)sub_B5D694(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v1901, 0LL);
  if ( v1901 )
  {
    v1458 = sub_B5D684(v1901, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1462;
  v1456->m_Items[63] = (DataMasterBase_o *)v1901;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[63],
    (System_Int32_array **)v1901,
    v1902,
    v1903,
    v1904,
    v1905,
    v1906,
    v1907);
  v1908 = (SkillDetailMaster_o *)sub_B5D694(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v1908, 0LL);
  if ( v1908 )
  {
    v1458 = sub_B5D684(v1908, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1462;
  v1456->m_Items[64] = (DataMasterBase_o *)v1908;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[64],
    (System_Int32_array **)v1908,
    v1909,
    v1910,
    v1911,
    v1912,
    v1913,
    v1914);
  v1915 = (CommandSpellMaster_o *)sub_B5D694(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v1915, 0LL);
  if ( v1915 )
  {
    v1458 = sub_B5D684(v1915, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1462;
  v1456->m_Items[65] = (DataMasterBase_o *)v1915;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[65],
    (System_Int32_array **)v1915,
    v1916,
    v1917,
    v1918,
    v1919,
    v1920,
    v1921);
  v1922 = (EquipMaster_o *)sub_B5D694(EquipMaster_TypeInfo);
  EquipMaster___ctor(v1922, 0LL);
  if ( v1922 )
  {
    v1458 = sub_B5D684(v1922, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1462;
  v1456->m_Items[66] = (DataMasterBase_o *)v1922;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[66],
    (System_Int32_array **)v1922,
    v1923,
    v1924,
    v1925,
    v1926,
    v1927,
    v1928);
  v1929 = (EquipExpMaster_o *)sub_B5D694(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v1929, 0LL);
  if ( v1929 )
  {
    v1458 = sub_B5D684(v1929, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1462;
  v1456->m_Items[67] = (DataMasterBase_o *)v1929;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[67],
    (System_Int32_array **)v1929,
    v1930,
    v1931,
    v1932,
    v1933,
    v1934,
    v1935);
  v1936 = (EquipSkillMaster_o *)sub_B5D694(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v1936, 0LL);
  if ( v1936 )
  {
    v1458 = sub_B5D684(v1936, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1462;
  v1456->m_Items[68] = (DataMasterBase_o *)v1936;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[68],
    (System_Int32_array **)v1936,
    v1937,
    v1938,
    v1939,
    v1940,
    v1941,
    v1942);
  v1943 = (SubEquipMaster_o *)sub_B5D694(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v1943, 0LL);
  if ( v1943 )
  {
    v1458 = sub_B5D684(v1943, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1462;
  v1456->m_Items[69] = (DataMasterBase_o *)v1943;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[69],
    (System_Int32_array **)v1943,
    v1944,
    v1945,
    v1946,
    v1947,
    v1948,
    v1949);
  v1950 = (AccessaryMaster_o *)sub_B5D694(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v1950, 0LL);
  if ( v1950 )
  {
    v1458 = sub_B5D684(v1950, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1462;
  v1456->m_Items[70] = (DataMasterBase_o *)v1950;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[70],
    (System_Int32_array **)v1950,
    v1951,
    v1952,
    v1953,
    v1954,
    v1955,
    v1956);
  v1957 = (UserPresentBoxMaster_o *)sub_B5D694(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v1957, 0LL);
  if ( v1957 )
  {
    v1458 = sub_B5D684(v1957, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1462;
  v1456->m_Items[71] = (DataMasterBase_o *)v1957;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[71],
    (System_Int32_array **)v1957,
    v1958,
    v1959,
    v1960,
    v1961,
    v1962,
    v1963);
  v1964 = (UserDeckMaster_o *)sub_B5D694(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v1964, 0LL);
  if ( v1964 )
  {
    v1458 = sub_B5D684(v1964, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1462;
  v1456->m_Items[72] = (DataMasterBase_o *)v1964;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[72],
    (System_Int32_array **)v1964,
    v1965,
    v1966,
    v1967,
    v1968,
    v1969,
    v1970);
  v1971 = (UserSubEquipMaster_o *)sub_B5D694(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v1971, 0LL);
  if ( v1971 )
  {
    v1458 = sub_B5D684(v1971, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
    {
LABEL_1463:
      v4861 = sub_B5D6BC(v1458);
      sub_B5D668(v4861, 0LL);
    }
  }
  if ( *p_max_length <= 0x49 )
  {
LABEL_1462:
    v4860 = sub_B5D6C8(v1458);
    sub_B5D668(v4860, 0LL);
  }
  v1456->m_Items[73] = (DataMasterBase_o *)v1971;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[73],
    (System_Int32_array **)v1971,
    v1972,
    v1973,
    v1974,
    v1975,
    v1976,
    v1977);
  v1978 = (GachaMaster_o *)sub_B5D694(GachaMaster_TypeInfo);
  GachaMaster___ctor(v1978, 0LL);
  if ( v1978 )
  {
    v1458 = sub_B5D684(v1978, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1463;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1457;
  v1456->m_Items[74] = (DataMasterBase_o *)v1978;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[74],
    (System_Int32_array **)v1978,
    v1979,
    v1980,
    v1981,
    v1982,
    v1983,
    v1984);
  v1985 = (GachaImageMaster_o *)sub_B5D694(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v1985, 0LL);
  if ( v1985 )
  {
    v1458 = sub_B5D684(v1985, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1457;
  v1456->m_Items[75] = (DataMasterBase_o *)v1985;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[75],
    (System_Int32_array **)v1985,
    v1986,
    v1987,
    v1988,
    v1989,
    v1990,
    v1991);
  v1992 = (UserGachaMaster_o *)sub_B5D694(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v1992, 0LL);
  if ( v1992 )
  {
    v1458 = sub_B5D684(v1992, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1457;
  v1456->m_Items[76] = (DataMasterBase_o *)v1992;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[76],
    (System_Int32_array **)v1992,
    v1993,
    v1994,
    v1995,
    v1996,
    v1997,
    v1998);
  v1999 = (UserEquipMaster_o *)sub_B5D694(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v1999, 0LL);
  if ( v1999 )
  {
    v1458 = sub_B5D684(v1999, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1457;
  v1456->m_Items[77] = (DataMasterBase_o *)v1999;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[77],
    (System_Int32_array **)v1999,
    v2000,
    v2001,
    v2002,
    v2003,
    v2004,
    v2005);
  v2006 = (UserServantCollectionMaster_o *)sub_B5D694(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v2006, 0LL);
  if ( v2006 )
  {
    v1458 = sub_B5D684(v2006, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1457;
  v1456->m_Items[78] = (DataMasterBase_o *)v2006;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[78],
    (System_Int32_array **)v2006,
    v2007,
    v2008,
    v2009,
    v2010,
    v2011,
    v2012);
  v2013 = (FriendshipMaster_o *)sub_B5D694(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v2013, 0LL);
  if ( v2013 )
  {
    v1458 = sub_B5D684(v2013, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1457;
  v1456->m_Items[79] = (DataMasterBase_o *)v2013;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[79],
    (System_Int32_array **)v2013,
    v2014,
    v2015,
    v2016,
    v2017,
    v2018,
    v2019);
  v2020 = (GachaTicketMaster_o *)sub_B5D694(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v2020, 0LL);
  if ( v2020 )
  {
    v1458 = sub_B5D684(v2020, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1457;
  v1456->m_Items[80] = (DataMasterBase_o *)v2020;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[80],
    (System_Int32_array **)v2020,
    v2021,
    v2022,
    v2023,
    v2024,
    v2025,
    v2026);
  v2027 = (UserFormationMaster_o *)sub_B5D694(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v2027, 0LL);
  if ( v2027 )
  {
    v1458 = sub_B5D684(v2027, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1457;
  v1456->m_Items[81] = (DataMasterBase_o *)v2027;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[81],
    (System_Int32_array **)v2027,
    v2028,
    v2029,
    v2030,
    v2031,
    v2032,
    v2033);
  v2034 = (FunctionMaster_o *)sub_B5D694(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v2034, 0LL);
  if ( v2034 )
  {
    v1458 = sub_B5D684(v2034, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1457;
  v1456->m_Items[82] = (DataMasterBase_o *)v2034;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[82],
    (System_Int32_array **)v2034,
    v2035,
    v2036,
    v2037,
    v2038,
    v2039,
    v2040);
  v2041 = (BuffMaster_o *)sub_B5D694(BuffMaster_TypeInfo);
  BuffMaster___ctor(v2041, 0LL);
  if ( v2041 )
  {
    v1458 = sub_B5D684(v2041, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1457;
  v1456->m_Items[83] = (DataMasterBase_o *)v2041;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[83],
    (System_Int32_array **)v2041,
    v2042,
    v2043,
    v2044,
    v2045,
    v2046,
    v2047);
  v2048 = (GachaReleaseMaster_o *)sub_B5D694(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v2048, 0LL);
  if ( v2048 )
  {
    v1458 = sub_B5D684(v2048, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1457;
  v1456->m_Items[84] = (DataMasterBase_o *)v2048;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[84],
    (System_Int32_array **)v2048,
    v2049,
    v2050,
    v2051,
    v2052,
    v2053,
    v2054);
  v2055 = (CombineQpMaster_o *)sub_B5D694(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v2055, 0LL);
  if ( v2055 )
  {
    v1458 = sub_B5D684(v2055, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1457;
  v1456->m_Items[85] = (DataMasterBase_o *)v2055;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[85],
    (System_Int32_array **)v2055,
    v2056,
    v2057,
    v2058,
    v2059,
    v2060,
    v2061);
  v2062 = (CombineMaterialMaster_o *)sub_B5D694(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v2062, 0LL);
  if ( v2062 )
  {
    v1458 = sub_B5D684(v2062, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1457;
  v1456->m_Items[86] = (DataMasterBase_o *)v2062;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[86],
    (System_Int32_array **)v2062,
    v2063,
    v2064,
    v2065,
    v2066,
    v2067,
    v2068);
  v2069 = (EventCombineMaster_o *)sub_B5D694(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v2069, 0LL);
  if ( v2069 )
  {
    v1458 = sub_B5D684(v2069, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1457;
  v1456->m_Items[87] = (DataMasterBase_o *)v2069;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[87],
    (System_Int32_array **)v2069,
    v2070,
    v2071,
    v2072,
    v2073,
    v2074,
    v2075);
  v2076 = (ServantExpMaster_o *)sub_B5D694(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v2076, 0LL);
  if ( v2076 )
  {
    v1458 = sub_B5D684(v2076, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1457;
  v1456->m_Items[88] = (DataMasterBase_o *)v2076;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[88],
    (System_Int32_array **)v2076,
    v2077,
    v2078,
    v2079,
    v2080,
    v2081,
    v2082);
  v2083 = (CombineSkillMaster_o *)sub_B5D694(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v2083, 0LL);
  if ( v2083 )
  {
    v1458 = sub_B5D684(v2083, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1457;
  v1456->m_Items[89] = (DataMasterBase_o *)v2083;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[89],
    (System_Int32_array **)v2083,
    v2084,
    v2085,
    v2086,
    v2087,
    v2088,
    v2089);
  v2090 = (CombineTdMaster_o *)sub_B5D694(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v2090, 0LL);
  if ( v2090 )
  {
    v1458 = sub_B5D684(v2090, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1457;
  v1456->m_Items[90] = (DataMasterBase_o *)v2090;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[90],
    (System_Int32_array **)v2090,
    v2091,
    v2092,
    v2093,
    v2094,
    v2095,
    v2096);
  v2097 = (EventQuestMaster_o *)sub_B5D694(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v2097, 0LL);
  if ( v2097 )
  {
    v1458 = sub_B5D684(v2097, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1457;
  v1456->m_Items[91] = (DataMasterBase_o *)v2097;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[91],
    (System_Int32_array **)v2097,
    v2098,
    v2099,
    v2100,
    v2101,
    v2102,
    v2103);
  v2104 = (EventCampaignMaster_o *)sub_B5D694(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v2104, 0LL);
  if ( v2104 )
  {
    v1458 = sub_B5D684(v2104, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1457;
  v1456->m_Items[92] = (DataMasterBase_o *)v2104;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[92],
    (System_Int32_array **)v2104,
    v2105,
    v2106,
    v2107,
    v2108,
    v2109,
    v2110);
  v2111 = (IllustratorMaster_o *)sub_B5D694(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v2111, 0LL);
  if ( v2111 )
  {
    v1458 = sub_B5D684(v2111, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1457;
  v1456->m_Items[93] = (DataMasterBase_o *)v2111;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[93],
    (System_Int32_array **)v2111,
    v2112,
    v2113,
    v2114,
    v2115,
    v2116,
    v2117);
  v2118 = (CvMaster_o *)sub_B5D694(CvMaster_TypeInfo);
  CvMaster___ctor(v2118, v2119);
  if ( v2118 )
  {
    v1458 = sub_B5D684(v2118, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1457;
  v1456->m_Items[94] = (DataMasterBase_o *)v2118;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[94],
    (System_Int32_array **)v2118,
    v2120,
    v2121,
    v2122,
    v2123,
    v2124,
    v2125);
  v2126 = (TreasureDvcLvMaster_o *)sub_B5D694(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v2126, 0LL);
  if ( v2126 )
  {
    v1458 = sub_B5D684(v2126, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1457;
  v1456->m_Items[95] = (DataMasterBase_o *)v2126;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[95],
    (System_Int32_array **)v2126,
    v2127,
    v2128,
    v2129,
    v2130,
    v2131,
    v2132);
  v2133 = (TreasureDvcDetailMaster_o *)sub_B5D694(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v2133, 0LL);
  if ( v2133 )
  {
    v1458 = sub_B5D684(v2133, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1457;
  v1456->m_Items[96] = (DataMasterBase_o *)v2133;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[96],
    (System_Int32_array **)v2133,
    v2134,
    v2135,
    v2136,
    v2137,
    v2138,
    v2139);
  v2140 = (UserFollowerMaster_o *)sub_B5D694(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v2140, 0LL);
  if ( v2140 )
  {
    v1458 = sub_B5D684(v2140, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1457;
  v1456->m_Items[97] = (DataMasterBase_o *)v2140;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[97],
    (System_Int32_array **)v2140,
    v2141,
    v2142,
    v2143,
    v2144,
    v2145,
    v2146);
  v2147 = (NpcFollowerMaster_o *)sub_B5D694(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v2147, 0LL);
  if ( v2147 )
  {
    v1458 = sub_B5D684(v2147, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1457;
  v1456->m_Items[98] = (DataMasterBase_o *)v2147;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[98],
    (System_Int32_array **)v2147,
    v2148,
    v2149,
    v2150,
    v2151,
    v2152,
    v2153);
  v2154 = (NpcServantFollowerMaster_o *)sub_B5D694(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v2154, 0LL);
  if ( v2154 )
  {
    v1458 = sub_B5D684(v2154, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1457;
  v1456->m_Items[99] = (DataMasterBase_o *)v2154;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[99],
    (System_Int32_array **)v2154,
    v2155,
    v2156,
    v2157,
    v2158,
    v2159,
    v2160);
  v2161 = (UserEventMaster_o *)sub_B5D694(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v2161, 0LL);
  if ( v2161 )
  {
    v1458 = sub_B5D684(v2161, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1457;
  v1456->m_Items[100] = (DataMasterBase_o *)v2161;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[100],
    (System_Int32_array **)v2161,
    v2162,
    v2163,
    v2164,
    v2165,
    v2166,
    v2167);
  v2168 = (UserShopMaster_o *)sub_B5D694(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v2168, 0LL);
  if ( v2168 )
  {
    v1458 = sub_B5D684(v2168, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1457;
  v1456->m_Items[101] = (DataMasterBase_o *)v2168;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[101],
    (System_Int32_array **)v2168,
    v2169,
    v2170,
    v2171,
    v2172,
    v2173,
    v2174);
  v2175 = (UserContinueMaster_o *)sub_B5D694(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v2175, 0LL);
  if ( v2175 )
  {
    v1458 = sub_B5D684(v2175, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1457;
  v1456->m_Items[102] = (DataMasterBase_o *)v2175;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[102],
    (System_Int32_array **)v2175,
    v2176,
    v2177,
    v2178,
    v2179,
    v2180,
    v2181);
  v2182 = (ConstantMaster_o *)sub_B5D694(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v2182, 0LL);
  if ( v2182 )
  {
    v1458 = sub_B5D684(v2182, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1457;
  v1456->m_Items[103] = (DataMasterBase_o *)v2182;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[103],
    (System_Int32_array **)v2182,
    v2183,
    v2184,
    v2185,
    v2186,
    v2187,
    v2188);
  v2189 = (ConstantLongMaster_o *)sub_B5D694(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v2189, 0LL);
  if ( v2189 )
  {
    v1458 = sub_B5D684(v2189, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1457;
  v1456->m_Items[104] = (DataMasterBase_o *)v2189;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[104],
    (System_Int32_array **)v2189,
    v2190,
    v2191,
    v2192,
    v2193,
    v2194,
    v2195);
  v2196 = (ConstantStrMaster_o *)sub_B5D694(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v2196, 0LL);
  if ( v2196 )
  {
    v1458 = sub_B5D684(v2196, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1457;
  v1456->m_Items[105] = (DataMasterBase_o *)v2196;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[105],
    (System_Int32_array **)v2196,
    v2197,
    v2198,
    v2199,
    v2200,
    v2201,
    v2202);
  v2203 = (AiMaster_o *)sub_B5D694(AiMaster_TypeInfo);
  AiMaster___ctor(v2203, 0LL);
  if ( v2203 )
  {
    v1458 = sub_B5D684(v2203, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1457;
  v1456->m_Items[106] = (DataMasterBase_o *)v2203;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[106],
    (System_Int32_array **)v2203,
    v2204,
    v2205,
    v2206,
    v2207,
    v2208,
    v2209);
  v2210 = (AiActMaster_o *)sub_B5D694(AiActMaster_TypeInfo);
  AiActMaster___ctor(v2210, 0LL);
  if ( v2210 )
  {
    v1458 = sub_B5D684(v2210, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1457;
  v1456->m_Items[107] = (DataMasterBase_o *)v2210;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[107],
    (System_Int32_array **)v2210,
    v2211,
    v2212,
    v2213,
    v2214,
    v2215,
    v2216);
  v2217 = (AttriRelationMaster_o *)sub_B5D694(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v2217, 0LL);
  if ( v2217 )
  {
    v1458 = sub_B5D684(v2217, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1457;
  v1456->m_Items[108] = (DataMasterBase_o *)v2217;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[108],
    (System_Int32_array **)v2217,
    v2218,
    v2219,
    v2220,
    v2221,
    v2222,
    v2223);
  v2224 = (ClassRelationMaster_o *)sub_B5D694(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v2224, 0LL);
  if ( v2224 )
  {
    v1458 = sub_B5D684(v2224, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1457;
  v1456->m_Items[109] = (DataMasterBase_o *)v2224;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[109],
    (System_Int32_array **)v2224,
    v2225,
    v2226,
    v2227,
    v2228,
    v2229,
    v2230);
  v2231 = (EffectMaster_o *)sub_B5D694(EffectMaster_TypeInfo);
  EffectMaster___ctor(v2231, 0LL);
  if ( v2231 )
  {
    v1458 = sub_B5D684(v2231, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1457;
  v1456->m_Items[110] = (DataMasterBase_o *)v2231;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[110],
    (System_Int32_array **)v2231,
    v2232,
    v2233,
    v2234,
    v2235,
    v2236,
    v2237);
  v2238 = (EquipImageMaster_o *)sub_B5D694(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v2238, 0LL);
  if ( v2238 )
  {
    v1458 = sub_B5D684(v2238, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1457;
  v1456->m_Items[111] = (DataMasterBase_o *)v2238;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[111],
    (System_Int32_array **)v2238,
    v2239,
    v2240,
    v2241,
    v2242,
    v2243,
    v2244);
  v2245 = (ServantVoiceMaster_o *)sub_B5D694(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v2245, 0LL);
  if ( v2245 )
  {
    v1458 = sub_B5D684(v2245, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1457;
  v1456->m_Items[112] = (DataMasterBase_o *)v2245;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[112],
    (System_Int32_array **)v2245,
    v2246,
    v2247,
    v2248,
    v2249,
    v2250,
    v2251);
  v2252 = (CombineLimitMaster_o *)sub_B5D694(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v2252, 0LL);
  if ( v2252 )
  {
    v1458 = sub_B5D684(v2252, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1457;
  v1456->m_Items[113] = (DataMasterBase_o *)v2252;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[113],
    (System_Int32_array **)v2252,
    v2253,
    v2254,
    v2255,
    v2256,
    v2257,
    v2258);
  v2259 = (CardMaster_o *)sub_B5D694(CardMaster_TypeInfo);
  CardMaster___ctor(v2259, 0LL);
  if ( v2259 )
  {
    v1458 = sub_B5D684(v2259, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1457;
  v1456->m_Items[114] = (DataMasterBase_o *)v2259;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[114],
    (System_Int32_array **)v2259,
    v2260,
    v2261,
    v2262,
    v2263,
    v2264,
    v2265);
  v2266 = (CombineQpSvtEquipMaster_o *)sub_B5D694(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v2266, 0LL);
  if ( v2266 )
  {
    v1458 = sub_B5D684(v2266, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1457;
  v1456->m_Items[115] = (DataMasterBase_o *)v2266;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[115],
    (System_Int32_array **)v2266,
    v2267,
    v2268,
    v2269,
    v2270,
    v2271,
    v2272);
  v2273 = (ServantRarityMaster_o *)sub_B5D694(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v2273, 0LL);
  if ( v2273 )
  {
    v1458 = sub_B5D684(v2273, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1457;
  v1456->m_Items[116] = (DataMasterBase_o *)v2273;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[116],
    (System_Int32_array **)v2273,
    v2274,
    v2275,
    v2276,
    v2277,
    v2278,
    v2279);
  v2280 = (SetItemMaster_o *)sub_B5D694(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v2280, 0LL);
  if ( v2280 )
  {
    v1458 = sub_B5D684(v2280, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1457;
  v1456->m_Items[117] = (DataMasterBase_o *)v2280;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[117],
    (System_Int32_array **)v2280,
    v2281,
    v2282,
    v2283,
    v2284,
    v2285,
    v2286);
  v2287 = (RecoverMaster_o *)sub_B5D694(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v2287, 0LL);
  if ( v2287 )
  {
    v1458 = sub_B5D684(v2287, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1457;
  v1456->m_Items[118] = (DataMasterBase_o *)v2287;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[118],
    (System_Int32_array **)v2287,
    v2288,
    v2289,
    v2290,
    v2291,
    v2292,
    v2293);
  v2294 = (BannerMaster_o *)sub_B5D694(BannerMaster_TypeInfo);
  BannerMaster___ctor(v2294, 0LL);
  if ( v2294 )
  {
    v1458 = sub_B5D684(v2294, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1457;
  v1456->m_Items[119] = (DataMasterBase_o *)v2294;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[119],
    (System_Int32_array **)v2294,
    v2295,
    v2296,
    v2297,
    v2298,
    v2299,
    v2300);
  v2301 = (ShopReleaseMaster_o *)sub_B5D694(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v2301, 0LL);
  if ( v2301 )
  {
    v1458 = sub_B5D684(v2301, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1457;
  v1456->m_Items[120] = (DataMasterBase_o *)v2301;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[120],
    (System_Int32_array **)v2301,
    v2302,
    v2303,
    v2304,
    v2305,
    v2306,
    v2307);
  v2308 = (EventRewardMaster_o *)sub_B5D694(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v2308, 0LL);
  if ( v2308 )
  {
    v1458 = sub_B5D684(v2308, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1457;
  v1456->m_Items[121] = (DataMasterBase_o *)v2308;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[121],
    (System_Int32_array **)v2308,
    v2309,
    v2310,
    v2311,
    v2312,
    v2313,
    v2314);
  v2315 = (EventDetailMaster_o *)sub_B5D694(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v2315, 0LL);
  if ( v2315 )
  {
    v1458 = sub_B5D684(v2315, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1457;
  v1456->m_Items[122] = (DataMasterBase_o *)v2315;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[122],
    (System_Int32_array **)v2315,
    v2316,
    v2317,
    v2318,
    v2319,
    v2320,
    v2321);
  v2322 = (EventServantMaster_o *)sub_B5D694(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v2322, 0LL);
  if ( v2322 )
  {
    v1458 = sub_B5D684(v2322, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1457;
  v1456->m_Items[123] = (DataMasterBase_o *)v2322;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[123],
    (System_Int32_array **)v2322,
    v2323,
    v2324,
    v2325,
    v2326,
    v2327,
    v2328);
  v2329 = (BoxGachaMaster_o *)sub_B5D694(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v2329, 0LL);
  if ( v2329 )
  {
    v1458 = sub_B5D684(v2329, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1457;
  v1456->m_Items[124] = (DataMasterBase_o *)v2329;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[124],
    (System_Int32_array **)v2329,
    v2330,
    v2331,
    v2332,
    v2333,
    v2334,
    v2335);
  v2336 = (BoxGachaBaseMaster_o *)sub_B5D694(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v2336, 0LL);
  if ( v2336 )
  {
    v1458 = sub_B5D684(v2336, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1457;
  v1456->m_Items[125] = (DataMasterBase_o *)v2336;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[125],
    (System_Int32_array **)v2336,
    v2337,
    v2338,
    v2339,
    v2340,
    v2341,
    v2342);
  v2343 = (BoxGachaTalkMaster_o *)sub_B5D694(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v2343, 0LL);
  if ( v2343 )
  {
    v1458 = sub_B5D684(v2343, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1457;
  v1456->m_Items[126] = (DataMasterBase_o *)v2343;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[126],
    (System_Int32_array **)v2343,
    v2344,
    v2345,
    v2346,
    v2347,
    v2348,
    v2349);
  v2350 = (UserBoxGachaMaster_o *)sub_B5D694(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v2350, 0LL);
  if ( v2350 )
  {
    v1458 = sub_B5D684(v2350, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1457;
  v1456->m_Items[127] = (DataMasterBase_o *)v2350;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[127],
    (System_Int32_array **)v2350,
    v2351,
    v2352,
    v2353,
    v2354,
    v2355,
    v2356);
  v2357 = (BoxGachaHistoryMaster_o *)sub_B5D694(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v2357, 0LL);
  if ( v2357 )
  {
    v1458 = sub_B5D684(v2357, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1457;
  v1456->m_Items[128] = (DataMasterBase_o *)v2357;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[128],
    (System_Int32_array **)v2357,
    v2358,
    v2359,
    v2360,
    v2361,
    v2362,
    v2363);
  v2364 = (BattleBgMaster_o *)sub_B5D694(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v2364, 0LL);
  if ( v2364 )
  {
    v1458 = sub_B5D684(v2364, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1457;
  v1456->m_Items[129] = (DataMasterBase_o *)v2364;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[129],
    (System_Int32_array **)v2364,
    v2365,
    v2366,
    v2367,
    v2368,
    v2369,
    v2370);
  v2371 = (TipsBattleMaster_o *)sub_B5D694(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v2371, 0LL);
  if ( v2371 )
  {
    v1458 = sub_B5D684(v2371, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1457;
  v1456->m_Items[130] = (DataMasterBase_o *)v2371;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[130],
    (System_Int32_array **)v2371,
    v2372,
    v2373,
    v2374,
    v2375,
    v2376,
    v2377);
  v2378 = (UserLoginMaster_o *)sub_B5D694(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v2378, 0LL);
  if ( v2378 )
  {
    v1458 = sub_B5D684(v2378, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1457;
  v1456->m_Items[131] = (DataMasterBase_o *)v2378;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[131],
    (System_Int32_array **)v2378,
    v2379,
    v2380,
    v2381,
    v2382,
    v2383,
    v2384);
  v2385 = (VoiceMaster_o *)sub_B5D694(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v2385, 0LL);
  if ( v2385 )
  {
    v1458 = sub_B5D684(v2385, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1457;
  v1456->m_Items[132] = (DataMasterBase_o *)v2385;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[132],
    (System_Int32_array **)v2385,
    v2386,
    v2387,
    v2388,
    v2389,
    v2390,
    v2391);
  v2392 = (EventRewardExtraMaster_o *)sub_B5D694(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v2392, 0LL);
  if ( v2392 )
  {
    v1458 = sub_B5D684(v2392, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1457;
  v1456->m_Items[133] = (DataMasterBase_o *)v2392;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[133],
    (System_Int32_array **)v2392,
    v2393,
    v2394,
    v2395,
    v2396,
    v2397,
    v2398);
  v2399 = (EventMissionMaster_o *)sub_B5D694(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v2399, 0LL);
  if ( v2399 )
  {
    v1458 = sub_B5D684(v2399, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1457;
  v1456->m_Items[134] = (DataMasterBase_o *)v2399;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[134],
    (System_Int32_array **)v2399,
    v2400,
    v2401,
    v2402,
    v2403,
    v2404,
    v2405);
  v2406 = (EventMissionActionMaster_o *)sub_B5D694(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v2406, 0LL);
  if ( v2406 )
  {
    v1458 = sub_B5D684(v2406, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1457;
  v1456->m_Items[135] = (DataMasterBase_o *)v2406;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[135],
    (System_Int32_array **)v2406,
    v2407,
    v2408,
    v2409,
    v2410,
    v2411,
    v2412);
  v2413 = (EventMissionActionAddMaster_o *)sub_B5D694(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v2413, 0LL);
  if ( v2413 )
  {
    v1458 = sub_B5D684(v2413, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1457;
  v1456->m_Items[136] = (DataMasterBase_o *)v2413;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[136],
    (System_Int32_array **)v2413,
    v2414,
    v2415,
    v2416,
    v2417,
    v2418,
    v2419);
  v2420 = (EventMissionConditionMaster_o *)sub_B5D694(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v2420, 0LL);
  if ( v2420 )
  {
    v1458 = sub_B5D684(v2420, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1457;
  v1456->m_Items[137] = (DataMasterBase_o *)v2420;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[137],
    (System_Int32_array **)v2420,
    v2421,
    v2422,
    v2423,
    v2424,
    v2425,
    v2426);
  v2427 = (EventMissionCondDetailMaster_o *)sub_B5D694(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v2427, 0LL);
  if ( v2427 )
  {
    v1458 = sub_B5D684(v2427, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1457;
  v1456->m_Items[138] = (DataMasterBase_o *)v2427;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[138],
    (System_Int32_array **)v2427,
    v2428,
    v2429,
    v2430,
    v2431,
    v2432,
    v2433);
  v2434 = (EventMissionAddMaster_o *)sub_B5D694(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v2434, 0LL);
  if ( v2434 )
  {
    v1458 = sub_B5D684(v2434, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1457;
  v1456->m_Items[139] = (DataMasterBase_o *)v2434;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[139],
    (System_Int32_array **)v2434,
    v2435,
    v2436,
    v2437,
    v2438,
    v2439,
    v2440);
  v2441 = (CompleteMissionMaster_o *)sub_B5D694(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v2441, 0LL);
  if ( v2441 )
  {
    v1458 = sub_B5D684(v2441, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1457;
  v1456->m_Items[140] = (DataMasterBase_o *)v2441;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[140],
    (System_Int32_array **)v2441,
    v2442,
    v2443,
    v2444,
    v2445,
    v2446,
    v2447);
  v2448 = (EventRewardSetMaster_o *)sub_B5D694(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v2448, 0LL);
  if ( v2448 )
  {
    v1458 = sub_B5D684(v2448, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1457;
  v1456->m_Items[141] = (DataMasterBase_o *)v2448;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[141],
    (System_Int32_array **)v2448,
    v2449,
    v2450,
    v2451,
    v2452,
    v2453,
    v2454);
  v2455 = (UserEventMissionMaster_o *)sub_B5D694(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v2455, 0LL);
  if ( v2455 )
  {
    v1458 = sub_B5D684(v2455, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1457;
  v1456->m_Items[142] = (DataMasterBase_o *)v2455;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[142],
    (System_Int32_array **)v2455,
    v2456,
    v2457,
    v2458,
    v2459,
    v2460,
    v2461);
  v2462 = (UserEventMissionCondDetailMaster_o *)sub_B5D694(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v2462, 0LL);
  if ( v2462 )
  {
    v1458 = sub_B5D684(v2462, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1457;
  v1456->m_Items[143] = (DataMasterBase_o *)v2462;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[143],
    (System_Int32_array **)v2462,
    v2463,
    v2464,
    v2465,
    v2466,
    v2467,
    v2468);
  v2469 = (BoxGachaBaseDetailMaster_o *)sub_B5D694(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v2469, 0LL);
  if ( v2469 )
  {
    v1458 = sub_B5D684(v2469, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1457;
  v1456->m_Items[144] = (DataMasterBase_o *)v2469;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[144],
    (System_Int32_array **)v2469,
    v2470,
    v2471,
    v2472,
    v2473,
    v2474,
    v2475);
  v2476 = (UserServantLeaderMaster_o *)sub_B5D694(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v2476, 0LL);
  if ( v2476 )
  {
    v1458 = sub_B5D684(v2476, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1457;
  v1456->m_Items[145] = (DataMasterBase_o *)v2476;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[145],
    (System_Int32_array **)v2476,
    v2477,
    v2478,
    v2479,
    v2480,
    v2481,
    v2482);
  v2483 = (ClosedMessageMaster_o *)sub_B5D694(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v2483, 0LL);
  if ( v2483 )
  {
    v1458 = sub_B5D684(v2483, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1457;
  v1456->m_Items[146] = (DataMasterBase_o *)v2483;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[146],
    (System_Int32_array **)v2483,
    v2484,
    v2485,
    v2486,
    v2487,
    v2488,
    v2489);
  v2490 = (FunctionGroupMaster_o *)sub_B5D694(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v2490, 0LL);
  if ( v2490 )
  {
    v1458 = sub_B5D684(v2490, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
      goto LABEL_1468;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1457;
  v1456->m_Items[147] = (DataMasterBase_o *)v2490;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[147],
    (System_Int32_array **)v2490,
    v2491,
    v2492,
    v2493,
    v2494,
    v2495,
    v2496);
  v2497 = (EventRaidMaster_o *)sub_B5D694(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v2497, 0LL);
  if ( v2497 )
  {
    v1458 = sub_B5D684(v2497, v1456->obj.klass->_1.element_class);
    if ( !v1458 )
    {
LABEL_1468:
      v4866 = sub_B5D6BC(v1458);
      sub_B5D668(v4866, 0LL);
    }
  }
  if ( *p_max_length <= 0x94 )
  {
LABEL_1457:
    v4855 = sub_B5D6C8(v1458);
    sub_B5D668(v4855, 0LL);
  }
  v1456->m_Items[148] = (DataMasterBase_o *)v2497;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[148],
    (System_Int32_array **)v2497,
    v2498,
    v2499,
    v2500,
    v2501,
    v2502,
    v2503);
  v2504 = (TotalEventRaidMaster_o *)sub_B5D694(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v2504, 0LL);
  if ( v2504 )
  {
    v2505 = sub_B5D684(v2504, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1458;
  v1456->m_Items[149] = (DataMasterBase_o *)v2504;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[149],
    (System_Int32_array **)v2504,
    v2506,
    v2507,
    v2508,
    v2509,
    v2510,
    v2511);
  v2512 = (UserEventRaidMaster_o *)sub_B5D694(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v2512, 0LL);
  if ( v2512 )
  {
    v2505 = sub_B5D684(v2512, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1458;
  v1456->m_Items[150] = (DataMasterBase_o *)v2512;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[150],
    (System_Int32_array **)v2512,
    v2513,
    v2514,
    v2515,
    v2516,
    v2517,
    v2518);
  v2519 = (EventPointMaster_o *)sub_B5D694(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v2519, 0LL);
  if ( v2519 )
  {
    v2505 = sub_B5D684(v2519, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1458;
  v1456->m_Items[151] = (DataMasterBase_o *)v2519;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[151],
    (System_Int32_array **)v2519,
    v2520,
    v2521,
    v2522,
    v2523,
    v2524,
    v2525);
  v2526 = (EventPointGroupMaster_o *)sub_B5D694(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v2526, 0LL);
  if ( v2526 )
  {
    v2505 = sub_B5D684(v2526, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1458;
  v1456->m_Items[152] = (DataMasterBase_o *)v2526;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[152],
    (System_Int32_array **)v2526,
    v2527,
    v2528,
    v2529,
    v2530,
    v2531,
    v2532);
  v2533 = (TotalEventPointMaster_o *)sub_B5D694(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v2533, 0LL);
  if ( v2533 )
  {
    v2505 = sub_B5D684(v2533, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1458;
  v1456->m_Items[153] = (DataMasterBase_o *)v2533;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[153],
    (System_Int32_array **)v2533,
    v2534,
    v2535,
    v2536,
    v2537,
    v2538,
    v2539);
  v2540 = (UserEventPointMaster_o *)sub_B5D694(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v2540, 0LL);
  if ( v2540 )
  {
    v2505 = sub_B5D684(v2540, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1458;
  v1456->m_Items[154] = (DataMasterBase_o *)v2540;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[154],
    (System_Int32_array **)v2540,
    v2541,
    v2542,
    v2543,
    v2544,
    v2545,
    v2546);
  v2547 = (EventPointUpperMaster_o *)sub_B5D694(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v2547, 0LL);
  if ( v2547 )
  {
    v2505 = sub_B5D684(v2547, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1458;
  v1456->m_Items[155] = (DataMasterBase_o *)v2547;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[155],
    (System_Int32_array **)v2547,
    v2548,
    v2549,
    v2550,
    v2551,
    v2552,
    v2553);
  v2554 = (EventPointUpperReleaseMaster_o *)sub_B5D694(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v2554, 0LL);
  if ( v2554 )
  {
    v2505 = sub_B5D684(v2554, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1458;
  v1456->m_Items[156] = (DataMasterBase_o *)v2554;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[156],
    (System_Int32_array **)v2554,
    v2555,
    v2556,
    v2557,
    v2558,
    v2559,
    v2560);
  v2561 = (EventRaceMaster_o *)sub_B5D694(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v2561, 0LL);
  if ( v2561 )
  {
    v2505 = sub_B5D684(v2561, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1458;
  v1456->m_Items[157] = (DataMasterBase_o *)v2561;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[157],
    (System_Int32_array **)v2561,
    v2562,
    v2563,
    v2564,
    v2565,
    v2566,
    v2567);
  v2568 = (EventRaceResultMaster_o *)sub_B5D694(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v2568, 0LL);
  if ( v2568 )
  {
    v2505 = sub_B5D684(v2568, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1458;
  v1456->m_Items[158] = (DataMasterBase_o *)v2568;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[158],
    (System_Int32_array **)v2568,
    v2569,
    v2570,
    v2571,
    v2572,
    v2573,
    v2574);
  v2575 = (QuestRacePointMaster_o *)sub_B5D694(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v2575, 0LL);
  if ( v2575 )
  {
    v2505 = sub_B5D684(v2575, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1458;
  v1456->m_Items[159] = (DataMasterBase_o *)v2575;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[159],
    (System_Int32_array **)v2575,
    v2576,
    v2577,
    v2578,
    v2579,
    v2580,
    v2581);
  v2582 = (UserEventRaceMaster_o *)sub_B5D694(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v2582, 0LL);
  if ( v2582 )
  {
    v2505 = sub_B5D684(v2582, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1458;
  v1456->m_Items[160] = (DataMasterBase_o *)v2582;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[160],
    (System_Int32_array **)v2582,
    v2583,
    v2584,
    v2585,
    v2586,
    v2587,
    v2588);
  v2589 = (EventScriptMaster_o *)sub_B5D694(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v2589, 0LL);
  if ( v2589 )
  {
    v2505 = sub_B5D684(v2589, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1458;
  v1456->m_Items[161] = (DataMasterBase_o *)v2589;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[161],
    (System_Int32_array **)v2589,
    v2590,
    v2591,
    v2592,
    v2593,
    v2594,
    v2595);
  v2596 = (EventScriptReleaseMaster_o *)sub_B5D694(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v2596, 0LL);
  if ( v2596 )
  {
    v2505 = sub_B5D684(v2596, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1458;
  v1456->m_Items[162] = (DataMasterBase_o *)v2596;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[162],
    (System_Int32_array **)v2596,
    v2597,
    v2598,
    v2599,
    v2600,
    v2601,
    v2602);
  v2603 = (UserPresentHistoryMaster_o *)sub_B5D694(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v2603, 0LL);
  if ( v2603 )
  {
    v2505 = sub_B5D684(v2603, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1458;
  v1456->m_Items[163] = (DataMasterBase_o *)v2603;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[163],
    (System_Int32_array **)v2603,
    v2604,
    v2605,
    v2606,
    v2607,
    v2608,
    v2609);
  v2610 = (MstMissionMaster_o *)sub_B5D694(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v2610, 0LL);
  if ( v2610 )
  {
    v2505 = sub_B5D684(v2610, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1458;
  v1456->m_Items[164] = (DataMasterBase_o *)v2610;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[164],
    (System_Int32_array **)v2610,
    v2611,
    v2612,
    v2613,
    v2614,
    v2615,
    v2616);
  v2617 = (ServantExceedMaster_o *)sub_B5D694(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v2617, 0LL);
  if ( v2617 )
  {
    v2505 = sub_B5D684(v2617, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1458;
  v1456->m_Items[165] = (DataMasterBase_o *)v2617;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[165],
    (System_Int32_array **)v2617,
    v2618,
    v2619,
    v2620,
    v2621,
    v2622,
    v2623);
  v2624 = (PartialMaintenanceMaster_o *)sub_B5D694(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v2624, 0LL);
  if ( v2624 )
  {
    v2505 = sub_B5D684(v2624, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1458;
  v1456->m_Items[166] = (DataMasterBase_o *)v2624;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[166],
    (System_Int32_array **)v2624,
    v2625,
    v2626,
    v2627,
    v2628,
    v2629,
    v2630);
  v2631 = (GuideMaster_o *)sub_B5D694(GuideMaster_TypeInfo);
  GuideMaster___ctor(v2631, 0LL);
  if ( v2631 )
  {
    v2505 = sub_B5D684(v2631, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1458;
  v1456->m_Items[167] = (DataMasterBase_o *)v2631;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[167],
    (System_Int32_array **)v2631,
    v2632,
    v2633,
    v2634,
    v2635,
    v2636,
    v2637);
  v2638 = (MstMissionDisplayInfoMaster_o *)sub_B5D694(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v2638, 0LL);
  if ( v2638 )
  {
    v2505 = sub_B5D684(v2638, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1458;
  v1456->m_Items[168] = (DataMasterBase_o *)v2638;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[168],
    (System_Int32_array **)v2638,
    v2639,
    v2640,
    v2641,
    v2642,
    v2643,
    v2644);
  v2645 = (GachaGroupMaster_o *)sub_B5D694(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v2645, 0LL);
  if ( v2645 )
  {
    v2505 = sub_B5D684(v2645, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1458;
  v1456->m_Items[169] = (DataMasterBase_o *)v2645;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[169],
    (System_Int32_array **)v2645,
    v2646,
    v2647,
    v2648,
    v2649,
    v2650,
    v2651);
  v2652 = (QuestResetMaster_o *)sub_B5D694(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v2652, 0LL);
  if ( v2652 )
  {
    v2505 = sub_B5D684(v2652, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1458;
  v1456->m_Items[170] = (DataMasterBase_o *)v2652;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[170],
    (System_Int32_array **)v2652,
    v2653,
    v2654,
    v2655,
    v2656,
    v2657,
    v2658);
  v2659 = (WarAddMaster_o *)sub_B5D694(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v2659, 0LL);
  if ( v2659 )
  {
    v2505 = sub_B5D684(v2659, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1458;
  v1456->m_Items[171] = (DataMasterBase_o *)v2659;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[171],
    (System_Int32_array **)v2659,
    v2660,
    v2661,
    v2662,
    v2663,
    v2664,
    v2665);
  v2666 = (EventItemDisplayMaster_o *)sub_B5D694(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v2666, 0LL);
  if ( v2666 )
  {
    v2505 = sub_B5D684(v2666, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1458;
  v1456->m_Items[172] = (DataMasterBase_o *)v2666;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[172],
    (System_Int32_array **)v2666,
    v2667,
    v2668,
    v2669,
    v2670,
    v2671,
    v2672);
  v2673 = (EventItemDisplayGroupMaster_o *)sub_B5D694(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v2673, 0LL);
  if ( v2673 )
  {
    v2505 = sub_B5D684(v2673, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1458;
  v1456->m_Items[173] = (DataMasterBase_o *)v2673;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[173],
    (System_Int32_array **)v2673,
    v2674,
    v2675,
    v2676,
    v2677,
    v2678,
    v2679);
  v2680 = (EventItemDisplayReleaseMaster_o *)sub_B5D694(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v2680, 0LL);
  if ( v2680 )
  {
    v2505 = sub_B5D684(v2680, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1458;
  v1456->m_Items[174] = (DataMasterBase_o *)v2680;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[174],
    (System_Int32_array **)v2680,
    v2681,
    v2682,
    v2683,
    v2684,
    v2685,
    v2686);
  v2687 = (EventTutorialMaster_o *)sub_B5D694(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v2687, 0LL);
  if ( v2687 )
  {
    v2505 = sub_B5D684(v2687, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1458;
  v1456->m_Items[175] = (DataMasterBase_o *)v2687;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[175],
    (System_Int32_array **)v2687,
    v2688,
    v2689,
    v2690,
    v2691,
    v2692,
    v2693);
  v2694 = (EventTutorialCondMaster_o *)sub_B5D694(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v2694, 0LL);
  if ( v2694 )
  {
    v2505 = sub_B5D684(v2694, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1458;
  v1456->m_Items[176] = (DataMasterBase_o *)v2694;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[176],
    (System_Int32_array **)v2694,
    v2695,
    v2696,
    v2697,
    v2698,
    v2699,
    v2700);
  v2701 = (VoiceReleaseMaster_o *)sub_B5D694(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v2701, 0LL);
  if ( v2701 )
  {
    v2505 = sub_B5D684(v2701, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1458;
  v1456->m_Items[177] = (DataMasterBase_o *)v2701;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[177],
    (System_Int32_array **)v2701,
    v2702,
    v2703,
    v2704,
    v2705,
    v2706,
    v2707);
  v2708 = (EventSuperBossMaster_o *)sub_B5D694(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v2708, 0LL);
  if ( v2708 )
  {
    v2505 = sub_B5D684(v2708, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1458;
  v1456->m_Items[178] = (DataMasterBase_o *)v2708;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[178],
    (System_Int32_array **)v2708,
    v2709,
    v2710,
    v2711,
    v2712,
    v2713,
    v2714);
  v2715 = (UserSuperBossMaster_o *)sub_B5D694(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v2715, 0LL);
  if ( v2715 )
  {
    v2505 = sub_B5D684(v2715, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1458;
  v1456->m_Items[179] = (DataMasterBase_o *)v2715;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[179],
    (System_Int32_array **)v2715,
    v2716,
    v2717,
    v2718,
    v2719,
    v2720,
    v2721);
  v2722 = (QuestScriptMaster_o *)sub_B5D694(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v2722, 0LL);
  if ( v2722 )
  {
    v2505 = sub_B5D684(v2722, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1458;
  v1456->m_Items[180] = (DataMasterBase_o *)v2722;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[180],
    (System_Int32_array **)v2722,
    v2723,
    v2724,
    v2725,
    v2726,
    v2727,
    v2728);
  v2729 = (QuestScriptReleaseMaster_o *)sub_B5D694(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v2729, 0LL);
  if ( v2729 )
  {
    v2505 = sub_B5D684(v2729, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1458;
  v1456->m_Items[181] = (DataMasterBase_o *)v2729;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[181],
    (System_Int32_array **)v2729,
    v2730,
    v2731,
    v2732,
    v2733,
    v2734,
    v2735);
  v2736 = (MaterialFolderMaster_o *)sub_B5D694(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v2736, 0LL);
  if ( v2736 )
  {
    v2505 = sub_B5D684(v2736, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1458;
  v1456->m_Items[182] = (DataMasterBase_o *)v2736;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[182],
    (System_Int32_array **)v2736,
    v2737,
    v2738,
    v2739,
    v2740,
    v2741,
    v2742);
  v2743 = (RestrictionMaster_o *)sub_B5D694(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v2743, 0LL);
  if ( v2743 )
  {
    v2505 = sub_B5D684(v2743, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1458;
  v1456->m_Items[183] = (DataMasterBase_o *)v2743;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[183],
    (System_Int32_array **)v2743,
    v2744,
    v2745,
    v2746,
    v2747,
    v2748,
    v2749);
  v2750 = (QuestRestrictionMaster_o *)sub_B5D694(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v2750, 0LL);
  if ( v2750 )
  {
    v2505 = sub_B5D684(v2750, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1458;
  v1456->m_Items[184] = (DataMasterBase_o *)v2750;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[184],
    (System_Int32_array **)v2750,
    v2751,
    v2752,
    v2753,
    v2754,
    v2755,
    v2756);
  v2757 = (ServantVoiceRelationMaster_o *)sub_B5D694(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v2757, 0LL);
  if ( v2757 )
  {
    v2505 = sub_B5D684(v2757, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1458;
  v1456->m_Items[185] = (DataMasterBase_o *)v2757;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[185],
    (System_Int32_array **)v2757,
    v2758,
    v2759,
    v2760,
    v2761,
    v2762,
    v2763);
  v2764 = (ShopDetailMaster_o *)sub_B5D694(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v2764, 0LL);
  if ( v2764 )
  {
    v2505 = sub_B5D684(v2764, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1458;
  v1456->m_Items[186] = (DataMasterBase_o *)v2764;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[186],
    (System_Int32_array **)v2764,
    v2765,
    v2766,
    v2767,
    v2768,
    v2769,
    v2770);
  v2771 = (ServantScriptAddMaster_o *)sub_B5D694(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v2771, 0LL);
  if ( v2771 )
  {
    v2505 = sub_B5D684(v2771, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1458;
  v1456->m_Items[187] = (DataMasterBase_o *)v2771;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[187],
    (System_Int32_array **)v2771,
    v2772,
    v2773,
    v2774,
    v2775,
    v2776,
    v2777);
  v2778 = (CombineMaster_o *)sub_B5D694(CombineMaster_TypeInfo);
  CombineMaster___ctor(v2778, 0LL);
  if ( v2778 )
  {
    v2505 = sub_B5D684(v2778, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1458;
  v1456->m_Items[188] = (DataMasterBase_o *)v2778;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[188],
    (System_Int32_array **)v2778,
    v2779,
    v2780,
    v2781,
    v2782,
    v2783,
    v2784);
  v2785 = (AiFieldMaster_o *)sub_B5D694(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v2785, 0LL);
  if ( v2785 )
  {
    v2505 = sub_B5D684(v2785, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1458;
  v1456->m_Items[189] = (DataMasterBase_o *)v2785;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[189],
    (System_Int32_array **)v2785,
    v2786,
    v2787,
    v2788,
    v2789,
    v2790,
    v2791);
  v2792 = (ServantCommentAddMaster_o *)sub_B5D694(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v2792, 0LL);
  if ( v2792 )
  {
    v2505 = sub_B5D684(v2792, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1458;
  v1456->m_Items[190] = (DataMasterBase_o *)v2792;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[190],
    (System_Int32_array **)v2792,
    v2793,
    v2794,
    v2795,
    v2796,
    v2797,
    v2798);
  v2799 = (EventFilterMaster_o *)sub_B5D694(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v2799, 0LL);
  if ( v2799 )
  {
    v2505 = sub_B5D684(v2799, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1458;
  v1456->m_Items[191] = (DataMasterBase_o *)v2799;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[191],
    (System_Int32_array **)v2799,
    v2800,
    v2801,
    v2802,
    v2803,
    v2804,
    v2805);
  v2806 = (UserSupportDeckMaster_o *)sub_B5D694(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v2806, 0LL);
  if ( v2806 )
  {
    v2505 = sub_B5D684(v2806, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1458;
  v1456->m_Items[192] = (DataMasterBase_o *)v2806;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[192],
    (System_Int32_array **)v2806,
    v2807,
    v2808,
    v2809,
    v2810,
    v2811,
    v2812);
  v2813 = (EventRewardSceneMaster_o *)sub_B5D694(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v2813, 0LL);
  if ( v2813 )
  {
    v2505 = sub_B5D684(v2813, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1458;
  v1456->m_Items[193] = (DataMasterBase_o *)v2813;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[193],
    (System_Int32_array **)v2813,
    v2814,
    v2815,
    v2816,
    v2817,
    v2818,
    v2819);
  v2820 = (EventVoicePlayMaster_o *)sub_B5D694(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v2820, 0LL);
  if ( v2820 )
  {
    v2505 = sub_B5D684(v2820, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1458;
  v1456->m_Items[194] = (DataMasterBase_o *)v2820;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[194],
    (System_Int32_array **)v2820,
    v2821,
    v2822,
    v2823,
    v2824,
    v2825,
    v2826);
  v2827 = (GachaSubMaster_o *)sub_B5D694(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v2827, 0LL);
  if ( v2827 )
  {
    v2505 = sub_B5D684(v2827, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1458;
  v1456->m_Items[195] = (DataMasterBase_o *)v2827;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[195],
    (System_Int32_array **)v2827,
    v2828,
    v2829,
    v2830,
    v2831,
    v2832,
    v2833);
  v2834 = (GachaDetailMaster_o *)sub_B5D694(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v2834, 0LL);
  if ( v2834 )
  {
    v2505 = sub_B5D684(v2834, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1458;
  v1456->m_Items[196] = (DataMasterBase_o *)v2834;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[196],
    (System_Int32_array **)v2834,
    v2835,
    v2836,
    v2837,
    v2838,
    v2839,
    v2840);
  v2841 = (GachaBonusSelectMaster_o *)sub_B5D694(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v2841, 0LL);
  if ( v2841 )
  {
    v2505 = sub_B5D684(v2841, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1458;
  v1456->m_Items[197] = (DataMasterBase_o *)v2841;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[197],
    (System_Int32_array **)v2841,
    v2842,
    v2843,
    v2844,
    v2845,
    v2846,
    v2847);
  v2848 = (GachaBonusSelectLineupMaster_o *)sub_B5D694(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v2848, 0LL);
  if ( v2848 )
  {
    v2505 = sub_B5D684(v2848, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1458;
  v1456->m_Items[198] = (DataMasterBase_o *)v2848;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[198],
    (System_Int32_array **)v2848,
    v2849,
    v2850,
    v2851,
    v2852,
    v2853,
    v2854);
  v2855 = (ServantChangeMaster_o *)sub_B5D694(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v2855, 0LL);
  if ( v2855 )
  {
    v2505 = sub_B5D684(v2855, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1458;
  v1456->m_Items[199] = (DataMasterBase_o *)v2855;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[199],
    (System_Int32_array **)v2855,
    v2856,
    v2857,
    v2858,
    v2859,
    v2860,
    v2861);
  v2862 = (VoiceCondMaster_o *)sub_B5D694(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v2862, 0LL);
  if ( v2862 )
  {
    v2505 = sub_B5D684(v2862, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1458;
  v1456->m_Items[200] = (DataMasterBase_o *)v2862;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[200],
    (System_Int32_array **)v2862,
    v2863,
    v2864,
    v2865,
    v2866,
    v2867,
    v2868);
  v2869 = (BgmReleaseMaster_o *)sub_B5D694(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v2869, 0LL);
  if ( v2869 )
  {
    v2505 = sub_B5D684(v2869, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1458;
  v1456->m_Items[201] = (DataMasterBase_o *)v2869;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[201],
    (System_Int32_array **)v2869,
    v2870,
    v2871,
    v2872,
    v2873,
    v2874,
    v2875);
  v2876 = (MyRoomAddMaster_o *)sub_B5D694(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v2876, 0LL);
  if ( v2876 )
  {
    v2505 = sub_B5D684(v2876, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1458;
  v1456->m_Items[202] = (DataMasterBase_o *)v2876;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[202],
    (System_Int32_array **)v2876,
    v2877,
    v2878,
    v2879,
    v2880,
    v2881,
    v2882);
  v2883 = (ShopActionMaster_o *)sub_B5D694(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v2883, 0LL);
  if ( v2883 )
  {
    v2505 = sub_B5D684(v2883, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1458;
  v1456->m_Items[203] = (DataMasterBase_o *)v2883;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[203],
    (System_Int32_array **)v2883,
    v2884,
    v2885,
    v2886,
    v2887,
    v2888,
    v2889);
  v2890 = (EventRewardSceneReleaseMaster_o *)sub_B5D694(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v2890, 0LL);
  if ( v2890 )
  {
    v2505 = sub_B5D684(v2890, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1458;
  v1456->m_Items[204] = (DataMasterBase_o *)v2890;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[204],
    (System_Int32_array **)v2890,
    v2891,
    v2892,
    v2893,
    v2894,
    v2895,
    v2896);
  v2897 = (QuestBehaviorMaster_o *)sub_B5D694(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v2897, 0LL);
  if ( v2897 )
  {
    v2505 = sub_B5D684(v2897, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1458;
  v1456->m_Items[205] = (DataMasterBase_o *)v2897;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[205],
    (System_Int32_array **)v2897,
    v2898,
    v2899,
    v2900,
    v2901,
    v2902,
    v2903);
  v2904 = (MapMaster_o *)sub_B5D694(MapMaster_TypeInfo);
  MapMaster___ctor(v2904, 0LL);
  if ( v2904 )
  {
    v2505 = sub_B5D684(v2904, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1458;
  v1456->m_Items[206] = (DataMasterBase_o *)v2904;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[206],
    (System_Int32_array **)v2904,
    v2905,
    v2906,
    v2907,
    v2908,
    v2909,
    v2910);
  v2911 = (MapCondMaster_o *)sub_B5D694(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v2911, 0LL);
  if ( v2911 )
  {
    v2505 = sub_B5D684(v2911, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1458;
  v1456->m_Items[207] = (DataMasterBase_o *)v2911;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[207],
    (System_Int32_array **)v2911,
    v2912,
    v2913,
    v2914,
    v2915,
    v2916,
    v2917);
  v2918 = (MapButtonMaster_o *)sub_B5D694(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v2918, 0LL);
  if ( v2918 )
  {
    v2505 = sub_B5D684(v2918, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1458;
  v1456->m_Items[208] = (DataMasterBase_o *)v2918;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[208],
    (System_Int32_array **)v2918,
    v2919,
    v2920,
    v2921,
    v2922,
    v2923,
    v2924);
  v2925 = (BannerAddMaster_o *)sub_B5D694(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v2925, 0LL);
  if ( v2925 )
  {
    v2505 = sub_B5D684(v2925, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1458;
  v1456->m_Items[209] = (DataMasterBase_o *)v2925;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[209],
    (System_Int32_array **)v2925,
    v2926,
    v2927,
    v2928,
    v2929,
    v2930,
    v2931);
  v2932 = (EventAddMaster_o *)sub_B5D694(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v2932, 0LL);
  if ( v2932 )
  {
    v2505 = sub_B5D684(v2932, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1458;
  v1456->m_Items[210] = (DataMasterBase_o *)v2932;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[210],
    (System_Int32_array **)v2932,
    v2933,
    v2934,
    v2935,
    v2936,
    v2937,
    v2938);
  v2939 = (TotalLoginMaster_o *)sub_B5D694(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v2939, 0LL);
  if ( v2939 )
  {
    v2505 = sub_B5D684(v2939, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1458;
  v1456->m_Items[211] = (DataMasterBase_o *)v2939;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[211],
    (System_Int32_array **)v2939,
    v2940,
    v2941,
    v2942,
    v2943,
    v2944,
    v2945);
  v2946 = (ServantFilterMaster_o *)sub_B5D694(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v2946, 0LL);
  if ( v2946 )
  {
    v2505 = sub_B5D684(v2946, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1458;
  v1456->m_Items[212] = (DataMasterBase_o *)v2946;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[212],
    (System_Int32_array **)v2946,
    v2947,
    v2948,
    v2949,
    v2950,
    v2951,
    v2952);
  v2953 = (CombineCostumeMaster_o *)sub_B5D694(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v2953, 0LL);
  if ( v2953 )
  {
    v2505 = sub_B5D684(v2953, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1458;
  v1456->m_Items[213] = (DataMasterBase_o *)v2953;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[213],
    (System_Int32_array **)v2953,
    v2954,
    v2955,
    v2956,
    v2957,
    v2958,
    v2959);
  v2960 = (ServantCostumeMaster_o *)sub_B5D694(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v2960, 0LL);
  if ( v2960 )
  {
    v2505 = sub_B5D684(v2960, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1458;
  v1456->m_Items[214] = (DataMasterBase_o *)v2960;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[214],
    (System_Int32_array **)v2960,
    v2961,
    v2962,
    v2963,
    v2964,
    v2965,
    v2966);
  v2967 = (ServantCostumeReleaseMaster_o *)sub_B5D694(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v2967, 0LL);
  if ( v2967 )
  {
    v2505 = sub_B5D684(v2967, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1458;
  v1456->m_Items[215] = (DataMasterBase_o *)v2967;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[215],
    (System_Int32_array **)v2967,
    v2968,
    v2969,
    v2970,
    v2971,
    v2972,
    v2973);
  v2974 = (UserFriendRequestHistoryMaster_o *)sub_B5D694(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v2974, 0LL);
  if ( v2974 )
  {
    v2505 = sub_B5D684(v2974, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1458;
  v1456->m_Items[216] = (DataMasterBase_o *)v2974;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[216],
    (System_Int32_array **)v2974,
    v2975,
    v2976,
    v2977,
    v2978,
    v2979,
    v2980);
  v2981 = (UserBlacklistMaster_o *)sub_B5D694(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v2981, 0LL);
  if ( v2981 )
  {
    v2505 = sub_B5D684(v2981, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1458;
  v1456->m_Items[217] = (DataMasterBase_o *)v2981;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[217],
    (System_Int32_array **)v2981,
    v2982,
    v2983,
    v2984,
    v2985,
    v2986,
    v2987);
  v2988 = (ItemSelectMaster_o *)sub_B5D694(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v2988, 0LL);
  if ( v2988 )
  {
    v2505 = sub_B5D684(v2988, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1458;
  v1456->m_Items[218] = (DataMasterBase_o *)v2988;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[218],
    (System_Int32_array **)v2988,
    v2989,
    v2990,
    v2991,
    v2992,
    v2993,
    v2994);
  v2995 = (TotalEventRaceMaster_o *)sub_B5D694(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v2995, 0LL);
  if ( v2995 )
  {
    v2505 = sub_B5D684(v2995, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1458;
  v1456->m_Items[219] = (DataMasterBase_o *)v2995;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[219],
    (System_Int32_array **)v2995,
    v2996,
    v2997,
    v2998,
    v2999,
    v3000,
    v3001);
  v3002 = (EventPointGroupAddMaster_o *)sub_B5D694(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v3002, 0LL);
  if ( v3002 )
  {
    v2505 = sub_B5D684(v3002, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1458;
  v1456->m_Items[220] = (DataMasterBase_o *)v3002;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[220],
    (System_Int32_array **)v3002,
    v3003,
    v3004,
    v3005,
    v3006,
    v3007,
    v3008);
  v3009 = (VoicePlayGroupMaster_o *)sub_B5D694(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v3009, 0LL);
  if ( v3009 )
  {
    v2505 = sub_B5D684(v3009, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1458;
  v1456->m_Items[221] = (DataMasterBase_o *)v3009;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[221],
    (System_Int32_array **)v3009,
    v3010,
    v3011,
    v3012,
    v3013,
    v3014,
    v3015);
  v3016 = (VoicePlayCondMaster_o *)sub_B5D694(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v3016, 0LL);
  if ( v3016 )
  {
    v2505 = sub_B5D684(v3016, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
      goto LABEL_1464;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1458;
  v1456->m_Items[222] = (DataMasterBase_o *)v3016;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[222],
    (System_Int32_array **)v3016,
    v3017,
    v3018,
    v3019,
    v3020,
    v3021,
    v3022);
  v3023 = (GachaStoryAdjustMaster_o *)sub_B5D694(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v3023, 0LL);
  if ( v3023 )
  {
    v2505 = sub_B5D684(v3023, v1456->obj.klass->_1.element_class);
    if ( !v2505 )
    {
LABEL_1464:
      v4862 = sub_B5D6BC(v2505);
      sub_B5D668(v4862, 0LL);
    }
  }
  if ( *p_max_length <= 0xDF )
  {
LABEL_1458:
    v4856 = sub_B5D6C8(v2505);
    sub_B5D668(v4856, 0LL);
  }
  v1456->m_Items[223] = (DataMasterBase_o *)v3023;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[223],
    (System_Int32_array **)v3023,
    v3024,
    v3025,
    v3026,
    v3027,
    v3028,
    v3029);
  v3030 = (ServantFlagMaster_o *)sub_B5D694(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v3030, 0LL);
  if ( v3030 )
  {
    v3031 = sub_B5D684(v3030, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1459;
  v1456->m_Items[224] = (DataMasterBase_o *)v3030;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[224],
    (System_Int32_array **)v3030,
    v3032,
    v3033,
    v3034,
    v3035,
    v3036,
    v3037);
  v3038 = (ServantFlagReleaseMaster_o *)sub_B5D694(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v3038, 0LL);
  if ( v3038 )
  {
    v3031 = sub_B5D684(v3038, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1459;
  v1456->m_Items[225] = (DataMasterBase_o *)v3038;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[225],
    (System_Int32_array **)v3038,
    v3039,
    v3040,
    v3041,
    v3042,
    v3043,
    v3044);
  v3045 = (EventLocationCampaignMaster_o *)sub_B5D694(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v3045, 0LL);
  if ( v3045 )
  {
    v3031 = sub_B5D684(v3045, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1459;
  v1456->m_Items[226] = (DataMasterBase_o *)v3045;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[226],
    (System_Int32_array **)v3045,
    v3046,
    v3047,
    v3048,
    v3049,
    v3050,
    v3051);
  v3052 = (CampaignInfoMaster_o *)sub_B5D694(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v3052, 0LL);
  if ( v3052 )
  {
    v3031 = sub_B5D684(v3052, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1459;
  v1456->m_Items[227] = (DataMasterBase_o *)v3052;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[227],
    (System_Int32_array **)v3052,
    v3053,
    v3054,
    v3055,
    v3056,
    v3057,
    v3058);
  v3059 = (DialogMessageMaster_o *)sub_B5D694(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v3059, 0LL);
  if ( v3059 )
  {
    v3031 = sub_B5D684(v3059, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1459;
  v1456->m_Items[228] = (DataMasterBase_o *)v3059;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[228],
    (System_Int32_array **)v3059,
    v3060,
    v3061,
    v3062,
    v3063,
    v3064,
    v3065);
  v3066 = (ServantIndividualityMaster_o *)sub_B5D694(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v3066, 0LL);
  if ( v3066 )
  {
    v3031 = sub_B5D684(v3066, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1459;
  v1456->m_Items[229] = (DataMasterBase_o *)v3066;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[229],
    (System_Int32_array **)v3066,
    v3067,
    v3068,
    v3069,
    v3070,
    v3071,
    v3072);
  v3073 = (BoardMessageMaster_o *)sub_B5D694(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v3073, 0LL);
  if ( v3073 )
  {
    v3031 = sub_B5D684(v3073, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1459;
  v1456->m_Items[230] = (DataMasterBase_o *)v3073;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[230],
    (System_Int32_array **)v3073,
    v3074,
    v3075,
    v3076,
    v3077,
    v3078,
    v3079);
  v3080 = (BoardMessageReleaseMaster_o *)sub_B5D694(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v3080, 0LL);
  if ( v3080 )
  {
    v3031 = sub_B5D684(v3080, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1459;
  v1456->m_Items[231] = (DataMasterBase_o *)v3080;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[231],
    (System_Int32_array **)v3080,
    v3081,
    v3082,
    v3083,
    v3084,
    v3085,
    v3086);
  v3087 = (EventServantFatigueMaster_o *)sub_B5D694(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v3087, 0LL);
  if ( v3087 )
  {
    v3031 = sub_B5D684(v3087, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1459;
  v1456->m_Items[232] = (DataMasterBase_o *)v3087;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[232],
    (System_Int32_array **)v3087,
    v3088,
    v3089,
    v3090,
    v3091,
    v3092,
    v3093);
  v3094 = (UserEventDeckMaster_o *)sub_B5D694(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v3094, 0LL);
  if ( v3094 )
  {
    v3031 = sub_B5D684(v3094, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1459;
  v1456->m_Items[233] = (DataMasterBase_o *)v3094;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[233],
    (System_Int32_array **)v3094,
    v3095,
    v3096,
    v3097,
    v3098,
    v3099,
    v3100);
  v3101 = (EventTowerMaster_o *)sub_B5D694(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v3101, 0LL);
  if ( v3101 )
  {
    v3031 = sub_B5D684(v3101, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1459;
  v1456->m_Items[234] = (DataMasterBase_o *)v3101;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[234],
    (System_Int32_array **)v3101,
    v3102,
    v3103,
    v3104,
    v3105,
    v3106,
    v3107);
  v3108 = (EventTowerRewardMaster_o *)sub_B5D694(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v3108, 0LL);
  if ( v3108 )
  {
    v3031 = sub_B5D684(v3108, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1459;
  v1456->m_Items[235] = (DataMasterBase_o *)v3108;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[235],
    (System_Int32_array **)v3108,
    v3109,
    v3110,
    v3111,
    v3112,
    v3113,
    v3114);
  v3115 = (EventBulletinBoardMaster_o *)sub_B5D694(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v3115, 0LL);
  if ( v3115 )
  {
    v3031 = sub_B5D684(v3115, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1459;
  v1456->m_Items[236] = (DataMasterBase_o *)v3115;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[236],
    (System_Int32_array **)v3115,
    v3116,
    v3117,
    v3118,
    v3119,
    v3120,
    v3121);
  v3122 = (EventBulletinBoardReleaseMaster_o *)sub_B5D694(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v3122, 0LL);
  if ( v3122 )
  {
    v3031 = sub_B5D684(v3122, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1459;
  v1456->m_Items[237] = (DataMasterBase_o *)v3122;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[237],
    (System_Int32_array **)v3122,
    v3123,
    v3124,
    v3125,
    v3126,
    v3127,
    v3128);
  v3129 = (EventFactoryMaster_o *)sub_B5D694(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v3129, 0LL);
  if ( v3129 )
  {
    v3031 = sub_B5D684(v3129, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1459;
  v1456->m_Items[238] = (DataMasterBase_o *)v3129;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[238],
    (System_Int32_array **)v3129,
    v3130,
    v3131,
    v3132,
    v3133,
    v3134,
    v3135);
  v3136 = (ShopGroupMaster_o *)sub_B5D694(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v3136, 0LL);
  if ( v3136 )
  {
    v3031 = sub_B5D684(v3136, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1459;
  v1456->m_Items[239] = (DataMasterBase_o *)v3136;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[239],
    (System_Int32_array **)v3136,
    v3137,
    v3138,
    v3139,
    v3140,
    v3141,
    v3142);
  v3143 = (AuraEffectMaster_o *)sub_B5D694(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v3143, 0LL);
  if ( v3143 )
  {
    v3031 = sub_B5D684(v3143, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1459;
  v1456->m_Items[240] = (DataMasterBase_o *)v3143;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[240],
    (System_Int32_array **)v3143,
    v3144,
    v3145,
    v3146,
    v3147,
    v3148,
    v3149);
  v3150 = (AuraEffectPosOverwriteMaster_o *)sub_B5D694(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v3150, 0LL);
  if ( v3150 )
  {
    v3031 = sub_B5D684(v3150, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1459;
  v1456->m_Items[241] = (DataMasterBase_o *)v3150;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[241],
    (System_Int32_array **)v3150,
    v3151,
    v3152,
    v3153,
    v3154,
    v3155,
    v3156);
  v3157 = (UserEventMissionFixMaster_o *)sub_B5D694(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v3157, 0LL);
  if ( v3157 )
  {
    v3031 = sub_B5D684(v3157, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1459;
  v1456->m_Items[242] = (DataMasterBase_o *)v3157;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[242],
    (System_Int32_array **)v3157,
    v3158,
    v3159,
    v3160,
    v3161,
    v3162,
    v3163);
  v3164 = (NotEndEventMissionFixMaster_o *)sub_B5D694(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v3164, 0LL);
  if ( v3164 )
  {
    v3031 = sub_B5D684(v3164, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1459;
  v1456->m_Items[243] = (DataMasterBase_o *)v3164;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[243],
    (System_Int32_array **)v3164,
    v3165,
    v3166,
    v3167,
    v3168,
    v3169,
    v3170);
  v3171 = (EnemyMstMaster_o *)sub_B5D694(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v3171, 0LL);
  if ( v3171 )
  {
    v3031 = sub_B5D684(v3171, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1459;
  v1456->m_Items[244] = (DataMasterBase_o *)v3171;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[244],
    (System_Int32_array **)v3171,
    v3172,
    v3173,
    v3174,
    v3175,
    v3176,
    v3177);
  v3178 = (EnemyMstBattleMaster_o *)sub_B5D694(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v3178, 0LL);
  if ( v3178 )
  {
    v3031 = sub_B5D684(v3178, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1459;
  v1456->m_Items[245] = (DataMasterBase_o *)v3178;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[245],
    (System_Int32_array **)v3178,
    v3179,
    v3180,
    v3181,
    v3182,
    v3183,
    v3184);
  v3185 = (ServantSkillReleaseMaster_o *)sub_B5D694(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v3185, 0LL);
  if ( v3185 )
  {
    v3031 = sub_B5D684(v3185, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1459;
  v1456->m_Items[246] = (DataMasterBase_o *)v3185;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[246],
    (System_Int32_array **)v3185,
    v3186,
    v3187,
    v3188,
    v3189,
    v3190,
    v3191);
  v3192 = (ServantPassiveSkillReleaseMaster_o *)sub_B5D694(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v3192, 0LL);
  if ( v3192 )
  {
    v3031 = sub_B5D684(v3192, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1459;
  v1456->m_Items[247] = (DataMasterBase_o *)v3192;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[247],
    (System_Int32_array **)v3192,
    v3193,
    v3194,
    v3195,
    v3196,
    v3197,
    v3198);
  v3199 = (ServantTreasureDeviceReleaseMaster_o *)sub_B5D694(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v3199, 0LL);
  if ( v3199 )
  {
    v3031 = sub_B5D684(v3199, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1459;
  v1456->m_Items[248] = (DataMasterBase_o *)v3199;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[248],
    (System_Int32_array **)v3199,
    v3200,
    v3201,
    v3202,
    v3203,
    v3204,
    v3205);
  v3206 = (MapGimmickReleaseMaster_o *)sub_B5D694(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v3206, 0LL);
  if ( v3206 )
  {
    v3031 = sub_B5D684(v3206, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1459;
  v1456->m_Items[249] = (DataMasterBase_o *)v3206;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[249],
    (System_Int32_array **)v3206,
    v3207,
    v3208,
    v3209,
    v3210,
    v3211,
    v3212);
  v3213 = (CommandCodeMaster_o *)sub_B5D694(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v3213, 0LL);
  if ( v3213 )
  {
    v3031 = sub_B5D684(v3213, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1459;
  v1456->m_Items[250] = (DataMasterBase_o *)v3213;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[250],
    (System_Int32_array **)v3213,
    v3214,
    v3215,
    v3216,
    v3217,
    v3218,
    v3219);
  v3220 = (ServantCommandCodeUnlockMaster_o *)sub_B5D694(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v3220, 0LL);
  if ( v3220 )
  {
    v3031 = sub_B5D684(v3220, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1459;
  v1456->m_Items[251] = (DataMasterBase_o *)v3220;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[251],
    (System_Int32_array **)v3220,
    v3221,
    v3222,
    v3223,
    v3224,
    v3225,
    v3226);
  v3227 = (UserCommandCodeMaster_o *)sub_B5D694(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v3227, 0LL);
  if ( v3227 )
  {
    v3031 = sub_B5D684(v3227, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1459;
  v1456->m_Items[252] = (DataMasterBase_o *)v3227;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[252],
    (System_Int32_array **)v3227,
    v3228,
    v3229,
    v3230,
    v3231,
    v3232,
    v3233);
  v3234 = (UserCommandCodeCollectionMaster_o *)sub_B5D694(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v3234, 0LL);
  if ( v3234 )
  {
    v3031 = sub_B5D684(v3234, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1459;
  v1456->m_Items[253] = (DataMasterBase_o *)v3234;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[253],
    (System_Int32_array **)v3234,
    v3235,
    v3236,
    v3237,
    v3238,
    v3239,
    v3240);
  v3241 = (UserServantCommandCodeMaster_o *)sub_B5D694(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v3241, 0LL);
  if ( v3241 )
  {
    v3031 = sub_B5D684(v3241, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1459;
  v1456->m_Items[254] = (DataMasterBase_o *)v3241;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[254],
    (System_Int32_array **)v3241,
    v3242,
    v3243,
    v3244,
    v3245,
    v3246,
    v3247);
  v3248 = (UserServantCommandCardMaster_o *)sub_B5D694(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v3248, 0LL);
  if ( v3248 )
  {
    v3031 = sub_B5D684(v3248, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1459;
  v1456->m_Items[255] = (DataMasterBase_o *)v3248;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[255],
    (System_Int32_array **)v3248,
    v3249,
    v3250,
    v3251,
    v3252,
    v3253,
    v3254);
  v3255 = (CommandCardRankParamMaster_o *)sub_B5D694(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v3255, 0LL);
  if ( v3255 )
  {
    v3031 = sub_B5D684(v3255, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1459;
  v1456->m_Items[256] = (DataMasterBase_o *)v3255;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[256],
    (System_Int32_array **)v3255,
    v3256,
    v3257,
    v3258,
    v3259,
    v3260,
    v3261);
  v3262 = (CommandCodeSkillMaster_o *)sub_B5D694(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v3262, 0LL);
  if ( v3262 )
  {
    v3031 = sub_B5D684(v3262, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1459;
  v1456->m_Items[257] = (DataMasterBase_o *)v3262;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[257],
    (System_Int32_array **)v3262,
    v3263,
    v3264,
    v3265,
    v3266,
    v3267,
    v3268);
  v3269 = (CommandCodeSkillReleaseMaster_o *)sub_B5D694(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v3269, 0LL);
  if ( v3269 )
  {
    v3031 = sub_B5D684(v3269, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1459;
  v1456->m_Items[258] = (DataMasterBase_o *)v3269;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[258],
    (System_Int32_array **)v3269,
    v3270,
    v3271,
    v3272,
    v3273,
    v3274,
    v3275);
  v3276 = (CommandCodeCommentMaster_o *)sub_B5D694(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v3276, 0LL);
  if ( v3276 )
  {
    v3031 = sub_B5D684(v3276, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1459;
  v1456->m_Items[259] = (DataMasterBase_o *)v3276;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[259],
    (System_Int32_array **)v3276,
    v3277,
    v3278,
    v3279,
    v3280,
    v3281,
    v3282);
  v3283 = (EventStatusMaster_o *)sub_B5D694(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v3283, 0LL);
  if ( v3283 )
  {
    v3031 = sub_B5D684(v3283, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1459;
  v1456->m_Items[260] = (DataMasterBase_o *)v3283;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[260],
    (System_Int32_array **)v3283,
    v3284,
    v3285,
    v3286,
    v3287,
    v3288,
    v3289);
  v3290 = (EventStatusQuestMaster_o *)sub_B5D694(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v3290, 0LL);
  if ( v3290 )
  {
    v3031 = sub_B5D684(v3290, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1459;
  v1456->m_Items[261] = (DataMasterBase_o *)v3290;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[261],
    (System_Int32_array **)v3290,
    v3291,
    v3292,
    v3293,
    v3294,
    v3295,
    v3296);
  v3297 = (CommonRestrictionMaster_o *)sub_B5D694(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v3297, 0LL);
  if ( v3297 )
  {
    v3031 = sub_B5D684(v3297, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1459;
  v1456->m_Items[262] = (DataMasterBase_o *)v3297;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[262],
    (System_Int32_array **)v3297,
    v3298,
    v3299,
    v3300,
    v3301,
    v3302,
    v3303);
  v3304 = (EventPointBuffMaster_o *)sub_B5D694(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v3304, 0LL);
  if ( v3304 )
  {
    v3031 = sub_B5D684(v3304, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1459;
  v1456->m_Items[263] = (DataMasterBase_o *)v3304;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[263],
    (System_Int32_array **)v3304,
    v3305,
    v3306,
    v3307,
    v3308,
    v3309,
    v3310);
  v3311 = (UserFollowMaster_o *)sub_B5D694(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v3311, 0LL);
  if ( v3311 )
  {
    v3031 = sub_B5D684(v3311, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1459;
  v1456->m_Items[264] = (DataMasterBase_o *)v3311;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[264],
    (System_Int32_array **)v3311,
    v3312,
    v3313,
    v3314,
    v3315,
    v3316,
    v3317);
  v3318 = (EventRewardGuideReleaseMaster_o *)sub_B5D694(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v3318, 0LL);
  if ( v3318 )
  {
    v3031 = sub_B5D684(v3318, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1459;
  v1456->m_Items[265] = (DataMasterBase_o *)v3318;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[265],
    (System_Int32_array **)v3318,
    v3319,
    v3320,
    v3321,
    v3322,
    v3323,
    v3324);
  v3325 = (NpcServantEquipMaster_o *)sub_B5D694(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v3325, 0LL);
  if ( v3325 )
  {
    v3031 = sub_B5D684(v3325, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1459;
  v1456->m_Items[266] = (DataMasterBase_o *)v3325;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[266],
    (System_Int32_array **)v3325,
    v3326,
    v3327,
    v3328,
    v3329,
    v3330,
    v3331);
  v3332 = (EventCampaignReleaseMaster_o *)sub_B5D694(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v3332, 0LL);
  if ( v3332 )
  {
    v3031 = sub_B5D684(v3332, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1459;
  v1456->m_Items[267] = (DataMasterBase_o *)v3332;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[267],
    (System_Int32_array **)v3332,
    v3333,
    v3334,
    v3335,
    v3336,
    v3337,
    v3338);
  v3339 = (ServantMaterialFolderMaster_o *)sub_B5D694(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v3339, 0LL);
  if ( v3339 )
  {
    v3031 = sub_B5D684(v3339, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1459;
  v1456->m_Items[268] = (DataMasterBase_o *)v3339;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[268],
    (System_Int32_array **)v3339,
    v3340,
    v3341,
    v3342,
    v3343,
    v3344,
    v3345);
  v3346 = (EventEquipSkillReleaseMaster_o *)sub_B5D694(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v3346, 0LL);
  if ( v3346 )
  {
    v3031 = sub_B5D684(v3346, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1459;
  v1456->m_Items[269] = (DataMasterBase_o *)v3346;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[269],
    (System_Int32_array **)v3346,
    v3347,
    v3348,
    v3349,
    v3350,
    v3351,
    v3352);
  v3353 = (EventPointActivityMaster_o *)sub_B5D694(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v3353, 0LL);
  if ( v3353 )
  {
    v3031 = sub_B5D684(v3353, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1459;
  v1456->m_Items[270] = (DataMasterBase_o *)v3353;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[270],
    (System_Int32_array **)v3353,
    v3354,
    v3355,
    v3356,
    v3357,
    v3358,
    v3359);
  v3360 = (FunctionCategoryMaster_o *)sub_B5D694(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v3360, 0LL);
  if ( v3360 )
  {
    v3031 = sub_B5D684(v3360, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1459;
  v1456->m_Items[271] = (DataMasterBase_o *)v3360;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[271],
    (System_Int32_array **)v3360,
    v3361,
    v3362,
    v3363,
    v3364,
    v3365,
    v3366);
  v3367 = (QuestPickupMaster_o *)sub_B5D694(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v3367, 0LL);
  if ( v3367 )
  {
    v3031 = sub_B5D684(v3367, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1459;
  v1456->m_Items[272] = (DataMasterBase_o *)v3367;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[272],
    (System_Int32_array **)v3367,
    v3368,
    v3369,
    v3370,
    v3371,
    v3372,
    v3373);
  v3374 = (EventUiMaster_o *)sub_B5D694(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v3374, 0LL);
  if ( v3374 )
  {
    v3031 = sub_B5D684(v3374, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1459;
  v1456->m_Items[273] = (DataMasterBase_o *)v3374;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[273],
    (System_Int32_array **)v3374,
    v3375,
    v3376,
    v3377,
    v3378,
    v3379,
    v3380);
  v3381 = (EventUiReleaseMaster_o *)sub_B5D694(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v3381, 0LL);
  if ( v3381 )
  {
    v3031 = sub_B5D684(v3381, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1459;
  v1456->m_Items[274] = (DataMasterBase_o *)v3381;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[274],
    (System_Int32_array **)v3381,
    v3382,
    v3383,
    v3384,
    v3385,
    v3386,
    v3387);
  v3388 = (EventUiValueMaster_o *)sub_B5D694(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v3388, 0LL);
  if ( v3388 )
  {
    v3031 = sub_B5D684(v3388, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1459;
  v1456->m_Items[275] = (DataMasterBase_o *)v3388;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[275],
    (System_Int32_array **)v3388,
    v3389,
    v3390,
    v3391,
    v3392,
    v3393,
    v3394);
  v3395 = (EventConquestRewardMaster_o *)sub_B5D694(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v3395, 0LL);
  if ( v3395 )
  {
    v3031 = sub_B5D684(v3395, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1459;
  v1456->m_Items[276] = (DataMasterBase_o *)v3395;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[276],
    (System_Int32_array **)v3395,
    v3396,
    v3397,
    v3398,
    v3399,
    v3400,
    v3401);
  v3402 = (NpcFollowerReleaseMaster_o *)sub_B5D694(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v3402, 0LL);
  if ( v3402 )
  {
    v3031 = sub_B5D684(v3402, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1459;
  v1456->m_Items[277] = (DataMasterBase_o *)v3402;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[277],
    (System_Int32_array **)v3402,
    v3403,
    v3404,
    v3405,
    v3406,
    v3407,
    v3408);
  v3409 = (EventBonusFilterMaster_o *)sub_B5D694(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v3409, 0LL);
  if ( v3409 )
  {
    v3031 = sub_B5D684(v3409, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1459;
  v1456->m_Items[278] = (DataMasterBase_o *)v3409;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[278],
    (System_Int32_array **)v3409,
    v3410,
    v3411,
    v3412,
    v3413,
    v3414,
    v3415);
  v3416 = (EventBonusFilterGroupInfoMaster_o *)sub_B5D694(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v3416, 0LL);
  if ( v3416 )
  {
    v3031 = sub_B5D684(v3416, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1459;
  v1456->m_Items[279] = (DataMasterBase_o *)v3416;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[279],
    (System_Int32_array **)v3416,
    v3417,
    v3418,
    v3419,
    v3420,
    v3421,
    v3422);
  v3423 = (EventBonusFilterGroupMemberMaster_o *)sub_B5D694(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v3423, 0LL);
  if ( v3423 )
  {
    v3031 = sub_B5D684(v3423, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1459;
  v1456->m_Items[280] = (DataMasterBase_o *)v3423;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[280],
    (System_Int32_array **)v3423,
    v3424,
    v3425,
    v3426,
    v3427,
    v3428,
    v3429);
  v3430 = (UserGachaExtraCountMaster_o *)sub_B5D694(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v3430, 0LL);
  if ( v3430 )
  {
    v3031 = sub_B5D684(v3430, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1459;
  v1456->m_Items[281] = (DataMasterBase_o *)v3430;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[281],
    (System_Int32_array **)v3430,
    v3431,
    v3432,
    v3433,
    v3434,
    v3435,
    v3436);
  v3437 = (PrivilegeMaster_o *)sub_B5D694(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v3437, 0LL);
  if ( v3437 )
  {
    v3031 = sub_B5D684(v3437, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1459;
  v1456->m_Items[282] = (DataMasterBase_o *)v3437;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[282],
    (System_Int32_array **)v3437,
    v3438,
    v3439,
    v3440,
    v3441,
    v3442,
    v3443);
  v3444 = (UserPrivilegeMaster_o *)sub_B5D694(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v3444, 0LL);
  if ( v3444 )
  {
    v3031 = sub_B5D684(v3444, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1459;
  v1456->m_Items[283] = (DataMasterBase_o *)v3444;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[283],
    (System_Int32_array **)v3444,
    v3445,
    v3446,
    v3447,
    v3448,
    v3449,
    v3450);
  v3451 = (UserQuestRouteMaster_o *)sub_B5D694(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v3451, 0LL);
  if ( v3451 )
  {
    v3031 = sub_B5D684(v3451, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1459;
  v1456->m_Items[284] = (DataMasterBase_o *)v3451;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[284],
    (System_Int32_array **)v3451,
    v3452,
    v3453,
    v3454,
    v3455,
    v3456,
    v3457);
  v3458 = (EventBossStatusUiMaster_o *)sub_B5D694(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v3458, 0LL);
  if ( v3458 )
  {
    v3031 = sub_B5D684(v3458, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1459;
  v1456->m_Items[285] = (DataMasterBase_o *)v3458;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[285],
    (System_Int32_array **)v3458,
    v3459,
    v3460,
    v3461,
    v3462,
    v3463,
    v3464);
  v3465 = (CommonReleaseMaster_o *)sub_B5D694(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v3465, 0LL);
  if ( v3465 )
  {
    v3031 = sub_B5D684(v3465, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1459;
  v1456->m_Items[286] = (DataMasterBase_o *)v3465;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[286],
    (System_Int32_array **)v3465,
    v3466,
    v3467,
    v3468,
    v3469,
    v3470,
    v3471);
  v3472 = (QuestSpotReleaseMaster_o *)sub_B5D694(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v3472, 0LL);
  if ( v3472 )
  {
    v3031 = sub_B5D684(v3472, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1459;
  v1456->m_Items[287] = (DataMasterBase_o *)v3472;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[287],
    (System_Int32_array **)v3472,
    v3473,
    v3474,
    v3475,
    v3476,
    v3477,
    v3478);
  v3479 = (VoiceMaterialCondMaster_o *)sub_B5D694(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v3479, 0LL);
  if ( v3479 )
  {
    v3031 = sub_B5D684(v3479, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1459;
  v1456->m_Items[288] = (DataMasterBase_o *)v3479;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[288],
    (System_Int32_array **)v3479,
    v3480,
    v3481,
    v3482,
    v3483,
    v3484,
    v3485);
  v3486 = (ClassRelationOverwriteMaster_o *)sub_B5D694(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v3486, 0LL);
  if ( v3486 )
  {
    v3031 = sub_B5D684(v3486, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1459;
  v1456->m_Items[289] = (DataMasterBase_o *)v3486;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[289],
    (System_Int32_array **)v3486,
    v3487,
    v3488,
    v3489,
    v3490,
    v3491,
    v3492);
  v3493 = (EventGroupMaster_o *)sub_B5D694(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v3493, 0LL);
  if ( v3493 )
  {
    v3031 = sub_B5D684(v3493, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1459;
  v1456->m_Items[290] = (DataMasterBase_o *)v3493;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[290],
    (System_Int32_array **)v3493,
    v3494,
    v3495,
    v3496,
    v3497,
    v3498,
    v3499);
  v3500 = (TotalBoxGachaMaster_o *)sub_B5D694(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v3500, 0LL);
  if ( v3500 )
  {
    v3031 = sub_B5D684(v3500, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1459;
  v1456->m_Items[291] = (DataMasterBase_o *)v3500;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[291],
    (System_Int32_array **)v3500,
    v3501,
    v3502,
    v3503,
    v3504,
    v3505,
    v3506);
  v3507 = (ServantTreasureDeviceDamageMaster_o *)sub_B5D694(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v3507, 0LL);
  if ( v3507 )
  {
    v3031 = sub_B5D684(v3507, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1459;
  v1456->m_Items[292] = (DataMasterBase_o *)v3507;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[292],
    (System_Int32_array **)v3507,
    v3508,
    v3509,
    v3510,
    v3511,
    v3512,
    v3513);
  v3514 = (UserEventServantFatigueMaster_o *)sub_B5D694(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v3514, 0LL);
  if ( v3514 )
  {
    v3031 = sub_B5D684(v3514, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1459;
  v1456->m_Items[293] = (DataMasterBase_o *)v3514;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[293],
    (System_Int32_array **)v3514,
    v3515,
    v3516,
    v3517,
    v3518,
    v3519,
    v3520);
  v3521 = (EventRewardBgMaster_o *)sub_B5D694(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v3521, 0LL);
  if ( v3521 )
  {
    v3031 = sub_B5D684(v3521, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1459;
  v1456->m_Items[294] = (DataMasterBase_o *)v3521;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[294],
    (System_Int32_array **)v3521,
    v3522,
    v3523,
    v3524,
    v3525,
    v3526,
    v3527);
  v3528 = (EventFatigueRecoveryMaster_o *)sub_B5D694(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v3528, 0LL);
  if ( v3528 )
  {
    v3031 = sub_B5D684(v3528, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1459;
  v1456->m_Items[295] = (DataMasterBase_o *)v3528;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[295],
    (System_Int32_array **)v3528,
    v3529,
    v3530,
    v3531,
    v3532,
    v3533,
    v3534);
  v3535 = (EventBoostItemUsedMaster_o *)sub_B5D694(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v3535, 0LL);
  if ( v3535 )
  {
    v3031 = sub_B5D684(v3535, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1459;
  v1456->m_Items[296] = (DataMasterBase_o *)v3535;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[296],
    (System_Int32_array **)v3535,
    v3536,
    v3537,
    v3538,
    v3539,
    v3540,
    v3541);
  v3542 = (StatusEffectPosOverwriteMaster_o *)sub_B5D694(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v3542, 0LL);
  if ( v3542 )
  {
    v3031 = sub_B5D684(v3542, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
      goto LABEL_1465;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1459;
  v1456->m_Items[297] = (DataMasterBase_o *)v3542;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[297],
    (System_Int32_array **)v3542,
    v3543,
    v3544,
    v3545,
    v3546,
    v3547,
    v3548);
  v3549 = (QuestPhaseDetailAddMaster_o *)sub_B5D694(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v3549, 0LL);
  if ( v3549 )
  {
    v3031 = sub_B5D684(v3549, v1456->obj.klass->_1.element_class);
    if ( !v3031 )
    {
LABEL_1465:
      v4863 = sub_B5D6BC(v3031);
      sub_B5D668(v4863, 0LL);
    }
  }
  if ( *p_max_length <= 0x12A )
  {
LABEL_1459:
    v4857 = sub_B5D6C8(v3031);
    sub_B5D668(v4857, 0LL);
  }
  v1456->m_Items[298] = (DataMasterBase_o *)v3549;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[298],
    (System_Int32_array **)v3549,
    v3550,
    v3551,
    v3552,
    v3553,
    v3554,
    v3555);
  v3556 = (VoiceClosedMessageMaster_o *)sub_B5D694(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v3556, 0LL);
  if ( v3556 )
  {
    v3557 = sub_B5D684(v3556, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1460;
  v1456->m_Items[299] = (DataMasterBase_o *)v3556;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[299],
    (System_Int32_array **)v3556,
    v3558,
    v3559,
    v3560,
    v3561,
    v3562,
    v3563);
  v3564 = (ReprintStageMaster_o *)sub_B5D694(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v3564, 0LL);
  if ( v3564 )
  {
    v3557 = sub_B5D684(v3564, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1460;
  v1456->m_Items[300] = (DataMasterBase_o *)v3564;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[300],
    (System_Int32_array **)v3564,
    v3565,
    v3566,
    v3567,
    v3568,
    v3569,
    v3570);
  v3571 = (UserCombineExpMaster_o *)sub_B5D694(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v3571, 0LL);
  if ( v3571 )
  {
    v3557 = sub_B5D684(v3571, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1460;
  v1456->m_Items[301] = (DataMasterBase_o *)v3571;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[301],
    (System_Int32_array **)v3571,
    v3572,
    v3573,
    v3574,
    v3575,
    v3576,
    v3577);
  v3578 = (EventBoardGameCellMaster_o *)sub_B5D694(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v3578, 0LL);
  if ( v3578 )
  {
    v3557 = sub_B5D684(v3578, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1460;
  v1456->m_Items[302] = (DataMasterBase_o *)v3578;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[302],
    (System_Int32_array **)v3578,
    v3579,
    v3580,
    v3581,
    v3582,
    v3583,
    v3584);
  v3585 = (EventBoardGameTokenMaster_o *)sub_B5D694(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v3585, 0LL);
  if ( v3585 )
  {
    v3557 = sub_B5D684(v3585, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1460;
  v1456->m_Items[303] = (DataMasterBase_o *)v3585;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[303],
    (System_Int32_array **)v3585,
    v3586,
    v3587,
    v3588,
    v3589,
    v3590,
    v3591);
  v3592 = (EventBoardGameTokenRewardMaster_o *)sub_B5D694(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v3592, 0LL);
  if ( v3592 )
  {
    v3557 = sub_B5D684(v3592, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1460;
  v1456->m_Items[304] = (DataMasterBase_o *)v3592;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[304],
    (System_Int32_array **)v3592,
    v3593,
    v3594,
    v3595,
    v3596,
    v3597,
    v3598);
  v3599 = (UserEventBoardGameTokenMaster_o *)sub_B5D694(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v3599, 0LL);
  if ( v3599 )
  {
    v3557 = sub_B5D684(v3599, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1460;
  v1456->m_Items[305] = (DataMasterBase_o *)v3599;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[305],
    (System_Int32_array **)v3599,
    v3600,
    v3601,
    v3602,
    v3603,
    v3604,
    v3605);
  v3606 = (ServantAnimationOverwriteMaster_o *)sub_B5D694(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v3606, 0LL);
  if ( v3606 )
  {
    v3557 = sub_B5D684(v3606, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1460;
  v1456->m_Items[306] = (DataMasterBase_o *)v3606;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[306],
    (System_Int32_array **)v3606,
    v3607,
    v3608,
    v3609,
    v3610,
    v3611,
    v3612);
  v3613 = (OpeningMovieMaster_o *)sub_B5D694(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v3613, 0LL);
  if ( v3613 )
  {
    v3557 = sub_B5D684(v3613, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1460;
  v1456->m_Items[307] = (DataMasterBase_o *)v3613;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[307],
    (System_Int32_array **)v3613,
    v3614,
    v3615,
    v3616,
    v3617,
    v3618,
    v3619);
  v3620 = (ServantLimitSpoilerProtectionMaster_o *)sub_B5D694(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v3620, 0LL);
  if ( v3620 )
  {
    v3557 = sub_B5D684(v3620, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1460;
  v1456->m_Items[308] = (DataMasterBase_o *)v3620;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[308],
    (System_Int32_array **)v3620,
    v3621,
    v3622,
    v3623,
    v3624,
    v3625,
    v3626);
  v3627 = (PickupUserFollowerMaster_o *)sub_B5D694(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v3627, 0LL);
  if ( v3627 )
  {
    v3557 = sub_B5D684(v3627, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1460;
  v1456->m_Items[309] = (DataMasterBase_o *)v3627;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[309],
    (System_Int32_array **)v3627,
    v3628,
    v3629,
    v3630,
    v3631,
    v3632,
    v3633);
  v3634 = (ServantCollectionMaster_o *)sub_B5D694(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v3634, 0LL);
  if ( v3634 )
  {
    v3557 = sub_B5D684(v3634, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1460;
  v1456->m_Items[310] = (DataMasterBase_o *)v3634;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[310],
    (System_Int32_array **)v3634,
    v3635,
    v3636,
    v3637,
    v3638,
    v3639,
    v3640);
  v3641 = (GachaBehaviorMaster_o *)sub_B5D694(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v3641, 0LL);
  if ( v3641 )
  {
    v3557 = sub_B5D684(v3641, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1460;
  v1456->m_Items[311] = (DataMasterBase_o *)v3641;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[311],
    (System_Int32_array **)v3641,
    v3642,
    v3643,
    v3644,
    v3645,
    v3646,
    v3647);
  v3648 = (EventQuestCooltimeMaster_o *)sub_B5D694(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v3648, 0LL);
  if ( v3648 )
  {
    v3557 = sub_B5D684(v3648, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1460;
  v1456->m_Items[312] = (DataMasterBase_o *)v3648;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[312],
    (System_Int32_array **)v3648,
    v3649,
    v3650,
    v3651,
    v3652,
    v3653,
    v3654);
  v3655 = (UserEventQuestCooltimeMaster_o *)sub_B5D694(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v3655, 0LL);
  if ( v3655 )
  {
    v3557 = sub_B5D684(v3655, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1460;
  v1456->m_Items[313] = (DataMasterBase_o *)v3655;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[313],
    (System_Int32_array **)v3655,
    v3656,
    v3657,
    v3658,
    v3659,
    v3660,
    v3661);
  v3662 = (BoostMaster_o *)sub_B5D694(BoostMaster_TypeInfo);
  BoostMaster___ctor(v3662, 0LL);
  if ( v3662 )
  {
    v3557 = sub_B5D684(v3662, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1460;
  v1456->m_Items[314] = (DataMasterBase_o *)v3662;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[314],
    (System_Int32_array **)v3662,
    v3663,
    v3664,
    v3665,
    v3666,
    v3667,
    v3668);
  v3669 = (WarBoardMaster_o *)sub_B5D694(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v3669, 0LL);
  if ( v3669 )
  {
    v3557 = sub_B5D684(v3669, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1460;
  v1456->m_Items[315] = (DataMasterBase_o *)v3669;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[315],
    (System_Int32_array **)v3669,
    v3670,
    v3671,
    v3672,
    v3673,
    v3674,
    v3675);
  v3676 = (WarBoardSquareMaster_o *)sub_B5D694(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v3676, 0LL);
  if ( v3676 )
  {
    v3557 = sub_B5D684(v3676, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1460;
  v1456->m_Items[316] = (DataMasterBase_o *)v3676;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[316],
    (System_Int32_array **)v3676,
    v3677,
    v3678,
    v3679,
    v3680,
    v3681,
    v3682);
  v3683 = (WarBoardRoadMaster_o *)sub_B5D694(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v3683, 0LL);
  if ( v3683 )
  {
    v3557 = sub_B5D684(v3683, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1460;
  v1456->m_Items[317] = (DataMasterBase_o *)v3683;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[317],
    (System_Int32_array **)v3683,
    v3684,
    v3685,
    v3686,
    v3687,
    v3688,
    v3689);
  v3690 = (WarBoardStageMaster_o *)sub_B5D694(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v3690, 0LL);
  if ( v3690 )
  {
    v3557 = sub_B5D684(v3690, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1460;
  v1456->m_Items[318] = (DataMasterBase_o *)v3690;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[318],
    (System_Int32_array **)v3690,
    v3691,
    v3692,
    v3693,
    v3694,
    v3695,
    v3696);
  v3697 = (WarBoardActionPointMaster_o *)sub_B5D694(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v3697, 0LL);
  if ( v3697 )
  {
    v3557 = sub_B5D684(v3697, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1460;
  v1456->m_Items[319] = (DataMasterBase_o *)v3697;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[319],
    (System_Int32_array **)v3697,
    v3698,
    v3699,
    v3700,
    v3701,
    v3702,
    v3703);
  v3704 = (WarBoardActionTrendMaster_o *)sub_B5D694(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v3704, 0LL);
  if ( v3704 )
  {
    v3557 = sub_B5D684(v3704, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1460;
  v1456->m_Items[320] = (DataMasterBase_o *)v3704;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[320],
    (System_Int32_array **)v3704,
    v3705,
    v3706,
    v3707,
    v3708,
    v3709,
    v3710);
  v3711 = (WarBoardTacticalTrendMaster_o *)sub_B5D694(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v3711, 0LL);
  if ( v3711 )
  {
    v3557 = sub_B5D684(v3711, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1460;
  v1456->m_Items[321] = (DataMasterBase_o *)v3711;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[321],
    (System_Int32_array **)v3711,
    v3712,
    v3713,
    v3714,
    v3715,
    v3716,
    v3717);
  v3718 = (WarBoardStageLayoutMaster_o *)sub_B5D694(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v3718, 0LL);
  if ( v3718 )
  {
    v3557 = sub_B5D684(v3718, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1460;
  v1456->m_Items[322] = (DataMasterBase_o *)v3718;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[322],
    (System_Int32_array **)v3718,
    v3719,
    v3720,
    v3721,
    v3722,
    v3723,
    v3724);
  v3725 = (WarBoardStageNpcMaster_o *)sub_B5D694(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v3725, 0LL);
  if ( v3725 )
  {
    v3557 = sub_B5D684(v3725, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1460;
  v1456->m_Items[323] = (DataMasterBase_o *)v3725;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[323],
    (System_Int32_array **)v3725,
    v3726,
    v3727,
    v3728,
    v3729,
    v3730,
    v3731);
  v3732 = (WarBoardStageWallMaster_o *)sub_B5D694(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v3732, 0LL);
  if ( v3732 )
  {
    v3557 = sub_B5D684(v3732, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1460;
  v1456->m_Items[324] = (DataMasterBase_o *)v3732;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[324],
    (System_Int32_array **)v3732,
    v3733,
    v3734,
    v3735,
    v3736,
    v3737,
    v3738);
  v3739 = (WarBoardAIMaster_o *)sub_B5D694(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v3739, 0LL);
  if ( v3739 )
  {
    v3557 = sub_B5D684(v3739, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1460;
  v1456->m_Items[325] = (DataMasterBase_o *)v3739;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[325],
    (System_Int32_array **)v3739,
    v3740,
    v3741,
    v3742,
    v3743,
    v3744,
    v3745);
  v3746 = (WarBoardRatingBaseMaster_o *)sub_B5D694(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v3746, 0LL);
  if ( v3746 )
  {
    v3557 = sub_B5D684(v3746, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1460;
  v1456->m_Items[326] = (DataMasterBase_o *)v3746;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[326],
    (System_Int32_array **)v3746,
    v3747,
    v3748,
    v3749,
    v3750,
    v3751,
    v3752);
  v3753 = (WarBoardRatingOffsetMaster_o *)sub_B5D694(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v3753, 0LL);
  if ( v3753 )
  {
    v3557 = sub_B5D684(v3753, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1460;
  v1456->m_Items[327] = (DataMasterBase_o *)v3753;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[327],
    (System_Int32_array **)v3753,
    v3754,
    v3755,
    v3756,
    v3757,
    v3758,
    v3759);
  v3760 = (WarBoardItemMaster_o *)sub_B5D694(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v3760, 0LL);
  if ( v3760 )
  {
    v3557 = sub_B5D684(v3760, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1460;
  v1456->m_Items[328] = (DataMasterBase_o *)v3760;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[328],
    (System_Int32_array **)v3760,
    v3761,
    v3762,
    v3763,
    v3764,
    v3765,
    v3766);
  v3767 = (WarBoardTreasureMaster_o *)sub_B5D694(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v3767, 0LL);
  if ( v3767 )
  {
    v3557 = sub_B5D684(v3767, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1460;
  v1456->m_Items[329] = (DataMasterBase_o *)v3767;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[329],
    (System_Int32_array **)v3767,
    v3768,
    v3769,
    v3770,
    v3771,
    v3772,
    v3773);
  v3774 = (WarBoardQuestMaster_o *)sub_B5D694(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v3774, 0LL);
  if ( v3774 )
  {
    v3557 = sub_B5D684(v3774, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1460;
  v1456->m_Items[330] = (DataMasterBase_o *)v3774;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[330],
    (System_Int32_array **)v3774,
    v3775,
    v3776,
    v3777,
    v3778,
    v3779,
    v3780);
  v3781 = (WarBoardDataMaster_o *)sub_B5D694(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v3781, 0LL);
  if ( v3781 )
  {
    v3557 = sub_B5D684(v3781, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1460;
  v1456->m_Items[331] = (DataMasterBase_o *)v3781;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[331],
    (System_Int32_array **)v3781,
    v3782,
    v3783,
    v3784,
    v3785,
    v3786,
    v3787);
  v3788 = (WarBoardIndividualityClassMaster_o *)sub_B5D694(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v3788, 0LL);
  if ( v3788 )
  {
    v3557 = sub_B5D684(v3788, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1460;
  v1456->m_Items[332] = (DataMasterBase_o *)v3788;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[332],
    (System_Int32_array **)v3788,
    v3789,
    v3790,
    v3791,
    v3792,
    v3793,
    v3794);
  v3795 = (WarBoardActionTrendConditionMaster_o *)sub_B5D694(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v3795, 0LL);
  if ( v3795 )
  {
    v3557 = sub_B5D684(v3795, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1460;
  v1456->m_Items[333] = (DataMasterBase_o *)v3795;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[333],
    (System_Int32_array **)v3795,
    v3796,
    v3797,
    v3798,
    v3799,
    v3800,
    v3801);
  v3802 = (WarBoardActionPointClassMaster_o *)sub_B5D694(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v3802, 0LL);
  if ( v3802 )
  {
    v3557 = sub_B5D684(v3802, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1460;
  v1456->m_Items[334] = (DataMasterBase_o *)v3802;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[334],
    (System_Int32_array **)v3802,
    v3803,
    v3804,
    v3805,
    v3806,
    v3807,
    v3808);
  v3809 = (EventPanelMapMaster_o *)sub_B5D694(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v3809, 0LL);
  if ( v3809 )
  {
    v3557 = sub_B5D684(v3809, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1460;
  v1456->m_Items[335] = (DataMasterBase_o *)v3809;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[335],
    (System_Int32_array **)v3809,
    v3810,
    v3811,
    v3812,
    v3813,
    v3814,
    v3815);
  v3816 = (EventPanelMapDetailMaster_o *)sub_B5D694(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v3816, 0LL);
  if ( v3816 )
  {
    v3557 = sub_B5D684(v3816, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1460;
  v1456->m_Items[336] = (DataMasterBase_o *)v3816;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[336],
    (System_Int32_array **)v3816,
    v3817,
    v3818,
    v3819,
    v3820,
    v3821,
    v3822);
  v3823 = (EventPanelSpotMaster_o *)sub_B5D694(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v3823, 0LL);
  if ( v3823 )
  {
    v3557 = sub_B5D684(v3823, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1460;
  v1456->m_Items[337] = (DataMasterBase_o *)v3823;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[337],
    (System_Int32_array **)v3823,
    v3824,
    v3825,
    v3826,
    v3827,
    v3828,
    v3829);
  v3830 = (EventPanelScanMaster_o *)sub_B5D694(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v3830, 0LL);
  if ( v3830 )
  {
    v3557 = sub_B5D684(v3830, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1460;
  v1456->m_Items[338] = (DataMasterBase_o *)v3830;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[338],
    (System_Int32_array **)v3830,
    v3831,
    v3832,
    v3833,
    v3834,
    v3835,
    v3836);
  v3837 = (CommonConsumeMaster_o *)sub_B5D694(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v3837, 0LL);
  if ( v3837 )
  {
    v3557 = sub_B5D684(v3837, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1460;
  v1456->m_Items[339] = (DataMasterBase_o *)v3837;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[339],
    (System_Int32_array **)v3837,
    v3838,
    v3839,
    v3840,
    v3841,
    v3842,
    v3843);
  v3844 = (UserEventMapMaster_o *)sub_B5D694(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v3844, 0LL);
  if ( v3844 )
  {
    v3557 = sub_B5D684(v3844, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1460;
  v1456->m_Items[340] = (DataMasterBase_o *)v3844;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[340],
    (System_Int32_array **)v3844,
    v3845,
    v3846,
    v3847,
    v3848,
    v3849,
    v3850);
  v3851 = (UserEventSpotMaster_o *)sub_B5D694(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v3851, 0LL);
  if ( v3851 )
  {
    v3557 = sub_B5D684(v3851, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1460;
  v1456->m_Items[341] = (DataMasterBase_o *)v3851;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[341],
    (System_Int32_array **)v3851,
    v3852,
    v3853,
    v3854,
    v3855,
    v3856,
    v3857);
  v3858 = (WarGroupMaster_o *)sub_B5D694(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v3858, 0LL);
  if ( v3858 )
  {
    v3557 = sub_B5D684(v3858, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1460;
  v1456->m_Items[342] = (DataMasterBase_o *)v3858;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[342],
    (System_Int32_array **)v3858,
    v3859,
    v3860,
    v3861,
    v3862,
    v3863,
    v3864);
  v3865 = (ServantLimitImageMaster_o *)sub_B5D694(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v3865, 0LL);
  if ( v3865 )
  {
    v3557 = sub_B5D684(v3865, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1460;
  v1456->m_Items[343] = (DataMasterBase_o *)v3865;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[343],
    (System_Int32_array **)v3865,
    v3866,
    v3867,
    v3868,
    v3869,
    v3870,
    v3871);
  v3872 = (FriendshipQuestDialogInfoMaster_o *)sub_B5D694(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v3872, 0LL);
  if ( v3872 )
  {
    v3557 = sub_B5D684(v3872, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1460;
  v1456->m_Items[344] = (DataMasterBase_o *)v3872;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[344],
    (System_Int32_array **)v3872,
    v3873,
    v3874,
    v3875,
    v3876,
    v3877,
    v3878);
  v3879 = (QuestRestrictionInfoMaster_o *)sub_B5D694(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v3879, 0LL);
  if ( v3879 )
  {
    v3557 = sub_B5D684(v3879, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1460;
  v1456->m_Items[345] = (DataMasterBase_o *)v3879;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[345],
    (System_Int32_array **)v3879,
    v3880,
    v3881,
    v3882,
    v3883,
    v3884,
    v3885);
  v3886 = (AssistMaster_o *)sub_B5D694(AssistMaster_TypeInfo);
  AssistMaster___ctor(v3886, 0LL);
  if ( v3886 )
  {
    v3557 = sub_B5D684(v3886, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1460;
  v1456->m_Items[346] = (DataMasterBase_o *)v3886;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[346],
    (System_Int32_array **)v3886,
    v3887,
    v3888,
    v3889,
    v3890,
    v3891,
    v3892);
  v3893 = (WarBoardEffectMaster_o *)sub_B5D694(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v3893, 0LL);
  if ( v3893 )
  {
    v3557 = sub_B5D684(v3893, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1460;
  v1456->m_Items[347] = (DataMasterBase_o *)v3893;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[347],
    (System_Int32_array **)v3893,
    v3894,
    v3895,
    v3896,
    v3897,
    v3898,
    v3899);
  v3900 = (WarBoardOnboardSkillMaster_o *)sub_B5D694(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v3900, 0LL);
  if ( v3900 )
  {
    v3557 = sub_B5D684(v3900, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1460;
  v1456->m_Items[348] = (DataMasterBase_o *)v3900;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[348],
    (System_Int32_array **)v3900,
    v3901,
    v3902,
    v3903,
    v3904,
    v3905,
    v3906);
  v3907 = (BeforeBirthDayMaster_o *)sub_B5D694(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v3907, 0LL);
  if ( v3907 )
  {
    v3557 = sub_B5D684(v3907, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1460;
  v1456->m_Items[349] = (DataMasterBase_o *)v3907;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[349],
    (System_Int32_array **)v3907,
    v3908,
    v3909,
    v3910,
    v3911,
    v3912,
    v3913);
  v3914 = (LoginQuestMaster_o *)sub_B5D694(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v3914, 0LL);
  if ( v3914 )
  {
    v3557 = sub_B5D684(v3914, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1460;
  v1456->m_Items[350] = (DataMasterBase_o *)v3914;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[350],
    (System_Int32_array **)v3914,
    v3915,
    v3916,
    v3917,
    v3918,
    v3919,
    v3920);
  v3921 = (EventCombineCostumeMaster_o *)sub_B5D694(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v3921, 0LL);
  if ( v3921 )
  {
    v3557 = sub_B5D684(v3921, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1460;
  v1456->m_Items[351] = (DataMasterBase_o *)v3921;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[351],
    (System_Int32_array **)v3921,
    v3922,
    v3923,
    v3924,
    v3925,
    v3926,
    v3927);
  v3928 = (WarBoardStagePieceDetailMaster_o *)sub_B5D694(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v3928, 0LL);
  if ( v3928 )
  {
    v3557 = sub_B5D684(v3928, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1460;
  v1456->m_Items[352] = (DataMasterBase_o *)v3928;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[352],
    (System_Int32_array **)v3928,
    v3929,
    v3930,
    v3931,
    v3932,
    v3933,
    v3934);
  v3935 = (ServantTreasureDeviceAddMaster_o *)sub_B5D694(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v3935, 0LL);
  if ( v3935 )
  {
    v3557 = sub_B5D684(v3935, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1460;
  v1456->m_Items[353] = (DataMasterBase_o *)v3935;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[353],
    (System_Int32_array **)v3935,
    v3936,
    v3937,
    v3938,
    v3939,
    v3940,
    v3941);
  v3942 = (SkillAddMaster_o *)sub_B5D694(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v3942, 0LL);
  if ( v3942 )
  {
    v3557 = sub_B5D684(v3942, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1460;
  v1456->m_Items[354] = (DataMasterBase_o *)v3942;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[354],
    (System_Int32_array **)v3942,
    v3943,
    v3944,
    v3945,
    v3946,
    v3947,
    v3948);
  v3949 = (ServantLvDetailMaster_o *)sub_B5D694(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v3949, 0LL);
  if ( v3949 )
  {
    v3557 = sub_B5D684(v3949, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1460;
  v1456->m_Items[355] = (DataMasterBase_o *)v3949;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[355],
    (System_Int32_array **)v3949,
    v3950,
    v3951,
    v3952,
    v3953,
    v3954,
    v3955);
  v3956 = (GachaAppendMaster_o *)sub_B5D694(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v3956, 0LL);
  if ( v3956 )
  {
    v3557 = sub_B5D684(v3956, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1460;
  v1456->m_Items[356] = (DataMasterBase_o *)v3956;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[356],
    (System_Int32_array **)v3956,
    v3957,
    v3958,
    v3959,
    v3960,
    v3961,
    v3962);
  v3963 = (UserGachaDrawLogMaster_o *)sub_B5D694(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v3963, 0LL);
  if ( v3963 )
  {
    v3557 = sub_B5D684(v3963, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1460;
  v1456->m_Items[357] = (DataMasterBase_o *)v3963;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[357],
    (System_Int32_array **)v3963,
    v3964,
    v3965,
    v3966,
    v3967,
    v3968,
    v3969);
  v3970 = (ServantAppendPassiveSkillMaster_o *)sub_B5D694(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v3970, 0LL);
  if ( v3970 )
  {
    v3557 = sub_B5D684(v3970, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1460;
  v1456->m_Items[358] = (DataMasterBase_o *)v3970;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[358],
    (System_Int32_array **)v3970,
    v3971,
    v3972,
    v3973,
    v3974,
    v3975,
    v3976);
  v3977 = (UserServantAppendPassiveSkillMaster_o *)sub_B5D694(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v3977, 0LL);
  if ( v3977 )
  {
    v3557 = sub_B5D684(v3977, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1460;
  v1456->m_Items[359] = (DataMasterBase_o *)v3977;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[359],
    (System_Int32_array **)v3977,
    v3978,
    v3979,
    v3980,
    v3981,
    v3982,
    v3983);
  v3984 = (UserServantAppendPassiveSkillLvMaster_o *)sub_B5D694(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v3984, 0LL);
  if ( v3984 )
  {
    v3557 = sub_B5D684(v3984, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1460;
  v1456->m_Items[360] = (DataMasterBase_o *)v3984;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[360],
    (System_Int32_array **)v3984,
    v3985,
    v3986,
    v3987,
    v3988,
    v3989,
    v3990);
  v3991 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_B5D694(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v3991, 0LL);
  if ( v3991 )
  {
    v3557 = sub_B5D684(v3991, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1460;
  v1456->m_Items[361] = (DataMasterBase_o *)v3991;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[361],
    (System_Int32_array **)v3991,
    v3992,
    v3993,
    v3994,
    v3995,
    v3996,
    v3997);
  v3998 = (CombineAppendPassiveSkillMaster_o *)sub_B5D694(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v3998, 0LL);
  if ( v3998 )
  {
    v3557 = sub_B5D684(v3998, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1460;
  v1456->m_Items[362] = (DataMasterBase_o *)v3998;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[362],
    (System_Int32_array **)v3998,
    v3999,
    v4000,
    v4001,
    v4002,
    v4003,
    v4004);
  v4005 = (SvtCoinMaster_o *)sub_B5D694(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v4005, 0LL);
  if ( v4005 )
  {
    v3557 = sub_B5D684(v4005, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1460;
  v1456->m_Items[363] = (DataMasterBase_o *)v4005;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[363],
    (System_Int32_array **)v4005,
    v4006,
    v4007,
    v4008,
    v4009,
    v4010,
    v4011);
  v4012 = (UserSvtCoinMaster_o *)sub_B5D694(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v4012, 0LL);
  if ( v4012 )
  {
    v3557 = sub_B5D684(v4012, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1460;
  v1456->m_Items[364] = (DataMasterBase_o *)v4012;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[364],
    (System_Int32_array **)v4012,
    v4013,
    v4014,
    v4015,
    v4016,
    v4017,
    v4018);
  v4019 = (ServantAddMaster_o *)sub_B5D694(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v4019, 0LL);
  if ( v4019 )
  {
    v3557 = sub_B5D684(v4019, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1460;
  v1456->m_Items[365] = (DataMasterBase_o *)v4019;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[365],
    (System_Int32_array **)v4019,
    v4020,
    v4021,
    v4022,
    v4023,
    v4024,
    v4025);
  v4026 = (TreasureBoxMaster_o *)sub_B5D694(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v4026, 0LL);
  if ( v4026 )
  {
    v3557 = sub_B5D684(v4026, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1460;
  v1456->m_Items[366] = (DataMasterBase_o *)v4026;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[366],
    (System_Int32_array **)v4026,
    v4027,
    v4028,
    v4029,
    v4030,
    v4031,
    v4032);
  v4033 = (TreasureBoxGiftMaster_o *)sub_B5D694(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v4033, 0LL);
  if ( v4033 )
  {
    v3557 = sub_B5D684(v4033, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1460;
  v1456->m_Items[367] = (DataMasterBase_o *)v4033;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[367],
    (System_Int32_array **)v4033,
    v4034,
    v4035,
    v4036,
    v4037,
    v4038,
    v4039);
  v4040 = (TreasureBoxTalkMaster_o *)sub_B5D694(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v4040, 0LL);
  if ( v4040 )
  {
    v3557 = sub_B5D684(v4040, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1460;
  v1456->m_Items[368] = (DataMasterBase_o *)v4040;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[368],
    (System_Int32_array **)v4040,
    v4041,
    v4042,
    v4043,
    v4044,
    v4045,
    v4046);
  v4047 = (UserEventExpeditionMaster_o *)sub_B5D694(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v4047, 0LL);
  if ( v4047 )
  {
    v3557 = sub_B5D684(v4047, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1460;
  v1456->m_Items[369] = (DataMasterBase_o *)v4047;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[369],
    (System_Int32_array **)v4047,
    v4048,
    v4049,
    v4050,
    v4051,
    v4052,
    v4053);
  v4054 = (EventExpeditionMaster_o *)sub_B5D694(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v4054, 0LL);
  if ( v4054 )
  {
    v3557 = sub_B5D684(v4054, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1460;
  v1456->m_Items[370] = (DataMasterBase_o *)v4054;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[370],
    (System_Int32_array **)v4054,
    v4055,
    v4056,
    v4057,
    v4058,
    v4059,
    v4060);
  v4061 = (EventExpeditionPieceMaster_o *)sub_B5D694(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v4061, 0LL);
  if ( v4061 )
  {
    v3557 = sub_B5D684(v4061, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1460;
  v1456->m_Items[371] = (DataMasterBase_o *)v4061;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[371],
    (System_Int32_array **)v4061,
    v4062,
    v4063,
    v4064,
    v4065,
    v4066,
    v4067);
  v4068 = (EventRecipeMaster_o *)sub_B5D694(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v4068, 0LL);
  if ( v4068 )
  {
    v3557 = sub_B5D684(v4068, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
      goto LABEL_1466;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1460;
  v1456->m_Items[372] = (DataMasterBase_o *)v4068;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[372],
    (System_Int32_array **)v4068,
    v4069,
    v4070,
    v4071,
    v4072,
    v4073,
    v4074);
  v4075 = (EventRecipeGiftMaster_o *)sub_B5D694(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v4075, 0LL);
  if ( v4075 )
  {
    v3557 = sub_B5D684(v4075, v1456->obj.klass->_1.element_class);
    if ( !v3557 )
    {
LABEL_1466:
      v4864 = sub_B5D6BC(v3557);
      sub_B5D668(v4864, 0LL);
    }
  }
  if ( *p_max_length <= 0x175 )
  {
LABEL_1460:
    v4858 = sub_B5D6C8(v3557);
    sub_B5D668(v4858, 0LL);
  }
  v1456->m_Items[373] = (DataMasterBase_o *)v4075;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[373],
    (System_Int32_array **)v4075,
    v4076,
    v4077,
    v4078,
    v4079,
    v4080,
    v4081);
  v4082 = (UserEventFortificationMaster_o *)sub_B5D694(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v4082, 0LL);
  if ( v4082 )
  {
    v4083 = sub_B5D684(v4082, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1461;
  v1456->m_Items[374] = (DataMasterBase_o *)v4082;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[374],
    (System_Int32_array **)v4082,
    v4084,
    v4085,
    v4086,
    v4087,
    v4088,
    v4089);
  v4090 = (EventFortificationMaster_o *)sub_B5D694(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v4090, 0LL);
  if ( v4090 )
  {
    v4083 = sub_B5D684(v4090, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1461;
  v1456->m_Items[375] = (DataMasterBase_o *)v4090;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[375],
    (System_Int32_array **)v4090,
    v4091,
    v4092,
    v4093,
    v4094,
    v4095,
    v4096);
  v4097 = (EventFortificationDetailMaster_o *)sub_B5D694(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v4097, 0LL);
  if ( v4097 )
  {
    v4083 = sub_B5D684(v4097, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1461;
  v1456->m_Items[376] = (DataMasterBase_o *)v4097;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[376],
    (System_Int32_array **)v4097,
    v4098,
    v4099,
    v4100,
    v4101,
    v4102,
    v4103);
  v4104 = (EventFortificationSvtMaster_o *)sub_B5D694(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v4104, 0LL);
  if ( v4104 )
  {
    v4083 = sub_B5D684(v4104, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1461;
  v1456->m_Items[377] = (DataMasterBase_o *)v4104;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[377],
    (System_Int32_array **)v4104,
    v4105,
    v4106,
    v4107,
    v4108,
    v4109,
    v4110);
  v4111 = (UserServantVoicePlayedMaster_o *)sub_B5D694(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v4111, 0LL);
  if ( v4111 )
  {
    v4083 = sub_B5D684(v4111, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1461;
  v1456->m_Items[378] = (DataMasterBase_o *)v4111;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[378],
    (System_Int32_array **)v4111,
    v4112,
    v4113,
    v4114,
    v4115,
    v4116,
    v4117);
  v4118 = (UpdateProfileDialogInfoMaster_o *)sub_B5D694(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v4118, 0LL);
  if ( v4118 )
  {
    v4083 = sub_B5D684(v4118, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1461;
  v1456->m_Items[379] = (DataMasterBase_o *)v4118;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[379],
    (System_Int32_array **)v4118,
    v4119,
    v4120,
    v4121,
    v4122,
    v4123,
    v4124);
  v4125 = (SvtMaterialTdMaster_o *)sub_B5D694(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v4125, 0LL);
  if ( v4125 )
  {
    v4083 = sub_B5D684(v4125, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1461;
  v1456->m_Items[380] = (DataMasterBase_o *)v4125;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[380],
    (System_Int32_array **)v4125,
    v4126,
    v4127,
    v4128,
    v4129,
    v4130,
    v4131);
  v4132 = (BattleMasterImageMaster_o *)sub_B5D694(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v4132, 0LL);
  if ( v4132 )
  {
    v4083 = sub_B5D684(v4132, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1461;
  v1456->m_Items[381] = (DataMasterBase_o *)v4132;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[381],
    (System_Int32_array **)v4132,
    v4133,
    v4134,
    v4135,
    v4136,
    v4137,
    v4138);
  v4139 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_B5D694(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v4139, 0LL);
  if ( v4139 )
  {
    v4083 = sub_B5D684(v4139, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1461;
  v1456->m_Items[382] = (DataMasterBase_o *)v4139;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[382],
    (System_Int32_array **)v4139,
    v4140,
    v4141,
    v4142,
    v4143,
    v4144,
    v4145);
  v4146 = (UserEventRandomMissionMaster_o *)sub_B5D694(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v4146, 0LL);
  if ( v4146 )
  {
    v4083 = sub_B5D684(v4146, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1461;
  v1456->m_Items[383] = (DataMasterBase_o *)v4146;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[383],
    (System_Int32_array **)v4146,
    v4147,
    v4148,
    v4149,
    v4150,
    v4151,
    v4152);
  v4153 = (EventProgressValueMaster_o *)sub_B5D694(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v4153, 0LL);
  if ( v4153 )
  {
    v4083 = sub_B5D684(v4153, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1461;
  v1456->m_Items[384] = (DataMasterBase_o *)v4153;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[384],
    (System_Int32_array **)v4153,
    v4154,
    v4155,
    v4156,
    v4157,
    v4158,
    v4159);
  v4160 = (SvtMultiPortraitMaster_o *)sub_B5D694(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v4160, 0LL);
  if ( v4160 )
  {
    v4083 = sub_B5D684(v4160, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1461;
  v1456->m_Items[385] = (DataMasterBase_o *)v4160;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[385],
    (System_Int32_array **)v4160,
    v4161,
    v4162,
    v4163,
    v4164,
    v4165,
    v4166);
  v4167 = (EventRandomMissionMaster_o *)sub_B5D694(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v4167, 0LL);
  if ( v4167 )
  {
    v4083 = sub_B5D684(v4167, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1461;
  v1456->m_Items[386] = (DataMasterBase_o *)v4167;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[386],
    (System_Int32_array **)v4167,
    v4168,
    v4169,
    v4170,
    v4171,
    v4172,
    v4173);
  v4174 = (UserGachaHistoryMaster_o *)sub_B5D694(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v4174, 0LL);
  if ( v4174 )
  {
    v4083 = sub_B5D684(v4174, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1461;
  v1456->m_Items[387] = (DataMasterBase_o *)v4174;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[387],
    (System_Int32_array **)v4174,
    v4175,
    v4176,
    v4177,
    v4178,
    v4179,
    v4180);
  v4181 = (UserCoinRoomMaster_o *)sub_B5D694(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v4181, 0LL);
  if ( v4181 )
  {
    v4083 = sub_B5D684(v4181, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1461;
  v1456->m_Items[388] = (DataMasterBase_o *)v4181;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[388],
    (System_Int32_array **)v4181,
    v4182,
    v4183,
    v4184,
    v4185,
    v4186,
    v4187);
  v4188 = (EventBuddyPointMaster_o *)sub_B5D694(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v4188, 0LL);
  if ( v4188 )
  {
    v4083 = sub_B5D684(v4188, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1461;
  v1456->m_Items[389] = (DataMasterBase_o *)v4188;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[389],
    (System_Int32_array **)v4188,
    v4189,
    v4190,
    v4191,
    v4192,
    v4193,
    v4194);
  v4195 = (EventServantPointRankMaster_o *)sub_B5D694(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v4195, 0LL);
  if ( v4195 )
  {
    v4083 = sub_B5D684(v4195, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1461;
  v1456->m_Items[390] = (DataMasterBase_o *)v4195;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[390],
    (System_Int32_array **)v4195,
    v4196,
    v4197,
    v4198,
    v4199,
    v4200,
    v4201);
  v4202 = (UserEventServantPointMaster_o *)sub_B5D694(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v4202, 0LL);
  if ( v4202 )
  {
    v4083 = sub_B5D684(v4202, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1461;
  v1456->m_Items[391] = (DataMasterBase_o *)v4202;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[391],
    (System_Int32_array **)v4202,
    v4203,
    v4204,
    v4205,
    v4206,
    v4207,
    v4208);
  v4209 = (FieldMotionMaster_o *)sub_B5D694(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v4209, 0LL);
  if ( v4209 )
  {
    v4083 = sub_B5D684(v4209, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1461;
  v1456->m_Items[392] = (DataMasterBase_o *)v4209;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[392],
    (System_Int32_array **)v4209,
    v4210,
    v4211,
    v4212,
    v4213,
    v4214,
    v4215);
  v4216 = (UserDeleteReservationMaster_o *)sub_B5D694(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v4216, 0LL);
  if ( v4216 )
  {
    v4083 = sub_B5D684(v4216, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1461;
  v1456->m_Items[393] = (DataMasterBase_o *)v4216;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[393],
    (System_Int32_array **)v4216,
    v4217,
    v4218,
    v4219,
    v4220,
    v4221,
    v4222);
  v4223 = (ServantScriptMultipleMaster_o *)sub_B5D694(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v4223, 0LL);
  if ( v4223 )
  {
    v4083 = sub_B5D684(v4223, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1461;
  v1456->m_Items[394] = (DataMasterBase_o *)v4223;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[394],
    (System_Int32_array **)v4223,
    v4224,
    v4225,
    v4226,
    v4227,
    v4228,
    v4229);
  v4230 = (EquipAddMaster_o *)sub_B5D694(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v4230, 0LL);
  if ( v4230 )
  {
    v4083 = sub_B5D684(v4230, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1461;
  v1456->m_Items[395] = (DataMasterBase_o *)v4230;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[395],
    (System_Int32_array **)v4230,
    v4231,
    v4232,
    v4233,
    v4234,
    v4235,
    v4236);
  v4237 = (QuestReleaseOverwriteMaster_o *)sub_B5D694(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v4237, 0LL);
  if ( v4237 )
  {
    v4083 = sub_B5D684(v4237, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1461;
  v1456->m_Items[396] = (DataMasterBase_o *)v4237;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[396],
    (System_Int32_array **)v4237,
    v4238,
    v4239,
    v4240,
    v4241,
    v4242,
    v4243);
  v4244 = (UserEventAlloutBattleMaster_o *)sub_B5D694(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v4244, 0LL);
  if ( v4244 )
  {
    v4083 = sub_B5D684(v4244, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1461;
  v1456->m_Items[397] = (DataMasterBase_o *)v4244;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[397],
    (System_Int32_array **)v4244,
    v4245,
    v4246,
    v4247,
    v4248,
    v4249,
    v4250);
  v4251 = (QuestScriptMaterialNextMaster_o *)sub_B5D694(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v4251, 0LL);
  if ( v4251 )
  {
    v4083 = sub_B5D684(v4251, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1461;
  v1456->m_Items[398] = (DataMasterBase_o *)v4251;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[398],
    (System_Int32_array **)v4251,
    v4252,
    v4253,
    v4254,
    v4255,
    v4256,
    v4257);
  v4258 = (EventDiggingMaster_o *)sub_B5D694(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v4258, 0LL);
  if ( v4258 )
  {
    v4083 = sub_B5D684(v4258, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1461;
  v1456->m_Items[399] = (DataMasterBase_o *)v4258;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[399],
    (System_Int32_array **)v4258,
    v4259,
    v4260,
    v4261,
    v4262,
    v4263,
    v4264);
  v4265 = (EventDiggingBlockMaster_o *)sub_B5D694(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v4265, 0LL);
  if ( v4265 )
  {
    v4083 = sub_B5D684(v4265, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1461;
  v1456->m_Items[400] = (DataMasterBase_o *)v4265;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[400],
    (System_Int32_array **)v4265,
    v4266,
    v4267,
    v4268,
    v4269,
    v4270,
    v4271);
  v4272 = (EventDiggingRewardMaster_o *)sub_B5D694(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v4272, 0LL);
  if ( v4272 )
  {
    v4083 = sub_B5D684(v4272, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1461;
  v1456->m_Items[401] = (DataMasterBase_o *)v4272;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[401],
    (System_Int32_array **)v4272,
    v4273,
    v4274,
    v4275,
    v4276,
    v4277,
    v4278);
  v4279 = (UserEventDiggingMaster_o *)sub_B5D694(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v4279, 0LL);
  if ( v4279 )
  {
    v4083 = sub_B5D684(v4279, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1461;
  v1456->m_Items[402] = (DataMasterBase_o *)v4279;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[402],
    (System_Int32_array **)v4279,
    v4280,
    v4281,
    v4282,
    v4283,
    v4284,
    v4285);
  v4286 = (BattleMessageMaster_o *)sub_B5D694(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v4286, 0LL);
  if ( v4286 )
  {
    v4083 = sub_B5D684(v4286, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1461;
  v1456->m_Items[403] = (DataMasterBase_o *)v4286;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[403],
    (System_Int32_array **)v4286,
    v4287,
    v4288,
    v4289,
    v4290,
    v4291,
    v4292);
  v4293 = (BattleMessageGroupMaster_o *)sub_B5D694(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v4293, 0LL);
  if ( v4293 )
  {
    v4083 = sub_B5D684(v4293, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1461;
  v1456->m_Items[404] = (DataMasterBase_o *)v4293;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[404],
    (System_Int32_array **)v4293,
    v4294,
    v4295,
    v4296,
    v4297,
    v4298,
    v4299);
  v4300 = (UserNpcSvtRecordMaster_o *)sub_B5D694(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v4300, 0LL);
  if ( v4300 )
  {
    v4083 = sub_B5D684(v4300, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1461;
  v1456->m_Items[405] = (DataMasterBase_o *)v4300;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[405],
    (System_Int32_array **)v4300,
    v4301,
    v4302,
    v4303,
    v4304,
    v4305,
    v4306);
  v4307 = (BuffTypeDetailMaster_o *)sub_B5D694(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v4307, 0LL);
  if ( v4307 )
  {
    v4083 = sub_B5D684(v4307, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1461;
  v1456->m_Items[406] = (DataMasterBase_o *)v4307;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[406],
    (System_Int32_array **)v4307,
    v4308,
    v4309,
    v4310,
    v4311,
    v4312,
    v4313);
  v4314 = (WarBoardMessageMaster_o *)sub_B5D694(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v4314, 0LL);
  if ( v4314 )
  {
    v4083 = sub_B5D684(v4314, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1461;
  v1456->m_Items[407] = (DataMasterBase_o *)v4314;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[407],
    (System_Int32_array **)v4314,
    v4315,
    v4316,
    v4317,
    v4318,
    v4319,
    v4320);
  v4321 = (WarBoardPartySkillMaster_o *)sub_B5D694(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v4321, 0LL);
  if ( v4321 )
  {
    v4083 = sub_B5D684(v4321, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1461;
  v1456->m_Items[408] = (DataMasterBase_o *)v4321;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[408],
    (System_Int32_array **)v4321,
    v4322,
    v4323,
    v4324,
    v4325,
    v4326,
    v4327);
  v4328 = (WarBoardMessageScriptMaster_o *)sub_B5D694(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v4328, 0LL);
  if ( v4328 )
  {
    v4083 = sub_B5D684(v4328, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1461;
  v1456->m_Items[409] = (DataMasterBase_o *)v4328;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[409],
    (System_Int32_array **)v4328,
    v4329,
    v4330,
    v4331,
    v4332,
    v4333,
    v4334);
  v4335 = (WarQuestSelectionMaster_o *)sub_B5D694(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v4335, 0LL);
  if ( v4335 )
  {
    v4083 = sub_B5D684(v4335, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1461;
  v1456->m_Items[410] = (DataMasterBase_o *)v4335;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[410],
    (System_Int32_array **)v4335,
    v4336,
    v4337,
    v4338,
    v4339,
    v4340,
    v4341);
  v4342 = (WarBoardStageDetailMaster_o *)sub_B5D694(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v4342, 0LL);
  if ( v4342 )
  {
    v4083 = sub_B5D684(v4342, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1461;
  v1456->m_Items[411] = (DataMasterBase_o *)v4342;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[411],
    (System_Int32_array **)v4342,
    v4343,
    v4344,
    v4345,
    v4346,
    v4347,
    v4348);
  v4349 = (QuestScriptMaterialOverwriteMaster_o *)sub_B5D694(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v4349, 0LL);
  if ( v4349 )
  {
    v4083 = sub_B5D684(v4349, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1461;
  v1456->m_Items[412] = (DataMasterBase_o *)v4349;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[412],
    (System_Int32_array **)v4349,
    v4350,
    v4351,
    v4352,
    v4353,
    v4354,
    v4355);
  v4356 = (QuestScriptBranchMaterialMaster_o *)sub_B5D694(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v4356, 0LL);
  if ( v4356 )
  {
    v4083 = sub_B5D684(v4356, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1461;
  v1456->m_Items[413] = (DataMasterBase_o *)v4356;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[413],
    (System_Int32_array **)v4356,
    v4357,
    v4358,
    v4359,
    v4360,
    v4361,
    v4362);
  v4363 = (AdCheckPointMaster_o *)sub_B5D694(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v4363, 0LL);
  if ( v4363 )
  {
    v4083 = sub_B5D684(v4363, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1461;
  v1456->m_Items[414] = (DataMasterBase_o *)v4363;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[414],
    (System_Int32_array **)v4363,
    v4364,
    v4365,
    v4366,
    v4367,
    v4368,
    v4369);
  v4370 = (GiftDetailMaster_o *)sub_B5D694(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v4370, 0LL);
  if ( v4370 )
  {
    v4083 = sub_B5D684(v4370, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1461;
  v1456->m_Items[415] = (DataMasterBase_o *)v4370;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[415],
    (System_Int32_array **)v4370,
    v4371,
    v4372,
    v4373,
    v4374,
    v4375,
    v4376);
  v4377 = (CombineLimitGiftMaster_o *)sub_B5D694(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v4377, 0LL);
  if ( v4377 )
  {
    v4083 = sub_B5D684(v4377, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1461;
  v1456->m_Items[416] = (DataMasterBase_o *)v4377;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[416],
    (System_Int32_array **)v4377,
    v4378,
    v4379,
    v4380,
    v4381,
    v4382,
    v4383);
  v4384 = (EventCooltimeRewardMaster_o *)sub_B5D694(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v4384, 0LL);
  if ( v4384 )
  {
    v4083 = sub_B5D684(v4384, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1461;
  v1456->m_Items[417] = (DataMasterBase_o *)v4384;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[417],
    (System_Int32_array **)v4384,
    v4385,
    v4386,
    v4387,
    v4388,
    v4389,
    v4390);
  v4391 = (UserEventCooltimeRewardMaster_o *)sub_B5D694(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v4391, 0LL);
  if ( v4391 )
  {
    v4083 = sub_B5D684(v4391, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1461;
  v1456->m_Items[418] = (DataMasterBase_o *)v4391;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[418],
    (System_Int32_array **)v4391,
    v4392,
    v4393,
    v4394,
    v4395,
    v4396,
    v4397);
  v4398 = (ClassBoardBaseMaster_o *)sub_B5D694(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v4398, 0LL);
  if ( v4398 )
  {
    v4083 = sub_B5D684(v4398, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1461;
  v1456->m_Items[419] = (DataMasterBase_o *)v4398;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[419],
    (System_Int32_array **)v4398,
    v4399,
    v4400,
    v4401,
    v4402,
    v4403,
    v4404);
  v4405 = (ClassBoardLockMaster_o *)sub_B5D694(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v4405, 0LL);
  if ( v4405 )
  {
    v4083 = sub_B5D684(v4405, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1461;
  v1456->m_Items[420] = (DataMasterBase_o *)v4405;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[420],
    (System_Int32_array **)v4405,
    v4406,
    v4407,
    v4408,
    v4409,
    v4410,
    v4411);
  v4412 = (ClassBoardSquareMaster_o *)sub_B5D694(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v4412, 0LL);
  if ( v4412 )
  {
    v4083 = sub_B5D684(v4412, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1461;
  v1456->m_Items[421] = (DataMasterBase_o *)v4412;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[421],
    (System_Int32_array **)v4412,
    v4413,
    v4414,
    v4415,
    v4416,
    v4417,
    v4418);
  v4419 = (ClassBoardLineMaster_o *)sub_B5D694(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v4419, 0LL);
  if ( v4419 )
  {
    v4083 = sub_B5D684(v4419, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1461;
  v1456->m_Items[422] = (DataMasterBase_o *)v4419;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[422],
    (System_Int32_array **)v4419,
    v4420,
    v4421,
    v4422,
    v4423,
    v4424,
    v4425);
  v4426 = (UserClassBoardSquareMaster_o *)sub_B5D694(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v4426, 0LL);
  if ( v4426 )
  {
    v4083 = sub_B5D684(v4426, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1461;
  v1456->m_Items[423] = (DataMasterBase_o *)v4426;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[423],
    (System_Int32_array **)v4426,
    v4427,
    v4428,
    v4429,
    v4430,
    v4431,
    v4432);
  v4433 = (ServantCardAddMaster_o *)sub_B5D694(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v4433, 0LL);
  if ( v4433 )
  {
    v4083 = sub_B5D684(v4433, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1461;
  v1456->m_Items[424] = (DataMasterBase_o *)v4433;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[424],
    (System_Int32_array **)v4433,
    v4434,
    v4435,
    v4436,
    v4437,
    v4438,
    v4439);
  v4440 = (MapLayerMaster_o *)sub_B5D694(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v4440, 0LL);
  if ( v4440 )
  {
    v4083 = sub_B5D684(v4440, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1461;
  v1456->m_Items[425] = (DataMasterBase_o *)v4440;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[425],
    (System_Int32_array **)v4440,
    v4441,
    v4442,
    v4443,
    v4444,
    v4445,
    v4446);
  v4447 = (SpotLayerMaster_o *)sub_B5D694(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v4447, 0LL);
  if ( v4447 )
  {
    v4083 = sub_B5D684(v4447, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1461;
  v1456->m_Items[426] = (DataMasterBase_o *)v4447;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[426],
    (System_Int32_array **)v4447,
    v4448,
    v4449,
    v4450,
    v4451,
    v4452,
    v4453);
  v4454 = (MapGimmickLayerMaster_o *)sub_B5D694(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v4454, 0LL);
  if ( v4454 )
  {
    v4083 = sub_B5D684(v4454, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1461;
  v1456->m_Items[427] = (DataMasterBase_o *)v4454;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[427],
    (System_Int32_array **)v4454,
    v4455,
    v4456,
    v4457,
    v4458,
    v4459,
    v4460);
  v4461 = (EventDataLostBattleMaster_o *)sub_B5D694(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v4461, 0LL);
  if ( v4461 )
  {
    v4083 = sub_B5D684(v4461, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1461;
  v1456->m_Items[428] = (DataMasterBase_o *)v4461;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[428],
    (System_Int32_array **)v4461,
    v4462,
    v4463,
    v4464,
    v4465,
    v4466,
    v4467);
  v4468 = (EventDataLostBattleResetMaster_o *)sub_B5D694(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v4468, 0LL);
  if ( v4468 )
  {
    v4083 = sub_B5D684(v4468, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1461;
  v1456->m_Items[429] = (DataMasterBase_o *)v4468;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[429],
    (System_Int32_array **)v4468,
    v4469,
    v4470,
    v4471,
    v4472,
    v4473,
    v4474);
  v4475 = (UserEventDataLostMaster_o *)sub_B5D694(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v4475, 0LL);
  if ( v4475 )
  {
    v4083 = sub_B5D684(v4475, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1461;
  v1456->m_Items[430] = (DataMasterBase_o *)v4475;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[430],
    (System_Int32_array **)v4475,
    v4476,
    v4477,
    v4478,
    v4479,
    v4480,
    v4481);
  v4482 = (QuestHintMaster_o *)sub_B5D694(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v4482, 0LL);
  if ( v4482 )
  {
    v4083 = sub_B5D684(v4482, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1461;
  v1456->m_Items[431] = (DataMasterBase_o *)v4482;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[431],
    (System_Int32_array **)v4482,
    v4483,
    v4484,
    v4485,
    v4486,
    v4487,
    v4488);
  v4489 = (FuncTypeDetailMaster_o *)sub_B5D694(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v4489, 0LL);
  if ( v4489 )
  {
    v4083 = sub_B5D684(v4489, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1461;
  v1456->m_Items[432] = (DataMasterBase_o *)v4489;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[432],
    (System_Int32_array **)v4489,
    v4490,
    v4491,
    v4492,
    v4493,
    v4494,
    v4495);
  v4496 = (BuffConvertMaster_o *)sub_B5D694(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v4496, 0LL);
  if ( v4496 )
  {
    v4083 = sub_B5D684(v4496, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1461;
  v1456->m_Items[433] = (DataMasterBase_o *)v4496;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[433],
    (System_Int32_array **)v4496,
    v4497,
    v4498,
    v4499,
    v4500,
    v4501,
    v4502);
  v4503 = (SkillGroupMaster_o *)sub_B5D694(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v4503, 0LL);
  if ( v4503 )
  {
    v4083 = sub_B5D684(v4503, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1461;
  v1456->m_Items[434] = (DataMasterBase_o *)v4503;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[434],
    (System_Int32_array **)v4503,
    v4504,
    v4505,
    v4506,
    v4507,
    v4508,
    v4509);
  v4510 = (SkillGroupOverwriteMaster_o *)sub_B5D694(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v4510, 0LL);
  if ( v4510 )
  {
    v4083 = sub_B5D684(v4510, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1461;
  v1456->m_Items[435] = (DataMasterBase_o *)v4510;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[435],
    (System_Int32_array **)v4510,
    v4511,
    v4512,
    v4513,
    v4514,
    v4515,
    v4516);
  v4517 = (SkillIndividualityMaster_o *)sub_B5D694(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v4517, 0LL);
  if ( v4517 )
  {
    v4083 = sub_B5D684(v4517, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1461;
  v1456->m_Items[436] = (DataMasterBase_o *)v4517;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[436],
    (System_Int32_array **)v4517,
    v4518,
    v4519,
    v4520,
    v4521,
    v4522,
    v4523);
  v4524 = (RestrictionBaseMaster_o *)sub_B5D694(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v4524, 0LL);
  if ( v4524 )
  {
    v4083 = sub_B5D684(v4524, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1461;
  v1456->m_Items[437] = (DataMasterBase_o *)v4524;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[437],
    (System_Int32_array **)v4524,
    v4525,
    v4526,
    v4527,
    v4528,
    v4529,
    v4530);
  v4531 = (RestrictionSlotMaster_o *)sub_B5D694(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v4531, 0LL);
  if ( v4531 )
  {
    v4083 = sub_B5D684(v4531, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1461;
  v1456->m_Items[438] = (DataMasterBase_o *)v4531;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[438],
    (System_Int32_array **)v4531,
    v4532,
    v4533,
    v4534,
    v4535,
    v4536,
    v4537);
  v4538 = (RestrictionSlotDetailMaster_o *)sub_B5D694(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v4538, 0LL);
  if ( v4538 )
  {
    v4083 = sub_B5D684(v4538, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1461;
  v1456->m_Items[439] = (DataMasterBase_o *)v4538;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[439],
    (System_Int32_array **)v4538,
    v4539,
    v4540,
    v4541,
    v4542,
    v4543,
    v4544);
  v4545 = (RestrictionMessageMaster_o *)sub_B5D694(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v4545, 0LL);
  if ( v4545 )
  {
    v4083 = sub_B5D684(v4545, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1461;
  v1456->m_Items[440] = (DataMasterBase_o *)v4545;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[440],
    (System_Int32_array **)v4545,
    v4546,
    v4547,
    v4548,
    v4549,
    v4550,
    v4551);
  v4552 = (RestrictionWholeMaster_o *)sub_B5D694(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v4552, 0LL);
  if ( v4552 )
  {
    v4083 = sub_B5D684(v4552, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1461;
  v1456->m_Items[441] = (DataMasterBase_o *)v4552;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[441],
    (System_Int32_array **)v4552,
    v4553,
    v4554,
    v4555,
    v4556,
    v4557,
    v4558);
  v4559 = (FuncDispMaster_o *)sub_B5D694(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v4559, 0LL);
  if ( v4559 )
  {
    v4083 = sub_B5D684(v4559, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1461;
  v1456->m_Items[442] = (DataMasterBase_o *)v4559;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[442],
    (System_Int32_array **)v4559,
    v4560,
    v4561,
    v4562,
    v4563,
    v4564,
    v4565);
  v4566 = (ClassBoardCommandSpellMaster_o *)sub_B5D694(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v4566, 0LL);
  if ( v4566 )
  {
    v4083 = sub_B5D684(v4566, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1461;
  v1456->m_Items[443] = (DataMasterBase_o *)v4566;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[443],
    (System_Int32_array **)v4566,
    v4567,
    v4568,
    v4569,
    v4570,
    v4571,
    v4572);
  v4573 = (ClassBoardClassMaster_o *)sub_B5D694(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v4573, 0LL);
  if ( v4573 )
  {
    v4083 = sub_B5D684(v4573, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1461;
  v1456->m_Items[444] = (DataMasterBase_o *)v4573;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[444],
    (System_Int32_array **)v4573,
    v4574,
    v4575,
    v4576,
    v4577,
    v4578,
    v4579);
  v4580 = (EventCommandAssistMaster_o *)sub_B5D694(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v4580, 0LL);
  if ( v4580 )
  {
    v4083 = sub_B5D684(v4580, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1461;
  v1456->m_Items[445] = (DataMasterBase_o *)v4580;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[445],
    (System_Int32_array **)v4580,
    v4581,
    v4582,
    v4583,
    v4584,
    v4585,
    v4586);
  v4587 = (EventMissionGroupMaster_o *)sub_B5D694(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v4587, 0LL);
  if ( v4587 )
  {
    v4083 = sub_B5D684(v4587, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1461;
  v1456->m_Items[446] = (DataMasterBase_o *)v4587;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[446],
    (System_Int32_array **)v4587,
    v4588,
    v4589,
    v4590,
    v4591,
    v4592,
    v4593);
  v4594 = (CombineLimitReleaseMaster_o *)sub_B5D694(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v4594, 0LL);
  if ( v4594 )
  {
    v4083 = sub_B5D684(v4594, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
      goto LABEL_1467;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1461;
  v1456->m_Items[447] = (DataMasterBase_o *)v4594;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[447],
    (System_Int32_array **)v4594,
    v4595,
    v4596,
    v4597,
    v4598,
    v4599,
    v4600);
  v4601 = (HeelPortraitMaster_o *)sub_B5D694(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v4601, 0LL);
  if ( v4601 )
  {
    v4083 = sub_B5D684(v4601, v1456->obj.klass->_1.element_class);
    if ( !v4083 )
    {
LABEL_1467:
      v4865 = sub_B5D6BC(v4083);
      sub_B5D668(v4865, 0LL);
    }
  }
  if ( *p_max_length <= 0x1C0 )
  {
LABEL_1461:
    v4859 = sub_B5D6C8(v4083);
    sub_B5D668(v4859, 0LL);
  }
  v1456->m_Items[448] = (DataMasterBase_o *)v4601;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[448],
    (System_Int32_array **)v4601,
    v4602,
    v4603,
    v4604,
    v4605,
    v4606,
    v4607);
  v4608 = (UserHeelPortraitMaster_o *)sub_B5D694(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v4608, 0LL);
  if ( v4608 )
  {
    v4609 = sub_B5D684(v4608, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1469;
  v1456->m_Items[449] = (DataMasterBase_o *)v4608;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[449],
    (System_Int32_array **)v4608,
    v4610,
    v4611,
    v4612,
    v4613,
    v4614,
    v4615);
  v4616 = (TreasureDeviceSequenceWeightMaster_o *)sub_B5D694(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v4616, 0LL);
  if ( v4616 )
  {
    v4609 = sub_B5D684(v4616, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1469;
  v1456->m_Items[450] = (DataMasterBase_o *)v4616;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[450],
    (System_Int32_array **)v4616,
    v4617,
    v4618,
    v4619,
    v4620,
    v4621,
    v4622);
  v4623 = (NpcServantFollowerIndividualityMaster_o *)sub_B5D694(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v4623, 0LL);
  if ( v4623 )
  {
    v4609 = sub_B5D684(v4623, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1469;
  v1456->m_Items[451] = (DataMasterBase_o *)v4623;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[451],
    (System_Int32_array **)v4623,
    v4624,
    v4625,
    v4626,
    v4627,
    v4628,
    v4629);
  v4630 = (GachaExtraGiftMaster_o *)sub_B5D694(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v4630, 0LL);
  if ( v4630 )
  {
    v4609 = sub_B5D684(v4630, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1469;
  v1456->m_Items[452] = (DataMasterBase_o *)v4630;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[452],
    (System_Int32_array **)v4630,
    v4631,
    v4632,
    v4633,
    v4634,
    v4635,
    v4636);
  v4637 = (EventMuralMaster_o *)sub_B5D694(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v4637, 0LL);
  if ( v4637 )
  {
    v4609 = sub_B5D684(v4637, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1469;
  v1456->m_Items[453] = (DataMasterBase_o *)v4637;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[453],
    (System_Int32_array **)v4637,
    v4638,
    v4639,
    v4640,
    v4641,
    v4642,
    v4643);
  v4644 = (ViewWaveEnemyMaster_o *)sub_B5D694(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v4644, 0LL);
  if ( v4644 )
  {
    v4609 = sub_B5D684(v4644, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1469;
  v1456->m_Items[454] = (DataMasterBase_o *)v4644;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[454],
    (System_Int32_array **)v4644,
    v4645,
    v4646,
    v4647,
    v4648,
    v4649,
    v4650);
  v4651 = (BlankEarthSpotNavimenuMaster_o *)sub_B5D694(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v4651, 0LL);
  if ( v4651 )
  {
    v4609 = sub_B5D684(v4651, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1469;
  v1456->m_Items[455] = (DataMasterBase_o *)v4651;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[455],
    (System_Int32_array **)v4651,
    v4652,
    v4653,
    v4654,
    v4655,
    v4656,
    v4657);
  v4658 = (BlankEarthGimmickMaster_o *)sub_B5D694(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v4658, 0LL);
  if ( v4658 )
  {
    v4609 = sub_B5D684(v4658, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1469;
  v1456->m_Items[456] = (DataMasterBase_o *)v4658;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[456],
    (System_Int32_array **)v4658,
    v4659,
    v4660,
    v4661,
    v4662,
    v4663,
    v4664);
  v4665 = (TerminalOverwriteMaster_o *)sub_B5D694(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v4665, 0LL);
  if ( v4665 )
  {
    v4609 = sub_B5D684(v4665, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1469;
  v1456->m_Items[457] = (DataMasterBase_o *)v4665;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[457],
    (System_Int32_array **)v4665,
    v4666,
    v4667,
    v4668,
    v4669,
    v4670,
    v4671);
  v4672 = (UserExchangeSvtMaster_o *)sub_B5D694(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v4672, 0LL);
  if ( v4672 )
  {
    v4609 = sub_B5D684(v4672, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1469;
  v1456->m_Items[458] = (DataMasterBase_o *)v4672;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[458],
    (System_Int32_array **)v4672,
    v4673,
    v4674,
    v4675,
    v4676,
    v4677,
    v4678);
  v4679 = (WarBoardCommonReleaseMaster_o *)sub_B5D694(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v4679, 0LL);
  if ( v4679 )
  {
    v4609 = sub_B5D684(v4679, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1469;
  v1456->m_Items[459] = (DataMasterBase_o *)v4679;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[459],
    (System_Int32_array **)v4679,
    v4680,
    v4681,
    v4682,
    v4683,
    v4684,
    v4685);
  v4686 = (WarBoardEventMaster_o *)sub_B5D694(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v4686, 0LL);
  if ( v4686 )
  {
    v4609 = sub_B5D684(v4686, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1469;
  v1456->m_Items[460] = (DataMasterBase_o *)v4686;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[460],
    (System_Int32_array **)v4686,
    v4687,
    v4688,
    v4689,
    v4690,
    v4691,
    v4692);
  v4693 = (WarBoardEventScriptMaster_o *)sub_B5D694(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v4693, 0LL);
  if ( v4693 )
  {
    v4609 = sub_B5D684(v4693, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1469;
  v1456->m_Items[461] = (DataMasterBase_o *)v4693;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[461],
    (System_Int32_array **)v4693,
    v4694,
    v4695,
    v4696,
    v4697,
    v4698,
    v4699);
  v4700 = (WarBoardStageBossMaster_o *)sub_B5D694(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v4700, 0LL);
  if ( v4700 )
  {
    v4609 = sub_B5D684(v4700, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1469;
  v1456->m_Items[462] = (DataMasterBase_o *)v4700;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[462],
    (System_Int32_array **)v4700,
    v4701,
    v4702,
    v4703,
    v4704,
    v4705,
    v4706);
  v4707 = (WarBoardSquareIndexGroupMaster_o *)sub_B5D694(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v4707, 0LL);
  if ( v4707 )
  {
    v4609 = sub_B5D684(v4707, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1469;
  v1456->m_Items[463] = (DataMasterBase_o *)v4707;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[463],
    (System_Int32_array **)v4707,
    v4708,
    v4709,
    v4710,
    v4711,
    v4712,
    v4713);
  v4714 = (WarBoardActionTrendGroupMaster_o *)sub_B5D694(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v4714, 0LL);
  if ( v4714 )
  {
    v4609 = sub_B5D684(v4714, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1469;
  v1456->m_Items[464] = (DataMasterBase_o *)v4714;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[464],
    (System_Int32_array **)v4714,
    v4715,
    v4716,
    v4717,
    v4718,
    v4719,
    v4720);
  v4721 = (WarBoardRatingOffsetGroupMaster_o *)sub_B5D694(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v4721, 0LL);
  if ( v4721 )
  {
    v4609 = sub_B5D684(v4721, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1469;
  v1456->m_Items[465] = (DataMasterBase_o *)v4721;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[465],
    (System_Int32_array **)v4721,
    v4722,
    v4723,
    v4724,
    v4725,
    v4726,
    v4727);
  v4728 = (WarBoardReinforcementsMaster_o *)sub_B5D694(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v4728, 0LL);
  if ( v4728 )
  {
    v4609 = sub_B5D684(v4728, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1469;
  v1456->m_Items[466] = (DataMasterBase_o *)v4728;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[466],
    (System_Int32_array **)v4728,
    v4729,
    v4730,
    v4731,
    v4732,
    v4733,
    v4734);
  v4735 = (WarBoardStageReinforcementsMaster_o *)sub_B5D694(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v4735, 0LL);
  if ( v4735 )
  {
    v4609 = sub_B5D684(v4735, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1469;
  v1456->m_Items[467] = (DataMasterBase_o *)v4735;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[467],
    (System_Int32_array **)v4735,
    v4736,
    v4737,
    v4738,
    v4739,
    v4740,
    v4741);
  v4742 = (WarBoardFutureActionTrendMaster_o *)sub_B5D694(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v4742, 0LL);
  if ( v4742 )
  {
    v4609 = sub_B5D684(v4742, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1469;
  v1456->m_Items[468] = (DataMasterBase_o *)v4742;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[468],
    (System_Int32_array **)v4742,
    v4743,
    v4744,
    v4745,
    v4746,
    v4747,
    v4748);
  v4749 = (ServantProfilePushMaster_o *)sub_B5D694(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v4749, 0LL);
  if ( v4749 )
  {
    v4609 = sub_B5D684(v4749, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1469;
  v1456->m_Items[469] = (DataMasterBase_o *)v4749;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[469],
    (System_Int32_array **)v4749,
    v4750,
    v4751,
    v4752,
    v4753,
    v4754,
    v4755);
  v4756 = (MapGimmickPathMaster_o *)sub_B5D694(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v4756, 0LL);
  if ( v4756 )
  {
    v4609 = sub_B5D684(v4756, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1469;
  v1456->m_Items[470] = (DataMasterBase_o *)v4756;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[470],
    (System_Int32_array **)v4756,
    v4757,
    v4758,
    v4759,
    v4760,
    v4761,
    v4762);
  v4763 = (MapGimmickPathReleaseMaster_o *)sub_B5D694(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v4763, 0LL);
  if ( v4763 )
  {
    v4609 = sub_B5D684(v4763, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1469;
  v1456->m_Items[471] = (DataMasterBase_o *)v4763;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[471],
    (System_Int32_array **)v4763,
    v4764,
    v4765,
    v4766,
    v4767,
    v4768,
    v4769);
  v4770 = (ServantOverwriteMaster_o *)sub_B5D694(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v4770, 0LL);
  if ( v4770 )
  {
    v4609 = sub_B5D684(v4770, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1469;
  v1456->m_Items[472] = (DataMasterBase_o *)v4770;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[472],
    (System_Int32_array **)v4770,
    v4771,
    v4772,
    v4773,
    v4774,
    v4775,
    v4776);
  v4777 = (IndividualityPolicyMaster_o *)sub_B5D694(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v4777, 0LL);
  if ( v4777 )
  {
    v4609 = sub_B5D684(v4777, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1469;
  v1456->m_Items[473] = (DataMasterBase_o *)v4777;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[473],
    (System_Int32_array **)v4777,
    v4778,
    v4779,
    v4780,
    v4781,
    v4782,
    v4783);
  v4784 = (IndividualityPersonalityMaster_o *)sub_B5D694(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v4784, 0LL);
  if ( v4784 )
  {
    v4609 = sub_B5D684(v4784, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1469;
  v1456->m_Items[474] = (DataMasterBase_o *)v4784;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[474],
    (System_Int32_array **)v4784,
    v4785,
    v4786,
    v4787,
    v4788,
    v4789,
    v4790);
  v4791 = (AttriMaster_o *)sub_B5D694(AttriMaster_TypeInfo);
  AttriMaster___ctor(v4791, 0LL);
  if ( v4791 )
  {
    v4609 = sub_B5D684(v4791, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1469;
  v1456->m_Items[475] = (DataMasterBase_o *)v4791;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[475],
    (System_Int32_array **)v4791,
    v4792,
    v4793,
    v4794,
    v4795,
    v4796,
    v4797);
  v4798 = (ServantVoicePatternMaster_o *)sub_B5D694(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v4798, 0LL);
  if ( v4798 )
  {
    v4609 = sub_B5D684(v4798, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1469;
  v1456->m_Items[476] = (DataMasterBase_o *)v4798;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[476],
    (System_Int32_array **)v4798,
    v4799,
    v4800,
    v4801,
    v4802,
    v4803,
    v4804);
  v4805 = (UserGameCommonMaster_o *)sub_B5D694(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v4805, 0LL);
  if ( v4805 )
  {
    v4609 = sub_B5D684(v4805, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1469;
  v1456->m_Items[477] = (DataMasterBase_o *)v4805;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[477],
    (System_Int32_array **)v4805,
    v4806,
    v4807,
    v4808,
    v4809,
    v4810,
    v4811);
  v4812 = (ServantPhotoMaster_o *)sub_B5D694(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v4812, 0LL);
  if ( v4812 )
  {
    v4609 = sub_B5D684(v4812, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1469;
  v1456->m_Items[478] = (DataMasterBase_o *)v4812;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[478],
    (System_Int32_array **)v4812,
    v4813,
    v4814,
    v4815,
    v4816,
    v4817,
    v4818);
  v4819 = (MasterPhotoMaster_o *)sub_B5D694(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v4819, 0LL);
  if ( v4819 )
  {
    v4609 = sub_B5D684(v4819, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1469;
  v1456->m_Items[479] = (DataMasterBase_o *)v4819;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[479],
    (System_Int32_array **)v4819,
    v4820,
    v4821,
    v4822,
    v4823,
    v4824,
    v4825);
  v4826 = (WarMessageMaster_o *)sub_B5D694(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v4826, 0LL);
  if ( v4826 )
  {
    v4609 = sub_B5D684(v4826, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1469;
  v1456->m_Items[480] = (DataMasterBase_o *)v4826;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[480],
    (System_Int32_array **)v4826,
    v4827,
    v4828,
    v4829,
    v4830,
    v4831,
    v4832);
  v4833 = (QuestAutoOrganizationAdjustMaster_o *)sub_B5D694(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v4833, 0LL);
  if ( v4833 )
  {
    v4609 = sub_B5D684(v4833, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1469;
  v1456->m_Items[481] = (DataMasterBase_o *)v4833;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[481],
    (System_Int32_array **)v4833,
    v4834,
    v4835,
    v4836,
    v4837,
    v4838,
    v4839);
  v4840 = (ExcludeMotionMaster_o *)sub_B5D694(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v4840, 0LL);
  if ( v4840 )
  {
    v4609 = sub_B5D684(v4840, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
      goto LABEL_1470;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1469;
  v1456->m_Items[482] = (DataMasterBase_o *)v4840;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[482],
    (System_Int32_array **)v4840,
    v4841,
    v4842,
    v4843,
    v4844,
    v4845,
    v4846);
  v4847 = (UserInterruptionQuestMaster_o *)sub_B5D694(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v4847, 0LL);
  if ( v4847 )
  {
    v4609 = sub_B5D684(v4847, v1456->obj.klass->_1.element_class);
    if ( !v4609 )
    {
LABEL_1470:
      v4868 = sub_B5D6BC(v4609);
      sub_B5D668(v4868, 0LL);
    }
  }
  if ( *p_max_length <= 0x1E3 )
  {
LABEL_1469:
    v4867 = sub_B5D6C8(v4609);
    sub_B5D668(v4867, 0LL);
  }
  v1456->m_Items[483] = (DataMasterBase_o *)v4847;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v1456->m_Items[483],
    (System_Int32_array **)v4847,
    v4848,
    v4849,
    v4850,
    v4851,
    v4852,
    v4853);
  return v1456;
}


void __fastcall DataManager__DeleteCacheFile(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  ManagerConfig_c *v7; // x0
  DataManager_c *v8; // x0
  System_String_o *CacheVersionFileName; // x19
  DataManager_c *v10; // x0
  System_String_o *CacheListFileName; // x19
  DataManager_c *v12; // x0
  System_String_o *CacheFileName; // x19

  if ( (byte_42EA36E & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v4, v5, v6);
    byte_42EA36E = 1;
  }
  v7 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
  }
  if ( !v7->static_fields->UseMock )
  {
    v8 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v8);
    if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
      System_IO_File__Delete(CacheVersionFileName, 0LL);
    v10 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v10);
    if ( System_IO_File__Exists(CacheListFileName, 0LL) )
      System_IO_File__Delete(CacheListFileName, 0LL);
    v12 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v12);
    if ( System_IO_File__Exists(CacheFileName, 0LL) )
      System_IO_File__Delete(CacheFileName, 0LL);
  }
}


void __fastcall DataManager__GetMasterCheckName(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v20; // x20
  Il2CppObject **p_lockCountObj; // x19
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  unsigned int i; // w22
  Il2CppObject *v29; // x0
  System_String_o *v30; // x20
  System_String_o *v31; // x21
  __int64 v32; // x1
  unsigned int v33; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_42EA36B & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_8717/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v17, v18, v19);
    byte_42EA36B = 1;
  }
  v20 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v20,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.lockCountObj = (Il2CppObject *)v20;
  p_lockCountObj = &this->fields.lockCountObj;
  sub_B5D560((BattleServantConfConponent_o *)p_lockCountObj, (System_Int32_array **)v20, v22, v23, v24, v25, v26, v27);
  for ( i = 0; i < 0x3E6; ++i )
  {
    v33 = i + 1;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    v30 = System_String__Format((System_String_o *)StringLiteral_8717/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v29, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v31 = LocalizationManager__Get(v30, 0LL);
    if ( System_String__op_Equality(v31, v30, 0LL) )
      break;
    if ( !*p_lockCountObj )
      sub_B5D69C(0LL, v32);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_lockCountObj,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v31,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
  }
}


WarQuestSelectionMaster_o *__fastcall DataManager__GetMasterData_WarQuestSelectionMaster_(
        DataManager_o *this,
        const MethodInfo_1AE424C *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo_1AE424C *_1_TMaster; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  System_Type_o *TypeFromHandle; // x0
  __int64 v25; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *masterDataBytes; // x8
  WarBoardEvalValueSquare_CalcEval_o *v27; // x20
  WarQuestSelectionMaster_o *result; // x0
  Il2CppType *_2_TMaster; // x19
  Il2CppObject *v30; // x19
  Il2CppObject *v31; // x20
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x19
  __int64 v34[2]; // [xsp+0h] [xbp-40h] BYREF
  int v35; // [xsp+10h] [xbp-30h]
  int v36; // [xsp+1Ch] [xbp-24h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+28h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v38; // 0:w0.4

  _1_TMaster = method;
  if ( (byte_42EA2DE & 1) == 0 )
  {
    sub_B5D5C4(&DataMasterBase_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_Debug_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v9, v10, v11);
    sub_B5D5C4(&int_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&DataNameKind_Kind_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Type_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_20671/*"master[{0}] is null[{1}:{2}]"*/, v21, v22, v23);
    byte_42EA2DE = 1;
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
  LODWORD(v27) = (_DWORD)TypeFromHandle;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         masterDataBytes,
         (int32_t)TypeFromHandle,
         &value,
         (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v27 = value;
    _1_TMaster = (const MethodInfo_1AE424C *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (_1_TMaster[3].token & 0x10000) == 0 )
      sub_AF52C4(_1_TMaster);
    if ( !v27 )
      return 0LL;
    result = (WarQuestSelectionMaster_o *)sub_B5D684(v27, _1_TMaster);
    if ( result )
      return result;
    sub_B5D990(v27);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v38.fields.value = (int)_2_TMaster;
  TypeFromHandle = System_Type__GetTypeFromHandle(v38, 0LL);
  if ( !TypeFromHandle )
LABEL_23:
    sub_B5D69C(TypeFromHandle, v25);
  v30 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))TypeFromHandle->klass->vtable._3_ToString.method)(
                          TypeFromHandle,
                          TypeFromHandle->klass->vtable._4_unknown.methodPtr);
  v36 = (int)v27;
  v35 = (int)v27;
  v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  v34[0] = (__int64)DataNameKind_Kind_TypeInfo;
  v34[1] = -1LL;
  v32 = (Il2CppObject *)((__int64 (__fastcall *)(__int64 *, Il2CppMethodPointer))DataNameKind_Kind_TypeInfo->vtable._3_ToString.method)(
                          v34,
                          DataNameKind_Kind_TypeInfo->vtable._4_CompareTo.methodPtr);
  v33 = (Il2CppObject *)System_String__Format_44578852((System_String_o *)StringLiteral_20671/*"master[{0}] is null[{1}:{2}]"*/, v30, v31, v32, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v33, 0LL);
  return 0LL;
}


WarQuestSelectionMaster_o *__fastcall DataManager__GetMaster_WarQuestSelectionMaster_(const MethodInfo_1AE41EC *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1

  if ( (byte_42EA2DD & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1, v2, v3);
    byte_42EA2DD = 1;
  }
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
    sub_B5D69C(0LL, v5);
  return (WarQuestSelectionMaster_o *)((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMasterData_TMaster_->methodPointer)();
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Func_Task_ContingentProperties__o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42EA356 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_CreateMasterData__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Func_DataMasterBase_____ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Func_DataMasterBase____TypeInfo, v8, v9, v10);
    byte_42EA356 = 1;
  }
  v11 = (System_Func_Task_ContingentProperties__o *)sub_B5D694(System_Func_DataMasterBase____TypeInfo);
  System_Func_Task_ContingentProperties____ctor(
    v11,
    0LL,
    Method_DataManager_CreateMasterData__,
    (const MethodInfo_278E148 *)Method_System_Func_DataMasterBase_____ctor__);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v11, v12);
}


void __fastcall DataManager__InitializeInternal(
        DataManager_o *this,
        System_Func_DataMasterBase____o *createMasterDataMethod,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DataManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x22
  int entries; // w8
  __int64 v17; // x19
  Il2CppObject *v18; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int monitor; // w8
  unsigned int v27; // w23
  __int64 v28; // x2
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0

  v5 = this;
  if ( (byte_42EA357 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__,
      (_DWORD)createMasterDataMethod,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v9, v10, v11);
    this = (DataManager_o *)sub_B5D5C4(&Method_System_Func_DataMasterBase____Invoke__, v12, v13, v14);
    byte_42EA357 = 1;
  }
  lookup = v5->fields.lookup;
  if ( lookup )
  {
    entries = (int)lookup->fields.entries;
    if ( entries >= 1 )
    {
      v17 = 0LL;
      while ( (unsigned int)v17 < entries )
      {
        this = (DataManager_o *)*((_QWORD *)&lookup->fields.count + v17);
        if ( !this )
          goto LABEL_19;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataManager_o *, Il2CppClass *, const MethodInfo *))&this->klass[1]._1.this_arg.bits)(
                                  this,
                                  this->klass[1]._1.element_class,
                                  method);
        entries = (int)lookup->fields.entries;
        if ( (int)++v17 >= entries )
          return;
      }
      goto LABEL_20;
    }
  }
  else
  {
    if ( !createMasterDataMethod
      || (v18 = System_Func_object___Invoke(
                  (System_Func_object__o *)createMasterDataMethod,
                  (const MethodInfo_278E15C *)Method_System_Func_DataMasterBase____Invoke__),
          v19 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
            v19,
            (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v18) )
    {
LABEL_19:
      sub_B5D69C(this, createMasterDataMethod);
    }
    monitor = (int)v18[1].monitor;
    if ( monitor >= 1 )
    {
      v27 = 0;
      while ( v27 < monitor )
      {
        v28 = *((_QWORD *)&v18[2].klass + (int)v27);
        if ( !v28 || !v19 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v19,
          *(_DWORD *)(v28 + 16),
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v28,
          (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        monitor = (int)v18[1].monitor;
        if ( (int)++v27 >= monitor )
          goto LABEL_18;
      }
LABEL_20:
      v35 = sub_B5D6C8(this);
      sub_B5D668(v35, 0LL);
    }
LABEL_18:
    v5->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v18;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.lookup,
      (System_Int32_array **)v18,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v5->fields.masterDataBytes = (struct System_Byte_array *)v19;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v5->fields.masterDataBytes,
      (System_Int32_array **)v19,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
}


void __fastcall DataManager__LoadMasterDataThread(
        DataManager_o *this,
        Il2CppObject *indexList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  DataManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  __int64 v33; // x0
  __int64 v34; // x20
  __int64 v35; // x21
  int v36; // w28
  unsigned __int64 v37; // x25
  signed __int64 v38; // x26
  __int64 v39; // x22
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x23
  __int64 v49; // x21
  System_Int32_array **v50; // x1
  __int64 v51; // x0
  __int64 v52; // x1
  __int64 v53; // x24
  __int64 v54; // x21
  WarBoardPieceData_array *lookup; // x23
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v56; // x24
  __int64 Index_WarBoardPieceData; // x0
  __int64 v58; // x1
  const MethodInfo_234BB7C *v59; // x3
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v60; // x8
  DataMasterBase_o *v61; // x24
  Il2CppObject *saveNameList; // x22
  System_Threading_SynchronizationContext_o *writeMasterDataThread; // x23
  __int64 v64; // x0
  const MethodInfo_234BB7C *v65; // x3
  __int64 v66; // x0
  __int64 v67; // x1
  Il2CppObject *v68; // x22
  int v69; // w8
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x0
  __int64 v73; // x0
  void *v74; // x0
  int v75; // w1
  _QWORD **v76; // x20
  __int64 v77; // x0
  __int64 v78; // x0
  struct System_Threading_Thread_o *v79; // x19
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x1
  System_Threading_SendOrPostCallback_o *v83; // x20
  __int64 v84; // x0
  Il2CppObject *v85; // x22
  __int64 v86; // x0
  intptr_t v87; // w0
  __int64 v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  _QWORD *exception; // x0
  System_Byte_array *work; // [xsp+10h] [xbp-90h]
  System_Nullable_long__o v97; // [xsp+18h] [xbp-88h] BYREF
  System_Nullable_long__o v98[2]; // [xsp+28h] [xbp-78h] BYREF
  int v99; // [xsp+48h] [xbp-58h]
  bool lockTaken; // [xsp+4Ch] [xbp-54h] BYREF
  System_Nullable_long__o v101; // 0:x0.16
  System_Nullable_long__o v102; // 0:x0.16

  v5 = this;
  if ( (byte_42EA368 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_FindIndex_DataMasterBase___, (_DWORD)indexList, (_DWORD)method, v3);
    sub_B5D5C4(&byte___TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____get_Item__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Nullable_long___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Predicate_DataMasterBase___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Predicate_DataMasterBase__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager___c__DisplayClass57_0__LoadMasterDataThread_b__0__, v27, v28, v29);
    this = (DataManager_o *)sub_B5D5C4(&DataManager___c__DisplayClass57_0_TypeInfo, v30, v31, v32);
    byte_42EA368 = 1;
  }
  lockTaken = 0;
  v99 = 0;
  if ( !indexList )
    sub_B5D69C(this, indexList);
  v33 = sub_B5D684(indexList, int___TypeInfo);
  v34 = v33;
  if ( v33 )
  {
    v35 = *(_QWORD *)(v33 + 24);
    work = (System_Byte_array *)sub_B5D5DC(byte___TypeInfo, 2000LL);
    if ( (int)v35 >= 1 )
    {
      v36 = 0;
      v37 = 0LL;
      v38 = (int)v35;
      do
      {
        v39 = sub_B5D694(DataManager___c__DisplayClass57_0_TypeInfo);
        DataManager___c__DisplayClass57_0___ctor((DataManager___c__DisplayClass57_0_o *)v39, 0LL);
        if ( v37 >= *(unsigned int *)(v34 + 24) )
        {
          v70 = sub_B5D6C8(v40);
          sub_B5D668(v70, 0LL);
        }
        saveDataMapList = v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_B5D69C(v40, v41);
        v49 = *(int *)(v34 + 32 + 4 * v37);
        if ( saveDataMapList->fields._size <= (unsigned int)v49 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        if ( !v39 )
          sub_B5D69C(v40, v41);
        v50 = (System_Int32_array **)saveDataMapList->fields._items->m_Items[v49];
        *(_QWORD *)(v39 + 16) = v50;
        sub_B5D560((BattleServantConfConponent_o *)(v39 + 16), v50, v42, v43, v44, v45, v46, v47);
        v53 = *(_QWORD *)&v5->fields.lastFrameTime;
        if ( !v53 )
          sub_B5D69C(v51, v52);
        if ( *(_DWORD *)(v53 + 24) <= (unsigned int)v49 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        v54 = *(_QWORD *)(*(_QWORD *)(v53 + 16) + 8 * v49 + 32);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v39 + 16), 0LL) )
        {
          lookup = (WarBoardPieceData_array *)v5->fields.lookup;
          v56 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v56,
            (Il2CppObject *)v39,
            Method_DataManager___c__DisplayClass57_0__LoadMasterDataThread_b__0__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_DataMasterBase___ctor__);
          Index_WarBoardPieceData = System_Array__FindIndex_WarBoardPieceData_(
                                      lookup,
                                      (System_Predicate_T__o *)v56,
                                      (const MethodInfo_1FC0AB0 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_WarBoardPieceData & 0x80000000) == 0 )
          {
            v60 = v5->fields.lookup;
            if ( !v60 )
              sub_B5D69C(Index_WarBoardPieceData, v58);
            if ( (unsigned int)Index_WarBoardPieceData >= LODWORD(v60->fields.entries) )
            {
              v71 = sub_B5D6C8(Index_WarBoardPieceData);
              sub_B5D668(v71, 0LL);
            }
            if ( !v54 )
              sub_B5D69C(Index_WarBoardPieceData, v58);
            if ( !*(_DWORD *)(v54 + 24) )
            {
              v73 = sub_B5D6C8(Index_WarBoardPieceData);
              sub_B5D668(v73, 0LL);
            }
            v61 = (DataMasterBase_o *)*((_QWORD *)&v60->fields.count + (int)Index_WarBoardPieceData);
            saveNameList = (Il2CppObject *)v5->fields.saveNameList;
            writeMasterDataThread = (System_Threading_SynchronizationContext_o *)v5->fields.writeMasterDataThread;
            *(_QWORD *)&v101.fields.has_value = *(_QWORD *)(v54 + 32);
            v98[0].fields.value = 0LL;
            *(_QWORD *)&v98[0].fields.has_value = 0LL;
            v101.fields.value = (int64_t)v98;
            System_Nullable_long____ctor(v101, Method_System_Nullable_long___ctor__, v59);
            if ( *(_DWORD *)(v54 + 24) <= 1u )
            {
              v72 = sub_B5D6C8(v64);
              sub_B5D668(v72, 0LL);
            }
            *(_QWORD *)&v102.fields.has_value = *(_QWORD *)(v54 + 40);
            v97.fields.value = 0LL;
            *(_QWORD *)&v97.fields.has_value = 0LL;
            v102.fields.value = (int64_t)&v97;
            System_Nullable_long____ctor(v102, Method_System_Nullable_long___ctor__, v65);
            if ( !v61 )
              sub_B5D69C(v66, v67);
            DataMasterBase__ReplacedForThread(v61, saveNameList, writeMasterDataThread, v98[0], v97, work, 0LL);
          }
        }
        v68 = *(Il2CppObject **)&v5->fields.nowLoadCount;
        lockTaken = 0;
        System_Threading_Monitor__Enter_15675620(v68, &lockTaken, 0LL);
        ++LODWORD(v5->fields.masterLoadThreads);
        *((_DWORD *)&v98[1].fields.value + v36) = 215;
        v36 = ++v99;
        if ( lockTaken )
          System_Threading_Monitor__Exit(v68, 0LL);
        if ( v36 )
        {
          v69 = v36 - 1;
          if ( *((_DWORD *)&v98[0].fields.has_value + v36 + 1) == 215 )
          {
            --v36;
            v99 = v69;
          }
        }
        ++v37;
      }
      while ( (__int64)v37 < v38 );
    }
  }
  else
  {
    v74 = (void *)sub_B5D990(indexList);
    if ( v75 != 1 )
      _Unwind_Resume(v74);
    v76 = (_QWORD **)__cxa_begin_catch(v74);
    v77 = sub_B5D5C8(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v77, **v76) & 1) != 0 )
    {
      __cxa_end_catch();
    }
    else
    {
      v78 = sub_B5D5C8(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v78, **v76) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v76;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v79 = v5->fields.writeMasterDataThread;
      if ( (*(_BYTE *)(sub_B5D5C8(&DataManager___c_TypeInfo) + 307) & 4) != 0
        && !*(_DWORD *)(sub_B5D5C8(&DataManager___c_TypeInfo) + 224) )
      {
        v80 = sub_B5D5C8(&DataManager___c_TypeInfo);
        j_il2cpp_runtime_class_init_0(v80);
      }
      v81 = sub_B5D5C8(&DataManager___c_TypeInfo);
      v83 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v81 + 184) + 8LL);
      if ( !v83 )
      {
        if ( (*(_BYTE *)(sub_B5D5C8(&DataManager___c_TypeInfo) + 307) & 4) != 0
          && !*(_DWORD *)(sub_B5D5C8(&DataManager___c_TypeInfo) + 224) )
        {
          v84 = sub_B5D5C8(&DataManager___c_TypeInfo);
          j_il2cpp_runtime_class_init_0(v84);
        }
        v85 = **(Il2CppObject ***)(sub_B5D5C8(&DataManager___c_TypeInfo) + 184);
        v86 = sub_B5D5C8(&System_Threading_SendOrPostCallback_TypeInfo);
        v83 = (System_Threading_SendOrPostCallback_o *)sub_B5D694(v86);
        v87 = sub_B5D5C8(&Method_DataManager___c__LoadMasterDataThread_b__57_1__);
        System_Threading_SendOrPostCallback___ctor(v83, v85, v87, 0LL);
        v88 = *(_QWORD *)(sub_B5D5C8(&DataManager___c_TypeInfo) + 184);
        *(_QWORD *)(v88 + 8) = v83;
        sub_B5D560((BattleServantConfConponent_o *)(v88 + 8), (System_Int32_array **)v83, v89, v90, v91, v92, v93, v94);
      }
      if ( !v79 )
        sub_B5D69C(v81, v82);
      ((void (__fastcall *)(struct System_Threading_Thread_o *, System_Threading_SendOrPostCallback_o *, _QWORD, void *))v79->klass[1]._1.namespaze)(
        v79,
        v83,
        0LL,
        v79->klass[1]._1.byval_arg.data);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v55; // x0
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Threading_SynchronizationContext_o *Current; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x23
  struct System_Threading_SynchronizationContext_o **p_context; // x20
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  System_Int32_array *v85; // x21
  System_Comparison_int__o *v86; // x23
  __int64 v87; // x23
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Threading_ParameterizedThreadStart_o *v94; // x24
  System_Threading_Thread_o *v95; // x22
  System_Func_int__bool__o *v96; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x0
  System_Int32_array *v98; // x0
  int v99; // w8
  bool v100; // nf

  if ( (byte_42EA366 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Sort_int____68805856, maxIndex, (_DWORD)loadedIndices, method);
    sub_B5D5C4(&Method_System_Comparison_int___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Comparison_int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_LoadMasterDataThread__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_int___, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_int__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_int__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Thread__Add__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Thread___ctor__, v30, v31, v32);
    sub_B5D5C4(&System_Collections_Generic_List_Thread__TypeInfo, v33, v34, v35);
    sub_B5D5C4(&System_Threading_ParameterizedThreadStart_TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Threading_Thread_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_DataManager___c__DisplayClass55_0__StartMasterLoadThread_b__0__, v42, v43, v44);
    sub_B5D5C4(&DataManager___c__DisplayClass55_0_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&Method_DataManager___c__DisplayClass55_1__StartMasterLoadThread_b__1__, v48, v49, v50);
    sub_B5D5C4(&DataManager___c__DisplayClass55_1_TypeInfo, v51, v52, v53);
    byte_42EA366 = 1;
  }
  v54 = sub_B5D694(DataManager___c__DisplayClass55_0_TypeInfo);
  DataManager___c__DisplayClass55_0___ctor((DataManager___c__DisplayClass55_0_o *)v54, 0LL);
  if ( !v54 )
    goto LABEL_10;
  *(_QWORD *)(v54 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)this, v57, v58, v59, v60, v61, v62);
  *(_QWORD *)(v54 + 24) = loadedIndices;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v54 + 24),
    (System_Int32_array **)loadedIndices,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.writeMasterDataThread = (struct System_Threading_Thread_o *)Current;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.writeMasterDataThread,
    (System_Int32_array **)Current,
    v70,
    v71,
    v72,
    v73,
    v74,
    v75);
  v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v76,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Thread___ctor__);
  p_context = &this->fields.context;
  this->fields.context = (struct System_Threading_SynchronizationContext_o *)v76;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.context,
    (System_Int32_array **)v76,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v85 = System_Linq_Enumerable__ToArray_int_(
          v84,
          (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  v86 = (System_Comparison_int__o *)sub_B5D694(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v86,
    (Il2CppObject *)v54,
    Method_DataManager___c__DisplayClass55_0__StartMasterLoadThread_b__0__,
    (const MethodInfo_24998C8 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__28083228(
    v85,
    (System_Comparison_T__o *)v86,
    (const MethodInfo_1AC841C *)Method_System_Array_Sort_int____68805856);
  v87 = sub_B5D694(DataManager___c__DisplayClass55_1_TypeInfo);
  DataManager___c__DisplayClass55_1___ctor((DataManager___c__DisplayClass55_1_o *)v87, 0LL);
  if ( !v87 )
LABEL_10:
    sub_B5D69C(v55, v56);
  *(_QWORD *)(v87 + 24) = v54;
  sub_B5D560((BattleServantConfConponent_o *)(v87 + 24), (System_Int32_array **)v54, v88, v89, v90, v91, v92, v93);
  *(_DWORD *)(v87 + 16) = 0;
  do
  {
    v94 = (System_Threading_ParameterizedThreadStart_o *)sub_B5D694(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v94,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v95 = (System_Threading_Thread_o *)sub_B5D694(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_42287900(v95, v94, 0LL);
    if ( !v95 )
      goto LABEL_10;
    System_Threading_Thread__set_IsBackground(v95, 1, 0LL);
    v96 = (System_Func_int__bool__o *)sub_B5D694(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v96,
      (Il2CppObject *)v87,
      Method_DataManager___c__DisplayClass55_1__StartMasterLoadThread_b__1__,
      (const MethodInfo_2C28A40 *)Method_System_Func_int__bool___ctor__);
    v97 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v85,
            (System_Func_TSource__bool__o *)v96,
            (const MethodInfo_1CBBC7C *)Method_System_Linq_Enumerable_Where_int___);
    v98 = System_Linq_Enumerable__ToArray_int_(
            v97,
            (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_42288304(v95, &v98->obj, 0LL);
    v55 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_context;
    if ( !*p_context )
      goto LABEL_10;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v55,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v95,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Thread__Add__);
    v99 = *(_DWORD *)(v87 + 16) + 1;
    v100 = *(_DWORD *)(v87 + 16) - 4 < 0;
    *(_DWORD *)(v87 + 16) = v99;
  }
  while ( v100 != __OFSUB__(v99, 5) );
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Threading_ParameterizedThreadStart_o *v16; // x21
  System_Threading_Thread_o *v17; // x22
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x1
  System_Threading_Thread_o *v25; // x0

  if ( (byte_42EA369 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_WriteLocalFileThread__, (_DWORD)fileName, (_DWORD)method, v3);
    sub_B5D5C4(&System_Threading_ParameterizedThreadStart_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_Threading_Thread_TypeInfo, v13, v14, v15);
    byte_42EA369 = 1;
  }
  LOBYTE(this->fields.writeMasterDataThreadException) = 0;
  this[1].klass = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this[1], 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  v16 = (System_Threading_ParameterizedThreadStart_o *)sub_B5D694(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v16,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v17 = (System_Threading_Thread_o *)sub_B5D694(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_42287900(v17, v16, 0LL);
  *(_QWORD *)&this->fields.writeMasterDataThreadEnd = v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.writeMasterDataThreadEnd,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = *(System_Threading_Thread_o **)&this->fields.writeMasterDataThreadEnd;
  if ( !v25 )
    sub_B5D69C(0LL, v24);
  System_Threading_Thread__Start_42288304(v25, (Il2CppObject *)fileName, 0LL);
}


void __fastcall DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataManager_o *v4; // x19
  BattleServantConfConponent_o *p_context; // x19
  BattleServantConfConponent_c *klass; // x20
  struct System_Threading_SynchronizationContext_o *context; // t1
  unsigned int v8; // w21
  __int64 v9; // x8
  System_Threading_Thread_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  v4 = this;
  if ( (byte_42EA367 & 1) == 0 )
  {
    this = (DataManager_o *)sub_B5D5C4(
                              &Method_System_Collections_Generic_List_Thread__get_Item__,
                              (_DWORD)method,
                              v2,
                              v3);
    byte_42EA367 = 1;
  }
  context = v4->fields.context;
  p_context = (BattleServantConfConponent_o *)&v4->fields.context;
  klass = (BattleServantConfConponent_c *)context;
  if ( context )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( LODWORD(klass->_1.namespaze) <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v9 = (__int64)&klass->_1.name[8 * v8];
      v10 = *(System_Threading_Thread_o **)(v9 + 32);
      if ( !v10 )
LABEL_12:
        sub_B5D69C(this, method);
      this = (DataManager_o *)System_Threading_Thread__get_IsAlive(*(System_Threading_Thread_o **)(v9 + 32), 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        System_Threading_Thread__Abort(v10, 0LL);
      if ( v8 > 3 )
        break;
      klass = p_context->klass;
      ++v8;
      if ( !p_context->klass )
        goto LABEL_12;
    }
    p_context->klass = 0LL;
    sub_B5D560(p_context, 0LL, v11, v12, v13, v14, v15, v16);
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
        sub_B5D69C(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThreadEnd, 0LL);
    }
    *p_writeMasterDataThreadEnd = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)p_writeMasterDataThreadEnd, 0LL, v5, v6, v7, v8, v9, v10);
  }
}


void __fastcall DataManager__WriteLocalFileThread(DataManager_o *this, Il2CppObject *param, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  Il2CppObject *v21; // x0
  System_IO_Stream_o *v22; // x20
  System_IO_Stream_o *v23; // x22
  System_IO_BinaryWriter_o *v24; // x21
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x22
  int v34; // w24
  unsigned int v35; // w25
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x23
  __int64 v40; // x8
  __int64 v41; // x27
  __int64 v42; // x23
  __int64 v43; // x8
  System_IO_BinaryWriter_c *klass; // x8
  unsigned __int64 v45; // x10
  int32_t *p_offset; // x11
  __int64 v47; // x0
  System_IO_Stream_c *v48; // x8
  unsigned __int64 v49; // x10
  int32_t *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  __int64 v54; // x0

  if ( (byte_42EA36A & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryWriter_TypeInfo, (_DWORD)param, (_DWORD)method, v3);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____get_Count__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____get_Item__, v15, v16, v17);
    sub_B5D5C4(&string_TypeInfo, v18, v19, v20);
    byte_42EA36A = 1;
  }
  if ( param )
  {
    if ( (System_String_c *)param->klass == string_TypeInfo )
      v21 = param;
    else
      v21 = 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  v22 = (System_IO_Stream_o *)System_IO_File__OpenWrite((System_String_o *)v21, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v23 = CatAndMouseGame__CatGameZ(v22, 0LL);
  v24 = (System_IO_BinaryWriter_o *)sub_B5D694(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_40360312(v24, v23, 0LL);
  v33 = *(_QWORD *)&this->fields.lastFrameTime;
  if ( !v33 )
    sub_B5D69C(v25, v26);
  v34 = *(_DWORD *)(v33 + 24);
  if ( v34 >= 1 )
  {
    v35 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v33 + 24) <= v35 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v36 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 8LL * (int)v35 + 32);
      if ( !v36 )
        sub_B5D69C(v25, v26);
      if ( *(_DWORD *)(v36 + 24) <= 1u )
      {
        v52 = sub_B5D6C8(v25);
        sub_B5D668(v52, 0LL);
      }
      if ( !v24 )
        sub_B5D69C(v25, v26);
      v37 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v24->klass->vtable._17_Write.method)(
              v24,
              *(unsigned int *)(v36 + 40),
              v24->klass->vtable._18_Write.methodPtr);
      v39 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v39 )
        sub_B5D69C(v37, v38);
      if ( *(_DWORD *)(v39 + 24) <= v35 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v40 = *(_QWORD *)(*(_QWORD *)(v39 + 16) + 8LL * (int)v35 + 32);
      if ( !v40 )
        sub_B5D69C(v37, v38);
      if ( !*(_DWORD *)(v40 + 24) )
      {
        v54 = sub_B5D6C8(v37);
        sub_B5D668(v54, 0LL);
      }
      v41 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v41 )
        sub_B5D69C(v37, v38);
      v42 = *(_QWORD *)(v40 + 32);
      if ( *(_DWORD *)(v41 + 24) <= v35 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v43 = *(_QWORD *)(*(_QWORD *)(v41 + 16) + 8LL * (int)v35 + 32);
      if ( !v43 )
        sub_B5D69C(v37, v38);
      if ( *(_DWORD *)(v43 + 24) <= 1u )
      {
        v53 = sub_B5D6C8(v37);
        sub_B5D668(v53, 0LL);
      }
      v25 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Collections_Generic_List_string__o *, _QWORD, _QWORD, Il2CppMethodPointer))v24->klass->vtable._11_Write.method)(
              v24,
              this->fields.saveNameList,
              (unsigned int)v42,
              *(unsigned int *)(v43 + 40),
              v24->klass->vtable._12_Write.methodPtr);
      if ( (int)++v35 >= v34 )
        break;
      v33 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v33 )
        sub_B5D69C(v25, v26);
    }
  }
  if ( v24 )
  {
    klass = v24->klass;
    if ( *(_WORD *)&v24->klass->_2.bitflags1 )
    {
      v45 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v45;
        p_offset += 4;
        if ( v45 >= *(unsigned __int16 *)&v24->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v47 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v47 = sub_AF54C0(v24, System_IDisposable_TypeInfo, 0LL, v28);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v47)(v24, *(_QWORD *)(v47 + 8));
  }
  if ( v22 )
  {
    v48 = v22->klass;
    if ( *(_WORD *)&v22->klass->_2.bitflags1 )
    {
      v49 = 0LL;
      v50 = &v48->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v50 - 1) != System_IDisposable_TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)&v22->klass->_2.bitflags1 )
          goto LABEL_45;
      }
      v51 = (__int64)(&v48->vtable._0_Equals.method + 2 * *v50);
    }
    else
    {
LABEL_45:
      v51 = sub_AF54C0(v22, System_IDisposable_TypeInfo, 0LL, v28);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v51)(v22, *(_QWORD *)(v51 + 8));
  }
  *(_QWORD *)&this->fields.writeMasterDataThreadEnd = 0LL;
  LOBYTE(this->fields.writeMasterDataThreadException) = 1;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.writeMasterDataThreadEnd, 0LL, v27, v28, v29, v30, v31, v32);
}


bool __fastcall DataManager___updateMasterData_b__49_0(DataManager_o *this, const MethodInfo *method)
{
  return (bool)this->fields.writeMasterDataThreadException;
}


System_String_o *__fastcall DataManager__getCacheFileName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_c *v10; // x0
  const MethodInfo *v11; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42EA351 & 1) == 0 )
  {
    sub_B5D5C4(&DatFileName_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EA351 = 1;
  }
  v10 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v10);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, v11);
  return System_String__Concat_44580072(CachePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_c *v10; // x0
  const MethodInfo *v11; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42EA350 & 1) == 0 )
  {
    sub_B5D5C4(&DatFileName_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EA350 = 1;
  }
  v10 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v10);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, v11);
  return System_String__Concat_44580072(CachePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_42EA34E & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&CacheFolderName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EA34E = 1;
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
  return System_String__Concat_44580072(DatFileSavePath, (System_String_o *)StringLiteral_885/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  DataManager_c *v10; // x0
  const MethodInfo *v11; // x1
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42EA34F & 1) == 0 )
  {
    sub_B5D5C4(&DatFileName_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EA34F = 1;
  }
  v10 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v10);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, v11);
  return System_String__Concat_44580072(CachePath, (System_String_o *)StringLiteral_885/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_QuestReleaseMaster_(
        DataManager_o *this,
        const MethodInfo_1AE4468 *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_42EA2DF & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA2DF = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v5 = ((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMaster_TMaster_->methodPointer)();
  if ( !v5 )
    sub_B5D69C(0LL, v6);
  return *(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **)(v5 + 32);
}


WarEntity_array *__fastcall DataManager__getEntitys_WarMaster__WarEntity_(
        DataManager_o *this,
        const MethodInfo_1AE44E0 *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1

  if ( (byte_42EA2E0 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA2E0 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( !((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMaster_TMaster_->methodPointer)() )
    sub_B5D69C(0LL, v5);
  return (WarEntity_array *)((__int64 (*)(void))method->rgctx_data->_2_DataMasterBase_getEntitys_T_->methodPointer)();
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataManager_c *v4; // x0

  if ( (byte_42EA35C & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA35C = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = DataManager_TypeInfo;
  }
  return v4->static_fields->dataVersion;
}


int64_t __fastcall DataManager__getMasterDateVersion(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataManager_c *v4; // x0

  if ( (byte_42EA35D & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA35D = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = DataManager_TypeInfo;
  }
  return v4->static_fields->dateVersion;
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

  if ( (byte_42EA36C & 1) == 0 )
  {
    sub_B5D5C4(&Crc32_TypeInfo, (_DWORD)name, version, method);
    byte_42EA36C = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B5D69C(0LL, v7);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_42EA352 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidUtil_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&CacheFolderName_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&StringLiteral_885/*"/"*/, v7, v8, v9);
    byte_42EA352 = 1;
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
  return System_String__Concat_44580072(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_885/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataManager_c *v4; // x0

  if ( (byte_42EA361 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA361 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = DataManager_TypeInfo;
  }
  return v4->static_fields->readMasterDataResult;
}


int32_t __fastcall DataManager__getReadMasterVersionResult(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataManager_c *v4; // x0

  if ( (byte_42EA360 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA360 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = DataManager_TypeInfo;
  }
  return v4->static_fields->readMasterVersionResult;
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
    sub_B5D69C(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataManager_c *v4; // x0

  if ( (byte_42EA359 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA359 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = DataManager_TypeInfo;
  }
  return v4->static_fields->serverHash;
}


int32_t __fastcall DataManager__getUpdateMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  DataManager_c *v4; // x0

  if ( (byte_42EA364 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA364 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v4 = DataManager_TypeInfo;
  }
  return v4->static_fields->updateMasterDataResult;
}


bool __fastcall DataManager__get_DispLog(DataManager_o *this, const MethodInfo *method)
{
  return (bool)this->fields.datalist;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterData(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA363 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager__readMasterData_d__47_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA363 = 1;
  }
  v5 = sub_B5D694(DataManager__readMasterData_d__47_TypeInfo);
  DataManager__readMasterData_d__47___ctor((DataManager__readMasterData_d__47_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall DataManager__readMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  __int64 saveDataMapList; // x0
  ManagerConfig_c *v63; // x0
  DataManager_c *v64; // x0
  System_String_o *CacheListFileName; // x20
  System_String_o *AllText; // x21
  System_String_o *v67; // x21
  System_Char_array *v68; // x0
  System_String_o *v69; // x20
  System_Char_array *v70; // x0
  il2cpp_array_size_t max_length; // w8
  int v72; // w22
  __int64 *v73; // x8
  System_String_o *v74; // x0
  __int64 v75; // x1
  System_String_o *v76; // x21
  System_String_o *v77; // x21
  System_String_o *v78; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v80; // x1
  System_Byte_array *v81; // x22
  uint32_t v82; // w22
  System_Char_array *v83; // x0
  il2cpp_array_size_t v84; // w8
  __int64 v85; // x20
  __int64 v86; // x8
  System_String_o *v87; // x21
  __int64 v88; // x22
  System_String_o *v89; // x0
  ManagerConfig_c *v90; // x8
  System_Int32_array **v91; // x21
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_String_array *v98; // x20
  System_Int32_array **v99; // x1
  int v101; // w23
  int64_t v102; // x0
  DataManager_c *v103; // x8
  int64_t v104; // x21
  struct DataManager_StaticFields *static_fields; // x9
  __int64 v106; // x22
  int v107; // w23
  System_String_o *v108; // x21
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
  System_Int32_array **v121; // x1
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x1
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x21
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  System_Int32_array **v142; // x1
  BattleServantConfConponent_o *v143; // x0
  DataManager_c *v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  System_Int32_array **v151; // x21
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  System_Int32_array **v158; // x1
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  System_Int32_array **v165; // x21
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **v172; // x1
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  System_Int32_array **v179; // x21
  System_String_array **v180; // x2
  System_String_array **v181; // x3
  System_Boolean_array **v182; // x4
  System_Int32_array **v183; // x5
  System_Int32_array *v184; // x6
  System_Int32_array *v185; // x7
  System_Int32_array **v186; // x1
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  System_Int32_array **v193; // x21
  __int64 v194; // x0
  __int64 v195; // x0
  __int64 v196; // x0
  __int64 v197; // x0
  __int64 v198; // x0
  __int64 v199; // x0
  __int64 v200; // x0
  int64_t v201; // [xsp+20h] [xbp-60h] BYREF
  int v202; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_42EA371 & 1) == 0 )
  {
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&char___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Crc32_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____Clear__, v20, v21, v22);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&string___TypeInfo, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_5162/*"DataManager version load crc error : チェックサム値が不一致"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_5165/*"DataManager version load error : list file parameter error"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_81/*" "*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_24010/*"~"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_667/*") -> ("*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_1560/*"@"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_20647/*"master versiton different ("*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_5166/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_5167/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_5164/*"DataManager version load error : list file break"*/, v59, v60, v61);
    byte_42EA371 = 1;
  }
  v202 = 0;
  v201 = 0LL;
  saveDataMapList = (__int64)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_164;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
  saveDataMapList = *(_QWORD *)&this->fields.lastFrameTime;
  if ( !saveDataMapList )
    goto LABEL_164;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_long____Clear__);
  v63 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v63 = ManagerConfig_TypeInfo;
  }
  if ( v63->static_fields->UseMock )
    return 0;
  v64 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v64);
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
  v67 = CatAndMouseGame__MouseGame3(AllText, 0LL);
  if ( v67 )
  {
    v68 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v68 )
      sub_B5D69C(0LL, 0LL);
    if ( !v68->max_length )
    {
      v194 = sub_B5D6C8(v68);
      sub_B5D668(v194, 0LL);
    }
    v68->m_Items[2] = -257;
    v69 = System_String__Trim(v67, v68, 0LL);
    v70 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 2LL);
    if ( !v70 )
      sub_B5D69C(0LL, 0LL);
    max_length = v70->max_length;
    if ( !max_length )
    {
      v195 = sub_B5D6C8(v70);
      sub_B5D668(v195, 0LL);
    }
    v70->m_Items[2] = 13;
    if ( max_length == 1 )
    {
      v196 = sub_B5D6C8(v70);
      sub_B5D668(v196, 0LL);
    }
    v70->m_Items[3] = 10;
    if ( !v69 )
      sub_B5D69C(v70, v70);
    v72 = System_String__IndexOfAny(v69, v70, 0LL);
    if ( v72 < 2 )
    {
      v73 = &StringLiteral_5166/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_59;
    }
    v74 = System_String__Substring_44641524(v69, 0, v72, 0LL);
    v76 = v74;
    if ( !v74 )
      sub_B5D69C(0LL, v75);
    if ( System_String__StartsWith(v74, (System_String_o *)StringLiteral_24010/*"~"*/, 0LL) )
    {
      v77 = System_String__Substring(v76, 1, 0LL);
      v78 = System_String__Substring(v69, v72 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B5D69C(0LL, v80);
      v81 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v78,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v82 = Crc32__Compute(v81, 0LL);
      if ( System_UInt32__Parse(v77, 0LL) == v82 )
      {
        v83 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 2LL);
        if ( !v83 )
          sub_B5D69C(0LL, 0LL);
        v84 = v83->max_length;
        if ( !v84 )
        {
          v198 = sub_B5D6C8(v83);
          sub_B5D668(v198, 0LL);
        }
        v83->m_Items[2] = 13;
        if ( v84 == 1 )
        {
          v199 = sub_B5D6C8(v83);
          sub_B5D668(v199, 0LL);
        }
        v83->m_Items[3] = 10;
        if ( !v78 )
          sub_B5D69C(v83, v83);
        saveDataMapList = (__int64)System_String__Split_44638572(v78, v83, 1, 0LL);
        v85 = saveDataMapList;
        if ( !saveDataMapList )
          return 1;
        v86 = *(_QWORD *)(saveDataMapList + 24);
        if ( !v86 )
          goto LABEL_58;
        if ( !(_DWORD)v86 )
          goto LABEL_157;
        saveDataMapList = *(_QWORD *)(saveDataMapList + 32);
        if ( !saveDataMapList )
          goto LABEL_164;
        saveDataMapList = System_String__StartsWith(
                            (System_String_o *)saveDataMapList,
                            (System_String_o *)StringLiteral_1560/*"@"*/,
                            0LL);
        if ( (saveDataMapList & 1) != 0 )
        {
          if ( !*(_DWORD *)(v85 + 24) )
            goto LABEL_157;
          v87 = *(System_String_o **)(v85 + 32);
          saveDataMapList = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !saveDataMapList )
            goto LABEL_164;
          method = (const MethodInfo *)saveDataMapList;
          if ( !*(_DWORD *)(saveDataMapList + 24) )
            goto LABEL_157;
          *(_WORD *)(saveDataMapList + 32) = 44;
          if ( !v87 )
            goto LABEL_164;
          saveDataMapList = (__int64)System_String__Split(v87, (System_Char_array *)saveDataMapList, 0LL);
          if ( !saveDataMapList )
            goto LABEL_164;
          v88 = saveDataMapList;
          if ( !*(_DWORD *)(saveDataMapList + 24) )
            goto LABEL_157;
          saveDataMapList = *(_QWORD *)(saveDataMapList + 32);
          if ( !saveDataMapList )
            goto LABEL_164;
          v89 = System_String__Substring((System_String_o *)saveDataMapList, 1, 0LL);
          v90 = ManagerConfig_TypeInfo;
          v91 = (System_Int32_array **)v89;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v90 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v90->static_fields->MasterDataCacheVer, (System_String_o *)v91, 0LL) )
          {
            saveDataMapList = sub_B5D5DC(string___TypeInfo, 5LL);
            if ( saveDataMapList )
            {
              v98 = (System_String_array *)saveDataMapList;
              saveDataMapList = StringLiteral_20647/*"master versiton different ("*/;
              if ( StringLiteral_20647/*"master versiton different ("*/ )
              {
                saveDataMapList = sub_B5D684(StringLiteral_20647/*"master versiton different ("*/, v98->obj.klass->_1.element_class);
                if ( !saveDataMapList )
                  goto LABEL_163;
                v99 = (System_Int32_array **)StringLiteral_20647/*"master versiton different ("*/;
              }
              else
              {
                v99 = 0LL;
              }
              if ( !v98->max_length )
                goto LABEL_157;
              v98->m_Items[0] = (System_String_o *)v99;
              sub_B5D560((BattleServantConfConponent_o *)v98->m_Items, v99, v92, v93, v94, v95, v96, v97);
              if ( !v91 || (saveDataMapList = sub_B5D684(v91, v98->obj.klass->_1.element_class)) != 0 )
              {
                if ( v98->max_length <= 1 )
                  goto LABEL_157;
                v98->m_Items[1] = (System_String_o *)v91;
                sub_B5D560((BattleServantConfConponent_o *)&v98->m_Items[1], v91, v109, v110, v111, v112, v113, v114);
                saveDataMapList = StringLiteral_667/*") -> ("*/;
                if ( StringLiteral_667/*") -> ("*/ )
                {
                  saveDataMapList = sub_B5D684(StringLiteral_667/*") -> ("*/, v98->obj.klass->_1.element_class);
                  if ( !saveDataMapList )
                    goto LABEL_163;
                  v121 = (System_Int32_array **)StringLiteral_667/*") -> ("*/;
                }
                else
                {
                  v121 = 0LL;
                }
                if ( v98->max_length <= 2 )
                  goto LABEL_157;
                v98->m_Items[2] = (System_String_o *)v121;
                sub_B5D560((BattleServantConfConponent_o *)&v98->m_Items[2], v121, v115, v116, v117, v118, v119, v120);
                saveDataMapList = (__int64)ManagerConfig_TypeInfo;
                if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  saveDataMapList = (__int64)ManagerConfig_TypeInfo;
                }
                v135 = *(System_Int32_array ***)(*(_QWORD *)(saveDataMapList + 184) + 32LL);
                if ( !v135 || (saveDataMapList = sub_B5D684(v135, v98->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v98->max_length <= 3 )
                    goto LABEL_157;
                  v98->m_Items[3] = (System_String_o *)v135;
                  sub_B5D560((BattleServantConfConponent_o *)&v98->m_Items[3], v135, v129, v130, v131, v132, v133, v134);
                  saveDataMapList = StringLiteral_659/*")"*/;
                  if ( !StringLiteral_659/*")"*/ )
                  {
                    v142 = 0LL;
LABEL_108:
                    if ( v98->max_length > 4 )
                    {
                      v98->m_Items[4] = (System_String_o *)v142;
                      v143 = (BattleServantConfConponent_o *)&v98->m_Items[4];
                      goto LABEL_148;
                    }
                    goto LABEL_157;
                  }
                  saveDataMapList = sub_B5D684(StringLiteral_659/*")"*/, v98->obj.klass->_1.element_class);
                  if ( saveDataMapList )
                  {
                    v142 = (System_Int32_array **)StringLiteral_659/*")"*/;
                    goto LABEL_108;
                  }
                }
              }
              goto LABEL_163;
            }
            goto LABEL_164;
          }
          if ( *(_DWORD *)(v88 + 24) == 3 )
          {
            saveDataMapList = System_Int32__Parse(*(System_String_o **)(v88 + 40), 0LL);
            v202 = saveDataMapList;
            if ( *(_DWORD *)(v88 + 24) <= 2u )
              goto LABEL_157;
            v101 = saveDataMapList;
            v102 = System_Int64__Parse(*(System_String_o **)(v88 + 48), 0LL);
            v103 = DataManager_TypeInfo;
            v201 = v102;
            v104 = v102;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v103 = DataManager_TypeInfo;
            }
            static_fields = v103->static_fields;
            if ( static_fields->readDataVersion != v101 )
              goto LABEL_92;
            if ( (BYTE3(v103->vtable._0_Equals.methodPtr) & 4) != 0 && !v103->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v103);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v104 )
            {
              v106 = *(_QWORD *)(v85 + 24);
              if ( (int)v106 < 2 )
                return 1;
              v107 = 1;
              while ( 1 )
              {
                v108 = *(System_String_o **)(v85 + 8LL * v107 + 32);
                saveDataMapList = sub_B5D5DC(char___TypeInfo, 1LL);
                if ( !saveDataMapList )
                  break;
                method = (const MethodInfo *)saveDataMapList;
                if ( !*(_DWORD *)(saveDataMapList + 24) )
                  goto LABEL_157;
                *(_WORD *)(saveDataMapList + 32) = 44;
                if ( !v108 )
                  break;
                saveDataMapList = (__int64)System_String__Split(v108, (System_Char_array *)saveDataMapList, 0LL);
                if ( !saveDataMapList )
                  break;
                if ( *(_DWORD *)(saveDataMapList + 24) != 1 )
                  return 1;
                if ( !this->fields.saveDataMapList )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.saveDataMapList,
                  *(EventMissionProgressRequest_Argument_ProgressData_o **)(saveDataMapList + 32),
                  (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
                if ( ++v107 >= (int)v106 )
                  return 1;
                if ( (unsigned int)v107 >= *(_DWORD *)(v85 + 24) )
                  goto LABEL_157;
              }
            }
            else
            {
LABEL_92:
              saveDataMapList = sub_B5D5DC(string___TypeInfo, 9LL);
              if ( saveDataMapList )
              {
                v98 = (System_String_array *)saveDataMapList;
                saveDataMapList = StringLiteral_20647/*"master versiton different ("*/;
                if ( StringLiteral_20647/*"master versiton different ("*/ )
                {
                  saveDataMapList = sub_B5D684(StringLiteral_20647/*"master versiton different ("*/, v98->obj.klass->_1.element_class);
                  if ( !saveDataMapList )
                    goto LABEL_163;
                  v128 = (System_Int32_array **)StringLiteral_20647/*"master versiton different ("*/;
                }
                else
                {
                  v128 = 0LL;
                }
                if ( !v98->max_length )
                  goto LABEL_157;
                v98->m_Items[0] = (System_String_o *)v128;
                sub_B5D560((BattleServantConfConponent_o *)v98->m_Items, v128, v122, v123, v124, v125, v126, v127);
                v144 = DataManager_TypeInfo;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v144 = DataManager_TypeInfo;
                }
                saveDataMapList = (__int64)System_Int32__ToString((int32_t)v144->static_fields, 0LL);
                v151 = (System_Int32_array **)saveDataMapList;
                if ( !saveDataMapList
                  || (saveDataMapList = sub_B5D684(saveDataMapList, v98->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v98->max_length <= 1 )
                    goto LABEL_157;
                  v98->m_Items[1] = (System_String_o *)v151;
                  sub_B5D560((BattleServantConfConponent_o *)&v98->m_Items[1], v151, v145, v146, v147, v148, v149, v150);
                  saveDataMapList = StringLiteral_81/*" "*/;
                  if ( StringLiteral_81/*" "*/ )
                  {
                    saveDataMapList = sub_B5D684(StringLiteral_81/*" "*/, v98->obj.klass->_1.element_class);
                    if ( !saveDataMapList )
                      goto LABEL_163;
                    v158 = (System_Int32_array **)StringLiteral_81/*" "*/;
                  }
                  else
                  {
                    v158 = 0LL;
                  }
                  if ( v98->max_length <= 2 )
                    goto LABEL_157;
                  v98->m_Items[2] = (System_String_o *)v158;
                  sub_B5D560((BattleServantConfConponent_o *)&v98->m_Items[2], v158, v152, v153, v154, v155, v156, v157);
                  saveDataMapList = (__int64)System_Int64__ToString(
                                               (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                               0LL);
                  v165 = (System_Int32_array **)saveDataMapList;
                  if ( !saveDataMapList
                    || (saveDataMapList = sub_B5D684(saveDataMapList, v98->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v98->max_length <= 3 )
                      goto LABEL_157;
                    v98->m_Items[3] = (System_String_o *)v165;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&v98->m_Items[3],
                      v165,
                      v159,
                      v160,
                      v161,
                      v162,
                      v163,
                      v164);
                    saveDataMapList = StringLiteral_667/*") -> ("*/;
                    if ( StringLiteral_667/*") -> ("*/ )
                    {
                      saveDataMapList = sub_B5D684(StringLiteral_667/*") -> ("*/, v98->obj.klass->_1.element_class);
                      if ( !saveDataMapList )
                        goto LABEL_163;
                      v172 = (System_Int32_array **)StringLiteral_667/*") -> ("*/;
                    }
                    else
                    {
                      v172 = 0LL;
                    }
                    if ( v98->max_length <= 4 )
                      goto LABEL_157;
                    v98->m_Items[4] = (System_String_o *)v172;
                    sub_B5D560(
                      (BattleServantConfConponent_o *)&v98->m_Items[4],
                      v172,
                      v166,
                      v167,
                      v168,
                      v169,
                      v170,
                      v171);
                    saveDataMapList = (__int64)System_Int32__ToString((int32_t)&v202, 0LL);
                    v179 = (System_Int32_array **)saveDataMapList;
                    if ( !saveDataMapList
                      || (saveDataMapList = sub_B5D684(saveDataMapList, v98->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v98->max_length <= 5 )
                        goto LABEL_157;
                      v98->m_Items[5] = (System_String_o *)v179;
                      sub_B5D560(
                        (BattleServantConfConponent_o *)&v98->m_Items[5],
                        v179,
                        v173,
                        v174,
                        v175,
                        v176,
                        v177,
                        v178);
                      saveDataMapList = StringLiteral_81/*" "*/;
                      if ( StringLiteral_81/*" "*/ )
                      {
                        saveDataMapList = sub_B5D684(StringLiteral_81/*" "*/, v98->obj.klass->_1.element_class);
                        if ( !saveDataMapList )
                          goto LABEL_163;
                        v186 = (System_Int32_array **)StringLiteral_81/*" "*/;
                      }
                      else
                      {
                        v186 = 0LL;
                      }
                      if ( v98->max_length <= 6 )
                        goto LABEL_157;
                      v98->m_Items[6] = (System_String_o *)v186;
                      sub_B5D560(
                        (BattleServantConfConponent_o *)&v98->m_Items[6],
                        v186,
                        v180,
                        v181,
                        v182,
                        v183,
                        v184,
                        v185);
                      saveDataMapList = (__int64)System_Int64__ToString((int64_t)&v201, 0LL);
                      v193 = (System_Int32_array **)saveDataMapList;
                      if ( !saveDataMapList
                        || (saveDataMapList = sub_B5D684(saveDataMapList, v98->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( v98->max_length <= 7 )
                          goto LABEL_157;
                        v98->m_Items[7] = (System_String_o *)v193;
                        sub_B5D560(
                          (BattleServantConfConponent_o *)&v98->m_Items[7],
                          v193,
                          v187,
                          v188,
                          v189,
                          v190,
                          v191,
                          v192);
                        saveDataMapList = StringLiteral_659/*")"*/;
                        if ( StringLiteral_659/*")"*/ )
                        {
                          saveDataMapList = sub_B5D684(StringLiteral_659/*")"*/, v98->obj.klass->_1.element_class);
                          if ( !saveDataMapList )
                            goto LABEL_163;
                          v142 = (System_Int32_array **)StringLiteral_659/*")"*/;
                        }
                        else
                        {
                          v142 = 0LL;
                        }
                        if ( v98->max_length > 8 )
                        {
                          v98->m_Items[8] = (System_String_o *)v142;
                          v143 = (BattleServantConfConponent_o *)&v98->m_Items[8];
LABEL_148:
                          sub_B5D560(v143, v142, v136, v137, v138, v139, v140, v141);
                          if ( System_String__Concat_44657912(v98, 0LL) )
                            goto LABEL_60;
                          return 1;
                        }
LABEL_157:
                        v197 = sub_B5D6C8(saveDataMapList);
                        sub_B5D668(v197, 0LL);
                      }
                    }
                  }
                }
LABEL_163:
                v200 = sub_B5D6BC(saveDataMapList);
                sub_B5D668(v200, 0LL);
              }
            }
LABEL_164:
            sub_B5D69C(saveDataMapList, method);
          }
          v73 = &StringLiteral_5165/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_58:
          v73 = &StringLiteral_5164/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v73 = &StringLiteral_5162/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v73 = &StringLiteral_5167/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_59:
    if ( *v73 )
      goto LABEL_60;
  }
  return 1;
}


System_Collections_IEnumerator_o *__fastcall DataManager__readMasterVersion(
        DataManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA362 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager__readMasterVersion_d__46_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA362 = 1;
  }
  v5 = sub_B5D694(DataManager__readMasterVersion_d__46_TypeInfo);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


bool __fastcall DataManager__readMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  ManagerConfig_c *v50; // x0
  DataManager_c *v51; // x0
  System_String_o *CacheVersionFileName; // x20
  const MethodInfo *v53; // x1
  System_String_o *AllText; // x21
  System_String_o *v55; // x21
  System_Char_array *v56; // x0
  System_String_o *v57; // x20
  System_Char_array *v58; // x0
  il2cpp_array_size_t max_length; // w8
  int v60; // w22
  __int64 *v61; // x8
  System_String_o *v62; // x0
  __int64 v63; // x1
  System_String_o *v64; // x21
  System_String_o *v65; // x21
  System_String_o *v66; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v68; // x1
  System_Byte_array *v69; // x22
  uint32_t v70; // w22
  System_Char_array *v71; // x0
  il2cpp_array_size_t v72; // w8
  __int64 v73; // x0
  __int64 v74; // x20
  __int64 v75; // x8
  System_String_o *v76; // x20
  __int64 v77; // x20
  System_String_o *v78; // x0
  ManagerConfig_c *v79; // x8
  System_Int32_array **v80; // x21
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_String_array *v87; // x20
  System_Int32_array **v88; // x1
  DataManager_c *v89; // x0
  DataManager_c *v91; // x8
  int32_t v92; // w19
  int64_t v93; // x0
  DataManager_c *v94; // x8
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x1
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x21
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x1
  __int64 v122; // x0
  __int64 v123; // x0
  __int64 v124; // x0
  __int64 v125; // x0
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x0

  if ( (byte_42EA36F & 1) == 0 )
  {
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&char___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Crc32_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&string___TypeInfo, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_5161/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5158/*"DataManager boot load error : list file break"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_5160/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_5156/*"DataManager boot load crc error : チェックサム値が不一致"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_24010/*"~"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_20645/*"master data versiton different ("*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_667/*") -> ("*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_659/*")"*/, v41, v42, v43);
    sub_B5D5C4(&StringLiteral_1560/*"@"*/, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_5159/*"DataManager boot load error : list file parameter error"*/, v47, v48, v49);
    byte_42EA36F = 1;
  }
  v50 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v50 = ManagerConfig_TypeInfo;
  }
  if ( v50->static_fields->UseMock )
    return 0;
  v51 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v51);
  if ( System_IO_File__Exists(CacheVersionFileName, 0LL) )
  {
    AllText = System_IO_File__ReadAllText(CacheVersionFileName, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v55 = CatAndMouseGame__MouseGame1(AllText, 0, 0LL);
    if ( !v55 )
      return 1;
    v56 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v56 )
      sub_B5D69C(0LL, 0LL);
    if ( !v56->max_length )
    {
      v122 = sub_B5D6C8(v56);
      sub_B5D668(v122, 0LL);
    }
    v56->m_Items[2] = -257;
    v57 = System_String__Trim(v55, v56, 0LL);
    v58 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 2LL);
    if ( !v58 )
      sub_B5D69C(0LL, 0LL);
    max_length = v58->max_length;
    if ( !max_length )
    {
      v123 = sub_B5D6C8(v58);
      sub_B5D668(v123, 0LL);
    }
    v58->m_Items[2] = 13;
    if ( max_length == 1 )
    {
      v124 = sub_B5D6C8(v58);
      sub_B5D668(v124, 0LL);
    }
    v58->m_Items[3] = 10;
    if ( !v57 )
      sub_B5D69C(v58, v58);
    v60 = System_String__IndexOfAny(v57, v58, 0LL);
    if ( v60 < 2 )
    {
      v61 = &StringLiteral_5160/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_57;
    }
    v62 = System_String__Substring_44641524(v57, 0, v60, 0LL);
    v64 = v62;
    if ( !v62 )
      sub_B5D69C(0LL, v63);
    if ( System_String__StartsWith(v62, (System_String_o *)StringLiteral_24010/*"~"*/, 0LL) )
    {
      v65 = System_String__Substring(v64, 1, 0LL);
      v66 = System_String__Substring(v57, v60 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B5D69C(0LL, v68);
      v69 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v66,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v70 = Crc32__Compute(v69, 0LL);
      if ( System_UInt32__Parse(v65, 0LL) == v70 )
      {
        v71 = (System_Char_array *)sub_B5D5DC(char___TypeInfo, 2LL);
        if ( !v71 )
          sub_B5D69C(0LL, 0LL);
        v72 = v71->max_length;
        if ( !v72 )
        {
          v126 = sub_B5D6C8(v71);
          sub_B5D668(v126, 0LL);
        }
        v71->m_Items[2] = 13;
        if ( v72 == 1 )
        {
          v127 = sub_B5D6C8(v71);
          sub_B5D668(v127, 0LL);
        }
        v71->m_Items[3] = 10;
        if ( !v66 )
          sub_B5D69C(v71, v71);
        v73 = (__int64)System_String__Split_44638572(v66, v71, 1, 0LL);
        v74 = v73;
        if ( !v73 )
          return 1;
        v75 = *(_QWORD *)(v73 + 24);
        if ( !v75 )
          goto LABEL_56;
        if ( !(_DWORD)v75 )
          goto LABEL_102;
        v73 = *(_QWORD *)(v73 + 32);
        if ( !v73 )
          goto LABEL_108;
        v73 = System_String__StartsWith((System_String_o *)v73, (System_String_o *)StringLiteral_1560/*"@"*/, 0LL);
        if ( (v73 & 1) != 0 )
        {
          if ( !*(_DWORD *)(v74 + 24) )
            goto LABEL_102;
          v76 = *(System_String_o **)(v74 + 32);
          v73 = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !v73 )
            goto LABEL_108;
          v53 = (const MethodInfo *)v73;
          if ( !*(_DWORD *)(v73 + 24) )
            goto LABEL_102;
          *(_WORD *)(v73 + 32) = 44;
          if ( !v76 )
            goto LABEL_108;
          v73 = (__int64)System_String__Split(v76, (System_Char_array *)v73, 0LL);
          if ( !v73 )
            goto LABEL_108;
          v77 = v73;
          if ( !*(_DWORD *)(v73 + 24) )
            goto LABEL_102;
          v73 = *(_QWORD *)(v73 + 32);
          if ( !v73 )
            goto LABEL_108;
          v78 = System_String__Substring((System_String_o *)v73, 1, 0LL);
          v79 = ManagerConfig_TypeInfo;
          v80 = (System_Int32_array **)v78;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v79 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v79->static_fields->MasterDataCacheVer, (System_String_o *)v80, 0LL) )
          {
            v73 = sub_B5D5DC(string___TypeInfo, 5LL);
            if ( v73 )
            {
              v87 = (System_String_array *)v73;
              v73 = StringLiteral_20645/*"master data versiton different ("*/;
              if ( StringLiteral_20645/*"master data versiton different ("*/ )
              {
                v73 = sub_B5D684(StringLiteral_20645/*"master data versiton different ("*/, v87->obj.klass->_1.element_class);
                if ( !v73 )
                  goto LABEL_107;
                v88 = (System_Int32_array **)StringLiteral_20645/*"master data versiton different ("*/;
              }
              else
              {
                v88 = 0LL;
              }
              if ( !v87->max_length )
                goto LABEL_102;
              v87->m_Items[0] = (System_String_o *)v88;
              sub_B5D560((BattleServantConfConponent_o *)v87->m_Items, v88, v81, v82, v83, v84, v85, v86);
              if ( !v80 || (v73 = sub_B5D684(v80, v87->obj.klass->_1.element_class)) != 0 )
              {
                if ( v87->max_length <= 1 )
                  goto LABEL_102;
                v87->m_Items[1] = (System_String_o *)v80;
                sub_B5D560((BattleServantConfConponent_o *)&v87->m_Items[1], v80, v95, v96, v97, v98, v99, v100);
                v73 = StringLiteral_667/*") -> ("*/;
                if ( StringLiteral_667/*") -> ("*/ )
                {
                  v73 = sub_B5D684(StringLiteral_667/*") -> ("*/, v87->obj.klass->_1.element_class);
                  if ( !v73 )
                    goto LABEL_107;
                  v107 = (System_Int32_array **)StringLiteral_667/*") -> ("*/;
                }
                else
                {
                  v107 = 0LL;
                }
                if ( v87->max_length <= 2 )
                  goto LABEL_102;
                v87->m_Items[2] = (System_String_o *)v107;
                sub_B5D560((BattleServantConfConponent_o *)&v87->m_Items[2], v107, v101, v102, v103, v104, v105, v106);
                v73 = (__int64)ManagerConfig_TypeInfo;
                if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v73 = (__int64)ManagerConfig_TypeInfo;
                }
                v114 = *(System_Int32_array ***)(*(_QWORD *)(v73 + 184) + 32LL);
                if ( !v114 || (v73 = sub_B5D684(v114, v87->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v87->max_length <= 3 )
                    goto LABEL_102;
                  v87->m_Items[3] = (System_String_o *)v114;
                  sub_B5D560((BattleServantConfConponent_o *)&v87->m_Items[3], v114, v108, v109, v110, v111, v112, v113);
                  v73 = StringLiteral_659/*")"*/;
                  if ( !StringLiteral_659/*")"*/ )
                  {
                    v121 = 0LL;
LABEL_91:
                    if ( v87->max_length > 4 )
                    {
                      v87->m_Items[4] = (System_String_o *)v121;
                      sub_B5D560(
                        (BattleServantConfConponent_o *)&v87->m_Items[4],
                        v121,
                        v115,
                        v116,
                        v117,
                        v118,
                        v119,
                        v120);
                      if ( System_String__Concat_44657912(v87, 0LL) )
                        goto LABEL_58;
                      return 1;
                    }
LABEL_102:
                    v125 = sub_B5D6C8(v73);
                    sub_B5D668(v125, 0LL);
                  }
                  v73 = sub_B5D684(StringLiteral_659/*")"*/, v87->obj.klass->_1.element_class);
                  if ( v73 )
                  {
                    v121 = (System_Int32_array **)StringLiteral_659/*")"*/;
                    goto LABEL_91;
                  }
                }
              }
LABEL_107:
              v128 = sub_B5D6BC(v73);
              sub_B5D668(v128, 0LL);
            }
LABEL_108:
            sub_B5D69C(v73, v53);
          }
          if ( *(_DWORD *)(v77 + 24) == 3 )
          {
            v73 = System_Int32__Parse(*(System_String_o **)(v77 + 40), 0LL);
            v91 = DataManager_TypeInfo;
            v92 = v73;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v91 = DataManager_TypeInfo;
            }
            v91->static_fields->dataVersion = v92;
            v91->static_fields->readDataVersion = v92;
            if ( *(_DWORD *)(v77 + 24) > 2u )
            {
              v93 = System_Int64__Parse(*(System_String_o **)(v77 + 48), 0LL);
              v94 = DataManager_TypeInfo;
              DataManager_TypeInfo->static_fields->dateVersion = v93;
              v94->static_fields->readDateVersion = v93;
              return 1;
            }
            goto LABEL_102;
          }
          v61 = &StringLiteral_5159/*"DataManager boot load error : list file parameter error"*/;
        }
        else
        {
LABEL_56:
          v61 = &StringLiteral_5158/*"DataManager boot load error : list file break"*/;
        }
      }
      else
      {
        v61 = &StringLiteral_5156/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v61 = &StringLiteral_5161/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_57:
    if ( *v61 )
      goto LABEL_58;
    return 1;
  }
LABEL_58:
  v89 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v89 = DataManager_TypeInfo;
  }
  v89->static_fields->dataVersion = 0;
  v89->static_fields->dateVersion = 0LL;
  DataManager__ClearSaveDataList(this, v53);
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

  if ( (byte_42EA35F & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, dataVer, dateVer, obj);
    byte_42EA35F = 1;
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
  sub_B5D560(
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

  if ( (byte_42EA35E & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, dataVer, dateVer, method);
    byte_42EA35E = 1;
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  DataManager_c *v15; // x0
  struct DataManager_StaticFields *static_fields; // x0
  System_Int32_array **v17; // x1
  System_String_o *v18; // x19
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_String_o *v28; // x0
  DataManager_c *v29; // x8
  struct DataManager_StaticFields *v30; // x0
  DataManager_c *v31; // x0

  if ( (byte_42EA358 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EA358 = 1;
  }
  v15 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v15 = DataManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  v17 = (System_Int32_array **)StringLiteral_1/*""*/;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(
    (BattleServantConfConponent_o *)&static_fields->serverHash,
    v17,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( obj )
  {
    v18 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v19 = System_String__op_Equality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v19 )
    {
      if ( !v18 )
        sub_B5D69C(v19, v20);
      v21 = System_String__Substring(v18, v18->fields.m_stringLength - 1, 0LL);
      if ( System_String__op_Equality(v21, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
      {
        v28 = System_String__Substring_44641524(v18, 0, v18->fields.m_stringLength - 1, 0LL);
        v29 = DataManager_TypeInfo;
        v18 = v28;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v29 = DataManager_TypeInfo;
        }
        v30 = v29->static_fields;
      }
      else
      {
        v31 = DataManager_TypeInfo;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v31 = DataManager_TypeInfo;
        }
        v30 = v31->static_fields;
      }
      v30->serverHash = v18;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v30->serverHash,
        (System_Int32_array **)v18,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
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

  if ( (byte_42EA35A & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    byte_42EA35A = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_B5D560(
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
  __int64 v3; // x3
  __int64 v6; // x9
  DataManager_o *v7; // x0
  Il2CppObject *v8; // x1

  if ( (byte_42EA373 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, (_DWORD)obj, (_DWORD)method, v3);
    byte_42EA373 = 1;
  }
  if ( obj
    && ((v6 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
         *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v6 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    v7 = (DataManager_o *)sub_B5D990(obj);
  }
  else
  {
    v7 = this;
    v8 = obj;
  }
  DataManager__updateJsonData_28281784(v7, (System_Collections_Generic_Dictionary_string__object__o *)v8, method);
}


void __fastcall DataManager__updateJsonData_28281784(
        DataManager_o *this,
        System_Collections_Generic_Dictionary_string__object__o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v4; // x20
  DataManager_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *v21; // x21
  __int64 v22; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  int entries; // w26
  int v25; // w27
  int v26; // w9
  __int64 v27; // x23
  __int64 v28; // x8
  System_Xml_XmlQualifiedName_o *v29; // x22
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v30; // x8
  DataMasterBase_o *v31; // x23
  __int64 v32; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v33; // x8
  int v34; // w26
  int v35; // w27
  int v36; // w9
  __int64 v37; // x23
  __int64 v38; // x8
  System_Xml_XmlQualifiedName_o *v39; // x22
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v40; // x8
  DataMasterBase_o *v41; // x23
  __int64 v42; // x9
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v43; // x8
  int v44; // w25
  int v45; // w26
  int v46; // w9
  __int64 v47; // x22
  __int64 v48; // x8
  System_Xml_XmlQualifiedName_o *v49; // x21
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v50; // x8
  DataMasterBase_o *v51; // x22
  __int64 v52; // x0
  DataManager_o *v53; // x0
  const MethodInfo *v54; // x1
  System_Nullable_long__o v55; // 0:x2.16
  System_Nullable_long__o v56; // 0:x4.16

  v4 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)data;
  v5 = this;
  if ( (byte_42EA374 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)data,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_23254/*"updated"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_18186/*"deleted"*/, v15, v16, v17);
    this = (DataManager_o *)sub_B5D5C4(&StringLiteral_22070/*"replaced"*/, v18, v19, v20);
    byte_42EA374 = 1;
  }
  if ( !v4 )
LABEL_57:
    sub_B5D69C(this, data);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18186/*"deleted"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              v4,
                              (System_Type_o *)StringLiteral_18186/*"deleted"*/,
                              (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v21 = this;
    if ( this )
    {
      data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
      v22 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v22
        || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
      {
        goto LABEL_60;
      }
    }
    lookup = v5->fields.lookup;
    if ( !lookup )
      goto LABEL_57;
    entries = (int)lookup->fields.entries;
    if ( entries >= 1 )
    {
      v25 = 1;
      while ( 1 )
      {
        v26 = v25 - 1;
        if ( (unsigned int)(v25 - 1) >= LODWORD(lookup->fields.entries) )
          break;
        v27 = v26;
        v28 = *((_QWORD *)&lookup->fields.count + v26);
        if ( !v28 || !v21 )
          goto LABEL_57;
        v29 = *(System_Xml_XmlQualifiedName_o **)(v28 + 24);
        this = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                  (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
                                  v29,
                                  (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v30 = v5->fields.lookup;
          if ( !v30 )
            goto LABEL_57;
          if ( (unsigned int)v27 >= LODWORD(v30->fields.entries) )
            break;
          v31 = (DataMasterBase_o *)*((_QWORD *)&v30->fields.count + v27);
          this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                    (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v21,
                                    (System_Type_o *)v29,
                                    (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v31 )
            goto LABEL_57;
          this = (DataManager_o *)DataMasterBase__Deleted(v31, (Il2CppObject *)this, 0LL);
        }
        if ( v25 >= entries )
          goto LABEL_22;
        lookup = v5->fields.lookup;
        ++v25;
        if ( !lookup )
          goto LABEL_57;
      }
LABEL_59:
      v52 = sub_B5D6C8(this);
      sub_B5D668(v52, 0LL);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_23254/*"updated"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            v4,
                            (System_Type_o *)StringLiteral_23254/*"updated"*/,
                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v21 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v32 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v32
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v32 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_B5D990(v21);
      goto LABEL_61;
    }
  }
  v33 = v5->fields.lookup;
  if ( !v33 )
    goto LABEL_57;
  v34 = (int)v33->fields.entries;
  if ( v34 >= 1 )
  {
    v35 = 1;
    while ( 1 )
    {
      v36 = v35 - 1;
      if ( (unsigned int)(v35 - 1) >= LODWORD(v33->fields.entries) )
        goto LABEL_59;
      v37 = v36;
      v38 = *((_QWORD *)&v33->fields.count + v36);
      if ( !v38 || !v21 )
        goto LABEL_57;
      v39 = *(System_Xml_XmlQualifiedName_o **)(v38 + 24);
      this = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v21,
                                v39,
                                (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v40 = v5->fields.lookup;
        if ( !v40 )
          goto LABEL_57;
        if ( (unsigned int)v37 >= LODWORD(v40->fields.entries) )
          goto LABEL_59;
        v41 = (DataMasterBase_o *)*((_QWORD *)&v40->fields.count + v37);
        this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v21,
                                  (System_Type_o *)v39,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v41 )
          goto LABEL_57;
        this = (DataManager_o *)DataMasterBase__Updated(v41, (Il2CppObject *)this, 0LL);
      }
      if ( v35 >= v34 )
        break;
      v33 = v5->fields.lookup;
      ++v35;
      if ( !v33 )
        goto LABEL_57;
    }
  }
LABEL_40:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22070/*"replaced"*/,
          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            v4,
                            (System_Type_o *)StringLiteral_22070/*"replaced"*/,
                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v4 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v42 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v42
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v42 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      v53 = (DataManager_o *)sub_B5D990(v4);
      DataManager__getRevisionTotal(v53, v54);
      return;
    }
  }
  v43 = v5->fields.lookup;
  if ( !v43 )
    goto LABEL_57;
  v44 = (int)v43->fields.entries;
  if ( v44 >= 1 )
  {
    v45 = 1;
    while ( 1 )
    {
      v46 = v45 - 1;
      if ( (unsigned int)(v45 - 1) >= LODWORD(v43->fields.entries) )
        goto LABEL_59;
      v47 = v46;
      v48 = *((_QWORD *)&v43->fields.count + v46);
      if ( !v48 || !v4 )
        goto LABEL_57;
      v49 = *(System_Xml_XmlQualifiedName_o **)(v48 + 24);
      this = (DataManager_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v4,
                                v49,
                                (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v50 = v5->fields.lookup;
        if ( !v50 )
          goto LABEL_57;
        if ( (unsigned int)v47 >= LODWORD(v50->fields.entries) )
          goto LABEL_59;
        v51 = (DataMasterBase_o *)*((_QWORD *)&v50->fields.count + v47);
        this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                  v4,
                                  (System_Type_o *)v49,
                                  (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v51 )
          goto LABEL_57;
        v55.fields.value = 0LL;
        *(_QWORD *)&v55.fields.has_value = 0LL;
        v56.fields.value = 0LL;
        *(_QWORD *)&v56.fields.has_value = 0LL;
        this = (DataManager_o *)DataMasterBase__Replaced(v51, (Il2CppObject *)this, v55, v56, 0LL);
      }
      if ( v45 >= v44 )
        return;
      v43 = v5->fields.lookup;
      ++v45;
      if ( !v43 )
        goto LABEL_57;
    }
  }
}


System_Collections_IEnumerator_o *__fastcall DataManager__updateMasterData(
        DataManager_o *this,
        bool isUseTips,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42EA365 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips, (_DWORD)method, v3);
    byte_42EA365 = 1;
  }
  v6 = sub_B5D694(DataManager__updateMasterData_d__49_TypeInfo);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_BYTE *)(v6 + 48) = isUseTips;
  return (System_Collections_IEnumerator_o *)v6;
}


System_Collections_IEnumerator_o *__fastcall DataManager__updateWebViewData(
        DataManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EA35B & 1) == 0 )
  {
    sub_B5D5C4(&DataManager__updateWebViewData_d__38_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA35B = 1;
  }
  v5 = sub_B5D694(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall DataManager__writeMasterDataListFile(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  ManagerConfig_c *v44; // x0
  DataManager_c *v45; // x0
  System_String_o *CacheListFileName; // x0
  __int64 v47; // x1
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t size; // w24
  System_String_o *v50; // x20
  System_Text_StringBuilder_o *v51; // x21
  ManagerConfig_c *v52; // x0
  struct System_Collections_Generic_List_long____o *v53; // x25
  signed __int64 v54; // x23
  unsigned __int64 v55; // x24
  Il2CppObject *v56; // x19
  System_Byte_array *v57; // x21
  Il2CppObject *v58; // x0
  System_String_o *v59; // x19
  System_String_o *v60; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v62; // x19
  __int64 v63; // x0
  __int64 v64; // x1
  __int64 v65; // x3
  System_IO_StreamWriter_c *klass; // x8
  unsigned __int64 v67; // x10
  int32_t *p_offset; // x11
  __int64 v69; // x0
  uint32_t v70; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v71; // [xsp+18h] [xbp-38h]

  if ( (byte_42EA372 & 1) == 0 )
  {
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Crc32_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&DataManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v17, v18, v19);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_IO_StreamWriter_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&System_Text_StringBuilder_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&uint_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_24013/*"~{0}\n{1}"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1560/*"@"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_707/*","*/, v41, v42, v43);
    byte_42EA372 = 1;
  }
  HIDWORD(v71) = 0;
  v44 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v44 = ManagerConfig_TypeInfo;
  }
  if ( !v44->static_fields->UseMock )
  {
    v45 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheListFileName = DataManager__getCacheListFileName((const MethodInfo *)v45);
    saveDataMapList = this->fields.saveDataMapList;
    if ( !saveDataMapList )
      goto LABEL_23;
    size = saveDataMapList->fields._size;
    v50 = CacheListFileName;
    v51 = (System_Text_StringBuilder_o *)sub_B5D694(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_42947772(v51, (size << 7) + 128, 0LL);
    if ( !v51 )
      goto LABEL_23;
    System_Text_StringBuilder__Append_42953744(v51, (System_String_o *)StringLiteral_1560/*"@"*/, 0LL);
    v52 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v52 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_42953744(v51, v52->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_42953744(v51, (System_String_o *)StringLiteral_707/*","*/, 0LL);
    System_Text_StringBuilder__Append_42957084(v51, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_42953744(v51, (System_String_o *)StringLiteral_707/*","*/, 0LL);
    System_Text_StringBuilder__Append_42957224(v51, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    CacheListFileName = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                             v51,
                                             (System_String_o *)StringLiteral_26/*"\n"*/,
                                             0LL);
    v53 = this->fields.saveDataMapList;
    if ( !v53 )
      goto LABEL_23;
    v54 = v53->fields._size;
    if ( (int)v54 >= 1 )
    {
      v55 = 0LL;
      while ( 1 )
      {
        if ( v55 >= (unsigned int)v53->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
        System_Text_StringBuilder__Append_42953744(v51, (System_String_o *)v53->fields._items->m_Items[v55], 0LL);
        CacheListFileName = (System_String_o *)System_Text_StringBuilder__Append_42953744(
                                                 v51,
                                                 (System_String_o *)StringLiteral_26/*"\n"*/,
                                                 0LL);
        if ( (__int64)++v55 >= v54 )
          break;
        v53 = this->fields.saveDataMapList;
        if ( !v53 )
          goto LABEL_23;
      }
    }
    v56 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v51->klass->vtable._3_ToString.method)(
                            v51,
                            v51->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    CacheListFileName = (System_String_o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !CacheListFileName )
LABEL_23:
      sub_B5D69C(CacheListFileName, v47);
    v57 = (System_Byte_array *)((__int64 (__fastcall *)(System_String_o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._18_System_IConvertible_ToDouble.method)(
                                 CacheListFileName,
                                 v56,
                                 CacheListFileName->klass->vtable._19_System_IConvertible_ToDecimal.methodPtr);
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v70 = Crc32__Compute(v57, 0LL);
    v58 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v70);
    v59 = System_String__Format_44573324((System_String_o *)StringLiteral_24013/*"~{0}\n{1}"*/, v58, v56, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v60 = CatAndMouseGame__CatGame3(v59, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v62 = (System_IO_StreamWriter_o *)sub_B5D694(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_44628260(v62, v50, 0, UTF8, 0LL);
    if ( !v62 )
      sub_B5D69C(v63, v64);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v62->klass->vtable._16_Write.method)(
      v62,
      v60,
      v62->klass->vtable._17_Write.methodPtr);
    v71 = 0x100000113LL;
    klass = v62->klass;
    if ( *(_WORD *)&v62->klass->_2.bitflags1 )
    {
      v67 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v67;
        p_offset += 4;
        if ( v67 >= *(unsigned __int16 *)&v62->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v69 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v69 = sub_AF54C0(v62, System_IDisposable_TypeInfo, 0LL, v65);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v69)(v62, *(_QWORD *)(v69 + 8));
    if ( (_DWORD)v71 == 275 )
      HIDWORD(v71) = 0;
  }
}


void __fastcall DataManager__writeMasterVersionFile(DataManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  ManagerConfig_c *v31; // x0
  DataManager_c *v32; // x0
  System_String_o *CacheVersionFileName; // x19
  System_Text_Encoding_o *UTF8; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array *v42; // x20
  System_Int32_array **v43; // x0
  System_Int32_array **v44; // x1
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Int32_array **v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x21
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  System_Int32_array **v72; // x1
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_Int32_array **v79; // x21
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Int32_array **v86; // x1
  System_String_o *v87; // x20
  System_Byte_array *v88; // x21
  System_String_o *v89; // x0
  System_String_o *v90; // x20
  System_String_o *v91; // x20
  System_Text_Encoding_o *v92; // x22
  System_IO_StreamWriter_o *v93; // x21
  __int64 v94; // x0
  __int64 v95; // x0
  uint32_t v96; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42EA370 & 1) == 0 )
  {
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Crc32_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&DataManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&System_IO_StreamWriter_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&string___TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_26/*"\n"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_24010/*"~"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_1560/*"@"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_707/*","*/, v28, v29, v30);
    byte_42EA370 = 1;
  }
  v96 = 0;
  v31 = ManagerConfig_TypeInfo;
  if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v31 = ManagerConfig_TypeInfo;
  }
  if ( !v31->static_fields->UseMock )
  {
    v32 = DataManager_TypeInfo;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    CacheVersionFileName = DataManager__getCacheVersionFileName((const MethodInfo *)v32);
    UTF8 = (System_Text_Encoding_o *)sub_B5D5DC(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_55;
    v42 = (System_String_array *)UTF8;
    v43 = (System_Int32_array **)StringLiteral_1560/*"@"*/;
    if ( StringLiteral_1560/*"@"*/ )
    {
      v43 = (System_Int32_array **)sub_B5D684(StringLiteral_1560/*"@"*/, v42->obj.klass->_1.element_class);
      if ( !v43 )
        goto LABEL_54;
      v44 = (System_Int32_array **)StringLiteral_1560/*"@"*/;
    }
    else
    {
      v44 = 0LL;
    }
    if ( !v42->max_length )
      goto LABEL_53;
    v42->m_Items[0] = (System_String_o *)v44;
    sub_B5D560((BattleServantConfConponent_o *)v42->m_Items, v44, v36, v37, v38, v39, v40, v41);
    v43 = (System_Int32_array **)ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v43 = (System_Int32_array **)ManagerConfig_TypeInfo;
    }
    v51 = *(System_Int32_array ***)&v43[23]->m_Items[1];
    if ( !v51 || (v43 = (System_Int32_array **)sub_B5D684(v51, v42->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v42->max_length <= 1 )
        goto LABEL_53;
      v42->m_Items[1] = (System_String_o *)v51;
      sub_B5D560((BattleServantConfConponent_o *)&v42->m_Items[1], v51, v45, v46, v47, v48, v49, v50);
      v43 = (System_Int32_array **)StringLiteral_707/*","*/;
      if ( StringLiteral_707/*","*/ )
      {
        v43 = (System_Int32_array **)sub_B5D684(StringLiteral_707/*","*/, v42->obj.klass->_1.element_class);
        if ( !v43 )
          goto LABEL_54;
        v58 = (System_Int32_array **)StringLiteral_707/*","*/;
      }
      else
      {
        v58 = 0LL;
      }
      if ( v42->max_length <= 2 )
        goto LABEL_53;
      v42->m_Items[2] = (System_String_o *)v58;
      sub_B5D560((BattleServantConfConponent_o *)&v42->m_Items[2], v58, v52, v53, v54, v55, v56, v57);
      v43 = (System_Int32_array **)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
      v65 = v43;
      if ( !v43 || (v43 = (System_Int32_array **)sub_B5D684(v43, v42->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v42->max_length <= 3 )
          goto LABEL_53;
        v42->m_Items[3] = (System_String_o *)v65;
        sub_B5D560((BattleServantConfConponent_o *)&v42->m_Items[3], v65, v59, v60, v61, v62, v63, v64);
        v43 = (System_Int32_array **)StringLiteral_707/*","*/;
        if ( StringLiteral_707/*","*/ )
        {
          v43 = (System_Int32_array **)sub_B5D684(StringLiteral_707/*","*/, v42->obj.klass->_1.element_class);
          if ( !v43 )
            goto LABEL_54;
          v72 = (System_Int32_array **)StringLiteral_707/*","*/;
        }
        else
        {
          v72 = 0LL;
        }
        if ( v42->max_length <= 4 )
          goto LABEL_53;
        v42->m_Items[4] = (System_String_o *)v72;
        sub_B5D560((BattleServantConfConponent_o *)&v42->m_Items[4], v72, v66, v67, v68, v69, v70, v71);
        v43 = (System_Int32_array **)System_Int64__ToString(
                                       (int64_t)&DataManager_TypeInfo->static_fields->dateVersion,
                                       0LL);
        v79 = v43;
        if ( !v43 || (v43 = (System_Int32_array **)sub_B5D684(v43, v42->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v42->max_length <= 5 )
            goto LABEL_53;
          v42->m_Items[5] = (System_String_o *)v79;
          sub_B5D560((BattleServantConfConponent_o *)&v42->m_Items[5], v79, v73, v74, v75, v76, v77, v78);
          v43 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
          if ( !StringLiteral_26/*"\n"*/ )
          {
            v86 = 0LL;
LABEL_42:
            if ( v42->max_length > 6 )
            {
              v42->m_Items[6] = (System_String_o *)v86;
              sub_B5D560((BattleServantConfConponent_o *)&v42->m_Items[6], v86, v80, v81, v82, v83, v84, v85);
              v87 = System_String__Concat_44657912(v42, 0LL);
              UTF8 = System_Text_Encoding__get_UTF8(0LL);
              if ( UTF8 )
              {
                v88 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                             UTF8,
                                             v87,
                                             UTF8->klass->vtable._19_GetBytes.methodPtr);
                if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
                v96 = Crc32__Compute(v88, 0LL);
                v89 = System_UInt32__ToString((uint32_t)&v96, 0LL);
                v90 = System_String__Concat_44581200(
                        (System_String_o *)StringLiteral_24010/*"~"*/,
                        v89,
                        (System_String_o *)StringLiteral_26/*"\n"*/,
                        v87,
                        0LL);
                if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
                }
                v91 = CatAndMouseGame__CatGame1(v90, 0, 0LL);
                v92 = System_Text_Encoding__get_UTF8(0LL);
                v93 = (System_IO_StreamWriter_o *)sub_B5D694(System_IO_StreamWriter_TypeInfo);
                System_IO_StreamWriter___ctor_44628260(v93, CacheVersionFileName, 0, v92, 0LL);
                if ( v93 )
                {
                  ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v93->klass->vtable._16_Write.method)(
                    v93,
                    v91,
                    v93->klass->vtable._17_Write.methodPtr);
                  ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v93->klass->vtable._8_Close.method)(
                    v93,
                    v93->klass->vtable._9_Dispose.methodPtr);
                  return;
                }
              }
LABEL_55:
              sub_B5D69C(UTF8, v35);
            }
LABEL_53:
            v94 = sub_B5D6C8(v43);
            sub_B5D668(v94, 0LL);
          }
          v43 = (System_Int32_array **)sub_B5D684(StringLiteral_26/*"\n"*/, v42->obj.klass->_1.element_class);
          if ( v43 )
          {
            v86 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_54:
    v95 = sub_B5D6BC(v43);
    sub_B5D668(v95, 0LL);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D5F & 1) == 0 )
  {
    sub_B5D5C4(&DataManager___c_TypeInfo, v1, v2, v3);
    byte_42E6D5F = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(DataManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)DataManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  if ( (byte_42E6D60 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass55_0_o *)sub_B5D5C4(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    a,
                                                    b,
                                                    method);
    byte_42E6D60 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  v8 = *(_QWORD *)&_4__this->fields.lastFrameTime;
  if ( !v8 )
    goto LABEL_16;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)b )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * a + 32);
  if ( !v13 )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&a);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
  {
LABEL_17:
    v15 = sub_B5D6C8(this);
    sub_B5D668(v15, 0LL);
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
  __int64 v3; // x3
  DataManager___c__DisplayClass55_1_o *v5; // x20
  struct DataManager___c__DisplayClass55_0_o *CS___8__locals1; // x8

  v5 = this;
  if ( (byte_42E6D61 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass55_1_o *)sub_B5D5C4(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    x,
                                                    (_DWORD)method,
                                                    v3);
    byte_42E6D61 = 1;
  }
  if ( x % 5 == v5->fields.i )
  {
    CS___8__locals1 = v5->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass55_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_B5D69C(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_B5D69C(this, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  DataManager__readMasterData_d__47_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  struct DataManager_o *_4__this; // x26
  UnityEngine_WaitForEndOfFrame_o *v36; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  bool result; // w0
  DataManager_c *v45; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v47; // w9
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v49; // x21
  System_IO_Stream_o *v50; // x22
  System_IO_Stream_o *v51; // x23
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x24
  __int64 v55; // x0
  __int64 v56; // x1
  UnityEngine_WaitForEndOfFrame_o *v57; // x20
  BattleServantConfConponent_o *v58; // x19
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int v65; // w8
  DataManager_c *v66; // x8
  System_IO_Stream_c *klass; // x8
  unsigned __int64 v68; // x10
  int32_t *p_offset; // x11
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 v73; // x3
  int v74; // w8
  System_IO_Stream_c *v75; // x8
  unsigned __int64 v76; // x10
  int32_t *v77; // x11
  __int64 v78; // x0
  System_Int32_array **v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  __int64 v86; // x3
  System_IO_MemoryStream_c *v87; // x8
  unsigned __int64 v88; // x10
  int32_t *v89; // x11
  __int64 v90; // x0
  System_Byte_array *saveNameList; // x22
  System_IO_MemoryStream_o *v92; // x21
  System_IO_BinaryReader_o *v93; // x22
  __int64 v94; // x0
  __int64 v95; // x1
  __int64 v96; // x3
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int size; // w26
  int i; // w27
  __int64 v100; // x0
  __int64 v101; // x1
  int v102; // w24
  __int64 v103; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v104; // x25
  __int64 v105; // x0
  int v106; // w8
  System_IO_BinaryReader_c *v107; // x8
  unsigned __int64 v108; // x10
  int32_t *v109; // x11
  __int64 v110; // x0
  int v111; // w8
  System_IO_MemoryStream_c *v112; // x8
  unsigned __int64 v113; // x10
  int32_t *v114; // x11
  __int64 v115; // x0
  UnityEngine_WaitForEndOfFrame_o *v116; // x20
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  __int64 v123; // x0
  __int64 v124; // x0
  DataManager_o *v125; // [xsp+8h] [xbp-78h]
  _DWORD v126[7]; // [xsp+10h] [xbp-70h]
  int v127; // [xsp+2Ch] [xbp-54h]

  v4 = this;
  if ( (byte_42E6D62 & 1) == 0 )
  {
    sub_B5D5C4(&System_IO_BinaryReader_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&byte___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_GC_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&long___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____Add__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v26, v27, v28);
    sub_B5D5C4(&System_IO_MemoryStream_TypeInfo, v29, v30, v31);
    this = (DataManager__readMasterData_d__47_o *)sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v32, v33, v34);
    byte_42E6D62 = 1;
  }
  v127 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
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
        v36 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v36, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v36;
        p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(p__2__current, (System_Int32_array **)v36, v38, v39, v40, v41, v42, v43);
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
          v125 = _4__this;
          v49 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v49, 0LL);
          v50 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          }
          v51 = CatAndMouseGame__MouseGameZ(v50, 0LL);
          v52 = sub_B5D5DC(byte___TypeInfo, 0x4000LL);
          v54 = v52;
          if ( !v52 )
            sub_B5D69C(0LL, v53);
          if ( !v51 )
            sub_B5D69C(v52, v53);
          while ( 1 )
          {
            v55 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v51->klass->vtable._30_unknown.method)(
                    v51,
                    v54,
                    0LL,
                    *(unsigned int *)(v54 + 24),
                    v51->klass->vtable._31_ReadByte.methodPtr);
            if ( (int)v55 < 1 )
              break;
            if ( !v49 )
              sub_B5D69C(v55, v56);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v49->klass->vtable._32_Write.method)(
              v49,
              v54,
              0LL,
              (unsigned int)v55,
              v49->klass->vtable._33_WriteByte.methodPtr);
          }
          v126[v127++] = 198;
          klass = v51->klass;
          if ( *(_WORD *)&v51->klass->_2.bitflags1 )
          {
            v68 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              ++v68;
              p_offset += 4;
              if ( v68 >= *(unsigned __int16 *)&v51->klass->_2.bitflags1 )
                goto LABEL_42;
            }
            v70 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_42:
            v70 = sub_AF54C0(v51, System_IDisposable_TypeInfo, 0LL, (unsigned int)v55);
          }
          v71 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v70)(v51, *(_QWORD *)(v70 + 8));
          v74 = v127;
          if ( v127 && v126[v127 - 1] == 198 )
            v74 = --v127;
          v126[v74] = 212;
          ++v127;
          if ( v50 )
          {
            v75 = v50->klass;
            if ( *(_WORD *)&v50->klass->_2.bitflags1 )
            {
              v76 = 0LL;
              v77 = &v75->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
              {
                ++v76;
                v77 += 4;
                if ( v76 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              v78 = (__int64)(&v75->vtable._0_Equals.method + 2 * *v77);
            }
            else
            {
LABEL_52:
              v78 = sub_AF54C0(v50, System_IDisposable_TypeInfo, 0LL, v73);
            }
            v71 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v78)(v50, *(_QWORD *)(v78 + 8));
          }
          if ( v127 && v126[v127 - 1] == 212 )
            --v127;
          if ( !v49 )
            sub_B5D69C(v71, v72);
          v79 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v49->klass->vtable._37_ToArray.method)(
                                         v49,
                                         v49->klass[1]._1.image);
          _4__this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v79;
          sub_B5D560((BattleServantConfConponent_o *)&_4__this->fields.saveNameList, v79, v80, v81, v82, v83, v84, v85);
          v126[v127++] = 239;
          v87 = v49->klass;
          if ( *(_WORD *)&v49->klass->_2.bitflags1 )
          {
            v88 = 0LL;
            v89 = &v87->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v89 - 1) != System_IDisposable_TypeInfo )
            {
              ++v88;
              v89 += 4;
              if ( v88 >= *(unsigned __int16 *)&v49->klass->_2.bitflags1 )
                goto LABEL_63;
            }
            v90 = (__int64)(&v87->vtable._0_Equals.method + 2 * *v89);
          }
          else
          {
LABEL_63:
            v90 = sub_AF54C0(v49, System_IDisposable_TypeInfo, 0LL, v86);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v90)(v49, *(_QWORD *)(v90 + 8));
          if ( v127 && v126[v127 - 1] == 239 )
            --v127;
          saveNameList = (System_Byte_array *)_4__this->fields.saveNameList;
          v92 = (System_IO_MemoryStream_o *)sub_B5D694(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_45159160(v92, saveNameList, 0LL);
          v93 = (System_IO_BinaryReader_o *)sub_B5D694(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v93, (System_IO_Stream_o *)v92, 0LL);
          saveDataMapList = _4__this->fields.saveDataMapList;
          if ( !saveDataMapList )
            sub_B5D69C(v94, v95);
          size = saveDataMapList->fields._size;
          if ( size >= 1 )
          {
            if ( !v93 )
              sub_B5D69C(v94, v95);
            for ( i = 0; i < size; ++i )
            {
              v100 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v93->klass->vtable._15_ReadInt32.method)(
                       v93,
                       v93->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v92 )
                sub_B5D69C(v100, v101);
              v102 = v100;
              v103 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v92->klass->vtable._12_get_Position.method)(
                       v92,
                       v92->klass->vtable._13_set_Position.methodPtr);
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v92->klass->vtable._28_Seek.method)(
                v92,
                v102,
                1LL,
                v92->klass->vtable._29_SetLength.methodPtr);
              v104 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v125->fields.lastFrameTime;
              v105 = sub_B5D5DC(long___TypeInfo, 2LL);
              if ( !v105 )
                sub_B5D69C(0LL, 0LL);
              v106 = *(_DWORD *)(v105 + 24);
              if ( !v106 )
              {
                v123 = sub_B5D6C8(v105);
                sub_B5D668(v123, 0LL);
              }
              *(_QWORD *)(v105 + 32) = v103;
              if ( v106 == 1 )
              {
                v124 = sub_B5D6C8(v105);
                sub_B5D668(v124, 0LL);
              }
              *(_QWORD *)(v105 + 40) = v102;
              if ( !v104 )
                sub_B5D69C(v105, v105);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v104,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v105,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_long____Add__);
            }
          }
          v126[v127++] = 362;
          if ( v93 )
          {
            v107 = v93->klass;
            if ( *(_WORD *)&v93->klass->_2.bitflags1 )
            {
              v108 = 0LL;
              v109 = &v107->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v109 - 1) != System_IDisposable_TypeInfo )
              {
                ++v108;
                v109 += 4;
                if ( v108 >= *(unsigned __int16 *)&v93->klass->_2.bitflags1 )
                  goto LABEL_83;
              }
              v110 = (__int64)(&v107->vtable._0_Equals.method + 2 * *v109);
            }
            else
            {
LABEL_83:
              v110 = sub_AF54C0(v93, System_IDisposable_TypeInfo, 0LL, v96);
            }
            (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v110)(v93, *(_QWORD *)(v110 + 8));
          }
          v111 = v127;
          if ( v127 && v126[v127 - 1] == 362 )
            v111 = --v127;
          v126[v111] = 376;
          ++v127;
          if ( v92 )
          {
            v112 = v92->klass;
            if ( *(_WORD *)&v92->klass->_2.bitflags1 )
            {
              v113 = 0LL;
              v114 = &v112->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v114 - 1) != System_IDisposable_TypeInfo )
              {
                ++v113;
                v114 += 4;
                if ( v113 >= *(unsigned __int16 *)&v92->klass->_2.bitflags1 )
                  goto LABEL_94;
              }
              v115 = (__int64)(&v112->vtable._0_Equals.method + 2 * *v114);
            }
            else
            {
LABEL_94:
              v115 = sub_AF54C0(v92, System_IDisposable_TypeInfo, 0LL, v96);
            }
            (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v115)(v92, *(_QWORD *)(v115 + 8));
          }
          if ( v127 && v126[v127 - 1] == 376 )
            --v127;
          if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_GC_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
          }
          System_GC__Collect_43893280(0LL);
          v116 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v116, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v116;
          v58 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
          sub_B5D560(v58, (System_Int32_array **)v116, v117, v118, v119, v120, v121, v122);
          v65 = 2;
LABEL_104:
          *(_DWORD *)&v58[-1].fields.isOpenAfter = v65;
          return 1;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v57 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v57, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v57;
        v58 = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(v58, (System_Int32_array **)v57, v59, v60, v61, v62, v63, v64);
        v65 = 3;
        goto LABEL_104;
      }
LABEL_32:
      DataManager__ClearSaveDataList(_4__this, 0LL);
      v66 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v66 = DataManager_TypeInfo;
      }
      static_fields = v66->static_fields;
      result = 0;
      v47 = 5;
LABEL_36:
      static_fields->readMasterDataResult = v47;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_112;
    case 2:
      v4->fields.__1__state = -1;
      v45 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v45 = DataManager_TypeInfo;
      }
      static_fields = v45->static_fields;
      result = 0;
      v47 = 1;
      goto LABEL_36;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
LABEL_112:
        sub_B5D69C(this, method);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v2; // w2
  __int64 v3; // x3
  DataManager__readMasterVersion_d__46_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t _1__state; // w8
  DataManager_o *_4__this; // x20
  UnityEngine_WaitForEndOfFrame_o *v10; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  bool result; // w0
  bool MasterVersionFile; // w0
  DataManager_c *v20; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v22; // w9

  v4 = this;
  if ( (byte_42E6D63 & 1) == 0 )
  {
    sub_B5D5C4(&DataManager_TypeInfo, (_DWORD)method, v2, v3);
    this = (DataManager__readMasterVersion_d__46_o *)sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5, v6, v7);
    byte_42E6D63 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
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
        v10 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v10, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v10;
        p__2__current = (BattleServantConfConponent_o *)&v4->fields.__2__current;
        sub_B5D560(p__2__current, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      goto LABEL_12;
    }
LABEL_23:
    sub_B5D69C(this, method);
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
LABEL_12:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, 0LL);
  v20 = DataManager_TypeInfo;
  if ( MasterVersionFile )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v20 = DataManager_TypeInfo;
    }
    static_fields = v20->static_fields;
    result = 0;
    v22 = 1;
  }
  else
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v20 = DataManager_TypeInfo;
    }
    static_fields = v20->static_fields;
    result = 0;
    v22 = 5;
  }
  static_fields->readMasterVersionResult = v22;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  int v147; // w1
  int v148; // w2
  __int64 v149; // x3
  int v150; // w1
  int v151; // w2
  __int64 v152; // x3
  int v153; // w1
  int v154; // w2
  __int64 v155; // x3
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  int v159; // w1
  int v160; // w2
  __int64 v161; // x3
  int v162; // w1
  int v163; // w2
  __int64 v164; // x3
  int v165; // w1
  int v166; // w2
  __int64 v167; // x3
  int v168; // w1
  int v169; // w2
  __int64 v170; // x3
  int v171; // w1
  int v172; // w2
  __int64 v173; // x3
  int v174; // w1
  int v175; // w2
  __int64 v176; // x3
  int v177; // w1
  int v178; // w2
  __int64 v179; // x3
  int v180; // w1
  int v181; // w2
  __int64 v182; // x3
  int v183; // w1
  int v184; // w2
  __int64 v185; // x3
  int v186; // w1
  int v187; // w2
  __int64 v188; // x3
  int v189; // w1
  int v190; // w2
  __int64 v191; // x3
  int v192; // w1
  int v193; // w2
  __int64 v194; // x3
  int v195; // w1
  int v196; // w2
  __int64 v197; // x3
  int v198; // w1
  int v199; // w2
  __int64 v200; // x3
  int v201; // w1
  int v202; // w2
  __int64 v203; // x3
  int v204; // w1
  int v205; // w2
  __int64 v206; // x3
  int v207; // w1
  int v208; // w2
  __int64 v209; // x3
  int v210; // w1
  int v211; // w2
  __int64 v212; // x3
  struct DataManager_o *_4__this; // x20
  DataManager_c *v214; // x0
  bool result; // w0
  int32_t *v216; // x21
  int v217; // w8
  MasterDataUnpakcer_o *v218; // x21
  __int64 v219; // x0
  __int64 v220; // x1
  System_Int32_array **v221; // x0
  System_String_array **v222; // x2
  System_String_array **v223; // x3
  System_Boolean_array **v224; // x4
  System_Int32_array **v225; // x5
  System_Int32_array *v226; // x6
  System_Int32_array *v227; // x7
  UnityEngine_WaitForEndOfFrame_o *v228; // x20
  BattleServantConfConponent_o *v229; // x19
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  int v236; // w8
  System_Int32_array **dataMapObject_5__7; // x8
  __int64 v238; // x11
  System_Int32_array **v239; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  __int64 v241; // x8
  System_String_o *CachePath; // x21
  System_String_array **v243; // x2
  System_String_array **v244; // x3
  System_Boolean_array **v245; // x4
  System_Int32_array **v246; // x5
  System_Int32_array *v247; // x6
  System_Int32_array *v248; // x7
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  __int64 v261; // x1
  DataManager_c *v262; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v264; // x21
  System_Int32_array **v265; // x0
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  System_String_array **v272; // x2
  System_String_array **v273; // x3
  System_Boolean_array **v274; // x4
  System_Int32_array **v275; // x5
  System_Int32_array *v276; // x6
  System_Int32_array *v277; // x7
  DataManager_c *v278; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v280; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v282; // x2
  System_String_array **v283; // x3
  System_Boolean_array **v284; // x4
  System_Int32_array **v285; // x5
  System_Int32_array *v286; // x6
  System_Int32_array *v287; // x7
  System_Byte_array *cryptBytes_5__8; // x22
  System_Int32_array **v289; // x0
  System_String_array **v290; // x2
  System_String_array **v291; // x3
  System_Boolean_array **v292; // x4
  System_Int32_array **v293; // x5
  System_Int32_array *v294; // x6
  System_Int32_array *v295; // x7
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  UnityEngine_WaitForEndOfFrame_o *v302; // x20
  System_String_array **v303; // x2
  System_String_array **v304; // x3
  System_Boolean_array **v305; // x4
  System_Int32_array **v306; // x5
  System_Int32_array *v307; // x6
  System_Int32_array *v308; // x7
  System_Func_bool__o *v309; // x21
  UnityEngine_WaitUntil_o *v310; // x20
  System_String_array **v311; // x2
  System_String_array **v312; // x3
  System_Boolean_array **v313; // x4
  System_Int32_array **v314; // x5
  System_Int32_array *v315; // x6
  System_Int32_array *v316; // x7
  UnityEngine_WaitForEndOfFrame_o *v317; // x20
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  UnityEngine_WaitForEndOfFrame_o *v324; // x20
  System_String_array **v325; // x2
  System_String_array **v326; // x3
  System_Boolean_array **v327; // x4
  System_Int32_array **v328; // x5
  System_Int32_array *v329; // x6
  System_Int32_array *v330; // x7
  int v331; // w8
  int32_t *p_i_5__9; // x23
  DataManager_c *v333; // x8
  struct DataManager_StaticFields *v334; // x8
  int v335; // w9
  Il2CppObject *v336; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  System_String_array **v338; // x2
  System_String_array **v339; // x3
  System_Boolean_array **v340; // x4
  System_Int32_array **v341; // x5
  System_Int32_array *v342; // x6
  System_Int32_array *v343; // x7
  System_String_array **v344; // x2
  System_String_array **v345; // x3
  System_Boolean_array **v346; // x4
  System_Int32_array **v347; // x5
  System_Int32_array *v348; // x6
  System_Int32_array *v349; // x7
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v350; // x8
  __int64 i_5__9; // x9
  __int64 v352; // x8
  System_Int32_array **v353; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  System_String_array **v355; // x2
  System_String_array **v356; // x3
  System_Boolean_array **v357; // x4
  System_Int32_array **v358; // x5
  System_Int32_array *v359; // x6
  System_Int32_array *v360; // x7
  __int64 v361; // x0
  __int64 v362; // x1
  struct DataManager___c__DisplayClass49_0_o *v363; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *dataMapDict_5__6; // x0
  System_Int32_array **Item; // x0
  System_String_array **v366; // x2
  System_String_array **v367; // x3
  System_Boolean_array **v368; // x4
  System_Int32_array **v369; // x5
  System_Int32_array *v370; // x6
  System_Int32_array *v371; // x7
  struct DataManager___c__DisplayClass49_0_o *v372; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *saveDataMapList; // x22
  DataManager__updateMasterData_d__49_o *v375; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v376; // x23
  BattleServantConfConponent_o *p_dataMap_5__10; // x22
  System_String_array **v378; // x2
  System_String_array **v379; // x3
  System_Boolean_array **v380; // x4
  System_Int32_array **v381; // x5
  System_Int32_array *v382; // x6
  System_Int32_array *v383; // x7
  UnityEngine_WaitForEndOfFrame_o *v384; // x20
  System_String_array **v385; // x2
  System_String_array **v386; // x3
  System_Boolean_array **v387; // x4
  System_Int32_array **v388; // x5
  System_Int32_array *v389; // x6
  System_Int32_array *v390; // x7
  ManagerConfig_c *v391; // x0
  System_String_array **v392; // x2
  System_String_array **v393; // x3
  System_Boolean_array **v394; // x4
  System_Int32_array **v395; // x5
  System_Int32_array *v396; // x6
  System_Int32_array *v397; // x7
  System_String_array **v398; // x2
  System_String_array **v399; // x3
  System_Boolean_array **v400; // x4
  System_Int32_array **v401; // x5
  System_Int32_array *v402; // x6
  System_Int32_array *v403; // x7
  struct System_Collections_Generic_List_long____o *v404; // x8
  System_Collections_Generic_List_int__o *v405; // x22
  System_String_array **v406; // x2
  System_String_array **v407; // x3
  System_Boolean_array **v408; // x4
  System_Int32_array **v409; // x5
  System_Int32_array *v410; // x6
  System_Int32_array *v411; // x7
  ManagerConfig_c *v412; // x0
  __int64 v413; // x27
  System_String_array **v414; // x2
  System_String_array **v415; // x3
  System_Boolean_array **v416; // x4
  System_Int32_array **v417; // x5
  System_Int32_array *v418; // x6
  System_Int32_array *v419; // x7
  System_Int32_array **v420; // x23
  System_String_array **v421; // x2
  System_String_array **v422; // x3
  System_Boolean_array **v423; // x4
  System_Int32_array **v424; // x5
  System_Int32_array *v425; // x6
  System_Int32_array *v426; // x7
  System_Int32_array **v427; // x23
  System_String_array **v428; // x2
  System_String_array **v429; // x3
  System_Boolean_array **v430; // x4
  System_Int32_array **v431; // x5
  System_Int32_array *v432; // x6
  System_Int32_array *v433; // x7
  System_Int32_array **v434; // x23
  System_String_array **v435; // x2
  System_String_array **v436; // x3
  System_Boolean_array **v437; // x4
  System_Int32_array **v438; // x5
  System_Int32_array *v439; // x6
  System_Int32_array *v440; // x7
  System_Int32_array **v441; // x23
  System_String_array **v442; // x2
  System_String_array **v443; // x3
  System_Boolean_array **v444; // x4
  System_Int32_array **v445; // x5
  System_Int32_array *v446; // x6
  System_Int32_array *v447; // x7
  System_Int32_array **v448; // x23
  System_String_array **v449; // x2
  System_String_array **v450; // x3
  System_Boolean_array **v451; // x4
  System_Int32_array **v452; // x5
  System_Int32_array *v453; // x6
  System_Int32_array *v454; // x7
  System_Int32_array **v455; // x23
  System_String_array **v456; // x2
  System_String_array **v457; // x3
  System_Boolean_array **v458; // x4
  System_Int32_array **v459; // x5
  System_Int32_array *v460; // x6
  System_Int32_array *v461; // x7
  System_Int32_array **v462; // x23
  System_String_array **v463; // x2
  System_String_array **v464; // x3
  System_Boolean_array **v465; // x4
  System_Int32_array **v466; // x5
  System_Int32_array *v467; // x6
  System_Int32_array *v468; // x7
  System_Int32_array **v469; // x23
  __int64 v470; // x8
  __int64 v471; // x28
  DataMasterBase_o *v472; // x23
  __int64 v473; // x24
  System_String_array **v474; // x2
  System_String_array **v475; // x3
  System_Boolean_array **v476; // x4
  System_Int32_array **v477; // x5
  System_Int32_array *v478; // x6
  System_Int32_array *v479; // x7
  System_Int32_array **MasterName_k__BackingField; // x1
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *v481; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v482; // x26
  const MethodInfo_234BB7C *v483; // x3
  __int64 v484; // x26
  Il2CppObject *saveNameList; // x25
  int32_t v486; // w24
  __int64 v487; // x8
  const MethodInfo_234BB7C *v488; // x3
  __int64 v489; // x26
  __int64 v490; // x8
  UnityEngine_WaitForEndOfFrame_o *v491; // x20
  System_String_array **v492; // x2
  System_String_array **v493; // x3
  System_Boolean_array **v494; // x4
  System_Int32_array **v495; // x5
  System_Int32_array *v496; // x6
  System_Int32_array *v497; // x7
  ManagerConfig_c *v498; // x0
  Il2CppObject *v499; // x22
  int v500; // w8
  System_String_array **v501; // x2
  System_String_array **v502; // x3
  System_Boolean_array **v503; // x4
  System_Int32_array **v504; // x5
  System_Int32_array *v505; // x6
  System_Int32_array *v506; // x7
  UnityEngine_WaitForEndOfFrame_o *v507; // x20
  System_String_array **v508; // x2
  System_String_array **v509; // x3
  System_Boolean_array **v510; // x4
  System_Int32_array **v511; // x5
  System_Int32_array *v512; // x6
  System_Int32_array *v513; // x7
  DataManager_c *v514; // x8
  UnityEngine_WaitForEndOfFrame_o *v515; // x20
  System_String_array **v516; // x2
  System_String_array **v517; // x3
  System_Boolean_array **v518; // x4
  System_Int32_array **v519; // x5
  System_Int32_array *v520; // x6
  System_Int32_array *v521; // x7
  UnityEngine_WaitForEndOfFrame_o *v522; // x20
  System_String_array **v523; // x2
  System_String_array **v524; // x3
  System_Boolean_array **v525; // x4
  System_Int32_array **v526; // x5
  System_Int32_array *v527; // x6
  System_Int32_array *v528; // x7
  UnityEngine_WaitForEndOfFrame_o *v529; // x20
  System_String_array **v530; // x2
  System_String_array **v531; // x3
  System_Boolean_array **v532; // x4
  System_Int32_array **v533; // x5
  System_Int32_array *v534; // x6
  System_Int32_array *v535; // x7
  __int64 v536; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v537; // x9
  DataManager_c *v538; // x8
  UnityEngine_WaitForEndOfFrame_o *v539; // x20
  System_String_array **v540; // x2
  System_String_array **v541; // x3
  System_Boolean_array **v542; // x4
  System_Int32_array **v543; // x5
  System_Int32_array *v544; // x6
  System_Int32_array *v545; // x7
  __int64 v546; // x0
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-F0h]
  System_Nullable_long__o v548; // [xsp+10h] [xbp-E0h] BYREF
  System_Nullable_long__o v549; // [xsp+20h] [xbp-D0h] BYREF
  int v550; // [xsp+30h] [xbp-C0h]
  int v551; // [xsp+78h] [xbp-78h]
  int v552; // [xsp+88h] [xbp-68h]
  bool lockTaken; // [xsp+94h] [xbp-5Ch] BYREF
  System_Nullable_long__o v554; // 0:x0.16
  System_Nullable_long__o v555; // 0:x0.16

  v8 = this;
  if ( (byte_42E6D64 & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Convert_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantProfileMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventServantMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantClassMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantCommentMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantProfileMaster___, v36, v37, v38);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v39, v40, v41);
    sub_B5D5C4(&Method_DataManager__updateMasterData_b__49_0__, v42, v43, v44);
    sub_B5D5C4(&DataManager_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&DataMasterBase___TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v51, v52, v53);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v54, v55, v56);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v57, v58, v59);
    sub_B5D5C4(&EventRandomMissionClearManager_TypeInfo, v60, v61, v62);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v63, v64, v65);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v66, v67, v68);
    sub_B5D5C4(&System_GC_TypeInfo, v69, v70, v71);
    sub_B5D5C4(&ImageLimitCount_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&LastUsedDeckNumberManager_TypeInfo, v75, v76, v77);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____Add__, v78, v79, v80);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v81, v82, v83);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v84, v85, v86);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Clear__, v87, v88, v89);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____Clear__, v90, v91, v92);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v93, v94, v95);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__FindIndex__, v96, v97, v98);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v99, v100, v101);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v102, v103, v104);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____get_Count__, v105, v106, v107);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____get_Item__, v108, v109, v110);
    sub_B5D5C4(&Method_System_Collections_Generic_List_long____set_Item__, v111, v112, v113);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v114, v115, v116);
    sub_B5D5C4(&LogoMain_TypeInfo, v117, v118, v119);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v120, v121, v122);
    sub_B5D5C4(&MasterDataUnpakcer_TypeInfo, v123, v124, v125);
    sub_B5D5C4(&MaterialBranchRouteManager_TypeInfo, v126, v127, v128);
    sub_B5D5C4(&MaterialGroupClearHistoryManager_TypeInfo, v129, v130, v131);
    sub_B5D5C4(&MaterialServantLimitCountManager_TypeInfo, v132, v133, v134);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v135, v136, v137);
    sub_B5D5C4(&Method_System_Nullable_long___ctor__, v138, v139, v140);
    sub_B5D5C4(&OtherUserNewManager_TypeInfo, v141, v142, v143);
    sub_B5D5C4(&Method_System_Predicate_string___ctor__, v144, v145, v146);
    sub_B5D5C4(&System_Predicate_string__TypeInfo, v147, v148, v149);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v150, v151, v152);
    sub_B5D5C4(&ServantProfileEventJoinManager_TypeInfo, v153, v154, v155);
    sub_B5D5C4(&ServantProfileLimitCountManager_TypeInfo, v156, v157, v158);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v159, v160, v161);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v162, v163, v164);
    sub_B5D5C4(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v165, v166, v167);
    sub_B5D5C4(&DataManager___c__DisplayClass49_0_TypeInfo, v168, v169, v170);
    sub_B5D5C4(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__2__, v171, v172, v173);
    sub_B5D5C4(&DataManager___c__DisplayClass49_1_TypeInfo, v174, v175, v176);
    sub_B5D5C4(&UserCommandCodeCollectionManager_TypeInfo, v177, v178, v179);
    sub_B5D5C4(&UserCommandCodeNewManager_TypeInfo, v180, v181, v182);
    sub_B5D5C4(&UserEquipNewManager_TypeInfo, v183, v184, v185);
    sub_B5D5C4(&UserMissionProgressManager_TypeInfo, v186, v187, v188);
    sub_B5D5C4(&UserServantCollectionManager_TypeInfo, v189, v190, v191);
    sub_B5D5C4(&UserServantLockManager_TypeInfo, v192, v193, v194);
    sub_B5D5C4(&UserServantNewManager_TypeInfo, v195, v196, v197);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v198, v199, v200);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v201, v202, v203);
    sub_B5D5C4(&WarBoardMessageHistoryManager_TypeInfo, v204, v205, v206);
    sub_B5D5C4(&WarBoardMovieHistoryManager_TypeInfo, v207, v208, v209);
    this = (DataManager__updateMasterData_d__49_o *)sub_B5D5C4(&StringLiteral_11718/*"SCRIPT"*/, v210, v211, v212);
    byte_42E6D64 = 1;
  }
  lockTaken = 0;
  v552 = 0;
  v551 = 0;
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
      v241 = *(_QWORD *)&_4__this->fields.lastFrameTime;
      if ( !v241 )
        goto LABEL_302;
      v8->fields._saveDataCount_5__3 = *(_DWORD *)(v241 + 24);
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
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, 0LL, v243, v244, v245, v246, v247, v248);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v249,
        v250,
        v251,
        v252,
        v253,
        v254);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v255, v256, v257, v258, v259, v260);
      v262 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v262 = DataManager_TypeInfo;
      }
      updateData = v262->static_fields->updateData;
      if ( !updateData )
        sub_B5D69C(0LL, v261);
      v264 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v265 = (System_Int32_array **)System_Convert__FromBase64String(v264, 0LL);
      v8->fields._cryptBytes_5__8 = (struct System_Byte_array *)v265;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, v265, v266, v267, v268, v269, v270, v271);
      v278 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v278 = DataManager_TypeInfo;
      }
      static_fields = v278->static_fields;
      static_fields->updateData = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&static_fields->updateData, 0LL, v272, v273, v274, v275, v276, v277);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43893280(0LL);
      v280 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v280, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v280;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(p__2__current, (System_Int32_array **)v280, v282, v283, v284, v285, v286, v287);
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
      v289 = (System_Int32_array **)CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_B5D69C(v289, v289);
      _4__this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v289;
      sub_B5D560(
        (BattleServantConfConponent_o *)&_4__this->fields.saveNameList,
        v289,
        v290,
        v291,
        v292,
        v293,
        v294,
        v295);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v296, v297, v298, v299, v300, v301);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43893280(0LL);
      v302 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v302, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v302;
      v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(v229, (System_Int32_array **)v302, v303, v304, v305, v306, v307, v308);
      v236 = 2;
      goto LABEL_88;
    case 2:
      v8->fields.__1__state = -1;
      v218 = (MasterDataUnpakcer_o *)sub_B5D694(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v218, 0LL);
      if ( !_4__this )
        sub_B5D69C(v219, v220);
      if ( !v218 )
        sub_B5D69C(v219, v220);
      v221 = (System_Int32_array **)MasterDataUnpakcer__Unpack_31013520(
                                      v218,
                                      (System_Byte_array *)_4__this->fields.saveNameList,
                                      0LL);
      v8->fields._dataMapObject_5__7 = (Il2CppObject *)v221;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7,
        v221,
        v222,
        v223,
        v224,
        v225,
        v226,
        v227);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43893280(0LL);
      v228 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v228, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v228;
      v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B5D560(v229, (System_Int32_array **)v228, v230, v231, v232, v233, v234, v235);
      v236 = 3;
      goto LABEL_88;
    case 3:
      dataMapObject_5__7 = (System_Int32_array **)v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7
        && (v238 = *(&System_Collections_Generic_Dictionary_string__long____TypeInfo->_2.bitflags2 + 1),
            LOBYTE((*dataMapObject_5__7)->m_Items[68]) >= (unsigned int)v238) )
      {
        if ( *(System_Collections_Generic_Dictionary_string__long____c **)(*(_QWORD *)&(*dataMapObject_5__7)->m_Items[43]
                                                                         + 8 * v238
                                                                         - 8) == System_Collections_Generic_Dictionary_string__long____TypeInfo )
          v239 = dataMapObject_5__7;
        else
          v239 = 0LL;
      }
      else
      {
        v239 = 0LL;
      }
      v8->fields._dataMapDict_5__6 = (struct System_Collections_Generic_Dictionary_string__long____o *)v239;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, v239, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_302;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v324 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v324, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v324;
        v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(v229, (System_Int32_array **)v324, v325, v326, v327, v328, v329, v330);
        v236 = 4;
        goto LABEL_88;
      }
LABEL_82:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_89;
      v331 = 0;
      v8->fields._i_5__9 = 0;
      p_i_5__9 = &v8->fields._i_5__9;
      while ( 2 )
      {
        if ( v331 < v8->fields._dataListCount_5__2 )
        {
          v336 = (Il2CppObject *)sub_B5D694(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v336, 0LL);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v336;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
          sub_B5D560(
            (BattleServantConfConponent_o *)&v8->fields.__8__1,
            (System_Int32_array **)v336,
            v338,
            v339,
            v340,
            v341,
            v342,
            v343);
          v350 = _4__this->fields.lookup;
          if ( !v350 )
            goto LABEL_302;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= LODWORD(v350->fields.entries) )
            goto LABEL_303;
          v352 = *((_QWORD *)&v350->fields.count + i_5__9);
          if ( !v352 )
            goto LABEL_302;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_302;
          v353 = *(System_Int32_array ***)(v352 + 24);
          *(_QWORD *)&this->fields.__1__state = v353;
          sub_B5D560((BattleServantConfConponent_o *)&this->fields, v353, v344, v345, v346, v347, v348, v349);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_302;
          this = (DataManager__updateMasterData_d__49_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_302;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                 (System_Xml_XmlQualifiedName_o *)_8__1->fields.masterName,
                 (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0LL;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10,
              0LL,
              v355,
              v356,
              v357,
              v358,
              v359,
              v360);
            v363 = v8->fields.__8__1;
            if ( !v363 )
              sub_B5D69C(v361, v362);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_B5D69C(0LL, v362);
            Item = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            dataMapDict_5__6,
                                            (System_Type_o *)v363->fields.masterName,
                                            (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10,
              Item,
              v366,
              v367,
              v368,
              v369,
              v370,
              v371);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v529 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v529, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v529;
              v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B5D560(v229, (System_Int32_array **)v529, v530, v531, v532, v533, v534, v535);
              v236 = 5;
              goto LABEL_88;
            }
LABEL_103:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.lockCountObj;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
            v372 = v8->fields.__8__1;
            if ( !v372 || !this )
              goto LABEL_302;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                              (WarBoardManager_TaskList_o *)v372->fields.masterName,
                                                              (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_302;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v514 = DataManager_TypeInfo;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v514 = DataManager_TypeInfo;
                }
                v334 = v514->static_fields;
                result = 0;
                v335 = 6;
                goto LABEL_300;
              }
            }
            saveDataMapList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.saveDataMapList;
            v375 = *p__8__1;
            v376 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_string__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v376,
              (Il2CppObject *)v375,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              (const MethodInfo_2B9320C *)Method_System_Predicate_string___ctor__);
            if ( !saveDataMapList )
              goto LABEL_302;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                                                              saveDataMapList,
                                                              (System_Predicate_T__o *)v376,
                                                              (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_string__FindIndex__);
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
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
              this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
              if ( !this )
                goto LABEL_302;
              p_dataMap_5__10 = (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v8->fields._dataMap_5__10,
                (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_long____Add__);
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
                (const MethodInfo_3056D18 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._isAdd_5__4 = 1;
            v8->fields._dataMap_5__10 = 0LL;
            sub_B5D560(p_dataMap_5__10, 0LL, v378, v379, v380, v381, v382, v383);
            p_i_5__9 = &v8->fields._i_5__9;
          }
          *p__8__1 = 0LL;
          sub_B5D560((BattleServantConfConponent_o *)p__8__1, 0LL, v355, v356, v357, v358, v359, v360);
          v331 = *p_i_5__9 + 1;
          *p_i_5__9 = v331;
          continue;
        }
        break;
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v384 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v384, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v384;
        v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(v229, (System_Int32_array **)v384, v385, v386, v387, v388, v389, v390);
        v236 = 6;
LABEL_88:
        *(_DWORD *)&v229[-1].fields.isOpenAfter = v236;
        return 1;
      }
LABEL_122:
      if ( !v8->fields._isAdd_5__4 )
      {
        v391 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v391 = ManagerConfig_TypeInfo;
        }
        if ( !v391->static_fields->UseMock )
          goto LABEL_89;
      }
      v8->fields._dataMapDict_5__6 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, 0LL, v2, v3, v4, v5, v6, v7);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v392,
        v393,
        v394,
        v395,
        v396,
        v397);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v398, v399, v400, v401, v402, v403);
      if ( !_4__this )
        goto LABEL_302;
LABEL_128:
      v404 = _4__this->fields.saveDataMapList;
      if ( !v404 )
        goto LABEL_302;
      if ( v404->fields._size <= 0 )
      {
LABEL_89:
        v333 = DataManager_TypeInfo;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v333 = DataManager_TypeInfo;
        }
        v334 = v333->static_fields;
        result = 0;
        v335 = 5;
        goto LABEL_300;
      }
      LODWORD(_4__this->fields.masterLoadThreads) = 0;
      v405 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v405,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      v8->fields._loadedIndices_5__5 = v405;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v8->fields._loadedIndices_5__5,
        (System_Int32_array **)v405,
        v406,
        v407,
        v408,
        v409,
        v410,
        v411);
      p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v8->fields._loadedIndices_5__5;
      if ( !v8->fields.isUseTips )
        goto LABEL_201;
      v412 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v412 = ManagerConfig_TypeInfo;
      }
      if ( !System_String__op_Inequality(
              v412->static_fields->ServerDefaultType,
              (System_String_o *)StringLiteral_11718/*"SCRIPT"*/,
              0LL) )
        goto LABEL_201;
      this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_302;
      if ( CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
        goto LABEL_201;
      v413 = sub_B5D5DC(DataMasterBase___TypeInfo, 8LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !v413 )
        goto LABEL_302;
      v420 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v413 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( !*(_DWORD *)(v413 + 24) )
        goto LABEL_303;
      *(_QWORD *)(v413 + 32) = v420;
      sub_B5D560((BattleServantConfConponent_o *)(v413 + 32), v420, v414, v415, v416, v417, v418, v419);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantClassMaster___);
      v427 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v413 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v413 + 24) <= 1u )
        goto LABEL_303;
      *(_QWORD *)(v413 + 40) = v427;
      sub_B5D560((BattleServantConfConponent_o *)(v413 + 40), v427, v421, v422, v423, v424, v425, v426);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCommentMaster___);
      v434 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v413 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v413 + 24) <= 2u )
        goto LABEL_303;
      *(_QWORD *)(v413 + 48) = v434;
      sub_B5D560((BattleServantConfConponent_o *)(v413 + 48), v434, v428, v429, v430, v431, v432, v433);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
      v441 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v413 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v413 + 24) <= 3u )
        goto LABEL_303;
      *(_QWORD *)(v413 + 56) = v441;
      sub_B5D560((BattleServantConfConponent_o *)(v413 + 56), v441, v435, v436, v437, v438, v439, v440);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantProfileMaster___);
      v448 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v413 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v413 + 24) <= 4u )
        goto LABEL_303;
      *(_QWORD *)(v413 + 64) = v448;
      sub_B5D560((BattleServantConfConponent_o *)(v413 + 64), v448, v442, v443, v444, v445, v446, v447);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventServantMaster___);
      v455 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v413 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v413 + 24) <= 5u )
        goto LABEL_303;
      *(_QWORD *)(v413 + 72) = v455;
      sub_B5D560((BattleServantConfConponent_o *)(v413 + 72), v455, v449, v450, v451, v452, v453, v454);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v462 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v413 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v413 + 24) <= 6u )
        goto LABEL_303;
      *(_QWORD *)(v413 + 80) = v462;
      sub_B5D560((BattleServantConfConponent_o *)(v413 + 80), v462, v456, v457, v458, v459, v460, v461);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
      v469 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B5D684(this, *(_QWORD *)(*(_QWORD *)v413 + 64LL));
        if ( !this )
        {
LABEL_233:
          v536 = sub_B5D6BC();
          sub_B5D668(v536, 0LL);
        }
      }
      if ( *(_DWORD *)(v413 + 24) <= 7u )
        goto LABEL_303;
      *(_QWORD *)(v413 + 88) = v469;
      sub_B5D560((BattleServantConfConponent_o *)(v413 + 88), v469, v463, v464, v465, v466, v467, v468);
      v470 = *(_QWORD *)(v413 + 24);
      if ( (int)v470 >= 1 )
      {
        v471 = 0LL;
        while ( (unsigned int)v471 < (unsigned int)v470 )
        {
          v472 = *(DataMasterBase_o **)(v413 + 32 + 8 * v471);
          v473 = sub_B5D694(DataManager___c__DisplayClass49_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v473, 0LL);
          if ( !v472 )
            goto LABEL_302;
          if ( !v473 )
            goto LABEL_302;
          MasterName_k__BackingField = (System_Int32_array **)v472->fields._MasterName_k__BackingField;
          *(_QWORD *)(v473 + 16) = MasterName_k__BackingField;
          sub_B5D560(
            (BattleServantConfConponent_o *)(v473 + 16),
            MasterName_k__BackingField,
            v474,
            v475,
            v476,
            v477,
            v478,
            v479);
          v481 = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.saveDataMapList;
          v482 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_string__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v482,
            (Il2CppObject *)v473,
            Method_DataManager___c__DisplayClass49_1__updateMasterData_b__2__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_string___ctor__);
          if ( !v481 )
            goto LABEL_302;
          this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                                                            v481,
                                                            (System_Predicate_T__o *)v482,
                                                            (const MethodInfo_3057A6C *)Method_System_Collections_Generic_List_string__FindIndex__);
          if ( ((unsigned int)this & 0x80000000) == 0 )
          {
            v484 = *(_QWORD *)&_4__this->fields.lastFrameTime;
            if ( !v484 )
              goto LABEL_302;
            saveNameList = (Il2CppObject *)_4__this->fields.saveNameList;
            v486 = (int)this;
            if ( *(_DWORD *)(v484 + 24) <= (unsigned int)this )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v487 = *(_QWORD *)(*(_QWORD *)(v484 + 16) + 8LL * (int)this + 32);
            if ( !v487 )
              goto LABEL_302;
            if ( !*(_DWORD *)(v487 + 24) )
              break;
            *(_QWORD *)&v554.fields.has_value = *(_QWORD *)(v487 + 32);
            v554.fields.value = (int64_t)&v549;
            v549.fields.value = 0LL;
            *(_QWORD *)&v549.fields.has_value = 0LL;
            System_Nullable_long____ctor(v554, Method_System_Nullable_long___ctor__, v483);
            v489 = *(_QWORD *)&_4__this->fields.lastFrameTime;
            if ( !v489 )
              goto LABEL_302;
            if ( *(_DWORD *)(v489 + 24) <= (unsigned int)v486 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v490 = *(_QWORD *)(*(_QWORD *)(v489 + 16) + 8LL * v486 + 32);
            if ( !v490 )
              goto LABEL_302;
            if ( *(_DWORD *)(v490 + 24) <= 1u )
              break;
            *(_QWORD *)&v555.fields.has_value = *(_QWORD *)(v490 + 40);
            v555.fields.value = (int64_t)&v548;
            v548.fields.value = 0LL;
            *(_QWORD *)&v548.fields.has_value = 0LL;
            System_Nullable_long____ctor(v555, Method_System_Nullable_long___ctor__, v488);
            DataMasterBase__Replaced(v472, saveNameList, v549, v548, 0LL);
            this = *p_loadedIndices_5__5;
            if ( !*p_loadedIndices_5__5 )
              goto LABEL_302;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)this,
              v486,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
            ++LODWORD(_4__this->fields.masterLoadThreads);
          }
          v470 = *(_QWORD *)(v413 + 24);
          if ( (int)++v471 >= (int)v470 )
            goto LABEL_185;
        }
LABEL_303:
        v546 = sub_B5D6C8(this);
        sub_B5D668(v546, 0LL);
      }
LABEL_185:
      this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_302;
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)this,
                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
        this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_200:
          *(float *)&_4__this->fields.masterCheckName = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v491 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v491, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v491;
          v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B5D560(v229, (System_Int32_array **)v491, v492, v493, v494, v495, v496, v497);
          v236 = 7;
          goto LABEL_88;
        }
LABEL_302:
        sub_B5D69C(this, method);
      }
LABEL_201:
      DataManager__StartMasterLoadThread(_4__this, v8->fields._saveDataCount_5__3, v8->fields._loadedIndices_5__5, 0LL);
      if ( v8->fields._isAdd_5__4 )
      {
        v498 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v498 = ManagerConfig_TypeInfo;
        }
        if ( !v498->static_fields->UseMock )
        {
          DataManager__DeleteCacheFile(_4__this, 0LL);
          if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
          {
            v522 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v522, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v522;
            v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B5D560(v229, (System_Int32_array **)v522, v523, v524, v525, v526, v527, v528);
            v236 = 8;
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
            v309 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v309,
              (Il2CppObject *)_4__this,
              Method_DataManager__updateMasterData_b__49_0__,
              (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
            v310 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v310, v309, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v310;
            v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B5D560(v229, (System_Int32_array **)v310, v311, v312, v313, v314, v315, v316);
            v236 = 9;
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
          v317 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v317, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v317;
          v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B5D560(v229, (System_Int32_array **)v317, v318, v319, v320, v321, v322, v323);
          v236 = 10;
          goto LABEL_88;
        }
LABEL_206:
        v499 = *(Il2CppObject **)&_4__this->fields.nowLoadCount;
        lockTaken = 0;
        System_Threading_Monitor__Enter_15675620(v499, &lockTaken, 0LL);
        if ( SLODWORD(_4__this->fields.masterLoadThreads) >= v8->fields._saveDataCount_5__3 )
          v500 = 1739;
        else
          v500 = 1709;
        v550 = v500;
        v551 = 1;
        if ( lockTaken )
          System_Threading_Monitor__Exit(v499, 0LL);
        if ( v550 == 1709 )
        {
          v551 = 0;
        }
        else if ( v550 == 1739 )
        {
          v551 = 0;
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
              (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_string__Clear__);
            this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
            if ( this )
            {
              System_Collections_Generic_List_XWeaponTrail_Element___Clear(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
                (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_long____Clear__);
              _4__this->fields.saveNameList = 0LL;
              sub_B5D560(
                (BattleServantConfConponent_o *)&_4__this->fields.saveNameList,
                0LL,
                v501,
                v502,
                v503,
                v504,
                v505,
                v506);
              if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_GC_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              }
              System_GC__Collect_43893280(0LL);
              v507 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v507, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v507;
              v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B5D560(v229, (System_Int32_array **)v507, v508, v509, v510, v511, v512, v513);
              v236 = 12;
              goto LABEL_88;
            }
          }
          goto LABEL_302;
        }
        v515 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v515, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v515;
        v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B5D560(v229, (System_Int32_array **)v515, v516, v517, v518, v519, v520, v521);
        v236 = 11;
        goto LABEL_88;
      }
      v214 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v214 = DataManager_TypeInfo;
      }
      v214->static_fields->updateMasterDataResult = 4;
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
      v216 = &v8->fields._i_5__9;
      v217 = 0;
      v8->fields.__1__state = -1;
      goto LABEL_241;
    case 0xD:
      v216 = &v8->fields._i_5__9;
      v8->fields.__1__state = -1;
      while ( 1 )
      {
        v217 = *v216 + 1;
        *v216 = v217;
LABEL_241:
        if ( v217 >= v8->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_302;
        v537 = _4__this->fields.lookup;
        if ( !v537 )
          goto LABEL_302;
        if ( (unsigned int)v217 >= LODWORD(v537->fields.entries) )
          goto LABEL_303;
        this = (DataManager__updateMasterData_d__49_o *)*((_QWORD *)&v537->fields.count + v217);
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
            v539 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v539, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v539;
            v229 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B5D560(v229, (System_Int32_array **)v539, v540, v541, v542, v543, v544, v545);
            v236 = 13;
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
      v538 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v538 = DataManager_TypeInfo;
      }
      v334 = v538->static_fields;
      result = 0;
      v335 = 1;
LABEL_300:
      v334->updateMasterDataResult = v335;
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  DataManager_o *_4__this; // x20
  DataManager_c *v46; // x0
  struct System_String_o **p_cryptString_5__3; // x21
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
  __int64 v60; // x1
  DataManager_c *v61; // x0
  __int64 webViewData; // x0
  System_Int32_array **v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  DataManager_c *v76; // x0
  struct DataManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Item; // x0
  __int64 v79; // x1
  UnityEngine_WaitForEndOfFrame_o *v80; // x20
  Il2CppObject **p__2__current; // x19
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  bool result; // w0
  Il2CppObject **p_dataObject_5__4; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **p_data_5__2; // x21
  System_String_o *v91; // x21
  System_Byte_array *v92; // x21
  Il2CppObject *v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  UnityEngine_WaitForEndOfFrame_o *v100; // x20
  Il2CppObject **v101; // x19
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  int v108; // w8
  Il2CppObject *v109; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_23840980; // x0
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  UnityEngine_WaitForEndOfFrame_o *v117; // x20
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_String_o *v124; // x20
  System_String_o *v125; // x22
  UnityEngine_Purchasing_IStoreExtension_o *v126; // x0
  System_Collections_Generic_Dictionary_string__object__o *v127; // x23
  __int64 v128; // x9
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7

  if ( (byte_42E6D65 & 1) == 0 )
  {
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&System_Convert_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&JsonManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&NetworkManager_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_17883/*"contactURL"*/, v33, v34, v35);
    sub_B5D5C4(&StringLiteral_18966/*"filePass"*/, v36, v37, v38);
    sub_B5D5C4(&StringLiteral_16819/*"baseURL"*/, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_1/*""*/, v42, v43, v44);
    byte_42E6D65 = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v46 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v46 = DataManager_TypeInfo;
      }
      if ( !v46->static_fields->webViewData )
        return 0;
      this->fields._data_5__2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      p_cryptString_5__3 = &this->fields._cryptString_5__3;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields._cryptString_5__3, 0LL, v48, v49, v50, v51, v52, v53);
      this->fields._dataObject_5__4 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields._dataObject_5__4, 0LL, v54, v55, v56, v57, v58, v59);
      v61 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v61 = DataManager_TypeInfo;
      }
      webViewData = (__int64)v61->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_61;
      v63 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)webViewData + 360LL))(
                                     webViewData,
                                     *(_QWORD *)(*(_QWORD *)webViewData + 368LL));
      *p_cryptString_5__3 = (struct System_String_o *)v63;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields._cryptString_5__3, v63, v64, v65, v66, v67, v68, v69);
      v76 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v76 = DataManager_TypeInfo;
      }
      static_fields = v76->static_fields;
      static_fields->webViewData = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)&static_fields->webViewData, 0LL, v70, v71, v72, v73, v74, v75);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v80 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v80, 0LL);
        this->fields.__2__current = (Il2CppObject *)v80;
        p__2__current = &this->fields.__2__current;
        sub_B5D560(
          (BattleServantConfConponent_o *)p__2__current,
          (System_Int32_array **)v80,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_21:
      v91 = *p_cryptString_5__3;
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v92 = System_Convert__FromBase64String(v91, 0LL);
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      }
      v93 = CatAndMouseGame__MouseGame2MsgPack(v92, 0, 0LL);
      this->fields._dataObject_5__4 = v93;
      p_dataObject_5__4 = &this->fields._dataObject_5__4;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._dataObject_5__4,
        (System_Int32_array **)v93,
        v94,
        v95,
        v96,
        v97,
        v98,
        v99);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v100 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v100, 0LL);
        this->fields.__2__current = (Il2CppObject *)v100;
        v101 = &this->fields.__2__current;
        sub_B5D560(
          (BattleServantConfConponent_o *)v101,
          (System_Int32_array **)v100,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
        v108 = 2;
LABEL_36:
        *((_DWORD *)v101 - 2) = v108;
        return 1;
      }
LABEL_30:
      v109 = *p_dataObject_5__4;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      Dictionary_23840980 = JsonManager__getDictionary_23840980(v109, 0LL);
      this->fields._data_5__2 = Dictionary_23840980;
      p_data_5__2 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&this->fields._data_5__2;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._data_5__2,
        (System_Int32_array **)Dictionary_23840980,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v117 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v117, 0LL);
        this->fields.__2__current = (Il2CppObject *)v117;
        v101 = &this->fields.__2__current;
        sub_B5D560(
          (BattleServantConfConponent_o *)v101,
          (System_Int32_array **)v117,
          v118,
          v119,
          v120,
          v121,
          v122,
          v123);
        v108 = 3;
        goto LABEL_36;
      }
LABEL_37:
      if ( !*p_data_5__2 )
        goto LABEL_57;
      v124 = (System_String_o *)StringLiteral_1/*""*/;
      v125 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              *p_data_5__2,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_16819/*"baseURL"*/,
              (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_42;
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      Item = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                                                                                             (System_Type_o *)StringLiteral_16819/*"baseURL"*/,
                                                                                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v125 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                  Item,
                                  Item->klass->vtable._4_unknown.methodPtr);
LABEL_42:
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              Item,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_17883/*"contactURL"*/,
              (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_47;
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      Item = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                                                                                             (System_Type_o *)StringLiteral_17883/*"contactURL"*/,
                                                                                             (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v124 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                  Item,
                                  Item->klass->vtable._4_unknown.methodPtr);
LABEL_47:
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             Item,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_18966/*"filePass"*/,
             (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = *p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_59:
          sub_B5D69C(Item, v79);
        v126 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                 (System_Type_o *)StringLiteral_18966/*"filePass"*/,
                 (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v127 = (System_Collections_Generic_Dictionary_string__object__o *)v126;
        if ( v126 )
        {
          v128 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v126->klass->_2.bitflags2 + 1) < (unsigned int)v128
            || (System_Collections_Generic_Dictionary_string__object__c *)v126->klass->_2.typeHierarchy[v128 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            webViewData = sub_B5D990(v126);
LABEL_61:
            sub_B5D69C(webViewData, v60);
          }
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__setupWebViewAddress(v125, v124, v127, 0LL);
      }
LABEL_57:
      this->fields._data_5__2 = 0LL;
      sub_B5D560((BattleServantConfConponent_o *)p_data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._cryptString_5__3,
        0LL,
        v129,
        v130,
        v131,
        v132,
        v133,
        v134);
      this->fields._dataObject_5__4 = 0LL;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._dataObject_5__4,
        0LL,
        v135,
        v136,
        v137,
        v138,
        v139,
        v140);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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