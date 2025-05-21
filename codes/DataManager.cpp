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

  if ( (byte_4B4457D & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B4457D = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->updateData, 0, v2, v3);
  v6 = DataManager_TypeInfo->static_fields;
  v6->webViewData = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->webViewData, 0, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  v10 = DataManager_TypeInfo->static_fields;
  v10->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&v10->serverHash, v9, v11, v12);
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

  if ( (byte_4B4457C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_long_____ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_long____TypeInfo, v4);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BDB878(&object_TypeInfo, v6);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager___ctor__, v7);
    byte_4B4457C = 1;
  }
  this->fields._DispLog = 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.saveNameList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v11;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.saveDataMapList, (int32_t)v11, v12, v13);
  v14 = (Il2CppObject *)sub_1BDBAC4(object_TypeInfo);
  System_Object___ctor(v14, 0LL);
  this->fields.lockCountObj = v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.lockCountObj, (int32_t)v14, v15, v16);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39166A0 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_4B4455A & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, v1);
    byte_4B4455A = 1;
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

  if ( (byte_4B4455B & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    byte_4B4455B = 1;
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

  if ( (byte_4B44559 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, v1);
    byte_4B44559 = 1;
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

  if ( (byte_4B44573 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_4B44573 = 1;
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
    sub_1BDBAD4(v5, method);
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
  __int64 v545; // x1
  __int64 v546; // x1
  __int64 v547; // x1
  __int64 v548; // x1
  DataMasterBase_array *v549; // x19
  ServantMaster_o *v550; // x20
  __int64 v551; // x0
  __int64 v552; // x1
  __int64 v553; // x2
  const MethodInfo *v554; // x3
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v556; // x20
  const MethodInfo *v557; // x3
  ServantCommentMaster_o *v558; // x20
  const MethodInfo *v559; // x3
  ServantProfileMaster_o *v560; // x20
  const MethodInfo *v561; // x3
  WarMaster_o *v562; // x20
  const MethodInfo *v563; // x3
  UserMaster_o *v564; // x20
  const MethodInfo *v565; // x3
  UserGameMaster_o *v566; // x20
  const MethodInfo *v567; // x3
  TblUserMaster_o *v568; // x20
  const MethodInfo *v569; // x3
  UserItemMaster_o *v570; // x20
  const MethodInfo *v571; // x3
  UserServantMaster_o *v572; // x20
  const MethodInfo *v573; // x3
  UserServantStorageMaster_o *v574; // x20
  const MethodInfo *v575; // x3
  UserAccessaryMaster_o *v576; // x20
  const MethodInfo *v577; // x3
  UserQuestMaster_o *v578; // x20
  const MethodInfo *v579; // x3
  BattleMaster_o *v580; // x20
  const MethodInfo *v581; // x3
  OtherUserGameMaster_o *v582; // x20
  const MethodInfo *v583; // x3
  TblFriendMaster_o *v584; // x20
  const MethodInfo *v585; // x3
  AreaMaster_o *v586; // x20
  const MethodInfo *v587; // x3
  ServantCardMaster_o *v588; // x20
  const MethodInfo *v589; // x3
  EventMaster_o *v590; // x20
  const MethodInfo *v591; // x3
  ItemMaster_o *v592; // x20
  const MethodInfo *v593; // x3
  QuestMaster_o *v594; // x20
  const MethodInfo *v595; // x3
  QuestAddMaster_o *v596; // x20
  const MethodInfo *v597; // x3
  QuestReleaseMaster_o *v598; // x20
  const MethodInfo *v599; // x3
  QuestDateRangeMaster_o *v600; // x20
  const MethodInfo *v601; // x3
  QuestPhaseMaster_o *v602; // x20
  const MethodInfo *v603; // x3
  QuestPhaseDetailMaster_o *v604; // x20
  const MethodInfo *v605; // x3
  QuestGroupMaster_o *v606; // x20
  const MethodInfo *v607; // x3
  QuestRandomGroupMaster_o *v608; // x20
  const MethodInfo *v609; // x3
  QuestConsumeItemMaster_o *v610; // x20
  const MethodInfo *v611; // x3
  QuestMessageMaster_o *v612; // x20
  const MethodInfo *v613; // x3
  UserQuestInfoMaster_o *v614; // x20
  const MethodInfo *v615; // x3
  UserQuestRecordMaster_o *v616; // x20
  const MethodInfo *v617; // x3
  ViewQuestInfoMaster_o *v618; // x20
  const MethodInfo *v619; // x3
  ViewEnemyMaster_o *v620; // x20
  const MethodInfo *v621; // x3
  ViewQuestEnemyInfoMaster_o *v622; // x20
  const MethodInfo *v623; // x3
  BlankEarthSpotMaster_o *v624; // x20
  const MethodInfo *v625; // x3
  BlankEarthSpotAddMaster_o *v626; // x20
  const MethodInfo *v627; // x3
  SpotMaster_o *v628; // x20
  const MethodInfo *v629; // x3
  SpotImageMaster_o *v630; // x20
  const MethodInfo *v631; // x3
  SpotRoadMaster_o *v632; // x20
  const MethodInfo *v633; // x3
  SpotPathMaster_o *v634; // x20
  const MethodInfo *v635; // x3
  SpotAddMaster_o *v636; // x20
  const MethodInfo *v637; // x3
  MapGimmickMaster_o *v638; // x20
  const MethodInfo *v639; // x3
  GiftMaster_o *v640; // x20
  const MethodInfo *v641; // x3
  GiftAddMaster_o *v642; // x20
  const MethodInfo *v643; // x3
  ShopMaster_o *v644; // x20
  const MethodInfo *v645; // x3
  StoneShopMaster_o *v646; // x20
  const MethodInfo *v647; // x3
  BankShopMaster_o *v648; // x20
  const MethodInfo *v649; // x3
  ShopScriptMaster_o *v650; // x20
  const MethodInfo *v651; // x3
  StageMaster_o *v652; // x20
  const MethodInfo *v653; // x3
  ServantGroupMaster_o *v654; // x20
  const MethodInfo *v655; // x3
  ServantLimitMaster_o *v656; // x20
  const MethodInfo *v657; // x3
  ServantLimitAddMaster_o *v658; // x20
  const MethodInfo *v659; // x3
  ServantSkillMaster_o *v660; // x20
  const MethodInfo *v661; // x3
  ServantPassiveSkillMaster_o *v662; // x20
  const MethodInfo *v663; // x3
  BgmMaster_o *v664; // x20
  const MethodInfo *v665; // x3
  ServantScriptMaster_o *v666; // x20
  const MethodInfo *v667; // x3
  NewsMaster_o *v668; // x20
  const MethodInfo *v669; // x3
  TelopMaster_o *v670; // x20
  const MethodInfo *v671; // x3
  UserExpMaster_o *v672; // x20
  const MethodInfo *v673; // x3
  TreasureDvcMaster_o *v674; // x20
  const MethodInfo *v675; // x3
  ServantTreasureDvcMaster_o *v676; // x20
  const MethodInfo *v677; // x3
  SkillMaster_o *v678; // x20
  const MethodInfo *v679; // x3
  SkillLvMaster_o *v680; // x20
  const MethodInfo *v681; // x3
  SkillDetailMaster_o *v682; // x20
  const MethodInfo *v683; // x3
  CommandSpellMaster_o *v684; // x20
  const MethodInfo *v685; // x3
  EquipMaster_o *v686; // x20
  const MethodInfo *v687; // x3
  EquipExpMaster_o *v688; // x20
  const MethodInfo *v689; // x3
  EquipSkillMaster_o *v690; // x20
  const MethodInfo *v691; // x3
  SubEquipMaster_o *v692; // x20
  const MethodInfo *v693; // x3
  AccessaryMaster_o *v694; // x20
  const MethodInfo *v695; // x3
  UserPresentBoxMaster_o *v696; // x20
  const MethodInfo *v697; // x3
  UserDeckMaster_o *v698; // x20
  const MethodInfo *v699; // x3
  UserSubEquipMaster_o *v700; // x20
  const MethodInfo *v701; // x3
  GachaMaster_o *v702; // x20
  const MethodInfo *v703; // x3
  GachaImageMaster_o *v704; // x20
  const MethodInfo *v705; // x3
  UserGachaMaster_o *v706; // x20
  const MethodInfo *v707; // x3
  UserEquipMaster_o *v708; // x20
  const MethodInfo *v709; // x3
  UserServantCollectionMaster_o *v710; // x20
  const MethodInfo *v711; // x3
  FriendshipMaster_o *v712; // x20
  const MethodInfo *v713; // x3
  GachaTicketMaster_o *v714; // x20
  const MethodInfo *v715; // x3
  UserFormationMaster_o *v716; // x20
  const MethodInfo *v717; // x3
  FunctionMaster_o *v718; // x20
  const MethodInfo *v719; // x3
  BuffMaster_o *v720; // x20
  const MethodInfo *v721; // x3
  GachaReleaseMaster_o *v722; // x20
  const MethodInfo *v723; // x3
  CombineQpMaster_o *v724; // x20
  const MethodInfo *v725; // x3
  CombineMaterialMaster_o *v726; // x20
  const MethodInfo *v727; // x3
  EventCombineMaster_o *v728; // x20
  const MethodInfo *v729; // x3
  ServantExpMaster_o *v730; // x20
  const MethodInfo *v731; // x3
  CombineSkillMaster_o *v732; // x20
  const MethodInfo *v733; // x3
  CombineTdMaster_o *v734; // x20
  const MethodInfo *v735; // x3
  EventQuestMaster_o *v736; // x20
  const MethodInfo *v737; // x3
  EventCampaignMaster_o *v738; // x20
  const MethodInfo *v739; // x3
  IllustratorMaster_o *v740; // x20
  const MethodInfo *v741; // x3
  CvMaster_o *v742; // x20
  const MethodInfo *v743; // x3
  TreasureDvcLvMaster_o *v744; // x20
  const MethodInfo *v745; // x3
  TreasureDvcDetailMaster_o *v746; // x20
  const MethodInfo *v747; // x3
  UserFollowerMaster_o *v748; // x20
  const MethodInfo *v749; // x3
  NpcFollowerMaster_o *v750; // x20
  const MethodInfo *v751; // x3
  NpcServantFollowerMaster_o *v752; // x20
  const MethodInfo *v753; // x3
  UserEventMaster_o *v754; // x20
  const MethodInfo *v755; // x3
  UserShopMaster_o *v756; // x20
  const MethodInfo *v757; // x3
  UserContinueMaster_o *v758; // x20
  const MethodInfo *v759; // x3
  ConstantMaster_o *v760; // x20
  const MethodInfo *v761; // x3
  ConstantLongMaster_o *v762; // x20
  const MethodInfo *v763; // x3
  ConstantStrMaster_o *v764; // x20
  const MethodInfo *v765; // x3
  AiMaster_o *v766; // x20
  const MethodInfo *v767; // x3
  AiActMaster_o *v768; // x20
  const MethodInfo *v769; // x3
  AttriRelationMaster_o *v770; // x20
  const MethodInfo *v771; // x3
  ClassRelationMaster_o *v772; // x20
  const MethodInfo *v773; // x3
  EffectMaster_o *v774; // x20
  const MethodInfo *v775; // x3
  EquipImageMaster_o *v776; // x20
  const MethodInfo *v777; // x3
  ServantVoiceMaster_o *v778; // x20
  const MethodInfo *v779; // x3
  CombineLimitMaster_o *v780; // x20
  const MethodInfo *v781; // x3
  CardMaster_o *v782; // x20
  const MethodInfo *v783; // x3
  CombineQpSvtEquipMaster_o *v784; // x20
  const MethodInfo *v785; // x3
  ServantRarityMaster_o *v786; // x20
  const MethodInfo *v787; // x3
  SetItemMaster_o *v788; // x20
  const MethodInfo *v789; // x3
  RecoverMaster_o *v790; // x20
  const MethodInfo *v791; // x3
  BannerMaster_o *v792; // x20
  const MethodInfo *v793; // x3
  ShopReleaseMaster_o *v794; // x20
  const MethodInfo *v795; // x3
  EventRewardMaster_o *v796; // x20
  const MethodInfo *v797; // x3
  EventDetailMaster_o *v798; // x20
  const MethodInfo *v799; // x3
  EventServantMaster_o *v800; // x20
  const MethodInfo *v801; // x3
  BoxGachaMaster_o *v802; // x20
  const MethodInfo *v803; // x3
  BoxGachaBaseMaster_o *v804; // x20
  const MethodInfo *v805; // x3
  BoxGachaTalkMaster_o *v806; // x20
  const MethodInfo *v807; // x3
  UserBoxGachaMaster_o *v808; // x20
  const MethodInfo *v809; // x3
  BoxGachaHistoryMaster_o *v810; // x20
  const MethodInfo *v811; // x3
  BattleBgMaster_o *v812; // x20
  const MethodInfo *v813; // x3
  TipsBattleMaster_o *v814; // x20
  const MethodInfo *v815; // x3
  UserLoginMaster_o *v816; // x20
  const MethodInfo *v817; // x3
  VoiceMaster_o *v818; // x20
  const MethodInfo *v819; // x3
  EventRewardExtraMaster_o *v820; // x20
  const MethodInfo *v821; // x3
  EventMissionMaster_o *v822; // x20
  const MethodInfo *v823; // x3
  EventMissionActionMaster_o *v824; // x20
  const MethodInfo *v825; // x3
  EventMissionActionAddMaster_o *v826; // x20
  const MethodInfo *v827; // x3
  EventMissionConditionMaster_o *v828; // x20
  const MethodInfo *v829; // x3
  EventMissionCondDetailMaster_o *v830; // x20
  const MethodInfo *v831; // x3
  EventMissionAddMaster_o *v832; // x20
  const MethodInfo *v833; // x3
  CompleteMissionMaster_o *v834; // x20
  const MethodInfo *v835; // x3
  EventRewardSetMaster_o *v836; // x20
  const MethodInfo *v837; // x3
  UserEventMissionMaster_o *v838; // x20
  const MethodInfo *v839; // x3
  UserEventMissionCondDetailMaster_o *v840; // x20
  const MethodInfo *v841; // x3
  BoxGachaBaseDetailMaster_o *v842; // x20
  const MethodInfo *v843; // x3
  UserServantLeaderMaster_o *v844; // x20
  const MethodInfo *v845; // x3
  ClosedMessageMaster_o *v846; // x20
  const MethodInfo *v847; // x3
  FunctionGroupMaster_o *v848; // x20
  const MethodInfo *v849; // x3
  EventRaidMaster_o *v850; // x20
  const MethodInfo *v851; // x3
  TotalEventRaidMaster_o *v852; // x20
  const MethodInfo *v853; // x3
  UserEventRaidMaster_o *v854; // x20
  const MethodInfo *v855; // x3
  EventPointMaster_o *v856; // x20
  const MethodInfo *v857; // x3
  EventPointGroupMaster_o *v858; // x20
  const MethodInfo *v859; // x3
  TotalEventPointMaster_o *v860; // x20
  const MethodInfo *v861; // x3
  UserEventPointMaster_o *v862; // x20
  const MethodInfo *v863; // x3
  EventPointUpperMaster_o *v864; // x20
  const MethodInfo *v865; // x3
  EventPointUpperReleaseMaster_o *v866; // x20
  const MethodInfo *v867; // x3
  EventRaceMaster_o *v868; // x20
  const MethodInfo *v869; // x3
  EventRaceResultMaster_o *v870; // x20
  const MethodInfo *v871; // x3
  QuestRacePointMaster_o *v872; // x20
  const MethodInfo *v873; // x3
  UserEventRaceMaster_o *v874; // x20
  const MethodInfo *v875; // x3
  EventScriptMaster_o *v876; // x20
  const MethodInfo *v877; // x3
  EventScriptReleaseMaster_o *v878; // x20
  const MethodInfo *v879; // x3
  UserPresentHistoryMaster_o *v880; // x20
  const MethodInfo *v881; // x3
  MstMissionMaster_o *v882; // x20
  const MethodInfo *v883; // x3
  ServantExceedMaster_o *v884; // x20
  const MethodInfo *v885; // x3
  PartialMaintenanceMaster_o *v886; // x20
  const MethodInfo *v887; // x3
  GuideMaster_o *v888; // x20
  const MethodInfo *v889; // x3
  MstMissionDisplayInfoMaster_o *v890; // x20
  const MethodInfo *v891; // x3
  GachaGroupMaster_o *v892; // x20
  const MethodInfo *v893; // x3
  QuestResetMaster_o *v894; // x20
  const MethodInfo *v895; // x3
  WarAddMaster_o *v896; // x20
  const MethodInfo *v897; // x3
  EventItemDisplayMaster_o *v898; // x20
  const MethodInfo *v899; // x3
  EventItemDisplayGroupMaster_o *v900; // x20
  const MethodInfo *v901; // x3
  EventItemDisplayReleaseMaster_o *v902; // x20
  const MethodInfo *v903; // x3
  EventTutorialMaster_o *v904; // x20
  const MethodInfo *v905; // x3
  EventTutorialCondMaster_o *v906; // x20
  const MethodInfo *v907; // x3
  VoiceReleaseMaster_o *v908; // x20
  const MethodInfo *v909; // x3
  EventSuperBossMaster_o *v910; // x20
  const MethodInfo *v911; // x3
  UserSuperBossMaster_o *v912; // x20
  const MethodInfo *v913; // x3
  QuestScriptMaster_o *v914; // x20
  const MethodInfo *v915; // x3
  QuestScriptReleaseMaster_o *v916; // x20
  const MethodInfo *v917; // x3
  MaterialFolderMaster_o *v918; // x20
  const MethodInfo *v919; // x3
  RestrictionMaster_o *v920; // x20
  const MethodInfo *v921; // x3
  QuestRestrictionMaster_o *v922; // x20
  const MethodInfo *v923; // x3
  ServantVoiceRelationMaster_o *v924; // x20
  const MethodInfo *v925; // x3
  ShopDetailMaster_o *v926; // x20
  const MethodInfo *v927; // x3
  ServantScriptAddMaster_o *v928; // x20
  const MethodInfo *v929; // x3
  CombineMaster_o *v930; // x20
  const MethodInfo *v931; // x3
  AiFieldMaster_o *v932; // x20
  const MethodInfo *v933; // x3
  ServantCommentAddMaster_o *v934; // x20
  const MethodInfo *v935; // x3
  EventFilterMaster_o *v936; // x20
  const MethodInfo *v937; // x3
  UserSupportDeckMaster_o *v938; // x20
  const MethodInfo *v939; // x3
  EventRewardSceneMaster_o *v940; // x20
  const MethodInfo *v941; // x3
  EventVoicePlayMaster_o *v942; // x20
  const MethodInfo *v943; // x3
  GachaSubMaster_o *v944; // x20
  const MethodInfo *v945; // x3
  GachaDetailMaster_o *v946; // x20
  const MethodInfo *v947; // x3
  GachaBaseCollateralMaster_o *v948; // x20
  const MethodInfo *v949; // x3
  GachaAdjustAddMaster_o *v950; // x20
  const MethodInfo *v951; // x3
  GachaBonusSelectMaster_o *v952; // x20
  const MethodInfo *v953; // x3
  GachaBonusSelectLineupMaster_o *v954; // x20
  const MethodInfo *v955; // x3
  ServantChangeMaster_o *v956; // x20
  const MethodInfo *v957; // x3
  VoiceCondMaster_o *v958; // x20
  const MethodInfo *v959; // x3
  BgmReleaseMaster_o *v960; // x20
  const MethodInfo *v961; // x3
  MyRoomAddMaster_o *v962; // x20
  const MethodInfo *v963; // x3
  ShopActionMaster_o *v964; // x20
  const MethodInfo *v965; // x3
  EventRewardSceneReleaseMaster_o *v966; // x20
  const MethodInfo *v967; // x3
  QuestBehaviorMaster_o *v968; // x20
  const MethodInfo *v969; // x3
  MapMaster_o *v970; // x20
  const MethodInfo *v971; // x3
  MapCondMaster_o *v972; // x20
  const MethodInfo *v973; // x3
  MapButtonMaster_o *v974; // x20
  const MethodInfo *v975; // x3
  BannerAddMaster_o *v976; // x20
  const MethodInfo *v977; // x3
  EventAddMaster_o *v978; // x20
  const MethodInfo *v979; // x3
  TotalLoginMaster_o *v980; // x20
  const MethodInfo *v981; // x3
  ServantFilterMaster_o *v982; // x20
  const MethodInfo *v983; // x3
  CombineCostumeMaster_o *v984; // x20
  const MethodInfo *v985; // x3
  ServantCostumeMaster_o *v986; // x20
  const MethodInfo *v987; // x3
  ServantCostumeReleaseMaster_o *v988; // x20
  const MethodInfo *v989; // x3
  StaffPhotoMaster_o *v990; // x20
  const MethodInfo *v991; // x3
  StaffPhotoCostumeMaster_o *v992; // x20
  const MethodInfo *v993; // x3
  UserFriendRequestHistoryMaster_o *v994; // x20
  const MethodInfo *v995; // x3
  UserBlacklistMaster_o *v996; // x20
  const MethodInfo *v997; // x3
  ItemSelectMaster_o *v998; // x20
  const MethodInfo *v999; // x3
  TotalEventRaceMaster_o *v1000; // x20
  const MethodInfo *v1001; // x3
  EventPointGroupAddMaster_o *v1002; // x20
  const MethodInfo *v1003; // x3
  VoicePlayGroupMaster_o *v1004; // x20
  const MethodInfo *v1005; // x3
  VoicePlayCondMaster_o *v1006; // x20
  const MethodInfo *v1007; // x3
  GachaStoryAdjustMaster_o *v1008; // x20
  const MethodInfo *v1009; // x3
  ServantFlagMaster_o *v1010; // x20
  const MethodInfo *v1011; // x3
  ServantFlagReleaseMaster_o *v1012; // x20
  const MethodInfo *v1013; // x3
  EventLocationCampaignMaster_o *v1014; // x20
  const MethodInfo *v1015; // x3
  CampaignInfoMaster_o *v1016; // x20
  const MethodInfo *v1017; // x3
  DialogMessageMaster_o *v1018; // x20
  const MethodInfo *v1019; // x3
  ServantIndividualityMaster_o *v1020; // x20
  const MethodInfo *v1021; // x3
  BoardMessageMaster_o *v1022; // x20
  const MethodInfo *v1023; // x3
  BoardMessageReleaseMaster_o *v1024; // x20
  const MethodInfo *v1025; // x3
  EventServantFatigueMaster_o *v1026; // x20
  const MethodInfo *v1027; // x3
  UserEventDeckMaster_o *v1028; // x20
  const MethodInfo *v1029; // x3
  EventTowerMaster_o *v1030; // x20
  const MethodInfo *v1031; // x3
  EventTowerRewardMaster_o *v1032; // x20
  const MethodInfo *v1033; // x3
  EventBulletinBoardMaster_o *v1034; // x20
  const MethodInfo *v1035; // x3
  EventBulletinBoardReleaseMaster_o *v1036; // x20
  const MethodInfo *v1037; // x3
  EventFactoryMaster_o *v1038; // x20
  const MethodInfo *v1039; // x3
  ShopGroupMaster_o *v1040; // x20
  const MethodInfo *v1041; // x3
  AuraEffectMaster_o *v1042; // x20
  const MethodInfo *v1043; // x3
  AuraEffectPosOverwriteMaster_o *v1044; // x20
  const MethodInfo *v1045; // x3
  UserEventMissionFixMaster_o *v1046; // x20
  const MethodInfo *v1047; // x3
  NotEndEventMissionFixMaster_o *v1048; // x20
  const MethodInfo *v1049; // x3
  EnemyMstMaster_o *v1050; // x20
  const MethodInfo *v1051; // x3
  EnemyMstBattleMaster_o *v1052; // x20
  const MethodInfo *v1053; // x3
  ServantSkillReleaseMaster_o *v1054; // x20
  const MethodInfo *v1055; // x3
  ServantPassiveSkillReleaseMaster_o *v1056; // x20
  const MethodInfo *v1057; // x3
  ServantTreasureDeviceReleaseMaster_o *v1058; // x20
  const MethodInfo *v1059; // x3
  MapGimmickReleaseMaster_o *v1060; // x20
  const MethodInfo *v1061; // x3
  CommandCodeMaster_o *v1062; // x20
  const MethodInfo *v1063; // x3
  ServantCommandCodeUnlockMaster_o *v1064; // x20
  const MethodInfo *v1065; // x3
  UserCommandCodeMaster_o *v1066; // x20
  const MethodInfo *v1067; // x3
  UserCommandCodeCollectionMaster_o *v1068; // x20
  const MethodInfo *v1069; // x3
  UserServantCommandCodeMaster_o *v1070; // x20
  const MethodInfo *v1071; // x3
  UserServantCommandCardMaster_o *v1072; // x20
  const MethodInfo *v1073; // x3
  CommandCardRankParamMaster_o *v1074; // x20
  const MethodInfo *v1075; // x3
  CommandCodeSkillMaster_o *v1076; // x20
  const MethodInfo *v1077; // x3
  CommandCodeSkillReleaseMaster_o *v1078; // x20
  const MethodInfo *v1079; // x3
  CommandCodeCommentMaster_o *v1080; // x20
  const MethodInfo *v1081; // x3
  EventStatusMaster_o *v1082; // x20
  const MethodInfo *v1083; // x3
  EventStatusQuestMaster_o *v1084; // x20
  const MethodInfo *v1085; // x3
  CommonRestrictionMaster_o *v1086; // x20
  const MethodInfo *v1087; // x3
  EventPointBuffMaster_o *v1088; // x20
  const MethodInfo *v1089; // x3
  UserFollowMaster_o *v1090; // x20
  const MethodInfo *v1091; // x3
  EventRewardGuideReleaseMaster_o *v1092; // x20
  const MethodInfo *v1093; // x3
  NpcServantEquipMaster_o *v1094; // x20
  const MethodInfo *v1095; // x3
  EventCampaignReleaseMaster_o *v1096; // x20
  const MethodInfo *v1097; // x3
  ServantMaterialFolderMaster_o *v1098; // x20
  const MethodInfo *v1099; // x3
  EventEquipSkillReleaseMaster_o *v1100; // x20
  const MethodInfo *v1101; // x3
  EventPointActivityMaster_o *v1102; // x20
  const MethodInfo *v1103; // x3
  FunctionCategoryMaster_o *v1104; // x20
  const MethodInfo *v1105; // x3
  QuestPickupMaster_o *v1106; // x20
  const MethodInfo *v1107; // x3
  EventUiMaster_o *v1108; // x20
  const MethodInfo *v1109; // x3
  EventUiReleaseMaster_o *v1110; // x20
  const MethodInfo *v1111; // x3
  EventUiValueMaster_o *v1112; // x20
  const MethodInfo *v1113; // x3
  EventConquestRewardMaster_o *v1114; // x20
  const MethodInfo *v1115; // x3
  NpcFollowerReleaseMaster_o *v1116; // x20
  const MethodInfo *v1117; // x3
  EventBonusFilterMaster_o *v1118; // x20
  const MethodInfo *v1119; // x3
  EventBonusFilterGroupInfoMaster_o *v1120; // x20
  const MethodInfo *v1121; // x3
  EventBonusFilterGroupMemberMaster_o *v1122; // x20
  const MethodInfo *v1123; // x3
  UserGachaExtraCountMaster_o *v1124; // x20
  const MethodInfo *v1125; // x3
  PrivilegeMaster_o *v1126; // x20
  const MethodInfo *v1127; // x3
  UserPrivilegeMaster_o *v1128; // x20
  const MethodInfo *v1129; // x3
  UserQuestRouteMaster_o *v1130; // x20
  const MethodInfo *v1131; // x3
  EventBossStatusUiMaster_o *v1132; // x20
  const MethodInfo *v1133; // x3
  CommonReleaseMaster_o *v1134; // x20
  const MethodInfo *v1135; // x3
  QuestSpotReleaseMaster_o *v1136; // x20
  const MethodInfo *v1137; // x3
  VoiceMaterialCondMaster_o *v1138; // x20
  const MethodInfo *v1139; // x3
  ClassRelationOverwriteMaster_o *v1140; // x20
  const MethodInfo *v1141; // x3
  EventGroupMaster_o *v1142; // x20
  const MethodInfo *v1143; // x3
  TotalBoxGachaMaster_o *v1144; // x20
  const MethodInfo *v1145; // x3
  ServantTreasureDeviceDamageMaster_o *v1146; // x20
  const MethodInfo *v1147; // x3
  UserEventServantFatigueMaster_o *v1148; // x20
  const MethodInfo *v1149; // x3
  EventRewardBgMaster_o *v1150; // x20
  const MethodInfo *v1151; // x3
  EventFatigueRecoveryMaster_o *v1152; // x20
  const MethodInfo *v1153; // x3
  EventBoostItemUsedMaster_o *v1154; // x20
  const MethodInfo *v1155; // x3
  StatusEffectPosOverwriteMaster_o *v1156; // x20
  const MethodInfo *v1157; // x3
  QuestPhaseDetailAddMaster_o *v1158; // x20
  const MethodInfo *v1159; // x3
  VoiceClosedMessageMaster_o *v1160; // x20
  const MethodInfo *v1161; // x3
  ReprintStageMaster_o *v1162; // x20
  const MethodInfo *v1163; // x3
  UserCombineExpMaster_o *v1164; // x20
  const MethodInfo *v1165; // x3
  EventBoardGameCellMaster_o *v1166; // x20
  const MethodInfo *v1167; // x3
  EventBoardGameTokenMaster_o *v1168; // x20
  const MethodInfo *v1169; // x3
  EventBoardGameTokenRewardMaster_o *v1170; // x20
  const MethodInfo *v1171; // x3
  UserEventBoardGameTokenMaster_o *v1172; // x20
  const MethodInfo *v1173; // x3
  ServantAnimationOverwriteMaster_o *v1174; // x20
  const MethodInfo *v1175; // x3
  OpeningMovieMaster_o *v1176; // x20
  const MethodInfo *v1177; // x3
  ServantLimitSpoilerProtectionMaster_o *v1178; // x20
  const MethodInfo *v1179; // x3
  PickupUserFollowerMaster_o *v1180; // x20
  const MethodInfo *v1181; // x3
  ServantCollectionMaster_o *v1182; // x20
  const MethodInfo *v1183; // x3
  GachaBehaviorMaster_o *v1184; // x20
  const MethodInfo *v1185; // x3
  EventQuestCooltimeMaster_o *v1186; // x20
  const MethodInfo *v1187; // x3
  UserEventQuestCooltimeMaster_o *v1188; // x20
  const MethodInfo *v1189; // x3
  BoostMaster_o *v1190; // x20
  const MethodInfo *v1191; // x3
  WarBoardMaster_o *v1192; // x20
  const MethodInfo *v1193; // x3
  WarBoardSquareMaster_o *v1194; // x20
  const MethodInfo *v1195; // x3
  WarBoardRoadMaster_o *v1196; // x20
  const MethodInfo *v1197; // x3
  WarBoardStageMaster_o *v1198; // x20
  const MethodInfo *v1199; // x3
  WarBoardActionPointMaster_o *v1200; // x20
  const MethodInfo *v1201; // x3
  WarBoardActionTrendMaster_o *v1202; // x20
  const MethodInfo *v1203; // x3
  WarBoardTacticalTrendMaster_o *v1204; // x20
  const MethodInfo *v1205; // x3
  WarBoardStageLayoutMaster_o *v1206; // x20
  const MethodInfo *v1207; // x3
  WarBoardStageNpcMaster_o *v1208; // x20
  const MethodInfo *v1209; // x3
  WarBoardStageWallMaster_o *v1210; // x20
  const MethodInfo *v1211; // x3
  WarBoardAIMaster_o *v1212; // x20
  const MethodInfo *v1213; // x3
  WarBoardRatingBaseMaster_o *v1214; // x20
  const MethodInfo *v1215; // x3
  WarBoardRatingOffsetMaster_o *v1216; // x20
  const MethodInfo *v1217; // x3
  WarBoardItemMaster_o *v1218; // x20
  const MethodInfo *v1219; // x3
  WarBoardTreasureMaster_o *v1220; // x20
  const MethodInfo *v1221; // x3
  WarBoardQuestMaster_o *v1222; // x20
  const MethodInfo *v1223; // x3
  WarBoardDataMaster_o *v1224; // x20
  const MethodInfo *v1225; // x3
  WarBoardIndividualityClassMaster_o *v1226; // x20
  const MethodInfo *v1227; // x3
  WarBoardActionTrendConditionMaster_o *v1228; // x20
  const MethodInfo *v1229; // x3
  WarBoardActionPointClassMaster_o *v1230; // x20
  const MethodInfo *v1231; // x3
  EventPanelMapMaster_o *v1232; // x20
  const MethodInfo *v1233; // x3
  EventPanelMapDetailMaster_o *v1234; // x20
  const MethodInfo *v1235; // x3
  EventPanelSpotMaster_o *v1236; // x20
  const MethodInfo *v1237; // x3
  EventPanelScanMaster_o *v1238; // x20
  const MethodInfo *v1239; // x3
  CommonConsumeMaster_o *v1240; // x20
  const MethodInfo *v1241; // x3
  UserEventMapMaster_o *v1242; // x20
  const MethodInfo *v1243; // x3
  UserEventSpotMaster_o *v1244; // x20
  const MethodInfo *v1245; // x3
  WarGroupMaster_o *v1246; // x20
  const MethodInfo *v1247; // x3
  ServantLimitImageMaster_o *v1248; // x20
  const MethodInfo *v1249; // x3
  FriendshipQuestDialogInfoMaster_o *v1250; // x20
  const MethodInfo *v1251; // x3
  QuestRestrictionInfoMaster_o *v1252; // x20
  const MethodInfo *v1253; // x3
  AssistMaster_o *v1254; // x20
  const MethodInfo *v1255; // x3
  WarBoardEffectMaster_o *v1256; // x20
  const MethodInfo *v1257; // x3
  WarBoardOnboardSkillMaster_o *v1258; // x20
  const MethodInfo *v1259; // x3
  BeforeBirthDayMaster_o *v1260; // x20
  const MethodInfo *v1261; // x3
  LoginQuestMaster_o *v1262; // x20
  const MethodInfo *v1263; // x3
  EventCombineCostumeMaster_o *v1264; // x20
  const MethodInfo *v1265; // x3
  WarBoardStagePieceDetailMaster_o *v1266; // x20
  const MethodInfo *v1267; // x3
  ServantTreasureDeviceAddMaster_o *v1268; // x20
  const MethodInfo *v1269; // x3
  SkillAddMaster_o *v1270; // x20
  const MethodInfo *v1271; // x3
  ServantLvDetailMaster_o *v1272; // x20
  const MethodInfo *v1273; // x3
  GachaAppendMaster_o *v1274; // x20
  const MethodInfo *v1275; // x3
  UserGachaDrawLogMaster_o *v1276; // x20
  const MethodInfo *v1277; // x3
  ServantAppendPassiveSkillMaster_o *v1278; // x20
  const MethodInfo *v1279; // x3
  UserServantAppendPassiveSkillMaster_o *v1280; // x20
  const MethodInfo *v1281; // x3
  UserServantAppendPassiveSkillLvMaster_o *v1282; // x20
  const MethodInfo *v1283; // x3
  SvtAppendPassiveSkillUnlockMaster_o *v1284; // x20
  const MethodInfo *v1285; // x3
  CombineAppendPassiveSkillMaster_o *v1286; // x20
  const MethodInfo *v1287; // x3
  SvtCoinMaster_o *v1288; // x20
  const MethodInfo *v1289; // x3
  UserSvtCoinMaster_o *v1290; // x20
  const MethodInfo *v1291; // x3
  ServantAddMaster_o *v1292; // x20
  const MethodInfo *v1293; // x3
  TreasureBoxMaster_o *v1294; // x20
  const MethodInfo *v1295; // x3
  TreasureBoxGiftMaster_o *v1296; // x20
  const MethodInfo *v1297; // x3
  TreasureBoxTalkMaster_o *v1298; // x20
  const MethodInfo *v1299; // x3
  UserEventExpeditionMaster_o *v1300; // x20
  const MethodInfo *v1301; // x3
  EventExpeditionMaster_o *v1302; // x20
  const MethodInfo *v1303; // x3
  EventExpeditionPieceMaster_o *v1304; // x20
  const MethodInfo *v1305; // x3
  EventRecipeMaster_o *v1306; // x20
  const MethodInfo *v1307; // x3
  EventRecipeGiftMaster_o *v1308; // x20
  const MethodInfo *v1309; // x3
  UserEventFortificationMaster_o *v1310; // x20
  const MethodInfo *v1311; // x3
  EventFortificationMaster_o *v1312; // x20
  const MethodInfo *v1313; // x3
  EventFortificationDetailMaster_o *v1314; // x20
  const MethodInfo *v1315; // x3
  EventFortificationSvtMaster_o *v1316; // x20
  const MethodInfo *v1317; // x3
  UserServantVoicePlayedMaster_o *v1318; // x20
  const MethodInfo *v1319; // x3
  UpdateProfileDialogInfoMaster_o *v1320; // x20
  const MethodInfo *v1321; // x3
  SvtMaterialTdMaster_o *v1322; // x20
  const MethodInfo *v1323; // x3
  BattleMasterImageMaster_o *v1324; // x20
  const MethodInfo *v1325; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v1326; // x20
  const MethodInfo *v1327; // x3
  UserEventRandomMissionMaster_o *v1328; // x20
  const MethodInfo *v1329; // x3
  EventProgressValueMaster_o *v1330; // x20
  const MethodInfo *v1331; // x3
  SvtMultiPortraitMaster_o *v1332; // x20
  const MethodInfo *v1333; // x3
  EventRandomMissionMaster_o *v1334; // x20
  const MethodInfo *v1335; // x3
  UserGachaHistoryMaster_o *v1336; // x20
  const MethodInfo *v1337; // x3
  UserCoinRoomMaster_o *v1338; // x20
  const MethodInfo *v1339; // x3
  EventBuddyPointMaster_o *v1340; // x20
  const MethodInfo *v1341; // x3
  EventServantPointRankMaster_o *v1342; // x20
  const MethodInfo *v1343; // x3
  UserEventServantPointMaster_o *v1344; // x20
  const MethodInfo *v1345; // x3
  FieldMotionMaster_o *v1346; // x20
  const MethodInfo *v1347; // x3
  UserDeleteReservationMaster_o *v1348; // x20
  const MethodInfo *v1349; // x3
  ServantScriptMultipleMaster_o *v1350; // x20
  const MethodInfo *v1351; // x3
  EquipAddMaster_o *v1352; // x20
  const MethodInfo *v1353; // x3
  QuestReleaseOverwriteMaster_o *v1354; // x20
  const MethodInfo *v1355; // x3
  UserEventAlloutBattleMaster_o *v1356; // x20
  const MethodInfo *v1357; // x3
  QuestScriptMaterialNextMaster_o *v1358; // x20
  const MethodInfo *v1359; // x3
  EventDiggingMaster_o *v1360; // x20
  const MethodInfo *v1361; // x3
  EventDiggingBlockMaster_o *v1362; // x20
  const MethodInfo *v1363; // x3
  EventDiggingRewardMaster_o *v1364; // x20
  const MethodInfo *v1365; // x3
  UserEventDiggingMaster_o *v1366; // x20
  const MethodInfo *v1367; // x3
  BattleMessageMaster_o *v1368; // x20
  const MethodInfo *v1369; // x3
  BattleMessageGroupMaster_o *v1370; // x20
  const MethodInfo *v1371; // x3
  UserNpcSvtRecordMaster_o *v1372; // x20
  const MethodInfo *v1373; // x3
  BuffTypeDetailMaster_o *v1374; // x20
  const MethodInfo *v1375; // x3
  WarBoardMessageMaster_o *v1376; // x20
  const MethodInfo *v1377; // x3
  WarBoardPartySkillMaster_o *v1378; // x20
  const MethodInfo *v1379; // x3
  WarBoardMessageScriptMaster_o *v1380; // x20
  const MethodInfo *v1381; // x3
  WarQuestSelectionMaster_o *v1382; // x20
  const MethodInfo *v1383; // x3
  WarBoardStageDetailMaster_o *v1384; // x20
  const MethodInfo *v1385; // x3
  QuestScriptMaterialOverwriteMaster_o *v1386; // x20
  const MethodInfo *v1387; // x3
  QuestScriptBranchMaterialMaster_o *v1388; // x20
  const MethodInfo *v1389; // x3
  AdCheckPointMaster_o *v1390; // x20
  const MethodInfo *v1391; // x3
  GiftDetailMaster_o *v1392; // x20
  const MethodInfo *v1393; // x3
  CombineLimitGiftMaster_o *v1394; // x20
  const MethodInfo *v1395; // x3
  EventCooltimeRewardMaster_o *v1396; // x20
  const MethodInfo *v1397; // x3
  UserEventCooltimeRewardMaster_o *v1398; // x20
  const MethodInfo *v1399; // x3
  ClassBoardBaseMaster_o *v1400; // x20
  const MethodInfo *v1401; // x3
  ClassBoardLockMaster_o *v1402; // x20
  const MethodInfo *v1403; // x3
  ClassBoardSquareMaster_o *v1404; // x20
  const MethodInfo *v1405; // x3
  ClassBoardLineMaster_o *v1406; // x20
  const MethodInfo *v1407; // x3
  UserClassBoardSquareMaster_o *v1408; // x20
  const MethodInfo *v1409; // x3
  ServantCardAddMaster_o *v1410; // x20
  const MethodInfo *v1411; // x3
  MapLayerMaster_o *v1412; // x20
  const MethodInfo *v1413; // x3
  SpotLayerMaster_o *v1414; // x20
  const MethodInfo *v1415; // x3
  MapGimmickLayerMaster_o *v1416; // x20
  const MethodInfo *v1417; // x3
  EventDataLostBattleMaster_o *v1418; // x20
  const MethodInfo *v1419; // x3
  EventDataLostBattleResetMaster_o *v1420; // x20
  const MethodInfo *v1421; // x3
  UserEventDataLostMaster_o *v1422; // x20
  const MethodInfo *v1423; // x3
  QuestHintMaster_o *v1424; // x20
  const MethodInfo *v1425; // x3
  FuncTypeDetailMaster_o *v1426; // x20
  const MethodInfo *v1427; // x3
  BuffConvertMaster_o *v1428; // x20
  const MethodInfo *v1429; // x3
  SkillGroupMaster_o *v1430; // x20
  const MethodInfo *v1431; // x3
  SkillGroupOverwriteMaster_o *v1432; // x20
  const MethodInfo *v1433; // x3
  SkillIndividualityMaster_o *v1434; // x20
  const MethodInfo *v1435; // x3
  RestrictionBaseMaster_o *v1436; // x20
  const MethodInfo *v1437; // x3
  RestrictionSlotMaster_o *v1438; // x20
  const MethodInfo *v1439; // x3
  RestrictionSlotDetailMaster_o *v1440; // x20
  const MethodInfo *v1441; // x3
  RestrictionMessageMaster_o *v1442; // x20
  const MethodInfo *v1443; // x3
  RestrictionWholeMaster_o *v1444; // x20
  const MethodInfo *v1445; // x3
  FuncDispMaster_o *v1446; // x20
  const MethodInfo *v1447; // x3
  ClassBoardCommandSpellMaster_o *v1448; // x20
  const MethodInfo *v1449; // x3
  ClassBoardClassMaster_o *v1450; // x20
  const MethodInfo *v1451; // x3
  EventCommandAssistMaster_o *v1452; // x20
  const MethodInfo *v1453; // x3
  EventMissionGroupMaster_o *v1454; // x20
  const MethodInfo *v1455; // x3
  CombineLimitReleaseMaster_o *v1456; // x20
  const MethodInfo *v1457; // x3
  HeelPortraitMaster_o *v1458; // x20
  const MethodInfo *v1459; // x3
  UserHeelPortraitMaster_o *v1460; // x20
  const MethodInfo *v1461; // x3
  TreasureDeviceSequenceWeightMaster_o *v1462; // x20
  const MethodInfo *v1463; // x3
  NpcServantFollowerIndividualityMaster_o *v1464; // x20
  const MethodInfo *v1465; // x3
  GachaExtraGiftMaster_o *v1466; // x20
  const MethodInfo *v1467; // x3
  EventMuralMaster_o *v1468; // x20
  const MethodInfo *v1469; // x3
  ViewWaveEnemyMaster_o *v1470; // x20
  const MethodInfo *v1471; // x3
  BlankEarthSpotNavimenuMaster_o *v1472; // x20
  const MethodInfo *v1473; // x3
  BlankEarthGimmickMaster_o *v1474; // x20
  const MethodInfo *v1475; // x3
  TerminalOverwriteMaster_o *v1476; // x20
  const MethodInfo *v1477; // x3
  UserExchangeSvtMaster_o *v1478; // x20
  const MethodInfo *v1479; // x3
  WarBoardCommonReleaseMaster_o *v1480; // x20
  const MethodInfo *v1481; // x3
  WarBoardEventMaster_o *v1482; // x20
  const MethodInfo *v1483; // x3
  WarBoardEventScriptMaster_o *v1484; // x20
  const MethodInfo *v1485; // x3
  WarBoardStageBossMaster_o *v1486; // x20
  const MethodInfo *v1487; // x3
  WarBoardSquareIndexGroupMaster_o *v1488; // x20
  const MethodInfo *v1489; // x3
  WarBoardActionTrendGroupMaster_o *v1490; // x20
  const MethodInfo *v1491; // x3
  WarBoardRatingOffsetGroupMaster_o *v1492; // x20
  const MethodInfo *v1493; // x3
  WarBoardReinforcementsMaster_o *v1494; // x20
  const MethodInfo *v1495; // x3
  WarBoardStageReinforcementsMaster_o *v1496; // x20
  const MethodInfo *v1497; // x3
  WarBoardFutureActionTrendMaster_o *v1498; // x20
  const MethodInfo *v1499; // x3
  ServantProfilePushMaster_o *v1500; // x20
  const MethodInfo *v1501; // x3
  MapGimmickPathMaster_o *v1502; // x20
  const MethodInfo *v1503; // x3
  MapGimmickPathReleaseMaster_o *v1504; // x20
  const MethodInfo *v1505; // x3
  ServantOverwriteMaster_o *v1506; // x20
  const MethodInfo *v1507; // x3
  IndividualityPolicyMaster_o *v1508; // x20
  const MethodInfo *v1509; // x3
  IndividualityPersonalityMaster_o *v1510; // x20
  const MethodInfo *v1511; // x3
  AttriMaster_o *v1512; // x20
  const MethodInfo *v1513; // x3
  ServantVoicePatternMaster_o *v1514; // x20
  const MethodInfo *v1515; // x3
  UserGameCommonMaster_o *v1516; // x20
  const MethodInfo *v1517; // x3
  ServantPhotoMaster_o *v1518; // x20
  const MethodInfo *v1519; // x3
  MasterPhotoMaster_o *v1520; // x20
  const MethodInfo *v1521; // x3
  PhotoFrameMaster_o *v1522; // x20
  const MethodInfo *v1523; // x3
  WarMessageMaster_o *v1524; // x20
  const MethodInfo *v1525; // x3
  QuestAutoOrganizationAdjustMaster_o *v1526; // x20
  const MethodInfo *v1527; // x3
  ExcludeMotionMaster_o *v1528; // x20
  const MethodInfo *v1529; // x3
  UserInterruptionQuestMaster_o *v1530; // x20
  const MethodInfo *v1531; // x3
  ServantTransformMaster_o *v1532; // x20
  const MethodInfo *v1533; // x3
  MapUpdateScheduleMaster_o *v1534; // x20
  const MethodInfo *v1535; // x3
  QuestPhasePresentMaster_o *v1536; // x20
  const MethodInfo *v1537; // x3
  UserAccountLinkageMaster_o *v1538; // x20
  const MethodInfo *v1539; // x3
  MissionNaviTransitionMaster_o *v1540; // x20
  const MethodInfo *v1541; // x3
  MissionNaviQuestMaster_o *v1542; // x20
  const MethodInfo *v1543; // x3
  EventTradeGoodsMaster_o *v1544; // x20
  const MethodInfo *v1545; // x3
  EventTradeStoreMaster_o *v1546; // x20
  const MethodInfo *v1547; // x3
  EventTradePickupMaster_o *v1548; // x20
  const MethodInfo *v1549; // x3
  UserEventTradeMaster_o *v1550; // x20
  const MethodInfo *v1551; // x3
  PaymentHistoryMaster_o *v1552; // x20
  const MethodInfo *v1553; // x3
  UserExternalPaymentStoneMaster_o *v1554; // x20
  const MethodInfo *v1555; // x3
  QuestPhaseIndividualityMaster_o *v1556; // x20
  const MethodInfo *v1557; // x3
  ViewGachaFeaturedServantMaster_o *v1558; // x20
  const MethodInfo *v1559; // x3
  UserGachaPickupCollateralMaster_o *v1560; // x20
  const MethodInfo *v1561; // x3
  GachaPickupCollateralMaster_o *v1562; // x20
  const MethodInfo *v1563; // x3
  GachaPickupCollateralGroupMaster_o *v1564; // x20
  const MethodInfo *v1565; // x3
  BattlePointMaster_o *v1566; // x20
  const MethodInfo *v1567; // x3
  BattlePointPhaseMaster_o *v1568; // x20
  const MethodInfo *v1569; // x3
  ServantBattlePointMaster_o *v1570; // x20
  const MethodInfo *v1571; // x3
  EffectMovieMaster_o *v1572; // x20
  const MethodInfo *v1573; // x3
  PaymentLimitMaster_o *v1574; // x20
  const MethodInfo *v1575; // x3
  UserPaymentLimitMaster_o *v1576; // x20
  const MethodInfo *v1577; // x3
  RoadmapMaster_o *v1578; // x20
  const MethodInfo *v1579; // x3
  UserRecommendSupportMaster_o *v1580; // x20
  const MethodInfo *v1581; // x3
  RecommendSupportQuestMaster_o *v1582; // x20
  const MethodInfo *v1583; // x3
  RecommendAdviceMessageMaster_o *v1584; // x20
  const MethodInfo *v1585; // x3
  UserRecommendFollowerMaster_o *v1586; // x20
  const MethodInfo *v1587; // x3
  ItemDropEfficiencyMaster_o *v1588; // x20
  const MethodInfo *v1589; // x3
  BlankEarthGimmickAddMaster_o *v1590; // x20
  const MethodInfo *v1591; // x3
  WarReleaseMaster_o *v1592; // x20
  const MethodInfo *v1593; // x3
  SelectBonusBaseMaster_o *v1594; // x20
  const MethodInfo *v1595; // x3
  SelectBonusMaster_o *v1596; // x20
  const MethodInfo *v1597; // x3
  MyroomServantSpecialImageMaster_o *v1598; // x20
  const MethodInfo *v1599; // x3
  ShopResetMaster_o *v1600; // x20
  const MethodInfo *v1601; // x3
  NpcServantDisplayTypeDetailMaster_o *v1602; // x20
  const MethodInfo *v1603; // x3
  FriendshipServantMaster_o *v1604; // x20
  const MethodInfo *v1605; // x3
  ExchangeSvtCoinGivenNumMaster_o *v1606; // x20
  const MethodInfo *v1607; // x3
  ChaldeaGatePickupMaster_o *v1608; // x20
  const MethodInfo *v1609; // x3
  WarGroupIgnoreMaster_o *v1610; // x20
  const MethodInfo *v1611; // x3
  ImagePartsGroupMaster_o *v1612; // x20
  const MethodInfo *v1613; // x3
  UserImagePartsGroupMaster_o *v1614; // x20
  const MethodInfo *v1615; // x3
  MissionItemDisplayMaster_o *v1616; // x20
  const MethodInfo *v1617; // x3
  QuestUseItemGroupMaster_o *v1618; // x20
  const MethodInfo *v1619; // x3
  QuestUseItemPickupMaster_o *v1620; // x20
  const MethodInfo *v1621; // x3
  UserEventItemLinkSvtMaster_o *v1622; // x20
  const MethodInfo *v1623; // x3
  QuestHintOverwriteMaster_o *v1624; // x20
  const MethodInfo *v1625; // x3
  ReachedWaveInfoMaster_o *v1626; // x20
  const MethodInfo *v1627; // x3
  GalleryMaster_o *v1628; // x20
  const MethodInfo *v1629; // x3
  GalleryResourceMaster_o *v1630; // x20
  const MethodInfo *v1631; // x3
  ServantSkillAddMaster_o *v1632; // x20
  const MethodInfo *v1633; // x3
  GalleryFolderReleaseMaster_o *v1634; // x20
  const MethodInfo *v1635; // x3
  UserSvtFirstGetTimeMaster_o *v1636; // x20
  const MethodInfo *v1637; // x3
  QuestExtensionMaster_o *v1638; // x20
  const MethodInfo *v1639; // x3
  UserServantGrandMaster_o *v1640; // x20
  const MethodInfo *v1641; // x3
  GrandGraphMaster_o *v1642; // x20
  const MethodInfo *v1643; // x3
  GrandGraphDetailMaster_o *v1644; // x20
  const MethodInfo *v1645; // x3
  UserClassStatisticsMaster_o *v1646; // x20
  const MethodInfo *v1647; // x3
  __int64 v1649; // x0

  if ( (byte_4B4457B & 1) == 0 )
  {
    sub_1BDB878(&AccessaryMaster_TypeInfo, v1);
    sub_1BDB878(&AdCheckPointMaster_TypeInfo, v2);
    sub_1BDB878(&AiActMaster_TypeInfo, v3);
    sub_1BDB878(&AiFieldMaster_TypeInfo, v4);
    sub_1BDB878(&AiMaster_TypeInfo, v5);
    sub_1BDB878(&AreaMaster_TypeInfo, v6);
    sub_1BDB878(&AssistMaster_TypeInfo, v7);
    sub_1BDB878(&AttriMaster_TypeInfo, v8);
    sub_1BDB878(&AttriRelationMaster_TypeInfo, v9);
    sub_1BDB878(&AuraEffectMaster_TypeInfo, v10);
    sub_1BDB878(&AuraEffectPosOverwriteMaster_TypeInfo, v11);
    sub_1BDB878(&BankShopMaster_TypeInfo, v12);
    sub_1BDB878(&BannerAddMaster_TypeInfo, v13);
    sub_1BDB878(&BannerMaster_TypeInfo, v14);
    sub_1BDB878(&BattleBgMaster_TypeInfo, v15);
    sub_1BDB878(&BattleMasterImageMaster_TypeInfo, v16);
    sub_1BDB878(&BattleMaster_TypeInfo, v17);
    sub_1BDB878(&BattleMessageGroupMaster_TypeInfo, v18);
    sub_1BDB878(&BattleMessageMaster_TypeInfo, v19);
    sub_1BDB878(&BattlePointMaster_TypeInfo, v20);
    sub_1BDB878(&BattlePointPhaseMaster_TypeInfo, v21);
    sub_1BDB878(&BeforeBirthDayMaster_TypeInfo, v22);
    sub_1BDB878(&BgmMaster_TypeInfo, v23);
    sub_1BDB878(&BgmReleaseMaster_TypeInfo, v24);
    sub_1BDB878(&BlankEarthGimmickAddMaster_TypeInfo, v25);
    sub_1BDB878(&BlankEarthGimmickMaster_TypeInfo, v26);
    sub_1BDB878(&BlankEarthSpotAddMaster_TypeInfo, v27);
    sub_1BDB878(&BlankEarthSpotMaster_TypeInfo, v28);
    sub_1BDB878(&BlankEarthSpotNavimenuMaster_TypeInfo, v29);
    sub_1BDB878(&BoardMessageMaster_TypeInfo, v30);
    sub_1BDB878(&BoardMessageReleaseMaster_TypeInfo, v31);
    sub_1BDB878(&BoostMaster_TypeInfo, v32);
    sub_1BDB878(&BoxGachaBaseDetailMaster_TypeInfo, v33);
    sub_1BDB878(&BoxGachaBaseMaster_TypeInfo, v34);
    sub_1BDB878(&BoxGachaHistoryMaster_TypeInfo, v35);
    sub_1BDB878(&BoxGachaMaster_TypeInfo, v36);
    sub_1BDB878(&BoxGachaTalkMaster_TypeInfo, v37);
    sub_1BDB878(&BuffConvertMaster_TypeInfo, v38);
    sub_1BDB878(&BuffMaster_TypeInfo, v39);
    sub_1BDB878(&BuffTypeDetailMaster_TypeInfo, v40);
    sub_1BDB878(&CampaignInfoMaster_TypeInfo, v41);
    sub_1BDB878(&CardMaster_TypeInfo, v42);
    sub_1BDB878(&ChaldeaGatePickupMaster_TypeInfo, v43);
    sub_1BDB878(&ClassBoardBaseMaster_TypeInfo, v44);
    sub_1BDB878(&ClassBoardClassMaster_TypeInfo, v45);
    sub_1BDB878(&ClassBoardCommandSpellMaster_TypeInfo, v46);
    sub_1BDB878(&ClassBoardLineMaster_TypeInfo, v47);
    sub_1BDB878(&ClassBoardLockMaster_TypeInfo, v48);
    sub_1BDB878(&ClassBoardSquareMaster_TypeInfo, v49);
    sub_1BDB878(&ClassRelationMaster_TypeInfo, v50);
    sub_1BDB878(&ClassRelationOverwriteMaster_TypeInfo, v51);
    sub_1BDB878(&ClosedMessageMaster_TypeInfo, v52);
    sub_1BDB878(&CombineAppendPassiveSkillMaster_TypeInfo, v53);
    sub_1BDB878(&CombineCostumeMaster_TypeInfo, v54);
    sub_1BDB878(&CombineLimitGiftMaster_TypeInfo, v55);
    sub_1BDB878(&CombineLimitMaster_TypeInfo, v56);
    sub_1BDB878(&CombineLimitReleaseMaster_TypeInfo, v57);
    sub_1BDB878(&CombineMaster_TypeInfo, v58);
    sub_1BDB878(&CombineMaterialMaster_TypeInfo, v59);
    sub_1BDB878(&CombineQpMaster_TypeInfo, v60);
    sub_1BDB878(&CombineQpSvtEquipMaster_TypeInfo, v61);
    sub_1BDB878(&CombineSkillMaster_TypeInfo, v62);
    sub_1BDB878(&CombineTdMaster_TypeInfo, v63);
    sub_1BDB878(&CommandCardRankParamMaster_TypeInfo, v64);
    sub_1BDB878(&CommandCodeCommentMaster_TypeInfo, v65);
    sub_1BDB878(&CommandCodeMaster_TypeInfo, v66);
    sub_1BDB878(&CommandCodeSkillMaster_TypeInfo, v67);
    sub_1BDB878(&CommandCodeSkillReleaseMaster_TypeInfo, v68);
    sub_1BDB878(&CommandSpellMaster_TypeInfo, v69);
    sub_1BDB878(&CommonConsumeMaster_TypeInfo, v70);
    sub_1BDB878(&CommonReleaseMaster_TypeInfo, v71);
    sub_1BDB878(&CommonRestrictionMaster_TypeInfo, v72);
    sub_1BDB878(&CompleteMissionMaster_TypeInfo, v73);
    sub_1BDB878(&ConstantLongMaster_TypeInfo, v74);
    sub_1BDB878(&ConstantMaster_TypeInfo, v75);
    sub_1BDB878(&ConstantStrMaster_TypeInfo, v76);
    sub_1BDB878(&CvMaster_TypeInfo, v77);
    sub_1BDB878(&DataMasterBase___TypeInfo, v78);
    sub_1BDB878(&DialogMessageMaster_TypeInfo, v79);
    sub_1BDB878(&EffectMaster_TypeInfo, v80);
    sub_1BDB878(&EffectMovieMaster_TypeInfo, v81);
    sub_1BDB878(&EnemyMstBattleMaster_TypeInfo, v82);
    sub_1BDB878(&EnemyMstMaster_TypeInfo, v83);
    sub_1BDB878(&EquipAddMaster_TypeInfo, v84);
    sub_1BDB878(&EquipExpMaster_TypeInfo, v85);
    sub_1BDB878(&EquipImageMaster_TypeInfo, v86);
    sub_1BDB878(&EquipMaster_TypeInfo, v87);
    sub_1BDB878(&EquipSkillMaster_TypeInfo, v88);
    sub_1BDB878(&EventAddMaster_TypeInfo, v89);
    sub_1BDB878(&EventBoardGameCellMaster_TypeInfo, v90);
    sub_1BDB878(&EventBoardGameTokenMaster_TypeInfo, v91);
    sub_1BDB878(&EventBoardGameTokenRewardMaster_TypeInfo, v92);
    sub_1BDB878(&EventBonusFilterGroupInfoMaster_TypeInfo, v93);
    sub_1BDB878(&EventBonusFilterGroupMemberMaster_TypeInfo, v94);
    sub_1BDB878(&EventBonusFilterMaster_TypeInfo, v95);
    sub_1BDB878(&EventBoostItemUsedMaster_TypeInfo, v96);
    sub_1BDB878(&EventBossStatusUiMaster_TypeInfo, v97);
    sub_1BDB878(&EventBuddyPointMaster_TypeInfo, v98);
    sub_1BDB878(&EventBulletinBoardMaster_TypeInfo, v99);
    sub_1BDB878(&EventBulletinBoardReleaseMaster_TypeInfo, v100);
    sub_1BDB878(&EventCampaignMaster_TypeInfo, v101);
    sub_1BDB878(&EventCampaignReleaseMaster_TypeInfo, v102);
    sub_1BDB878(&EventCombineCostumeMaster_TypeInfo, v103);
    sub_1BDB878(&EventCombineMaster_TypeInfo, v104);
    sub_1BDB878(&EventCommandAssistMaster_TypeInfo, v105);
    sub_1BDB878(&EventConquestRewardMaster_TypeInfo, v106);
    sub_1BDB878(&EventCooltimeRewardMaster_TypeInfo, v107);
    sub_1BDB878(&EventDataLostBattleMaster_TypeInfo, v108);
    sub_1BDB878(&EventDataLostBattleResetMaster_TypeInfo, v109);
    sub_1BDB878(&EventDetailMaster_TypeInfo, v110);
    sub_1BDB878(&EventDiggingBlockMaster_TypeInfo, v111);
    sub_1BDB878(&EventDiggingMaster_TypeInfo, v112);
    sub_1BDB878(&EventDiggingRewardMaster_TypeInfo, v113);
    sub_1BDB878(&EventEquipSkillReleaseMaster_TypeInfo, v114);
    sub_1BDB878(&EventExpeditionMaster_TypeInfo, v115);
    sub_1BDB878(&EventExpeditionPieceMaster_TypeInfo, v116);
    sub_1BDB878(&EventFactoryMaster_TypeInfo, v117);
    sub_1BDB878(&EventFatigueRecoveryMaster_TypeInfo, v118);
    sub_1BDB878(&EventFilterMaster_TypeInfo, v119);
    sub_1BDB878(&EventFortificationDetailMaster_TypeInfo, v120);
    sub_1BDB878(&EventFortificationMaster_TypeInfo, v121);
    sub_1BDB878(&EventFortificationSvtMaster_TypeInfo, v122);
    sub_1BDB878(&EventGroupMaster_TypeInfo, v123);
    sub_1BDB878(&EventItemDisplayGroupMaster_TypeInfo, v124);
    sub_1BDB878(&EventItemDisplayMaster_TypeInfo, v125);
    sub_1BDB878(&EventItemDisplayReleaseMaster_TypeInfo, v126);
    sub_1BDB878(&EventLocationCampaignMaster_TypeInfo, v127);
    sub_1BDB878(&EventMaster_TypeInfo, v128);
    sub_1BDB878(&EventMissionActionAddMaster_TypeInfo, v129);
    sub_1BDB878(&EventMissionActionMaster_TypeInfo, v130);
    sub_1BDB878(&EventMissionAddMaster_TypeInfo, v131);
    sub_1BDB878(&EventMissionCondDetailMaster_TypeInfo, v132);
    sub_1BDB878(&EventMissionConditionMaster_TypeInfo, v133);
    sub_1BDB878(&EventMissionGroupMaster_TypeInfo, v134);
    sub_1BDB878(&EventMissionMaster_TypeInfo, v135);
    sub_1BDB878(&EventMuralMaster_TypeInfo, v136);
    sub_1BDB878(&EventPanelMapDetailMaster_TypeInfo, v137);
    sub_1BDB878(&EventPanelMapMaster_TypeInfo, v138);
    sub_1BDB878(&EventPanelScanMaster_TypeInfo, v139);
    sub_1BDB878(&EventPanelSpotMaster_TypeInfo, v140);
    sub_1BDB878(&EventPointActivityMaster_TypeInfo, v141);
    sub_1BDB878(&EventPointBuffMaster_TypeInfo, v142);
    sub_1BDB878(&EventPointGroupAddMaster_TypeInfo, v143);
    sub_1BDB878(&EventPointGroupMaster_TypeInfo, v144);
    sub_1BDB878(&EventPointMaster_TypeInfo, v145);
    sub_1BDB878(&EventPointUpperMaster_TypeInfo, v146);
    sub_1BDB878(&EventPointUpperReleaseMaster_TypeInfo, v147);
    sub_1BDB878(&EventProgressValueMaster_TypeInfo, v148);
    sub_1BDB878(&EventQuestCooltimeMaster_TypeInfo, v149);
    sub_1BDB878(&EventQuestMaster_TypeInfo, v150);
    sub_1BDB878(&EventRaceMaster_TypeInfo, v151);
    sub_1BDB878(&EventRaceResultMaster_TypeInfo, v152);
    sub_1BDB878(&EventRaidMaster_TypeInfo, v153);
    sub_1BDB878(&EventRandomMissionMaster_TypeInfo, v154);
    sub_1BDB878(&EventRecipeGiftMaster_TypeInfo, v155);
    sub_1BDB878(&EventRecipeMaster_TypeInfo, v156);
    sub_1BDB878(&EventRewardBgMaster_TypeInfo, v157);
    sub_1BDB878(&EventRewardExtraMaster_TypeInfo, v158);
    sub_1BDB878(&EventRewardGuideReleaseMaster_TypeInfo, v159);
    sub_1BDB878(&EventRewardMaster_TypeInfo, v160);
    sub_1BDB878(&EventRewardSceneMaster_TypeInfo, v161);
    sub_1BDB878(&EventRewardSceneReleaseMaster_TypeInfo, v162);
    sub_1BDB878(&EventRewardSetMaster_TypeInfo, v163);
    sub_1BDB878(&EventScriptMaster_TypeInfo, v164);
    sub_1BDB878(&EventScriptReleaseMaster_TypeInfo, v165);
    sub_1BDB878(&EventServantFatigueMaster_TypeInfo, v166);
    sub_1BDB878(&EventServantMaster_TypeInfo, v167);
    sub_1BDB878(&EventServantPointRankMaster_TypeInfo, v168);
    sub_1BDB878(&EventStatusMaster_TypeInfo, v169);
    sub_1BDB878(&EventStatusQuestMaster_TypeInfo, v170);
    sub_1BDB878(&EventSuperBossMaster_TypeInfo, v171);
    sub_1BDB878(&EventTowerMaster_TypeInfo, v172);
    sub_1BDB878(&EventTowerRewardMaster_TypeInfo, v173);
    sub_1BDB878(&EventTradeGoodsMaster_TypeInfo, v174);
    sub_1BDB878(&EventTradePickupMaster_TypeInfo, v175);
    sub_1BDB878(&EventTradeStoreMaster_TypeInfo, v176);
    sub_1BDB878(&EventTutorialCondMaster_TypeInfo, v177);
    sub_1BDB878(&EventTutorialMaster_TypeInfo, v178);
    sub_1BDB878(&EventUiMaster_TypeInfo, v179);
    sub_1BDB878(&EventUiReleaseMaster_TypeInfo, v180);
    sub_1BDB878(&EventUiValueMaster_TypeInfo, v181);
    sub_1BDB878(&EventVoicePlayMaster_TypeInfo, v182);
    sub_1BDB878(&ExchangeSvtCoinGivenNumMaster_TypeInfo, v183);
    sub_1BDB878(&ExcludeMotionMaster_TypeInfo, v184);
    sub_1BDB878(&FieldMotionMaster_TypeInfo, v185);
    sub_1BDB878(&FriendshipMaster_TypeInfo, v186);
    sub_1BDB878(&FriendshipQuestDialogInfoMaster_TypeInfo, v187);
    sub_1BDB878(&FriendshipServantMaster_TypeInfo, v188);
    sub_1BDB878(&FuncDispMaster_TypeInfo, v189);
    sub_1BDB878(&FuncTypeDetailMaster_TypeInfo, v190);
    sub_1BDB878(&FunctionCategoryMaster_TypeInfo, v191);
    sub_1BDB878(&FunctionGroupMaster_TypeInfo, v192);
    sub_1BDB878(&FunctionMaster_TypeInfo, v193);
    sub_1BDB878(&GachaAdjustAddMaster_TypeInfo, v194);
    sub_1BDB878(&GachaAppendMaster_TypeInfo, v195);
    sub_1BDB878(&GachaBaseCollateralMaster_TypeInfo, v196);
    sub_1BDB878(&GachaBehaviorMaster_TypeInfo, v197);
    sub_1BDB878(&GachaBonusSelectLineupMaster_TypeInfo, v198);
    sub_1BDB878(&GachaBonusSelectMaster_TypeInfo, v199);
    sub_1BDB878(&GachaDetailMaster_TypeInfo, v200);
    sub_1BDB878(&GachaExtraGiftMaster_TypeInfo, v201);
    sub_1BDB878(&GachaGroupMaster_TypeInfo, v202);
    sub_1BDB878(&GachaImageMaster_TypeInfo, v203);
    sub_1BDB878(&GachaMaster_TypeInfo, v204);
    sub_1BDB878(&GachaPickupCollateralGroupMaster_TypeInfo, v205);
    sub_1BDB878(&GachaPickupCollateralMaster_TypeInfo, v206);
    sub_1BDB878(&GachaReleaseMaster_TypeInfo, v207);
    sub_1BDB878(&GachaStoryAdjustMaster_TypeInfo, v208);
    sub_1BDB878(&GachaSubMaster_TypeInfo, v209);
    sub_1BDB878(&GachaTicketMaster_TypeInfo, v210);
    sub_1BDB878(&GalleryFolderReleaseMaster_TypeInfo, v211);
    sub_1BDB878(&GalleryMaster_TypeInfo, v212);
    sub_1BDB878(&GalleryResourceMaster_TypeInfo, v213);
    sub_1BDB878(&GiftAddMaster_TypeInfo, v214);
    sub_1BDB878(&GiftDetailMaster_TypeInfo, v215);
    sub_1BDB878(&GiftMaster_TypeInfo, v216);
    sub_1BDB878(&GrandGraphDetailMaster_TypeInfo, v217);
    sub_1BDB878(&GrandGraphMaster_TypeInfo, v218);
    sub_1BDB878(&GuideMaster_TypeInfo, v219);
    sub_1BDB878(&HeelPortraitMaster_TypeInfo, v220);
    sub_1BDB878(&IllustratorMaster_TypeInfo, v221);
    sub_1BDB878(&ImagePartsGroupMaster_TypeInfo, v222);
    sub_1BDB878(&IndividualityPersonalityMaster_TypeInfo, v223);
    sub_1BDB878(&IndividualityPolicyMaster_TypeInfo, v224);
    sub_1BDB878(&ItemDropEfficiencyMaster_TypeInfo, v225);
    sub_1BDB878(&ItemMaster_TypeInfo, v226);
    sub_1BDB878(&ItemSelectMaster_TypeInfo, v227);
    sub_1BDB878(&LoginQuestMaster_TypeInfo, v228);
    sub_1BDB878(&MapButtonMaster_TypeInfo, v229);
    sub_1BDB878(&MapCondMaster_TypeInfo, v230);
    sub_1BDB878(&MapGimmickLayerMaster_TypeInfo, v231);
    sub_1BDB878(&MapGimmickMaster_TypeInfo, v232);
    sub_1BDB878(&MapGimmickPathMaster_TypeInfo, v233);
    sub_1BDB878(&MapGimmickPathReleaseMaster_TypeInfo, v234);
    sub_1BDB878(&MapGimmickReleaseMaster_TypeInfo, v235);
    sub_1BDB878(&MapLayerMaster_TypeInfo, v236);
    sub_1BDB878(&MapMaster_TypeInfo, v237);
    sub_1BDB878(&MapUpdateScheduleMaster_TypeInfo, v238);
    sub_1BDB878(&MasterPhotoMaster_TypeInfo, v239);
    sub_1BDB878(&MaterialFolderMaster_TypeInfo, v240);
    sub_1BDB878(&MissionItemDisplayMaster_TypeInfo, v241);
    sub_1BDB878(&MissionNaviQuestMaster_TypeInfo, v242);
    sub_1BDB878(&MissionNaviTransitionMaster_TypeInfo, v243);
    sub_1BDB878(&MstMissionDisplayInfoMaster_TypeInfo, v244);
    sub_1BDB878(&MstMissionMaster_TypeInfo, v245);
    sub_1BDB878(&MyRoomAddMaster_TypeInfo, v246);
    sub_1BDB878(&MyroomServantSpecialImageMaster_TypeInfo, v247);
    sub_1BDB878(&NewsMaster_TypeInfo, v248);
    sub_1BDB878(&NotEndEventMissionFixMaster_TypeInfo, v249);
    sub_1BDB878(&NpcFollowerMaster_TypeInfo, v250);
    sub_1BDB878(&NpcFollowerReleaseMaster_TypeInfo, v251);
    sub_1BDB878(&NpcServantDisplayTypeDetailMaster_TypeInfo, v252);
    sub_1BDB878(&NpcServantEquipMaster_TypeInfo, v253);
    sub_1BDB878(&NpcServantFollowerIndividualityMaster_TypeInfo, v254);
    sub_1BDB878(&NpcServantFollowerMaster_TypeInfo, v255);
    sub_1BDB878(&OpeningMovieMaster_TypeInfo, v256);
    sub_1BDB878(&OtherUserGameMaster_TypeInfo, v257);
    sub_1BDB878(&PartialMaintenanceMaster_TypeInfo, v258);
    sub_1BDB878(&PaymentHistoryMaster_TypeInfo, v259);
    sub_1BDB878(&PaymentLimitMaster_TypeInfo, v260);
    sub_1BDB878(&PhotoFrameMaster_TypeInfo, v261);
    sub_1BDB878(&PickupUserFollowerMaster_TypeInfo, v262);
    sub_1BDB878(&PrivilegeMaster_TypeInfo, v263);
    sub_1BDB878(&QuestAddMaster_TypeInfo, v264);
    sub_1BDB878(&QuestAutoOrganizationAdjustMaster_TypeInfo, v265);
    sub_1BDB878(&QuestBehaviorMaster_TypeInfo, v266);
    sub_1BDB878(&QuestConsumeItemMaster_TypeInfo, v267);
    sub_1BDB878(&QuestDateRangeMaster_TypeInfo, v268);
    sub_1BDB878(&QuestExtensionMaster_TypeInfo, v269);
    sub_1BDB878(&QuestGroupMaster_TypeInfo, v270);
    sub_1BDB878(&QuestHintMaster_TypeInfo, v271);
    sub_1BDB878(&QuestHintOverwriteMaster_TypeInfo, v272);
    sub_1BDB878(&QuestMaster_TypeInfo, v273);
    sub_1BDB878(&QuestMessageMaster_TypeInfo, v274);
    sub_1BDB878(&QuestPhaseDetailAddMaster_TypeInfo, v275);
    sub_1BDB878(&QuestPhaseDetailMaster_TypeInfo, v276);
    sub_1BDB878(&QuestPhaseIndividualityMaster_TypeInfo, v277);
    sub_1BDB878(&QuestPhaseMaster_TypeInfo, v278);
    sub_1BDB878(&QuestPhasePresentMaster_TypeInfo, v279);
    sub_1BDB878(&QuestPickupMaster_TypeInfo, v280);
    sub_1BDB878(&QuestRacePointMaster_TypeInfo, v281);
    sub_1BDB878(&QuestRandomGroupMaster_TypeInfo, v282);
    sub_1BDB878(&QuestReleaseMaster_TypeInfo, v283);
    sub_1BDB878(&QuestReleaseOverwriteMaster_TypeInfo, v284);
    sub_1BDB878(&QuestResetMaster_TypeInfo, v285);
    sub_1BDB878(&QuestRestrictionInfoMaster_TypeInfo, v286);
    sub_1BDB878(&QuestRestrictionMaster_TypeInfo, v287);
    sub_1BDB878(&QuestScriptBranchMaterialMaster_TypeInfo, v288);
    sub_1BDB878(&QuestScriptMaster_TypeInfo, v289);
    sub_1BDB878(&QuestScriptMaterialNextMaster_TypeInfo, v290);
    sub_1BDB878(&QuestScriptMaterialOverwriteMaster_TypeInfo, v291);
    sub_1BDB878(&QuestScriptReleaseMaster_TypeInfo, v292);
    sub_1BDB878(&QuestSpotReleaseMaster_TypeInfo, v293);
    sub_1BDB878(&QuestUseItemGroupMaster_TypeInfo, v294);
    sub_1BDB878(&QuestUseItemPickupMaster_TypeInfo, v295);
    sub_1BDB878(&ReachedWaveInfoMaster_TypeInfo, v296);
    sub_1BDB878(&RecommendAdviceMessageMaster_TypeInfo, v297);
    sub_1BDB878(&RecommendSupportQuestMaster_TypeInfo, v298);
    sub_1BDB878(&RecoverMaster_TypeInfo, v299);
    sub_1BDB878(&ReprintStageMaster_TypeInfo, v300);
    sub_1BDB878(&RestrictionBaseMaster_TypeInfo, v301);
    sub_1BDB878(&RestrictionMaster_TypeInfo, v302);
    sub_1BDB878(&RestrictionMessageMaster_TypeInfo, v303);
    sub_1BDB878(&RestrictionSlotDetailMaster_TypeInfo, v304);
    sub_1BDB878(&RestrictionSlotMaster_TypeInfo, v305);
    sub_1BDB878(&RestrictionWholeMaster_TypeInfo, v306);
    sub_1BDB878(&RoadmapMaster_TypeInfo, v307);
    sub_1BDB878(&SelectBonusBaseMaster_TypeInfo, v308);
    sub_1BDB878(&SelectBonusMaster_TypeInfo, v309);
    sub_1BDB878(&ServantAddMaster_TypeInfo, v310);
    sub_1BDB878(&ServantAnimationOverwriteMaster_TypeInfo, v311);
    sub_1BDB878(&ServantAppendPassiveSkillMaster_TypeInfo, v312);
    sub_1BDB878(&ServantBattlePointMaster_TypeInfo, v313);
    sub_1BDB878(&ServantCardAddMaster_TypeInfo, v314);
    sub_1BDB878(&ServantCardMaster_TypeInfo, v315);
    sub_1BDB878(&ServantChangeMaster_TypeInfo, v316);
    sub_1BDB878(&ServantClassMaster_TypeInfo, v317);
    sub_1BDB878(&ServantCollectionMaster_TypeInfo, v318);
    sub_1BDB878(&ServantCommandCodeUnlockMaster_TypeInfo, v319);
    sub_1BDB878(&ServantCommentAddMaster_TypeInfo, v320);
    sub_1BDB878(&ServantCommentMaster_TypeInfo, v321);
    sub_1BDB878(&ServantCostumeMaster_TypeInfo, v322);
    sub_1BDB878(&ServantCostumeReleaseMaster_TypeInfo, v323);
    sub_1BDB878(&ServantExceedMaster_TypeInfo, v324);
    sub_1BDB878(&ServantExpMaster_TypeInfo, v325);
    sub_1BDB878(&ServantFilterMaster_TypeInfo, v326);
    sub_1BDB878(&ServantFlagMaster_TypeInfo, v327);
    sub_1BDB878(&ServantFlagReleaseMaster_TypeInfo, v328);
    sub_1BDB878(&ServantGroupMaster_TypeInfo, v329);
    sub_1BDB878(&ServantIndividualityMaster_TypeInfo, v330);
    sub_1BDB878(&ServantLimitAddMaster_TypeInfo, v331);
    sub_1BDB878(&ServantLimitImageMaster_TypeInfo, v332);
    sub_1BDB878(&ServantLimitMaster_TypeInfo, v333);
    sub_1BDB878(&ServantLimitSpoilerProtectionMaster_TypeInfo, v334);
    sub_1BDB878(&ServantLvDetailMaster_TypeInfo, v335);
    sub_1BDB878(&ServantMaster_TypeInfo, v336);
    sub_1BDB878(&ServantMaterialFolderMaster_TypeInfo, v337);
    sub_1BDB878(&ServantOverwriteMaster_TypeInfo, v338);
    sub_1BDB878(&ServantPassiveSkillMaster_TypeInfo, v339);
    sub_1BDB878(&ServantPassiveSkillReleaseMaster_TypeInfo, v340);
    sub_1BDB878(&ServantPhotoMaster_TypeInfo, v341);
    sub_1BDB878(&ServantProfileMaster_TypeInfo, v342);
    sub_1BDB878(&ServantProfilePushMaster_TypeInfo, v343);
    sub_1BDB878(&ServantRarityMaster_TypeInfo, v344);
    sub_1BDB878(&ServantScriptAddMaster_TypeInfo, v345);
    sub_1BDB878(&ServantScriptMaster_TypeInfo, v346);
    sub_1BDB878(&ServantScriptMultipleMaster_TypeInfo, v347);
    sub_1BDB878(&ServantSkillAddMaster_TypeInfo, v348);
    sub_1BDB878(&ServantSkillMaster_TypeInfo, v349);
    sub_1BDB878(&ServantSkillReleaseMaster_TypeInfo, v350);
    sub_1BDB878(&ServantTransformMaster_TypeInfo, v351);
    sub_1BDB878(&ServantTreasureDeviceAddMaster_TypeInfo, v352);
    sub_1BDB878(&ServantTreasureDeviceDamageMaster_TypeInfo, v353);
    sub_1BDB878(&ServantTreasureDeviceReleaseMaster_TypeInfo, v354);
    sub_1BDB878(&ServantTreasureDvcMaster_TypeInfo, v355);
    sub_1BDB878(&ServantVoiceMaster_TypeInfo, v356);
    sub_1BDB878(&ServantVoicePatternMaster_TypeInfo, v357);
    sub_1BDB878(&ServantVoiceRelationMaster_TypeInfo, v358);
    sub_1BDB878(&SetItemMaster_TypeInfo, v359);
    sub_1BDB878(&ShopActionMaster_TypeInfo, v360);
    sub_1BDB878(&ShopDetailMaster_TypeInfo, v361);
    sub_1BDB878(&ShopGroupMaster_TypeInfo, v362);
    sub_1BDB878(&ShopMaster_TypeInfo, v363);
    sub_1BDB878(&ShopReleaseMaster_TypeInfo, v364);
    sub_1BDB878(&ShopResetMaster_TypeInfo, v365);
    sub_1BDB878(&ShopScriptMaster_TypeInfo, v366);
    sub_1BDB878(&SkillAddMaster_TypeInfo, v367);
    sub_1BDB878(&SkillDetailMaster_TypeInfo, v368);
    sub_1BDB878(&SkillGroupMaster_TypeInfo, v369);
    sub_1BDB878(&SkillGroupOverwriteMaster_TypeInfo, v370);
    sub_1BDB878(&SkillIndividualityMaster_TypeInfo, v371);
    sub_1BDB878(&SkillLvMaster_TypeInfo, v372);
    sub_1BDB878(&SkillMaster_TypeInfo, v373);
    sub_1BDB878(&SpotAddMaster_TypeInfo, v374);
    sub_1BDB878(&SpotImageMaster_TypeInfo, v375);
    sub_1BDB878(&SpotLayerMaster_TypeInfo, v376);
    sub_1BDB878(&SpotMaster_TypeInfo, v377);
    sub_1BDB878(&SpotPathMaster_TypeInfo, v378);
    sub_1BDB878(&SpotRoadMaster_TypeInfo, v379);
    sub_1BDB878(&StaffPhotoCostumeMaster_TypeInfo, v380);
    sub_1BDB878(&StaffPhotoMaster_TypeInfo, v381);
    sub_1BDB878(&StageMaster_TypeInfo, v382);
    sub_1BDB878(&StatusEffectPosOverwriteMaster_TypeInfo, v383);
    sub_1BDB878(&StoneShopMaster_TypeInfo, v384);
    sub_1BDB878(&SubEquipMaster_TypeInfo, v385);
    sub_1BDB878(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v386);
    sub_1BDB878(&SvtCoinMaster_TypeInfo, v387);
    sub_1BDB878(&SvtMaterialTdMaster_TypeInfo, v388);
    sub_1BDB878(&SvtMultiPortraitMaster_TypeInfo, v389);
    sub_1BDB878(&TblFriendMaster_TypeInfo, v390);
    sub_1BDB878(&TblUserMaster_TypeInfo, v391);
    sub_1BDB878(&TelopMaster_TypeInfo, v392);
    sub_1BDB878(&TerminalOverwriteMaster_TypeInfo, v393);
    sub_1BDB878(&TipsBattleMaster_TypeInfo, v394);
    sub_1BDB878(&TotalBoxGachaMaster_TypeInfo, v395);
    sub_1BDB878(&TotalEventPointMaster_TypeInfo, v396);
    sub_1BDB878(&TotalEventRaceMaster_TypeInfo, v397);
    sub_1BDB878(&TotalEventRaidMaster_TypeInfo, v398);
    sub_1BDB878(&TotalLoginMaster_TypeInfo, v399);
    sub_1BDB878(&TreasureBoxGiftMaster_TypeInfo, v400);
    sub_1BDB878(&TreasureBoxMaster_TypeInfo, v401);
    sub_1BDB878(&TreasureBoxTalkMaster_TypeInfo, v402);
    sub_1BDB878(&TreasureDeviceSequenceWeightMaster_TypeInfo, v403);
    sub_1BDB878(&TreasureDvcDetailMaster_TypeInfo, v404);
    sub_1BDB878(&TreasureDvcLvMaster_TypeInfo, v405);
    sub_1BDB878(&TreasureDvcMaster_TypeInfo, v406);
    sub_1BDB878(&UpdateProfileDialogInfoMaster_TypeInfo, v407);
    sub_1BDB878(&UserAccessaryMaster_TypeInfo, v408);
    sub_1BDB878(&UserAccountLinkageMaster_TypeInfo, v409);
    sub_1BDB878(&UserBlacklistMaster_TypeInfo, v410);
    sub_1BDB878(&UserBoxGachaMaster_TypeInfo, v411);
    sub_1BDB878(&UserClassBoardSquareMaster_TypeInfo, v412);
    sub_1BDB878(&UserClassStatisticsMaster_TypeInfo, v413);
    sub_1BDB878(&UserCoinRoomMaster_TypeInfo, v414);
    sub_1BDB878(&UserCombineExpMaster_TypeInfo, v415);
    sub_1BDB878(&UserCommandCodeCollectionMaster_TypeInfo, v416);
    sub_1BDB878(&UserCommandCodeMaster_TypeInfo, v417);
    sub_1BDB878(&UserContinueMaster_TypeInfo, v418);
    sub_1BDB878(&UserDeckMaster_TypeInfo, v419);
    sub_1BDB878(&UserDeleteReservationMaster_TypeInfo, v420);
    sub_1BDB878(&UserEquipMaster_TypeInfo, v421);
    sub_1BDB878(&UserEventAlloutBattleMaster_TypeInfo, v422);
    sub_1BDB878(&UserEventBoardGameTokenMaster_TypeInfo, v423);
    sub_1BDB878(&UserEventCooltimeRewardMaster_TypeInfo, v424);
    sub_1BDB878(&UserEventDataLostMaster_TypeInfo, v425);
    sub_1BDB878(&UserEventDeckMaster_TypeInfo, v426);
    sub_1BDB878(&UserEventDiggingMaster_TypeInfo, v427);
    sub_1BDB878(&UserEventExpeditionMaster_TypeInfo, v428);
    sub_1BDB878(&UserEventFortificationMaster_TypeInfo, v429);
    sub_1BDB878(&UserEventItemLinkSvtMaster_TypeInfo, v430);
    sub_1BDB878(&UserEventMapMaster_TypeInfo, v431);
    sub_1BDB878(&UserEventMaster_TypeInfo, v432);
    sub_1BDB878(&UserEventMissionCondDetailMaster_TypeInfo, v433);
    sub_1BDB878(&UserEventMissionFixMaster_TypeInfo, v434);
    sub_1BDB878(&UserEventMissionMaster_TypeInfo, v435);
    sub_1BDB878(&UserEventPointMaster_TypeInfo, v436);
    sub_1BDB878(&UserEventQuestCooltimeMaster_TypeInfo, v437);
    sub_1BDB878(&UserEventRaceMaster_TypeInfo, v438);
    sub_1BDB878(&UserEventRaidMaster_TypeInfo, v439);
    sub_1BDB878(&UserEventRandomMissionMaster_TypeInfo, v440);
    sub_1BDB878(&UserEventServantFatigueMaster_TypeInfo, v441);
    sub_1BDB878(&UserEventServantPointMaster_TypeInfo, v442);
    sub_1BDB878(&UserEventSpotMaster_TypeInfo, v443);
    sub_1BDB878(&UserEventTradeMaster_TypeInfo, v444);
    sub_1BDB878(&UserExchangeSvtMaster_TypeInfo, v445);
    sub_1BDB878(&UserExpMaster_TypeInfo, v446);
    sub_1BDB878(&UserExternalPaymentStoneMaster_TypeInfo, v447);
    sub_1BDB878(&UserFollowMaster_TypeInfo, v448);
    sub_1BDB878(&UserFollowerMaster_TypeInfo, v449);
    sub_1BDB878(&UserFormationMaster_TypeInfo, v450);
    sub_1BDB878(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v451);
    sub_1BDB878(&UserFriendRequestHistoryMaster_TypeInfo, v452);
    sub_1BDB878(&UserGachaDrawLogMaster_TypeInfo, v453);
    sub_1BDB878(&UserGachaExtraCountMaster_TypeInfo, v454);
    sub_1BDB878(&UserGachaHistoryMaster_TypeInfo, v455);
    sub_1BDB878(&UserGachaMaster_TypeInfo, v456);
    sub_1BDB878(&UserGachaPickupCollateralMaster_TypeInfo, v457);
    sub_1BDB878(&UserGameCommonMaster_TypeInfo, v458);
    sub_1BDB878(&UserGameMaster_TypeInfo, v459);
    sub_1BDB878(&UserHeelPortraitMaster_TypeInfo, v460);
    sub_1BDB878(&UserImagePartsGroupMaster_TypeInfo, v461);
    sub_1BDB878(&UserInterruptionQuestMaster_TypeInfo, v462);
    sub_1BDB878(&UserItemMaster_TypeInfo, v463);
    sub_1BDB878(&UserLoginMaster_TypeInfo, v464);
    sub_1BDB878(&UserMaster_TypeInfo, v465);
    sub_1BDB878(&UserNpcSvtRecordMaster_TypeInfo, v466);
    sub_1BDB878(&UserPaymentLimitMaster_TypeInfo, v467);
    sub_1BDB878(&UserPresentBoxMaster_TypeInfo, v468);
    sub_1BDB878(&UserPresentHistoryMaster_TypeInfo, v469);
    sub_1BDB878(&UserPrivilegeMaster_TypeInfo, v470);
    sub_1BDB878(&UserQuestInfoMaster_TypeInfo, v471);
    sub_1BDB878(&UserQuestMaster_TypeInfo, v472);
    sub_1BDB878(&UserQuestRecordMaster_TypeInfo, v473);
    sub_1BDB878(&UserQuestRouteMaster_TypeInfo, v474);
    sub_1BDB878(&UserRecommendFollowerMaster_TypeInfo, v475);
    sub_1BDB878(&UserRecommendSupportMaster_TypeInfo, v476);
    sub_1BDB878(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v477);
    sub_1BDB878(&UserServantAppendPassiveSkillMaster_TypeInfo, v478);
    sub_1BDB878(&UserServantCollectionMaster_TypeInfo, v479);
    sub_1BDB878(&UserServantCommandCardMaster_TypeInfo, v480);
    sub_1BDB878(&UserServantCommandCodeMaster_TypeInfo, v481);
    sub_1BDB878(&UserServantGrandMaster_TypeInfo, v482);
    sub_1BDB878(&UserServantLeaderMaster_TypeInfo, v483);
    sub_1BDB878(&UserServantMaster_TypeInfo, v484);
    sub_1BDB878(&UserServantStorageMaster_TypeInfo, v485);
    sub_1BDB878(&UserServantVoicePlayedMaster_TypeInfo, v486);
    sub_1BDB878(&UserShopMaster_TypeInfo, v487);
    sub_1BDB878(&UserSubEquipMaster_TypeInfo, v488);
    sub_1BDB878(&UserSuperBossMaster_TypeInfo, v489);
    sub_1BDB878(&UserSupportDeckMaster_TypeInfo, v490);
    sub_1BDB878(&UserSvtCoinMaster_TypeInfo, v491);
    sub_1BDB878(&UserSvtFirstGetTimeMaster_TypeInfo, v492);
    sub_1BDB878(&ViewEnemyMaster_TypeInfo, v493);
    sub_1BDB878(&ViewGachaFeaturedServantMaster_TypeInfo, v494);
    sub_1BDB878(&ViewQuestEnemyInfoMaster_TypeInfo, v495);
    sub_1BDB878(&ViewQuestInfoMaster_TypeInfo, v496);
    sub_1BDB878(&ViewWaveEnemyMaster_TypeInfo, v497);
    sub_1BDB878(&VoiceClosedMessageMaster_TypeInfo, v498);
    sub_1BDB878(&VoiceCondMaster_TypeInfo, v499);
    sub_1BDB878(&VoiceMaster_TypeInfo, v500);
    sub_1BDB878(&VoiceMaterialCondMaster_TypeInfo, v501);
    sub_1BDB878(&VoicePlayCondMaster_TypeInfo, v502);
    sub_1BDB878(&VoicePlayGroupMaster_TypeInfo, v503);
    sub_1BDB878(&VoiceReleaseMaster_TypeInfo, v504);
    sub_1BDB878(&WarAddMaster_TypeInfo, v505);
    sub_1BDB878(&WarBoardAIMaster_TypeInfo, v506);
    sub_1BDB878(&WarBoardActionPointClassMaster_TypeInfo, v507);
    sub_1BDB878(&WarBoardActionPointMaster_TypeInfo, v508);
    sub_1BDB878(&WarBoardActionTrendConditionMaster_TypeInfo, v509);
    sub_1BDB878(&WarBoardActionTrendGroupMaster_TypeInfo, v510);
    sub_1BDB878(&WarBoardActionTrendMaster_TypeInfo, v511);
    sub_1BDB878(&WarBoardCommonReleaseMaster_TypeInfo, v512);
    sub_1BDB878(&WarBoardDataMaster_TypeInfo, v513);
    sub_1BDB878(&WarBoardEffectMaster_TypeInfo, v514);
    sub_1BDB878(&WarBoardEventMaster_TypeInfo, v515);
    sub_1BDB878(&WarBoardEventScriptMaster_TypeInfo, v516);
    sub_1BDB878(&WarBoardFutureActionTrendMaster_TypeInfo, v517);
    sub_1BDB878(&WarBoardIndividualityClassMaster_TypeInfo, v518);
    sub_1BDB878(&WarBoardItemMaster_TypeInfo, v519);
    sub_1BDB878(&WarBoardMaster_TypeInfo, v520);
    sub_1BDB878(&WarBoardMessageMaster_TypeInfo, v521);
    sub_1BDB878(&WarBoardMessageScriptMaster_TypeInfo, v522);
    sub_1BDB878(&WarBoardOnboardSkillMaster_TypeInfo, v523);
    sub_1BDB878(&WarBoardPartySkillMaster_TypeInfo, v524);
    sub_1BDB878(&WarBoardQuestMaster_TypeInfo, v525);
    sub_1BDB878(&WarBoardRatingBaseMaster_TypeInfo, v526);
    sub_1BDB878(&WarBoardRatingOffsetGroupMaster_TypeInfo, v527);
    sub_1BDB878(&WarBoardRatingOffsetMaster_TypeInfo, v528);
    sub_1BDB878(&WarBoardReinforcementsMaster_TypeInfo, v529);
    sub_1BDB878(&WarBoardRoadMaster_TypeInfo, v530);
    sub_1BDB878(&WarBoardSquareIndexGroupMaster_TypeInfo, v531);
    sub_1BDB878(&WarBoardSquareMaster_TypeInfo, v532);
    sub_1BDB878(&WarBoardStageBossMaster_TypeInfo, v533);
    sub_1BDB878(&WarBoardStageDetailMaster_TypeInfo, v534);
    sub_1BDB878(&WarBoardStageLayoutMaster_TypeInfo, v535);
    sub_1BDB878(&WarBoardStageMaster_TypeInfo, v536);
    sub_1BDB878(&WarBoardStageNpcMaster_TypeInfo, v537);
    sub_1BDB878(&WarBoardStagePieceDetailMaster_TypeInfo, v538);
    sub_1BDB878(&WarBoardStageReinforcementsMaster_TypeInfo, v539);
    sub_1BDB878(&WarBoardStageWallMaster_TypeInfo, v540);
    sub_1BDB878(&WarBoardTacticalTrendMaster_TypeInfo, v541);
    sub_1BDB878(&WarBoardTreasureMaster_TypeInfo, v542);
    sub_1BDB878(&WarGroupIgnoreMaster_TypeInfo, v543);
    sub_1BDB878(&WarGroupMaster_TypeInfo, v544);
    sub_1BDB878(&WarMaster_TypeInfo, v545);
    sub_1BDB878(&WarMessageMaster_TypeInfo, v546);
    sub_1BDB878(&WarQuestSelectionMaster_TypeInfo, v547);
    sub_1BDB878(&WarReleaseMaster_TypeInfo, v548);
    byte_4B4457B = 1;
  }
  v549 = (DataMasterBase_array *)sub_1BDB920(DataMasterBase___TypeInfo, 547LL);
  v550 = (ServantMaster_o *)sub_1BDBAC4(ServantMaster_TypeInfo);
  ServantMaster___ctor(v550, 0LL);
  if ( !v549 )
    sub_1BDBAD4(v551, v552);
  if ( v550 )
  {
    v551 = sub_1BDB9B4(v550, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  p_max_length = &v549->max_length;
  if ( !v549->max_length )
    goto LABEL_1646;
  v549->m_Items[0] = (DataMasterBase_o *)v550;
  sub_1BDB81C((CGThumbnailListItem_o *)v549->m_Items, (int32_t)v550, v553, v554);
  v556 = (ServantClassMaster_o *)sub_1BDBAC4(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v556, 0LL);
  if ( v556 )
  {
    v551 = sub_1BDB9B4(v556, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1646;
  v549->m_Items[1] = (DataMasterBase_o *)v556;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[1], (int32_t)v556, v553, v557);
  v558 = (ServantCommentMaster_o *)sub_1BDBAC4(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v558, 0LL);
  if ( v558 )
  {
    v551 = sub_1BDB9B4(v558, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1646;
  v549->m_Items[2] = (DataMasterBase_o *)v558;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[2], (int32_t)v558, v553, v559);
  v560 = (ServantProfileMaster_o *)sub_1BDBAC4(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v560, 0LL);
  if ( v560 )
  {
    v551 = sub_1BDB9B4(v560, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1646;
  v549->m_Items[3] = (DataMasterBase_o *)v560;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[3], (int32_t)v560, v553, v561);
  v562 = (WarMaster_o *)sub_1BDBAC4(WarMaster_TypeInfo);
  WarMaster___ctor(v562, 0LL);
  if ( v562 )
  {
    v551 = sub_1BDB9B4(v562, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1646;
  v549->m_Items[4] = (DataMasterBase_o *)v562;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[4], (int32_t)v562, v553, v563);
  v564 = (UserMaster_o *)sub_1BDBAC4(UserMaster_TypeInfo);
  UserMaster___ctor(v564, 0LL);
  if ( v564 )
  {
    v551 = sub_1BDB9B4(v564, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1646;
  v549->m_Items[5] = (DataMasterBase_o *)v564;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[5], (int32_t)v564, v553, v565);
  v566 = (UserGameMaster_o *)sub_1BDBAC4(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v566, 0LL);
  if ( v566 )
  {
    v551 = sub_1BDB9B4(v566, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1646;
  v549->m_Items[6] = (DataMasterBase_o *)v566;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[6], (int32_t)v566, v553, v567);
  v568 = (TblUserMaster_o *)sub_1BDBAC4(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v568, 0LL);
  if ( v568 )
  {
    v551 = sub_1BDB9B4(v568, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1646;
  v549->m_Items[7] = (DataMasterBase_o *)v568;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[7], (int32_t)v568, v553, v569);
  v570 = (UserItemMaster_o *)sub_1BDBAC4(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v570, 0LL);
  if ( v570 )
  {
    v551 = sub_1BDB9B4(v570, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1646;
  v549->m_Items[8] = (DataMasterBase_o *)v570;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[8], (int32_t)v570, v553, v571);
  v572 = (UserServantMaster_o *)sub_1BDBAC4(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v572, 0LL);
  if ( v572 )
  {
    v551 = sub_1BDB9B4(v572, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1646;
  v549->m_Items[9] = (DataMasterBase_o *)v572;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[9], (int32_t)v572, v553, v573);
  v574 = (UserServantStorageMaster_o *)sub_1BDBAC4(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v574, 0LL);
  if ( v574 )
  {
    v551 = sub_1BDB9B4(v574, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1646;
  v549->m_Items[10] = (DataMasterBase_o *)v574;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[10], (int32_t)v574, v553, v575);
  v576 = (UserAccessaryMaster_o *)sub_1BDBAC4(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v576, 0LL);
  if ( v576 )
  {
    v551 = sub_1BDB9B4(v576, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1646;
  v549->m_Items[11] = (DataMasterBase_o *)v576;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[11], (int32_t)v576, v553, v577);
  v578 = (UserQuestMaster_o *)sub_1BDBAC4(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v578, 0LL);
  if ( v578 )
  {
    v551 = sub_1BDB9B4(v578, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1646;
  v549->m_Items[12] = (DataMasterBase_o *)v578;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[12], (int32_t)v578, v553, v579);
  v580 = (BattleMaster_o *)sub_1BDBAC4(BattleMaster_TypeInfo);
  BattleMaster___ctor(v580, 0LL);
  if ( v580 )
  {
    v551 = sub_1BDB9B4(v580, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1646;
  v549->m_Items[13] = (DataMasterBase_o *)v580;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[13], (int32_t)v580, v553, v581);
  v582 = (OtherUserGameMaster_o *)sub_1BDBAC4(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v582, 0LL);
  if ( v582 )
  {
    v551 = sub_1BDB9B4(v582, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1646;
  v549->m_Items[14] = (DataMasterBase_o *)v582;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[14], (int32_t)v582, v553, v583);
  v584 = (TblFriendMaster_o *)sub_1BDBAC4(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v584, 0LL);
  if ( v584 )
  {
    v551 = sub_1BDB9B4(v584, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1646;
  v549->m_Items[15] = (DataMasterBase_o *)v584;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[15], (int32_t)v584, v553, v585);
  v586 = (AreaMaster_o *)sub_1BDBAC4(AreaMaster_TypeInfo);
  AreaMaster___ctor(v586, 0LL);
  if ( v586 )
  {
    v551 = sub_1BDB9B4(v586, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1646;
  v549->m_Items[16] = (DataMasterBase_o *)v586;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[16], (int32_t)v586, v553, v587);
  v588 = (ServantCardMaster_o *)sub_1BDBAC4(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v588, 0LL);
  if ( v588 )
  {
    v551 = sub_1BDB9B4(v588, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1646;
  v549->m_Items[17] = (DataMasterBase_o *)v588;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[17], (int32_t)v588, v553, v589);
  v590 = (EventMaster_o *)sub_1BDBAC4(EventMaster_TypeInfo);
  EventMaster___ctor(v590, 0LL);
  if ( v590 )
  {
    v551 = sub_1BDB9B4(v590, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1646;
  v549->m_Items[18] = (DataMasterBase_o *)v590;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[18], (int32_t)v590, v553, v591);
  v592 = (ItemMaster_o *)sub_1BDBAC4(ItemMaster_TypeInfo);
  ItemMaster___ctor(v592, 0LL);
  if ( v592 )
  {
    v551 = sub_1BDB9B4(v592, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1646;
  v549->m_Items[19] = (DataMasterBase_o *)v592;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[19], (int32_t)v592, v553, v593);
  v594 = (QuestMaster_o *)sub_1BDBAC4(QuestMaster_TypeInfo);
  QuestMaster___ctor(v594, 0LL);
  if ( v594 )
  {
    v551 = sub_1BDB9B4(v594, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1646;
  v549->m_Items[20] = (DataMasterBase_o *)v594;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[20], (int32_t)v594, v553, v595);
  v596 = (QuestAddMaster_o *)sub_1BDBAC4(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v596, 0LL);
  if ( v596 )
  {
    v551 = sub_1BDB9B4(v596, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1646;
  v549->m_Items[21] = (DataMasterBase_o *)v596;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[21], (int32_t)v596, v553, v597);
  v598 = (QuestReleaseMaster_o *)sub_1BDBAC4(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v598, 0LL);
  if ( v598 )
  {
    v551 = sub_1BDB9B4(v598, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1646;
  v549->m_Items[22] = (DataMasterBase_o *)v598;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[22], (int32_t)v598, v553, v599);
  v600 = (QuestDateRangeMaster_o *)sub_1BDBAC4(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v600, 0LL);
  if ( v600 )
  {
    v551 = sub_1BDB9B4(v600, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1646;
  v549->m_Items[23] = (DataMasterBase_o *)v600;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[23], (int32_t)v600, v553, v601);
  v602 = (QuestPhaseMaster_o *)sub_1BDBAC4(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v602, 0LL);
  if ( v602 )
  {
    v551 = sub_1BDB9B4(v602, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1646;
  v549->m_Items[24] = (DataMasterBase_o *)v602;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[24], (int32_t)v602, v553, v603);
  v604 = (QuestPhaseDetailMaster_o *)sub_1BDBAC4(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v604, 0LL);
  if ( v604 )
  {
    v551 = sub_1BDB9B4(v604, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1646;
  v549->m_Items[25] = (DataMasterBase_o *)v604;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[25], (int32_t)v604, v553, v605);
  v606 = (QuestGroupMaster_o *)sub_1BDBAC4(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v606, 0LL);
  if ( v606 )
  {
    v551 = sub_1BDB9B4(v606, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1646;
  v549->m_Items[26] = (DataMasterBase_o *)v606;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[26], (int32_t)v606, v553, v607);
  v608 = (QuestRandomGroupMaster_o *)sub_1BDBAC4(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v608, 0LL);
  if ( v608 )
  {
    v551 = sub_1BDB9B4(v608, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1646;
  v549->m_Items[27] = (DataMasterBase_o *)v608;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[27], (int32_t)v608, v553, v609);
  v610 = (QuestConsumeItemMaster_o *)sub_1BDBAC4(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v610, 0LL);
  if ( v610 )
  {
    v551 = sub_1BDB9B4(v610, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1646;
  v549->m_Items[28] = (DataMasterBase_o *)v610;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[28], (int32_t)v610, v553, v611);
  v612 = (QuestMessageMaster_o *)sub_1BDBAC4(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v612, 0LL);
  if ( v612 )
  {
    v551 = sub_1BDB9B4(v612, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1646;
  v549->m_Items[29] = (DataMasterBase_o *)v612;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[29], (int32_t)v612, v553, v613);
  v614 = (UserQuestInfoMaster_o *)sub_1BDBAC4(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v614, 0LL);
  if ( v614 )
  {
    v551 = sub_1BDB9B4(v614, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1646;
  v549->m_Items[30] = (DataMasterBase_o *)v614;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[30], (int32_t)v614, v553, v615);
  v616 = (UserQuestRecordMaster_o *)sub_1BDBAC4(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v616, 0LL);
  if ( v616 )
  {
    v551 = sub_1BDB9B4(v616, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1646;
  v549->m_Items[31] = (DataMasterBase_o *)v616;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[31], (int32_t)v616, v553, v617);
  v618 = (ViewQuestInfoMaster_o *)sub_1BDBAC4(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v618, 0LL);
  if ( v618 )
  {
    v551 = sub_1BDB9B4(v618, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1646;
  v549->m_Items[32] = (DataMasterBase_o *)v618;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[32], (int32_t)v618, v553, v619);
  v620 = (ViewEnemyMaster_o *)sub_1BDBAC4(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v620, 0LL);
  if ( v620 )
  {
    v551 = sub_1BDB9B4(v620, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1646;
  v549->m_Items[33] = (DataMasterBase_o *)v620;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[33], (int32_t)v620, v553, v621);
  v622 = (ViewQuestEnemyInfoMaster_o *)sub_1BDBAC4(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v622, 0LL);
  if ( v622 )
  {
    v551 = sub_1BDB9B4(v622, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1646;
  v549->m_Items[34] = (DataMasterBase_o *)v622;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[34], (int32_t)v622, v553, v623);
  v624 = (BlankEarthSpotMaster_o *)sub_1BDBAC4(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v624, 0LL);
  if ( v624 )
  {
    v551 = sub_1BDB9B4(v624, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1646;
  v549->m_Items[35] = (DataMasterBase_o *)v624;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[35], (int32_t)v624, v553, v625);
  v626 = (BlankEarthSpotAddMaster_o *)sub_1BDBAC4(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v626, 0LL);
  if ( v626 )
  {
    v551 = sub_1BDB9B4(v626, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1646;
  v549->m_Items[36] = (DataMasterBase_o *)v626;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[36], (int32_t)v626, v553, v627);
  v628 = (SpotMaster_o *)sub_1BDBAC4(SpotMaster_TypeInfo);
  SpotMaster___ctor(v628, 0LL);
  if ( v628 )
  {
    v551 = sub_1BDB9B4(v628, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1646;
  v549->m_Items[37] = (DataMasterBase_o *)v628;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[37], (int32_t)v628, v553, v629);
  v630 = (SpotImageMaster_o *)sub_1BDBAC4(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v630, 0LL);
  if ( v630 )
  {
    v551 = sub_1BDB9B4(v630, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1646;
  v549->m_Items[38] = (DataMasterBase_o *)v630;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[38], (int32_t)v630, v553, v631);
  v632 = (SpotRoadMaster_o *)sub_1BDBAC4(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v632, 0LL);
  if ( v632 )
  {
    v551 = sub_1BDB9B4(v632, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1646;
  v549->m_Items[39] = (DataMasterBase_o *)v632;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[39], (int32_t)v632, v553, v633);
  v634 = (SpotPathMaster_o *)sub_1BDBAC4(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v634, 0LL);
  if ( v634 )
  {
    v551 = sub_1BDB9B4(v634, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1646;
  v549->m_Items[40] = (DataMasterBase_o *)v634;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[40], (int32_t)v634, v553, v635);
  v636 = (SpotAddMaster_o *)sub_1BDBAC4(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v636, 0LL);
  if ( v636 )
  {
    v551 = sub_1BDB9B4(v636, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1646;
  v549->m_Items[41] = (DataMasterBase_o *)v636;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[41], (int32_t)v636, v553, v637);
  v638 = (MapGimmickMaster_o *)sub_1BDBAC4(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v638, 0LL);
  if ( v638 )
  {
    v551 = sub_1BDB9B4(v638, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1646;
  v549->m_Items[42] = (DataMasterBase_o *)v638;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[42], (int32_t)v638, v553, v639);
  v640 = (GiftMaster_o *)sub_1BDBAC4(GiftMaster_TypeInfo);
  GiftMaster___ctor(v640, 0LL);
  if ( v640 )
  {
    v551 = sub_1BDB9B4(v640, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1646;
  v549->m_Items[43] = (DataMasterBase_o *)v640;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[43], (int32_t)v640, v553, v641);
  v642 = (GiftAddMaster_o *)sub_1BDBAC4(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v642, 0LL);
  if ( v642 )
  {
    v551 = sub_1BDB9B4(v642, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1646;
  v549->m_Items[44] = (DataMasterBase_o *)v642;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[44], (int32_t)v642, v553, v643);
  v644 = (ShopMaster_o *)sub_1BDBAC4(ShopMaster_TypeInfo);
  ShopMaster___ctor(v644, 0LL);
  if ( v644 )
  {
    v551 = sub_1BDB9B4(v644, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1646;
  v549->m_Items[45] = (DataMasterBase_o *)v644;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[45], (int32_t)v644, v553, v645);
  v646 = (StoneShopMaster_o *)sub_1BDBAC4(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v646, 0LL);
  if ( v646 )
  {
    v551 = sub_1BDB9B4(v646, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1646;
  v549->m_Items[46] = (DataMasterBase_o *)v646;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[46], (int32_t)v646, v553, v647);
  v648 = (BankShopMaster_o *)sub_1BDBAC4(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v648, 0LL);
  if ( v648 )
  {
    v551 = sub_1BDB9B4(v648, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1646;
  v549->m_Items[47] = (DataMasterBase_o *)v648;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[47], (int32_t)v648, v553, v649);
  v650 = (ShopScriptMaster_o *)sub_1BDBAC4(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v650, 0LL);
  if ( v650 )
  {
    v551 = sub_1BDB9B4(v650, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1646;
  v549->m_Items[48] = (DataMasterBase_o *)v650;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[48], (int32_t)v650, v553, v651);
  v652 = (StageMaster_o *)sub_1BDBAC4(StageMaster_TypeInfo);
  StageMaster___ctor(v652, 0LL);
  if ( v652 )
  {
    v551 = sub_1BDB9B4(v652, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1646;
  v549->m_Items[49] = (DataMasterBase_o *)v652;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[49], (int32_t)v652, v553, v653);
  v654 = (ServantGroupMaster_o *)sub_1BDBAC4(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v654, 0LL);
  if ( v654 )
  {
    v551 = sub_1BDB9B4(v654, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1646;
  v549->m_Items[50] = (DataMasterBase_o *)v654;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[50], (int32_t)v654, v553, v655);
  v656 = (ServantLimitMaster_o *)sub_1BDBAC4(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v656, 0LL);
  if ( v656 )
  {
    v551 = sub_1BDB9B4(v656, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1646;
  v549->m_Items[51] = (DataMasterBase_o *)v656;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[51], (int32_t)v656, v553, v657);
  v658 = (ServantLimitAddMaster_o *)sub_1BDBAC4(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v658, 0LL);
  if ( v658 )
  {
    v551 = sub_1BDB9B4(v658, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1646;
  v549->m_Items[52] = (DataMasterBase_o *)v658;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[52], (int32_t)v658, v553, v659);
  v660 = (ServantSkillMaster_o *)sub_1BDBAC4(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v660, 0LL);
  if ( v660 )
  {
    v551 = sub_1BDB9B4(v660, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1646;
  v549->m_Items[53] = (DataMasterBase_o *)v660;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[53], (int32_t)v660, v553, v661);
  v662 = (ServantPassiveSkillMaster_o *)sub_1BDBAC4(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v662, 0LL);
  if ( v662 )
  {
    v551 = sub_1BDB9B4(v662, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1646;
  v549->m_Items[54] = (DataMasterBase_o *)v662;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[54], (int32_t)v662, v553, v663);
  v664 = (BgmMaster_o *)sub_1BDBAC4(BgmMaster_TypeInfo);
  BgmMaster___ctor(v664, 0LL);
  if ( v664 )
  {
    v551 = sub_1BDB9B4(v664, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1646;
  v549->m_Items[55] = (DataMasterBase_o *)v664;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[55], (int32_t)v664, v553, v665);
  v666 = (ServantScriptMaster_o *)sub_1BDBAC4(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v666, 0LL);
  if ( v666 )
  {
    v551 = sub_1BDB9B4(v666, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1646;
  v549->m_Items[56] = (DataMasterBase_o *)v666;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[56], (int32_t)v666, v553, v667);
  v668 = (NewsMaster_o *)sub_1BDBAC4(NewsMaster_TypeInfo);
  NewsMaster___ctor(v668, 0LL);
  if ( v668 )
  {
    v551 = sub_1BDB9B4(v668, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1646;
  v549->m_Items[57] = (DataMasterBase_o *)v668;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[57], (int32_t)v668, v553, v669);
  v670 = (TelopMaster_o *)sub_1BDBAC4(TelopMaster_TypeInfo);
  TelopMaster___ctor(v670, 0LL);
  if ( v670 )
  {
    v551 = sub_1BDB9B4(v670, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1646;
  v549->m_Items[58] = (DataMasterBase_o *)v670;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[58], (int32_t)v670, v553, v671);
  v672 = (UserExpMaster_o *)sub_1BDBAC4(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v672, 0LL);
  if ( v672 )
  {
    v551 = sub_1BDB9B4(v672, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1646;
  v549->m_Items[59] = (DataMasterBase_o *)v672;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[59], (int32_t)v672, v553, v673);
  v674 = (TreasureDvcMaster_o *)sub_1BDBAC4(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v674, 0LL);
  if ( v674 )
  {
    v551 = sub_1BDB9B4(v674, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1646;
  v549->m_Items[60] = (DataMasterBase_o *)v674;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[60], (int32_t)v674, v553, v675);
  v676 = (ServantTreasureDvcMaster_o *)sub_1BDBAC4(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v676, 0LL);
  if ( v676 )
  {
    v551 = sub_1BDB9B4(v676, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1646;
  v549->m_Items[61] = (DataMasterBase_o *)v676;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[61], (int32_t)v676, v553, v677);
  v678 = (SkillMaster_o *)sub_1BDBAC4(SkillMaster_TypeInfo);
  SkillMaster___ctor(v678, 0LL);
  if ( v678 )
  {
    v551 = sub_1BDB9B4(v678, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1646;
  v549->m_Items[62] = (DataMasterBase_o *)v678;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[62], (int32_t)v678, v553, v679);
  v680 = (SkillLvMaster_o *)sub_1BDBAC4(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v680, 0LL);
  if ( v680 )
  {
    v551 = sub_1BDB9B4(v680, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1646;
  v549->m_Items[63] = (DataMasterBase_o *)v680;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[63], (int32_t)v680, v553, v681);
  v682 = (SkillDetailMaster_o *)sub_1BDBAC4(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v682, 0LL);
  if ( v682 )
  {
    v551 = sub_1BDB9B4(v682, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1646;
  v549->m_Items[64] = (DataMasterBase_o *)v682;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[64], (int32_t)v682, v553, v683);
  v684 = (CommandSpellMaster_o *)sub_1BDBAC4(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v684, 0LL);
  if ( v684 )
  {
    v551 = sub_1BDB9B4(v684, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1646;
  v549->m_Items[65] = (DataMasterBase_o *)v684;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[65], (int32_t)v684, v553, v685);
  v686 = (EquipMaster_o *)sub_1BDBAC4(EquipMaster_TypeInfo);
  EquipMaster___ctor(v686, 0LL);
  if ( v686 )
  {
    v551 = sub_1BDB9B4(v686, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1646;
  v549->m_Items[66] = (DataMasterBase_o *)v686;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[66], (int32_t)v686, v553, v687);
  v688 = (EquipExpMaster_o *)sub_1BDBAC4(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v688, 0LL);
  if ( v688 )
  {
    v551 = sub_1BDB9B4(v688, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1646;
  v549->m_Items[67] = (DataMasterBase_o *)v688;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[67], (int32_t)v688, v553, v689);
  v690 = (EquipSkillMaster_o *)sub_1BDBAC4(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v690, 0LL);
  if ( v690 )
  {
    v551 = sub_1BDB9B4(v690, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1646;
  v549->m_Items[68] = (DataMasterBase_o *)v690;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[68], (int32_t)v690, v553, v691);
  v692 = (SubEquipMaster_o *)sub_1BDBAC4(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v692, 0LL);
  if ( v692 )
  {
    v551 = sub_1BDB9B4(v692, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1646;
  v549->m_Items[69] = (DataMasterBase_o *)v692;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[69], (int32_t)v692, v553, v693);
  v694 = (AccessaryMaster_o *)sub_1BDBAC4(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v694, 0LL);
  if ( v694 )
  {
    v551 = sub_1BDB9B4(v694, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1646;
  v549->m_Items[70] = (DataMasterBase_o *)v694;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[70], (int32_t)v694, v553, v695);
  v696 = (UserPresentBoxMaster_o *)sub_1BDBAC4(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v696, 0LL);
  if ( v696 )
  {
    v551 = sub_1BDB9B4(v696, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1646;
  v549->m_Items[71] = (DataMasterBase_o *)v696;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[71], (int32_t)v696, v553, v697);
  v698 = (UserDeckMaster_o *)sub_1BDBAC4(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v698, 0LL);
  if ( v698 )
  {
    v551 = sub_1BDB9B4(v698, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1646;
  v549->m_Items[72] = (DataMasterBase_o *)v698;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[72], (int32_t)v698, v553, v699);
  v700 = (UserSubEquipMaster_o *)sub_1BDBAC4(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v700, 0LL);
  if ( v700 )
  {
    v551 = sub_1BDB9B4(v700, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1646;
  v549->m_Items[73] = (DataMasterBase_o *)v700;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[73], (int32_t)v700, v553, v701);
  v702 = (GachaMaster_o *)sub_1BDBAC4(GachaMaster_TypeInfo);
  GachaMaster___ctor(v702, 0LL);
  if ( v702 )
  {
    v551 = sub_1BDB9B4(v702, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1646;
  v549->m_Items[74] = (DataMasterBase_o *)v702;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[74], (int32_t)v702, v553, v703);
  v704 = (GachaImageMaster_o *)sub_1BDBAC4(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v704, 0LL);
  if ( v704 )
  {
    v551 = sub_1BDB9B4(v704, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1646;
  v549->m_Items[75] = (DataMasterBase_o *)v704;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[75], (int32_t)v704, v553, v705);
  v706 = (UserGachaMaster_o *)sub_1BDBAC4(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v706, 0LL);
  if ( v706 )
  {
    v551 = sub_1BDB9B4(v706, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1646;
  v549->m_Items[76] = (DataMasterBase_o *)v706;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[76], (int32_t)v706, v553, v707);
  v708 = (UserEquipMaster_o *)sub_1BDBAC4(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v708, 0LL);
  if ( v708 )
  {
    v551 = sub_1BDB9B4(v708, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1646;
  v549->m_Items[77] = (DataMasterBase_o *)v708;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[77], (int32_t)v708, v553, v709);
  v710 = (UserServantCollectionMaster_o *)sub_1BDBAC4(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v710, 0LL);
  if ( v710 )
  {
    v551 = sub_1BDB9B4(v710, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1646;
  v549->m_Items[78] = (DataMasterBase_o *)v710;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[78], (int32_t)v710, v553, v711);
  v712 = (FriendshipMaster_o *)sub_1BDBAC4(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v712, 0LL);
  if ( v712 )
  {
    v551 = sub_1BDB9B4(v712, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1646;
  v549->m_Items[79] = (DataMasterBase_o *)v712;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[79], (int32_t)v712, v553, v713);
  v714 = (GachaTicketMaster_o *)sub_1BDBAC4(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v714, 0LL);
  if ( v714 )
  {
    v551 = sub_1BDB9B4(v714, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1646;
  v549->m_Items[80] = (DataMasterBase_o *)v714;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[80], (int32_t)v714, v553, v715);
  v716 = (UserFormationMaster_o *)sub_1BDBAC4(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v716, 0LL);
  if ( v716 )
  {
    v551 = sub_1BDB9B4(v716, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1646;
  v549->m_Items[81] = (DataMasterBase_o *)v716;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[81], (int32_t)v716, v553, v717);
  v718 = (FunctionMaster_o *)sub_1BDBAC4(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v718, 0LL);
  if ( v718 )
  {
    v551 = sub_1BDB9B4(v718, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1646;
  v549->m_Items[82] = (DataMasterBase_o *)v718;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[82], (int32_t)v718, v553, v719);
  v720 = (BuffMaster_o *)sub_1BDBAC4(BuffMaster_TypeInfo);
  BuffMaster___ctor(v720, 0LL);
  if ( v720 )
  {
    v551 = sub_1BDB9B4(v720, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1646;
  v549->m_Items[83] = (DataMasterBase_o *)v720;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[83], (int32_t)v720, v553, v721);
  v722 = (GachaReleaseMaster_o *)sub_1BDBAC4(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v722, 0LL);
  if ( v722 )
  {
    v551 = sub_1BDB9B4(v722, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1646;
  v549->m_Items[84] = (DataMasterBase_o *)v722;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[84], (int32_t)v722, v553, v723);
  v724 = (CombineQpMaster_o *)sub_1BDBAC4(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v724, 0LL);
  if ( v724 )
  {
    v551 = sub_1BDB9B4(v724, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1646;
  v549->m_Items[85] = (DataMasterBase_o *)v724;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[85], (int32_t)v724, v553, v725);
  v726 = (CombineMaterialMaster_o *)sub_1BDBAC4(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v726, 0LL);
  if ( v726 )
  {
    v551 = sub_1BDB9B4(v726, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1646;
  v549->m_Items[86] = (DataMasterBase_o *)v726;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[86], (int32_t)v726, v553, v727);
  v728 = (EventCombineMaster_o *)sub_1BDBAC4(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v728, 0LL);
  if ( v728 )
  {
    v551 = sub_1BDB9B4(v728, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1646;
  v549->m_Items[87] = (DataMasterBase_o *)v728;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[87], (int32_t)v728, v553, v729);
  v730 = (ServantExpMaster_o *)sub_1BDBAC4(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v730, 0LL);
  if ( v730 )
  {
    v551 = sub_1BDB9B4(v730, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1646;
  v549->m_Items[88] = (DataMasterBase_o *)v730;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[88], (int32_t)v730, v553, v731);
  v732 = (CombineSkillMaster_o *)sub_1BDBAC4(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v732, 0LL);
  if ( v732 )
  {
    v551 = sub_1BDB9B4(v732, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1646;
  v549->m_Items[89] = (DataMasterBase_o *)v732;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[89], (int32_t)v732, v553, v733);
  v734 = (CombineTdMaster_o *)sub_1BDBAC4(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v734, 0LL);
  if ( v734 )
  {
    v551 = sub_1BDB9B4(v734, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1646;
  v549->m_Items[90] = (DataMasterBase_o *)v734;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[90], (int32_t)v734, v553, v735);
  v736 = (EventQuestMaster_o *)sub_1BDBAC4(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v736, 0LL);
  if ( v736 )
  {
    v551 = sub_1BDB9B4(v736, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1646;
  v549->m_Items[91] = (DataMasterBase_o *)v736;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[91], (int32_t)v736, v553, v737);
  v738 = (EventCampaignMaster_o *)sub_1BDBAC4(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v738, 0LL);
  if ( v738 )
  {
    v551 = sub_1BDB9B4(v738, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1646;
  v549->m_Items[92] = (DataMasterBase_o *)v738;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[92], (int32_t)v738, v553, v739);
  v740 = (IllustratorMaster_o *)sub_1BDBAC4(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v740, 0LL);
  if ( v740 )
  {
    v551 = sub_1BDB9B4(v740, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1646;
  v549->m_Items[93] = (DataMasterBase_o *)v740;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[93], (int32_t)v740, v553, v741);
  v742 = (CvMaster_o *)sub_1BDBAC4(CvMaster_TypeInfo);
  CvMaster___ctor(v742, 0LL);
  if ( v742 )
  {
    v551 = sub_1BDB9B4(v742, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1646;
  v549->m_Items[94] = (DataMasterBase_o *)v742;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[94], (int32_t)v742, v553, v743);
  v744 = (TreasureDvcLvMaster_o *)sub_1BDBAC4(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v744, 0LL);
  if ( v744 )
  {
    v551 = sub_1BDB9B4(v744, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1646;
  v549->m_Items[95] = (DataMasterBase_o *)v744;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[95], (int32_t)v744, v553, v745);
  v746 = (TreasureDvcDetailMaster_o *)sub_1BDBAC4(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v746, 0LL);
  if ( v746 )
  {
    v551 = sub_1BDB9B4(v746, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1646;
  v549->m_Items[96] = (DataMasterBase_o *)v746;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[96], (int32_t)v746, v553, v747);
  v748 = (UserFollowerMaster_o *)sub_1BDBAC4(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v748, 0LL);
  if ( v748 )
  {
    v551 = sub_1BDB9B4(v748, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1646;
  v549->m_Items[97] = (DataMasterBase_o *)v748;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[97], (int32_t)v748, v553, v749);
  v750 = (NpcFollowerMaster_o *)sub_1BDBAC4(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v750, 0LL);
  if ( v750 )
  {
    v551 = sub_1BDB9B4(v750, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1646;
  v549->m_Items[98] = (DataMasterBase_o *)v750;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[98], (int32_t)v750, v553, v751);
  v752 = (NpcServantFollowerMaster_o *)sub_1BDBAC4(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v752, 0LL);
  if ( v752 )
  {
    v551 = sub_1BDB9B4(v752, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1646;
  v549->m_Items[99] = (DataMasterBase_o *)v752;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[99], (int32_t)v752, v553, v753);
  v754 = (UserEventMaster_o *)sub_1BDBAC4(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v754, 0LL);
  if ( v754 )
  {
    v551 = sub_1BDB9B4(v754, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1646;
  v549->m_Items[100] = (DataMasterBase_o *)v754;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[100], (int32_t)v754, v553, v755);
  v756 = (UserShopMaster_o *)sub_1BDBAC4(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v756, 0LL);
  if ( v756 )
  {
    v551 = sub_1BDB9B4(v756, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1646;
  v549->m_Items[101] = (DataMasterBase_o *)v756;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[101], (int32_t)v756, v553, v757);
  v758 = (UserContinueMaster_o *)sub_1BDBAC4(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v758, 0LL);
  if ( v758 )
  {
    v551 = sub_1BDB9B4(v758, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1646;
  v549->m_Items[102] = (DataMasterBase_o *)v758;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[102], (int32_t)v758, v553, v759);
  v760 = (ConstantMaster_o *)sub_1BDBAC4(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v760, 0LL);
  if ( v760 )
  {
    v551 = sub_1BDB9B4(v760, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1646;
  v549->m_Items[103] = (DataMasterBase_o *)v760;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[103], (int32_t)v760, v553, v761);
  v762 = (ConstantLongMaster_o *)sub_1BDBAC4(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v762, 0LL);
  if ( v762 )
  {
    v551 = sub_1BDB9B4(v762, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1646;
  v549->m_Items[104] = (DataMasterBase_o *)v762;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[104], (int32_t)v762, v553, v763);
  v764 = (ConstantStrMaster_o *)sub_1BDBAC4(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v764, 0LL);
  if ( v764 )
  {
    v551 = sub_1BDB9B4(v764, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1646;
  v549->m_Items[105] = (DataMasterBase_o *)v764;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[105], (int32_t)v764, v553, v765);
  v766 = (AiMaster_o *)sub_1BDBAC4(AiMaster_TypeInfo);
  AiMaster___ctor(v766, 0LL);
  if ( v766 )
  {
    v551 = sub_1BDB9B4(v766, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1646;
  v549->m_Items[106] = (DataMasterBase_o *)v766;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[106], (int32_t)v766, v553, v767);
  v768 = (AiActMaster_o *)sub_1BDBAC4(AiActMaster_TypeInfo);
  AiActMaster___ctor(v768, 0LL);
  if ( v768 )
  {
    v551 = sub_1BDB9B4(v768, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1646;
  v549->m_Items[107] = (DataMasterBase_o *)v768;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[107], (int32_t)v768, v553, v769);
  v770 = (AttriRelationMaster_o *)sub_1BDBAC4(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v770, 0LL);
  if ( v770 )
  {
    v551 = sub_1BDB9B4(v770, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1646;
  v549->m_Items[108] = (DataMasterBase_o *)v770;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[108], (int32_t)v770, v553, v771);
  v772 = (ClassRelationMaster_o *)sub_1BDBAC4(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v772, 0LL);
  if ( v772 )
  {
    v551 = sub_1BDB9B4(v772, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1646;
  v549->m_Items[109] = (DataMasterBase_o *)v772;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[109], (int32_t)v772, v553, v773);
  v774 = (EffectMaster_o *)sub_1BDBAC4(EffectMaster_TypeInfo);
  EffectMaster___ctor(v774, 0LL);
  if ( v774 )
  {
    v551 = sub_1BDB9B4(v774, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1646;
  v549->m_Items[110] = (DataMasterBase_o *)v774;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[110], (int32_t)v774, v553, v775);
  v776 = (EquipImageMaster_o *)sub_1BDBAC4(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v776, 0LL);
  if ( v776 )
  {
    v551 = sub_1BDB9B4(v776, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1646;
  v549->m_Items[111] = (DataMasterBase_o *)v776;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[111], (int32_t)v776, v553, v777);
  v778 = (ServantVoiceMaster_o *)sub_1BDBAC4(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v778, 0LL);
  if ( v778 )
  {
    v551 = sub_1BDB9B4(v778, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1646;
  v549->m_Items[112] = (DataMasterBase_o *)v778;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[112], (int32_t)v778, v553, v779);
  v780 = (CombineLimitMaster_o *)sub_1BDBAC4(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v780, 0LL);
  if ( v780 )
  {
    v551 = sub_1BDB9B4(v780, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1646;
  v549->m_Items[113] = (DataMasterBase_o *)v780;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[113], (int32_t)v780, v553, v781);
  v782 = (CardMaster_o *)sub_1BDBAC4(CardMaster_TypeInfo);
  CardMaster___ctor(v782, 0LL);
  if ( v782 )
  {
    v551 = sub_1BDB9B4(v782, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1646;
  v549->m_Items[114] = (DataMasterBase_o *)v782;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[114], (int32_t)v782, v553, v783);
  v784 = (CombineQpSvtEquipMaster_o *)sub_1BDBAC4(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v784, 0LL);
  if ( v784 )
  {
    v551 = sub_1BDB9B4(v784, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1646;
  v549->m_Items[115] = (DataMasterBase_o *)v784;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[115], (int32_t)v784, v553, v785);
  v786 = (ServantRarityMaster_o *)sub_1BDBAC4(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v786, 0LL);
  if ( v786 )
  {
    v551 = sub_1BDB9B4(v786, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1646;
  v549->m_Items[116] = (DataMasterBase_o *)v786;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[116], (int32_t)v786, v553, v787);
  v788 = (SetItemMaster_o *)sub_1BDBAC4(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v788, 0LL);
  if ( v788 )
  {
    v551 = sub_1BDB9B4(v788, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1646;
  v549->m_Items[117] = (DataMasterBase_o *)v788;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[117], (int32_t)v788, v553, v789);
  v790 = (RecoverMaster_o *)sub_1BDBAC4(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v790, 0LL);
  if ( v790 )
  {
    v551 = sub_1BDB9B4(v790, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1646;
  v549->m_Items[118] = (DataMasterBase_o *)v790;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[118], (int32_t)v790, v553, v791);
  v792 = (BannerMaster_o *)sub_1BDBAC4(BannerMaster_TypeInfo);
  BannerMaster___ctor(v792, 0LL);
  if ( v792 )
  {
    v551 = sub_1BDB9B4(v792, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1646;
  v549->m_Items[119] = (DataMasterBase_o *)v792;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[119], (int32_t)v792, v553, v793);
  v794 = (ShopReleaseMaster_o *)sub_1BDBAC4(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v794, 0LL);
  if ( v794 )
  {
    v551 = sub_1BDB9B4(v794, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1646;
  v549->m_Items[120] = (DataMasterBase_o *)v794;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[120], (int32_t)v794, v553, v795);
  v796 = (EventRewardMaster_o *)sub_1BDBAC4(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v796, 0LL);
  if ( v796 )
  {
    v551 = sub_1BDB9B4(v796, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1646;
  v549->m_Items[121] = (DataMasterBase_o *)v796;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[121], (int32_t)v796, v553, v797);
  v798 = (EventDetailMaster_o *)sub_1BDBAC4(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v798, 0LL);
  if ( v798 )
  {
    v551 = sub_1BDB9B4(v798, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1646;
  v549->m_Items[122] = (DataMasterBase_o *)v798;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[122], (int32_t)v798, v553, v799);
  v800 = (EventServantMaster_o *)sub_1BDBAC4(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v800, 0LL);
  if ( v800 )
  {
    v551 = sub_1BDB9B4(v800, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1646;
  v549->m_Items[123] = (DataMasterBase_o *)v800;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[123], (int32_t)v800, v553, v801);
  v802 = (BoxGachaMaster_o *)sub_1BDBAC4(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v802, 0LL);
  if ( v802 )
  {
    v551 = sub_1BDB9B4(v802, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1646;
  v549->m_Items[124] = (DataMasterBase_o *)v802;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[124], (int32_t)v802, v553, v803);
  v804 = (BoxGachaBaseMaster_o *)sub_1BDBAC4(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v804, 0LL);
  if ( v804 )
  {
    v551 = sub_1BDB9B4(v804, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1646;
  v549->m_Items[125] = (DataMasterBase_o *)v804;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[125], (int32_t)v804, v553, v805);
  v806 = (BoxGachaTalkMaster_o *)sub_1BDBAC4(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v806, 0LL);
  if ( v806 )
  {
    v551 = sub_1BDB9B4(v806, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1646;
  v549->m_Items[126] = (DataMasterBase_o *)v806;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[126], (int32_t)v806, v553, v807);
  v808 = (UserBoxGachaMaster_o *)sub_1BDBAC4(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v808, 0LL);
  if ( v808 )
  {
    v551 = sub_1BDB9B4(v808, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1646;
  v549->m_Items[127] = (DataMasterBase_o *)v808;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[127], (int32_t)v808, v553, v809);
  v810 = (BoxGachaHistoryMaster_o *)sub_1BDBAC4(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v810, 0LL);
  if ( v810 )
  {
    v551 = sub_1BDB9B4(v810, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1646;
  v549->m_Items[128] = (DataMasterBase_o *)v810;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[128], (int32_t)v810, v553, v811);
  v812 = (BattleBgMaster_o *)sub_1BDBAC4(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v812, 0LL);
  if ( v812 )
  {
    v551 = sub_1BDB9B4(v812, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1646;
  v549->m_Items[129] = (DataMasterBase_o *)v812;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[129], (int32_t)v812, v553, v813);
  v814 = (TipsBattleMaster_o *)sub_1BDBAC4(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v814, 0LL);
  if ( v814 )
  {
    v551 = sub_1BDB9B4(v814, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1646;
  v549->m_Items[130] = (DataMasterBase_o *)v814;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[130], (int32_t)v814, v553, v815);
  v816 = (UserLoginMaster_o *)sub_1BDBAC4(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v816, 0LL);
  if ( v816 )
  {
    v551 = sub_1BDB9B4(v816, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1646;
  v549->m_Items[131] = (DataMasterBase_o *)v816;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[131], (int32_t)v816, v553, v817);
  v818 = (VoiceMaster_o *)sub_1BDBAC4(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v818, 0LL);
  if ( v818 )
  {
    v551 = sub_1BDB9B4(v818, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1646;
  v549->m_Items[132] = (DataMasterBase_o *)v818;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[132], (int32_t)v818, v553, v819);
  v820 = (EventRewardExtraMaster_o *)sub_1BDBAC4(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v820, 0LL);
  if ( v820 )
  {
    v551 = sub_1BDB9B4(v820, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1646;
  v549->m_Items[133] = (DataMasterBase_o *)v820;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[133], (int32_t)v820, v553, v821);
  v822 = (EventMissionMaster_o *)sub_1BDBAC4(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v822, 0LL);
  if ( v822 )
  {
    v551 = sub_1BDB9B4(v822, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1646;
  v549->m_Items[134] = (DataMasterBase_o *)v822;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[134], (int32_t)v822, v553, v823);
  v824 = (EventMissionActionMaster_o *)sub_1BDBAC4(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v824, 0LL);
  if ( v824 )
  {
    v551 = sub_1BDB9B4(v824, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1646;
  v549->m_Items[135] = (DataMasterBase_o *)v824;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[135], (int32_t)v824, v553, v825);
  v826 = (EventMissionActionAddMaster_o *)sub_1BDBAC4(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v826, 0LL);
  if ( v826 )
  {
    v551 = sub_1BDB9B4(v826, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1646;
  v549->m_Items[136] = (DataMasterBase_o *)v826;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[136], (int32_t)v826, v553, v827);
  v828 = (EventMissionConditionMaster_o *)sub_1BDBAC4(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v828, 0LL);
  if ( v828 )
  {
    v551 = sub_1BDB9B4(v828, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1646;
  v549->m_Items[137] = (DataMasterBase_o *)v828;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[137], (int32_t)v828, v553, v829);
  v830 = (EventMissionCondDetailMaster_o *)sub_1BDBAC4(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v830, 0LL);
  if ( v830 )
  {
    v551 = sub_1BDB9B4(v830, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1646;
  v549->m_Items[138] = (DataMasterBase_o *)v830;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[138], (int32_t)v830, v553, v831);
  v832 = (EventMissionAddMaster_o *)sub_1BDBAC4(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v832, 0LL);
  if ( v832 )
  {
    v551 = sub_1BDB9B4(v832, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1646;
  v549->m_Items[139] = (DataMasterBase_o *)v832;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[139], (int32_t)v832, v553, v833);
  v834 = (CompleteMissionMaster_o *)sub_1BDBAC4(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v834, 0LL);
  if ( v834 )
  {
    v551 = sub_1BDB9B4(v834, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1646;
  v549->m_Items[140] = (DataMasterBase_o *)v834;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[140], (int32_t)v834, v553, v835);
  v836 = (EventRewardSetMaster_o *)sub_1BDBAC4(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v836, 0LL);
  if ( v836 )
  {
    v551 = sub_1BDB9B4(v836, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1646;
  v549->m_Items[141] = (DataMasterBase_o *)v836;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[141], (int32_t)v836, v553, v837);
  v838 = (UserEventMissionMaster_o *)sub_1BDBAC4(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v838, 0LL);
  if ( v838 )
  {
    v551 = sub_1BDB9B4(v838, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1646;
  v549->m_Items[142] = (DataMasterBase_o *)v838;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[142], (int32_t)v838, v553, v839);
  v840 = (UserEventMissionCondDetailMaster_o *)sub_1BDBAC4(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v840, 0LL);
  if ( v840 )
  {
    v551 = sub_1BDB9B4(v840, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1646;
  v549->m_Items[143] = (DataMasterBase_o *)v840;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[143], (int32_t)v840, v553, v841);
  v842 = (BoxGachaBaseDetailMaster_o *)sub_1BDBAC4(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v842, 0LL);
  if ( v842 )
  {
    v551 = sub_1BDB9B4(v842, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1646;
  v549->m_Items[144] = (DataMasterBase_o *)v842;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[144], (int32_t)v842, v553, v843);
  v844 = (UserServantLeaderMaster_o *)sub_1BDBAC4(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v844, 0LL);
  if ( v844 )
  {
    v551 = sub_1BDB9B4(v844, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1646;
  v549->m_Items[145] = (DataMasterBase_o *)v844;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[145], (int32_t)v844, v553, v845);
  v846 = (ClosedMessageMaster_o *)sub_1BDBAC4(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v846, 0LL);
  if ( v846 )
  {
    v551 = sub_1BDB9B4(v846, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1646;
  v549->m_Items[146] = (DataMasterBase_o *)v846;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[146], (int32_t)v846, v553, v847);
  v848 = (FunctionGroupMaster_o *)sub_1BDBAC4(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v848, 0LL);
  if ( v848 )
  {
    v551 = sub_1BDB9B4(v848, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1646;
  v549->m_Items[147] = (DataMasterBase_o *)v848;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[147], (int32_t)v848, v553, v849);
  v850 = (EventRaidMaster_o *)sub_1BDBAC4(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v850, 0LL);
  if ( v850 )
  {
    v551 = sub_1BDB9B4(v850, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1646;
  v549->m_Items[148] = (DataMasterBase_o *)v850;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[148], (int32_t)v850, v553, v851);
  v852 = (TotalEventRaidMaster_o *)sub_1BDBAC4(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v852, 0LL);
  if ( v852 )
  {
    v551 = sub_1BDB9B4(v852, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1646;
  v549->m_Items[149] = (DataMasterBase_o *)v852;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[149], (int32_t)v852, v553, v853);
  v854 = (UserEventRaidMaster_o *)sub_1BDBAC4(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v854, 0LL);
  if ( v854 )
  {
    v551 = sub_1BDB9B4(v854, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1646;
  v549->m_Items[150] = (DataMasterBase_o *)v854;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[150], (int32_t)v854, v553, v855);
  v856 = (EventPointMaster_o *)sub_1BDBAC4(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v856, 0LL);
  if ( v856 )
  {
    v551 = sub_1BDB9B4(v856, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1646;
  v549->m_Items[151] = (DataMasterBase_o *)v856;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[151], (int32_t)v856, v553, v857);
  v858 = (EventPointGroupMaster_o *)sub_1BDBAC4(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v858, 0LL);
  if ( v858 )
  {
    v551 = sub_1BDB9B4(v858, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1646;
  v549->m_Items[152] = (DataMasterBase_o *)v858;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[152], (int32_t)v858, v553, v859);
  v860 = (TotalEventPointMaster_o *)sub_1BDBAC4(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v860, 0LL);
  if ( v860 )
  {
    v551 = sub_1BDB9B4(v860, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1646;
  v549->m_Items[153] = (DataMasterBase_o *)v860;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[153], (int32_t)v860, v553, v861);
  v862 = (UserEventPointMaster_o *)sub_1BDBAC4(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v862, 0LL);
  if ( v862 )
  {
    v551 = sub_1BDB9B4(v862, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1646;
  v549->m_Items[154] = (DataMasterBase_o *)v862;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[154], (int32_t)v862, v553, v863);
  v864 = (EventPointUpperMaster_o *)sub_1BDBAC4(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v864, 0LL);
  if ( v864 )
  {
    v551 = sub_1BDB9B4(v864, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1646;
  v549->m_Items[155] = (DataMasterBase_o *)v864;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[155], (int32_t)v864, v553, v865);
  v866 = (EventPointUpperReleaseMaster_o *)sub_1BDBAC4(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v866, 0LL);
  if ( v866 )
  {
    v551 = sub_1BDB9B4(v866, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1646;
  v549->m_Items[156] = (DataMasterBase_o *)v866;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[156], (int32_t)v866, v553, v867);
  v868 = (EventRaceMaster_o *)sub_1BDBAC4(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v868, 0LL);
  if ( v868 )
  {
    v551 = sub_1BDB9B4(v868, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1646;
  v549->m_Items[157] = (DataMasterBase_o *)v868;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[157], (int32_t)v868, v553, v869);
  v870 = (EventRaceResultMaster_o *)sub_1BDBAC4(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v870, 0LL);
  if ( v870 )
  {
    v551 = sub_1BDB9B4(v870, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1646;
  v549->m_Items[158] = (DataMasterBase_o *)v870;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[158], (int32_t)v870, v553, v871);
  v872 = (QuestRacePointMaster_o *)sub_1BDBAC4(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v872, 0LL);
  if ( v872 )
  {
    v551 = sub_1BDB9B4(v872, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1646;
  v549->m_Items[159] = (DataMasterBase_o *)v872;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[159], (int32_t)v872, v553, v873);
  v874 = (UserEventRaceMaster_o *)sub_1BDBAC4(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v874, 0LL);
  if ( v874 )
  {
    v551 = sub_1BDB9B4(v874, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1646;
  v549->m_Items[160] = (DataMasterBase_o *)v874;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[160], (int32_t)v874, v553, v875);
  v876 = (EventScriptMaster_o *)sub_1BDBAC4(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v876, 0LL);
  if ( v876 )
  {
    v551 = sub_1BDB9B4(v876, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1646;
  v549->m_Items[161] = (DataMasterBase_o *)v876;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[161], (int32_t)v876, v553, v877);
  v878 = (EventScriptReleaseMaster_o *)sub_1BDBAC4(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v878, 0LL);
  if ( v878 )
  {
    v551 = sub_1BDB9B4(v878, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1646;
  v549->m_Items[162] = (DataMasterBase_o *)v878;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[162], (int32_t)v878, v553, v879);
  v880 = (UserPresentHistoryMaster_o *)sub_1BDBAC4(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v880, 0LL);
  if ( v880 )
  {
    v551 = sub_1BDB9B4(v880, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1646;
  v549->m_Items[163] = (DataMasterBase_o *)v880;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[163], (int32_t)v880, v553, v881);
  v882 = (MstMissionMaster_o *)sub_1BDBAC4(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v882, 0LL);
  if ( v882 )
  {
    v551 = sub_1BDB9B4(v882, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1646;
  v549->m_Items[164] = (DataMasterBase_o *)v882;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[164], (int32_t)v882, v553, v883);
  v884 = (ServantExceedMaster_o *)sub_1BDBAC4(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v884, 0LL);
  if ( v884 )
  {
    v551 = sub_1BDB9B4(v884, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1646;
  v549->m_Items[165] = (DataMasterBase_o *)v884;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[165], (int32_t)v884, v553, v885);
  v886 = (PartialMaintenanceMaster_o *)sub_1BDBAC4(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v886, 0LL);
  if ( v886 )
  {
    v551 = sub_1BDB9B4(v886, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1646;
  v549->m_Items[166] = (DataMasterBase_o *)v886;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[166], (int32_t)v886, v553, v887);
  v888 = (GuideMaster_o *)sub_1BDBAC4(GuideMaster_TypeInfo);
  GuideMaster___ctor(v888, 0LL);
  if ( v888 )
  {
    v551 = sub_1BDB9B4(v888, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1646;
  v549->m_Items[167] = (DataMasterBase_o *)v888;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[167], (int32_t)v888, v553, v889);
  v890 = (MstMissionDisplayInfoMaster_o *)sub_1BDBAC4(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v890, 0LL);
  if ( v890 )
  {
    v551 = sub_1BDB9B4(v890, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1646;
  v549->m_Items[168] = (DataMasterBase_o *)v890;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[168], (int32_t)v890, v553, v891);
  v892 = (GachaGroupMaster_o *)sub_1BDBAC4(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v892, 0LL);
  if ( v892 )
  {
    v551 = sub_1BDB9B4(v892, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1646;
  v549->m_Items[169] = (DataMasterBase_o *)v892;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[169], (int32_t)v892, v553, v893);
  v894 = (QuestResetMaster_o *)sub_1BDBAC4(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v894, 0LL);
  if ( v894 )
  {
    v551 = sub_1BDB9B4(v894, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1646;
  v549->m_Items[170] = (DataMasterBase_o *)v894;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[170], (int32_t)v894, v553, v895);
  v896 = (WarAddMaster_o *)sub_1BDBAC4(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v896, 0LL);
  if ( v896 )
  {
    v551 = sub_1BDB9B4(v896, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1646;
  v549->m_Items[171] = (DataMasterBase_o *)v896;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[171], (int32_t)v896, v553, v897);
  v898 = (EventItemDisplayMaster_o *)sub_1BDBAC4(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v898, 0LL);
  if ( v898 )
  {
    v551 = sub_1BDB9B4(v898, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1646;
  v549->m_Items[172] = (DataMasterBase_o *)v898;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[172], (int32_t)v898, v553, v899);
  v900 = (EventItemDisplayGroupMaster_o *)sub_1BDBAC4(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v900, 0LL);
  if ( v900 )
  {
    v551 = sub_1BDB9B4(v900, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1646;
  v549->m_Items[173] = (DataMasterBase_o *)v900;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[173], (int32_t)v900, v553, v901);
  v902 = (EventItemDisplayReleaseMaster_o *)sub_1BDBAC4(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v902, 0LL);
  if ( v902 )
  {
    v551 = sub_1BDB9B4(v902, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1646;
  v549->m_Items[174] = (DataMasterBase_o *)v902;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[174], (int32_t)v902, v553, v903);
  v904 = (EventTutorialMaster_o *)sub_1BDBAC4(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v904, 0LL);
  if ( v904 )
  {
    v551 = sub_1BDB9B4(v904, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1646;
  v549->m_Items[175] = (DataMasterBase_o *)v904;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[175], (int32_t)v904, v553, v905);
  v906 = (EventTutorialCondMaster_o *)sub_1BDBAC4(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v906, 0LL);
  if ( v906 )
  {
    v551 = sub_1BDB9B4(v906, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1646;
  v549->m_Items[176] = (DataMasterBase_o *)v906;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[176], (int32_t)v906, v553, v907);
  v908 = (VoiceReleaseMaster_o *)sub_1BDBAC4(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v908, 0LL);
  if ( v908 )
  {
    v551 = sub_1BDB9B4(v908, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1646;
  v549->m_Items[177] = (DataMasterBase_o *)v908;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[177], (int32_t)v908, v553, v909);
  v910 = (EventSuperBossMaster_o *)sub_1BDBAC4(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v910, 0LL);
  if ( v910 )
  {
    v551 = sub_1BDB9B4(v910, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1646;
  v549->m_Items[178] = (DataMasterBase_o *)v910;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[178], (int32_t)v910, v553, v911);
  v912 = (UserSuperBossMaster_o *)sub_1BDBAC4(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v912, 0LL);
  if ( v912 )
  {
    v551 = sub_1BDB9B4(v912, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1646;
  v549->m_Items[179] = (DataMasterBase_o *)v912;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[179], (int32_t)v912, v553, v913);
  v914 = (QuestScriptMaster_o *)sub_1BDBAC4(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v914, 0LL);
  if ( v914 )
  {
    v551 = sub_1BDB9B4(v914, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1646;
  v549->m_Items[180] = (DataMasterBase_o *)v914;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[180], (int32_t)v914, v553, v915);
  v916 = (QuestScriptReleaseMaster_o *)sub_1BDBAC4(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v916, 0LL);
  if ( v916 )
  {
    v551 = sub_1BDB9B4(v916, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1646;
  v549->m_Items[181] = (DataMasterBase_o *)v916;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[181], (int32_t)v916, v553, v917);
  v918 = (MaterialFolderMaster_o *)sub_1BDBAC4(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v918, 0LL);
  if ( v918 )
  {
    v551 = sub_1BDB9B4(v918, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1646;
  v549->m_Items[182] = (DataMasterBase_o *)v918;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[182], (int32_t)v918, v553, v919);
  v920 = (RestrictionMaster_o *)sub_1BDBAC4(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v920, 0LL);
  if ( v920 )
  {
    v551 = sub_1BDB9B4(v920, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1646;
  v549->m_Items[183] = (DataMasterBase_o *)v920;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[183], (int32_t)v920, v553, v921);
  v922 = (QuestRestrictionMaster_o *)sub_1BDBAC4(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v922, 0LL);
  if ( v922 )
  {
    v551 = sub_1BDB9B4(v922, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1646;
  v549->m_Items[184] = (DataMasterBase_o *)v922;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[184], (int32_t)v922, v553, v923);
  v924 = (ServantVoiceRelationMaster_o *)sub_1BDBAC4(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v924, 0LL);
  if ( v924 )
  {
    v551 = sub_1BDB9B4(v924, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1646;
  v549->m_Items[185] = (DataMasterBase_o *)v924;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[185], (int32_t)v924, v553, v925);
  v926 = (ShopDetailMaster_o *)sub_1BDBAC4(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v926, 0LL);
  if ( v926 )
  {
    v551 = sub_1BDB9B4(v926, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1646;
  v549->m_Items[186] = (DataMasterBase_o *)v926;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[186], (int32_t)v926, v553, v927);
  v928 = (ServantScriptAddMaster_o *)sub_1BDBAC4(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v928, 0LL);
  if ( v928 )
  {
    v551 = sub_1BDB9B4(v928, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1646;
  v549->m_Items[187] = (DataMasterBase_o *)v928;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[187], (int32_t)v928, v553, v929);
  v930 = (CombineMaster_o *)sub_1BDBAC4(CombineMaster_TypeInfo);
  CombineMaster___ctor(v930, 0LL);
  if ( v930 )
  {
    v551 = sub_1BDB9B4(v930, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1646;
  v549->m_Items[188] = (DataMasterBase_o *)v930;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[188], (int32_t)v930, v553, v931);
  v932 = (AiFieldMaster_o *)sub_1BDBAC4(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v932, 0LL);
  if ( v932 )
  {
    v551 = sub_1BDB9B4(v932, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1646;
  v549->m_Items[189] = (DataMasterBase_o *)v932;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[189], (int32_t)v932, v553, v933);
  v934 = (ServantCommentAddMaster_o *)sub_1BDBAC4(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v934, 0LL);
  if ( v934 )
  {
    v551 = sub_1BDB9B4(v934, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1646;
  v549->m_Items[190] = (DataMasterBase_o *)v934;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[190], (int32_t)v934, v553, v935);
  v936 = (EventFilterMaster_o *)sub_1BDBAC4(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v936, 0LL);
  if ( v936 )
  {
    v551 = sub_1BDB9B4(v936, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1646;
  v549->m_Items[191] = (DataMasterBase_o *)v936;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[191], (int32_t)v936, v553, v937);
  v938 = (UserSupportDeckMaster_o *)sub_1BDBAC4(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v938, 0LL);
  if ( v938 )
  {
    v551 = sub_1BDB9B4(v938, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1646;
  v549->m_Items[192] = (DataMasterBase_o *)v938;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[192], (int32_t)v938, v553, v939);
  v940 = (EventRewardSceneMaster_o *)sub_1BDBAC4(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v940, 0LL);
  if ( v940 )
  {
    v551 = sub_1BDB9B4(v940, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1646;
  v549->m_Items[193] = (DataMasterBase_o *)v940;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[193], (int32_t)v940, v553, v941);
  v942 = (EventVoicePlayMaster_o *)sub_1BDBAC4(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v942, 0LL);
  if ( v942 )
  {
    v551 = sub_1BDB9B4(v942, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1646;
  v549->m_Items[194] = (DataMasterBase_o *)v942;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[194], (int32_t)v942, v553, v943);
  v944 = (GachaSubMaster_o *)sub_1BDBAC4(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v944, 0LL);
  if ( v944 )
  {
    v551 = sub_1BDB9B4(v944, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1646;
  v549->m_Items[195] = (DataMasterBase_o *)v944;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[195], (int32_t)v944, v553, v945);
  v946 = (GachaDetailMaster_o *)sub_1BDBAC4(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v946, 0LL);
  if ( v946 )
  {
    v551 = sub_1BDB9B4(v946, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1646;
  v549->m_Items[196] = (DataMasterBase_o *)v946;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[196], (int32_t)v946, v553, v947);
  v948 = (GachaBaseCollateralMaster_o *)sub_1BDBAC4(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v948, 0LL);
  if ( v948 )
  {
    v551 = sub_1BDB9B4(v948, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1646;
  v549->m_Items[197] = (DataMasterBase_o *)v948;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[197], (int32_t)v948, v553, v949);
  v950 = (GachaAdjustAddMaster_o *)sub_1BDBAC4(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v950, 0LL);
  if ( v950 )
  {
    v551 = sub_1BDB9B4(v950, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1646;
  v549->m_Items[198] = (DataMasterBase_o *)v950;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[198], (int32_t)v950, v553, v951);
  v952 = (GachaBonusSelectMaster_o *)sub_1BDBAC4(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v952, 0LL);
  if ( v952 )
  {
    v551 = sub_1BDB9B4(v952, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1646;
  v549->m_Items[199] = (DataMasterBase_o *)v952;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[199], (int32_t)v952, v553, v953);
  v954 = (GachaBonusSelectLineupMaster_o *)sub_1BDBAC4(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v954, 0LL);
  if ( v954 )
  {
    v551 = sub_1BDB9B4(v954, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1646;
  v549->m_Items[200] = (DataMasterBase_o *)v954;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[200], (int32_t)v954, v553, v955);
  v956 = (ServantChangeMaster_o *)sub_1BDBAC4(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v956, 0LL);
  if ( v956 )
  {
    v551 = sub_1BDB9B4(v956, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1646;
  v549->m_Items[201] = (DataMasterBase_o *)v956;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[201], (int32_t)v956, v553, v957);
  v958 = (VoiceCondMaster_o *)sub_1BDBAC4(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v958, 0LL);
  if ( v958 )
  {
    v551 = sub_1BDB9B4(v958, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1646;
  v549->m_Items[202] = (DataMasterBase_o *)v958;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[202], (int32_t)v958, v553, v959);
  v960 = (BgmReleaseMaster_o *)sub_1BDBAC4(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v960, 0LL);
  if ( v960 )
  {
    v551 = sub_1BDB9B4(v960, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1646;
  v549->m_Items[203] = (DataMasterBase_o *)v960;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[203], (int32_t)v960, v553, v961);
  v962 = (MyRoomAddMaster_o *)sub_1BDBAC4(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v962, 0LL);
  if ( v962 )
  {
    v551 = sub_1BDB9B4(v962, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1646;
  v549->m_Items[204] = (DataMasterBase_o *)v962;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[204], (int32_t)v962, v553, v963);
  v964 = (ShopActionMaster_o *)sub_1BDBAC4(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v964, 0LL);
  if ( v964 )
  {
    v551 = sub_1BDB9B4(v964, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1646;
  v549->m_Items[205] = (DataMasterBase_o *)v964;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[205], (int32_t)v964, v553, v965);
  v966 = (EventRewardSceneReleaseMaster_o *)sub_1BDBAC4(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v966, 0LL);
  if ( v966 )
  {
    v551 = sub_1BDB9B4(v966, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1646;
  v549->m_Items[206] = (DataMasterBase_o *)v966;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[206], (int32_t)v966, v553, v967);
  v968 = (QuestBehaviorMaster_o *)sub_1BDBAC4(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v968, 0LL);
  if ( v968 )
  {
    v551 = sub_1BDB9B4(v968, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1646;
  v549->m_Items[207] = (DataMasterBase_o *)v968;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[207], (int32_t)v968, v553, v969);
  v970 = (MapMaster_o *)sub_1BDBAC4(MapMaster_TypeInfo);
  MapMaster___ctor(v970, 0LL);
  if ( v970 )
  {
    v551 = sub_1BDB9B4(v970, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1646;
  v549->m_Items[208] = (DataMasterBase_o *)v970;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[208], (int32_t)v970, v553, v971);
  v972 = (MapCondMaster_o *)sub_1BDBAC4(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v972, 0LL);
  if ( v972 )
  {
    v551 = sub_1BDB9B4(v972, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1646;
  v549->m_Items[209] = (DataMasterBase_o *)v972;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[209], (int32_t)v972, v553, v973);
  v974 = (MapButtonMaster_o *)sub_1BDBAC4(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v974, 0LL);
  if ( v974 )
  {
    v551 = sub_1BDB9B4(v974, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1646;
  v549->m_Items[210] = (DataMasterBase_o *)v974;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[210], (int32_t)v974, v553, v975);
  v976 = (BannerAddMaster_o *)sub_1BDBAC4(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v976, 0LL);
  if ( v976 )
  {
    v551 = sub_1BDB9B4(v976, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1646;
  v549->m_Items[211] = (DataMasterBase_o *)v976;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[211], (int32_t)v976, v553, v977);
  v978 = (EventAddMaster_o *)sub_1BDBAC4(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v978, 0LL);
  if ( v978 )
  {
    v551 = sub_1BDB9B4(v978, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1646;
  v549->m_Items[212] = (DataMasterBase_o *)v978;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[212], (int32_t)v978, v553, v979);
  v980 = (TotalLoginMaster_o *)sub_1BDBAC4(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v980, 0LL);
  if ( v980 )
  {
    v551 = sub_1BDB9B4(v980, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1646;
  v549->m_Items[213] = (DataMasterBase_o *)v980;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[213], (int32_t)v980, v553, v981);
  v982 = (ServantFilterMaster_o *)sub_1BDBAC4(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v982, 0LL);
  if ( v982 )
  {
    v551 = sub_1BDB9B4(v982, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1646;
  v549->m_Items[214] = (DataMasterBase_o *)v982;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[214], (int32_t)v982, v553, v983);
  v984 = (CombineCostumeMaster_o *)sub_1BDBAC4(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v984, 0LL);
  if ( v984 )
  {
    v551 = sub_1BDB9B4(v984, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1646;
  v549->m_Items[215] = (DataMasterBase_o *)v984;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[215], (int32_t)v984, v553, v985);
  v986 = (ServantCostumeMaster_o *)sub_1BDBAC4(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v986, 0LL);
  if ( v986 )
  {
    v551 = sub_1BDB9B4(v986, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1646;
  v549->m_Items[216] = (DataMasterBase_o *)v986;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[216], (int32_t)v986, v553, v987);
  v988 = (ServantCostumeReleaseMaster_o *)sub_1BDBAC4(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v988, 0LL);
  if ( v988 )
  {
    v551 = sub_1BDB9B4(v988, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1646;
  v549->m_Items[217] = (DataMasterBase_o *)v988;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[217], (int32_t)v988, v553, v989);
  v990 = (StaffPhotoMaster_o *)sub_1BDBAC4(StaffPhotoMaster_TypeInfo);
  StaffPhotoMaster___ctor(v990, 0LL);
  if ( v990 )
  {
    v551 = sub_1BDB9B4(v990, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1646;
  v549->m_Items[218] = (DataMasterBase_o *)v990;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[218], (int32_t)v990, v553, v991);
  v992 = (StaffPhotoCostumeMaster_o *)sub_1BDBAC4(StaffPhotoCostumeMaster_TypeInfo);
  StaffPhotoCostumeMaster___ctor(v992, 0LL);
  if ( v992 )
  {
    v551 = sub_1BDB9B4(v992, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1646;
  v549->m_Items[219] = (DataMasterBase_o *)v992;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[219], (int32_t)v992, v553, v993);
  v994 = (UserFriendRequestHistoryMaster_o *)sub_1BDBAC4(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v994, 0LL);
  if ( v994 )
  {
    v551 = sub_1BDB9B4(v994, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1646;
  v549->m_Items[220] = (DataMasterBase_o *)v994;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[220], (int32_t)v994, v553, v995);
  v996 = (UserBlacklistMaster_o *)sub_1BDBAC4(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v996, 0LL);
  if ( v996 )
  {
    v551 = sub_1BDB9B4(v996, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1646;
  v549->m_Items[221] = (DataMasterBase_o *)v996;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[221], (int32_t)v996, v553, v997);
  v998 = (ItemSelectMaster_o *)sub_1BDBAC4(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v998, 0LL);
  if ( v998 )
  {
    v551 = sub_1BDB9B4(v998, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1646;
  v549->m_Items[222] = (DataMasterBase_o *)v998;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[222], (int32_t)v998, v553, v999);
  v1000 = (TotalEventRaceMaster_o *)sub_1BDBAC4(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v1000, 0LL);
  if ( v1000 )
  {
    v551 = sub_1BDB9B4(v1000, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1646;
  v549->m_Items[223] = (DataMasterBase_o *)v1000;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[223], (int32_t)v1000, v553, v1001);
  v1002 = (EventPointGroupAddMaster_o *)sub_1BDBAC4(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v1002, 0LL);
  if ( v1002 )
  {
    v551 = sub_1BDB9B4(v1002, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1646;
  v549->m_Items[224] = (DataMasterBase_o *)v1002;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[224], (int32_t)v1002, v553, v1003);
  v1004 = (VoicePlayGroupMaster_o *)sub_1BDBAC4(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v1004, 0LL);
  if ( v1004 )
  {
    v551 = sub_1BDB9B4(v1004, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1646;
  v549->m_Items[225] = (DataMasterBase_o *)v1004;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[225], (int32_t)v1004, v553, v1005);
  v1006 = (VoicePlayCondMaster_o *)sub_1BDBAC4(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v1006, 0LL);
  if ( v1006 )
  {
    v551 = sub_1BDB9B4(v1006, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1646;
  v549->m_Items[226] = (DataMasterBase_o *)v1006;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[226], (int32_t)v1006, v553, v1007);
  v1008 = (GachaStoryAdjustMaster_o *)sub_1BDBAC4(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v1008, 0LL);
  if ( v1008 )
  {
    v551 = sub_1BDB9B4(v1008, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1646;
  v549->m_Items[227] = (DataMasterBase_o *)v1008;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[227], (int32_t)v1008, v553, v1009);
  v1010 = (ServantFlagMaster_o *)sub_1BDBAC4(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v1010, 0LL);
  if ( v1010 )
  {
    v551 = sub_1BDB9B4(v1010, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1646;
  v549->m_Items[228] = (DataMasterBase_o *)v1010;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[228], (int32_t)v1010, v553, v1011);
  v1012 = (ServantFlagReleaseMaster_o *)sub_1BDBAC4(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v1012, 0LL);
  if ( v1012 )
  {
    v551 = sub_1BDB9B4(v1012, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1646;
  v549->m_Items[229] = (DataMasterBase_o *)v1012;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[229], (int32_t)v1012, v553, v1013);
  v1014 = (EventLocationCampaignMaster_o *)sub_1BDBAC4(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v1014, 0LL);
  if ( v1014 )
  {
    v551 = sub_1BDB9B4(v1014, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1646;
  v549->m_Items[230] = (DataMasterBase_o *)v1014;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[230], (int32_t)v1014, v553, v1015);
  v1016 = (CampaignInfoMaster_o *)sub_1BDBAC4(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v1016, 0LL);
  if ( v1016 )
  {
    v551 = sub_1BDB9B4(v1016, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1646;
  v549->m_Items[231] = (DataMasterBase_o *)v1016;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[231], (int32_t)v1016, v553, v1017);
  v1018 = (DialogMessageMaster_o *)sub_1BDBAC4(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v1018, 0LL);
  if ( v1018 )
  {
    v551 = sub_1BDB9B4(v1018, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1646;
  v549->m_Items[232] = (DataMasterBase_o *)v1018;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[232], (int32_t)v1018, v553, v1019);
  v1020 = (ServantIndividualityMaster_o *)sub_1BDBAC4(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v1020, 0LL);
  if ( v1020 )
  {
    v551 = sub_1BDB9B4(v1020, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1646;
  v549->m_Items[233] = (DataMasterBase_o *)v1020;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[233], (int32_t)v1020, v553, v1021);
  v1022 = (BoardMessageMaster_o *)sub_1BDBAC4(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v1022, 0LL);
  if ( v1022 )
  {
    v551 = sub_1BDB9B4(v1022, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1646;
  v549->m_Items[234] = (DataMasterBase_o *)v1022;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[234], (int32_t)v1022, v553, v1023);
  v1024 = (BoardMessageReleaseMaster_o *)sub_1BDBAC4(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v1024, 0LL);
  if ( v1024 )
  {
    v551 = sub_1BDB9B4(v1024, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1646;
  v549->m_Items[235] = (DataMasterBase_o *)v1024;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[235], (int32_t)v1024, v553, v1025);
  v1026 = (EventServantFatigueMaster_o *)sub_1BDBAC4(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v1026, 0LL);
  if ( v1026 )
  {
    v551 = sub_1BDB9B4(v1026, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1646;
  v549->m_Items[236] = (DataMasterBase_o *)v1026;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[236], (int32_t)v1026, v553, v1027);
  v1028 = (UserEventDeckMaster_o *)sub_1BDBAC4(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v1028, 0LL);
  if ( v1028 )
  {
    v551 = sub_1BDB9B4(v1028, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1646;
  v549->m_Items[237] = (DataMasterBase_o *)v1028;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[237], (int32_t)v1028, v553, v1029);
  v1030 = (EventTowerMaster_o *)sub_1BDBAC4(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v1030, 0LL);
  if ( v1030 )
  {
    v551 = sub_1BDB9B4(v1030, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1646;
  v549->m_Items[238] = (DataMasterBase_o *)v1030;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[238], (int32_t)v1030, v553, v1031);
  v1032 = (EventTowerRewardMaster_o *)sub_1BDBAC4(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v1032, 0LL);
  if ( v1032 )
  {
    v551 = sub_1BDB9B4(v1032, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1646;
  v549->m_Items[239] = (DataMasterBase_o *)v1032;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[239], (int32_t)v1032, v553, v1033);
  v1034 = (EventBulletinBoardMaster_o *)sub_1BDBAC4(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v1034, 0LL);
  if ( v1034 )
  {
    v551 = sub_1BDB9B4(v1034, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1646;
  v549->m_Items[240] = (DataMasterBase_o *)v1034;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[240], (int32_t)v1034, v553, v1035);
  v1036 = (EventBulletinBoardReleaseMaster_o *)sub_1BDBAC4(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v1036, 0LL);
  if ( v1036 )
  {
    v551 = sub_1BDB9B4(v1036, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1646;
  v549->m_Items[241] = (DataMasterBase_o *)v1036;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[241], (int32_t)v1036, v553, v1037);
  v1038 = (EventFactoryMaster_o *)sub_1BDBAC4(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v1038, 0LL);
  if ( v1038 )
  {
    v551 = sub_1BDB9B4(v1038, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1646;
  v549->m_Items[242] = (DataMasterBase_o *)v1038;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[242], (int32_t)v1038, v553, v1039);
  v1040 = (ShopGroupMaster_o *)sub_1BDBAC4(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v1040, 0LL);
  if ( v1040 )
  {
    v551 = sub_1BDB9B4(v1040, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1646;
  v549->m_Items[243] = (DataMasterBase_o *)v1040;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[243], (int32_t)v1040, v553, v1041);
  v1042 = (AuraEffectMaster_o *)sub_1BDBAC4(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v1042, 0LL);
  if ( v1042 )
  {
    v551 = sub_1BDB9B4(v1042, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1646;
  v549->m_Items[244] = (DataMasterBase_o *)v1042;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[244], (int32_t)v1042, v553, v1043);
  v1044 = (AuraEffectPosOverwriteMaster_o *)sub_1BDBAC4(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v1044, 0LL);
  if ( v1044 )
  {
    v551 = sub_1BDB9B4(v1044, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1646;
  v549->m_Items[245] = (DataMasterBase_o *)v1044;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[245], (int32_t)v1044, v553, v1045);
  v1046 = (UserEventMissionFixMaster_o *)sub_1BDBAC4(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v1046, 0LL);
  if ( v1046 )
  {
    v551 = sub_1BDB9B4(v1046, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1646;
  v549->m_Items[246] = (DataMasterBase_o *)v1046;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[246], (int32_t)v1046, v553, v1047);
  v1048 = (NotEndEventMissionFixMaster_o *)sub_1BDBAC4(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v1048, 0LL);
  if ( v1048 )
  {
    v551 = sub_1BDB9B4(v1048, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1646;
  v549->m_Items[247] = (DataMasterBase_o *)v1048;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[247], (int32_t)v1048, v553, v1049);
  v1050 = (EnemyMstMaster_o *)sub_1BDBAC4(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v1050, 0LL);
  if ( v1050 )
  {
    v551 = sub_1BDB9B4(v1050, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1646;
  v549->m_Items[248] = (DataMasterBase_o *)v1050;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[248], (int32_t)v1050, v553, v1051);
  v1052 = (EnemyMstBattleMaster_o *)sub_1BDBAC4(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v1052, 0LL);
  if ( v1052 )
  {
    v551 = sub_1BDB9B4(v1052, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1646;
  v549->m_Items[249] = (DataMasterBase_o *)v1052;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[249], (int32_t)v1052, v553, v1053);
  v1054 = (ServantSkillReleaseMaster_o *)sub_1BDBAC4(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v1054, 0LL);
  if ( v1054 )
  {
    v551 = sub_1BDB9B4(v1054, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1646;
  v549->m_Items[250] = (DataMasterBase_o *)v1054;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[250], (int32_t)v1054, v553, v1055);
  v1056 = (ServantPassiveSkillReleaseMaster_o *)sub_1BDBAC4(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v1056, 0LL);
  if ( v1056 )
  {
    v551 = sub_1BDB9B4(v1056, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1646;
  v549->m_Items[251] = (DataMasterBase_o *)v1056;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[251], (int32_t)v1056, v553, v1057);
  v1058 = (ServantTreasureDeviceReleaseMaster_o *)sub_1BDBAC4(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v1058, 0LL);
  if ( v1058 )
  {
    v551 = sub_1BDB9B4(v1058, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1646;
  v549->m_Items[252] = (DataMasterBase_o *)v1058;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[252], (int32_t)v1058, v553, v1059);
  v1060 = (MapGimmickReleaseMaster_o *)sub_1BDBAC4(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v1060, 0LL);
  if ( v1060 )
  {
    v551 = sub_1BDB9B4(v1060, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1646;
  v549->m_Items[253] = (DataMasterBase_o *)v1060;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[253], (int32_t)v1060, v553, v1061);
  v1062 = (CommandCodeMaster_o *)sub_1BDBAC4(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v1062, 0LL);
  if ( v1062 )
  {
    v551 = sub_1BDB9B4(v1062, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1646;
  v549->m_Items[254] = (DataMasterBase_o *)v1062;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[254], (int32_t)v1062, v553, v1063);
  v1064 = (ServantCommandCodeUnlockMaster_o *)sub_1BDBAC4(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v1064, 0LL);
  if ( v1064 )
  {
    v551 = sub_1BDB9B4(v1064, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1646;
  v549->m_Items[255] = (DataMasterBase_o *)v1064;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[255], (int32_t)v1064, v553, v1065);
  v1066 = (UserCommandCodeMaster_o *)sub_1BDBAC4(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v1066, 0LL);
  if ( v1066 )
  {
    v551 = sub_1BDB9B4(v1066, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1646;
  v549->m_Items[256] = (DataMasterBase_o *)v1066;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[256], (int32_t)v1066, v553, v1067);
  v1068 = (UserCommandCodeCollectionMaster_o *)sub_1BDBAC4(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v1068, 0LL);
  if ( v1068 )
  {
    v551 = sub_1BDB9B4(v1068, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1646;
  v549->m_Items[257] = (DataMasterBase_o *)v1068;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[257], (int32_t)v1068, v553, v1069);
  v1070 = (UserServantCommandCodeMaster_o *)sub_1BDBAC4(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v1070, 0LL);
  if ( v1070 )
  {
    v551 = sub_1BDB9B4(v1070, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1646;
  v549->m_Items[258] = (DataMasterBase_o *)v1070;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[258], (int32_t)v1070, v553, v1071);
  v1072 = (UserServantCommandCardMaster_o *)sub_1BDBAC4(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v1072, 0LL);
  if ( v1072 )
  {
    v551 = sub_1BDB9B4(v1072, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1646;
  v549->m_Items[259] = (DataMasterBase_o *)v1072;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[259], (int32_t)v1072, v553, v1073);
  v1074 = (CommandCardRankParamMaster_o *)sub_1BDBAC4(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v1074, 0LL);
  if ( v1074 )
  {
    v551 = sub_1BDB9B4(v1074, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1646;
  v549->m_Items[260] = (DataMasterBase_o *)v1074;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[260], (int32_t)v1074, v553, v1075);
  v1076 = (CommandCodeSkillMaster_o *)sub_1BDBAC4(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v1076, 0LL);
  if ( v1076 )
  {
    v551 = sub_1BDB9B4(v1076, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1646;
  v549->m_Items[261] = (DataMasterBase_o *)v1076;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[261], (int32_t)v1076, v553, v1077);
  v1078 = (CommandCodeSkillReleaseMaster_o *)sub_1BDBAC4(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v1078, 0LL);
  if ( v1078 )
  {
    v551 = sub_1BDB9B4(v1078, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1646;
  v549->m_Items[262] = (DataMasterBase_o *)v1078;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[262], (int32_t)v1078, v553, v1079);
  v1080 = (CommandCodeCommentMaster_o *)sub_1BDBAC4(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v1080, 0LL);
  if ( v1080 )
  {
    v551 = sub_1BDB9B4(v1080, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1646;
  v549->m_Items[263] = (DataMasterBase_o *)v1080;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[263], (int32_t)v1080, v553, v1081);
  v1082 = (EventStatusMaster_o *)sub_1BDBAC4(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v1082, 0LL);
  if ( v1082 )
  {
    v551 = sub_1BDB9B4(v1082, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1646;
  v549->m_Items[264] = (DataMasterBase_o *)v1082;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[264], (int32_t)v1082, v553, v1083);
  v1084 = (EventStatusQuestMaster_o *)sub_1BDBAC4(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v1084, 0LL);
  if ( v1084 )
  {
    v551 = sub_1BDB9B4(v1084, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1646;
  v549->m_Items[265] = (DataMasterBase_o *)v1084;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[265], (int32_t)v1084, v553, v1085);
  v1086 = (CommonRestrictionMaster_o *)sub_1BDBAC4(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v1086, 0LL);
  if ( v1086 )
  {
    v551 = sub_1BDB9B4(v1086, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1646;
  v549->m_Items[266] = (DataMasterBase_o *)v1086;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[266], (int32_t)v1086, v553, v1087);
  v1088 = (EventPointBuffMaster_o *)sub_1BDBAC4(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v1088, 0LL);
  if ( v1088 )
  {
    v551 = sub_1BDB9B4(v1088, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1646;
  v549->m_Items[267] = (DataMasterBase_o *)v1088;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[267], (int32_t)v1088, v553, v1089);
  v1090 = (UserFollowMaster_o *)sub_1BDBAC4(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v1090, 0LL);
  if ( v1090 )
  {
    v551 = sub_1BDB9B4(v1090, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1646;
  v549->m_Items[268] = (DataMasterBase_o *)v1090;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[268], (int32_t)v1090, v553, v1091);
  v1092 = (EventRewardGuideReleaseMaster_o *)sub_1BDBAC4(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v1092, 0LL);
  if ( v1092 )
  {
    v551 = sub_1BDB9B4(v1092, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1646;
  v549->m_Items[269] = (DataMasterBase_o *)v1092;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[269], (int32_t)v1092, v553, v1093);
  v1094 = (NpcServantEquipMaster_o *)sub_1BDBAC4(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v1094, 0LL);
  if ( v1094 )
  {
    v551 = sub_1BDB9B4(v1094, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1646;
  v549->m_Items[270] = (DataMasterBase_o *)v1094;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[270], (int32_t)v1094, v553, v1095);
  v1096 = (EventCampaignReleaseMaster_o *)sub_1BDBAC4(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v1096, 0LL);
  if ( v1096 )
  {
    v551 = sub_1BDB9B4(v1096, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1646;
  v549->m_Items[271] = (DataMasterBase_o *)v1096;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[271], (int32_t)v1096, v553, v1097);
  v1098 = (ServantMaterialFolderMaster_o *)sub_1BDBAC4(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v1098, 0LL);
  if ( v1098 )
  {
    v551 = sub_1BDB9B4(v1098, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1646;
  v549->m_Items[272] = (DataMasterBase_o *)v1098;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[272], (int32_t)v1098, v553, v1099);
  v1100 = (EventEquipSkillReleaseMaster_o *)sub_1BDBAC4(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v1100, 0LL);
  if ( v1100 )
  {
    v551 = sub_1BDB9B4(v1100, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1646;
  v549->m_Items[273] = (DataMasterBase_o *)v1100;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[273], (int32_t)v1100, v553, v1101);
  v1102 = (EventPointActivityMaster_o *)sub_1BDBAC4(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v1102, 0LL);
  if ( v1102 )
  {
    v551 = sub_1BDB9B4(v1102, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1646;
  v549->m_Items[274] = (DataMasterBase_o *)v1102;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[274], (int32_t)v1102, v553, v1103);
  v1104 = (FunctionCategoryMaster_o *)sub_1BDBAC4(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v1104, 0LL);
  if ( v1104 )
  {
    v551 = sub_1BDB9B4(v1104, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1646;
  v549->m_Items[275] = (DataMasterBase_o *)v1104;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[275], (int32_t)v1104, v553, v1105);
  v1106 = (QuestPickupMaster_o *)sub_1BDBAC4(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v1106, 0LL);
  if ( v1106 )
  {
    v551 = sub_1BDB9B4(v1106, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1646;
  v549->m_Items[276] = (DataMasterBase_o *)v1106;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[276], (int32_t)v1106, v553, v1107);
  v1108 = (EventUiMaster_o *)sub_1BDBAC4(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v1108, 0LL);
  if ( v1108 )
  {
    v551 = sub_1BDB9B4(v1108, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1646;
  v549->m_Items[277] = (DataMasterBase_o *)v1108;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[277], (int32_t)v1108, v553, v1109);
  v1110 = (EventUiReleaseMaster_o *)sub_1BDBAC4(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v1110, 0LL);
  if ( v1110 )
  {
    v551 = sub_1BDB9B4(v1110, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1646;
  v549->m_Items[278] = (DataMasterBase_o *)v1110;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[278], (int32_t)v1110, v553, v1111);
  v1112 = (EventUiValueMaster_o *)sub_1BDBAC4(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v1112, 0LL);
  if ( v1112 )
  {
    v551 = sub_1BDB9B4(v1112, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1646;
  v549->m_Items[279] = (DataMasterBase_o *)v1112;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[279], (int32_t)v1112, v553, v1113);
  v1114 = (EventConquestRewardMaster_o *)sub_1BDBAC4(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v1114, 0LL);
  if ( v1114 )
  {
    v551 = sub_1BDB9B4(v1114, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1646;
  v549->m_Items[280] = (DataMasterBase_o *)v1114;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[280], (int32_t)v1114, v553, v1115);
  v1116 = (NpcFollowerReleaseMaster_o *)sub_1BDBAC4(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v1116, 0LL);
  if ( v1116 )
  {
    v551 = sub_1BDB9B4(v1116, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1646;
  v549->m_Items[281] = (DataMasterBase_o *)v1116;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[281], (int32_t)v1116, v553, v1117);
  v1118 = (EventBonusFilterMaster_o *)sub_1BDBAC4(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v1118, 0LL);
  if ( v1118 )
  {
    v551 = sub_1BDB9B4(v1118, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1646;
  v549->m_Items[282] = (DataMasterBase_o *)v1118;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[282], (int32_t)v1118, v553, v1119);
  v1120 = (EventBonusFilterGroupInfoMaster_o *)sub_1BDBAC4(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v1120, 0LL);
  if ( v1120 )
  {
    v551 = sub_1BDB9B4(v1120, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1646;
  v549->m_Items[283] = (DataMasterBase_o *)v1120;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[283], (int32_t)v1120, v553, v1121);
  v1122 = (EventBonusFilterGroupMemberMaster_o *)sub_1BDBAC4(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v1122, 0LL);
  if ( v1122 )
  {
    v551 = sub_1BDB9B4(v1122, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1646;
  v549->m_Items[284] = (DataMasterBase_o *)v1122;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[284], (int32_t)v1122, v553, v1123);
  v1124 = (UserGachaExtraCountMaster_o *)sub_1BDBAC4(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v1124, 0LL);
  if ( v1124 )
  {
    v551 = sub_1BDB9B4(v1124, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1646;
  v549->m_Items[285] = (DataMasterBase_o *)v1124;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[285], (int32_t)v1124, v553, v1125);
  v1126 = (PrivilegeMaster_o *)sub_1BDBAC4(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v1126, 0LL);
  if ( v1126 )
  {
    v551 = sub_1BDB9B4(v1126, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1646;
  v549->m_Items[286] = (DataMasterBase_o *)v1126;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[286], (int32_t)v1126, v553, v1127);
  v1128 = (UserPrivilegeMaster_o *)sub_1BDBAC4(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v1128, 0LL);
  if ( v1128 )
  {
    v551 = sub_1BDB9B4(v1128, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1646;
  v549->m_Items[287] = (DataMasterBase_o *)v1128;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[287], (int32_t)v1128, v553, v1129);
  v1130 = (UserQuestRouteMaster_o *)sub_1BDBAC4(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v1130, 0LL);
  if ( v1130 )
  {
    v551 = sub_1BDB9B4(v1130, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1646;
  v549->m_Items[288] = (DataMasterBase_o *)v1130;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[288], (int32_t)v1130, v553, v1131);
  v1132 = (EventBossStatusUiMaster_o *)sub_1BDBAC4(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v1132, 0LL);
  if ( v1132 )
  {
    v551 = sub_1BDB9B4(v1132, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1646;
  v549->m_Items[289] = (DataMasterBase_o *)v1132;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[289], (int32_t)v1132, v553, v1133);
  v1134 = (CommonReleaseMaster_o *)sub_1BDBAC4(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v1134, 0LL);
  if ( v1134 )
  {
    v551 = sub_1BDB9B4(v1134, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1646;
  v549->m_Items[290] = (DataMasterBase_o *)v1134;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[290], (int32_t)v1134, v553, v1135);
  v1136 = (QuestSpotReleaseMaster_o *)sub_1BDBAC4(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v1136, 0LL);
  if ( v1136 )
  {
    v551 = sub_1BDB9B4(v1136, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1646;
  v549->m_Items[291] = (DataMasterBase_o *)v1136;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[291], (int32_t)v1136, v553, v1137);
  v1138 = (VoiceMaterialCondMaster_o *)sub_1BDBAC4(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v1138, 0LL);
  if ( v1138 )
  {
    v551 = sub_1BDB9B4(v1138, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1646;
  v549->m_Items[292] = (DataMasterBase_o *)v1138;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[292], (int32_t)v1138, v553, v1139);
  v1140 = (ClassRelationOverwriteMaster_o *)sub_1BDBAC4(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v1140, 0LL);
  if ( v1140 )
  {
    v551 = sub_1BDB9B4(v1140, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1646;
  v549->m_Items[293] = (DataMasterBase_o *)v1140;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[293], (int32_t)v1140, v553, v1141);
  v1142 = (EventGroupMaster_o *)sub_1BDBAC4(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v1142, 0LL);
  if ( v1142 )
  {
    v551 = sub_1BDB9B4(v1142, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1646;
  v549->m_Items[294] = (DataMasterBase_o *)v1142;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[294], (int32_t)v1142, v553, v1143);
  v1144 = (TotalBoxGachaMaster_o *)sub_1BDBAC4(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v1144, 0LL);
  if ( v1144 )
  {
    v551 = sub_1BDB9B4(v1144, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1646;
  v549->m_Items[295] = (DataMasterBase_o *)v1144;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[295], (int32_t)v1144, v553, v1145);
  v1146 = (ServantTreasureDeviceDamageMaster_o *)sub_1BDBAC4(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v1146, 0LL);
  if ( v1146 )
  {
    v551 = sub_1BDB9B4(v1146, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1646;
  v549->m_Items[296] = (DataMasterBase_o *)v1146;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[296], (int32_t)v1146, v553, v1147);
  v1148 = (UserEventServantFatigueMaster_o *)sub_1BDBAC4(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v1148, 0LL);
  if ( v1148 )
  {
    v551 = sub_1BDB9B4(v1148, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1646;
  v549->m_Items[297] = (DataMasterBase_o *)v1148;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[297], (int32_t)v1148, v553, v1149);
  v1150 = (EventRewardBgMaster_o *)sub_1BDBAC4(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v1150, 0LL);
  if ( v1150 )
  {
    v551 = sub_1BDB9B4(v1150, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1646;
  v549->m_Items[298] = (DataMasterBase_o *)v1150;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[298], (int32_t)v1150, v553, v1151);
  v1152 = (EventFatigueRecoveryMaster_o *)sub_1BDBAC4(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v1152, 0LL);
  if ( v1152 )
  {
    v551 = sub_1BDB9B4(v1152, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1646;
  v549->m_Items[299] = (DataMasterBase_o *)v1152;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[299], (int32_t)v1152, v553, v1153);
  v1154 = (EventBoostItemUsedMaster_o *)sub_1BDBAC4(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v1154, 0LL);
  if ( v1154 )
  {
    v551 = sub_1BDB9B4(v1154, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1646;
  v549->m_Items[300] = (DataMasterBase_o *)v1154;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[300], (int32_t)v1154, v553, v1155);
  v1156 = (StatusEffectPosOverwriteMaster_o *)sub_1BDBAC4(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v1156, 0LL);
  if ( v1156 )
  {
    v551 = sub_1BDB9B4(v1156, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1646;
  v549->m_Items[301] = (DataMasterBase_o *)v1156;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[301], (int32_t)v1156, v553, v1157);
  v1158 = (QuestPhaseDetailAddMaster_o *)sub_1BDBAC4(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v1158, 0LL);
  if ( v1158 )
  {
    v551 = sub_1BDB9B4(v1158, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1646;
  v549->m_Items[302] = (DataMasterBase_o *)v1158;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[302], (int32_t)v1158, v553, v1159);
  v1160 = (VoiceClosedMessageMaster_o *)sub_1BDBAC4(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v1160, 0LL);
  if ( v1160 )
  {
    v551 = sub_1BDB9B4(v1160, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1646;
  v549->m_Items[303] = (DataMasterBase_o *)v1160;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[303], (int32_t)v1160, v553, v1161);
  v1162 = (ReprintStageMaster_o *)sub_1BDBAC4(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v1162, 0LL);
  if ( v1162 )
  {
    v551 = sub_1BDB9B4(v1162, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1646;
  v549->m_Items[304] = (DataMasterBase_o *)v1162;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[304], (int32_t)v1162, v553, v1163);
  v1164 = (UserCombineExpMaster_o *)sub_1BDBAC4(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v1164, 0LL);
  if ( v1164 )
  {
    v551 = sub_1BDB9B4(v1164, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1646;
  v549->m_Items[305] = (DataMasterBase_o *)v1164;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[305], (int32_t)v1164, v553, v1165);
  v1166 = (EventBoardGameCellMaster_o *)sub_1BDBAC4(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v1166, 0LL);
  if ( v1166 )
  {
    v551 = sub_1BDB9B4(v1166, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1646;
  v549->m_Items[306] = (DataMasterBase_o *)v1166;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[306], (int32_t)v1166, v553, v1167);
  v1168 = (EventBoardGameTokenMaster_o *)sub_1BDBAC4(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v1168, 0LL);
  if ( v1168 )
  {
    v551 = sub_1BDB9B4(v1168, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1646;
  v549->m_Items[307] = (DataMasterBase_o *)v1168;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[307], (int32_t)v1168, v553, v1169);
  v1170 = (EventBoardGameTokenRewardMaster_o *)sub_1BDBAC4(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v1170, 0LL);
  if ( v1170 )
  {
    v551 = sub_1BDB9B4(v1170, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1646;
  v549->m_Items[308] = (DataMasterBase_o *)v1170;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[308], (int32_t)v1170, v553, v1171);
  v1172 = (UserEventBoardGameTokenMaster_o *)sub_1BDBAC4(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v1172, 0LL);
  if ( v1172 )
  {
    v551 = sub_1BDB9B4(v1172, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1646;
  v549->m_Items[309] = (DataMasterBase_o *)v1172;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[309], (int32_t)v1172, v553, v1173);
  v1174 = (ServantAnimationOverwriteMaster_o *)sub_1BDBAC4(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v1174, 0LL);
  if ( v1174 )
  {
    v551 = sub_1BDB9B4(v1174, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1646;
  v549->m_Items[310] = (DataMasterBase_o *)v1174;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[310], (int32_t)v1174, v553, v1175);
  v1176 = (OpeningMovieMaster_o *)sub_1BDBAC4(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v1176, 0LL);
  if ( v1176 )
  {
    v551 = sub_1BDB9B4(v1176, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1646;
  v549->m_Items[311] = (DataMasterBase_o *)v1176;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[311], (int32_t)v1176, v553, v1177);
  v1178 = (ServantLimitSpoilerProtectionMaster_o *)sub_1BDBAC4(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v1178, 0LL);
  if ( v1178 )
  {
    v551 = sub_1BDB9B4(v1178, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1646;
  v549->m_Items[312] = (DataMasterBase_o *)v1178;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[312], (int32_t)v1178, v553, v1179);
  v1180 = (PickupUserFollowerMaster_o *)sub_1BDBAC4(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v1180, 0LL);
  if ( v1180 )
  {
    v551 = sub_1BDB9B4(v1180, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1646;
  v549->m_Items[313] = (DataMasterBase_o *)v1180;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[313], (int32_t)v1180, v553, v1181);
  v1182 = (ServantCollectionMaster_o *)sub_1BDBAC4(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v1182, 0LL);
  if ( v1182 )
  {
    v551 = sub_1BDB9B4(v1182, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1646;
  v549->m_Items[314] = (DataMasterBase_o *)v1182;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[314], (int32_t)v1182, v553, v1183);
  v1184 = (GachaBehaviorMaster_o *)sub_1BDBAC4(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v1184, 0LL);
  if ( v1184 )
  {
    v551 = sub_1BDB9B4(v1184, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1646;
  v549->m_Items[315] = (DataMasterBase_o *)v1184;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[315], (int32_t)v1184, v553, v1185);
  v1186 = (EventQuestCooltimeMaster_o *)sub_1BDBAC4(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v1186, 0LL);
  if ( v1186 )
  {
    v551 = sub_1BDB9B4(v1186, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1646;
  v549->m_Items[316] = (DataMasterBase_o *)v1186;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[316], (int32_t)v1186, v553, v1187);
  v1188 = (UserEventQuestCooltimeMaster_o *)sub_1BDBAC4(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v1188, 0LL);
  if ( v1188 )
  {
    v551 = sub_1BDB9B4(v1188, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1646;
  v549->m_Items[317] = (DataMasterBase_o *)v1188;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[317], (int32_t)v1188, v553, v1189);
  v1190 = (BoostMaster_o *)sub_1BDBAC4(BoostMaster_TypeInfo);
  BoostMaster___ctor(v1190, 0LL);
  if ( v1190 )
  {
    v551 = sub_1BDB9B4(v1190, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1646;
  v549->m_Items[318] = (DataMasterBase_o *)v1190;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[318], (int32_t)v1190, v553, v1191);
  v1192 = (WarBoardMaster_o *)sub_1BDBAC4(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v1192, 0LL);
  if ( v1192 )
  {
    v551 = sub_1BDB9B4(v1192, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1646;
  v549->m_Items[319] = (DataMasterBase_o *)v1192;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[319], (int32_t)v1192, v553, v1193);
  v1194 = (WarBoardSquareMaster_o *)sub_1BDBAC4(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v1194, 0LL);
  if ( v1194 )
  {
    v551 = sub_1BDB9B4(v1194, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1646;
  v549->m_Items[320] = (DataMasterBase_o *)v1194;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[320], (int32_t)v1194, v553, v1195);
  v1196 = (WarBoardRoadMaster_o *)sub_1BDBAC4(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v1196, 0LL);
  if ( v1196 )
  {
    v551 = sub_1BDB9B4(v1196, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1646;
  v549->m_Items[321] = (DataMasterBase_o *)v1196;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[321], (int32_t)v1196, v553, v1197);
  v1198 = (WarBoardStageMaster_o *)sub_1BDBAC4(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v1198, 0LL);
  if ( v1198 )
  {
    v551 = sub_1BDB9B4(v1198, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1646;
  v549->m_Items[322] = (DataMasterBase_o *)v1198;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[322], (int32_t)v1198, v553, v1199);
  v1200 = (WarBoardActionPointMaster_o *)sub_1BDBAC4(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v1200, 0LL);
  if ( v1200 )
  {
    v551 = sub_1BDB9B4(v1200, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1646;
  v549->m_Items[323] = (DataMasterBase_o *)v1200;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[323], (int32_t)v1200, v553, v1201);
  v1202 = (WarBoardActionTrendMaster_o *)sub_1BDBAC4(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v1202, 0LL);
  if ( v1202 )
  {
    v551 = sub_1BDB9B4(v1202, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1646;
  v549->m_Items[324] = (DataMasterBase_o *)v1202;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[324], (int32_t)v1202, v553, v1203);
  v1204 = (WarBoardTacticalTrendMaster_o *)sub_1BDBAC4(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v1204, 0LL);
  if ( v1204 )
  {
    v551 = sub_1BDB9B4(v1204, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1646;
  v549->m_Items[325] = (DataMasterBase_o *)v1204;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[325], (int32_t)v1204, v553, v1205);
  v1206 = (WarBoardStageLayoutMaster_o *)sub_1BDBAC4(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v1206, 0LL);
  if ( v1206 )
  {
    v551 = sub_1BDB9B4(v1206, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1646;
  v549->m_Items[326] = (DataMasterBase_o *)v1206;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[326], (int32_t)v1206, v553, v1207);
  v1208 = (WarBoardStageNpcMaster_o *)sub_1BDBAC4(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v1208, 0LL);
  if ( v1208 )
  {
    v551 = sub_1BDB9B4(v1208, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1646;
  v549->m_Items[327] = (DataMasterBase_o *)v1208;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[327], (int32_t)v1208, v553, v1209);
  v1210 = (WarBoardStageWallMaster_o *)sub_1BDBAC4(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v1210, 0LL);
  if ( v1210 )
  {
    v551 = sub_1BDB9B4(v1210, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1646;
  v549->m_Items[328] = (DataMasterBase_o *)v1210;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[328], (int32_t)v1210, v553, v1211);
  v1212 = (WarBoardAIMaster_o *)sub_1BDBAC4(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v1212, 0LL);
  if ( v1212 )
  {
    v551 = sub_1BDB9B4(v1212, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1646;
  v549->m_Items[329] = (DataMasterBase_o *)v1212;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[329], (int32_t)v1212, v553, v1213);
  v1214 = (WarBoardRatingBaseMaster_o *)sub_1BDBAC4(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v1214, 0LL);
  if ( v1214 )
  {
    v551 = sub_1BDB9B4(v1214, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1646;
  v549->m_Items[330] = (DataMasterBase_o *)v1214;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[330], (int32_t)v1214, v553, v1215);
  v1216 = (WarBoardRatingOffsetMaster_o *)sub_1BDBAC4(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v1216, 0LL);
  if ( v1216 )
  {
    v551 = sub_1BDB9B4(v1216, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1646;
  v549->m_Items[331] = (DataMasterBase_o *)v1216;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[331], (int32_t)v1216, v553, v1217);
  v1218 = (WarBoardItemMaster_o *)sub_1BDBAC4(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v1218, 0LL);
  if ( v1218 )
  {
    v551 = sub_1BDB9B4(v1218, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1646;
  v549->m_Items[332] = (DataMasterBase_o *)v1218;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[332], (int32_t)v1218, v553, v1219);
  v1220 = (WarBoardTreasureMaster_o *)sub_1BDBAC4(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v1220, 0LL);
  if ( v1220 )
  {
    v551 = sub_1BDB9B4(v1220, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1646;
  v549->m_Items[333] = (DataMasterBase_o *)v1220;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[333], (int32_t)v1220, v553, v1221);
  v1222 = (WarBoardQuestMaster_o *)sub_1BDBAC4(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v1222, 0LL);
  if ( v1222 )
  {
    v551 = sub_1BDB9B4(v1222, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1646;
  v549->m_Items[334] = (DataMasterBase_o *)v1222;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[334], (int32_t)v1222, v553, v1223);
  v1224 = (WarBoardDataMaster_o *)sub_1BDBAC4(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v1224, 0LL);
  if ( v1224 )
  {
    v551 = sub_1BDB9B4(v1224, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1646;
  v549->m_Items[335] = (DataMasterBase_o *)v1224;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[335], (int32_t)v1224, v553, v1225);
  v1226 = (WarBoardIndividualityClassMaster_o *)sub_1BDBAC4(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v1226, 0LL);
  if ( v1226 )
  {
    v551 = sub_1BDB9B4(v1226, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1646;
  v549->m_Items[336] = (DataMasterBase_o *)v1226;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[336], (int32_t)v1226, v553, v1227);
  v1228 = (WarBoardActionTrendConditionMaster_o *)sub_1BDBAC4(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v1228, 0LL);
  if ( v1228 )
  {
    v551 = sub_1BDB9B4(v1228, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1646;
  v549->m_Items[337] = (DataMasterBase_o *)v1228;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[337], (int32_t)v1228, v553, v1229);
  v1230 = (WarBoardActionPointClassMaster_o *)sub_1BDBAC4(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v1230, 0LL);
  if ( v1230 )
  {
    v551 = sub_1BDB9B4(v1230, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1646;
  v549->m_Items[338] = (DataMasterBase_o *)v1230;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[338], (int32_t)v1230, v553, v1231);
  v1232 = (EventPanelMapMaster_o *)sub_1BDBAC4(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v1232, 0LL);
  if ( v1232 )
  {
    v551 = sub_1BDB9B4(v1232, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1646;
  v549->m_Items[339] = (DataMasterBase_o *)v1232;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[339], (int32_t)v1232, v553, v1233);
  v1234 = (EventPanelMapDetailMaster_o *)sub_1BDBAC4(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v1234, 0LL);
  if ( v1234 )
  {
    v551 = sub_1BDB9B4(v1234, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1646;
  v549->m_Items[340] = (DataMasterBase_o *)v1234;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[340], (int32_t)v1234, v553, v1235);
  v1236 = (EventPanelSpotMaster_o *)sub_1BDBAC4(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v1236, 0LL);
  if ( v1236 )
  {
    v551 = sub_1BDB9B4(v1236, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1646;
  v549->m_Items[341] = (DataMasterBase_o *)v1236;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[341], (int32_t)v1236, v553, v1237);
  v1238 = (EventPanelScanMaster_o *)sub_1BDBAC4(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v1238, 0LL);
  if ( v1238 )
  {
    v551 = sub_1BDB9B4(v1238, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1646;
  v549->m_Items[342] = (DataMasterBase_o *)v1238;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[342], (int32_t)v1238, v553, v1239);
  v1240 = (CommonConsumeMaster_o *)sub_1BDBAC4(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v1240, 0LL);
  if ( v1240 )
  {
    v551 = sub_1BDB9B4(v1240, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1646;
  v549->m_Items[343] = (DataMasterBase_o *)v1240;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[343], (int32_t)v1240, v553, v1241);
  v1242 = (UserEventMapMaster_o *)sub_1BDBAC4(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v1242, 0LL);
  if ( v1242 )
  {
    v551 = sub_1BDB9B4(v1242, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1646;
  v549->m_Items[344] = (DataMasterBase_o *)v1242;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[344], (int32_t)v1242, v553, v1243);
  v1244 = (UserEventSpotMaster_o *)sub_1BDBAC4(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v1244, 0LL);
  if ( v1244 )
  {
    v551 = sub_1BDB9B4(v1244, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1646;
  v549->m_Items[345] = (DataMasterBase_o *)v1244;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[345], (int32_t)v1244, v553, v1245);
  v1246 = (WarGroupMaster_o *)sub_1BDBAC4(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v1246, 0LL);
  if ( v1246 )
  {
    v551 = sub_1BDB9B4(v1246, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1646;
  v549->m_Items[346] = (DataMasterBase_o *)v1246;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[346], (int32_t)v1246, v553, v1247);
  v1248 = (ServantLimitImageMaster_o *)sub_1BDBAC4(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v1248, 0LL);
  if ( v1248 )
  {
    v551 = sub_1BDB9B4(v1248, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1646;
  v549->m_Items[347] = (DataMasterBase_o *)v1248;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[347], (int32_t)v1248, v553, v1249);
  v1250 = (FriendshipQuestDialogInfoMaster_o *)sub_1BDBAC4(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v1250, 0LL);
  if ( v1250 )
  {
    v551 = sub_1BDB9B4(v1250, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1646;
  v549->m_Items[348] = (DataMasterBase_o *)v1250;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[348], (int32_t)v1250, v553, v1251);
  v1252 = (QuestRestrictionInfoMaster_o *)sub_1BDBAC4(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v1252, 0LL);
  if ( v1252 )
  {
    v551 = sub_1BDB9B4(v1252, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1646;
  v549->m_Items[349] = (DataMasterBase_o *)v1252;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[349], (int32_t)v1252, v553, v1253);
  v1254 = (AssistMaster_o *)sub_1BDBAC4(AssistMaster_TypeInfo);
  AssistMaster___ctor(v1254, 0LL);
  if ( v1254 )
  {
    v551 = sub_1BDB9B4(v1254, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1646;
  v549->m_Items[350] = (DataMasterBase_o *)v1254;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[350], (int32_t)v1254, v553, v1255);
  v1256 = (WarBoardEffectMaster_o *)sub_1BDBAC4(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v1256, 0LL);
  if ( v1256 )
  {
    v551 = sub_1BDB9B4(v1256, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1646;
  v549->m_Items[351] = (DataMasterBase_o *)v1256;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[351], (int32_t)v1256, v553, v1257);
  v1258 = (WarBoardOnboardSkillMaster_o *)sub_1BDBAC4(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v1258, 0LL);
  if ( v1258 )
  {
    v551 = sub_1BDB9B4(v1258, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1646;
  v549->m_Items[352] = (DataMasterBase_o *)v1258;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[352], (int32_t)v1258, v553, v1259);
  v1260 = (BeforeBirthDayMaster_o *)sub_1BDBAC4(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v1260, 0LL);
  if ( v1260 )
  {
    v551 = sub_1BDB9B4(v1260, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1646;
  v549->m_Items[353] = (DataMasterBase_o *)v1260;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[353], (int32_t)v1260, v553, v1261);
  v1262 = (LoginQuestMaster_o *)sub_1BDBAC4(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v1262, 0LL);
  if ( v1262 )
  {
    v551 = sub_1BDB9B4(v1262, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1646;
  v549->m_Items[354] = (DataMasterBase_o *)v1262;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[354], (int32_t)v1262, v553, v1263);
  v1264 = (EventCombineCostumeMaster_o *)sub_1BDBAC4(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v1264, 0LL);
  if ( v1264 )
  {
    v551 = sub_1BDB9B4(v1264, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1646;
  v549->m_Items[355] = (DataMasterBase_o *)v1264;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[355], (int32_t)v1264, v553, v1265);
  v1266 = (WarBoardStagePieceDetailMaster_o *)sub_1BDBAC4(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v1266, 0LL);
  if ( v1266 )
  {
    v551 = sub_1BDB9B4(v1266, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1646;
  v549->m_Items[356] = (DataMasterBase_o *)v1266;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[356], (int32_t)v1266, v553, v1267);
  v1268 = (ServantTreasureDeviceAddMaster_o *)sub_1BDBAC4(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v1268, 0LL);
  if ( v1268 )
  {
    v551 = sub_1BDB9B4(v1268, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1646;
  v549->m_Items[357] = (DataMasterBase_o *)v1268;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[357], (int32_t)v1268, v553, v1269);
  v1270 = (SkillAddMaster_o *)sub_1BDBAC4(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v1270, 0LL);
  if ( v1270 )
  {
    v551 = sub_1BDB9B4(v1270, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1646;
  v549->m_Items[358] = (DataMasterBase_o *)v1270;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[358], (int32_t)v1270, v553, v1271);
  v1272 = (ServantLvDetailMaster_o *)sub_1BDBAC4(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v1272, 0LL);
  if ( v1272 )
  {
    v551 = sub_1BDB9B4(v1272, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1646;
  v549->m_Items[359] = (DataMasterBase_o *)v1272;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[359], (int32_t)v1272, v553, v1273);
  v1274 = (GachaAppendMaster_o *)sub_1BDBAC4(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v1274, 0LL);
  if ( v1274 )
  {
    v551 = sub_1BDB9B4(v1274, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1646;
  v549->m_Items[360] = (DataMasterBase_o *)v1274;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[360], (int32_t)v1274, v553, v1275);
  v1276 = (UserGachaDrawLogMaster_o *)sub_1BDBAC4(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v1276, 0LL);
  if ( v1276 )
  {
    v551 = sub_1BDB9B4(v1276, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1646;
  v549->m_Items[361] = (DataMasterBase_o *)v1276;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[361], (int32_t)v1276, v553, v1277);
  v1278 = (ServantAppendPassiveSkillMaster_o *)sub_1BDBAC4(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v1278, 0LL);
  if ( v1278 )
  {
    v551 = sub_1BDB9B4(v1278, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1646;
  v549->m_Items[362] = (DataMasterBase_o *)v1278;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[362], (int32_t)v1278, v553, v1279);
  v1280 = (UserServantAppendPassiveSkillMaster_o *)sub_1BDBAC4(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v1280, 0LL);
  if ( v1280 )
  {
    v551 = sub_1BDB9B4(v1280, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1646;
  v549->m_Items[363] = (DataMasterBase_o *)v1280;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[363], (int32_t)v1280, v553, v1281);
  v1282 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1BDBAC4(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v1282, 0LL);
  if ( v1282 )
  {
    v551 = sub_1BDB9B4(v1282, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1646;
  v549->m_Items[364] = (DataMasterBase_o *)v1282;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[364], (int32_t)v1282, v553, v1283);
  v1284 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1BDBAC4(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v1284, 0LL);
  if ( v1284 )
  {
    v551 = sub_1BDB9B4(v1284, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1646;
  v549->m_Items[365] = (DataMasterBase_o *)v1284;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[365], (int32_t)v1284, v553, v1285);
  v1286 = (CombineAppendPassiveSkillMaster_o *)sub_1BDBAC4(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v1286, 0LL);
  if ( v1286 )
  {
    v551 = sub_1BDB9B4(v1286, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1646;
  v549->m_Items[366] = (DataMasterBase_o *)v1286;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[366], (int32_t)v1286, v553, v1287);
  v1288 = (SvtCoinMaster_o *)sub_1BDBAC4(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v1288, 0LL);
  if ( v1288 )
  {
    v551 = sub_1BDB9B4(v1288, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1646;
  v549->m_Items[367] = (DataMasterBase_o *)v1288;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[367], (int32_t)v1288, v553, v1289);
  v1290 = (UserSvtCoinMaster_o *)sub_1BDBAC4(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v1290, 0LL);
  if ( v1290 )
  {
    v551 = sub_1BDB9B4(v1290, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1646;
  v549->m_Items[368] = (DataMasterBase_o *)v1290;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[368], (int32_t)v1290, v553, v1291);
  v1292 = (ServantAddMaster_o *)sub_1BDBAC4(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v1292, 0LL);
  if ( v1292 )
  {
    v551 = sub_1BDB9B4(v1292, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1646;
  v549->m_Items[369] = (DataMasterBase_o *)v1292;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[369], (int32_t)v1292, v553, v1293);
  v1294 = (TreasureBoxMaster_o *)sub_1BDBAC4(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v1294, 0LL);
  if ( v1294 )
  {
    v551 = sub_1BDB9B4(v1294, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1646;
  v549->m_Items[370] = (DataMasterBase_o *)v1294;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[370], (int32_t)v1294, v553, v1295);
  v1296 = (TreasureBoxGiftMaster_o *)sub_1BDBAC4(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v1296, 0LL);
  if ( v1296 )
  {
    v551 = sub_1BDB9B4(v1296, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1646;
  v549->m_Items[371] = (DataMasterBase_o *)v1296;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[371], (int32_t)v1296, v553, v1297);
  v1298 = (TreasureBoxTalkMaster_o *)sub_1BDBAC4(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v1298, 0LL);
  if ( v1298 )
  {
    v551 = sub_1BDB9B4(v1298, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1646;
  v549->m_Items[372] = (DataMasterBase_o *)v1298;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[372], (int32_t)v1298, v553, v1299);
  v1300 = (UserEventExpeditionMaster_o *)sub_1BDBAC4(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v1300, 0LL);
  if ( v1300 )
  {
    v551 = sub_1BDB9B4(v1300, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1646;
  v549->m_Items[373] = (DataMasterBase_o *)v1300;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[373], (int32_t)v1300, v553, v1301);
  v1302 = (EventExpeditionMaster_o *)sub_1BDBAC4(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v1302, 0LL);
  if ( v1302 )
  {
    v551 = sub_1BDB9B4(v1302, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1646;
  v549->m_Items[374] = (DataMasterBase_o *)v1302;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[374], (int32_t)v1302, v553, v1303);
  v1304 = (EventExpeditionPieceMaster_o *)sub_1BDBAC4(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v1304, 0LL);
  if ( v1304 )
  {
    v551 = sub_1BDB9B4(v1304, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1646;
  v549->m_Items[375] = (DataMasterBase_o *)v1304;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[375], (int32_t)v1304, v553, v1305);
  v1306 = (EventRecipeMaster_o *)sub_1BDBAC4(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v1306, 0LL);
  if ( v1306 )
  {
    v551 = sub_1BDB9B4(v1306, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1646;
  v549->m_Items[376] = (DataMasterBase_o *)v1306;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[376], (int32_t)v1306, v553, v1307);
  v1308 = (EventRecipeGiftMaster_o *)sub_1BDBAC4(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v1308, 0LL);
  if ( v1308 )
  {
    v551 = sub_1BDB9B4(v1308, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1646;
  v549->m_Items[377] = (DataMasterBase_o *)v1308;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[377], (int32_t)v1308, v553, v1309);
  v1310 = (UserEventFortificationMaster_o *)sub_1BDBAC4(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v1310, 0LL);
  if ( v1310 )
  {
    v551 = sub_1BDB9B4(v1310, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1646;
  v549->m_Items[378] = (DataMasterBase_o *)v1310;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[378], (int32_t)v1310, v553, v1311);
  v1312 = (EventFortificationMaster_o *)sub_1BDBAC4(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v1312, 0LL);
  if ( v1312 )
  {
    v551 = sub_1BDB9B4(v1312, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1646;
  v549->m_Items[379] = (DataMasterBase_o *)v1312;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[379], (int32_t)v1312, v553, v1313);
  v1314 = (EventFortificationDetailMaster_o *)sub_1BDBAC4(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v1314, 0LL);
  if ( v1314 )
  {
    v551 = sub_1BDB9B4(v1314, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1646;
  v549->m_Items[380] = (DataMasterBase_o *)v1314;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[380], (int32_t)v1314, v553, v1315);
  v1316 = (EventFortificationSvtMaster_o *)sub_1BDBAC4(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v1316, 0LL);
  if ( v1316 )
  {
    v551 = sub_1BDB9B4(v1316, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1646;
  v549->m_Items[381] = (DataMasterBase_o *)v1316;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[381], (int32_t)v1316, v553, v1317);
  v1318 = (UserServantVoicePlayedMaster_o *)sub_1BDBAC4(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v1318, 0LL);
  if ( v1318 )
  {
    v551 = sub_1BDB9B4(v1318, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1646;
  v549->m_Items[382] = (DataMasterBase_o *)v1318;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[382], (int32_t)v1318, v553, v1319);
  v1320 = (UpdateProfileDialogInfoMaster_o *)sub_1BDBAC4(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v1320, 0LL);
  if ( v1320 )
  {
    v551 = sub_1BDB9B4(v1320, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1646;
  v549->m_Items[383] = (DataMasterBase_o *)v1320;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[383], (int32_t)v1320, v553, v1321);
  v1322 = (SvtMaterialTdMaster_o *)sub_1BDBAC4(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v1322, 0LL);
  if ( v1322 )
  {
    v551 = sub_1BDB9B4(v1322, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1646;
  v549->m_Items[384] = (DataMasterBase_o *)v1322;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[384], (int32_t)v1322, v553, v1323);
  v1324 = (BattleMasterImageMaster_o *)sub_1BDBAC4(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v1324, 0LL);
  if ( v1324 )
  {
    v551 = sub_1BDB9B4(v1324, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1646;
  v549->m_Items[385] = (DataMasterBase_o *)v1324;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[385], (int32_t)v1324, v553, v1325);
  v1326 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1BDBAC4(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v1326, 0LL);
  if ( v1326 )
  {
    v551 = sub_1BDB9B4(v1326, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1646;
  v549->m_Items[386] = (DataMasterBase_o *)v1326;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[386], (int32_t)v1326, v553, v1327);
  v1328 = (UserEventRandomMissionMaster_o *)sub_1BDBAC4(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v1328, 0LL);
  if ( v1328 )
  {
    v551 = sub_1BDB9B4(v1328, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1646;
  v549->m_Items[387] = (DataMasterBase_o *)v1328;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[387], (int32_t)v1328, v553, v1329);
  v1330 = (EventProgressValueMaster_o *)sub_1BDBAC4(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v1330, 0LL);
  if ( v1330 )
  {
    v551 = sub_1BDB9B4(v1330, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1646;
  v549->m_Items[388] = (DataMasterBase_o *)v1330;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[388], (int32_t)v1330, v553, v1331);
  v1332 = (SvtMultiPortraitMaster_o *)sub_1BDBAC4(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v1332, 0LL);
  if ( v1332 )
  {
    v551 = sub_1BDB9B4(v1332, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1646;
  v549->m_Items[389] = (DataMasterBase_o *)v1332;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[389], (int32_t)v1332, v553, v1333);
  v1334 = (EventRandomMissionMaster_o *)sub_1BDBAC4(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v1334, 0LL);
  if ( v1334 )
  {
    v551 = sub_1BDB9B4(v1334, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1646;
  v549->m_Items[390] = (DataMasterBase_o *)v1334;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[390], (int32_t)v1334, v553, v1335);
  v1336 = (UserGachaHistoryMaster_o *)sub_1BDBAC4(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v1336, 0LL);
  if ( v1336 )
  {
    v551 = sub_1BDB9B4(v1336, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1646;
  v549->m_Items[391] = (DataMasterBase_o *)v1336;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[391], (int32_t)v1336, v553, v1337);
  v1338 = (UserCoinRoomMaster_o *)sub_1BDBAC4(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v1338, 0LL);
  if ( v1338 )
  {
    v551 = sub_1BDB9B4(v1338, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1646;
  v549->m_Items[392] = (DataMasterBase_o *)v1338;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[392], (int32_t)v1338, v553, v1339);
  v1340 = (EventBuddyPointMaster_o *)sub_1BDBAC4(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v1340, 0LL);
  if ( v1340 )
  {
    v551 = sub_1BDB9B4(v1340, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1646;
  v549->m_Items[393] = (DataMasterBase_o *)v1340;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[393], (int32_t)v1340, v553, v1341);
  v1342 = (EventServantPointRankMaster_o *)sub_1BDBAC4(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v1342, 0LL);
  if ( v1342 )
  {
    v551 = sub_1BDB9B4(v1342, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1646;
  v549->m_Items[394] = (DataMasterBase_o *)v1342;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[394], (int32_t)v1342, v553, v1343);
  v1344 = (UserEventServantPointMaster_o *)sub_1BDBAC4(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v1344, 0LL);
  if ( v1344 )
  {
    v551 = sub_1BDB9B4(v1344, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1646;
  v549->m_Items[395] = (DataMasterBase_o *)v1344;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[395], (int32_t)v1344, v553, v1345);
  v1346 = (FieldMotionMaster_o *)sub_1BDBAC4(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v1346, 0LL);
  if ( v1346 )
  {
    v551 = sub_1BDB9B4(v1346, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1646;
  v549->m_Items[396] = (DataMasterBase_o *)v1346;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[396], (int32_t)v1346, v553, v1347);
  v1348 = (UserDeleteReservationMaster_o *)sub_1BDBAC4(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v1348, 0LL);
  if ( v1348 )
  {
    v551 = sub_1BDB9B4(v1348, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1646;
  v549->m_Items[397] = (DataMasterBase_o *)v1348;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[397], (int32_t)v1348, v553, v1349);
  v1350 = (ServantScriptMultipleMaster_o *)sub_1BDBAC4(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v1350, 0LL);
  if ( v1350 )
  {
    v551 = sub_1BDB9B4(v1350, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1646;
  v549->m_Items[398] = (DataMasterBase_o *)v1350;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[398], (int32_t)v1350, v553, v1351);
  v1352 = (EquipAddMaster_o *)sub_1BDBAC4(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v1352, 0LL);
  if ( v1352 )
  {
    v551 = sub_1BDB9B4(v1352, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1646;
  v549->m_Items[399] = (DataMasterBase_o *)v1352;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[399], (int32_t)v1352, v553, v1353);
  v1354 = (QuestReleaseOverwriteMaster_o *)sub_1BDBAC4(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v1354, 0LL);
  if ( v1354 )
  {
    v551 = sub_1BDB9B4(v1354, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1646;
  v549->m_Items[400] = (DataMasterBase_o *)v1354;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[400], (int32_t)v1354, v553, v1355);
  v1356 = (UserEventAlloutBattleMaster_o *)sub_1BDBAC4(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v1356, 0LL);
  if ( v1356 )
  {
    v551 = sub_1BDB9B4(v1356, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1646;
  v549->m_Items[401] = (DataMasterBase_o *)v1356;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[401], (int32_t)v1356, v553, v1357);
  v1358 = (QuestScriptMaterialNextMaster_o *)sub_1BDBAC4(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v1358, 0LL);
  if ( v1358 )
  {
    v551 = sub_1BDB9B4(v1358, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1646;
  v549->m_Items[402] = (DataMasterBase_o *)v1358;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[402], (int32_t)v1358, v553, v1359);
  v1360 = (EventDiggingMaster_o *)sub_1BDBAC4(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v1360, 0LL);
  if ( v1360 )
  {
    v551 = sub_1BDB9B4(v1360, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1646;
  v549->m_Items[403] = (DataMasterBase_o *)v1360;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[403], (int32_t)v1360, v553, v1361);
  v1362 = (EventDiggingBlockMaster_o *)sub_1BDBAC4(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v1362, 0LL);
  if ( v1362 )
  {
    v551 = sub_1BDB9B4(v1362, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1646;
  v549->m_Items[404] = (DataMasterBase_o *)v1362;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[404], (int32_t)v1362, v553, v1363);
  v1364 = (EventDiggingRewardMaster_o *)sub_1BDBAC4(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v1364, 0LL);
  if ( v1364 )
  {
    v551 = sub_1BDB9B4(v1364, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1646;
  v549->m_Items[405] = (DataMasterBase_o *)v1364;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[405], (int32_t)v1364, v553, v1365);
  v1366 = (UserEventDiggingMaster_o *)sub_1BDBAC4(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v1366, 0LL);
  if ( v1366 )
  {
    v551 = sub_1BDB9B4(v1366, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1646;
  v549->m_Items[406] = (DataMasterBase_o *)v1366;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[406], (int32_t)v1366, v553, v1367);
  v1368 = (BattleMessageMaster_o *)sub_1BDBAC4(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v1368, 0LL);
  if ( v1368 )
  {
    v551 = sub_1BDB9B4(v1368, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1646;
  v549->m_Items[407] = (DataMasterBase_o *)v1368;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[407], (int32_t)v1368, v553, v1369);
  v1370 = (BattleMessageGroupMaster_o *)sub_1BDBAC4(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v1370, 0LL);
  if ( v1370 )
  {
    v551 = sub_1BDB9B4(v1370, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1646;
  v549->m_Items[408] = (DataMasterBase_o *)v1370;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[408], (int32_t)v1370, v553, v1371);
  v1372 = (UserNpcSvtRecordMaster_o *)sub_1BDBAC4(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v1372, 0LL);
  if ( v1372 )
  {
    v551 = sub_1BDB9B4(v1372, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1646;
  v549->m_Items[409] = (DataMasterBase_o *)v1372;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[409], (int32_t)v1372, v553, v1373);
  v1374 = (BuffTypeDetailMaster_o *)sub_1BDBAC4(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v1374, 0LL);
  if ( v1374 )
  {
    v551 = sub_1BDB9B4(v1374, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1646;
  v549->m_Items[410] = (DataMasterBase_o *)v1374;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[410], (int32_t)v1374, v553, v1375);
  v1376 = (WarBoardMessageMaster_o *)sub_1BDBAC4(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v1376, 0LL);
  if ( v1376 )
  {
    v551 = sub_1BDB9B4(v1376, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1646;
  v549->m_Items[411] = (DataMasterBase_o *)v1376;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[411], (int32_t)v1376, v553, v1377);
  v1378 = (WarBoardPartySkillMaster_o *)sub_1BDBAC4(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v1378, 0LL);
  if ( v1378 )
  {
    v551 = sub_1BDB9B4(v1378, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1646;
  v549->m_Items[412] = (DataMasterBase_o *)v1378;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[412], (int32_t)v1378, v553, v1379);
  v1380 = (WarBoardMessageScriptMaster_o *)sub_1BDBAC4(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v1380, 0LL);
  if ( v1380 )
  {
    v551 = sub_1BDB9B4(v1380, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1646;
  v549->m_Items[413] = (DataMasterBase_o *)v1380;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[413], (int32_t)v1380, v553, v1381);
  v1382 = (WarQuestSelectionMaster_o *)sub_1BDBAC4(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v1382, 0LL);
  if ( v1382 )
  {
    v551 = sub_1BDB9B4(v1382, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1646;
  v549->m_Items[414] = (DataMasterBase_o *)v1382;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[414], (int32_t)v1382, v553, v1383);
  v1384 = (WarBoardStageDetailMaster_o *)sub_1BDBAC4(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v1384, 0LL);
  if ( v1384 )
  {
    v551 = sub_1BDB9B4(v1384, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1646;
  v549->m_Items[415] = (DataMasterBase_o *)v1384;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[415], (int32_t)v1384, v553, v1385);
  v1386 = (QuestScriptMaterialOverwriteMaster_o *)sub_1BDBAC4(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v1386, 0LL);
  if ( v1386 )
  {
    v551 = sub_1BDB9B4(v1386, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1646;
  v549->m_Items[416] = (DataMasterBase_o *)v1386;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[416], (int32_t)v1386, v553, v1387);
  v1388 = (QuestScriptBranchMaterialMaster_o *)sub_1BDBAC4(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v1388, 0LL);
  if ( v1388 )
  {
    v551 = sub_1BDB9B4(v1388, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1646;
  v549->m_Items[417] = (DataMasterBase_o *)v1388;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[417], (int32_t)v1388, v553, v1389);
  v1390 = (AdCheckPointMaster_o *)sub_1BDBAC4(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v1390, 0LL);
  if ( v1390 )
  {
    v551 = sub_1BDB9B4(v1390, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1646;
  v549->m_Items[418] = (DataMasterBase_o *)v1390;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[418], (int32_t)v1390, v553, v1391);
  v1392 = (GiftDetailMaster_o *)sub_1BDBAC4(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v1392, 0LL);
  if ( v1392 )
  {
    v551 = sub_1BDB9B4(v1392, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1646;
  v549->m_Items[419] = (DataMasterBase_o *)v1392;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[419], (int32_t)v1392, v553, v1393);
  v1394 = (CombineLimitGiftMaster_o *)sub_1BDBAC4(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v1394, 0LL);
  if ( v1394 )
  {
    v551 = sub_1BDB9B4(v1394, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1646;
  v549->m_Items[420] = (DataMasterBase_o *)v1394;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[420], (int32_t)v1394, v553, v1395);
  v1396 = (EventCooltimeRewardMaster_o *)sub_1BDBAC4(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v1396, 0LL);
  if ( v1396 )
  {
    v551 = sub_1BDB9B4(v1396, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1646;
  v549->m_Items[421] = (DataMasterBase_o *)v1396;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[421], (int32_t)v1396, v553, v1397);
  v1398 = (UserEventCooltimeRewardMaster_o *)sub_1BDBAC4(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v1398, 0LL);
  if ( v1398 )
  {
    v551 = sub_1BDB9B4(v1398, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1646;
  v549->m_Items[422] = (DataMasterBase_o *)v1398;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[422], (int32_t)v1398, v553, v1399);
  v1400 = (ClassBoardBaseMaster_o *)sub_1BDBAC4(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v1400, 0LL);
  if ( v1400 )
  {
    v551 = sub_1BDB9B4(v1400, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1646;
  v549->m_Items[423] = (DataMasterBase_o *)v1400;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[423], (int32_t)v1400, v553, v1401);
  v1402 = (ClassBoardLockMaster_o *)sub_1BDBAC4(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v1402, 0LL);
  if ( v1402 )
  {
    v551 = sub_1BDB9B4(v1402, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1646;
  v549->m_Items[424] = (DataMasterBase_o *)v1402;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[424], (int32_t)v1402, v553, v1403);
  v1404 = (ClassBoardSquareMaster_o *)sub_1BDBAC4(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v1404, 0LL);
  if ( v1404 )
  {
    v551 = sub_1BDB9B4(v1404, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1646;
  v549->m_Items[425] = (DataMasterBase_o *)v1404;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[425], (int32_t)v1404, v553, v1405);
  v1406 = (ClassBoardLineMaster_o *)sub_1BDBAC4(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v1406, 0LL);
  if ( v1406 )
  {
    v551 = sub_1BDB9B4(v1406, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1646;
  v549->m_Items[426] = (DataMasterBase_o *)v1406;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[426], (int32_t)v1406, v553, v1407);
  v1408 = (UserClassBoardSquareMaster_o *)sub_1BDBAC4(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v1408, 0LL);
  if ( v1408 )
  {
    v551 = sub_1BDB9B4(v1408, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1646;
  v549->m_Items[427] = (DataMasterBase_o *)v1408;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[427], (int32_t)v1408, v553, v1409);
  v1410 = (ServantCardAddMaster_o *)sub_1BDBAC4(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v1410, 0LL);
  if ( v1410 )
  {
    v551 = sub_1BDB9B4(v1410, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1646;
  v549->m_Items[428] = (DataMasterBase_o *)v1410;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[428], (int32_t)v1410, v553, v1411);
  v1412 = (MapLayerMaster_o *)sub_1BDBAC4(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v1412, 0LL);
  if ( v1412 )
  {
    v551 = sub_1BDB9B4(v1412, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1646;
  v549->m_Items[429] = (DataMasterBase_o *)v1412;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[429], (int32_t)v1412, v553, v1413);
  v1414 = (SpotLayerMaster_o *)sub_1BDBAC4(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v1414, 0LL);
  if ( v1414 )
  {
    v551 = sub_1BDB9B4(v1414, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1646;
  v549->m_Items[430] = (DataMasterBase_o *)v1414;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[430], (int32_t)v1414, v553, v1415);
  v1416 = (MapGimmickLayerMaster_o *)sub_1BDBAC4(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v1416, 0LL);
  if ( v1416 )
  {
    v551 = sub_1BDB9B4(v1416, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1646;
  v549->m_Items[431] = (DataMasterBase_o *)v1416;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[431], (int32_t)v1416, v553, v1417);
  v1418 = (EventDataLostBattleMaster_o *)sub_1BDBAC4(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v1418, 0LL);
  if ( v1418 )
  {
    v551 = sub_1BDB9B4(v1418, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1646;
  v549->m_Items[432] = (DataMasterBase_o *)v1418;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[432], (int32_t)v1418, v553, v1419);
  v1420 = (EventDataLostBattleResetMaster_o *)sub_1BDBAC4(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v1420, 0LL);
  if ( v1420 )
  {
    v551 = sub_1BDB9B4(v1420, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1646;
  v549->m_Items[433] = (DataMasterBase_o *)v1420;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[433], (int32_t)v1420, v553, v1421);
  v1422 = (UserEventDataLostMaster_o *)sub_1BDBAC4(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v1422, 0LL);
  if ( v1422 )
  {
    v551 = sub_1BDB9B4(v1422, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1646;
  v549->m_Items[434] = (DataMasterBase_o *)v1422;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[434], (int32_t)v1422, v553, v1423);
  v1424 = (QuestHintMaster_o *)sub_1BDBAC4(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v1424, 0LL);
  if ( v1424 )
  {
    v551 = sub_1BDB9B4(v1424, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1646;
  v549->m_Items[435] = (DataMasterBase_o *)v1424;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[435], (int32_t)v1424, v553, v1425);
  v1426 = (FuncTypeDetailMaster_o *)sub_1BDBAC4(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v1426, 0LL);
  if ( v1426 )
  {
    v551 = sub_1BDB9B4(v1426, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1646;
  v549->m_Items[436] = (DataMasterBase_o *)v1426;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[436], (int32_t)v1426, v553, v1427);
  v1428 = (BuffConvertMaster_o *)sub_1BDBAC4(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v1428, 0LL);
  if ( v1428 )
  {
    v551 = sub_1BDB9B4(v1428, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1646;
  v549->m_Items[437] = (DataMasterBase_o *)v1428;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[437], (int32_t)v1428, v553, v1429);
  v1430 = (SkillGroupMaster_o *)sub_1BDBAC4(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v1430, 0LL);
  if ( v1430 )
  {
    v551 = sub_1BDB9B4(v1430, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1646;
  v549->m_Items[438] = (DataMasterBase_o *)v1430;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[438], (int32_t)v1430, v553, v1431);
  v1432 = (SkillGroupOverwriteMaster_o *)sub_1BDBAC4(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v1432, 0LL);
  if ( v1432 )
  {
    v551 = sub_1BDB9B4(v1432, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1646;
  v549->m_Items[439] = (DataMasterBase_o *)v1432;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[439], (int32_t)v1432, v553, v1433);
  v1434 = (SkillIndividualityMaster_o *)sub_1BDBAC4(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v1434, 0LL);
  if ( v1434 )
  {
    v551 = sub_1BDB9B4(v1434, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1646;
  v549->m_Items[440] = (DataMasterBase_o *)v1434;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[440], (int32_t)v1434, v553, v1435);
  v1436 = (RestrictionBaseMaster_o *)sub_1BDBAC4(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v1436, 0LL);
  if ( v1436 )
  {
    v551 = sub_1BDB9B4(v1436, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1646;
  v549->m_Items[441] = (DataMasterBase_o *)v1436;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[441], (int32_t)v1436, v553, v1437);
  v1438 = (RestrictionSlotMaster_o *)sub_1BDBAC4(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v1438, 0LL);
  if ( v1438 )
  {
    v551 = sub_1BDB9B4(v1438, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1646;
  v549->m_Items[442] = (DataMasterBase_o *)v1438;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[442], (int32_t)v1438, v553, v1439);
  v1440 = (RestrictionSlotDetailMaster_o *)sub_1BDBAC4(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v1440, 0LL);
  if ( v1440 )
  {
    v551 = sub_1BDB9B4(v1440, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1646;
  v549->m_Items[443] = (DataMasterBase_o *)v1440;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[443], (int32_t)v1440, v553, v1441);
  v1442 = (RestrictionMessageMaster_o *)sub_1BDBAC4(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v1442, 0LL);
  if ( v1442 )
  {
    v551 = sub_1BDB9B4(v1442, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1646;
  v549->m_Items[444] = (DataMasterBase_o *)v1442;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[444], (int32_t)v1442, v553, v1443);
  v1444 = (RestrictionWholeMaster_o *)sub_1BDBAC4(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v1444, 0LL);
  if ( v1444 )
  {
    v551 = sub_1BDB9B4(v1444, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1646;
  v549->m_Items[445] = (DataMasterBase_o *)v1444;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[445], (int32_t)v1444, v553, v1445);
  v1446 = (FuncDispMaster_o *)sub_1BDBAC4(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v1446, 0LL);
  if ( v1446 )
  {
    v551 = sub_1BDB9B4(v1446, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1646;
  v549->m_Items[446] = (DataMasterBase_o *)v1446;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[446], (int32_t)v1446, v553, v1447);
  v1448 = (ClassBoardCommandSpellMaster_o *)sub_1BDBAC4(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v1448, 0LL);
  if ( v1448 )
  {
    v551 = sub_1BDB9B4(v1448, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1646;
  v549->m_Items[447] = (DataMasterBase_o *)v1448;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[447], (int32_t)v1448, v553, v1449);
  v1450 = (ClassBoardClassMaster_o *)sub_1BDBAC4(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v1450, 0LL);
  if ( v1450 )
  {
    v551 = sub_1BDB9B4(v1450, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1646;
  v549->m_Items[448] = (DataMasterBase_o *)v1450;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[448], (int32_t)v1450, v553, v1451);
  v1452 = (EventCommandAssistMaster_o *)sub_1BDBAC4(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v1452, 0LL);
  if ( v1452 )
  {
    v551 = sub_1BDB9B4(v1452, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1646;
  v549->m_Items[449] = (DataMasterBase_o *)v1452;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[449], (int32_t)v1452, v553, v1453);
  v1454 = (EventMissionGroupMaster_o *)sub_1BDBAC4(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v1454, 0LL);
  if ( v1454 )
  {
    v551 = sub_1BDB9B4(v1454, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1646;
  v549->m_Items[450] = (DataMasterBase_o *)v1454;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[450], (int32_t)v1454, v553, v1455);
  v1456 = (CombineLimitReleaseMaster_o *)sub_1BDBAC4(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v1456, 0LL);
  if ( v1456 )
  {
    v551 = sub_1BDB9B4(v1456, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1646;
  v549->m_Items[451] = (DataMasterBase_o *)v1456;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[451], (int32_t)v1456, v553, v1457);
  v1458 = (HeelPortraitMaster_o *)sub_1BDBAC4(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v1458, 0LL);
  if ( v1458 )
  {
    v551 = sub_1BDB9B4(v1458, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1646;
  v549->m_Items[452] = (DataMasterBase_o *)v1458;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[452], (int32_t)v1458, v553, v1459);
  v1460 = (UserHeelPortraitMaster_o *)sub_1BDBAC4(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v1460, 0LL);
  if ( v1460 )
  {
    v551 = sub_1BDB9B4(v1460, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1646;
  v549->m_Items[453] = (DataMasterBase_o *)v1460;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[453], (int32_t)v1460, v553, v1461);
  v1462 = (TreasureDeviceSequenceWeightMaster_o *)sub_1BDBAC4(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v1462, 0LL);
  if ( v1462 )
  {
    v551 = sub_1BDB9B4(v1462, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1646;
  v549->m_Items[454] = (DataMasterBase_o *)v1462;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[454], (int32_t)v1462, v553, v1463);
  v1464 = (NpcServantFollowerIndividualityMaster_o *)sub_1BDBAC4(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v1464, 0LL);
  if ( v1464 )
  {
    v551 = sub_1BDB9B4(v1464, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1646;
  v549->m_Items[455] = (DataMasterBase_o *)v1464;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[455], (int32_t)v1464, v553, v1465);
  v1466 = (GachaExtraGiftMaster_o *)sub_1BDBAC4(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v1466, 0LL);
  if ( v1466 )
  {
    v551 = sub_1BDB9B4(v1466, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1646;
  v549->m_Items[456] = (DataMasterBase_o *)v1466;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[456], (int32_t)v1466, v553, v1467);
  v1468 = (EventMuralMaster_o *)sub_1BDBAC4(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v1468, 0LL);
  if ( v1468 )
  {
    v551 = sub_1BDB9B4(v1468, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1646;
  v549->m_Items[457] = (DataMasterBase_o *)v1468;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[457], (int32_t)v1468, v553, v1469);
  v1470 = (ViewWaveEnemyMaster_o *)sub_1BDBAC4(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v1470, 0LL);
  if ( v1470 )
  {
    v551 = sub_1BDB9B4(v1470, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1646;
  v549->m_Items[458] = (DataMasterBase_o *)v1470;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[458], (int32_t)v1470, v553, v1471);
  v1472 = (BlankEarthSpotNavimenuMaster_o *)sub_1BDBAC4(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v1472, 0LL);
  if ( v1472 )
  {
    v551 = sub_1BDB9B4(v1472, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1646;
  v549->m_Items[459] = (DataMasterBase_o *)v1472;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[459], (int32_t)v1472, v553, v1473);
  v1474 = (BlankEarthGimmickMaster_o *)sub_1BDBAC4(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v1474, 0LL);
  if ( v1474 )
  {
    v551 = sub_1BDB9B4(v1474, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1646;
  v549->m_Items[460] = (DataMasterBase_o *)v1474;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[460], (int32_t)v1474, v553, v1475);
  v1476 = (TerminalOverwriteMaster_o *)sub_1BDBAC4(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v1476, 0LL);
  if ( v1476 )
  {
    v551 = sub_1BDB9B4(v1476, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1646;
  v549->m_Items[461] = (DataMasterBase_o *)v1476;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[461], (int32_t)v1476, v553, v1477);
  v1478 = (UserExchangeSvtMaster_o *)sub_1BDBAC4(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v1478, 0LL);
  if ( v1478 )
  {
    v551 = sub_1BDB9B4(v1478, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1646;
  v549->m_Items[462] = (DataMasterBase_o *)v1478;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[462], (int32_t)v1478, v553, v1479);
  v1480 = (WarBoardCommonReleaseMaster_o *)sub_1BDBAC4(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v1480, 0LL);
  if ( v1480 )
  {
    v551 = sub_1BDB9B4(v1480, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1646;
  v549->m_Items[463] = (DataMasterBase_o *)v1480;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[463], (int32_t)v1480, v553, v1481);
  v1482 = (WarBoardEventMaster_o *)sub_1BDBAC4(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v1482, 0LL);
  if ( v1482 )
  {
    v551 = sub_1BDB9B4(v1482, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1646;
  v549->m_Items[464] = (DataMasterBase_o *)v1482;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[464], (int32_t)v1482, v553, v1483);
  v1484 = (WarBoardEventScriptMaster_o *)sub_1BDBAC4(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v1484, 0LL);
  if ( v1484 )
  {
    v551 = sub_1BDB9B4(v1484, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1646;
  v549->m_Items[465] = (DataMasterBase_o *)v1484;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[465], (int32_t)v1484, v553, v1485);
  v1486 = (WarBoardStageBossMaster_o *)sub_1BDBAC4(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v1486, 0LL);
  if ( v1486 )
  {
    v551 = sub_1BDB9B4(v1486, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1646;
  v549->m_Items[466] = (DataMasterBase_o *)v1486;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[466], (int32_t)v1486, v553, v1487);
  v1488 = (WarBoardSquareIndexGroupMaster_o *)sub_1BDBAC4(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v1488, 0LL);
  if ( v1488 )
  {
    v551 = sub_1BDB9B4(v1488, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1646;
  v549->m_Items[467] = (DataMasterBase_o *)v1488;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[467], (int32_t)v1488, v553, v1489);
  v1490 = (WarBoardActionTrendGroupMaster_o *)sub_1BDBAC4(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v1490, 0LL);
  if ( v1490 )
  {
    v551 = sub_1BDB9B4(v1490, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1646;
  v549->m_Items[468] = (DataMasterBase_o *)v1490;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[468], (int32_t)v1490, v553, v1491);
  v1492 = (WarBoardRatingOffsetGroupMaster_o *)sub_1BDBAC4(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v1492, 0LL);
  if ( v1492 )
  {
    v551 = sub_1BDB9B4(v1492, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1646;
  v549->m_Items[469] = (DataMasterBase_o *)v1492;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[469], (int32_t)v1492, v553, v1493);
  v1494 = (WarBoardReinforcementsMaster_o *)sub_1BDBAC4(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v1494, 0LL);
  if ( v1494 )
  {
    v551 = sub_1BDB9B4(v1494, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1646;
  v549->m_Items[470] = (DataMasterBase_o *)v1494;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[470], (int32_t)v1494, v553, v1495);
  v1496 = (WarBoardStageReinforcementsMaster_o *)sub_1BDBAC4(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v1496, 0LL);
  if ( v1496 )
  {
    v551 = sub_1BDB9B4(v1496, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1646;
  v549->m_Items[471] = (DataMasterBase_o *)v1496;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[471], (int32_t)v1496, v553, v1497);
  v1498 = (WarBoardFutureActionTrendMaster_o *)sub_1BDBAC4(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v1498, 0LL);
  if ( v1498 )
  {
    v551 = sub_1BDB9B4(v1498, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1646;
  v549->m_Items[472] = (DataMasterBase_o *)v1498;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[472], (int32_t)v1498, v553, v1499);
  v1500 = (ServantProfilePushMaster_o *)sub_1BDBAC4(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v1500, 0LL);
  if ( v1500 )
  {
    v551 = sub_1BDB9B4(v1500, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1646;
  v549->m_Items[473] = (DataMasterBase_o *)v1500;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[473], (int32_t)v1500, v553, v1501);
  v1502 = (MapGimmickPathMaster_o *)sub_1BDBAC4(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v1502, 0LL);
  if ( v1502 )
  {
    v551 = sub_1BDB9B4(v1502, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1646;
  v549->m_Items[474] = (DataMasterBase_o *)v1502;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[474], (int32_t)v1502, v553, v1503);
  v1504 = (MapGimmickPathReleaseMaster_o *)sub_1BDBAC4(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v1504, 0LL);
  if ( v1504 )
  {
    v551 = sub_1BDB9B4(v1504, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1646;
  v549->m_Items[475] = (DataMasterBase_o *)v1504;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[475], (int32_t)v1504, v553, v1505);
  v1506 = (ServantOverwriteMaster_o *)sub_1BDBAC4(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v1506, 0LL);
  if ( v1506 )
  {
    v551 = sub_1BDB9B4(v1506, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1646;
  v549->m_Items[476] = (DataMasterBase_o *)v1506;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[476], (int32_t)v1506, v553, v1507);
  v1508 = (IndividualityPolicyMaster_o *)sub_1BDBAC4(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v1508, 0LL);
  if ( v1508 )
  {
    v551 = sub_1BDB9B4(v1508, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1646;
  v549->m_Items[477] = (DataMasterBase_o *)v1508;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[477], (int32_t)v1508, v553, v1509);
  v1510 = (IndividualityPersonalityMaster_o *)sub_1BDBAC4(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v1510, 0LL);
  if ( v1510 )
  {
    v551 = sub_1BDB9B4(v1510, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1646;
  v549->m_Items[478] = (DataMasterBase_o *)v1510;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[478], (int32_t)v1510, v553, v1511);
  v1512 = (AttriMaster_o *)sub_1BDBAC4(AttriMaster_TypeInfo);
  AttriMaster___ctor(v1512, 0LL);
  if ( v1512 )
  {
    v551 = sub_1BDB9B4(v1512, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1646;
  v549->m_Items[479] = (DataMasterBase_o *)v1512;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[479], (int32_t)v1512, v553, v1513);
  v1514 = (ServantVoicePatternMaster_o *)sub_1BDBAC4(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v1514, 0LL);
  if ( v1514 )
  {
    v551 = sub_1BDB9B4(v1514, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1646;
  v549->m_Items[480] = (DataMasterBase_o *)v1514;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[480], (int32_t)v1514, v553, v1515);
  v1516 = (UserGameCommonMaster_o *)sub_1BDBAC4(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v1516, 0LL);
  if ( v1516 )
  {
    v551 = sub_1BDB9B4(v1516, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1646;
  v549->m_Items[481] = (DataMasterBase_o *)v1516;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[481], (int32_t)v1516, v553, v1517);
  v1518 = (ServantPhotoMaster_o *)sub_1BDBAC4(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v1518, 0LL);
  if ( v1518 )
  {
    v551 = sub_1BDB9B4(v1518, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1646;
  v549->m_Items[482] = (DataMasterBase_o *)v1518;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[482], (int32_t)v1518, v553, v1519);
  v1520 = (MasterPhotoMaster_o *)sub_1BDBAC4(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v1520, 0LL);
  if ( v1520 )
  {
    v551 = sub_1BDB9B4(v1520, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1646;
  v549->m_Items[483] = (DataMasterBase_o *)v1520;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[483], (int32_t)v1520, v553, v1521);
  v1522 = (PhotoFrameMaster_o *)sub_1BDBAC4(PhotoFrameMaster_TypeInfo);
  PhotoFrameMaster___ctor(v1522, 0LL);
  if ( v1522 )
  {
    v551 = sub_1BDB9B4(v1522, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1646;
  v549->m_Items[484] = (DataMasterBase_o *)v1522;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[484], (int32_t)v1522, v553, v1523);
  v1524 = (WarMessageMaster_o *)sub_1BDBAC4(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v1524, 0LL);
  if ( v1524 )
  {
    v551 = sub_1BDB9B4(v1524, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1646;
  v549->m_Items[485] = (DataMasterBase_o *)v1524;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[485], (int32_t)v1524, v553, v1525);
  v1526 = (QuestAutoOrganizationAdjustMaster_o *)sub_1BDBAC4(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v1526, 0LL);
  if ( v1526 )
  {
    v551 = sub_1BDB9B4(v1526, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1646;
  v549->m_Items[486] = (DataMasterBase_o *)v1526;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[486], (int32_t)v1526, v553, v1527);
  v1528 = (ExcludeMotionMaster_o *)sub_1BDBAC4(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v1528, 0LL);
  if ( v1528 )
  {
    v551 = sub_1BDB9B4(v1528, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1646;
  v549->m_Items[487] = (DataMasterBase_o *)v1528;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[487], (int32_t)v1528, v553, v1529);
  v1530 = (UserInterruptionQuestMaster_o *)sub_1BDBAC4(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v1530, 0LL);
  if ( v1530 )
  {
    v551 = sub_1BDB9B4(v1530, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1646;
  v549->m_Items[488] = (DataMasterBase_o *)v1530;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[488], (int32_t)v1530, v553, v1531);
  v1532 = (ServantTransformMaster_o *)sub_1BDBAC4(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v1532, 0LL);
  if ( v1532 )
  {
    v551 = sub_1BDB9B4(v1532, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1646;
  v549->m_Items[489] = (DataMasterBase_o *)v1532;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[489], (int32_t)v1532, v553, v1533);
  v1534 = (MapUpdateScheduleMaster_o *)sub_1BDBAC4(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v1534, 0LL);
  if ( v1534 )
  {
    v551 = sub_1BDB9B4(v1534, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1646;
  v549->m_Items[490] = (DataMasterBase_o *)v1534;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[490], (int32_t)v1534, v553, v1535);
  v1536 = (QuestPhasePresentMaster_o *)sub_1BDBAC4(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v1536, 0LL);
  if ( v1536 )
  {
    v551 = sub_1BDB9B4(v1536, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1646;
  v549->m_Items[491] = (DataMasterBase_o *)v1536;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[491], (int32_t)v1536, v553, v1537);
  v1538 = (UserAccountLinkageMaster_o *)sub_1BDBAC4(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v1538, 0LL);
  if ( v1538 )
  {
    v551 = sub_1BDB9B4(v1538, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1646;
  v549->m_Items[492] = (DataMasterBase_o *)v1538;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[492], (int32_t)v1538, v553, v1539);
  v1540 = (MissionNaviTransitionMaster_o *)sub_1BDBAC4(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v1540, 0LL);
  if ( v1540 )
  {
    v551 = sub_1BDB9B4(v1540, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1646;
  v549->m_Items[493] = (DataMasterBase_o *)v1540;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[493], (int32_t)v1540, v553, v1541);
  v1542 = (MissionNaviQuestMaster_o *)sub_1BDBAC4(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v1542, 0LL);
  if ( v1542 )
  {
    v551 = sub_1BDB9B4(v1542, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1646;
  v549->m_Items[494] = (DataMasterBase_o *)v1542;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[494], (int32_t)v1542, v553, v1543);
  v1544 = (EventTradeGoodsMaster_o *)sub_1BDBAC4(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v1544, 0LL);
  if ( v1544 )
  {
    v551 = sub_1BDB9B4(v1544, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1646;
  v549->m_Items[495] = (DataMasterBase_o *)v1544;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[495], (int32_t)v1544, v553, v1545);
  v1546 = (EventTradeStoreMaster_o *)sub_1BDBAC4(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v1546, 0LL);
  if ( v1546 )
  {
    v551 = sub_1BDB9B4(v1546, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1646;
  v549->m_Items[496] = (DataMasterBase_o *)v1546;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[496], (int32_t)v1546, v553, v1547);
  v1548 = (EventTradePickupMaster_o *)sub_1BDBAC4(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v1548, 0LL);
  if ( v1548 )
  {
    v551 = sub_1BDB9B4(v1548, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1646;
  v549->m_Items[497] = (DataMasterBase_o *)v1548;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[497], (int32_t)v1548, v553, v1549);
  v1550 = (UserEventTradeMaster_o *)sub_1BDBAC4(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v1550, 0LL);
  if ( v1550 )
  {
    v551 = sub_1BDB9B4(v1550, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1646;
  v549->m_Items[498] = (DataMasterBase_o *)v1550;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[498], (int32_t)v1550, v553, v1551);
  v1552 = (PaymentHistoryMaster_o *)sub_1BDBAC4(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v1552, 0LL);
  if ( v1552 )
  {
    v551 = sub_1BDB9B4(v1552, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1646;
  v549->m_Items[499] = (DataMasterBase_o *)v1552;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[499], (int32_t)v1552, v553, v1553);
  v1554 = (UserExternalPaymentStoneMaster_o *)sub_1BDBAC4(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v1554, 0LL);
  if ( v1554 )
  {
    v551 = sub_1BDB9B4(v1554, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1646;
  v549->m_Items[500] = (DataMasterBase_o *)v1554;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[500], (int32_t)v1554, v553, v1555);
  v1556 = (QuestPhaseIndividualityMaster_o *)sub_1BDBAC4(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v1556, 0LL);
  if ( v1556 )
  {
    v551 = sub_1BDB9B4(v1556, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1646;
  v549->m_Items[501] = (DataMasterBase_o *)v1556;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[501], (int32_t)v1556, v553, v1557);
  v1558 = (ViewGachaFeaturedServantMaster_o *)sub_1BDBAC4(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v1558, 0LL);
  if ( v1558 )
  {
    v551 = sub_1BDB9B4(v1558, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1646;
  v549->m_Items[502] = (DataMasterBase_o *)v1558;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[502], (int32_t)v1558, v553, v1559);
  v1560 = (UserGachaPickupCollateralMaster_o *)sub_1BDBAC4(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v1560, 0LL);
  if ( v1560 )
  {
    v551 = sub_1BDB9B4(v1560, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1646;
  v549->m_Items[503] = (DataMasterBase_o *)v1560;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[503], (int32_t)v1560, v553, v1561);
  v1562 = (GachaPickupCollateralMaster_o *)sub_1BDBAC4(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v1562, 0LL);
  if ( v1562 )
  {
    v551 = sub_1BDB9B4(v1562, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1646;
  v549->m_Items[504] = (DataMasterBase_o *)v1562;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[504], (int32_t)v1562, v553, v1563);
  v1564 = (GachaPickupCollateralGroupMaster_o *)sub_1BDBAC4(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v1564, 0LL);
  if ( v1564 )
  {
    v551 = sub_1BDB9B4(v1564, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1646;
  v549->m_Items[505] = (DataMasterBase_o *)v1564;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[505], (int32_t)v1564, v553, v1565);
  v1566 = (BattlePointMaster_o *)sub_1BDBAC4(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v1566, 0LL);
  if ( v1566 )
  {
    v551 = sub_1BDB9B4(v1566, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1646;
  v549->m_Items[506] = (DataMasterBase_o *)v1566;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[506], (int32_t)v1566, v553, v1567);
  v1568 = (BattlePointPhaseMaster_o *)sub_1BDBAC4(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v1568, 0LL);
  if ( v1568 )
  {
    v551 = sub_1BDB9B4(v1568, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1646;
  v549->m_Items[507] = (DataMasterBase_o *)v1568;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[507], (int32_t)v1568, v553, v1569);
  v1570 = (ServantBattlePointMaster_o *)sub_1BDBAC4(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v1570, 0LL);
  if ( v1570 )
  {
    v551 = sub_1BDB9B4(v1570, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1646;
  v549->m_Items[508] = (DataMasterBase_o *)v1570;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[508], (int32_t)v1570, v553, v1571);
  v1572 = (EffectMovieMaster_o *)sub_1BDBAC4(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v1572, 0LL);
  if ( v1572 )
  {
    v551 = sub_1BDB9B4(v1572, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1646;
  v549->m_Items[509] = (DataMasterBase_o *)v1572;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[509], (int32_t)v1572, v553, v1573);
  v1574 = (PaymentLimitMaster_o *)sub_1BDBAC4(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v1574, 0LL);
  if ( v1574 )
  {
    v551 = sub_1BDB9B4(v1574, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1646;
  v549->m_Items[510] = (DataMasterBase_o *)v1574;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[510], (int32_t)v1574, v553, v1575);
  v1576 = (UserPaymentLimitMaster_o *)sub_1BDBAC4(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v1576, 0LL);
  if ( v1576 )
  {
    v551 = sub_1BDB9B4(v1576, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1646;
  v549->m_Items[511] = (DataMasterBase_o *)v1576;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[511], (int32_t)v1576, v553, v1577);
  v1578 = (RoadmapMaster_o *)sub_1BDBAC4(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v1578, 0LL);
  if ( v1578 )
  {
    v551 = sub_1BDB9B4(v1578, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x200 )
    goto LABEL_1646;
  v549->m_Items[512] = (DataMasterBase_o *)v1578;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[512], (int32_t)v1578, v553, v1579);
  v1580 = (UserRecommendSupportMaster_o *)sub_1BDBAC4(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v1580, 0LL);
  if ( v1580 )
  {
    v551 = sub_1BDB9B4(v1580, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x201 )
    goto LABEL_1646;
  v549->m_Items[513] = (DataMasterBase_o *)v1580;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[513], (int32_t)v1580, v553, v1581);
  v1582 = (RecommendSupportQuestMaster_o *)sub_1BDBAC4(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v1582, 0LL);
  if ( v1582 )
  {
    v551 = sub_1BDB9B4(v1582, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x202 )
    goto LABEL_1646;
  v549->m_Items[514] = (DataMasterBase_o *)v1582;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[514], (int32_t)v1582, v553, v1583);
  v1584 = (RecommendAdviceMessageMaster_o *)sub_1BDBAC4(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v1584, 0LL);
  if ( v1584 )
  {
    v551 = sub_1BDB9B4(v1584, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x203 )
    goto LABEL_1646;
  v549->m_Items[515] = (DataMasterBase_o *)v1584;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[515], (int32_t)v1584, v553, v1585);
  v1586 = (UserRecommendFollowerMaster_o *)sub_1BDBAC4(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v1586, 0LL);
  if ( v1586 )
  {
    v551 = sub_1BDB9B4(v1586, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x204 )
    goto LABEL_1646;
  v549->m_Items[516] = (DataMasterBase_o *)v1586;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[516], (int32_t)v1586, v553, v1587);
  v1588 = (ItemDropEfficiencyMaster_o *)sub_1BDBAC4(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v1588, 0LL);
  if ( v1588 )
  {
    v551 = sub_1BDB9B4(v1588, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x205 )
    goto LABEL_1646;
  v549->m_Items[517] = (DataMasterBase_o *)v1588;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[517], (int32_t)v1588, v553, v1589);
  v1590 = (BlankEarthGimmickAddMaster_o *)sub_1BDBAC4(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v1590, 0LL);
  if ( v1590 )
  {
    v551 = sub_1BDB9B4(v1590, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x206 )
    goto LABEL_1646;
  v549->m_Items[518] = (DataMasterBase_o *)v1590;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[518], (int32_t)v1590, v553, v1591);
  v1592 = (WarReleaseMaster_o *)sub_1BDBAC4(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v1592, 0LL);
  if ( v1592 )
  {
    v551 = sub_1BDB9B4(v1592, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x207 )
    goto LABEL_1646;
  v549->m_Items[519] = (DataMasterBase_o *)v1592;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[519], (int32_t)v1592, v553, v1593);
  v1594 = (SelectBonusBaseMaster_o *)sub_1BDBAC4(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v1594, 0LL);
  if ( v1594 )
  {
    v551 = sub_1BDB9B4(v1594, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x208 )
    goto LABEL_1646;
  v549->m_Items[520] = (DataMasterBase_o *)v1594;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[520], (int32_t)v1594, v553, v1595);
  v1596 = (SelectBonusMaster_o *)sub_1BDBAC4(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v1596, 0LL);
  if ( v1596 )
  {
    v551 = sub_1BDB9B4(v1596, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x209 )
    goto LABEL_1646;
  v549->m_Items[521] = (DataMasterBase_o *)v1596;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[521], (int32_t)v1596, v553, v1597);
  v1598 = (MyroomServantSpecialImageMaster_o *)sub_1BDBAC4(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v1598, 0LL);
  if ( v1598 )
  {
    v551 = sub_1BDB9B4(v1598, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x20A )
    goto LABEL_1646;
  v549->m_Items[522] = (DataMasterBase_o *)v1598;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[522], (int32_t)v1598, v553, v1599);
  v1600 = (ShopResetMaster_o *)sub_1BDBAC4(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v1600, 0LL);
  if ( v1600 )
  {
    v551 = sub_1BDB9B4(v1600, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x20B )
    goto LABEL_1646;
  v549->m_Items[523] = (DataMasterBase_o *)v1600;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[523], (int32_t)v1600, v553, v1601);
  v1602 = (NpcServantDisplayTypeDetailMaster_o *)sub_1BDBAC4(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v1602, 0LL);
  if ( v1602 )
  {
    v551 = sub_1BDB9B4(v1602, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x20C )
    goto LABEL_1646;
  v549->m_Items[524] = (DataMasterBase_o *)v1602;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[524], (int32_t)v1602, v553, v1603);
  v1604 = (FriendshipServantMaster_o *)sub_1BDBAC4(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v1604, 0LL);
  if ( v1604 )
  {
    v551 = sub_1BDB9B4(v1604, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x20D )
    goto LABEL_1646;
  v549->m_Items[525] = (DataMasterBase_o *)v1604;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[525], (int32_t)v1604, v553, v1605);
  v1606 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1BDBAC4(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v1606, 0LL);
  if ( v1606 )
  {
    v551 = sub_1BDB9B4(v1606, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x20E )
    goto LABEL_1646;
  v549->m_Items[526] = (DataMasterBase_o *)v1606;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[526], (int32_t)v1606, v553, v1607);
  v1608 = (ChaldeaGatePickupMaster_o *)sub_1BDBAC4(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v1608, 0LL);
  if ( v1608 )
  {
    v551 = sub_1BDB9B4(v1608, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x20F )
    goto LABEL_1646;
  v549->m_Items[527] = (DataMasterBase_o *)v1608;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[527], (int32_t)v1608, v553, v1609);
  v1610 = (WarGroupIgnoreMaster_o *)sub_1BDBAC4(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v1610, 0LL);
  if ( v1610 )
  {
    v551 = sub_1BDB9B4(v1610, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x210 )
    goto LABEL_1646;
  v549->m_Items[528] = (DataMasterBase_o *)v1610;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[528], (int32_t)v1610, v553, v1611);
  v1612 = (ImagePartsGroupMaster_o *)sub_1BDBAC4(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v1612, 0LL);
  if ( v1612 )
  {
    v551 = sub_1BDB9B4(v1612, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x211 )
    goto LABEL_1646;
  v549->m_Items[529] = (DataMasterBase_o *)v1612;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[529], (int32_t)v1612, v553, v1613);
  v1614 = (UserImagePartsGroupMaster_o *)sub_1BDBAC4(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v1614, 0LL);
  if ( v1614 )
  {
    v551 = sub_1BDB9B4(v1614, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x212 )
    goto LABEL_1646;
  v549->m_Items[530] = (DataMasterBase_o *)v1614;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[530], (int32_t)v1614, v553, v1615);
  v1616 = (MissionItemDisplayMaster_o *)sub_1BDBAC4(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v1616, 0LL);
  if ( v1616 )
  {
    v551 = sub_1BDB9B4(v1616, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x213 )
    goto LABEL_1646;
  v549->m_Items[531] = (DataMasterBase_o *)v1616;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[531], (int32_t)v1616, v553, v1617);
  v1618 = (QuestUseItemGroupMaster_o *)sub_1BDBAC4(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v1618, 0LL);
  if ( v1618 )
  {
    v551 = sub_1BDB9B4(v1618, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x214 )
    goto LABEL_1646;
  v549->m_Items[532] = (DataMasterBase_o *)v1618;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[532], (int32_t)v1618, v553, v1619);
  v1620 = (QuestUseItemPickupMaster_o *)sub_1BDBAC4(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v1620, 0LL);
  if ( v1620 )
  {
    v551 = sub_1BDB9B4(v1620, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x215 )
    goto LABEL_1646;
  v549->m_Items[533] = (DataMasterBase_o *)v1620;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[533], (int32_t)v1620, v553, v1621);
  v1622 = (UserEventItemLinkSvtMaster_o *)sub_1BDBAC4(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v1622, 0LL);
  if ( v1622 )
  {
    v551 = sub_1BDB9B4(v1622, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x216 )
    goto LABEL_1646;
  v549->m_Items[534] = (DataMasterBase_o *)v1622;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[534], (int32_t)v1622, v553, v1623);
  v1624 = (QuestHintOverwriteMaster_o *)sub_1BDBAC4(QuestHintOverwriteMaster_TypeInfo);
  QuestHintOverwriteMaster___ctor(v1624, 0LL);
  if ( v1624 )
  {
    v551 = sub_1BDB9B4(v1624, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x217 )
    goto LABEL_1646;
  v549->m_Items[535] = (DataMasterBase_o *)v1624;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[535], (int32_t)v1624, v553, v1625);
  v1626 = (ReachedWaveInfoMaster_o *)sub_1BDBAC4(ReachedWaveInfoMaster_TypeInfo);
  ReachedWaveInfoMaster___ctor(v1626, 0LL);
  if ( v1626 )
  {
    v551 = sub_1BDB9B4(v1626, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x218 )
    goto LABEL_1646;
  v549->m_Items[536] = (DataMasterBase_o *)v1626;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[536], (int32_t)v1626, v553, v1627);
  v1628 = (GalleryMaster_o *)sub_1BDBAC4(GalleryMaster_TypeInfo);
  GalleryMaster___ctor(v1628, 0LL);
  if ( v1628 )
  {
    v551 = sub_1BDB9B4(v1628, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x219 )
    goto LABEL_1646;
  v549->m_Items[537] = (DataMasterBase_o *)v1628;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[537], (int32_t)v1628, v553, v1629);
  v1630 = (GalleryResourceMaster_o *)sub_1BDBAC4(GalleryResourceMaster_TypeInfo);
  GalleryResourceMaster___ctor(v1630, 0LL);
  if ( v1630 )
  {
    v551 = sub_1BDB9B4(v1630, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x21A )
    goto LABEL_1646;
  v549->m_Items[538] = (DataMasterBase_o *)v1630;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[538], (int32_t)v1630, v553, v1631);
  v1632 = (ServantSkillAddMaster_o *)sub_1BDBAC4(ServantSkillAddMaster_TypeInfo);
  ServantSkillAddMaster___ctor(v1632, 0LL);
  if ( v1632 )
  {
    v551 = sub_1BDB9B4(v1632, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x21B )
    goto LABEL_1646;
  v549->m_Items[539] = (DataMasterBase_o *)v1632;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[539], (int32_t)v1632, v553, v1633);
  v1634 = (GalleryFolderReleaseMaster_o *)sub_1BDBAC4(GalleryFolderReleaseMaster_TypeInfo);
  GalleryFolderReleaseMaster___ctor(v1634, 0LL);
  if ( v1634 )
  {
    v551 = sub_1BDB9B4(v1634, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x21C )
    goto LABEL_1646;
  v549->m_Items[540] = (DataMasterBase_o *)v1634;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[540], (int32_t)v1634, v553, v1635);
  v1636 = (UserSvtFirstGetTimeMaster_o *)sub_1BDBAC4(UserSvtFirstGetTimeMaster_TypeInfo);
  UserSvtFirstGetTimeMaster___ctor(v1636, 0LL);
  if ( v1636 )
  {
    v551 = sub_1BDB9B4(v1636, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x21D )
    goto LABEL_1646;
  v549->m_Items[541] = (DataMasterBase_o *)v1636;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[541], (int32_t)v1636, v553, v1637);
  v1638 = (QuestExtensionMaster_o *)sub_1BDBAC4(QuestExtensionMaster_TypeInfo);
  QuestExtensionMaster___ctor(v1638, 0LL);
  if ( v1638 )
  {
    v551 = sub_1BDB9B4(v1638, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x21E )
    goto LABEL_1646;
  v549->m_Items[542] = (DataMasterBase_o *)v1638;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[542], (int32_t)v1638, v553, v1639);
  v1640 = (UserServantGrandMaster_o *)sub_1BDBAC4(UserServantGrandMaster_TypeInfo);
  UserServantGrandMaster___ctor(v1640, 0LL);
  if ( v1640 )
  {
    v551 = sub_1BDB9B4(v1640, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x21F )
    goto LABEL_1646;
  v549->m_Items[543] = (DataMasterBase_o *)v1640;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[543], (int32_t)v1640, v553, v1641);
  v1642 = (GrandGraphMaster_o *)sub_1BDBAC4(GrandGraphMaster_TypeInfo);
  GrandGraphMaster___ctor(v1642, 0LL);
  if ( v1642 )
  {
    v551 = sub_1BDB9B4(v1642, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x220 )
    goto LABEL_1646;
  v549->m_Items[544] = (DataMasterBase_o *)v1642;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[544], (int32_t)v1642, v553, v1643);
  v1644 = (GrandGraphDetailMaster_o *)sub_1BDBAC4(GrandGraphDetailMaster_TypeInfo);
  GrandGraphDetailMaster___ctor(v1644, 0LL);
  if ( v1644 )
  {
    v551 = sub_1BDB9B4(v1644, v549->obj.klass->_1.element_class);
    if ( !v551 )
      goto LABEL_1647;
  }
  if ( *p_max_length <= 0x221 )
    goto LABEL_1646;
  v549->m_Items[545] = (DataMasterBase_o *)v1644;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[545], (int32_t)v1644, v553, v1645);
  v1646 = (UserClassStatisticsMaster_o *)sub_1BDBAC4(UserClassStatisticsMaster_TypeInfo);
  UserClassStatisticsMaster___ctor(v1646, 0LL);
  if ( v1646 )
  {
    v551 = sub_1BDB9B4(v1646, v549->obj.klass->_1.element_class);
    if ( !v551 )
    {
LABEL_1647:
      v1649 = sub_1BDBAF8(v551);
      sub_1BDB9A0(v1649, 0LL);
    }
  }
  if ( *p_max_length <= 0x222 )
LABEL_1646:
    sub_1BDBADC(v551, v552, v553);
  v549->m_Items[546] = (DataMasterBase_o *)v1646;
  sub_1BDB81C((CGThumbnailListItem_o *)&v549->m_Items[546], (int32_t)v1646, v553, v1647);
  return v549;
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

  if ( (byte_4B44574 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    sub_1BDB878(&ManagerConfig_TypeInfo, v2);
    byte_4B44574 = 1;
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

  if ( (byte_4B44571 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BDB878(&LocalizationManager_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_8540/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v7);
    byte_4B44571 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v8;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1BDB81C((CGThumbnailListItem_o *)p_masterCheckName, (int32_t)v8, v10, v11);
  v15 = 1;
  do
  {
    v27 = v15;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v12, v13, v14);
    v17 = System_String__Format((System_String_o *)StringLiteral_8540/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v16, 0LL);
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
    sub_1BDBAD4(v22, v19);
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v18,
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v18;
      sub_1BDB81C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
    }
    ++v15;
  }
  while ( v15 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_303395C *method)
{
  long double v2; // q0
  const MethodInfo_303395C_RGCTXs *rgctx_data; // x8
  const MethodInfo_303395C *_1_TMaster; // x19
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
    sub_1BDB878(&UnityEngine_Debug_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v6);
    sub_1BDB878(&int_TypeInfo, v7);
    sub_1BDB878(&DataNameKind_Kind_TypeInfo, v8);
    sub_1BDB878(&System_Type_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_21481/*"master[{0}] is null[{1}:{2}]"*/, v10);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C2BF64();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v12 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v12 )
  {
    sub_1C2BF64();
    v12 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v12[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C2BF08(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v15) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v15,
         &value,
         (const MethodInfo_333CAAC *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v15 = value;
    _1_TMaster = (const MethodInfo_303395C *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_303395C *)sub_1C2BF08(v16);
    if ( !v15 )
      return 0LL;
    result = (Il2CppObject *)sub_1BDB9B4(v15, _1_TMaster);
    if ( result )
      return result;
    sub_1BDBD94(v15);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v30.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v30, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1BDBAD4(rgctxDataDummy, method);
  v19 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v28 = (int)v15;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20, v21, v22);
  v27 = (int)v15;
  v26.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v26.monitor = (void *)-1LL;
  v24 = (Il2CppObject *)System_Enum__ToString(&v26, 0LL);
  v25 = (Il2CppObject *)System_String__Format_62613620((System_String_o *)StringLiteral_21481/*"master[{0}] is null[{1}:{2}]"*/, v19, v23, v24, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v25, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_3033908 *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    if ( !method->rgctx_data )
      sub_1C2BF64();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BDBAD4(0LL, v4);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_303395C *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Func_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B4455C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_CreateMasterData__, method);
    sub_1BDB878(&System_Func_DataMasterBase____TypeInfo, v3);
    byte_4B4455C = 1;
  }
  v4 = (System_Func_object__o *)sub_1BDBAC4(System_Func_DataMasterBase____TypeInfo);
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
  const MethodInfo *v12; // x3
  int v13; // w8
  unsigned int v14; // w23
  __int64 v15; // x2
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  v4 = this;
  if ( (byte_4B4455D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    this = (DataManager_o *)sub_1BDB878(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    byte_4B4455D = 1;
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
          v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v11,
            (const MethodInfo_333A94C *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v10) )
    {
LABEL_19:
      sub_1BDBAD4(this, createMasterDataMethod);
    }
    v13 = *(_DWORD *)(v10 + 24);
    if ( v13 >= 1 )
    {
      v14 = 0;
      while ( v14 < v13 )
      {
        v15 = *(_QWORD *)(v10 + 8LL * (int)v14 + 32);
        if ( !v15 || !v11 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__object___Add(
          v11,
          *(_DWORD *)(v15 + 16),
          (Il2CppObject *)v15,
          (const MethodInfo_333B320 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v13 = *(_DWORD *)(v10 + 24);
        if ( (int)++v14 >= v13 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1BDBADC(this, createMasterDataMethod, method);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v10;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.datalist, v10, (int32_t)method, v12);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v11;
    sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.lookup, (int32_t)v11, v16, v17);
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
  __int64 v21; // x2
  System_Collections_Generic_List_object__o *saveNameList; // x0
  int32_t v23; // w23
  Il2CppObject *Item; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 v27; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v29; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v31; // x25
  __int64 Index_object; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo_37F6054 *v35; // x3
  struct DataMasterBase_array *v36; // x8
  DataMasterBase_o *v37; // x25
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Threading_SynchronizationContext_o *context; // x24
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  const MethodInfo_37F6054 *v43; // x3
  __int64 v44; // x0
  __int64 v45; // x1
  Il2CppObject *lockCountObj; // x22
  int v47; // w1
  _QWORD **v48; // x20
  __int64 v49; // x0
  Il2CppObject *v50; // x20
  __int64 v51; // x0
  struct System_Threading_SynchronizationContext_o *v52; // x20
  __int64 v53; // x0
  __int64 v54; // x0
  __int64 v55; // x1
  System_Threading_SendOrPostCallback_o *v56; // x21
  __int64 v57; // x0
  Il2CppObject *v58; // x23
  __int64 v59; // x0
  intptr_t v60; // w0
  __int64 v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  _QWORD *exception; // x0
  __int64 v65; // [xsp+10h] [xbp-90h]
  __int64 v66; // [xsp+18h] [xbp-88h] BYREF
  __int64 v67; // [xsp+20h] [xbp-80h]
  __int64 v68; // [xsp+28h] [xbp-78h] BYREF
  __int64 v69; // [xsp+30h] [xbp-70h]
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v71; // 0:x0.16
  System_Nullable_long__o v72; // 0:x0.16

  v5 = this;
  if ( (byte_4B4456E & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_1BDB878(&byte___TypeInfo, v6);
    sub_1BDB878(&int___TypeInfo, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____get_Item__, v9);
    sub_1BDB878(&Method_System_Nullable_long___ctor__, v10);
    sub_1BDB878(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_1BDB878(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_1BDB878(&DataManager___c__DisplayClass58_0_TypeInfo, v13);
    byte_4B4456E = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1BDBAD4(this, indexList);
  v14 = sub_1BDB9B4(indexList, int___TypeInfo);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(v14 + 24);
    v65 = sub_1BDB920(byte___TypeInfo, 2000LL);
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; i != v16; ++i )
      {
        v18 = sub_1BDBAC4(DataManager___c__DisplayClass58_0_TypeInfo);
        DataManager___c__DisplayClass58_0___ctor((DataManager___c__DisplayClass58_0_o *)v18, 0LL);
        if ( i >= *(unsigned int *)(v15 + 24) )
          sub_1BDBADC(v19, v20, v21);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1BDBAD4(0LL, v20);
        v23 = *(_DWORD *)(v15 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v23,
                 (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v18 )
          sub_1BDBAD4(Item, Item);
        *(_QWORD *)(v18 + 16) = Item;
        sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)Item, v25, v26);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1BDBAD4(0LL, v27);
        v29 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v23,
                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v18 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v31 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v31,
            (Il2CppObject *)v18,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v31,
                           (const MethodInfo_3131BFC *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v36 = v5->fields.datalist;
            if ( !v36 )
              sub_1BDBAD4(Index_object, v33);
            if ( (unsigned int)Index_object >= v36->max_length )
              sub_1BDBADC(Index_object, v33, v34);
            if ( !v29 )
              sub_1BDBAD4(Index_object, v33);
            if ( !LODWORD(v29[1].monitor) )
              sub_1BDBADC(Index_object, v33, v34);
            v37 = v36->m_Items[(unsigned int)Index_object];
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v71.fields.value = (int64_t)v29[2].klass;
            v68 = 0LL;
            v69 = 0LL;
            *(_QWORD *)&v71.fields.hasValue = &v68;
            System_Nullable_long____ctor(v71, Method_System_Nullable_long___ctor__, v35);
            if ( LODWORD(v29[1].monitor) <= 1 )
              sub_1BDBADC(v40, v41, v42);
            v72.fields.value = (int64_t)v29[2].monitor;
            v66 = 0LL;
            v67 = 0LL;
            *(_QWORD *)&v72.fields.hasValue = &v66;
            System_Nullable_long____ctor(v72, Method_System_Nullable_long___ctor__, v43);
            if ( !v37 )
              sub_1BDBAD4(v44, v45);
            (*(void (__fastcall **)(DataMasterBase_o *, struct System_Byte_array *, struct System_Threading_SynchronizationContext_o *, __int64, __int64, __int64, __int64, __int64, void *))&v37->klass[1]._1.byval_arg.bits)(
              v37,
              masterDataBytes,
              context,
              v68,
              v69,
              v66,
              v67,
              v65,
              v37->klass[1]._1.this_arg.data);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_64506792(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1BDBD94(indexList);
    if ( v47 != 1 )
      sub_1CC490C();
    v48 = (_QWORD **)__cxa_begin_catch(v3);
    v49 = sub_1BDB88C(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v49, **v48) & 1) != 0 )
    {
      __cxa_end_catch();
      v50 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_64506792(v50, lockTaken, 0LL);
    }
    else
    {
      v51 = sub_1BDB88C(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v51, **v48) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v48;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v52 = v5->fields.context;
      v53 = sub_1BDB88C(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v53 + 224) )
        j_il2cpp_runtime_class_init_0(v53);
      v54 = sub_1BDB88C(&DataManager___c_TypeInfo);
      v56 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v54 + 184) + 8LL);
      if ( !v56 )
      {
        v57 = sub_1BDB88C(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v57 + 224) )
          j_il2cpp_runtime_class_init_0(v57);
        v58 = **(Il2CppObject ***)(sub_1BDB88C(&DataManager___c_TypeInfo) + 184);
        v59 = sub_1BDB88C(&System_Threading_SendOrPostCallback_TypeInfo);
        v56 = (System_Threading_SendOrPostCallback_o *)sub_1BDBAC4(v59);
        v60 = sub_1BDB88C(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v56, v58, v60, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1BDB88C(&DataManager___c_TypeInfo) + 184) + 8LL) = v56;
        v61 = sub_1BDB88C(&DataManager___c_TypeInfo);
        sub_1BDB81C((CGThumbnailListItem_o *)(*(_QWORD *)(v61 + 184) + 8LL), (int32_t)v56, v62, v63);
      }
      if ( !v52 )
        sub_1BDBAD4(v54, v55);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v52->klass->vtable._5_Post.method)(
        v52,
        v56,
        0LL,
        v52->klass->vtable._6_OperationStarted.methodPtr);
      v50 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_64506792(v50, lockTaken, 0LL);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v50, 0LL);
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

  if ( (byte_4B4456C & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Array_Sort_int____77072944, *(_QWORD *)&maxIndex);
    sub_1BDB878(&System_Comparison_int__TypeInfo, v7);
    sub_1BDB878(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1BDB878(&System_Func_int__bool__TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Thread__Add__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_Thread___ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_Thread__TypeInfo, v14);
    sub_1BDB878(&System_Threading_ParameterizedThreadStart_TypeInfo, v15);
    sub_1BDB878(&System_Threading_Thread_TypeInfo, v16);
    sub_1BDB878(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__, v17);
    sub_1BDB878(&DataManager___c__DisplayClass56_0_TypeInfo, v18);
    sub_1BDB878(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__, v19);
    sub_1BDB878(&DataManager___c__DisplayClass56_1_TypeInfo, v20);
    byte_4B4456C = 1;
  }
  v21 = sub_1BDBAC4(DataManager___c__DisplayClass56_0_TypeInfo);
  DataManager___c__DisplayClass56_0___ctor((DataManager___c__DisplayClass56_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v21 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v21 + 24) = loadedIndices;
  sub_1BDB81C((CGThumbnailListItem_o *)(v21 + 24), (int32_t)loadedIndices, v26, v27);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.context, (int32_t)Current, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v31;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.masterLoadThreads, (int32_t)v31, v33, v34);
  v35 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v36 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
  v37 = (System_Comparison_int__o *)sub_1BDBAC4(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v37,
    (Il2CppObject *)v21,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__50333896(
    v36,
    (System_Comparison_T__o *)v37,
    (const MethodInfo_30008C8 *)Method_System_Array_Sort_int____77072944);
  v38 = sub_1BDBAC4(DataManager___c__DisplayClass56_1_TypeInfo);
  DataManager___c__DisplayClass56_1___ctor((DataManager___c__DisplayClass56_1_o *)v38, 0LL);
  if ( !v38 )
LABEL_14:
    sub_1BDBAD4(v22, v23);
  *(_QWORD *)(v38 + 24) = v21;
  sub_1BDB81C((CGThumbnailListItem_o *)(v38 + 24), v21, v39, v40);
  *(_DWORD *)(v38 + 16) = 0;
  do
  {
    v41 = (System_Threading_ParameterizedThreadStart_o *)sub_1BDBAC4(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v41,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v42 = (System_Threading_Thread_o *)sub_1BDBAC4(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_64542352(v42, v41, 0LL);
    if ( !v42 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v42, 1, 0LL);
    v43 = (System_Func_int__bool__o *)sub_1BDBAC4(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v43,
      (Il2CppObject *)v38,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v44 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v36,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_307716C *)Method_System_Linq_Enumerable_Where_int___);
    v45 = System_Linq_Enumerable__ToArray_int_(
            v44,
            (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_64542932(v42, &v45->obj, 0LL);
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
        *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v51[4] = (Il2CppClass *)v42;
      sub_1BDB81C((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v42, v46, v47);
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

  if ( (byte_4B4456F & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_1BDB878(&System_Threading_ParameterizedThreadStart_TypeInfo, v6);
    sub_1BDB878(&System_Threading_Thread_TypeInfo, v7);
    byte_4B4456F = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v8 = (System_Threading_ParameterizedThreadStart_o *)sub_1BDBAC4(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v9 = (System_Threading_Thread_o *)sub_1BDBAC4(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_64542352(v9, v8, 0LL);
  this->fields.writeMasterDataThread = v9;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1BDB81C((CGThumbnailListItem_o *)p_writeMasterDataThread, (int32_t)v9, v11, v12);
  if ( !*p_writeMasterDataThread )
    sub_1BDBAD4(0LL, v13);
  System_Threading_Thread__Start_64542932(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
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

  if ( (byte_4B4456D & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_4B4456D = 1;
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
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1BDBAD4(Item, v7);
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
    sub_1BDB81C(p_masterLoadThreads, 0, v9, v10);
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
        sub_1BDBAD4(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1BDB81C((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v5, v6);
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
  __int64 v23; // x2
  __int64 v24; // x1
  System_Collections_Generic_List_object__o *v25; // x0
  struct System_Byte_array *masterDataBytes; // x23
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  Il2CppClass *klass; // x24
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x0
  __int64 v35; // x1
  System_IO_BinaryWriter_c *v36; // x8
  __int64 v37; // x9
  int32_t *p_offset; // x10
  __int64 v39; // x0
  System_IO_Stream_c *v40; // x8
  __int64 v41; // x9
  int32_t *v42; // x10
  __int64 v43; // x0
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x19

  if ( (byte_4B44570 & 1) == 0 )
  {
    sub_1BDB878(&System_IO_BinaryWriter_TypeInfo, param);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v5);
    sub_1BDB878(&System_IDisposable_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_1BDB878(&string_TypeInfo, v9);
    byte_4B44570 = 1;
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
  v13 = (System_IO_BinaryWriter_o *)sub_1BDBAC4(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63486724(v13, v12, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1BDBAD4(v14, v15);
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
               (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1BDBAD4(0LL, v22);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1BDBADC(Item, v22, v23);
      if ( !v13 )
        sub_1BDBAD4(Item, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[2].monitor),
        v13->klass->vtable._18_Write.methodPtr);
      v25 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v25 )
        sub_1BDBAD4(0LL, v24);
      masterDataBytes = this->fields.masterDataBytes;
      v27 = System_Collections_Generic_List_object___get_Item(
              v25,
              v20,
              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v27 )
        sub_1BDBAD4(0LL, v28);
      if ( !LODWORD(v27[1].monitor) )
        sub_1BDBADC(v27, v28, v29);
      if ( !this->fields.saveDataMapList )
        sub_1BDBAD4(v27, v28);
      klass = v27[2].klass;
      v31 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v20,
              (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v31 )
        sub_1BDBAD4(0LL, v32);
      if ( LODWORD(v31[1].monitor) <= 1 )
        sub_1BDBADC(v31, v32, v33);
      v34 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v13->klass->vtable._11_Write.method)(
              v13,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v31[2].monitor),
              v13->klass->vtable._12_Write.methodPtr);
      if ( size == ++v20 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1BDBAD4(v34, v35);
    }
  }
  v36 = v13->klass;
  v37 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v36->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      p_offset += 4;
      if ( !v37 )
        goto LABEL_31;
    }
    v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_31:
    v39 = sub_1C2C00C(v13, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v39)(v13, *(_QWORD *)(v39 + 8));
LABEL_34:
  if ( v11 )
  {
    v40 = v11->klass;
    v41 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      v42 = &v40->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_39;
      }
      v43 = (__int64)(&v40->vtable._0_Equals.method + 2 * *v42);
    }
    else
    {
LABEL_39:
      v43 = sub_1C2C00C(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v43)(v11, *(_QWORD *)(v43 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1BDB81C((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v16, v17);
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

  if ( (byte_4B44557 & 1) == 0 )
  {
    sub_1BDB878(&DatFileName_TypeInfo, v1);
    sub_1BDB878(&DataManager_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_1061/*"/"*/, v3);
    byte_4B44557 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_62610508(CachePath, (System_String_o *)StringLiteral_1061/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B44556 & 1) == 0 )
  {
    sub_1BDB878(&DatFileName_TypeInfo, v1);
    sub_1BDB878(&DataManager_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_1061/*"/"*/, v3);
    byte_4B44556 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_62610508(CachePath, (System_String_o *)StringLiteral_1061/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4B44554 & 1) == 0 )
  {
    sub_1BDB878(&AndroidUtil_TypeInfo, v1);
    sub_1BDB878(&CacheFolderName_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_1061/*"/"*/, v3);
    byte_4B44554 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_62610508(DatFileSavePath, (System_String_o *)StringLiteral_1061/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B44555 & 1) == 0 )
  {
    sub_1BDB878(&DatFileName_TypeInfo, v1);
    sub_1BDB878(&DataManager_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_1061/*"/"*/, v3);
    byte_4B44555 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_62610508(CachePath, (System_String_o *)StringLiteral_1061/*"/"*/, FileName, 0LL);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4B44562 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    byte_4B44562 = 1;
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

  if ( (byte_4B44563 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    byte_4B44563 = 1;
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

  if ( (byte_4B44572 & 1) == 0 )
  {
    sub_1BDB878(&Crc32_TypeInfo, name);
    byte_4B44572 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BDBAD4(0LL, v7);
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

  if ( (byte_4B44558 & 1) == 0 )
  {
    sub_1BDB878(&AndroidUtil_TypeInfo, v1);
    sub_1BDB878(&CacheFolderName_TypeInfo, v2);
    sub_1BDB878(&StringLiteral_1061/*"/"*/, v3);
    byte_4B44558 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_62610508(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1061/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4B44567 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    byte_4B44567 = 1;
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

  if ( (byte_4B44566 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    byte_4B44566 = 1;
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
    sub_1BDBAD4(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4B4455F & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    byte_4B4455F = 1;
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

  if ( (byte_4B4456A & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    byte_4B4456A = 1;
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
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B44569 & 1) == 0 )
  {
    sub_1BDB878(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_4B44569 = 1;
  }
  v3 = sub_1BDBAC4(DataManager__readMasterData_d__47_TypeInfo);
  DataManager__readMasterData_d__47___ctor((DataManager__readMasterData_d__47_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  __int64 v34; // x2
  System_String_o *v35; // x20
  System_Char_array *v36; // x0
  __int64 v37; // x2
  il2cpp_array_size_t max_length; // w8
  int v39; // w22
  __int64 *v40; // x8
  System_String_o *v41; // x0
  __int64 v42; // x1
  System_String_o *v43; // x21
  System_String_o *v44; // x21
  System_String_o *v45; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v47; // x1
  System_Byte_array *v48; // x22
  uint32_t v49; // w22
  System_Char_array *v50; // x0
  __int64 v51; // x2
  il2cpp_array_size_t v52; // w8
  __int64 v53; // x2
  DataManager_o *v54; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v56; // x21
  DataManager_o *v57; // x21
  System_String_o *v58; // x0
  ManagerConfig_c *v59; // x8
  System_String_o *v60; // x22
  const MethodInfo *v61; // x3
  DataManager_o *v62; // x20
  int32_t v63; // w1
  const MethodInfo *v64; // x3
  const MethodInfo *v65; // x3
  int32_t v66; // w1
  const MethodInfo *v67; // x3
  struct System_Byte_array *v68; // x1
  const MethodInfo *v69; // x3
  int32_t v70; // w1
  CGThumbnailListItem_o *p_saveNameList; // x0
  int v73; // w22
  int64_t v74; // x0
  DataManager_c *v75; // x8
  int64_t v76; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v78; // x22
  unsigned int v79; // w23
  System_String_o *v80; // x21
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  DataManager_o *v83; // x8
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v87; // x8
  const MethodInfo *v89; // x3
  int32_t v90; // w1
  DataManager_c *v91; // x0
  const MethodInfo *v92; // x3
  const MethodInfo *v93; // x3
  int32_t v94; // w1
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x3
  int32_t v97; // w1
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  const MethodInfo *v101; // x3
  int64_t v102; // [xsp+8h] [xbp-58h] BYREF
  int v103; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4B44577 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&char___TypeInfo, v3);
    sub_1BDB878(&Crc32_TypeInfo, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_1BDB878(&ManagerConfig_TypeInfo, v9);
    sub_1BDB878(&string___TypeInfo, v10);
    sub_1BDB878(&StringLiteral_5118/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_1BDB878(&StringLiteral_5121/*"DataManager version load error : list file parameter error"*/, v12);
    sub_1BDB878(&StringLiteral_115/*" "*/, v13);
    sub_1BDB878(&StringLiteral_25347/*"~"*/, v14);
    sub_1BDB878(&StringLiteral_776/*") -> ("*/, v15);
    sub_1BDB878(&StringLiteral_767/*")"*/, v16);
    sub_1BDB878(&StringLiteral_1792/*"@"*/, v17);
    sub_1BDB878(&StringLiteral_21457/*"master versiton different ("*/, v18);
    sub_1BDB878(&StringLiteral_5122/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_1BDB878(&StringLiteral_5123/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    this = (DataManager_o *)sub_1BDB878(&StringLiteral_5120/*"DataManager version load error : list file break"*/, v21);
    byte_4B44577 = 1;
  }
  v103 = 0;
  v102 = 0LL;
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
    v33 = (System_Char_array *)sub_1BDB920(char___TypeInfo, 1LL);
    if ( !v33 )
      sub_1BDBAD4(0LL, 0LL);
    if ( !v33->max_length )
      sub_1BDBADC(v33, v33, v34);
    v33->m_Items[2] = -257;
    v35 = System_String__Trim_62628928(v32, v33, 0LL);
    v36 = (System_Char_array *)sub_1BDB920(char___TypeInfo, 2LL);
    if ( !v36 )
      sub_1BDBAD4(0LL, 0LL);
    max_length = v36->max_length;
    if ( !max_length )
      sub_1BDBADC(v36, v36, v37);
    v36->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1BDBADC(v36, v36, v37);
    v36->m_Items[3] = 10;
    if ( !v35 )
      sub_1BDBAD4(v36, v36);
    v39 = System_String__IndexOfAny(v35, v36, 0LL);
    if ( v39 < 2 )
    {
      v40 = &StringLiteral_5122/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v41 = System_String__Substring_62618184(v35, 0, v39, 0LL);
    v43 = v41;
    if ( !v41 )
      sub_1BDBAD4(0LL, v42);
    if ( System_String__StartsWith(v41, (System_String_o *)StringLiteral_25347/*"~"*/, 0LL) )
    {
      v44 = System_String__Substring(v43, 1, 0LL);
      v45 = System_String__Substring(v35, v39 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1BDBAD4(0LL, v47);
      v48 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v45,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v49 = Crc32__Compute(v48, 0LL);
      if ( System_UInt32__Parse(v44, 0LL) == v49 )
      {
        v50 = (System_Char_array *)sub_1BDB920(char___TypeInfo, 2LL);
        if ( !v50 )
          sub_1BDBAD4(0LL, 0LL);
        v52 = v50->max_length;
        if ( !v52 )
          sub_1BDBADC(v50, v50, v51);
        v50->m_Items[2] = 13;
        if ( v52 == 1 )
          sub_1BDBADC(v50, v50, v51);
        v50->m_Items[3] = 10;
        if ( !v45 )
          sub_1BDBAD4(v50, v50);
        this = (DataManager_o *)System_String__Split_62621572(v45, v50, 1, 0LL);
        v54 = this;
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
                                  (System_String_o *)StringLiteral_1792/*"@"*/,
                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v54->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v56 = *(System_String_o **)&v54->fields._DispLog;
          this = (DataManager_o *)sub_1BDB920(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v56 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_62621336(v56, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_119;
          v57 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v58 = System_String__Substring((System_String_o *)this, 1, 0LL);
          v59 = ManagerConfig_TypeInfo;
          v60 = v58;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v59 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v59->static_fields->MasterDataCacheVer, v60, 0LL) )
          {
            this = (DataManager_o *)sub_1BDB920(string___TypeInfo, 5LL);
            if ( this )
            {
              v62 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v63 = StringLiteral_21457/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21457/*"master versiton different ("*/;
                sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._DispLog, v63, v53, v61);
                if ( LODWORD(v62->fields.m_CancellationTokenSource) > 1 )
                {
                  v62->fields.datalist = (struct DataMasterBase_array *)v60;
                  sub_1BDB81C((CGThumbnailListItem_o *)&v62->fields.datalist, (int32_t)v60, v53, v64);
                  if ( LODWORD(v62->fields.m_CancellationTokenSource) > 2 )
                  {
                    v66 = StringLiteral_776/*") -> ("*/;
                    v62->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_776/*") -> ("*/;
                    sub_1BDB81C((CGThumbnailListItem_o *)&v62->fields.lookup, v66, v53, v65);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v62->fields.m_CancellationTokenSource) > 3 )
                    {
                      v68 = *(struct System_Byte_array **)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v62->fields.masterDataBytes = v68;
                      sub_1BDB81C((CGThumbnailListItem_o *)&v62->fields.masterDataBytes, (int32_t)v68, v53, v67);
                      if ( LODWORD(v62->fields.m_CancellationTokenSource) > 4 )
                      {
                        v70 = StringLiteral_767/*")"*/;
                        v62->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_767/*")"*/;
                        p_saveNameList = (CGThumbnailListItem_o *)&v62->fields.saveNameList;
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
          if ( LODWORD(v57->fields.m_CancellationTokenSource) == 3 )
          {
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v57->fields.datalist, 0LL);
            v103 = (int)this;
            if ( LODWORD(v57->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v73 = (int)this;
            v74 = System_Int64__Parse((System_String_o *)v57->fields.lookup, 0LL);
            v75 = DataManager_TypeInfo;
            v102 = v74;
            v76 = v74;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              v75 = DataManager_TypeInfo;
            }
            static_fields = v75->static_fields;
            if ( static_fields->readDataVersion != v73 )
              goto LABEL_91;
            if ( !v75->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v75);
              static_fields = DataManager_TypeInfo->static_fields;
            }
            if ( static_fields->readDateVersion == v76 )
            {
              v78 = v54->fields.m_CancellationTokenSource;
              if ( (int)v78 < 2 )
                return 1;
              v79 = 2;
              while ( 1 )
              {
                v80 = (System_String_o *)*((_QWORD *)&v54->fields._DispLog + (int)(v79 - 1));
                this = (DataManager_o *)sub_1BDB920(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v80 )
                  break;
                this = (DataManager_o *)System_String__Split_62621336(v80, (System_Char_array *)this, 0LL);
                if ( !this )
                  break;
                v83 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                method = *(const MethodInfo **)&v83->fields._DispLog;
                v84 = *(_QWORD *)&this->fields.m_CachedPtr;
                v85 = Method_System_Collections_Generic_List_string__Add__;
                ++HIDWORD(this->fields.m_CancellationTokenSource);
                if ( !v84 )
                  break;
                m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
                if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v84 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)method,
                    *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                }
                else
                {
                  v87 = v84 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v87 + 32) = method;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v87 + 32), (int32_t)method, v81, v82);
                }
                if ( (_DWORD)v78 == v79 )
                  return 1;
                if ( v79++ >= LODWORD(v54->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
              }
            }
            else
            {
LABEL_91:
              this = (DataManager_o *)sub_1BDB920(string___TypeInfo, 9LL);
              if ( this )
              {
                v62 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v90 = StringLiteral_21457/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21457/*"master versiton different ("*/;
                  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._DispLog, v90, v53, v89);
                  v91 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v91 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v91->static_fields, 0LL);
                  if ( LODWORD(v62->fields.m_CancellationTokenSource) > 1 )
                  {
                    v62->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1BDB81C((CGThumbnailListItem_o *)&v62->fields.datalist, (int32_t)this, v53, v92);
                    if ( LODWORD(v62->fields.m_CancellationTokenSource) > 2 )
                    {
                      v94 = (int)StringLiteral_115/*" "*/;
                      v62->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_115/*" "*/;
                      sub_1BDB81C((CGThumbnailListItem_o *)&v62->fields.lookup, v94, v53, v93);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v62->fields.m_CancellationTokenSource) > 3 )
                      {
                        v62->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1BDB81C((CGThumbnailListItem_o *)&v62->fields.masterDataBytes, (int32_t)this, v53, v95);
                        if ( LODWORD(v62->fields.m_CancellationTokenSource) > 4 )
                        {
                          v97 = StringLiteral_776/*") -> ("*/;
                          v62->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_776/*") -> ("*/;
                          sub_1BDB81C((CGThumbnailListItem_o *)&v62->fields.saveNameList, v97, v53, v96);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v103, 0LL);
                          if ( LODWORD(v62->fields.m_CancellationTokenSource) > 5 )
                          {
                            v62->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1BDB81C((CGThumbnailListItem_o *)&v62->fields.saveDataMapList, (int32_t)this, v53, v98);
                            if ( LODWORD(v62->fields.m_CancellationTokenSource) > 6 )
                            {
                              v100 = (int)StringLiteral_115/*" "*/;
                              *(_QWORD *)&v62->fields.lastFrameTime = StringLiteral_115/*" "*/;
                              sub_1BDB81C((CGThumbnailListItem_o *)&v62->fields.lastFrameTime, v100, v53, v99);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v102, 0LL);
                              if ( LODWORD(v62->fields.m_CancellationTokenSource) > 7 )
                              {
                                v62->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1BDB81C(
                                  (CGThumbnailListItem_o *)&v62->fields.masterCheckName,
                                  (int32_t)this,
                                  v53,
                                  v101);
                                if ( LODWORD(v62->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v70 = StringLiteral_767/*")"*/;
                                  v62->fields.lockCountObj = (Il2CppObject *)StringLiteral_767/*")"*/;
                                  p_saveNameList = (CGThumbnailListItem_o *)&v62->fields.lockCountObj;
LABEL_104:
                                  sub_1BDB81C(p_saveNameList, v70, v53, v69);
                                  if ( System_String__Concat_62612776((System_String_array *)v62, 0LL) )
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
                sub_1BDBADC(this, method, v53);
              }
            }
LABEL_119:
            sub_1BDBAD4(this, method);
          }
          v40 = &StringLiteral_5121/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v40 = &StringLiteral_5120/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v40 = &StringLiteral_5118/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v40 = &StringLiteral_5123/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v40 )
      goto LABEL_64;
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4B44568 & 1) == 0 )
  {
    sub_1BDB878(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_4B44568 = 1;
  }
  v3 = sub_1BDBAC4(DataManager__readMasterVersion_d__46_TypeInfo);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  __int64 v25; // x2
  System_String_o *v26; // x20
  System_Char_array *v27; // x0
  __int64 v28; // x2
  il2cpp_array_size_t max_length; // w8
  int v30; // w22
  __int64 *v31; // x8
  System_String_o *v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x21
  System_String_o *v35; // x21
  System_String_o *v36; // x20
  System_Text_Encoding_o *UTF8; // x0
  __int64 v38; // x1
  System_Byte_array *v39; // x22
  uint32_t v40; // w22
  System_Char_array *v41; // x0
  __int64 v42; // x2
  il2cpp_array_size_t v43; // w8
  __int64 v44; // x0
  __int64 v45; // x2
  __int64 v46; // x20
  __int64 v47; // x8
  System_String_o *v48; // x20
  __int64 v49; // x20
  System_String_o *v50; // x0
  ManagerConfig_c *v51; // x8
  System_String_o *v52; // x21
  const MethodInfo *v53; // x3
  __int64 v54; // x20
  int32_t v55; // w1
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  const MethodInfo *v59; // x3
  __int64 v60; // x1
  const MethodInfo *v61; // x3
  int32_t v62; // w1
  System_String_o *v63; // x8
  DataManager_c *v64; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v67; // x8
  int32_t v68; // w19
  struct DataManager_StaticFields *v69; // x8
  int64_t v70; // x0
  struct DataManager_StaticFields *v71; // x8

  if ( (byte_4B44575 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&char___TypeInfo, v3);
    sub_1BDB878(&Crc32_TypeInfo, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&ManagerConfig_TypeInfo, v6);
    sub_1BDB878(&string___TypeInfo, v7);
    sub_1BDB878(&StringLiteral_5117/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_1BDB878(&StringLiteral_5114/*"DataManager boot load error : list file break"*/, v9);
    sub_1BDB878(&StringLiteral_5116/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_1BDB878(&StringLiteral_5112/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_1BDB878(&StringLiteral_25347/*"~"*/, v12);
    sub_1BDB878(&StringLiteral_21456/*"master data versiton different ("*/, v13);
    sub_1BDB878(&StringLiteral_776/*") -> ("*/, v14);
    sub_1BDB878(&StringLiteral_767/*")"*/, v15);
    sub_1BDB878(&StringLiteral_1792/*"@"*/, v16);
    sub_1BDB878(&StringLiteral_5115/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_4B44575 = 1;
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
    v64 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v64 = DataManager_TypeInfo;
    }
    static_fields = v64->static_fields;
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
    v24 = (System_Char_array *)sub_1BDB920(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_1BDBAD4(0LL, 0LL);
    if ( !v24->max_length )
      sub_1BDBADC(v24, v24, v25);
    v24->m_Items[2] = -257;
    v26 = System_String__Trim_62628928(v23, v24, 0LL);
    v27 = (System_Char_array *)sub_1BDB920(char___TypeInfo, 2LL);
    if ( !v27 )
      sub_1BDBAD4(0LL, 0LL);
    max_length = v27->max_length;
    if ( !max_length )
      sub_1BDBADC(v27, v27, v28);
    v27->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1BDBADC(v27, v27, v28);
    v27->m_Items[3] = 10;
    if ( !v26 )
      sub_1BDBAD4(v27, v27);
    v30 = System_String__IndexOfAny(v26, v27, 0LL);
    if ( v30 < 2 )
    {
      v31 = &StringLiteral_5116/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v63 = (System_String_o *)*v31;
LABEL_58:
      if ( v63 )
        goto LABEL_59;
      return 1;
    }
    v32 = System_String__Substring_62618184(v26, 0, v30, 0LL);
    v34 = v32;
    if ( !v32 )
      sub_1BDBAD4(0LL, v33);
    if ( !System_String__StartsWith(v32, (System_String_o *)StringLiteral_25347/*"~"*/, 0LL) )
    {
      v31 = &StringLiteral_5117/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v35 = System_String__Substring(v34, 1, 0LL);
    v36 = System_String__Substring(v26, v30 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1BDBAD4(0LL, v38);
    v39 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                 UTF8,
                                 v36,
                                 UTF8->klass->vtable._19_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v40 = Crc32__Compute(v39, 0LL);
    if ( System_UInt32__Parse(v35, 0LL) != v40 )
    {
      v31 = &StringLiteral_5112/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v41 = (System_Char_array *)sub_1BDB920(char___TypeInfo, 2LL);
    if ( !v41 )
      sub_1BDBAD4(0LL, 0LL);
    v43 = v41->max_length;
    if ( !v43 )
      sub_1BDBADC(v41, v41, v42);
    v41->m_Items[2] = 13;
    if ( v43 == 1 )
      sub_1BDBADC(v41, v41, v42);
    v41->m_Items[3] = 10;
    if ( !v36 )
      sub_1BDBAD4(v41, v41);
    v44 = (__int64)System_String__Split_62621572(v36, v41, 1, 0LL);
    v46 = v44;
    if ( !v44 )
      return 1;
    v47 = *(_QWORD *)(v44 + 24);
    if ( v47 )
    {
      if ( !(_DWORD)v47 )
        goto LABEL_78;
      v44 = *(_QWORD *)(v44 + 32);
      if ( !v44 )
        goto LABEL_83;
      v44 = System_String__StartsWith((System_String_o *)v44, (System_String_o *)StringLiteral_1792/*"@"*/, 0LL);
      if ( (v44 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v46 + 24) )
          goto LABEL_78;
        v48 = *(System_String_o **)(v46 + 32);
        v44 = sub_1BDB920(char___TypeInfo, 1LL);
        if ( v44 )
        {
          v21 = (const MethodInfo *)v44;
          if ( !*(_DWORD *)(v44 + 24) )
            goto LABEL_78;
          *(_WORD *)(v44 + 32) = 44;
          if ( v48 )
          {
            v44 = (__int64)System_String__Split_62621336(v48, (System_Char_array *)v44, 0LL);
            if ( v44 )
            {
              v49 = v44;
              if ( !*(_DWORD *)(v44 + 24) )
                goto LABEL_78;
              v44 = *(_QWORD *)(v44 + 32);
              if ( v44 )
              {
                v50 = System_String__Substring((System_String_o *)v44, 1, 0LL);
                v51 = ManagerConfig_TypeInfo;
                v52 = v50;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v51 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v51->static_fields->MasterDataCacheVer, v52, 0LL) )
                {
                  if ( *(_DWORD *)(v49 + 24) != 3 )
                  {
                    v31 = &StringLiteral_5115/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v44 = System_Int32__Parse(*(System_String_o **)(v49 + 40), 0LL);
                  v67 = DataManager_TypeInfo;
                  v68 = v44;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v67 = DataManager_TypeInfo;
                  }
                  v69 = v67->static_fields;
                  v69->dataVersion = v68;
                  v69->readDataVersion = v68;
                  if ( *(_DWORD *)(v49 + 24) > 2u )
                  {
                    v70 = System_Int64__Parse(*(System_String_o **)(v49 + 48), 0LL);
                    v71 = DataManager_TypeInfo->static_fields;
                    v71->dateVersion = v70;
                    v71->readDateVersion = v70;
                    return 1;
                  }
LABEL_78:
                  sub_1BDBADC(v44, v21, v45);
                }
                v44 = sub_1BDB920(string___TypeInfo, 5LL);
                if ( v44 )
                {
                  v54 = v44;
                  if ( *(_DWORD *)(v44 + 24) )
                  {
                    v55 = StringLiteral_21456/*"master data versiton different ("*/;
                    *(_QWORD *)(v44 + 32) = StringLiteral_21456/*"master data versiton different ("*/;
                    sub_1BDB81C((CGThumbnailListItem_o *)(v44 + 32), v55, v45, v53);
                    if ( *(_DWORD *)(v54 + 24) > 1u )
                    {
                      *(_QWORD *)(v54 + 40) = v52;
                      sub_1BDB81C((CGThumbnailListItem_o *)(v54 + 40), (int32_t)v52, v45, v56);
                      if ( *(_DWORD *)(v54 + 24) > 2u )
                      {
                        v58 = StringLiteral_776/*") -> ("*/;
                        *(_QWORD *)(v54 + 48) = StringLiteral_776/*") -> ("*/;
                        sub_1BDB81C((CGThumbnailListItem_o *)(v54 + 48), v58, v45, v57);
                        v44 = (__int64)ManagerConfig_TypeInfo;
                        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                          v44 = (__int64)ManagerConfig_TypeInfo;
                        }
                        if ( *(_DWORD *)(v54 + 24) > 3u )
                        {
                          v60 = *(_QWORD *)(*(_QWORD *)(v44 + 184) + 32LL);
                          *(_QWORD *)(v54 + 56) = v60;
                          sub_1BDB81C((CGThumbnailListItem_o *)(v54 + 56), v60, v45, v59);
                          if ( *(_DWORD *)(v54 + 24) > 4u )
                          {
                            v62 = StringLiteral_767/*")"*/;
                            *(_QWORD *)(v54 + 64) = StringLiteral_767/*")"*/;
                            sub_1BDB81C((CGThumbnailListItem_o *)(v54 + 64), v62, v45, v61);
                            v63 = System_String__Concat_62612776((System_String_array *)v54, 0LL);
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
        sub_1BDBAD4(v44, v21);
      }
    }
    v31 = &StringLiteral_5114/*"DataManager boot load error : list file break"*/;
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

  if ( (byte_4B44565 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4B44565 = 1;
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
  sub_1BDB81C(p_updateData, v11, dateVer, (const MethodInfo *)obj);
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

  if ( (byte_4B44564 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4B44564 = 1;
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

  if ( (byte_4B4455E & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, obj);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v5);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B4455E = 1;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->serverHash, v8, (int32_t)method, v3);
  if ( obj )
  {
    v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v11 = System_String__op_Equality(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v11 )
    {
      if ( !v10 )
        sub_1BDBAD4(v11, v12);
      v13 = System_String__Substring(v10, v10->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v16 = System_String__Substring_62618184(v10, 0, v10->fields._stringLength - 1, 0LL);
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
      sub_1BDB81C((CGThumbnailListItem_o *)&v18->serverHash, (int32_t)v10, v14, v15);
    }
  }
}


void __fastcall DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4B44560 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, obj);
    byte_4B44560 = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void __fastcall DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4B44579 & 1) == 0 )
  {
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_4B44579 = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1BDBD94(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_40609332(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_40609332(
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
  __int64 v10; // x2
  DataManager_o *v11; // x21
  __int64 methodPtr_low; // x9
  struct DataMasterBase_array *datalist; // x8
  int max_length; // w9
  int v15; // w26
  il2cpp_array_size_t v16; // w9
  __int64 v17; // x27
  DataMasterBase_o *v18; // x8
  Il2CppObject *MasterName_k__BackingField; // x22
  struct DataMasterBase_array *v20; // x8
  DataMasterBase_o *v21; // x23
  __int64 v22; // x9
  struct DataMasterBase_array *v23; // x8
  int v24; // w9
  int v25; // w26
  il2cpp_array_size_t v26; // w9
  __int64 v27; // x27
  DataMasterBase_o *v28; // x8
  Il2CppObject *v29; // x22
  struct DataMasterBase_array *v30; // x8
  DataMasterBase_o *v31; // x23
  __int64 v32; // x9
  struct DataMasterBase_array *v33; // x8
  int v34; // w9
  int v35; // w25
  il2cpp_array_size_t v36; // w9
  __int64 v37; // x26
  DataMasterBase_o *v38; // x8
  Il2CppObject *v39; // x21
  struct DataMasterBase_array *v40; // x8
  DataMasterBase_o *v41; // x22
  DataManager_o *v42; // x0
  const MethodInfo *v43; // x1

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_4B4457A & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1BDB878(&StringLiteral_24507/*"updated"*/, v7);
    sub_1BDB878(&StringLiteral_18572/*"deleted"*/, v8);
    this = (DataManager_o *)sub_1BDB878(&StringLiteral_23070/*"replaced"*/, v9);
    byte_4B4457A = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1BDBAD4(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18572/*"deleted"*/,
         (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18572/*"deleted"*/,
                              (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = this;
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
    v15 = max_length - 1;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( v16 < datalist->max_length )
      {
        v17 = (int)v16;
        v18 = datalist->m_Items[v16];
        if ( !v18 || !v11 )
          goto LABEL_57;
        MasterName_k__BackingField = (Il2CppObject *)v18->fields._MasterName_k__BackingField;
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v11,
                                  MasterName_k__BackingField,
                                  (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v20 = v4->fields.datalist;
          if ( !v20 )
            goto LABEL_57;
          if ( (unsigned int)v17 >= v20->max_length )
            break;
          v21 = v20->m_Items[v17];
          this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                    (System_Collections_Generic_Dictionary_object__object__o *)v11,
                                    MasterName_k__BackingField,
                                    (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v21 )
            goto LABEL_57;
          this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))v21->klass[1]._1.castClass)(
                                    v21,
                                    this,
                                    v21->klass[1]._1.declaringType);
        }
        if ( v15 == (_DWORD)v17 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v16 = v17 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1BDBADC(this, data, v10);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24507/*"updated"*/,
          (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24507/*"updated"*/,
                            (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v22 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v22
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1BDBD94(v11);
      goto LABEL_61;
    }
  }
  v23 = v4->fields.datalist;
  if ( !v23 )
    goto LABEL_57;
  v24 = v23->max_length;
  v25 = v24 - 1;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( v26 < v23->max_length )
    {
      v27 = (int)v26;
      v28 = v23->m_Items[v26];
      if ( !v28 || !v11 )
        goto LABEL_57;
      v29 = (Il2CppObject *)v28->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                (System_Collections_Generic_Dictionary_object__object__o *)v11,
                                v29,
                                (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v30 = v4->fields.datalist;
        if ( !v30 )
          goto LABEL_57;
        if ( (unsigned int)v27 >= v30->max_length )
          goto LABEL_59;
        v31 = v30->m_Items[v27];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  (System_Collections_Generic_Dictionary_object__object__o *)v11,
                                  v29,
                                  (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v31 )
          goto LABEL_57;
        this = (DataManager_o *)(*(__int64 (__fastcall **)(DataMasterBase_o *, DataManager_o *, Il2CppClass *))&v31->klass[1]._1.this_arg.bits)(
                                  v31,
                                  this,
                                  v31->klass[1]._1.element_class);
      }
      if ( v25 == (_DWORD)v27 )
        goto LABEL_40;
      v23 = v4->fields.datalist;
      v26 = v27 + 1;
      if ( !v23 )
        goto LABEL_57;
    }
    goto LABEL_59;
  }
LABEL_40:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_23070/*"replaced"*/,
          (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_23070/*"replaced"*/,
                            (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v32 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v32
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v32 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1BDBD94(v3);
      DataManager__getRevisionTotal(v42, v43);
      return;
    }
  }
  v33 = v4->fields.datalist;
  if ( !v33 )
    goto LABEL_57;
  v34 = v33->max_length;
  v35 = v34 - 1;
  if ( v34 >= 1 )
  {
    v36 = 0;
    while ( v36 < v33->max_length )
    {
      v37 = (int)v36;
      v38 = v33->m_Items[v36];
      if ( !v38 || !v3 )
        goto LABEL_57;
      v39 = (Il2CppObject *)v38->fields._MasterName_k__BackingField;
      this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                v3,
                                v39,
                                (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v40 = v4->fields.datalist;
        if ( !v40 )
          goto LABEL_57;
        if ( (unsigned int)v37 >= v40->max_length )
          goto LABEL_59;
        v41 = v40->m_Items[v37];
        this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                  v3,
                                  v39,
                                  (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v41 )
          goto LABEL_57;
        this = (DataManager_o *)((__int64 (__fastcall *)(DataMasterBase_o *, DataManager_o *, _QWORD, _QWORD, _QWORD, _QWORD, void *))v41->klass[1]._1.namespaze)(
                                  v41,
                                  this,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  v41->klass[1]._1.byval_arg.data);
      }
      if ( v35 == (_DWORD)v37 )
        return;
      v33 = v4->fields.datalist;
      v36 = v37 + 1;
      if ( !v33 )
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

  if ( (byte_4B4456B & 1) == 0 )
  {
    sub_1BDB878(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_4B4456B = 1;
  }
  v5 = sub_1BDBAC4(DataManager__updateMasterData_d__49_TypeInfo);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BDBAD4(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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

  if ( (byte_4B44561 & 1) == 0 )
  {
    sub_1BDB878(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_4B44561 = 1;
  }
  v3 = sub_1BDBAC4(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BDBAD4(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4B44578 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&Crc32_TypeInfo, v3);
    sub_1BDB878(&DataManager_TypeInfo, v4);
    sub_1BDB878(&System_IDisposable_TypeInfo, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_1BDB878(&ManagerConfig_TypeInfo, v8);
    sub_1BDB878(&System_IO_StreamWriter_TypeInfo, v9);
    sub_1BDB878(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1BDB878(&uint_TypeInfo, v11);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v12);
    sub_1BDB878(&StringLiteral_25350/*"~{0}\n{1}"*/, v13);
    sub_1BDB878(&StringLiteral_1792/*"@"*/, v14);
    sub_1BDB878(&StringLiteral_820/*","*/, v15);
    byte_4B44578 = 1;
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
    v23 = (System_Text_StringBuilder_o *)sub_1BDBAC4(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_62650796(v23, (size << 7) + 128, 0LL);
    if ( !v23 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_62657444(v23, (System_String_o *)StringLiteral_1792/*"@"*/, 0LL);
    v24 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_62657444(v23, v24->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_62657444(v23, (System_String_o *)StringLiteral_820/*","*/, 0LL);
    System_Text_StringBuilder__Append_62659940(v23, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_62657444(v23, (System_String_o *)StringLiteral_820/*","*/, 0LL);
    System_Text_StringBuilder__Append_62660028(v23, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_62657444(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
                 (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_62657444(v23, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_62657444(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
      sub_1BDBAD4(CacheListFileName, v19);
    v30 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.method)(
                                 CacheListFileName,
                                 v29,
                                 CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v45 = Crc32__Compute(v30, 0LL);
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v45, v31, v32, v33);
    v35 = System_String__Format_62613552((System_String_o *)StringLiteral_25350/*"~{0}\n{1}"*/, v34, v29, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v36 = CatAndMouseGame__CatGame3(v35, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v38 = (System_IO_StreamWriter_o *)sub_1BDBAC4(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_63419572(v38, v22, 0, UTF8, 0LL);
    if ( !v38 )
      sub_1BDBAD4(v39, v40);
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
      v44 = sub_1C2C00C(v38, System_IDisposable_TypeInfo, 0LL);
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
  __int64 v16; // x2
  const MethodInfo *v17; // x3
  char *v18; // x20
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  System_String_o *v30; // x20
  System_Byte_array *v31; // x21
  System_String_o *v32; // x0
  System_String_o *v33; // x20
  System_String_o *v34; // x20
  System_Text_Encoding_o *v35; // x22
  System_IO_StreamWriter_o *v36; // x21
  uint32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B44576 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&Crc32_TypeInfo, v2);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&ManagerConfig_TypeInfo, v4);
    sub_1BDB878(&System_IO_StreamWriter_TypeInfo, v5);
    sub_1BDB878(&string___TypeInfo, v6);
    sub_1BDB878(&StringLiteral_43/*"\n"*/, v7);
    sub_1BDB878(&StringLiteral_25347/*"~"*/, v8);
    sub_1BDB878(&StringLiteral_1792/*"@"*/, v9);
    sub_1BDB878(&StringLiteral_820/*","*/, v10);
    byte_4B44576 = 1;
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
    UTF8 = (char *)sub_1BDB920(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v18 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v19 = StringLiteral_1792/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1792/*"@"*/;
    sub_1BDB81C((CGThumbnailListItem_o *)(UTF8 + 32), v19, v16, v17);
    UTF8 = (char *)ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      UTF8 = (char *)ManagerConfig_TypeInfo;
    }
    if ( *((_DWORD *)v18 + 6) <= 1u )
      goto LABEL_26;
    v21 = *(_QWORD *)(*((_QWORD *)UTF8 + 23) + 32LL);
    *((_QWORD *)v18 + 5) = v21;
    sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 40), v21, v16, v20);
    if ( *((_DWORD *)v18 + 6) <= 2u )
      goto LABEL_26;
    v23 = (int)StringLiteral_820/*","*/;
    *((_QWORD *)v18 + 6) = StringLiteral_820/*","*/;
    sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 48), v23, v16, v22);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v18 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v18 + 7) = UTF8;
    sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 56), (int32_t)UTF8, v16, v24);
    if ( *((_DWORD *)v18 + 6) <= 4u
      || (v26 = (int)StringLiteral_820/*","*/,
          *((_QWORD *)v18 + 8) = StringLiteral_820/*","*/,
          sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 64), v26, v16, v25),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v18 + 6) <= 5u)
      || (*((_QWORD *)v18 + 9) = UTF8,
          sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 72), (int32_t)UTF8, v16, v27),
          *((_DWORD *)v18 + 6) <= 6u) )
    {
LABEL_26:
      sub_1BDBADC(UTF8, v15, v16);
    }
    v29 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v18 + 10) = StringLiteral_43/*"\n"*/;
    sub_1BDB81C((CGThumbnailListItem_o *)(v18 + 80), v29, v16, v28);
    v30 = System_String__Concat_62612776((System_String_array *)v18, 0LL);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_27;
    v31 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 600LL))(
                                 UTF8,
                                 v30,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 608LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v37 = Crc32__Compute(v31, 0LL);
    v32 = System_UInt32__ToString((uint32_t)&v37, 0LL);
    v33 = System_String__Concat_62612512(
            (System_String_o *)StringLiteral_25347/*"~"*/,
            v32,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v30,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v34 = CatAndMouseGame__CatGame1(v33, 0, 0LL);
    v35 = System_Text_Encoding__get_UTF8(0LL);
    v36 = (System_IO_StreamWriter_o *)sub_1BDBAC4(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_63419572(v36, CacheVersionFileName, 0, v35, 0LL);
    if ( !v36 )
LABEL_27:
      sub_1BDBAD4(UTF8, v15);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v36->klass->vtable._16_Write.method)(
      v36,
      v34,
      v36->klass->vtable._17_WriteLine.methodPtr);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v36->klass->vtable._8_Close.method)(
      v36,
      v36->klass->vtable._9_Dispose.methodPtr);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B44583 & 1) == 0 )
  {
    sub_1BDB878(&DataManager___c_TypeInfo, v1);
    byte_4B44583 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(DataManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  __int64 v8; // x2
  struct DataManager_o *v9; // x8
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  void *monitor; // x20

  v6 = this;
  if ( (byte_4B44584 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1BDB878(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_4B44584 = 1;
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
                                                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_long____get_Item__);
  if ( !this )
    goto LABEL_12;
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
    goto LABEL_13;
  v9 = v6->fields.__4__this;
  if ( !v9
    || (saveDataMapList = (System_Collections_Generic_List_object__o *)v9->fields.saveDataMapList) == 0LL
    || (monitor = this[1].monitor,
        (this = (DataManager___c__DisplayClass56_0_o *)System_Collections_Generic_List_object___get_Item(
                                                         saveDataMapList,
                                                         a,
                                                         (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1BDBADC(this, *(_QWORD *)&a, v8);
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
  if ( (byte_4B44585 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1BDB878(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_4B44585 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1BDBAD4(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_36B9118 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1BDBAD4(this, 0LL);
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
  UnityEngine_WaitForEndOfFrame_o *v14; // x19
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  char v18; // w8
  DataManager_c *v19; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v21; // w10
  System_String_o *CacheFileName; // x22
  System_IO_MemoryStream_o *v23; // x21
  System_IO_Stream_o *v24; // x24
  System_IO_Stream_o *v25; // x25
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x22
  __int64 v29; // x0
  __int64 v30; // x1
  UnityEngine_WaitForEndOfFrame_o *v31; // x19
  CGThumbnailListItem_o *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int v35; // w8
  DataManager_c *v36; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v38; // x9
  int32_t *p_offset; // x10
  __int64 v40; // x0
  __int64 v41; // x0
  __int64 v42; // x1
  System_IO_Stream_c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_IO_MemoryStream_c *v50; // x8
  __int64 v51; // x9
  int32_t *v52; // x10
  __int64 v53; // x0
  System_Byte_array *masterDataBytes; // x22
  System_IO_MemoryStream_o *v55; // x21
  System_IO_BinaryReader_o *v56; // x24
  __int64 v57; // x0
  __int64 v58; // x1
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v61; // x0
  __int64 v62; // x1
  int v63; // w22
  __int64 v64; // x23
  __int64 v65; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v67; // x0
  __int64 v68; // x2
  const MethodInfo *v69; // x3
  __int64 v70; // x1
  int v71; // w8
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  System_IO_BinaryReader_c *v76; // x8
  __int64 v77; // x9
  int32_t *v78; // x10
  __int64 v79; // x0
  System_IO_MemoryStream_c *v80; // x8
  __int64 v81; // x9
  int32_t *v82; // x10
  __int64 v83; // x0
  UnityEngine_WaitForEndOfFrame_o *v84; // x19
  int32_t v85; // w2
  const MethodInfo *v86; // x3

  v2 = this;
  if ( (byte_4B44586 & 1) == 0 )
  {
    sub_1BDB878(&System_IO_BinaryReader_TypeInfo, method);
    sub_1BDB878(&byte___TypeInfo, v3);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&System_GC_TypeInfo, v6);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&long___TypeInfo, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1BDB878(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_1BDB878(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_4B44586 = 1;
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
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v14 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v14, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v14;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BDB81C(p__2__current, (int32_t)v14, v16, v17);
        v18 = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return v18 & 1;
      }
LABEL_15:
      if ( DataManager__readMasterDataListFile(_4__this, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        CacheFileName = DataManager__getCacheFileName(0LL);
        if ( System_IO_File__Exists(CacheFileName, 0LL) )
        {
          v23 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v23, 0LL);
          v24 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v25 = CatAndMouseGame__MouseGameZ(v24, 0LL);
          v26 = sub_1BDB920(byte___TypeInfo, 0x4000LL);
          v28 = v26;
          if ( !v26 )
            sub_1BDBAD4(0LL, v27);
          if ( !v25 )
            sub_1BDBAD4(v26, v27);
          while ( 1 )
          {
            v29 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v25->klass->vtable._32_unknown.method)(
                    v25,
                    v28,
                    0LL,
                    *(unsigned int *)(v28 + 24),
                    v25->klass->vtable._33_Read.methodPtr);
            if ( (int)v29 <= 0 )
              break;
            if ( !v23 )
              sub_1BDBAD4(v29, v30);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v23->klass->vtable._35_Write.method)(
              v23,
              v28,
              0LL,
              (unsigned int)v29,
              v23->klass->vtable._36_Write.methodPtr);
          }
          klass = v25->klass;
          v38 = *(unsigned __int16 *)(&v25->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v25->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v38;
              p_offset += 4;
              if ( !v38 )
                goto LABEL_37;
            }
            v40 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_37:
            v40 = sub_1C2C00C(v25, System_IDisposable_TypeInfo, 0LL);
          }
          v41 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v40)(v25, *(_QWORD *)(v40 + 8));
          if ( v24 )
          {
            v43 = v24->klass;
            v44 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
            {
              v45 = &v43->_1.interfaceOffsets->offset;
              while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
              {
                --v44;
                v45 += 4;
                if ( !v44 )
                  goto LABEL_44;
              }
              v46 = (__int64)(&v43->vtable._0_Equals.method + 2 * *v45);
            }
            else
            {
LABEL_44:
              v46 = sub_1C2C00C(v24, System_IDisposable_TypeInfo, 0LL);
            }
            v41 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v46)(v24, *(_QWORD *)(v46 + 8));
          }
          if ( !v23 )
            sub_1BDBAD4(v41, v42);
          v47 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v23->klass->vtable._41_ToArray.method)(
                  v23,
                  v23->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v47;
          sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, v47, v48, v49);
          v50 = v23->klass;
          v51 = *(unsigned __int16 *)(&v23->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v23->klass->_2.bitflags2 + 3) )
          {
            v52 = &v50->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
            {
              --v51;
              v52 += 4;
              if ( !v51 )
                goto LABEL_52;
            }
            v53 = (__int64)(&v50->vtable._0_Equals.method + 2 * *v52);
          }
          else
          {
LABEL_52:
            v53 = sub_1C2C00C(v23, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v53)(v23, *(_QWORD *)(v53 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v55 = (System_IO_MemoryStream_o *)sub_1BDBAC4(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_63395020(v55, masterDataBytes, 0LL);
          v56 = (System_IO_BinaryReader_o *)sub_1BDBAC4(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v56, (System_IO_Stream_o *)v55, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1BDBAD4(v57, v58);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v56 )
            {
LABEL_76:
              if ( v55 )
              {
                v80 = v55->klass;
                v81 = *(unsigned __int16 *)(&v55->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v55->klass->_2.bitflags2 + 3) )
                {
                  v82 = &v80->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v82 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v81;
                    v82 += 4;
                    if ( !v81 )
                      goto LABEL_81;
                  }
                  v83 = (__int64)(&v80->vtable._0_Equals.method + 2 * *v82);
                }
                else
                {
LABEL_81:
                  v83 = sub_1C2C00C(v55, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v83)(v55, *(_QWORD *)(v83 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0LL);
              v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v84;
              v32 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1BDB81C(v32, (int32_t)v84, v85, v86);
              v35 = 2;
LABEL_87:
              LODWORD(v32[-1].fields._ThumbnailSpritePath_k__BackingField) = v35;
              v18 = 1;
              return v18 & 1;
            }
          }
          else
          {
            if ( !v56 )
              sub_1BDBAD4(v57, v58);
            do
            {
              v61 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v56->klass->vtable._15_ReadInt32.method)(
                      v56,
                      v56->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v55 )
                sub_1BDBAD4(v61, v62);
              v63 = v61;
              v64 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v55->klass->vtable._12_get_Position.method)(
                      v55,
                      v55->klass->vtable._13_set_Position.methodPtr);
              v65 = v63;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v55->klass->vtable._30_Seek.method)(
                v55,
                v63,
                1LL,
                v55->klass->vtable._31_SetLength.methodPtr);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v67 = sub_1BDB920(long___TypeInfo, 2LL);
              v70 = v67;
              if ( !v67 )
                sub_1BDBAD4(0LL, 0LL);
              v71 = *(_DWORD *)(v67 + 24);
              if ( !v71 )
                sub_1BDBADC(v67, v67, v68);
              *(_QWORD *)(v67 + 32) = v64;
              if ( v71 == 1 )
                sub_1BDBADC(v67, v67, v68);
              *(_QWORD *)(v67 + 40) = v65;
              if ( !saveDataMapList )
                sub_1BDBAD4(v67, v67);
              items = saveDataMapList->fields._items;
              v73 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1BDBAD4(v67, v67);
              v74 = saveDataMapList->fields._size;
              if ( (unsigned int)v74 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v67,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
              }
              else
              {
                v75 = &items->obj.klass + v74;
                saveDataMapList->fields._size = v74 + 1;
                v75[4] = (Il2CppClass *)v70;
                sub_1BDB81C((CGThumbnailListItem_o *)(v75 + 4), v70, v68, v69);
              }
              --size;
            }
            while ( size );
          }
          v76 = v56->klass;
          v77 = *(unsigned __int16 *)(&v56->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v56->klass->_2.bitflags2 + 3) )
          {
            v78 = &v76->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
            {
              --v77;
              v78 += 4;
              if ( !v77 )
                goto LABEL_73;
            }
            v79 = (__int64)(&v76->vtable._0_Equals.method + 2 * *v78);
          }
          else
          {
LABEL_73:
            v79 = sub_1C2C00C(v56, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v79)(v56, *(_QWORD *)(v79 + 8));
          goto LABEL_76;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v31, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v31;
        v32 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BDB81C(v32, (int32_t)v31, v33, v34);
        v35 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, 0LL);
      v36 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v36 = DataManager_TypeInfo;
      }
      static_fields = v36->static_fields;
      v18 = 0;
      v21 = 5;
LABEL_31:
      static_fields->readMasterDataResult = v21;
      return v18 & 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_96;
    case 2:
      v2->fields.__1__state = -1;
      v19 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v19 = DataManager_TypeInfo;
      }
      static_fields = v19->static_fields;
      v18 = 0;
      v21 = 1;
      goto LABEL_31;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_96:
        sub_1BDBAD4(this, method);
      goto LABEL_28;
    default:
      v18 = 0;
      return v18 & 1;
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

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
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
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  bool result; // w0
  bool MasterVersionFile; // w19
  DataManager_c *v12; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v14; // w9

  v2 = this;
  if ( (byte_4B44587 & 1) == 0 )
  {
    sub_1BDB878(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1BDB878(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4B44587 = 1;
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
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BDB81C(p__2__current, (int32_t)v6, v8, v9);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1BDBAD4(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, 0LL);
  v12 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v12 = DataManager_TypeInfo;
  }
  static_fields = v12->static_fields;
  result = 0;
  if ( MasterVersionFile )
    v14 = 1;
  else
    v14 = 5;
  static_fields->readMasterVersionResult = v14;
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

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
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
  __int64 v2; // x2
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
  Il2CppObject *v143; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  const MethodInfo *v147; // x3
  struct DataMasterBase_array *v148; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v150; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  __int64 v155; // x0
  __int64 v156; // x1
  struct DataManager___c__DisplayClass49_0_o *v157; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  struct DataManager___c__DisplayClass49_0_o *v162; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v165; // x24
  System_Predicate_object__o *v166; // x23
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  System_Collections_Generic_List_object__o *v171; // x22
  DataManager__updateMasterData_d__49_o *v172; // x24
  System_Predicate_object__o *v173; // x23
  int32_t Index; // w0
  int32_t v175; // w22
  int32_t v176; // w2
  const MethodInfo *v177; // x3
  __int64 v178; // x8
  _QWORD *v179; // x9
  __int64 _2__current_low; // x10
  __int64 v181; // x8
  int32_t v182; // w2
  const MethodInfo *v183; // x3
  __int64 v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  __int64 v187; // x8
  UnityEngine_WaitForEndOfFrame_o *v188; // x20
  int32_t v189; // w2
  const MethodInfo *v190; // x3
  ManagerConfig_c *v191; // x0
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  int32_t v194; // w2
  const MethodInfo *v195; // x3
  struct System_Collections_Generic_List_string__o *v196; // x8
  System_Collections_Generic_List_int__o *v197; // x22
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  ManagerConfig_c *v200; // x0
  __int64 v201; // x22
  const MethodInfo *v202; // x3
  DataManager__updateMasterData_d__49_o *v203; // x23
  const MethodInfo *v204; // x3
  DataManager__updateMasterData_d__49_o *v205; // x23
  const MethodInfo *v206; // x3
  DataManager__updateMasterData_d__49_o *v207; // x23
  const MethodInfo *v208; // x3
  DataManager__updateMasterData_d__49_o *v209; // x23
  const MethodInfo *v210; // x3
  DataManager__updateMasterData_d__49_o *v211; // x23
  const MethodInfo *v212; // x3
  DataManager__updateMasterData_d__49_o *v213; // x23
  const MethodInfo *v214; // x3
  DataManager__updateMasterData_d__49_o *v215; // x23
  const MethodInfo *v216; // x3
  DataManager__updateMasterData_d__49_o *v217; // x23
  const MethodInfo *v218; // x3
  DataManager__updateMasterData_d__49_o *v219; // x23
  __int64 v220; // x8
  __int64 v221; // x29
  _QWORD *v222; // x23
  __int64 v223; // x24
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  __int64 v226; // x1
  System_Collections_Generic_List_object__o *v227; // x25
  System_Predicate_object__o *v228; // x26
  int32_t v229; // w24
  struct System_Byte_array *masterDataBytes; // x25
  const MethodInfo_37F6054 *v231; // x3
  const MethodInfo_37F6054 *v232; // x3
  __int64 v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  UnityEngine_WaitForEndOfFrame_o *v236; // x20
  int32_t v237; // w2
  const MethodInfo *v238; // x3
  ManagerConfig_c *v239; // x0
  Il2CppObject *lockCountObj; // x22
  DataManager_c *v241; // x0
  int v242; // w21
  DataManager_c *v243; // x8
  UnityEngine_WaitForEndOfFrame_o *v244; // x20
  int32_t v245; // w2
  const MethodInfo *v246; // x3
  const MethodInfo *v247; // x3
  struct System_Collections_Generic_List_string__o *v248; // x8
  int32_t size; // w2
  int v250; // w9
  struct System_Collections_Generic_List_long____o *v251; // x8
  int32_t v252; // w2
  int v253; // w9
  UnityEngine_WaitForEndOfFrame_o *v254; // x20
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  UnityEngine_WaitForEndOfFrame_o *v257; // x20
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  UnityEngine_WaitForEndOfFrame_o *v260; // x20
  int32_t v261; // w2
  const MethodInfo *v262; // x3
  __int64 v263; // x0
  struct DataMasterBase_array *v264; // x9
  EventRandomMissionClearManager_c *v265; // x0
  DataManager_c *v266; // x8
  UnityEngine_WaitForEndOfFrame_o *v267; // x20
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-A0h]
  __int64 v271; // [xsp+8h] [xbp-98h] BYREF
  __int64 v272; // [xsp+10h] [xbp-90h]
  __int64 v273; // [xsp+18h] [xbp-88h] BYREF
  __int64 v274; // [xsp+20h] [xbp-80h]
  int v275; // [xsp+30h] [xbp-70h]
  bool lockTaken; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v277; // 0:x0.16
  System_Nullable_long__o v278; // 0:x0.16

  v4 = this;
  if ( (byte_4B44588 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&CatAndMouseGame_TypeInfo, v5);
    sub_1BDB878(&System_Convert_TypeInfo, v6);
    sub_1BDB878(&Method_DataManager_GetMasterData_ServantProfileMaster___, v7);
    sub_1BDB878(&Method_DataManager_GetMaster_EventServantMaster___, v8);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantAddMaster___, v9);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantClassMaster___, v10);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantCommentMaster___, v12);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v13);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantProfileMaster___, v15);
    sub_1BDB878(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v16);
    sub_1BDB878(&Method_DataManager__updateMasterData_b__49_0__, v17);
    sub_1BDB878(&DataManager_TypeInfo, v18);
    sub_1BDB878(&DataMasterBase___TypeInfo, v19);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v20);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v21);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v22);
    sub_1BDB878(&EventRandomMissionClearManager_TypeInfo, v23);
    sub_1BDB878(&System_Func_bool__TypeInfo, v24);
    sub_1BDB878(&System_GC_TypeInfo, v25);
    sub_1BDB878(&ImageLimitCount_TypeInfo, v26);
    sub_1BDB878(&LastUsedDeckNumberManager_TypeInfo, v27);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v29);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____Add__, v30);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Clear__, v31);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____Clear__, v32);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Contains__, v33);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__FindIndex__, v34);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__RemoveAt__, v35);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____RemoveAt__, v36);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v37);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____get_Count__, v38);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v39);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____get_Item__, v40);
    sub_1BDB878(&Method_System_Collections_Generic_List_long____set_Item__, v41);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v42);
    sub_1BDB878(&LogoMain_TypeInfo, v43);
    sub_1BDB878(&ManagerConfig_TypeInfo, v44);
    sub_1BDB878(&MasterDataUnpakcer_TypeInfo, v45);
    sub_1BDB878(&MaterialBranchRouteManager_TypeInfo, v46);
    sub_1BDB878(&MaterialGroupClearHistoryManager_TypeInfo, v47);
    sub_1BDB878(&MaterialServantLimitCountManager_TypeInfo, v48);
    sub_1BDB878(&MiniMessagePack_MiniMessagePacker_TypeInfo, v49);
    sub_1BDB878(&Method_System_Nullable_long___ctor__, v50);
    sub_1BDB878(&OtherUserNewManager_TypeInfo, v51);
    sub_1BDB878(&System_Predicate_string__TypeInfo, v52);
    sub_1BDB878(&ServantCommentManager_TypeInfo, v53);
    sub_1BDB878(&ServantProfileEventJoinManager_TypeInfo, v54);
    sub_1BDB878(&ServantProfileLimitCountManager_TypeInfo, v55);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v56);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57);
    sub_1BDB878(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v58);
    sub_1BDB878(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__, v59);
    sub_1BDB878(&DataManager___c__DisplayClass49_0_TypeInfo, v60);
    sub_1BDB878(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__, v61);
    sub_1BDB878(&DataManager___c__DisplayClass49_1_TypeInfo, v62);
    sub_1BDB878(&UserCommandCodeCollectionManager_TypeInfo, v63);
    sub_1BDB878(&UserCommandCodeNewManager_TypeInfo, v64);
    sub_1BDB878(&UserEquipNewManager_TypeInfo, v65);
    sub_1BDB878(&UserMissionProgressManager_TypeInfo, v66);
    sub_1BDB878(&UserServantCollectionManager_TypeInfo, v67);
    sub_1BDB878(&UserServantLockManager_TypeInfo, v68);
    sub_1BDB878(&UserServantNewManager_TypeInfo, v69);
    sub_1BDB878(&UnityEngine_WaitForEndOfFrame_TypeInfo, v70);
    sub_1BDB878(&UnityEngine_WaitUntil_TypeInfo, v71);
    sub_1BDB878(&WarBoardMessageHistoryManager_TypeInfo, v72);
    sub_1BDB878(&WarBoardMovieHistoryManager_TypeInfo, v73);
    this = (DataManager__updateMasterData_d__49_o *)sub_1BDB878(&StringLiteral_11451/*"SCRIPT"*/, v74);
    byte_4B44588 = 1;
  }
  lockTaken = 0;
  v275 = 0;
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
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v96, v97);
      v4->fields._dataMapObject_5__7 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v98, v99);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v100, v101);
      v103 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v103 = DataManager_TypeInfo;
      }
      updateData = v103->static_fields->updateData;
      if ( !updateData )
        sub_1BDBAD4(0LL, v102);
      v105 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v106 = System_Convert__FromBase64String(v105, 0LL);
      v4->fields._cryptBytes_5__8 = v106;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v106, v107, v108);
      v111 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v111 = DataManager_TypeInfo;
      }
      static_fields = v111->static_fields;
      static_fields->updateData = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->updateData, 0, v109, v110);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v113 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v113, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v113;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BDB81C(p__2__current, (int32_t)v113, v115, v116);
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
        sub_1BDBAD4(v119, v119);
      _4__this->fields.masterDataBytes = v119;
      sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v119, v120, v121);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v122, v123);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v124 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v124, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v124;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BDB81C(v85, (int32_t)v124, v125, v126);
      v88 = 2;
      goto LABEL_82;
    case 2:
      v4->fields.__1__state = -1;
      v78 = (MasterDataUnpakcer_o *)sub_1BDBAC4(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v78, 0LL);
      if ( !_4__this )
        sub_1BDBAD4(v79, v80);
      if ( !v78 )
        sub_1BDBAD4(v79, v80);
      v81 = MasterDataUnpakcer__Unpack_39974464(v78, _4__this->fields.masterDataBytes, 0LL);
      v4->fields._dataMapObject_5__7 = v81;
      sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v81, v82, v83);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v84;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BDB81C(v85, (int32_t)v84, v86, v87);
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
      sub_1BDB81C(p_dataMapDict_5__6, v131, v2, v3);
      if ( !_4__this )
        goto LABEL_291;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v136 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v136, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v136;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BDB81C(v85, (int32_t)v136, v137, v138);
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
          v143 = (Il2CppObject *)sub_1BDBAC4(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v143, 0LL);
          v4->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v143;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
          sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v143, v145, v146);
          v148 = _4__this->fields.datalist;
          if ( !v148 )
            goto LABEL_291;
          i_5__9 = v4->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= v148->max_length )
            goto LABEL_292;
          v150 = v148->m_Items[i_5__9];
          if ( !v150 )
            goto LABEL_291;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_291;
          MasterName_k__BackingField = v150->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields, (int32_t)MasterName_k__BackingField, v2, v147);
          _8__1 = v4->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_291;
          this = (DataManager__updateMasterData_d__49_o *)v4->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_291;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0LL;
            sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v153, v154);
            v157 = v4->fields.__8__1;
            if ( !v157 )
              sub_1BDBAD4(v155, v156);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1BDBAD4(0LL, v156);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v157->fields.masterName,
                     (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v160, v161);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v260 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v260, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v260;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BDB81C(v85, (int32_t)v260, v261, v262);
              v88 = 5;
              goto LABEL_82;
            }
LABEL_96:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
            v162 = v4->fields.__8__1;
            if ( !v162 || !this )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v162->fields.masterName,
                                                              (const MethodInfo_36D6154 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v4->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_291;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v243 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v243 = DataManager_TypeInfo;
                }
                v141 = v243->static_fields;
                result = 0;
                v142 = 6;
                goto LABEL_289;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v165 = *p__8__1;
            v166 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v166,
              (Il2CppObject *)v165,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0LL);
            if ( !saveNameList )
              goto LABEL_291;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v166,
                                                              (const MethodInfo_36D661C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_291;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v178 = *(_QWORD *)&this->fields.__1__state;
              v179 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v178 )
                goto LABEL_291;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v178 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
              }
              else
              {
                v181 = v178 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v181 + 32) = method;
                sub_1BDB81C((CGThumbnailListItem_o *)(v181 + 32), (int32_t)method, v167, v168);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_291;
              method = (const MethodInfo *)v4->fields._dataMap_5__10;
              v184 = *(_QWORD *)&this->fields.__1__state;
              v185 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v184 )
                goto LABEL_291;
              v186 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v186 >= *(_DWORD *)(v184 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
              }
              else
              {
                v187 = v184 + 8 * v186;
                LODWORD(this->fields.__2__current) = v186 + 1;
                *(_QWORD *)(v187 + 32) = method;
                sub_1BDB81C((CGThumbnailListItem_o *)(v187 + 32), (int32_t)method, v182, v183);
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
                (const MethodInfo_36D5B48 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0LL;
            v4->fields._isAdd_5__4 = 1;
            sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v169, v170);
          }
          else
          {
            v171 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v172 = *p__8__1;
            v173 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v173,
              (Il2CppObject *)v172,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0LL);
            if ( !v171 )
              goto LABEL_291;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v171,
                      (System_Predicate_T__o *)v173,
                      (const MethodInfo_36D661C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_125;
            v175 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v175,
              (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v175,
              (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0LL;
          sub_1BDB81C((CGThumbnailListItem_o *)p__8__1, 0, v176, v177);
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
          v191 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v191 = ManagerConfig_TypeInfo;
          }
          if ( !v191->static_fields->UseMock )
            goto LABEL_83;
        }
        v4->fields._dataMapDict_5__6 = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, v3);
        v4->fields._dataMapObject_5__7 = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v192, v193);
        v4->fields._cryptBytes_5__8 = 0LL;
        sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v194, v195);
        if ( !_4__this )
          goto LABEL_291;
LABEL_134:
        v196 = _4__this->fields.saveNameList;
        if ( !v196 )
LABEL_291:
          sub_1BDBAD4(this, method);
        if ( v196->fields._size <= 0 )
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
        v197 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v197,
          (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v197;
        sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v197, v198, v199);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v4->fields._loadedIndices_5__5;
        if ( v4->fields.isUseTips )
        {
          v200 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v200 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v200->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11451/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_291;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v201 = sub_1BDB920(DataMasterBase___TypeInfo, 9LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v201 )
                goto LABEL_291;
              v203 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( !*(_DWORD *)(v201 + 24) )
                goto LABEL_292;
              *(_QWORD *)(v201 + 32) = v203;
              sub_1BDB81C((CGThumbnailListItem_o *)(v201 + 32), (int32_t)v203, v2, v202);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantClassMaster___);
              v205 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 1u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 40) = v205;
              sub_1BDB81C((CGThumbnailListItem_o *)(v201 + 40), (int32_t)v205, v2, v204);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v207 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 2u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 48) = v207;
              sub_1BDB81C((CGThumbnailListItem_o *)(v201 + 48), (int32_t)v207, v2, v206);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v209 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 3u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 56) = v209;
              sub_1BDB81C((CGThumbnailListItem_o *)(v201 + 56), (int32_t)v209, v2, v208);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v211 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 4u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 64) = v211;
              sub_1BDB81C((CGThumbnailListItem_o *)(v201 + 64), (int32_t)v211, v2, v210);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_EventServantMaster___);
              v213 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 5u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 72) = v213;
              sub_1BDB81C((CGThumbnailListItem_o *)(v201 + 72), (int32_t)v213, v2, v212);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v215 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 6u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 80) = v215;
              sub_1BDB81C((CGThumbnailListItem_o *)(v201 + 80), (int32_t)v215, v2, v214);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v217 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 7u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 88) = v217;
              sub_1BDB81C((CGThumbnailListItem_o *)(v201 + 88), (int32_t)v217, v2, v216);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ServantAddMaster___);
              v219 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BDB9B4(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                {
LABEL_241:
                  v263 = sub_1BDBAF8(this);
                  sub_1BDB9A0(v263, 0LL);
                }
              }
              if ( *(_DWORD *)(v201 + 24) <= 8u )
LABEL_292:
                sub_1BDBADC(this, method, v2);
              *(_QWORD *)(v201 + 96) = v219;
              sub_1BDB81C((CGThumbnailListItem_o *)(v201 + 96), (int32_t)v219, v2, v218);
              v220 = *(_QWORD *)(v201 + 24);
              if ( (int)v220 >= 1 )
              {
                v221 = 0LL;
                while ( (unsigned int)v221 < (unsigned int)v220 )
                {
                  v222 = *(_QWORD **)(v201 + 32 + 8 * v221);
                  v223 = sub_1BDBAC4(DataManager___c__DisplayClass49_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v223, 0LL);
                  if ( !v222 )
                    goto LABEL_291;
                  if ( !v223 )
                    goto LABEL_291;
                  v226 = v222[3];
                  *(_QWORD *)(v223 + 16) = v226;
                  sub_1BDB81C((CGThumbnailListItem_o *)(v223 + 16), v226, v224, v225);
                  v227 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v228 = (System_Predicate_object__o *)sub_1BDBAC4(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v228,
                    (Il2CppObject *)v223,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0LL);
                  if ( !v227 )
                    goto LABEL_291;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v227,
                                                                    (System_Predicate_T__o *)v228,
                                                                    (const MethodInfo_36D661C *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v229 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    masterDataBytes = _4__this->fields.masterDataBytes;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v229,
                                                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_292;
                    v277.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v277.fields.hasValue = &v273;
                    v273 = 0LL;
                    v274 = 0LL;
                    System_Nullable_long____ctor(v277, Method_System_Nullable_long___ctor__, v231);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_291;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v229,
                                                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_291;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_292;
                    v278.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v278.fields.hasValue = &v271;
                    v271 = 0LL;
                    v272 = 0LL;
                    System_Nullable_long____ctor(v278, Method_System_Nullable_long___ctor__, v232);
                    (*(void (__fastcall **)(_QWORD *, struct System_Byte_array *, __int64, __int64, __int64, __int64, _QWORD))(*v222 + 424LL))(
                      v222,
                      masterDataBytes,
                      v273,
                      v274,
                      v271,
                      v272,
                      *(_QWORD *)(*v222 + 432LL));
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_291;
                    v233 = *(_QWORD *)&this->fields.__1__state;
                    v234 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v233 )
                      goto LABEL_291;
                    v235 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v235 >= *(_DWORD *)(v233 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v229,
                        *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v235 + 1;
                      *(_DWORD *)(v233 + 4 * v235 + 32) = v229;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v220 = *(_QWORD *)(v201 + 24);
                  if ( (int)++v221 >= (int)v220 )
                    goto LABEL_192;
                }
                goto LABEL_292;
              }
LABEL_192:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_204:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v236 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v236, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v236;
                  v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1BDB81C(v85, (int32_t)v236, v237, v238);
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
          v239 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v239 = ManagerConfig_TypeInfo;
          }
          if ( !v239->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, 0LL);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v257 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v257, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v257;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BDB81C(v85, (int32_t)v257, v258, v259);
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
              v127 = (System_Func_bool__o *)sub_1BDBAC4(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v127,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v128 = (UnityEngine_WaitUntil_o *)sub_1BDBAC4(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v128, v127, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v128;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BDB81C(v85, (int32_t)v128, v129, v130);
              v88 = 9;
              goto LABEL_82;
            }
            goto LABEL_291;
          }
        }
LABEL_209:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_64506792(lockCountObj, &lockTaken, 0LL);
        if ( _4__this->fields.nowLoadCount >= v4->fields._saveDataCount_5__3 )
        {
          v242 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v241 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v241 = DataManager_TypeInfo;
          }
          v241->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, 0LL);
          v242 = 20;
        }
        else
        {
          v242 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
        if ( v242 == 62 )
        {
          v244 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v244, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v244;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BDB81C(v85, (int32_t)v244, v245, v246);
          v88 = 11;
          goto LABEL_82;
        }
        if ( v242 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, 0LL);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          v248 = _4__this->fields.saveNameList;
          if ( v248 )
          {
            size = v248->fields._size;
            v250 = v248->fields._version + 1;
            v248->fields._size = 0;
            v248->fields._version = v250;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v248->fields._items, 0, size, 0LL);
            v251 = _4__this->fields.saveDataMapList;
            if ( v251 )
            {
              v252 = v251->fields._size;
              v253 = v251->fields._version + 1;
              v251->fields._size = 0;
              v251->fields._version = v253;
              if ( v252 >= 1 )
                System_Array__Clear((System_Array_o *)v251->fields._items, 0, v252, 0LL);
              _4__this->fields.masterDataBytes = 0LL;
              sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, 0, v252, v247);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0LL);
              v254 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v254, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v254;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BDB81C(v85, (int32_t)v254, v255, v256);
              v88 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_291;
        }
        return 0;
      }
      v188 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v188, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v188;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BDB81C(v85, (int32_t)v188, v189, v190);
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
        v133 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v133, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v133;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BDB81C(v85, (int32_t)v133, v134, v135);
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
        v264 = _4__this->fields.datalist;
        if ( !v264 )
          goto LABEL_291;
        if ( v77 >= v264->max_length )
          goto LABEL_292;
        this = (DataManager__updateMasterData_d__49_o *)v264->m_Items[v77];
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
            v267 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v267, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v267;
            v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BDB81C(v85, (int32_t)v267, v268, v269);
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
      v265 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__Initialize((const MethodInfo *)v265);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      MaterialGroupClearHistoryManager__Initialize(0LL);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      WarBoardMessageHistoryManager__Initialize(0LL);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      WarBoardMovieHistoryManager__Initialize(0LL);
      v266 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v266 = DataManager_TypeInfo;
      }
      v141 = v266->static_fields;
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

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
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
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_39949012; // x0
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

  if ( (byte_4B44589 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, method);
    sub_1BDB878(&System_Convert_TypeInfo, v5);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1BDB878(&JsonManager_TypeInfo, v10);
    sub_1BDB878(&NetworkManager_TypeInfo, v11);
    sub_1BDB878(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    sub_1BDB878(&StringLiteral_18232/*"contactURL"*/, v13);
    sub_1BDB878(&StringLiteral_19449/*"filePass"*/, v14);
    sub_1BDB878(&StringLiteral_17059/*"baseURL"*/, v15);
    sub_1BDB878(&StringLiteral_1/*""*/, v16);
    byte_4B44589 = 1;
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
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v19, v20);
      this->fields._dataObject_5__4 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v21, v22);
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
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, (int32_t)v26, v27, v28);
      v31 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v31 = DataManager_TypeInfo;
      }
      static_fields = v31->static_fields;
      static_fields->webViewData = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->webViewData, 0, v29, v30);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        this->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &this->fields.__2__current;
        sub_1BDB81C((CGThumbnailListItem_o *)p__2__current, (int32_t)v35, v37, v38);
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
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, (int32_t)v42, v43, v44);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v45, 0LL);
        this->fields.__2__current = (Il2CppObject *)v45;
        v46 = &this->fields.__2__current;
        sub_1BDB81C((CGThumbnailListItem_o *)v46, (int32_t)v45, v47, v48);
        v49 = 2;
LABEL_30:
        *((_DWORD *)v46 - 2) = v49;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_39949012 = JsonManager__getDictionary_39949012(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_39949012;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_39949012, v52, v53);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BDBAC4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v54, 0LL);
        this->fields.__2__current = (Il2CppObject *)v54;
        v46 = &this->fields.__2__current;
        sub_1BDB81C((CGThumbnailListItem_o *)v46, (int32_t)v54, v55, v56);
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
              (Il2CppObject *)StringLiteral_17059/*"baseURL"*/,
              (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17059/*"baseURL"*/,
               (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
              (Il2CppObject *)StringLiteral_18232/*"contactURL"*/,
              (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18232/*"contactURL"*/,
               (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
             (Il2CppObject *)StringLiteral_19449/*"filePass"*/,
             (const MethodInfo_33A0424 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1BDBAD4(Item, v34);
        v61 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19449/*"filePass"*/,
                (const MethodInfo_33A01B0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v62 = (System_Collections_Generic_Dictionary_string__object__o *)v61;
        if ( v61 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v61->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v61->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1BDBD94(v61);
LABEL_54:
            sub_1BDBAD4(webViewData, v23);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v60, v59, v62, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v64, v65);
      this->fields._dataObject_5__4 = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v66, v67);
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

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
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