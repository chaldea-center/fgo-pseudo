void __fastcall DataManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct DataManager_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4A4DFC3 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, v1);
    sub_1B863B8(&StringLiteral_1/*""*/, v4);
    byte_4A4DFC3 = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->updateData, 0, v2, v3);
  v6 = DataManager_TypeInfo->static_fields;
  v6->webViewData = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&v6->webViewData, 0, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  v10 = DataManager_TypeInfo->static_fields;
  v10->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&v10->serverHash, v9, v11, v12);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4A4DFC2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_long_____ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_long____TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B863B8(&object_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager___ctor__, v7);
    byte_4A4DFC2 = 1;
  }
  this->fields._DispLog = 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.saveNameList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v11;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.saveDataMapList, (int32_t)v11, v12, v13);
  v14 = (Il2CppObject *)sub_1B86604(object_TypeInfo);
  System_Object___ctor(v14, 0LL);
  this->fields.lockCountObj = v14;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.lockCountObj, (int32_t)v14, v15, v16);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3839A98 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_4A4DFA0 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, v1);
    byte_4A4DFA0 = 1;
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

  if ( (byte_4A4DFA1 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    byte_4A4DFA1 = 1;
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

  if ( (byte_4A4DF9F & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, v1);
    byte_4A4DF9F = 1;
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

  if ( (byte_4A4DFB9 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_4A4DFB9 = 1;
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
    sub_1B86614(v5, method);
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
  __int64 v536; // x1
  __int64 v537; // x1
  __int64 v538; // x1
  __int64 v539; // x1
  __int64 v540; // x1
  __int64 v541; // x1
  __int64 v542; // x1
  __int64 v543; // x1
  __int64 v544; // x1
  DataMasterBase_array *v545; // x19
  ServantMaster_o *v546; // x20
  __int64 v547; // x0
  __int64 v548; // x1
  int32_t v549; // w2
  const MethodInfo *v550; // x3
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v552; // x20
  int32_t v553; // w2
  const MethodInfo *v554; // x3
  ServantCommentMaster_o *v555; // x20
  int32_t v556; // w2
  const MethodInfo *v557; // x3
  ServantProfileMaster_o *v558; // x20
  int32_t v559; // w2
  const MethodInfo *v560; // x3
  WarMaster_o *v561; // x20
  int32_t v562; // w2
  const MethodInfo *v563; // x3
  UserMaster_o *v564; // x20
  int32_t v565; // w2
  const MethodInfo *v566; // x3
  UserGameMaster_o *v567; // x20
  int32_t v568; // w2
  const MethodInfo *v569; // x3
  TblUserMaster_o *v570; // x20
  int32_t v571; // w2
  const MethodInfo *v572; // x3
  UserItemMaster_o *v573; // x20
  int32_t v574; // w2
  const MethodInfo *v575; // x3
  UserServantMaster_o *v576; // x20
  int32_t v577; // w2
  const MethodInfo *v578; // x3
  UserServantStorageMaster_o *v579; // x20
  int32_t v580; // w2
  const MethodInfo *v581; // x3
  UserAccessaryMaster_o *v582; // x20
  int32_t v583; // w2
  const MethodInfo *v584; // x3
  UserQuestMaster_o *v585; // x20
  int32_t v586; // w2
  const MethodInfo *v587; // x3
  BattleMaster_o *v588; // x20
  int32_t v589; // w2
  const MethodInfo *v590; // x3
  OtherUserGameMaster_o *v591; // x20
  int32_t v592; // w2
  const MethodInfo *v593; // x3
  TblFriendMaster_o *v594; // x20
  int32_t v595; // w2
  const MethodInfo *v596; // x3
  AreaMaster_o *v597; // x20
  int32_t v598; // w2
  const MethodInfo *v599; // x3
  ServantCardMaster_o *v600; // x20
  int32_t v601; // w2
  const MethodInfo *v602; // x3
  EventMaster_o *v603; // x20
  int32_t v604; // w2
  const MethodInfo *v605; // x3
  ItemMaster_o *v606; // x20
  int32_t v607; // w2
  const MethodInfo *v608; // x3
  QuestMaster_o *v609; // x20
  int32_t v610; // w2
  const MethodInfo *v611; // x3
  QuestAddMaster_o *v612; // x20
  int32_t v613; // w2
  const MethodInfo *v614; // x3
  QuestReleaseMaster_o *v615; // x20
  int32_t v616; // w2
  const MethodInfo *v617; // x3
  QuestDateRangeMaster_o *v618; // x20
  int32_t v619; // w2
  const MethodInfo *v620; // x3
  QuestPhaseMaster_o *v621; // x20
  int32_t v622; // w2
  const MethodInfo *v623; // x3
  QuestPhaseDetailMaster_o *v624; // x20
  int32_t v625; // w2
  const MethodInfo *v626; // x3
  QuestGroupMaster_o *v627; // x20
  int32_t v628; // w2
  const MethodInfo *v629; // x3
  QuestRandomGroupMaster_o *v630; // x20
  int32_t v631; // w2
  const MethodInfo *v632; // x3
  QuestConsumeItemMaster_o *v633; // x20
  int32_t v634; // w2
  const MethodInfo *v635; // x3
  QuestMessageMaster_o *v636; // x20
  int32_t v637; // w2
  const MethodInfo *v638; // x3
  UserQuestInfoMaster_o *v639; // x20
  int32_t v640; // w2
  const MethodInfo *v641; // x3
  UserQuestRecordMaster_o *v642; // x20
  int32_t v643; // w2
  const MethodInfo *v644; // x3
  ViewQuestInfoMaster_o *v645; // x20
  int32_t v646; // w2
  const MethodInfo *v647; // x3
  ViewEnemyMaster_o *v648; // x20
  int32_t v649; // w2
  const MethodInfo *v650; // x3
  ViewQuestEnemyInfoMaster_o *v651; // x20
  int32_t v652; // w2
  const MethodInfo *v653; // x3
  BlankEarthSpotMaster_o *v654; // x20
  int32_t v655; // w2
  const MethodInfo *v656; // x3
  BlankEarthSpotAddMaster_o *v657; // x20
  int32_t v658; // w2
  const MethodInfo *v659; // x3
  SpotMaster_o *v660; // x20
  int32_t v661; // w2
  const MethodInfo *v662; // x3
  SpotImageMaster_o *v663; // x20
  int32_t v664; // w2
  const MethodInfo *v665; // x3
  SpotRoadMaster_o *v666; // x20
  int32_t v667; // w2
  const MethodInfo *v668; // x3
  SpotPathMaster_o *v669; // x20
  int32_t v670; // w2
  const MethodInfo *v671; // x3
  SpotAddMaster_o *v672; // x20
  int32_t v673; // w2
  const MethodInfo *v674; // x3
  MapGimmickMaster_o *v675; // x20
  int32_t v676; // w2
  const MethodInfo *v677; // x3
  GiftMaster_o *v678; // x20
  int32_t v679; // w2
  const MethodInfo *v680; // x3
  GiftAddMaster_o *v681; // x20
  int32_t v682; // w2
  const MethodInfo *v683; // x3
  ShopMaster_o *v684; // x20
  int32_t v685; // w2
  const MethodInfo *v686; // x3
  StoneShopMaster_o *v687; // x20
  int32_t v688; // w2
  const MethodInfo *v689; // x3
  BankShopMaster_o *v690; // x20
  int32_t v691; // w2
  const MethodInfo *v692; // x3
  ShopScriptMaster_o *v693; // x20
  int32_t v694; // w2
  const MethodInfo *v695; // x3
  StageMaster_o *v696; // x20
  int32_t v697; // w2
  const MethodInfo *v698; // x3
  ServantGroupMaster_o *v699; // x20
  int32_t v700; // w2
  const MethodInfo *v701; // x3
  ServantLimitMaster_o *v702; // x20
  int32_t v703; // w2
  const MethodInfo *v704; // x3
  ServantLimitAddMaster_o *v705; // x20
  int32_t v706; // w2
  const MethodInfo *v707; // x3
  ServantSkillMaster_o *v708; // x20
  int32_t v709; // w2
  const MethodInfo *v710; // x3
  ServantPassiveSkillMaster_o *v711; // x20
  int32_t v712; // w2
  const MethodInfo *v713; // x3
  BgmMaster_o *v714; // x20
  int32_t v715; // w2
  const MethodInfo *v716; // x3
  ServantScriptMaster_o *v717; // x20
  int32_t v718; // w2
  const MethodInfo *v719; // x3
  NewsMaster_o *v720; // x20
  int32_t v721; // w2
  const MethodInfo *v722; // x3
  TelopMaster_o *v723; // x20
  int32_t v724; // w2
  const MethodInfo *v725; // x3
  UserExpMaster_o *v726; // x20
  int32_t v727; // w2
  const MethodInfo *v728; // x3
  TreasureDvcMaster_o *v729; // x20
  int32_t v730; // w2
  const MethodInfo *v731; // x3
  ServantTreasureDvcMaster_o *v732; // x20
  int32_t v733; // w2
  const MethodInfo *v734; // x3
  SkillMaster_o *v735; // x20
  int32_t v736; // w2
  const MethodInfo *v737; // x3
  SkillLvMaster_o *v738; // x20
  int32_t v739; // w2
  const MethodInfo *v740; // x3
  SkillDetailMaster_o *v741; // x20
  int32_t v742; // w2
  const MethodInfo *v743; // x3
  CommandSpellMaster_o *v744; // x20
  int32_t v745; // w2
  const MethodInfo *v746; // x3
  EquipMaster_o *v747; // x20
  int32_t v748; // w2
  const MethodInfo *v749; // x3
  EquipExpMaster_o *v750; // x20
  int32_t v751; // w2
  const MethodInfo *v752; // x3
  EquipSkillMaster_o *v753; // x20
  int32_t v754; // w2
  const MethodInfo *v755; // x3
  SubEquipMaster_o *v756; // x20
  int32_t v757; // w2
  const MethodInfo *v758; // x3
  AccessaryMaster_o *v759; // x20
  int32_t v760; // w2
  const MethodInfo *v761; // x3
  UserPresentBoxMaster_o *v762; // x20
  int32_t v763; // w2
  const MethodInfo *v764; // x3
  UserDeckMaster_o *v765; // x20
  int32_t v766; // w2
  const MethodInfo *v767; // x3
  UserSubEquipMaster_o *v768; // x20
  int32_t v769; // w2
  const MethodInfo *v770; // x3
  GachaMaster_o *v771; // x20
  int32_t v772; // w2
  const MethodInfo *v773; // x3
  GachaImageMaster_o *v774; // x20
  int32_t v775; // w2
  const MethodInfo *v776; // x3
  UserGachaMaster_o *v777; // x20
  int32_t v778; // w2
  const MethodInfo *v779; // x3
  UserEquipMaster_o *v780; // x20
  int32_t v781; // w2
  const MethodInfo *v782; // x3
  UserServantCollectionMaster_o *v783; // x20
  int32_t v784; // w2
  const MethodInfo *v785; // x3
  FriendshipMaster_o *v786; // x20
  int32_t v787; // w2
  const MethodInfo *v788; // x3
  GachaTicketMaster_o *v789; // x20
  int32_t v790; // w2
  const MethodInfo *v791; // x3
  UserFormationMaster_o *v792; // x20
  int32_t v793; // w2
  const MethodInfo *v794; // x3
  FunctionMaster_o *v795; // x20
  int32_t v796; // w2
  const MethodInfo *v797; // x3
  BuffMaster_o *v798; // x20
  int32_t v799; // w2
  const MethodInfo *v800; // x3
  GachaReleaseMaster_o *v801; // x20
  int32_t v802; // w2
  const MethodInfo *v803; // x3
  CombineQpMaster_o *v804; // x20
  int32_t v805; // w2
  const MethodInfo *v806; // x3
  CombineMaterialMaster_o *v807; // x20
  int32_t v808; // w2
  const MethodInfo *v809; // x3
  EventCombineMaster_o *v810; // x20
  int32_t v811; // w2
  const MethodInfo *v812; // x3
  ServantExpMaster_o *v813; // x20
  int32_t v814; // w2
  const MethodInfo *v815; // x3
  CombineSkillMaster_o *v816; // x20
  int32_t v817; // w2
  const MethodInfo *v818; // x3
  CombineTdMaster_o *v819; // x20
  int32_t v820; // w2
  const MethodInfo *v821; // x3
  EventQuestMaster_o *v822; // x20
  int32_t v823; // w2
  const MethodInfo *v824; // x3
  EventCampaignMaster_o *v825; // x20
  int32_t v826; // w2
  const MethodInfo *v827; // x3
  IllustratorMaster_o *v828; // x20
  int32_t v829; // w2
  const MethodInfo *v830; // x3
  CvMaster_o *v831; // x20
  int32_t v832; // w2
  const MethodInfo *v833; // x3
  TreasureDvcLvMaster_o *v834; // x20
  int32_t v835; // w2
  const MethodInfo *v836; // x3
  TreasureDvcDetailMaster_o *v837; // x20
  int32_t v838; // w2
  const MethodInfo *v839; // x3
  UserFollowerMaster_o *v840; // x20
  int32_t v841; // w2
  const MethodInfo *v842; // x3
  NpcFollowerMaster_o *v843; // x20
  int32_t v844; // w2
  const MethodInfo *v845; // x3
  NpcServantFollowerMaster_o *v846; // x20
  int32_t v847; // w2
  const MethodInfo *v848; // x3
  UserEventMaster_o *v849; // x20
  int32_t v850; // w2
  const MethodInfo *v851; // x3
  UserShopMaster_o *v852; // x20
  int32_t v853; // w2
  const MethodInfo *v854; // x3
  UserContinueMaster_o *v855; // x20
  int32_t v856; // w2
  const MethodInfo *v857; // x3
  ConstantMaster_o *v858; // x20
  int32_t v859; // w2
  const MethodInfo *v860; // x3
  ConstantLongMaster_o *v861; // x20
  int32_t v862; // w2
  const MethodInfo *v863; // x3
  ConstantStrMaster_o *v864; // x20
  int32_t v865; // w2
  const MethodInfo *v866; // x3
  AiMaster_o *v867; // x20
  int32_t v868; // w2
  const MethodInfo *v869; // x3
  AiActMaster_o *v870; // x20
  int32_t v871; // w2
  const MethodInfo *v872; // x3
  AttriRelationMaster_o *v873; // x20
  int32_t v874; // w2
  const MethodInfo *v875; // x3
  ClassRelationMaster_o *v876; // x20
  int32_t v877; // w2
  const MethodInfo *v878; // x3
  EffectMaster_o *v879; // x20
  int32_t v880; // w2
  const MethodInfo *v881; // x3
  EquipImageMaster_o *v882; // x20
  int32_t v883; // w2
  const MethodInfo *v884; // x3
  ServantVoiceMaster_o *v885; // x20
  int32_t v886; // w2
  const MethodInfo *v887; // x3
  CombineLimitMaster_o *v888; // x20
  int32_t v889; // w2
  const MethodInfo *v890; // x3
  CardMaster_o *v891; // x20
  int32_t v892; // w2
  const MethodInfo *v893; // x3
  CombineQpSvtEquipMaster_o *v894; // x20
  int32_t v895; // w2
  const MethodInfo *v896; // x3
  ServantRarityMaster_o *v897; // x20
  int32_t v898; // w2
  const MethodInfo *v899; // x3
  SetItemMaster_o *v900; // x20
  int32_t v901; // w2
  const MethodInfo *v902; // x3
  RecoverMaster_o *v903; // x20
  int32_t v904; // w2
  const MethodInfo *v905; // x3
  BannerMaster_o *v906; // x20
  int32_t v907; // w2
  const MethodInfo *v908; // x3
  ShopReleaseMaster_o *v909; // x20
  int32_t v910; // w2
  const MethodInfo *v911; // x3
  EventRewardMaster_o *v912; // x20
  int32_t v913; // w2
  const MethodInfo *v914; // x3
  EventDetailMaster_o *v915; // x20
  int32_t v916; // w2
  const MethodInfo *v917; // x3
  EventServantMaster_o *v918; // x20
  int32_t v919; // w2
  const MethodInfo *v920; // x3
  BoxGachaMaster_o *v921; // x20
  int32_t v922; // w2
  const MethodInfo *v923; // x3
  BoxGachaBaseMaster_o *v924; // x20
  int32_t v925; // w2
  const MethodInfo *v926; // x3
  BoxGachaTalkMaster_o *v927; // x20
  int32_t v928; // w2
  const MethodInfo *v929; // x3
  UserBoxGachaMaster_o *v930; // x20
  int32_t v931; // w2
  const MethodInfo *v932; // x3
  BoxGachaHistoryMaster_o *v933; // x20
  int32_t v934; // w2
  const MethodInfo *v935; // x3
  BattleBgMaster_o *v936; // x20
  int32_t v937; // w2
  const MethodInfo *v938; // x3
  TipsBattleMaster_o *v939; // x20
  int32_t v940; // w2
  const MethodInfo *v941; // x3
  UserLoginMaster_o *v942; // x20
  int32_t v943; // w2
  const MethodInfo *v944; // x3
  VoiceMaster_o *v945; // x20
  int32_t v946; // w2
  const MethodInfo *v947; // x3
  EventRewardExtraMaster_o *v948; // x20
  int32_t v949; // w2
  const MethodInfo *v950; // x3
  EventMissionMaster_o *v951; // x20
  int32_t v952; // w2
  const MethodInfo *v953; // x3
  EventMissionActionMaster_o *v954; // x20
  int32_t v955; // w2
  const MethodInfo *v956; // x3
  EventMissionActionAddMaster_o *v957; // x20
  int32_t v958; // w2
  const MethodInfo *v959; // x3
  EventMissionConditionMaster_o *v960; // x20
  int32_t v961; // w2
  const MethodInfo *v962; // x3
  EventMissionCondDetailMaster_o *v963; // x20
  int32_t v964; // w2
  const MethodInfo *v965; // x3
  EventMissionAddMaster_o *v966; // x20
  int32_t v967; // w2
  const MethodInfo *v968; // x3
  CompleteMissionMaster_o *v969; // x20
  int32_t v970; // w2
  const MethodInfo *v971; // x3
  EventRewardSetMaster_o *v972; // x20
  int32_t v973; // w2
  const MethodInfo *v974; // x3
  UserEventMissionMaster_o *v975; // x20
  int32_t v976; // w2
  const MethodInfo *v977; // x3
  UserEventMissionCondDetailMaster_o *v978; // x20
  int32_t v979; // w2
  const MethodInfo *v980; // x3
  BoxGachaBaseDetailMaster_o *v981; // x20
  int32_t v982; // w2
  const MethodInfo *v983; // x3
  UserServantLeaderMaster_o *v984; // x20
  int32_t v985; // w2
  const MethodInfo *v986; // x3
  ClosedMessageMaster_o *v987; // x20
  int32_t v988; // w2
  const MethodInfo *v989; // x3
  FunctionGroupMaster_o *v990; // x20
  int32_t v991; // w2
  const MethodInfo *v992; // x3
  EventRaidMaster_o *v993; // x20
  int32_t v994; // w2
  const MethodInfo *v995; // x3
  TotalEventRaidMaster_o *v996; // x20
  int32_t v997; // w2
  const MethodInfo *v998; // x3
  UserEventRaidMaster_o *v999; // x20
  int32_t v1000; // w2
  const MethodInfo *v1001; // x3
  EventPointMaster_o *v1002; // x20
  int32_t v1003; // w2
  const MethodInfo *v1004; // x3
  EventPointGroupMaster_o *v1005; // x20
  int32_t v1006; // w2
  const MethodInfo *v1007; // x3
  TotalEventPointMaster_o *v1008; // x20
  int32_t v1009; // w2
  const MethodInfo *v1010; // x3
  UserEventPointMaster_o *v1011; // x20
  int32_t v1012; // w2
  const MethodInfo *v1013; // x3
  EventPointUpperMaster_o *v1014; // x20
  int32_t v1015; // w2
  const MethodInfo *v1016; // x3
  EventPointUpperReleaseMaster_o *v1017; // x20
  int32_t v1018; // w2
  const MethodInfo *v1019; // x3
  EventRaceMaster_o *v1020; // x20
  int32_t v1021; // w2
  const MethodInfo *v1022; // x3
  EventRaceResultMaster_o *v1023; // x20
  int32_t v1024; // w2
  const MethodInfo *v1025; // x3
  QuestRacePointMaster_o *v1026; // x20
  int32_t v1027; // w2
  const MethodInfo *v1028; // x3
  UserEventRaceMaster_o *v1029; // x20
  int32_t v1030; // w2
  const MethodInfo *v1031; // x3
  EventScriptMaster_o *v1032; // x20
  int32_t v1033; // w2
  const MethodInfo *v1034; // x3
  EventScriptReleaseMaster_o *v1035; // x20
  int32_t v1036; // w2
  const MethodInfo *v1037; // x3
  UserPresentHistoryMaster_o *v1038; // x20
  int32_t v1039; // w2
  const MethodInfo *v1040; // x3
  MstMissionMaster_o *v1041; // x20
  int32_t v1042; // w2
  const MethodInfo *v1043; // x3
  ServantExceedMaster_o *v1044; // x20
  int32_t v1045; // w2
  const MethodInfo *v1046; // x3
  PartialMaintenanceMaster_o *v1047; // x20
  int32_t v1048; // w2
  const MethodInfo *v1049; // x3
  GuideMaster_o *v1050; // x20
  int32_t v1051; // w2
  const MethodInfo *v1052; // x3
  MstMissionDisplayInfoMaster_o *v1053; // x20
  int32_t v1054; // w2
  const MethodInfo *v1055; // x3
  GachaGroupMaster_o *v1056; // x20
  int32_t v1057; // w2
  const MethodInfo *v1058; // x3
  QuestResetMaster_o *v1059; // x20
  int32_t v1060; // w2
  const MethodInfo *v1061; // x3
  WarAddMaster_o *v1062; // x20
  int32_t v1063; // w2
  const MethodInfo *v1064; // x3
  EventItemDisplayMaster_o *v1065; // x20
  int32_t v1066; // w2
  const MethodInfo *v1067; // x3
  EventItemDisplayGroupMaster_o *v1068; // x20
  int32_t v1069; // w2
  const MethodInfo *v1070; // x3
  EventItemDisplayReleaseMaster_o *v1071; // x20
  int32_t v1072; // w2
  const MethodInfo *v1073; // x3
  EventTutorialMaster_o *v1074; // x20
  int32_t v1075; // w2
  const MethodInfo *v1076; // x3
  EventTutorialCondMaster_o *v1077; // x20
  int32_t v1078; // w2
  const MethodInfo *v1079; // x3
  VoiceReleaseMaster_o *v1080; // x20
  int32_t v1081; // w2
  const MethodInfo *v1082; // x3
  EventSuperBossMaster_o *v1083; // x20
  int32_t v1084; // w2
  const MethodInfo *v1085; // x3
  UserSuperBossMaster_o *v1086; // x20
  int32_t v1087; // w2
  const MethodInfo *v1088; // x3
  QuestScriptMaster_o *v1089; // x20
  int32_t v1090; // w2
  const MethodInfo *v1091; // x3
  QuestScriptReleaseMaster_o *v1092; // x20
  int32_t v1093; // w2
  const MethodInfo *v1094; // x3
  MaterialFolderMaster_o *v1095; // x20
  int32_t v1096; // w2
  const MethodInfo *v1097; // x3
  RestrictionMaster_o *v1098; // x20
  int32_t v1099; // w2
  const MethodInfo *v1100; // x3
  QuestRestrictionMaster_o *v1101; // x20
  int32_t v1102; // w2
  const MethodInfo *v1103; // x3
  ServantVoiceRelationMaster_o *v1104; // x20
  int32_t v1105; // w2
  const MethodInfo *v1106; // x3
  ShopDetailMaster_o *v1107; // x20
  int32_t v1108; // w2
  const MethodInfo *v1109; // x3
  ServantScriptAddMaster_o *v1110; // x20
  int32_t v1111; // w2
  const MethodInfo *v1112; // x3
  CombineMaster_o *v1113; // x20
  int32_t v1114; // w2
  const MethodInfo *v1115; // x3
  AiFieldMaster_o *v1116; // x20
  int32_t v1117; // w2
  const MethodInfo *v1118; // x3
  ServantCommentAddMaster_o *v1119; // x20
  int32_t v1120; // w2
  const MethodInfo *v1121; // x3
  EventFilterMaster_o *v1122; // x20
  int32_t v1123; // w2
  const MethodInfo *v1124; // x3
  UserSupportDeckMaster_o *v1125; // x20
  int32_t v1126; // w2
  const MethodInfo *v1127; // x3
  EventRewardSceneMaster_o *v1128; // x20
  int32_t v1129; // w2
  const MethodInfo *v1130; // x3
  EventVoicePlayMaster_o *v1131; // x20
  int32_t v1132; // w2
  const MethodInfo *v1133; // x3
  GachaSubMaster_o *v1134; // x20
  int32_t v1135; // w2
  const MethodInfo *v1136; // x3
  GachaDetailMaster_o *v1137; // x20
  int32_t v1138; // w2
  const MethodInfo *v1139; // x3
  GachaBaseCollateralMaster_o *v1140; // x20
  int32_t v1141; // w2
  const MethodInfo *v1142; // x3
  GachaAdjustAddMaster_o *v1143; // x20
  int32_t v1144; // w2
  const MethodInfo *v1145; // x3
  GachaBonusSelectMaster_o *v1146; // x20
  int32_t v1147; // w2
  const MethodInfo *v1148; // x3
  GachaBonusSelectLineupMaster_o *v1149; // x20
  int32_t v1150; // w2
  const MethodInfo *v1151; // x3
  ServantChangeMaster_o *v1152; // x20
  int32_t v1153; // w2
  const MethodInfo *v1154; // x3
  VoiceCondMaster_o *v1155; // x20
  int32_t v1156; // w2
  const MethodInfo *v1157; // x3
  BgmReleaseMaster_o *v1158; // x20
  int32_t v1159; // w2
  const MethodInfo *v1160; // x3
  MyRoomAddMaster_o *v1161; // x20
  int32_t v1162; // w2
  const MethodInfo *v1163; // x3
  ShopActionMaster_o *v1164; // x20
  int32_t v1165; // w2
  const MethodInfo *v1166; // x3
  EventRewardSceneReleaseMaster_o *v1167; // x20
  int32_t v1168; // w2
  const MethodInfo *v1169; // x3
  QuestBehaviorMaster_o *v1170; // x20
  int32_t v1171; // w2
  const MethodInfo *v1172; // x3
  MapMaster_o *v1173; // x20
  int32_t v1174; // w2
  const MethodInfo *v1175; // x3
  MapCondMaster_o *v1176; // x20
  int32_t v1177; // w2
  const MethodInfo *v1178; // x3
  MapButtonMaster_o *v1179; // x20
  int32_t v1180; // w2
  const MethodInfo *v1181; // x3
  BannerAddMaster_o *v1182; // x20
  int32_t v1183; // w2
  const MethodInfo *v1184; // x3
  EventAddMaster_o *v1185; // x20
  int32_t v1186; // w2
  const MethodInfo *v1187; // x3
  TotalLoginMaster_o *v1188; // x20
  int32_t v1189; // w2
  const MethodInfo *v1190; // x3
  ServantFilterMaster_o *v1191; // x20
  int32_t v1192; // w2
  const MethodInfo *v1193; // x3
  CombineCostumeMaster_o *v1194; // x20
  int32_t v1195; // w2
  const MethodInfo *v1196; // x3
  ServantCostumeMaster_o *v1197; // x20
  int32_t v1198; // w2
  const MethodInfo *v1199; // x3
  ServantCostumeReleaseMaster_o *v1200; // x20
  int32_t v1201; // w2
  const MethodInfo *v1202; // x3
  StaffPhotoMaster_o *v1203; // x20
  int32_t v1204; // w2
  const MethodInfo *v1205; // x3
  StaffPhotoCostumeMaster_o *v1206; // x20
  int32_t v1207; // w2
  const MethodInfo *v1208; // x3
  UserFriendRequestHistoryMaster_o *v1209; // x20
  int32_t v1210; // w2
  const MethodInfo *v1211; // x3
  UserBlacklistMaster_o *v1212; // x20
  int32_t v1213; // w2
  const MethodInfo *v1214; // x3
  ItemSelectMaster_o *v1215; // x20
  int32_t v1216; // w2
  const MethodInfo *v1217; // x3
  TotalEventRaceMaster_o *v1218; // x20
  int32_t v1219; // w2
  const MethodInfo *v1220; // x3
  EventPointGroupAddMaster_o *v1221; // x20
  int32_t v1222; // w2
  const MethodInfo *v1223; // x3
  VoicePlayGroupMaster_o *v1224; // x20
  int32_t v1225; // w2
  const MethodInfo *v1226; // x3
  VoicePlayCondMaster_o *v1227; // x20
  int32_t v1228; // w2
  const MethodInfo *v1229; // x3
  GachaStoryAdjustMaster_o *v1230; // x20
  int32_t v1231; // w2
  const MethodInfo *v1232; // x3
  ServantFlagMaster_o *v1233; // x20
  int32_t v1234; // w2
  const MethodInfo *v1235; // x3
  ServantFlagReleaseMaster_o *v1236; // x20
  int32_t v1237; // w2
  const MethodInfo *v1238; // x3
  EventLocationCampaignMaster_o *v1239; // x20
  int32_t v1240; // w2
  const MethodInfo *v1241; // x3
  CampaignInfoMaster_o *v1242; // x20
  int32_t v1243; // w2
  const MethodInfo *v1244; // x3
  DialogMessageMaster_o *v1245; // x20
  int32_t v1246; // w2
  const MethodInfo *v1247; // x3
  ServantIndividualityMaster_o *v1248; // x20
  int32_t v1249; // w2
  const MethodInfo *v1250; // x3
  BoardMessageMaster_o *v1251; // x20
  int32_t v1252; // w2
  const MethodInfo *v1253; // x3
  BoardMessageReleaseMaster_o *v1254; // x20
  int32_t v1255; // w2
  const MethodInfo *v1256; // x3
  EventServantFatigueMaster_o *v1257; // x20
  int32_t v1258; // w2
  const MethodInfo *v1259; // x3
  UserEventDeckMaster_o *v1260; // x20
  int32_t v1261; // w2
  const MethodInfo *v1262; // x3
  EventTowerMaster_o *v1263; // x20
  int32_t v1264; // w2
  const MethodInfo *v1265; // x3
  EventTowerRewardMaster_o *v1266; // x20
  int32_t v1267; // w2
  const MethodInfo *v1268; // x3
  EventBulletinBoardMaster_o *v1269; // x20
  int32_t v1270; // w2
  const MethodInfo *v1271; // x3
  EventBulletinBoardReleaseMaster_o *v1272; // x20
  int32_t v1273; // w2
  const MethodInfo *v1274; // x3
  EventFactoryMaster_o *v1275; // x20
  int32_t v1276; // w2
  const MethodInfo *v1277; // x3
  ShopGroupMaster_o *v1278; // x20
  int32_t v1279; // w2
  const MethodInfo *v1280; // x3
  AuraEffectMaster_o *v1281; // x20
  int32_t v1282; // w2
  const MethodInfo *v1283; // x3
  AuraEffectPosOverwriteMaster_o *v1284; // x20
  int32_t v1285; // w2
  const MethodInfo *v1286; // x3
  UserEventMissionFixMaster_o *v1287; // x20
  int32_t v1288; // w2
  const MethodInfo *v1289; // x3
  NotEndEventMissionFixMaster_o *v1290; // x20
  int32_t v1291; // w2
  const MethodInfo *v1292; // x3
  EnemyMstMaster_o *v1293; // x20
  int32_t v1294; // w2
  const MethodInfo *v1295; // x3
  EnemyMstBattleMaster_o *v1296; // x20
  int32_t v1297; // w2
  const MethodInfo *v1298; // x3
  ServantSkillReleaseMaster_o *v1299; // x20
  int32_t v1300; // w2
  const MethodInfo *v1301; // x3
  ServantPassiveSkillReleaseMaster_o *v1302; // x20
  int32_t v1303; // w2
  const MethodInfo *v1304; // x3
  ServantTreasureDeviceReleaseMaster_o *v1305; // x20
  int32_t v1306; // w2
  const MethodInfo *v1307; // x3
  MapGimmickReleaseMaster_o *v1308; // x20
  int32_t v1309; // w2
  const MethodInfo *v1310; // x3
  CommandCodeMaster_o *v1311; // x20
  int32_t v1312; // w2
  const MethodInfo *v1313; // x3
  ServantCommandCodeUnlockMaster_o *v1314; // x20
  int32_t v1315; // w2
  const MethodInfo *v1316; // x3
  UserCommandCodeMaster_o *v1317; // x20
  int32_t v1318; // w2
  const MethodInfo *v1319; // x3
  UserCommandCodeCollectionMaster_o *v1320; // x20
  int32_t v1321; // w2
  const MethodInfo *v1322; // x3
  UserServantCommandCodeMaster_o *v1323; // x20
  int32_t v1324; // w2
  const MethodInfo *v1325; // x3
  UserServantCommandCardMaster_o *v1326; // x20
  int32_t v1327; // w2
  const MethodInfo *v1328; // x3
  CommandCardRankParamMaster_o *v1329; // x20
  int32_t v1330; // w2
  const MethodInfo *v1331; // x3
  CommandCodeSkillMaster_o *v1332; // x20
  int32_t v1333; // w2
  const MethodInfo *v1334; // x3
  CommandCodeSkillReleaseMaster_o *v1335; // x20
  int32_t v1336; // w2
  const MethodInfo *v1337; // x3
  CommandCodeCommentMaster_o *v1338; // x20
  int32_t v1339; // w2
  const MethodInfo *v1340; // x3
  EventStatusMaster_o *v1341; // x20
  int32_t v1342; // w2
  const MethodInfo *v1343; // x3
  EventStatusQuestMaster_o *v1344; // x20
  int32_t v1345; // w2
  const MethodInfo *v1346; // x3
  CommonRestrictionMaster_o *v1347; // x20
  int32_t v1348; // w2
  const MethodInfo *v1349; // x3
  EventPointBuffMaster_o *v1350; // x20
  int32_t v1351; // w2
  const MethodInfo *v1352; // x3
  UserFollowMaster_o *v1353; // x20
  int32_t v1354; // w2
  const MethodInfo *v1355; // x3
  EventRewardGuideReleaseMaster_o *v1356; // x20
  int32_t v1357; // w2
  const MethodInfo *v1358; // x3
  NpcServantEquipMaster_o *v1359; // x20
  int32_t v1360; // w2
  const MethodInfo *v1361; // x3
  EventCampaignReleaseMaster_o *v1362; // x20
  int32_t v1363; // w2
  const MethodInfo *v1364; // x3
  ServantMaterialFolderMaster_o *v1365; // x20
  int32_t v1366; // w2
  const MethodInfo *v1367; // x3
  EventEquipSkillReleaseMaster_o *v1368; // x20
  int32_t v1369; // w2
  const MethodInfo *v1370; // x3
  EventPointActivityMaster_o *v1371; // x20
  int32_t v1372; // w2
  const MethodInfo *v1373; // x3
  FunctionCategoryMaster_o *v1374; // x20
  int32_t v1375; // w2
  const MethodInfo *v1376; // x3
  QuestPickupMaster_o *v1377; // x20
  int32_t v1378; // w2
  const MethodInfo *v1379; // x3
  EventUiMaster_o *v1380; // x20
  int32_t v1381; // w2
  const MethodInfo *v1382; // x3
  EventUiReleaseMaster_o *v1383; // x20
  int32_t v1384; // w2
  const MethodInfo *v1385; // x3
  EventUiValueMaster_o *v1386; // x20
  int32_t v1387; // w2
  const MethodInfo *v1388; // x3
  EventConquestRewardMaster_o *v1389; // x20
  int32_t v1390; // w2
  const MethodInfo *v1391; // x3
  NpcFollowerReleaseMaster_o *v1392; // x20
  int32_t v1393; // w2
  const MethodInfo *v1394; // x3
  EventBonusFilterMaster_o *v1395; // x20
  int32_t v1396; // w2
  const MethodInfo *v1397; // x3
  EventBonusFilterGroupInfoMaster_o *v1398; // x20
  int32_t v1399; // w2
  const MethodInfo *v1400; // x3
  EventBonusFilterGroupMemberMaster_o *v1401; // x20
  int32_t v1402; // w2
  const MethodInfo *v1403; // x3
  UserGachaExtraCountMaster_o *v1404; // x20
  int32_t v1405; // w2
  const MethodInfo *v1406; // x3
  PrivilegeMaster_o *v1407; // x20
  int32_t v1408; // w2
  const MethodInfo *v1409; // x3
  UserPrivilegeMaster_o *v1410; // x20
  int32_t v1411; // w2
  const MethodInfo *v1412; // x3
  UserQuestRouteMaster_o *v1413; // x20
  int32_t v1414; // w2
  const MethodInfo *v1415; // x3
  EventBossStatusUiMaster_o *v1416; // x20
  int32_t v1417; // w2
  const MethodInfo *v1418; // x3
  CommonReleaseMaster_o *v1419; // x20
  int32_t v1420; // w2
  const MethodInfo *v1421; // x3
  QuestSpotReleaseMaster_o *v1422; // x20
  int32_t v1423; // w2
  const MethodInfo *v1424; // x3
  VoiceMaterialCondMaster_o *v1425; // x20
  int32_t v1426; // w2
  const MethodInfo *v1427; // x3
  ClassRelationOverwriteMaster_o *v1428; // x20
  int32_t v1429; // w2
  const MethodInfo *v1430; // x3
  EventGroupMaster_o *v1431; // x20
  int32_t v1432; // w2
  const MethodInfo *v1433; // x3
  TotalBoxGachaMaster_o *v1434; // x20
  int32_t v1435; // w2
  const MethodInfo *v1436; // x3
  ServantTreasureDeviceDamageMaster_o *v1437; // x20
  int32_t v1438; // w2
  const MethodInfo *v1439; // x3
  UserEventServantFatigueMaster_o *v1440; // x20
  int32_t v1441; // w2
  const MethodInfo *v1442; // x3
  EventRewardBgMaster_o *v1443; // x20
  int32_t v1444; // w2
  const MethodInfo *v1445; // x3
  EventFatigueRecoveryMaster_o *v1446; // x20
  int32_t v1447; // w2
  const MethodInfo *v1448; // x3
  EventBoostItemUsedMaster_o *v1449; // x20
  int32_t v1450; // w2
  const MethodInfo *v1451; // x3
  StatusEffectPosOverwriteMaster_o *v1452; // x20
  int32_t v1453; // w2
  const MethodInfo *v1454; // x3
  QuestPhaseDetailAddMaster_o *v1455; // x20
  int32_t v1456; // w2
  const MethodInfo *v1457; // x3
  VoiceClosedMessageMaster_o *v1458; // x20
  int32_t v1459; // w2
  const MethodInfo *v1460; // x3
  ReprintStageMaster_o *v1461; // x20
  int32_t v1462; // w2
  const MethodInfo *v1463; // x3
  UserCombineExpMaster_o *v1464; // x20
  int32_t v1465; // w2
  const MethodInfo *v1466; // x3
  EventBoardGameCellMaster_o *v1467; // x20
  int32_t v1468; // w2
  const MethodInfo *v1469; // x3
  EventBoardGameTokenMaster_o *v1470; // x20
  int32_t v1471; // w2
  const MethodInfo *v1472; // x3
  EventBoardGameTokenRewardMaster_o *v1473; // x20
  int32_t v1474; // w2
  const MethodInfo *v1475; // x3
  UserEventBoardGameTokenMaster_o *v1476; // x20
  int32_t v1477; // w2
  const MethodInfo *v1478; // x3
  ServantAnimationOverwriteMaster_o *v1479; // x20
  int32_t v1480; // w2
  const MethodInfo *v1481; // x3
  OpeningMovieMaster_o *v1482; // x20
  int32_t v1483; // w2
  const MethodInfo *v1484; // x3
  ServantLimitSpoilerProtectionMaster_o *v1485; // x20
  int32_t v1486; // w2
  const MethodInfo *v1487; // x3
  PickupUserFollowerMaster_o *v1488; // x20
  int32_t v1489; // w2
  const MethodInfo *v1490; // x3
  ServantCollectionMaster_o *v1491; // x20
  int32_t v1492; // w2
  const MethodInfo *v1493; // x3
  GachaBehaviorMaster_o *v1494; // x20
  int32_t v1495; // w2
  const MethodInfo *v1496; // x3
  EventQuestCooltimeMaster_o *v1497; // x20
  int32_t v1498; // w2
  const MethodInfo *v1499; // x3
  UserEventQuestCooltimeMaster_o *v1500; // x20
  int32_t v1501; // w2
  const MethodInfo *v1502; // x3
  BoostMaster_o *v1503; // x20
  int32_t v1504; // w2
  const MethodInfo *v1505; // x3
  WarBoardMaster_o *v1506; // x20
  int32_t v1507; // w2
  const MethodInfo *v1508; // x3
  WarBoardSquareMaster_o *v1509; // x20
  int32_t v1510; // w2
  const MethodInfo *v1511; // x3
  WarBoardRoadMaster_o *v1512; // x20
  int32_t v1513; // w2
  const MethodInfo *v1514; // x3
  WarBoardStageMaster_o *v1515; // x20
  int32_t v1516; // w2
  const MethodInfo *v1517; // x3
  WarBoardActionPointMaster_o *v1518; // x20
  int32_t v1519; // w2
  const MethodInfo *v1520; // x3
  WarBoardActionTrendMaster_o *v1521; // x20
  int32_t v1522; // w2
  const MethodInfo *v1523; // x3
  WarBoardTacticalTrendMaster_o *v1524; // x20
  int32_t v1525; // w2
  const MethodInfo *v1526; // x3
  WarBoardStageLayoutMaster_o *v1527; // x20
  int32_t v1528; // w2
  const MethodInfo *v1529; // x3
  WarBoardStageNpcMaster_o *v1530; // x20
  int32_t v1531; // w2
  const MethodInfo *v1532; // x3
  WarBoardStageWallMaster_o *v1533; // x20
  int32_t v1534; // w2
  const MethodInfo *v1535; // x3
  WarBoardAIMaster_o *v1536; // x20
  int32_t v1537; // w2
  const MethodInfo *v1538; // x3
  WarBoardRatingBaseMaster_o *v1539; // x20
  int32_t v1540; // w2
  const MethodInfo *v1541; // x3
  WarBoardRatingOffsetMaster_o *v1542; // x20
  int32_t v1543; // w2
  const MethodInfo *v1544; // x3
  WarBoardItemMaster_o *v1545; // x20
  int32_t v1546; // w2
  const MethodInfo *v1547; // x3
  WarBoardTreasureMaster_o *v1548; // x20
  int32_t v1549; // w2
  const MethodInfo *v1550; // x3
  WarBoardQuestMaster_o *v1551; // x20
  int32_t v1552; // w2
  const MethodInfo *v1553; // x3
  WarBoardDataMaster_o *v1554; // x20
  int32_t v1555; // w2
  const MethodInfo *v1556; // x3
  WarBoardIndividualityClassMaster_o *v1557; // x20
  int32_t v1558; // w2
  const MethodInfo *v1559; // x3
  WarBoardActionTrendConditionMaster_o *v1560; // x20
  int32_t v1561; // w2
  const MethodInfo *v1562; // x3
  WarBoardActionPointClassMaster_o *v1563; // x20
  int32_t v1564; // w2
  const MethodInfo *v1565; // x3
  EventPanelMapMaster_o *v1566; // x20
  int32_t v1567; // w2
  const MethodInfo *v1568; // x3
  EventPanelMapDetailMaster_o *v1569; // x20
  int32_t v1570; // w2
  const MethodInfo *v1571; // x3
  EventPanelSpotMaster_o *v1572; // x20
  int32_t v1573; // w2
  const MethodInfo *v1574; // x3
  EventPanelScanMaster_o *v1575; // x20
  int32_t v1576; // w2
  const MethodInfo *v1577; // x3
  CommonConsumeMaster_o *v1578; // x20
  int32_t v1579; // w2
  const MethodInfo *v1580; // x3
  UserEventMapMaster_o *v1581; // x20
  int32_t v1582; // w2
  const MethodInfo *v1583; // x3
  UserEventSpotMaster_o *v1584; // x20
  int32_t v1585; // w2
  const MethodInfo *v1586; // x3
  WarGroupMaster_o *v1587; // x20
  int32_t v1588; // w2
  const MethodInfo *v1589; // x3
  ServantLimitImageMaster_o *v1590; // x20
  int32_t v1591; // w2
  const MethodInfo *v1592; // x3
  FriendshipQuestDialogInfoMaster_o *v1593; // x20
  int32_t v1594; // w2
  const MethodInfo *v1595; // x3
  QuestRestrictionInfoMaster_o *v1596; // x20
  int32_t v1597; // w2
  const MethodInfo *v1598; // x3
  AssistMaster_o *v1599; // x20
  int32_t v1600; // w2
  const MethodInfo *v1601; // x3
  WarBoardEffectMaster_o *v1602; // x20
  int32_t v1603; // w2
  const MethodInfo *v1604; // x3
  WarBoardOnboardSkillMaster_o *v1605; // x20
  int32_t v1606; // w2
  const MethodInfo *v1607; // x3
  BeforeBirthDayMaster_o *v1608; // x20
  int32_t v1609; // w2
  const MethodInfo *v1610; // x3
  LoginQuestMaster_o *v1611; // x20
  int32_t v1612; // w2
  const MethodInfo *v1613; // x3
  EventCombineCostumeMaster_o *v1614; // x20
  int32_t v1615; // w2
  const MethodInfo *v1616; // x3
  WarBoardStagePieceDetailMaster_o *v1617; // x20
  int32_t v1618; // w2
  const MethodInfo *v1619; // x3
  ServantTreasureDeviceAddMaster_o *v1620; // x20
  int32_t v1621; // w2
  const MethodInfo *v1622; // x3
  SkillAddMaster_o *v1623; // x20
  int32_t v1624; // w2
  const MethodInfo *v1625; // x3
  ServantLvDetailMaster_o *v1626; // x20
  int32_t v1627; // w2
  const MethodInfo *v1628; // x3
  GachaAppendMaster_o *v1629; // x20
  int32_t v1630; // w2
  const MethodInfo *v1631; // x3
  UserGachaDrawLogMaster_o *v1632; // x20
  int32_t v1633; // w2
  const MethodInfo *v1634; // x3
  ServantAppendPassiveSkillMaster_o *v1635; // x20
  int32_t v1636; // w2
  const MethodInfo *v1637; // x3
  UserServantAppendPassiveSkillMaster_o *v1638; // x20
  int32_t v1639; // w2
  const MethodInfo *v1640; // x3
  UserServantAppendPassiveSkillLvMaster_o *v1641; // x20
  int32_t v1642; // w2
  const MethodInfo *v1643; // x3
  SvtAppendPassiveSkillUnlockMaster_o *v1644; // x20
  int32_t v1645; // w2
  const MethodInfo *v1646; // x3
  CombineAppendPassiveSkillMaster_o *v1647; // x20
  int32_t v1648; // w2
  const MethodInfo *v1649; // x3
  SvtCoinMaster_o *v1650; // x20
  int32_t v1651; // w2
  const MethodInfo *v1652; // x3
  UserSvtCoinMaster_o *v1653; // x20
  int32_t v1654; // w2
  const MethodInfo *v1655; // x3
  ServantAddMaster_o *v1656; // x20
  int32_t v1657; // w2
  const MethodInfo *v1658; // x3
  TreasureBoxMaster_o *v1659; // x20
  int32_t v1660; // w2
  const MethodInfo *v1661; // x3
  TreasureBoxGiftMaster_o *v1662; // x20
  int32_t v1663; // w2
  const MethodInfo *v1664; // x3
  TreasureBoxTalkMaster_o *v1665; // x20
  int32_t v1666; // w2
  const MethodInfo *v1667; // x3
  UserEventExpeditionMaster_o *v1668; // x20
  int32_t v1669; // w2
  const MethodInfo *v1670; // x3
  EventExpeditionMaster_o *v1671; // x20
  int32_t v1672; // w2
  const MethodInfo *v1673; // x3
  EventExpeditionPieceMaster_o *v1674; // x20
  int32_t v1675; // w2
  const MethodInfo *v1676; // x3
  EventRecipeMaster_o *v1677; // x20
  int32_t v1678; // w2
  const MethodInfo *v1679; // x3
  EventRecipeGiftMaster_o *v1680; // x20
  int32_t v1681; // w2
  const MethodInfo *v1682; // x3
  UserEventFortificationMaster_o *v1683; // x20
  int32_t v1684; // w2
  const MethodInfo *v1685; // x3
  EventFortificationMaster_o *v1686; // x20
  int32_t v1687; // w2
  const MethodInfo *v1688; // x3
  EventFortificationDetailMaster_o *v1689; // x20
  int32_t v1690; // w2
  const MethodInfo *v1691; // x3
  EventFortificationSvtMaster_o *v1692; // x20
  int32_t v1693; // w2
  const MethodInfo *v1694; // x3
  UserServantVoicePlayedMaster_o *v1695; // x20
  int32_t v1696; // w2
  const MethodInfo *v1697; // x3
  UpdateProfileDialogInfoMaster_o *v1698; // x20
  int32_t v1699; // w2
  const MethodInfo *v1700; // x3
  SvtMaterialTdMaster_o *v1701; // x20
  int32_t v1702; // w2
  const MethodInfo *v1703; // x3
  BattleMasterImageMaster_o *v1704; // x20
  int32_t v1705; // w2
  const MethodInfo *v1706; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v1707; // x20
  int32_t v1708; // w2
  const MethodInfo *v1709; // x3
  UserEventRandomMissionMaster_o *v1710; // x20
  int32_t v1711; // w2
  const MethodInfo *v1712; // x3
  EventProgressValueMaster_o *v1713; // x20
  int32_t v1714; // w2
  const MethodInfo *v1715; // x3
  SvtMultiPortraitMaster_o *v1716; // x20
  int32_t v1717; // w2
  const MethodInfo *v1718; // x3
  EventRandomMissionMaster_o *v1719; // x20
  int32_t v1720; // w2
  const MethodInfo *v1721; // x3
  UserGachaHistoryMaster_o *v1722; // x20
  int32_t v1723; // w2
  const MethodInfo *v1724; // x3
  UserCoinRoomMaster_o *v1725; // x20
  int32_t v1726; // w2
  const MethodInfo *v1727; // x3
  EventBuddyPointMaster_o *v1728; // x20
  int32_t v1729; // w2
  const MethodInfo *v1730; // x3
  EventServantPointRankMaster_o *v1731; // x20
  int32_t v1732; // w2
  const MethodInfo *v1733; // x3
  UserEventServantPointMaster_o *v1734; // x20
  int32_t v1735; // w2
  const MethodInfo *v1736; // x3
  FieldMotionMaster_o *v1737; // x20
  int32_t v1738; // w2
  const MethodInfo *v1739; // x3
  UserDeleteReservationMaster_o *v1740; // x20
  int32_t v1741; // w2
  const MethodInfo *v1742; // x3
  ServantScriptMultipleMaster_o *v1743; // x20
  int32_t v1744; // w2
  const MethodInfo *v1745; // x3
  EquipAddMaster_o *v1746; // x20
  int32_t v1747; // w2
  const MethodInfo *v1748; // x3
  QuestReleaseOverwriteMaster_o *v1749; // x20
  int32_t v1750; // w2
  const MethodInfo *v1751; // x3
  UserEventAlloutBattleMaster_o *v1752; // x20
  int32_t v1753; // w2
  const MethodInfo *v1754; // x3
  QuestScriptMaterialNextMaster_o *v1755; // x20
  int32_t v1756; // w2
  const MethodInfo *v1757; // x3
  EventDiggingMaster_o *v1758; // x20
  int32_t v1759; // w2
  const MethodInfo *v1760; // x3
  EventDiggingBlockMaster_o *v1761; // x20
  int32_t v1762; // w2
  const MethodInfo *v1763; // x3
  EventDiggingRewardMaster_o *v1764; // x20
  int32_t v1765; // w2
  const MethodInfo *v1766; // x3
  UserEventDiggingMaster_o *v1767; // x20
  int32_t v1768; // w2
  const MethodInfo *v1769; // x3
  BattleMessageMaster_o *v1770; // x20
  int32_t v1771; // w2
  const MethodInfo *v1772; // x3
  BattleMessageGroupMaster_o *v1773; // x20
  int32_t v1774; // w2
  const MethodInfo *v1775; // x3
  UserNpcSvtRecordMaster_o *v1776; // x20
  int32_t v1777; // w2
  const MethodInfo *v1778; // x3
  BuffTypeDetailMaster_o *v1779; // x20
  int32_t v1780; // w2
  const MethodInfo *v1781; // x3
  WarBoardMessageMaster_o *v1782; // x20
  int32_t v1783; // w2
  const MethodInfo *v1784; // x3
  WarBoardPartySkillMaster_o *v1785; // x20
  int32_t v1786; // w2
  const MethodInfo *v1787; // x3
  WarBoardMessageScriptMaster_o *v1788; // x20
  int32_t v1789; // w2
  const MethodInfo *v1790; // x3
  WarQuestSelectionMaster_o *v1791; // x20
  int32_t v1792; // w2
  const MethodInfo *v1793; // x3
  WarBoardStageDetailMaster_o *v1794; // x20
  int32_t v1795; // w2
  const MethodInfo *v1796; // x3
  QuestScriptMaterialOverwriteMaster_o *v1797; // x20
  int32_t v1798; // w2
  const MethodInfo *v1799; // x3
  QuestScriptBranchMaterialMaster_o *v1800; // x20
  int32_t v1801; // w2
  const MethodInfo *v1802; // x3
  AdCheckPointMaster_o *v1803; // x20
  int32_t v1804; // w2
  const MethodInfo *v1805; // x3
  GiftDetailMaster_o *v1806; // x20
  int32_t v1807; // w2
  const MethodInfo *v1808; // x3
  CombineLimitGiftMaster_o *v1809; // x20
  int32_t v1810; // w2
  const MethodInfo *v1811; // x3
  EventCooltimeRewardMaster_o *v1812; // x20
  int32_t v1813; // w2
  const MethodInfo *v1814; // x3
  UserEventCooltimeRewardMaster_o *v1815; // x20
  int32_t v1816; // w2
  const MethodInfo *v1817; // x3
  ClassBoardBaseMaster_o *v1818; // x20
  int32_t v1819; // w2
  const MethodInfo *v1820; // x3
  ClassBoardLockMaster_o *v1821; // x20
  int32_t v1822; // w2
  const MethodInfo *v1823; // x3
  ClassBoardSquareMaster_o *v1824; // x20
  int32_t v1825; // w2
  const MethodInfo *v1826; // x3
  ClassBoardLineMaster_o *v1827; // x20
  int32_t v1828; // w2
  const MethodInfo *v1829; // x3
  UserClassBoardSquareMaster_o *v1830; // x20
  int32_t v1831; // w2
  const MethodInfo *v1832; // x3
  ServantCardAddMaster_o *v1833; // x20
  int32_t v1834; // w2
  const MethodInfo *v1835; // x3
  MapLayerMaster_o *v1836; // x20
  int32_t v1837; // w2
  const MethodInfo *v1838; // x3
  SpotLayerMaster_o *v1839; // x20
  int32_t v1840; // w2
  const MethodInfo *v1841; // x3
  MapGimmickLayerMaster_o *v1842; // x20
  int32_t v1843; // w2
  const MethodInfo *v1844; // x3
  EventDataLostBattleMaster_o *v1845; // x20
  int32_t v1846; // w2
  const MethodInfo *v1847; // x3
  EventDataLostBattleResetMaster_o *v1848; // x20
  int32_t v1849; // w2
  const MethodInfo *v1850; // x3
  UserEventDataLostMaster_o *v1851; // x20
  int32_t v1852; // w2
  const MethodInfo *v1853; // x3
  QuestHintMaster_o *v1854; // x20
  int32_t v1855; // w2
  const MethodInfo *v1856; // x3
  FuncTypeDetailMaster_o *v1857; // x20
  int32_t v1858; // w2
  const MethodInfo *v1859; // x3
  BuffConvertMaster_o *v1860; // x20
  int32_t v1861; // w2
  const MethodInfo *v1862; // x3
  SkillGroupMaster_o *v1863; // x20
  int32_t v1864; // w2
  const MethodInfo *v1865; // x3
  SkillGroupOverwriteMaster_o *v1866; // x20
  int32_t v1867; // w2
  const MethodInfo *v1868; // x3
  SkillIndividualityMaster_o *v1869; // x20
  int32_t v1870; // w2
  const MethodInfo *v1871; // x3
  RestrictionBaseMaster_o *v1872; // x20
  int32_t v1873; // w2
  const MethodInfo *v1874; // x3
  RestrictionSlotMaster_o *v1875; // x20
  int32_t v1876; // w2
  const MethodInfo *v1877; // x3
  RestrictionSlotDetailMaster_o *v1878; // x20
  int32_t v1879; // w2
  const MethodInfo *v1880; // x3
  RestrictionMessageMaster_o *v1881; // x20
  int32_t v1882; // w2
  const MethodInfo *v1883; // x3
  RestrictionWholeMaster_o *v1884; // x20
  int32_t v1885; // w2
  const MethodInfo *v1886; // x3
  FuncDispMaster_o *v1887; // x20
  int32_t v1888; // w2
  const MethodInfo *v1889; // x3
  ClassBoardCommandSpellMaster_o *v1890; // x20
  int32_t v1891; // w2
  const MethodInfo *v1892; // x3
  ClassBoardClassMaster_o *v1893; // x20
  int32_t v1894; // w2
  const MethodInfo *v1895; // x3
  EventCommandAssistMaster_o *v1896; // x20
  int32_t v1897; // w2
  const MethodInfo *v1898; // x3
  EventMissionGroupMaster_o *v1899; // x20
  int32_t v1900; // w2
  const MethodInfo *v1901; // x3
  CombineLimitReleaseMaster_o *v1902; // x20
  int32_t v1903; // w2
  const MethodInfo *v1904; // x3
  HeelPortraitMaster_o *v1905; // x20
  int32_t v1906; // w2
  const MethodInfo *v1907; // x3
  UserHeelPortraitMaster_o *v1908; // x20
  int32_t v1909; // w2
  const MethodInfo *v1910; // x3
  TreasureDeviceSequenceWeightMaster_o *v1911; // x20
  int32_t v1912; // w2
  const MethodInfo *v1913; // x3
  NpcServantFollowerIndividualityMaster_o *v1914; // x20
  int32_t v1915; // w2
  const MethodInfo *v1916; // x3
  GachaExtraGiftMaster_o *v1917; // x20
  int32_t v1918; // w2
  const MethodInfo *v1919; // x3
  EventMuralMaster_o *v1920; // x20
  int32_t v1921; // w2
  const MethodInfo *v1922; // x3
  ViewWaveEnemyMaster_o *v1923; // x20
  int32_t v1924; // w2
  const MethodInfo *v1925; // x3
  BlankEarthSpotNavimenuMaster_o *v1926; // x20
  int32_t v1927; // w2
  const MethodInfo *v1928; // x3
  BlankEarthGimmickMaster_o *v1929; // x20
  int32_t v1930; // w2
  const MethodInfo *v1931; // x3
  TerminalOverwriteMaster_o *v1932; // x20
  int32_t v1933; // w2
  const MethodInfo *v1934; // x3
  UserExchangeSvtMaster_o *v1935; // x20
  int32_t v1936; // w2
  const MethodInfo *v1937; // x3
  WarBoardCommonReleaseMaster_o *v1938; // x20
  int32_t v1939; // w2
  const MethodInfo *v1940; // x3
  WarBoardEventMaster_o *v1941; // x20
  int32_t v1942; // w2
  const MethodInfo *v1943; // x3
  WarBoardEventScriptMaster_o *v1944; // x20
  int32_t v1945; // w2
  const MethodInfo *v1946; // x3
  WarBoardStageBossMaster_o *v1947; // x20
  int32_t v1948; // w2
  const MethodInfo *v1949; // x3
  WarBoardSquareIndexGroupMaster_o *v1950; // x20
  int32_t v1951; // w2
  const MethodInfo *v1952; // x3
  WarBoardActionTrendGroupMaster_o *v1953; // x20
  int32_t v1954; // w2
  const MethodInfo *v1955; // x3
  WarBoardRatingOffsetGroupMaster_o *v1956; // x20
  int32_t v1957; // w2
  const MethodInfo *v1958; // x3
  WarBoardReinforcementsMaster_o *v1959; // x20
  int32_t v1960; // w2
  const MethodInfo *v1961; // x3
  WarBoardStageReinforcementsMaster_o *v1962; // x20
  int32_t v1963; // w2
  const MethodInfo *v1964; // x3
  WarBoardFutureActionTrendMaster_o *v1965; // x20
  int32_t v1966; // w2
  const MethodInfo *v1967; // x3
  ServantProfilePushMaster_o *v1968; // x20
  int32_t v1969; // w2
  const MethodInfo *v1970; // x3
  MapGimmickPathMaster_o *v1971; // x20
  int32_t v1972; // w2
  const MethodInfo *v1973; // x3
  MapGimmickPathReleaseMaster_o *v1974; // x20
  int32_t v1975; // w2
  const MethodInfo *v1976; // x3
  ServantOverwriteMaster_o *v1977; // x20
  int32_t v1978; // w2
  const MethodInfo *v1979; // x3
  IndividualityPolicyMaster_o *v1980; // x20
  int32_t v1981; // w2
  const MethodInfo *v1982; // x3
  IndividualityPersonalityMaster_o *v1983; // x20
  int32_t v1984; // w2
  const MethodInfo *v1985; // x3
  AttriMaster_o *v1986; // x20
  int32_t v1987; // w2
  const MethodInfo *v1988; // x3
  ServantVoicePatternMaster_o *v1989; // x20
  int32_t v1990; // w2
  const MethodInfo *v1991; // x3
  UserGameCommonMaster_o *v1992; // x20
  int32_t v1993; // w2
  const MethodInfo *v1994; // x3
  ServantPhotoMaster_o *v1995; // x20
  int32_t v1996; // w2
  const MethodInfo *v1997; // x3
  MasterPhotoMaster_o *v1998; // x20
  int32_t v1999; // w2
  const MethodInfo *v2000; // x3
  PhotoFrameMaster_o *v2001; // x20
  int32_t v2002; // w2
  const MethodInfo *v2003; // x3
  WarMessageMaster_o *v2004; // x20
  int32_t v2005; // w2
  const MethodInfo *v2006; // x3
  QuestAutoOrganizationAdjustMaster_o *v2007; // x20
  int32_t v2008; // w2
  const MethodInfo *v2009; // x3
  ExcludeMotionMaster_o *v2010; // x20
  int32_t v2011; // w2
  const MethodInfo *v2012; // x3
  UserInterruptionQuestMaster_o *v2013; // x20
  int32_t v2014; // w2
  const MethodInfo *v2015; // x3
  ServantTransformMaster_o *v2016; // x20
  int32_t v2017; // w2
  const MethodInfo *v2018; // x3
  MapUpdateScheduleMaster_o *v2019; // x20
  int32_t v2020; // w2
  const MethodInfo *v2021; // x3
  QuestPhasePresentMaster_o *v2022; // x20
  int32_t v2023; // w2
  const MethodInfo *v2024; // x3
  UserAccountLinkageMaster_o *v2025; // x20
  int32_t v2026; // w2
  const MethodInfo *v2027; // x3
  MissionNaviTransitionMaster_o *v2028; // x20
  int32_t v2029; // w2
  const MethodInfo *v2030; // x3
  MissionNaviQuestMaster_o *v2031; // x20
  int32_t v2032; // w2
  const MethodInfo *v2033; // x3
  EventTradeGoodsMaster_o *v2034; // x20
  int32_t v2035; // w2
  const MethodInfo *v2036; // x3
  EventTradeStoreMaster_o *v2037; // x20
  int32_t v2038; // w2
  const MethodInfo *v2039; // x3
  EventTradePickupMaster_o *v2040; // x20
  int32_t v2041; // w2
  const MethodInfo *v2042; // x3
  UserEventTradeMaster_o *v2043; // x20
  int32_t v2044; // w2
  const MethodInfo *v2045; // x3
  PaymentHistoryMaster_o *v2046; // x20
  int32_t v2047; // w2
  const MethodInfo *v2048; // x3
  UserExternalPaymentStoneMaster_o *v2049; // x20
  int32_t v2050; // w2
  const MethodInfo *v2051; // x3
  QuestPhaseIndividualityMaster_o *v2052; // x20
  int32_t v2053; // w2
  const MethodInfo *v2054; // x3
  ViewGachaFeaturedServantMaster_o *v2055; // x20
  int32_t v2056; // w2
  const MethodInfo *v2057; // x3
  UserGachaPickupCollateralMaster_o *v2058; // x20
  int32_t v2059; // w2
  const MethodInfo *v2060; // x3
  GachaPickupCollateralMaster_o *v2061; // x20
  int32_t v2062; // w2
  const MethodInfo *v2063; // x3
  GachaPickupCollateralGroupMaster_o *v2064; // x20
  int32_t v2065; // w2
  const MethodInfo *v2066; // x3
  BattlePointMaster_o *v2067; // x20
  int32_t v2068; // w2
  const MethodInfo *v2069; // x3
  BattlePointPhaseMaster_o *v2070; // x20
  int32_t v2071; // w2
  const MethodInfo *v2072; // x3
  ServantBattlePointMaster_o *v2073; // x20
  int32_t v2074; // w2
  const MethodInfo *v2075; // x3
  EffectMovieMaster_o *v2076; // x20
  int32_t v2077; // w2
  const MethodInfo *v2078; // x3
  PaymentLimitMaster_o *v2079; // x20
  int32_t v2080; // w2
  const MethodInfo *v2081; // x3
  UserPaymentLimitMaster_o *v2082; // x20
  int32_t v2083; // w2
  const MethodInfo *v2084; // x3
  RoadmapMaster_o *v2085; // x20
  int32_t v2086; // w2
  const MethodInfo *v2087; // x3
  UserRecommendSupportMaster_o *v2088; // x20
  int32_t v2089; // w2
  const MethodInfo *v2090; // x3
  RecommendSupportQuestMaster_o *v2091; // x20
  int32_t v2092; // w2
  const MethodInfo *v2093; // x3
  RecommendAdviceMessageMaster_o *v2094; // x20
  int32_t v2095; // w2
  const MethodInfo *v2096; // x3
  UserRecommendFollowerMaster_o *v2097; // x20
  int32_t v2098; // w2
  const MethodInfo *v2099; // x3
  ItemDropEfficiencyMaster_o *v2100; // x20
  int32_t v2101; // w2
  const MethodInfo *v2102; // x3
  BlankEarthGimmickAddMaster_o *v2103; // x20
  int32_t v2104; // w2
  const MethodInfo *v2105; // x3
  WarReleaseMaster_o *v2106; // x20
  int32_t v2107; // w2
  const MethodInfo *v2108; // x3
  SelectBonusBaseMaster_o *v2109; // x20
  int32_t v2110; // w2
  const MethodInfo *v2111; // x3
  SelectBonusMaster_o *v2112; // x20
  int32_t v2113; // w2
  const MethodInfo *v2114; // x3
  MyroomServantSpecialImageMaster_o *v2115; // x20
  int32_t v2116; // w2
  const MethodInfo *v2117; // x3
  ShopResetMaster_o *v2118; // x20
  int32_t v2119; // w2
  const MethodInfo *v2120; // x3
  NpcServantDisplayTypeDetailMaster_o *v2121; // x20
  int32_t v2122; // w2
  const MethodInfo *v2123; // x3
  FriendshipServantMaster_o *v2124; // x20
  int32_t v2125; // w2
  const MethodInfo *v2126; // x3
  ExchangeSvtCoinGivenNumMaster_o *v2127; // x20
  int32_t v2128; // w2
  const MethodInfo *v2129; // x3
  ChaldeaGatePickupMaster_o *v2130; // x20
  int32_t v2131; // w2
  const MethodInfo *v2132; // x3
  WarGroupIgnoreMaster_o *v2133; // x20
  int32_t v2134; // w2
  const MethodInfo *v2135; // x3
  ImagePartsGroupMaster_o *v2136; // x20
  int32_t v2137; // w2
  const MethodInfo *v2138; // x3
  UserImagePartsGroupMaster_o *v2139; // x20
  int32_t v2140; // w2
  const MethodInfo *v2141; // x3
  MissionItemDisplayMaster_o *v2142; // x20
  int32_t v2143; // w2
  const MethodInfo *v2144; // x3
  QuestUseItemGroupMaster_o *v2145; // x20
  int32_t v2146; // w2
  const MethodInfo *v2147; // x3
  QuestUseItemPickupMaster_o *v2148; // x20
  int32_t v2149; // w2
  const MethodInfo *v2150; // x3
  UserEventItemLinkSvtMaster_o *v2151; // x20
  int32_t v2152; // w2
  const MethodInfo *v2153; // x3
  QuestHintOverwriteMaster_o *v2154; // x20
  int32_t v2155; // w2
  const MethodInfo *v2156; // x3
  ReachedWaveInfoMaster_o *v2157; // x20
  int32_t v2158; // w2
  const MethodInfo *v2159; // x3
  GalleryMaster_o *v2160; // x20
  int32_t v2161; // w2
  const MethodInfo *v2162; // x3
  GalleryResourceMaster_o *v2163; // x20
  int32_t v2164; // w2
  const MethodInfo *v2165; // x3
  ServantSkillAddMaster_o *v2166; // x20
  int32_t v2167; // w2
  const MethodInfo *v2168; // x3
  GalleryFolderReleaseMaster_o *v2169; // x20
  int32_t v2170; // w2
  const MethodInfo *v2171; // x3
  UserSvtFirstGetTimeMaster_o *v2172; // x20
  int32_t v2173; // w2
  const MethodInfo *v2174; // x3
  QuestExtensionMaster_o *v2175; // x20
  int32_t v2176; // w2
  const MethodInfo *v2177; // x3
  __int64 v2179; // x0

  if ( (byte_4A4DFC1 & 1) == 0 )
  {
    sub_1B863B8(&AccessaryMaster_TypeInfo, v1);
    sub_1B863B8(&AdCheckPointMaster_TypeInfo, v2);
    sub_1B863B8(&AiActMaster_TypeInfo, v3);
    sub_1B863B8(&AiFieldMaster_TypeInfo, v4);
    sub_1B863B8(&AiMaster_TypeInfo, v5);
    sub_1B863B8(&AreaMaster_TypeInfo, v6);
    sub_1B863B8(&AssistMaster_TypeInfo, v7);
    sub_1B863B8(&AttriMaster_TypeInfo, v8);
    sub_1B863B8(&AttriRelationMaster_TypeInfo, v9);
    sub_1B863B8(&AuraEffectMaster_TypeInfo, v10);
    sub_1B863B8(&AuraEffectPosOverwriteMaster_TypeInfo, v11);
    sub_1B863B8(&BankShopMaster_TypeInfo, v12);
    sub_1B863B8(&BannerAddMaster_TypeInfo, v13);
    sub_1B863B8(&BannerMaster_TypeInfo, v14);
    sub_1B863B8(&BattleBgMaster_TypeInfo, v15);
    sub_1B863B8(&BattleMasterImageMaster_TypeInfo, v16);
    sub_1B863B8(&BattleMaster_TypeInfo, v17);
    sub_1B863B8(&BattleMessageGroupMaster_TypeInfo, v18);
    sub_1B863B8(&BattleMessageMaster_TypeInfo, v19);
    sub_1B863B8(&BattlePointMaster_TypeInfo, v20);
    sub_1B863B8(&BattlePointPhaseMaster_TypeInfo, v21);
    sub_1B863B8(&BeforeBirthDayMaster_TypeInfo, v22);
    sub_1B863B8(&BgmMaster_TypeInfo, v23);
    sub_1B863B8(&BgmReleaseMaster_TypeInfo, v24);
    sub_1B863B8(&BlankEarthGimmickAddMaster_TypeInfo, v25);
    sub_1B863B8(&BlankEarthGimmickMaster_TypeInfo, v26);
    sub_1B863B8(&BlankEarthSpotAddMaster_TypeInfo, v27);
    sub_1B863B8(&BlankEarthSpotMaster_TypeInfo, v28);
    sub_1B863B8(&BlankEarthSpotNavimenuMaster_TypeInfo, v29);
    sub_1B863B8(&BoardMessageMaster_TypeInfo, v30);
    sub_1B863B8(&BoardMessageReleaseMaster_TypeInfo, v31);
    sub_1B863B8(&BoostMaster_TypeInfo, v32);
    sub_1B863B8(&BoxGachaBaseDetailMaster_TypeInfo, v33);
    sub_1B863B8(&BoxGachaBaseMaster_TypeInfo, v34);
    sub_1B863B8(&BoxGachaHistoryMaster_TypeInfo, v35);
    sub_1B863B8(&BoxGachaMaster_TypeInfo, v36);
    sub_1B863B8(&BoxGachaTalkMaster_TypeInfo, v37);
    sub_1B863B8(&BuffConvertMaster_TypeInfo, v38);
    sub_1B863B8(&BuffMaster_TypeInfo, v39);
    sub_1B863B8(&BuffTypeDetailMaster_TypeInfo, v40);
    sub_1B863B8(&CampaignInfoMaster_TypeInfo, v41);
    sub_1B863B8(&CardMaster_TypeInfo, v42);
    sub_1B863B8(&ChaldeaGatePickupMaster_TypeInfo, v43);
    sub_1B863B8(&ClassBoardBaseMaster_TypeInfo, v44);
    sub_1B863B8(&ClassBoardClassMaster_TypeInfo, v45);
    sub_1B863B8(&ClassBoardCommandSpellMaster_TypeInfo, v46);
    sub_1B863B8(&ClassBoardLineMaster_TypeInfo, v47);
    sub_1B863B8(&ClassBoardLockMaster_TypeInfo, v48);
    sub_1B863B8(&ClassBoardSquareMaster_TypeInfo, v49);
    sub_1B863B8(&ClassRelationMaster_TypeInfo, v50);
    sub_1B863B8(&ClassRelationOverwriteMaster_TypeInfo, v51);
    sub_1B863B8(&ClosedMessageMaster_TypeInfo, v52);
    sub_1B863B8(&CombineAppendPassiveSkillMaster_TypeInfo, v53);
    sub_1B863B8(&CombineCostumeMaster_TypeInfo, v54);
    sub_1B863B8(&CombineLimitGiftMaster_TypeInfo, v55);
    sub_1B863B8(&CombineLimitMaster_TypeInfo, v56);
    sub_1B863B8(&CombineLimitReleaseMaster_TypeInfo, v57);
    sub_1B863B8(&CombineMaster_TypeInfo, v58);
    sub_1B863B8(&CombineMaterialMaster_TypeInfo, v59);
    sub_1B863B8(&CombineQpMaster_TypeInfo, v60);
    sub_1B863B8(&CombineQpSvtEquipMaster_TypeInfo, v61);
    sub_1B863B8(&CombineSkillMaster_TypeInfo, v62);
    sub_1B863B8(&CombineTdMaster_TypeInfo, v63);
    sub_1B863B8(&CommandCardRankParamMaster_TypeInfo, v64);
    sub_1B863B8(&CommandCodeCommentMaster_TypeInfo, v65);
    sub_1B863B8(&CommandCodeMaster_TypeInfo, v66);
    sub_1B863B8(&CommandCodeSkillMaster_TypeInfo, v67);
    sub_1B863B8(&CommandCodeSkillReleaseMaster_TypeInfo, v68);
    sub_1B863B8(&CommandSpellMaster_TypeInfo, v69);
    sub_1B863B8(&CommonConsumeMaster_TypeInfo, v70);
    sub_1B863B8(&CommonReleaseMaster_TypeInfo, v71);
    sub_1B863B8(&CommonRestrictionMaster_TypeInfo, v72);
    sub_1B863B8(&CompleteMissionMaster_TypeInfo, v73);
    sub_1B863B8(&ConstantLongMaster_TypeInfo, v74);
    sub_1B863B8(&ConstantMaster_TypeInfo, v75);
    sub_1B863B8(&ConstantStrMaster_TypeInfo, v76);
    sub_1B863B8(&CvMaster_TypeInfo, v77);
    sub_1B863B8(&DataMasterBase___TypeInfo, v78);
    sub_1B863B8(&DialogMessageMaster_TypeInfo, v79);
    sub_1B863B8(&EffectMaster_TypeInfo, v80);
    sub_1B863B8(&EffectMovieMaster_TypeInfo, v81);
    sub_1B863B8(&EnemyMstBattleMaster_TypeInfo, v82);
    sub_1B863B8(&EnemyMstMaster_TypeInfo, v83);
    sub_1B863B8(&EquipAddMaster_TypeInfo, v84);
    sub_1B863B8(&EquipExpMaster_TypeInfo, v85);
    sub_1B863B8(&EquipImageMaster_TypeInfo, v86);
    sub_1B863B8(&EquipMaster_TypeInfo, v87);
    sub_1B863B8(&EquipSkillMaster_TypeInfo, v88);
    sub_1B863B8(&EventAddMaster_TypeInfo, v89);
    sub_1B863B8(&EventBoardGameCellMaster_TypeInfo, v90);
    sub_1B863B8(&EventBoardGameTokenMaster_TypeInfo, v91);
    sub_1B863B8(&EventBoardGameTokenRewardMaster_TypeInfo, v92);
    sub_1B863B8(&EventBonusFilterGroupInfoMaster_TypeInfo, v93);
    sub_1B863B8(&EventBonusFilterGroupMemberMaster_TypeInfo, v94);
    sub_1B863B8(&EventBonusFilterMaster_TypeInfo, v95);
    sub_1B863B8(&EventBoostItemUsedMaster_TypeInfo, v96);
    sub_1B863B8(&EventBossStatusUiMaster_TypeInfo, v97);
    sub_1B863B8(&EventBuddyPointMaster_TypeInfo, v98);
    sub_1B863B8(&EventBulletinBoardMaster_TypeInfo, v99);
    sub_1B863B8(&EventBulletinBoardReleaseMaster_TypeInfo, v100);
    sub_1B863B8(&EventCampaignMaster_TypeInfo, v101);
    sub_1B863B8(&EventCampaignReleaseMaster_TypeInfo, v102);
    sub_1B863B8(&EventCombineCostumeMaster_TypeInfo, v103);
    sub_1B863B8(&EventCombineMaster_TypeInfo, v104);
    sub_1B863B8(&EventCommandAssistMaster_TypeInfo, v105);
    sub_1B863B8(&EventConquestRewardMaster_TypeInfo, v106);
    sub_1B863B8(&EventCooltimeRewardMaster_TypeInfo, v107);
    sub_1B863B8(&EventDataLostBattleMaster_TypeInfo, v108);
    sub_1B863B8(&EventDataLostBattleResetMaster_TypeInfo, v109);
    sub_1B863B8(&EventDetailMaster_TypeInfo, v110);
    sub_1B863B8(&EventDiggingBlockMaster_TypeInfo, v111);
    sub_1B863B8(&EventDiggingMaster_TypeInfo, v112);
    sub_1B863B8(&EventDiggingRewardMaster_TypeInfo, v113);
    sub_1B863B8(&EventEquipSkillReleaseMaster_TypeInfo, v114);
    sub_1B863B8(&EventExpeditionMaster_TypeInfo, v115);
    sub_1B863B8(&EventExpeditionPieceMaster_TypeInfo, v116);
    sub_1B863B8(&EventFactoryMaster_TypeInfo, v117);
    sub_1B863B8(&EventFatigueRecoveryMaster_TypeInfo, v118);
    sub_1B863B8(&EventFilterMaster_TypeInfo, v119);
    sub_1B863B8(&EventFortificationDetailMaster_TypeInfo, v120);
    sub_1B863B8(&EventFortificationMaster_TypeInfo, v121);
    sub_1B863B8(&EventFortificationSvtMaster_TypeInfo, v122);
    sub_1B863B8(&EventGroupMaster_TypeInfo, v123);
    sub_1B863B8(&EventItemDisplayGroupMaster_TypeInfo, v124);
    sub_1B863B8(&EventItemDisplayMaster_TypeInfo, v125);
    sub_1B863B8(&EventItemDisplayReleaseMaster_TypeInfo, v126);
    sub_1B863B8(&EventLocationCampaignMaster_TypeInfo, v127);
    sub_1B863B8(&EventMaster_TypeInfo, v128);
    sub_1B863B8(&EventMissionActionAddMaster_TypeInfo, v129);
    sub_1B863B8(&EventMissionActionMaster_TypeInfo, v130);
    sub_1B863B8(&EventMissionAddMaster_TypeInfo, v131);
    sub_1B863B8(&EventMissionCondDetailMaster_TypeInfo, v132);
    sub_1B863B8(&EventMissionConditionMaster_TypeInfo, v133);
    sub_1B863B8(&EventMissionGroupMaster_TypeInfo, v134);
    sub_1B863B8(&EventMissionMaster_TypeInfo, v135);
    sub_1B863B8(&EventMuralMaster_TypeInfo, v136);
    sub_1B863B8(&EventPanelMapDetailMaster_TypeInfo, v137);
    sub_1B863B8(&EventPanelMapMaster_TypeInfo, v138);
    sub_1B863B8(&EventPanelScanMaster_TypeInfo, v139);
    sub_1B863B8(&EventPanelSpotMaster_TypeInfo, v140);
    sub_1B863B8(&EventPointActivityMaster_TypeInfo, v141);
    sub_1B863B8(&EventPointBuffMaster_TypeInfo, v142);
    sub_1B863B8(&EventPointGroupAddMaster_TypeInfo, v143);
    sub_1B863B8(&EventPointGroupMaster_TypeInfo, v144);
    sub_1B863B8(&EventPointMaster_TypeInfo, v145);
    sub_1B863B8(&EventPointUpperMaster_TypeInfo, v146);
    sub_1B863B8(&EventPointUpperReleaseMaster_TypeInfo, v147);
    sub_1B863B8(&EventProgressValueMaster_TypeInfo, v148);
    sub_1B863B8(&EventQuestCooltimeMaster_TypeInfo, v149);
    sub_1B863B8(&EventQuestMaster_TypeInfo, v150);
    sub_1B863B8(&EventRaceMaster_TypeInfo, v151);
    sub_1B863B8(&EventRaceResultMaster_TypeInfo, v152);
    sub_1B863B8(&EventRaidMaster_TypeInfo, v153);
    sub_1B863B8(&EventRandomMissionMaster_TypeInfo, v154);
    sub_1B863B8(&EventRecipeGiftMaster_TypeInfo, v155);
    sub_1B863B8(&EventRecipeMaster_TypeInfo, v156);
    sub_1B863B8(&EventRewardBgMaster_TypeInfo, v157);
    sub_1B863B8(&EventRewardExtraMaster_TypeInfo, v158);
    sub_1B863B8(&EventRewardGuideReleaseMaster_TypeInfo, v159);
    sub_1B863B8(&EventRewardMaster_TypeInfo, v160);
    sub_1B863B8(&EventRewardSceneMaster_TypeInfo, v161);
    sub_1B863B8(&EventRewardSceneReleaseMaster_TypeInfo, v162);
    sub_1B863B8(&EventRewardSetMaster_TypeInfo, v163);
    sub_1B863B8(&EventScriptMaster_TypeInfo, v164);
    sub_1B863B8(&EventScriptReleaseMaster_TypeInfo, v165);
    sub_1B863B8(&EventServantFatigueMaster_TypeInfo, v166);
    sub_1B863B8(&EventServantMaster_TypeInfo, v167);
    sub_1B863B8(&EventServantPointRankMaster_TypeInfo, v168);
    sub_1B863B8(&EventStatusMaster_TypeInfo, v169);
    sub_1B863B8(&EventStatusQuestMaster_TypeInfo, v170);
    sub_1B863B8(&EventSuperBossMaster_TypeInfo, v171);
    sub_1B863B8(&EventTowerMaster_TypeInfo, v172);
    sub_1B863B8(&EventTowerRewardMaster_TypeInfo, v173);
    sub_1B863B8(&EventTradeGoodsMaster_TypeInfo, v174);
    sub_1B863B8(&EventTradePickupMaster_TypeInfo, v175);
    sub_1B863B8(&EventTradeStoreMaster_TypeInfo, v176);
    sub_1B863B8(&EventTutorialCondMaster_TypeInfo, v177);
    sub_1B863B8(&EventTutorialMaster_TypeInfo, v178);
    sub_1B863B8(&EventUiMaster_TypeInfo, v179);
    sub_1B863B8(&EventUiReleaseMaster_TypeInfo, v180);
    sub_1B863B8(&EventUiValueMaster_TypeInfo, v181);
    sub_1B863B8(&EventVoicePlayMaster_TypeInfo, v182);
    sub_1B863B8(&ExchangeSvtCoinGivenNumMaster_TypeInfo, v183);
    sub_1B863B8(&ExcludeMotionMaster_TypeInfo, v184);
    sub_1B863B8(&FieldMotionMaster_TypeInfo, v185);
    sub_1B863B8(&FriendshipMaster_TypeInfo, v186);
    sub_1B863B8(&FriendshipQuestDialogInfoMaster_TypeInfo, v187);
    sub_1B863B8(&FriendshipServantMaster_TypeInfo, v188);
    sub_1B863B8(&FuncDispMaster_TypeInfo, v189);
    sub_1B863B8(&FuncTypeDetailMaster_TypeInfo, v190);
    sub_1B863B8(&FunctionCategoryMaster_TypeInfo, v191);
    sub_1B863B8(&FunctionGroupMaster_TypeInfo, v192);
    sub_1B863B8(&FunctionMaster_TypeInfo, v193);
    sub_1B863B8(&GachaAdjustAddMaster_TypeInfo, v194);
    sub_1B863B8(&GachaAppendMaster_TypeInfo, v195);
    sub_1B863B8(&GachaBaseCollateralMaster_TypeInfo, v196);
    sub_1B863B8(&GachaBehaviorMaster_TypeInfo, v197);
    sub_1B863B8(&GachaBonusSelectLineupMaster_TypeInfo, v198);
    sub_1B863B8(&GachaBonusSelectMaster_TypeInfo, v199);
    sub_1B863B8(&GachaDetailMaster_TypeInfo, v200);
    sub_1B863B8(&GachaExtraGiftMaster_TypeInfo, v201);
    sub_1B863B8(&GachaGroupMaster_TypeInfo, v202);
    sub_1B863B8(&GachaImageMaster_TypeInfo, v203);
    sub_1B863B8(&GachaMaster_TypeInfo, v204);
    sub_1B863B8(&GachaPickupCollateralGroupMaster_TypeInfo, v205);
    sub_1B863B8(&GachaPickupCollateralMaster_TypeInfo, v206);
    sub_1B863B8(&GachaReleaseMaster_TypeInfo, v207);
    sub_1B863B8(&GachaStoryAdjustMaster_TypeInfo, v208);
    sub_1B863B8(&GachaSubMaster_TypeInfo, v209);
    sub_1B863B8(&GachaTicketMaster_TypeInfo, v210);
    sub_1B863B8(&GalleryFolderReleaseMaster_TypeInfo, v211);
    sub_1B863B8(&GalleryMaster_TypeInfo, v212);
    sub_1B863B8(&GalleryResourceMaster_TypeInfo, v213);
    sub_1B863B8(&GiftAddMaster_TypeInfo, v214);
    sub_1B863B8(&GiftDetailMaster_TypeInfo, v215);
    sub_1B863B8(&GiftMaster_TypeInfo, v216);
    sub_1B863B8(&GuideMaster_TypeInfo, v217);
    sub_1B863B8(&HeelPortraitMaster_TypeInfo, v218);
    sub_1B863B8(&IllustratorMaster_TypeInfo, v219);
    sub_1B863B8(&ImagePartsGroupMaster_TypeInfo, v220);
    sub_1B863B8(&IndividualityPersonalityMaster_TypeInfo, v221);
    sub_1B863B8(&IndividualityPolicyMaster_TypeInfo, v222);
    sub_1B863B8(&ItemDropEfficiencyMaster_TypeInfo, v223);
    sub_1B863B8(&ItemMaster_TypeInfo, v224);
    sub_1B863B8(&ItemSelectMaster_TypeInfo, v225);
    sub_1B863B8(&LoginQuestMaster_TypeInfo, v226);
    sub_1B863B8(&MapButtonMaster_TypeInfo, v227);
    sub_1B863B8(&MapCondMaster_TypeInfo, v228);
    sub_1B863B8(&MapGimmickLayerMaster_TypeInfo, v229);
    sub_1B863B8(&MapGimmickMaster_TypeInfo, v230);
    sub_1B863B8(&MapGimmickPathMaster_TypeInfo, v231);
    sub_1B863B8(&MapGimmickPathReleaseMaster_TypeInfo, v232);
    sub_1B863B8(&MapGimmickReleaseMaster_TypeInfo, v233);
    sub_1B863B8(&MapLayerMaster_TypeInfo, v234);
    sub_1B863B8(&MapMaster_TypeInfo, v235);
    sub_1B863B8(&MapUpdateScheduleMaster_TypeInfo, v236);
    sub_1B863B8(&MasterPhotoMaster_TypeInfo, v237);
    sub_1B863B8(&MaterialFolderMaster_TypeInfo, v238);
    sub_1B863B8(&MissionItemDisplayMaster_TypeInfo, v239);
    sub_1B863B8(&MissionNaviQuestMaster_TypeInfo, v240);
    sub_1B863B8(&MissionNaviTransitionMaster_TypeInfo, v241);
    sub_1B863B8(&MstMissionDisplayInfoMaster_TypeInfo, v242);
    sub_1B863B8(&MstMissionMaster_TypeInfo, v243);
    sub_1B863B8(&MyRoomAddMaster_TypeInfo, v244);
    sub_1B863B8(&MyroomServantSpecialImageMaster_TypeInfo, v245);
    sub_1B863B8(&NewsMaster_TypeInfo, v246);
    sub_1B863B8(&NotEndEventMissionFixMaster_TypeInfo, v247);
    sub_1B863B8(&NpcFollowerMaster_TypeInfo, v248);
    sub_1B863B8(&NpcFollowerReleaseMaster_TypeInfo, v249);
    sub_1B863B8(&NpcServantDisplayTypeDetailMaster_TypeInfo, v250);
    sub_1B863B8(&NpcServantEquipMaster_TypeInfo, v251);
    sub_1B863B8(&NpcServantFollowerIndividualityMaster_TypeInfo, v252);
    sub_1B863B8(&NpcServantFollowerMaster_TypeInfo, v253);
    sub_1B863B8(&OpeningMovieMaster_TypeInfo, v254);
    sub_1B863B8(&OtherUserGameMaster_TypeInfo, v255);
    sub_1B863B8(&PartialMaintenanceMaster_TypeInfo, v256);
    sub_1B863B8(&PaymentHistoryMaster_TypeInfo, v257);
    sub_1B863B8(&PaymentLimitMaster_TypeInfo, v258);
    sub_1B863B8(&PhotoFrameMaster_TypeInfo, v259);
    sub_1B863B8(&PickupUserFollowerMaster_TypeInfo, v260);
    sub_1B863B8(&PrivilegeMaster_TypeInfo, v261);
    sub_1B863B8(&QuestAddMaster_TypeInfo, v262);
    sub_1B863B8(&QuestAutoOrganizationAdjustMaster_TypeInfo, v263);
    sub_1B863B8(&QuestBehaviorMaster_TypeInfo, v264);
    sub_1B863B8(&QuestConsumeItemMaster_TypeInfo, v265);
    sub_1B863B8(&QuestDateRangeMaster_TypeInfo, v266);
    sub_1B863B8(&QuestExtensionMaster_TypeInfo, v267);
    sub_1B863B8(&QuestGroupMaster_TypeInfo, v268);
    sub_1B863B8(&QuestHintMaster_TypeInfo, v269);
    sub_1B863B8(&QuestHintOverwriteMaster_TypeInfo, v270);
    sub_1B863B8(&QuestMaster_TypeInfo, v271);
    sub_1B863B8(&QuestMessageMaster_TypeInfo, v272);
    sub_1B863B8(&QuestPhaseDetailAddMaster_TypeInfo, v273);
    sub_1B863B8(&QuestPhaseDetailMaster_TypeInfo, v274);
    sub_1B863B8(&QuestPhaseIndividualityMaster_TypeInfo, v275);
    sub_1B863B8(&QuestPhaseMaster_TypeInfo, v276);
    sub_1B863B8(&QuestPhasePresentMaster_TypeInfo, v277);
    sub_1B863B8(&QuestPickupMaster_TypeInfo, v278);
    sub_1B863B8(&QuestRacePointMaster_TypeInfo, v279);
    sub_1B863B8(&QuestRandomGroupMaster_TypeInfo, v280);
    sub_1B863B8(&QuestReleaseMaster_TypeInfo, v281);
    sub_1B863B8(&QuestReleaseOverwriteMaster_TypeInfo, v282);
    sub_1B863B8(&QuestResetMaster_TypeInfo, v283);
    sub_1B863B8(&QuestRestrictionInfoMaster_TypeInfo, v284);
    sub_1B863B8(&QuestRestrictionMaster_TypeInfo, v285);
    sub_1B863B8(&QuestScriptBranchMaterialMaster_TypeInfo, v286);
    sub_1B863B8(&QuestScriptMaster_TypeInfo, v287);
    sub_1B863B8(&QuestScriptMaterialNextMaster_TypeInfo, v288);
    sub_1B863B8(&QuestScriptMaterialOverwriteMaster_TypeInfo, v289);
    sub_1B863B8(&QuestScriptReleaseMaster_TypeInfo, v290);
    sub_1B863B8(&QuestSpotReleaseMaster_TypeInfo, v291);
    sub_1B863B8(&QuestUseItemGroupMaster_TypeInfo, v292);
    sub_1B863B8(&QuestUseItemPickupMaster_TypeInfo, v293);
    sub_1B863B8(&ReachedWaveInfoMaster_TypeInfo, v294);
    sub_1B863B8(&RecommendAdviceMessageMaster_TypeInfo, v295);
    sub_1B863B8(&RecommendSupportQuestMaster_TypeInfo, v296);
    sub_1B863B8(&RecoverMaster_TypeInfo, v297);
    sub_1B863B8(&ReprintStageMaster_TypeInfo, v298);
    sub_1B863B8(&RestrictionBaseMaster_TypeInfo, v299);
    sub_1B863B8(&RestrictionMaster_TypeInfo, v300);
    sub_1B863B8(&RestrictionMessageMaster_TypeInfo, v301);
    sub_1B863B8(&RestrictionSlotDetailMaster_TypeInfo, v302);
    sub_1B863B8(&RestrictionSlotMaster_TypeInfo, v303);
    sub_1B863B8(&RestrictionWholeMaster_TypeInfo, v304);
    sub_1B863B8(&RoadmapMaster_TypeInfo, v305);
    sub_1B863B8(&SelectBonusBaseMaster_TypeInfo, v306);
    sub_1B863B8(&SelectBonusMaster_TypeInfo, v307);
    sub_1B863B8(&ServantAddMaster_TypeInfo, v308);
    sub_1B863B8(&ServantAnimationOverwriteMaster_TypeInfo, v309);
    sub_1B863B8(&ServantAppendPassiveSkillMaster_TypeInfo, v310);
    sub_1B863B8(&ServantBattlePointMaster_TypeInfo, v311);
    sub_1B863B8(&ServantCardAddMaster_TypeInfo, v312);
    sub_1B863B8(&ServantCardMaster_TypeInfo, v313);
    sub_1B863B8(&ServantChangeMaster_TypeInfo, v314);
    sub_1B863B8(&ServantClassMaster_TypeInfo, v315);
    sub_1B863B8(&ServantCollectionMaster_TypeInfo, v316);
    sub_1B863B8(&ServantCommandCodeUnlockMaster_TypeInfo, v317);
    sub_1B863B8(&ServantCommentAddMaster_TypeInfo, v318);
    sub_1B863B8(&ServantCommentMaster_TypeInfo, v319);
    sub_1B863B8(&ServantCostumeMaster_TypeInfo, v320);
    sub_1B863B8(&ServantCostumeReleaseMaster_TypeInfo, v321);
    sub_1B863B8(&ServantExceedMaster_TypeInfo, v322);
    sub_1B863B8(&ServantExpMaster_TypeInfo, v323);
    sub_1B863B8(&ServantFilterMaster_TypeInfo, v324);
    sub_1B863B8(&ServantFlagMaster_TypeInfo, v325);
    sub_1B863B8(&ServantFlagReleaseMaster_TypeInfo, v326);
    sub_1B863B8(&ServantGroupMaster_TypeInfo, v327);
    sub_1B863B8(&ServantIndividualityMaster_TypeInfo, v328);
    sub_1B863B8(&ServantLimitAddMaster_TypeInfo, v329);
    sub_1B863B8(&ServantLimitImageMaster_TypeInfo, v330);
    sub_1B863B8(&ServantLimitMaster_TypeInfo, v331);
    sub_1B863B8(&ServantLimitSpoilerProtectionMaster_TypeInfo, v332);
    sub_1B863B8(&ServantLvDetailMaster_TypeInfo, v333);
    sub_1B863B8(&ServantMaster_TypeInfo, v334);
    sub_1B863B8(&ServantMaterialFolderMaster_TypeInfo, v335);
    sub_1B863B8(&ServantOverwriteMaster_TypeInfo, v336);
    sub_1B863B8(&ServantPassiveSkillMaster_TypeInfo, v337);
    sub_1B863B8(&ServantPassiveSkillReleaseMaster_TypeInfo, v338);
    sub_1B863B8(&ServantPhotoMaster_TypeInfo, v339);
    sub_1B863B8(&ServantProfileMaster_TypeInfo, v340);
    sub_1B863B8(&ServantProfilePushMaster_TypeInfo, v341);
    sub_1B863B8(&ServantRarityMaster_TypeInfo, v342);
    sub_1B863B8(&ServantScriptAddMaster_TypeInfo, v343);
    sub_1B863B8(&ServantScriptMaster_TypeInfo, v344);
    sub_1B863B8(&ServantScriptMultipleMaster_TypeInfo, v345);
    sub_1B863B8(&ServantSkillAddMaster_TypeInfo, v346);
    sub_1B863B8(&ServantSkillMaster_TypeInfo, v347);
    sub_1B863B8(&ServantSkillReleaseMaster_TypeInfo, v348);
    sub_1B863B8(&ServantTransformMaster_TypeInfo, v349);
    sub_1B863B8(&ServantTreasureDeviceAddMaster_TypeInfo, v350);
    sub_1B863B8(&ServantTreasureDeviceDamageMaster_TypeInfo, v351);
    sub_1B863B8(&ServantTreasureDeviceReleaseMaster_TypeInfo, v352);
    sub_1B863B8(&ServantTreasureDvcMaster_TypeInfo, v353);
    sub_1B863B8(&ServantVoiceMaster_TypeInfo, v354);
    sub_1B863B8(&ServantVoicePatternMaster_TypeInfo, v355);
    sub_1B863B8(&ServantVoiceRelationMaster_TypeInfo, v356);
    sub_1B863B8(&SetItemMaster_TypeInfo, v357);
    sub_1B863B8(&ShopActionMaster_TypeInfo, v358);
    sub_1B863B8(&ShopDetailMaster_TypeInfo, v359);
    sub_1B863B8(&ShopGroupMaster_TypeInfo, v360);
    sub_1B863B8(&ShopMaster_TypeInfo, v361);
    sub_1B863B8(&ShopReleaseMaster_TypeInfo, v362);
    sub_1B863B8(&ShopResetMaster_TypeInfo, v363);
    sub_1B863B8(&ShopScriptMaster_TypeInfo, v364);
    sub_1B863B8(&SkillAddMaster_TypeInfo, v365);
    sub_1B863B8(&SkillDetailMaster_TypeInfo, v366);
    sub_1B863B8(&SkillGroupMaster_TypeInfo, v367);
    sub_1B863B8(&SkillGroupOverwriteMaster_TypeInfo, v368);
    sub_1B863B8(&SkillIndividualityMaster_TypeInfo, v369);
    sub_1B863B8(&SkillLvMaster_TypeInfo, v370);
    sub_1B863B8(&SkillMaster_TypeInfo, v371);
    sub_1B863B8(&SpotAddMaster_TypeInfo, v372);
    sub_1B863B8(&SpotImageMaster_TypeInfo, v373);
    sub_1B863B8(&SpotLayerMaster_TypeInfo, v374);
    sub_1B863B8(&SpotMaster_TypeInfo, v375);
    sub_1B863B8(&SpotPathMaster_TypeInfo, v376);
    sub_1B863B8(&SpotRoadMaster_TypeInfo, v377);
    sub_1B863B8(&StaffPhotoCostumeMaster_TypeInfo, v378);
    sub_1B863B8(&StaffPhotoMaster_TypeInfo, v379);
    sub_1B863B8(&StageMaster_TypeInfo, v380);
    sub_1B863B8(&StatusEffectPosOverwriteMaster_TypeInfo, v381);
    sub_1B863B8(&StoneShopMaster_TypeInfo, v382);
    sub_1B863B8(&SubEquipMaster_TypeInfo, v383);
    sub_1B863B8(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v384);
    sub_1B863B8(&SvtCoinMaster_TypeInfo, v385);
    sub_1B863B8(&SvtMaterialTdMaster_TypeInfo, v386);
    sub_1B863B8(&SvtMultiPortraitMaster_TypeInfo, v387);
    sub_1B863B8(&TblFriendMaster_TypeInfo, v388);
    sub_1B863B8(&TblUserMaster_TypeInfo, v389);
    sub_1B863B8(&TelopMaster_TypeInfo, v390);
    sub_1B863B8(&TerminalOverwriteMaster_TypeInfo, v391);
    sub_1B863B8(&TipsBattleMaster_TypeInfo, v392);
    sub_1B863B8(&TotalBoxGachaMaster_TypeInfo, v393);
    sub_1B863B8(&TotalEventPointMaster_TypeInfo, v394);
    sub_1B863B8(&TotalEventRaceMaster_TypeInfo, v395);
    sub_1B863B8(&TotalEventRaidMaster_TypeInfo, v396);
    sub_1B863B8(&TotalLoginMaster_TypeInfo, v397);
    sub_1B863B8(&TreasureBoxGiftMaster_TypeInfo, v398);
    sub_1B863B8(&TreasureBoxMaster_TypeInfo, v399);
    sub_1B863B8(&TreasureBoxTalkMaster_TypeInfo, v400);
    sub_1B863B8(&TreasureDeviceSequenceWeightMaster_TypeInfo, v401);
    sub_1B863B8(&TreasureDvcDetailMaster_TypeInfo, v402);
    sub_1B863B8(&TreasureDvcLvMaster_TypeInfo, v403);
    sub_1B863B8(&TreasureDvcMaster_TypeInfo, v404);
    sub_1B863B8(&UpdateProfileDialogInfoMaster_TypeInfo, v405);
    sub_1B863B8(&UserAccessaryMaster_TypeInfo, v406);
    sub_1B863B8(&UserAccountLinkageMaster_TypeInfo, v407);
    sub_1B863B8(&UserBlacklistMaster_TypeInfo, v408);
    sub_1B863B8(&UserBoxGachaMaster_TypeInfo, v409);
    sub_1B863B8(&UserClassBoardSquareMaster_TypeInfo, v410);
    sub_1B863B8(&UserCoinRoomMaster_TypeInfo, v411);
    sub_1B863B8(&UserCombineExpMaster_TypeInfo, v412);
    sub_1B863B8(&UserCommandCodeCollectionMaster_TypeInfo, v413);
    sub_1B863B8(&UserCommandCodeMaster_TypeInfo, v414);
    sub_1B863B8(&UserContinueMaster_TypeInfo, v415);
    sub_1B863B8(&UserDeckMaster_TypeInfo, v416);
    sub_1B863B8(&UserDeleteReservationMaster_TypeInfo, v417);
    sub_1B863B8(&UserEquipMaster_TypeInfo, v418);
    sub_1B863B8(&UserEventAlloutBattleMaster_TypeInfo, v419);
    sub_1B863B8(&UserEventBoardGameTokenMaster_TypeInfo, v420);
    sub_1B863B8(&UserEventCooltimeRewardMaster_TypeInfo, v421);
    sub_1B863B8(&UserEventDataLostMaster_TypeInfo, v422);
    sub_1B863B8(&UserEventDeckMaster_TypeInfo, v423);
    sub_1B863B8(&UserEventDiggingMaster_TypeInfo, v424);
    sub_1B863B8(&UserEventExpeditionMaster_TypeInfo, v425);
    sub_1B863B8(&UserEventFortificationMaster_TypeInfo, v426);
    sub_1B863B8(&UserEventItemLinkSvtMaster_TypeInfo, v427);
    sub_1B863B8(&UserEventMapMaster_TypeInfo, v428);
    sub_1B863B8(&UserEventMaster_TypeInfo, v429);
    sub_1B863B8(&UserEventMissionCondDetailMaster_TypeInfo, v430);
    sub_1B863B8(&UserEventMissionFixMaster_TypeInfo, v431);
    sub_1B863B8(&UserEventMissionMaster_TypeInfo, v432);
    sub_1B863B8(&UserEventPointMaster_TypeInfo, v433);
    sub_1B863B8(&UserEventQuestCooltimeMaster_TypeInfo, v434);
    sub_1B863B8(&UserEventRaceMaster_TypeInfo, v435);
    sub_1B863B8(&UserEventRaidMaster_TypeInfo, v436);
    sub_1B863B8(&UserEventRandomMissionMaster_TypeInfo, v437);
    sub_1B863B8(&UserEventServantFatigueMaster_TypeInfo, v438);
    sub_1B863B8(&UserEventServantPointMaster_TypeInfo, v439);
    sub_1B863B8(&UserEventSpotMaster_TypeInfo, v440);
    sub_1B863B8(&UserEventTradeMaster_TypeInfo, v441);
    sub_1B863B8(&UserExchangeSvtMaster_TypeInfo, v442);
    sub_1B863B8(&UserExpMaster_TypeInfo, v443);
    sub_1B863B8(&UserExternalPaymentStoneMaster_TypeInfo, v444);
    sub_1B863B8(&UserFollowMaster_TypeInfo, v445);
    sub_1B863B8(&UserFollowerMaster_TypeInfo, v446);
    sub_1B863B8(&UserFormationMaster_TypeInfo, v447);
    sub_1B863B8(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v448);
    sub_1B863B8(&UserFriendRequestHistoryMaster_TypeInfo, v449);
    sub_1B863B8(&UserGachaDrawLogMaster_TypeInfo, v450);
    sub_1B863B8(&UserGachaExtraCountMaster_TypeInfo, v451);
    sub_1B863B8(&UserGachaHistoryMaster_TypeInfo, v452);
    sub_1B863B8(&UserGachaMaster_TypeInfo, v453);
    sub_1B863B8(&UserGachaPickupCollateralMaster_TypeInfo, v454);
    sub_1B863B8(&UserGameCommonMaster_TypeInfo, v455);
    sub_1B863B8(&UserGameMaster_TypeInfo, v456);
    sub_1B863B8(&UserHeelPortraitMaster_TypeInfo, v457);
    sub_1B863B8(&UserImagePartsGroupMaster_TypeInfo, v458);
    sub_1B863B8(&UserInterruptionQuestMaster_TypeInfo, v459);
    sub_1B863B8(&UserItemMaster_TypeInfo, v460);
    sub_1B863B8(&UserLoginMaster_TypeInfo, v461);
    sub_1B863B8(&UserMaster_TypeInfo, v462);
    sub_1B863B8(&UserNpcSvtRecordMaster_TypeInfo, v463);
    sub_1B863B8(&UserPaymentLimitMaster_TypeInfo, v464);
    sub_1B863B8(&UserPresentBoxMaster_TypeInfo, v465);
    sub_1B863B8(&UserPresentHistoryMaster_TypeInfo, v466);
    sub_1B863B8(&UserPrivilegeMaster_TypeInfo, v467);
    sub_1B863B8(&UserQuestInfoMaster_TypeInfo, v468);
    sub_1B863B8(&UserQuestMaster_TypeInfo, v469);
    sub_1B863B8(&UserQuestRecordMaster_TypeInfo, v470);
    sub_1B863B8(&UserQuestRouteMaster_TypeInfo, v471);
    sub_1B863B8(&UserRecommendFollowerMaster_TypeInfo, v472);
    sub_1B863B8(&UserRecommendSupportMaster_TypeInfo, v473);
    sub_1B863B8(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v474);
    sub_1B863B8(&UserServantAppendPassiveSkillMaster_TypeInfo, v475);
    sub_1B863B8(&UserServantCollectionMaster_TypeInfo, v476);
    sub_1B863B8(&UserServantCommandCardMaster_TypeInfo, v477);
    sub_1B863B8(&UserServantCommandCodeMaster_TypeInfo, v478);
    sub_1B863B8(&UserServantLeaderMaster_TypeInfo, v479);
    sub_1B863B8(&UserServantMaster_TypeInfo, v480);
    sub_1B863B8(&UserServantStorageMaster_TypeInfo, v481);
    sub_1B863B8(&UserServantVoicePlayedMaster_TypeInfo, v482);
    sub_1B863B8(&UserShopMaster_TypeInfo, v483);
    sub_1B863B8(&UserSubEquipMaster_TypeInfo, v484);
    sub_1B863B8(&UserSuperBossMaster_TypeInfo, v485);
    sub_1B863B8(&UserSupportDeckMaster_TypeInfo, v486);
    sub_1B863B8(&UserSvtCoinMaster_TypeInfo, v487);
    sub_1B863B8(&UserSvtFirstGetTimeMaster_TypeInfo, v488);
    sub_1B863B8(&ViewEnemyMaster_TypeInfo, v489);
    sub_1B863B8(&ViewGachaFeaturedServantMaster_TypeInfo, v490);
    sub_1B863B8(&ViewQuestEnemyInfoMaster_TypeInfo, v491);
    sub_1B863B8(&ViewQuestInfoMaster_TypeInfo, v492);
    sub_1B863B8(&ViewWaveEnemyMaster_TypeInfo, v493);
    sub_1B863B8(&VoiceClosedMessageMaster_TypeInfo, v494);
    sub_1B863B8(&VoiceCondMaster_TypeInfo, v495);
    sub_1B863B8(&VoiceMaster_TypeInfo, v496);
    sub_1B863B8(&VoiceMaterialCondMaster_TypeInfo, v497);
    sub_1B863B8(&VoicePlayCondMaster_TypeInfo, v498);
    sub_1B863B8(&VoicePlayGroupMaster_TypeInfo, v499);
    sub_1B863B8(&VoiceReleaseMaster_TypeInfo, v500);
    sub_1B863B8(&WarAddMaster_TypeInfo, v501);
    sub_1B863B8(&WarBoardAIMaster_TypeInfo, v502);
    sub_1B863B8(&WarBoardActionPointClassMaster_TypeInfo, v503);
    sub_1B863B8(&WarBoardActionPointMaster_TypeInfo, v504);
    sub_1B863B8(&WarBoardActionTrendConditionMaster_TypeInfo, v505);
    sub_1B863B8(&WarBoardActionTrendGroupMaster_TypeInfo, v506);
    sub_1B863B8(&WarBoardActionTrendMaster_TypeInfo, v507);
    sub_1B863B8(&WarBoardCommonReleaseMaster_TypeInfo, v508);
    sub_1B863B8(&WarBoardDataMaster_TypeInfo, v509);
    sub_1B863B8(&WarBoardEffectMaster_TypeInfo, v510);
    sub_1B863B8(&WarBoardEventMaster_TypeInfo, v511);
    sub_1B863B8(&WarBoardEventScriptMaster_TypeInfo, v512);
    sub_1B863B8(&WarBoardFutureActionTrendMaster_TypeInfo, v513);
    sub_1B863B8(&WarBoardIndividualityClassMaster_TypeInfo, v514);
    sub_1B863B8(&WarBoardItemMaster_TypeInfo, v515);
    sub_1B863B8(&WarBoardMaster_TypeInfo, v516);
    sub_1B863B8(&WarBoardMessageMaster_TypeInfo, v517);
    sub_1B863B8(&WarBoardMessageScriptMaster_TypeInfo, v518);
    sub_1B863B8(&WarBoardOnboardSkillMaster_TypeInfo, v519);
    sub_1B863B8(&WarBoardPartySkillMaster_TypeInfo, v520);
    sub_1B863B8(&WarBoardQuestMaster_TypeInfo, v521);
    sub_1B863B8(&WarBoardRatingBaseMaster_TypeInfo, v522);
    sub_1B863B8(&WarBoardRatingOffsetGroupMaster_TypeInfo, v523);
    sub_1B863B8(&WarBoardRatingOffsetMaster_TypeInfo, v524);
    sub_1B863B8(&WarBoardReinforcementsMaster_TypeInfo, v525);
    sub_1B863B8(&WarBoardRoadMaster_TypeInfo, v526);
    sub_1B863B8(&WarBoardSquareIndexGroupMaster_TypeInfo, v527);
    sub_1B863B8(&WarBoardSquareMaster_TypeInfo, v528);
    sub_1B863B8(&WarBoardStageBossMaster_TypeInfo, v529);
    sub_1B863B8(&WarBoardStageDetailMaster_TypeInfo, v530);
    sub_1B863B8(&WarBoardStageLayoutMaster_TypeInfo, v531);
    sub_1B863B8(&WarBoardStageMaster_TypeInfo, v532);
    sub_1B863B8(&WarBoardStageNpcMaster_TypeInfo, v533);
    sub_1B863B8(&WarBoardStagePieceDetailMaster_TypeInfo, v534);
    sub_1B863B8(&WarBoardStageReinforcementsMaster_TypeInfo, v535);
    sub_1B863B8(&WarBoardStageWallMaster_TypeInfo, v536);
    sub_1B863B8(&WarBoardTacticalTrendMaster_TypeInfo, v537);
    sub_1B863B8(&WarBoardTreasureMaster_TypeInfo, v538);
    sub_1B863B8(&WarGroupIgnoreMaster_TypeInfo, v539);
    sub_1B863B8(&WarGroupMaster_TypeInfo, v540);
    sub_1B863B8(&WarMaster_TypeInfo, v541);
    sub_1B863B8(&WarMessageMaster_TypeInfo, v542);
    sub_1B863B8(&WarQuestSelectionMaster_TypeInfo, v543);
    sub_1B863B8(&WarReleaseMaster_TypeInfo, v544);
    byte_4A4DFC1 = 1;
  }
  v545 = (DataMasterBase_array *)sub_1B86460(DataMasterBase___TypeInfo, 543LL);
  v546 = (ServantMaster_o *)sub_1B86604(ServantMaster_TypeInfo);
  ServantMaster___ctor(v546, 0LL);
  if ( !v545 )
    sub_1B86614(v547, v548);
  if ( v546 )
  {
    v547 = sub_1B864F4(v546, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  p_max_length = &v545->max_length;
  if ( !v545->max_length )
    goto LABEL_1634;
  v545->m_Items[0] = (DataMasterBase_o *)v546;
  sub_1B8635C((CGThumbnailListItem_o *)v545->m_Items, (int32_t)v546, v549, v550);
  v552 = (ServantClassMaster_o *)sub_1B86604(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v552, 0LL);
  if ( v552 )
  {
    v547 = sub_1B864F4(v552, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1634;
  v545->m_Items[1] = (DataMasterBase_o *)v552;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[1], (int32_t)v552, v553, v554);
  v555 = (ServantCommentMaster_o *)sub_1B86604(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v555, 0LL);
  if ( v555 )
  {
    v547 = sub_1B864F4(v555, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1634;
  v545->m_Items[2] = (DataMasterBase_o *)v555;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[2], (int32_t)v555, v556, v557);
  v558 = (ServantProfileMaster_o *)sub_1B86604(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v558, 0LL);
  if ( v558 )
  {
    v547 = sub_1B864F4(v558, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1634;
  v545->m_Items[3] = (DataMasterBase_o *)v558;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[3], (int32_t)v558, v559, v560);
  v561 = (WarMaster_o *)sub_1B86604(WarMaster_TypeInfo);
  WarMaster___ctor(v561, 0LL);
  if ( v561 )
  {
    v547 = sub_1B864F4(v561, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1634;
  v545->m_Items[4] = (DataMasterBase_o *)v561;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[4], (int32_t)v561, v562, v563);
  v564 = (UserMaster_o *)sub_1B86604(UserMaster_TypeInfo);
  UserMaster___ctor(v564, 0LL);
  if ( v564 )
  {
    v547 = sub_1B864F4(v564, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1634;
  v545->m_Items[5] = (DataMasterBase_o *)v564;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[5], (int32_t)v564, v565, v566);
  v567 = (UserGameMaster_o *)sub_1B86604(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v567, 0LL);
  if ( v567 )
  {
    v547 = sub_1B864F4(v567, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1634;
  v545->m_Items[6] = (DataMasterBase_o *)v567;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[6], (int32_t)v567, v568, v569);
  v570 = (TblUserMaster_o *)sub_1B86604(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v570, 0LL);
  if ( v570 )
  {
    v547 = sub_1B864F4(v570, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1634;
  v545->m_Items[7] = (DataMasterBase_o *)v570;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[7], (int32_t)v570, v571, v572);
  v573 = (UserItemMaster_o *)sub_1B86604(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v573, 0LL);
  if ( v573 )
  {
    v547 = sub_1B864F4(v573, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1634;
  v545->m_Items[8] = (DataMasterBase_o *)v573;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[8], (int32_t)v573, v574, v575);
  v576 = (UserServantMaster_o *)sub_1B86604(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v576, 0LL);
  if ( v576 )
  {
    v547 = sub_1B864F4(v576, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1634;
  v545->m_Items[9] = (DataMasterBase_o *)v576;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[9], (int32_t)v576, v577, v578);
  v579 = (UserServantStorageMaster_o *)sub_1B86604(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v579, 0LL);
  if ( v579 )
  {
    v547 = sub_1B864F4(v579, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1634;
  v545->m_Items[10] = (DataMasterBase_o *)v579;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[10], (int32_t)v579, v580, v581);
  v582 = (UserAccessaryMaster_o *)sub_1B86604(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v582, 0LL);
  if ( v582 )
  {
    v547 = sub_1B864F4(v582, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1634;
  v545->m_Items[11] = (DataMasterBase_o *)v582;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[11], (int32_t)v582, v583, v584);
  v585 = (UserQuestMaster_o *)sub_1B86604(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v585, 0LL);
  if ( v585 )
  {
    v547 = sub_1B864F4(v585, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1634;
  v545->m_Items[12] = (DataMasterBase_o *)v585;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[12], (int32_t)v585, v586, v587);
  v588 = (BattleMaster_o *)sub_1B86604(BattleMaster_TypeInfo);
  BattleMaster___ctor(v588, 0LL);
  if ( v588 )
  {
    v547 = sub_1B864F4(v588, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1634;
  v545->m_Items[13] = (DataMasterBase_o *)v588;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[13], (int32_t)v588, v589, v590);
  v591 = (OtherUserGameMaster_o *)sub_1B86604(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v591, 0LL);
  if ( v591 )
  {
    v547 = sub_1B864F4(v591, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1634;
  v545->m_Items[14] = (DataMasterBase_o *)v591;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[14], (int32_t)v591, v592, v593);
  v594 = (TblFriendMaster_o *)sub_1B86604(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v594, 0LL);
  if ( v594 )
  {
    v547 = sub_1B864F4(v594, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1634;
  v545->m_Items[15] = (DataMasterBase_o *)v594;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[15], (int32_t)v594, v595, v596);
  v597 = (AreaMaster_o *)sub_1B86604(AreaMaster_TypeInfo);
  AreaMaster___ctor(v597, 0LL);
  if ( v597 )
  {
    v547 = sub_1B864F4(v597, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1634;
  v545->m_Items[16] = (DataMasterBase_o *)v597;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[16], (int32_t)v597, v598, v599);
  v600 = (ServantCardMaster_o *)sub_1B86604(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v600, 0LL);
  if ( v600 )
  {
    v547 = sub_1B864F4(v600, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1634;
  v545->m_Items[17] = (DataMasterBase_o *)v600;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[17], (int32_t)v600, v601, v602);
  v603 = (EventMaster_o *)sub_1B86604(EventMaster_TypeInfo);
  EventMaster___ctor(v603, 0LL);
  if ( v603 )
  {
    v547 = sub_1B864F4(v603, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1634;
  v545->m_Items[18] = (DataMasterBase_o *)v603;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[18], (int32_t)v603, v604, v605);
  v606 = (ItemMaster_o *)sub_1B86604(ItemMaster_TypeInfo);
  ItemMaster___ctor(v606, 0LL);
  if ( v606 )
  {
    v547 = sub_1B864F4(v606, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1634;
  v545->m_Items[19] = (DataMasterBase_o *)v606;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[19], (int32_t)v606, v607, v608);
  v609 = (QuestMaster_o *)sub_1B86604(QuestMaster_TypeInfo);
  QuestMaster___ctor(v609, 0LL);
  if ( v609 )
  {
    v547 = sub_1B864F4(v609, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1634;
  v545->m_Items[20] = (DataMasterBase_o *)v609;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[20], (int32_t)v609, v610, v611);
  v612 = (QuestAddMaster_o *)sub_1B86604(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v612, 0LL);
  if ( v612 )
  {
    v547 = sub_1B864F4(v612, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1634;
  v545->m_Items[21] = (DataMasterBase_o *)v612;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[21], (int32_t)v612, v613, v614);
  v615 = (QuestReleaseMaster_o *)sub_1B86604(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v615, 0LL);
  if ( v615 )
  {
    v547 = sub_1B864F4(v615, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1634;
  v545->m_Items[22] = (DataMasterBase_o *)v615;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[22], (int32_t)v615, v616, v617);
  v618 = (QuestDateRangeMaster_o *)sub_1B86604(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v618, 0LL);
  if ( v618 )
  {
    v547 = sub_1B864F4(v618, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1634;
  v545->m_Items[23] = (DataMasterBase_o *)v618;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[23], (int32_t)v618, v619, v620);
  v621 = (QuestPhaseMaster_o *)sub_1B86604(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v621, 0LL);
  if ( v621 )
  {
    v547 = sub_1B864F4(v621, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1634;
  v545->m_Items[24] = (DataMasterBase_o *)v621;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[24], (int32_t)v621, v622, v623);
  v624 = (QuestPhaseDetailMaster_o *)sub_1B86604(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v624, 0LL);
  if ( v624 )
  {
    v547 = sub_1B864F4(v624, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1634;
  v545->m_Items[25] = (DataMasterBase_o *)v624;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[25], (int32_t)v624, v625, v626);
  v627 = (QuestGroupMaster_o *)sub_1B86604(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v627, 0LL);
  if ( v627 )
  {
    v547 = sub_1B864F4(v627, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1634;
  v545->m_Items[26] = (DataMasterBase_o *)v627;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[26], (int32_t)v627, v628, v629);
  v630 = (QuestRandomGroupMaster_o *)sub_1B86604(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v630, 0LL);
  if ( v630 )
  {
    v547 = sub_1B864F4(v630, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1634;
  v545->m_Items[27] = (DataMasterBase_o *)v630;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[27], (int32_t)v630, v631, v632);
  v633 = (QuestConsumeItemMaster_o *)sub_1B86604(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v633, 0LL);
  if ( v633 )
  {
    v547 = sub_1B864F4(v633, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1634;
  v545->m_Items[28] = (DataMasterBase_o *)v633;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[28], (int32_t)v633, v634, v635);
  v636 = (QuestMessageMaster_o *)sub_1B86604(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v636, 0LL);
  if ( v636 )
  {
    v547 = sub_1B864F4(v636, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1634;
  v545->m_Items[29] = (DataMasterBase_o *)v636;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[29], (int32_t)v636, v637, v638);
  v639 = (UserQuestInfoMaster_o *)sub_1B86604(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v639, 0LL);
  if ( v639 )
  {
    v547 = sub_1B864F4(v639, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1634;
  v545->m_Items[30] = (DataMasterBase_o *)v639;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[30], (int32_t)v639, v640, v641);
  v642 = (UserQuestRecordMaster_o *)sub_1B86604(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v642, 0LL);
  if ( v642 )
  {
    v547 = sub_1B864F4(v642, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1634;
  v545->m_Items[31] = (DataMasterBase_o *)v642;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[31], (int32_t)v642, v643, v644);
  v645 = (ViewQuestInfoMaster_o *)sub_1B86604(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v645, 0LL);
  if ( v645 )
  {
    v547 = sub_1B864F4(v645, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1634;
  v545->m_Items[32] = (DataMasterBase_o *)v645;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[32], (int32_t)v645, v646, v647);
  v648 = (ViewEnemyMaster_o *)sub_1B86604(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v648, 0LL);
  if ( v648 )
  {
    v547 = sub_1B864F4(v648, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1634;
  v545->m_Items[33] = (DataMasterBase_o *)v648;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[33], (int32_t)v648, v649, v650);
  v651 = (ViewQuestEnemyInfoMaster_o *)sub_1B86604(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v651, 0LL);
  if ( v651 )
  {
    v547 = sub_1B864F4(v651, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1634;
  v545->m_Items[34] = (DataMasterBase_o *)v651;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[34], (int32_t)v651, v652, v653);
  v654 = (BlankEarthSpotMaster_o *)sub_1B86604(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v654, 0LL);
  if ( v654 )
  {
    v547 = sub_1B864F4(v654, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1634;
  v545->m_Items[35] = (DataMasterBase_o *)v654;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[35], (int32_t)v654, v655, v656);
  v657 = (BlankEarthSpotAddMaster_o *)sub_1B86604(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v657, 0LL);
  if ( v657 )
  {
    v547 = sub_1B864F4(v657, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1634;
  v545->m_Items[36] = (DataMasterBase_o *)v657;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[36], (int32_t)v657, v658, v659);
  v660 = (SpotMaster_o *)sub_1B86604(SpotMaster_TypeInfo);
  SpotMaster___ctor(v660, 0LL);
  if ( v660 )
  {
    v547 = sub_1B864F4(v660, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1634;
  v545->m_Items[37] = (DataMasterBase_o *)v660;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[37], (int32_t)v660, v661, v662);
  v663 = (SpotImageMaster_o *)sub_1B86604(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v663, 0LL);
  if ( v663 )
  {
    v547 = sub_1B864F4(v663, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1634;
  v545->m_Items[38] = (DataMasterBase_o *)v663;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[38], (int32_t)v663, v664, v665);
  v666 = (SpotRoadMaster_o *)sub_1B86604(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v666, 0LL);
  if ( v666 )
  {
    v547 = sub_1B864F4(v666, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1634;
  v545->m_Items[39] = (DataMasterBase_o *)v666;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[39], (int32_t)v666, v667, v668);
  v669 = (SpotPathMaster_o *)sub_1B86604(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v669, 0LL);
  if ( v669 )
  {
    v547 = sub_1B864F4(v669, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1634;
  v545->m_Items[40] = (DataMasterBase_o *)v669;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[40], (int32_t)v669, v670, v671);
  v672 = (SpotAddMaster_o *)sub_1B86604(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v672, 0LL);
  if ( v672 )
  {
    v547 = sub_1B864F4(v672, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1634;
  v545->m_Items[41] = (DataMasterBase_o *)v672;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[41], (int32_t)v672, v673, v674);
  v675 = (MapGimmickMaster_o *)sub_1B86604(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v675, 0LL);
  if ( v675 )
  {
    v547 = sub_1B864F4(v675, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1634;
  v545->m_Items[42] = (DataMasterBase_o *)v675;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[42], (int32_t)v675, v676, v677);
  v678 = (GiftMaster_o *)sub_1B86604(GiftMaster_TypeInfo);
  GiftMaster___ctor(v678, 0LL);
  if ( v678 )
  {
    v547 = sub_1B864F4(v678, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1634;
  v545->m_Items[43] = (DataMasterBase_o *)v678;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[43], (int32_t)v678, v679, v680);
  v681 = (GiftAddMaster_o *)sub_1B86604(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v681, 0LL);
  if ( v681 )
  {
    v547 = sub_1B864F4(v681, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1634;
  v545->m_Items[44] = (DataMasterBase_o *)v681;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[44], (int32_t)v681, v682, v683);
  v684 = (ShopMaster_o *)sub_1B86604(ShopMaster_TypeInfo);
  ShopMaster___ctor(v684, 0LL);
  if ( v684 )
  {
    v547 = sub_1B864F4(v684, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1634;
  v545->m_Items[45] = (DataMasterBase_o *)v684;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[45], (int32_t)v684, v685, v686);
  v687 = (StoneShopMaster_o *)sub_1B86604(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v687, 0LL);
  if ( v687 )
  {
    v547 = sub_1B864F4(v687, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1634;
  v545->m_Items[46] = (DataMasterBase_o *)v687;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[46], (int32_t)v687, v688, v689);
  v690 = (BankShopMaster_o *)sub_1B86604(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v690, 0LL);
  if ( v690 )
  {
    v547 = sub_1B864F4(v690, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1634;
  v545->m_Items[47] = (DataMasterBase_o *)v690;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[47], (int32_t)v690, v691, v692);
  v693 = (ShopScriptMaster_o *)sub_1B86604(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v693, 0LL);
  if ( v693 )
  {
    v547 = sub_1B864F4(v693, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1634;
  v545->m_Items[48] = (DataMasterBase_o *)v693;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[48], (int32_t)v693, v694, v695);
  v696 = (StageMaster_o *)sub_1B86604(StageMaster_TypeInfo);
  StageMaster___ctor(v696, 0LL);
  if ( v696 )
  {
    v547 = sub_1B864F4(v696, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1634;
  v545->m_Items[49] = (DataMasterBase_o *)v696;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[49], (int32_t)v696, v697, v698);
  v699 = (ServantGroupMaster_o *)sub_1B86604(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v699, 0LL);
  if ( v699 )
  {
    v547 = sub_1B864F4(v699, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1634;
  v545->m_Items[50] = (DataMasterBase_o *)v699;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[50], (int32_t)v699, v700, v701);
  v702 = (ServantLimitMaster_o *)sub_1B86604(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v702, 0LL);
  if ( v702 )
  {
    v547 = sub_1B864F4(v702, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1634;
  v545->m_Items[51] = (DataMasterBase_o *)v702;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[51], (int32_t)v702, v703, v704);
  v705 = (ServantLimitAddMaster_o *)sub_1B86604(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v705, 0LL);
  if ( v705 )
  {
    v547 = sub_1B864F4(v705, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1634;
  v545->m_Items[52] = (DataMasterBase_o *)v705;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[52], (int32_t)v705, v706, v707);
  v708 = (ServantSkillMaster_o *)sub_1B86604(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v708, 0LL);
  if ( v708 )
  {
    v547 = sub_1B864F4(v708, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1634;
  v545->m_Items[53] = (DataMasterBase_o *)v708;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[53], (int32_t)v708, v709, v710);
  v711 = (ServantPassiveSkillMaster_o *)sub_1B86604(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v711, 0LL);
  if ( v711 )
  {
    v547 = sub_1B864F4(v711, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1634;
  v545->m_Items[54] = (DataMasterBase_o *)v711;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[54], (int32_t)v711, v712, v713);
  v714 = (BgmMaster_o *)sub_1B86604(BgmMaster_TypeInfo);
  BgmMaster___ctor(v714, 0LL);
  if ( v714 )
  {
    v547 = sub_1B864F4(v714, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1634;
  v545->m_Items[55] = (DataMasterBase_o *)v714;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[55], (int32_t)v714, v715, v716);
  v717 = (ServantScriptMaster_o *)sub_1B86604(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v717, 0LL);
  if ( v717 )
  {
    v547 = sub_1B864F4(v717, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1634;
  v545->m_Items[56] = (DataMasterBase_o *)v717;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[56], (int32_t)v717, v718, v719);
  v720 = (NewsMaster_o *)sub_1B86604(NewsMaster_TypeInfo);
  NewsMaster___ctor(v720, 0LL);
  if ( v720 )
  {
    v547 = sub_1B864F4(v720, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1634;
  v545->m_Items[57] = (DataMasterBase_o *)v720;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[57], (int32_t)v720, v721, v722);
  v723 = (TelopMaster_o *)sub_1B86604(TelopMaster_TypeInfo);
  TelopMaster___ctor(v723, 0LL);
  if ( v723 )
  {
    v547 = sub_1B864F4(v723, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1634;
  v545->m_Items[58] = (DataMasterBase_o *)v723;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[58], (int32_t)v723, v724, v725);
  v726 = (UserExpMaster_o *)sub_1B86604(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v726, 0LL);
  if ( v726 )
  {
    v547 = sub_1B864F4(v726, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1634;
  v545->m_Items[59] = (DataMasterBase_o *)v726;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[59], (int32_t)v726, v727, v728);
  v729 = (TreasureDvcMaster_o *)sub_1B86604(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v729, 0LL);
  if ( v729 )
  {
    v547 = sub_1B864F4(v729, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1634;
  v545->m_Items[60] = (DataMasterBase_o *)v729;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[60], (int32_t)v729, v730, v731);
  v732 = (ServantTreasureDvcMaster_o *)sub_1B86604(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v732, 0LL);
  if ( v732 )
  {
    v547 = sub_1B864F4(v732, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1634;
  v545->m_Items[61] = (DataMasterBase_o *)v732;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[61], (int32_t)v732, v733, v734);
  v735 = (SkillMaster_o *)sub_1B86604(SkillMaster_TypeInfo);
  SkillMaster___ctor(v735, 0LL);
  if ( v735 )
  {
    v547 = sub_1B864F4(v735, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1634;
  v545->m_Items[62] = (DataMasterBase_o *)v735;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[62], (int32_t)v735, v736, v737);
  v738 = (SkillLvMaster_o *)sub_1B86604(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v738, 0LL);
  if ( v738 )
  {
    v547 = sub_1B864F4(v738, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1634;
  v545->m_Items[63] = (DataMasterBase_o *)v738;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[63], (int32_t)v738, v739, v740);
  v741 = (SkillDetailMaster_o *)sub_1B86604(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v741, 0LL);
  if ( v741 )
  {
    v547 = sub_1B864F4(v741, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1634;
  v545->m_Items[64] = (DataMasterBase_o *)v741;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[64], (int32_t)v741, v742, v743);
  v744 = (CommandSpellMaster_o *)sub_1B86604(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v744, 0LL);
  if ( v744 )
  {
    v547 = sub_1B864F4(v744, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1634;
  v545->m_Items[65] = (DataMasterBase_o *)v744;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[65], (int32_t)v744, v745, v746);
  v747 = (EquipMaster_o *)sub_1B86604(EquipMaster_TypeInfo);
  EquipMaster___ctor(v747, 0LL);
  if ( v747 )
  {
    v547 = sub_1B864F4(v747, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1634;
  v545->m_Items[66] = (DataMasterBase_o *)v747;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[66], (int32_t)v747, v748, v749);
  v750 = (EquipExpMaster_o *)sub_1B86604(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v750, 0LL);
  if ( v750 )
  {
    v547 = sub_1B864F4(v750, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1634;
  v545->m_Items[67] = (DataMasterBase_o *)v750;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[67], (int32_t)v750, v751, v752);
  v753 = (EquipSkillMaster_o *)sub_1B86604(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v753, 0LL);
  if ( v753 )
  {
    v547 = sub_1B864F4(v753, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1634;
  v545->m_Items[68] = (DataMasterBase_o *)v753;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[68], (int32_t)v753, v754, v755);
  v756 = (SubEquipMaster_o *)sub_1B86604(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v756, 0LL);
  if ( v756 )
  {
    v547 = sub_1B864F4(v756, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1634;
  v545->m_Items[69] = (DataMasterBase_o *)v756;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[69], (int32_t)v756, v757, v758);
  v759 = (AccessaryMaster_o *)sub_1B86604(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v759, 0LL);
  if ( v759 )
  {
    v547 = sub_1B864F4(v759, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1634;
  v545->m_Items[70] = (DataMasterBase_o *)v759;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[70], (int32_t)v759, v760, v761);
  v762 = (UserPresentBoxMaster_o *)sub_1B86604(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v762, 0LL);
  if ( v762 )
  {
    v547 = sub_1B864F4(v762, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1634;
  v545->m_Items[71] = (DataMasterBase_o *)v762;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[71], (int32_t)v762, v763, v764);
  v765 = (UserDeckMaster_o *)sub_1B86604(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v765, 0LL);
  if ( v765 )
  {
    v547 = sub_1B864F4(v765, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1634;
  v545->m_Items[72] = (DataMasterBase_o *)v765;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[72], (int32_t)v765, v766, v767);
  v768 = (UserSubEquipMaster_o *)sub_1B86604(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v768, 0LL);
  if ( v768 )
  {
    v547 = sub_1B864F4(v768, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1634;
  v545->m_Items[73] = (DataMasterBase_o *)v768;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[73], (int32_t)v768, v769, v770);
  v771 = (GachaMaster_o *)sub_1B86604(GachaMaster_TypeInfo);
  GachaMaster___ctor(v771, 0LL);
  if ( v771 )
  {
    v547 = sub_1B864F4(v771, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1634;
  v545->m_Items[74] = (DataMasterBase_o *)v771;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[74], (int32_t)v771, v772, v773);
  v774 = (GachaImageMaster_o *)sub_1B86604(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v774, 0LL);
  if ( v774 )
  {
    v547 = sub_1B864F4(v774, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1634;
  v545->m_Items[75] = (DataMasterBase_o *)v774;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[75], (int32_t)v774, v775, v776);
  v777 = (UserGachaMaster_o *)sub_1B86604(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v777, 0LL);
  if ( v777 )
  {
    v547 = sub_1B864F4(v777, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1634;
  v545->m_Items[76] = (DataMasterBase_o *)v777;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[76], (int32_t)v777, v778, v779);
  v780 = (UserEquipMaster_o *)sub_1B86604(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v780, 0LL);
  if ( v780 )
  {
    v547 = sub_1B864F4(v780, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1634;
  v545->m_Items[77] = (DataMasterBase_o *)v780;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[77], (int32_t)v780, v781, v782);
  v783 = (UserServantCollectionMaster_o *)sub_1B86604(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v783, 0LL);
  if ( v783 )
  {
    v547 = sub_1B864F4(v783, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1634;
  v545->m_Items[78] = (DataMasterBase_o *)v783;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[78], (int32_t)v783, v784, v785);
  v786 = (FriendshipMaster_o *)sub_1B86604(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v786, 0LL);
  if ( v786 )
  {
    v547 = sub_1B864F4(v786, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1634;
  v545->m_Items[79] = (DataMasterBase_o *)v786;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[79], (int32_t)v786, v787, v788);
  v789 = (GachaTicketMaster_o *)sub_1B86604(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v789, 0LL);
  if ( v789 )
  {
    v547 = sub_1B864F4(v789, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1634;
  v545->m_Items[80] = (DataMasterBase_o *)v789;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[80], (int32_t)v789, v790, v791);
  v792 = (UserFormationMaster_o *)sub_1B86604(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v792, 0LL);
  if ( v792 )
  {
    v547 = sub_1B864F4(v792, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1634;
  v545->m_Items[81] = (DataMasterBase_o *)v792;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[81], (int32_t)v792, v793, v794);
  v795 = (FunctionMaster_o *)sub_1B86604(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v795, 0LL);
  if ( v795 )
  {
    v547 = sub_1B864F4(v795, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1634;
  v545->m_Items[82] = (DataMasterBase_o *)v795;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[82], (int32_t)v795, v796, v797);
  v798 = (BuffMaster_o *)sub_1B86604(BuffMaster_TypeInfo);
  BuffMaster___ctor(v798, 0LL);
  if ( v798 )
  {
    v547 = sub_1B864F4(v798, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1634;
  v545->m_Items[83] = (DataMasterBase_o *)v798;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[83], (int32_t)v798, v799, v800);
  v801 = (GachaReleaseMaster_o *)sub_1B86604(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v801, 0LL);
  if ( v801 )
  {
    v547 = sub_1B864F4(v801, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1634;
  v545->m_Items[84] = (DataMasterBase_o *)v801;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[84], (int32_t)v801, v802, v803);
  v804 = (CombineQpMaster_o *)sub_1B86604(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v804, 0LL);
  if ( v804 )
  {
    v547 = sub_1B864F4(v804, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1634;
  v545->m_Items[85] = (DataMasterBase_o *)v804;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[85], (int32_t)v804, v805, v806);
  v807 = (CombineMaterialMaster_o *)sub_1B86604(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v807, 0LL);
  if ( v807 )
  {
    v547 = sub_1B864F4(v807, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1634;
  v545->m_Items[86] = (DataMasterBase_o *)v807;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[86], (int32_t)v807, v808, v809);
  v810 = (EventCombineMaster_o *)sub_1B86604(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v810, 0LL);
  if ( v810 )
  {
    v547 = sub_1B864F4(v810, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1634;
  v545->m_Items[87] = (DataMasterBase_o *)v810;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[87], (int32_t)v810, v811, v812);
  v813 = (ServantExpMaster_o *)sub_1B86604(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v813, 0LL);
  if ( v813 )
  {
    v547 = sub_1B864F4(v813, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1634;
  v545->m_Items[88] = (DataMasterBase_o *)v813;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[88], (int32_t)v813, v814, v815);
  v816 = (CombineSkillMaster_o *)sub_1B86604(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v816, 0LL);
  if ( v816 )
  {
    v547 = sub_1B864F4(v816, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1634;
  v545->m_Items[89] = (DataMasterBase_o *)v816;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[89], (int32_t)v816, v817, v818);
  v819 = (CombineTdMaster_o *)sub_1B86604(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v819, 0LL);
  if ( v819 )
  {
    v547 = sub_1B864F4(v819, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1634;
  v545->m_Items[90] = (DataMasterBase_o *)v819;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[90], (int32_t)v819, v820, v821);
  v822 = (EventQuestMaster_o *)sub_1B86604(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v822, 0LL);
  if ( v822 )
  {
    v547 = sub_1B864F4(v822, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1634;
  v545->m_Items[91] = (DataMasterBase_o *)v822;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[91], (int32_t)v822, v823, v824);
  v825 = (EventCampaignMaster_o *)sub_1B86604(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v825, 0LL);
  if ( v825 )
  {
    v547 = sub_1B864F4(v825, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1634;
  v545->m_Items[92] = (DataMasterBase_o *)v825;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[92], (int32_t)v825, v826, v827);
  v828 = (IllustratorMaster_o *)sub_1B86604(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v828, 0LL);
  if ( v828 )
  {
    v547 = sub_1B864F4(v828, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1634;
  v545->m_Items[93] = (DataMasterBase_o *)v828;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[93], (int32_t)v828, v829, v830);
  v831 = (CvMaster_o *)sub_1B86604(CvMaster_TypeInfo);
  CvMaster___ctor(v831, 0LL);
  if ( v831 )
  {
    v547 = sub_1B864F4(v831, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1634;
  v545->m_Items[94] = (DataMasterBase_o *)v831;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[94], (int32_t)v831, v832, v833);
  v834 = (TreasureDvcLvMaster_o *)sub_1B86604(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v834, 0LL);
  if ( v834 )
  {
    v547 = sub_1B864F4(v834, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1634;
  v545->m_Items[95] = (DataMasterBase_o *)v834;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[95], (int32_t)v834, v835, v836);
  v837 = (TreasureDvcDetailMaster_o *)sub_1B86604(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v837, 0LL);
  if ( v837 )
  {
    v547 = sub_1B864F4(v837, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1634;
  v545->m_Items[96] = (DataMasterBase_o *)v837;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[96], (int32_t)v837, v838, v839);
  v840 = (UserFollowerMaster_o *)sub_1B86604(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v840, 0LL);
  if ( v840 )
  {
    v547 = sub_1B864F4(v840, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1634;
  v545->m_Items[97] = (DataMasterBase_o *)v840;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[97], (int32_t)v840, v841, v842);
  v843 = (NpcFollowerMaster_o *)sub_1B86604(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v843, 0LL);
  if ( v843 )
  {
    v547 = sub_1B864F4(v843, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1634;
  v545->m_Items[98] = (DataMasterBase_o *)v843;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[98], (int32_t)v843, v844, v845);
  v846 = (NpcServantFollowerMaster_o *)sub_1B86604(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v846, 0LL);
  if ( v846 )
  {
    v547 = sub_1B864F4(v846, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1634;
  v545->m_Items[99] = (DataMasterBase_o *)v846;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[99], (int32_t)v846, v847, v848);
  v849 = (UserEventMaster_o *)sub_1B86604(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v849, 0LL);
  if ( v849 )
  {
    v547 = sub_1B864F4(v849, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1634;
  v545->m_Items[100] = (DataMasterBase_o *)v849;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[100], (int32_t)v849, v850, v851);
  v852 = (UserShopMaster_o *)sub_1B86604(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v852, 0LL);
  if ( v852 )
  {
    v547 = sub_1B864F4(v852, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1634;
  v545->m_Items[101] = (DataMasterBase_o *)v852;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[101], (int32_t)v852, v853, v854);
  v855 = (UserContinueMaster_o *)sub_1B86604(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v855, 0LL);
  if ( v855 )
  {
    v547 = sub_1B864F4(v855, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1634;
  v545->m_Items[102] = (DataMasterBase_o *)v855;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[102], (int32_t)v855, v856, v857);
  v858 = (ConstantMaster_o *)sub_1B86604(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v858, 0LL);
  if ( v858 )
  {
    v547 = sub_1B864F4(v858, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1634;
  v545->m_Items[103] = (DataMasterBase_o *)v858;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[103], (int32_t)v858, v859, v860);
  v861 = (ConstantLongMaster_o *)sub_1B86604(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v861, 0LL);
  if ( v861 )
  {
    v547 = sub_1B864F4(v861, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1634;
  v545->m_Items[104] = (DataMasterBase_o *)v861;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[104], (int32_t)v861, v862, v863);
  v864 = (ConstantStrMaster_o *)sub_1B86604(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v864, 0LL);
  if ( v864 )
  {
    v547 = sub_1B864F4(v864, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1634;
  v545->m_Items[105] = (DataMasterBase_o *)v864;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[105], (int32_t)v864, v865, v866);
  v867 = (AiMaster_o *)sub_1B86604(AiMaster_TypeInfo);
  AiMaster___ctor(v867, 0LL);
  if ( v867 )
  {
    v547 = sub_1B864F4(v867, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1634;
  v545->m_Items[106] = (DataMasterBase_o *)v867;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[106], (int32_t)v867, v868, v869);
  v870 = (AiActMaster_o *)sub_1B86604(AiActMaster_TypeInfo);
  AiActMaster___ctor(v870, 0LL);
  if ( v870 )
  {
    v547 = sub_1B864F4(v870, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1634;
  v545->m_Items[107] = (DataMasterBase_o *)v870;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[107], (int32_t)v870, v871, v872);
  v873 = (AttriRelationMaster_o *)sub_1B86604(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v873, 0LL);
  if ( v873 )
  {
    v547 = sub_1B864F4(v873, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1634;
  v545->m_Items[108] = (DataMasterBase_o *)v873;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[108], (int32_t)v873, v874, v875);
  v876 = (ClassRelationMaster_o *)sub_1B86604(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v876, 0LL);
  if ( v876 )
  {
    v547 = sub_1B864F4(v876, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1634;
  v545->m_Items[109] = (DataMasterBase_o *)v876;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[109], (int32_t)v876, v877, v878);
  v879 = (EffectMaster_o *)sub_1B86604(EffectMaster_TypeInfo);
  EffectMaster___ctor(v879, 0LL);
  if ( v879 )
  {
    v547 = sub_1B864F4(v879, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1634;
  v545->m_Items[110] = (DataMasterBase_o *)v879;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[110], (int32_t)v879, v880, v881);
  v882 = (EquipImageMaster_o *)sub_1B86604(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v882, 0LL);
  if ( v882 )
  {
    v547 = sub_1B864F4(v882, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1634;
  v545->m_Items[111] = (DataMasterBase_o *)v882;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[111], (int32_t)v882, v883, v884);
  v885 = (ServantVoiceMaster_o *)sub_1B86604(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v885, 0LL);
  if ( v885 )
  {
    v547 = sub_1B864F4(v885, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1634;
  v545->m_Items[112] = (DataMasterBase_o *)v885;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[112], (int32_t)v885, v886, v887);
  v888 = (CombineLimitMaster_o *)sub_1B86604(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v888, 0LL);
  if ( v888 )
  {
    v547 = sub_1B864F4(v888, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1634;
  v545->m_Items[113] = (DataMasterBase_o *)v888;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[113], (int32_t)v888, v889, v890);
  v891 = (CardMaster_o *)sub_1B86604(CardMaster_TypeInfo);
  CardMaster___ctor(v891, 0LL);
  if ( v891 )
  {
    v547 = sub_1B864F4(v891, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1634;
  v545->m_Items[114] = (DataMasterBase_o *)v891;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[114], (int32_t)v891, v892, v893);
  v894 = (CombineQpSvtEquipMaster_o *)sub_1B86604(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v894, 0LL);
  if ( v894 )
  {
    v547 = sub_1B864F4(v894, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1634;
  v545->m_Items[115] = (DataMasterBase_o *)v894;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[115], (int32_t)v894, v895, v896);
  v897 = (ServantRarityMaster_o *)sub_1B86604(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v897, 0LL);
  if ( v897 )
  {
    v547 = sub_1B864F4(v897, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1634;
  v545->m_Items[116] = (DataMasterBase_o *)v897;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[116], (int32_t)v897, v898, v899);
  v900 = (SetItemMaster_o *)sub_1B86604(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v900, 0LL);
  if ( v900 )
  {
    v547 = sub_1B864F4(v900, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1634;
  v545->m_Items[117] = (DataMasterBase_o *)v900;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[117], (int32_t)v900, v901, v902);
  v903 = (RecoverMaster_o *)sub_1B86604(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v903, 0LL);
  if ( v903 )
  {
    v547 = sub_1B864F4(v903, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1634;
  v545->m_Items[118] = (DataMasterBase_o *)v903;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[118], (int32_t)v903, v904, v905);
  v906 = (BannerMaster_o *)sub_1B86604(BannerMaster_TypeInfo);
  BannerMaster___ctor(v906, 0LL);
  if ( v906 )
  {
    v547 = sub_1B864F4(v906, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1634;
  v545->m_Items[119] = (DataMasterBase_o *)v906;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[119], (int32_t)v906, v907, v908);
  v909 = (ShopReleaseMaster_o *)sub_1B86604(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v909, 0LL);
  if ( v909 )
  {
    v547 = sub_1B864F4(v909, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1634;
  v545->m_Items[120] = (DataMasterBase_o *)v909;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[120], (int32_t)v909, v910, v911);
  v912 = (EventRewardMaster_o *)sub_1B86604(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v912, 0LL);
  if ( v912 )
  {
    v547 = sub_1B864F4(v912, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1634;
  v545->m_Items[121] = (DataMasterBase_o *)v912;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[121], (int32_t)v912, v913, v914);
  v915 = (EventDetailMaster_o *)sub_1B86604(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v915, 0LL);
  if ( v915 )
  {
    v547 = sub_1B864F4(v915, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1634;
  v545->m_Items[122] = (DataMasterBase_o *)v915;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[122], (int32_t)v915, v916, v917);
  v918 = (EventServantMaster_o *)sub_1B86604(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v918, 0LL);
  if ( v918 )
  {
    v547 = sub_1B864F4(v918, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1634;
  v545->m_Items[123] = (DataMasterBase_o *)v918;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[123], (int32_t)v918, v919, v920);
  v921 = (BoxGachaMaster_o *)sub_1B86604(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v921, 0LL);
  if ( v921 )
  {
    v547 = sub_1B864F4(v921, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1634;
  v545->m_Items[124] = (DataMasterBase_o *)v921;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[124], (int32_t)v921, v922, v923);
  v924 = (BoxGachaBaseMaster_o *)sub_1B86604(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v924, 0LL);
  if ( v924 )
  {
    v547 = sub_1B864F4(v924, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1634;
  v545->m_Items[125] = (DataMasterBase_o *)v924;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[125], (int32_t)v924, v925, v926);
  v927 = (BoxGachaTalkMaster_o *)sub_1B86604(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v927, 0LL);
  if ( v927 )
  {
    v547 = sub_1B864F4(v927, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1634;
  v545->m_Items[126] = (DataMasterBase_o *)v927;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[126], (int32_t)v927, v928, v929);
  v930 = (UserBoxGachaMaster_o *)sub_1B86604(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v930, 0LL);
  if ( v930 )
  {
    v547 = sub_1B864F4(v930, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1634;
  v545->m_Items[127] = (DataMasterBase_o *)v930;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[127], (int32_t)v930, v931, v932);
  v933 = (BoxGachaHistoryMaster_o *)sub_1B86604(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v933, 0LL);
  if ( v933 )
  {
    v547 = sub_1B864F4(v933, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1634;
  v545->m_Items[128] = (DataMasterBase_o *)v933;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[128], (int32_t)v933, v934, v935);
  v936 = (BattleBgMaster_o *)sub_1B86604(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v936, 0LL);
  if ( v936 )
  {
    v547 = sub_1B864F4(v936, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1634;
  v545->m_Items[129] = (DataMasterBase_o *)v936;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[129], (int32_t)v936, v937, v938);
  v939 = (TipsBattleMaster_o *)sub_1B86604(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v939, 0LL);
  if ( v939 )
  {
    v547 = sub_1B864F4(v939, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1634;
  v545->m_Items[130] = (DataMasterBase_o *)v939;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[130], (int32_t)v939, v940, v941);
  v942 = (UserLoginMaster_o *)sub_1B86604(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v942, 0LL);
  if ( v942 )
  {
    v547 = sub_1B864F4(v942, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1634;
  v545->m_Items[131] = (DataMasterBase_o *)v942;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[131], (int32_t)v942, v943, v944);
  v945 = (VoiceMaster_o *)sub_1B86604(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v945, 0LL);
  if ( v945 )
  {
    v547 = sub_1B864F4(v945, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1634;
  v545->m_Items[132] = (DataMasterBase_o *)v945;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[132], (int32_t)v945, v946, v947);
  v948 = (EventRewardExtraMaster_o *)sub_1B86604(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v948, 0LL);
  if ( v948 )
  {
    v547 = sub_1B864F4(v948, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1634;
  v545->m_Items[133] = (DataMasterBase_o *)v948;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[133], (int32_t)v948, v949, v950);
  v951 = (EventMissionMaster_o *)sub_1B86604(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v951, 0LL);
  if ( v951 )
  {
    v547 = sub_1B864F4(v951, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1634;
  v545->m_Items[134] = (DataMasterBase_o *)v951;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[134], (int32_t)v951, v952, v953);
  v954 = (EventMissionActionMaster_o *)sub_1B86604(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v954, 0LL);
  if ( v954 )
  {
    v547 = sub_1B864F4(v954, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1634;
  v545->m_Items[135] = (DataMasterBase_o *)v954;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[135], (int32_t)v954, v955, v956);
  v957 = (EventMissionActionAddMaster_o *)sub_1B86604(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v957, 0LL);
  if ( v957 )
  {
    v547 = sub_1B864F4(v957, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1634;
  v545->m_Items[136] = (DataMasterBase_o *)v957;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[136], (int32_t)v957, v958, v959);
  v960 = (EventMissionConditionMaster_o *)sub_1B86604(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v960, 0LL);
  if ( v960 )
  {
    v547 = sub_1B864F4(v960, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1634;
  v545->m_Items[137] = (DataMasterBase_o *)v960;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[137], (int32_t)v960, v961, v962);
  v963 = (EventMissionCondDetailMaster_o *)sub_1B86604(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v963, 0LL);
  if ( v963 )
  {
    v547 = sub_1B864F4(v963, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1634;
  v545->m_Items[138] = (DataMasterBase_o *)v963;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[138], (int32_t)v963, v964, v965);
  v966 = (EventMissionAddMaster_o *)sub_1B86604(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v966, 0LL);
  if ( v966 )
  {
    v547 = sub_1B864F4(v966, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1634;
  v545->m_Items[139] = (DataMasterBase_o *)v966;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[139], (int32_t)v966, v967, v968);
  v969 = (CompleteMissionMaster_o *)sub_1B86604(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v969, 0LL);
  if ( v969 )
  {
    v547 = sub_1B864F4(v969, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1634;
  v545->m_Items[140] = (DataMasterBase_o *)v969;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[140], (int32_t)v969, v970, v971);
  v972 = (EventRewardSetMaster_o *)sub_1B86604(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v972, 0LL);
  if ( v972 )
  {
    v547 = sub_1B864F4(v972, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1634;
  v545->m_Items[141] = (DataMasterBase_o *)v972;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[141], (int32_t)v972, v973, v974);
  v975 = (UserEventMissionMaster_o *)sub_1B86604(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v975, 0LL);
  if ( v975 )
  {
    v547 = sub_1B864F4(v975, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1634;
  v545->m_Items[142] = (DataMasterBase_o *)v975;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[142], (int32_t)v975, v976, v977);
  v978 = (UserEventMissionCondDetailMaster_o *)sub_1B86604(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v978, 0LL);
  if ( v978 )
  {
    v547 = sub_1B864F4(v978, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1634;
  v545->m_Items[143] = (DataMasterBase_o *)v978;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[143], (int32_t)v978, v979, v980);
  v981 = (BoxGachaBaseDetailMaster_o *)sub_1B86604(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v981, 0LL);
  if ( v981 )
  {
    v547 = sub_1B864F4(v981, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1634;
  v545->m_Items[144] = (DataMasterBase_o *)v981;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[144], (int32_t)v981, v982, v983);
  v984 = (UserServantLeaderMaster_o *)sub_1B86604(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v984, 0LL);
  if ( v984 )
  {
    v547 = sub_1B864F4(v984, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1634;
  v545->m_Items[145] = (DataMasterBase_o *)v984;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[145], (int32_t)v984, v985, v986);
  v987 = (ClosedMessageMaster_o *)sub_1B86604(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v987, 0LL);
  if ( v987 )
  {
    v547 = sub_1B864F4(v987, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1634;
  v545->m_Items[146] = (DataMasterBase_o *)v987;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[146], (int32_t)v987, v988, v989);
  v990 = (FunctionGroupMaster_o *)sub_1B86604(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v990, 0LL);
  if ( v990 )
  {
    v547 = sub_1B864F4(v990, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1634;
  v545->m_Items[147] = (DataMasterBase_o *)v990;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[147], (int32_t)v990, v991, v992);
  v993 = (EventRaidMaster_o *)sub_1B86604(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v993, 0LL);
  if ( v993 )
  {
    v547 = sub_1B864F4(v993, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1634;
  v545->m_Items[148] = (DataMasterBase_o *)v993;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[148], (int32_t)v993, v994, v995);
  v996 = (TotalEventRaidMaster_o *)sub_1B86604(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v996, 0LL);
  if ( v996 )
  {
    v547 = sub_1B864F4(v996, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1634;
  v545->m_Items[149] = (DataMasterBase_o *)v996;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[149], (int32_t)v996, v997, v998);
  v999 = (UserEventRaidMaster_o *)sub_1B86604(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v999, 0LL);
  if ( v999 )
  {
    v547 = sub_1B864F4(v999, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1634;
  v545->m_Items[150] = (DataMasterBase_o *)v999;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[150], (int32_t)v999, v1000, v1001);
  v1002 = (EventPointMaster_o *)sub_1B86604(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v1002, 0LL);
  if ( v1002 )
  {
    v547 = sub_1B864F4(v1002, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1634;
  v545->m_Items[151] = (DataMasterBase_o *)v1002;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[151], (int32_t)v1002, v1003, v1004);
  v1005 = (EventPointGroupMaster_o *)sub_1B86604(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v1005, 0LL);
  if ( v1005 )
  {
    v547 = sub_1B864F4(v1005, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1634;
  v545->m_Items[152] = (DataMasterBase_o *)v1005;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[152], (int32_t)v1005, v1006, v1007);
  v1008 = (TotalEventPointMaster_o *)sub_1B86604(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v1008, 0LL);
  if ( v1008 )
  {
    v547 = sub_1B864F4(v1008, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1634;
  v545->m_Items[153] = (DataMasterBase_o *)v1008;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[153], (int32_t)v1008, v1009, v1010);
  v1011 = (UserEventPointMaster_o *)sub_1B86604(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v1011, 0LL);
  if ( v1011 )
  {
    v547 = sub_1B864F4(v1011, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1634;
  v545->m_Items[154] = (DataMasterBase_o *)v1011;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[154], (int32_t)v1011, v1012, v1013);
  v1014 = (EventPointUpperMaster_o *)sub_1B86604(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v1014, 0LL);
  if ( v1014 )
  {
    v547 = sub_1B864F4(v1014, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1634;
  v545->m_Items[155] = (DataMasterBase_o *)v1014;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[155], (int32_t)v1014, v1015, v1016);
  v1017 = (EventPointUpperReleaseMaster_o *)sub_1B86604(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v1017, 0LL);
  if ( v1017 )
  {
    v547 = sub_1B864F4(v1017, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1634;
  v545->m_Items[156] = (DataMasterBase_o *)v1017;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[156], (int32_t)v1017, v1018, v1019);
  v1020 = (EventRaceMaster_o *)sub_1B86604(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v1020, 0LL);
  if ( v1020 )
  {
    v547 = sub_1B864F4(v1020, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1634;
  v545->m_Items[157] = (DataMasterBase_o *)v1020;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[157], (int32_t)v1020, v1021, v1022);
  v1023 = (EventRaceResultMaster_o *)sub_1B86604(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v1023, 0LL);
  if ( v1023 )
  {
    v547 = sub_1B864F4(v1023, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1634;
  v545->m_Items[158] = (DataMasterBase_o *)v1023;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[158], (int32_t)v1023, v1024, v1025);
  v1026 = (QuestRacePointMaster_o *)sub_1B86604(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v1026, 0LL);
  if ( v1026 )
  {
    v547 = sub_1B864F4(v1026, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1634;
  v545->m_Items[159] = (DataMasterBase_o *)v1026;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[159], (int32_t)v1026, v1027, v1028);
  v1029 = (UserEventRaceMaster_o *)sub_1B86604(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v1029, 0LL);
  if ( v1029 )
  {
    v547 = sub_1B864F4(v1029, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1634;
  v545->m_Items[160] = (DataMasterBase_o *)v1029;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[160], (int32_t)v1029, v1030, v1031);
  v1032 = (EventScriptMaster_o *)sub_1B86604(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v1032, 0LL);
  if ( v1032 )
  {
    v547 = sub_1B864F4(v1032, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1634;
  v545->m_Items[161] = (DataMasterBase_o *)v1032;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[161], (int32_t)v1032, v1033, v1034);
  v1035 = (EventScriptReleaseMaster_o *)sub_1B86604(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v1035, 0LL);
  if ( v1035 )
  {
    v547 = sub_1B864F4(v1035, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1634;
  v545->m_Items[162] = (DataMasterBase_o *)v1035;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[162], (int32_t)v1035, v1036, v1037);
  v1038 = (UserPresentHistoryMaster_o *)sub_1B86604(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v1038, 0LL);
  if ( v1038 )
  {
    v547 = sub_1B864F4(v1038, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1634;
  v545->m_Items[163] = (DataMasterBase_o *)v1038;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[163], (int32_t)v1038, v1039, v1040);
  v1041 = (MstMissionMaster_o *)sub_1B86604(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v1041, 0LL);
  if ( v1041 )
  {
    v547 = sub_1B864F4(v1041, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1634;
  v545->m_Items[164] = (DataMasterBase_o *)v1041;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[164], (int32_t)v1041, v1042, v1043);
  v1044 = (ServantExceedMaster_o *)sub_1B86604(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v1044, 0LL);
  if ( v1044 )
  {
    v547 = sub_1B864F4(v1044, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1634;
  v545->m_Items[165] = (DataMasterBase_o *)v1044;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[165], (int32_t)v1044, v1045, v1046);
  v1047 = (PartialMaintenanceMaster_o *)sub_1B86604(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v1047, 0LL);
  if ( v1047 )
  {
    v547 = sub_1B864F4(v1047, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1634;
  v545->m_Items[166] = (DataMasterBase_o *)v1047;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[166], (int32_t)v1047, v1048, v1049);
  v1050 = (GuideMaster_o *)sub_1B86604(GuideMaster_TypeInfo);
  GuideMaster___ctor(v1050, 0LL);
  if ( v1050 )
  {
    v547 = sub_1B864F4(v1050, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1634;
  v545->m_Items[167] = (DataMasterBase_o *)v1050;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[167], (int32_t)v1050, v1051, v1052);
  v1053 = (MstMissionDisplayInfoMaster_o *)sub_1B86604(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v1053, 0LL);
  if ( v1053 )
  {
    v547 = sub_1B864F4(v1053, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1634;
  v545->m_Items[168] = (DataMasterBase_o *)v1053;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[168], (int32_t)v1053, v1054, v1055);
  v1056 = (GachaGroupMaster_o *)sub_1B86604(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v1056, 0LL);
  if ( v1056 )
  {
    v547 = sub_1B864F4(v1056, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1634;
  v545->m_Items[169] = (DataMasterBase_o *)v1056;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[169], (int32_t)v1056, v1057, v1058);
  v1059 = (QuestResetMaster_o *)sub_1B86604(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v1059, 0LL);
  if ( v1059 )
  {
    v547 = sub_1B864F4(v1059, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1634;
  v545->m_Items[170] = (DataMasterBase_o *)v1059;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[170], (int32_t)v1059, v1060, v1061);
  v1062 = (WarAddMaster_o *)sub_1B86604(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v1062, 0LL);
  if ( v1062 )
  {
    v547 = sub_1B864F4(v1062, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1634;
  v545->m_Items[171] = (DataMasterBase_o *)v1062;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[171], (int32_t)v1062, v1063, v1064);
  v1065 = (EventItemDisplayMaster_o *)sub_1B86604(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v1065, 0LL);
  if ( v1065 )
  {
    v547 = sub_1B864F4(v1065, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1634;
  v545->m_Items[172] = (DataMasterBase_o *)v1065;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[172], (int32_t)v1065, v1066, v1067);
  v1068 = (EventItemDisplayGroupMaster_o *)sub_1B86604(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v1068, 0LL);
  if ( v1068 )
  {
    v547 = sub_1B864F4(v1068, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1634;
  v545->m_Items[173] = (DataMasterBase_o *)v1068;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[173], (int32_t)v1068, v1069, v1070);
  v1071 = (EventItemDisplayReleaseMaster_o *)sub_1B86604(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v1071, 0LL);
  if ( v1071 )
  {
    v547 = sub_1B864F4(v1071, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1634;
  v545->m_Items[174] = (DataMasterBase_o *)v1071;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[174], (int32_t)v1071, v1072, v1073);
  v1074 = (EventTutorialMaster_o *)sub_1B86604(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v1074, 0LL);
  if ( v1074 )
  {
    v547 = sub_1B864F4(v1074, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1634;
  v545->m_Items[175] = (DataMasterBase_o *)v1074;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[175], (int32_t)v1074, v1075, v1076);
  v1077 = (EventTutorialCondMaster_o *)sub_1B86604(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v1077, 0LL);
  if ( v1077 )
  {
    v547 = sub_1B864F4(v1077, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1634;
  v545->m_Items[176] = (DataMasterBase_o *)v1077;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[176], (int32_t)v1077, v1078, v1079);
  v1080 = (VoiceReleaseMaster_o *)sub_1B86604(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v1080, 0LL);
  if ( v1080 )
  {
    v547 = sub_1B864F4(v1080, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1634;
  v545->m_Items[177] = (DataMasterBase_o *)v1080;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[177], (int32_t)v1080, v1081, v1082);
  v1083 = (EventSuperBossMaster_o *)sub_1B86604(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v1083, 0LL);
  if ( v1083 )
  {
    v547 = sub_1B864F4(v1083, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1634;
  v545->m_Items[178] = (DataMasterBase_o *)v1083;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[178], (int32_t)v1083, v1084, v1085);
  v1086 = (UserSuperBossMaster_o *)sub_1B86604(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v1086, 0LL);
  if ( v1086 )
  {
    v547 = sub_1B864F4(v1086, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1634;
  v545->m_Items[179] = (DataMasterBase_o *)v1086;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[179], (int32_t)v1086, v1087, v1088);
  v1089 = (QuestScriptMaster_o *)sub_1B86604(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v1089, 0LL);
  if ( v1089 )
  {
    v547 = sub_1B864F4(v1089, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1634;
  v545->m_Items[180] = (DataMasterBase_o *)v1089;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[180], (int32_t)v1089, v1090, v1091);
  v1092 = (QuestScriptReleaseMaster_o *)sub_1B86604(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v1092, 0LL);
  if ( v1092 )
  {
    v547 = sub_1B864F4(v1092, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1634;
  v545->m_Items[181] = (DataMasterBase_o *)v1092;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[181], (int32_t)v1092, v1093, v1094);
  v1095 = (MaterialFolderMaster_o *)sub_1B86604(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v1095, 0LL);
  if ( v1095 )
  {
    v547 = sub_1B864F4(v1095, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1634;
  v545->m_Items[182] = (DataMasterBase_o *)v1095;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[182], (int32_t)v1095, v1096, v1097);
  v1098 = (RestrictionMaster_o *)sub_1B86604(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v1098, 0LL);
  if ( v1098 )
  {
    v547 = sub_1B864F4(v1098, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1634;
  v545->m_Items[183] = (DataMasterBase_o *)v1098;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[183], (int32_t)v1098, v1099, v1100);
  v1101 = (QuestRestrictionMaster_o *)sub_1B86604(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v1101, 0LL);
  if ( v1101 )
  {
    v547 = sub_1B864F4(v1101, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1634;
  v545->m_Items[184] = (DataMasterBase_o *)v1101;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[184], (int32_t)v1101, v1102, v1103);
  v1104 = (ServantVoiceRelationMaster_o *)sub_1B86604(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v1104, 0LL);
  if ( v1104 )
  {
    v547 = sub_1B864F4(v1104, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1634;
  v545->m_Items[185] = (DataMasterBase_o *)v1104;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[185], (int32_t)v1104, v1105, v1106);
  v1107 = (ShopDetailMaster_o *)sub_1B86604(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v1107, 0LL);
  if ( v1107 )
  {
    v547 = sub_1B864F4(v1107, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1634;
  v545->m_Items[186] = (DataMasterBase_o *)v1107;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[186], (int32_t)v1107, v1108, v1109);
  v1110 = (ServantScriptAddMaster_o *)sub_1B86604(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v1110, 0LL);
  if ( v1110 )
  {
    v547 = sub_1B864F4(v1110, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1634;
  v545->m_Items[187] = (DataMasterBase_o *)v1110;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[187], (int32_t)v1110, v1111, v1112);
  v1113 = (CombineMaster_o *)sub_1B86604(CombineMaster_TypeInfo);
  CombineMaster___ctor(v1113, 0LL);
  if ( v1113 )
  {
    v547 = sub_1B864F4(v1113, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1634;
  v545->m_Items[188] = (DataMasterBase_o *)v1113;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[188], (int32_t)v1113, v1114, v1115);
  v1116 = (AiFieldMaster_o *)sub_1B86604(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v1116, 0LL);
  if ( v1116 )
  {
    v547 = sub_1B864F4(v1116, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1634;
  v545->m_Items[189] = (DataMasterBase_o *)v1116;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[189], (int32_t)v1116, v1117, v1118);
  v1119 = (ServantCommentAddMaster_o *)sub_1B86604(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v1119, 0LL);
  if ( v1119 )
  {
    v547 = sub_1B864F4(v1119, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1634;
  v545->m_Items[190] = (DataMasterBase_o *)v1119;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[190], (int32_t)v1119, v1120, v1121);
  v1122 = (EventFilterMaster_o *)sub_1B86604(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v1122, 0LL);
  if ( v1122 )
  {
    v547 = sub_1B864F4(v1122, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1634;
  v545->m_Items[191] = (DataMasterBase_o *)v1122;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[191], (int32_t)v1122, v1123, v1124);
  v1125 = (UserSupportDeckMaster_o *)sub_1B86604(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v1125, 0LL);
  if ( v1125 )
  {
    v547 = sub_1B864F4(v1125, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1634;
  v545->m_Items[192] = (DataMasterBase_o *)v1125;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[192], (int32_t)v1125, v1126, v1127);
  v1128 = (EventRewardSceneMaster_o *)sub_1B86604(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v1128, 0LL);
  if ( v1128 )
  {
    v547 = sub_1B864F4(v1128, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1634;
  v545->m_Items[193] = (DataMasterBase_o *)v1128;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[193], (int32_t)v1128, v1129, v1130);
  v1131 = (EventVoicePlayMaster_o *)sub_1B86604(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v1131, 0LL);
  if ( v1131 )
  {
    v547 = sub_1B864F4(v1131, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1634;
  v545->m_Items[194] = (DataMasterBase_o *)v1131;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[194], (int32_t)v1131, v1132, v1133);
  v1134 = (GachaSubMaster_o *)sub_1B86604(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v1134, 0LL);
  if ( v1134 )
  {
    v547 = sub_1B864F4(v1134, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1634;
  v545->m_Items[195] = (DataMasterBase_o *)v1134;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[195], (int32_t)v1134, v1135, v1136);
  v1137 = (GachaDetailMaster_o *)sub_1B86604(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v1137, 0LL);
  if ( v1137 )
  {
    v547 = sub_1B864F4(v1137, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1634;
  v545->m_Items[196] = (DataMasterBase_o *)v1137;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[196], (int32_t)v1137, v1138, v1139);
  v1140 = (GachaBaseCollateralMaster_o *)sub_1B86604(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v1140, 0LL);
  if ( v1140 )
  {
    v547 = sub_1B864F4(v1140, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1634;
  v545->m_Items[197] = (DataMasterBase_o *)v1140;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[197], (int32_t)v1140, v1141, v1142);
  v1143 = (GachaAdjustAddMaster_o *)sub_1B86604(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v1143, 0LL);
  if ( v1143 )
  {
    v547 = sub_1B864F4(v1143, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1634;
  v545->m_Items[198] = (DataMasterBase_o *)v1143;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[198], (int32_t)v1143, v1144, v1145);
  v1146 = (GachaBonusSelectMaster_o *)sub_1B86604(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v1146, 0LL);
  if ( v1146 )
  {
    v547 = sub_1B864F4(v1146, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1634;
  v545->m_Items[199] = (DataMasterBase_o *)v1146;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[199], (int32_t)v1146, v1147, v1148);
  v1149 = (GachaBonusSelectLineupMaster_o *)sub_1B86604(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v1149, 0LL);
  if ( v1149 )
  {
    v547 = sub_1B864F4(v1149, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1634;
  v545->m_Items[200] = (DataMasterBase_o *)v1149;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[200], (int32_t)v1149, v1150, v1151);
  v1152 = (ServantChangeMaster_o *)sub_1B86604(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v1152, 0LL);
  if ( v1152 )
  {
    v547 = sub_1B864F4(v1152, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1634;
  v545->m_Items[201] = (DataMasterBase_o *)v1152;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[201], (int32_t)v1152, v1153, v1154);
  v1155 = (VoiceCondMaster_o *)sub_1B86604(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v1155, 0LL);
  if ( v1155 )
  {
    v547 = sub_1B864F4(v1155, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1634;
  v545->m_Items[202] = (DataMasterBase_o *)v1155;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[202], (int32_t)v1155, v1156, v1157);
  v1158 = (BgmReleaseMaster_o *)sub_1B86604(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v1158, 0LL);
  if ( v1158 )
  {
    v547 = sub_1B864F4(v1158, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1634;
  v545->m_Items[203] = (DataMasterBase_o *)v1158;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[203], (int32_t)v1158, v1159, v1160);
  v1161 = (MyRoomAddMaster_o *)sub_1B86604(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v1161, 0LL);
  if ( v1161 )
  {
    v547 = sub_1B864F4(v1161, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1634;
  v545->m_Items[204] = (DataMasterBase_o *)v1161;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[204], (int32_t)v1161, v1162, v1163);
  v1164 = (ShopActionMaster_o *)sub_1B86604(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v1164, 0LL);
  if ( v1164 )
  {
    v547 = sub_1B864F4(v1164, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1634;
  v545->m_Items[205] = (DataMasterBase_o *)v1164;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[205], (int32_t)v1164, v1165, v1166);
  v1167 = (EventRewardSceneReleaseMaster_o *)sub_1B86604(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v1167, 0LL);
  if ( v1167 )
  {
    v547 = sub_1B864F4(v1167, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1634;
  v545->m_Items[206] = (DataMasterBase_o *)v1167;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[206], (int32_t)v1167, v1168, v1169);
  v1170 = (QuestBehaviorMaster_o *)sub_1B86604(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v1170, 0LL);
  if ( v1170 )
  {
    v547 = sub_1B864F4(v1170, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1634;
  v545->m_Items[207] = (DataMasterBase_o *)v1170;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[207], (int32_t)v1170, v1171, v1172);
  v1173 = (MapMaster_o *)sub_1B86604(MapMaster_TypeInfo);
  MapMaster___ctor(v1173, 0LL);
  if ( v1173 )
  {
    v547 = sub_1B864F4(v1173, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1634;
  v545->m_Items[208] = (DataMasterBase_o *)v1173;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[208], (int32_t)v1173, v1174, v1175);
  v1176 = (MapCondMaster_o *)sub_1B86604(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v1176, 0LL);
  if ( v1176 )
  {
    v547 = sub_1B864F4(v1176, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1634;
  v545->m_Items[209] = (DataMasterBase_o *)v1176;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[209], (int32_t)v1176, v1177, v1178);
  v1179 = (MapButtonMaster_o *)sub_1B86604(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v1179, 0LL);
  if ( v1179 )
  {
    v547 = sub_1B864F4(v1179, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1634;
  v545->m_Items[210] = (DataMasterBase_o *)v1179;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[210], (int32_t)v1179, v1180, v1181);
  v1182 = (BannerAddMaster_o *)sub_1B86604(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v1182, 0LL);
  if ( v1182 )
  {
    v547 = sub_1B864F4(v1182, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1634;
  v545->m_Items[211] = (DataMasterBase_o *)v1182;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[211], (int32_t)v1182, v1183, v1184);
  v1185 = (EventAddMaster_o *)sub_1B86604(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v1185, 0LL);
  if ( v1185 )
  {
    v547 = sub_1B864F4(v1185, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1634;
  v545->m_Items[212] = (DataMasterBase_o *)v1185;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[212], (int32_t)v1185, v1186, v1187);
  v1188 = (TotalLoginMaster_o *)sub_1B86604(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v1188, 0LL);
  if ( v1188 )
  {
    v547 = sub_1B864F4(v1188, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1634;
  v545->m_Items[213] = (DataMasterBase_o *)v1188;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[213], (int32_t)v1188, v1189, v1190);
  v1191 = (ServantFilterMaster_o *)sub_1B86604(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v1191, 0LL);
  if ( v1191 )
  {
    v547 = sub_1B864F4(v1191, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1634;
  v545->m_Items[214] = (DataMasterBase_o *)v1191;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[214], (int32_t)v1191, v1192, v1193);
  v1194 = (CombineCostumeMaster_o *)sub_1B86604(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v1194, 0LL);
  if ( v1194 )
  {
    v547 = sub_1B864F4(v1194, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1634;
  v545->m_Items[215] = (DataMasterBase_o *)v1194;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[215], (int32_t)v1194, v1195, v1196);
  v1197 = (ServantCostumeMaster_o *)sub_1B86604(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v1197, 0LL);
  if ( v1197 )
  {
    v547 = sub_1B864F4(v1197, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1634;
  v545->m_Items[216] = (DataMasterBase_o *)v1197;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[216], (int32_t)v1197, v1198, v1199);
  v1200 = (ServantCostumeReleaseMaster_o *)sub_1B86604(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v1200, 0LL);
  if ( v1200 )
  {
    v547 = sub_1B864F4(v1200, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1634;
  v545->m_Items[217] = (DataMasterBase_o *)v1200;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[217], (int32_t)v1200, v1201, v1202);
  v1203 = (StaffPhotoMaster_o *)sub_1B86604(StaffPhotoMaster_TypeInfo);
  StaffPhotoMaster___ctor(v1203, 0LL);
  if ( v1203 )
  {
    v547 = sub_1B864F4(v1203, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1634;
  v545->m_Items[218] = (DataMasterBase_o *)v1203;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[218], (int32_t)v1203, v1204, v1205);
  v1206 = (StaffPhotoCostumeMaster_o *)sub_1B86604(StaffPhotoCostumeMaster_TypeInfo);
  StaffPhotoCostumeMaster___ctor(v1206, 0LL);
  if ( v1206 )
  {
    v547 = sub_1B864F4(v1206, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1634;
  v545->m_Items[219] = (DataMasterBase_o *)v1206;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[219], (int32_t)v1206, v1207, v1208);
  v1209 = (UserFriendRequestHistoryMaster_o *)sub_1B86604(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v1209, 0LL);
  if ( v1209 )
  {
    v547 = sub_1B864F4(v1209, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1634;
  v545->m_Items[220] = (DataMasterBase_o *)v1209;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[220], (int32_t)v1209, v1210, v1211);
  v1212 = (UserBlacklistMaster_o *)sub_1B86604(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v1212, 0LL);
  if ( v1212 )
  {
    v547 = sub_1B864F4(v1212, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1634;
  v545->m_Items[221] = (DataMasterBase_o *)v1212;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[221], (int32_t)v1212, v1213, v1214);
  v1215 = (ItemSelectMaster_o *)sub_1B86604(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v1215, 0LL);
  if ( v1215 )
  {
    v547 = sub_1B864F4(v1215, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1634;
  v545->m_Items[222] = (DataMasterBase_o *)v1215;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[222], (int32_t)v1215, v1216, v1217);
  v1218 = (TotalEventRaceMaster_o *)sub_1B86604(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v1218, 0LL);
  if ( v1218 )
  {
    v547 = sub_1B864F4(v1218, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1634;
  v545->m_Items[223] = (DataMasterBase_o *)v1218;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[223], (int32_t)v1218, v1219, v1220);
  v1221 = (EventPointGroupAddMaster_o *)sub_1B86604(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v1221, 0LL);
  if ( v1221 )
  {
    v547 = sub_1B864F4(v1221, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1634;
  v545->m_Items[224] = (DataMasterBase_o *)v1221;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[224], (int32_t)v1221, v1222, v1223);
  v1224 = (VoicePlayGroupMaster_o *)sub_1B86604(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v1224, 0LL);
  if ( v1224 )
  {
    v547 = sub_1B864F4(v1224, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1634;
  v545->m_Items[225] = (DataMasterBase_o *)v1224;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[225], (int32_t)v1224, v1225, v1226);
  v1227 = (VoicePlayCondMaster_o *)sub_1B86604(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v1227, 0LL);
  if ( v1227 )
  {
    v547 = sub_1B864F4(v1227, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1634;
  v545->m_Items[226] = (DataMasterBase_o *)v1227;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[226], (int32_t)v1227, v1228, v1229);
  v1230 = (GachaStoryAdjustMaster_o *)sub_1B86604(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v1230, 0LL);
  if ( v1230 )
  {
    v547 = sub_1B864F4(v1230, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1634;
  v545->m_Items[227] = (DataMasterBase_o *)v1230;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[227], (int32_t)v1230, v1231, v1232);
  v1233 = (ServantFlagMaster_o *)sub_1B86604(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v1233, 0LL);
  if ( v1233 )
  {
    v547 = sub_1B864F4(v1233, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1634;
  v545->m_Items[228] = (DataMasterBase_o *)v1233;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[228], (int32_t)v1233, v1234, v1235);
  v1236 = (ServantFlagReleaseMaster_o *)sub_1B86604(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v1236, 0LL);
  if ( v1236 )
  {
    v547 = sub_1B864F4(v1236, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1634;
  v545->m_Items[229] = (DataMasterBase_o *)v1236;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[229], (int32_t)v1236, v1237, v1238);
  v1239 = (EventLocationCampaignMaster_o *)sub_1B86604(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v1239, 0LL);
  if ( v1239 )
  {
    v547 = sub_1B864F4(v1239, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1634;
  v545->m_Items[230] = (DataMasterBase_o *)v1239;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[230], (int32_t)v1239, v1240, v1241);
  v1242 = (CampaignInfoMaster_o *)sub_1B86604(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v1242, 0LL);
  if ( v1242 )
  {
    v547 = sub_1B864F4(v1242, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1634;
  v545->m_Items[231] = (DataMasterBase_o *)v1242;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[231], (int32_t)v1242, v1243, v1244);
  v1245 = (DialogMessageMaster_o *)sub_1B86604(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v1245, 0LL);
  if ( v1245 )
  {
    v547 = sub_1B864F4(v1245, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1634;
  v545->m_Items[232] = (DataMasterBase_o *)v1245;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[232], (int32_t)v1245, v1246, v1247);
  v1248 = (ServantIndividualityMaster_o *)sub_1B86604(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v1248, 0LL);
  if ( v1248 )
  {
    v547 = sub_1B864F4(v1248, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1634;
  v545->m_Items[233] = (DataMasterBase_o *)v1248;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[233], (int32_t)v1248, v1249, v1250);
  v1251 = (BoardMessageMaster_o *)sub_1B86604(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v1251, 0LL);
  if ( v1251 )
  {
    v547 = sub_1B864F4(v1251, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1634;
  v545->m_Items[234] = (DataMasterBase_o *)v1251;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[234], (int32_t)v1251, v1252, v1253);
  v1254 = (BoardMessageReleaseMaster_o *)sub_1B86604(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v1254, 0LL);
  if ( v1254 )
  {
    v547 = sub_1B864F4(v1254, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1634;
  v545->m_Items[235] = (DataMasterBase_o *)v1254;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[235], (int32_t)v1254, v1255, v1256);
  v1257 = (EventServantFatigueMaster_o *)sub_1B86604(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v1257, 0LL);
  if ( v1257 )
  {
    v547 = sub_1B864F4(v1257, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1634;
  v545->m_Items[236] = (DataMasterBase_o *)v1257;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[236], (int32_t)v1257, v1258, v1259);
  v1260 = (UserEventDeckMaster_o *)sub_1B86604(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v1260, 0LL);
  if ( v1260 )
  {
    v547 = sub_1B864F4(v1260, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1634;
  v545->m_Items[237] = (DataMasterBase_o *)v1260;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[237], (int32_t)v1260, v1261, v1262);
  v1263 = (EventTowerMaster_o *)sub_1B86604(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v1263, 0LL);
  if ( v1263 )
  {
    v547 = sub_1B864F4(v1263, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1634;
  v545->m_Items[238] = (DataMasterBase_o *)v1263;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[238], (int32_t)v1263, v1264, v1265);
  v1266 = (EventTowerRewardMaster_o *)sub_1B86604(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v1266, 0LL);
  if ( v1266 )
  {
    v547 = sub_1B864F4(v1266, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1634;
  v545->m_Items[239] = (DataMasterBase_o *)v1266;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[239], (int32_t)v1266, v1267, v1268);
  v1269 = (EventBulletinBoardMaster_o *)sub_1B86604(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v1269, 0LL);
  if ( v1269 )
  {
    v547 = sub_1B864F4(v1269, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1634;
  v545->m_Items[240] = (DataMasterBase_o *)v1269;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[240], (int32_t)v1269, v1270, v1271);
  v1272 = (EventBulletinBoardReleaseMaster_o *)sub_1B86604(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v1272, 0LL);
  if ( v1272 )
  {
    v547 = sub_1B864F4(v1272, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1634;
  v545->m_Items[241] = (DataMasterBase_o *)v1272;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[241], (int32_t)v1272, v1273, v1274);
  v1275 = (EventFactoryMaster_o *)sub_1B86604(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v1275, 0LL);
  if ( v1275 )
  {
    v547 = sub_1B864F4(v1275, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1634;
  v545->m_Items[242] = (DataMasterBase_o *)v1275;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[242], (int32_t)v1275, v1276, v1277);
  v1278 = (ShopGroupMaster_o *)sub_1B86604(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v1278, 0LL);
  if ( v1278 )
  {
    v547 = sub_1B864F4(v1278, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1634;
  v545->m_Items[243] = (DataMasterBase_o *)v1278;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[243], (int32_t)v1278, v1279, v1280);
  v1281 = (AuraEffectMaster_o *)sub_1B86604(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v1281, 0LL);
  if ( v1281 )
  {
    v547 = sub_1B864F4(v1281, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1634;
  v545->m_Items[244] = (DataMasterBase_o *)v1281;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[244], (int32_t)v1281, v1282, v1283);
  v1284 = (AuraEffectPosOverwriteMaster_o *)sub_1B86604(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v1284, 0LL);
  if ( v1284 )
  {
    v547 = sub_1B864F4(v1284, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1634;
  v545->m_Items[245] = (DataMasterBase_o *)v1284;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[245], (int32_t)v1284, v1285, v1286);
  v1287 = (UserEventMissionFixMaster_o *)sub_1B86604(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v1287, 0LL);
  if ( v1287 )
  {
    v547 = sub_1B864F4(v1287, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1634;
  v545->m_Items[246] = (DataMasterBase_o *)v1287;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[246], (int32_t)v1287, v1288, v1289);
  v1290 = (NotEndEventMissionFixMaster_o *)sub_1B86604(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v1290, 0LL);
  if ( v1290 )
  {
    v547 = sub_1B864F4(v1290, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1634;
  v545->m_Items[247] = (DataMasterBase_o *)v1290;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[247], (int32_t)v1290, v1291, v1292);
  v1293 = (EnemyMstMaster_o *)sub_1B86604(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v1293, 0LL);
  if ( v1293 )
  {
    v547 = sub_1B864F4(v1293, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1634;
  v545->m_Items[248] = (DataMasterBase_o *)v1293;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[248], (int32_t)v1293, v1294, v1295);
  v1296 = (EnemyMstBattleMaster_o *)sub_1B86604(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v1296, 0LL);
  if ( v1296 )
  {
    v547 = sub_1B864F4(v1296, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1634;
  v545->m_Items[249] = (DataMasterBase_o *)v1296;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[249], (int32_t)v1296, v1297, v1298);
  v1299 = (ServantSkillReleaseMaster_o *)sub_1B86604(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v1299, 0LL);
  if ( v1299 )
  {
    v547 = sub_1B864F4(v1299, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1634;
  v545->m_Items[250] = (DataMasterBase_o *)v1299;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[250], (int32_t)v1299, v1300, v1301);
  v1302 = (ServantPassiveSkillReleaseMaster_o *)sub_1B86604(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v1302, 0LL);
  if ( v1302 )
  {
    v547 = sub_1B864F4(v1302, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1634;
  v545->m_Items[251] = (DataMasterBase_o *)v1302;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[251], (int32_t)v1302, v1303, v1304);
  v1305 = (ServantTreasureDeviceReleaseMaster_o *)sub_1B86604(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v1305, 0LL);
  if ( v1305 )
  {
    v547 = sub_1B864F4(v1305, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1634;
  v545->m_Items[252] = (DataMasterBase_o *)v1305;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[252], (int32_t)v1305, v1306, v1307);
  v1308 = (MapGimmickReleaseMaster_o *)sub_1B86604(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v1308, 0LL);
  if ( v1308 )
  {
    v547 = sub_1B864F4(v1308, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1634;
  v545->m_Items[253] = (DataMasterBase_o *)v1308;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[253], (int32_t)v1308, v1309, v1310);
  v1311 = (CommandCodeMaster_o *)sub_1B86604(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v1311, 0LL);
  if ( v1311 )
  {
    v547 = sub_1B864F4(v1311, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1634;
  v545->m_Items[254] = (DataMasterBase_o *)v1311;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[254], (int32_t)v1311, v1312, v1313);
  v1314 = (ServantCommandCodeUnlockMaster_o *)sub_1B86604(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v1314, 0LL);
  if ( v1314 )
  {
    v547 = sub_1B864F4(v1314, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1634;
  v545->m_Items[255] = (DataMasterBase_o *)v1314;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[255], (int32_t)v1314, v1315, v1316);
  v1317 = (UserCommandCodeMaster_o *)sub_1B86604(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v1317, 0LL);
  if ( v1317 )
  {
    v547 = sub_1B864F4(v1317, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1634;
  v545->m_Items[256] = (DataMasterBase_o *)v1317;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[256], (int32_t)v1317, v1318, v1319);
  v1320 = (UserCommandCodeCollectionMaster_o *)sub_1B86604(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v1320, 0LL);
  if ( v1320 )
  {
    v547 = sub_1B864F4(v1320, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1634;
  v545->m_Items[257] = (DataMasterBase_o *)v1320;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[257], (int32_t)v1320, v1321, v1322);
  v1323 = (UserServantCommandCodeMaster_o *)sub_1B86604(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v1323, 0LL);
  if ( v1323 )
  {
    v547 = sub_1B864F4(v1323, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1634;
  v545->m_Items[258] = (DataMasterBase_o *)v1323;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[258], (int32_t)v1323, v1324, v1325);
  v1326 = (UserServantCommandCardMaster_o *)sub_1B86604(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v1326, 0LL);
  if ( v1326 )
  {
    v547 = sub_1B864F4(v1326, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1634;
  v545->m_Items[259] = (DataMasterBase_o *)v1326;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[259], (int32_t)v1326, v1327, v1328);
  v1329 = (CommandCardRankParamMaster_o *)sub_1B86604(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v1329, 0LL);
  if ( v1329 )
  {
    v547 = sub_1B864F4(v1329, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1634;
  v545->m_Items[260] = (DataMasterBase_o *)v1329;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[260], (int32_t)v1329, v1330, v1331);
  v1332 = (CommandCodeSkillMaster_o *)sub_1B86604(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v1332, 0LL);
  if ( v1332 )
  {
    v547 = sub_1B864F4(v1332, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1634;
  v545->m_Items[261] = (DataMasterBase_o *)v1332;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[261], (int32_t)v1332, v1333, v1334);
  v1335 = (CommandCodeSkillReleaseMaster_o *)sub_1B86604(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v1335, 0LL);
  if ( v1335 )
  {
    v547 = sub_1B864F4(v1335, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1634;
  v545->m_Items[262] = (DataMasterBase_o *)v1335;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[262], (int32_t)v1335, v1336, v1337);
  v1338 = (CommandCodeCommentMaster_o *)sub_1B86604(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v1338, 0LL);
  if ( v1338 )
  {
    v547 = sub_1B864F4(v1338, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1634;
  v545->m_Items[263] = (DataMasterBase_o *)v1338;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[263], (int32_t)v1338, v1339, v1340);
  v1341 = (EventStatusMaster_o *)sub_1B86604(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v1341, 0LL);
  if ( v1341 )
  {
    v547 = sub_1B864F4(v1341, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1634;
  v545->m_Items[264] = (DataMasterBase_o *)v1341;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[264], (int32_t)v1341, v1342, v1343);
  v1344 = (EventStatusQuestMaster_o *)sub_1B86604(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v1344, 0LL);
  if ( v1344 )
  {
    v547 = sub_1B864F4(v1344, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1634;
  v545->m_Items[265] = (DataMasterBase_o *)v1344;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[265], (int32_t)v1344, v1345, v1346);
  v1347 = (CommonRestrictionMaster_o *)sub_1B86604(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v1347, 0LL);
  if ( v1347 )
  {
    v547 = sub_1B864F4(v1347, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1634;
  v545->m_Items[266] = (DataMasterBase_o *)v1347;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[266], (int32_t)v1347, v1348, v1349);
  v1350 = (EventPointBuffMaster_o *)sub_1B86604(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v1350, 0LL);
  if ( v1350 )
  {
    v547 = sub_1B864F4(v1350, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1634;
  v545->m_Items[267] = (DataMasterBase_o *)v1350;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[267], (int32_t)v1350, v1351, v1352);
  v1353 = (UserFollowMaster_o *)sub_1B86604(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v1353, 0LL);
  if ( v1353 )
  {
    v547 = sub_1B864F4(v1353, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1634;
  v545->m_Items[268] = (DataMasterBase_o *)v1353;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[268], (int32_t)v1353, v1354, v1355);
  v1356 = (EventRewardGuideReleaseMaster_o *)sub_1B86604(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v1356, 0LL);
  if ( v1356 )
  {
    v547 = sub_1B864F4(v1356, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1634;
  v545->m_Items[269] = (DataMasterBase_o *)v1356;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[269], (int32_t)v1356, v1357, v1358);
  v1359 = (NpcServantEquipMaster_o *)sub_1B86604(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v1359, 0LL);
  if ( v1359 )
  {
    v547 = sub_1B864F4(v1359, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1634;
  v545->m_Items[270] = (DataMasterBase_o *)v1359;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[270], (int32_t)v1359, v1360, v1361);
  v1362 = (EventCampaignReleaseMaster_o *)sub_1B86604(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v1362, 0LL);
  if ( v1362 )
  {
    v547 = sub_1B864F4(v1362, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1634;
  v545->m_Items[271] = (DataMasterBase_o *)v1362;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[271], (int32_t)v1362, v1363, v1364);
  v1365 = (ServantMaterialFolderMaster_o *)sub_1B86604(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v1365, 0LL);
  if ( v1365 )
  {
    v547 = sub_1B864F4(v1365, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1634;
  v545->m_Items[272] = (DataMasterBase_o *)v1365;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[272], (int32_t)v1365, v1366, v1367);
  v1368 = (EventEquipSkillReleaseMaster_o *)sub_1B86604(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v1368, 0LL);
  if ( v1368 )
  {
    v547 = sub_1B864F4(v1368, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1634;
  v545->m_Items[273] = (DataMasterBase_o *)v1368;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[273], (int32_t)v1368, v1369, v1370);
  v1371 = (EventPointActivityMaster_o *)sub_1B86604(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v1371, 0LL);
  if ( v1371 )
  {
    v547 = sub_1B864F4(v1371, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1634;
  v545->m_Items[274] = (DataMasterBase_o *)v1371;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[274], (int32_t)v1371, v1372, v1373);
  v1374 = (FunctionCategoryMaster_o *)sub_1B86604(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v1374, 0LL);
  if ( v1374 )
  {
    v547 = sub_1B864F4(v1374, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1634;
  v545->m_Items[275] = (DataMasterBase_o *)v1374;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[275], (int32_t)v1374, v1375, v1376);
  v1377 = (QuestPickupMaster_o *)sub_1B86604(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v1377, 0LL);
  if ( v1377 )
  {
    v547 = sub_1B864F4(v1377, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1634;
  v545->m_Items[276] = (DataMasterBase_o *)v1377;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[276], (int32_t)v1377, v1378, v1379);
  v1380 = (EventUiMaster_o *)sub_1B86604(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v1380, 0LL);
  if ( v1380 )
  {
    v547 = sub_1B864F4(v1380, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1634;
  v545->m_Items[277] = (DataMasterBase_o *)v1380;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[277], (int32_t)v1380, v1381, v1382);
  v1383 = (EventUiReleaseMaster_o *)sub_1B86604(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v1383, 0LL);
  if ( v1383 )
  {
    v547 = sub_1B864F4(v1383, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1634;
  v545->m_Items[278] = (DataMasterBase_o *)v1383;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[278], (int32_t)v1383, v1384, v1385);
  v1386 = (EventUiValueMaster_o *)sub_1B86604(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v1386, 0LL);
  if ( v1386 )
  {
    v547 = sub_1B864F4(v1386, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1634;
  v545->m_Items[279] = (DataMasterBase_o *)v1386;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[279], (int32_t)v1386, v1387, v1388);
  v1389 = (EventConquestRewardMaster_o *)sub_1B86604(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v1389, 0LL);
  if ( v1389 )
  {
    v547 = sub_1B864F4(v1389, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1634;
  v545->m_Items[280] = (DataMasterBase_o *)v1389;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[280], (int32_t)v1389, v1390, v1391);
  v1392 = (NpcFollowerReleaseMaster_o *)sub_1B86604(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v1392, 0LL);
  if ( v1392 )
  {
    v547 = sub_1B864F4(v1392, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1634;
  v545->m_Items[281] = (DataMasterBase_o *)v1392;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[281], (int32_t)v1392, v1393, v1394);
  v1395 = (EventBonusFilterMaster_o *)sub_1B86604(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v1395, 0LL);
  if ( v1395 )
  {
    v547 = sub_1B864F4(v1395, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1634;
  v545->m_Items[282] = (DataMasterBase_o *)v1395;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[282], (int32_t)v1395, v1396, v1397);
  v1398 = (EventBonusFilterGroupInfoMaster_o *)sub_1B86604(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v1398, 0LL);
  if ( v1398 )
  {
    v547 = sub_1B864F4(v1398, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1634;
  v545->m_Items[283] = (DataMasterBase_o *)v1398;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[283], (int32_t)v1398, v1399, v1400);
  v1401 = (EventBonusFilterGroupMemberMaster_o *)sub_1B86604(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v1401, 0LL);
  if ( v1401 )
  {
    v547 = sub_1B864F4(v1401, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1634;
  v545->m_Items[284] = (DataMasterBase_o *)v1401;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[284], (int32_t)v1401, v1402, v1403);
  v1404 = (UserGachaExtraCountMaster_o *)sub_1B86604(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v1404, 0LL);
  if ( v1404 )
  {
    v547 = sub_1B864F4(v1404, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1634;
  v545->m_Items[285] = (DataMasterBase_o *)v1404;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[285], (int32_t)v1404, v1405, v1406);
  v1407 = (PrivilegeMaster_o *)sub_1B86604(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v1407, 0LL);
  if ( v1407 )
  {
    v547 = sub_1B864F4(v1407, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1634;
  v545->m_Items[286] = (DataMasterBase_o *)v1407;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[286], (int32_t)v1407, v1408, v1409);
  v1410 = (UserPrivilegeMaster_o *)sub_1B86604(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v1410, 0LL);
  if ( v1410 )
  {
    v547 = sub_1B864F4(v1410, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1634;
  v545->m_Items[287] = (DataMasterBase_o *)v1410;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[287], (int32_t)v1410, v1411, v1412);
  v1413 = (UserQuestRouteMaster_o *)sub_1B86604(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v1413, 0LL);
  if ( v1413 )
  {
    v547 = sub_1B864F4(v1413, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1634;
  v545->m_Items[288] = (DataMasterBase_o *)v1413;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[288], (int32_t)v1413, v1414, v1415);
  v1416 = (EventBossStatusUiMaster_o *)sub_1B86604(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v1416, 0LL);
  if ( v1416 )
  {
    v547 = sub_1B864F4(v1416, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1634;
  v545->m_Items[289] = (DataMasterBase_o *)v1416;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[289], (int32_t)v1416, v1417, v1418);
  v1419 = (CommonReleaseMaster_o *)sub_1B86604(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v1419, 0LL);
  if ( v1419 )
  {
    v547 = sub_1B864F4(v1419, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1634;
  v545->m_Items[290] = (DataMasterBase_o *)v1419;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[290], (int32_t)v1419, v1420, v1421);
  v1422 = (QuestSpotReleaseMaster_o *)sub_1B86604(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v1422, 0LL);
  if ( v1422 )
  {
    v547 = sub_1B864F4(v1422, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1634;
  v545->m_Items[291] = (DataMasterBase_o *)v1422;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[291], (int32_t)v1422, v1423, v1424);
  v1425 = (VoiceMaterialCondMaster_o *)sub_1B86604(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v1425, 0LL);
  if ( v1425 )
  {
    v547 = sub_1B864F4(v1425, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1634;
  v545->m_Items[292] = (DataMasterBase_o *)v1425;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[292], (int32_t)v1425, v1426, v1427);
  v1428 = (ClassRelationOverwriteMaster_o *)sub_1B86604(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v1428, 0LL);
  if ( v1428 )
  {
    v547 = sub_1B864F4(v1428, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1634;
  v545->m_Items[293] = (DataMasterBase_o *)v1428;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[293], (int32_t)v1428, v1429, v1430);
  v1431 = (EventGroupMaster_o *)sub_1B86604(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v1431, 0LL);
  if ( v1431 )
  {
    v547 = sub_1B864F4(v1431, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1634;
  v545->m_Items[294] = (DataMasterBase_o *)v1431;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[294], (int32_t)v1431, v1432, v1433);
  v1434 = (TotalBoxGachaMaster_o *)sub_1B86604(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v1434, 0LL);
  if ( v1434 )
  {
    v547 = sub_1B864F4(v1434, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1634;
  v545->m_Items[295] = (DataMasterBase_o *)v1434;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[295], (int32_t)v1434, v1435, v1436);
  v1437 = (ServantTreasureDeviceDamageMaster_o *)sub_1B86604(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v1437, 0LL);
  if ( v1437 )
  {
    v547 = sub_1B864F4(v1437, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1634;
  v545->m_Items[296] = (DataMasterBase_o *)v1437;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[296], (int32_t)v1437, v1438, v1439);
  v1440 = (UserEventServantFatigueMaster_o *)sub_1B86604(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v1440, 0LL);
  if ( v1440 )
  {
    v547 = sub_1B864F4(v1440, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1634;
  v545->m_Items[297] = (DataMasterBase_o *)v1440;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[297], (int32_t)v1440, v1441, v1442);
  v1443 = (EventRewardBgMaster_o *)sub_1B86604(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v1443, 0LL);
  if ( v1443 )
  {
    v547 = sub_1B864F4(v1443, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1634;
  v545->m_Items[298] = (DataMasterBase_o *)v1443;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[298], (int32_t)v1443, v1444, v1445);
  v1446 = (EventFatigueRecoveryMaster_o *)sub_1B86604(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v1446, 0LL);
  if ( v1446 )
  {
    v547 = sub_1B864F4(v1446, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1634;
  v545->m_Items[299] = (DataMasterBase_o *)v1446;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[299], (int32_t)v1446, v1447, v1448);
  v1449 = (EventBoostItemUsedMaster_o *)sub_1B86604(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v1449, 0LL);
  if ( v1449 )
  {
    v547 = sub_1B864F4(v1449, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1634;
  v545->m_Items[300] = (DataMasterBase_o *)v1449;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[300], (int32_t)v1449, v1450, v1451);
  v1452 = (StatusEffectPosOverwriteMaster_o *)sub_1B86604(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v1452, 0LL);
  if ( v1452 )
  {
    v547 = sub_1B864F4(v1452, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1634;
  v545->m_Items[301] = (DataMasterBase_o *)v1452;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[301], (int32_t)v1452, v1453, v1454);
  v1455 = (QuestPhaseDetailAddMaster_o *)sub_1B86604(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v1455, 0LL);
  if ( v1455 )
  {
    v547 = sub_1B864F4(v1455, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1634;
  v545->m_Items[302] = (DataMasterBase_o *)v1455;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[302], (int32_t)v1455, v1456, v1457);
  v1458 = (VoiceClosedMessageMaster_o *)sub_1B86604(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v1458, 0LL);
  if ( v1458 )
  {
    v547 = sub_1B864F4(v1458, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1634;
  v545->m_Items[303] = (DataMasterBase_o *)v1458;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[303], (int32_t)v1458, v1459, v1460);
  v1461 = (ReprintStageMaster_o *)sub_1B86604(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v1461, 0LL);
  if ( v1461 )
  {
    v547 = sub_1B864F4(v1461, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1634;
  v545->m_Items[304] = (DataMasterBase_o *)v1461;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[304], (int32_t)v1461, v1462, v1463);
  v1464 = (UserCombineExpMaster_o *)sub_1B86604(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v1464, 0LL);
  if ( v1464 )
  {
    v547 = sub_1B864F4(v1464, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1634;
  v545->m_Items[305] = (DataMasterBase_o *)v1464;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[305], (int32_t)v1464, v1465, v1466);
  v1467 = (EventBoardGameCellMaster_o *)sub_1B86604(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v1467, 0LL);
  if ( v1467 )
  {
    v547 = sub_1B864F4(v1467, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1634;
  v545->m_Items[306] = (DataMasterBase_o *)v1467;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[306], (int32_t)v1467, v1468, v1469);
  v1470 = (EventBoardGameTokenMaster_o *)sub_1B86604(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v1470, 0LL);
  if ( v1470 )
  {
    v547 = sub_1B864F4(v1470, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1634;
  v545->m_Items[307] = (DataMasterBase_o *)v1470;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[307], (int32_t)v1470, v1471, v1472);
  v1473 = (EventBoardGameTokenRewardMaster_o *)sub_1B86604(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v1473, 0LL);
  if ( v1473 )
  {
    v547 = sub_1B864F4(v1473, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1634;
  v545->m_Items[308] = (DataMasterBase_o *)v1473;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[308], (int32_t)v1473, v1474, v1475);
  v1476 = (UserEventBoardGameTokenMaster_o *)sub_1B86604(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v1476, 0LL);
  if ( v1476 )
  {
    v547 = sub_1B864F4(v1476, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1634;
  v545->m_Items[309] = (DataMasterBase_o *)v1476;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[309], (int32_t)v1476, v1477, v1478);
  v1479 = (ServantAnimationOverwriteMaster_o *)sub_1B86604(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v1479, 0LL);
  if ( v1479 )
  {
    v547 = sub_1B864F4(v1479, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1634;
  v545->m_Items[310] = (DataMasterBase_o *)v1479;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[310], (int32_t)v1479, v1480, v1481);
  v1482 = (OpeningMovieMaster_o *)sub_1B86604(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v1482, 0LL);
  if ( v1482 )
  {
    v547 = sub_1B864F4(v1482, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1634;
  v545->m_Items[311] = (DataMasterBase_o *)v1482;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[311], (int32_t)v1482, v1483, v1484);
  v1485 = (ServantLimitSpoilerProtectionMaster_o *)sub_1B86604(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v1485, 0LL);
  if ( v1485 )
  {
    v547 = sub_1B864F4(v1485, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1634;
  v545->m_Items[312] = (DataMasterBase_o *)v1485;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[312], (int32_t)v1485, v1486, v1487);
  v1488 = (PickupUserFollowerMaster_o *)sub_1B86604(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v1488, 0LL);
  if ( v1488 )
  {
    v547 = sub_1B864F4(v1488, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1634;
  v545->m_Items[313] = (DataMasterBase_o *)v1488;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[313], (int32_t)v1488, v1489, v1490);
  v1491 = (ServantCollectionMaster_o *)sub_1B86604(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v1491, 0LL);
  if ( v1491 )
  {
    v547 = sub_1B864F4(v1491, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1634;
  v545->m_Items[314] = (DataMasterBase_o *)v1491;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[314], (int32_t)v1491, v1492, v1493);
  v1494 = (GachaBehaviorMaster_o *)sub_1B86604(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v1494, 0LL);
  if ( v1494 )
  {
    v547 = sub_1B864F4(v1494, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1634;
  v545->m_Items[315] = (DataMasterBase_o *)v1494;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[315], (int32_t)v1494, v1495, v1496);
  v1497 = (EventQuestCooltimeMaster_o *)sub_1B86604(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v1497, 0LL);
  if ( v1497 )
  {
    v547 = sub_1B864F4(v1497, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1634;
  v545->m_Items[316] = (DataMasterBase_o *)v1497;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[316], (int32_t)v1497, v1498, v1499);
  v1500 = (UserEventQuestCooltimeMaster_o *)sub_1B86604(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v1500, 0LL);
  if ( v1500 )
  {
    v547 = sub_1B864F4(v1500, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1634;
  v545->m_Items[317] = (DataMasterBase_o *)v1500;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[317], (int32_t)v1500, v1501, v1502);
  v1503 = (BoostMaster_o *)sub_1B86604(BoostMaster_TypeInfo);
  BoostMaster___ctor(v1503, 0LL);
  if ( v1503 )
  {
    v547 = sub_1B864F4(v1503, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1634;
  v545->m_Items[318] = (DataMasterBase_o *)v1503;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[318], (int32_t)v1503, v1504, v1505);
  v1506 = (WarBoardMaster_o *)sub_1B86604(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v1506, 0LL);
  if ( v1506 )
  {
    v547 = sub_1B864F4(v1506, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1634;
  v545->m_Items[319] = (DataMasterBase_o *)v1506;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[319], (int32_t)v1506, v1507, v1508);
  v1509 = (WarBoardSquareMaster_o *)sub_1B86604(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v1509, 0LL);
  if ( v1509 )
  {
    v547 = sub_1B864F4(v1509, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1634;
  v545->m_Items[320] = (DataMasterBase_o *)v1509;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[320], (int32_t)v1509, v1510, v1511);
  v1512 = (WarBoardRoadMaster_o *)sub_1B86604(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v1512, 0LL);
  if ( v1512 )
  {
    v547 = sub_1B864F4(v1512, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1634;
  v545->m_Items[321] = (DataMasterBase_o *)v1512;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[321], (int32_t)v1512, v1513, v1514);
  v1515 = (WarBoardStageMaster_o *)sub_1B86604(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v1515, 0LL);
  if ( v1515 )
  {
    v547 = sub_1B864F4(v1515, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1634;
  v545->m_Items[322] = (DataMasterBase_o *)v1515;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[322], (int32_t)v1515, v1516, v1517);
  v1518 = (WarBoardActionPointMaster_o *)sub_1B86604(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v1518, 0LL);
  if ( v1518 )
  {
    v547 = sub_1B864F4(v1518, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1634;
  v545->m_Items[323] = (DataMasterBase_o *)v1518;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[323], (int32_t)v1518, v1519, v1520);
  v1521 = (WarBoardActionTrendMaster_o *)sub_1B86604(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v1521, 0LL);
  if ( v1521 )
  {
    v547 = sub_1B864F4(v1521, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1634;
  v545->m_Items[324] = (DataMasterBase_o *)v1521;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[324], (int32_t)v1521, v1522, v1523);
  v1524 = (WarBoardTacticalTrendMaster_o *)sub_1B86604(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v1524, 0LL);
  if ( v1524 )
  {
    v547 = sub_1B864F4(v1524, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1634;
  v545->m_Items[325] = (DataMasterBase_o *)v1524;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[325], (int32_t)v1524, v1525, v1526);
  v1527 = (WarBoardStageLayoutMaster_o *)sub_1B86604(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v1527, 0LL);
  if ( v1527 )
  {
    v547 = sub_1B864F4(v1527, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1634;
  v545->m_Items[326] = (DataMasterBase_o *)v1527;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[326], (int32_t)v1527, v1528, v1529);
  v1530 = (WarBoardStageNpcMaster_o *)sub_1B86604(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v1530, 0LL);
  if ( v1530 )
  {
    v547 = sub_1B864F4(v1530, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1634;
  v545->m_Items[327] = (DataMasterBase_o *)v1530;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[327], (int32_t)v1530, v1531, v1532);
  v1533 = (WarBoardStageWallMaster_o *)sub_1B86604(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v1533, 0LL);
  if ( v1533 )
  {
    v547 = sub_1B864F4(v1533, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1634;
  v545->m_Items[328] = (DataMasterBase_o *)v1533;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[328], (int32_t)v1533, v1534, v1535);
  v1536 = (WarBoardAIMaster_o *)sub_1B86604(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v1536, 0LL);
  if ( v1536 )
  {
    v547 = sub_1B864F4(v1536, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1634;
  v545->m_Items[329] = (DataMasterBase_o *)v1536;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[329], (int32_t)v1536, v1537, v1538);
  v1539 = (WarBoardRatingBaseMaster_o *)sub_1B86604(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v1539, 0LL);
  if ( v1539 )
  {
    v547 = sub_1B864F4(v1539, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1634;
  v545->m_Items[330] = (DataMasterBase_o *)v1539;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[330], (int32_t)v1539, v1540, v1541);
  v1542 = (WarBoardRatingOffsetMaster_o *)sub_1B86604(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v1542, 0LL);
  if ( v1542 )
  {
    v547 = sub_1B864F4(v1542, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1634;
  v545->m_Items[331] = (DataMasterBase_o *)v1542;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[331], (int32_t)v1542, v1543, v1544);
  v1545 = (WarBoardItemMaster_o *)sub_1B86604(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v1545, 0LL);
  if ( v1545 )
  {
    v547 = sub_1B864F4(v1545, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1634;
  v545->m_Items[332] = (DataMasterBase_o *)v1545;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[332], (int32_t)v1545, v1546, v1547);
  v1548 = (WarBoardTreasureMaster_o *)sub_1B86604(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v1548, 0LL);
  if ( v1548 )
  {
    v547 = sub_1B864F4(v1548, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1634;
  v545->m_Items[333] = (DataMasterBase_o *)v1548;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[333], (int32_t)v1548, v1549, v1550);
  v1551 = (WarBoardQuestMaster_o *)sub_1B86604(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v1551, 0LL);
  if ( v1551 )
  {
    v547 = sub_1B864F4(v1551, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1634;
  v545->m_Items[334] = (DataMasterBase_o *)v1551;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[334], (int32_t)v1551, v1552, v1553);
  v1554 = (WarBoardDataMaster_o *)sub_1B86604(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v1554, 0LL);
  if ( v1554 )
  {
    v547 = sub_1B864F4(v1554, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1634;
  v545->m_Items[335] = (DataMasterBase_o *)v1554;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[335], (int32_t)v1554, v1555, v1556);
  v1557 = (WarBoardIndividualityClassMaster_o *)sub_1B86604(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v1557, 0LL);
  if ( v1557 )
  {
    v547 = sub_1B864F4(v1557, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1634;
  v545->m_Items[336] = (DataMasterBase_o *)v1557;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[336], (int32_t)v1557, v1558, v1559);
  v1560 = (WarBoardActionTrendConditionMaster_o *)sub_1B86604(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v1560, 0LL);
  if ( v1560 )
  {
    v547 = sub_1B864F4(v1560, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1634;
  v545->m_Items[337] = (DataMasterBase_o *)v1560;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[337], (int32_t)v1560, v1561, v1562);
  v1563 = (WarBoardActionPointClassMaster_o *)sub_1B86604(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v1563, 0LL);
  if ( v1563 )
  {
    v547 = sub_1B864F4(v1563, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1634;
  v545->m_Items[338] = (DataMasterBase_o *)v1563;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[338], (int32_t)v1563, v1564, v1565);
  v1566 = (EventPanelMapMaster_o *)sub_1B86604(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v1566, 0LL);
  if ( v1566 )
  {
    v547 = sub_1B864F4(v1566, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1634;
  v545->m_Items[339] = (DataMasterBase_o *)v1566;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[339], (int32_t)v1566, v1567, v1568);
  v1569 = (EventPanelMapDetailMaster_o *)sub_1B86604(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v1569, 0LL);
  if ( v1569 )
  {
    v547 = sub_1B864F4(v1569, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1634;
  v545->m_Items[340] = (DataMasterBase_o *)v1569;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[340], (int32_t)v1569, v1570, v1571);
  v1572 = (EventPanelSpotMaster_o *)sub_1B86604(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v1572, 0LL);
  if ( v1572 )
  {
    v547 = sub_1B864F4(v1572, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1634;
  v545->m_Items[341] = (DataMasterBase_o *)v1572;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[341], (int32_t)v1572, v1573, v1574);
  v1575 = (EventPanelScanMaster_o *)sub_1B86604(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v1575, 0LL);
  if ( v1575 )
  {
    v547 = sub_1B864F4(v1575, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1634;
  v545->m_Items[342] = (DataMasterBase_o *)v1575;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[342], (int32_t)v1575, v1576, v1577);
  v1578 = (CommonConsumeMaster_o *)sub_1B86604(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v1578, 0LL);
  if ( v1578 )
  {
    v547 = sub_1B864F4(v1578, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1634;
  v545->m_Items[343] = (DataMasterBase_o *)v1578;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[343], (int32_t)v1578, v1579, v1580);
  v1581 = (UserEventMapMaster_o *)sub_1B86604(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v1581, 0LL);
  if ( v1581 )
  {
    v547 = sub_1B864F4(v1581, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1634;
  v545->m_Items[344] = (DataMasterBase_o *)v1581;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[344], (int32_t)v1581, v1582, v1583);
  v1584 = (UserEventSpotMaster_o *)sub_1B86604(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v1584, 0LL);
  if ( v1584 )
  {
    v547 = sub_1B864F4(v1584, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1634;
  v545->m_Items[345] = (DataMasterBase_o *)v1584;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[345], (int32_t)v1584, v1585, v1586);
  v1587 = (WarGroupMaster_o *)sub_1B86604(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v1587, 0LL);
  if ( v1587 )
  {
    v547 = sub_1B864F4(v1587, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1634;
  v545->m_Items[346] = (DataMasterBase_o *)v1587;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[346], (int32_t)v1587, v1588, v1589);
  v1590 = (ServantLimitImageMaster_o *)sub_1B86604(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v1590, 0LL);
  if ( v1590 )
  {
    v547 = sub_1B864F4(v1590, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1634;
  v545->m_Items[347] = (DataMasterBase_o *)v1590;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[347], (int32_t)v1590, v1591, v1592);
  v1593 = (FriendshipQuestDialogInfoMaster_o *)sub_1B86604(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v1593, 0LL);
  if ( v1593 )
  {
    v547 = sub_1B864F4(v1593, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1634;
  v545->m_Items[348] = (DataMasterBase_o *)v1593;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[348], (int32_t)v1593, v1594, v1595);
  v1596 = (QuestRestrictionInfoMaster_o *)sub_1B86604(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v1596, 0LL);
  if ( v1596 )
  {
    v547 = sub_1B864F4(v1596, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1634;
  v545->m_Items[349] = (DataMasterBase_o *)v1596;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[349], (int32_t)v1596, v1597, v1598);
  v1599 = (AssistMaster_o *)sub_1B86604(AssistMaster_TypeInfo);
  AssistMaster___ctor(v1599, 0LL);
  if ( v1599 )
  {
    v547 = sub_1B864F4(v1599, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1634;
  v545->m_Items[350] = (DataMasterBase_o *)v1599;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[350], (int32_t)v1599, v1600, v1601);
  v1602 = (WarBoardEffectMaster_o *)sub_1B86604(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v1602, 0LL);
  if ( v1602 )
  {
    v547 = sub_1B864F4(v1602, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1634;
  v545->m_Items[351] = (DataMasterBase_o *)v1602;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[351], (int32_t)v1602, v1603, v1604);
  v1605 = (WarBoardOnboardSkillMaster_o *)sub_1B86604(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v1605, 0LL);
  if ( v1605 )
  {
    v547 = sub_1B864F4(v1605, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1634;
  v545->m_Items[352] = (DataMasterBase_o *)v1605;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[352], (int32_t)v1605, v1606, v1607);
  v1608 = (BeforeBirthDayMaster_o *)sub_1B86604(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v1608, 0LL);
  if ( v1608 )
  {
    v547 = sub_1B864F4(v1608, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1634;
  v545->m_Items[353] = (DataMasterBase_o *)v1608;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[353], (int32_t)v1608, v1609, v1610);
  v1611 = (LoginQuestMaster_o *)sub_1B86604(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v1611, 0LL);
  if ( v1611 )
  {
    v547 = sub_1B864F4(v1611, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1634;
  v545->m_Items[354] = (DataMasterBase_o *)v1611;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[354], (int32_t)v1611, v1612, v1613);
  v1614 = (EventCombineCostumeMaster_o *)sub_1B86604(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v1614, 0LL);
  if ( v1614 )
  {
    v547 = sub_1B864F4(v1614, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1634;
  v545->m_Items[355] = (DataMasterBase_o *)v1614;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[355], (int32_t)v1614, v1615, v1616);
  v1617 = (WarBoardStagePieceDetailMaster_o *)sub_1B86604(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v1617, 0LL);
  if ( v1617 )
  {
    v547 = sub_1B864F4(v1617, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1634;
  v545->m_Items[356] = (DataMasterBase_o *)v1617;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[356], (int32_t)v1617, v1618, v1619);
  v1620 = (ServantTreasureDeviceAddMaster_o *)sub_1B86604(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v1620, 0LL);
  if ( v1620 )
  {
    v547 = sub_1B864F4(v1620, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1634;
  v545->m_Items[357] = (DataMasterBase_o *)v1620;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[357], (int32_t)v1620, v1621, v1622);
  v1623 = (SkillAddMaster_o *)sub_1B86604(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v1623, 0LL);
  if ( v1623 )
  {
    v547 = sub_1B864F4(v1623, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1634;
  v545->m_Items[358] = (DataMasterBase_o *)v1623;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[358], (int32_t)v1623, v1624, v1625);
  v1626 = (ServantLvDetailMaster_o *)sub_1B86604(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v1626, 0LL);
  if ( v1626 )
  {
    v547 = sub_1B864F4(v1626, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1634;
  v545->m_Items[359] = (DataMasterBase_o *)v1626;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[359], (int32_t)v1626, v1627, v1628);
  v1629 = (GachaAppendMaster_o *)sub_1B86604(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v1629, 0LL);
  if ( v1629 )
  {
    v547 = sub_1B864F4(v1629, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1634;
  v545->m_Items[360] = (DataMasterBase_o *)v1629;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[360], (int32_t)v1629, v1630, v1631);
  v1632 = (UserGachaDrawLogMaster_o *)sub_1B86604(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v1632, 0LL);
  if ( v1632 )
  {
    v547 = sub_1B864F4(v1632, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1634;
  v545->m_Items[361] = (DataMasterBase_o *)v1632;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[361], (int32_t)v1632, v1633, v1634);
  v1635 = (ServantAppendPassiveSkillMaster_o *)sub_1B86604(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v1635, 0LL);
  if ( v1635 )
  {
    v547 = sub_1B864F4(v1635, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1634;
  v545->m_Items[362] = (DataMasterBase_o *)v1635;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[362], (int32_t)v1635, v1636, v1637);
  v1638 = (UserServantAppendPassiveSkillMaster_o *)sub_1B86604(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v1638, 0LL);
  if ( v1638 )
  {
    v547 = sub_1B864F4(v1638, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1634;
  v545->m_Items[363] = (DataMasterBase_o *)v1638;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[363], (int32_t)v1638, v1639, v1640);
  v1641 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1B86604(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v1641, 0LL);
  if ( v1641 )
  {
    v547 = sub_1B864F4(v1641, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1634;
  v545->m_Items[364] = (DataMasterBase_o *)v1641;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[364], (int32_t)v1641, v1642, v1643);
  v1644 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1B86604(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v1644, 0LL);
  if ( v1644 )
  {
    v547 = sub_1B864F4(v1644, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1634;
  v545->m_Items[365] = (DataMasterBase_o *)v1644;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[365], (int32_t)v1644, v1645, v1646);
  v1647 = (CombineAppendPassiveSkillMaster_o *)sub_1B86604(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v1647, 0LL);
  if ( v1647 )
  {
    v547 = sub_1B864F4(v1647, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1634;
  v545->m_Items[366] = (DataMasterBase_o *)v1647;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[366], (int32_t)v1647, v1648, v1649);
  v1650 = (SvtCoinMaster_o *)sub_1B86604(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v1650, 0LL);
  if ( v1650 )
  {
    v547 = sub_1B864F4(v1650, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1634;
  v545->m_Items[367] = (DataMasterBase_o *)v1650;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[367], (int32_t)v1650, v1651, v1652);
  v1653 = (UserSvtCoinMaster_o *)sub_1B86604(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v1653, 0LL);
  if ( v1653 )
  {
    v547 = sub_1B864F4(v1653, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1634;
  v545->m_Items[368] = (DataMasterBase_o *)v1653;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[368], (int32_t)v1653, v1654, v1655);
  v1656 = (ServantAddMaster_o *)sub_1B86604(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v1656, 0LL);
  if ( v1656 )
  {
    v547 = sub_1B864F4(v1656, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1634;
  v545->m_Items[369] = (DataMasterBase_o *)v1656;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[369], (int32_t)v1656, v1657, v1658);
  v1659 = (TreasureBoxMaster_o *)sub_1B86604(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v1659, 0LL);
  if ( v1659 )
  {
    v547 = sub_1B864F4(v1659, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1634;
  v545->m_Items[370] = (DataMasterBase_o *)v1659;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[370], (int32_t)v1659, v1660, v1661);
  v1662 = (TreasureBoxGiftMaster_o *)sub_1B86604(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v1662, 0LL);
  if ( v1662 )
  {
    v547 = sub_1B864F4(v1662, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1634;
  v545->m_Items[371] = (DataMasterBase_o *)v1662;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[371], (int32_t)v1662, v1663, v1664);
  v1665 = (TreasureBoxTalkMaster_o *)sub_1B86604(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v1665, 0LL);
  if ( v1665 )
  {
    v547 = sub_1B864F4(v1665, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1634;
  v545->m_Items[372] = (DataMasterBase_o *)v1665;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[372], (int32_t)v1665, v1666, v1667);
  v1668 = (UserEventExpeditionMaster_o *)sub_1B86604(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v1668, 0LL);
  if ( v1668 )
  {
    v547 = sub_1B864F4(v1668, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1634;
  v545->m_Items[373] = (DataMasterBase_o *)v1668;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[373], (int32_t)v1668, v1669, v1670);
  v1671 = (EventExpeditionMaster_o *)sub_1B86604(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v1671, 0LL);
  if ( v1671 )
  {
    v547 = sub_1B864F4(v1671, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1634;
  v545->m_Items[374] = (DataMasterBase_o *)v1671;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[374], (int32_t)v1671, v1672, v1673);
  v1674 = (EventExpeditionPieceMaster_o *)sub_1B86604(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v1674, 0LL);
  if ( v1674 )
  {
    v547 = sub_1B864F4(v1674, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1634;
  v545->m_Items[375] = (DataMasterBase_o *)v1674;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[375], (int32_t)v1674, v1675, v1676);
  v1677 = (EventRecipeMaster_o *)sub_1B86604(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v1677, 0LL);
  if ( v1677 )
  {
    v547 = sub_1B864F4(v1677, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1634;
  v545->m_Items[376] = (DataMasterBase_o *)v1677;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[376], (int32_t)v1677, v1678, v1679);
  v1680 = (EventRecipeGiftMaster_o *)sub_1B86604(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v1680, 0LL);
  if ( v1680 )
  {
    v547 = sub_1B864F4(v1680, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1634;
  v545->m_Items[377] = (DataMasterBase_o *)v1680;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[377], (int32_t)v1680, v1681, v1682);
  v1683 = (UserEventFortificationMaster_o *)sub_1B86604(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v1683, 0LL);
  if ( v1683 )
  {
    v547 = sub_1B864F4(v1683, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1634;
  v545->m_Items[378] = (DataMasterBase_o *)v1683;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[378], (int32_t)v1683, v1684, v1685);
  v1686 = (EventFortificationMaster_o *)sub_1B86604(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v1686, 0LL);
  if ( v1686 )
  {
    v547 = sub_1B864F4(v1686, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1634;
  v545->m_Items[379] = (DataMasterBase_o *)v1686;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[379], (int32_t)v1686, v1687, v1688);
  v1689 = (EventFortificationDetailMaster_o *)sub_1B86604(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v1689, 0LL);
  if ( v1689 )
  {
    v547 = sub_1B864F4(v1689, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1634;
  v545->m_Items[380] = (DataMasterBase_o *)v1689;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[380], (int32_t)v1689, v1690, v1691);
  v1692 = (EventFortificationSvtMaster_o *)sub_1B86604(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v1692, 0LL);
  if ( v1692 )
  {
    v547 = sub_1B864F4(v1692, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1634;
  v545->m_Items[381] = (DataMasterBase_o *)v1692;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[381], (int32_t)v1692, v1693, v1694);
  v1695 = (UserServantVoicePlayedMaster_o *)sub_1B86604(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v1695, 0LL);
  if ( v1695 )
  {
    v547 = sub_1B864F4(v1695, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1634;
  v545->m_Items[382] = (DataMasterBase_o *)v1695;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[382], (int32_t)v1695, v1696, v1697);
  v1698 = (UpdateProfileDialogInfoMaster_o *)sub_1B86604(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v1698, 0LL);
  if ( v1698 )
  {
    v547 = sub_1B864F4(v1698, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1634;
  v545->m_Items[383] = (DataMasterBase_o *)v1698;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[383], (int32_t)v1698, v1699, v1700);
  v1701 = (SvtMaterialTdMaster_o *)sub_1B86604(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v1701, 0LL);
  if ( v1701 )
  {
    v547 = sub_1B864F4(v1701, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1634;
  v545->m_Items[384] = (DataMasterBase_o *)v1701;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[384], (int32_t)v1701, v1702, v1703);
  v1704 = (BattleMasterImageMaster_o *)sub_1B86604(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v1704, 0LL);
  if ( v1704 )
  {
    v547 = sub_1B864F4(v1704, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1634;
  v545->m_Items[385] = (DataMasterBase_o *)v1704;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[385], (int32_t)v1704, v1705, v1706);
  v1707 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1B86604(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v1707, 0LL);
  if ( v1707 )
  {
    v547 = sub_1B864F4(v1707, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1634;
  v545->m_Items[386] = (DataMasterBase_o *)v1707;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[386], (int32_t)v1707, v1708, v1709);
  v1710 = (UserEventRandomMissionMaster_o *)sub_1B86604(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v1710, 0LL);
  if ( v1710 )
  {
    v547 = sub_1B864F4(v1710, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1634;
  v545->m_Items[387] = (DataMasterBase_o *)v1710;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[387], (int32_t)v1710, v1711, v1712);
  v1713 = (EventProgressValueMaster_o *)sub_1B86604(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v1713, 0LL);
  if ( v1713 )
  {
    v547 = sub_1B864F4(v1713, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1634;
  v545->m_Items[388] = (DataMasterBase_o *)v1713;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[388], (int32_t)v1713, v1714, v1715);
  v1716 = (SvtMultiPortraitMaster_o *)sub_1B86604(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v1716, 0LL);
  if ( v1716 )
  {
    v547 = sub_1B864F4(v1716, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1634;
  v545->m_Items[389] = (DataMasterBase_o *)v1716;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[389], (int32_t)v1716, v1717, v1718);
  v1719 = (EventRandomMissionMaster_o *)sub_1B86604(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v1719, 0LL);
  if ( v1719 )
  {
    v547 = sub_1B864F4(v1719, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1634;
  v545->m_Items[390] = (DataMasterBase_o *)v1719;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[390], (int32_t)v1719, v1720, v1721);
  v1722 = (UserGachaHistoryMaster_o *)sub_1B86604(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v1722, 0LL);
  if ( v1722 )
  {
    v547 = sub_1B864F4(v1722, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1634;
  v545->m_Items[391] = (DataMasterBase_o *)v1722;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[391], (int32_t)v1722, v1723, v1724);
  v1725 = (UserCoinRoomMaster_o *)sub_1B86604(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v1725, 0LL);
  if ( v1725 )
  {
    v547 = sub_1B864F4(v1725, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1634;
  v545->m_Items[392] = (DataMasterBase_o *)v1725;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[392], (int32_t)v1725, v1726, v1727);
  v1728 = (EventBuddyPointMaster_o *)sub_1B86604(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v1728, 0LL);
  if ( v1728 )
  {
    v547 = sub_1B864F4(v1728, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1634;
  v545->m_Items[393] = (DataMasterBase_o *)v1728;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[393], (int32_t)v1728, v1729, v1730);
  v1731 = (EventServantPointRankMaster_o *)sub_1B86604(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v1731, 0LL);
  if ( v1731 )
  {
    v547 = sub_1B864F4(v1731, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1634;
  v545->m_Items[394] = (DataMasterBase_o *)v1731;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[394], (int32_t)v1731, v1732, v1733);
  v1734 = (UserEventServantPointMaster_o *)sub_1B86604(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v1734, 0LL);
  if ( v1734 )
  {
    v547 = sub_1B864F4(v1734, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1634;
  v545->m_Items[395] = (DataMasterBase_o *)v1734;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[395], (int32_t)v1734, v1735, v1736);
  v1737 = (FieldMotionMaster_o *)sub_1B86604(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v1737, 0LL);
  if ( v1737 )
  {
    v547 = sub_1B864F4(v1737, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1634;
  v545->m_Items[396] = (DataMasterBase_o *)v1737;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[396], (int32_t)v1737, v1738, v1739);
  v1740 = (UserDeleteReservationMaster_o *)sub_1B86604(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v1740, 0LL);
  if ( v1740 )
  {
    v547 = sub_1B864F4(v1740, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1634;
  v545->m_Items[397] = (DataMasterBase_o *)v1740;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[397], (int32_t)v1740, v1741, v1742);
  v1743 = (ServantScriptMultipleMaster_o *)sub_1B86604(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v1743, 0LL);
  if ( v1743 )
  {
    v547 = sub_1B864F4(v1743, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1634;
  v545->m_Items[398] = (DataMasterBase_o *)v1743;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[398], (int32_t)v1743, v1744, v1745);
  v1746 = (EquipAddMaster_o *)sub_1B86604(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v1746, 0LL);
  if ( v1746 )
  {
    v547 = sub_1B864F4(v1746, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1634;
  v545->m_Items[399] = (DataMasterBase_o *)v1746;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[399], (int32_t)v1746, v1747, v1748);
  v1749 = (QuestReleaseOverwriteMaster_o *)sub_1B86604(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v1749, 0LL);
  if ( v1749 )
  {
    v547 = sub_1B864F4(v1749, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1634;
  v545->m_Items[400] = (DataMasterBase_o *)v1749;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[400], (int32_t)v1749, v1750, v1751);
  v1752 = (UserEventAlloutBattleMaster_o *)sub_1B86604(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v1752, 0LL);
  if ( v1752 )
  {
    v547 = sub_1B864F4(v1752, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1634;
  v545->m_Items[401] = (DataMasterBase_o *)v1752;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[401], (int32_t)v1752, v1753, v1754);
  v1755 = (QuestScriptMaterialNextMaster_o *)sub_1B86604(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v1755, 0LL);
  if ( v1755 )
  {
    v547 = sub_1B864F4(v1755, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1634;
  v545->m_Items[402] = (DataMasterBase_o *)v1755;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[402], (int32_t)v1755, v1756, v1757);
  v1758 = (EventDiggingMaster_o *)sub_1B86604(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v1758, 0LL);
  if ( v1758 )
  {
    v547 = sub_1B864F4(v1758, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1634;
  v545->m_Items[403] = (DataMasterBase_o *)v1758;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[403], (int32_t)v1758, v1759, v1760);
  v1761 = (EventDiggingBlockMaster_o *)sub_1B86604(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v1761, 0LL);
  if ( v1761 )
  {
    v547 = sub_1B864F4(v1761, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1634;
  v545->m_Items[404] = (DataMasterBase_o *)v1761;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[404], (int32_t)v1761, v1762, v1763);
  v1764 = (EventDiggingRewardMaster_o *)sub_1B86604(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v1764, 0LL);
  if ( v1764 )
  {
    v547 = sub_1B864F4(v1764, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1634;
  v545->m_Items[405] = (DataMasterBase_o *)v1764;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[405], (int32_t)v1764, v1765, v1766);
  v1767 = (UserEventDiggingMaster_o *)sub_1B86604(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v1767, 0LL);
  if ( v1767 )
  {
    v547 = sub_1B864F4(v1767, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1634;
  v545->m_Items[406] = (DataMasterBase_o *)v1767;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[406], (int32_t)v1767, v1768, v1769);
  v1770 = (BattleMessageMaster_o *)sub_1B86604(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v1770, 0LL);
  if ( v1770 )
  {
    v547 = sub_1B864F4(v1770, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1634;
  v545->m_Items[407] = (DataMasterBase_o *)v1770;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[407], (int32_t)v1770, v1771, v1772);
  v1773 = (BattleMessageGroupMaster_o *)sub_1B86604(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v1773, 0LL);
  if ( v1773 )
  {
    v547 = sub_1B864F4(v1773, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1634;
  v545->m_Items[408] = (DataMasterBase_o *)v1773;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[408], (int32_t)v1773, v1774, v1775);
  v1776 = (UserNpcSvtRecordMaster_o *)sub_1B86604(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v1776, 0LL);
  if ( v1776 )
  {
    v547 = sub_1B864F4(v1776, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1634;
  v545->m_Items[409] = (DataMasterBase_o *)v1776;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[409], (int32_t)v1776, v1777, v1778);
  v1779 = (BuffTypeDetailMaster_o *)sub_1B86604(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v1779, 0LL);
  if ( v1779 )
  {
    v547 = sub_1B864F4(v1779, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1634;
  v545->m_Items[410] = (DataMasterBase_o *)v1779;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[410], (int32_t)v1779, v1780, v1781);
  v1782 = (WarBoardMessageMaster_o *)sub_1B86604(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v1782, 0LL);
  if ( v1782 )
  {
    v547 = sub_1B864F4(v1782, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1634;
  v545->m_Items[411] = (DataMasterBase_o *)v1782;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[411], (int32_t)v1782, v1783, v1784);
  v1785 = (WarBoardPartySkillMaster_o *)sub_1B86604(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v1785, 0LL);
  if ( v1785 )
  {
    v547 = sub_1B864F4(v1785, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1634;
  v545->m_Items[412] = (DataMasterBase_o *)v1785;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[412], (int32_t)v1785, v1786, v1787);
  v1788 = (WarBoardMessageScriptMaster_o *)sub_1B86604(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v1788, 0LL);
  if ( v1788 )
  {
    v547 = sub_1B864F4(v1788, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1634;
  v545->m_Items[413] = (DataMasterBase_o *)v1788;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[413], (int32_t)v1788, v1789, v1790);
  v1791 = (WarQuestSelectionMaster_o *)sub_1B86604(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v1791, 0LL);
  if ( v1791 )
  {
    v547 = sub_1B864F4(v1791, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1634;
  v545->m_Items[414] = (DataMasterBase_o *)v1791;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[414], (int32_t)v1791, v1792, v1793);
  v1794 = (WarBoardStageDetailMaster_o *)sub_1B86604(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v1794, 0LL);
  if ( v1794 )
  {
    v547 = sub_1B864F4(v1794, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1634;
  v545->m_Items[415] = (DataMasterBase_o *)v1794;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[415], (int32_t)v1794, v1795, v1796);
  v1797 = (QuestScriptMaterialOverwriteMaster_o *)sub_1B86604(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v1797, 0LL);
  if ( v1797 )
  {
    v547 = sub_1B864F4(v1797, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1634;
  v545->m_Items[416] = (DataMasterBase_o *)v1797;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[416], (int32_t)v1797, v1798, v1799);
  v1800 = (QuestScriptBranchMaterialMaster_o *)sub_1B86604(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v1800, 0LL);
  if ( v1800 )
  {
    v547 = sub_1B864F4(v1800, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1634;
  v545->m_Items[417] = (DataMasterBase_o *)v1800;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[417], (int32_t)v1800, v1801, v1802);
  v1803 = (AdCheckPointMaster_o *)sub_1B86604(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v1803, 0LL);
  if ( v1803 )
  {
    v547 = sub_1B864F4(v1803, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1634;
  v545->m_Items[418] = (DataMasterBase_o *)v1803;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[418], (int32_t)v1803, v1804, v1805);
  v1806 = (GiftDetailMaster_o *)sub_1B86604(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v1806, 0LL);
  if ( v1806 )
  {
    v547 = sub_1B864F4(v1806, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1634;
  v545->m_Items[419] = (DataMasterBase_o *)v1806;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[419], (int32_t)v1806, v1807, v1808);
  v1809 = (CombineLimitGiftMaster_o *)sub_1B86604(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v1809, 0LL);
  if ( v1809 )
  {
    v547 = sub_1B864F4(v1809, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1634;
  v545->m_Items[420] = (DataMasterBase_o *)v1809;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[420], (int32_t)v1809, v1810, v1811);
  v1812 = (EventCooltimeRewardMaster_o *)sub_1B86604(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v1812, 0LL);
  if ( v1812 )
  {
    v547 = sub_1B864F4(v1812, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1634;
  v545->m_Items[421] = (DataMasterBase_o *)v1812;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[421], (int32_t)v1812, v1813, v1814);
  v1815 = (UserEventCooltimeRewardMaster_o *)sub_1B86604(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v1815, 0LL);
  if ( v1815 )
  {
    v547 = sub_1B864F4(v1815, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1634;
  v545->m_Items[422] = (DataMasterBase_o *)v1815;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[422], (int32_t)v1815, v1816, v1817);
  v1818 = (ClassBoardBaseMaster_o *)sub_1B86604(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v1818, 0LL);
  if ( v1818 )
  {
    v547 = sub_1B864F4(v1818, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1634;
  v545->m_Items[423] = (DataMasterBase_o *)v1818;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[423], (int32_t)v1818, v1819, v1820);
  v1821 = (ClassBoardLockMaster_o *)sub_1B86604(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v1821, 0LL);
  if ( v1821 )
  {
    v547 = sub_1B864F4(v1821, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1634;
  v545->m_Items[424] = (DataMasterBase_o *)v1821;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[424], (int32_t)v1821, v1822, v1823);
  v1824 = (ClassBoardSquareMaster_o *)sub_1B86604(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v1824, 0LL);
  if ( v1824 )
  {
    v547 = sub_1B864F4(v1824, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1634;
  v545->m_Items[425] = (DataMasterBase_o *)v1824;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[425], (int32_t)v1824, v1825, v1826);
  v1827 = (ClassBoardLineMaster_o *)sub_1B86604(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v1827, 0LL);
  if ( v1827 )
  {
    v547 = sub_1B864F4(v1827, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1634;
  v545->m_Items[426] = (DataMasterBase_o *)v1827;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[426], (int32_t)v1827, v1828, v1829);
  v1830 = (UserClassBoardSquareMaster_o *)sub_1B86604(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v1830, 0LL);
  if ( v1830 )
  {
    v547 = sub_1B864F4(v1830, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1634;
  v545->m_Items[427] = (DataMasterBase_o *)v1830;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[427], (int32_t)v1830, v1831, v1832);
  v1833 = (ServantCardAddMaster_o *)sub_1B86604(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v1833, 0LL);
  if ( v1833 )
  {
    v547 = sub_1B864F4(v1833, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1634;
  v545->m_Items[428] = (DataMasterBase_o *)v1833;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[428], (int32_t)v1833, v1834, v1835);
  v1836 = (MapLayerMaster_o *)sub_1B86604(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v1836, 0LL);
  if ( v1836 )
  {
    v547 = sub_1B864F4(v1836, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1634;
  v545->m_Items[429] = (DataMasterBase_o *)v1836;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[429], (int32_t)v1836, v1837, v1838);
  v1839 = (SpotLayerMaster_o *)sub_1B86604(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v1839, 0LL);
  if ( v1839 )
  {
    v547 = sub_1B864F4(v1839, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1634;
  v545->m_Items[430] = (DataMasterBase_o *)v1839;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[430], (int32_t)v1839, v1840, v1841);
  v1842 = (MapGimmickLayerMaster_o *)sub_1B86604(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v1842, 0LL);
  if ( v1842 )
  {
    v547 = sub_1B864F4(v1842, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1634;
  v545->m_Items[431] = (DataMasterBase_o *)v1842;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[431], (int32_t)v1842, v1843, v1844);
  v1845 = (EventDataLostBattleMaster_o *)sub_1B86604(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v1845, 0LL);
  if ( v1845 )
  {
    v547 = sub_1B864F4(v1845, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1634;
  v545->m_Items[432] = (DataMasterBase_o *)v1845;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[432], (int32_t)v1845, v1846, v1847);
  v1848 = (EventDataLostBattleResetMaster_o *)sub_1B86604(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v1848, 0LL);
  if ( v1848 )
  {
    v547 = sub_1B864F4(v1848, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1634;
  v545->m_Items[433] = (DataMasterBase_o *)v1848;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[433], (int32_t)v1848, v1849, v1850);
  v1851 = (UserEventDataLostMaster_o *)sub_1B86604(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v1851, 0LL);
  if ( v1851 )
  {
    v547 = sub_1B864F4(v1851, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1634;
  v545->m_Items[434] = (DataMasterBase_o *)v1851;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[434], (int32_t)v1851, v1852, v1853);
  v1854 = (QuestHintMaster_o *)sub_1B86604(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v1854, 0LL);
  if ( v1854 )
  {
    v547 = sub_1B864F4(v1854, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1634;
  v545->m_Items[435] = (DataMasterBase_o *)v1854;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[435], (int32_t)v1854, v1855, v1856);
  v1857 = (FuncTypeDetailMaster_o *)sub_1B86604(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v1857, 0LL);
  if ( v1857 )
  {
    v547 = sub_1B864F4(v1857, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1634;
  v545->m_Items[436] = (DataMasterBase_o *)v1857;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[436], (int32_t)v1857, v1858, v1859);
  v1860 = (BuffConvertMaster_o *)sub_1B86604(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v1860, 0LL);
  if ( v1860 )
  {
    v547 = sub_1B864F4(v1860, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1634;
  v545->m_Items[437] = (DataMasterBase_o *)v1860;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[437], (int32_t)v1860, v1861, v1862);
  v1863 = (SkillGroupMaster_o *)sub_1B86604(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v1863, 0LL);
  if ( v1863 )
  {
    v547 = sub_1B864F4(v1863, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1634;
  v545->m_Items[438] = (DataMasterBase_o *)v1863;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[438], (int32_t)v1863, v1864, v1865);
  v1866 = (SkillGroupOverwriteMaster_o *)sub_1B86604(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v1866, 0LL);
  if ( v1866 )
  {
    v547 = sub_1B864F4(v1866, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1634;
  v545->m_Items[439] = (DataMasterBase_o *)v1866;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[439], (int32_t)v1866, v1867, v1868);
  v1869 = (SkillIndividualityMaster_o *)sub_1B86604(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v1869, 0LL);
  if ( v1869 )
  {
    v547 = sub_1B864F4(v1869, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1634;
  v545->m_Items[440] = (DataMasterBase_o *)v1869;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[440], (int32_t)v1869, v1870, v1871);
  v1872 = (RestrictionBaseMaster_o *)sub_1B86604(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v1872, 0LL);
  if ( v1872 )
  {
    v547 = sub_1B864F4(v1872, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1634;
  v545->m_Items[441] = (DataMasterBase_o *)v1872;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[441], (int32_t)v1872, v1873, v1874);
  v1875 = (RestrictionSlotMaster_o *)sub_1B86604(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v1875, 0LL);
  if ( v1875 )
  {
    v547 = sub_1B864F4(v1875, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1634;
  v545->m_Items[442] = (DataMasterBase_o *)v1875;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[442], (int32_t)v1875, v1876, v1877);
  v1878 = (RestrictionSlotDetailMaster_o *)sub_1B86604(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v1878, 0LL);
  if ( v1878 )
  {
    v547 = sub_1B864F4(v1878, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1634;
  v545->m_Items[443] = (DataMasterBase_o *)v1878;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[443], (int32_t)v1878, v1879, v1880);
  v1881 = (RestrictionMessageMaster_o *)sub_1B86604(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v1881, 0LL);
  if ( v1881 )
  {
    v547 = sub_1B864F4(v1881, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1634;
  v545->m_Items[444] = (DataMasterBase_o *)v1881;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[444], (int32_t)v1881, v1882, v1883);
  v1884 = (RestrictionWholeMaster_o *)sub_1B86604(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v1884, 0LL);
  if ( v1884 )
  {
    v547 = sub_1B864F4(v1884, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1634;
  v545->m_Items[445] = (DataMasterBase_o *)v1884;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[445], (int32_t)v1884, v1885, v1886);
  v1887 = (FuncDispMaster_o *)sub_1B86604(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v1887, 0LL);
  if ( v1887 )
  {
    v547 = sub_1B864F4(v1887, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1634;
  v545->m_Items[446] = (DataMasterBase_o *)v1887;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[446], (int32_t)v1887, v1888, v1889);
  v1890 = (ClassBoardCommandSpellMaster_o *)sub_1B86604(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v1890, 0LL);
  if ( v1890 )
  {
    v547 = sub_1B864F4(v1890, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1634;
  v545->m_Items[447] = (DataMasterBase_o *)v1890;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[447], (int32_t)v1890, v1891, v1892);
  v1893 = (ClassBoardClassMaster_o *)sub_1B86604(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v1893, 0LL);
  if ( v1893 )
  {
    v547 = sub_1B864F4(v1893, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1634;
  v545->m_Items[448] = (DataMasterBase_o *)v1893;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[448], (int32_t)v1893, v1894, v1895);
  v1896 = (EventCommandAssistMaster_o *)sub_1B86604(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v1896, 0LL);
  if ( v1896 )
  {
    v547 = sub_1B864F4(v1896, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1634;
  v545->m_Items[449] = (DataMasterBase_o *)v1896;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[449], (int32_t)v1896, v1897, v1898);
  v1899 = (EventMissionGroupMaster_o *)sub_1B86604(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v1899, 0LL);
  if ( v1899 )
  {
    v547 = sub_1B864F4(v1899, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1634;
  v545->m_Items[450] = (DataMasterBase_o *)v1899;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[450], (int32_t)v1899, v1900, v1901);
  v1902 = (CombineLimitReleaseMaster_o *)sub_1B86604(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v1902, 0LL);
  if ( v1902 )
  {
    v547 = sub_1B864F4(v1902, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1634;
  v545->m_Items[451] = (DataMasterBase_o *)v1902;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[451], (int32_t)v1902, v1903, v1904);
  v1905 = (HeelPortraitMaster_o *)sub_1B86604(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v1905, 0LL);
  if ( v1905 )
  {
    v547 = sub_1B864F4(v1905, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1634;
  v545->m_Items[452] = (DataMasterBase_o *)v1905;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[452], (int32_t)v1905, v1906, v1907);
  v1908 = (UserHeelPortraitMaster_o *)sub_1B86604(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v1908, 0LL);
  if ( v1908 )
  {
    v547 = sub_1B864F4(v1908, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1634;
  v545->m_Items[453] = (DataMasterBase_o *)v1908;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[453], (int32_t)v1908, v1909, v1910);
  v1911 = (TreasureDeviceSequenceWeightMaster_o *)sub_1B86604(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v1911, 0LL);
  if ( v1911 )
  {
    v547 = sub_1B864F4(v1911, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1634;
  v545->m_Items[454] = (DataMasterBase_o *)v1911;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[454], (int32_t)v1911, v1912, v1913);
  v1914 = (NpcServantFollowerIndividualityMaster_o *)sub_1B86604(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v1914, 0LL);
  if ( v1914 )
  {
    v547 = sub_1B864F4(v1914, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1634;
  v545->m_Items[455] = (DataMasterBase_o *)v1914;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[455], (int32_t)v1914, v1915, v1916);
  v1917 = (GachaExtraGiftMaster_o *)sub_1B86604(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v1917, 0LL);
  if ( v1917 )
  {
    v547 = sub_1B864F4(v1917, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1634;
  v545->m_Items[456] = (DataMasterBase_o *)v1917;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[456], (int32_t)v1917, v1918, v1919);
  v1920 = (EventMuralMaster_o *)sub_1B86604(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v1920, 0LL);
  if ( v1920 )
  {
    v547 = sub_1B864F4(v1920, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1634;
  v545->m_Items[457] = (DataMasterBase_o *)v1920;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[457], (int32_t)v1920, v1921, v1922);
  v1923 = (ViewWaveEnemyMaster_o *)sub_1B86604(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v1923, 0LL);
  if ( v1923 )
  {
    v547 = sub_1B864F4(v1923, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1634;
  v545->m_Items[458] = (DataMasterBase_o *)v1923;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[458], (int32_t)v1923, v1924, v1925);
  v1926 = (BlankEarthSpotNavimenuMaster_o *)sub_1B86604(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v1926, 0LL);
  if ( v1926 )
  {
    v547 = sub_1B864F4(v1926, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1634;
  v545->m_Items[459] = (DataMasterBase_o *)v1926;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[459], (int32_t)v1926, v1927, v1928);
  v1929 = (BlankEarthGimmickMaster_o *)sub_1B86604(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v1929, 0LL);
  if ( v1929 )
  {
    v547 = sub_1B864F4(v1929, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1634;
  v545->m_Items[460] = (DataMasterBase_o *)v1929;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[460], (int32_t)v1929, v1930, v1931);
  v1932 = (TerminalOverwriteMaster_o *)sub_1B86604(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v1932, 0LL);
  if ( v1932 )
  {
    v547 = sub_1B864F4(v1932, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1634;
  v545->m_Items[461] = (DataMasterBase_o *)v1932;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[461], (int32_t)v1932, v1933, v1934);
  v1935 = (UserExchangeSvtMaster_o *)sub_1B86604(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v1935, 0LL);
  if ( v1935 )
  {
    v547 = sub_1B864F4(v1935, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1634;
  v545->m_Items[462] = (DataMasterBase_o *)v1935;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[462], (int32_t)v1935, v1936, v1937);
  v1938 = (WarBoardCommonReleaseMaster_o *)sub_1B86604(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v1938, 0LL);
  if ( v1938 )
  {
    v547 = sub_1B864F4(v1938, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1634;
  v545->m_Items[463] = (DataMasterBase_o *)v1938;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[463], (int32_t)v1938, v1939, v1940);
  v1941 = (WarBoardEventMaster_o *)sub_1B86604(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v1941, 0LL);
  if ( v1941 )
  {
    v547 = sub_1B864F4(v1941, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1634;
  v545->m_Items[464] = (DataMasterBase_o *)v1941;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[464], (int32_t)v1941, v1942, v1943);
  v1944 = (WarBoardEventScriptMaster_o *)sub_1B86604(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v1944, 0LL);
  if ( v1944 )
  {
    v547 = sub_1B864F4(v1944, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1634;
  v545->m_Items[465] = (DataMasterBase_o *)v1944;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[465], (int32_t)v1944, v1945, v1946);
  v1947 = (WarBoardStageBossMaster_o *)sub_1B86604(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v1947, 0LL);
  if ( v1947 )
  {
    v547 = sub_1B864F4(v1947, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1634;
  v545->m_Items[466] = (DataMasterBase_o *)v1947;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[466], (int32_t)v1947, v1948, v1949);
  v1950 = (WarBoardSquareIndexGroupMaster_o *)sub_1B86604(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v1950, 0LL);
  if ( v1950 )
  {
    v547 = sub_1B864F4(v1950, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1634;
  v545->m_Items[467] = (DataMasterBase_o *)v1950;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[467], (int32_t)v1950, v1951, v1952);
  v1953 = (WarBoardActionTrendGroupMaster_o *)sub_1B86604(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v1953, 0LL);
  if ( v1953 )
  {
    v547 = sub_1B864F4(v1953, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1634;
  v545->m_Items[468] = (DataMasterBase_o *)v1953;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[468], (int32_t)v1953, v1954, v1955);
  v1956 = (WarBoardRatingOffsetGroupMaster_o *)sub_1B86604(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v1956, 0LL);
  if ( v1956 )
  {
    v547 = sub_1B864F4(v1956, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1634;
  v545->m_Items[469] = (DataMasterBase_o *)v1956;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[469], (int32_t)v1956, v1957, v1958);
  v1959 = (WarBoardReinforcementsMaster_o *)sub_1B86604(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v1959, 0LL);
  if ( v1959 )
  {
    v547 = sub_1B864F4(v1959, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1634;
  v545->m_Items[470] = (DataMasterBase_o *)v1959;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[470], (int32_t)v1959, v1960, v1961);
  v1962 = (WarBoardStageReinforcementsMaster_o *)sub_1B86604(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v1962, 0LL);
  if ( v1962 )
  {
    v547 = sub_1B864F4(v1962, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1634;
  v545->m_Items[471] = (DataMasterBase_o *)v1962;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[471], (int32_t)v1962, v1963, v1964);
  v1965 = (WarBoardFutureActionTrendMaster_o *)sub_1B86604(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v1965, 0LL);
  if ( v1965 )
  {
    v547 = sub_1B864F4(v1965, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1634;
  v545->m_Items[472] = (DataMasterBase_o *)v1965;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[472], (int32_t)v1965, v1966, v1967);
  v1968 = (ServantProfilePushMaster_o *)sub_1B86604(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v1968, 0LL);
  if ( v1968 )
  {
    v547 = sub_1B864F4(v1968, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1634;
  v545->m_Items[473] = (DataMasterBase_o *)v1968;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[473], (int32_t)v1968, v1969, v1970);
  v1971 = (MapGimmickPathMaster_o *)sub_1B86604(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v1971, 0LL);
  if ( v1971 )
  {
    v547 = sub_1B864F4(v1971, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1634;
  v545->m_Items[474] = (DataMasterBase_o *)v1971;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[474], (int32_t)v1971, v1972, v1973);
  v1974 = (MapGimmickPathReleaseMaster_o *)sub_1B86604(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v1974, 0LL);
  if ( v1974 )
  {
    v547 = sub_1B864F4(v1974, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1634;
  v545->m_Items[475] = (DataMasterBase_o *)v1974;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[475], (int32_t)v1974, v1975, v1976);
  v1977 = (ServantOverwriteMaster_o *)sub_1B86604(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v1977, 0LL);
  if ( v1977 )
  {
    v547 = sub_1B864F4(v1977, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1634;
  v545->m_Items[476] = (DataMasterBase_o *)v1977;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[476], (int32_t)v1977, v1978, v1979);
  v1980 = (IndividualityPolicyMaster_o *)sub_1B86604(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v1980, 0LL);
  if ( v1980 )
  {
    v547 = sub_1B864F4(v1980, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1634;
  v545->m_Items[477] = (DataMasterBase_o *)v1980;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[477], (int32_t)v1980, v1981, v1982);
  v1983 = (IndividualityPersonalityMaster_o *)sub_1B86604(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v1983, 0LL);
  if ( v1983 )
  {
    v547 = sub_1B864F4(v1983, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1634;
  v545->m_Items[478] = (DataMasterBase_o *)v1983;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[478], (int32_t)v1983, v1984, v1985);
  v1986 = (AttriMaster_o *)sub_1B86604(AttriMaster_TypeInfo);
  AttriMaster___ctor(v1986, 0LL);
  if ( v1986 )
  {
    v547 = sub_1B864F4(v1986, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1634;
  v545->m_Items[479] = (DataMasterBase_o *)v1986;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[479], (int32_t)v1986, v1987, v1988);
  v1989 = (ServantVoicePatternMaster_o *)sub_1B86604(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v1989, 0LL);
  if ( v1989 )
  {
    v547 = sub_1B864F4(v1989, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1634;
  v545->m_Items[480] = (DataMasterBase_o *)v1989;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[480], (int32_t)v1989, v1990, v1991);
  v1992 = (UserGameCommonMaster_o *)sub_1B86604(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v1992, 0LL);
  if ( v1992 )
  {
    v547 = sub_1B864F4(v1992, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1634;
  v545->m_Items[481] = (DataMasterBase_o *)v1992;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[481], (int32_t)v1992, v1993, v1994);
  v1995 = (ServantPhotoMaster_o *)sub_1B86604(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v1995, 0LL);
  if ( v1995 )
  {
    v547 = sub_1B864F4(v1995, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1634;
  v545->m_Items[482] = (DataMasterBase_o *)v1995;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[482], (int32_t)v1995, v1996, v1997);
  v1998 = (MasterPhotoMaster_o *)sub_1B86604(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v1998, 0LL);
  if ( v1998 )
  {
    v547 = sub_1B864F4(v1998, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1634;
  v545->m_Items[483] = (DataMasterBase_o *)v1998;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[483], (int32_t)v1998, v1999, v2000);
  v2001 = (PhotoFrameMaster_o *)sub_1B86604(PhotoFrameMaster_TypeInfo);
  PhotoFrameMaster___ctor(v2001, 0LL);
  if ( v2001 )
  {
    v547 = sub_1B864F4(v2001, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1634;
  v545->m_Items[484] = (DataMasterBase_o *)v2001;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[484], (int32_t)v2001, v2002, v2003);
  v2004 = (WarMessageMaster_o *)sub_1B86604(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v2004, 0LL);
  if ( v2004 )
  {
    v547 = sub_1B864F4(v2004, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1634;
  v545->m_Items[485] = (DataMasterBase_o *)v2004;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[485], (int32_t)v2004, v2005, v2006);
  v2007 = (QuestAutoOrganizationAdjustMaster_o *)sub_1B86604(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v2007, 0LL);
  if ( v2007 )
  {
    v547 = sub_1B864F4(v2007, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1634;
  v545->m_Items[486] = (DataMasterBase_o *)v2007;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[486], (int32_t)v2007, v2008, v2009);
  v2010 = (ExcludeMotionMaster_o *)sub_1B86604(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v2010, 0LL);
  if ( v2010 )
  {
    v547 = sub_1B864F4(v2010, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1634;
  v545->m_Items[487] = (DataMasterBase_o *)v2010;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[487], (int32_t)v2010, v2011, v2012);
  v2013 = (UserInterruptionQuestMaster_o *)sub_1B86604(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v2013, 0LL);
  if ( v2013 )
  {
    v547 = sub_1B864F4(v2013, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1634;
  v545->m_Items[488] = (DataMasterBase_o *)v2013;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[488], (int32_t)v2013, v2014, v2015);
  v2016 = (ServantTransformMaster_o *)sub_1B86604(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v2016, 0LL);
  if ( v2016 )
  {
    v547 = sub_1B864F4(v2016, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1634;
  v545->m_Items[489] = (DataMasterBase_o *)v2016;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[489], (int32_t)v2016, v2017, v2018);
  v2019 = (MapUpdateScheduleMaster_o *)sub_1B86604(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v2019, 0LL);
  if ( v2019 )
  {
    v547 = sub_1B864F4(v2019, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1634;
  v545->m_Items[490] = (DataMasterBase_o *)v2019;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[490], (int32_t)v2019, v2020, v2021);
  v2022 = (QuestPhasePresentMaster_o *)sub_1B86604(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v2022, 0LL);
  if ( v2022 )
  {
    v547 = sub_1B864F4(v2022, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1634;
  v545->m_Items[491] = (DataMasterBase_o *)v2022;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[491], (int32_t)v2022, v2023, v2024);
  v2025 = (UserAccountLinkageMaster_o *)sub_1B86604(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v2025, 0LL);
  if ( v2025 )
  {
    v547 = sub_1B864F4(v2025, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1634;
  v545->m_Items[492] = (DataMasterBase_o *)v2025;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[492], (int32_t)v2025, v2026, v2027);
  v2028 = (MissionNaviTransitionMaster_o *)sub_1B86604(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v2028, 0LL);
  if ( v2028 )
  {
    v547 = sub_1B864F4(v2028, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1634;
  v545->m_Items[493] = (DataMasterBase_o *)v2028;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[493], (int32_t)v2028, v2029, v2030);
  v2031 = (MissionNaviQuestMaster_o *)sub_1B86604(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v2031, 0LL);
  if ( v2031 )
  {
    v547 = sub_1B864F4(v2031, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1634;
  v545->m_Items[494] = (DataMasterBase_o *)v2031;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[494], (int32_t)v2031, v2032, v2033);
  v2034 = (EventTradeGoodsMaster_o *)sub_1B86604(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v2034, 0LL);
  if ( v2034 )
  {
    v547 = sub_1B864F4(v2034, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1634;
  v545->m_Items[495] = (DataMasterBase_o *)v2034;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[495], (int32_t)v2034, v2035, v2036);
  v2037 = (EventTradeStoreMaster_o *)sub_1B86604(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v2037, 0LL);
  if ( v2037 )
  {
    v547 = sub_1B864F4(v2037, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1634;
  v545->m_Items[496] = (DataMasterBase_o *)v2037;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[496], (int32_t)v2037, v2038, v2039);
  v2040 = (EventTradePickupMaster_o *)sub_1B86604(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v2040, 0LL);
  if ( v2040 )
  {
    v547 = sub_1B864F4(v2040, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1634;
  v545->m_Items[497] = (DataMasterBase_o *)v2040;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[497], (int32_t)v2040, v2041, v2042);
  v2043 = (UserEventTradeMaster_o *)sub_1B86604(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v2043, 0LL);
  if ( v2043 )
  {
    v547 = sub_1B864F4(v2043, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1634;
  v545->m_Items[498] = (DataMasterBase_o *)v2043;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[498], (int32_t)v2043, v2044, v2045);
  v2046 = (PaymentHistoryMaster_o *)sub_1B86604(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v2046, 0LL);
  if ( v2046 )
  {
    v547 = sub_1B864F4(v2046, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1634;
  v545->m_Items[499] = (DataMasterBase_o *)v2046;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[499], (int32_t)v2046, v2047, v2048);
  v2049 = (UserExternalPaymentStoneMaster_o *)sub_1B86604(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v2049, 0LL);
  if ( v2049 )
  {
    v547 = sub_1B864F4(v2049, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1634;
  v545->m_Items[500] = (DataMasterBase_o *)v2049;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[500], (int32_t)v2049, v2050, v2051);
  v2052 = (QuestPhaseIndividualityMaster_o *)sub_1B86604(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v2052, 0LL);
  if ( v2052 )
  {
    v547 = sub_1B864F4(v2052, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1634;
  v545->m_Items[501] = (DataMasterBase_o *)v2052;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[501], (int32_t)v2052, v2053, v2054);
  v2055 = (ViewGachaFeaturedServantMaster_o *)sub_1B86604(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v2055, 0LL);
  if ( v2055 )
  {
    v547 = sub_1B864F4(v2055, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1634;
  v545->m_Items[502] = (DataMasterBase_o *)v2055;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[502], (int32_t)v2055, v2056, v2057);
  v2058 = (UserGachaPickupCollateralMaster_o *)sub_1B86604(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v2058, 0LL);
  if ( v2058 )
  {
    v547 = sub_1B864F4(v2058, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1634;
  v545->m_Items[503] = (DataMasterBase_o *)v2058;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[503], (int32_t)v2058, v2059, v2060);
  v2061 = (GachaPickupCollateralMaster_o *)sub_1B86604(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v2061, 0LL);
  if ( v2061 )
  {
    v547 = sub_1B864F4(v2061, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1634;
  v545->m_Items[504] = (DataMasterBase_o *)v2061;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[504], (int32_t)v2061, v2062, v2063);
  v2064 = (GachaPickupCollateralGroupMaster_o *)sub_1B86604(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v2064, 0LL);
  if ( v2064 )
  {
    v547 = sub_1B864F4(v2064, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1634;
  v545->m_Items[505] = (DataMasterBase_o *)v2064;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[505], (int32_t)v2064, v2065, v2066);
  v2067 = (BattlePointMaster_o *)sub_1B86604(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v2067, 0LL);
  if ( v2067 )
  {
    v547 = sub_1B864F4(v2067, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1634;
  v545->m_Items[506] = (DataMasterBase_o *)v2067;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[506], (int32_t)v2067, v2068, v2069);
  v2070 = (BattlePointPhaseMaster_o *)sub_1B86604(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v2070, 0LL);
  if ( v2070 )
  {
    v547 = sub_1B864F4(v2070, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1634;
  v545->m_Items[507] = (DataMasterBase_o *)v2070;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[507], (int32_t)v2070, v2071, v2072);
  v2073 = (ServantBattlePointMaster_o *)sub_1B86604(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v2073, 0LL);
  if ( v2073 )
  {
    v547 = sub_1B864F4(v2073, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1634;
  v545->m_Items[508] = (DataMasterBase_o *)v2073;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[508], (int32_t)v2073, v2074, v2075);
  v2076 = (EffectMovieMaster_o *)sub_1B86604(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v2076, 0LL);
  if ( v2076 )
  {
    v547 = sub_1B864F4(v2076, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1634;
  v545->m_Items[509] = (DataMasterBase_o *)v2076;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[509], (int32_t)v2076, v2077, v2078);
  v2079 = (PaymentLimitMaster_o *)sub_1B86604(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v2079, 0LL);
  if ( v2079 )
  {
    v547 = sub_1B864F4(v2079, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1634;
  v545->m_Items[510] = (DataMasterBase_o *)v2079;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[510], (int32_t)v2079, v2080, v2081);
  v2082 = (UserPaymentLimitMaster_o *)sub_1B86604(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v2082, 0LL);
  if ( v2082 )
  {
    v547 = sub_1B864F4(v2082, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1634;
  v545->m_Items[511] = (DataMasterBase_o *)v2082;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[511], (int32_t)v2082, v2083, v2084);
  v2085 = (RoadmapMaster_o *)sub_1B86604(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v2085, 0LL);
  if ( v2085 )
  {
    v547 = sub_1B864F4(v2085, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x200 )
    goto LABEL_1634;
  v545->m_Items[512] = (DataMasterBase_o *)v2085;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[512], (int32_t)v2085, v2086, v2087);
  v2088 = (UserRecommendSupportMaster_o *)sub_1B86604(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v2088, 0LL);
  if ( v2088 )
  {
    v547 = sub_1B864F4(v2088, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x201 )
    goto LABEL_1634;
  v545->m_Items[513] = (DataMasterBase_o *)v2088;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[513], (int32_t)v2088, v2089, v2090);
  v2091 = (RecommendSupportQuestMaster_o *)sub_1B86604(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v2091, 0LL);
  if ( v2091 )
  {
    v547 = sub_1B864F4(v2091, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x202 )
    goto LABEL_1634;
  v545->m_Items[514] = (DataMasterBase_o *)v2091;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[514], (int32_t)v2091, v2092, v2093);
  v2094 = (RecommendAdviceMessageMaster_o *)sub_1B86604(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v2094, 0LL);
  if ( v2094 )
  {
    v547 = sub_1B864F4(v2094, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x203 )
    goto LABEL_1634;
  v545->m_Items[515] = (DataMasterBase_o *)v2094;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[515], (int32_t)v2094, v2095, v2096);
  v2097 = (UserRecommendFollowerMaster_o *)sub_1B86604(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v2097, 0LL);
  if ( v2097 )
  {
    v547 = sub_1B864F4(v2097, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x204 )
    goto LABEL_1634;
  v545->m_Items[516] = (DataMasterBase_o *)v2097;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[516], (int32_t)v2097, v2098, v2099);
  v2100 = (ItemDropEfficiencyMaster_o *)sub_1B86604(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v2100, 0LL);
  if ( v2100 )
  {
    v547 = sub_1B864F4(v2100, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x205 )
    goto LABEL_1634;
  v545->m_Items[517] = (DataMasterBase_o *)v2100;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[517], (int32_t)v2100, v2101, v2102);
  v2103 = (BlankEarthGimmickAddMaster_o *)sub_1B86604(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v2103, 0LL);
  if ( v2103 )
  {
    v547 = sub_1B864F4(v2103, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x206 )
    goto LABEL_1634;
  v545->m_Items[518] = (DataMasterBase_o *)v2103;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[518], (int32_t)v2103, v2104, v2105);
  v2106 = (WarReleaseMaster_o *)sub_1B86604(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v2106, 0LL);
  if ( v2106 )
  {
    v547 = sub_1B864F4(v2106, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x207 )
    goto LABEL_1634;
  v545->m_Items[519] = (DataMasterBase_o *)v2106;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[519], (int32_t)v2106, v2107, v2108);
  v2109 = (SelectBonusBaseMaster_o *)sub_1B86604(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v2109, 0LL);
  if ( v2109 )
  {
    v547 = sub_1B864F4(v2109, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x208 )
    goto LABEL_1634;
  v545->m_Items[520] = (DataMasterBase_o *)v2109;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[520], (int32_t)v2109, v2110, v2111);
  v2112 = (SelectBonusMaster_o *)sub_1B86604(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v2112, 0LL);
  if ( v2112 )
  {
    v547 = sub_1B864F4(v2112, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x209 )
    goto LABEL_1634;
  v545->m_Items[521] = (DataMasterBase_o *)v2112;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[521], (int32_t)v2112, v2113, v2114);
  v2115 = (MyroomServantSpecialImageMaster_o *)sub_1B86604(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v2115, 0LL);
  if ( v2115 )
  {
    v547 = sub_1B864F4(v2115, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x20A )
    goto LABEL_1634;
  v545->m_Items[522] = (DataMasterBase_o *)v2115;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[522], (int32_t)v2115, v2116, v2117);
  v2118 = (ShopResetMaster_o *)sub_1B86604(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v2118, 0LL);
  if ( v2118 )
  {
    v547 = sub_1B864F4(v2118, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x20B )
    goto LABEL_1634;
  v545->m_Items[523] = (DataMasterBase_o *)v2118;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[523], (int32_t)v2118, v2119, v2120);
  v2121 = (NpcServantDisplayTypeDetailMaster_o *)sub_1B86604(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v2121, 0LL);
  if ( v2121 )
  {
    v547 = sub_1B864F4(v2121, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x20C )
    goto LABEL_1634;
  v545->m_Items[524] = (DataMasterBase_o *)v2121;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[524], (int32_t)v2121, v2122, v2123);
  v2124 = (FriendshipServantMaster_o *)sub_1B86604(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v2124, 0LL);
  if ( v2124 )
  {
    v547 = sub_1B864F4(v2124, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x20D )
    goto LABEL_1634;
  v545->m_Items[525] = (DataMasterBase_o *)v2124;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[525], (int32_t)v2124, v2125, v2126);
  v2127 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1B86604(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v2127, 0LL);
  if ( v2127 )
  {
    v547 = sub_1B864F4(v2127, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x20E )
    goto LABEL_1634;
  v545->m_Items[526] = (DataMasterBase_o *)v2127;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[526], (int32_t)v2127, v2128, v2129);
  v2130 = (ChaldeaGatePickupMaster_o *)sub_1B86604(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v2130, 0LL);
  if ( v2130 )
  {
    v547 = sub_1B864F4(v2130, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x20F )
    goto LABEL_1634;
  v545->m_Items[527] = (DataMasterBase_o *)v2130;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[527], (int32_t)v2130, v2131, v2132);
  v2133 = (WarGroupIgnoreMaster_o *)sub_1B86604(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v2133, 0LL);
  if ( v2133 )
  {
    v547 = sub_1B864F4(v2133, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x210 )
    goto LABEL_1634;
  v545->m_Items[528] = (DataMasterBase_o *)v2133;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[528], (int32_t)v2133, v2134, v2135);
  v2136 = (ImagePartsGroupMaster_o *)sub_1B86604(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v2136, 0LL);
  if ( v2136 )
  {
    v547 = sub_1B864F4(v2136, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x211 )
    goto LABEL_1634;
  v545->m_Items[529] = (DataMasterBase_o *)v2136;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[529], (int32_t)v2136, v2137, v2138);
  v2139 = (UserImagePartsGroupMaster_o *)sub_1B86604(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v2139, 0LL);
  if ( v2139 )
  {
    v547 = sub_1B864F4(v2139, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x212 )
    goto LABEL_1634;
  v545->m_Items[530] = (DataMasterBase_o *)v2139;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[530], (int32_t)v2139, v2140, v2141);
  v2142 = (MissionItemDisplayMaster_o *)sub_1B86604(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v2142, 0LL);
  if ( v2142 )
  {
    v547 = sub_1B864F4(v2142, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x213 )
    goto LABEL_1634;
  v545->m_Items[531] = (DataMasterBase_o *)v2142;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[531], (int32_t)v2142, v2143, v2144);
  v2145 = (QuestUseItemGroupMaster_o *)sub_1B86604(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v2145, 0LL);
  if ( v2145 )
  {
    v547 = sub_1B864F4(v2145, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x214 )
    goto LABEL_1634;
  v545->m_Items[532] = (DataMasterBase_o *)v2145;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[532], (int32_t)v2145, v2146, v2147);
  v2148 = (QuestUseItemPickupMaster_o *)sub_1B86604(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v2148, 0LL);
  if ( v2148 )
  {
    v547 = sub_1B864F4(v2148, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x215 )
    goto LABEL_1634;
  v545->m_Items[533] = (DataMasterBase_o *)v2148;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[533], (int32_t)v2148, v2149, v2150);
  v2151 = (UserEventItemLinkSvtMaster_o *)sub_1B86604(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v2151, 0LL);
  if ( v2151 )
  {
    v547 = sub_1B864F4(v2151, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x216 )
    goto LABEL_1634;
  v545->m_Items[534] = (DataMasterBase_o *)v2151;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[534], (int32_t)v2151, v2152, v2153);
  v2154 = (QuestHintOverwriteMaster_o *)sub_1B86604(QuestHintOverwriteMaster_TypeInfo);
  QuestHintOverwriteMaster___ctor(v2154, 0LL);
  if ( v2154 )
  {
    v547 = sub_1B864F4(v2154, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x217 )
    goto LABEL_1634;
  v545->m_Items[535] = (DataMasterBase_o *)v2154;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[535], (int32_t)v2154, v2155, v2156);
  v2157 = (ReachedWaveInfoMaster_o *)sub_1B86604(ReachedWaveInfoMaster_TypeInfo);
  ReachedWaveInfoMaster___ctor(v2157, 0LL);
  if ( v2157 )
  {
    v547 = sub_1B864F4(v2157, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x218 )
    goto LABEL_1634;
  v545->m_Items[536] = (DataMasterBase_o *)v2157;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[536], (int32_t)v2157, v2158, v2159);
  v2160 = (GalleryMaster_o *)sub_1B86604(GalleryMaster_TypeInfo);
  GalleryMaster___ctor(v2160, 0LL);
  if ( v2160 )
  {
    v547 = sub_1B864F4(v2160, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x219 )
    goto LABEL_1634;
  v545->m_Items[537] = (DataMasterBase_o *)v2160;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[537], (int32_t)v2160, v2161, v2162);
  v2163 = (GalleryResourceMaster_o *)sub_1B86604(GalleryResourceMaster_TypeInfo);
  GalleryResourceMaster___ctor(v2163, 0LL);
  if ( v2163 )
  {
    v547 = sub_1B864F4(v2163, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x21A )
    goto LABEL_1634;
  v545->m_Items[538] = (DataMasterBase_o *)v2163;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[538], (int32_t)v2163, v2164, v2165);
  v2166 = (ServantSkillAddMaster_o *)sub_1B86604(ServantSkillAddMaster_TypeInfo);
  ServantSkillAddMaster___ctor(v2166, 0LL);
  if ( v2166 )
  {
    v547 = sub_1B864F4(v2166, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x21B )
    goto LABEL_1634;
  v545->m_Items[539] = (DataMasterBase_o *)v2166;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[539], (int32_t)v2166, v2167, v2168);
  v2169 = (GalleryFolderReleaseMaster_o *)sub_1B86604(GalleryFolderReleaseMaster_TypeInfo);
  GalleryFolderReleaseMaster___ctor(v2169, 0LL);
  if ( v2169 )
  {
    v547 = sub_1B864F4(v2169, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x21C )
    goto LABEL_1634;
  v545->m_Items[540] = (DataMasterBase_o *)v2169;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[540], (int32_t)v2169, v2170, v2171);
  v2172 = (UserSvtFirstGetTimeMaster_o *)sub_1B86604(UserSvtFirstGetTimeMaster_TypeInfo);
  UserSvtFirstGetTimeMaster___ctor(v2172, 0LL);
  if ( v2172 )
  {
    v547 = sub_1B864F4(v2172, v545->obj.klass->_1.element_class);
    if ( !v547 )
      goto LABEL_1635;
  }
  if ( *p_max_length <= 0x21D )
    goto LABEL_1634;
  v545->m_Items[541] = (DataMasterBase_o *)v2172;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[541], (int32_t)v2172, v2173, v2174);
  v2175 = (QuestExtensionMaster_o *)sub_1B86604(QuestExtensionMaster_TypeInfo);
  QuestExtensionMaster___ctor(v2175, 0LL);
  if ( v2175 )
  {
    v547 = sub_1B864F4(v2175, v545->obj.klass->_1.element_class);
    if ( !v547 )
    {
LABEL_1635:
      v2179 = sub_1B86638(v547);
      sub_1B864E0(v2179, 0LL);
    }
  }
  if ( *p_max_length <= 0x21E )
LABEL_1634:
    sub_1B8661C(v547, v548);
  v545->m_Items[542] = (DataMasterBase_o *)v2175;
  sub_1B8635C((CGThumbnailListItem_o *)&v545->m_Items[542], (int32_t)v2175, v2176, v2177);
  return v545;
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

  if ( (byte_4A4DFBA & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    sub_1B863B8(&ManagerConfig_TypeInfo, v2);
    byte_4A4DFBA = 1;
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int v15; // w26
  Il2CppObject *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x20
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o *v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A4DFB7 & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B863B8(&LocalizationManager_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_8396/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v7);
    byte_4A4DFB7 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v8;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1B8635C((CGThumbnailListItem_o *)p_masterCheckName, (int32_t)v8, v10, v11);
  v15 = 1;
  do
  {
    v27 = v15;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v12, v13, v14);
    v17 = System_String__Format((System_String_o *)StringLiteral_8396/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v16, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v18 = LocalizationManager__Get(v17, 0LL);
    if ( System_String__op_Equality(v18, v17, 0LL) )
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
    sub_1B86614(v22, v19);
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v18,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v18;
      sub_1B8635C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
    }
    ++v15;
  }
  while ( v15 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_2F6DCB8 *method)
{
  long double v2; // q0
  const MethodInfo_2F6DCB8_RGCTXs *rgctx_data; // x8
  const MethodInfo_2F6DCB8 *_1_TMaster; // x19
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
    sub_1B863B8(&UnityEngine_Debug_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v6);
    sub_1B863B8(&int_TypeInfo, v7);
    sub_1B863B8(&DataNameKind_Kind_TypeInfo, v8);
    sub_1B863B8(&System_Type_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_21144/*"master[{0}] is null[{1}:{2}]"*/, v10);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BD6AA4();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v12 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v12 )
  {
    sub_1BD6AA4();
    v12 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v12[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1BD6A48(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v15) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v15,
         &value,
         (const MethodInfo_326EEF0 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v15 = value;
    _1_TMaster = (const MethodInfo_2F6DCB8 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_2F6DCB8 *)sub_1BD6A48(v16);
    if ( !v15 )
      return 0LL;
    result = (Il2CppObject *)sub_1B864F4(v15, _1_TMaster);
    if ( result )
      return result;
    sub_1B868D4(v15);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v30.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v30, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1B86614(rgctxDataDummy, method);
  v19 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v28 = (int)v15;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20, v21, v22);
  v27 = (int)v15;
  v26.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v26.monitor = (void *)-1LL;
  v24 = (Il2CppObject *)System_Enum__ToString(&v26, 0LL);
  v25 = (Il2CppObject *)System_String__Format_61686536((System_String_o *)StringLiteral_21144/*"master[{0}] is null[{1}:{2}]"*/, v19, v23, v24, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v25, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_2F6DC64 *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    if ( !method->rgctx_data )
      sub_1BD6AA4();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2F6DCB8 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Func_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A4DFA2 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_CreateMasterData__, method);
    sub_1B863B8(&System_Func_DataMasterBase____TypeInfo, v3);
    byte_4A4DFA2 = 1;
  }
  v4 = (System_Func_object__o *)sub_1B86604(System_Func_DataMasterBase____TypeInfo);
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
  __int64 v10; // x21
  System_Collections_Generic_Dictionary_int__object__o *v11; // x22
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int v14; // w8
  unsigned int v15; // w23
  __int64 v16; // x2
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v4 = this;
  if ( (byte_4A4DFA3 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    this = (DataManager_o *)sub_1B863B8(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    byte_4A4DFA3 = 1;
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
          v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v11,
            (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v10) )
    {
LABEL_19:
      sub_1B86614(this, createMasterDataMethod);
    }
    v14 = *(_DWORD *)(v10 + 24);
    if ( v14 >= 1 )
    {
      v15 = 0;
      while ( v15 < v14 )
      {
        v16 = *(_QWORD *)(v10 + 8LL * (int)v15 + 32);
        if ( !v16 || !v11 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__object___Add(
          v11,
          *(_DWORD *)(v16 + 16),
          (Il2CppObject *)v16,
          (const MethodInfo_326D764 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v14 = *(_DWORD *)(v10 + 24);
        if ( (int)++v15 >= v14 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1B8661C(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v10;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.datalist, v10, v12, v13);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v11;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.lookup, (int32_t)v11, v17, v18);
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v28; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v30; // x25
  __int64 Index_object; // x0
  __int64 v32; // x1
  const MethodInfo_371CBA4 *v33; // x3
  struct DataMasterBase_array *v34; // x8
  DataMasterBase_o *v35; // x25
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Threading_SynchronizationContext_o *context; // x24
  __int64 v38; // x0
  __int64 v39; // x1
  const MethodInfo_371CBA4 *v40; // x3
  __int64 v41; // x0
  __int64 v42; // x1
  Il2CppObject *lockCountObj; // x22
  int v44; // w1
  _QWORD **v45; // x20
  __int64 v46; // x0
  Il2CppObject *v47; // x20
  __int64 v48; // x0
  struct System_Threading_SynchronizationContext_o *v49; // x20
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  System_Threading_SendOrPostCallback_o *v53; // x21
  __int64 v54; // x0
  Il2CppObject *v55; // x23
  __int64 v56; // x0
  intptr_t v57; // w0
  __int64 v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
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
  if ( (byte_4A4DFB4 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_1B863B8(&byte___TypeInfo, v6);
    sub_1B863B8(&int___TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____get_Item__, v9);
    sub_1B863B8(&Method_System_Nullable_long___ctor__, v10);
    sub_1B863B8(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_1B863B8(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_1B863B8(&DataManager___c__DisplayClass58_0_TypeInfo, v13);
    byte_4A4DFB4 = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1B86614(this, indexList);
  v14 = sub_1B864F4(indexList, int___TypeInfo);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(v14 + 24);
    v62 = sub_1B86460(byte___TypeInfo, 2000LL);
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; i != v16; ++i )
      {
        v18 = sub_1B86604(DataManager___c__DisplayClass58_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0LL);
        if ( i >= *(unsigned int *)(v15 + 24) )
          sub_1B8661C(v19, v20);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1B86614(0LL, v20);
        v22 = *(_DWORD *)(v15 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v22,
                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v18 )
          sub_1B86614(Item, Item);
        *(_QWORD *)(v18 + 16) = Item;
        sub_1B8635C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)Item, v24, v25);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1B86614(0LL, v26);
        v28 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v22,
                (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v18 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v30 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v30,
            (Il2CppObject *)v18,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v30,
                           (const MethodInfo_3068544 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v34 = v5->fields.datalist;
            if ( !v34 )
              sub_1B86614(Index_object, v32);
            if ( (unsigned int)Index_object >= v34->max_length )
              sub_1B8661C(Index_object, v32);
            if ( !v28 )
              sub_1B86614(Index_object, v32);
            if ( !LODWORD(v28[1].monitor) )
              sub_1B8661C(Index_object, v32);
            v35 = v34->m_Items[(unsigned int)Index_object];
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v68.fields.value = (int64_t)v28[2].klass;
            v65 = 0LL;
            v66 = 0LL;
            *(_QWORD *)&v68.fields.hasValue = &v65;
            System_Nullable_long____ctor(v68, Method_System_Nullable_long___ctor__, v33);
            if ( LODWORD(v28[1].monitor) <= 1 )
              sub_1B8661C(v38, v39);
            v69.fields.value = (int64_t)v28[2].monitor;
            v63 = 0LL;
            v64 = 0LL;
            *(_QWORD *)&v69.fields.hasValue = &v63;
            System_Nullable_long____ctor(v69, Method_System_Nullable_long___ctor__, v40);
            if ( !v35 )
              sub_1B86614(v41, v42);
            (*(void (__fastcall **)(DataMasterBase_o *, struct System_Byte_array *, struct System_Threading_SynchronizationContext_o *, __int64, __int64, __int64, __int64, __int64, void *))&v35->klass[1]._1.byval_arg.bits)(
              v35,
              masterDataBytes,
              context,
              v65,
              v66,
              v63,
              v64,
              v62,
              v35->klass[1]._1.this_arg.data);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_63578964(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1B868D4(indexList);
    if ( v44 != 1 )
      sub_1C6F44C();
    v45 = (_QWORD **)__cxa_begin_catch(v3);
    v46 = sub_1B863CC(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v46, **v45) & 1) != 0 )
    {
      __cxa_end_catch();
      v47 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_63578964(v47, lockTaken, 0LL);
    }
    else
    {
      v48 = sub_1B863CC(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v48, **v45) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v45;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v49 = v5->fields.context;
      v50 = sub_1B863CC(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v50 + 224) )
        j_il2cpp_runtime_class_init_0(v50);
      v51 = sub_1B863CC(&DataManager___c_TypeInfo);
      v53 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v51 + 184) + 8LL);
      if ( !v53 )
      {
        v54 = sub_1B863CC(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v54 + 224) )
          j_il2cpp_runtime_class_init_0(v54);
        v55 = **(Il2CppObject ***)(sub_1B863CC(&DataManager___c_TypeInfo) + 184);
        v56 = sub_1B863CC(&System_Threading_SendOrPostCallback_TypeInfo);
        v53 = (System_Threading_SendOrPostCallback_o *)sub_1B86604(v56);
        v57 = sub_1B863CC(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v53, v55, v57, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1B863CC(&DataManager___c_TypeInfo) + 184) + 8LL) = v53;
        v58 = sub_1B863CC(&DataManager___c_TypeInfo);
        sub_1B8635C((CGThumbnailListItem_o *)(*(_QWORD *)(v58 + 184) + 8LL), (int32_t)v53, v59, v60);
      }
      if ( !v49 )
        sub_1B86614(v51, v52);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v49->klass->vtable._5_Post.method)(
        v49,
        v53,
        0LL,
        v49->klass->vtable._6_OperationStarted.methodPtr);
      v47 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_63578964(v47, lockTaken, 0LL);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v47, 0LL);
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
  __int64 v21; // x23
  System_Collections_Generic_List_object__o *v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_object__o *v31; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_int__o *v35; // x0
  System_Int32_array *v36; // x21
  System_Comparison_int__o *v37; // x22
  __int64 v38; // x22
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Threading_ParameterizedThreadStart_o *v41; // x24
  System_Threading_Thread_o *v42; // x23
  System_Func_int__bool__o *v43; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Int32_array *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x8
  int v52; // w8
  bool v53; // nf

  if ( (byte_4A4DFB2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Sort_int____76084224, *(_QWORD *)&maxIndex);
    sub_1B863B8(&System_Comparison_int__TypeInfo, v7);
    sub_1B863B8(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1B863B8(&System_Func_int__bool__TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Thread__Add__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Thread___ctor__, v13);
    sub_1B863B8(&System_Collections_Generic_List_Thread__TypeInfo, v14);
    sub_1B863B8(&System_Threading_ParameterizedThreadStart_TypeInfo, v15);
    sub_1B863B8(&System_Threading_Thread_TypeInfo, v16);
    sub_1B863B8(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__, v17);
    sub_1B863B8(&DataManager___c__DisplayClass56_0_TypeInfo, v18);
    sub_1B863B8(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__, v19);
    sub_1B863B8(&DataManager___c__DisplayClass56_1_TypeInfo, v20);
    byte_4A4DFB2 = 1;
  }
  v21 = sub_1B86604(DataManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v21 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v21 + 24) = loadedIndices;
  sub_1B8635C((CGThumbnailListItem_o *)(v21 + 24), (int32_t)loadedIndices, v26, v27);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.context, (int32_t)Current, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v31;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.masterLoadThreads, (int32_t)v31, v33, v34);
  v35 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v36 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
  v37 = (System_Comparison_int__o *)sub_1B86604(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v37,
    (Il2CppObject *)v21,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__49527804(
    v36,
    (System_Comparison_T__o *)v37,
    (const MethodInfo_2F3BBFC *)Method_System_Array_Sort_int____76084224);
  v38 = sub_1B86604(DataManager___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
LABEL_14:
    sub_1B86614(v22, v23);
  *(_QWORD *)(v38 + 24) = v21;
  sub_1B8635C((CGThumbnailListItem_o *)(v38 + 24), v21, v39, v40);
  *(_DWORD *)(v38 + 16) = 0;
  do
  {
    v41 = (System_Threading_ParameterizedThreadStart_o *)sub_1B86604(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v41,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v42 = (System_Threading_Thread_o *)sub_1B86604(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_63614524(v42, v41, 0LL);
    if ( !v42 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v42, 1, 0LL);
    v43 = (System_Func_int__bool__o *)sub_1B86604(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v43,
      (Il2CppObject *)v38,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v44 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v36,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_2FAFA3C *)Method_System_Linq_Enumerable_Where_int___);
    v45 = System_Linq_Enumerable__ToArray_int_(
            v44,
            (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_63615104(v42, &v45->obj, 0LL);
    v22 = (System_Collections_Generic_List_object__o *)*p_masterLoadThreads;
    if ( !*p_masterLoadThreads )
      goto LABEL_14;
    items = v22->fields._items;
    v49 = Method_System_Collections_Generic_List_Thread__Add__;
    ++v22->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v42,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v51[4] = (Il2CppClass *)v42;
      sub_1B8635C((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v42, v46, v47);
    }
    v52 = *(_DWORD *)(v38 + 16) + 1;
    v53 = *(_DWORD *)(v38 + 16) - 4 < 0;
    *(_DWORD *)(v38 + 16) = v52;
  }
  while ( v53 != __OFSUB__(v52, 5) );
}


void __fastcall DataManager__StartWriteLocalFile(
        DataManager_o *this,
        System_String_o *fileName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Threading_ParameterizedThreadStart_o *v8; // x21
  System_Threading_Thread_o *v9; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x1

  if ( (byte_4A4DFB5 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_1B863B8(&System_Threading_ParameterizedThreadStart_TypeInfo, v6);
    sub_1B863B8(&System_Threading_Thread_TypeInfo, v7);
    byte_4A4DFB5 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v8 = (System_Threading_ParameterizedThreadStart_o *)sub_1B86604(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v9 = (System_Threading_Thread_o *)sub_1B86604(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_63614524(v9, v8, 0LL);
  this->fields.writeMasterDataThread = v9;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1B8635C((CGThumbnailListItem_o *)p_writeMasterDataThread, (int32_t)v9, v11, v12);
  if ( !*p_writeMasterDataThread )
    sub_1B86614(0LL, v13);
  System_Threading_Thread__Start_63615104(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
}


void __fastcall DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  CGThumbnailListItem_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v6; // w20
  __int64 v7; // x1
  System_Threading_Thread_o *v8; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4A4DFB3 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_4A4DFB3 = 1;
  }
  masterLoadThreads = this->fields.masterLoadThreads;
  p_masterLoadThreads = (CGThumbnailListItem_o *)&this->fields.masterLoadThreads;
  Item = (Il2CppObject *)masterLoadThreads;
  if ( masterLoadThreads )
  {
    v6 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               v6,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1B86614(Item, v7);
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
    sub_1B8635C(p_masterLoadThreads, 0, v9, v10);
  }
}


void __fastcall DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *writeMasterDataThread; // x0
  System_Threading_Thread_o **p_writeMasterDataThread; // x19
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  writeMasterDataThread = this->fields.writeMasterDataThread;
  if ( writeMasterDataThread )
  {
    if ( System_Threading_Thread__get_IsAlive(writeMasterDataThread, 0LL) )
    {
      if ( !*p_writeMasterDataThread )
        sub_1B86614(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v5, v6);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  int size; // w26
  int32_t v20; // w22
  Il2CppObject *Item; // x0
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x0
  struct System_Byte_array *masterDataBytes; // x23
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  Il2CppClass *klass; // x24
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  __int64 v32; // x1
  System_IO_BinaryWriter_c *v33; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 v36; // x0
  System_IO_Stream_c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x19

  if ( (byte_4A4DFB6 & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryWriter_TypeInfo, param);
    sub_1B863B8(&CatAndMouseGame_TypeInfo, v5);
    sub_1B863B8(&System_IDisposable_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_1B863B8(&string_TypeInfo, v9);
    byte_4A4DFB6 = 1;
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
  v13 = (System_IO_BinaryWriter_o *)sub_1B86604(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_62558896(v13, v12, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1B86614(v14, v15);
  size = saveDataMapList->fields._size;
  if ( size < 1 )
  {
    if ( !v13 )
      goto LABEL_34;
  }
  else
  {
    v20 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               saveDataMapList,
               v20,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1B86614(0LL, v22);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1B8661C(Item, v22);
      if ( !v13 )
        sub_1B86614(Item, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[2].monitor),
        v13->klass->vtable._18_Write.methodPtr);
      v24 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v24 )
        sub_1B86614(0LL, v23);
      masterDataBytes = this->fields.masterDataBytes;
      v26 = System_Collections_Generic_List_object___get_Item(
              v24,
              v20,
              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v26 )
        sub_1B86614(0LL, v27);
      if ( !LODWORD(v26[1].monitor) )
        sub_1B8661C(v26, v27);
      if ( !this->fields.saveDataMapList )
        sub_1B86614(v26, v27);
      klass = v26[2].klass;
      v29 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v20,
              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v29 )
        sub_1B86614(0LL, v30);
      if ( LODWORD(v29[1].monitor) <= 1 )
        sub_1B8661C(v29, v30);
      v31 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v13->klass->vtable._11_Write.method)(
              v13,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v29[2].monitor),
              v13->klass->vtable._12_Write.methodPtr);
      if ( size == ++v20 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1B86614(v31, v32);
    }
  }
  v33 = v13->klass;
  v34 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v33->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_31;
    }
    v36 = (__int64)(&v33->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_31:
    v36 = sub_1BD6B4C(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v36)(v13, *(_QWORD *)(v36 + 8));
LABEL_34:
  if ( v11 )
  {
    v37 = v11->klass;
    v38 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_39;
      }
      v40 = (__int64)(&v37->vtable._0_Equals.method + 2 * *v39);
    }
    else
    {
LABEL_39:
      v40 = sub_1BD6B4C(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v40)(v11, *(_QWORD *)(v40 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1B8635C((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v16, v17);
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

  if ( (byte_4A4DF9D & 1) == 0 )
  {
    sub_1B863B8(&DatFileName_TypeInfo, v1);
    sub_1B863B8(&DataManager_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DF9D = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_61683424(CachePath, (System_String_o *)StringLiteral_1058/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A4DF9C & 1) == 0 )
  {
    sub_1B863B8(&DatFileName_TypeInfo, v1);
    sub_1B863B8(&DataManager_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DF9C = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_61683424(CachePath, (System_String_o *)StringLiteral_1058/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4A4DF9A & 1) == 0 )
  {
    sub_1B863B8(&AndroidUtil_TypeInfo, v1);
    sub_1B863B8(&CacheFolderName_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DF9A = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_61683424(DatFileSavePath, (System_String_o *)StringLiteral_1058/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A4DF9B & 1) == 0 )
  {
    sub_1B863B8(&DatFileName_TypeInfo, v1);
    sub_1B863B8(&DataManager_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DF9B = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_61683424(CachePath, (System_String_o *)StringLiteral_1058/*"/"*/, FileName, 0LL);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A4DFA8 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    byte_4A4DFA8 = 1;
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

  if ( (byte_4A4DFA9 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    byte_4A4DFA9 = 1;
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

  if ( (byte_4A4DFB8 & 1) == 0 )
  {
    sub_1B863B8(&Crc32_TypeInfo, name);
    byte_4A4DFB8 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B86614(0LL, v7);
  v8 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._19_GetBytes.methodPtr);
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

  if ( (byte_4A4DF9E & 1) == 0 )
  {
    sub_1B863B8(&AndroidUtil_TypeInfo, v1);
    sub_1B863B8(&CacheFolderName_TypeInfo, v2);
    sub_1B863B8(&StringLiteral_1058/*"/"*/, v3);
    byte_4A4DF9E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_61683424(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1058/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A4DFAD & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    byte_4A4DFAD = 1;
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

  if ( (byte_4A4DFAC & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    byte_4A4DFAC = 1;
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
    sub_1B86614(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A4DFA5 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    byte_4A4DFA5 = 1;
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

  if ( (byte_4A4DFB0 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    byte_4A4DFB0 = 1;
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A4DFAF & 1) == 0 )
  {
    sub_1B863B8(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_4A4DFAF = 1;
  }
  v3 = sub_1B86604(DataManager__readMasterData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  DataManager_o *v59; // x20
  int32_t v60; // w1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w1
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  struct System_Byte_array *v68; // x1
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32_t v71; // w1
  CGThumbnailListItem_o *p_saveNameList; // x0
  int v74; // w22
  int64_t v75; // x0
  DataManager_c *v76; // x8
  int64_t v77; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v79; // x22
  unsigned int v80; // w23
  System_String_o *v81; // x21
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  DataManager_o *v84; // x8
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v88; // x8
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  int32_t v92; // w1
  DataManager_c *v93; // x0
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int32_t v98; // w1
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t v103; // w1
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  int32_t v106; // w2
  const MethodInfo *v107; // x3
  int32_t v108; // w1
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  int64_t v111; // [xsp+8h] [xbp-58h] BYREF
  int v112; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4A4DFBD & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, method);
    sub_1B863B8(&char___TypeInfo, v3);
    sub_1B863B8(&Crc32_TypeInfo, v4);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_1B863B8(&ManagerConfig_TypeInfo, v9);
    sub_1B863B8(&string___TypeInfo, v10);
    sub_1B863B8(&StringLiteral_5049/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_1B863B8(&StringLiteral_5052/*"DataManager version load error : list file parameter error"*/, v12);
    sub_1B863B8(&StringLiteral_115/*" "*/, v13);
    sub_1B863B8(&StringLiteral_24989/*"~"*/, v14);
    sub_1B863B8(&StringLiteral_773/*") -> ("*/, v15);
    sub_1B863B8(&StringLiteral_764/*")"*/, v16);
    sub_1B863B8(&StringLiteral_1781/*"@"*/, v17);
    sub_1B863B8(&StringLiteral_21120/*"master versiton different ("*/, v18);
    sub_1B863B8(&StringLiteral_5053/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_1B863B8(&StringLiteral_5054/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    this = (DataManager_o *)sub_1B863B8(&StringLiteral_5051/*"DataManager version load error : list file break"*/, v21);
    byte_4A4DFBD = 1;
  }
  v112 = 0;
  v111 = 0LL;
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
    v33 = (System_Char_array *)sub_1B86460(char___TypeInfo, 1LL);
    if ( !v33 )
      sub_1B86614(0LL, 0LL);
    if ( !v33->max_length )
      sub_1B8661C(v33, v33);
    v33->m_Items[2] = -257;
    v34 = System_String__Trim_61701844(v32, v33, 0LL);
    v35 = (System_Char_array *)sub_1B86460(char___TypeInfo, 2LL);
    if ( !v35 )
      sub_1B86614(0LL, 0LL);
    max_length = v35->max_length;
    if ( !max_length )
      sub_1B8661C(v35, v35);
    v35->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B8661C(v35, v35);
    v35->m_Items[3] = 10;
    if ( !v34 )
      sub_1B86614(v35, v35);
    v37 = System_String__IndexOfAny(v34, v35, 0LL);
    if ( v37 < 2 )
    {
      v38 = &StringLiteral_5053/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v39 = System_String__Substring_61691100(v34, 0, v37, 0LL);
    v41 = v39;
    if ( !v39 )
      sub_1B86614(0LL, v40);
    if ( System_String__StartsWith(v39, (System_String_o *)StringLiteral_24989/*"~"*/, 0LL) )
    {
      v42 = System_String__Substring(v41, 1, 0LL);
      v43 = System_String__Substring(v34, v37 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1B86614(0LL, v45);
      v46 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v43,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v47 = Crc32__Compute(v46, 0LL);
      if ( System_UInt32__Parse(v42, 0LL) == v47 )
      {
        v48 = (System_Char_array *)sub_1B86460(char___TypeInfo, 2LL);
        if ( !v48 )
          sub_1B86614(0LL, 0LL);
        v49 = v48->max_length;
        if ( !v49 )
          sub_1B8661C(v48, v48);
        v48->m_Items[2] = 13;
        if ( v49 == 1 )
          sub_1B8661C(v48, v48);
        v48->m_Items[3] = 10;
        if ( !v43 )
          sub_1B86614(v48, v48);
        this = (DataManager_o *)System_String__Split_61694488(v43, v48, 1, 0LL);
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
                                  (System_String_o *)StringLiteral_1781/*"@"*/,
                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v50->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v52 = *(System_String_o **)&v50->fields._DispLog;
          this = (DataManager_o *)sub_1B86460(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v52 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_61694252(v52, (System_Char_array *)this, 0LL);
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
            this = (DataManager_o *)sub_1B86460(string___TypeInfo, 5LL);
            if ( this )
            {
              v59 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v60 = StringLiteral_21120/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21120/*"master versiton different ("*/;
                sub_1B8635C((CGThumbnailListItem_o *)&this->fields._DispLog, v60, v57, v58);
                if ( LODWORD(v59->fields.m_CancellationTokenSource) > 1 )
                {
                  v59->fields.datalist = (struct DataMasterBase_array *)v56;
                  sub_1B8635C((CGThumbnailListItem_o *)&v59->fields.datalist, (int32_t)v56, v61, v62);
                  if ( LODWORD(v59->fields.m_CancellationTokenSource) > 2 )
                  {
                    v65 = StringLiteral_773/*") -> ("*/;
                    v59->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_773/*") -> ("*/;
                    sub_1B8635C((CGThumbnailListItem_o *)&v59->fields.lookup, v65, v63, v64);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v59->fields.m_CancellationTokenSource) > 3 )
                    {
                      v68 = *(struct System_Byte_array **)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v59->fields.masterDataBytes = v68;
                      sub_1B8635C((CGThumbnailListItem_o *)&v59->fields.masterDataBytes, (int32_t)v68, v66, v67);
                      if ( LODWORD(v59->fields.m_CancellationTokenSource) > 4 )
                      {
                        v71 = StringLiteral_764/*")"*/;
                        v59->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_764/*")"*/;
                        p_saveNameList = (CGThumbnailListItem_o *)&v59->fields.saveNameList;
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
            v112 = (int)this;
            if ( LODWORD(v53->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v74 = (int)this;
            v75 = System_Int64__Parse((System_String_o *)v53->fields.lookup, 0LL);
            v76 = DataManager_TypeInfo;
            v111 = v75;
            v77 = v75;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v76 = DataManager_TypeInfo;
            }
            static_fields = v76->static_fields;
            if ( static_fields->readDataVersion != v74 )
              goto LABEL_91;
            if ( !v76->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v76);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v77 )
            {
              v79 = v50->fields.m_CancellationTokenSource;
              if ( (int)v79 < 2 )
                return 1;
              v80 = 2;
              while ( 1 )
              {
                v81 = (System_String_o *)*((_QWORD *)&v50->fields._DispLog + (int)(v80 - 1));
                this = (DataManager_o *)sub_1B86460(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v81 )
                  break;
                this = (DataManager_o *)System_String__Split_61694252(v81, (System_Char_array *)this, 0LL);
                if ( !this )
                  break;
                v84 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                method = *(const MethodInfo **)&v84->fields._DispLog;
                v85 = *(_QWORD *)&this->fields.m_CachedPtr;
                v86 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v85 )
                  break;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v85 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)method,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v88 = v85 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v88 + 32) = method;
                  sub_1B8635C((CGThumbnailListItem_o *)(v88 + 32), (int32_t)method, v82, v83);
                }
                if ( (_DWORD)v79 == v80 )
                  return 1;
                if ( v80++ >= LODWORD(v50->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
              }
            }
            else
            {
LABEL_91:
              this = (DataManager_o *)sub_1B86460(string___TypeInfo, 9LL);
              if ( this )
              {
                v59 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v92 = StringLiteral_21120/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21120/*"master versiton different ("*/;
                  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._DispLog, v92, v90, v91);
                  v93 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v93 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v93->static_fields, 0LL);
                  if ( LODWORD(v59->fields.m_CancellationTokenSource) > 1 )
                  {
                    v59->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1B8635C((CGThumbnailListItem_o *)&v59->fields.datalist, (int32_t)this, v94, v95);
                    if ( LODWORD(v59->fields.m_CancellationTokenSource) > 2 )
                    {
                      v98 = (int)StringLiteral_115/*" "*/;
                      v59->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_115/*" "*/;
                      sub_1B8635C((CGThumbnailListItem_o *)&v59->fields.lookup, v98, v96, v97);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v59->fields.m_CancellationTokenSource) > 3 )
                      {
                        v59->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1B8635C((CGThumbnailListItem_o *)&v59->fields.masterDataBytes, (int32_t)this, v99, v100);
                        if ( LODWORD(v59->fields.m_CancellationTokenSource) > 4 )
                        {
                          v103 = StringLiteral_773/*") -> ("*/;
                          v59->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_773/*") -> ("*/;
                          sub_1B8635C((CGThumbnailListItem_o *)&v59->fields.saveNameList, v103, v101, v102);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v112, 0LL);
                          if ( LODWORD(v59->fields.m_CancellationTokenSource) > 5 )
                          {
                            v59->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1B8635C(
                              (CGThumbnailListItem_o *)&v59->fields.saveDataMapList,
                              (int32_t)this,
                              v104,
                              v105);
                            if ( LODWORD(v59->fields.m_CancellationTokenSource) > 6 )
                            {
                              v108 = (int)StringLiteral_115/*" "*/;
                              *(_QWORD *)&v59->fields.lastFrameTime = StringLiteral_115/*" "*/;
                              sub_1B8635C((CGThumbnailListItem_o *)&v59->fields.lastFrameTime, v108, v106, v107);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v111, 0LL);
                              if ( LODWORD(v59->fields.m_CancellationTokenSource) > 7 )
                              {
                                v59->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1B8635C(
                                  (CGThumbnailListItem_o *)&v59->fields.masterCheckName,
                                  (int32_t)this,
                                  v109,
                                  v110);
                                if ( LODWORD(v59->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v71 = StringLiteral_764/*")"*/;
                                  v59->fields.lockCountObj = (Il2CppObject *)StringLiteral_764/*")"*/;
                                  p_saveNameList = (CGThumbnailListItem_o *)&v59->fields.lockCountObj;
LABEL_104:
                                  sub_1B8635C(p_saveNameList, v71, v69, v70);
                                  if ( System_String__Concat_61685692((System_String_array *)v59, 0LL) )
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
                sub_1B8661C(this, method);
              }
            }
LABEL_119:
            sub_1B86614(this, method);
          }
          v38 = &StringLiteral_5052/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v38 = &StringLiteral_5051/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v38 = &StringLiteral_5049/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v38 = &StringLiteral_5054/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
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
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A4DFAE & 1) == 0 )
  {
    sub_1B863B8(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_4A4DFAE = 1;
  }
  v3 = sub_1B86604(DataManager__readMasterVersion_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  __int64 v51; // x20
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  int32_t v57; // w1
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w1
  System_String_o *v64; // x8
  DataManager_c *v65; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v68; // x8
  int32_t v69; // w19
  struct DataManager_StaticFields *v70; // x8
  int64_t v71; // x0
  struct DataManager_StaticFields *v72; // x8

  if ( (byte_4A4DFBB & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, method);
    sub_1B863B8(&char___TypeInfo, v3);
    sub_1B863B8(&Crc32_TypeInfo, v4);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&ManagerConfig_TypeInfo, v6);
    sub_1B863B8(&string___TypeInfo, v7);
    sub_1B863B8(&StringLiteral_5048/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_1B863B8(&StringLiteral_5045/*"DataManager boot load error : list file break"*/, v9);
    sub_1B863B8(&StringLiteral_5047/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_1B863B8(&StringLiteral_5043/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_1B863B8(&StringLiteral_24989/*"~"*/, v12);
    sub_1B863B8(&StringLiteral_21119/*"master data versiton different ("*/, v13);
    sub_1B863B8(&StringLiteral_773/*") -> ("*/, v14);
    sub_1B863B8(&StringLiteral_764/*")"*/, v15);
    sub_1B863B8(&StringLiteral_1781/*"@"*/, v16);
    sub_1B863B8(&StringLiteral_5046/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_4A4DFBB = 1;
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
    v65 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v65 = DataManager_TypeInfo;
    }
    static_fields = v65->static_fields;
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
    v24 = (System_Char_array *)sub_1B86460(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_1B86614(0LL, 0LL);
    if ( !v24->max_length )
      sub_1B8661C(v24, v24);
    v24->m_Items[2] = -257;
    v25 = System_String__Trim_61701844(v23, v24, 0LL);
    v26 = (System_Char_array *)sub_1B86460(char___TypeInfo, 2LL);
    if ( !v26 )
      sub_1B86614(0LL, 0LL);
    max_length = v26->max_length;
    if ( !max_length )
      sub_1B8661C(v26, v26);
    v26->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B8661C(v26, v26);
    v26->m_Items[3] = 10;
    if ( !v25 )
      sub_1B86614(v26, v26);
    v28 = System_String__IndexOfAny(v25, v26, 0LL);
    if ( v28 < 2 )
    {
      v29 = &StringLiteral_5047/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v64 = (System_String_o *)*v29;
LABEL_58:
      if ( v64 )
        goto LABEL_59;
      return 1;
    }
    v30 = System_String__Substring_61691100(v25, 0, v28, 0LL);
    v32 = v30;
    if ( !v30 )
      sub_1B86614(0LL, v31);
    if ( !System_String__StartsWith(v30, (System_String_o *)StringLiteral_24989/*"~"*/, 0LL) )
    {
      v29 = &StringLiteral_5048/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v33 = System_String__Substring(v32, 1, 0LL);
    v34 = System_String__Substring(v25, v28 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1B86614(0LL, v36);
    v37 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                 UTF8,
                                 v34,
                                 UTF8->klass->vtable._19_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v38 = Crc32__Compute(v37, 0LL);
    if ( System_UInt32__Parse(v33, 0LL) != v38 )
    {
      v29 = &StringLiteral_5043/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v39 = (System_Char_array *)sub_1B86460(char___TypeInfo, 2LL);
    if ( !v39 )
      sub_1B86614(0LL, 0LL);
    v40 = v39->max_length;
    if ( !v40 )
      sub_1B8661C(v39, v39);
    v39->m_Items[2] = 13;
    if ( v40 == 1 )
      sub_1B8661C(v39, v39);
    v39->m_Items[3] = 10;
    if ( !v34 )
      sub_1B86614(v39, v39);
    v41 = (__int64)System_String__Split_61694488(v34, v39, 1, 0LL);
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
      v41 = System_String__StartsWith((System_String_o *)v41, (System_String_o *)StringLiteral_1781/*"@"*/, 0LL);
      if ( (v41 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v42 + 24) )
          goto LABEL_78;
        v44 = *(System_String_o **)(v42 + 32);
        v41 = sub_1B86460(char___TypeInfo, 1LL);
        if ( v41 )
        {
          v21 = (const MethodInfo *)v41;
          if ( !*(_DWORD *)(v41 + 24) )
            goto LABEL_78;
          *(_WORD *)(v41 + 32) = 44;
          if ( v44 )
          {
            v41 = (__int64)System_String__Split_61694252(v44, (System_Char_array *)v41, 0LL);
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
                    v29 = &StringLiteral_5046/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v41 = System_Int32__Parse(*(System_String_o **)(v45 + 40), 0LL);
                  v68 = DataManager_TypeInfo;
                  v69 = v41;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v68 = DataManager_TypeInfo;
                  }
                  v70 = v68->static_fields;
                  v70->dataVersion = v69;
                  v70->readDataVersion = v69;
                  if ( *(_DWORD *)(v45 + 24) > 2u )
                  {
                    v71 = System_Int64__Parse(*(System_String_o **)(v45 + 48), 0LL);
                    v72 = DataManager_TypeInfo->static_fields;
                    v72->dateVersion = v71;
                    v72->readDateVersion = v71;
                    return 1;
                  }
LABEL_78:
                  sub_1B8661C(v41, v21);
                }
                v41 = sub_1B86460(string___TypeInfo, 5LL);
                if ( v41 )
                {
                  v51 = v41;
                  if ( *(_DWORD *)(v41 + 24) )
                  {
                    v52 = StringLiteral_21119/*"master data versiton different ("*/;
                    *(_QWORD *)(v41 + 32) = StringLiteral_21119/*"master data versiton different ("*/;
                    sub_1B8635C((CGThumbnailListItem_o *)(v41 + 32), v52, v49, v50);
                    if ( *(_DWORD *)(v51 + 24) > 1u )
                    {
                      *(_QWORD *)(v51 + 40) = v48;
                      sub_1B8635C((CGThumbnailListItem_o *)(v51 + 40), (int32_t)v48, v53, v54);
                      if ( *(_DWORD *)(v51 + 24) > 2u )
                      {
                        v57 = StringLiteral_773/*") -> ("*/;
                        *(_QWORD *)(v51 + 48) = StringLiteral_773/*") -> ("*/;
                        sub_1B8635C((CGThumbnailListItem_o *)(v51 + 48), v57, v55, v56);
                        v41 = (__int64)ManagerConfig_TypeInfo;
                        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                          v41 = (__int64)ManagerConfig_TypeInfo;
                        }
                        if ( *(_DWORD *)(v51 + 24) > 3u )
                        {
                          v60 = *(_QWORD *)(*(_QWORD *)(v41 + 184) + 32LL);
                          *(_QWORD *)(v51 + 56) = v60;
                          sub_1B8635C((CGThumbnailListItem_o *)(v51 + 56), v60, v58, v59);
                          if ( *(_DWORD *)(v51 + 24) > 4u )
                          {
                            v63 = StringLiteral_764/*")"*/;
                            *(_QWORD *)(v51 + 64) = StringLiteral_764/*")"*/;
                            sub_1B8635C((CGThumbnailListItem_o *)(v51 + 64), v63, v61, v62);
                            v64 = System_String__Concat_61685692((System_String_array *)v51, 0LL);
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
        sub_1B86614(v41, v21);
      }
    }
    v29 = &StringLiteral_5045/*"DataManager boot load error : list file break"*/;
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
  DataManager_c *v8; // x0
  struct DataManager_StaticFields *static_fields; // x8
  CGThumbnailListItem_o *p_updateData; // x0
  int32_t v11; // w1
  struct DataManager_StaticFields *v12; // x0

  if ( (byte_4A4DFAB & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4A4DFAB = 1;
  }
  v8 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v8 = DataManager_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->dataVersion != dataVer )
    goto LABEL_18;
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = DataManager_TypeInfo;
    static_fields = DataManager_TypeInfo->static_fields;
  }
  if ( static_fields->dateVersion == dateVer )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = DataManager_TypeInfo->static_fields;
    }
    static_fields->updateData = 0LL;
    p_updateData = (CGThumbnailListItem_o *)&static_fields->updateData;
    v11 = 0;
  }
  else
  {
LABEL_18:
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = DataManager_TypeInfo;
    }
    v12 = v8->static_fields;
    v11 = (int)obj;
    v12->updateData = obj;
    p_updateData = (CGThumbnailListItem_o *)&v12->updateData;
    p_updateData[-1].fields._Type_k__BackingField = dataVer;
    p_updateData[-1].fields._ThumbnailSpritePath_k__BackingField = (struct System_String_o *)dateVer;
  }
  sub_1B8635C(p_updateData, v11, dateVer, (const MethodInfo *)obj);
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

  if ( (byte_4A4DFAA & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4A4DFAA = 1;
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
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_c *v7; // x0
  int32_t v8; // w1
  struct DataManager_StaticFields *static_fields; // x0
  System_String_o *v10; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_String_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *v16; // x0
  DataManager_c *v17; // x8
  struct DataManager_StaticFields *v18; // x0
  DataManager_c *v19; // x0

  if ( (byte_4A4DFA4 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, obj);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v5);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    byte_4A4DFA4 = 1;
  }
  v7 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v7 = DataManager_TypeInfo;
  }
  v8 = (int)StringLiteral_1/*""*/;
  static_fields = v7->static_fields;
  static_fields->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->serverHash, v8, (int32_t)method, v3);
  if ( obj )
  {
    v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v11 = System_String__op_Equality(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v11 )
    {
      if ( !v10 )
        sub_1B86614(v11, v12);
      v13 = System_String__Substring(v10, v10->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v16 = System_String__Substring_61691100(v10, 0, v10->fields._stringLength - 1, 0LL);
        v17 = DataManager_TypeInfo;
        v10 = v16;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v17 = DataManager_TypeInfo;
        }
        v18 = v17->static_fields;
      }
      else
      {
        v19 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v19 = DataManager_TypeInfo;
        }
        v18 = v19->static_fields;
      }
      v18->serverHash = v10;
      sub_1B8635C((CGThumbnailListItem_o *)&v18->serverHash, (int32_t)v10, v14, v15);
    }
  }
}


void __fastcall DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4A4DFA6 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, obj);
    byte_4A4DFA6 = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void __fastcall DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4A4DFBF & 1) == 0 )
  {
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_4A4DFBF = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1B868D4(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_39761592(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_39761592(
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
  if ( (byte_4A4DFC0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B863B8(&StringLiteral_24156/*"updated"*/, v7);
    sub_1B863B8(&StringLiteral_18334/*"deleted"*/, v8);
    this = (DataManager_o *)sub_1B863B8(&StringLiteral_22724/*"replaced"*/, v9);
    byte_4A4DFC0 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1B86614(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18334/*"deleted"*/,
         (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18334/*"deleted"*/,
                              (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                  (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                    (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      sub_1B8661C(this, data);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24156/*"updated"*/,
          (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24156/*"updated"*/,
                            (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v21 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v21
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1B868D4(v10);
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
                                (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
          (Il2CppObject *)StringLiteral_22724/*"replaced"*/,
          (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_22724/*"replaced"*/,
                            (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v31 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v31
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1B868D4(v3);
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
                                (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A4DFB1 & 1) == 0 )
  {
    sub_1B863B8(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_4A4DFB1 = 1;
  }
  v5 = sub_1B86604(DataManager__updateMasterData_d__49_TypeInfo);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B86614(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A4DFA7 & 1) == 0 )
  {
    sub_1B863B8(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_4A4DFA7 = 1;
  }
  v3 = sub_1B86604(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B86614(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4A4DFBE & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, method);
    sub_1B863B8(&Crc32_TypeInfo, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&System_IDisposable_TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_1B863B8(&ManagerConfig_TypeInfo, v8);
    sub_1B863B8(&System_IO_StreamWriter_TypeInfo, v9);
    sub_1B863B8(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1B863B8(&uint_TypeInfo, v11);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v12);
    sub_1B863B8(&StringLiteral_24992/*"~{0}\n{1}"*/, v13);
    sub_1B863B8(&StringLiteral_1781/*"@"*/, v14);
    sub_1B863B8(&StringLiteral_817/*","*/, v15);
    byte_4A4DFBE = 1;
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
    v23 = (System_Text_StringBuilder_o *)sub_1B86604(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_61723712(v23, (size << 7) + 128, 0LL);
    if ( !v23 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_61730360(v23, (System_String_o *)StringLiteral_1781/*"@"*/, 0LL);
    v24 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_61730360(v23, v24->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_61730360(v23, (System_String_o *)StringLiteral_817/*","*/, 0LL);
    System_Text_StringBuilder__Append_61732856(v23, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_61730360(v23, (System_String_o *)StringLiteral_817/*","*/, 0LL);
    System_Text_StringBuilder__Append_61732944(v23, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_61730360(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
                 (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_61730360(v23, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_61730360(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
      sub_1B86614(CacheListFileName, v19);
    v30 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.method)(
                                 CacheListFileName,
                                 v29,
                                 CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v45 = Crc32__Compute(v30, 0LL);
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v45, v31, v32, v33);
    v35 = System_String__Format_61686468((System_String_o *)StringLiteral_24992/*"~{0}\n{1}"*/, v34, v29, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v36 = CatAndMouseGame__CatGame3(v35, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v38 = (System_IO_StreamWriter_o *)sub_1B86604(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_62491744(v38, v22, 0, UTF8, 0LL);
    if ( !v38 )
      sub_1B86614(v39, v40);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v38->klass->vtable._16_Write.method)(
      v38,
      v36,
      v38->klass->vtable._17_WriteLine.methodPtr);
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
      v44 = sub_1BD6B4C(v38, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  char *v18; // x20
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w1
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  System_String_o *v36; // x20
  System_Byte_array *v37; // x21
  System_String_o *v38; // x0
  System_String_o *v39; // x20
  System_String_o *v40; // x20
  System_Text_Encoding_o *v41; // x22
  System_IO_StreamWriter_o *v42; // x21
  uint32_t v43; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A4DFBC & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, method);
    sub_1B863B8(&Crc32_TypeInfo, v2);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&ManagerConfig_TypeInfo, v4);
    sub_1B863B8(&System_IO_StreamWriter_TypeInfo, v5);
    sub_1B863B8(&string___TypeInfo, v6);
    sub_1B863B8(&StringLiteral_43/*"\n"*/, v7);
    sub_1B863B8(&StringLiteral_24989/*"~"*/, v8);
    sub_1B863B8(&StringLiteral_1781/*"@"*/, v9);
    sub_1B863B8(&StringLiteral_817/*","*/, v10);
    byte_4A4DFBC = 1;
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
    UTF8 = (char *)sub_1B86460(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v18 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v19 = StringLiteral_1781/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1781/*"@"*/;
    sub_1B8635C((CGThumbnailListItem_o *)(UTF8 + 32), v19, v16, v17);
    UTF8 = (char *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      UTF8 = (char *)ManagerConfig_TypeInfo;
    }
    if ( *((_DWORD *)v18 + 6) <= 1u )
      goto LABEL_26;
    v22 = *(_QWORD *)(*((_QWORD *)UTF8 + 23) + 32LL);
    *((_QWORD *)v18 + 5) = v22;
    sub_1B8635C((CGThumbnailListItem_o *)(v18 + 40), v22, v20, v21);
    if ( *((_DWORD *)v18 + 6) <= 2u )
      goto LABEL_26;
    v25 = (int)StringLiteral_817/*","*/;
    *((_QWORD *)v18 + 6) = StringLiteral_817/*","*/;
    sub_1B8635C((CGThumbnailListItem_o *)(v18 + 48), v25, v23, v24);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v18 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v18 + 7) = UTF8;
    sub_1B8635C((CGThumbnailListItem_o *)(v18 + 56), (int32_t)UTF8, v26, v27);
    if ( *((_DWORD *)v18 + 6) <= 4u
      || (v30 = (int)StringLiteral_817/*","*/,
          *((_QWORD *)v18 + 8) = StringLiteral_817/*","*/,
          sub_1B8635C((CGThumbnailListItem_o *)(v18 + 64), v30, v28, v29),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v18 + 6) <= 5u)
      || (*((_QWORD *)v18 + 9) = UTF8,
          sub_1B8635C((CGThumbnailListItem_o *)(v18 + 72), (int32_t)UTF8, v31, v32),
          *((_DWORD *)v18 + 6) <= 6u) )
    {
LABEL_26:
      sub_1B8661C(UTF8, v15);
    }
    v35 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v18 + 10) = StringLiteral_43/*"\n"*/;
    sub_1B8635C((CGThumbnailListItem_o *)(v18 + 80), v35, v33, v34);
    v36 = System_String__Concat_61685692((System_String_array *)v18, 0LL);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_27;
    v37 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 v36,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v43 = Crc32__Compute(v37, 0LL);
    v38 = System_UInt32__ToString((uint32_t)&v43, 0LL);
    v39 = System_String__Concat_61685428(
            (System_String_o *)StringLiteral_24989/*"~"*/,
            v38,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v36,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v40 = CatAndMouseGame__CatGame1(v39, 0, 0LL);
    v41 = System_Text_Encoding__get_UTF8(0LL);
    v42 = (System_IO_StreamWriter_o *)sub_1B86604(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_62491744(v42, CacheVersionFileName, 0, v41, 0LL);
    if ( !v42 )
LABEL_27:
      sub_1B86614(UTF8, v15);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v42->klass->vtable._16_Write.method)(
      v42,
      v40,
      v42->klass->vtable._17_WriteLine.methodPtr);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v42->klass->vtable._8_Close.method)(
      v42,
      v42->klass->vtable._9_Dispose.methodPtr);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4DFC4 & 1) == 0 )
  {
    sub_1B863B8(&DataManager___c_TypeInfo, v1);
    byte_4A4DFC4 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(DataManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( (byte_4A4DFC5 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1B863B8(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_4A4DFC5 = 1;
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
                                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                         (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1B86614(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1B8661C(this, *(_QWORD *)&a);
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
  if ( (byte_4A4DFC6 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1B863B8(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_4A4DFC6 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1B86614(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1B86614(this, 0LL);
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
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  char v19; // w8
  DataManager_c *v20; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v22; // w10
  DataManager_c *v23; // x0
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v25; // x21
  System_IO_Stream_o *v26; // x24
  System_IO_Stream_o *v27; // x25
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  float v33; // s0
  UnityEngine_WaitForEndOfFrame_o *v34; // x19
  CGThumbnailListItem_o *v35; // x20
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int v38; // w8
  DataManager_c *v39; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  System_IO_Stream_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_IO_MemoryStream_c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  System_Byte_array *masterDataBytes; // x22
  System_IO_MemoryStream_o *v58; // x21
  System_IO_BinaryReader_o *v59; // x24
  __int64 v60; // x0
  __int64 v61; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v64; // x0
  __int64 v65; // x1
  int v66; // w22
  __int64 v67; // x23
  __int64 v68; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  __int64 v73; // x1
  int v74; // w8
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  Il2CppClass **v78; // x0
  System_IO_BinaryReader_c *v79; // x8
  __int64 v80; // x9
  int32_t *v81; // x10
  __int64 v82; // x0
  System_IO_MemoryStream_c *v83; // x8
  __int64 v84; // x9
  int32_t *v85; // x10
  __int64 v86; // x0
  UnityEngine_WaitForEndOfFrame_o *v87; // x19
  int32_t v88; // w2
  const MethodInfo *v89; // x3

  v2 = this;
  if ( (byte_4A4DFC7 & 1) == 0 )
  {
    sub_1B863B8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B863B8(&byte___TypeInfo, v3);
    sub_1B863B8(&CatAndMouseGame_TypeInfo, v4);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    sub_1B863B8(&System_GC_TypeInfo, v6);
    sub_1B863B8(&System_IDisposable_TypeInfo, v7);
    sub_1B863B8(&long___TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1B863B8(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_1B863B8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_4A4DFC7 = 1;
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
        v15 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v15, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v15;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1B8635C(p__2__current, (int32_t)v15, v17, v18);
        v19 = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return v19 & 1;
      }
LABEL_15:
      if ( DataManager__readMasterDataListFile(_4__this, method) )
      {
        v23 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        CacheFileName = DataManager__getCacheFileName((const MethodInfo *)v23);
        if ( System_IO_File__Exists(CacheFileName, 0LL) )
        {
          v25 = (System_IO_MemoryStream_o *)sub_1B86604(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v25, 0LL);
          v26 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v27 = CatAndMouseGame__MouseGameZ(v26, 0LL);
          v28 = sub_1B86460(byte___TypeInfo, 0x4000LL);
          v30 = v28;
          if ( !v28 )
            sub_1B86614(0LL, v29);
          if ( !v27 )
            sub_1B86614(v28, v29);
          while ( 1 )
          {
            v31 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v27->klass->vtable._32_unknown.method)(
                    v27,
                    v30,
                    0LL,
                    *(unsigned int *)(v30 + 24),
                    v27->klass->vtable._33_Read.methodPtr);
            if ( (int)v31 <= 0 )
              break;
            if ( !v25 )
              sub_1B86614(v31, v32);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v25->klass->vtable._35_Write.method)(
              v25,
              v30,
              0LL,
              (unsigned int)v31,
              v25->klass->vtable._36_Write.methodPtr);
          }
          klass = v27->klass;
          v41 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v41;
              p_offset += 4;
              if ( !v41 )
                goto LABEL_37;
            }
            v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_37:
            v43 = sub_1BD6B4C(v27, System_IDisposable_TypeInfo, 0LL);
          }
          v44 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v43)(v27, *(_QWORD *)(v43 + 8));
          if ( v26 )
          {
            v46 = v26->klass;
            v47 = *(unsigned __int16 *)(&v26->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v26->klass->_2.bitflags2 + 3) )
            {
              v48 = &v46->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
              {
                --v47;
                v48 += 4;
                if ( !v47 )
                  goto LABEL_44;
              }
              v49 = (__int64)(&v46->vtable._0_Equals.method + 2 * *v48);
            }
            else
            {
LABEL_44:
              v49 = sub_1BD6B4C(v26, System_IDisposable_TypeInfo, 0LL);
            }
            v44 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v49)(v26, *(_QWORD *)(v49 + 8));
          }
          if ( !v25 )
            sub_1B86614(v44, v45);
          v50 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v25->klass->vtable._41_ToArray.method)(
                  v25,
                  v25->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v50;
          sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, v50, v51, v52);
          v53 = v25->klass;
          v54 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
          {
            v55 = &v53->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
            {
              --v54;
              v55 += 4;
              if ( !v54 )
                goto LABEL_52;
            }
            v56 = (__int64)(&v53->vtable._0_Equals.method + 2 * *v55);
          }
          else
          {
LABEL_52:
            v56 = sub_1BD6B4C(v25, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v56)(v25, *(_QWORD *)(v56 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v58 = (System_IO_MemoryStream_o *)sub_1B86604(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_62467192(v58, masterDataBytes, 0LL);
          v59 = (System_IO_BinaryReader_o *)sub_1B86604(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v59, (System_IO_Stream_o *)v58, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1B86614(v60, v61);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v59 )
            {
LABEL_76:
              if ( v58 )
              {
                v83 = v58->klass;
                v84 = *(unsigned __int16 *)(&v58->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v58->klass->_2.bitflags2 + 3) )
                {
                  v85 = &v83->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v85 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v84;
                    v85 += 4;
                    if ( !v84 )
                      goto LABEL_81;
                  }
                  v86 = (__int64)(&v83->vtable._0_Equals.method + 2 * *v85);
                }
                else
                {
LABEL_81:
                  v86 = sub_1BD6B4C(v58, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v86)(v58, *(_QWORD *)(v86 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0LL);
              v87 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v87, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v87;
              v35 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1B8635C(v35, (int32_t)v87, v88, v89);
              v38 = 2;
LABEL_87:
              LODWORD(v35[-1].fields._ThumbnailSpritePath_k__BackingField) = v38;
              v19 = 1;
              return v19 & 1;
            }
          }
          else
          {
            if ( !v59 )
              sub_1B86614(v60, v61);
            do
            {
              v64 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v59->klass->vtable._15_ReadInt32.method)(
                      v59,
                      v59->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v58 )
                sub_1B86614(v64, v65);
              v66 = v64;
              v67 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v58->klass->vtable._12_get_Position.method)(
                      v58,
                      v58->klass->vtable._13_set_Position.methodPtr);
              v68 = v66;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v58->klass->vtable._30_Seek.method)(
                v58,
                v66,
                1LL,
                v58->klass->vtable._31_SetLength.methodPtr);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v70 = sub_1B86460(long___TypeInfo, 2LL);
              v73 = v70;
              if ( !v70 )
                sub_1B86614(0LL, 0LL);
              v74 = *(_DWORD *)(v70 + 24);
              if ( !v74 )
                sub_1B8661C(v70, v70);
              *(_QWORD *)(v70 + 32) = v67;
              if ( v74 == 1 )
                sub_1B8661C(v70, v70);
              *(_QWORD *)(v70 + 40) = v68;
              if ( !saveDataMapList )
                sub_1B86614(v70, v70);
              items = saveDataMapList->fields._items;
              v76 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1B86614(v70, v70);
              v77 = saveDataMapList->fields._size;
              if ( (unsigned int)v77 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v70,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
              }
              else
              {
                v78 = &items->obj.klass + v77;
                saveDataMapList->fields._size = v77 + 1;
                v78[4] = (Il2CppClass *)v73;
                sub_1B8635C((CGThumbnailListItem_o *)(v78 + 4), v73, v71, v72);
              }
              --size;
            }
            while ( size );
          }
          v79 = v59->klass;
          v80 = *(unsigned __int16 *)(&v59->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v59->klass->_2.bitflags2 + 3) )
          {
            v81 = &v79->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
            {
              --v80;
              v81 += 4;
              if ( !v80 )
                goto LABEL_73;
            }
            v82 = (__int64)(&v79->vtable._0_Equals.method + 2 * *v81);
          }
          else
          {
LABEL_73:
            v82 = sub_1BD6B4C(v59, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v82)(v59, *(_QWORD *)(v82 + 8));
          goto LABEL_76;
        }
      }
      v33 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v33 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v33;
        v34 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v34, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v34;
        v35 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1B8635C(v35, (int32_t)v34, v36, v37);
        v38 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, method);
      v39 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v39 = DataManager_TypeInfo;
      }
      static_fields = v39->static_fields;
      v19 = 0;
      v22 = 5;
LABEL_31:
      static_fields->readMasterDataResult = v22;
      return v19 & 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_96;
    case 2:
      v2->fields.__1__state = -1;
      v20 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v20 = DataManager_TypeInfo;
      }
      static_fields = v20->static_fields;
      v19 = 0;
      v22 = 1;
      goto LABEL_31;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_96:
        sub_1B86614(this, method);
      goto LABEL_28;
    default:
      v19 = 0;
      return v19 & 1;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  bool result; // w0
  bool MasterVersionFile; // w19
  DataManager_c *v13; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v15; // w9

  v2 = this;
  if ( (byte_4A4DFC8 & 1) == 0 )
  {
    sub_1B863B8(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1B863B8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4A4DFC8 = 1;
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
        v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v7;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1B8635C(p__2__current, (int32_t)v7, v9, v10);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1B86614(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, method);
  v13 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v13 = DataManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  result = 0;
  if ( MasterVersionFile )
    v15 = 1;
  else
    v15 = 5;
  static_fields->readMasterVersionResult = v15;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  DataManager__updateMasterData_d__49_o *v4; // x19
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
  struct DataManager_o *_4__this; // x20
  DataManager_c *v76; // x0
  int v77; // w8
  MasterDataUnpakcer_o *v78; // x21
  __int64 v79; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  UnityEngine_WaitForEndOfFrame_o *v84; // x20
  CGThumbnailListItem_o *v85; // x19
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int v88; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v90; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v92; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  System_String_o *CachePath; // x21
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  __int64 v102; // x1
  DataManager_c *v103; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v105; // x21
  System_Byte_array *v106; // x0
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  DataManager_c *v111; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v113; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  UnityEngine_WaitForEndOfFrame_o *v124; // x20
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  System_Func_bool__o *v127; // x21
  UnityEngine_WaitUntil_o *v128; // x20
  int32_t v129; // w2
  const MethodInfo *v130; // x3
  int32_t v131; // w1
  CGThumbnailListItem_o *p_dataMapDict_5__6; // x0
  UnityEngine_WaitForEndOfFrame_o *v133; // x20
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  UnityEngine_WaitForEndOfFrame_o *v136; // x20
  int32_t v137; // w2
  const MethodInfo *v138; // x3
  int v139; // w8
  DataManager_c *v140; // x8
  struct DataManager_StaticFields *v141; // x8
  int v142; // w9
  DataManager___c__DisplayClass49_0_o *v143; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  struct DataMasterBase_array *v149; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v151; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  __int64 v156; // x0
  __int64 v157; // x1
  struct DataManager___c__DisplayClass49_0_o *v158; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  struct DataManager___c__DisplayClass49_0_o *v163; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v166; // x24
  System_Predicate_object__o *v167; // x23
  int32_t v168; // w2
  const MethodInfo *v169; // x3
  int32_t v170; // w2
  const MethodInfo *v171; // x3
  System_Collections_Generic_List_object__o *v172; // x22
  DataManager__updateMasterData_d__49_o *v173; // x24
  System_Predicate_object__o *v174; // x23
  int32_t Index; // w0
  int32_t v176; // w22
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  __int64 v179; // x8
  _QWORD *v180; // x9
  __int64 _2__current_low; // x10
  __int64 v182; // x8
  int32_t v183; // w2
  const MethodInfo *v184; // x3
  __int64 v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  __int64 v188; // x8
  UnityEngine_WaitForEndOfFrame_o *v189; // x20
  int32_t v190; // w2
  const MethodInfo *v191; // x3
  ManagerConfig_c *v192; // x0
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  struct System_Collections_Generic_List_string__o *v197; // x8
  System_Collections_Generic_List_int__o *v198; // x22
  int32_t v199; // w2
  const MethodInfo *v200; // x3
  ManagerConfig_c *v201; // x0
  __int64 v202; // x22
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  DataManager__updateMasterData_d__49_o *v205; // x23
  int32_t v206; // w2
  const MethodInfo *v207; // x3
  DataManager__updateMasterData_d__49_o *v208; // x23
  int32_t v209; // w2
  const MethodInfo *v210; // x3
  DataManager__updateMasterData_d__49_o *v211; // x23
  int32_t v212; // w2
  const MethodInfo *v213; // x3
  DataManager__updateMasterData_d__49_o *v214; // x23
  int32_t v215; // w2
  const MethodInfo *v216; // x3
  DataManager__updateMasterData_d__49_o *v217; // x23
  int32_t v218; // w2
  const MethodInfo *v219; // x3
  DataManager__updateMasterData_d__49_o *v220; // x23
  int32_t v221; // w2
  const MethodInfo *v222; // x3
  DataManager__updateMasterData_d__49_o *v223; // x23
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  DataManager__updateMasterData_d__49_o *v226; // x23
  int32_t v227; // w2
  const MethodInfo *v228; // x3
  DataManager__updateMasterData_d__49_o *v229; // x23
  __int64 v230; // x8
  __int64 v231; // x29
  _QWORD *v232; // x23
  __int64 v233; // x24
  int32_t v234; // w2
  const MethodInfo *v235; // x3
  __int64 v236; // x1
  System_Collections_Generic_List_object__o *v237; // x25
  System_Predicate_object__o *v238; // x26
  int32_t v239; // w24
  struct System_Byte_array *masterDataBytes; // x25
  const MethodInfo_371CBA4 *v241; // x3
  const MethodInfo_371CBA4 *v242; // x3
  __int64 v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  UnityEngine_WaitForEndOfFrame_o *v246; // x20
  int32_t v247; // w2
  const MethodInfo *v248; // x3
  ManagerConfig_c *v249; // x0
  Il2CppObject *lockCountObj; // x22
  DataManager_c *v251; // x0
  int v252; // w21
  DataManager_c *v253; // x8
  UnityEngine_WaitForEndOfFrame_o *v254; // x20
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  const MethodInfo *v257; // x3
  struct System_Collections_Generic_List_string__o *v258; // x8
  int32_t size; // w2
  int v260; // w9
  struct System_Collections_Generic_List_long____o *v261; // x8
  int32_t v262; // w2
  int v263; // w9
  UnityEngine_WaitForEndOfFrame_o *v264; // x20
  int32_t v265; // w2
  const MethodInfo *v266; // x3
  UnityEngine_WaitForEndOfFrame_o *v267; // x20
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  UnityEngine_WaitForEndOfFrame_o *v270; // x20
  int32_t v271; // w2
  const MethodInfo *v272; // x3
  __int64 v273; // x0
  struct DataMasterBase_array *v274; // x9
  EventRandomMissionClearManager_c *v275; // x0
  DataManager_c *v276; // x8
  UnityEngine_WaitForEndOfFrame_o *v277; // x20
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-A0h]
  __int64 v281; // [xsp+8h] [xbp-98h] BYREF
  __int64 v282; // [xsp+10h] [xbp-90h]
  __int64 v283; // [xsp+18h] [xbp-88h] BYREF
  __int64 v284; // [xsp+20h] [xbp-80h]
  int v285; // [xsp+30h] [xbp-70h]
  bool lockTaken; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v287; // 0:x0.16
  System_Nullable_long__o v288; // 0:x0.16

  v4 = this;
  if ( (byte_4A4DFC9 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&CatAndMouseGame_TypeInfo, v5);
    sub_1B863B8(&System_Convert_TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantProfileMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMaster_EventServantMaster___, v8);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantAddMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantClassMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v11);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantCommentMaster___, v12);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v13);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantProfileMaster___, v15);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v16);
    sub_1B863B8(&Method_DataManager__updateMasterData_b__49_0__, v17);
    sub_1B863B8(&DataManager_TypeInfo, v18);
    sub_1B863B8(&DataMasterBase___TypeInfo, v19);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v21);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v22);
    sub_1B863B8(&EventRandomMissionClearManager_TypeInfo, v23);
    sub_1B863B8(&System_Func_bool__TypeInfo, v24);
    sub_1B863B8(&System_GC_TypeInfo, v25);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v26);
    sub_1B863B8(&LastUsedDeckNumberManager_TypeInfo, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Add__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____Add__, v30);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Clear__, v31);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____Clear__, v32);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__Contains__, v33);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__FindIndex__, v34);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__RemoveAt__, v35);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____RemoveAt__, v36);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v37);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____get_Count__, v38);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, v39);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____get_Item__, v40);
    sub_1B863B8(&Method_System_Collections_Generic_List_long____set_Item__, v41);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v42);
    sub_1B863B8(&LogoMain_TypeInfo, v43);
    sub_1B863B8(&ManagerConfig_TypeInfo, v44);
    sub_1B863B8(&MasterDataUnpakcer_TypeInfo, v45);
    sub_1B863B8(&MaterialBranchRouteManager_TypeInfo, v46);
    sub_1B863B8(&MaterialGroupClearHistoryManager_TypeInfo, v47);
    sub_1B863B8(&MaterialServantLimitCountManager_TypeInfo, v48);
    sub_1B863B8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v49);
    sub_1B863B8(&Method_System_Nullable_long___ctor__, v50);
    sub_1B863B8(&OtherUserNewManager_TypeInfo, v51);
    sub_1B863B8(&System_Predicate_string__TypeInfo, v52);
    sub_1B863B8(&ServantCommentManager_TypeInfo, v53);
    sub_1B863B8(&ServantProfileEventJoinManager_TypeInfo, v54);
    sub_1B863B8(&ServantProfileLimitCountManager_TypeInfo, v55);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v56);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57);
    sub_1B863B8(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v58);
    sub_1B863B8(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__, v59);
    sub_1B863B8(&DataManager___c__DisplayClass49_0_TypeInfo, v60);
    sub_1B863B8(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__, v61);
    sub_1B863B8(&DataManager___c__DisplayClass49_1_TypeInfo, v62);
    sub_1B863B8(&UserCommandCodeCollectionManager_TypeInfo, v63);
    sub_1B863B8(&UserCommandCodeNewManager_TypeInfo, v64);
    sub_1B863B8(&UserEquipNewManager_TypeInfo, v65);
    sub_1B863B8(&UserMissionProgressManager_TypeInfo, v66);
    sub_1B863B8(&UserServantCollectionManager_TypeInfo, v67);
    sub_1B863B8(&UserServantLockManager_TypeInfo, v68);
    sub_1B863B8(&UserServantNewManager_TypeInfo, v69);
    sub_1B863B8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v70);
    sub_1B863B8(&UnityEngine_WaitUntil_TypeInfo, v71);
    sub_1B863B8(&WarBoardMessageHistoryManager_TypeInfo, v72);
    sub_1B863B8(&WarBoardMovieHistoryManager_TypeInfo, v73);
    this = (DataManager__updateMasterData_d__49_o *)sub_1B863B8(&StringLiteral_11284/*"SCRIPT"*/, v74);
    byte_4A4DFC9 = 1;
  }
  lockTaken = 0;
  v285 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
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
      v4->fields._dataListCount_5__2 = *(_QWORD *)&datalist->max_length;
      saveDataMapList = _4__this->fields.saveDataMapList;
      if ( !saveDataMapList )
        goto LABEL_291;
      v4->fields._saveDataCount_5__3 = saveDataMapList->fields._size;
      DataManager__GetMasterCheckName(_4__this, 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      CachePath = DataManager__getCachePath(0LL);
      if ( !System_IO_Directory__Exists(CachePath, 0LL) )
        System_IO_Directory__CreateDirectory(CachePath, 0LL);
      v4->fields._isAdd_5__4 = 0;
      this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (DataManager__updateMasterData_d__49_o *)DataManager_TypeInfo;
      }
      if ( !*(_QWORD *)&this[1].fields._dataMapDict_5__6->fields._count )
        goto LABEL_134;
      v4->fields._dataMapDict_5__6 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v96, v97);
      v4->fields._dataMapObject_5__7 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v98, v99);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v100, v101);
      v103 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v103 = DataManager_TypeInfo;
      }
      updateData = v103->static_fields->updateData;
      if ( !updateData )
        sub_1B86614(0LL, v102);
      v105 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v106 = System_Convert__FromBase64String(v105, 0LL);
      v4->fields._cryptBytes_5__8 = v106;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v106, v107, v108);
      v111 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v111 = DataManager_TypeInfo;
      }
      static_fields = v111->static_fields;
      static_fields->updateData = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->updateData, 0, v109, v110);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v113 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v113, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v113;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(p__2__current, (int32_t)v113, v115, v116);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v4->fields._cryptBytes_5__8;
      v4->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v119 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_1B86614(v119, v119);
      _4__this->fields.masterDataBytes = v119;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v119, v120, v121);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v122, v123);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v124 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v124, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v124;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(v85, (int32_t)v124, v125, v126);
      v88 = 2;
      goto LABEL_82;
    case 2:
      v4->fields.__1__state = -1;
      v78 = (MasterDataUnpakcer_o *)sub_1B86604(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v78, 0LL);
      if ( !_4__this )
        sub_1B86614(v79, v80);
      if ( !v78 )
        sub_1B86614(v79, v80);
      v81 = MasterDataUnpakcer__Unpack_39138732(v78, _4__this->fields.masterDataBytes, 0LL);
      v4->fields._dataMapObject_5__7 = v81;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v81, v82, v83);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v84;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(v85, (int32_t)v84, v86, v87);
      v88 = 3;
      goto LABEL_82;
    case 3:
      dataMapObject_5__7 = v4->fields._dataMapObject_5__7;
      v4->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v90 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__long____TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v92 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v92 = 0LL;
        }
        else
        {
          v92 = 0LL;
        }
        v4->fields._dataMapDict_5__6 = v92;
        p_dataMapDict_5__6 = (CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6;
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == v90 )
            v131 = (int)dataMapObject_5__7;
          else
            v131 = 0;
        }
        else
        {
          v131 = 0;
        }
      }
      else
      {
        v131 = 0;
        v4->fields._dataMapDict_5__6 = 0LL;
        p_dataMapDict_5__6 = (CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6;
      }
      sub_1B8635C(p_dataMapDict_5__6, v131, v2, v3);
      if ( !_4__this )
        goto LABEL_291;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v136 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v136, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v136;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v85, (int32_t)v136, v137, v138);
        v88 = 4;
        goto LABEL_82;
      }
LABEL_75:
      if ( !v4->fields._dataMapDict_5__6 )
        goto LABEL_83;
      v139 = 0;
      v4->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v139 < v4->fields._dataListCount_5__2 )
        {
          v143 = (DataManager___c__DisplayClass49_0_o *)sub_1B86604(DataManager___c__DisplayClass49_0_TypeInfo);
          DataManager___c__DisplayClass49_0___ctor(v143, 0LL);
          v4->fields.__8__1 = v143;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
          sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v143, v145, v146);
          v149 = _4__this->fields.datalist;
          if ( !v149 )
            goto LABEL_291;
          i_5__9 = v4->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= v149->max_length )
            goto LABEL_292;
          v151 = v149->m_Items[i_5__9];
          if ( !v151 )
            goto LABEL_291;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_291;
          MasterName_k__BackingField = v151->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)MasterName_k__BackingField, v147, v148);
          _8__1 = v4->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_291;
          this = (DataManager__updateMasterData_d__49_o *)v4->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_291;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0LL;
            sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v154, v155);
            v158 = v4->fields.__8__1;
            if ( !v158 )
              sub_1B86614(v156, v157);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1B86614(0LL, v157);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v158->fields.masterName,
                     (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v161, v162);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v270 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v270, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v270;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1B8635C(v85, (int32_t)v270, v271, v272);
              v88 = 5;
              goto LABEL_82;
            }
LABEL_96:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
            v163 = v4->fields.__8__1;
            if ( !v163 || !this )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v163->fields.masterName,
                                                              (const MethodInfo_35FCCE8 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v4->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_291;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v253 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v253 = DataManager_TypeInfo;
                }
                v141 = v253->static_fields;
                result = 0;
                v142 = 6;
                goto LABEL_289;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v166 = *p__8__1;
            v167 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v167,
              (Il2CppObject *)v166,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0LL);
            if ( !saveNameList )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v167,
                                                              (const MethodInfo_35FD1B0 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_291;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v179 = *(_QWORD *)&this->fields.__1__state;
              v180 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v179 )
                goto LABEL_291;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v179 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
              }
              else
              {
                v182 = v179 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v182 + 32) = method;
                sub_1B8635C((CGThumbnailListItem_o *)(v182 + 32), (int32_t)method, v168, v169);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              method = (const MethodInfo *)v4->fields._dataMap_5__10;
              v185 = *(_QWORD *)&this->fields.__1__state;
              v186 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v185 )
                goto LABEL_291;
              v187 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v187 >= *(_DWORD *)(v185 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_35FC958 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
              }
              else
              {
                v188 = v185 + 8 * v187;
                LODWORD(this->fields.__2__current) = v187 + 1;
                *(_QWORD *)(v188 + 32) = method;
                sub_1B8635C((CGThumbnailListItem_o *)(v188 + 32), (int32_t)method, v183, v184);
              }
              ++v4->fields._saveDataCount_5__3;
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
                &v4->fields._dataMap_5__10->obj,
                (const MethodInfo_35FC6DC *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0LL;
            v4->fields._isAdd_5__4 = 1;
            sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v170, v171);
          }
          else
          {
            v172 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v173 = *p__8__1;
            v174 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v174,
              (Il2CppObject *)v173,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0LL);
            if ( !v172 )
              goto LABEL_291;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v172,
                      (System_Predicate_T__o *)v174,
                      (const MethodInfo_35FD1B0 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_125;
            v176 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v176,
              (const MethodInfo_35FE12C *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v176,
              (const MethodInfo_35FE12C *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0LL;
          sub_1B8635C((CGThumbnailListItem_o *)p__8__1, 0, v177, v178);
LABEL_125:
          v139 = v4->fields._i_5__9 + 1;
          v4->fields._i_5__9 = v139;
          continue;
        }
        break;
      }
      if ( !DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
LABEL_129:
        if ( !v4->fields._isAdd_5__4 )
        {
          v192 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v192 = ManagerConfig_TypeInfo;
          }
          if ( !v192->static_fields->UseMock )
            goto LABEL_83;
        }
        v4->fields._dataMapDict_5__6 = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, v3);
        v4->fields._dataMapObject_5__7 = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v193, v194);
        v4->fields._cryptBytes_5__8 = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v195, v196);
        if ( !_4__this )
          goto LABEL_291;
LABEL_134:
        v197 = _4__this->fields.saveNameList;
        if ( !v197 )
LABEL_291:
          sub_1B86614(this, method);
        if ( v197->fields._size <= 0 )
        {
LABEL_83:
          v140 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v140 = DataManager_TypeInfo;
          }
          v141 = v140->static_fields;
          result = 0;
          v142 = 5;
          goto LABEL_289;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v198 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v198,
          (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v198;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v198, v199, v200);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v4->fields._loadedIndices_5__5;
        if ( v4->fields.isUseTips )
        {
          v201 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v201 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v201->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11284/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_291;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v202 = sub_1B86460(DataMasterBase___TypeInfo, 9LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v202 )
                goto LABEL_291;
              v205 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( !*(_DWORD *)(v202 + 24) )
                goto LABEL_292;
              *(_QWORD *)(v202 + 32) = v205;
              sub_1B8635C((CGThumbnailListItem_o *)(v202 + 32), (int32_t)v205, v203, v204);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantClassMaster___);
              v208 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v202 + 24) <= 1u )
                goto LABEL_292;
              *(_QWORD *)(v202 + 40) = v208;
              sub_1B8635C((CGThumbnailListItem_o *)(v202 + 40), (int32_t)v208, v206, v207);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v211 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v202 + 24) <= 2u )
                goto LABEL_292;
              *(_QWORD *)(v202 + 48) = v211;
              sub_1B8635C((CGThumbnailListItem_o *)(v202 + 48), (int32_t)v211, v209, v210);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v214 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v202 + 24) <= 3u )
                goto LABEL_292;
              *(_QWORD *)(v202 + 56) = v214;
              sub_1B8635C((CGThumbnailListItem_o *)(v202 + 56), (int32_t)v214, v212, v213);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v217 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v202 + 24) <= 4u )
                goto LABEL_292;
              *(_QWORD *)(v202 + 64) = v217;
              sub_1B8635C((CGThumbnailListItem_o *)(v202 + 64), (int32_t)v217, v215, v216);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventServantMaster___);
              v220 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v202 + 24) <= 5u )
                goto LABEL_292;
              *(_QWORD *)(v202 + 72) = v220;
              sub_1B8635C((CGThumbnailListItem_o *)(v202 + 72), (int32_t)v220, v218, v219);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v223 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v202 + 24) <= 6u )
                goto LABEL_292;
              *(_QWORD *)(v202 + 80) = v223;
              sub_1B8635C((CGThumbnailListItem_o *)(v202 + 80), (int32_t)v223, v221, v222);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v226 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v202 + 24) <= 7u )
                goto LABEL_292;
              *(_QWORD *)(v202 + 88) = v226;
              sub_1B8635C((CGThumbnailListItem_o *)(v202 + 88), (int32_t)v226, v224, v225);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantAddMaster___);
              v229 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B864F4(this, *(_QWORD *)(*(_QWORD *)v202 + 64LL));
                if ( !this )
                {
LABEL_241:
                  v273 = sub_1B86638(this);
                  sub_1B864E0(v273, 0LL);
                }
              }
              if ( *(_DWORD *)(v202 + 24) <= 8u )
LABEL_292:
                sub_1B8661C(this, method);
              *(_QWORD *)(v202 + 96) = v229;
              sub_1B8635C((CGThumbnailListItem_o *)(v202 + 96), (int32_t)v229, v227, v228);
              v230 = *(_QWORD *)(v202 + 24);
              if ( (int)v230 >= 1 )
              {
                v231 = 0LL;
                while ( (unsigned int)v231 < (unsigned int)v230 )
                {
                  v232 = *(_QWORD **)(v202 + 32 + 8 * v231);
                  v233 = sub_1B86604(DataManager___c__DisplayClass49_1_TypeInfo);
                  DataManager___c__DisplayClass49_1___ctor((DataManager___c__DisplayClass49_1_o *)v233, 0LL);
                  if ( !v232 )
                    goto LABEL_291;
                  if ( !v233 )
                    goto LABEL_291;
                  v236 = v232[3];
                  *(_QWORD *)(v233 + 16) = v236;
                  sub_1B8635C((CGThumbnailListItem_o *)(v233 + 16), v236, v234, v235);
                  v237 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v238 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v238,
                    (Il2CppObject *)v233,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0LL);
                  if ( !v237 )
                    goto LABEL_291;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v237,
                                                                    (System_Predicate_T__o *)v238,
                                                                    (const MethodInfo_35FD1B0 *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v239 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    masterDataBytes = _4__this->fields.masterDataBytes;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v239,
                                                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_292;
                    v287.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v287.fields.hasValue = &v283;
                    v283 = 0LL;
                    v284 = 0LL;
                    System_Nullable_long____ctor(v287, Method_System_Nullable_long___ctor__, v241);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v239,
                                                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_292;
                    v288.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v288.fields.hasValue = &v281;
                    v281 = 0LL;
                    v282 = 0LL;
                    System_Nullable_long____ctor(v288, Method_System_Nullable_long___ctor__, v242);
                    (*(void (__fastcall **)(_QWORD *, struct System_Byte_array *, __int64, __int64, __int64, __int64, _QWORD))(*v232 + 424LL))(
                      v232,
                      masterDataBytes,
                      v283,
                      v284,
                      v281,
                      v282,
                      *(_QWORD *)(*v232 + 432LL));
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_291;
                    v243 = *(_QWORD *)&this->fields.__1__state;
                    v244 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v243 )
                      goto LABEL_291;
                    v245 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v245 >= *(_DWORD *)(v243 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v239,
                        *(const MethodInfo_35DF934 **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v245 + 1;
                      *(_DWORD *)(v243 + 4 * v245 + 32) = v239;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v230 = *(_QWORD *)(v202 + 24);
                  if ( (int)++v231 >= (int)v230 )
                    goto LABEL_192;
                }
                goto LABEL_292;
              }
LABEL_192:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
                  goto LABEL_204;
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_204:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v246 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v246, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v246;
                  v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1B8635C(v85, (int32_t)v246, v247, v248);
                  v88 = 7;
                  goto LABEL_82;
                }
                goto LABEL_291;
              }
            }
          }
        }
LABEL_205:
        DataManager__StartMasterLoadThread(
          _4__this,
          v4->fields._saveDataCount_5__3,
          v4->fields._loadedIndices_5__5,
          0LL);
        if ( v4->fields._isAdd_5__4 )
        {
          v249 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v249 = ManagerConfig_TypeInfo;
          }
          if ( !v249->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, 0LL);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v267 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v267, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v267;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1B8635C(v85, (int32_t)v267, v268, v269);
              v88 = 8;
              goto LABEL_82;
            }
LABEL_56:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__49_o *)DataManager__getCacheFileName(0LL);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, 0LL);
              v127 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v127,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v128 = (UnityEngine_WaitUntil_o *)sub_1B86604(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v128, v127, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v128;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1B8635C(v85, (int32_t)v128, v129, v130);
              v88 = 9;
              goto LABEL_82;
            }
            goto LABEL_291;
          }
        }
LABEL_209:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_63578964(lockCountObj, &lockTaken, 0LL);
        if ( _4__this->fields.nowLoadCount >= v4->fields._saveDataCount_5__3 )
        {
          v252 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v251 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v251 = DataManager_TypeInfo;
          }
          v251->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, 0LL);
          v252 = 20;
        }
        else
        {
          v252 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
        if ( v252 == 62 )
        {
          v254 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v254, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v254;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(v85, (int32_t)v254, v255, v256);
          v88 = 11;
          goto LABEL_82;
        }
        if ( v252 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, 0LL);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          v258 = _4__this->fields.saveNameList;
          if ( v258 )
          {
            size = v258->fields._size;
            v260 = v258->fields._version + 1;
            v258->fields._size = 0;
            v258->fields._version = v260;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v258->fields._items, 0, size, 0LL);
            v261 = _4__this->fields.saveDataMapList;
            if ( v261 )
            {
              v262 = v261->fields._size;
              v263 = v261->fields._version + 1;
              v261->fields._size = 0;
              v261->fields._version = v263;
              if ( v262 >= 1 )
                System_Array__Clear((System_Array_o *)v261->fields._items, 0, v262, 0LL);
              _4__this->fields.masterDataBytes = 0LL;
              sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, 0, v262, v257);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0LL);
              v264 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v264, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v264;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1B8635C(v85, (int32_t)v264, v265, v266);
              v88 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_291;
        }
        return 0;
      }
      v189 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v189, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v189;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(v85, (int32_t)v189, v190, v191);
      v88 = 6;
LABEL_82:
      LODWORD(v85[-1].fields._ThumbnailSpritePath_k__BackingField) = v88;
      return 1;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_75;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_96;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_129;
    case 7:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_205;
    case 8:
      v4->fields.__1__state = -1;
      goto LABEL_56;
    case 9:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      if ( _4__this->fields.writeMasterDataThreadException )
      {
        v76 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v76 = DataManager_TypeInfo;
        }
        v76->static_fields->updateMasterDataResult = 4;
        DataManager__StopMasterLoadThread(_4__this, 0LL);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, 0LL);
      DataManager__writeMasterVersionFile(_4__this, 0LL);
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v133 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v133, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v133;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v85, (int32_t)v133, v134, v135);
        v88 = 10;
        goto LABEL_82;
      }
      goto LABEL_209;
    case 0xA:
    case 0xB:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_291;
      goto LABEL_209;
    case 0xC:
      v77 = 0;
      v4->fields.__1__state = -1;
      v4->fields._i_5__9 = 0;
      goto LABEL_249;
    case 0xD:
      v4->fields.__1__state = -1;
      while ( 1 )
      {
        v77 = v4->fields._i_5__9 + 1;
        v4->fields._i_5__9 = v77;
LABEL_249:
        if ( v77 >= v4->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_291;
        v274 = _4__this->fields.datalist;
        if ( !v274 )
          goto LABEL_291;
        if ( v77 >= v274->max_length )
          goto LABEL_292;
        this = (DataManager__updateMasterData_d__49_o *)v274->m_Items[v77];
        if ( !this )
          goto LABEL_291;
        this = (DataManager__updateMasterData_d__49_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__49_o *, Il2CppMethodPointer))this->klass->vtable._5_System_IDisposable_Dispose.method)(
                                                          this,
                                                          this->klass->vtable._6_MoveNext.methodPtr);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (DataManager__updateMasterData_d__49_o *)DataManager__CheckWaitforFrame(_4__this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v277 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v277, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v277;
            v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1B8635C(v85, (int32_t)v277, v278, v279);
            v88 = 13;
            goto LABEL_82;
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
      v275 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__Initialize((const MethodInfo *)v275);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      MaterialGroupClearHistoryManager__Initialize(0LL);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      WarBoardMessageHistoryManager__Initialize(0LL);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      WarBoardMovieHistoryManager__Initialize(0LL);
      v276 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v276 = DataManager_TypeInfo;
      }
      v141 = v276->static_fields;
      result = 0;
      v142 = 1;
LABEL_289:
      v141->updateMasterDataResult = v142;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
  DataManager_o *_4__this; // x20
  DataManager_c *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  DataManager_c *v24; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  DataManager_c *v31; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  UnityEngine_WaitForEndOfFrame_o *v35; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  bool result; // w0
  System_String_o *cryptString_5__3; // x21
  System_Byte_array *v41; // x21
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UnityEngine_WaitForEndOfFrame_o *v45; // x20
  Il2CppObject **v46; // x19
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int v49; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_39113280; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  UnityEngine_WaitForEndOfFrame_o *v54; // x20
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v59; // x21
  System_String_o *v60; // x22
  Il2CppObject *v61; // x0
  System_Collections_Generic_Dictionary_string__object__o *v62; // x23
  __int64 methodPtr_low; // x9
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  const MethodInfo *v67; // x3

  if ( (byte_4A4DFCA & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, method);
    sub_1B863B8(&System_Convert_TypeInfo, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1B863B8(&JsonManager_TypeInfo, v10);
    sub_1B863B8(&NetworkManager_TypeInfo, v11);
    sub_1B863B8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    sub_1B863B8(&StringLiteral_17994/*"contactURL"*/, v13);
    sub_1B863B8(&StringLiteral_19205/*"filePass"*/, v14);
    sub_1B863B8(&StringLiteral_16835/*"baseURL"*/, v15);
    sub_1B863B8(&StringLiteral_1/*""*/, v16);
    byte_4A4DFCA = 1;
  }
  _4__this = this->fields.__4__this;
  switch ( this->fields.__1__state )
  {
    case 0:
      this->fields.__1__state = -1;
      v18 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v18 = DataManager_TypeInfo;
      }
      if ( !v18->static_fields->webViewData )
        return 0;
      this->fields._data_5__2 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v19, v20);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v21, v22);
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
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, (int32_t)v26, v27, v28);
      v31 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v31 = DataManager_TypeInfo;
      }
      static_fields = v31->static_fields;
      static_fields->webViewData = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->webViewData, 0, v29, v30);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        this->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &this->fields.__2__current;
        sub_1B8635C((CGThumbnailListItem_o *)p__2__current, (int32_t)v35, v37, v38);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
LABEL_18:
      cryptString_5__3 = this->fields._cryptString_5__3;
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v41 = System_Convert__FromBase64String(cryptString_5__3, 0LL);
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v42 = CatAndMouseGame__MouseGame2MsgPack(v41, 0, 0LL);
      this->fields._dataObject_5__4 = v42;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, (int32_t)v42, v43, v44);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v45, 0LL);
        this->fields.__2__current = (Il2CppObject *)v45;
        v46 = &this->fields.__2__current;
        sub_1B8635C((CGThumbnailListItem_o *)v46, (int32_t)v45, v47, v48);
        v49 = 2;
LABEL_30:
        *((_DWORD *)v46 - 2) = v49;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_39113280 = JsonManager__getDictionary_39113280(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_39113280;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_39113280, v52, v53);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v54, 0LL);
        this->fields.__2__current = (Il2CppObject *)v54;
        v46 = &this->fields.__2__current;
        sub_1B8635C((CGThumbnailListItem_o *)v46, (int32_t)v54, v55, v56);
        v49 = 3;
        goto LABEL_30;
      }
LABEL_31:
      p_data_5__2 = &this->fields._data_5__2;
      data_5__2 = this->fields._data_5__2;
      if ( !data_5__2 )
        goto LABEL_50;
      v59 = (System_String_o *)StringLiteral_1/*""*/;
      v60 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)data_5__2,
              (Il2CppObject *)StringLiteral_16835/*"baseURL"*/,
              (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_16835/*"baseURL"*/,
               (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v60 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
LABEL_36:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)Item,
              (Il2CppObject *)StringLiteral_17994/*"contactURL"*/,
              (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17994/*"contactURL"*/,
               (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v59 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
LABEL_41:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_19205/*"filePass"*/,
             (const MethodInfo_32CE8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1B86614(Item, v34);
        v61 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19205/*"filePass"*/,
                (const MethodInfo_32CE660 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v62 = (System_Collections_Generic_Dictionary_string__object__o *)v61;
        if ( v61 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v61->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v61->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1B868D4(v61);
LABEL_54:
            sub_1B86614(webViewData, v23);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v60, v59, v62, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v64, v65);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v66, v67);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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