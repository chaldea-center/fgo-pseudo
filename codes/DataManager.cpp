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

  if ( (byte_418906E & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_1/*""*/, v8);
    byte_418906E = 1;
  }
  DataManager_TypeInfo->static_fields->readDataVersion = 0;
  v9 = DataManager_TypeInfo;
  DataManager_TypeInfo->static_fields->readDateVersion = 0LL;
  v9->static_fields->dataVersion = 0;
  v9->static_fields->dateVersion = 0LL;
  static_fields = v9->static_fields;
  static_fields->updateData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->updateData, 0LL, v2, v3, v4, v5, v6, v7);
  v11 = DataManager_TypeInfo->static_fields;
  v11->webViewData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v11->webViewData, 0LL, v12, v13, v14, v15, v16, v17);
  v18 = DataManager_TypeInfo->static_fields;
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  v18->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&v18->serverHash, v19, v20, v21, v22, v23, v24, v25);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  Il2CppObject *v22; // x20
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_418906D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long_____ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_long____TypeInfo, v4);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B2C35C(&object_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager___ctor__, v7);
    byte_418906D = 1;
  }
  LOBYTE(this->fields.datalist) = 1;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v8;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.saveDataMapList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_long_____ctor__);
  *(_QWORD *)&this->fields.lastFrameTime = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.lastFrameTime,
    (System_Int32_array **)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (Il2CppObject *)sub_B2C42C(object_TypeInfo);
  System_Object___ctor(v22, 0LL);
  *(_QWORD *)&this->fields.nowLoadCount = v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nowLoadCount,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_418904B & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, v1);
    byte_418904B = 1;
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

  if ( (byte_418904C & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_418904C = 1;
  }
  if ( System_IO_Directory__Exists(cachePath, 0LL) )
    System_IO_Directory__Delete_44244828(cachePath, 1, 0LL);
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

  if ( (byte_418904A & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, v1);
    byte_418904A = 1;
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

  if ( (byte_4189064 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_4189064 = 1;
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
          (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__),
        (saveDataMapList = *(struct System_Collections_Generic_List_long____o **)&this->fields.lastFrameTime) == 0LL) )
  {
    sub_B2C434(saveDataMapList, method);
  }
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_long____Clear__);
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
  __int64 v473; // x19
  ServantMaster_o *v474; // x20
  __int64 v475; // x0
  __int64 v476; // x1
  System_String_array **v477; // x2
  System_String_array **v478; // x3
  System_Boolean_array **v479; // x4
  System_Int32_array **v480; // x5
  System_Int32_array *v481; // x6
  System_Int32_array *v482; // x7
  _DWORD *v483; // x21
  ServantClassMaster_o *v484; // x20
  System_String_array **v485; // x2
  System_String_array **v486; // x3
  System_Boolean_array **v487; // x4
  System_Int32_array **v488; // x5
  System_Int32_array *v489; // x6
  System_Int32_array *v490; // x7
  ServantCommentMaster_o *v491; // x20
  System_String_array **v492; // x2
  System_String_array **v493; // x3
  System_Boolean_array **v494; // x4
  System_Int32_array **v495; // x5
  System_Int32_array *v496; // x6
  System_Int32_array *v497; // x7
  ServantProfileMaster_o *v498; // x20
  System_String_array **v499; // x2
  System_String_array **v500; // x3
  System_Boolean_array **v501; // x4
  System_Int32_array **v502; // x5
  System_Int32_array *v503; // x6
  System_Int32_array *v504; // x7
  WarMaster_o *v505; // x20
  System_String_array **v506; // x2
  System_String_array **v507; // x3
  System_Boolean_array **v508; // x4
  System_Int32_array **v509; // x5
  System_Int32_array *v510; // x6
  System_Int32_array *v511; // x7
  UserMaster_o *v512; // x20
  System_String_array **v513; // x2
  System_String_array **v514; // x3
  System_Boolean_array **v515; // x4
  System_Int32_array **v516; // x5
  System_Int32_array *v517; // x6
  System_Int32_array *v518; // x7
  UserGameMaster_o *v519; // x20
  System_String_array **v520; // x2
  System_String_array **v521; // x3
  System_Boolean_array **v522; // x4
  System_Int32_array **v523; // x5
  System_Int32_array *v524; // x6
  System_Int32_array *v525; // x7
  TblUserMaster_o *v526; // x20
  System_String_array **v527; // x2
  System_String_array **v528; // x3
  System_Boolean_array **v529; // x4
  System_Int32_array **v530; // x5
  System_Int32_array *v531; // x6
  System_Int32_array *v532; // x7
  UserItemMaster_o *v533; // x20
  System_String_array **v534; // x2
  System_String_array **v535; // x3
  System_Boolean_array **v536; // x4
  System_Int32_array **v537; // x5
  System_Int32_array *v538; // x6
  System_Int32_array *v539; // x7
  UserServantMaster_o *v540; // x20
  System_String_array **v541; // x2
  System_String_array **v542; // x3
  System_Boolean_array **v543; // x4
  System_Int32_array **v544; // x5
  System_Int32_array *v545; // x6
  System_Int32_array *v546; // x7
  UserServantStorageMaster_o *v547; // x20
  System_String_array **v548; // x2
  System_String_array **v549; // x3
  System_Boolean_array **v550; // x4
  System_Int32_array **v551; // x5
  System_Int32_array *v552; // x6
  System_Int32_array *v553; // x7
  UserAccessaryMaster_o *v554; // x20
  System_String_array **v555; // x2
  System_String_array **v556; // x3
  System_Boolean_array **v557; // x4
  System_Int32_array **v558; // x5
  System_Int32_array *v559; // x6
  System_Int32_array *v560; // x7
  UserQuestMaster_o *v561; // x20
  System_String_array **v562; // x2
  System_String_array **v563; // x3
  System_Boolean_array **v564; // x4
  System_Int32_array **v565; // x5
  System_Int32_array *v566; // x6
  System_Int32_array *v567; // x7
  BattleMaster_o *v568; // x20
  System_String_array **v569; // x2
  System_String_array **v570; // x3
  System_Boolean_array **v571; // x4
  System_Int32_array **v572; // x5
  System_Int32_array *v573; // x6
  System_Int32_array *v574; // x7
  OtherUserGameMaster_o *v575; // x20
  System_String_array **v576; // x2
  System_String_array **v577; // x3
  System_Boolean_array **v578; // x4
  System_Int32_array **v579; // x5
  System_Int32_array *v580; // x6
  System_Int32_array *v581; // x7
  TblFriendMaster_o *v582; // x20
  System_String_array **v583; // x2
  System_String_array **v584; // x3
  System_Boolean_array **v585; // x4
  System_Int32_array **v586; // x5
  System_Int32_array *v587; // x6
  System_Int32_array *v588; // x7
  AreaMaster_o *v589; // x20
  System_String_array **v590; // x2
  System_String_array **v591; // x3
  System_Boolean_array **v592; // x4
  System_Int32_array **v593; // x5
  System_Int32_array *v594; // x6
  System_Int32_array *v595; // x7
  ServantCardMaster_o *v596; // x20
  System_String_array **v597; // x2
  System_String_array **v598; // x3
  System_Boolean_array **v599; // x4
  System_Int32_array **v600; // x5
  System_Int32_array *v601; // x6
  System_Int32_array *v602; // x7
  EventMaster_o *v603; // x20
  System_String_array **v604; // x2
  System_String_array **v605; // x3
  System_Boolean_array **v606; // x4
  System_Int32_array **v607; // x5
  System_Int32_array *v608; // x6
  System_Int32_array *v609; // x7
  ItemMaster_o *v610; // x20
  System_String_array **v611; // x2
  System_String_array **v612; // x3
  System_Boolean_array **v613; // x4
  System_Int32_array **v614; // x5
  System_Int32_array *v615; // x6
  System_Int32_array *v616; // x7
  QuestMaster_o *v617; // x20
  System_String_array **v618; // x2
  System_String_array **v619; // x3
  System_Boolean_array **v620; // x4
  System_Int32_array **v621; // x5
  System_Int32_array *v622; // x6
  System_Int32_array *v623; // x7
  QuestAddMaster_o *v624; // x20
  System_String_array **v625; // x2
  System_String_array **v626; // x3
  System_Boolean_array **v627; // x4
  System_Int32_array **v628; // x5
  System_Int32_array *v629; // x6
  System_Int32_array *v630; // x7
  QuestReleaseMaster_o *v631; // x20
  System_String_array **v632; // x2
  System_String_array **v633; // x3
  System_Boolean_array **v634; // x4
  System_Int32_array **v635; // x5
  System_Int32_array *v636; // x6
  System_Int32_array *v637; // x7
  QuestDateRangeMaster_o *v638; // x20
  System_String_array **v639; // x2
  System_String_array **v640; // x3
  System_Boolean_array **v641; // x4
  System_Int32_array **v642; // x5
  System_Int32_array *v643; // x6
  System_Int32_array *v644; // x7
  QuestPhaseMaster_o *v645; // x20
  System_String_array **v646; // x2
  System_String_array **v647; // x3
  System_Boolean_array **v648; // x4
  System_Int32_array **v649; // x5
  System_Int32_array *v650; // x6
  System_Int32_array *v651; // x7
  QuestPhaseDetailMaster_o *v652; // x20
  System_String_array **v653; // x2
  System_String_array **v654; // x3
  System_Boolean_array **v655; // x4
  System_Int32_array **v656; // x5
  System_Int32_array *v657; // x6
  System_Int32_array *v658; // x7
  QuestGroupMaster_o *v659; // x20
  System_String_array **v660; // x2
  System_String_array **v661; // x3
  System_Boolean_array **v662; // x4
  System_Int32_array **v663; // x5
  System_Int32_array *v664; // x6
  System_Int32_array *v665; // x7
  QuestRandomGroupMaster_o *v666; // x20
  System_String_array **v667; // x2
  System_String_array **v668; // x3
  System_Boolean_array **v669; // x4
  System_Int32_array **v670; // x5
  System_Int32_array *v671; // x6
  System_Int32_array *v672; // x7
  QuestConsumeItemMaster_o *v673; // x20
  System_String_array **v674; // x2
  System_String_array **v675; // x3
  System_Boolean_array **v676; // x4
  System_Int32_array **v677; // x5
  System_Int32_array *v678; // x6
  System_Int32_array *v679; // x7
  QuestMessageMaster_o *v680; // x20
  System_String_array **v681; // x2
  System_String_array **v682; // x3
  System_Boolean_array **v683; // x4
  System_Int32_array **v684; // x5
  System_Int32_array *v685; // x6
  System_Int32_array *v686; // x7
  UserQuestInfoMaster_o *v687; // x20
  System_String_array **v688; // x2
  System_String_array **v689; // x3
  System_Boolean_array **v690; // x4
  System_Int32_array **v691; // x5
  System_Int32_array *v692; // x6
  System_Int32_array *v693; // x7
  UserQuestRecordMaster_o *v694; // x20
  System_String_array **v695; // x2
  System_String_array **v696; // x3
  System_Boolean_array **v697; // x4
  System_Int32_array **v698; // x5
  System_Int32_array *v699; // x6
  System_Int32_array *v700; // x7
  ViewQuestInfoMaster_o *v701; // x20
  System_String_array **v702; // x2
  System_String_array **v703; // x3
  System_Boolean_array **v704; // x4
  System_Int32_array **v705; // x5
  System_Int32_array *v706; // x6
  System_Int32_array *v707; // x7
  ViewEnemyMaster_o *v708; // x20
  System_String_array **v709; // x2
  System_String_array **v710; // x3
  System_Boolean_array **v711; // x4
  System_Int32_array **v712; // x5
  System_Int32_array *v713; // x6
  System_Int32_array *v714; // x7
  ViewQuestEnemyInfoMaster_o *v715; // x20
  System_String_array **v716; // x2
  System_String_array **v717; // x3
  System_Boolean_array **v718; // x4
  System_Int32_array **v719; // x5
  System_Int32_array *v720; // x6
  System_Int32_array *v721; // x7
  BlankEarthSpotMaster_o *v722; // x20
  System_String_array **v723; // x2
  System_String_array **v724; // x3
  System_Boolean_array **v725; // x4
  System_Int32_array **v726; // x5
  System_Int32_array *v727; // x6
  System_Int32_array *v728; // x7
  SpotMaster_o *v729; // x20
  System_String_array **v730; // x2
  System_String_array **v731; // x3
  System_Boolean_array **v732; // x4
  System_Int32_array **v733; // x5
  System_Int32_array *v734; // x6
  System_Int32_array *v735; // x7
  SpotImageMaster_o *v736; // x20
  System_String_array **v737; // x2
  System_String_array **v738; // x3
  System_Boolean_array **v739; // x4
  System_Int32_array **v740; // x5
  System_Int32_array *v741; // x6
  System_Int32_array *v742; // x7
  SpotRoadMaster_o *v743; // x20
  System_String_array **v744; // x2
  System_String_array **v745; // x3
  System_Boolean_array **v746; // x4
  System_Int32_array **v747; // x5
  System_Int32_array *v748; // x6
  System_Int32_array *v749; // x7
  SpotPathMaster_o *v750; // x20
  System_String_array **v751; // x2
  System_String_array **v752; // x3
  System_Boolean_array **v753; // x4
  System_Int32_array **v754; // x5
  System_Int32_array *v755; // x6
  System_Int32_array *v756; // x7
  SpotAddMaster_o *v757; // x20
  System_String_array **v758; // x2
  System_String_array **v759; // x3
  System_Boolean_array **v760; // x4
  System_Int32_array **v761; // x5
  System_Int32_array *v762; // x6
  System_Int32_array *v763; // x7
  MapGimmickMaster_o *v764; // x20
  System_String_array **v765; // x2
  System_String_array **v766; // x3
  System_Boolean_array **v767; // x4
  System_Int32_array **v768; // x5
  System_Int32_array *v769; // x6
  System_Int32_array *v770; // x7
  GiftMaster_o *v771; // x20
  System_String_array **v772; // x2
  System_String_array **v773; // x3
  System_Boolean_array **v774; // x4
  System_Int32_array **v775; // x5
  System_Int32_array *v776; // x6
  System_Int32_array *v777; // x7
  GiftAddMaster_o *v778; // x20
  System_String_array **v779; // x2
  System_String_array **v780; // x3
  System_Boolean_array **v781; // x4
  System_Int32_array **v782; // x5
  System_Int32_array *v783; // x6
  System_Int32_array *v784; // x7
  ShopMaster_o *v785; // x20
  System_String_array **v786; // x2
  System_String_array **v787; // x3
  System_Boolean_array **v788; // x4
  System_Int32_array **v789; // x5
  System_Int32_array *v790; // x6
  System_Int32_array *v791; // x7
  StoneShopMaster_o *v792; // x20
  System_String_array **v793; // x2
  System_String_array **v794; // x3
  System_Boolean_array **v795; // x4
  System_Int32_array **v796; // x5
  System_Int32_array *v797; // x6
  System_Int32_array *v798; // x7
  BankShopMaster_o *v799; // x20
  System_String_array **v800; // x2
  System_String_array **v801; // x3
  System_Boolean_array **v802; // x4
  System_Int32_array **v803; // x5
  System_Int32_array *v804; // x6
  System_Int32_array *v805; // x7
  ShopScriptMaster_o *v806; // x20
  System_String_array **v807; // x2
  System_String_array **v808; // x3
  System_Boolean_array **v809; // x4
  System_Int32_array **v810; // x5
  System_Int32_array *v811; // x6
  System_Int32_array *v812; // x7
  StageMaster_o *v813; // x20
  System_String_array **v814; // x2
  System_String_array **v815; // x3
  System_Boolean_array **v816; // x4
  System_Int32_array **v817; // x5
  System_Int32_array *v818; // x6
  System_Int32_array *v819; // x7
  ServantGroupMaster_o *v820; // x20
  System_String_array **v821; // x2
  System_String_array **v822; // x3
  System_Boolean_array **v823; // x4
  System_Int32_array **v824; // x5
  System_Int32_array *v825; // x6
  System_Int32_array *v826; // x7
  ServantLimitMaster_o *v827; // x20
  System_String_array **v828; // x2
  System_String_array **v829; // x3
  System_Boolean_array **v830; // x4
  System_Int32_array **v831; // x5
  System_Int32_array *v832; // x6
  System_Int32_array *v833; // x7
  ServantLimitAddMaster_o *v834; // x20
  System_String_array **v835; // x2
  System_String_array **v836; // x3
  System_Boolean_array **v837; // x4
  System_Int32_array **v838; // x5
  System_Int32_array *v839; // x6
  System_Int32_array *v840; // x7
  ServantSkillMaster_o *v841; // x20
  System_String_array **v842; // x2
  System_String_array **v843; // x3
  System_Boolean_array **v844; // x4
  System_Int32_array **v845; // x5
  System_Int32_array *v846; // x6
  System_Int32_array *v847; // x7
  ServantPassiveSkillMaster_o *v848; // x20
  System_String_array **v849; // x2
  System_String_array **v850; // x3
  System_Boolean_array **v851; // x4
  System_Int32_array **v852; // x5
  System_Int32_array *v853; // x6
  System_Int32_array *v854; // x7
  BgmMaster_o *v855; // x20
  System_String_array **v856; // x2
  System_String_array **v857; // x3
  System_Boolean_array **v858; // x4
  System_Int32_array **v859; // x5
  System_Int32_array *v860; // x6
  System_Int32_array *v861; // x7
  ServantScriptMaster_o *v862; // x20
  System_String_array **v863; // x2
  System_String_array **v864; // x3
  System_Boolean_array **v865; // x4
  System_Int32_array **v866; // x5
  System_Int32_array *v867; // x6
  System_Int32_array *v868; // x7
  NewsMaster_o *v869; // x20
  System_String_array **v870; // x2
  System_String_array **v871; // x3
  System_Boolean_array **v872; // x4
  System_Int32_array **v873; // x5
  System_Int32_array *v874; // x6
  System_Int32_array *v875; // x7
  TelopMaster_o *v876; // x20
  System_String_array **v877; // x2
  System_String_array **v878; // x3
  System_Boolean_array **v879; // x4
  System_Int32_array **v880; // x5
  System_Int32_array *v881; // x6
  System_Int32_array *v882; // x7
  UserExpMaster_o *v883; // x20
  System_String_array **v884; // x2
  System_String_array **v885; // x3
  System_Boolean_array **v886; // x4
  System_Int32_array **v887; // x5
  System_Int32_array *v888; // x6
  System_Int32_array *v889; // x7
  TreasureDvcMaster_o *v890; // x20
  System_String_array **v891; // x2
  System_String_array **v892; // x3
  System_Boolean_array **v893; // x4
  System_Int32_array **v894; // x5
  System_Int32_array *v895; // x6
  System_Int32_array *v896; // x7
  ServantTreasureDvcMaster_o *v897; // x20
  System_String_array **v898; // x2
  System_String_array **v899; // x3
  System_Boolean_array **v900; // x4
  System_Int32_array **v901; // x5
  System_Int32_array *v902; // x6
  System_Int32_array *v903; // x7
  SkillMaster_o *v904; // x20
  System_String_array **v905; // x2
  System_String_array **v906; // x3
  System_Boolean_array **v907; // x4
  System_Int32_array **v908; // x5
  System_Int32_array *v909; // x6
  System_Int32_array *v910; // x7
  SkillLvMaster_o *v911; // x20
  System_String_array **v912; // x2
  System_String_array **v913; // x3
  System_Boolean_array **v914; // x4
  System_Int32_array **v915; // x5
  System_Int32_array *v916; // x6
  System_Int32_array *v917; // x7
  SkillDetailMaster_o *v918; // x20
  System_String_array **v919; // x2
  System_String_array **v920; // x3
  System_Boolean_array **v921; // x4
  System_Int32_array **v922; // x5
  System_Int32_array *v923; // x6
  System_Int32_array *v924; // x7
  CommandSpellMaster_o *v925; // x20
  System_String_array **v926; // x2
  System_String_array **v927; // x3
  System_Boolean_array **v928; // x4
  System_Int32_array **v929; // x5
  System_Int32_array *v930; // x6
  System_Int32_array *v931; // x7
  EquipMaster_o *v932; // x20
  System_String_array **v933; // x2
  System_String_array **v934; // x3
  System_Boolean_array **v935; // x4
  System_Int32_array **v936; // x5
  System_Int32_array *v937; // x6
  System_Int32_array *v938; // x7
  EquipExpMaster_o *v939; // x20
  System_String_array **v940; // x2
  System_String_array **v941; // x3
  System_Boolean_array **v942; // x4
  System_Int32_array **v943; // x5
  System_Int32_array *v944; // x6
  System_Int32_array *v945; // x7
  EquipSkillMaster_o *v946; // x20
  System_String_array **v947; // x2
  System_String_array **v948; // x3
  System_Boolean_array **v949; // x4
  System_Int32_array **v950; // x5
  System_Int32_array *v951; // x6
  System_Int32_array *v952; // x7
  SubEquipMaster_o *v953; // x20
  System_String_array **v954; // x2
  System_String_array **v955; // x3
  System_Boolean_array **v956; // x4
  System_Int32_array **v957; // x5
  System_Int32_array *v958; // x6
  System_Int32_array *v959; // x7
  AccessaryMaster_o *v960; // x20
  System_String_array **v961; // x2
  System_String_array **v962; // x3
  System_Boolean_array **v963; // x4
  System_Int32_array **v964; // x5
  System_Int32_array *v965; // x6
  System_Int32_array *v966; // x7
  UserPresentBoxMaster_o *v967; // x20
  System_String_array **v968; // x2
  System_String_array **v969; // x3
  System_Boolean_array **v970; // x4
  System_Int32_array **v971; // x5
  System_Int32_array *v972; // x6
  System_Int32_array *v973; // x7
  UserDeckMaster_o *v974; // x20
  System_String_array **v975; // x2
  System_String_array **v976; // x3
  System_Boolean_array **v977; // x4
  System_Int32_array **v978; // x5
  System_Int32_array *v979; // x6
  System_Int32_array *v980; // x7
  UserSubEquipMaster_o *v981; // x20
  System_String_array **v982; // x2
  System_String_array **v983; // x3
  System_Boolean_array **v984; // x4
  System_Int32_array **v985; // x5
  System_Int32_array *v986; // x6
  System_Int32_array *v987; // x7
  GachaMaster_o *v988; // x20
  System_String_array **v989; // x2
  System_String_array **v990; // x3
  System_Boolean_array **v991; // x4
  System_Int32_array **v992; // x5
  System_Int32_array *v993; // x6
  System_Int32_array *v994; // x7
  GachaImageMaster_o *v995; // x20
  System_String_array **v996; // x2
  System_String_array **v997; // x3
  System_Boolean_array **v998; // x4
  System_Int32_array **v999; // x5
  System_Int32_array *v1000; // x6
  System_Int32_array *v1001; // x7
  UserGachaMaster_o *v1002; // x20
  System_String_array **v1003; // x2
  System_String_array **v1004; // x3
  System_Boolean_array **v1005; // x4
  System_Int32_array **v1006; // x5
  System_Int32_array *v1007; // x6
  System_Int32_array *v1008; // x7
  UserEquipMaster_o *v1009; // x20
  System_String_array **v1010; // x2
  System_String_array **v1011; // x3
  System_Boolean_array **v1012; // x4
  System_Int32_array **v1013; // x5
  System_Int32_array *v1014; // x6
  System_Int32_array *v1015; // x7
  UserServantCollectionMaster_o *v1016; // x20
  System_String_array **v1017; // x2
  System_String_array **v1018; // x3
  System_Boolean_array **v1019; // x4
  System_Int32_array **v1020; // x5
  System_Int32_array *v1021; // x6
  System_Int32_array *v1022; // x7
  FriendshipMaster_o *v1023; // x20
  System_String_array **v1024; // x2
  System_String_array **v1025; // x3
  System_Boolean_array **v1026; // x4
  System_Int32_array **v1027; // x5
  System_Int32_array *v1028; // x6
  System_Int32_array *v1029; // x7
  GachaTicketMaster_o *v1030; // x20
  System_String_array **v1031; // x2
  System_String_array **v1032; // x3
  System_Boolean_array **v1033; // x4
  System_Int32_array **v1034; // x5
  System_Int32_array *v1035; // x6
  System_Int32_array *v1036; // x7
  UserFormationMaster_o *v1037; // x20
  System_String_array **v1038; // x2
  System_String_array **v1039; // x3
  System_Boolean_array **v1040; // x4
  System_Int32_array **v1041; // x5
  System_Int32_array *v1042; // x6
  System_Int32_array *v1043; // x7
  FunctionMaster_o *v1044; // x20
  System_String_array **v1045; // x2
  System_String_array **v1046; // x3
  System_Boolean_array **v1047; // x4
  System_Int32_array **v1048; // x5
  System_Int32_array *v1049; // x6
  System_Int32_array *v1050; // x7
  BuffMaster_o *v1051; // x20
  System_String_array **v1052; // x2
  System_String_array **v1053; // x3
  System_Boolean_array **v1054; // x4
  System_Int32_array **v1055; // x5
  System_Int32_array *v1056; // x6
  System_Int32_array *v1057; // x7
  GachaReleaseMaster_o *v1058; // x20
  System_String_array **v1059; // x2
  System_String_array **v1060; // x3
  System_Boolean_array **v1061; // x4
  System_Int32_array **v1062; // x5
  System_Int32_array *v1063; // x6
  System_Int32_array *v1064; // x7
  CombineQpMaster_o *v1065; // x20
  System_String_array **v1066; // x2
  System_String_array **v1067; // x3
  System_Boolean_array **v1068; // x4
  System_Int32_array **v1069; // x5
  System_Int32_array *v1070; // x6
  System_Int32_array *v1071; // x7
  CombineMaterialMaster_o *v1072; // x20
  System_String_array **v1073; // x2
  System_String_array **v1074; // x3
  System_Boolean_array **v1075; // x4
  System_Int32_array **v1076; // x5
  System_Int32_array *v1077; // x6
  System_Int32_array *v1078; // x7
  EventCombineMaster_o *v1079; // x20
  System_String_array **v1080; // x2
  System_String_array **v1081; // x3
  System_Boolean_array **v1082; // x4
  System_Int32_array **v1083; // x5
  System_Int32_array *v1084; // x6
  System_Int32_array *v1085; // x7
  ServantExpMaster_o *v1086; // x20
  System_String_array **v1087; // x2
  System_String_array **v1088; // x3
  System_Boolean_array **v1089; // x4
  System_Int32_array **v1090; // x5
  System_Int32_array *v1091; // x6
  System_Int32_array *v1092; // x7
  CombineSkillMaster_o *v1093; // x20
  System_String_array **v1094; // x2
  System_String_array **v1095; // x3
  System_Boolean_array **v1096; // x4
  System_Int32_array **v1097; // x5
  System_Int32_array *v1098; // x6
  System_Int32_array *v1099; // x7
  CombineTdMaster_o *v1100; // x20
  System_String_array **v1101; // x2
  System_String_array **v1102; // x3
  System_Boolean_array **v1103; // x4
  System_Int32_array **v1104; // x5
  System_Int32_array *v1105; // x6
  System_Int32_array *v1106; // x7
  EventQuestMaster_o *v1107; // x20
  System_String_array **v1108; // x2
  System_String_array **v1109; // x3
  System_Boolean_array **v1110; // x4
  System_Int32_array **v1111; // x5
  System_Int32_array *v1112; // x6
  System_Int32_array *v1113; // x7
  EventCampaignMaster_o *v1114; // x20
  System_String_array **v1115; // x2
  System_String_array **v1116; // x3
  System_Boolean_array **v1117; // x4
  System_Int32_array **v1118; // x5
  System_Int32_array *v1119; // x6
  System_Int32_array *v1120; // x7
  IllustratorMaster_o *v1121; // x20
  System_String_array **v1122; // x2
  System_String_array **v1123; // x3
  System_Boolean_array **v1124; // x4
  System_Int32_array **v1125; // x5
  System_Int32_array *v1126; // x6
  System_Int32_array *v1127; // x7
  CvMaster_o *v1128; // x20
  const MethodInfo *v1129; // x1
  System_String_array **v1130; // x2
  System_String_array **v1131; // x3
  System_Boolean_array **v1132; // x4
  System_Int32_array **v1133; // x5
  System_Int32_array *v1134; // x6
  System_Int32_array *v1135; // x7
  TreasureDvcLvMaster_o *v1136; // x20
  System_String_array **v1137; // x2
  System_String_array **v1138; // x3
  System_Boolean_array **v1139; // x4
  System_Int32_array **v1140; // x5
  System_Int32_array *v1141; // x6
  System_Int32_array *v1142; // x7
  TreasureDvcDetailMaster_o *v1143; // x20
  System_String_array **v1144; // x2
  System_String_array **v1145; // x3
  System_Boolean_array **v1146; // x4
  System_Int32_array **v1147; // x5
  System_Int32_array *v1148; // x6
  System_Int32_array *v1149; // x7
  UserFollowerMaster_o *v1150; // x20
  System_String_array **v1151; // x2
  System_String_array **v1152; // x3
  System_Boolean_array **v1153; // x4
  System_Int32_array **v1154; // x5
  System_Int32_array *v1155; // x6
  System_Int32_array *v1156; // x7
  NpcFollowerMaster_o *v1157; // x20
  System_String_array **v1158; // x2
  System_String_array **v1159; // x3
  System_Boolean_array **v1160; // x4
  System_Int32_array **v1161; // x5
  System_Int32_array *v1162; // x6
  System_Int32_array *v1163; // x7
  NpcServantFollowerMaster_o *v1164; // x20
  System_String_array **v1165; // x2
  System_String_array **v1166; // x3
  System_Boolean_array **v1167; // x4
  System_Int32_array **v1168; // x5
  System_Int32_array *v1169; // x6
  System_Int32_array *v1170; // x7
  UserEventMaster_o *v1171; // x20
  System_String_array **v1172; // x2
  System_String_array **v1173; // x3
  System_Boolean_array **v1174; // x4
  System_Int32_array **v1175; // x5
  System_Int32_array *v1176; // x6
  System_Int32_array *v1177; // x7
  UserShopMaster_o *v1178; // x20
  System_String_array **v1179; // x2
  System_String_array **v1180; // x3
  System_Boolean_array **v1181; // x4
  System_Int32_array **v1182; // x5
  System_Int32_array *v1183; // x6
  System_Int32_array *v1184; // x7
  UserContinueMaster_o *v1185; // x20
  System_String_array **v1186; // x2
  System_String_array **v1187; // x3
  System_Boolean_array **v1188; // x4
  System_Int32_array **v1189; // x5
  System_Int32_array *v1190; // x6
  System_Int32_array *v1191; // x7
  ConstantMaster_o *v1192; // x20
  System_String_array **v1193; // x2
  System_String_array **v1194; // x3
  System_Boolean_array **v1195; // x4
  System_Int32_array **v1196; // x5
  System_Int32_array *v1197; // x6
  System_Int32_array *v1198; // x7
  ConstantLongMaster_o *v1199; // x20
  System_String_array **v1200; // x2
  System_String_array **v1201; // x3
  System_Boolean_array **v1202; // x4
  System_Int32_array **v1203; // x5
  System_Int32_array *v1204; // x6
  System_Int32_array *v1205; // x7
  ConstantStrMaster_o *v1206; // x20
  System_String_array **v1207; // x2
  System_String_array **v1208; // x3
  System_Boolean_array **v1209; // x4
  System_Int32_array **v1210; // x5
  System_Int32_array *v1211; // x6
  System_Int32_array *v1212; // x7
  AiMaster_o *v1213; // x20
  System_String_array **v1214; // x2
  System_String_array **v1215; // x3
  System_Boolean_array **v1216; // x4
  System_Int32_array **v1217; // x5
  System_Int32_array *v1218; // x6
  System_Int32_array *v1219; // x7
  AiActMaster_o *v1220; // x20
  System_String_array **v1221; // x2
  System_String_array **v1222; // x3
  System_Boolean_array **v1223; // x4
  System_Int32_array **v1224; // x5
  System_Int32_array *v1225; // x6
  System_Int32_array *v1226; // x7
  AttriRelationMaster_o *v1227; // x20
  System_String_array **v1228; // x2
  System_String_array **v1229; // x3
  System_Boolean_array **v1230; // x4
  System_Int32_array **v1231; // x5
  System_Int32_array *v1232; // x6
  System_Int32_array *v1233; // x7
  ClassRelationMaster_o *v1234; // x20
  System_String_array **v1235; // x2
  System_String_array **v1236; // x3
  System_Boolean_array **v1237; // x4
  System_Int32_array **v1238; // x5
  System_Int32_array *v1239; // x6
  System_Int32_array *v1240; // x7
  EffectMaster_o *v1241; // x20
  System_String_array **v1242; // x2
  System_String_array **v1243; // x3
  System_Boolean_array **v1244; // x4
  System_Int32_array **v1245; // x5
  System_Int32_array *v1246; // x6
  System_Int32_array *v1247; // x7
  EquipImageMaster_o *v1248; // x20
  System_String_array **v1249; // x2
  System_String_array **v1250; // x3
  System_Boolean_array **v1251; // x4
  System_Int32_array **v1252; // x5
  System_Int32_array *v1253; // x6
  System_Int32_array *v1254; // x7
  ServantVoiceMaster_o *v1255; // x20
  System_String_array **v1256; // x2
  System_String_array **v1257; // x3
  System_Boolean_array **v1258; // x4
  System_Int32_array **v1259; // x5
  System_Int32_array *v1260; // x6
  System_Int32_array *v1261; // x7
  CombineLimitMaster_o *v1262; // x20
  System_String_array **v1263; // x2
  System_String_array **v1264; // x3
  System_Boolean_array **v1265; // x4
  System_Int32_array **v1266; // x5
  System_Int32_array *v1267; // x6
  System_Int32_array *v1268; // x7
  CardMaster_o *v1269; // x20
  System_String_array **v1270; // x2
  System_String_array **v1271; // x3
  System_Boolean_array **v1272; // x4
  System_Int32_array **v1273; // x5
  System_Int32_array *v1274; // x6
  System_Int32_array *v1275; // x7
  CombineQpSvtEquipMaster_o *v1276; // x20
  System_String_array **v1277; // x2
  System_String_array **v1278; // x3
  System_Boolean_array **v1279; // x4
  System_Int32_array **v1280; // x5
  System_Int32_array *v1281; // x6
  System_Int32_array *v1282; // x7
  ServantRarityMaster_o *v1283; // x20
  System_String_array **v1284; // x2
  System_String_array **v1285; // x3
  System_Boolean_array **v1286; // x4
  System_Int32_array **v1287; // x5
  System_Int32_array *v1288; // x6
  System_Int32_array *v1289; // x7
  SetItemMaster_o *v1290; // x20
  System_String_array **v1291; // x2
  System_String_array **v1292; // x3
  System_Boolean_array **v1293; // x4
  System_Int32_array **v1294; // x5
  System_Int32_array *v1295; // x6
  System_Int32_array *v1296; // x7
  RecoverMaster_o *v1297; // x20
  System_String_array **v1298; // x2
  System_String_array **v1299; // x3
  System_Boolean_array **v1300; // x4
  System_Int32_array **v1301; // x5
  System_Int32_array *v1302; // x6
  System_Int32_array *v1303; // x7
  BannerMaster_o *v1304; // x20
  System_String_array **v1305; // x2
  System_String_array **v1306; // x3
  System_Boolean_array **v1307; // x4
  System_Int32_array **v1308; // x5
  System_Int32_array *v1309; // x6
  System_Int32_array *v1310; // x7
  ShopReleaseMaster_o *v1311; // x20
  System_String_array **v1312; // x2
  System_String_array **v1313; // x3
  System_Boolean_array **v1314; // x4
  System_Int32_array **v1315; // x5
  System_Int32_array *v1316; // x6
  System_Int32_array *v1317; // x7
  EventRewardMaster_o *v1318; // x20
  System_String_array **v1319; // x2
  System_String_array **v1320; // x3
  System_Boolean_array **v1321; // x4
  System_Int32_array **v1322; // x5
  System_Int32_array *v1323; // x6
  System_Int32_array *v1324; // x7
  EventDetailMaster_o *v1325; // x20
  System_String_array **v1326; // x2
  System_String_array **v1327; // x3
  System_Boolean_array **v1328; // x4
  System_Int32_array **v1329; // x5
  System_Int32_array *v1330; // x6
  System_Int32_array *v1331; // x7
  EventServantMaster_o *v1332; // x20
  System_String_array **v1333; // x2
  System_String_array **v1334; // x3
  System_Boolean_array **v1335; // x4
  System_Int32_array **v1336; // x5
  System_Int32_array *v1337; // x6
  System_Int32_array *v1338; // x7
  BoxGachaMaster_o *v1339; // x20
  System_String_array **v1340; // x2
  System_String_array **v1341; // x3
  System_Boolean_array **v1342; // x4
  System_Int32_array **v1343; // x5
  System_Int32_array *v1344; // x6
  System_Int32_array *v1345; // x7
  BoxGachaBaseMaster_o *v1346; // x20
  System_String_array **v1347; // x2
  System_String_array **v1348; // x3
  System_Boolean_array **v1349; // x4
  System_Int32_array **v1350; // x5
  System_Int32_array *v1351; // x6
  System_Int32_array *v1352; // x7
  BoxGachaTalkMaster_o *v1353; // x20
  System_String_array **v1354; // x2
  System_String_array **v1355; // x3
  System_Boolean_array **v1356; // x4
  System_Int32_array **v1357; // x5
  System_Int32_array *v1358; // x6
  System_Int32_array *v1359; // x7
  UserBoxGachaMaster_o *v1360; // x20
  System_String_array **v1361; // x2
  System_String_array **v1362; // x3
  System_Boolean_array **v1363; // x4
  System_Int32_array **v1364; // x5
  System_Int32_array *v1365; // x6
  System_Int32_array *v1366; // x7
  BoxGachaHistoryMaster_o *v1367; // x20
  System_String_array **v1368; // x2
  System_String_array **v1369; // x3
  System_Boolean_array **v1370; // x4
  System_Int32_array **v1371; // x5
  System_Int32_array *v1372; // x6
  System_Int32_array *v1373; // x7
  BattleBgMaster_o *v1374; // x20
  System_String_array **v1375; // x2
  System_String_array **v1376; // x3
  System_Boolean_array **v1377; // x4
  System_Int32_array **v1378; // x5
  System_Int32_array *v1379; // x6
  System_Int32_array *v1380; // x7
  TipsBattleMaster_o *v1381; // x20
  System_String_array **v1382; // x2
  System_String_array **v1383; // x3
  System_Boolean_array **v1384; // x4
  System_Int32_array **v1385; // x5
  System_Int32_array *v1386; // x6
  System_Int32_array *v1387; // x7
  UserLoginMaster_o *v1388; // x20
  System_String_array **v1389; // x2
  System_String_array **v1390; // x3
  System_Boolean_array **v1391; // x4
  System_Int32_array **v1392; // x5
  System_Int32_array *v1393; // x6
  System_Int32_array *v1394; // x7
  VoiceMaster_o *v1395; // x20
  System_String_array **v1396; // x2
  System_String_array **v1397; // x3
  System_Boolean_array **v1398; // x4
  System_Int32_array **v1399; // x5
  System_Int32_array *v1400; // x6
  System_Int32_array *v1401; // x7
  EventRewardExtraMaster_o *v1402; // x20
  System_String_array **v1403; // x2
  System_String_array **v1404; // x3
  System_Boolean_array **v1405; // x4
  System_Int32_array **v1406; // x5
  System_Int32_array *v1407; // x6
  System_Int32_array *v1408; // x7
  EventMissionMaster_o *v1409; // x20
  System_String_array **v1410; // x2
  System_String_array **v1411; // x3
  System_Boolean_array **v1412; // x4
  System_Int32_array **v1413; // x5
  System_Int32_array *v1414; // x6
  System_Int32_array *v1415; // x7
  EventMissionActionMaster_o *v1416; // x20
  System_String_array **v1417; // x2
  System_String_array **v1418; // x3
  System_Boolean_array **v1419; // x4
  System_Int32_array **v1420; // x5
  System_Int32_array *v1421; // x6
  System_Int32_array *v1422; // x7
  EventMissionActionAddMaster_o *v1423; // x20
  System_String_array **v1424; // x2
  System_String_array **v1425; // x3
  System_Boolean_array **v1426; // x4
  System_Int32_array **v1427; // x5
  System_Int32_array *v1428; // x6
  System_Int32_array *v1429; // x7
  EventMissionConditionMaster_o *v1430; // x20
  System_String_array **v1431; // x2
  System_String_array **v1432; // x3
  System_Boolean_array **v1433; // x4
  System_Int32_array **v1434; // x5
  System_Int32_array *v1435; // x6
  System_Int32_array *v1436; // x7
  EventMissionCondDetailMaster_o *v1437; // x20
  System_String_array **v1438; // x2
  System_String_array **v1439; // x3
  System_Boolean_array **v1440; // x4
  System_Int32_array **v1441; // x5
  System_Int32_array *v1442; // x6
  System_Int32_array *v1443; // x7
  EventMissionAddMaster_o *v1444; // x20
  System_String_array **v1445; // x2
  System_String_array **v1446; // x3
  System_Boolean_array **v1447; // x4
  System_Int32_array **v1448; // x5
  System_Int32_array *v1449; // x6
  System_Int32_array *v1450; // x7
  CompleteMissionMaster_o *v1451; // x20
  System_String_array **v1452; // x2
  System_String_array **v1453; // x3
  System_Boolean_array **v1454; // x4
  System_Int32_array **v1455; // x5
  System_Int32_array *v1456; // x6
  System_Int32_array *v1457; // x7
  EventRewardSetMaster_o *v1458; // x20
  System_String_array **v1459; // x2
  System_String_array **v1460; // x3
  System_Boolean_array **v1461; // x4
  System_Int32_array **v1462; // x5
  System_Int32_array *v1463; // x6
  System_Int32_array *v1464; // x7
  UserEventMissionMaster_o *v1465; // x20
  System_String_array **v1466; // x2
  System_String_array **v1467; // x3
  System_Boolean_array **v1468; // x4
  System_Int32_array **v1469; // x5
  System_Int32_array *v1470; // x6
  System_Int32_array *v1471; // x7
  UserEventMissionCondDetailMaster_o *v1472; // x20
  System_String_array **v1473; // x2
  System_String_array **v1474; // x3
  System_Boolean_array **v1475; // x4
  System_Int32_array **v1476; // x5
  System_Int32_array *v1477; // x6
  System_Int32_array *v1478; // x7
  BoxGachaBaseDetailMaster_o *v1479; // x20
  System_String_array **v1480; // x2
  System_String_array **v1481; // x3
  System_Boolean_array **v1482; // x4
  System_Int32_array **v1483; // x5
  System_Int32_array *v1484; // x6
  System_Int32_array *v1485; // x7
  UserServantLeaderMaster_o *v1486; // x20
  System_String_array **v1487; // x2
  System_String_array **v1488; // x3
  System_Boolean_array **v1489; // x4
  System_Int32_array **v1490; // x5
  System_Int32_array *v1491; // x6
  System_Int32_array *v1492; // x7
  ClosedMessageMaster_o *v1493; // x20
  System_String_array **v1494; // x2
  System_String_array **v1495; // x3
  System_Boolean_array **v1496; // x4
  System_Int32_array **v1497; // x5
  System_Int32_array *v1498; // x6
  System_Int32_array *v1499; // x7
  FunctionGroupMaster_o *v1500; // x20
  System_String_array **v1501; // x2
  System_String_array **v1502; // x3
  System_Boolean_array **v1503; // x4
  System_Int32_array **v1504; // x5
  System_Int32_array *v1505; // x6
  System_Int32_array *v1506; // x7
  EventRaidMaster_o *v1507; // x20
  System_String_array **v1508; // x2
  System_String_array **v1509; // x3
  System_Boolean_array **v1510; // x4
  System_Int32_array **v1511; // x5
  System_Int32_array *v1512; // x6
  System_Int32_array *v1513; // x7
  TotalEventRaidMaster_o *v1514; // x20
  System_String_array **v1515; // x2
  System_String_array **v1516; // x3
  System_Boolean_array **v1517; // x4
  System_Int32_array **v1518; // x5
  System_Int32_array *v1519; // x6
  System_Int32_array *v1520; // x7
  UserEventRaidMaster_o *v1521; // x20
  __int64 v1522; // x0
  System_String_array **v1523; // x2
  System_String_array **v1524; // x3
  System_Boolean_array **v1525; // x4
  System_Int32_array **v1526; // x5
  System_Int32_array *v1527; // x6
  System_Int32_array *v1528; // x7
  EventPointMaster_o *v1529; // x20
  System_String_array **v1530; // x2
  System_String_array **v1531; // x3
  System_Boolean_array **v1532; // x4
  System_Int32_array **v1533; // x5
  System_Int32_array *v1534; // x6
  System_Int32_array *v1535; // x7
  EventPointGroupMaster_o *v1536; // x20
  System_String_array **v1537; // x2
  System_String_array **v1538; // x3
  System_Boolean_array **v1539; // x4
  System_Int32_array **v1540; // x5
  System_Int32_array *v1541; // x6
  System_Int32_array *v1542; // x7
  TotalEventPointMaster_o *v1543; // x20
  System_String_array **v1544; // x2
  System_String_array **v1545; // x3
  System_Boolean_array **v1546; // x4
  System_Int32_array **v1547; // x5
  System_Int32_array *v1548; // x6
  System_Int32_array *v1549; // x7
  UserEventPointMaster_o *v1550; // x20
  System_String_array **v1551; // x2
  System_String_array **v1552; // x3
  System_Boolean_array **v1553; // x4
  System_Int32_array **v1554; // x5
  System_Int32_array *v1555; // x6
  System_Int32_array *v1556; // x7
  EventPointUpperMaster_o *v1557; // x20
  System_String_array **v1558; // x2
  System_String_array **v1559; // x3
  System_Boolean_array **v1560; // x4
  System_Int32_array **v1561; // x5
  System_Int32_array *v1562; // x6
  System_Int32_array *v1563; // x7
  EventPointUpperReleaseMaster_o *v1564; // x20
  System_String_array **v1565; // x2
  System_String_array **v1566; // x3
  System_Boolean_array **v1567; // x4
  System_Int32_array **v1568; // x5
  System_Int32_array *v1569; // x6
  System_Int32_array *v1570; // x7
  EventRaceMaster_o *v1571; // x20
  System_String_array **v1572; // x2
  System_String_array **v1573; // x3
  System_Boolean_array **v1574; // x4
  System_Int32_array **v1575; // x5
  System_Int32_array *v1576; // x6
  System_Int32_array *v1577; // x7
  EventRaceResultMaster_o *v1578; // x20
  System_String_array **v1579; // x2
  System_String_array **v1580; // x3
  System_Boolean_array **v1581; // x4
  System_Int32_array **v1582; // x5
  System_Int32_array *v1583; // x6
  System_Int32_array *v1584; // x7
  QuestRacePointMaster_o *v1585; // x20
  System_String_array **v1586; // x2
  System_String_array **v1587; // x3
  System_Boolean_array **v1588; // x4
  System_Int32_array **v1589; // x5
  System_Int32_array *v1590; // x6
  System_Int32_array *v1591; // x7
  UserEventRaceMaster_o *v1592; // x20
  System_String_array **v1593; // x2
  System_String_array **v1594; // x3
  System_Boolean_array **v1595; // x4
  System_Int32_array **v1596; // x5
  System_Int32_array *v1597; // x6
  System_Int32_array *v1598; // x7
  EventScriptMaster_o *v1599; // x20
  System_String_array **v1600; // x2
  System_String_array **v1601; // x3
  System_Boolean_array **v1602; // x4
  System_Int32_array **v1603; // x5
  System_Int32_array *v1604; // x6
  System_Int32_array *v1605; // x7
  EventScriptReleaseMaster_o *v1606; // x20
  System_String_array **v1607; // x2
  System_String_array **v1608; // x3
  System_Boolean_array **v1609; // x4
  System_Int32_array **v1610; // x5
  System_Int32_array *v1611; // x6
  System_Int32_array *v1612; // x7
  UserPresentHistoryMaster_o *v1613; // x20
  System_String_array **v1614; // x2
  System_String_array **v1615; // x3
  System_Boolean_array **v1616; // x4
  System_Int32_array **v1617; // x5
  System_Int32_array *v1618; // x6
  System_Int32_array *v1619; // x7
  MstMissionMaster_o *v1620; // x20
  System_String_array **v1621; // x2
  System_String_array **v1622; // x3
  System_Boolean_array **v1623; // x4
  System_Int32_array **v1624; // x5
  System_Int32_array *v1625; // x6
  System_Int32_array *v1626; // x7
  ServantExceedMaster_o *v1627; // x20
  System_String_array **v1628; // x2
  System_String_array **v1629; // x3
  System_Boolean_array **v1630; // x4
  System_Int32_array **v1631; // x5
  System_Int32_array *v1632; // x6
  System_Int32_array *v1633; // x7
  PartialMaintenanceMaster_o *v1634; // x20
  System_String_array **v1635; // x2
  System_String_array **v1636; // x3
  System_Boolean_array **v1637; // x4
  System_Int32_array **v1638; // x5
  System_Int32_array *v1639; // x6
  System_Int32_array *v1640; // x7
  GuideMaster_o *v1641; // x20
  System_String_array **v1642; // x2
  System_String_array **v1643; // x3
  System_Boolean_array **v1644; // x4
  System_Int32_array **v1645; // x5
  System_Int32_array *v1646; // x6
  System_Int32_array *v1647; // x7
  MstMissionDisplayInfoMaster_o *v1648; // x20
  System_String_array **v1649; // x2
  System_String_array **v1650; // x3
  System_Boolean_array **v1651; // x4
  System_Int32_array **v1652; // x5
  System_Int32_array *v1653; // x6
  System_Int32_array *v1654; // x7
  GachaGroupMaster_o *v1655; // x20
  System_String_array **v1656; // x2
  System_String_array **v1657; // x3
  System_Boolean_array **v1658; // x4
  System_Int32_array **v1659; // x5
  System_Int32_array *v1660; // x6
  System_Int32_array *v1661; // x7
  QuestResetMaster_o *v1662; // x20
  System_String_array **v1663; // x2
  System_String_array **v1664; // x3
  System_Boolean_array **v1665; // x4
  System_Int32_array **v1666; // x5
  System_Int32_array *v1667; // x6
  System_Int32_array *v1668; // x7
  WarAddMaster_o *v1669; // x20
  System_String_array **v1670; // x2
  System_String_array **v1671; // x3
  System_Boolean_array **v1672; // x4
  System_Int32_array **v1673; // x5
  System_Int32_array *v1674; // x6
  System_Int32_array *v1675; // x7
  EventItemDisplayMaster_o *v1676; // x20
  System_String_array **v1677; // x2
  System_String_array **v1678; // x3
  System_Boolean_array **v1679; // x4
  System_Int32_array **v1680; // x5
  System_Int32_array *v1681; // x6
  System_Int32_array *v1682; // x7
  EventItemDisplayGroupMaster_o *v1683; // x20
  System_String_array **v1684; // x2
  System_String_array **v1685; // x3
  System_Boolean_array **v1686; // x4
  System_Int32_array **v1687; // x5
  System_Int32_array *v1688; // x6
  System_Int32_array *v1689; // x7
  EventItemDisplayReleaseMaster_o *v1690; // x20
  System_String_array **v1691; // x2
  System_String_array **v1692; // x3
  System_Boolean_array **v1693; // x4
  System_Int32_array **v1694; // x5
  System_Int32_array *v1695; // x6
  System_Int32_array *v1696; // x7
  EventTutorialMaster_o *v1697; // x20
  System_String_array **v1698; // x2
  System_String_array **v1699; // x3
  System_Boolean_array **v1700; // x4
  System_Int32_array **v1701; // x5
  System_Int32_array *v1702; // x6
  System_Int32_array *v1703; // x7
  EventTutorialCondMaster_o *v1704; // x20
  System_String_array **v1705; // x2
  System_String_array **v1706; // x3
  System_Boolean_array **v1707; // x4
  System_Int32_array **v1708; // x5
  System_Int32_array *v1709; // x6
  System_Int32_array *v1710; // x7
  VoiceReleaseMaster_o *v1711; // x20
  System_String_array **v1712; // x2
  System_String_array **v1713; // x3
  System_Boolean_array **v1714; // x4
  System_Int32_array **v1715; // x5
  System_Int32_array *v1716; // x6
  System_Int32_array *v1717; // x7
  EventSuperBossMaster_o *v1718; // x20
  System_String_array **v1719; // x2
  System_String_array **v1720; // x3
  System_Boolean_array **v1721; // x4
  System_Int32_array **v1722; // x5
  System_Int32_array *v1723; // x6
  System_Int32_array *v1724; // x7
  UserSuperBossMaster_o *v1725; // x20
  System_String_array **v1726; // x2
  System_String_array **v1727; // x3
  System_Boolean_array **v1728; // x4
  System_Int32_array **v1729; // x5
  System_Int32_array *v1730; // x6
  System_Int32_array *v1731; // x7
  QuestScriptMaster_o *v1732; // x20
  System_String_array **v1733; // x2
  System_String_array **v1734; // x3
  System_Boolean_array **v1735; // x4
  System_Int32_array **v1736; // x5
  System_Int32_array *v1737; // x6
  System_Int32_array *v1738; // x7
  QuestScriptReleaseMaster_o *v1739; // x20
  System_String_array **v1740; // x2
  System_String_array **v1741; // x3
  System_Boolean_array **v1742; // x4
  System_Int32_array **v1743; // x5
  System_Int32_array *v1744; // x6
  System_Int32_array *v1745; // x7
  MaterialFolderMaster_o *v1746; // x20
  System_String_array **v1747; // x2
  System_String_array **v1748; // x3
  System_Boolean_array **v1749; // x4
  System_Int32_array **v1750; // x5
  System_Int32_array *v1751; // x6
  System_Int32_array *v1752; // x7
  RestrictionMaster_o *v1753; // x20
  System_String_array **v1754; // x2
  System_String_array **v1755; // x3
  System_Boolean_array **v1756; // x4
  System_Int32_array **v1757; // x5
  System_Int32_array *v1758; // x6
  System_Int32_array *v1759; // x7
  QuestRestrictionMaster_o *v1760; // x20
  System_String_array **v1761; // x2
  System_String_array **v1762; // x3
  System_Boolean_array **v1763; // x4
  System_Int32_array **v1764; // x5
  System_Int32_array *v1765; // x6
  System_Int32_array *v1766; // x7
  ServantVoiceRelationMaster_o *v1767; // x20
  System_String_array **v1768; // x2
  System_String_array **v1769; // x3
  System_Boolean_array **v1770; // x4
  System_Int32_array **v1771; // x5
  System_Int32_array *v1772; // x6
  System_Int32_array *v1773; // x7
  ShopDetailMaster_o *v1774; // x20
  System_String_array **v1775; // x2
  System_String_array **v1776; // x3
  System_Boolean_array **v1777; // x4
  System_Int32_array **v1778; // x5
  System_Int32_array *v1779; // x6
  System_Int32_array *v1780; // x7
  ServantScriptAddMaster_o *v1781; // x20
  System_String_array **v1782; // x2
  System_String_array **v1783; // x3
  System_Boolean_array **v1784; // x4
  System_Int32_array **v1785; // x5
  System_Int32_array *v1786; // x6
  System_Int32_array *v1787; // x7
  CombineMaster_o *v1788; // x20
  System_String_array **v1789; // x2
  System_String_array **v1790; // x3
  System_Boolean_array **v1791; // x4
  System_Int32_array **v1792; // x5
  System_Int32_array *v1793; // x6
  System_Int32_array *v1794; // x7
  AiFieldMaster_o *v1795; // x20
  System_String_array **v1796; // x2
  System_String_array **v1797; // x3
  System_Boolean_array **v1798; // x4
  System_Int32_array **v1799; // x5
  System_Int32_array *v1800; // x6
  System_Int32_array *v1801; // x7
  ServantCommentAddMaster_o *v1802; // x20
  System_String_array **v1803; // x2
  System_String_array **v1804; // x3
  System_Boolean_array **v1805; // x4
  System_Int32_array **v1806; // x5
  System_Int32_array *v1807; // x6
  System_Int32_array *v1808; // x7
  EventFilterMaster_o *v1809; // x20
  System_String_array **v1810; // x2
  System_String_array **v1811; // x3
  System_Boolean_array **v1812; // x4
  System_Int32_array **v1813; // x5
  System_Int32_array *v1814; // x6
  System_Int32_array *v1815; // x7
  UserSupportDeckMaster_o *v1816; // x20
  System_String_array **v1817; // x2
  System_String_array **v1818; // x3
  System_Boolean_array **v1819; // x4
  System_Int32_array **v1820; // x5
  System_Int32_array *v1821; // x6
  System_Int32_array *v1822; // x7
  EventRewardSceneMaster_o *v1823; // x20
  System_String_array **v1824; // x2
  System_String_array **v1825; // x3
  System_Boolean_array **v1826; // x4
  System_Int32_array **v1827; // x5
  System_Int32_array *v1828; // x6
  System_Int32_array *v1829; // x7
  EventVoicePlayMaster_o *v1830; // x20
  System_String_array **v1831; // x2
  System_String_array **v1832; // x3
  System_Boolean_array **v1833; // x4
  System_Int32_array **v1834; // x5
  System_Int32_array *v1835; // x6
  System_Int32_array *v1836; // x7
  GachaSubMaster_o *v1837; // x20
  System_String_array **v1838; // x2
  System_String_array **v1839; // x3
  System_Boolean_array **v1840; // x4
  System_Int32_array **v1841; // x5
  System_Int32_array *v1842; // x6
  System_Int32_array *v1843; // x7
  GachaDetailMaster_o *v1844; // x20
  System_String_array **v1845; // x2
  System_String_array **v1846; // x3
  System_Boolean_array **v1847; // x4
  System_Int32_array **v1848; // x5
  System_Int32_array *v1849; // x6
  System_Int32_array *v1850; // x7
  GachaBonusSelectMaster_o *v1851; // x20
  System_String_array **v1852; // x2
  System_String_array **v1853; // x3
  System_Boolean_array **v1854; // x4
  System_Int32_array **v1855; // x5
  System_Int32_array *v1856; // x6
  System_Int32_array *v1857; // x7
  GachaBonusSelectLineupMaster_o *v1858; // x20
  System_String_array **v1859; // x2
  System_String_array **v1860; // x3
  System_Boolean_array **v1861; // x4
  System_Int32_array **v1862; // x5
  System_Int32_array *v1863; // x6
  System_Int32_array *v1864; // x7
  ServantChangeMaster_o *v1865; // x20
  System_String_array **v1866; // x2
  System_String_array **v1867; // x3
  System_Boolean_array **v1868; // x4
  System_Int32_array **v1869; // x5
  System_Int32_array *v1870; // x6
  System_Int32_array *v1871; // x7
  VoiceCondMaster_o *v1872; // x20
  System_String_array **v1873; // x2
  System_String_array **v1874; // x3
  System_Boolean_array **v1875; // x4
  System_Int32_array **v1876; // x5
  System_Int32_array *v1877; // x6
  System_Int32_array *v1878; // x7
  BgmReleaseMaster_o *v1879; // x20
  System_String_array **v1880; // x2
  System_String_array **v1881; // x3
  System_Boolean_array **v1882; // x4
  System_Int32_array **v1883; // x5
  System_Int32_array *v1884; // x6
  System_Int32_array *v1885; // x7
  MyRoomAddMaster_o *v1886; // x20
  System_String_array **v1887; // x2
  System_String_array **v1888; // x3
  System_Boolean_array **v1889; // x4
  System_Int32_array **v1890; // x5
  System_Int32_array *v1891; // x6
  System_Int32_array *v1892; // x7
  ShopActionMaster_o *v1893; // x20
  System_String_array **v1894; // x2
  System_String_array **v1895; // x3
  System_Boolean_array **v1896; // x4
  System_Int32_array **v1897; // x5
  System_Int32_array *v1898; // x6
  System_Int32_array *v1899; // x7
  EventRewardSceneReleaseMaster_o *v1900; // x20
  System_String_array **v1901; // x2
  System_String_array **v1902; // x3
  System_Boolean_array **v1903; // x4
  System_Int32_array **v1904; // x5
  System_Int32_array *v1905; // x6
  System_Int32_array *v1906; // x7
  QuestBehaviorMaster_o *v1907; // x20
  System_String_array **v1908; // x2
  System_String_array **v1909; // x3
  System_Boolean_array **v1910; // x4
  System_Int32_array **v1911; // x5
  System_Int32_array *v1912; // x6
  System_Int32_array *v1913; // x7
  MapMaster_o *v1914; // x20
  System_String_array **v1915; // x2
  System_String_array **v1916; // x3
  System_Boolean_array **v1917; // x4
  System_Int32_array **v1918; // x5
  System_Int32_array *v1919; // x6
  System_Int32_array *v1920; // x7
  MapCondMaster_o *v1921; // x20
  System_String_array **v1922; // x2
  System_String_array **v1923; // x3
  System_Boolean_array **v1924; // x4
  System_Int32_array **v1925; // x5
  System_Int32_array *v1926; // x6
  System_Int32_array *v1927; // x7
  MapButtonMaster_o *v1928; // x20
  System_String_array **v1929; // x2
  System_String_array **v1930; // x3
  System_Boolean_array **v1931; // x4
  System_Int32_array **v1932; // x5
  System_Int32_array *v1933; // x6
  System_Int32_array *v1934; // x7
  __int64 v1935; // x0
  __int64 v1936; // x0
  __int64 v1937; // x0
  __int64 v1938; // x0
  __int64 v1939; // x0
  __int64 v1940; // x0

  if ( (byte_418906C & 1) == 0 )
  {
    sub_B2C35C(&AccessaryMaster_TypeInfo, v1);
    sub_B2C35C(&AdCheckPointMaster_TypeInfo, v2);
    sub_B2C35C(&AiActMaster_TypeInfo, v3);
    sub_B2C35C(&AiFieldMaster_TypeInfo, v4);
    sub_B2C35C(&AiMaster_TypeInfo, v5);
    sub_B2C35C(&AreaMaster_TypeInfo, v6);
    sub_B2C35C(&AssistMaster_TypeInfo, v7);
    sub_B2C35C(&AttriRelationMaster_TypeInfo, v8);
    sub_B2C35C(&AuraEffectMaster_TypeInfo, v9);
    sub_B2C35C(&AuraEffectPosOverwriteMaster_TypeInfo, v10);
    sub_B2C35C(&BankShopMaster_TypeInfo, v11);
    sub_B2C35C(&BannerAddMaster_TypeInfo, v12);
    sub_B2C35C(&BannerMaster_TypeInfo, v13);
    sub_B2C35C(&BattleBgMaster_TypeInfo, v14);
    sub_B2C35C(&BattleMasterImageMaster_TypeInfo, v15);
    sub_B2C35C(&BattleMaster_TypeInfo, v16);
    sub_B2C35C(&BattleMessageGroupMaster_TypeInfo, v17);
    sub_B2C35C(&BattleMessageMaster_TypeInfo, v18);
    sub_B2C35C(&BeforeBirthDayMaster_TypeInfo, v19);
    sub_B2C35C(&BgmMaster_TypeInfo, v20);
    sub_B2C35C(&BgmReleaseMaster_TypeInfo, v21);
    sub_B2C35C(&BlankEarthSpotMaster_TypeInfo, v22);
    sub_B2C35C(&BlankEarthSpotNavimenuMaster_TypeInfo, v23);
    sub_B2C35C(&BoardMessageMaster_TypeInfo, v24);
    sub_B2C35C(&BoardMessageReleaseMaster_TypeInfo, v25);
    sub_B2C35C(&BoostMaster_TypeInfo, v26);
    sub_B2C35C(&BoxGachaBaseDetailMaster_TypeInfo, v27);
    sub_B2C35C(&BoxGachaBaseMaster_TypeInfo, v28);
    sub_B2C35C(&BoxGachaHistoryMaster_TypeInfo, v29);
    sub_B2C35C(&BoxGachaMaster_TypeInfo, v30);
    sub_B2C35C(&BoxGachaTalkMaster_TypeInfo, v31);
    sub_B2C35C(&BuffConvertMaster_TypeInfo, v32);
    sub_B2C35C(&BuffMaster_TypeInfo, v33);
    sub_B2C35C(&BuffTypeDetailMaster_TypeInfo, v34);
    sub_B2C35C(&CampaignInfoMaster_TypeInfo, v35);
    sub_B2C35C(&CardMaster_TypeInfo, v36);
    sub_B2C35C(&ClassBoardBaseMaster_TypeInfo, v37);
    sub_B2C35C(&ClassBoardClassMaster_TypeInfo, v38);
    sub_B2C35C(&ClassBoardCommandSpellMaster_TypeInfo, v39);
    sub_B2C35C(&ClassBoardLineMaster_TypeInfo, v40);
    sub_B2C35C(&ClassBoardLockMaster_TypeInfo, v41);
    sub_B2C35C(&ClassBoardSquareMaster_TypeInfo, v42);
    sub_B2C35C(&ClassRelationMaster_TypeInfo, v43);
    sub_B2C35C(&ClassRelationOverwriteMaster_TypeInfo, v44);
    sub_B2C35C(&ClosedMessageMaster_TypeInfo, v45);
    sub_B2C35C(&CombineAppendPassiveSkillMaster_TypeInfo, v46);
    sub_B2C35C(&CombineCostumeMaster_TypeInfo, v47);
    sub_B2C35C(&CombineLimitGiftMaster_TypeInfo, v48);
    sub_B2C35C(&CombineLimitMaster_TypeInfo, v49);
    sub_B2C35C(&CombineLimitReleaseMaster_TypeInfo, v50);
    sub_B2C35C(&CombineMaster_TypeInfo, v51);
    sub_B2C35C(&CombineMaterialMaster_TypeInfo, v52);
    sub_B2C35C(&CombineQpMaster_TypeInfo, v53);
    sub_B2C35C(&CombineQpSvtEquipMaster_TypeInfo, v54);
    sub_B2C35C(&CombineSkillMaster_TypeInfo, v55);
    sub_B2C35C(&CombineTdMaster_TypeInfo, v56);
    sub_B2C35C(&CommandCardRankParamMaster_TypeInfo, v57);
    sub_B2C35C(&CommandCodeCommentMaster_TypeInfo, v58);
    sub_B2C35C(&CommandCodeMaster_TypeInfo, v59);
    sub_B2C35C(&CommandCodeSkillMaster_TypeInfo, v60);
    sub_B2C35C(&CommandCodeSkillReleaseMaster_TypeInfo, v61);
    sub_B2C35C(&CommandSpellMaster_TypeInfo, v62);
    sub_B2C35C(&CommonConsumeMaster_TypeInfo, v63);
    sub_B2C35C(&CommonReleaseMaster_TypeInfo, v64);
    sub_B2C35C(&CommonRestrictionMaster_TypeInfo, v65);
    sub_B2C35C(&CompleteMissionMaster_TypeInfo, v66);
    sub_B2C35C(&ConstantLongMaster_TypeInfo, v67);
    sub_B2C35C(&ConstantMaster_TypeInfo, v68);
    sub_B2C35C(&ConstantStrMaster_TypeInfo, v69);
    sub_B2C35C(&CvMaster_TypeInfo, v70);
    sub_B2C35C(&DataMasterBase___TypeInfo, v71);
    sub_B2C35C(&DialogMessageMaster_TypeInfo, v72);
    sub_B2C35C(&EffectMaster_TypeInfo, v73);
    sub_B2C35C(&EnemyMstBattleMaster_TypeInfo, v74);
    sub_B2C35C(&EnemyMstMaster_TypeInfo, v75);
    sub_B2C35C(&EquipAddMaster_TypeInfo, v76);
    sub_B2C35C(&EquipExpMaster_TypeInfo, v77);
    sub_B2C35C(&EquipImageMaster_TypeInfo, v78);
    sub_B2C35C(&EquipMaster_TypeInfo, v79);
    sub_B2C35C(&EquipSkillMaster_TypeInfo, v80);
    sub_B2C35C(&EventAddMaster_TypeInfo, v81);
    sub_B2C35C(&EventBoardGameCellMaster_TypeInfo, v82);
    sub_B2C35C(&EventBoardGameTokenMaster_TypeInfo, v83);
    sub_B2C35C(&EventBoardGameTokenRewardMaster_TypeInfo, v84);
    sub_B2C35C(&EventBonusFilterGroupInfoMaster_TypeInfo, v85);
    sub_B2C35C(&EventBonusFilterGroupMemberMaster_TypeInfo, v86);
    sub_B2C35C(&EventBonusFilterMaster_TypeInfo, v87);
    sub_B2C35C(&EventBoostItemUsedMaster_TypeInfo, v88);
    sub_B2C35C(&EventBossStatusUiMaster_TypeInfo, v89);
    sub_B2C35C(&EventBuddyPointMaster_TypeInfo, v90);
    sub_B2C35C(&EventBulletinBoardMaster_TypeInfo, v91);
    sub_B2C35C(&EventBulletinBoardReleaseMaster_TypeInfo, v92);
    sub_B2C35C(&EventCampaignMaster_TypeInfo, v93);
    sub_B2C35C(&EventCampaignReleaseMaster_TypeInfo, v94);
    sub_B2C35C(&EventCombineCostumeMaster_TypeInfo, v95);
    sub_B2C35C(&EventCombineMaster_TypeInfo, v96);
    sub_B2C35C(&EventCommandAssistMaster_TypeInfo, v97);
    sub_B2C35C(&EventConquestRewardMaster_TypeInfo, v98);
    sub_B2C35C(&EventCooltimeRewardMaster_TypeInfo, v99);
    sub_B2C35C(&EventDataLostBattleMaster_TypeInfo, v100);
    sub_B2C35C(&EventDataLostBattleResetMaster_TypeInfo, v101);
    sub_B2C35C(&EventDetailMaster_TypeInfo, v102);
    sub_B2C35C(&EventDiggingBlockMaster_TypeInfo, v103);
    sub_B2C35C(&EventDiggingMaster_TypeInfo, v104);
    sub_B2C35C(&EventDiggingRewardMaster_TypeInfo, v105);
    sub_B2C35C(&EventEquipSkillReleaseMaster_TypeInfo, v106);
    sub_B2C35C(&EventExpeditionMaster_TypeInfo, v107);
    sub_B2C35C(&EventExpeditionPieceMaster_TypeInfo, v108);
    sub_B2C35C(&EventFactoryMaster_TypeInfo, v109);
    sub_B2C35C(&EventFatigueRecoveryMaster_TypeInfo, v110);
    sub_B2C35C(&EventFilterMaster_TypeInfo, v111);
    sub_B2C35C(&EventFortificationDetailMaster_TypeInfo, v112);
    sub_B2C35C(&EventFortificationMaster_TypeInfo, v113);
    sub_B2C35C(&EventFortificationSvtMaster_TypeInfo, v114);
    sub_B2C35C(&EventGroupMaster_TypeInfo, v115);
    sub_B2C35C(&EventItemDisplayGroupMaster_TypeInfo, v116);
    sub_B2C35C(&EventItemDisplayMaster_TypeInfo, v117);
    sub_B2C35C(&EventItemDisplayReleaseMaster_TypeInfo, v118);
    sub_B2C35C(&EventLocationCampaignMaster_TypeInfo, v119);
    sub_B2C35C(&EventMaster_TypeInfo, v120);
    sub_B2C35C(&EventMissionActionAddMaster_TypeInfo, v121);
    sub_B2C35C(&EventMissionActionMaster_TypeInfo, v122);
    sub_B2C35C(&EventMissionAddMaster_TypeInfo, v123);
    sub_B2C35C(&EventMissionCondDetailMaster_TypeInfo, v124);
    sub_B2C35C(&EventMissionConditionMaster_TypeInfo, v125);
    sub_B2C35C(&EventMissionGroupMaster_TypeInfo, v126);
    sub_B2C35C(&EventMissionMaster_TypeInfo, v127);
    sub_B2C35C(&EventMuralMaster_TypeInfo, v128);
    sub_B2C35C(&EventPanelMapDetailMaster_TypeInfo, v129);
    sub_B2C35C(&EventPanelMapMaster_TypeInfo, v130);
    sub_B2C35C(&EventPanelScanMaster_TypeInfo, v131);
    sub_B2C35C(&EventPanelSpotMaster_TypeInfo, v132);
    sub_B2C35C(&EventPointActivityMaster_TypeInfo, v133);
    sub_B2C35C(&EventPointBuffMaster_TypeInfo, v134);
    sub_B2C35C(&EventPointGroupAddMaster_TypeInfo, v135);
    sub_B2C35C(&EventPointGroupMaster_TypeInfo, v136);
    sub_B2C35C(&EventPointMaster_TypeInfo, v137);
    sub_B2C35C(&EventPointUpperMaster_TypeInfo, v138);
    sub_B2C35C(&EventPointUpperReleaseMaster_TypeInfo, v139);
    sub_B2C35C(&EventProgressValueMaster_TypeInfo, v140);
    sub_B2C35C(&EventQuestCooltimeMaster_TypeInfo, v141);
    sub_B2C35C(&EventQuestMaster_TypeInfo, v142);
    sub_B2C35C(&EventRaceMaster_TypeInfo, v143);
    sub_B2C35C(&EventRaceResultMaster_TypeInfo, v144);
    sub_B2C35C(&EventRaidMaster_TypeInfo, v145);
    sub_B2C35C(&EventRandomMissionMaster_TypeInfo, v146);
    sub_B2C35C(&EventRecipeGiftMaster_TypeInfo, v147);
    sub_B2C35C(&EventRecipeMaster_TypeInfo, v148);
    sub_B2C35C(&EventRewardBgMaster_TypeInfo, v149);
    sub_B2C35C(&EventRewardExtraMaster_TypeInfo, v150);
    sub_B2C35C(&EventRewardGuideReleaseMaster_TypeInfo, v151);
    sub_B2C35C(&EventRewardMaster_TypeInfo, v152);
    sub_B2C35C(&EventRewardSceneMaster_TypeInfo, v153);
    sub_B2C35C(&EventRewardSceneReleaseMaster_TypeInfo, v154);
    sub_B2C35C(&EventRewardSetMaster_TypeInfo, v155);
    sub_B2C35C(&EventScriptMaster_TypeInfo, v156);
    sub_B2C35C(&EventScriptReleaseMaster_TypeInfo, v157);
    sub_B2C35C(&EventServantFatigueMaster_TypeInfo, v158);
    sub_B2C35C(&EventServantMaster_TypeInfo, v159);
    sub_B2C35C(&EventServantPointRankMaster_TypeInfo, v160);
    sub_B2C35C(&EventStatusMaster_TypeInfo, v161);
    sub_B2C35C(&EventStatusQuestMaster_TypeInfo, v162);
    sub_B2C35C(&EventSuperBossMaster_TypeInfo, v163);
    sub_B2C35C(&EventTowerMaster_TypeInfo, v164);
    sub_B2C35C(&EventTowerRewardMaster_TypeInfo, v165);
    sub_B2C35C(&EventTutorialCondMaster_TypeInfo, v166);
    sub_B2C35C(&EventTutorialMaster_TypeInfo, v167);
    sub_B2C35C(&EventUiMaster_TypeInfo, v168);
    sub_B2C35C(&EventUiReleaseMaster_TypeInfo, v169);
    sub_B2C35C(&EventUiValueMaster_TypeInfo, v170);
    sub_B2C35C(&EventVoicePlayMaster_TypeInfo, v171);
    sub_B2C35C(&FieldMotionMaster_TypeInfo, v172);
    sub_B2C35C(&FriendshipMaster_TypeInfo, v173);
    sub_B2C35C(&FriendshipQuestDialogInfoMaster_TypeInfo, v174);
    sub_B2C35C(&FuncDispMaster_TypeInfo, v175);
    sub_B2C35C(&FuncTypeDetailMaster_TypeInfo, v176);
    sub_B2C35C(&FunctionCategoryMaster_TypeInfo, v177);
    sub_B2C35C(&FunctionGroupMaster_TypeInfo, v178);
    sub_B2C35C(&FunctionMaster_TypeInfo, v179);
    sub_B2C35C(&GachaAppendMaster_TypeInfo, v180);
    sub_B2C35C(&GachaBehaviorMaster_TypeInfo, v181);
    sub_B2C35C(&GachaBonusSelectLineupMaster_TypeInfo, v182);
    sub_B2C35C(&GachaBonusSelectMaster_TypeInfo, v183);
    sub_B2C35C(&GachaDetailMaster_TypeInfo, v184);
    sub_B2C35C(&GachaExtraGiftMaster_TypeInfo, v185);
    sub_B2C35C(&GachaGroupMaster_TypeInfo, v186);
    sub_B2C35C(&GachaImageMaster_TypeInfo, v187);
    sub_B2C35C(&GachaMaster_TypeInfo, v188);
    sub_B2C35C(&GachaReleaseMaster_TypeInfo, v189);
    sub_B2C35C(&GachaStoryAdjustMaster_TypeInfo, v190);
    sub_B2C35C(&GachaSubMaster_TypeInfo, v191);
    sub_B2C35C(&GachaTicketMaster_TypeInfo, v192);
    sub_B2C35C(&GiftAddMaster_TypeInfo, v193);
    sub_B2C35C(&GiftDetailMaster_TypeInfo, v194);
    sub_B2C35C(&GiftMaster_TypeInfo, v195);
    sub_B2C35C(&GuideMaster_TypeInfo, v196);
    sub_B2C35C(&HeelPortraitMaster_TypeInfo, v197);
    sub_B2C35C(&IllustratorMaster_TypeInfo, v198);
    sub_B2C35C(&ItemMaster_TypeInfo, v199);
    sub_B2C35C(&ItemSelectMaster_TypeInfo, v200);
    sub_B2C35C(&LoginQuestMaster_TypeInfo, v201);
    sub_B2C35C(&MapButtonMaster_TypeInfo, v202);
    sub_B2C35C(&MapCondMaster_TypeInfo, v203);
    sub_B2C35C(&MapGimmickLayerMaster_TypeInfo, v204);
    sub_B2C35C(&MapGimmickMaster_TypeInfo, v205);
    sub_B2C35C(&MapGimmickPathMaster_TypeInfo, v206);
    sub_B2C35C(&MapGimmickPathReleaseMaster_TypeInfo, v207);
    sub_B2C35C(&MapGimmickReleaseMaster_TypeInfo, v208);
    sub_B2C35C(&MapLayerMaster_TypeInfo, v209);
    sub_B2C35C(&MapMaster_TypeInfo, v210);
    sub_B2C35C(&MaterialFolderMaster_TypeInfo, v211);
    sub_B2C35C(&MstMissionDisplayInfoMaster_TypeInfo, v212);
    sub_B2C35C(&MstMissionMaster_TypeInfo, v213);
    sub_B2C35C(&MyRoomAddMaster_TypeInfo, v214);
    sub_B2C35C(&NewsMaster_TypeInfo, v215);
    sub_B2C35C(&NotEndEventMissionFixMaster_TypeInfo, v216);
    sub_B2C35C(&NpcFollowerMaster_TypeInfo, v217);
    sub_B2C35C(&NpcFollowerReleaseMaster_TypeInfo, v218);
    sub_B2C35C(&NpcServantEquipMaster_TypeInfo, v219);
    sub_B2C35C(&NpcServantFollowerIndividualityMaster_TypeInfo, v220);
    sub_B2C35C(&NpcServantFollowerMaster_TypeInfo, v221);
    sub_B2C35C(&OpeningMovieMaster_TypeInfo, v222);
    sub_B2C35C(&OtherUserGameMaster_TypeInfo, v223);
    sub_B2C35C(&PartialMaintenanceMaster_TypeInfo, v224);
    sub_B2C35C(&PickupUserFollowerMaster_TypeInfo, v225);
    sub_B2C35C(&PrivilegeMaster_TypeInfo, v226);
    sub_B2C35C(&QuestAddMaster_TypeInfo, v227);
    sub_B2C35C(&QuestBehaviorMaster_TypeInfo, v228);
    sub_B2C35C(&QuestConsumeItemMaster_TypeInfo, v229);
    sub_B2C35C(&QuestDateRangeMaster_TypeInfo, v230);
    sub_B2C35C(&QuestGroupMaster_TypeInfo, v231);
    sub_B2C35C(&QuestHintMaster_TypeInfo, v232);
    sub_B2C35C(&QuestMaster_TypeInfo, v233);
    sub_B2C35C(&QuestMessageMaster_TypeInfo, v234);
    sub_B2C35C(&QuestPhaseDetailAddMaster_TypeInfo, v235);
    sub_B2C35C(&QuestPhaseDetailMaster_TypeInfo, v236);
    sub_B2C35C(&QuestPhaseMaster_TypeInfo, v237);
    sub_B2C35C(&QuestPickupMaster_TypeInfo, v238);
    sub_B2C35C(&QuestRacePointMaster_TypeInfo, v239);
    sub_B2C35C(&QuestRandomGroupMaster_TypeInfo, v240);
    sub_B2C35C(&QuestReleaseMaster_TypeInfo, v241);
    sub_B2C35C(&QuestReleaseOverwriteMaster_TypeInfo, v242);
    sub_B2C35C(&QuestResetMaster_TypeInfo, v243);
    sub_B2C35C(&QuestRestrictionInfoMaster_TypeInfo, v244);
    sub_B2C35C(&QuestRestrictionMaster_TypeInfo, v245);
    sub_B2C35C(&QuestScriptBranchMaterialMaster_TypeInfo, v246);
    sub_B2C35C(&QuestScriptMaster_TypeInfo, v247);
    sub_B2C35C(&QuestScriptMaterialNextMaster_TypeInfo, v248);
    sub_B2C35C(&QuestScriptMaterialOverwriteMaster_TypeInfo, v249);
    sub_B2C35C(&QuestScriptReleaseMaster_TypeInfo, v250);
    sub_B2C35C(&QuestSpotReleaseMaster_TypeInfo, v251);
    sub_B2C35C(&RecoverMaster_TypeInfo, v252);
    sub_B2C35C(&ReprintStageMaster_TypeInfo, v253);
    sub_B2C35C(&RestrictionBaseMaster_TypeInfo, v254);
    sub_B2C35C(&RestrictionMaster_TypeInfo, v255);
    sub_B2C35C(&RestrictionMessageMaster_TypeInfo, v256);
    sub_B2C35C(&RestrictionSlotDetailMaster_TypeInfo, v257);
    sub_B2C35C(&RestrictionSlotMaster_TypeInfo, v258);
    sub_B2C35C(&RestrictionWholeMaster_TypeInfo, v259);
    sub_B2C35C(&ServantAddMaster_TypeInfo, v260);
    sub_B2C35C(&ServantAnimationOverwriteMaster_TypeInfo, v261);
    sub_B2C35C(&ServantAppendPassiveSkillMaster_TypeInfo, v262);
    sub_B2C35C(&ServantCardAddMaster_TypeInfo, v263);
    sub_B2C35C(&ServantCardMaster_TypeInfo, v264);
    sub_B2C35C(&ServantChangeMaster_TypeInfo, v265);
    sub_B2C35C(&ServantClassMaster_TypeInfo, v266);
    sub_B2C35C(&ServantCollectionMaster_TypeInfo, v267);
    sub_B2C35C(&ServantCommandCodeUnlockMaster_TypeInfo, v268);
    sub_B2C35C(&ServantCommentAddMaster_TypeInfo, v269);
    sub_B2C35C(&ServantCommentMaster_TypeInfo, v270);
    sub_B2C35C(&ServantCostumeMaster_TypeInfo, v271);
    sub_B2C35C(&ServantCostumeReleaseMaster_TypeInfo, v272);
    sub_B2C35C(&ServantExceedMaster_TypeInfo, v273);
    sub_B2C35C(&ServantExpMaster_TypeInfo, v274);
    sub_B2C35C(&ServantFilterMaster_TypeInfo, v275);
    sub_B2C35C(&ServantFlagMaster_TypeInfo, v276);
    sub_B2C35C(&ServantFlagReleaseMaster_TypeInfo, v277);
    sub_B2C35C(&ServantGroupMaster_TypeInfo, v278);
    sub_B2C35C(&ServantIndividualityMaster_TypeInfo, v279);
    sub_B2C35C(&ServantLimitAddMaster_TypeInfo, v280);
    sub_B2C35C(&ServantLimitImageMaster_TypeInfo, v281);
    sub_B2C35C(&ServantLimitMaster_TypeInfo, v282);
    sub_B2C35C(&ServantLimitSpoilerProtectionMaster_TypeInfo, v283);
    sub_B2C35C(&ServantLvDetailMaster_TypeInfo, v284);
    sub_B2C35C(&ServantMaster_TypeInfo, v285);
    sub_B2C35C(&ServantMaterialFolderMaster_TypeInfo, v286);
    sub_B2C35C(&ServantOverwriteMaster_TypeInfo, v287);
    sub_B2C35C(&ServantPassiveSkillMaster_TypeInfo, v288);
    sub_B2C35C(&ServantPassiveSkillReleaseMaster_TypeInfo, v289);
    sub_B2C35C(&ServantProfileMaster_TypeInfo, v290);
    sub_B2C35C(&ServantProfilePushMaster_TypeInfo, v291);
    sub_B2C35C(&ServantRarityMaster_TypeInfo, v292);
    sub_B2C35C(&ServantScriptAddMaster_TypeInfo, v293);
    sub_B2C35C(&ServantScriptMaster_TypeInfo, v294);
    sub_B2C35C(&ServantScriptMultipleMaster_TypeInfo, v295);
    sub_B2C35C(&ServantSkillMaster_TypeInfo, v296);
    sub_B2C35C(&ServantSkillReleaseMaster_TypeInfo, v297);
    sub_B2C35C(&ServantTreasureDeviceAddMaster_TypeInfo, v298);
    sub_B2C35C(&ServantTreasureDeviceDamageMaster_TypeInfo, v299);
    sub_B2C35C(&ServantTreasureDeviceReleaseMaster_TypeInfo, v300);
    sub_B2C35C(&ServantTreasureDvcMaster_TypeInfo, v301);
    sub_B2C35C(&ServantVoiceMaster_TypeInfo, v302);
    sub_B2C35C(&ServantVoiceRelationMaster_TypeInfo, v303);
    sub_B2C35C(&SetItemMaster_TypeInfo, v304);
    sub_B2C35C(&ShopActionMaster_TypeInfo, v305);
    sub_B2C35C(&ShopDetailMaster_TypeInfo, v306);
    sub_B2C35C(&ShopGroupMaster_TypeInfo, v307);
    sub_B2C35C(&ShopMaster_TypeInfo, v308);
    sub_B2C35C(&ShopReleaseMaster_TypeInfo, v309);
    sub_B2C35C(&ShopScriptMaster_TypeInfo, v310);
    sub_B2C35C(&SkillAddMaster_TypeInfo, v311);
    sub_B2C35C(&SkillDetailMaster_TypeInfo, v312);
    sub_B2C35C(&SkillGroupMaster_TypeInfo, v313);
    sub_B2C35C(&SkillGroupOverwriteMaster_TypeInfo, v314);
    sub_B2C35C(&SkillIndividualityMaster_TypeInfo, v315);
    sub_B2C35C(&SkillLvMaster_TypeInfo, v316);
    sub_B2C35C(&SkillMaster_TypeInfo, v317);
    sub_B2C35C(&SpotAddMaster_TypeInfo, v318);
    sub_B2C35C(&SpotImageMaster_TypeInfo, v319);
    sub_B2C35C(&SpotLayerMaster_TypeInfo, v320);
    sub_B2C35C(&SpotMaster_TypeInfo, v321);
    sub_B2C35C(&SpotPathMaster_TypeInfo, v322);
    sub_B2C35C(&SpotRoadMaster_TypeInfo, v323);
    sub_B2C35C(&StageMaster_TypeInfo, v324);
    sub_B2C35C(&StatusEffectPosOverwriteMaster_TypeInfo, v325);
    sub_B2C35C(&StoneShopMaster_TypeInfo, v326);
    sub_B2C35C(&SubEquipMaster_TypeInfo, v327);
    sub_B2C35C(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v328);
    sub_B2C35C(&SvtCoinMaster_TypeInfo, v329);
    sub_B2C35C(&SvtMaterialTdMaster_TypeInfo, v330);
    sub_B2C35C(&SvtMultiPortraitMaster_TypeInfo, v331);
    sub_B2C35C(&TblFriendMaster_TypeInfo, v332);
    sub_B2C35C(&TblUserMaster_TypeInfo, v333);
    sub_B2C35C(&TelopMaster_TypeInfo, v334);
    sub_B2C35C(&TerminalOverwriteMaster_TypeInfo, v335);
    sub_B2C35C(&TipsBattleMaster_TypeInfo, v336);
    sub_B2C35C(&TotalBoxGachaMaster_TypeInfo, v337);
    sub_B2C35C(&TotalEventPointMaster_TypeInfo, v338);
    sub_B2C35C(&TotalEventRaceMaster_TypeInfo, v339);
    sub_B2C35C(&TotalEventRaidMaster_TypeInfo, v340);
    sub_B2C35C(&TotalLoginMaster_TypeInfo, v341);
    sub_B2C35C(&TreasureBoxGiftMaster_TypeInfo, v342);
    sub_B2C35C(&TreasureBoxMaster_TypeInfo, v343);
    sub_B2C35C(&TreasureBoxTalkMaster_TypeInfo, v344);
    sub_B2C35C(&TreasureDeviceSequenceWeightMaster_TypeInfo, v345);
    sub_B2C35C(&TreasureDvcDetailMaster_TypeInfo, v346);
    sub_B2C35C(&TreasureDvcLvMaster_TypeInfo, v347);
    sub_B2C35C(&TreasureDvcMaster_TypeInfo, v348);
    sub_B2C35C(&UpdateProfileDialogInfoMaster_TypeInfo, v349);
    sub_B2C35C(&UserAccessaryMaster_TypeInfo, v350);
    sub_B2C35C(&UserBlacklistMaster_TypeInfo, v351);
    sub_B2C35C(&UserBoxGachaMaster_TypeInfo, v352);
    sub_B2C35C(&UserClassBoardSquareMaster_TypeInfo, v353);
    sub_B2C35C(&UserCoinRoomMaster_TypeInfo, v354);
    sub_B2C35C(&UserCombineExpMaster_TypeInfo, v355);
    sub_B2C35C(&UserCommandCodeCollectionMaster_TypeInfo, v356);
    sub_B2C35C(&UserCommandCodeMaster_TypeInfo, v357);
    sub_B2C35C(&UserContinueMaster_TypeInfo, v358);
    sub_B2C35C(&UserDeckMaster_TypeInfo, v359);
    sub_B2C35C(&UserDeleteReservationMaster_TypeInfo, v360);
    sub_B2C35C(&UserEquipMaster_TypeInfo, v361);
    sub_B2C35C(&UserEventAlloutBattleMaster_TypeInfo, v362);
    sub_B2C35C(&UserEventBoardGameTokenMaster_TypeInfo, v363);
    sub_B2C35C(&UserEventCooltimeRewardMaster_TypeInfo, v364);
    sub_B2C35C(&UserEventDataLostMaster_TypeInfo, v365);
    sub_B2C35C(&UserEventDeckMaster_TypeInfo, v366);
    sub_B2C35C(&UserEventDiggingMaster_TypeInfo, v367);
    sub_B2C35C(&UserEventExpeditionMaster_TypeInfo, v368);
    sub_B2C35C(&UserEventFortificationMaster_TypeInfo, v369);
    sub_B2C35C(&UserEventMapMaster_TypeInfo, v370);
    sub_B2C35C(&UserEventMaster_TypeInfo, v371);
    sub_B2C35C(&UserEventMissionCondDetailMaster_TypeInfo, v372);
    sub_B2C35C(&UserEventMissionFixMaster_TypeInfo, v373);
    sub_B2C35C(&UserEventMissionMaster_TypeInfo, v374);
    sub_B2C35C(&UserEventPointMaster_TypeInfo, v375);
    sub_B2C35C(&UserEventQuestCooltimeMaster_TypeInfo, v376);
    sub_B2C35C(&UserEventRaceMaster_TypeInfo, v377);
    sub_B2C35C(&UserEventRaidMaster_TypeInfo, v378);
    sub_B2C35C(&UserEventRandomMissionMaster_TypeInfo, v379);
    sub_B2C35C(&UserEventServantFatigueMaster_TypeInfo, v380);
    sub_B2C35C(&UserEventServantPointMaster_TypeInfo, v381);
    sub_B2C35C(&UserEventSpotMaster_TypeInfo, v382);
    sub_B2C35C(&UserExchangeSvtMaster_TypeInfo, v383);
    sub_B2C35C(&UserExpMaster_TypeInfo, v384);
    sub_B2C35C(&UserFollowMaster_TypeInfo, v385);
    sub_B2C35C(&UserFollowerMaster_TypeInfo, v386);
    sub_B2C35C(&UserFormationMaster_TypeInfo, v387);
    sub_B2C35C(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v388);
    sub_B2C35C(&UserFriendRequestHistoryMaster_TypeInfo, v389);
    sub_B2C35C(&UserGachaDrawLogMaster_TypeInfo, v390);
    sub_B2C35C(&UserGachaExtraCountMaster_TypeInfo, v391);
    sub_B2C35C(&UserGachaHistoryMaster_TypeInfo, v392);
    sub_B2C35C(&UserGachaMaster_TypeInfo, v393);
    sub_B2C35C(&UserGameMaster_TypeInfo, v394);
    sub_B2C35C(&UserHeelPortraitMaster_TypeInfo, v395);
    sub_B2C35C(&UserItemMaster_TypeInfo, v396);
    sub_B2C35C(&UserLoginMaster_TypeInfo, v397);
    sub_B2C35C(&UserMaster_TypeInfo, v398);
    sub_B2C35C(&UserNpcSvtRecordMaster_TypeInfo, v399);
    sub_B2C35C(&UserPresentBoxMaster_TypeInfo, v400);
    sub_B2C35C(&UserPresentHistoryMaster_TypeInfo, v401);
    sub_B2C35C(&UserPrivilegeMaster_TypeInfo, v402);
    sub_B2C35C(&UserQuestInfoMaster_TypeInfo, v403);
    sub_B2C35C(&UserQuestMaster_TypeInfo, v404);
    sub_B2C35C(&UserQuestRecordMaster_TypeInfo, v405);
    sub_B2C35C(&UserQuestRouteMaster_TypeInfo, v406);
    sub_B2C35C(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v407);
    sub_B2C35C(&UserServantAppendPassiveSkillMaster_TypeInfo, v408);
    sub_B2C35C(&UserServantCollectionMaster_TypeInfo, v409);
    sub_B2C35C(&UserServantCommandCardMaster_TypeInfo, v410);
    sub_B2C35C(&UserServantCommandCodeMaster_TypeInfo, v411);
    sub_B2C35C(&UserServantLeaderMaster_TypeInfo, v412);
    sub_B2C35C(&UserServantMaster_TypeInfo, v413);
    sub_B2C35C(&UserServantStorageMaster_TypeInfo, v414);
    sub_B2C35C(&UserServantVoicePlayedMaster_TypeInfo, v415);
    sub_B2C35C(&UserShopMaster_TypeInfo, v416);
    sub_B2C35C(&UserSubEquipMaster_TypeInfo, v417);
    sub_B2C35C(&UserSuperBossMaster_TypeInfo, v418);
    sub_B2C35C(&UserSupportDeckMaster_TypeInfo, v419);
    sub_B2C35C(&UserSvtCoinMaster_TypeInfo, v420);
    sub_B2C35C(&ViewEnemyMaster_TypeInfo, v421);
    sub_B2C35C(&ViewQuestEnemyInfoMaster_TypeInfo, v422);
    sub_B2C35C(&ViewQuestInfoMaster_TypeInfo, v423);
    sub_B2C35C(&ViewWaveEnemyMaster_TypeInfo, v424);
    sub_B2C35C(&VoiceClosedMessageMaster_TypeInfo, v425);
    sub_B2C35C(&VoiceCondMaster_TypeInfo, v426);
    sub_B2C35C(&VoiceMaster_TypeInfo, v427);
    sub_B2C35C(&VoiceMaterialCondMaster_TypeInfo, v428);
    sub_B2C35C(&VoicePlayCondMaster_TypeInfo, v429);
    sub_B2C35C(&VoicePlayGroupMaster_TypeInfo, v430);
    sub_B2C35C(&VoiceReleaseMaster_TypeInfo, v431);
    sub_B2C35C(&WarAddMaster_TypeInfo, v432);
    sub_B2C35C(&WarBoardAIMaster_TypeInfo, v433);
    sub_B2C35C(&WarBoardActionPointClassMaster_TypeInfo, v434);
    sub_B2C35C(&WarBoardActionPointMaster_TypeInfo, v435);
    sub_B2C35C(&WarBoardActionTrendConditionMaster_TypeInfo, v436);
    sub_B2C35C(&WarBoardActionTrendGroupMaster_TypeInfo, v437);
    sub_B2C35C(&WarBoardActionTrendMaster_TypeInfo, v438);
    sub_B2C35C(&WarBoardCommonReleaseMaster_TypeInfo, v439);
    sub_B2C35C(&WarBoardDataMaster_TypeInfo, v440);
    sub_B2C35C(&WarBoardEffectMaster_TypeInfo, v441);
    sub_B2C35C(&WarBoardEventMaster_TypeInfo, v442);
    sub_B2C35C(&WarBoardEventScriptMaster_TypeInfo, v443);
    sub_B2C35C(&WarBoardFutureActionTrendMaster_TypeInfo, v444);
    sub_B2C35C(&WarBoardIndividualityClassMaster_TypeInfo, v445);
    sub_B2C35C(&WarBoardItemMaster_TypeInfo, v446);
    sub_B2C35C(&WarBoardMaster_TypeInfo, v447);
    sub_B2C35C(&WarBoardMessageMaster_TypeInfo, v448);
    sub_B2C35C(&WarBoardMessageScriptMaster_TypeInfo, v449);
    sub_B2C35C(&WarBoardOnboardSkillMaster_TypeInfo, v450);
    sub_B2C35C(&WarBoardPartySkillMaster_TypeInfo, v451);
    sub_B2C35C(&WarBoardQuestMaster_TypeInfo, v452);
    sub_B2C35C(&WarBoardRatingBaseMaster_TypeInfo, v453);
    sub_B2C35C(&WarBoardRatingOffsetGroupMaster_TypeInfo, v454);
    sub_B2C35C(&WarBoardRatingOffsetMaster_TypeInfo, v455);
    sub_B2C35C(&WarBoardReinforcementsMaster_TypeInfo, v456);
    sub_B2C35C(&WarBoardRoadMaster_TypeInfo, v457);
    sub_B2C35C(&WarBoardSquareIndexGroupMaster_TypeInfo, v458);
    sub_B2C35C(&WarBoardSquareMaster_TypeInfo, v459);
    sub_B2C35C(&WarBoardStageBossMaster_TypeInfo, v460);
    sub_B2C35C(&WarBoardStageDetailMaster_TypeInfo, v461);
    sub_B2C35C(&WarBoardStageLayoutMaster_TypeInfo, v462);
    sub_B2C35C(&WarBoardStageMaster_TypeInfo, v463);
    sub_B2C35C(&WarBoardStageNpcMaster_TypeInfo, v464);
    sub_B2C35C(&WarBoardStagePieceDetailMaster_TypeInfo, v465);
    sub_B2C35C(&WarBoardStageReinforcementsMaster_TypeInfo, v466);
    sub_B2C35C(&WarBoardStageWallMaster_TypeInfo, v467);
    sub_B2C35C(&WarBoardTacticalTrendMaster_TypeInfo, v468);
    sub_B2C35C(&WarBoardTreasureMaster_TypeInfo, v469);
    sub_B2C35C(&WarGroupMaster_TypeInfo, v470);
    sub_B2C35C(&WarMaster_TypeInfo, v471);
    sub_B2C35C(&WarQuestSelectionMaster_TypeInfo, v472);
    byte_418906C = 1;
  }
  v473 = sub_B2C374(DataMasterBase___TypeInfo, 471LL);
  v474 = (ServantMaster_o *)sub_B2C42C(ServantMaster_TypeInfo);
  ServantMaster___ctor(v474, 0LL);
  if ( !v473 )
    sub_B2C434(v475, v476);
  if ( !v474 || (v475 = sub_B2C41C(v474, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
  {
    v483 = (_DWORD *)(v473 + 24);
    if ( !*(_DWORD *)(v473 + 24) )
      goto LABEL_631;
    *(_QWORD *)(v473 + 32) = v474;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 32),
      (System_Int32_array **)v474,
      v477,
      v478,
      v479,
      v480,
      v481,
      v482);
    v484 = (ServantClassMaster_o *)sub_B2C42C(ServantClassMaster_TypeInfo);
    ServantClassMaster___ctor(v484, 0LL);
    if ( v484 )
    {
      v475 = sub_B2C41C(v484, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 1u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 40) = v484;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 40),
      (System_Int32_array **)v484,
      v485,
      v486,
      v487,
      v488,
      v489,
      v490);
    v491 = (ServantCommentMaster_o *)sub_B2C42C(ServantCommentMaster_TypeInfo);
    ServantCommentMaster___ctor(v491, 0LL);
    if ( v491 )
    {
      v475 = sub_B2C41C(v491, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 2u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 48) = v491;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 48),
      (System_Int32_array **)v491,
      v492,
      v493,
      v494,
      v495,
      v496,
      v497);
    v498 = (ServantProfileMaster_o *)sub_B2C42C(ServantProfileMaster_TypeInfo);
    ServantProfileMaster___ctor(v498, 0LL);
    if ( v498 )
    {
      v475 = sub_B2C41C(v498, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 3u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 56) = v498;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 56),
      (System_Int32_array **)v498,
      v499,
      v500,
      v501,
      v502,
      v503,
      v504);
    v505 = (WarMaster_o *)sub_B2C42C(WarMaster_TypeInfo);
    WarMaster___ctor(v505, 0LL);
    if ( v505 )
    {
      v475 = sub_B2C41C(v505, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 4u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 64) = v505;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 64),
      (System_Int32_array **)v505,
      v506,
      v507,
      v508,
      v509,
      v510,
      v511);
    v512 = (UserMaster_o *)sub_B2C42C(UserMaster_TypeInfo);
    UserMaster___ctor(v512, 0LL);
    if ( v512 )
    {
      v475 = sub_B2C41C(v512, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 5u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 72) = v512;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 72),
      (System_Int32_array **)v512,
      v513,
      v514,
      v515,
      v516,
      v517,
      v518);
    v519 = (UserGameMaster_o *)sub_B2C42C(UserGameMaster_TypeInfo);
    UserGameMaster___ctor(v519, 0LL);
    if ( v519 )
    {
      v475 = sub_B2C41C(v519, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 6u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 80) = v519;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 80),
      (System_Int32_array **)v519,
      v520,
      v521,
      v522,
      v523,
      v524,
      v525);
    v526 = (TblUserMaster_o *)sub_B2C42C(TblUserMaster_TypeInfo);
    TblUserMaster___ctor(v526, 0LL);
    if ( v526 )
    {
      v475 = sub_B2C41C(v526, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 7u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 88) = v526;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 88),
      (System_Int32_array **)v526,
      v527,
      v528,
      v529,
      v530,
      v531,
      v532);
    v533 = (UserItemMaster_o *)sub_B2C42C(UserItemMaster_TypeInfo);
    UserItemMaster___ctor(v533, 0LL);
    if ( v533 )
    {
      v475 = sub_B2C41C(v533, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 8u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 96) = v533;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 96),
      (System_Int32_array **)v533,
      v534,
      v535,
      v536,
      v537,
      v538,
      v539);
    v540 = (UserServantMaster_o *)sub_B2C42C(UserServantMaster_TypeInfo);
    UserServantMaster___ctor(v540, 0LL);
    if ( v540 )
    {
      v475 = sub_B2C41C(v540, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 9u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 104) = v540;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 104),
      (System_Int32_array **)v540,
      v541,
      v542,
      v543,
      v544,
      v545,
      v546);
    v547 = (UserServantStorageMaster_o *)sub_B2C42C(UserServantStorageMaster_TypeInfo);
    UserServantStorageMaster___ctor(v547, 0LL);
    if ( v547 )
    {
      v475 = sub_B2C41C(v547, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0xAu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 112) = v547;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 112),
      (System_Int32_array **)v547,
      v548,
      v549,
      v550,
      v551,
      v552,
      v553);
    v554 = (UserAccessaryMaster_o *)sub_B2C42C(UserAccessaryMaster_TypeInfo);
    UserAccessaryMaster___ctor(v554, 0LL);
    if ( v554 )
    {
      v475 = sub_B2C41C(v554, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0xBu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 120) = v554;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 120),
      (System_Int32_array **)v554,
      v555,
      v556,
      v557,
      v558,
      v559,
      v560);
    v561 = (UserQuestMaster_o *)sub_B2C42C(UserQuestMaster_TypeInfo);
    UserQuestMaster___ctor(v561, 0LL);
    if ( v561 )
    {
      v475 = sub_B2C41C(v561, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0xCu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 128) = v561;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 128),
      (System_Int32_array **)v561,
      v562,
      v563,
      v564,
      v565,
      v566,
      v567);
    v568 = (BattleMaster_o *)sub_B2C42C(BattleMaster_TypeInfo);
    BattleMaster___ctor(v568, 0LL);
    if ( v568 )
    {
      v475 = sub_B2C41C(v568, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0xDu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 136) = v568;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 136),
      (System_Int32_array **)v568,
      v569,
      v570,
      v571,
      v572,
      v573,
      v574);
    v575 = (OtherUserGameMaster_o *)sub_B2C42C(OtherUserGameMaster_TypeInfo);
    OtherUserGameMaster___ctor(v575, 0LL);
    if ( v575 )
    {
      v475 = sub_B2C41C(v575, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0xEu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 144) = v575;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 144),
      (System_Int32_array **)v575,
      v576,
      v577,
      v578,
      v579,
      v580,
      v581);
    v582 = (TblFriendMaster_o *)sub_B2C42C(TblFriendMaster_TypeInfo);
    TblFriendMaster___ctor(v582, 0LL);
    if ( v582 )
    {
      v475 = sub_B2C41C(v582, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0xFu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 152) = v582;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 152),
      (System_Int32_array **)v582,
      v583,
      v584,
      v585,
      v586,
      v587,
      v588);
    v589 = (AreaMaster_o *)sub_B2C42C(AreaMaster_TypeInfo);
    AreaMaster___ctor(v589, 0LL);
    if ( v589 )
    {
      v475 = sub_B2C41C(v589, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x10u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 160) = v589;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 160),
      (System_Int32_array **)v589,
      v590,
      v591,
      v592,
      v593,
      v594,
      v595);
    v596 = (ServantCardMaster_o *)sub_B2C42C(ServantCardMaster_TypeInfo);
    ServantCardMaster___ctor(v596, 0LL);
    if ( v596 )
    {
      v475 = sub_B2C41C(v596, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x11u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 168) = v596;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 168),
      (System_Int32_array **)v596,
      v597,
      v598,
      v599,
      v600,
      v601,
      v602);
    v603 = (EventMaster_o *)sub_B2C42C(EventMaster_TypeInfo);
    EventMaster___ctor(v603, 0LL);
    if ( v603 )
    {
      v475 = sub_B2C41C(v603, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x12u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 176) = v603;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 176),
      (System_Int32_array **)v603,
      v604,
      v605,
      v606,
      v607,
      v608,
      v609);
    v610 = (ItemMaster_o *)sub_B2C42C(ItemMaster_TypeInfo);
    ItemMaster___ctor(v610, 0LL);
    if ( v610 )
    {
      v475 = sub_B2C41C(v610, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x13u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 184) = v610;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 184),
      (System_Int32_array **)v610,
      v611,
      v612,
      v613,
      v614,
      v615,
      v616);
    v617 = (QuestMaster_o *)sub_B2C42C(QuestMaster_TypeInfo);
    QuestMaster___ctor(v617, 0LL);
    if ( v617 )
    {
      v475 = sub_B2C41C(v617, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x14u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 192) = v617;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 192),
      (System_Int32_array **)v617,
      v618,
      v619,
      v620,
      v621,
      v622,
      v623);
    v624 = (QuestAddMaster_o *)sub_B2C42C(QuestAddMaster_TypeInfo);
    QuestAddMaster___ctor(v624, 0LL);
    if ( v624 )
    {
      v475 = sub_B2C41C(v624, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x15u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 200) = v624;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 200),
      (System_Int32_array **)v624,
      v625,
      v626,
      v627,
      v628,
      v629,
      v630);
    v631 = (QuestReleaseMaster_o *)sub_B2C42C(QuestReleaseMaster_TypeInfo);
    QuestReleaseMaster___ctor(v631, 0LL);
    if ( v631 )
    {
      v475 = sub_B2C41C(v631, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x16u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 208) = v631;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 208),
      (System_Int32_array **)v631,
      v632,
      v633,
      v634,
      v635,
      v636,
      v637);
    v638 = (QuestDateRangeMaster_o *)sub_B2C42C(QuestDateRangeMaster_TypeInfo);
    QuestDateRangeMaster___ctor(v638, 0LL);
    if ( v638 )
    {
      v475 = sub_B2C41C(v638, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x17u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 216) = v638;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 216),
      (System_Int32_array **)v638,
      v639,
      v640,
      v641,
      v642,
      v643,
      v644);
    v645 = (QuestPhaseMaster_o *)sub_B2C42C(QuestPhaseMaster_TypeInfo);
    QuestPhaseMaster___ctor(v645, 0LL);
    if ( v645 )
    {
      v475 = sub_B2C41C(v645, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x18u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 224) = v645;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 224),
      (System_Int32_array **)v645,
      v646,
      v647,
      v648,
      v649,
      v650,
      v651);
    v652 = (QuestPhaseDetailMaster_o *)sub_B2C42C(QuestPhaseDetailMaster_TypeInfo);
    QuestPhaseDetailMaster___ctor(v652, 0LL);
    if ( v652 )
    {
      v475 = sub_B2C41C(v652, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x19u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 232) = v652;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 232),
      (System_Int32_array **)v652,
      v653,
      v654,
      v655,
      v656,
      v657,
      v658);
    v659 = (QuestGroupMaster_o *)sub_B2C42C(QuestGroupMaster_TypeInfo);
    QuestGroupMaster___ctor(v659, 0LL);
    if ( v659 )
    {
      v475 = sub_B2C41C(v659, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x1Au )
      goto LABEL_631;
    *(_QWORD *)(v473 + 240) = v659;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 240),
      (System_Int32_array **)v659,
      v660,
      v661,
      v662,
      v663,
      v664,
      v665);
    v666 = (QuestRandomGroupMaster_o *)sub_B2C42C(QuestRandomGroupMaster_TypeInfo);
    QuestRandomGroupMaster___ctor(v666, 0LL);
    if ( v666 )
    {
      v475 = sub_B2C41C(v666, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x1Bu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 248) = v666;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 248),
      (System_Int32_array **)v666,
      v667,
      v668,
      v669,
      v670,
      v671,
      v672);
    v673 = (QuestConsumeItemMaster_o *)sub_B2C42C(QuestConsumeItemMaster_TypeInfo);
    QuestConsumeItemMaster___ctor(v673, 0LL);
    if ( v673 )
    {
      v475 = sub_B2C41C(v673, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x1Cu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 256) = v673;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 256),
      (System_Int32_array **)v673,
      v674,
      v675,
      v676,
      v677,
      v678,
      v679);
    v680 = (QuestMessageMaster_o *)sub_B2C42C(QuestMessageMaster_TypeInfo);
    QuestMessageMaster___ctor(v680, 0LL);
    if ( v680 )
    {
      v475 = sub_B2C41C(v680, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x1Du )
      goto LABEL_631;
    *(_QWORD *)(v473 + 264) = v680;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 264),
      (System_Int32_array **)v680,
      v681,
      v682,
      v683,
      v684,
      v685,
      v686);
    v687 = (UserQuestInfoMaster_o *)sub_B2C42C(UserQuestInfoMaster_TypeInfo);
    UserQuestInfoMaster___ctor(v687, 0LL);
    if ( v687 )
    {
      v475 = sub_B2C41C(v687, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x1Eu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 272) = v687;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 272),
      (System_Int32_array **)v687,
      v688,
      v689,
      v690,
      v691,
      v692,
      v693);
    v694 = (UserQuestRecordMaster_o *)sub_B2C42C(UserQuestRecordMaster_TypeInfo);
    UserQuestRecordMaster___ctor(v694, 0LL);
    if ( v694 )
    {
      v475 = sub_B2C41C(v694, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x1Fu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 280) = v694;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 280),
      (System_Int32_array **)v694,
      v695,
      v696,
      v697,
      v698,
      v699,
      v700);
    v701 = (ViewQuestInfoMaster_o *)sub_B2C42C(ViewQuestInfoMaster_TypeInfo);
    ViewQuestInfoMaster___ctor(v701, 0LL);
    if ( v701 )
    {
      v475 = sub_B2C41C(v701, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x20u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 288) = v701;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 288),
      (System_Int32_array **)v701,
      v702,
      v703,
      v704,
      v705,
      v706,
      v707);
    v708 = (ViewEnemyMaster_o *)sub_B2C42C(ViewEnemyMaster_TypeInfo);
    ViewEnemyMaster___ctor(v708, 0LL);
    if ( v708 )
    {
      v475 = sub_B2C41C(v708, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x21u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 296) = v708;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 296),
      (System_Int32_array **)v708,
      v709,
      v710,
      v711,
      v712,
      v713,
      v714);
    v715 = (ViewQuestEnemyInfoMaster_o *)sub_B2C42C(ViewQuestEnemyInfoMaster_TypeInfo);
    ViewQuestEnemyInfoMaster___ctor(v715, 0LL);
    if ( v715 )
    {
      v475 = sub_B2C41C(v715, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x22u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 304) = v715;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 304),
      (System_Int32_array **)v715,
      v716,
      v717,
      v718,
      v719,
      v720,
      v721);
    v722 = (BlankEarthSpotMaster_o *)sub_B2C42C(BlankEarthSpotMaster_TypeInfo);
    BlankEarthSpotMaster___ctor(v722, 0LL);
    if ( v722 )
    {
      v475 = sub_B2C41C(v722, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x23u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 312) = v722;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 312),
      (System_Int32_array **)v722,
      v723,
      v724,
      v725,
      v726,
      v727,
      v728);
    v729 = (SpotMaster_o *)sub_B2C42C(SpotMaster_TypeInfo);
    SpotMaster___ctor(v729, 0LL);
    if ( v729 )
    {
      v475 = sub_B2C41C(v729, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x24u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 320) = v729;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 320),
      (System_Int32_array **)v729,
      v730,
      v731,
      v732,
      v733,
      v734,
      v735);
    v736 = (SpotImageMaster_o *)sub_B2C42C(SpotImageMaster_TypeInfo);
    SpotImageMaster___ctor(v736, 0LL);
    if ( v736 )
    {
      v475 = sub_B2C41C(v736, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x25u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 328) = v736;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 328),
      (System_Int32_array **)v736,
      v737,
      v738,
      v739,
      v740,
      v741,
      v742);
    v743 = (SpotRoadMaster_o *)sub_B2C42C(SpotRoadMaster_TypeInfo);
    SpotRoadMaster___ctor(v743, 0LL);
    if ( v743 )
    {
      v475 = sub_B2C41C(v743, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x26u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 336) = v743;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 336),
      (System_Int32_array **)v743,
      v744,
      v745,
      v746,
      v747,
      v748,
      v749);
    v750 = (SpotPathMaster_o *)sub_B2C42C(SpotPathMaster_TypeInfo);
    SpotPathMaster___ctor(v750, 0LL);
    if ( v750 )
    {
      v475 = sub_B2C41C(v750, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x27u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 344) = v750;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 344),
      (System_Int32_array **)v750,
      v751,
      v752,
      v753,
      v754,
      v755,
      v756);
    v757 = (SpotAddMaster_o *)sub_B2C42C(SpotAddMaster_TypeInfo);
    SpotAddMaster___ctor(v757, 0LL);
    if ( v757 )
    {
      v475 = sub_B2C41C(v757, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x28u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 352) = v757;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 352),
      (System_Int32_array **)v757,
      v758,
      v759,
      v760,
      v761,
      v762,
      v763);
    v764 = (MapGimmickMaster_o *)sub_B2C42C(MapGimmickMaster_TypeInfo);
    MapGimmickMaster___ctor(v764, 0LL);
    if ( v764 )
    {
      v475 = sub_B2C41C(v764, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x29u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 360) = v764;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 360),
      (System_Int32_array **)v764,
      v765,
      v766,
      v767,
      v768,
      v769,
      v770);
    v771 = (GiftMaster_o *)sub_B2C42C(GiftMaster_TypeInfo);
    GiftMaster___ctor(v771, 0LL);
    if ( v771 )
    {
      v475 = sub_B2C41C(v771, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x2Au )
      goto LABEL_631;
    *(_QWORD *)(v473 + 368) = v771;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 368),
      (System_Int32_array **)v771,
      v772,
      v773,
      v774,
      v775,
      v776,
      v777);
    v778 = (GiftAddMaster_o *)sub_B2C42C(GiftAddMaster_TypeInfo);
    GiftAddMaster___ctor(v778, 0LL);
    if ( v778 )
    {
      v475 = sub_B2C41C(v778, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x2Bu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 376) = v778;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 376),
      (System_Int32_array **)v778,
      v779,
      v780,
      v781,
      v782,
      v783,
      v784);
    v785 = (ShopMaster_o *)sub_B2C42C(ShopMaster_TypeInfo);
    ShopMaster___ctor(v785, 0LL);
    if ( v785 )
    {
      v475 = sub_B2C41C(v785, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x2Cu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 384) = v785;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 384),
      (System_Int32_array **)v785,
      v786,
      v787,
      v788,
      v789,
      v790,
      v791);
    v792 = (StoneShopMaster_o *)sub_B2C42C(StoneShopMaster_TypeInfo);
    StoneShopMaster___ctor(v792, 0LL);
    if ( v792 )
    {
      v475 = sub_B2C41C(v792, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x2Du )
      goto LABEL_631;
    *(_QWORD *)(v473 + 392) = v792;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 392),
      (System_Int32_array **)v792,
      v793,
      v794,
      v795,
      v796,
      v797,
      v798);
    v799 = (BankShopMaster_o *)sub_B2C42C(BankShopMaster_TypeInfo);
    BankShopMaster___ctor(v799, 0LL);
    if ( v799 )
    {
      v475 = sub_B2C41C(v799, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x2Eu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 400) = v799;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 400),
      (System_Int32_array **)v799,
      v800,
      v801,
      v802,
      v803,
      v804,
      v805);
    v806 = (ShopScriptMaster_o *)sub_B2C42C(ShopScriptMaster_TypeInfo);
    ShopScriptMaster___ctor(v806, 0LL);
    if ( v806 )
    {
      v475 = sub_B2C41C(v806, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x2Fu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 408) = v806;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 408),
      (System_Int32_array **)v806,
      v807,
      v808,
      v809,
      v810,
      v811,
      v812);
    v813 = (StageMaster_o *)sub_B2C42C(StageMaster_TypeInfo);
    StageMaster___ctor(v813, 0LL);
    if ( v813 )
    {
      v475 = sub_B2C41C(v813, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x30u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 416) = v813;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 416),
      (System_Int32_array **)v813,
      v814,
      v815,
      v816,
      v817,
      v818,
      v819);
    v820 = (ServantGroupMaster_o *)sub_B2C42C(ServantGroupMaster_TypeInfo);
    ServantGroupMaster___ctor(v820, 0LL);
    if ( v820 )
    {
      v475 = sub_B2C41C(v820, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x31u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 424) = v820;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 424),
      (System_Int32_array **)v820,
      v821,
      v822,
      v823,
      v824,
      v825,
      v826);
    v827 = (ServantLimitMaster_o *)sub_B2C42C(ServantLimitMaster_TypeInfo);
    ServantLimitMaster___ctor(v827, 0LL);
    if ( v827 )
    {
      v475 = sub_B2C41C(v827, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x32u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 432) = v827;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 432),
      (System_Int32_array **)v827,
      v828,
      v829,
      v830,
      v831,
      v832,
      v833);
    v834 = (ServantLimitAddMaster_o *)sub_B2C42C(ServantLimitAddMaster_TypeInfo);
    ServantLimitAddMaster___ctor(v834, 0LL);
    if ( v834 )
    {
      v475 = sub_B2C41C(v834, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x33u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 440) = v834;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 440),
      (System_Int32_array **)v834,
      v835,
      v836,
      v837,
      v838,
      v839,
      v840);
    v841 = (ServantSkillMaster_o *)sub_B2C42C(ServantSkillMaster_TypeInfo);
    ServantSkillMaster___ctor(v841, 0LL);
    if ( v841 )
    {
      v475 = sub_B2C41C(v841, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x34u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 448) = v841;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 448),
      (System_Int32_array **)v841,
      v842,
      v843,
      v844,
      v845,
      v846,
      v847);
    v848 = (ServantPassiveSkillMaster_o *)sub_B2C42C(ServantPassiveSkillMaster_TypeInfo);
    ServantPassiveSkillMaster___ctor(v848, 0LL);
    if ( v848 )
    {
      v475 = sub_B2C41C(v848, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x35u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 456) = v848;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 456),
      (System_Int32_array **)v848,
      v849,
      v850,
      v851,
      v852,
      v853,
      v854);
    v855 = (BgmMaster_o *)sub_B2C42C(BgmMaster_TypeInfo);
    BgmMaster___ctor(v855, 0LL);
    if ( v855 )
    {
      v475 = sub_B2C41C(v855, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x36u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 464) = v855;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 464),
      (System_Int32_array **)v855,
      v856,
      v857,
      v858,
      v859,
      v860,
      v861);
    v862 = (ServantScriptMaster_o *)sub_B2C42C(ServantScriptMaster_TypeInfo);
    ServantScriptMaster___ctor(v862, 0LL);
    if ( v862 )
    {
      v475 = sub_B2C41C(v862, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x37u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 472) = v862;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 472),
      (System_Int32_array **)v862,
      v863,
      v864,
      v865,
      v866,
      v867,
      v868);
    v869 = (NewsMaster_o *)sub_B2C42C(NewsMaster_TypeInfo);
    NewsMaster___ctor(v869, 0LL);
    if ( v869 )
    {
      v475 = sub_B2C41C(v869, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x38u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 480) = v869;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 480),
      (System_Int32_array **)v869,
      v870,
      v871,
      v872,
      v873,
      v874,
      v875);
    v876 = (TelopMaster_o *)sub_B2C42C(TelopMaster_TypeInfo);
    TelopMaster___ctor(v876, 0LL);
    if ( v876 )
    {
      v475 = sub_B2C41C(v876, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x39u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 488) = v876;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 488),
      (System_Int32_array **)v876,
      v877,
      v878,
      v879,
      v880,
      v881,
      v882);
    v883 = (UserExpMaster_o *)sub_B2C42C(UserExpMaster_TypeInfo);
    UserExpMaster___ctor(v883, 0LL);
    if ( v883 )
    {
      v475 = sub_B2C41C(v883, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x3Au )
      goto LABEL_631;
    *(_QWORD *)(v473 + 496) = v883;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 496),
      (System_Int32_array **)v883,
      v884,
      v885,
      v886,
      v887,
      v888,
      v889);
    v890 = (TreasureDvcMaster_o *)sub_B2C42C(TreasureDvcMaster_TypeInfo);
    TreasureDvcMaster___ctor(v890, 0LL);
    if ( v890 )
    {
      v475 = sub_B2C41C(v890, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x3Bu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 504) = v890;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 504),
      (System_Int32_array **)v890,
      v891,
      v892,
      v893,
      v894,
      v895,
      v896);
    v897 = (ServantTreasureDvcMaster_o *)sub_B2C42C(ServantTreasureDvcMaster_TypeInfo);
    ServantTreasureDvcMaster___ctor(v897, 0LL);
    if ( v897 )
    {
      v475 = sub_B2C41C(v897, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x3Cu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 512) = v897;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 512),
      (System_Int32_array **)v897,
      v898,
      v899,
      v900,
      v901,
      v902,
      v903);
    v904 = (SkillMaster_o *)sub_B2C42C(SkillMaster_TypeInfo);
    SkillMaster___ctor(v904, 0LL);
    if ( v904 )
    {
      v475 = sub_B2C41C(v904, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x3Du )
      goto LABEL_631;
    *(_QWORD *)(v473 + 520) = v904;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 520),
      (System_Int32_array **)v904,
      v905,
      v906,
      v907,
      v908,
      v909,
      v910);
    v911 = (SkillLvMaster_o *)sub_B2C42C(SkillLvMaster_TypeInfo);
    SkillLvMaster___ctor(v911, 0LL);
    if ( v911 )
    {
      v475 = sub_B2C41C(v911, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x3Eu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 528) = v911;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 528),
      (System_Int32_array **)v911,
      v912,
      v913,
      v914,
      v915,
      v916,
      v917);
    v918 = (SkillDetailMaster_o *)sub_B2C42C(SkillDetailMaster_TypeInfo);
    SkillDetailMaster___ctor(v918, 0LL);
    if ( v918 )
    {
      v475 = sub_B2C41C(v918, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x3Fu )
      goto LABEL_631;
    *(_QWORD *)(v473 + 536) = v918;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 536),
      (System_Int32_array **)v918,
      v919,
      v920,
      v921,
      v922,
      v923,
      v924);
    v925 = (CommandSpellMaster_o *)sub_B2C42C(CommandSpellMaster_TypeInfo);
    CommandSpellMaster___ctor(v925, 0LL);
    if ( v925 )
    {
      v475 = sub_B2C41C(v925, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x40u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 544) = v925;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 544),
      (System_Int32_array **)v925,
      v926,
      v927,
      v928,
      v929,
      v930,
      v931);
    v932 = (EquipMaster_o *)sub_B2C42C(EquipMaster_TypeInfo);
    EquipMaster___ctor(v932, 0LL);
    if ( v932 )
    {
      v475 = sub_B2C41C(v932, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x41u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 552) = v932;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 552),
      (System_Int32_array **)v932,
      v933,
      v934,
      v935,
      v936,
      v937,
      v938);
    v939 = (EquipExpMaster_o *)sub_B2C42C(EquipExpMaster_TypeInfo);
    EquipExpMaster___ctor(v939, 0LL);
    if ( v939 )
    {
      v475 = sub_B2C41C(v939, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x42u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 560) = v939;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 560),
      (System_Int32_array **)v939,
      v940,
      v941,
      v942,
      v943,
      v944,
      v945);
    v946 = (EquipSkillMaster_o *)sub_B2C42C(EquipSkillMaster_TypeInfo);
    EquipSkillMaster___ctor(v946, 0LL);
    if ( v946 )
    {
      v475 = sub_B2C41C(v946, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x43u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 568) = v946;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 568),
      (System_Int32_array **)v946,
      v947,
      v948,
      v949,
      v950,
      v951,
      v952);
    v953 = (SubEquipMaster_o *)sub_B2C42C(SubEquipMaster_TypeInfo);
    SubEquipMaster___ctor(v953, 0LL);
    if ( v953 )
    {
      v475 = sub_B2C41C(v953, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x44u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 576) = v953;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 576),
      (System_Int32_array **)v953,
      v954,
      v955,
      v956,
      v957,
      v958,
      v959);
    v960 = (AccessaryMaster_o *)sub_B2C42C(AccessaryMaster_TypeInfo);
    AccessaryMaster___ctor(v960, 0LL);
    if ( v960 )
    {
      v475 = sub_B2C41C(v960, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x45u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 584) = v960;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 584),
      (System_Int32_array **)v960,
      v961,
      v962,
      v963,
      v964,
      v965,
      v966);
    v967 = (UserPresentBoxMaster_o *)sub_B2C42C(UserPresentBoxMaster_TypeInfo);
    UserPresentBoxMaster___ctor(v967, 0LL);
    if ( v967 )
    {
      v475 = sub_B2C41C(v967, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x46u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 592) = v967;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 592),
      (System_Int32_array **)v967,
      v968,
      v969,
      v970,
      v971,
      v972,
      v973);
    v974 = (UserDeckMaster_o *)sub_B2C42C(UserDeckMaster_TypeInfo);
    UserDeckMaster___ctor(v974, 0LL);
    if ( v974 )
    {
      v475 = sub_B2C41C(v974, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x47u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 600) = v974;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 600),
      (System_Int32_array **)v974,
      v975,
      v976,
      v977,
      v978,
      v979,
      v980);
    v981 = (UserSubEquipMaster_o *)sub_B2C42C(UserSubEquipMaster_TypeInfo);
    UserSubEquipMaster___ctor(v981, 0LL);
    if ( v981 )
    {
      v475 = sub_B2C41C(v981, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x48u )
      goto LABEL_631;
    *(_QWORD *)(v473 + 608) = v981;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 608),
      (System_Int32_array **)v981,
      v982,
      v983,
      v984,
      v985,
      v986,
      v987);
    v988 = (GachaMaster_o *)sub_B2C42C(GachaMaster_TypeInfo);
    GachaMaster___ctor(v988, 0LL);
    if ( v988 )
    {
      v475 = sub_B2C41C(v988, *(_QWORD *)(*(_QWORD *)v473 + 64LL));
      if ( !v475 )
        goto LABEL_632;
    }
    if ( *v483 <= 0x49u )
    {
LABEL_631:
      v1937 = sub_B2C460(v475);
      sub_B2C400(v1937, 0LL);
    }
    *(_QWORD *)(v473 + 616) = v988;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v473 + 616),
      (System_Int32_array **)v988,
      v989,
      v990,
      v991,
      v992,
      v993,
      v994);
    v995 = (GachaImageMaster_o *)sub_B2C42C(GachaImageMaster_TypeInfo);
    GachaImageMaster___ctor(v995, 0LL);
    if ( !v995 || (v475 = sub_B2C41C(v995, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
    {
      if ( *v483 <= 0x4Au )
        goto LABEL_629;
      *(_QWORD *)(v473 + 624) = v995;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)(v473 + 624),
        (System_Int32_array **)v995,
        v996,
        v997,
        v998,
        v999,
        v1000,
        v1001);
      v1002 = (UserGachaMaster_o *)sub_B2C42C(UserGachaMaster_TypeInfo);
      UserGachaMaster___ctor(v1002, 0LL);
      if ( !v1002 || (v475 = sub_B2C41C(v1002, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
      {
        if ( *v483 <= 0x4Bu )
          goto LABEL_629;
        *(_QWORD *)(v473 + 632) = v1002;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v473 + 632),
          (System_Int32_array **)v1002,
          v1003,
          v1004,
          v1005,
          v1006,
          v1007,
          v1008);
        v1009 = (UserEquipMaster_o *)sub_B2C42C(UserEquipMaster_TypeInfo);
        UserEquipMaster___ctor(v1009, 0LL);
        if ( !v1009 || (v475 = sub_B2C41C(v1009, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
        {
          if ( *v483 <= 0x4Cu )
            goto LABEL_629;
          *(_QWORD *)(v473 + 640) = v1009;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v473 + 640),
            (System_Int32_array **)v1009,
            v1010,
            v1011,
            v1012,
            v1013,
            v1014,
            v1015);
          v1016 = (UserServantCollectionMaster_o *)sub_B2C42C(UserServantCollectionMaster_TypeInfo);
          UserServantCollectionMaster___ctor(v1016, 0LL);
          if ( !v1016 || (v475 = sub_B2C41C(v1016, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
          {
            if ( *v483 <= 0x4Du )
              goto LABEL_629;
            *(_QWORD *)(v473 + 648) = v1016;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v473 + 648),
              (System_Int32_array **)v1016,
              v1017,
              v1018,
              v1019,
              v1020,
              v1021,
              v1022);
            v1023 = (FriendshipMaster_o *)sub_B2C42C(FriendshipMaster_TypeInfo);
            FriendshipMaster___ctor(v1023, 0LL);
            if ( !v1023 || (v475 = sub_B2C41C(v1023, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
            {
              if ( *v483 <= 0x4Eu )
                goto LABEL_629;
              *(_QWORD *)(v473 + 656) = v1023;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)(v473 + 656),
                (System_Int32_array **)v1023,
                v1024,
                v1025,
                v1026,
                v1027,
                v1028,
                v1029);
              v1030 = (GachaTicketMaster_o *)sub_B2C42C(GachaTicketMaster_TypeInfo);
              GachaTicketMaster___ctor(v1030, 0LL);
              if ( !v1030 || (v475 = sub_B2C41C(v1030, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
              {
                if ( *v483 <= 0x4Fu )
                  goto LABEL_629;
                *(_QWORD *)(v473 + 664) = v1030;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)(v473 + 664),
                  (System_Int32_array **)v1030,
                  v1031,
                  v1032,
                  v1033,
                  v1034,
                  v1035,
                  v1036);
                v1037 = (UserFormationMaster_o *)sub_B2C42C(UserFormationMaster_TypeInfo);
                UserFormationMaster___ctor(v1037, 0LL);
                if ( !v1037 || (v475 = sub_B2C41C(v1037, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                {
                  if ( *v483 <= 0x50u )
                    goto LABEL_629;
                  *(_QWORD *)(v473 + 672) = v1037;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)(v473 + 672),
                    (System_Int32_array **)v1037,
                    v1038,
                    v1039,
                    v1040,
                    v1041,
                    v1042,
                    v1043);
                  v1044 = (FunctionMaster_o *)sub_B2C42C(FunctionMaster_TypeInfo);
                  FunctionMaster___ctor(v1044, 0LL);
                  if ( !v1044 || (v475 = sub_B2C41C(v1044, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                  {
                    if ( *v483 <= 0x51u )
                      goto LABEL_629;
                    *(_QWORD *)(v473 + 680) = v1044;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)(v473 + 680),
                      (System_Int32_array **)v1044,
                      v1045,
                      v1046,
                      v1047,
                      v1048,
                      v1049,
                      v1050);
                    v1051 = (BuffMaster_o *)sub_B2C42C(BuffMaster_TypeInfo);
                    BuffMaster___ctor(v1051, 0LL);
                    if ( !v1051 || (v475 = sub_B2C41C(v1051, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                    {
                      if ( *v483 <= 0x52u )
                        goto LABEL_629;
                      *(_QWORD *)(v473 + 688) = v1051;
                      sub_B2C2F8(
                        (BattleServantConfConponent_o *)(v473 + 688),
                        (System_Int32_array **)v1051,
                        v1052,
                        v1053,
                        v1054,
                        v1055,
                        v1056,
                        v1057);
                      v1058 = (GachaReleaseMaster_o *)sub_B2C42C(GachaReleaseMaster_TypeInfo);
                      GachaReleaseMaster___ctor(v1058, 0LL);
                      if ( !v1058 || (v475 = sub_B2C41C(v1058, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                      {
                        if ( *v483 <= 0x53u )
                          goto LABEL_629;
                        *(_QWORD *)(v473 + 696) = v1058;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)(v473 + 696),
                          (System_Int32_array **)v1058,
                          v1059,
                          v1060,
                          v1061,
                          v1062,
                          v1063,
                          v1064);
                        v1065 = (CombineQpMaster_o *)sub_B2C42C(CombineQpMaster_TypeInfo);
                        CombineQpMaster___ctor(v1065, 0LL);
                        if ( !v1065 || (v475 = sub_B2C41C(v1065, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                        {
                          if ( *v483 <= 0x54u )
                            goto LABEL_629;
                          *(_QWORD *)(v473 + 704) = v1065;
                          sub_B2C2F8(
                            (BattleServantConfConponent_o *)(v473 + 704),
                            (System_Int32_array **)v1065,
                            v1066,
                            v1067,
                            v1068,
                            v1069,
                            v1070,
                            v1071);
                          v1072 = (CombineMaterialMaster_o *)sub_B2C42C(CombineMaterialMaster_TypeInfo);
                          CombineMaterialMaster___ctor(v1072, 0LL);
                          if ( !v1072 || (v475 = sub_B2C41C(v1072, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                          {
                            if ( *v483 <= 0x55u )
                              goto LABEL_629;
                            *(_QWORD *)(v473 + 712) = v1072;
                            sub_B2C2F8(
                              (BattleServantConfConponent_o *)(v473 + 712),
                              (System_Int32_array **)v1072,
                              v1073,
                              v1074,
                              v1075,
                              v1076,
                              v1077,
                              v1078);
                            v1079 = (EventCombineMaster_o *)sub_B2C42C(EventCombineMaster_TypeInfo);
                            EventCombineMaster___ctor(v1079, 0LL);
                            if ( !v1079 || (v475 = sub_B2C41C(v1079, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                            {
                              if ( *v483 <= 0x56u )
                                goto LABEL_629;
                              *(_QWORD *)(v473 + 720) = v1079;
                              sub_B2C2F8(
                                (BattleServantConfConponent_o *)(v473 + 720),
                                (System_Int32_array **)v1079,
                                v1080,
                                v1081,
                                v1082,
                                v1083,
                                v1084,
                                v1085);
                              v1086 = (ServantExpMaster_o *)sub_B2C42C(ServantExpMaster_TypeInfo);
                              ServantExpMaster___ctor(v1086, 0LL);
                              if ( !v1086 || (v475 = sub_B2C41C(v1086, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                              {
                                if ( *v483 <= 0x57u )
                                  goto LABEL_629;
                                *(_QWORD *)(v473 + 728) = v1086;
                                sub_B2C2F8(
                                  (BattleServantConfConponent_o *)(v473 + 728),
                                  (System_Int32_array **)v1086,
                                  v1087,
                                  v1088,
                                  v1089,
                                  v1090,
                                  v1091,
                                  v1092);
                                v1093 = (CombineSkillMaster_o *)sub_B2C42C(CombineSkillMaster_TypeInfo);
                                CombineSkillMaster___ctor(v1093, 0LL);
                                if ( !v1093 || (v475 = sub_B2C41C(v1093, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                {
                                  if ( *v483 <= 0x58u )
                                    goto LABEL_629;
                                  *(_QWORD *)(v473 + 736) = v1093;
                                  sub_B2C2F8(
                                    (BattleServantConfConponent_o *)(v473 + 736),
                                    (System_Int32_array **)v1093,
                                    v1094,
                                    v1095,
                                    v1096,
                                    v1097,
                                    v1098,
                                    v1099);
                                  v1100 = (CombineTdMaster_o *)sub_B2C42C(CombineTdMaster_TypeInfo);
                                  CombineTdMaster___ctor(v1100, 0LL);
                                  if ( !v1100 || (v475 = sub_B2C41C(v1100, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                  {
                                    if ( *v483 <= 0x59u )
                                      goto LABEL_629;
                                    *(_QWORD *)(v473 + 744) = v1100;
                                    sub_B2C2F8(
                                      (BattleServantConfConponent_o *)(v473 + 744),
                                      (System_Int32_array **)v1100,
                                      v1101,
                                      v1102,
                                      v1103,
                                      v1104,
                                      v1105,
                                      v1106);
                                    v1107 = (EventQuestMaster_o *)sub_B2C42C(EventQuestMaster_TypeInfo);
                                    EventQuestMaster___ctor(v1107, 0LL);
                                    if ( !v1107 || (v475 = sub_B2C41C(v1107, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                    {
                                      if ( *v483 <= 0x5Au )
                                        goto LABEL_629;
                                      *(_QWORD *)(v473 + 752) = v1107;
                                      sub_B2C2F8(
                                        (BattleServantConfConponent_o *)(v473 + 752),
                                        (System_Int32_array **)v1107,
                                        v1108,
                                        v1109,
                                        v1110,
                                        v1111,
                                        v1112,
                                        v1113);
                                      v1114 = (EventCampaignMaster_o *)sub_B2C42C(EventCampaignMaster_TypeInfo);
                                      EventCampaignMaster___ctor(v1114, 0LL);
                                      if ( !v1114
                                        || (v475 = sub_B2C41C(v1114, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                      {
                                        if ( *v483 <= 0x5Bu )
                                          goto LABEL_629;
                                        *(_QWORD *)(v473 + 760) = v1114;
                                        sub_B2C2F8(
                                          (BattleServantConfConponent_o *)(v473 + 760),
                                          (System_Int32_array **)v1114,
                                          v1115,
                                          v1116,
                                          v1117,
                                          v1118,
                                          v1119,
                                          v1120);
                                        v1121 = (IllustratorMaster_o *)sub_B2C42C(IllustratorMaster_TypeInfo);
                                        IllustratorMaster___ctor(v1121, 0LL);
                                        if ( !v1121
                                          || (v475 = sub_B2C41C(v1121, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                        {
                                          if ( *v483 <= 0x5Cu )
                                            goto LABEL_629;
                                          *(_QWORD *)(v473 + 768) = v1121;
                                          sub_B2C2F8(
                                            (BattleServantConfConponent_o *)(v473 + 768),
                                            (System_Int32_array **)v1121,
                                            v1122,
                                            v1123,
                                            v1124,
                                            v1125,
                                            v1126,
                                            v1127);
                                          v1128 = (CvMaster_o *)sub_B2C42C(CvMaster_TypeInfo);
                                          CvMaster___ctor(v1128, v1129);
                                          if ( !v1128
                                            || (v475 = sub_B2C41C(v1128, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                          {
                                            if ( *v483 <= 0x5Du )
                                              goto LABEL_629;
                                            *(_QWORD *)(v473 + 776) = v1128;
                                            sub_B2C2F8(
                                              (BattleServantConfConponent_o *)(v473 + 776),
                                              (System_Int32_array **)v1128,
                                              v1130,
                                              v1131,
                                              v1132,
                                              v1133,
                                              v1134,
                                              v1135);
                                            v1136 = (TreasureDvcLvMaster_o *)sub_B2C42C(TreasureDvcLvMaster_TypeInfo);
                                            TreasureDvcLvMaster___ctor(v1136, 0LL);
                                            if ( !v1136
                                              || (v475 = sub_B2C41C(v1136, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                            {
                                              if ( *v483 <= 0x5Eu )
                                                goto LABEL_629;
                                              *(_QWORD *)(v473 + 784) = v1136;
                                              sub_B2C2F8(
                                                (BattleServantConfConponent_o *)(v473 + 784),
                                                (System_Int32_array **)v1136,
                                                v1137,
                                                v1138,
                                                v1139,
                                                v1140,
                                                v1141,
                                                v1142);
                                              v1143 = (TreasureDvcDetailMaster_o *)sub_B2C42C(TreasureDvcDetailMaster_TypeInfo);
                                              TreasureDvcDetailMaster___ctor(v1143, 0LL);
                                              if ( !v1143
                                                || (v475 = sub_B2C41C(v1143, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                              {
                                                if ( *v483 <= 0x5Fu )
                                                  goto LABEL_629;
                                                *(_QWORD *)(v473 + 792) = v1143;
                                                sub_B2C2F8(
                                                  (BattleServantConfConponent_o *)(v473 + 792),
                                                  (System_Int32_array **)v1143,
                                                  v1144,
                                                  v1145,
                                                  v1146,
                                                  v1147,
                                                  v1148,
                                                  v1149);
                                                v1150 = (UserFollowerMaster_o *)sub_B2C42C(UserFollowerMaster_TypeInfo);
                                                UserFollowerMaster___ctor(v1150, 0LL);
                                                if ( !v1150
                                                  || (v475 = sub_B2C41C(v1150, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                {
                                                  if ( *v483 <= 0x60u )
                                                    goto LABEL_629;
                                                  *(_QWORD *)(v473 + 800) = v1150;
                                                  sub_B2C2F8(
                                                    (BattleServantConfConponent_o *)(v473 + 800),
                                                    (System_Int32_array **)v1150,
                                                    v1151,
                                                    v1152,
                                                    v1153,
                                                    v1154,
                                                    v1155,
                                                    v1156);
                                                  v1157 = (NpcFollowerMaster_o *)sub_B2C42C(NpcFollowerMaster_TypeInfo);
                                                  NpcFollowerMaster___ctor(v1157, 0LL);
                                                  if ( !v1157
                                                    || (v475 = sub_B2C41C(v1157, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                  {
                                                    if ( *v483 <= 0x61u )
                                                      goto LABEL_629;
                                                    *(_QWORD *)(v473 + 808) = v1157;
                                                    sub_B2C2F8(
                                                      (BattleServantConfConponent_o *)(v473 + 808),
                                                      (System_Int32_array **)v1157,
                                                      v1158,
                                                      v1159,
                                                      v1160,
                                                      v1161,
                                                      v1162,
                                                      v1163);
                                                    v1164 = (NpcServantFollowerMaster_o *)sub_B2C42C(NpcServantFollowerMaster_TypeInfo);
                                                    NpcServantFollowerMaster___ctor(v1164, 0LL);
                                                    if ( !v1164
                                                      || (v475 = sub_B2C41C(v1164, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                    {
                                                      if ( *v483 <= 0x62u )
                                                        goto LABEL_629;
                                                      *(_QWORD *)(v473 + 816) = v1164;
                                                      sub_B2C2F8(
                                                        (BattleServantConfConponent_o *)(v473 + 816),
                                                        (System_Int32_array **)v1164,
                                                        v1165,
                                                        v1166,
                                                        v1167,
                                                        v1168,
                                                        v1169,
                                                        v1170);
                                                      v1171 = (UserEventMaster_o *)sub_B2C42C(UserEventMaster_TypeInfo);
                                                      UserEventMaster___ctor(v1171, 0LL);
                                                      if ( !v1171
                                                        || (v475 = sub_B2C41C(
                                                                     v1171,
                                                                     *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                      {
                                                        if ( *v483 <= 0x63u )
                                                          goto LABEL_629;
                                                        *(_QWORD *)(v473 + 824) = v1171;
                                                        sub_B2C2F8(
                                                          (BattleServantConfConponent_o *)(v473 + 824),
                                                          (System_Int32_array **)v1171,
                                                          v1172,
                                                          v1173,
                                                          v1174,
                                                          v1175,
                                                          v1176,
                                                          v1177);
                                                        v1178 = (UserShopMaster_o *)sub_B2C42C(UserShopMaster_TypeInfo);
                                                        UserShopMaster___ctor(v1178, 0LL);
                                                        if ( !v1178
                                                          || (v475 = sub_B2C41C(
                                                                       v1178,
                                                                       *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                        {
                                                          if ( *v483 <= 0x64u )
                                                            goto LABEL_629;
                                                          *(_QWORD *)(v473 + 832) = v1178;
                                                          sub_B2C2F8(
                                                            (BattleServantConfConponent_o *)(v473 + 832),
                                                            (System_Int32_array **)v1178,
                                                            v1179,
                                                            v1180,
                                                            v1181,
                                                            v1182,
                                                            v1183,
                                                            v1184);
                                                          v1185 = (UserContinueMaster_o *)sub_B2C42C(UserContinueMaster_TypeInfo);
                                                          UserContinueMaster___ctor(v1185, 0LL);
                                                          if ( !v1185
                                                            || (v475 = sub_B2C41C(
                                                                         v1185,
                                                                         *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                          {
                                                            if ( *v483 <= 0x65u )
                                                              goto LABEL_629;
                                                            *(_QWORD *)(v473 + 840) = v1185;
                                                            sub_B2C2F8(
                                                              (BattleServantConfConponent_o *)(v473 + 840),
                                                              (System_Int32_array **)v1185,
                                                              v1186,
                                                              v1187,
                                                              v1188,
                                                              v1189,
                                                              v1190,
                                                              v1191);
                                                            v1192 = (ConstantMaster_o *)sub_B2C42C(ConstantMaster_TypeInfo);
                                                            ConstantMaster___ctor(v1192, 0LL);
                                                            if ( !v1192
                                                              || (v475 = sub_B2C41C(
                                                                           v1192,
                                                                           *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                            {
                                                              if ( *v483 <= 0x66u )
                                                                goto LABEL_629;
                                                              *(_QWORD *)(v473 + 848) = v1192;
                                                              sub_B2C2F8(
                                                                (BattleServantConfConponent_o *)(v473 + 848),
                                                                (System_Int32_array **)v1192,
                                                                v1193,
                                                                v1194,
                                                                v1195,
                                                                v1196,
                                                                v1197,
                                                                v1198);
                                                              v1199 = (ConstantLongMaster_o *)sub_B2C42C(ConstantLongMaster_TypeInfo);
                                                              ConstantLongMaster___ctor(v1199, 0LL);
                                                              if ( !v1199
                                                                || (v475 = sub_B2C41C(
                                                                             v1199,
                                                                             *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                              {
                                                                if ( *v483 <= 0x67u )
                                                                  goto LABEL_629;
                                                                *(_QWORD *)(v473 + 856) = v1199;
                                                                sub_B2C2F8(
                                                                  (BattleServantConfConponent_o *)(v473 + 856),
                                                                  (System_Int32_array **)v1199,
                                                                  v1200,
                                                                  v1201,
                                                                  v1202,
                                                                  v1203,
                                                                  v1204,
                                                                  v1205);
                                                                v1206 = (ConstantStrMaster_o *)sub_B2C42C(ConstantStrMaster_TypeInfo);
                                                                ConstantStrMaster___ctor(v1206, 0LL);
                                                                if ( !v1206
                                                                  || (v475 = sub_B2C41C(
                                                                               v1206,
                                                                               *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                {
                                                                  if ( *v483 <= 0x68u )
                                                                    goto LABEL_629;
                                                                  *(_QWORD *)(v473 + 864) = v1206;
                                                                  sub_B2C2F8(
                                                                    (BattleServantConfConponent_o *)(v473 + 864),
                                                                    (System_Int32_array **)v1206,
                                                                    v1207,
                                                                    v1208,
                                                                    v1209,
                                                                    v1210,
                                                                    v1211,
                                                                    v1212);
                                                                  v1213 = (AiMaster_o *)sub_B2C42C(AiMaster_TypeInfo);
                                                                  AiMaster___ctor(v1213, 0LL);
                                                                  if ( !v1213
                                                                    || (v475 = sub_B2C41C(
                                                                                 v1213,
                                                                                 *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                  {
                                                                    if ( *v483 <= 0x69u )
                                                                      goto LABEL_629;
                                                                    *(_QWORD *)(v473 + 872) = v1213;
                                                                    sub_B2C2F8(
                                                                      (BattleServantConfConponent_o *)(v473 + 872),
                                                                      (System_Int32_array **)v1213,
                                                                      v1214,
                                                                      v1215,
                                                                      v1216,
                                                                      v1217,
                                                                      v1218,
                                                                      v1219);
                                                                    v1220 = (AiActMaster_o *)sub_B2C42C(AiActMaster_TypeInfo);
                                                                    AiActMaster___ctor(v1220, 0LL);
                                                                    if ( !v1220
                                                                      || (v475 = sub_B2C41C(
                                                                                   v1220,
                                                                                   *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                    {
                                                                      if ( *v483 <= 0x6Au )
                                                                        goto LABEL_629;
                                                                      *(_QWORD *)(v473 + 880) = v1220;
                                                                      sub_B2C2F8(
                                                                        (BattleServantConfConponent_o *)(v473 + 880),
                                                                        (System_Int32_array **)v1220,
                                                                        v1221,
                                                                        v1222,
                                                                        v1223,
                                                                        v1224,
                                                                        v1225,
                                                                        v1226);
                                                                      v1227 = (AttriRelationMaster_o *)sub_B2C42C(AttriRelationMaster_TypeInfo);
                                                                      AttriRelationMaster___ctor(v1227, 0LL);
                                                                      if ( !v1227
                                                                        || (v475 = sub_B2C41C(
                                                                                     v1227,
                                                                                     *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                      {
                                                                        if ( *v483 <= 0x6Bu )
                                                                          goto LABEL_629;
                                                                        *(_QWORD *)(v473 + 888) = v1227;
                                                                        sub_B2C2F8(
                                                                          (BattleServantConfConponent_o *)(v473 + 888),
                                                                          (System_Int32_array **)v1227,
                                                                          v1228,
                                                                          v1229,
                                                                          v1230,
                                                                          v1231,
                                                                          v1232,
                                                                          v1233);
                                                                        v1234 = (ClassRelationMaster_o *)sub_B2C42C(ClassRelationMaster_TypeInfo);
                                                                        ClassRelationMaster___ctor(v1234, 0LL);
                                                                        if ( !v1234
                                                                          || (v475 = sub_B2C41C(
                                                                                       v1234,
                                                                                       *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                        {
                                                                          if ( *v483 <= 0x6Cu )
                                                                            goto LABEL_629;
                                                                          *(_QWORD *)(v473 + 896) = v1234;
                                                                          sub_B2C2F8(
                                                                            (BattleServantConfConponent_o *)(v473 + 896),
                                                                            (System_Int32_array **)v1234,
                                                                            v1235,
                                                                            v1236,
                                                                            v1237,
                                                                            v1238,
                                                                            v1239,
                                                                            v1240);
                                                                          v1241 = (EffectMaster_o *)sub_B2C42C(EffectMaster_TypeInfo);
                                                                          EffectMaster___ctor(v1241, 0LL);
                                                                          if ( !v1241
                                                                            || (v475 = sub_B2C41C(
                                                                                         v1241,
                                                                                         *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                          {
                                                                            if ( *v483 <= 0x6Du )
                                                                              goto LABEL_629;
                                                                            *(_QWORD *)(v473 + 904) = v1241;
                                                                            sub_B2C2F8(
                                                                              (BattleServantConfConponent_o *)(v473 + 904),
                                                                              (System_Int32_array **)v1241,
                                                                              v1242,
                                                                              v1243,
                                                                              v1244,
                                                                              v1245,
                                                                              v1246,
                                                                              v1247);
                                                                            v1248 = (EquipImageMaster_o *)sub_B2C42C(EquipImageMaster_TypeInfo);
                                                                            EquipImageMaster___ctor(v1248, 0LL);
                                                                            if ( !v1248
                                                                              || (v475 = sub_B2C41C(
                                                                                           v1248,
                                                                                           *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                            {
                                                                              if ( *v483 <= 0x6Eu )
                                                                                goto LABEL_629;
                                                                              *(_QWORD *)(v473 + 912) = v1248;
                                                                              sub_B2C2F8(
                                                                                (BattleServantConfConponent_o *)(v473 + 912),
                                                                                (System_Int32_array **)v1248,
                                                                                v1249,
                                                                                v1250,
                                                                                v1251,
                                                                                v1252,
                                                                                v1253,
                                                                                v1254);
                                                                              v1255 = (ServantVoiceMaster_o *)sub_B2C42C(ServantVoiceMaster_TypeInfo);
                                                                              ServantVoiceMaster___ctor(v1255, 0LL);
                                                                              if ( !v1255
                                                                                || (v475 = sub_B2C41C(
                                                                                             v1255,
                                                                                             *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                              {
                                                                                if ( *v483 <= 0x6Fu )
                                                                                  goto LABEL_629;
                                                                                *(_QWORD *)(v473 + 920) = v1255;
                                                                                sub_B2C2F8(
                                                                                  (BattleServantConfConponent_o *)(v473 + 920),
                                                                                  (System_Int32_array **)v1255,
                                                                                  v1256,
                                                                                  v1257,
                                                                                  v1258,
                                                                                  v1259,
                                                                                  v1260,
                                                                                  v1261);
                                                                                v1262 = (CombineLimitMaster_o *)sub_B2C42C(CombineLimitMaster_TypeInfo);
                                                                                CombineLimitMaster___ctor(v1262, 0LL);
                                                                                if ( !v1262
                                                                                  || (v475 = sub_B2C41C(
                                                                                               v1262,
                                                                                               *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                {
                                                                                  if ( *v483 <= 0x70u )
                                                                                    goto LABEL_629;
                                                                                  *(_QWORD *)(v473 + 928) = v1262;
                                                                                  sub_B2C2F8(
                                                                                    (BattleServantConfConponent_o *)(v473 + 928),
                                                                                    (System_Int32_array **)v1262,
                                                                                    v1263,
                                                                                    v1264,
                                                                                    v1265,
                                                                                    v1266,
                                                                                    v1267,
                                                                                    v1268);
                                                                                  v1269 = (CardMaster_o *)sub_B2C42C(CardMaster_TypeInfo);
                                                                                  CardMaster___ctor(v1269, 0LL);
                                                                                  if ( !v1269
                                                                                    || (v475 = sub_B2C41C(
                                                                                                 v1269,
                                                                                                 *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                  {
                                                                                    if ( *v483 <= 0x71u )
                                                                                      goto LABEL_629;
                                                                                    *(_QWORD *)(v473 + 936) = v1269;
                                                                                    sub_B2C2F8(
                                                                                      (BattleServantConfConponent_o *)(v473 + 936),
                                                                                      (System_Int32_array **)v1269,
                                                                                      v1270,
                                                                                      v1271,
                                                                                      v1272,
                                                                                      v1273,
                                                                                      v1274,
                                                                                      v1275);
                                                                                    v1276 = (CombineQpSvtEquipMaster_o *)sub_B2C42C(CombineQpSvtEquipMaster_TypeInfo);
                                                                                    CombineQpSvtEquipMaster___ctor(
                                                                                      v1276,
                                                                                      0LL);
                                                                                    if ( !v1276
                                                                                      || (v475 = sub_B2C41C(
                                                                                                   v1276,
                                                                                                   *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                    {
                                                                                      if ( *v483 <= 0x72u )
                                                                                        goto LABEL_629;
                                                                                      *(_QWORD *)(v473 + 944) = v1276;
                                                                                      sub_B2C2F8(
                                                                                        (BattleServantConfConponent_o *)(v473 + 944),
                                                                                        (System_Int32_array **)v1276,
                                                                                        v1277,
                                                                                        v1278,
                                                                                        v1279,
                                                                                        v1280,
                                                                                        v1281,
                                                                                        v1282);
                                                                                      v1283 = (ServantRarityMaster_o *)sub_B2C42C(ServantRarityMaster_TypeInfo);
                                                                                      ServantRarityMaster___ctor(
                                                                                        v1283,
                                                                                        0LL);
                                                                                      if ( !v1283
                                                                                        || (v475 = sub_B2C41C(
                                                                                                     v1283,
                                                                                                     *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                      {
                                                                                        if ( *v483 <= 0x73u )
                                                                                          goto LABEL_629;
                                                                                        *(_QWORD *)(v473 + 952) = v1283;
                                                                                        sub_B2C2F8(
                                                                                          (BattleServantConfConponent_o *)(v473 + 952),
                                                                                          (System_Int32_array **)v1283,
                                                                                          v1284,
                                                                                          v1285,
                                                                                          v1286,
                                                                                          v1287,
                                                                                          v1288,
                                                                                          v1289);
                                                                                        v1290 = (SetItemMaster_o *)sub_B2C42C(SetItemMaster_TypeInfo);
                                                                                        SetItemMaster___ctor(v1290, 0LL);
                                                                                        if ( !v1290
                                                                                          || (v475 = sub_B2C41C(v1290, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                        {
                                                                                          if ( *v483 <= 0x74u )
                                                                                            goto LABEL_629;
                                                                                          *(_QWORD *)(v473 + 960) = v1290;
                                                                                          sub_B2C2F8(
                                                                                            (BattleServantConfConponent_o *)(v473 + 960),
                                                                                            (System_Int32_array **)v1290,
                                                                                            v1291,
                                                                                            v1292,
                                                                                            v1293,
                                                                                            v1294,
                                                                                            v1295,
                                                                                            v1296);
                                                                                          v1297 = (RecoverMaster_o *)sub_B2C42C(RecoverMaster_TypeInfo);
                                                                                          RecoverMaster___ctor(
                                                                                            v1297,
                                                                                            0LL);
                                                                                          if ( !v1297
                                                                                            || (v475 = sub_B2C41C(v1297, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                          {
                                                                                            if ( *v483 <= 0x75u )
                                                                                              goto LABEL_629;
                                                                                            *(_QWORD *)(v473 + 968) = v1297;
                                                                                            sub_B2C2F8(
                                                                                              (BattleServantConfConponent_o *)(v473 + 968),
                                                                                              (System_Int32_array **)v1297,
                                                                                              v1298,
                                                                                              v1299,
                                                                                              v1300,
                                                                                              v1301,
                                                                                              v1302,
                                                                                              v1303);
                                                                                            v1304 = (BannerMaster_o *)sub_B2C42C(BannerMaster_TypeInfo);
                                                                                            BannerMaster___ctor(
                                                                                              v1304,
                                                                                              0LL);
                                                                                            if ( !v1304
                                                                                              || (v475 = sub_B2C41C(v1304, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                            {
                                                                                              if ( *v483 <= 0x76u )
                                                                                                goto LABEL_629;
                                                                                              *(_QWORD *)(v473 + 976) = v1304;
                                                                                              sub_B2C2F8(
                                                                                                (BattleServantConfConponent_o *)(v473 + 976),
                                                                                                (System_Int32_array **)v1304,
                                                                                                v1305,
                                                                                                v1306,
                                                                                                v1307,
                                                                                                v1308,
                                                                                                v1309,
                                                                                                v1310);
                                                                                              v1311 = (ShopReleaseMaster_o *)sub_B2C42C(ShopReleaseMaster_TypeInfo);
                                                                                              ShopReleaseMaster___ctor(
                                                                                                v1311,
                                                                                                0LL);
                                                                                              if ( !v1311
                                                                                                || (v475 = sub_B2C41C(v1311, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                              {
                                                                                                if ( *v483 <= 0x77u )
                                                                                                  goto LABEL_629;
                                                                                                *(_QWORD *)(v473 + 984) = v1311;
                                                                                                sub_B2C2F8(
                                                                                                  (BattleServantConfConponent_o *)(v473 + 984),
                                                                                                  (System_Int32_array **)v1311,
                                                                                                  v1312,
                                                                                                  v1313,
                                                                                                  v1314,
                                                                                                  v1315,
                                                                                                  v1316,
                                                                                                  v1317);
                                                                                                v1318 = (EventRewardMaster_o *)sub_B2C42C(EventRewardMaster_TypeInfo);
                                                                                                EventRewardMaster___ctor(
                                                                                                  v1318,
                                                                                                  0LL);
                                                                                                if ( !v1318 || (v475 = sub_B2C41C(v1318, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                {
                                                                                                  if ( *v483 <= 0x78u )
                                                                                                    goto LABEL_629;
                                                                                                  *(_QWORD *)(v473 + 992) = v1318;
                                                                                                  sub_B2C2F8(
                                                                                                    (BattleServantConfConponent_o *)(v473 + 992),
                                                                                                    (System_Int32_array **)v1318,
                                                                                                    v1319,
                                                                                                    v1320,
                                                                                                    v1321,
                                                                                                    v1322,
                                                                                                    v1323,
                                                                                                    v1324);
                                                                                                  v1325 = (EventDetailMaster_o *)sub_B2C42C(EventDetailMaster_TypeInfo);
                                                                                                  EventDetailMaster___ctor(
                                                                                                    v1325,
                                                                                                    0LL);
                                                                                                  if ( !v1325 || (v475 = sub_B2C41C(v1325, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                  {
                                                                                                    if ( *v483 <= 0x79u )
                                                                                                      goto LABEL_629;
                                                                                                    *(_QWORD *)(v473 + 1000) = v1325;
                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1000), (System_Int32_array **)v1325, v1326, v1327, v1328, v1329, v1330, v1331);
                                                                                                    v1332 = (EventServantMaster_o *)sub_B2C42C(EventServantMaster_TypeInfo);
                                                                                                    EventServantMaster___ctor(v1332, 0LL);
                                                                                                    if ( !v1332 || (v475 = sub_B2C41C(v1332, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                    {
                                                                                                      if ( *v483 <= 0x7Au )
                                                                                                        goto LABEL_629;
                                                                                                      *(_QWORD *)(v473 + 1008) = v1332;
                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1008), (System_Int32_array **)v1332, v1333, v1334, v1335, v1336, v1337, v1338);
                                                                                                      v1339 = (BoxGachaMaster_o *)sub_B2C42C(BoxGachaMaster_TypeInfo);
                                                                                                      BoxGachaMaster___ctor(v1339, 0LL);
                                                                                                      if ( !v1339 || (v475 = sub_B2C41C(v1339, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                      {
                                                                                                        if ( *v483 <= 0x7Bu )
                                                                                                          goto LABEL_629;
                                                                                                        *(_QWORD *)(v473 + 1016) = v1339;
                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1016), (System_Int32_array **)v1339, v1340, v1341, v1342, v1343, v1344, v1345);
                                                                                                        v1346 = (BoxGachaBaseMaster_o *)sub_B2C42C(BoxGachaBaseMaster_TypeInfo);
                                                                                                        BoxGachaBaseMaster___ctor(v1346, 0LL);
                                                                                                        if ( !v1346 || (v475 = sub_B2C41C(v1346, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                        {
                                                                                                          if ( *v483 <= 0x7Cu )
                                                                                                            goto LABEL_629;
                                                                                                          *(_QWORD *)(v473 + 1024) = v1346;
                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1024), (System_Int32_array **)v1346, v1347, v1348, v1349, v1350, v1351, v1352);
                                                                                                          v1353 = (BoxGachaTalkMaster_o *)sub_B2C42C(BoxGachaTalkMaster_TypeInfo);
                                                                                                          BoxGachaTalkMaster___ctor(v1353, 0LL);
                                                                                                          if ( !v1353 || (v475 = sub_B2C41C(v1353, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                          {
                                                                                                            if ( *v483 <= 0x7Du )
                                                                                                              goto LABEL_629;
                                                                                                            *(_QWORD *)(v473 + 1032) = v1353;
                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1032), (System_Int32_array **)v1353, v1354, v1355, v1356, v1357, v1358, v1359);
                                                                                                            v1360 = (UserBoxGachaMaster_o *)sub_B2C42C(UserBoxGachaMaster_TypeInfo);
                                                                                                            UserBoxGachaMaster___ctor(v1360, 0LL);
                                                                                                            if ( !v1360 || (v475 = sub_B2C41C(v1360, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                            {
                                                                                                              if ( *v483 <= 0x7Eu )
                                                                                                                goto LABEL_629;
                                                                                                              *(_QWORD *)(v473 + 1040) = v1360;
                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1040), (System_Int32_array **)v1360, v1361, v1362, v1363, v1364, v1365, v1366);
                                                                                                              v1367 = (BoxGachaHistoryMaster_o *)sub_B2C42C(BoxGachaHistoryMaster_TypeInfo);
                                                                                                              BoxGachaHistoryMaster___ctor(v1367, 0LL);
                                                                                                              if ( !v1367 || (v475 = sub_B2C41C(v1367, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                              {
                                                                                                                if ( *v483 <= 0x7Fu )
                                                                                                                  goto LABEL_629;
                                                                                                                *(_QWORD *)(v473 + 1048) = v1367;
                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1048), (System_Int32_array **)v1367, v1368, v1369, v1370, v1371, v1372, v1373);
                                                                                                                v1374 = (BattleBgMaster_o *)sub_B2C42C(BattleBgMaster_TypeInfo);
                                                                                                                BattleBgMaster___ctor(v1374, 0LL);
                                                                                                                if ( !v1374 || (v475 = sub_B2C41C(v1374, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                {
                                                                                                                  if ( *v483 <= 0x80u )
                                                                                                                    goto LABEL_629;
                                                                                                                  *(_QWORD *)(v473 + 1056) = v1374;
                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1056), (System_Int32_array **)v1374, v1375, v1376, v1377, v1378, v1379, v1380);
                                                                                                                  v1381 = (TipsBattleMaster_o *)sub_B2C42C(TipsBattleMaster_TypeInfo);
                                                                                                                  TipsBattleMaster___ctor(v1381, 0LL);
                                                                                                                  if ( !v1381 || (v475 = sub_B2C41C(v1381, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                  {
                                                                                                                    if ( *v483 <= 0x81u )
                                                                                                                      goto LABEL_629;
                                                                                                                    *(_QWORD *)(v473 + 1064) = v1381;
                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1064), (System_Int32_array **)v1381, v1382, v1383, v1384, v1385, v1386, v1387);
                                                                                                                    v1388 = (UserLoginMaster_o *)sub_B2C42C(UserLoginMaster_TypeInfo);
                                                                                                                    UserLoginMaster___ctor(v1388, 0LL);
                                                                                                                    if ( !v1388 || (v475 = sub_B2C41C(v1388, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                    {
                                                                                                                      if ( *v483 <= 0x82u )
                                                                                                                        goto LABEL_629;
                                                                                                                      *(_QWORD *)(v473 + 1072) = v1388;
                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1072), (System_Int32_array **)v1388, v1389, v1390, v1391, v1392, v1393, v1394);
                                                                                                                      v1395 = (VoiceMaster_o *)sub_B2C42C(VoiceMaster_TypeInfo);
                                                                                                                      VoiceMaster___ctor(v1395, 0LL);
                                                                                                                      if ( !v1395 || (v475 = sub_B2C41C(v1395, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                      {
                                                                                                                        if ( *v483 <= 0x83u )
                                                                                                                          goto LABEL_629;
                                                                                                                        *(_QWORD *)(v473 + 1080) = v1395;
                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1080), (System_Int32_array **)v1395, v1396, v1397, v1398, v1399, v1400, v1401);
                                                                                                                        v1402 = (EventRewardExtraMaster_o *)sub_B2C42C(EventRewardExtraMaster_TypeInfo);
                                                                                                                        EventRewardExtraMaster___ctor(v1402, 0LL);
                                                                                                                        if ( !v1402 || (v475 = sub_B2C41C(v1402, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                        {
                                                                                                                          if ( *v483 <= 0x84u )
                                                                                                                            goto LABEL_629;
                                                                                                                          *(_QWORD *)(v473 + 1088) = v1402;
                                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1088), (System_Int32_array **)v1402, v1403, v1404, v1405, v1406, v1407, v1408);
                                                                                                                          v1409 = (EventMissionMaster_o *)sub_B2C42C(EventMissionMaster_TypeInfo);
                                                                                                                          EventMissionMaster___ctor(v1409, 0LL);
                                                                                                                          if ( !v1409 || (v475 = sub_B2C41C(v1409, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                          {
                                                                                                                            if ( *v483 <= 0x85u )
                                                                                                                              goto LABEL_629;
                                                                                                                            *(_QWORD *)(v473 + 1096) = v1409;
                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1096), (System_Int32_array **)v1409, v1410, v1411, v1412, v1413, v1414, v1415);
                                                                                                                            v1416 = (EventMissionActionMaster_o *)sub_B2C42C(EventMissionActionMaster_TypeInfo);
                                                                                                                            EventMissionActionMaster___ctor(v1416, 0LL);
                                                                                                                            if ( !v1416 || (v475 = sub_B2C41C(v1416, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                            {
                                                                                                                              if ( *v483 <= 0x86u )
                                                                                                                                goto LABEL_629;
                                                                                                                              *(_QWORD *)(v473 + 1104) = v1416;
                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1104), (System_Int32_array **)v1416, v1417, v1418, v1419, v1420, v1421, v1422);
                                                                                                                              v1423 = (EventMissionActionAddMaster_o *)sub_B2C42C(EventMissionActionAddMaster_TypeInfo);
                                                                                                                              EventMissionActionAddMaster___ctor(v1423, 0LL);
                                                                                                                              if ( !v1423 || (v475 = sub_B2C41C(v1423, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                              {
                                                                                                                                if ( *v483 <= 0x87u )
                                                                                                                                  goto LABEL_629;
                                                                                                                                *(_QWORD *)(v473 + 1112) = v1423;
                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1112), (System_Int32_array **)v1423, v1424, v1425, v1426, v1427, v1428, v1429);
                                                                                                                                v1430 = (EventMissionConditionMaster_o *)sub_B2C42C(EventMissionConditionMaster_TypeInfo);
                                                                                                                                EventMissionConditionMaster___ctor(v1430, 0LL);
                                                                                                                                if ( !v1430 || (v475 = sub_B2C41C(v1430, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                {
                                                                                                                                  if ( *v483 <= 0x88u )
                                                                                                                                    goto LABEL_629;
                                                                                                                                  *(_QWORD *)(v473 + 1120) = v1430;
                                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1120), (System_Int32_array **)v1430, v1431, v1432, v1433, v1434, v1435, v1436);
                                                                                                                                  v1437 = (EventMissionCondDetailMaster_o *)sub_B2C42C(EventMissionCondDetailMaster_TypeInfo);
                                                                                                                                  EventMissionCondDetailMaster___ctor(v1437, 0LL);
                                                                                                                                  if ( !v1437 || (v475 = sub_B2C41C(v1437, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                  {
                                                                                                                                    if ( *v483 <= 0x89u )
                                                                                                                                      goto LABEL_629;
                                                                                                                                    *(_QWORD *)(v473 + 1128) = v1437;
                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1128), (System_Int32_array **)v1437, v1438, v1439, v1440, v1441, v1442, v1443);
                                                                                                                                    v1444 = (EventMissionAddMaster_o *)sub_B2C42C(EventMissionAddMaster_TypeInfo);
                                                                                                                                    EventMissionAddMaster___ctor(v1444, 0LL);
                                                                                                                                    if ( !v1444 || (v475 = sub_B2C41C(v1444, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                    {
                                                                                                                                      if ( *v483 <= 0x8Au )
                                                                                                                                        goto LABEL_629;
                                                                                                                                      *(_QWORD *)(v473 + 1136) = v1444;
                                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1136), (System_Int32_array **)v1444, v1445, v1446, v1447, v1448, v1449, v1450);
                                                                                                                                      v1451 = (CompleteMissionMaster_o *)sub_B2C42C(CompleteMissionMaster_TypeInfo);
                                                                                                                                      CompleteMissionMaster___ctor(v1451, 0LL);
                                                                                                                                      if ( !v1451 || (v475 = sub_B2C41C(v1451, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                      {
                                                                                                                                        if ( *v483 <= 0x8Bu )
                                                                                                                                          goto LABEL_629;
                                                                                                                                        *(_QWORD *)(v473 + 1144) = v1451;
                                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1144), (System_Int32_array **)v1451, v1452, v1453, v1454, v1455, v1456, v1457);
                                                                                                                                        v1458 = (EventRewardSetMaster_o *)sub_B2C42C(EventRewardSetMaster_TypeInfo);
                                                                                                                                        EventRewardSetMaster___ctor(v1458, 0LL);
                                                                                                                                        if ( !v1458 || (v475 = sub_B2C41C(v1458, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                        {
                                                                                                                                          if ( *v483 <= 0x8Cu )
                                                                                                                                            goto LABEL_629;
                                                                                                                                          *(_QWORD *)(v473 + 1152) = v1458;
                                                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1152), (System_Int32_array **)v1458, v1459, v1460, v1461, v1462, v1463, v1464);
                                                                                                                                          v1465 = (UserEventMissionMaster_o *)sub_B2C42C(UserEventMissionMaster_TypeInfo);
                                                                                                                                          UserEventMissionMaster___ctor(v1465, 0LL);
                                                                                                                                          if ( !v1465 || (v475 = sub_B2C41C(v1465, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                          {
                                                                                                                                            if ( *v483 <= 0x8Du )
                                                                                                                                              goto LABEL_629;
                                                                                                                                            *(_QWORD *)(v473 + 1160) = v1465;
                                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1160), (System_Int32_array **)v1465, v1466, v1467, v1468, v1469, v1470, v1471);
                                                                                                                                            v1472 = (UserEventMissionCondDetailMaster_o *)sub_B2C42C(UserEventMissionCondDetailMaster_TypeInfo);
                                                                                                                                            UserEventMissionCondDetailMaster___ctor(v1472, 0LL);
                                                                                                                                            if ( !v1472 || (v475 = sub_B2C41C(v1472, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                            {
                                                                                                                                              if ( *v483 <= 0x8Eu )
                                                                                                                                                goto LABEL_629;
                                                                                                                                              *(_QWORD *)(v473 + 1168) = v1472;
                                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1168), (System_Int32_array **)v1472, v1473, v1474, v1475, v1476, v1477, v1478);
                                                                                                                                              v1479 = (BoxGachaBaseDetailMaster_o *)sub_B2C42C(BoxGachaBaseDetailMaster_TypeInfo);
                                                                                                                                              BoxGachaBaseDetailMaster___ctor(v1479, 0LL);
                                                                                                                                              if ( !v1479 || (v475 = sub_B2C41C(v1479, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                              {
                                                                                                                                                if ( *v483 <= 0x8Fu )
                                                                                                                                                  goto LABEL_629;
                                                                                                                                                *(_QWORD *)(v473 + 1176) = v1479;
                                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1176), (System_Int32_array **)v1479, v1480, v1481, v1482, v1483, v1484, v1485);
                                                                                                                                                v1486 = (UserServantLeaderMaster_o *)sub_B2C42C(UserServantLeaderMaster_TypeInfo);
                                                                                                                                                UserServantLeaderMaster___ctor(v1486, 0LL);
                                                                                                                                                if ( !v1486 || (v475 = sub_B2C41C(v1486, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                {
                                                                                                                                                  if ( *v483 <= 0x90u )
                                                                                                                                                    goto LABEL_629;
                                                                                                                                                  *(_QWORD *)(v473 + 1184) = v1486;
                                                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1184), (System_Int32_array **)v1486, v1487, v1488, v1489, v1490, v1491, v1492);
                                                                                                                                                  v1493 = (ClosedMessageMaster_o *)sub_B2C42C(ClosedMessageMaster_TypeInfo);
                                                                                                                                                  ClosedMessageMaster___ctor(v1493, 0LL);
                                                                                                                                                  if ( !v1493 || (v475 = sub_B2C41C(v1493, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                  {
                                                                                                                                                    if ( *v483 <= 0x91u )
                                                                                                                                                      goto LABEL_629;
                                                                                                                                                    *(_QWORD *)(v473 + 1192) = v1493;
                                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1192), (System_Int32_array **)v1493, v1494, v1495, v1496, v1497, v1498, v1499);
                                                                                                                                                    v1500 = (FunctionGroupMaster_o *)sub_B2C42C(FunctionGroupMaster_TypeInfo);
                                                                                                                                                    FunctionGroupMaster___ctor(v1500, 0LL);
                                                                                                                                                    if ( !v1500 || (v475 = sub_B2C41C(v1500, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                    {
                                                                                                                                                      if ( *v483 <= 0x92u )
                                                                                                                                                        goto LABEL_629;
                                                                                                                                                      *(_QWORD *)(v473 + 1200) = v1500;
                                                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1200), (System_Int32_array **)v1500, v1501, v1502, v1503, v1504, v1505, v1506);
                                                                                                                                                      v1507 = (EventRaidMaster_o *)sub_B2C42C(EventRaidMaster_TypeInfo);
                                                                                                                                                      EventRaidMaster___ctor(v1507, 0LL);
                                                                                                                                                      if ( !v1507 || (v475 = sub_B2C41C(v1507, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                      {
                                                                                                                                                        if ( *v483 <= 0x93u )
                                                                                                                                                          goto LABEL_629;
                                                                                                                                                        *(_QWORD *)(v473 + 1208) = v1507;
                                                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1208), (System_Int32_array **)v1507, v1508, v1509, v1510, v1511, v1512, v1513);
                                                                                                                                                        v1514 = (TotalEventRaidMaster_o *)sub_B2C42C(TotalEventRaidMaster_TypeInfo);
                                                                                                                                                        TotalEventRaidMaster___ctor(v1514, 0LL);
                                                                                                                                                        if ( !v1514 || (v475 = sub_B2C41C(v1514, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                        {
                                                                                                                                                          if ( *v483 > 0x94u )
                                                                                                                                                          {
                                                                                                                                                            *(_QWORD *)(v473 + 1216) = v1514;
                                                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1216), (System_Int32_array **)v1514, v1515, v1516, v1517, v1518, v1519, v1520);
                                                                                                                                                            v1521 = (UserEventRaidMaster_o *)sub_B2C42C(UserEventRaidMaster_TypeInfo);
                                                                                                                                                            UserEventRaidMaster___ctor(v1521, 0LL);
                                                                                                                                                            if ( !v1521 || (v1522 = sub_B2C41C(v1521, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                            {
                                                                                                                                                              if ( *v483 <= 0x95u )
                                                                                                                                                                goto LABEL_630;
                                                                                                                                                              *(_QWORD *)(v473 + 1224) = v1521;
                                                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1224), (System_Int32_array **)v1521, v1523, v1524, v1525, v1526, v1527, v1528);
                                                                                                                                                              v1529 = (EventPointMaster_o *)sub_B2C42C(EventPointMaster_TypeInfo);
                                                                                                                                                              EventPointMaster___ctor(v1529, 0LL);
                                                                                                                                                              if ( !v1529 || (v1522 = sub_B2C41C(v1529, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                              {
                                                                                                                                                                if ( *v483 <= 0x96u )
                                                                                                                                                                  goto LABEL_630;
                                                                                                                                                                *(_QWORD *)(v473 + 1232) = v1529;
                                                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1232), (System_Int32_array **)v1529, v1530, v1531, v1532, v1533, v1534, v1535);
                                                                                                                                                                v1536 = (EventPointGroupMaster_o *)sub_B2C42C(EventPointGroupMaster_TypeInfo);
                                                                                                                                                                EventPointGroupMaster___ctor(v1536, 0LL);
                                                                                                                                                                if ( !v1536 || (v1522 = sub_B2C41C(v1536, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                {
                                                                                                                                                                  if ( *v483 <= 0x97u )
                                                                                                                                                                    goto LABEL_630;
                                                                                                                                                                  *(_QWORD *)(v473 + 1240) = v1536;
                                                                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1240), (System_Int32_array **)v1536, v1537, v1538, v1539, v1540, v1541, v1542);
                                                                                                                                                                  v1543 = (TotalEventPointMaster_o *)sub_B2C42C(TotalEventPointMaster_TypeInfo);
                                                                                                                                                                  TotalEventPointMaster___ctor(v1543, 0LL);
                                                                                                                                                                  if ( !v1543 || (v1522 = sub_B2C41C(v1543, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                  {
                                                                                                                                                                    if ( *v483 <= 0x98u )
                                                                                                                                                                      goto LABEL_630;
                                                                                                                                                                    *(_QWORD *)(v473 + 1248) = v1543;
                                                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1248), (System_Int32_array **)v1543, v1544, v1545, v1546, v1547, v1548, v1549);
                                                                                                                                                                    v1550 = (UserEventPointMaster_o *)sub_B2C42C(UserEventPointMaster_TypeInfo);
                                                                                                                                                                    UserEventPointMaster___ctor(v1550, 0LL);
                                                                                                                                                                    if ( !v1550 || (v1522 = sub_B2C41C(v1550, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                    {
                                                                                                                                                                      if ( *v483 <= 0x99u )
                                                                                                                                                                        goto LABEL_630;
                                                                                                                                                                      *(_QWORD *)(v473 + 1256) = v1550;
                                                                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1256), (System_Int32_array **)v1550, v1551, v1552, v1553, v1554, v1555, v1556);
                                                                                                                                                                      v1557 = (EventPointUpperMaster_o *)sub_B2C42C(EventPointUpperMaster_TypeInfo);
                                                                                                                                                                      EventPointUpperMaster___ctor(v1557, 0LL);
                                                                                                                                                                      if ( !v1557 || (v1522 = sub_B2C41C(v1557, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                      {
                                                                                                                                                                        if ( *v483 <= 0x9Au )
                                                                                                                                                                          goto LABEL_630;
                                                                                                                                                                        *(_QWORD *)(v473 + 1264) = v1557;
                                                                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1264), (System_Int32_array **)v1557, v1558, v1559, v1560, v1561, v1562, v1563);
                                                                                                                                                                        v1564 = (EventPointUpperReleaseMaster_o *)sub_B2C42C(EventPointUpperReleaseMaster_TypeInfo);
                                                                                                                                                                        EventPointUpperReleaseMaster___ctor(v1564, 0LL);
                                                                                                                                                                        if ( !v1564 || (v1522 = sub_B2C41C(v1564, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                        {
                                                                                                                                                                          if ( *v483 <= 0x9Bu )
                                                                                                                                                                            goto LABEL_630;
                                                                                                                                                                          *(_QWORD *)(v473 + 1272) = v1564;
                                                                                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1272), (System_Int32_array **)v1564, v1565, v1566, v1567, v1568, v1569, v1570);
                                                                                                                                                                          v1571 = (EventRaceMaster_o *)sub_B2C42C(EventRaceMaster_TypeInfo);
                                                                                                                                                                          EventRaceMaster___ctor(v1571, 0LL);
                                                                                                                                                                          if ( !v1571 || (v1522 = sub_B2C41C(v1571, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                          {
                                                                                                                                                                            if ( *v483 <= 0x9Cu )
                                                                                                                                                                              goto LABEL_630;
                                                                                                                                                                            *(_QWORD *)(v473 + 1280) = v1571;
                                                                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1280), (System_Int32_array **)v1571, v1572, v1573, v1574, v1575, v1576, v1577);
                                                                                                                                                                            v1578 = (EventRaceResultMaster_o *)sub_B2C42C(EventRaceResultMaster_TypeInfo);
                                                                                                                                                                            EventRaceResultMaster___ctor(v1578, 0LL);
                                                                                                                                                                            if ( !v1578 || (v1522 = sub_B2C41C(v1578, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                            {
                                                                                                                                                                              if ( *v483 <= 0x9Du )
                                                                                                                                                                                goto LABEL_630;
                                                                                                                                                                              *(_QWORD *)(v473 + 1288) = v1578;
                                                                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1288), (System_Int32_array **)v1578, v1579, v1580, v1581, v1582, v1583, v1584);
                                                                                                                                                                              v1585 = (QuestRacePointMaster_o *)sub_B2C42C(QuestRacePointMaster_TypeInfo);
                                                                                                                                                                              QuestRacePointMaster___ctor(v1585, 0LL);
                                                                                                                                                                              if ( !v1585 || (v1522 = sub_B2C41C(v1585, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                              {
                                                                                                                                                                                if ( *v483 <= 0x9Eu )
                                                                                                                                                                                  goto LABEL_630;
                                                                                                                                                                                *(_QWORD *)(v473 + 1296) = v1585;
                                                                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1296), (System_Int32_array **)v1585, v1586, v1587, v1588, v1589, v1590, v1591);
                                                                                                                                                                                v1592 = (UserEventRaceMaster_o *)sub_B2C42C(UserEventRaceMaster_TypeInfo);
                                                                                                                                                                                UserEventRaceMaster___ctor(v1592, 0LL);
                                                                                                                                                                                if ( !v1592 || (v1522 = sub_B2C41C(v1592, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                {
                                                                                                                                                                                  if ( *v483 <= 0x9Fu )
                                                                                                                                                                                    goto LABEL_630;
                                                                                                                                                                                  *(_QWORD *)(v473 + 1304) = v1592;
                                                                                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1304), (System_Int32_array **)v1592, v1593, v1594, v1595, v1596, v1597, v1598);
                                                                                                                                                                                  v1599 = (EventScriptMaster_o *)sub_B2C42C(EventScriptMaster_TypeInfo);
                                                                                                                                                                                  EventScriptMaster___ctor(v1599, 0LL);
                                                                                                                                                                                  if ( !v1599 || (v1522 = sub_B2C41C(v1599, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                  {
                                                                                                                                                                                    if ( *v483 <= 0xA0u )
                                                                                                                                                                                      goto LABEL_630;
                                                                                                                                                                                    *(_QWORD *)(v473 + 1312) = v1599;
                                                                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1312), (System_Int32_array **)v1599, v1600, v1601, v1602, v1603, v1604, v1605);
                                                                                                                                                                                    v1606 = (EventScriptReleaseMaster_o *)sub_B2C42C(EventScriptReleaseMaster_TypeInfo);
                                                                                                                                                                                    EventScriptReleaseMaster___ctor(v1606, 0LL);
                                                                                                                                                                                    if ( !v1606 || (v1522 = sub_B2C41C(v1606, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                    {
                                                                                                                                                                                      if ( *v483 <= 0xA1u )
                                                                                                                                                                                        goto LABEL_630;
                                                                                                                                                                                      *(_QWORD *)(v473 + 1320) = v1606;
                                                                                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1320), (System_Int32_array **)v1606, v1607, v1608, v1609, v1610, v1611, v1612);
                                                                                                                                                                                      v1613 = (UserPresentHistoryMaster_o *)sub_B2C42C(UserPresentHistoryMaster_TypeInfo);
                                                                                                                                                                                      UserPresentHistoryMaster___ctor(v1613, 0LL);
                                                                                                                                                                                      if ( !v1613 || (v1522 = sub_B2C41C(v1613, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                      {
                                                                                                                                                                                        if ( *v483 <= 0xA2u )
                                                                                                                                                                                          goto LABEL_630;
                                                                                                                                                                                        *(_QWORD *)(v473 + 1328) = v1613;
                                                                                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1328), (System_Int32_array **)v1613, v1614, v1615, v1616, v1617, v1618, v1619);
                                                                                                                                                                                        v1620 = (MstMissionMaster_o *)sub_B2C42C(MstMissionMaster_TypeInfo);
                                                                                                                                                                                        MstMissionMaster___ctor(v1620, 0LL);
                                                                                                                                                                                        if ( !v1620 || (v1522 = sub_B2C41C(v1620, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                        {
                                                                                                                                                                                          if ( *v483 <= 0xA3u )
                                                                                                                                                                                            goto LABEL_630;
                                                                                                                                                                                          *(_QWORD *)(v473 + 1336) = v1620;
                                                                                                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1336), (System_Int32_array **)v1620, v1621, v1622, v1623, v1624, v1625, v1626);
                                                                                                                                                                                          v1627 = (ServantExceedMaster_o *)sub_B2C42C(ServantExceedMaster_TypeInfo);
                                                                                                                                                                                          ServantExceedMaster___ctor(v1627, 0LL);
                                                                                                                                                                                          if ( !v1627 || (v1522 = sub_B2C41C(v1627, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                          {
                                                                                                                                                                                            if ( *v483 <= 0xA4u )
                                                                                                                                                                                              goto LABEL_630;
                                                                                                                                                                                            *(_QWORD *)(v473 + 1344) = v1627;
                                                                                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1344), (System_Int32_array **)v1627, v1628, v1629, v1630, v1631, v1632, v1633);
                                                                                                                                                                                            v1634 = (PartialMaintenanceMaster_o *)sub_B2C42C(PartialMaintenanceMaster_TypeInfo);
                                                                                                                                                                                            PartialMaintenanceMaster___ctor(v1634, 0LL);
                                                                                                                                                                                            if ( !v1634 || (v1522 = sub_B2C41C(v1634, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                            {
                                                                                                                                                                                              if ( *v483 <= 0xA5u )
                                                                                                                                                                                                goto LABEL_630;
                                                                                                                                                                                              *(_QWORD *)(v473 + 1352) = v1634;
                                                                                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1352), (System_Int32_array **)v1634, v1635, v1636, v1637, v1638, v1639, v1640);
                                                                                                                                                                                              v1641 = (GuideMaster_o *)sub_B2C42C(GuideMaster_TypeInfo);
                                                                                                                                                                                              GuideMaster___ctor(v1641, 0LL);
                                                                                                                                                                                              if ( !v1641 || (v1522 = sub_B2C41C(v1641, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                              {
                                                                                                                                                                                                if ( *v483 <= 0xA6u )
                                                                                                                                                                                                  goto LABEL_630;
                                                                                                                                                                                                *(_QWORD *)(v473 + 1360) = v1641;
                                                                                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1360), (System_Int32_array **)v1641, v1642, v1643, v1644, v1645, v1646, v1647);
                                                                                                                                                                                                v1648 = (MstMissionDisplayInfoMaster_o *)sub_B2C42C(MstMissionDisplayInfoMaster_TypeInfo);
                                                                                                                                                                                                MstMissionDisplayInfoMaster___ctor(v1648, 0LL);
                                                                                                                                                                                                if ( !v1648 || (v1522 = sub_B2C41C(v1648, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                {
                                                                                                                                                                                                  if ( *v483 <= 0xA7u )
                                                                                                                                                                                                    goto LABEL_630;
                                                                                                                                                                                                  *(_QWORD *)(v473 + 1368) = v1648;
                                                                                                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1368), (System_Int32_array **)v1648, v1649, v1650, v1651, v1652, v1653, v1654);
                                                                                                                                                                                                  v1655 = (GachaGroupMaster_o *)sub_B2C42C(GachaGroupMaster_TypeInfo);
                                                                                                                                                                                                  GachaGroupMaster___ctor(v1655, 0LL);
                                                                                                                                                                                                  if ( !v1655 || (v1522 = sub_B2C41C(v1655, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                  {
                                                                                                                                                                                                    if ( *v483 <= 0xA8u )
                                                                                                                                                                                                      goto LABEL_630;
                                                                                                                                                                                                    *(_QWORD *)(v473 + 1376) = v1655;
                                                                                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1376), (System_Int32_array **)v1655, v1656, v1657, v1658, v1659, v1660, v1661);
                                                                                                                                                                                                    v1662 = (QuestResetMaster_o *)sub_B2C42C(QuestResetMaster_TypeInfo);
                                                                                                                                                                                                    QuestResetMaster___ctor(v1662, 0LL);
                                                                                                                                                                                                    if ( !v1662 || (v1522 = sub_B2C41C(v1662, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                    {
                                                                                                                                                                                                      if ( *v483 <= 0xA9u )
                                                                                                                                                                                                        goto LABEL_630;
                                                                                                                                                                                                      *(_QWORD *)(v473 + 1384) = v1662;
                                                                                                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1384), (System_Int32_array **)v1662, v1663, v1664, v1665, v1666, v1667, v1668);
                                                                                                                                                                                                      v1669 = (WarAddMaster_o *)sub_B2C42C(WarAddMaster_TypeInfo);
                                                                                                                                                                                                      WarAddMaster___ctor(v1669, 0LL);
                                                                                                                                                                                                      if ( !v1669 || (v1522 = sub_B2C41C(v1669, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                      {
                                                                                                                                                                                                        if ( *v483 <= 0xAAu )
                                                                                                                                                                                                          goto LABEL_630;
                                                                                                                                                                                                        *(_QWORD *)(v473 + 1392) = v1669;
                                                                                                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1392), (System_Int32_array **)v1669, v1670, v1671, v1672, v1673, v1674, v1675);
                                                                                                                                                                                                        v1676 = (EventItemDisplayMaster_o *)sub_B2C42C(EventItemDisplayMaster_TypeInfo);
                                                                                                                                                                                                        EventItemDisplayMaster___ctor(v1676, 0LL);
                                                                                                                                                                                                        if ( !v1676 || (v1522 = sub_B2C41C(v1676, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                        {
                                                                                                                                                                                                          if ( *v483 <= 0xABu )
                                                                                                                                                                                                            goto LABEL_630;
                                                                                                                                                                                                          *(_QWORD *)(v473 + 1400) = v1676;
                                                                                                                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1400), (System_Int32_array **)v1676, v1677, v1678, v1679, v1680, v1681, v1682);
                                                                                                                                                                                                          v1683 = (EventItemDisplayGroupMaster_o *)sub_B2C42C(EventItemDisplayGroupMaster_TypeInfo);
                                                                                                                                                                                                          EventItemDisplayGroupMaster___ctor(v1683, 0LL);
                                                                                                                                                                                                          if ( !v1683 || (v1522 = sub_B2C41C(v1683, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                          {
                                                                                                                                                                                                            if ( *v483 <= 0xACu )
                                                                                                                                                                                                              goto LABEL_630;
                                                                                                                                                                                                            *(_QWORD *)(v473 + 1408) = v1683;
                                                                                                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1408), (System_Int32_array **)v1683, v1684, v1685, v1686, v1687, v1688, v1689);
                                                                                                                                                                                                            v1690 = (EventItemDisplayReleaseMaster_o *)sub_B2C42C(EventItemDisplayReleaseMaster_TypeInfo);
                                                                                                                                                                                                            EventItemDisplayReleaseMaster___ctor(v1690, 0LL);
                                                                                                                                                                                                            if ( !v1690 || (v1522 = sub_B2C41C(v1690, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                            {
                                                                                                                                                                                                              if ( *v483 <= 0xADu )
                                                                                                                                                                                                                goto LABEL_630;
                                                                                                                                                                                                              *(_QWORD *)(v473 + 1416) = v1690;
                                                                                                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1416), (System_Int32_array **)v1690, v1691, v1692, v1693, v1694, v1695, v1696);
                                                                                                                                                                                                              v1697 = (EventTutorialMaster_o *)sub_B2C42C(EventTutorialMaster_TypeInfo);
                                                                                                                                                                                                              EventTutorialMaster___ctor(v1697, 0LL);
                                                                                                                                                                                                              if ( !v1697 || (v1522 = sub_B2C41C(v1697, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                              {
                                                                                                                                                                                                                if ( *v483 <= 0xAEu )
                                                                                                                                                                                                                  goto LABEL_630;
                                                                                                                                                                                                                *(_QWORD *)(v473 + 1424) = v1697;
                                                                                                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1424), (System_Int32_array **)v1697, v1698, v1699, v1700, v1701, v1702, v1703);
                                                                                                                                                                                                                v1704 = (EventTutorialCondMaster_o *)sub_B2C42C(EventTutorialCondMaster_TypeInfo);
                                                                                                                                                                                                                EventTutorialCondMaster___ctor(v1704, 0LL);
                                                                                                                                                                                                                if ( !v1704 || (v1522 = sub_B2C41C(v1704, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                {
                                                                                                                                                                                                                  if ( *v483 <= 0xAFu )
                                                                                                                                                                                                                    goto LABEL_630;
                                                                                                                                                                                                                  *(_QWORD *)(v473 + 1432) = v1704;
                                                                                                                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1432), (System_Int32_array **)v1704, v1705, v1706, v1707, v1708, v1709, v1710);
                                                                                                                                                                                                                  v1711 = (VoiceReleaseMaster_o *)sub_B2C42C(VoiceReleaseMaster_TypeInfo);
                                                                                                                                                                                                                  VoiceReleaseMaster___ctor(v1711, 0LL);
                                                                                                                                                                                                                  if ( !v1711 || (v1522 = sub_B2C41C(v1711, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                  {
                                                                                                                                                                                                                    if ( *v483 <= 0xB0u )
                                                                                                                                                                                                                      goto LABEL_630;
                                                                                                                                                                                                                    *(_QWORD *)(v473 + 1440) = v1711;
                                                                                                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1440), (System_Int32_array **)v1711, v1712, v1713, v1714, v1715, v1716, v1717);
                                                                                                                                                                                                                    v1718 = (EventSuperBossMaster_o *)sub_B2C42C(EventSuperBossMaster_TypeInfo);
                                                                                                                                                                                                                    EventSuperBossMaster___ctor(v1718, 0LL);
                                                                                                                                                                                                                    if ( !v1718 || (v1522 = sub_B2C41C(v1718, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                    {
                                                                                                                                                                                                                      if ( *v483 <= 0xB1u )
                                                                                                                                                                                                                        goto LABEL_630;
                                                                                                                                                                                                                      *(_QWORD *)(v473 + 1448) = v1718;
                                                                                                                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1448), (System_Int32_array **)v1718, v1719, v1720, v1721, v1722, v1723, v1724);
                                                                                                                                                                                                                      v1725 = (UserSuperBossMaster_o *)sub_B2C42C(UserSuperBossMaster_TypeInfo);
                                                                                                                                                                                                                      UserSuperBossMaster___ctor(v1725, 0LL);
                                                                                                                                                                                                                      if ( !v1725 || (v1522 = sub_B2C41C(v1725, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                      {
                                                                                                                                                                                                                        if ( *v483 <= 0xB2u )
                                                                                                                                                                                                                          goto LABEL_630;
                                                                                                                                                                                                                        *(_QWORD *)(v473 + 1456) = v1725;
                                                                                                                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1456), (System_Int32_array **)v1725, v1726, v1727, v1728, v1729, v1730, v1731);
                                                                                                                                                                                                                        v1732 = (QuestScriptMaster_o *)sub_B2C42C(QuestScriptMaster_TypeInfo);
                                                                                                                                                                                                                        QuestScriptMaster___ctor(v1732, 0LL);
                                                                                                                                                                                                                        if ( !v1732 || (v1522 = sub_B2C41C(v1732, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                        {
                                                                                                                                                                                                                          if ( *v483 <= 0xB3u )
                                                                                                                                                                                                                            goto LABEL_630;
                                                                                                                                                                                                                          *(_QWORD *)(v473 + 1464) = v1732;
                                                                                                                                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1464), (System_Int32_array **)v1732, v1733, v1734, v1735, v1736, v1737, v1738);
                                                                                                                                                                                                                          v1739 = (QuestScriptReleaseMaster_o *)sub_B2C42C(QuestScriptReleaseMaster_TypeInfo);
                                                                                                                                                                                                                          QuestScriptReleaseMaster___ctor(v1739, 0LL);
                                                                                                                                                                                                                          if ( !v1739 || (v1522 = sub_B2C41C(v1739, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                          {
                                                                                                                                                                                                                            if ( *v483 <= 0xB4u )
                                                                                                                                                                                                                              goto LABEL_630;
                                                                                                                                                                                                                            *(_QWORD *)(v473 + 1472) = v1739;
                                                                                                                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1472), (System_Int32_array **)v1739, v1740, v1741, v1742, v1743, v1744, v1745);
                                                                                                                                                                                                                            v1746 = (MaterialFolderMaster_o *)sub_B2C42C(MaterialFolderMaster_TypeInfo);
                                                                                                                                                                                                                            MaterialFolderMaster___ctor(v1746, 0LL);
                                                                                                                                                                                                                            if ( !v1746 || (v1522 = sub_B2C41C(v1746, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                            {
                                                                                                                                                                                                                              if ( *v483 <= 0xB5u )
                                                                                                                                                                                                                                goto LABEL_630;
                                                                                                                                                                                                                              *(_QWORD *)(v473 + 1480) = v1746;
                                                                                                                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1480), (System_Int32_array **)v1746, v1747, v1748, v1749, v1750, v1751, v1752);
                                                                                                                                                                                                                              v1753 = (RestrictionMaster_o *)sub_B2C42C(RestrictionMaster_TypeInfo);
                                                                                                                                                                                                                              RestrictionMaster___ctor(v1753, 0LL);
                                                                                                                                                                                                                              if ( !v1753 || (v1522 = sub_B2C41C(v1753, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                if ( *v483 <= 0xB6u )
                                                                                                                                                                                                                                  goto LABEL_630;
                                                                                                                                                                                                                                *(_QWORD *)(v473 + 1488) = v1753;
                                                                                                                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1488), (System_Int32_array **)v1753, v1754, v1755, v1756, v1757, v1758, v1759);
                                                                                                                                                                                                                                v1760 = (QuestRestrictionMaster_o *)sub_B2C42C(QuestRestrictionMaster_TypeInfo);
                                                                                                                                                                                                                                QuestRestrictionMaster___ctor(v1760, 0LL);
                                                                                                                                                                                                                                if ( !v1760 || (v1522 = sub_B2C41C(v1760, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                  if ( *v483 <= 0xB7u )
                                                                                                                                                                                                                                    goto LABEL_630;
                                                                                                                                                                                                                                  *(_QWORD *)(v473 + 1496) = v1760;
                                                                                                                                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1496), (System_Int32_array **)v1760, v1761, v1762, v1763, v1764, v1765, v1766);
                                                                                                                                                                                                                                  v1767 = (ServantVoiceRelationMaster_o *)sub_B2C42C(ServantVoiceRelationMaster_TypeInfo);
                                                                                                                                                                                                                                  ServantVoiceRelationMaster___ctor(v1767, 0LL);
                                                                                                                                                                                                                                  if ( !v1767 || (v1522 = sub_B2C41C(v1767, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                    if ( *v483 <= 0xB8u )
                                                                                                                                                                                                                                      goto LABEL_630;
                                                                                                                                                                                                                                    *(_QWORD *)(v473 + 1504) = v1767;
                                                                                                                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1504), (System_Int32_array **)v1767, v1768, v1769, v1770, v1771, v1772, v1773);
                                                                                                                                                                                                                                    v1774 = (ShopDetailMaster_o *)sub_B2C42C(ShopDetailMaster_TypeInfo);
                                                                                                                                                                                                                                    ShopDetailMaster___ctor(v1774, 0LL);
                                                                                                                                                                                                                                    if ( !v1774 || (v1522 = sub_B2C41C(v1774, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                      if ( *v483 <= 0xB9u )
                                                                                                                                                                                                                                        goto LABEL_630;
                                                                                                                                                                                                                                      *(_QWORD *)(v473 + 1512) = v1774;
                                                                                                                                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1512), (System_Int32_array **)v1774, v1775, v1776, v1777, v1778, v1779, v1780);
                                                                                                                                                                                                                                      v1781 = (ServantScriptAddMaster_o *)sub_B2C42C(ServantScriptAddMaster_TypeInfo);
                                                                                                                                                                                                                                      ServantScriptAddMaster___ctor(v1781, 0LL);
                                                                                                                                                                                                                                      if ( !v1781 || (v1522 = sub_B2C41C(v1781, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                        if ( *v483 <= 0xBAu )
                                                                                                                                                                                                                                          goto LABEL_630;
                                                                                                                                                                                                                                        *(_QWORD *)(v473 + 1520) = v1781;
                                                                                                                                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1520), (System_Int32_array **)v1781, v1782, v1783, v1784, v1785, v1786, v1787);
                                                                                                                                                                                                                                        v1788 = (CombineMaster_o *)sub_B2C42C(CombineMaster_TypeInfo);
                                                                                                                                                                                                                                        CombineMaster___ctor(v1788, 0LL);
                                                                                                                                                                                                                                        if ( !v1788 || (v1522 = sub_B2C41C(v1788, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                          if ( *v483 <= 0xBBu )
                                                                                                                                                                                                                                            goto LABEL_630;
                                                                                                                                                                                                                                          *(_QWORD *)(v473 + 1528) = v1788;
                                                                                                                                                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1528), (System_Int32_array **)v1788, v1789, v1790, v1791, v1792, v1793, v1794);
                                                                                                                                                                                                                                          v1795 = (AiFieldMaster_o *)sub_B2C42C(AiFieldMaster_TypeInfo);
                                                                                                                                                                                                                                          AiFieldMaster___ctor(v1795, 0LL);
                                                                                                                                                                                                                                          if ( !v1795 || (v1522 = sub_B2C41C(v1795, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                            if ( *v483 <= 0xBCu )
                                                                                                                                                                                                                                              goto LABEL_630;
                                                                                                                                                                                                                                            *(_QWORD *)(v473 + 1536) = v1795;
                                                                                                                                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1536), (System_Int32_array **)v1795, v1796, v1797, v1798, v1799, v1800, v1801);
                                                                                                                                                                                                                                            v1802 = (ServantCommentAddMaster_o *)sub_B2C42C(ServantCommentAddMaster_TypeInfo);
                                                                                                                                                                                                                                            ServantCommentAddMaster___ctor(v1802, 0LL);
                                                                                                                                                                                                                                            if ( !v1802 || (v1522 = sub_B2C41C(v1802, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                              if ( *v483 <= 0xBDu )
                                                                                                                                                                                                                                                goto LABEL_630;
                                                                                                                                                                                                                                              *(_QWORD *)(v473 + 1544) = v1802;
                                                                                                                                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1544), (System_Int32_array **)v1802, v1803, v1804, v1805, v1806, v1807, v1808);
                                                                                                                                                                                                                                              v1809 = (EventFilterMaster_o *)sub_B2C42C(EventFilterMaster_TypeInfo);
                                                                                                                                                                                                                                              EventFilterMaster___ctor(v1809, 0LL);
                                                                                                                                                                                                                                              if ( !v1809 || (v1522 = sub_B2C41C(v1809, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                if ( *v483 <= 0xBEu )
                                                                                                                                                                                                                                                  goto LABEL_630;
                                                                                                                                                                                                                                                *(_QWORD *)(v473 + 1552) = v1809;
                                                                                                                                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1552), (System_Int32_array **)v1809, v1810, v1811, v1812, v1813, v1814, v1815);
                                                                                                                                                                                                                                                v1816 = (UserSupportDeckMaster_o *)sub_B2C42C(UserSupportDeckMaster_TypeInfo);
                                                                                                                                                                                                                                                UserSupportDeckMaster___ctor(v1816, 0LL);
                                                                                                                                                                                                                                                if ( !v1816 || (v1522 = sub_B2C41C(v1816, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                  if ( *v483 <= 0xBFu )
                                                                                                                                                                                                                                                    goto LABEL_630;
                                                                                                                                                                                                                                                  *(_QWORD *)(v473 + 1560) = v1816;
                                                                                                                                                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1560), (System_Int32_array **)v1816, v1817, v1818, v1819, v1820, v1821, v1822);
                                                                                                                                                                                                                                                  v1823 = (EventRewardSceneMaster_o *)sub_B2C42C(EventRewardSceneMaster_TypeInfo);
                                                                                                                                                                                                                                                  EventRewardSceneMaster___ctor(v1823, 0LL);
                                                                                                                                                                                                                                                  if ( !v1823 || (v1522 = sub_B2C41C(v1823, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                    if ( *v483 <= 0xC0u )
                                                                                                                                                                                                                                                      goto LABEL_630;
                                                                                                                                                                                                                                                    *(_QWORD *)(v473 + 1568) = v1823;
                                                                                                                                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1568), (System_Int32_array **)v1823, v1824, v1825, v1826, v1827, v1828, v1829);
                                                                                                                                                                                                                                                    v1830 = (EventVoicePlayMaster_o *)sub_B2C42C(EventVoicePlayMaster_TypeInfo);
                                                                                                                                                                                                                                                    EventVoicePlayMaster___ctor(v1830, 0LL);
                                                                                                                                                                                                                                                    if ( !v1830 || (v1522 = sub_B2C41C(v1830, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                      if ( *v483 <= 0xC1u )
                                                                                                                                                                                                                                                        goto LABEL_630;
                                                                                                                                                                                                                                                      *(_QWORD *)(v473 + 1576) = v1830;
                                                                                                                                                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1576), (System_Int32_array **)v1830, v1831, v1832, v1833, v1834, v1835, v1836);
                                                                                                                                                                                                                                                      v1837 = (GachaSubMaster_o *)sub_B2C42C(GachaSubMaster_TypeInfo);
                                                                                                                                                                                                                                                      GachaSubMaster___ctor(v1837, 0LL);
                                                                                                                                                                                                                                                      if ( !v1837 || (v1522 = sub_B2C41C(v1837, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                        if ( *v483 <= 0xC2u )
                                                                                                                                                                                                                                                          goto LABEL_630;
                                                                                                                                                                                                                                                        *(_QWORD *)(v473 + 1584) = v1837;
                                                                                                                                                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1584), (System_Int32_array **)v1837, v1838, v1839, v1840, v1841, v1842, v1843);
                                                                                                                                                                                                                                                        v1844 = (GachaDetailMaster_o *)sub_B2C42C(GachaDetailMaster_TypeInfo);
                                                                                                                                                                                                                                                        GachaDetailMaster___ctor(v1844, 0LL);
                                                                                                                                                                                                                                                        if ( !v1844 || (v1522 = sub_B2C41C(v1844, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                          if ( *v483 <= 0xC3u )
                                                                                                                                                                                                                                                            goto LABEL_630;
                                                                                                                                                                                                                                                          *(_QWORD *)(v473 + 1592) = v1844;
                                                                                                                                                                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1592), (System_Int32_array **)v1844, v1845, v1846, v1847, v1848, v1849, v1850);
                                                                                                                                                                                                                                                          v1851 = (GachaBonusSelectMaster_o *)sub_B2C42C(GachaBonusSelectMaster_TypeInfo);
                                                                                                                                                                                                                                                          GachaBonusSelectMaster___ctor(v1851, 0LL);
                                                                                                                                                                                                                                                          if ( !v1851 || (v1522 = sub_B2C41C(v1851, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                            if ( *v483 <= 0xC4u )
                                                                                                                                                                                                                                                              goto LABEL_630;
                                                                                                                                                                                                                                                            *(_QWORD *)(v473 + 1600) = v1851;
                                                                                                                                                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1600), (System_Int32_array **)v1851, v1852, v1853, v1854, v1855, v1856, v1857);
                                                                                                                                                                                                                                                            v1858 = (GachaBonusSelectLineupMaster_o *)sub_B2C42C(GachaBonusSelectLineupMaster_TypeInfo);
                                                                                                                                                                                                                                                            GachaBonusSelectLineupMaster___ctor(v1858, 0LL);
                                                                                                                                                                                                                                                            if ( !v1858 || (v1522 = sub_B2C41C(v1858, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                              if ( *v483 <= 0xC5u )
                                                                                                                                                                                                                                                                goto LABEL_630;
                                                                                                                                                                                                                                                              *(_QWORD *)(v473 + 1608) = v1858;
                                                                                                                                                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1608), (System_Int32_array **)v1858, v1859, v1860, v1861, v1862, v1863, v1864);
                                                                                                                                                                                                                                                              v1865 = (ServantChangeMaster_o *)sub_B2C42C(ServantChangeMaster_TypeInfo);
                                                                                                                                                                                                                                                              ServantChangeMaster___ctor(v1865, 0LL);
                                                                                                                                                                                                                                                              if ( !v1865 || (v1522 = sub_B2C41C(v1865, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                if ( *v483 <= 0xC6u )
                                                                                                                                                                                                                                                                  goto LABEL_630;
                                                                                                                                                                                                                                                                *(_QWORD *)(v473 + 1616) = v1865;
                                                                                                                                                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1616), (System_Int32_array **)v1865, v1866, v1867, v1868, v1869, v1870, v1871);
                                                                                                                                                                                                                                                                v1872 = (VoiceCondMaster_o *)sub_B2C42C(VoiceCondMaster_TypeInfo);
                                                                                                                                                                                                                                                                VoiceCondMaster___ctor(v1872, 0LL);
                                                                                                                                                                                                                                                                if ( !v1872 || (v1522 = sub_B2C41C(v1872, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                  if ( *v483 <= 0xC7u )
                                                                                                                                                                                                                                                                    goto LABEL_630;
                                                                                                                                                                                                                                                                  *(_QWORD *)(v473 + 1624) = v1872;
                                                                                                                                                                                                                                                                  sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1624), (System_Int32_array **)v1872, v1873, v1874, v1875, v1876, v1877, v1878);
                                                                                                                                                                                                                                                                  v1879 = (BgmReleaseMaster_o *)sub_B2C42C(BgmReleaseMaster_TypeInfo);
                                                                                                                                                                                                                                                                  BgmReleaseMaster___ctor(v1879, 0LL);
                                                                                                                                                                                                                                                                  if ( !v1879 || (v1522 = sub_B2C41C(v1879, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                    if ( *v483 <= 0xC8u )
                                                                                                                                                                                                                                                                      goto LABEL_630;
                                                                                                                                                                                                                                                                    *(_QWORD *)(v473 + 1632) = v1879;
                                                                                                                                                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1632), (System_Int32_array **)v1879, v1880, v1881, v1882, v1883, v1884, v1885);
                                                                                                                                                                                                                                                                    v1886 = (MyRoomAddMaster_o *)sub_B2C42C(MyRoomAddMaster_TypeInfo);
                                                                                                                                                                                                                                                                    MyRoomAddMaster___ctor(v1886, 0LL);
                                                                                                                                                                                                                                                                    if ( !v1886 || (v1522 = sub_B2C41C(v1886, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                                    {
                                                                                                                                                                                                                                                                      if ( *v483 <= 0xC9u )
                                                                                                                                                                                                                                                                        goto LABEL_630;
                                                                                                                                                                                                                                                                      *(_QWORD *)(v473 + 1640) = v1886;
                                                                                                                                                                                                                                                                      sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1640), (System_Int32_array **)v1886, v1887, v1888, v1889, v1890, v1891, v1892);
                                                                                                                                                                                                                                                                      v1893 = (ShopActionMaster_o *)sub_B2C42C(ShopActionMaster_TypeInfo);
                                                                                                                                                                                                                                                                      ShopActionMaster___ctor(v1893, 0LL);
                                                                                                                                                                                                                                                                      if ( !v1893 || (v1522 = sub_B2C41C(v1893, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                                      {
                                                                                                                                                                                                                                                                        if ( *v483 <= 0xCAu )
                                                                                                                                                                                                                                                                          goto LABEL_630;
                                                                                                                                                                                                                                                                        *(_QWORD *)(v473 + 1648) = v1893;
                                                                                                                                                                                                                                                                        sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1648), (System_Int32_array **)v1893, v1894, v1895, v1896, v1897, v1898, v1899);
                                                                                                                                                                                                                                                                        v1900 = (EventRewardSceneReleaseMaster_o *)sub_B2C42C(EventRewardSceneReleaseMaster_TypeInfo);
                                                                                                                                                                                                                                                                        EventRewardSceneReleaseMaster___ctor(v1900, 0LL);
                                                                                                                                                                                                                                                                        if ( !v1900 || (v1522 = sub_B2C41C(v1900, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                                        {
                                                                                                                                                                                                                                                                          if ( *v483 <= 0xCBu )
                                                                                                                                                                                                                                                                            goto LABEL_630;
                                                                                                                                                                                                                                                                          *(_QWORD *)(v473 + 1656) = v1900;
                                                                                                                                                                                                                                                                          sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1656), (System_Int32_array **)v1900, v1901, v1902, v1903, v1904, v1905, v1906);
                                                                                                                                                                                                                                                                          v1907 = (QuestBehaviorMaster_o *)sub_B2C42C(QuestBehaviorMaster_TypeInfo);
                                                                                                                                                                                                                                                                          QuestBehaviorMaster___ctor(v1907, 0LL);
                                                                                                                                                                                                                                                                          if ( !v1907 || (v1522 = sub_B2C41C(v1907, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                                          {
                                                                                                                                                                                                                                                                            if ( *v483 <= 0xCCu )
                                                                                                                                                                                                                                                                              goto LABEL_630;
                                                                                                                                                                                                                                                                            *(_QWORD *)(v473 + 1664) = v1907;
                                                                                                                                                                                                                                                                            sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1664), (System_Int32_array **)v1907, v1908, v1909, v1910, v1911, v1912, v1913);
                                                                                                                                                                                                                                                                            v1914 = (MapMaster_o *)sub_B2C42C(MapMaster_TypeInfo);
                                                                                                                                                                                                                                                                            MapMaster___ctor(v1914, 0LL);
                                                                                                                                                                                                                                                                            if ( !v1914 || (v1522 = sub_B2C41C(v1914, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                                            {
                                                                                                                                                                                                                                                                              if ( *v483 <= 0xCDu )
                                                                                                                                                                                                                                                                                goto LABEL_630;
                                                                                                                                                                                                                                                                              *(_QWORD *)(v473 + 1672) = v1914;
                                                                                                                                                                                                                                                                              sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1672), (System_Int32_array **)v1914, v1915, v1916, v1917, v1918, v1919, v1920);
                                                                                                                                                                                                                                                                              v1921 = (MapCondMaster_o *)sub_B2C42C(MapCondMaster_TypeInfo);
                                                                                                                                                                                                                                                                              MapCondMaster___ctor(v1921, 0LL);
                                                                                                                                                                                                                                                                              if ( !v1921 || (v1522 = sub_B2C41C(v1921, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                                                                if ( *v483 <= 0xCEu )
                                                                                                                                                                                                                                                                                  goto LABEL_630;
                                                                                                                                                                                                                                                                                *(_QWORD *)(v473 + 1680) = v1921;
                                                                                                                                                                                                                                                                                sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1680), (System_Int32_array **)v1921, v1922, v1923, v1924, v1925, v1926, v1927);
                                                                                                                                                                                                                                                                                v1928 = (MapButtonMaster_o *)sub_B2C42C(MapButtonMaster_TypeInfo);
                                                                                                                                                                                                                                                                                MapButtonMaster___ctor(v1928, 0LL);
                                                                                                                                                                                                                                                                                if ( !v1928 || (v1522 = sub_B2C41C(v1928, *(_QWORD *)(*(_QWORD *)v473 + 64LL))) != 0 )
                                                                                                                                                                                                                                                                                {
                                                                                                                                                                                                                                                                                  if ( *v483 > 0xCFu )
                                                                                                                                                                                                                                                                                  {
                                                                                                                                                                                                                                                                                    *(_QWORD *)(v473 + 1688) = v1928;
                                                                                                                                                                                                                                                                                    sub_B2C2F8((BattleServantConfConponent_o *)(v473 + 1688), (System_Int32_array **)v1928, v1929, v1930, v1931, v1932, v1933, v1934);
                                                                                                                                                                                                                                                                                    JUMPOUT(0x1A424D4LL);
                                                                                                                                                                                                                                                                                  }
LABEL_630:
                                                                                                                                                                                                                                                                                  v1936 = sub_B2C460(v1522);
                                                                                                                                                                                                                                                                                  sub_B2C400(v1936, 0LL);
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
                                                                                                                                                            v1939 = sub_B2C454(v1522);
                                                                                                                                                            sub_B2C400(v1939, 0LL);
                                                                                                                                                          }
LABEL_629:
                                                                                                                                                          v1935 = sub_B2C460(v475);
                                                                                                                                                          sub_B2C400(v1935, 0LL);
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
      v1940 = sub_B2C454(v475);
      sub_B2C400(v1940, 0LL);
    }
  }
LABEL_632:
  v1938 = sub_B2C454(v475);
  sub_B2C400(v1938, 0LL);
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

  if ( (byte_4189065 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    sub_B2C35C(&ManagerConfig_TypeInfo, v2);
    byte_4189065 = 1;
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  Il2CppObject **p_lockCountObj; // x19
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  unsigned int i; // w22
  Il2CppObject *v17; // x0
  System_String_o *v18; // x20
  System_String_o *v19; // x21
  __int64 v20; // x1
  unsigned int v21; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4189062 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v4);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_8630/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v7);
    byte_4189062 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.lockCountObj = (Il2CppObject *)v8;
  p_lockCountObj = &this->fields.lockCountObj;
  sub_B2C2F8((BattleServantConfConponent_o *)p_lockCountObj, (System_Int32_array **)v8, v10, v11, v12, v13, v14, v15);
  for ( i = 0; i < 0x3E6; ++i )
  {
    v21 = i + 1;
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v18 = System_String__Format((System_String_o *)StringLiteral_8630/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v17, 0LL);
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get(v18, 0LL);
    if ( System_String__op_Equality(v19, v18, 0LL) )
      break;
    if ( !*p_lockCountObj )
      sub_B2C434(0LL, v20);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_lockCountObj,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  }
}


WarQuestSelectionMaster_o *__fastcall DataManager__GetMasterData_WarQuestSelectionMaster_(
        DataManager_o *this,
        const MethodInfo_17339EC *method)
{
  const MethodInfo_17339EC *_1_TMaster; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Type_o *TypeFromHandle; // x0
  __int64 v11; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *masterDataBytes; // x8
  WarBoardEvalValueSquare_CalcEval_o *v13; // x20
  WarQuestSelectionMaster_o *result; // x0
  Il2CppType *_2_TMaster; // x19
  Il2CppObject *v16; // x19
  Il2CppObject *v17; // x20
  Il2CppObject *v18; // x0
  Il2CppObject *v19; // x19
  __int64 v20[2]; // [xsp+0h] [xbp-40h] BYREF
  int v21; // [xsp+10h] [xbp-30h]
  int v22; // [xsp+1Ch] [xbp-24h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+28h] [xbp-18h] BYREF
  System_RuntimeTypeHandle_o v24; // 0:w0.4

  _1_TMaster = method;
  if ( (byte_41872B2 & 1) == 0 )
  {
    sub_B2C35C(&DataMasterBase_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v5);
    sub_B2C35C(&int_TypeInfo, v6);
    sub_B2C35C(&DataNameKind_Kind_TypeInfo, v7);
    sub_B2C35C(&System_Type_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_20411/*"master[{0}] is null[{1}:{2}]"*/, v9);
    byte_41872B2 = 1;
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
  LODWORD(v13) = (_DWORD)TypeFromHandle;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
         masterDataBytes,
         (int32_t)TypeFromHandle,
         &value,
         (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v13 = value;
    _1_TMaster = (const MethodInfo_17339EC *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (_1_TMaster[3].token & 0x10000) == 0 )
      sub_AC505C(_1_TMaster);
    if ( !v13 )
      return 0LL;
    result = (WarQuestSelectionMaster_o *)sub_B2C41C(v13, _1_TMaster);
    if ( result )
      return result;
    sub_B2C728(v13);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v24.fields.value = (int)_2_TMaster;
  TypeFromHandle = System_Type__GetTypeFromHandle(v24, 0LL);
  if ( !TypeFromHandle )
LABEL_23:
    sub_B2C434(TypeFromHandle, v11);
  v16 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))TypeFromHandle->klass->vtable._3_ToString.method)(
                          TypeFromHandle,
                          TypeFromHandle->klass->vtable._4_unknown.methodPtr);
  v22 = (int)v13;
  v21 = (int)v13;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  v20[0] = (__int64)DataNameKind_Kind_TypeInfo;
  v20[1] = -1LL;
  v18 = (Il2CppObject *)((__int64 (__fastcall *)(__int64 *, Il2CppMethodPointer))DataNameKind_Kind_TypeInfo->vtable._3_ToString.method)(
                          v20,
                          DataNameKind_Kind_TypeInfo->vtable._4_CompareTo.methodPtr);
  v19 = (Il2CppObject *)System_String__Format_44306596((System_String_o *)StringLiteral_20411/*"master[{0}] is null[{1}:{2}]"*/, v16, v17, v18, 0LL);
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogError(v19, 0LL);
  return 0LL;
}


WarQuestSelectionMaster_o *__fastcall DataManager__GetMaster_WarQuestSelectionMaster_(const MethodInfo_173398C *method)
{
  __int64 v1; // x1
  __int64 v3; // x1

  if ( (byte_41872B1 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    byte_41872B1 = 1;
  }
  if ( !SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__) )
    sub_B2C434(0LL, v3);
  return (WarQuestSelectionMaster_o *)((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMasterData_TMaster_->methodPointer)();
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Func_Task_ContingentProperties__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418904D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_CreateMasterData__, method);
    sub_B2C35C(&Method_System_Func_DataMasterBase_____ctor__, v3);
    sub_B2C35C(&System_Func_DataMasterBase____TypeInfo, v4);
    byte_418904D = 1;
  }
  v5 = (System_Func_Task_ContingentProperties__o *)sub_B2C42C(System_Func_DataMasterBase____TypeInfo);
  System_Func_Task_ContingentProperties____ctor(
    v5,
    0LL,
    Method_DataManager_CreateMasterData__,
    (const MethodInfo_26FF07C *)Method_System_Func_DataMasterBase_____ctor__);
  DataManager__InitializeInternal(this, (System_Func_DataMasterBase____o *)v5, v6);
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v12; // x22
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int monitor; // w8
  unsigned int v20; // w23
  __int64 v21; // x2
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x0

  v4 = this;
  if ( (byte_418904E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    this = (DataManager_o *)sub_B2C35C(&Method_System_Func_DataMasterBase____Invoke__, v7);
    byte_418904E = 1;
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
                  (const MethodInfo_26FF090 *)Method_System_Func_DataMasterBase____Invoke__),
          v12 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
            v12,
            (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v11) )
    {
LABEL_19:
      sub_B2C434(this, createMasterDataMethod);
    }
    monitor = (int)v11[1].monitor;
    if ( monitor >= 1 )
    {
      v20 = 0;
      while ( v20 < monitor )
      {
        v21 = *((_QWORD *)&v11[2].klass + (int)v20);
        if ( !v21 || !v12 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          v12,
          *(_DWORD *)(v21 + 16),
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v21,
          (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        monitor = (int)v11[1].monitor;
        if ( (int)++v20 >= monitor )
          goto LABEL_18;
      }
LABEL_20:
      v28 = sub_B2C460(this);
      sub_B2C400(v28, 0LL);
    }
LABEL_18:
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v11;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v4->fields.lookup,
      (System_Int32_array **)v11,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    v4->fields.masterDataBytes = (struct System_Byte_array *)v12;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v4->fields.masterDataBytes,
      (System_Int32_array **)v12,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
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
  __int64 v15; // x21
  __int64 v16; // x20
  int v17; // w23
  unsigned __int64 v18; // x22
  signed __int64 v19; // x24
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x26
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x27
  __int64 v31; // x21
  System_Int32_array **v32; // x1
  __int64 v33; // x28
  __int64 v34; // x21
  WarBoardPieceData_array *lookup; // x27
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v36; // x28
  __int64 Index_WarBoardPieceData; // x0
  __int64 v38; // x1
  const MethodInfo_21524A8 *v39; // x3
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v40; // x8
  DataMasterBase_o *v41; // x28
  Il2CppObject *saveNameList; // x26
  System_Threading_SynchronizationContext_o *writeMasterDataThread; // x27
  __int64 v44; // x0
  const MethodInfo_21524A8 *v45; // x3
  __int64 v46; // x0
  __int64 v47; // x1
  Il2CppObject *v48; // x27
  int v49; // w8
  __int64 v50; // x0
  __int64 v51; // x26
  System_Byte_array *work; // [xsp+10h] [xbp-A0h]
  System_Nullable_long__o v53; // [xsp+18h] [xbp-98h] BYREF
  _DWORD v54[7]; // [xsp+28h] [xbp-88h] BYREF
  int v55; // [xsp+44h] [xbp-6Ch]
  int v56; // [xsp+50h] [xbp-60h]
  bool lockTaken; // [xsp+5Ch] [xbp-54h] BYREF
  System_Nullable_long__o v58; // 0:x0.16
  System_Nullable_long__o v59; // 0:x0.16

  v4 = this;
  if ( (byte_418905F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_B2C35C(&byte___TypeInfo, v5);
    sub_B2C35C(&int___TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_B2C35C(&Method_System_Nullable_long___ctor__, v9);
    sub_B2C35C(&Method_System_Predicate_DataMasterBase___ctor__, v10);
    sub_B2C35C(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_B2C35C(&Method_DataManager___c__DisplayClass57_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_B2C35C(&DataManager___c__DisplayClass57_0_TypeInfo, v13);
    byte_418905F = 1;
  }
  lockTaken = 0;
  v56 = 0;
  v55 = 0;
  if ( !indexList )
    goto LABEL_37;
  v14 = sub_B2C41C(indexList, int___TypeInfo);
  if ( !v14 )
  {
    v51 = sub_B2C728(indexList);
    __cxa_end_catch();
    _Unwind_Resume(v51);
  }
  v15 = *(_QWORD *)(v14 + 24);
  v16 = v14;
  work = (System_Byte_array *)sub_B2C374(byte___TypeInfo, 2000LL);
  if ( (int)v15 >= 1 )
  {
    v17 = 0;
    v18 = 0LL;
    v19 = (int)v15;
    while ( 1 )
    {
      v23 = sub_B2C42C(DataManager___c__DisplayClass57_0_TypeInfo);
      DataManager___c__DisplayClass57_0___ctor((DataManager___c__DisplayClass57_0_o *)v23, 0LL);
      if ( v18 >= *(unsigned int *)(v16 + 24) )
      {
        v50 = sub_B2C460(this);
        sub_B2C400(v50, 0LL);
      }
      saveDataMapList = v4->fields.saveDataMapList;
      if ( !saveDataMapList )
        break;
      v31 = *(int *)(v16 + 32 + 4 * v18);
      if ( saveDataMapList->fields._size <= (unsigned int)v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( !v23 )
        break;
      v32 = (System_Int32_array **)saveDataMapList->fields._items->m_Items[v31];
      *(_QWORD *)(v23 + 16) = v32;
      sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 16), v32, v24, v25, v26, v27, v28, v29);
      v33 = *(_QWORD *)&v4->fields.lastFrameTime;
      if ( !v33 )
        break;
      if ( *(_DWORD *)(v33 + 24) <= (unsigned int)v31 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v34 = *(_QWORD *)(*(_QWORD *)(v33 + 16) + 8 * v31 + 32);
      if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v23 + 16), 0LL) )
      {
        lookup = (WarBoardPieceData_array *)v4->fields.lookup;
        v36 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_DataMasterBase__TypeInfo);
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v36,
          (Il2CppObject *)v23,
          Method_DataManager___c__DisplayClass57_0__LoadMasterDataThread_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_DataMasterBase___ctor__);
        Index_WarBoardPieceData = System_Array__FindIndex_WarBoardPieceData_(
                                    lookup,
                                    (System_Predicate_T__o *)v36,
                                    (const MethodInfo_1FFC870 *)Method_System_Array_FindIndex_DataMasterBase___);
        if ( (Index_WarBoardPieceData & 0x80000000) == 0 )
        {
          v40 = v4->fields.lookup;
          if ( !v40 )
            sub_B2C434(Index_WarBoardPieceData, v38);
          if ( (unsigned int)Index_WarBoardPieceData >= LODWORD(v40->fields.entries) )
          {
            v20 = sub_B2C460(Index_WarBoardPieceData);
            sub_B2C400(v20, 0LL);
          }
          if ( !v34 )
            sub_B2C434(Index_WarBoardPieceData, v38);
          if ( !*(_DWORD *)(v34 + 24) )
          {
            v21 = sub_B2C460(Index_WarBoardPieceData);
            sub_B2C400(v21, 0LL);
          }
          v41 = (DataMasterBase_o *)*((_QWORD *)&v40->fields.count + (int)Index_WarBoardPieceData);
          saveNameList = (Il2CppObject *)v4->fields.saveNameList;
          writeMasterDataThread = (System_Threading_SynchronizationContext_o *)v4->fields.writeMasterDataThread;
          *(_QWORD *)&v58.fields.has_value = *(_QWORD *)(v34 + 32);
          *(_QWORD *)v54 = 0LL;
          *(_QWORD *)&v54[2] = 0LL;
          v58.fields.value = (int64_t)v54;
          System_Nullable_long____ctor(v58, Method_System_Nullable_long___ctor__, v39);
          if ( *(_DWORD *)(v34 + 24) <= 1u )
          {
            v22 = sub_B2C460(v44);
            sub_B2C400(v22, 0LL);
          }
          *(_QWORD *)&v59.fields.has_value = *(_QWORD *)(v34 + 40);
          v53.fields.value = 0LL;
          *(_QWORD *)&v53.fields.has_value = 0LL;
          v59.fields.value = (int64_t)&v53;
          System_Nullable_long____ctor(v59, Method_System_Nullable_long___ctor__, v45);
          if ( !v41 )
            sub_B2C434(v46, v47);
          DataMasterBase__ReplacedForThread(
            v41,
            saveNameList,
            writeMasterDataThread,
            *(System_Nullable_long__o *)v54,
            v53,
            work,
            0LL);
        }
      }
      v48 = *(Il2CppObject **)&v4->fields.nowLoadCount;
      lockTaken = 0;
      System_Threading_Monitor__Enter_15380960(v48, &lockTaken, 0LL);
      ++LODWORD(v4->fields.masterLoadThreads);
      v54[v17 + 4] = 262;
      v17 = ++v55;
      if ( lockTaken )
        System_Threading_Monitor__Exit(v48, 0LL);
      if ( v17 )
      {
        v49 = v17 - 1;
        if ( v54[v17 + 3] == 262 )
        {
          --v17;
          v55 = v49;
        }
      }
      if ( (__int64)++v18 >= v19 )
        return;
    }
LABEL_37:
    sub_B2C434(this, indexList);
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
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Threading_SynchronizationContext_o *Current; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v44; // x23
  struct System_Threading_SynchronizationContext_o **p_context; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0
  System_Int32_array *v53; // x21
  System_Comparison_int__o *v54; // x23
  __int64 v55; // x23
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Threading_ParameterizedThreadStart_o *v62; // x24
  System_Threading_Thread_o *v63; // x22
  System_Func_int__bool__o *v64; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Int32_array *v66; // x0
  int v67; // w8
  bool v68; // nf

  if ( (byte_418905D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Sort_int____67376040, *(_QWORD *)&maxIndex);
    sub_B2C35C(&Method_System_Comparison_int___ctor__, v6);
    sub_B2C35C(&System_Comparison_int__TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v11);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Thread__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Thread___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_Thread__TypeInfo, v15);
    sub_B2C35C(&System_Threading_ParameterizedThreadStart_TypeInfo, v16);
    sub_B2C35C(&System_Threading_Thread_TypeInfo, v17);
    sub_B2C35C(&Method_DataManager___c__DisplayClass55_0__StartMasterLoadThread_b__0__, v18);
    sub_B2C35C(&DataManager___c__DisplayClass55_0_TypeInfo, v19);
    sub_B2C35C(&Method_DataManager___c__DisplayClass55_1__StartMasterLoadThread_b__1__, v20);
    sub_B2C35C(&DataManager___c__DisplayClass55_1_TypeInfo, v21);
    byte_418905D = 1;
  }
  v22 = sub_B2C42C(DataManager___c__DisplayClass55_0_TypeInfo);
  DataManager___c__DisplayClass55_0___ctor((DataManager___c__DisplayClass55_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_10;
  *(_QWORD *)(v22 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = loadedIndices;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v22 + 24),
    (System_Int32_array **)loadedIndices,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.writeMasterDataThread = (struct System_Threading_Thread_o *)Current;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.writeMasterDataThread,
    (System_Int32_array **)Current,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v44,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Thread___ctor__);
  p_context = &this->fields.context;
  this->fields.context = (struct System_Threading_SynchronizationContext_o *)v44;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.context,
    (System_Int32_array **)v44,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v53 = System_Linq_Enumerable__ToArray_int_(
          v52,
          (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
  v54 = (System_Comparison_int__o *)sub_B2C42C(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v54,
    (Il2CppObject *)v22,
    Method_DataManager___c__DisplayClass55_0__StartMasterLoadThread_b__0__,
    (const MethodInfo_25D74C4 *)Method_System_Comparison_int___ctor__);
  System_Array__Sort_int__37534024(
    v53,
    (System_Comparison_T__o *)v54,
    (const MethodInfo_23CB948 *)Method_System_Array_Sort_int____67376040);
  v55 = sub_B2C42C(DataManager___c__DisplayClass55_1_TypeInfo);
  DataManager___c__DisplayClass55_1___ctor((DataManager___c__DisplayClass55_1_o *)v55, 0LL);
  if ( !v55 )
LABEL_10:
    sub_B2C434(v23, v24);
  *(_QWORD *)(v55 + 24) = v22;
  sub_B2C2F8((BattleServantConfConponent_o *)(v55 + 24), (System_Int32_array **)v22, v56, v57, v58, v59, v60, v61);
  *(_DWORD *)(v55 + 16) = 0;
  do
  {
    v62 = (System_Threading_ParameterizedThreadStart_o *)sub_B2C42C(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v62,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v63 = (System_Threading_Thread_o *)sub_B2C42C(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_41696356(v63, v62, 0LL);
    if ( !v63 )
      goto LABEL_10;
    System_Threading_Thread__set_IsBackground(v63, 1, 0LL);
    v64 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v64,
      (Il2CppObject *)v55,
      Method_DataManager___c__DisplayClass55_1__StartMasterLoadThread_b__1__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v65 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v53,
            (System_Func_TSource__bool__o *)v64,
            (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
    v66 = System_Linq_Enumerable__ToArray_int_(
            v65,
            (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_41696760(v63, &v66->obj, 0LL);
    v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_context;
    if ( !*p_context )
      goto LABEL_10;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v23,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v63,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_Thread__Add__);
    v67 = *(_DWORD *)(v55 + 16) + 1;
    v68 = *(_DWORD *)(v55 + 16) - 4 < 0;
    *(_DWORD *)(v55 + 16) = v67;
  }
  while ( v68 != __OFSUB__(v67, 5) );
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
  System_Threading_ParameterizedThreadStart_o *v12; // x21
  System_Threading_Thread_o *v13; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x1
  System_Threading_Thread_o *v21; // x0

  if ( (byte_4189060 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_B2C35C(&System_Threading_ParameterizedThreadStart_TypeInfo, v10);
    sub_B2C35C(&System_Threading_Thread_TypeInfo, v11);
    byte_4189060 = 1;
  }
  LOBYTE(this->fields.writeMasterDataThreadException) = 0;
  this[1].klass = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this[1], 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  v12 = (System_Threading_ParameterizedThreadStart_o *)sub_B2C42C(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v12,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v13 = (System_Threading_Thread_o *)sub_B2C42C(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_41696356(v13, v12, 0LL);
  *(_QWORD *)&this->fields.writeMasterDataThreadEnd = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.writeMasterDataThreadEnd,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v21 = *(System_Threading_Thread_o **)&this->fields.writeMasterDataThreadEnd;
  if ( !v21 )
    sub_B2C434(0LL, v20);
  System_Threading_Thread__Start_41696760(v21, (Il2CppObject *)fileName, 0LL);
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
  if ( (byte_418905E & 1) == 0 )
  {
    this = (DataManager_o *)sub_B2C35C(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_418905E = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v7 = (__int64)&klass->_1.name[8 * v6];
      v8 = *(System_Threading_Thread_o **)(v7 + 32);
      if ( !v8 )
LABEL_12:
        sub_B2C434(this, method);
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
    sub_B2C2F8(p_context, 0LL, v9, v10, v11, v12, v13, v14);
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
        sub_B2C434(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThreadEnd, 0LL);
    }
    *p_writeMasterDataThreadEnd = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_writeMasterDataThreadEnd, 0LL, v5, v6, v7, v8, v9, v10);
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
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x22
  int v23; // w24
  unsigned int v24; // w25
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x1
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

  if ( (byte_4189061 & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryWriter_TypeInfo, param);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v5);
    sub_B2C35C(&System_IDisposable_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_B2C35C(&string_TypeInfo, v9);
    byte_4189061 = 1;
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
  v13 = (System_IO_BinaryWriter_o *)sub_B2C42C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_39287252(v13, v12, 0LL);
  v22 = *(_QWORD *)&this->fields.lastFrameTime;
  if ( !v22 )
    sub_B2C434(v14, v15);
  v23 = *(_DWORD *)(v22 + 24);
  if ( v23 >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v22 + 24) <= v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v25 = *(_QWORD *)(*(_QWORD *)(v22 + 16) + 8LL * (int)v24 + 32);
      if ( !v25 )
        sub_B2C434(v14, v15);
      if ( *(_DWORD *)(v25 + 24) <= 1u )
      {
        v41 = sub_B2C460(v14);
        sub_B2C400(v41, 0LL);
      }
      if ( !v13 )
        sub_B2C434(v14, v15);
      v26 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
              v13,
              *(unsigned int *)(v25 + 40),
              v13->klass->vtable._18_Write.methodPtr);
      v28 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v28 )
        sub_B2C434(v26, v27);
      if ( *(_DWORD *)(v28 + 24) <= v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v29 = *(_QWORD *)(*(_QWORD *)(v28 + 16) + 8LL * (int)v24 + 32);
      if ( !v29 )
        sub_B2C434(v26, v27);
      if ( !*(_DWORD *)(v29 + 24) )
      {
        v43 = sub_B2C460(v26);
        sub_B2C400(v43, 0LL);
      }
      v30 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v30 )
        sub_B2C434(v26, v27);
      v31 = *(_QWORD *)(v29 + 32);
      if ( *(_DWORD *)(v30 + 24) <= v24 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v32 = *(_QWORD *)(*(_QWORD *)(v30 + 16) + 8LL * (int)v24 + 32);
      if ( !v32 )
        sub_B2C434(v26, v27);
      if ( *(_DWORD *)(v32 + 24) <= 1u )
      {
        v42 = sub_B2C460(v26);
        sub_B2C400(v42, 0LL);
      }
      v14 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Collections_Generic_List_string__o *, _QWORD, _QWORD, Il2CppMethodPointer))v13->klass->vtable._11_Write.method)(
              v13,
              this->fields.saveNameList,
              (unsigned int)v31,
              *(unsigned int *)(v32 + 40),
              v13->klass->vtable._12_Write.methodPtr);
      if ( (int)++v24 >= v23 )
        break;
      v22 = *(_QWORD *)&this->fields.lastFrameTime;
      if ( !v22 )
        sub_B2C434(v14, v15);
    }
  }
  if ( v13 )
  {
    klass = v13->klass;
    if ( *(_WORD *)&v13->klass->_2.bitflags1 )
    {
      v34 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v34;
        p_offset += 4;
        if ( v34 >= *(unsigned __int16 *)&v13->klass->_2.bitflags1 )
          goto LABEL_37;
      }
      v36 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_37:
      v36 = sub_AC5258(v13, System_IDisposable_TypeInfo, 0LL, v17);
    }
    (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v36)(v13, *(_QWORD *)(v36 + 8));
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
      v40 = sub_AC5258(v11, System_IDisposable_TypeInfo, 0LL, v17);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v40)(v11, *(_QWORD *)(v40 + 8));
  }
  *(_QWORD *)&this->fields.writeMasterDataThreadEnd = 0LL;
  LOBYTE(this->fields.writeMasterDataThreadException) = 1;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.writeMasterDataThreadEnd, 0LL, v16, v17, v18, v19, v20, v21);
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

  if ( (byte_4189048 & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, v1);
    sub_B2C35C(&DataManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4189048 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, v5);
  return System_String__Concat_44307816(CachePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
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

  if ( (byte_4189047 & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, v1);
    sub_B2C35C(&DataManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4189047 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, v5);
  return System_String__Concat_44307816(CachePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4189045 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&CacheFolderName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4189045 = 1;
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
  return System_String__Concat_44307816(DatFileSavePath, (System_String_o *)StringLiteral_872/*"/"*/, FolderName, 0LL);
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

  if ( (byte_4189046 & 1) == 0 )
  {
    sub_B2C35C(&DatFileName_TypeInfo, v1);
    sub_B2C35C(&DataManager_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4189046 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, v5);
  return System_String__Concat_44307816(CachePath, (System_String_o *)StringLiteral_872/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_QuestReleaseMaster_(
        DataManager_o *this,
        const MethodInfo_1733C08 *method)
{
  __int64 v3; // x0
  __int64 v4; // x1

  if ( (byte_41872B3 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_41872B3 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v3 = ((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMaster_TMaster_->methodPointer)();
  if ( !v3 )
    sub_B2C434(0LL, v4);
  return *(System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o **)(v3 + 32);
}


WarEntity_array *__fastcall DataManager__getEntitys_WarMaster__WarEntity_(
        DataManager_o *this,
        const MethodInfo_1733C80 *method)
{
  __int64 v3; // x1

  if ( (byte_41872B4 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_41872B4 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  if ( !((__int64 (*)(void))method->rgctx_data->_0_DataManager_GetMaster_TMaster_->methodPointer)() )
    sub_B2C434(0LL, v3);
  return (WarEntity_array *)((__int64 (*)(void))method->rgctx_data->_2_DataMasterBase_getEntitys_T_->methodPointer)();
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4189053 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_4189053 = 1;
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

  if ( (byte_4189054 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_4189054 = 1;
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

  if ( (byte_4189063 & 1) == 0 )
  {
    sub_B2C35C(&Crc32_TypeInfo, name);
    byte_4189063 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_B2C434(0LL, v7);
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
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *OldUnityPersistentDataPath; // x19
  System_String_o *FolderNameNotConverted; // x2

  if ( (byte_4189049 & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, v1);
    sub_B2C35C(&CacheFolderName_TypeInfo, v2);
    sub_B2C35C(&StringLiteral_872/*"/"*/, v3);
    byte_4189049 = 1;
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
  return System_String__Concat_44307816(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_872/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4189058 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_4189058 = 1;
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

  if ( (byte_4189057 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_4189057 = 1;
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
    sub_B2C434(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4189050 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_4189050 = 1;
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

  if ( (byte_418905B & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    byte_418905B = 1;
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

  if ( (byte_418905A & 1) == 0 )
  {
    sub_B2C35C(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_418905A = 1;
  }
  v3 = sub_B2C42C(DataManager__readMasterData_d__47_TypeInfo);
  DataManager__readMasterData_d__47___ctor((DataManager__readMasterData_d__47_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
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
  System_String_o *AllText; // x21
  System_String_o *v27; // x21
  System_Char_array *v28; // x0
  System_String_o *v29; // x20
  System_Char_array *v30; // x0
  il2cpp_array_size_t max_length; // w8
  int v32; // w22
  __int64 *v33; // x8
  System_String_o *v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x21
  System_String_o *v37; // x21
  System_String_o *v38; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v40; // x1
  System_Byte_array *v41; // x22
  uint32_t v42; // w22
  System_Char_array *v43; // x0
  il2cpp_array_size_t v44; // w8
  __int64 v45; // x20
  __int64 v46; // x8
  System_String_o *v47; // x21
  __int64 v48; // x22
  System_String_o *v49; // x0
  ManagerConfig_c *v50; // x8
  System_Int32_array **v51; // x21
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_String_array *v58; // x20
  System_Int32_array **v59; // x1
  int v61; // w23
  int64_t v62; // x0
  DataManager_c *v63; // x8
  int64_t v64; // x21
  struct DataManager_StaticFields *static_fields; // x9
  __int64 v66; // x22
  int v67; // w23
  System_String_o *v68; // x21
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_Int32_array **v81; // x1
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  System_Int32_array **v95; // x21
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Int32_array **v102; // x1
  BattleServantConfConponent_o *v103; // x0
  DataManager_c *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Int32_array **v111; // x21
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_Int32_array **v118; // x1
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_Int32_array **v125; // x21
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x1
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x21
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x1
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x21
  __int64 v154; // x0
  __int64 v155; // x0
  __int64 v156; // x0
  __int64 v157; // x0
  __int64 v158; // x0
  __int64 v159; // x0
  __int64 v160; // x0
  int64_t v161; // [xsp+20h] [xbp-60h] BYREF
  int v162; // [xsp+2Ch] [xbp-54h] BYREF

  if ( (byte_4189068 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, method);
    sub_B2C35C(&char___TypeInfo, v3);
    sub_B2C35C(&Crc32_TypeInfo, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_B2C35C(&ManagerConfig_TypeInfo, v9);
    sub_B2C35C(&string___TypeInfo, v10);
    sub_B2C35C(&StringLiteral_5088/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_B2C35C(&StringLiteral_5091/*"DataManager version load error : list file parameter error"*/, v12);
    sub_B2C35C(&StringLiteral_80/*" "*/, v13);
    sub_B2C35C(&StringLiteral_23698/*"~"*/, v14);
    sub_B2C35C(&StringLiteral_660/*") -> ("*/, v15);
    sub_B2C35C(&StringLiteral_652/*")"*/, v16);
    sub_B2C35C(&StringLiteral_1535/*"@"*/, v17);
    sub_B2C35C(&StringLiteral_20387/*"master versiton different ("*/, v18);
    sub_B2C35C(&StringLiteral_5092/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_B2C35C(&StringLiteral_5093/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    sub_B2C35C(&StringLiteral_5090/*"DataManager version load error : list file break"*/, v21);
    byte_4189068 = 1;
  }
  v162 = 0;
  v161 = 0LL;
  saveDataMapList = (__int64)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    goto LABEL_164;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
  saveDataMapList = *(_QWORD *)&this->fields.lastFrameTime;
  if ( !saveDataMapList )
    goto LABEL_164;
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)saveDataMapList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_long____Clear__);
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
    DataManager__ClearSaveDataList(this, method);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v27 = CatAndMouseGame__MouseGame3(AllText, 0LL);
  if ( v27 )
  {
    v28 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v28 )
      sub_B2C434(0LL, 0LL);
    if ( !v28->max_length )
    {
      v154 = sub_B2C460(v28);
      sub_B2C400(v154, 0LL);
    }
    v28->m_Items[2] = -257;
    v29 = System_String__Trim(v27, v28, 0LL);
    v30 = (System_Char_array *)sub_B2C374(char___TypeInfo, 2LL);
    if ( !v30 )
      sub_B2C434(0LL, 0LL);
    max_length = v30->max_length;
    if ( !max_length )
    {
      v155 = sub_B2C460(v30);
      sub_B2C400(v155, 0LL);
    }
    v30->m_Items[2] = 13;
    if ( max_length == 1 )
    {
      v156 = sub_B2C460(v30);
      sub_B2C400(v156, 0LL);
    }
    v30->m_Items[3] = 10;
    if ( !v29 )
      sub_B2C434(v30, v30);
    v32 = System_String__IndexOfAny(v29, v30, 0LL);
    if ( v32 < 2 )
    {
      v33 = &StringLiteral_5092/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_59;
    }
    v34 = System_String__Substring_44369268(v29, 0, v32, 0LL);
    v36 = v34;
    if ( !v34 )
      sub_B2C434(0LL, v35);
    if ( System_String__StartsWith(v34, (System_String_o *)StringLiteral_23698/*"~"*/, 0LL) )
    {
      v37 = System_String__Substring(v36, 1, 0LL);
      v38 = System_String__Substring(v29, v32 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B2C434(0LL, v40);
      v41 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v38,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v42 = Crc32__Compute(v41, 0LL);
      if ( System_UInt32__Parse(v37, 0LL) == v42 )
      {
        v43 = (System_Char_array *)sub_B2C374(char___TypeInfo, 2LL);
        if ( !v43 )
          sub_B2C434(0LL, 0LL);
        v44 = v43->max_length;
        if ( !v44 )
        {
          v158 = sub_B2C460(v43);
          sub_B2C400(v158, 0LL);
        }
        v43->m_Items[2] = 13;
        if ( v44 == 1 )
        {
          v159 = sub_B2C460(v43);
          sub_B2C400(v159, 0LL);
        }
        v43->m_Items[3] = 10;
        if ( !v38 )
          sub_B2C434(v43, v43);
        saveDataMapList = (__int64)System_String__Split_44366316(v38, v43, 1, 0LL);
        v45 = saveDataMapList;
        if ( !saveDataMapList )
          return 1;
        v46 = *(_QWORD *)(saveDataMapList + 24);
        if ( !v46 )
          goto LABEL_58;
        if ( !(_DWORD)v46 )
          goto LABEL_157;
        saveDataMapList = *(_QWORD *)(saveDataMapList + 32);
        if ( !saveDataMapList )
          goto LABEL_164;
        saveDataMapList = System_String__StartsWith(
                            (System_String_o *)saveDataMapList,
                            (System_String_o *)StringLiteral_1535/*"@"*/,
                            0LL);
        if ( (saveDataMapList & 1) != 0 )
        {
          if ( !*(_DWORD *)(v45 + 24) )
            goto LABEL_157;
          v47 = *(System_String_o **)(v45 + 32);
          saveDataMapList = sub_B2C374(char___TypeInfo, 1LL);
          if ( !saveDataMapList )
            goto LABEL_164;
          method = (const MethodInfo *)saveDataMapList;
          if ( !*(_DWORD *)(saveDataMapList + 24) )
            goto LABEL_157;
          *(_WORD *)(saveDataMapList + 32) = 44;
          if ( !v47 )
            goto LABEL_164;
          saveDataMapList = (__int64)System_String__Split(v47, (System_Char_array *)saveDataMapList, 0LL);
          if ( !saveDataMapList )
            goto LABEL_164;
          v48 = saveDataMapList;
          if ( !*(_DWORD *)(saveDataMapList + 24) )
            goto LABEL_157;
          saveDataMapList = *(_QWORD *)(saveDataMapList + 32);
          if ( !saveDataMapList )
            goto LABEL_164;
          v49 = System_String__Substring((System_String_o *)saveDataMapList, 1, 0LL);
          v50 = ManagerConfig_TypeInfo;
          v51 = (System_Int32_array **)v49;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v50 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v50->static_fields->MasterDataCacheVer, (System_String_o *)v51, 0LL) )
          {
            saveDataMapList = sub_B2C374(string___TypeInfo, 5LL);
            if ( saveDataMapList )
            {
              v58 = (System_String_array *)saveDataMapList;
              saveDataMapList = StringLiteral_20387/*"master versiton different ("*/;
              if ( StringLiteral_20387/*"master versiton different ("*/ )
              {
                saveDataMapList = sub_B2C41C(StringLiteral_20387/*"master versiton different ("*/, v58->obj.klass->_1.element_class);
                if ( !saveDataMapList )
                  goto LABEL_163;
                v59 = (System_Int32_array **)StringLiteral_20387/*"master versiton different ("*/;
              }
              else
              {
                v59 = 0LL;
              }
              if ( !v58->max_length )
                goto LABEL_157;
              v58->m_Items[0] = (System_String_o *)v59;
              sub_B2C2F8((BattleServantConfConponent_o *)v58->m_Items, v59, v52, v53, v54, v55, v56, v57);
              if ( !v51 || (saveDataMapList = sub_B2C41C(v51, v58->obj.klass->_1.element_class)) != 0 )
              {
                if ( v58->max_length <= 1 )
                  goto LABEL_157;
                v58->m_Items[1] = (System_String_o *)v51;
                sub_B2C2F8((BattleServantConfConponent_o *)&v58->m_Items[1], v51, v69, v70, v71, v72, v73, v74);
                saveDataMapList = StringLiteral_660/*") -> ("*/;
                if ( StringLiteral_660/*") -> ("*/ )
                {
                  saveDataMapList = sub_B2C41C(StringLiteral_660/*") -> ("*/, v58->obj.klass->_1.element_class);
                  if ( !saveDataMapList )
                    goto LABEL_163;
                  v81 = (System_Int32_array **)StringLiteral_660/*") -> ("*/;
                }
                else
                {
                  v81 = 0LL;
                }
                if ( v58->max_length <= 2 )
                  goto LABEL_157;
                v58->m_Items[2] = (System_String_o *)v81;
                sub_B2C2F8((BattleServantConfConponent_o *)&v58->m_Items[2], v81, v75, v76, v77, v78, v79, v80);
                saveDataMapList = (__int64)ManagerConfig_TypeInfo;
                if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  saveDataMapList = (__int64)ManagerConfig_TypeInfo;
                }
                v95 = *(System_Int32_array ***)(*(_QWORD *)(saveDataMapList + 184) + 32LL);
                if ( !v95 || (saveDataMapList = sub_B2C41C(v95, v58->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v58->max_length <= 3 )
                    goto LABEL_157;
                  v58->m_Items[3] = (System_String_o *)v95;
                  sub_B2C2F8((BattleServantConfConponent_o *)&v58->m_Items[3], v95, v89, v90, v91, v92, v93, v94);
                  saveDataMapList = StringLiteral_652/*")"*/;
                  if ( !StringLiteral_652/*")"*/ )
                  {
                    v102 = 0LL;
LABEL_108:
                    if ( v58->max_length > 4 )
                    {
                      v58->m_Items[4] = (System_String_o *)v102;
                      v103 = (BattleServantConfConponent_o *)&v58->m_Items[4];
                      goto LABEL_148;
                    }
                    goto LABEL_157;
                  }
                  saveDataMapList = sub_B2C41C(StringLiteral_652/*")"*/, v58->obj.klass->_1.element_class);
                  if ( saveDataMapList )
                  {
                    v102 = (System_Int32_array **)StringLiteral_652/*")"*/;
                    goto LABEL_108;
                  }
                }
              }
              goto LABEL_163;
            }
            goto LABEL_164;
          }
          if ( *(_DWORD *)(v48 + 24) == 3 )
          {
            saveDataMapList = System_Int32__Parse(*(System_String_o **)(v48 + 40), 0LL);
            v162 = saveDataMapList;
            if ( *(_DWORD *)(v48 + 24) <= 2u )
              goto LABEL_157;
            v61 = saveDataMapList;
            v62 = System_Int64__Parse(*(System_String_o **)(v48 + 48), 0LL);
            v63 = DataManager_TypeInfo;
            v161 = v62;
            v64 = v62;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v63 = DataManager_TypeInfo;
            }
            static_fields = v63->static_fields;
            if ( static_fields->readDataVersion != v61 )
              goto LABEL_92;
            if ( (BYTE3(v63->vtable._0_Equals.methodPtr) & 4) != 0 && !v63->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v63);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v64 )
            {
              v66 = *(_QWORD *)(v45 + 24);
              if ( (int)v66 < 2 )
                return 1;
              v67 = 1;
              while ( 1 )
              {
                v68 = *(System_String_o **)(v45 + 8LL * v67 + 32);
                saveDataMapList = sub_B2C374(char___TypeInfo, 1LL);
                if ( !saveDataMapList )
                  break;
                method = (const MethodInfo *)saveDataMapList;
                if ( !*(_DWORD *)(saveDataMapList + 24) )
                  goto LABEL_157;
                *(_WORD *)(saveDataMapList + 32) = 44;
                if ( !v68 )
                  break;
                saveDataMapList = (__int64)System_String__Split(v68, (System_Char_array *)saveDataMapList, 0LL);
                if ( !saveDataMapList )
                  break;
                if ( *(_DWORD *)(saveDataMapList + 24) != 1 )
                  return 1;
                if ( !this->fields.saveDataMapList )
                  break;
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this->fields.saveDataMapList,
                  *(EventMissionProgressRequest_Argument_ProgressData_o **)(saveDataMapList + 32),
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                if ( ++v67 >= (int)v66 )
                  return 1;
                if ( (unsigned int)v67 >= *(_DWORD *)(v45 + 24) )
                  goto LABEL_157;
              }
            }
            else
            {
LABEL_92:
              saveDataMapList = sub_B2C374(string___TypeInfo, 9LL);
              if ( saveDataMapList )
              {
                v58 = (System_String_array *)saveDataMapList;
                saveDataMapList = StringLiteral_20387/*"master versiton different ("*/;
                if ( StringLiteral_20387/*"master versiton different ("*/ )
                {
                  saveDataMapList = sub_B2C41C(StringLiteral_20387/*"master versiton different ("*/, v58->obj.klass->_1.element_class);
                  if ( !saveDataMapList )
                    goto LABEL_163;
                  v88 = (System_Int32_array **)StringLiteral_20387/*"master versiton different ("*/;
                }
                else
                {
                  v88 = 0LL;
                }
                if ( !v58->max_length )
                  goto LABEL_157;
                v58->m_Items[0] = (System_String_o *)v88;
                sub_B2C2F8((BattleServantConfConponent_o *)v58->m_Items, v88, v82, v83, v84, v85, v86, v87);
                v104 = DataManager_TypeInfo;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v104 = DataManager_TypeInfo;
                }
                saveDataMapList = (__int64)System_Int32__ToString((int32_t)v104->static_fields, 0LL);
                v111 = (System_Int32_array **)saveDataMapList;
                if ( !saveDataMapList
                  || (saveDataMapList = sub_B2C41C(saveDataMapList, v58->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v58->max_length <= 1 )
                    goto LABEL_157;
                  v58->m_Items[1] = (System_String_o *)v111;
                  sub_B2C2F8((BattleServantConfConponent_o *)&v58->m_Items[1], v111, v105, v106, v107, v108, v109, v110);
                  saveDataMapList = StringLiteral_80/*" "*/;
                  if ( StringLiteral_80/*" "*/ )
                  {
                    saveDataMapList = sub_B2C41C(StringLiteral_80/*" "*/, v58->obj.klass->_1.element_class);
                    if ( !saveDataMapList )
                      goto LABEL_163;
                    v118 = (System_Int32_array **)StringLiteral_80/*" "*/;
                  }
                  else
                  {
                    v118 = 0LL;
                  }
                  if ( v58->max_length <= 2 )
                    goto LABEL_157;
                  v58->m_Items[2] = (System_String_o *)v118;
                  sub_B2C2F8((BattleServantConfConponent_o *)&v58->m_Items[2], v118, v112, v113, v114, v115, v116, v117);
                  saveDataMapList = (__int64)System_Int64__ToString(
                                               (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                               0LL);
                  v125 = (System_Int32_array **)saveDataMapList;
                  if ( !saveDataMapList
                    || (saveDataMapList = sub_B2C41C(saveDataMapList, v58->obj.klass->_1.element_class)) != 0 )
                  {
                    if ( v58->max_length <= 3 )
                      goto LABEL_157;
                    v58->m_Items[3] = (System_String_o *)v125;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&v58->m_Items[3],
                      v125,
                      v119,
                      v120,
                      v121,
                      v122,
                      v123,
                      v124);
                    saveDataMapList = StringLiteral_660/*") -> ("*/;
                    if ( StringLiteral_660/*") -> ("*/ )
                    {
                      saveDataMapList = sub_B2C41C(StringLiteral_660/*") -> ("*/, v58->obj.klass->_1.element_class);
                      if ( !saveDataMapList )
                        goto LABEL_163;
                      v132 = (System_Int32_array **)StringLiteral_660/*") -> ("*/;
                    }
                    else
                    {
                      v132 = 0LL;
                    }
                    if ( v58->max_length <= 4 )
                      goto LABEL_157;
                    v58->m_Items[4] = (System_String_o *)v132;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&v58->m_Items[4],
                      v132,
                      v126,
                      v127,
                      v128,
                      v129,
                      v130,
                      v131);
                    saveDataMapList = (__int64)System_Int32__ToString((int32_t)&v162, 0LL);
                    v139 = (System_Int32_array **)saveDataMapList;
                    if ( !saveDataMapList
                      || (saveDataMapList = sub_B2C41C(saveDataMapList, v58->obj.klass->_1.element_class)) != 0 )
                    {
                      if ( v58->max_length <= 5 )
                        goto LABEL_157;
                      v58->m_Items[5] = (System_String_o *)v139;
                      sub_B2C2F8(
                        (BattleServantConfConponent_o *)&v58->m_Items[5],
                        v139,
                        v133,
                        v134,
                        v135,
                        v136,
                        v137,
                        v138);
                      saveDataMapList = StringLiteral_80/*" "*/;
                      if ( StringLiteral_80/*" "*/ )
                      {
                        saveDataMapList = sub_B2C41C(StringLiteral_80/*" "*/, v58->obj.klass->_1.element_class);
                        if ( !saveDataMapList )
                          goto LABEL_163;
                        v146 = (System_Int32_array **)StringLiteral_80/*" "*/;
                      }
                      else
                      {
                        v146 = 0LL;
                      }
                      if ( v58->max_length <= 6 )
                        goto LABEL_157;
                      v58->m_Items[6] = (System_String_o *)v146;
                      sub_B2C2F8(
                        (BattleServantConfConponent_o *)&v58->m_Items[6],
                        v146,
                        v140,
                        v141,
                        v142,
                        v143,
                        v144,
                        v145);
                      saveDataMapList = (__int64)System_Int64__ToString((int64_t)&v161, 0LL);
                      v153 = (System_Int32_array **)saveDataMapList;
                      if ( !saveDataMapList
                        || (saveDataMapList = sub_B2C41C(saveDataMapList, v58->obj.klass->_1.element_class)) != 0 )
                      {
                        if ( v58->max_length <= 7 )
                          goto LABEL_157;
                        v58->m_Items[7] = (System_String_o *)v153;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)&v58->m_Items[7],
                          v153,
                          v147,
                          v148,
                          v149,
                          v150,
                          v151,
                          v152);
                        saveDataMapList = StringLiteral_652/*")"*/;
                        if ( StringLiteral_652/*")"*/ )
                        {
                          saveDataMapList = sub_B2C41C(StringLiteral_652/*")"*/, v58->obj.klass->_1.element_class);
                          if ( !saveDataMapList )
                            goto LABEL_163;
                          v102 = (System_Int32_array **)StringLiteral_652/*")"*/;
                        }
                        else
                        {
                          v102 = 0LL;
                        }
                        if ( v58->max_length > 8 )
                        {
                          v58->m_Items[8] = (System_String_o *)v102;
                          v103 = (BattleServantConfConponent_o *)&v58->m_Items[8];
LABEL_148:
                          sub_B2C2F8(v103, v102, v96, v97, v98, v99, v100, v101);
                          if ( System_String__Concat_44385656(v58, 0LL) )
                            goto LABEL_60;
                          return 1;
                        }
LABEL_157:
                        v157 = sub_B2C460(saveDataMapList);
                        sub_B2C400(v157, 0LL);
                      }
                    }
                  }
                }
LABEL_163:
                v160 = sub_B2C454(saveDataMapList);
                sub_B2C400(v160, 0LL);
              }
            }
LABEL_164:
            sub_B2C434(saveDataMapList, method);
          }
          v33 = &StringLiteral_5091/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_58:
          v33 = &StringLiteral_5090/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v33 = &StringLiteral_5088/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v33 = &StringLiteral_5093/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_59:
    if ( *v33 )
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

  if ( (byte_4189059 & 1) == 0 )
  {
    sub_B2C35C(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_4189059 = 1;
  }
  v3 = sub_B2C42C(DataManager__readMasterVersion_d__46_TypeInfo);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  System_Int32_array **v48; // x21
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_String_array *v55; // x20
  System_Int32_array **v56; // x1
  DataManager_c *v57; // x0
  DataManager_c *v59; // x8
  int32_t v60; // w19
  int64_t v61; // x0
  DataManager_c *v62; // x8
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **v75; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **v82; // x21
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x1
  __int64 v90; // x0
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x0

  if ( (byte_4189066 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, method);
    sub_B2C35C(&char___TypeInfo, v3);
    sub_B2C35C(&Crc32_TypeInfo, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&ManagerConfig_TypeInfo, v6);
    sub_B2C35C(&string___TypeInfo, v7);
    sub_B2C35C(&StringLiteral_5087/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_B2C35C(&StringLiteral_5084/*"DataManager boot load error : list file break"*/, v9);
    sub_B2C35C(&StringLiteral_5086/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_B2C35C(&StringLiteral_5082/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_B2C35C(&StringLiteral_23698/*"~"*/, v12);
    sub_B2C35C(&StringLiteral_20385/*"master data versiton different ("*/, v13);
    sub_B2C35C(&StringLiteral_660/*") -> ("*/, v14);
    sub_B2C35C(&StringLiteral_652/*")"*/, v15);
    sub_B2C35C(&StringLiteral_1535/*"@"*/, v16);
    sub_B2C35C(&StringLiteral_5085/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_4189066 = 1;
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
    v24 = (System_Char_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_B2C434(0LL, 0LL);
    if ( !v24->max_length )
    {
      v90 = sub_B2C460(v24);
      sub_B2C400(v90, 0LL);
    }
    v24->m_Items[2] = -257;
    v25 = System_String__Trim(v23, v24, 0LL);
    v26 = (System_Char_array *)sub_B2C374(char___TypeInfo, 2LL);
    if ( !v26 )
      sub_B2C434(0LL, 0LL);
    max_length = v26->max_length;
    if ( !max_length )
    {
      v91 = sub_B2C460(v26);
      sub_B2C400(v91, 0LL);
    }
    v26->m_Items[2] = 13;
    if ( max_length == 1 )
    {
      v92 = sub_B2C460(v26);
      sub_B2C400(v92, 0LL);
    }
    v26->m_Items[3] = 10;
    if ( !v25 )
      sub_B2C434(v26, v26);
    v28 = System_String__IndexOfAny(v25, v26, 0LL);
    if ( v28 < 2 )
    {
      v29 = &StringLiteral_5086/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_57;
    }
    v30 = System_String__Substring_44369268(v25, 0, v28, 0LL);
    v32 = v30;
    if ( !v30 )
      sub_B2C434(0LL, v31);
    if ( System_String__StartsWith(v30, (System_String_o *)StringLiteral_23698/*"~"*/, 0LL) )
    {
      v33 = System_String__Substring(v32, 1, 0LL);
      v34 = System_String__Substring(v25, v28 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_B2C434(0LL, v36);
      v37 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v34,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v38 = Crc32__Compute(v37, 0LL);
      if ( System_UInt32__Parse(v33, 0LL) == v38 )
      {
        v39 = (System_Char_array *)sub_B2C374(char___TypeInfo, 2LL);
        if ( !v39 )
          sub_B2C434(0LL, 0LL);
        v40 = v39->max_length;
        if ( !v40 )
        {
          v94 = sub_B2C460(v39);
          sub_B2C400(v94, 0LL);
        }
        v39->m_Items[2] = 13;
        if ( v40 == 1 )
        {
          v95 = sub_B2C460(v39);
          sub_B2C400(v95, 0LL);
        }
        v39->m_Items[3] = 10;
        if ( !v34 )
          sub_B2C434(v39, v39);
        v41 = (__int64)System_String__Split_44366316(v34, v39, 1, 0LL);
        v42 = v41;
        if ( !v41 )
          return 1;
        v43 = *(_QWORD *)(v41 + 24);
        if ( !v43 )
          goto LABEL_56;
        if ( !(_DWORD)v43 )
          goto LABEL_102;
        v41 = *(_QWORD *)(v41 + 32);
        if ( !v41 )
          goto LABEL_108;
        v41 = System_String__StartsWith((System_String_o *)v41, (System_String_o *)StringLiteral_1535/*"@"*/, 0LL);
        if ( (v41 & 1) != 0 )
        {
          if ( !*(_DWORD *)(v42 + 24) )
            goto LABEL_102;
          v44 = *(System_String_o **)(v42 + 32);
          v41 = sub_B2C374(char___TypeInfo, 1LL);
          if ( !v41 )
            goto LABEL_108;
          v21 = (const MethodInfo *)v41;
          if ( !*(_DWORD *)(v41 + 24) )
            goto LABEL_102;
          *(_WORD *)(v41 + 32) = 44;
          if ( !v44 )
            goto LABEL_108;
          v41 = (__int64)System_String__Split(v44, (System_Char_array *)v41, 0LL);
          if ( !v41 )
            goto LABEL_108;
          v45 = v41;
          if ( !*(_DWORD *)(v41 + 24) )
            goto LABEL_102;
          v41 = *(_QWORD *)(v41 + 32);
          if ( !v41 )
            goto LABEL_108;
          v46 = System_String__Substring((System_String_o *)v41, 1, 0LL);
          v47 = ManagerConfig_TypeInfo;
          v48 = (System_Int32_array **)v46;
          if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v47 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v47->static_fields->MasterDataCacheVer, (System_String_o *)v48, 0LL) )
          {
            v41 = sub_B2C374(string___TypeInfo, 5LL);
            if ( v41 )
            {
              v55 = (System_String_array *)v41;
              v41 = StringLiteral_20385/*"master data versiton different ("*/;
              if ( StringLiteral_20385/*"master data versiton different ("*/ )
              {
                v41 = sub_B2C41C(StringLiteral_20385/*"master data versiton different ("*/, v55->obj.klass->_1.element_class);
                if ( !v41 )
                  goto LABEL_107;
                v56 = (System_Int32_array **)StringLiteral_20385/*"master data versiton different ("*/;
              }
              else
              {
                v56 = 0LL;
              }
              if ( !v55->max_length )
                goto LABEL_102;
              v55->m_Items[0] = (System_String_o *)v56;
              sub_B2C2F8((BattleServantConfConponent_o *)v55->m_Items, v56, v49, v50, v51, v52, v53, v54);
              if ( !v48 || (v41 = sub_B2C41C(v48, v55->obj.klass->_1.element_class)) != 0 )
              {
                if ( v55->max_length <= 1 )
                  goto LABEL_102;
                v55->m_Items[1] = (System_String_o *)v48;
                sub_B2C2F8((BattleServantConfConponent_o *)&v55->m_Items[1], v48, v63, v64, v65, v66, v67, v68);
                v41 = StringLiteral_660/*") -> ("*/;
                if ( StringLiteral_660/*") -> ("*/ )
                {
                  v41 = sub_B2C41C(StringLiteral_660/*") -> ("*/, v55->obj.klass->_1.element_class);
                  if ( !v41 )
                    goto LABEL_107;
                  v75 = (System_Int32_array **)StringLiteral_660/*") -> ("*/;
                }
                else
                {
                  v75 = 0LL;
                }
                if ( v55->max_length <= 2 )
                  goto LABEL_102;
                v55->m_Items[2] = (System_String_o *)v75;
                sub_B2C2F8((BattleServantConfConponent_o *)&v55->m_Items[2], v75, v69, v70, v71, v72, v73, v74);
                v41 = (__int64)ManagerConfig_TypeInfo;
                if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v41 = (__int64)ManagerConfig_TypeInfo;
                }
                v82 = *(System_Int32_array ***)(*(_QWORD *)(v41 + 184) + 32LL);
                if ( !v82 || (v41 = sub_B2C41C(v82, v55->obj.klass->_1.element_class)) != 0 )
                {
                  if ( v55->max_length <= 3 )
                    goto LABEL_102;
                  v55->m_Items[3] = (System_String_o *)v82;
                  sub_B2C2F8((BattleServantConfConponent_o *)&v55->m_Items[3], v82, v76, v77, v78, v79, v80, v81);
                  v41 = StringLiteral_652/*")"*/;
                  if ( !StringLiteral_652/*")"*/ )
                  {
                    v89 = 0LL;
LABEL_91:
                    if ( v55->max_length > 4 )
                    {
                      v55->m_Items[4] = (System_String_o *)v89;
                      sub_B2C2F8((BattleServantConfConponent_o *)&v55->m_Items[4], v89, v83, v84, v85, v86, v87, v88);
                      if ( System_String__Concat_44385656(v55, 0LL) )
                        goto LABEL_58;
                      return 1;
                    }
LABEL_102:
                    v93 = sub_B2C460(v41);
                    sub_B2C400(v93, 0LL);
                  }
                  v41 = sub_B2C41C(StringLiteral_652/*")"*/, v55->obj.klass->_1.element_class);
                  if ( v41 )
                  {
                    v89 = (System_Int32_array **)StringLiteral_652/*")"*/;
                    goto LABEL_91;
                  }
                }
              }
LABEL_107:
              v96 = sub_B2C454(v41);
              sub_B2C400(v96, 0LL);
            }
LABEL_108:
            sub_B2C434(v41, v21);
          }
          if ( *(_DWORD *)(v45 + 24) == 3 )
          {
            v41 = System_Int32__Parse(*(System_String_o **)(v45 + 40), 0LL);
            v59 = DataManager_TypeInfo;
            v60 = v41;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v59 = DataManager_TypeInfo;
            }
            v59->static_fields->dataVersion = v60;
            v59->static_fields->readDataVersion = v60;
            if ( *(_DWORD *)(v45 + 24) > 2u )
            {
              v61 = System_Int64__Parse(*(System_String_o **)(v45 + 48), 0LL);
              v62 = DataManager_TypeInfo;
              DataManager_TypeInfo->static_fields->dateVersion = v61;
              v62->static_fields->readDateVersion = v61;
              return 1;
            }
            goto LABEL_102;
          }
          v29 = &StringLiteral_5085/*"DataManager boot load error : list file parameter error"*/;
        }
        else
        {
LABEL_56:
          v29 = &StringLiteral_5084/*"DataManager boot load error : list file break"*/;
        }
      }
      else
      {
        v29 = &StringLiteral_5082/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v29 = &StringLiteral_5087/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_57:
    if ( *v29 )
      goto LABEL_58;
    return 1;
  }
LABEL_58:
  v57 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v57 = DataManager_TypeInfo;
  }
  v57->static_fields->dataVersion = 0;
  v57->static_fields->dateVersion = 0LL;
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

  if ( (byte_4189056 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4189056 = 1;
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
  sub_B2C2F8(
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

  if ( (byte_4189055 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4189055 = 1;
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
  __int64 v16; // x1
  System_String_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_o *v24; // x0
  DataManager_c *v25; // x8
  struct DataManager_StaticFields *v26; // x0
  DataManager_c *v27; // x0

  if ( (byte_418904F & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, obj);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_418904F = 1;
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
  sub_B2C2F8(
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
        sub_B2C434(v15, v16);
      v17 = System_String__Substring(v14, v14->fields.m_stringLength - 1, 0LL);
      if ( System_String__op_Equality(v17, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) )
      {
        v24 = System_String__Substring_44369268(v14, 0, v14->fields.m_stringLength - 1, 0LL);
        v25 = DataManager_TypeInfo;
        v14 = v24;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v25 = DataManager_TypeInfo;
        }
        v26 = v25->static_fields;
      }
      else
      {
        v27 = DataManager_TypeInfo;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v27 = DataManager_TypeInfo;
        }
        v26 = v27->static_fields;
      }
      v26->serverHash = v14;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v26->serverHash,
        (System_Int32_array **)v14,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
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

  if ( (byte_4189051 & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, obj);
    byte_4189051 = 1;
  }
  v9 = DataManager_TypeInfo;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v9 = DataManager_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->webViewData = obj;
  sub_B2C2F8(
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

  if ( (byte_418906A & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_418906A = 1;
  }
  if ( obj
    && ((v5 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1),
         *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[v5 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    v6 = (DataManager_o *)sub_B2C728(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_27489308(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_27489308(
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
  if ( (byte_418906B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B2C35C(&StringLiteral_22949/*"updated"*/, v7);
    sub_B2C35C(&StringLiteral_17961/*"deleted"*/, v8);
    this = (DataManager_o *)sub_B2C35C(&StringLiteral_21775/*"replaced"*/, v9);
    byte_418906B = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_B2C434(this, data);
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17961/*"deleted"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                              v3,
                              (System_Type_o *)StringLiteral_17961/*"deleted"*/,
                              (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v10 = this;
    if ( this )
    {
      data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
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
                                  (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                    (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      v41 = sub_B2C460(this);
      sub_B2C400(v41, 0LL);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v3,
          (System_Xml_XmlQualifiedName_o *)StringLiteral_22949/*"updated"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            v3,
                            (System_Type_o *)StringLiteral_22949/*"updated"*/,
                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v21 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v21
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_B2C728(v10);
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
                                (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
          (System_Xml_XmlQualifiedName_o *)StringLiteral_21775/*"replaced"*/,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                            v3,
                            (System_Type_o *)StringLiteral_21775/*"replaced"*/,
                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v31 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      v42 = (DataManager_o *)sub_B2C728(v3);
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
                                (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_418905C & 1) == 0 )
  {
    sub_B2C35C(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_418905C = 1;
  }
  v5 = sub_B2C42C(DataManager__updateMasterData_d__49_TypeInfo);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
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

  if ( (byte_4189052 & 1) == 0 )
  {
    sub_B2C35C(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_4189052 = 1;
  }
  v3 = sub_B2C42C(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
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
  System_String_o *CacheListFileName; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int32_t size; // w24
  System_String_o *v22; // x20
  System_Text_StringBuilder_o *v23; // x21
  ManagerConfig_c *v24; // x0
  struct System_Collections_Generic_List_long____o *v25; // x25
  signed __int64 v26; // x23
  unsigned __int64 v27; // x24
  Il2CppObject *v28; // x19
  System_Byte_array *v29; // x21
  Il2CppObject *v30; // x0
  System_String_o *v31; // x19
  System_String_o *v32; // x21
  System_Text_Encoding_o *UTF8; // x22
  System_IO_StreamWriter_o *v34; // x19
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x3
  System_IO_StreamWriter_c *klass; // x8
  unsigned __int64 v39; // x10
  int32_t *p_offset; // x11
  __int64 v41; // x0
  uint32_t v42; // [xsp+Ch] [xbp-44h] BYREF
  __int64 v43; // [xsp+18h] [xbp-38h]

  if ( (byte_4189069 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, method);
    sub_B2C35C(&Crc32_TypeInfo, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_B2C35C(&ManagerConfig_TypeInfo, v8);
    sub_B2C35C(&System_IO_StreamWriter_TypeInfo, v9);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v10);
    sub_B2C35C(&uint_TypeInfo, v11);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v12);
    sub_B2C35C(&StringLiteral_23701/*"~{0}\n{1}"*/, v13);
    sub_B2C35C(&StringLiteral_1535/*"@"*/, v14);
    sub_B2C35C(&StringLiteral_699/*","*/, v15);
    byte_4189069 = 1;
  }
  HIDWORD(v43) = 0;
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
    v22 = CacheListFileName;
    v23 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_42402728(v23, (size << 7) + 128, 0LL);
    if ( !v23 )
      goto LABEL_23;
    System_Text_StringBuilder__Append_42408700(v23, (System_String_o *)StringLiteral_1535/*"@"*/, 0LL);
    v24 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_42408700(v23, v24->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_42408700(v23, (System_String_o *)StringLiteral_699/*","*/, 0LL);
    System_Text_StringBuilder__Append_42412040(v23, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_42408700(v23, (System_String_o *)StringLiteral_699/*","*/, 0LL);
    System_Text_StringBuilder__Append_42412180(v23, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    CacheListFileName = (System_String_o *)System_Text_StringBuilder__Append_42408700(
                                             v23,
                                             (System_String_o *)StringLiteral_26/*"\n"*/,
                                             0LL);
    v25 = this->fields.saveDataMapList;
    if ( !v25 )
      goto LABEL_23;
    v26 = v25->fields._size;
    if ( (int)v26 >= 1 )
    {
      v27 = 0LL;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)v25->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        System_Text_StringBuilder__Append_42408700(v23, (System_String_o *)v25->fields._items->m_Items[v27], 0LL);
        CacheListFileName = (System_String_o *)System_Text_StringBuilder__Append_42408700(
                                                 v23,
                                                 (System_String_o *)StringLiteral_26/*"\n"*/,
                                                 0LL);
        if ( (__int64)++v27 >= v26 )
          break;
        v25 = this->fields.saveDataMapList;
        if ( !v25 )
          goto LABEL_23;
      }
    }
    v28 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v23->klass->vtable._3_ToString.method)(
                            v23,
                            v23->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    CacheListFileName = (System_String_o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !CacheListFileName )
LABEL_23:
      sub_B2C434(CacheListFileName, v19);
    v29 = (System_Byte_array *)((__int64 (__fastcall *)(System_String_o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._18_System_IConvertible_ToDouble.method)(
                                 CacheListFileName,
                                 v28,
                                 CacheListFileName->klass->vtable._19_System_IConvertible_ToDecimal.methodPtr);
    if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v42 = Crc32__Compute(v29, 0LL);
    v30 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v42);
    v31 = System_String__Format_44301068((System_String_o *)StringLiteral_23701/*"~{0}\n{1}"*/, v30, v28, 0LL);
    if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    }
    v32 = CatAndMouseGame__CatGame3(v31, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v34 = (System_IO_StreamWriter_o *)sub_B2C42C(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_44356004(v34, v22, 0, UTF8, 0LL);
    if ( !v34 )
      sub_B2C434(v35, v36);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v34->klass->vtable._16_Write.method)(
      v34,
      v32,
      v34->klass->vtable._17_Write.methodPtr);
    v43 = 0x100000113LL;
    klass = v34->klass;
    if ( *(_WORD *)&v34->klass->_2.bitflags1 )
    {
      v39 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v39;
        p_offset += 4;
        if ( v39 >= *(unsigned __int16 *)&v34->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_36:
      v41 = sub_AC5258(v34, System_IDisposable_TypeInfo, 0LL, v37);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v41)(v34, *(_QWORD *)(v41 + 8));
    if ( (_DWORD)v43 == 275 )
      HIDWORD(v43) = 0;
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
  __int64 v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array *v22; // x20
  System_Int32_array **v23; // x0
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Int32_array **v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x1
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x1
  System_String_o *v67; // x20
  System_Byte_array *v68; // x21
  System_String_o *v69; // x0
  System_String_o *v70; // x20
  System_String_o *v71; // x20
  System_Text_Encoding_o *v72; // x22
  System_IO_StreamWriter_o *v73; // x21
  __int64 v74; // x0
  __int64 v75; // x0
  uint32_t v76; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4189067 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, method);
    sub_B2C35C(&Crc32_TypeInfo, v2);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&ManagerConfig_TypeInfo, v4);
    sub_B2C35C(&System_IO_StreamWriter_TypeInfo, v5);
    sub_B2C35C(&string___TypeInfo, v6);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v7);
    sub_B2C35C(&StringLiteral_23698/*"~"*/, v8);
    sub_B2C35C(&StringLiteral_1535/*"@"*/, v9);
    sub_B2C35C(&StringLiteral_699/*","*/, v10);
    byte_4189067 = 1;
  }
  v76 = 0;
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
    UTF8 = (System_Text_Encoding_o *)sub_B2C374(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_55;
    v22 = (System_String_array *)UTF8;
    v23 = (System_Int32_array **)StringLiteral_1535/*"@"*/;
    if ( StringLiteral_1535/*"@"*/ )
    {
      v23 = (System_Int32_array **)sub_B2C41C(StringLiteral_1535/*"@"*/, v22->obj.klass->_1.element_class);
      if ( !v23 )
        goto LABEL_54;
      v24 = (System_Int32_array **)StringLiteral_1535/*"@"*/;
    }
    else
    {
      v24 = 0LL;
    }
    if ( !v22->max_length )
      goto LABEL_53;
    v22->m_Items[0] = (System_String_o *)v24;
    sub_B2C2F8((BattleServantConfConponent_o *)v22->m_Items, v24, v16, v17, v18, v19, v20, v21);
    v23 = (System_Int32_array **)ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v23 = (System_Int32_array **)ManagerConfig_TypeInfo;
    }
    v31 = *(System_Int32_array ***)&v23[23]->m_Items[1];
    if ( !v31 || (v23 = (System_Int32_array **)sub_B2C41C(v31, v22->obj.klass->_1.element_class)) != 0LL )
    {
      if ( v22->max_length <= 1 )
        goto LABEL_53;
      v22->m_Items[1] = (System_String_o *)v31;
      sub_B2C2F8((BattleServantConfConponent_o *)&v22->m_Items[1], v31, v25, v26, v27, v28, v29, v30);
      v23 = (System_Int32_array **)StringLiteral_699/*","*/;
      if ( StringLiteral_699/*","*/ )
      {
        v23 = (System_Int32_array **)sub_B2C41C(StringLiteral_699/*","*/, v22->obj.klass->_1.element_class);
        if ( !v23 )
          goto LABEL_54;
        v38 = (System_Int32_array **)StringLiteral_699/*","*/;
      }
      else
      {
        v38 = 0LL;
      }
      if ( v22->max_length <= 2 )
        goto LABEL_53;
      v22->m_Items[2] = (System_String_o *)v38;
      sub_B2C2F8((BattleServantConfConponent_o *)&v22->m_Items[2], v38, v32, v33, v34, v35, v36, v37);
      v23 = (System_Int32_array **)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
      v45 = v23;
      if ( !v23 || (v23 = (System_Int32_array **)sub_B2C41C(v23, v22->obj.klass->_1.element_class)) != 0LL )
      {
        if ( v22->max_length <= 3 )
          goto LABEL_53;
        v22->m_Items[3] = (System_String_o *)v45;
        sub_B2C2F8((BattleServantConfConponent_o *)&v22->m_Items[3], v45, v39, v40, v41, v42, v43, v44);
        v23 = (System_Int32_array **)StringLiteral_699/*","*/;
        if ( StringLiteral_699/*","*/ )
        {
          v23 = (System_Int32_array **)sub_B2C41C(StringLiteral_699/*","*/, v22->obj.klass->_1.element_class);
          if ( !v23 )
            goto LABEL_54;
          v52 = (System_Int32_array **)StringLiteral_699/*","*/;
        }
        else
        {
          v52 = 0LL;
        }
        if ( v22->max_length <= 4 )
          goto LABEL_53;
        v22->m_Items[4] = (System_String_o *)v52;
        sub_B2C2F8((BattleServantConfConponent_o *)&v22->m_Items[4], v52, v46, v47, v48, v49, v50, v51);
        v23 = (System_Int32_array **)System_Int64__ToString(
                                       (int64_t)&DataManager_TypeInfo->static_fields->dateVersion,
                                       0LL);
        v59 = v23;
        if ( !v23 || (v23 = (System_Int32_array **)sub_B2C41C(v23, v22->obj.klass->_1.element_class)) != 0LL )
        {
          if ( v22->max_length <= 5 )
            goto LABEL_53;
          v22->m_Items[5] = (System_String_o *)v59;
          sub_B2C2F8((BattleServantConfConponent_o *)&v22->m_Items[5], v59, v53, v54, v55, v56, v57, v58);
          v23 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
          if ( !StringLiteral_26/*"\n"*/ )
          {
            v66 = 0LL;
LABEL_42:
            if ( v22->max_length > 6 )
            {
              v22->m_Items[6] = (System_String_o *)v66;
              sub_B2C2F8((BattleServantConfConponent_o *)&v22->m_Items[6], v66, v60, v61, v62, v63, v64, v65);
              v67 = System_String__Concat_44385656(v22, 0LL);
              UTF8 = System_Text_Encoding__get_UTF8(0LL);
              if ( UTF8 )
              {
                v68 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                             UTF8,
                                             v67,
                                             UTF8->klass->vtable._19_GetBytes.methodPtr);
                if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
                v76 = Crc32__Compute(v68, 0LL);
                v69 = System_UInt32__ToString((uint32_t)&v76, 0LL);
                v70 = System_String__Concat_44308944(
                        (System_String_o *)StringLiteral_23698/*"~"*/,
                        v69,
                        (System_String_o *)StringLiteral_26/*"\n"*/,
                        v67,
                        0LL);
                if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
                }
                v71 = CatAndMouseGame__CatGame1(v70, 0, 0LL);
                v72 = System_Text_Encoding__get_UTF8(0LL);
                v73 = (System_IO_StreamWriter_o *)sub_B2C42C(System_IO_StreamWriter_TypeInfo);
                System_IO_StreamWriter___ctor_44356004(v73, CacheVersionFileName, 0, v72, 0LL);
                if ( v73 )
                {
                  ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v73->klass->vtable._16_Write.method)(
                    v73,
                    v71,
                    v73->klass->vtable._17_Write.methodPtr);
                  ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v73->klass->vtable._8_Close.method)(
                    v73,
                    v73->klass->vtable._9_Dispose.methodPtr);
                  return;
                }
              }
LABEL_55:
              sub_B2C434(UTF8, v15);
            }
LABEL_53:
            v74 = sub_B2C460(v23);
            sub_B2C400(v74, 0LL);
          }
          v23 = (System_Int32_array **)sub_B2C41C(StringLiteral_26/*"\n"*/, v22->obj.klass->_1.element_class);
          if ( v23 )
          {
            v66 = (System_Int32_array **)StringLiteral_26/*"\n"*/;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_54:
    v75 = sub_B2C454(v23);
    sub_B2C400(v75, 0LL);
  }
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
  if ( (byte_41864BB & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass55_0_o *)sub_B2C35C(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_41864BB = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  v8 = *(_QWORD *)&_4__this->fields.lastFrameTime;
  if ( !v8 )
    goto LABEL_16;
  if ( *(_DWORD *)(v8 + 24) <= (unsigned int)b )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v13 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 8LL * a + 32);
  if ( !v13 )
LABEL_16:
    sub_B2C434(this, *(_QWORD *)&a);
  if ( *(_DWORD *)(v13 + 24) <= 1u )
  {
LABEL_17:
    v15 = sub_B2C460(this);
    sub_B2C400(v15, 0LL);
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
  if ( (byte_41864BC & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass55_1_o *)sub_B2C35C(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_41864BC = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass55_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_B2C434(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_B2C434(this, 0LL);
  return System_String__op_Equality(x->fields._MasterName_k__BackingField, this->fields.masterName, 0LL);
}


void __fastcall DataManager___c__DisplayClass57_1___ctor(
        DataManager___c__DisplayClass57_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DataManager___c__DisplayClass57_1___LoadMasterDataThread_b__1(
        DataManager___c__DisplayClass57_1_o *this,
        Il2CppObject *_,
        const MethodInfo *method)
{
  System_Exception_o *ex; // x19

  if ( (byte_41864BD & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Debug_TypeInfo, _);
    byte_41864BD = 1;
  }
  ex = this->fields.ex;
  if ( (BYTE3(UnityEngine_Debug_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  }
  UnityEngine_Debug__LogException(ex, 0LL);
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
  UnityEngine_WaitForEndOfFrame_o *v14; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  bool result; // w0
  DataManager_c *v23; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v25; // w9
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v27; // x21
  System_IO_Stream_o *v28; // x22
  System_IO_Stream_o *v29; // x23
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x24
  __int64 v33; // x0
  __int64 v34; // x1
  UnityEngine_WaitForEndOfFrame_o *v35; // x20
  BattleServantConfConponent_o *v36; // x19
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  int v43; // w8
  DataManager_c *v44; // x8
  System_IO_Stream_c *klass; // x8
  unsigned __int64 v46; // x10
  int32_t *p_offset; // x11
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x3
  int v52; // w8
  System_IO_Stream_c *v53; // x8
  unsigned __int64 v54; // x10
  int32_t *v55; // x11
  __int64 v56; // x0
  System_Int32_array **v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x3
  System_IO_MemoryStream_c *v65; // x8
  unsigned __int64 v66; // x10
  int32_t *v67; // x11
  __int64 v68; // x0
  System_Byte_array *saveNameList; // x22
  System_IO_MemoryStream_o *v70; // x21
  System_IO_BinaryReader_o *v71; // x22
  __int64 v72; // x0
  __int64 v73; // x1
  __int64 v74; // x3
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  int size; // w26
  int i; // w27
  __int64 v78; // x0
  __int64 v79; // x1
  int v80; // w24
  __int64 v81; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x25
  __int64 v83; // x0
  int v84; // w8
  System_IO_BinaryReader_c *v85; // x8
  unsigned __int64 v86; // x10
  int32_t *v87; // x11
  __int64 v88; // x0
  int v89; // w8
  System_IO_MemoryStream_c *v90; // x8
  unsigned __int64 v91; // x10
  int32_t *v92; // x11
  __int64 v93; // x0
  UnityEngine_WaitForEndOfFrame_o *v94; // x20
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  __int64 v101; // x0
  __int64 v102; // x0
  DataManager_o *v103; // [xsp+8h] [xbp-78h]
  _DWORD v104[7]; // [xsp+10h] [xbp-70h]
  int v105; // [xsp+2Ch] [xbp-54h]

  v2 = this;
  if ( (byte_41864BE & 1) == 0 )
  {
    sub_B2C35C(&System_IO_BinaryReader_TypeInfo, method);
    sub_B2C35C(&byte___TypeInfo, v3);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&System_GC_TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&long___TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_B2C35C(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_41864BE = 1;
  }
  v105 = 0;
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
        v14 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v14, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v14;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(p__2__current, (System_Int32_array **)v14, v16, v17, v18, v19, v20, v21);
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
          v103 = _4__this;
          v27 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v27, 0LL);
          v28 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          }
          v29 = CatAndMouseGame__MouseGameZ(v28, 0LL);
          v30 = sub_B2C374(byte___TypeInfo, 0x4000LL);
          v32 = v30;
          if ( !v30 )
            sub_B2C434(0LL, v31);
          if ( !v29 )
            sub_B2C434(v30, v31);
          while ( 1 )
          {
            v33 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v29->klass->vtable._30_unknown.method)(
                    v29,
                    v32,
                    0LL,
                    *(unsigned int *)(v32 + 24),
                    v29->klass->vtable._31_ReadByte.methodPtr);
            if ( (int)v33 < 1 )
              break;
            if ( !v27 )
              sub_B2C434(v33, v34);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v27->klass->vtable._32_Write.method)(
              v27,
              v32,
              0LL,
              (unsigned int)v33,
              v27->klass->vtable._33_WriteByte.methodPtr);
          }
          v104[v105++] = 198;
          klass = v29->klass;
          if ( *(_WORD *)&v29->klass->_2.bitflags1 )
          {
            v46 = 0LL;
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              ++v46;
              p_offset += 4;
              if ( v46 >= *(unsigned __int16 *)&v29->klass->_2.bitflags1 )
                goto LABEL_42;
            }
            v48 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_42:
            v48 = sub_AC5258(v29, System_IDisposable_TypeInfo, 0LL, (unsigned int)v33);
          }
          v49 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v48)(v29, *(_QWORD *)(v48 + 8));
          v52 = v105;
          if ( v105 && v104[v105 - 1] == 198 )
            v52 = --v105;
          v104[v52] = 212;
          ++v105;
          if ( v28 )
          {
            v53 = v28->klass;
            if ( *(_WORD *)&v28->klass->_2.bitflags1 )
            {
              v54 = 0LL;
              v55 = &v53->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
              {
                ++v54;
                v55 += 4;
                if ( v54 >= *(unsigned __int16 *)&v28->klass->_2.bitflags1 )
                  goto LABEL_52;
              }
              v56 = (__int64)(&v53->vtable._0_Equals.method + 2 * *v55);
            }
            else
            {
LABEL_52:
              v56 = sub_AC5258(v28, System_IDisposable_TypeInfo, 0LL, v51);
            }
            v49 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v56)(v28, *(_QWORD *)(v56 + 8));
          }
          if ( v105 && v104[v105 - 1] == 212 )
            --v105;
          if ( !v27 )
            sub_B2C434(v49, v50);
          v57 = (System_Int32_array **)((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v27->klass->vtable._37_ToArray.method)(
                                         v27,
                                         v27->klass[1]._1.image);
          _4__this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v57;
          sub_B2C2F8((BattleServantConfConponent_o *)&_4__this->fields.saveNameList, v57, v58, v59, v60, v61, v62, v63);
          v104[v105++] = 239;
          v65 = v27->klass;
          if ( *(_WORD *)&v27->klass->_2.bitflags1 )
          {
            v66 = 0LL;
            v67 = &v65->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
            {
              ++v66;
              v67 += 4;
              if ( v66 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
                goto LABEL_63;
            }
            v68 = (__int64)(&v65->vtable._0_Equals.method + 2 * *v67);
          }
          else
          {
LABEL_63:
            v68 = sub_AC5258(v27, System_IDisposable_TypeInfo, 0LL, v64);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v68)(v27, *(_QWORD *)(v68 + 8));
          if ( v105 && v104[v105 - 1] == 239 )
            --v105;
          saveNameList = (System_Byte_array *)_4__this->fields.saveNameList;
          v70 = (System_IO_MemoryStream_o *)sub_B2C42C(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_45022032(v70, saveNameList, 0LL);
          v71 = (System_IO_BinaryReader_o *)sub_B2C42C(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v71, (System_IO_Stream_o *)v70, 0LL);
          saveDataMapList = _4__this->fields.saveDataMapList;
          if ( !saveDataMapList )
            sub_B2C434(v72, v73);
          size = saveDataMapList->fields._size;
          if ( size >= 1 )
          {
            if ( !v71 )
              sub_B2C434(v72, v73);
            for ( i = 0; i < size; ++i )
            {
              v78 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v71->klass->vtable._15_ReadInt32.method)(
                      v71,
                      v71->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v70 )
                sub_B2C434(v78, v79);
              v80 = v78;
              v81 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v70->klass->vtable._12_get_Position.method)(
                      v70,
                      v70->klass->vtable._13_set_Position.methodPtr);
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v70->klass->vtable._28_Seek.method)(
                v70,
                v80,
                1LL,
                v70->klass->vtable._29_SetLength.methodPtr);
              v82 = *(System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&v103->fields.lastFrameTime;
              v83 = sub_B2C374(long___TypeInfo, 2LL);
              if ( !v83 )
                sub_B2C434(0LL, 0LL);
              v84 = *(_DWORD *)(v83 + 24);
              if ( !v84 )
              {
                v101 = sub_B2C460(v83);
                sub_B2C400(v101, 0LL);
              }
              *(_QWORD *)(v83 + 32) = v81;
              if ( v84 == 1 )
              {
                v102 = sub_B2C460(v83);
                sub_B2C400(v102, 0LL);
              }
              *(_QWORD *)(v83 + 40) = v80;
              if ( !v82 )
                sub_B2C434(v83, v83);
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v82,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v83,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_long____Add__);
            }
          }
          v104[v105++] = 362;
          if ( v71 )
          {
            v85 = v71->klass;
            if ( *(_WORD *)&v71->klass->_2.bitflags1 )
            {
              v86 = 0LL;
              v87 = &v85->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
              {
                ++v86;
                v87 += 4;
                if ( v86 >= *(unsigned __int16 *)&v71->klass->_2.bitflags1 )
                  goto LABEL_83;
              }
              v88 = (__int64)(&v85->vtable._0_Equals.method + 2 * *v87);
            }
            else
            {
LABEL_83:
              v88 = sub_AC5258(v71, System_IDisposable_TypeInfo, 0LL, v74);
            }
            (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v88)(v71, *(_QWORD *)(v88 + 8));
          }
          v89 = v105;
          if ( v105 && v104[v105 - 1] == 362 )
            v89 = --v105;
          v104[v89] = 376;
          ++v105;
          if ( v70 )
          {
            v90 = v70->klass;
            if ( *(_WORD *)&v70->klass->_2.bitflags1 )
            {
              v91 = 0LL;
              v92 = &v90->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v92 - 1) != System_IDisposable_TypeInfo )
              {
                ++v91;
                v92 += 4;
                if ( v91 >= *(unsigned __int16 *)&v70->klass->_2.bitflags1 )
                  goto LABEL_94;
              }
              v93 = (__int64)(&v90->vtable._0_Equals.method + 2 * *v92);
            }
            else
            {
LABEL_94:
              v93 = sub_AC5258(v70, System_IDisposable_TypeInfo, 0LL, v74);
            }
            (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v93)(v70, *(_QWORD *)(v93 + 8));
          }
          if ( v105 && v104[v105 - 1] == 376 )
            --v105;
          if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !System_GC_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
          }
          System_GC__Collect_43492776(0LL);
          v94 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v94, 0LL);
          v2->fields.__2__current = (Il2CppObject *)v94;
          v36 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
          sub_B2C2F8(v36, (System_Int32_array **)v94, v95, v96, v97, v98, v99, v100);
          v43 = 2;
LABEL_104:
          *(_DWORD *)&v36[-1].fields.isOpenAfter = v43;
          return 1;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v35;
        v36 = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(v36, (System_Int32_array **)v35, v37, v38, v39, v40, v41, v42);
        v43 = 3;
        goto LABEL_104;
      }
LABEL_32:
      DataManager__ClearSaveDataList(_4__this, 0LL);
      v44 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v44 = DataManager_TypeInfo;
      }
      static_fields = v44->static_fields;
      result = 0;
      v25 = 5;
LABEL_36:
      static_fields->readMasterDataResult = v25;
      return result;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_17;
      goto LABEL_112;
    case 2:
      v2->fields.__1__state = -1;
      v23 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v23 = DataManager_TypeInfo;
      }
      static_fields = v23->static_fields;
      result = 0;
      v25 = 1;
      goto LABEL_36;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_112:
        sub_B2C434(this, method);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  UnityEngine_WaitForEndOfFrame_o *v6; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  bool result; // w0
  bool MasterVersionFile; // w0
  DataManager_c *v16; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v18; // w9

  v2 = this;
  if ( (byte_41864BF & 1) == 0 )
  {
    sub_B2C35C(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_41864BF = 1;
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
        v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = (BattleServantConfConponent_o *)&v2->fields.__2__current;
        sub_B2C2F8(p__2__current, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isOpenAfter = 1;
        return result;
      }
      goto LABEL_12;
    }
LABEL_23:
    sub_B2C434(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_23;
LABEL_12:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, 0LL);
  v16 = DataManager_TypeInfo;
  if ( MasterVersionFile )
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v16 = DataManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    result = 0;
    v18 = 1;
  }
  else
  {
    if ( (WORD1(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v16 = DataManager_TypeInfo;
    }
    static_fields = v16->static_fields;
    result = 0;
    v18 = 5;
  }
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v84; // x1
  System_Int32_array **v85; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  UnityEngine_WaitForEndOfFrame_o *v92; // x20
  BattleServantConfConponent_o *v93; // x19
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  int v100; // w8
  System_Int32_array **dataMapObject_5__7; // x8
  __int64 v102; // x11
  System_Int32_array **v103; // x1
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  __int64 v105; // x8
  System_String_o *CachePath; // x21
  System_String_array **v107; // x2
  System_String_array **v108; // x3
  System_Boolean_array **v109; // x4
  System_Int32_array **v110; // x5
  System_Int32_array *v111; // x6
  System_Int32_array *v112; // x7
  System_String_array **v113; // x2
  System_String_array **v114; // x3
  System_Boolean_array **v115; // x4
  System_Int32_array **v116; // x5
  System_Int32_array *v117; // x6
  System_Int32_array *v118; // x7
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  __int64 v125; // x1
  DataManager_c *v126; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v128; // x21
  System_Int32_array **v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_String_array **v136; // x2
  System_String_array **v137; // x3
  System_Boolean_array **v138; // x4
  System_Int32_array **v139; // x5
  System_Int32_array *v140; // x6
  System_Int32_array *v141; // x7
  DataManager_c *v142; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v144; // x20
  BattleServantConfConponent_o *p__2__current; // x19
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Byte_array *cryptBytes_5__8; // x22
  System_Int32_array **v153; // x0
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  UnityEngine_WaitForEndOfFrame_o *v166; // x20
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Func_bool__o *v173; // x21
  UnityEngine_WaitUntil_o *v174; // x20
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  UnityEngine_WaitForEndOfFrame_o *v181; // x20
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  UnityEngine_WaitForEndOfFrame_o *v188; // x20
  System_String_array **v189; // x2
  System_String_array **v190; // x3
  System_Boolean_array **v191; // x4
  System_Int32_array **v192; // x5
  System_Int32_array *v193; // x6
  System_Int32_array *v194; // x7
  int v195; // w8
  int32_t *p_i_5__9; // x23
  DataManager_c *v197; // x8
  struct DataManager_StaticFields *v198; // x8
  int v199; // w9
  Il2CppObject *v200; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v214; // x8
  __int64 i_5__9; // x9
  __int64 v216; // x8
  System_Int32_array **v217; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  System_String_array **v219; // x2
  System_String_array **v220; // x3
  System_Boolean_array **v221; // x4
  System_Int32_array **v222; // x5
  System_Int32_array *v223; // x6
  System_Int32_array *v224; // x7
  __int64 v225; // x0
  __int64 v226; // x1
  struct DataManager___c__DisplayClass49_0_o *v227; // x8
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *dataMapDict_5__6; // x0
  System_Int32_array **Item; // x0
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  struct DataManager___c__DisplayClass49_0_o *v236; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *saveDataMapList; // x22
  DataManager__updateMasterData_d__49_o *v239; // x24
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v240; // x23
  BattleServantConfConponent_o *p_dataMap_5__10; // x22
  System_String_array **v242; // x2
  System_String_array **v243; // x3
  System_Boolean_array **v244; // x4
  System_Int32_array **v245; // x5
  System_Int32_array *v246; // x6
  System_Int32_array *v247; // x7
  UnityEngine_WaitForEndOfFrame_o *v248; // x20
  System_String_array **v249; // x2
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  ManagerConfig_c *v255; // x0
  System_String_array **v256; // x2
  System_String_array **v257; // x3
  System_Boolean_array **v258; // x4
  System_Int32_array **v259; // x5
  System_Int32_array *v260; // x6
  System_Int32_array *v261; // x7
  System_String_array **v262; // x2
  System_String_array **v263; // x3
  System_Boolean_array **v264; // x4
  System_Int32_array **v265; // x5
  System_Int32_array *v266; // x6
  System_Int32_array *v267; // x7
  struct System_Collections_Generic_List_long____o *v268; // x8
  System_Collections_Generic_List_int__o *v269; // x22
  System_String_array **v270; // x2
  System_String_array **v271; // x3
  System_Boolean_array **v272; // x4
  System_Int32_array **v273; // x5
  System_Int32_array *v274; // x6
  System_Int32_array *v275; // x7
  ManagerConfig_c *v276; // x0
  __int64 v277; // x27
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  System_Int32_array **v284; // x23
  System_String_array **v285; // x2
  System_String_array **v286; // x3
  System_Boolean_array **v287; // x4
  System_Int32_array **v288; // x5
  System_Int32_array *v289; // x6
  System_Int32_array *v290; // x7
  System_Int32_array **v291; // x23
  System_String_array **v292; // x2
  System_String_array **v293; // x3
  System_Boolean_array **v294; // x4
  System_Int32_array **v295; // x5
  System_Int32_array *v296; // x6
  System_Int32_array *v297; // x7
  System_Int32_array **v298; // x23
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  System_Int32_array **v305; // x23
  System_String_array **v306; // x2
  System_String_array **v307; // x3
  System_Boolean_array **v308; // x4
  System_Int32_array **v309; // x5
  System_Int32_array *v310; // x6
  System_Int32_array *v311; // x7
  System_Int32_array **v312; // x23
  System_String_array **v313; // x2
  System_String_array **v314; // x3
  System_Boolean_array **v315; // x4
  System_Int32_array **v316; // x5
  System_Int32_array *v317; // x6
  System_Int32_array *v318; // x7
  System_Int32_array **v319; // x23
  System_String_array **v320; // x2
  System_String_array **v321; // x3
  System_Boolean_array **v322; // x4
  System_Int32_array **v323; // x5
  System_Int32_array *v324; // x6
  System_Int32_array *v325; // x7
  System_Int32_array **v326; // x23
  System_String_array **v327; // x2
  System_String_array **v328; // x3
  System_Boolean_array **v329; // x4
  System_Int32_array **v330; // x5
  System_Int32_array *v331; // x6
  System_Int32_array *v332; // x7
  System_Int32_array **v333; // x23
  __int64 v334; // x8
  __int64 v335; // x28
  DataMasterBase_o *v336; // x23
  __int64 v337; // x24
  System_String_array **v338; // x2
  System_String_array **v339; // x3
  System_Boolean_array **v340; // x4
  System_Int32_array **v341; // x5
  System_Int32_array *v342; // x6
  System_Int32_array *v343; // x7
  System_Int32_array **MasterName_k__BackingField; // x1
  System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *v345; // x25
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v346; // x26
  const MethodInfo_21524A8 *v347; // x3
  __int64 v348; // x26
  Il2CppObject *saveNameList; // x25
  int32_t v350; // w24
  __int64 v351; // x8
  const MethodInfo_21524A8 *v352; // x3
  __int64 v353; // x26
  __int64 v354; // x8
  UnityEngine_WaitForEndOfFrame_o *v355; // x20
  System_String_array **v356; // x2
  System_String_array **v357; // x3
  System_Boolean_array **v358; // x4
  System_Int32_array **v359; // x5
  System_Int32_array *v360; // x6
  System_Int32_array *v361; // x7
  ManagerConfig_c *v362; // x0
  Il2CppObject *v363; // x22
  int v364; // w8
  System_String_array **v365; // x2
  System_String_array **v366; // x3
  System_Boolean_array **v367; // x4
  System_Int32_array **v368; // x5
  System_Int32_array *v369; // x6
  System_Int32_array *v370; // x7
  UnityEngine_WaitForEndOfFrame_o *v371; // x20
  System_String_array **v372; // x2
  System_String_array **v373; // x3
  System_Boolean_array **v374; // x4
  System_Int32_array **v375; // x5
  System_Int32_array *v376; // x6
  System_Int32_array *v377; // x7
  DataManager_c *v378; // x8
  UnityEngine_WaitForEndOfFrame_o *v379; // x20
  System_String_array **v380; // x2
  System_String_array **v381; // x3
  System_Boolean_array **v382; // x4
  System_Int32_array **v383; // x5
  System_Int32_array *v384; // x6
  System_Int32_array *v385; // x7
  UnityEngine_WaitForEndOfFrame_o *v386; // x20
  System_String_array **v387; // x2
  System_String_array **v388; // x3
  System_Boolean_array **v389; // x4
  System_Int32_array **v390; // x5
  System_Int32_array *v391; // x6
  System_Int32_array *v392; // x7
  UnityEngine_WaitForEndOfFrame_o *v393; // x20
  System_String_array **v394; // x2
  System_String_array **v395; // x3
  System_Boolean_array **v396; // x4
  System_Int32_array **v397; // x5
  System_Int32_array *v398; // x6
  System_Int32_array *v399; // x7
  __int64 v400; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *v401; // x9
  DataManager_c *v402; // x8
  UnityEngine_WaitForEndOfFrame_o *v403; // x20
  System_String_array **v404; // x2
  System_String_array **v405; // x3
  System_Boolean_array **v406; // x4
  System_Int32_array **v407; // x5
  System_Int32_array *v408; // x6
  System_Int32_array *v409; // x7
  __int64 v410; // x0
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-F0h]
  System_Nullable_long__o v412; // [xsp+10h] [xbp-E0h] BYREF
  System_Nullable_long__o v413; // [xsp+20h] [xbp-D0h] BYREF
  int v414; // [xsp+30h] [xbp-C0h]
  int v415; // [xsp+78h] [xbp-78h]
  int v416; // [xsp+88h] [xbp-68h]
  bool lockTaken; // [xsp+94h] [xbp-5Ch] BYREF
  System_Nullable_long__o v418; // 0:x0.16
  System_Nullable_long__o v419; // 0:x0.16

  v8 = this;
  if ( (byte_41864C0 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, method);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v9);
    sub_B2C35C(&System_Convert_TypeInfo, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantProfileMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_EventServantMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantClassMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantCommentMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantProfileMaster___, v18);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v19);
    sub_B2C35C(&Method_DataManager__updateMasterData_b__49_0__, v20);
    sub_B2C35C(&DataManager_TypeInfo, v21);
    sub_B2C35C(&DataMasterBase___TypeInfo, v22);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v24);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v25);
    sub_B2C35C(&EventRandomMissionClearManager_TypeInfo, v26);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v27);
    sub_B2C35C(&System_Func_bool__TypeInfo, v28);
    sub_B2C35C(&System_GC_TypeInfo, v29);
    sub_B2C35C(&ImageLimitCount_TypeInfo, v30);
    sub_B2C35C(&LastUsedDeckNumberManager_TypeInfo, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____Add__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____Clear__, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__FindIndex__, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v39);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v40);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____get_Count__, v41);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____get_Item__, v42);
    sub_B2C35C(&Method_System_Collections_Generic_List_long____set_Item__, v43);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v44);
    sub_B2C35C(&LogoMain_TypeInfo, v45);
    sub_B2C35C(&ManagerConfig_TypeInfo, v46);
    sub_B2C35C(&MasterDataUnpakcer_TypeInfo, v47);
    sub_B2C35C(&MaterialBranchRouteManager_TypeInfo, v48);
    sub_B2C35C(&MaterialGroupClearHistoryManager_TypeInfo, v49);
    sub_B2C35C(&MaterialServantLimitCountManager_TypeInfo, v50);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v51);
    sub_B2C35C(&Method_System_Nullable_long___ctor__, v52);
    sub_B2C35C(&OtherUserNewManager_TypeInfo, v53);
    sub_B2C35C(&Method_System_Predicate_string___ctor__, v54);
    sub_B2C35C(&System_Predicate_string__TypeInfo, v55);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v56);
    sub_B2C35C(&ServantProfileEventJoinManager_TypeInfo, v57);
    sub_B2C35C(&ServantProfileLimitCountManager_TypeInfo, v58);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v59);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v60);
    sub_B2C35C(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v61);
    sub_B2C35C(&DataManager___c__DisplayClass49_0_TypeInfo, v62);
    sub_B2C35C(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__2__, v63);
    sub_B2C35C(&DataManager___c__DisplayClass49_1_TypeInfo, v64);
    sub_B2C35C(&UserCommandCodeCollectionManager_TypeInfo, v65);
    sub_B2C35C(&UserCommandCodeNewManager_TypeInfo, v66);
    sub_B2C35C(&UserEquipNewManager_TypeInfo, v67);
    sub_B2C35C(&UserMissionProgressManager_TypeInfo, v68);
    sub_B2C35C(&UserServantCollectionManager_TypeInfo, v69);
    sub_B2C35C(&UserServantLockManager_TypeInfo, v70);
    sub_B2C35C(&UserServantNewManager_TypeInfo, v71);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v72);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v73);
    sub_B2C35C(&WarBoardMessageHistoryManager_TypeInfo, v74);
    sub_B2C35C(&WarBoardMovieHistoryManager_TypeInfo, v75);
    this = (DataManager__updateMasterData_d__49_o *)sub_B2C35C(&StringLiteral_11585/*"SCRIPT"*/, v76);
    byte_41864C0 = 1;
  }
  lockTaken = 0;
  v416 = 0;
  v415 = 0;
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
      v105 = *(_QWORD *)&_4__this->fields.lastFrameTime;
      if ( !v105 )
        goto LABEL_302;
      v8->fields._saveDataCount_5__3 = *(_DWORD *)(v105 + 24);
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
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, 0LL, v107, v108, v109, v110, v111, v112);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v113,
        v114,
        v115,
        v116,
        v117,
        v118);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v119, v120, v121, v122, v123, v124);
      v126 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v126 = DataManager_TypeInfo;
      }
      updateData = v126->static_fields->updateData;
      if ( !updateData )
        sub_B2C434(0LL, v125);
      v128 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v129 = (System_Int32_array **)System_Convert__FromBase64String(v128, 0LL);
      v8->fields._cryptBytes_5__8 = (struct System_Byte_array *)v129;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, v129, v130, v131, v132, v133, v134, v135);
      v142 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v142 = DataManager_TypeInfo;
      }
      static_fields = v142->static_fields;
      static_fields->updateData = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->updateData, 0LL, v136, v137, v138, v139, v140, v141);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43492776(0LL);
      v144 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v144, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v144;
      p__2__current = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B2C2F8(p__2__current, (System_Int32_array **)v144, v146, v147, v148, v149, v150, v151);
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
      v153 = (System_Int32_array **)CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_B2C434(v153, v153);
      _4__this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v153;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&_4__this->fields.saveNameList,
        v153,
        v154,
        v155,
        v156,
        v157,
        v158,
        v159);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v160, v161, v162, v163, v164, v165);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43492776(0LL);
      v166 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v166, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v166;
      v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B2C2F8(v93, (System_Int32_array **)v166, v167, v168, v169, v170, v171, v172);
      v100 = 2;
      goto LABEL_88;
    case 2:
      v8->fields.__1__state = -1;
      v82 = (MasterDataUnpakcer_o *)sub_B2C42C(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v82, 0LL);
      if ( !_4__this )
        sub_B2C434(v83, v84);
      if ( !v82 )
        sub_B2C434(v83, v84);
      v85 = (System_Int32_array **)MasterDataUnpakcer__Unpack_21028392(
                                     v82,
                                     (System_Byte_array *)_4__this->fields.saveNameList,
                                     0LL);
      v8->fields._dataMapObject_5__7 = (Il2CppObject *)v85;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7, v85, v86, v87, v88, v89, v90, v91);
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43492776(0LL);
      v92 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v92, 0LL);
      v8->fields.__2__current = (Il2CppObject *)v92;
      v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
      sub_B2C2F8(v93, (System_Int32_array **)v92, v94, v95, v96, v97, v98, v99);
      v100 = 3;
      goto LABEL_88;
    case 3:
      dataMapObject_5__7 = (System_Int32_array **)v8->fields._dataMapObject_5__7;
      v8->fields.__1__state = -1;
      if ( dataMapObject_5__7
        && (v102 = *(&System_Collections_Generic_Dictionary_string__long____TypeInfo->_2.bitflags2 + 1),
            LOBYTE((*dataMapObject_5__7)->m_Items[68]) >= (unsigned int)v102) )
      {
        if ( *(System_Collections_Generic_Dictionary_string__long____c **)(*(_QWORD *)&(*dataMapObject_5__7)->m_Items[43]
                                                                         + 8 * v102
                                                                         - 8) == System_Collections_Generic_Dictionary_string__long____TypeInfo )
          v103 = dataMapObject_5__7;
        else
          v103 = 0LL;
      }
      else
      {
        v103 = 0LL;
      }
      v8->fields._dataMapDict_5__6 = (struct System_Collections_Generic_Dictionary_string__long____o *)v103;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, v103, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_302;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v188 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v188, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v188;
        v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B2C2F8(v93, (System_Int32_array **)v188, v189, v190, v191, v192, v193, v194);
        v100 = 4;
        goto LABEL_88;
      }
LABEL_82:
      if ( !v8->fields._dataMapDict_5__6 )
        goto LABEL_89;
      v195 = 0;
      v8->fields._i_5__9 = 0;
      p_i_5__9 = &v8->fields._i_5__9;
      while ( 2 )
      {
        if ( v195 < v8->fields._dataListCount_5__2 )
        {
          v200 = (Il2CppObject *)sub_B2C42C(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v200, 0LL);
          v8->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v200;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&v8->fields.__8__1,
            (System_Int32_array **)v200,
            v202,
            v203,
            v204,
            v205,
            v206,
            v207);
          v214 = _4__this->fields.lookup;
          if ( !v214 )
            goto LABEL_302;
          i_5__9 = v8->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= LODWORD(v214->fields.entries) )
            goto LABEL_303;
          v216 = *((_QWORD *)&v214->fields.count + i_5__9);
          if ( !v216 )
            goto LABEL_302;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_302;
          v217 = *(System_Int32_array ***)(v216 + 24);
          *(_QWORD *)&this->fields.__1__state = v217;
          sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, v217, v208, v209, v210, v211, v212, v213);
          _8__1 = v8->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_302;
          this = (DataManager__updateMasterData_d__49_o *)v8->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_302;
          if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                 (System_Xml_XmlQualifiedName_o *)_8__1->fields.masterName,
                 (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v8->fields._dataMap_5__10 = 0LL;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10,
              0LL,
              v219,
              v220,
              v221,
              v222,
              v223,
              v224);
            v227 = v8->fields.__8__1;
            if ( !v227 )
              sub_B2C434(v225, v226);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v8->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_B2C434(0LL, v226);
            Item = (System_Int32_array **)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            dataMapDict_5__6,
                                            (System_Type_o *)v227->fields.masterName,
                                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v8->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10,
              Item,
              v230,
              v231,
              v232,
              v233,
              v234,
              v235);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v393 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v393, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v393;
              v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B2C2F8(v93, (System_Int32_array **)v393, v394, v395, v396, v397, v398, v399);
              v100 = 5;
              goto LABEL_88;
            }
LABEL_103:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.lockCountObj;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v8->fields.__8__1;
            v236 = v8->fields.__8__1;
            if ( !v236 || !this )
              goto LABEL_302;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                              (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this,
                                                              (WarBoardManager_TaskList_o *)v236->fields.masterName,
                                                              (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v8->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_302;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v378 = DataManager_TypeInfo;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v378 = DataManager_TypeInfo;
                }
                v198 = v378->static_fields;
                result = 0;
                v199 = 6;
                goto LABEL_300;
              }
            }
            saveDataMapList = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.saveDataMapList;
            v239 = *p__8__1;
            v240 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_string__TypeInfo);
            System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
              v240,
              (Il2CppObject *)v239,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              (const MethodInfo_2952BE4 *)Method_System_Predicate_string___ctor__);
            if ( !saveDataMapList )
              goto LABEL_302;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                                                              saveDataMapList,
                                                              (System_Predicate_T__o *)v240,
                                                              (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_string__FindIndex__);
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
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
              this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
              if ( !this )
                goto LABEL_302;
              p_dataMap_5__10 = (BattleServantConfConponent_o *)&v8->fields._dataMap_5__10;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v8->fields._dataMap_5__10,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_long____Add__);
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
                (const MethodInfo_2EF41B8 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v8->fields._isAdd_5__4 = 1;
            v8->fields._dataMap_5__10 = 0LL;
            sub_B2C2F8(p_dataMap_5__10, 0LL, v242, v243, v244, v245, v246, v247);
            p_i_5__9 = &v8->fields._i_5__9;
          }
          *p__8__1 = 0LL;
          sub_B2C2F8((BattleServantConfConponent_o *)p__8__1, 0LL, v219, v220, v221, v222, v223, v224);
          v195 = *p_i_5__9 + 1;
          *p_i_5__9 = v195;
          continue;
        }
        break;
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v248 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v248, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v248;
        v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B2C2F8(v93, (System_Int32_array **)v248, v249, v250, v251, v252, v253, v254);
        v100 = 6;
LABEL_88:
        *(_DWORD *)&v93[-1].fields.isOpenAfter = v100;
        return 1;
      }
LABEL_122:
      if ( !v8->fields._isAdd_5__4 )
      {
        v255 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v255 = ManagerConfig_TypeInfo;
        }
        if ( !v255->static_fields->UseMock )
          goto LABEL_89;
      }
      v8->fields._dataMapDict_5__6 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._dataMapDict_5__6, 0LL, v2, v3, v4, v5, v6, v7);
      v8->fields._dataMapObject_5__7 = 0LL;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v8->fields._dataMapObject_5__7,
        0LL,
        v256,
        v257,
        v258,
        v259,
        v260,
        v261);
      v8->fields._cryptBytes_5__8 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields._cryptBytes_5__8, 0LL, v262, v263, v264, v265, v266, v267);
      if ( !_4__this )
        goto LABEL_302;
LABEL_128:
      v268 = _4__this->fields.saveDataMapList;
      if ( !v268 )
        goto LABEL_302;
      if ( v268->fields._size <= 0 )
      {
LABEL_89:
        v197 = DataManager_TypeInfo;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v197 = DataManager_TypeInfo;
        }
        v198 = v197->static_fields;
        result = 0;
        v199 = 5;
        goto LABEL_300;
      }
      LODWORD(_4__this->fields.masterLoadThreads) = 0;
      v269 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v269,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      v8->fields._loadedIndices_5__5 = v269;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v8->fields._loadedIndices_5__5,
        (System_Int32_array **)v269,
        v270,
        v271,
        v272,
        v273,
        v274,
        v275);
      p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v8->fields._loadedIndices_5__5;
      if ( !v8->fields.isUseTips )
        goto LABEL_201;
      v276 = ManagerConfig_TypeInfo;
      if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ManagerConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
        v276 = ManagerConfig_TypeInfo;
      }
      if ( !System_String__op_Inequality(
              v276->static_fields->ServerDefaultType,
              (System_String_o *)StringLiteral_11585/*"SCRIPT"*/,
              0LL) )
        goto LABEL_201;
      this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_302;
      if ( CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
        goto LABEL_201;
      v277 = sub_B2C374(DataMasterBase___TypeInfo, 8LL);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
      if ( !v277 )
        goto LABEL_302;
      v284 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v277 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( !*(_DWORD *)(v277 + 24) )
        goto LABEL_303;
      *(_QWORD *)(v277 + 32) = v284;
      sub_B2C2F8((BattleServantConfConponent_o *)(v277 + 32), v284, v278, v279, v280, v281, v282, v283);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantClassMaster___);
      v291 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v277 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v277 + 24) <= 1u )
        goto LABEL_303;
      *(_QWORD *)(v277 + 40) = v291;
      sub_B2C2F8((BattleServantConfConponent_o *)(v277 + 40), v291, v285, v286, v287, v288, v289, v290);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCommentMaster___);
      v298 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v277 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v277 + 24) <= 2u )
        goto LABEL_303;
      *(_QWORD *)(v277 + 48) = v298;
      sub_B2C2F8((BattleServantConfConponent_o *)(v277 + 48), v298, v292, v293, v294, v295, v296, v297);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
      v305 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v277 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v277 + 24) <= 3u )
        goto LABEL_303;
      *(_QWORD *)(v277 + 56) = v305;
      sub_B2C2F8((BattleServantConfConponent_o *)(v277 + 56), v305, v299, v300, v301, v302, v303, v304);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantProfileMaster___);
      v312 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v277 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v277 + 24) <= 4u )
        goto LABEL_303;
      *(_QWORD *)(v277 + 64) = v312;
      sub_B2C2F8((BattleServantConfConponent_o *)(v277 + 64), v312, v306, v307, v308, v309, v310, v311);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventServantMaster___);
      v319 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v277 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v277 + 24) <= 5u )
        goto LABEL_303;
      *(_QWORD *)(v277 + 72) = v319;
      sub_B2C2F8((BattleServantConfConponent_o *)(v277 + 72), v319, v313, v314, v315, v316, v317, v318);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
      v326 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v277 + 64LL));
        if ( !this )
          goto LABEL_233;
      }
      if ( *(_DWORD *)(v277 + 24) <= 6u )
        goto LABEL_303;
      *(_QWORD *)(v277 + 80) = v326;
      sub_B2C2F8((BattleServantConfConponent_o *)(v277 + 80), v326, v320, v321, v322, v323, v324, v325);
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
      v333 = (System_Int32_array **)this;
      if ( this )
      {
        this = (DataManager__updateMasterData_d__49_o *)sub_B2C41C(this, *(_QWORD *)(*(_QWORD *)v277 + 64LL));
        if ( !this )
        {
LABEL_233:
          v400 = sub_B2C454();
          sub_B2C400(v400, 0LL);
        }
      }
      if ( *(_DWORD *)(v277 + 24) <= 7u )
        goto LABEL_303;
      *(_QWORD *)(v277 + 88) = v333;
      sub_B2C2F8((BattleServantConfConponent_o *)(v277 + 88), v333, v327, v328, v329, v330, v331, v332);
      v334 = *(_QWORD *)(v277 + 24);
      if ( (int)v334 >= 1 )
      {
        v335 = 0LL;
        while ( (unsigned int)v335 < (unsigned int)v334 )
        {
          v336 = *(DataMasterBase_o **)(v277 + 32 + 8 * v335);
          v337 = sub_B2C42C(DataManager___c__DisplayClass49_1_TypeInfo);
          System_Object___ctor((Il2CppObject *)v337, 0LL);
          if ( !v336 )
            goto LABEL_302;
          if ( !v337 )
            goto LABEL_302;
          MasterName_k__BackingField = (System_Int32_array **)v336->fields._MasterName_k__BackingField;
          *(_QWORD *)(v337 + 16) = MasterName_k__BackingField;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v337 + 16),
            MasterName_k__BackingField,
            v338,
            v339,
            v340,
            v341,
            v342,
            v343);
          v345 = (System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo__o *)_4__this->fields.saveDataMapList;
          v346 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_string__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v346,
            (Il2CppObject *)v337,
            Method_DataManager___c__DisplayClass49_1__updateMasterData_b__2__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_string___ctor__);
          if ( !v345 )
            goto LABEL_302;
          this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_SimpleAnimationPlayable_StateInfo___FindIndex(
                                                            v345,
                                                            (System_Predicate_T__o *)v346,
                                                            (const MethodInfo_2EF4F0C *)Method_System_Collections_Generic_List_string__FindIndex__);
          if ( ((unsigned int)this & 0x80000000) == 0 )
          {
            v348 = *(_QWORD *)&_4__this->fields.lastFrameTime;
            if ( !v348 )
              goto LABEL_302;
            saveNameList = (Il2CppObject *)_4__this->fields.saveNameList;
            v350 = (int)this;
            if ( *(_DWORD *)(v348 + 24) <= (unsigned int)this )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v351 = *(_QWORD *)(*(_QWORD *)(v348 + 16) + 8LL * (int)this + 32);
            if ( !v351 )
              goto LABEL_302;
            if ( !*(_DWORD *)(v351 + 24) )
              break;
            *(_QWORD *)&v418.fields.has_value = *(_QWORD *)(v351 + 32);
            v418.fields.value = (int64_t)&v413;
            v413.fields.value = 0LL;
            *(_QWORD *)&v413.fields.has_value = 0LL;
            System_Nullable_long____ctor(v418, Method_System_Nullable_long___ctor__, v347);
            v353 = *(_QWORD *)&_4__this->fields.lastFrameTime;
            if ( !v353 )
              goto LABEL_302;
            if ( *(_DWORD *)(v353 + 24) <= (unsigned int)v350 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v354 = *(_QWORD *)(*(_QWORD *)(v353 + 16) + 8LL * v350 + 32);
            if ( !v354 )
              goto LABEL_302;
            if ( *(_DWORD *)(v354 + 24) <= 1u )
              break;
            *(_QWORD *)&v419.fields.has_value = *(_QWORD *)(v354 + 40);
            v419.fields.value = (int64_t)&v412;
            v412.fields.value = 0LL;
            *(_QWORD *)&v412.fields.has_value = 0LL;
            System_Nullable_long____ctor(v419, Method_System_Nullable_long___ctor__, v352);
            DataMasterBase__Replaced(v336, saveNameList, v413, v412, 0LL);
            this = *p_loadedIndices_5__5;
            if ( !*p_loadedIndices_5__5 )
              goto LABEL_302;
            System_Collections_Generic_List_int___Add(
              (System_Collections_Generic_List_int__o *)this,
              v350,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            ++LODWORD(_4__this->fields.masterLoadThreads);
          }
          v334 = *(_QWORD *)(v277 + 24);
          if ( (int)++v335 >= (int)v334 )
            goto LABEL_185;
        }
LABEL_303:
        v410 = sub_B2C460(this);
        sub_B2C400(v410, 0LL);
      }
LABEL_185:
      this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_302;
      this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                        (DataManager_o *)this,
                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
        this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( this )
        {
          CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_200:
          *(float *)&_4__this->fields.masterCheckName = UnityEngine_Time__get_realtimeSinceStartup(0LL);
          v355 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v355, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v355;
          v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B2C2F8(v93, (System_Int32_array **)v355, v356, v357, v358, v359, v360, v361);
          v100 = 7;
          goto LABEL_88;
        }
LABEL_302:
        sub_B2C434(this, method);
      }
LABEL_201:
      DataManager__StartMasterLoadThread(_4__this, v8->fields._saveDataCount_5__3, v8->fields._loadedIndices_5__5, 0LL);
      if ( v8->fields._isAdd_5__4 )
      {
        v362 = ManagerConfig_TypeInfo;
        if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ManagerConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
          v362 = ManagerConfig_TypeInfo;
        }
        if ( !v362->static_fields->UseMock )
        {
          DataManager__DeleteCacheFile(_4__this, 0LL);
          if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
          {
            v386 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v386, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v386;
            v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B2C2F8(v93, (System_Int32_array **)v386, v387, v388, v389, v390, v391, v392);
            v100 = 8;
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
            v173 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v173,
              (Il2CppObject *)_4__this,
              Method_DataManager__updateMasterData_b__49_0__,
              (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
            v174 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v174, v173, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v174;
            v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B2C2F8(v93, (System_Int32_array **)v174, v175, v176, v177, v178, v179, v180);
            v100 = 9;
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
          v181 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v181, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v181;
          v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
          sub_B2C2F8(v93, (System_Int32_array **)v181, v182, v183, v184, v185, v186, v187);
          v100 = 10;
          goto LABEL_88;
        }
LABEL_206:
        v363 = *(Il2CppObject **)&_4__this->fields.nowLoadCount;
        lockTaken = 0;
        System_Threading_Monitor__Enter_15380960(v363, &lockTaken, 0LL);
        if ( SLODWORD(_4__this->fields.masterLoadThreads) >= v8->fields._saveDataCount_5__3 )
          v364 = 1739;
        else
          v364 = 1709;
        v414 = v364;
        v415 = 1;
        if ( lockTaken )
          System_Threading_Monitor__Exit(v363, 0LL);
        if ( v414 == 1709 )
        {
          v415 = 0;
        }
        else if ( v414 == 1739 )
        {
          v415 = 0;
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
              (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
            this = *(DataManager__updateMasterData_d__49_o **)&_4__this->fields.lastFrameTime;
            if ( this )
            {
              System_Collections_Generic_List_XWeaponTrail_Element___Clear(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)this,
                (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_long____Clear__);
              _4__this->fields.saveNameList = 0LL;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&_4__this->fields.saveNameList,
                0LL,
                v365,
                v366,
                v367,
                v368,
                v369,
                v370);
              if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_GC_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              }
              System_GC__Collect_43492776(0LL);
              v371 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v371, 0LL);
              v8->fields.__2__current = (Il2CppObject *)v371;
              v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
              sub_B2C2F8(v93, (System_Int32_array **)v371, v372, v373, v374, v375, v376, v377);
              v100 = 12;
              goto LABEL_88;
            }
          }
          goto LABEL_302;
        }
        v379 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v379, 0LL);
        v8->fields.__2__current = (Il2CppObject *)v379;
        v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
        sub_B2C2F8(v93, (System_Int32_array **)v379, v380, v381, v382, v383, v384, v385);
        v100 = 11;
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
        v401 = _4__this->fields.lookup;
        if ( !v401 )
          goto LABEL_302;
        if ( (unsigned int)v81 >= LODWORD(v401->fields.entries) )
          goto LABEL_303;
        this = (DataManager__updateMasterData_d__49_o *)*((_QWORD *)&v401->fields.count + v81);
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
            v403 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v403, 0LL);
            v8->fields.__2__current = (Il2CppObject *)v403;
            v93 = (BattleServantConfConponent_o *)&v8->fields.__2__current;
            sub_B2C2F8(v93, (System_Int32_array **)v403, v404, v405, v406, v407, v408, v409);
            v100 = 13;
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
      v402 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v402 = DataManager_TypeInfo;
      }
      v198 = v402->static_fields;
      result = 0;
      v199 = 1;
LABEL_300:
      v198->updateMasterDataResult = v199;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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
  __int64 v36; // x1
  DataManager_c *v37; // x0
  __int64 webViewData; // x0
  System_Int32_array **v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  DataManager_c *v52; // x0
  struct DataManager_StaticFields *static_fields; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *Item; // x0
  __int64 v55; // x1
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
  UnityEngine_WaitForEndOfFrame_o *v76; // x20
  Il2CppObject **v77; // x19
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  int v84; // w8
  Il2CppObject *v85; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_24067780; // x0
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7
  UnityEngine_WaitForEndOfFrame_o *v93; // x20
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_String_o *v100; // x20
  System_String_o *v101; // x22
  UnityEngine_Purchasing_IStoreExtension_o *v102; // x0
  System_Collections_Generic_Dictionary_string__object__o *v103; // x23
  __int64 v104; // x9
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7

  if ( (byte_41864C1 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, method);
    sub_B2C35C(&System_Convert_TypeInfo, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v12);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13);
    sub_B2C35C(&JsonManager_TypeInfo, v14);
    sub_B2C35C(&NetworkManager_TypeInfo, v15);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_17664/*"contactURL"*/, v17);
    sub_B2C35C(&StringLiteral_18731/*"filePass"*/, v18);
    sub_B2C35C(&StringLiteral_16619/*"baseURL"*/, v19);
    sub_B2C35C(&StringLiteral_1/*""*/, v20);
    byte_41864C1 = 1;
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
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      p_cryptString_5__3 = &this->fields._cryptString_5__3;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._cryptString_5__3, 0LL, v24, v25, v26, v27, v28, v29);
      this->fields._dataObject_5__4 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._dataObject_5__4, 0LL, v30, v31, v32, v33, v34, v35);
      v37 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v37 = DataManager_TypeInfo;
      }
      webViewData = (__int64)v37->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_61;
      v39 = (System_Int32_array **)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)webViewData + 360LL))(
                                     webViewData,
                                     *(_QWORD *)(*(_QWORD *)webViewData + 368LL));
      *p_cryptString_5__3 = (struct System_String_o *)v39;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields._cryptString_5__3, v39, v40, v41, v42, v43, v44, v45);
      v52 = DataManager_TypeInfo;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v52 = DataManager_TypeInfo;
      }
      static_fields = v52->static_fields;
      static_fields->webViewData = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->webViewData, 0LL, v46, v47, v48, v49, v50, v51);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v56 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v56, 0LL);
        this->fields.__2__current = (Il2CppObject *)v56;
        p__2__current = &this->fields.__2__current;
        sub_B2C2F8(
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
      sub_B2C2F8(
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
        v76 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v76, 0LL);
        this->fields.__2__current = (Il2CppObject *)v76;
        v77 = &this->fields.__2__current;
        sub_B2C2F8((BattleServantConfConponent_o *)v77, (System_Int32_array **)v76, v78, v79, v80, v81, v82, v83);
        v84 = 2;
LABEL_36:
        *((_DWORD *)v77 - 2) = v84;
        return 1;
      }
LABEL_30:
      v85 = *p_dataObject_5__4;
      if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !JsonManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      }
      Dictionary_24067780 = JsonManager__getDictionary_24067780(v85, 0LL);
      this->fields._data_5__2 = Dictionary_24067780;
      p_data_5__2 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&this->fields._data_5__2;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields._data_5__2,
        (System_Int32_array **)Dictionary_24067780,
        v87,
        v88,
        v89,
        v90,
        v91,
        v92);
      if ( !_4__this )
        goto LABEL_59;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v93 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v93, 0LL);
        this->fields.__2__current = (Il2CppObject *)v93;
        v77 = &this->fields.__2__current;
        sub_B2C2F8((BattleServantConfConponent_o *)v77, (System_Int32_array **)v93, v94, v95, v96, v97, v98, v99);
        v84 = 3;
        goto LABEL_36;
      }
LABEL_37:
      if ( !*p_data_5__2 )
        goto LABEL_57;
      v100 = (System_String_o *)StringLiteral_1/*""*/;
      v101 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              *p_data_5__2,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_16619/*"baseURL"*/,
              (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_42;
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      Item = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                                                                                             (System_Type_o *)StringLiteral_16619/*"baseURL"*/,
                                                                                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v101 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                  Item,
                                  Item->klass->vtable._4_unknown.methodPtr);
LABEL_42:
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
              Item,
              (System_Xml_XmlQualifiedName_o *)StringLiteral_17664/*"contactURL"*/,
              (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_47;
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      Item = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                                                                             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                                                                                             (System_Type_o *)StringLiteral_17664/*"contactURL"*/,
                                                                                             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_59;
      v100 = (System_String_o *)((__int64 (__fastcall *)(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *, Il2CppMethodPointer))Item->klass->vtable._3_ToString.method)(
                                  Item,
                                  Item->klass->vtable._4_unknown.methodPtr);
LABEL_47:
      Item = *p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_59;
      if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
             Item,
             (System_Xml_XmlQualifiedName_o *)StringLiteral_18731/*"filePass"*/,
             (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = *p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_59:
          sub_B2C434(Item, v55);
        v102 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                 (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)Item,
                 (System_Type_o *)StringLiteral_18731/*"filePass"*/,
                 (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v103 = (System_Collections_Generic_Dictionary_string__object__o *)v102;
        if ( v102 )
        {
          v104 = *(&System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.bitflags2 + 1);
          if ( *(&v102->klass->_2.bitflags2 + 1) < (unsigned int)v104
            || (System_Collections_Generic_Dictionary_string__object__c *)v102->klass->_2.typeHierarchy[v104 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            webViewData = sub_B2C728(v102);
LABEL_61:
            sub_B2C434(webViewData, v36);
          }
        }
        if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        }
        NetworkManager__setupWebViewAddress(v101, v100, v103, 0LL);
      }
LABEL_57:
      this->fields._data_5__2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)p_data_5__2, 0LL, v2, v3, v4, v5, v6, v7);
      this->fields._cryptString_5__3 = 0LL;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields._cryptString_5__3,
        0LL,
        v105,
        v106,
        v107,
        v108,
        v109,
        v110);
      this->fields._dataObject_5__4 = 0LL;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields._dataObject_5__4,
        0LL,
        v111,
        v112,
        v113,
        v114,
        v115,
        v116);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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