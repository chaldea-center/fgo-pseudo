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

  if ( (byte_4B1C00C & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v4);
    byte_4B1C00C = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->updateData, 0, v2, v3);
  v6 = DataManager_TypeInfo->static_fields;
  v6->webViewData = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v6->webViewData, 0, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  v10 = DataManager_TypeInfo->static_fields;
  v10->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v10->serverHash, v9, v11, v12);
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

  if ( (byte_4B1C00B & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long_____ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_long____TypeInfo, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BCAFF8(&object_TypeInfo, v6);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager___ctor__, v7);
    byte_4B1C00B = 1;
  }
  this->fields._DispLog = 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.saveNameList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.saveDataMapList, (int32_t)v11, v12, v13);
  v14 = (Il2CppObject *)sub_1BCB244(object_TypeInfo);
  System_Object___ctor(v14, 0LL);
  this->fields.lockCountObj = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.lockCountObj, (int32_t)v14, v15, v16);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38F8EF0 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_4B1BFE9 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, v1);
    byte_4B1BFE9 = 1;
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

  if ( (byte_4B1BFEA & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    byte_4B1BFEA = 1;
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

  if ( (byte_4B1BFE8 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, v1);
    byte_4B1BFE8 = 1;
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

  if ( (byte_4B1C002 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_4B1C002 = 1;
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
    sub_1BCB254(v5, method);
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
  __int64 v549; // x1
  DataMasterBase_array *v550; // x19
  ServantMaster_o *v551; // x20
  __int64 v552; // x0
  __int64 v553; // x1
  __int64 v554; // x2
  const MethodInfo *v555; // x3
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v557; // x20
  const MethodInfo *v558; // x3
  ServantCommentMaster_o *v559; // x20
  const MethodInfo *v560; // x3
  ServantProfileMaster_o *v561; // x20
  const MethodInfo *v562; // x3
  WarMaster_o *v563; // x20
  const MethodInfo *v564; // x3
  UserMaster_o *v565; // x20
  const MethodInfo *v566; // x3
  UserGameMaster_o *v567; // x20
  const MethodInfo *v568; // x3
  TblUserMaster_o *v569; // x20
  const MethodInfo *v570; // x3
  UserItemMaster_o *v571; // x20
  const MethodInfo *v572; // x3
  UserServantMaster_o *v573; // x20
  const MethodInfo *v574; // x3
  UserServantStorageMaster_o *v575; // x20
  const MethodInfo *v576; // x3
  UserAccessaryMaster_o *v577; // x20
  const MethodInfo *v578; // x3
  UserQuestMaster_o *v579; // x20
  const MethodInfo *v580; // x3
  BattleMaster_o *v581; // x20
  const MethodInfo *v582; // x3
  OtherUserGameMaster_o *v583; // x20
  const MethodInfo *v584; // x3
  TblFriendMaster_o *v585; // x20
  const MethodInfo *v586; // x3
  AreaMaster_o *v587; // x20
  const MethodInfo *v588; // x3
  ServantCardMaster_o *v589; // x20
  const MethodInfo *v590; // x3
  EventMaster_o *v591; // x20
  const MethodInfo *v592; // x3
  ItemMaster_o *v593; // x20
  const MethodInfo *v594; // x3
  QuestMaster_o *v595; // x20
  const MethodInfo *v596; // x3
  QuestAddMaster_o *v597; // x20
  const MethodInfo *v598; // x3
  QuestReleaseMaster_o *v599; // x20
  const MethodInfo *v600; // x3
  QuestDateRangeMaster_o *v601; // x20
  const MethodInfo *v602; // x3
  QuestPhaseMaster_o *v603; // x20
  const MethodInfo *v604; // x3
  QuestPhaseDetailMaster_o *v605; // x20
  const MethodInfo *v606; // x3
  QuestGroupMaster_o *v607; // x20
  const MethodInfo *v608; // x3
  QuestRandomGroupMaster_o *v609; // x20
  const MethodInfo *v610; // x3
  QuestConsumeItemMaster_o *v611; // x20
  const MethodInfo *v612; // x3
  QuestMessageMaster_o *v613; // x20
  const MethodInfo *v614; // x3
  UserQuestInfoMaster_o *v615; // x20
  const MethodInfo *v616; // x3
  UserQuestRecordMaster_o *v617; // x20
  const MethodInfo *v618; // x3
  ViewQuestInfoMaster_o *v619; // x20
  const MethodInfo *v620; // x3
  ViewEnemyMaster_o *v621; // x20
  const MethodInfo *v622; // x3
  ViewQuestEnemyInfoMaster_o *v623; // x20
  const MethodInfo *v624; // x3
  BlankEarthSpotMaster_o *v625; // x20
  const MethodInfo *v626; // x3
  BlankEarthSpotAddMaster_o *v627; // x20
  const MethodInfo *v628; // x3
  SpotMaster_o *v629; // x20
  const MethodInfo *v630; // x3
  SpotImageMaster_o *v631; // x20
  const MethodInfo *v632; // x3
  SpotRoadMaster_o *v633; // x20
  const MethodInfo *v634; // x3
  SpotPathMaster_o *v635; // x20
  const MethodInfo *v636; // x3
  SpotAddMaster_o *v637; // x20
  const MethodInfo *v638; // x3
  MapGimmickMaster_o *v639; // x20
  const MethodInfo *v640; // x3
  GiftMaster_o *v641; // x20
  const MethodInfo *v642; // x3
  GiftAddMaster_o *v643; // x20
  const MethodInfo *v644; // x3
  ShopMaster_o *v645; // x20
  const MethodInfo *v646; // x3
  StoneShopMaster_o *v647; // x20
  const MethodInfo *v648; // x3
  BankShopMaster_o *v649; // x20
  const MethodInfo *v650; // x3
  ShopScriptMaster_o *v651; // x20
  const MethodInfo *v652; // x3
  StageMaster_o *v653; // x20
  const MethodInfo *v654; // x3
  ServantGroupMaster_o *v655; // x20
  const MethodInfo *v656; // x3
  ServantLimitMaster_o *v657; // x20
  const MethodInfo *v658; // x3
  ServantLimitAddMaster_o *v659; // x20
  const MethodInfo *v660; // x3
  ServantSkillMaster_o *v661; // x20
  const MethodInfo *v662; // x3
  ServantPassiveSkillMaster_o *v663; // x20
  const MethodInfo *v664; // x3
  BgmMaster_o *v665; // x20
  const MethodInfo *v666; // x3
  ServantScriptMaster_o *v667; // x20
  const MethodInfo *v668; // x3
  NewsMaster_o *v669; // x20
  const MethodInfo *v670; // x3
  TelopMaster_o *v671; // x20
  const MethodInfo *v672; // x3
  UserExpMaster_o *v673; // x20
  const MethodInfo *v674; // x3
  TreasureDvcMaster_o *v675; // x20
  const MethodInfo *v676; // x3
  ServantTreasureDvcMaster_o *v677; // x20
  const MethodInfo *v678; // x3
  SkillMaster_o *v679; // x20
  const MethodInfo *v680; // x3
  SkillLvMaster_o *v681; // x20
  const MethodInfo *v682; // x3
  SkillDetailMaster_o *v683; // x20
  const MethodInfo *v684; // x3
  CommandSpellMaster_o *v685; // x20
  const MethodInfo *v686; // x3
  EquipMaster_o *v687; // x20
  const MethodInfo *v688; // x3
  EquipExpMaster_o *v689; // x20
  const MethodInfo *v690; // x3
  EquipSkillMaster_o *v691; // x20
  const MethodInfo *v692; // x3
  SubEquipMaster_o *v693; // x20
  const MethodInfo *v694; // x3
  AccessaryMaster_o *v695; // x20
  const MethodInfo *v696; // x3
  UserPresentBoxMaster_o *v697; // x20
  const MethodInfo *v698; // x3
  UserDeckMaster_o *v699; // x20
  const MethodInfo *v700; // x3
  UserSubEquipMaster_o *v701; // x20
  const MethodInfo *v702; // x3
  GachaMaster_o *v703; // x20
  const MethodInfo *v704; // x3
  GachaImageMaster_o *v705; // x20
  const MethodInfo *v706; // x3
  UserGachaMaster_o *v707; // x20
  const MethodInfo *v708; // x3
  UserEquipMaster_o *v709; // x20
  const MethodInfo *v710; // x3
  UserServantCollectionMaster_o *v711; // x20
  const MethodInfo *v712; // x3
  FriendshipMaster_o *v713; // x20
  const MethodInfo *v714; // x3
  GachaTicketMaster_o *v715; // x20
  const MethodInfo *v716; // x3
  UserFormationMaster_o *v717; // x20
  const MethodInfo *v718; // x3
  FunctionMaster_o *v719; // x20
  const MethodInfo *v720; // x3
  BuffMaster_o *v721; // x20
  const MethodInfo *v722; // x3
  GachaReleaseMaster_o *v723; // x20
  const MethodInfo *v724; // x3
  CombineQpMaster_o *v725; // x20
  const MethodInfo *v726; // x3
  CombineMaterialMaster_o *v727; // x20
  const MethodInfo *v728; // x3
  EventCombineMaster_o *v729; // x20
  const MethodInfo *v730; // x3
  ServantExpMaster_o *v731; // x20
  const MethodInfo *v732; // x3
  CombineSkillMaster_o *v733; // x20
  const MethodInfo *v734; // x3
  CombineTdMaster_o *v735; // x20
  const MethodInfo *v736; // x3
  EventQuestMaster_o *v737; // x20
  const MethodInfo *v738; // x3
  EventCampaignMaster_o *v739; // x20
  const MethodInfo *v740; // x3
  IllustratorMaster_o *v741; // x20
  const MethodInfo *v742; // x3
  CvMaster_o *v743; // x20
  const MethodInfo *v744; // x3
  TreasureDvcLvMaster_o *v745; // x20
  const MethodInfo *v746; // x3
  TreasureDvcDetailMaster_o *v747; // x20
  const MethodInfo *v748; // x3
  UserFollowerMaster_o *v749; // x20
  const MethodInfo *v750; // x3
  NpcFollowerMaster_o *v751; // x20
  const MethodInfo *v752; // x3
  NpcServantFollowerMaster_o *v753; // x20
  const MethodInfo *v754; // x3
  UserEventMaster_o *v755; // x20
  const MethodInfo *v756; // x3
  UserShopMaster_o *v757; // x20
  const MethodInfo *v758; // x3
  UserContinueMaster_o *v759; // x20
  const MethodInfo *v760; // x3
  ConstantMaster_o *v761; // x20
  const MethodInfo *v762; // x3
  ConstantLongMaster_o *v763; // x20
  const MethodInfo *v764; // x3
  ConstantStrMaster_o *v765; // x20
  const MethodInfo *v766; // x3
  AiMaster_o *v767; // x20
  const MethodInfo *v768; // x3
  AiActMaster_o *v769; // x20
  const MethodInfo *v770; // x3
  AttriRelationMaster_o *v771; // x20
  const MethodInfo *v772; // x3
  ClassRelationMaster_o *v773; // x20
  const MethodInfo *v774; // x3
  EffectMaster_o *v775; // x20
  const MethodInfo *v776; // x3
  EquipImageMaster_o *v777; // x20
  const MethodInfo *v778; // x3
  ServantVoiceMaster_o *v779; // x20
  const MethodInfo *v780; // x3
  CombineLimitMaster_o *v781; // x20
  const MethodInfo *v782; // x3
  CardMaster_o *v783; // x20
  const MethodInfo *v784; // x3
  CombineQpSvtEquipMaster_o *v785; // x20
  const MethodInfo *v786; // x3
  ServantRarityMaster_o *v787; // x20
  const MethodInfo *v788; // x3
  SetItemMaster_o *v789; // x20
  const MethodInfo *v790; // x3
  RecoverMaster_o *v791; // x20
  const MethodInfo *v792; // x3
  BannerMaster_o *v793; // x20
  const MethodInfo *v794; // x3
  ShopReleaseMaster_o *v795; // x20
  const MethodInfo *v796; // x3
  EventRewardMaster_o *v797; // x20
  const MethodInfo *v798; // x3
  EventDetailMaster_o *v799; // x20
  const MethodInfo *v800; // x3
  EventServantMaster_o *v801; // x20
  const MethodInfo *v802; // x3
  BoxGachaMaster_o *v803; // x20
  const MethodInfo *v804; // x3
  BoxGachaBaseMaster_o *v805; // x20
  const MethodInfo *v806; // x3
  BoxGachaTalkMaster_o *v807; // x20
  const MethodInfo *v808; // x3
  UserBoxGachaMaster_o *v809; // x20
  const MethodInfo *v810; // x3
  BoxGachaHistoryMaster_o *v811; // x20
  const MethodInfo *v812; // x3
  BattleBgMaster_o *v813; // x20
  const MethodInfo *v814; // x3
  TipsBattleMaster_o *v815; // x20
  const MethodInfo *v816; // x3
  UserLoginMaster_o *v817; // x20
  const MethodInfo *v818; // x3
  VoiceMaster_o *v819; // x20
  const MethodInfo *v820; // x3
  EventRewardExtraMaster_o *v821; // x20
  const MethodInfo *v822; // x3
  EventMissionMaster_o *v823; // x20
  const MethodInfo *v824; // x3
  EventMissionActionMaster_o *v825; // x20
  const MethodInfo *v826; // x3
  EventMissionActionAddMaster_o *v827; // x20
  const MethodInfo *v828; // x3
  EventMissionConditionMaster_o *v829; // x20
  const MethodInfo *v830; // x3
  EventMissionCondDetailMaster_o *v831; // x20
  const MethodInfo *v832; // x3
  EventMissionAddMaster_o *v833; // x20
  const MethodInfo *v834; // x3
  CompleteMissionMaster_o *v835; // x20
  const MethodInfo *v836; // x3
  EventRewardSetMaster_o *v837; // x20
  const MethodInfo *v838; // x3
  UserEventMissionMaster_o *v839; // x20
  const MethodInfo *v840; // x3
  UserEventMissionCondDetailMaster_o *v841; // x20
  const MethodInfo *v842; // x3
  BoxGachaBaseDetailMaster_o *v843; // x20
  const MethodInfo *v844; // x3
  UserServantLeaderMaster_o *v845; // x20
  const MethodInfo *v846; // x3
  ClosedMessageMaster_o *v847; // x20
  const MethodInfo *v848; // x3
  FunctionGroupMaster_o *v849; // x20
  const MethodInfo *v850; // x3
  EventRaidMaster_o *v851; // x20
  const MethodInfo *v852; // x3
  TotalEventRaidMaster_o *v853; // x20
  const MethodInfo *v854; // x3
  UserEventRaidMaster_o *v855; // x20
  const MethodInfo *v856; // x3
  EventPointMaster_o *v857; // x20
  const MethodInfo *v858; // x3
  EventPointGroupMaster_o *v859; // x20
  const MethodInfo *v860; // x3
  TotalEventPointMaster_o *v861; // x20
  const MethodInfo *v862; // x3
  UserEventPointMaster_o *v863; // x20
  const MethodInfo *v864; // x3
  EventPointUpperMaster_o *v865; // x20
  const MethodInfo *v866; // x3
  EventPointUpperReleaseMaster_o *v867; // x20
  const MethodInfo *v868; // x3
  EventRaceMaster_o *v869; // x20
  const MethodInfo *v870; // x3
  EventRaceResultMaster_o *v871; // x20
  const MethodInfo *v872; // x3
  QuestRacePointMaster_o *v873; // x20
  const MethodInfo *v874; // x3
  UserEventRaceMaster_o *v875; // x20
  const MethodInfo *v876; // x3
  EventScriptMaster_o *v877; // x20
  const MethodInfo *v878; // x3
  EventScriptReleaseMaster_o *v879; // x20
  const MethodInfo *v880; // x3
  UserPresentHistoryMaster_o *v881; // x20
  const MethodInfo *v882; // x3
  MstMissionMaster_o *v883; // x20
  const MethodInfo *v884; // x3
  ServantExceedMaster_o *v885; // x20
  const MethodInfo *v886; // x3
  PartialMaintenanceMaster_o *v887; // x20
  const MethodInfo *v888; // x3
  GuideMaster_o *v889; // x20
  const MethodInfo *v890; // x3
  MstMissionDisplayInfoMaster_o *v891; // x20
  const MethodInfo *v892; // x3
  GachaGroupMaster_o *v893; // x20
  const MethodInfo *v894; // x3
  QuestResetMaster_o *v895; // x20
  const MethodInfo *v896; // x3
  WarAddMaster_o *v897; // x20
  const MethodInfo *v898; // x3
  EventItemDisplayMaster_o *v899; // x20
  const MethodInfo *v900; // x3
  EventItemDisplayGroupMaster_o *v901; // x20
  const MethodInfo *v902; // x3
  EventItemDisplayReleaseMaster_o *v903; // x20
  const MethodInfo *v904; // x3
  EventTutorialMaster_o *v905; // x20
  const MethodInfo *v906; // x3
  EventTutorialCondMaster_o *v907; // x20
  const MethodInfo *v908; // x3
  VoiceReleaseMaster_o *v909; // x20
  const MethodInfo *v910; // x3
  EventSuperBossMaster_o *v911; // x20
  const MethodInfo *v912; // x3
  UserSuperBossMaster_o *v913; // x20
  const MethodInfo *v914; // x3
  QuestScriptMaster_o *v915; // x20
  const MethodInfo *v916; // x3
  QuestScriptReleaseMaster_o *v917; // x20
  const MethodInfo *v918; // x3
  MaterialFolderMaster_o *v919; // x20
  const MethodInfo *v920; // x3
  RestrictionMaster_o *v921; // x20
  const MethodInfo *v922; // x3
  QuestRestrictionMaster_o *v923; // x20
  const MethodInfo *v924; // x3
  ServantVoiceRelationMaster_o *v925; // x20
  const MethodInfo *v926; // x3
  ShopDetailMaster_o *v927; // x20
  const MethodInfo *v928; // x3
  ServantScriptAddMaster_o *v929; // x20
  const MethodInfo *v930; // x3
  CombineMaster_o *v931; // x20
  const MethodInfo *v932; // x3
  AiFieldMaster_o *v933; // x20
  const MethodInfo *v934; // x3
  ServantCommentAddMaster_o *v935; // x20
  const MethodInfo *v936; // x3
  EventFilterMaster_o *v937; // x20
  const MethodInfo *v938; // x3
  UserSupportDeckMaster_o *v939; // x20
  const MethodInfo *v940; // x3
  EventRewardSceneMaster_o *v941; // x20
  const MethodInfo *v942; // x3
  EventVoicePlayMaster_o *v943; // x20
  const MethodInfo *v944; // x3
  GachaSubMaster_o *v945; // x20
  const MethodInfo *v946; // x3
  GachaDetailMaster_o *v947; // x20
  const MethodInfo *v948; // x3
  GachaBaseCollateralMaster_o *v949; // x20
  const MethodInfo *v950; // x3
  GachaAdjustAddMaster_o *v951; // x20
  const MethodInfo *v952; // x3
  GachaBonusSelectMaster_o *v953; // x20
  const MethodInfo *v954; // x3
  GachaBonusSelectLineupMaster_o *v955; // x20
  const MethodInfo *v956; // x3
  ServantChangeMaster_o *v957; // x20
  const MethodInfo *v958; // x3
  VoiceCondMaster_o *v959; // x20
  const MethodInfo *v960; // x3
  BgmReleaseMaster_o *v961; // x20
  const MethodInfo *v962; // x3
  MyRoomAddMaster_o *v963; // x20
  const MethodInfo *v964; // x3
  ShopActionMaster_o *v965; // x20
  const MethodInfo *v966; // x3
  EventRewardSceneReleaseMaster_o *v967; // x20
  const MethodInfo *v968; // x3
  QuestBehaviorMaster_o *v969; // x20
  const MethodInfo *v970; // x3
  MapMaster_o *v971; // x20
  const MethodInfo *v972; // x3
  MapCondMaster_o *v973; // x20
  const MethodInfo *v974; // x3
  MapButtonMaster_o *v975; // x20
  const MethodInfo *v976; // x3
  BannerAddMaster_o *v977; // x20
  const MethodInfo *v978; // x3
  EventAddMaster_o *v979; // x20
  const MethodInfo *v980; // x3
  TotalLoginMaster_o *v981; // x20
  const MethodInfo *v982; // x3
  ServantFilterMaster_o *v983; // x20
  const MethodInfo *v984; // x3
  CombineCostumeMaster_o *v985; // x20
  const MethodInfo *v986; // x3
  ServantCostumeMaster_o *v987; // x20
  const MethodInfo *v988; // x3
  ServantCostumeReleaseMaster_o *v989; // x20
  const MethodInfo *v990; // x3
  StaffPhotoMaster_o *v991; // x20
  const MethodInfo *v992; // x3
  StaffPhotoCostumeMaster_o *v993; // x20
  const MethodInfo *v994; // x3
  UserFriendRequestHistoryMaster_o *v995; // x20
  const MethodInfo *v996; // x3
  UserBlacklistMaster_o *v997; // x20
  const MethodInfo *v998; // x3
  ItemSelectMaster_o *v999; // x20
  const MethodInfo *v1000; // x3
  TotalEventRaceMaster_o *v1001; // x20
  const MethodInfo *v1002; // x3
  EventPointGroupAddMaster_o *v1003; // x20
  const MethodInfo *v1004; // x3
  VoicePlayGroupMaster_o *v1005; // x20
  const MethodInfo *v1006; // x3
  VoicePlayCondMaster_o *v1007; // x20
  const MethodInfo *v1008; // x3
  GachaStoryAdjustMaster_o *v1009; // x20
  const MethodInfo *v1010; // x3
  ServantFlagMaster_o *v1011; // x20
  const MethodInfo *v1012; // x3
  ServantFlagReleaseMaster_o *v1013; // x20
  const MethodInfo *v1014; // x3
  EventLocationCampaignMaster_o *v1015; // x20
  const MethodInfo *v1016; // x3
  CampaignInfoMaster_o *v1017; // x20
  const MethodInfo *v1018; // x3
  DialogMessageMaster_o *v1019; // x20
  const MethodInfo *v1020; // x3
  ServantIndividualityMaster_o *v1021; // x20
  const MethodInfo *v1022; // x3
  BoardMessageMaster_o *v1023; // x20
  const MethodInfo *v1024; // x3
  BoardMessageReleaseMaster_o *v1025; // x20
  const MethodInfo *v1026; // x3
  EventServantFatigueMaster_o *v1027; // x20
  const MethodInfo *v1028; // x3
  UserEventDeckMaster_o *v1029; // x20
  const MethodInfo *v1030; // x3
  EventTowerMaster_o *v1031; // x20
  const MethodInfo *v1032; // x3
  EventTowerRewardMaster_o *v1033; // x20
  const MethodInfo *v1034; // x3
  EventBulletinBoardMaster_o *v1035; // x20
  const MethodInfo *v1036; // x3
  EventBulletinBoardReleaseMaster_o *v1037; // x20
  const MethodInfo *v1038; // x3
  EventFactoryMaster_o *v1039; // x20
  const MethodInfo *v1040; // x3
  ShopGroupMaster_o *v1041; // x20
  const MethodInfo *v1042; // x3
  AuraEffectMaster_o *v1043; // x20
  const MethodInfo *v1044; // x3
  AuraEffectPosOverwriteMaster_o *v1045; // x20
  const MethodInfo *v1046; // x3
  UserEventMissionFixMaster_o *v1047; // x20
  const MethodInfo *v1048; // x3
  NotEndEventMissionFixMaster_o *v1049; // x20
  const MethodInfo *v1050; // x3
  EnemyMstMaster_o *v1051; // x20
  const MethodInfo *v1052; // x3
  EnemyMstBattleMaster_o *v1053; // x20
  const MethodInfo *v1054; // x3
  ServantSkillReleaseMaster_o *v1055; // x20
  const MethodInfo *v1056; // x3
  ServantPassiveSkillReleaseMaster_o *v1057; // x20
  const MethodInfo *v1058; // x3
  ServantTreasureDeviceReleaseMaster_o *v1059; // x20
  const MethodInfo *v1060; // x3
  MapGimmickReleaseMaster_o *v1061; // x20
  const MethodInfo *v1062; // x3
  CommandCodeMaster_o *v1063; // x20
  const MethodInfo *v1064; // x3
  ServantCommandCodeUnlockMaster_o *v1065; // x20
  const MethodInfo *v1066; // x3
  UserCommandCodeMaster_o *v1067; // x20
  const MethodInfo *v1068; // x3
  UserCommandCodeCollectionMaster_o *v1069; // x20
  const MethodInfo *v1070; // x3
  UserServantCommandCodeMaster_o *v1071; // x20
  const MethodInfo *v1072; // x3
  UserServantCommandCardMaster_o *v1073; // x20
  const MethodInfo *v1074; // x3
  CommandCardRankParamMaster_o *v1075; // x20
  const MethodInfo *v1076; // x3
  CommandCodeSkillMaster_o *v1077; // x20
  const MethodInfo *v1078; // x3
  CommandCodeSkillReleaseMaster_o *v1079; // x20
  const MethodInfo *v1080; // x3
  CommandCodeCommentMaster_o *v1081; // x20
  const MethodInfo *v1082; // x3
  EventStatusMaster_o *v1083; // x20
  const MethodInfo *v1084; // x3
  EventStatusQuestMaster_o *v1085; // x20
  const MethodInfo *v1086; // x3
  CommonRestrictionMaster_o *v1087; // x20
  const MethodInfo *v1088; // x3
  EventPointBuffMaster_o *v1089; // x20
  const MethodInfo *v1090; // x3
  UserFollowMaster_o *v1091; // x20
  const MethodInfo *v1092; // x3
  EventRewardGuideReleaseMaster_o *v1093; // x20
  const MethodInfo *v1094; // x3
  NpcServantEquipMaster_o *v1095; // x20
  const MethodInfo *v1096; // x3
  EventCampaignReleaseMaster_o *v1097; // x20
  const MethodInfo *v1098; // x3
  ServantMaterialFolderMaster_o *v1099; // x20
  const MethodInfo *v1100; // x3
  EventEquipSkillReleaseMaster_o *v1101; // x20
  const MethodInfo *v1102; // x3
  EventPointActivityMaster_o *v1103; // x20
  const MethodInfo *v1104; // x3
  FunctionCategoryMaster_o *v1105; // x20
  const MethodInfo *v1106; // x3
  QuestPickupMaster_o *v1107; // x20
  const MethodInfo *v1108; // x3
  EventUiMaster_o *v1109; // x20
  const MethodInfo *v1110; // x3
  EventUiReleaseMaster_o *v1111; // x20
  const MethodInfo *v1112; // x3
  EventUiValueMaster_o *v1113; // x20
  const MethodInfo *v1114; // x3
  EventConquestRewardMaster_o *v1115; // x20
  const MethodInfo *v1116; // x3
  NpcFollowerReleaseMaster_o *v1117; // x20
  const MethodInfo *v1118; // x3
  EventBonusFilterMaster_o *v1119; // x20
  const MethodInfo *v1120; // x3
  EventBonusFilterGroupInfoMaster_o *v1121; // x20
  const MethodInfo *v1122; // x3
  EventBonusFilterGroupMemberMaster_o *v1123; // x20
  const MethodInfo *v1124; // x3
  UserGachaExtraCountMaster_o *v1125; // x20
  const MethodInfo *v1126; // x3
  PrivilegeMaster_o *v1127; // x20
  const MethodInfo *v1128; // x3
  UserPrivilegeMaster_o *v1129; // x20
  const MethodInfo *v1130; // x3
  UserQuestRouteMaster_o *v1131; // x20
  const MethodInfo *v1132; // x3
  EventBossStatusUiMaster_o *v1133; // x20
  const MethodInfo *v1134; // x3
  CommonReleaseMaster_o *v1135; // x20
  const MethodInfo *v1136; // x3
  QuestSpotReleaseMaster_o *v1137; // x20
  const MethodInfo *v1138; // x3
  VoiceMaterialCondMaster_o *v1139; // x20
  const MethodInfo *v1140; // x3
  ClassRelationOverwriteMaster_o *v1141; // x20
  const MethodInfo *v1142; // x3
  EventGroupMaster_o *v1143; // x20
  const MethodInfo *v1144; // x3
  TotalBoxGachaMaster_o *v1145; // x20
  const MethodInfo *v1146; // x3
  ServantTreasureDeviceDamageMaster_o *v1147; // x20
  const MethodInfo *v1148; // x3
  UserEventServantFatigueMaster_o *v1149; // x20
  const MethodInfo *v1150; // x3
  EventRewardBgMaster_o *v1151; // x20
  const MethodInfo *v1152; // x3
  EventFatigueRecoveryMaster_o *v1153; // x20
  const MethodInfo *v1154; // x3
  EventBoostItemUsedMaster_o *v1155; // x20
  const MethodInfo *v1156; // x3
  StatusEffectPosOverwriteMaster_o *v1157; // x20
  const MethodInfo *v1158; // x3
  QuestPhaseDetailAddMaster_o *v1159; // x20
  const MethodInfo *v1160; // x3
  VoiceClosedMessageMaster_o *v1161; // x20
  const MethodInfo *v1162; // x3
  ReprintStageMaster_o *v1163; // x20
  const MethodInfo *v1164; // x3
  UserCombineExpMaster_o *v1165; // x20
  const MethodInfo *v1166; // x3
  EventBoardGameCellMaster_o *v1167; // x20
  const MethodInfo *v1168; // x3
  EventBoardGameTokenMaster_o *v1169; // x20
  const MethodInfo *v1170; // x3
  EventBoardGameTokenRewardMaster_o *v1171; // x20
  const MethodInfo *v1172; // x3
  UserEventBoardGameTokenMaster_o *v1173; // x20
  const MethodInfo *v1174; // x3
  ServantAnimationOverwriteMaster_o *v1175; // x20
  const MethodInfo *v1176; // x3
  OpeningMovieMaster_o *v1177; // x20
  const MethodInfo *v1178; // x3
  ServantLimitSpoilerProtectionMaster_o *v1179; // x20
  const MethodInfo *v1180; // x3
  PickupUserFollowerMaster_o *v1181; // x20
  const MethodInfo *v1182; // x3
  ServantCollectionMaster_o *v1183; // x20
  const MethodInfo *v1184; // x3
  GachaBehaviorMaster_o *v1185; // x20
  const MethodInfo *v1186; // x3
  EventQuestCooltimeMaster_o *v1187; // x20
  const MethodInfo *v1188; // x3
  UserEventQuestCooltimeMaster_o *v1189; // x20
  const MethodInfo *v1190; // x3
  BoostMaster_o *v1191; // x20
  const MethodInfo *v1192; // x3
  WarBoardMaster_o *v1193; // x20
  const MethodInfo *v1194; // x3
  WarBoardSquareMaster_o *v1195; // x20
  const MethodInfo *v1196; // x3
  WarBoardRoadMaster_o *v1197; // x20
  const MethodInfo *v1198; // x3
  WarBoardStageMaster_o *v1199; // x20
  const MethodInfo *v1200; // x3
  WarBoardActionPointMaster_o *v1201; // x20
  const MethodInfo *v1202; // x3
  WarBoardActionTrendMaster_o *v1203; // x20
  const MethodInfo *v1204; // x3
  WarBoardTacticalTrendMaster_o *v1205; // x20
  const MethodInfo *v1206; // x3
  WarBoardStageLayoutMaster_o *v1207; // x20
  const MethodInfo *v1208; // x3
  WarBoardStageNpcMaster_o *v1209; // x20
  const MethodInfo *v1210; // x3
  WarBoardStageWallMaster_o *v1211; // x20
  const MethodInfo *v1212; // x3
  WarBoardAIMaster_o *v1213; // x20
  const MethodInfo *v1214; // x3
  WarBoardRatingBaseMaster_o *v1215; // x20
  const MethodInfo *v1216; // x3
  WarBoardRatingOffsetMaster_o *v1217; // x20
  const MethodInfo *v1218; // x3
  WarBoardItemMaster_o *v1219; // x20
  const MethodInfo *v1220; // x3
  WarBoardTreasureMaster_o *v1221; // x20
  const MethodInfo *v1222; // x3
  WarBoardQuestMaster_o *v1223; // x20
  const MethodInfo *v1224; // x3
  WarBoardDataMaster_o *v1225; // x20
  const MethodInfo *v1226; // x3
  WarBoardIndividualityClassMaster_o *v1227; // x20
  const MethodInfo *v1228; // x3
  WarBoardActionTrendConditionMaster_o *v1229; // x20
  const MethodInfo *v1230; // x3
  WarBoardActionPointClassMaster_o *v1231; // x20
  const MethodInfo *v1232; // x3
  EventPanelMapMaster_o *v1233; // x20
  const MethodInfo *v1234; // x3
  EventPanelMapDetailMaster_o *v1235; // x20
  const MethodInfo *v1236; // x3
  EventPanelSpotMaster_o *v1237; // x20
  const MethodInfo *v1238; // x3
  EventPanelScanMaster_o *v1239; // x20
  const MethodInfo *v1240; // x3
  CommonConsumeMaster_o *v1241; // x20
  const MethodInfo *v1242; // x3
  UserEventMapMaster_o *v1243; // x20
  const MethodInfo *v1244; // x3
  UserEventSpotMaster_o *v1245; // x20
  const MethodInfo *v1246; // x3
  WarGroupMaster_o *v1247; // x20
  const MethodInfo *v1248; // x3
  ServantLimitImageMaster_o *v1249; // x20
  const MethodInfo *v1250; // x3
  FriendshipQuestDialogInfoMaster_o *v1251; // x20
  const MethodInfo *v1252; // x3
  QuestRestrictionInfoMaster_o *v1253; // x20
  const MethodInfo *v1254; // x3
  AssistMaster_o *v1255; // x20
  const MethodInfo *v1256; // x3
  WarBoardEffectMaster_o *v1257; // x20
  const MethodInfo *v1258; // x3
  WarBoardOnboardSkillMaster_o *v1259; // x20
  const MethodInfo *v1260; // x3
  BeforeBirthDayMaster_o *v1261; // x20
  const MethodInfo *v1262; // x3
  LoginQuestMaster_o *v1263; // x20
  const MethodInfo *v1264; // x3
  EventCombineCostumeMaster_o *v1265; // x20
  const MethodInfo *v1266; // x3
  WarBoardStagePieceDetailMaster_o *v1267; // x20
  const MethodInfo *v1268; // x3
  ServantTreasureDeviceAddMaster_o *v1269; // x20
  const MethodInfo *v1270; // x3
  SkillAddMaster_o *v1271; // x20
  const MethodInfo *v1272; // x3
  ServantLvDetailMaster_o *v1273; // x20
  const MethodInfo *v1274; // x3
  GachaAppendMaster_o *v1275; // x20
  const MethodInfo *v1276; // x3
  UserGachaDrawLogMaster_o *v1277; // x20
  const MethodInfo *v1278; // x3
  ServantAppendPassiveSkillMaster_o *v1279; // x20
  const MethodInfo *v1280; // x3
  UserServantAppendPassiveSkillMaster_o *v1281; // x20
  const MethodInfo *v1282; // x3
  UserServantAppendPassiveSkillLvMaster_o *v1283; // x20
  const MethodInfo *v1284; // x3
  SvtAppendPassiveSkillUnlockMaster_o *v1285; // x20
  const MethodInfo *v1286; // x3
  CombineAppendPassiveSkillMaster_o *v1287; // x20
  const MethodInfo *v1288; // x3
  SvtCoinMaster_o *v1289; // x20
  const MethodInfo *v1290; // x3
  UserSvtCoinMaster_o *v1291; // x20
  const MethodInfo *v1292; // x3
  ServantAddMaster_o *v1293; // x20
  const MethodInfo *v1294; // x3
  TreasureBoxMaster_o *v1295; // x20
  const MethodInfo *v1296; // x3
  TreasureBoxGiftMaster_o *v1297; // x20
  const MethodInfo *v1298; // x3
  TreasureBoxTalkMaster_o *v1299; // x20
  const MethodInfo *v1300; // x3
  UserEventExpeditionMaster_o *v1301; // x20
  const MethodInfo *v1302; // x3
  EventExpeditionMaster_o *v1303; // x20
  const MethodInfo *v1304; // x3
  EventExpeditionPieceMaster_o *v1305; // x20
  const MethodInfo *v1306; // x3
  EventRecipeMaster_o *v1307; // x20
  const MethodInfo *v1308; // x3
  EventRecipeGiftMaster_o *v1309; // x20
  const MethodInfo *v1310; // x3
  UserEventFortificationMaster_o *v1311; // x20
  const MethodInfo *v1312; // x3
  EventFortificationMaster_o *v1313; // x20
  const MethodInfo *v1314; // x3
  EventFortificationDetailMaster_o *v1315; // x20
  const MethodInfo *v1316; // x3
  EventFortificationSvtMaster_o *v1317; // x20
  const MethodInfo *v1318; // x3
  UserServantVoicePlayedMaster_o *v1319; // x20
  const MethodInfo *v1320; // x3
  UpdateProfileDialogInfoMaster_o *v1321; // x20
  const MethodInfo *v1322; // x3
  SvtMaterialTdMaster_o *v1323; // x20
  const MethodInfo *v1324; // x3
  BattleMasterImageMaster_o *v1325; // x20
  const MethodInfo *v1326; // x3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v1327; // x20
  const MethodInfo *v1328; // x3
  UserEventRandomMissionMaster_o *v1329; // x20
  const MethodInfo *v1330; // x3
  EventProgressValueMaster_o *v1331; // x20
  const MethodInfo *v1332; // x3
  SvtMultiPortraitMaster_o *v1333; // x20
  const MethodInfo *v1334; // x3
  EventRandomMissionMaster_o *v1335; // x20
  const MethodInfo *v1336; // x3
  UserGachaHistoryMaster_o *v1337; // x20
  const MethodInfo *v1338; // x3
  UserCoinRoomMaster_o *v1339; // x20
  const MethodInfo *v1340; // x3
  EventBuddyPointMaster_o *v1341; // x20
  const MethodInfo *v1342; // x3
  EventServantPointRankMaster_o *v1343; // x20
  const MethodInfo *v1344; // x3
  UserEventServantPointMaster_o *v1345; // x20
  const MethodInfo *v1346; // x3
  FieldMotionMaster_o *v1347; // x20
  const MethodInfo *v1348; // x3
  UserDeleteReservationMaster_o *v1349; // x20
  const MethodInfo *v1350; // x3
  ServantScriptMultipleMaster_o *v1351; // x20
  const MethodInfo *v1352; // x3
  EquipAddMaster_o *v1353; // x20
  const MethodInfo *v1354; // x3
  QuestReleaseOverwriteMaster_o *v1355; // x20
  const MethodInfo *v1356; // x3
  UserEventAlloutBattleMaster_o *v1357; // x20
  const MethodInfo *v1358; // x3
  QuestScriptMaterialNextMaster_o *v1359; // x20
  const MethodInfo *v1360; // x3
  EventDiggingMaster_o *v1361; // x20
  const MethodInfo *v1362; // x3
  EventDiggingBlockMaster_o *v1363; // x20
  const MethodInfo *v1364; // x3
  EventDiggingRewardMaster_o *v1365; // x20
  const MethodInfo *v1366; // x3
  UserEventDiggingMaster_o *v1367; // x20
  const MethodInfo *v1368; // x3
  BattleMessageMaster_o *v1369; // x20
  const MethodInfo *v1370; // x3
  BattleMessageGroupMaster_o *v1371; // x20
  const MethodInfo *v1372; // x3
  UserNpcSvtRecordMaster_o *v1373; // x20
  const MethodInfo *v1374; // x3
  BuffTypeDetailMaster_o *v1375; // x20
  const MethodInfo *v1376; // x3
  WarBoardMessageMaster_o *v1377; // x20
  const MethodInfo *v1378; // x3
  WarBoardPartySkillMaster_o *v1379; // x20
  const MethodInfo *v1380; // x3
  WarBoardMessageScriptMaster_o *v1381; // x20
  const MethodInfo *v1382; // x3
  WarQuestSelectionMaster_o *v1383; // x20
  const MethodInfo *v1384; // x3
  WarBoardStageDetailMaster_o *v1385; // x20
  const MethodInfo *v1386; // x3
  QuestScriptMaterialOverwriteMaster_o *v1387; // x20
  const MethodInfo *v1388; // x3
  QuestScriptBranchMaterialMaster_o *v1389; // x20
  const MethodInfo *v1390; // x3
  AdCheckPointMaster_o *v1391; // x20
  const MethodInfo *v1392; // x3
  GiftDetailMaster_o *v1393; // x20
  const MethodInfo *v1394; // x3
  CombineLimitGiftMaster_o *v1395; // x20
  const MethodInfo *v1396; // x3
  EventCooltimeRewardMaster_o *v1397; // x20
  const MethodInfo *v1398; // x3
  UserEventCooltimeRewardMaster_o *v1399; // x20
  const MethodInfo *v1400; // x3
  ClassBoardBaseMaster_o *v1401; // x20
  const MethodInfo *v1402; // x3
  ClassBoardLockMaster_o *v1403; // x20
  const MethodInfo *v1404; // x3
  ClassBoardSquareMaster_o *v1405; // x20
  const MethodInfo *v1406; // x3
  ClassBoardLineMaster_o *v1407; // x20
  const MethodInfo *v1408; // x3
  UserClassBoardSquareMaster_o *v1409; // x20
  const MethodInfo *v1410; // x3
  ServantCardAddMaster_o *v1411; // x20
  const MethodInfo *v1412; // x3
  MapLayerMaster_o *v1413; // x20
  const MethodInfo *v1414; // x3
  SpotLayerMaster_o *v1415; // x20
  const MethodInfo *v1416; // x3
  MapGimmickLayerMaster_o *v1417; // x20
  const MethodInfo *v1418; // x3
  EventDataLostBattleMaster_o *v1419; // x20
  const MethodInfo *v1420; // x3
  EventDataLostBattleResetMaster_o *v1421; // x20
  const MethodInfo *v1422; // x3
  UserEventDataLostMaster_o *v1423; // x20
  const MethodInfo *v1424; // x3
  QuestHintMaster_o *v1425; // x20
  const MethodInfo *v1426; // x3
  FuncTypeDetailMaster_o *v1427; // x20
  const MethodInfo *v1428; // x3
  BuffConvertMaster_o *v1429; // x20
  const MethodInfo *v1430; // x3
  SkillGroupMaster_o *v1431; // x20
  const MethodInfo *v1432; // x3
  SkillGroupOverwriteMaster_o *v1433; // x20
  const MethodInfo *v1434; // x3
  SkillIndividualityMaster_o *v1435; // x20
  const MethodInfo *v1436; // x3
  RestrictionBaseMaster_o *v1437; // x20
  const MethodInfo *v1438; // x3
  RestrictionSlotMaster_o *v1439; // x20
  const MethodInfo *v1440; // x3
  RestrictionSlotDetailMaster_o *v1441; // x20
  const MethodInfo *v1442; // x3
  RestrictionMessageMaster_o *v1443; // x20
  const MethodInfo *v1444; // x3
  RestrictionWholeMaster_o *v1445; // x20
  const MethodInfo *v1446; // x3
  FuncDispMaster_o *v1447; // x20
  const MethodInfo *v1448; // x3
  ClassBoardCommandSpellMaster_o *v1449; // x20
  const MethodInfo *v1450; // x3
  ClassBoardClassMaster_o *v1451; // x20
  const MethodInfo *v1452; // x3
  EventCommandAssistMaster_o *v1453; // x20
  const MethodInfo *v1454; // x3
  EventMissionGroupMaster_o *v1455; // x20
  const MethodInfo *v1456; // x3
  CombineLimitReleaseMaster_o *v1457; // x20
  const MethodInfo *v1458; // x3
  HeelPortraitMaster_o *v1459; // x20
  const MethodInfo *v1460; // x3
  UserHeelPortraitMaster_o *v1461; // x20
  const MethodInfo *v1462; // x3
  TreasureDeviceSequenceWeightMaster_o *v1463; // x20
  const MethodInfo *v1464; // x3
  NpcServantFollowerIndividualityMaster_o *v1465; // x20
  const MethodInfo *v1466; // x3
  GachaExtraGiftMaster_o *v1467; // x20
  const MethodInfo *v1468; // x3
  EventMuralMaster_o *v1469; // x20
  const MethodInfo *v1470; // x3
  ViewWaveEnemyMaster_o *v1471; // x20
  const MethodInfo *v1472; // x3
  BlankEarthSpotNavimenuMaster_o *v1473; // x20
  const MethodInfo *v1474; // x3
  BlankEarthGimmickMaster_o *v1475; // x20
  const MethodInfo *v1476; // x3
  TerminalOverwriteMaster_o *v1477; // x20
  const MethodInfo *v1478; // x3
  UserExchangeSvtMaster_o *v1479; // x20
  const MethodInfo *v1480; // x3
  WarBoardCommonReleaseMaster_o *v1481; // x20
  const MethodInfo *v1482; // x3
  WarBoardEventMaster_o *v1483; // x20
  const MethodInfo *v1484; // x3
  WarBoardEventScriptMaster_o *v1485; // x20
  const MethodInfo *v1486; // x3
  WarBoardStageBossMaster_o *v1487; // x20
  const MethodInfo *v1488; // x3
  WarBoardSquareIndexGroupMaster_o *v1489; // x20
  const MethodInfo *v1490; // x3
  WarBoardActionTrendGroupMaster_o *v1491; // x20
  const MethodInfo *v1492; // x3
  WarBoardRatingOffsetGroupMaster_o *v1493; // x20
  const MethodInfo *v1494; // x3
  WarBoardReinforcementsMaster_o *v1495; // x20
  const MethodInfo *v1496; // x3
  WarBoardStageReinforcementsMaster_o *v1497; // x20
  const MethodInfo *v1498; // x3
  WarBoardFutureActionTrendMaster_o *v1499; // x20
  const MethodInfo *v1500; // x3
  ServantProfilePushMaster_o *v1501; // x20
  const MethodInfo *v1502; // x3
  MapGimmickPathMaster_o *v1503; // x20
  const MethodInfo *v1504; // x3
  MapGimmickPathReleaseMaster_o *v1505; // x20
  const MethodInfo *v1506; // x3
  ServantOverwriteMaster_o *v1507; // x20
  const MethodInfo *v1508; // x3
  IndividualityPolicyMaster_o *v1509; // x20
  const MethodInfo *v1510; // x3
  IndividualityPersonalityMaster_o *v1511; // x20
  const MethodInfo *v1512; // x3
  AttriMaster_o *v1513; // x20
  const MethodInfo *v1514; // x3
  ServantVoicePatternMaster_o *v1515; // x20
  const MethodInfo *v1516; // x3
  UserGameCommonMaster_o *v1517; // x20
  const MethodInfo *v1518; // x3
  ServantPhotoMaster_o *v1519; // x20
  const MethodInfo *v1520; // x3
  MasterPhotoMaster_o *v1521; // x20
  const MethodInfo *v1522; // x3
  PhotoFrameMaster_o *v1523; // x20
  const MethodInfo *v1524; // x3
  WarMessageMaster_o *v1525; // x20
  const MethodInfo *v1526; // x3
  QuestAutoOrganizationAdjustMaster_o *v1527; // x20
  const MethodInfo *v1528; // x3
  ExcludeMotionMaster_o *v1529; // x20
  const MethodInfo *v1530; // x3
  UserInterruptionQuestMaster_o *v1531; // x20
  const MethodInfo *v1532; // x3
  ServantTransformMaster_o *v1533; // x20
  const MethodInfo *v1534; // x3
  MapUpdateScheduleMaster_o *v1535; // x20
  const MethodInfo *v1536; // x3
  QuestPhasePresentMaster_o *v1537; // x20
  const MethodInfo *v1538; // x3
  UserAccountLinkageMaster_o *v1539; // x20
  const MethodInfo *v1540; // x3
  MissionNaviTransitionMaster_o *v1541; // x20
  const MethodInfo *v1542; // x3
  MissionNaviQuestMaster_o *v1543; // x20
  const MethodInfo *v1544; // x3
  EventTradeGoodsMaster_o *v1545; // x20
  const MethodInfo *v1546; // x3
  EventTradeStoreMaster_o *v1547; // x20
  const MethodInfo *v1548; // x3
  EventTradePickupMaster_o *v1549; // x20
  const MethodInfo *v1550; // x3
  UserEventTradeMaster_o *v1551; // x20
  const MethodInfo *v1552; // x3
  PaymentHistoryMaster_o *v1553; // x20
  const MethodInfo *v1554; // x3
  UserExternalPaymentStoneMaster_o *v1555; // x20
  const MethodInfo *v1556; // x3
  QuestPhaseIndividualityMaster_o *v1557; // x20
  const MethodInfo *v1558; // x3
  ViewGachaFeaturedServantMaster_o *v1559; // x20
  const MethodInfo *v1560; // x3
  UserGachaPickupCollateralMaster_o *v1561; // x20
  const MethodInfo *v1562; // x3
  GachaPickupCollateralMaster_o *v1563; // x20
  const MethodInfo *v1564; // x3
  GachaPickupCollateralGroupMaster_o *v1565; // x20
  const MethodInfo *v1566; // x3
  BattlePointMaster_o *v1567; // x20
  const MethodInfo *v1568; // x3
  BattlePointPhaseMaster_o *v1569; // x20
  const MethodInfo *v1570; // x3
  ServantBattlePointMaster_o *v1571; // x20
  const MethodInfo *v1572; // x3
  EffectMovieMaster_o *v1573; // x20
  const MethodInfo *v1574; // x3
  PaymentLimitMaster_o *v1575; // x20
  const MethodInfo *v1576; // x3
  UserPaymentLimitMaster_o *v1577; // x20
  const MethodInfo *v1578; // x3
  RoadmapMaster_o *v1579; // x20
  const MethodInfo *v1580; // x3
  UserRecommendSupportMaster_o *v1581; // x20
  const MethodInfo *v1582; // x3
  RecommendSupportQuestMaster_o *v1583; // x20
  const MethodInfo *v1584; // x3
  RecommendAdviceMessageMaster_o *v1585; // x20
  const MethodInfo *v1586; // x3
  UserRecommendFollowerMaster_o *v1587; // x20
  const MethodInfo *v1588; // x3
  ItemDropEfficiencyMaster_o *v1589; // x20
  const MethodInfo *v1590; // x3
  BlankEarthGimmickAddMaster_o *v1591; // x20
  const MethodInfo *v1592; // x3
  WarReleaseMaster_o *v1593; // x20
  const MethodInfo *v1594; // x3
  SelectBonusBaseMaster_o *v1595; // x20
  const MethodInfo *v1596; // x3
  SelectBonusMaster_o *v1597; // x20
  const MethodInfo *v1598; // x3
  MyroomServantSpecialImageMaster_o *v1599; // x20
  const MethodInfo *v1600; // x3
  ShopResetMaster_o *v1601; // x20
  const MethodInfo *v1602; // x3
  NpcServantDisplayTypeDetailMaster_o *v1603; // x20
  const MethodInfo *v1604; // x3
  FriendshipServantMaster_o *v1605; // x20
  const MethodInfo *v1606; // x3
  ExchangeSvtCoinGivenNumMaster_o *v1607; // x20
  const MethodInfo *v1608; // x3
  ChaldeaGatePickupMaster_o *v1609; // x20
  const MethodInfo *v1610; // x3
  WarGroupIgnoreMaster_o *v1611; // x20
  const MethodInfo *v1612; // x3
  ImagePartsGroupMaster_o *v1613; // x20
  const MethodInfo *v1614; // x3
  UserImagePartsGroupMaster_o *v1615; // x20
  const MethodInfo *v1616; // x3
  MissionItemDisplayMaster_o *v1617; // x20
  const MethodInfo *v1618; // x3
  QuestUseItemGroupMaster_o *v1619; // x20
  const MethodInfo *v1620; // x3
  QuestUseItemPickupMaster_o *v1621; // x20
  const MethodInfo *v1622; // x3
  UserEventItemLinkSvtMaster_o *v1623; // x20
  const MethodInfo *v1624; // x3
  QuestHintOverwriteMaster_o *v1625; // x20
  const MethodInfo *v1626; // x3
  ReachedWaveInfoMaster_o *v1627; // x20
  const MethodInfo *v1628; // x3
  GalleryMaster_o *v1629; // x20
  const MethodInfo *v1630; // x3
  GalleryResourceMaster_o *v1631; // x20
  const MethodInfo *v1632; // x3
  ServantSkillAddMaster_o *v1633; // x20
  const MethodInfo *v1634; // x3
  GalleryFolderReleaseMaster_o *v1635; // x20
  const MethodInfo *v1636; // x3
  UserSvtFirstGetTimeMaster_o *v1637; // x20
  const MethodInfo *v1638; // x3
  QuestExtensionMaster_o *v1639; // x20
  const MethodInfo *v1640; // x3
  UserServantGrandMaster_o *v1641; // x20
  const MethodInfo *v1642; // x3
  GrandGraphMaster_o *v1643; // x20
  const MethodInfo *v1644; // x3
  GrandGraphDetailMaster_o *v1645; // x20
  const MethodInfo *v1646; // x3
  UserClassStatisticsMaster_o *v1647; // x20
  const MethodInfo *v1648; // x3
  EventEquipSkillPartsMaster_o *v1649; // x20
  const MethodInfo *v1650; // x3
  __int64 v1652; // x0

  if ( (byte_4B1C00A & 1) == 0 )
  {
    sub_1BCAFF8(&AccessaryMaster_TypeInfo, v1);
    sub_1BCAFF8(&AdCheckPointMaster_TypeInfo, v2);
    sub_1BCAFF8(&AiActMaster_TypeInfo, v3);
    sub_1BCAFF8(&AiFieldMaster_TypeInfo, v4);
    sub_1BCAFF8(&AiMaster_TypeInfo, v5);
    sub_1BCAFF8(&AreaMaster_TypeInfo, v6);
    sub_1BCAFF8(&AssistMaster_TypeInfo, v7);
    sub_1BCAFF8(&AttriMaster_TypeInfo, v8);
    sub_1BCAFF8(&AttriRelationMaster_TypeInfo, v9);
    sub_1BCAFF8(&AuraEffectMaster_TypeInfo, v10);
    sub_1BCAFF8(&AuraEffectPosOverwriteMaster_TypeInfo, v11);
    sub_1BCAFF8(&BankShopMaster_TypeInfo, v12);
    sub_1BCAFF8(&BannerAddMaster_TypeInfo, v13);
    sub_1BCAFF8(&BannerMaster_TypeInfo, v14);
    sub_1BCAFF8(&BattleBgMaster_TypeInfo, v15);
    sub_1BCAFF8(&BattleMasterImageMaster_TypeInfo, v16);
    sub_1BCAFF8(&BattleMaster_TypeInfo, v17);
    sub_1BCAFF8(&BattleMessageGroupMaster_TypeInfo, v18);
    sub_1BCAFF8(&BattleMessageMaster_TypeInfo, v19);
    sub_1BCAFF8(&BattlePointMaster_TypeInfo, v20);
    sub_1BCAFF8(&BattlePointPhaseMaster_TypeInfo, v21);
    sub_1BCAFF8(&BeforeBirthDayMaster_TypeInfo, v22);
    sub_1BCAFF8(&BgmMaster_TypeInfo, v23);
    sub_1BCAFF8(&BgmReleaseMaster_TypeInfo, v24);
    sub_1BCAFF8(&BlankEarthGimmickAddMaster_TypeInfo, v25);
    sub_1BCAFF8(&BlankEarthGimmickMaster_TypeInfo, v26);
    sub_1BCAFF8(&BlankEarthSpotAddMaster_TypeInfo, v27);
    sub_1BCAFF8(&BlankEarthSpotMaster_TypeInfo, v28);
    sub_1BCAFF8(&BlankEarthSpotNavimenuMaster_TypeInfo, v29);
    sub_1BCAFF8(&BoardMessageMaster_TypeInfo, v30);
    sub_1BCAFF8(&BoardMessageReleaseMaster_TypeInfo, v31);
    sub_1BCAFF8(&BoostMaster_TypeInfo, v32);
    sub_1BCAFF8(&BoxGachaBaseDetailMaster_TypeInfo, v33);
    sub_1BCAFF8(&BoxGachaBaseMaster_TypeInfo, v34);
    sub_1BCAFF8(&BoxGachaHistoryMaster_TypeInfo, v35);
    sub_1BCAFF8(&BoxGachaMaster_TypeInfo, v36);
    sub_1BCAFF8(&BoxGachaTalkMaster_TypeInfo, v37);
    sub_1BCAFF8(&BuffConvertMaster_TypeInfo, v38);
    sub_1BCAFF8(&BuffMaster_TypeInfo, v39);
    sub_1BCAFF8(&BuffTypeDetailMaster_TypeInfo, v40);
    sub_1BCAFF8(&CampaignInfoMaster_TypeInfo, v41);
    sub_1BCAFF8(&CardMaster_TypeInfo, v42);
    sub_1BCAFF8(&ChaldeaGatePickupMaster_TypeInfo, v43);
    sub_1BCAFF8(&ClassBoardBaseMaster_TypeInfo, v44);
    sub_1BCAFF8(&ClassBoardClassMaster_TypeInfo, v45);
    sub_1BCAFF8(&ClassBoardCommandSpellMaster_TypeInfo, v46);
    sub_1BCAFF8(&ClassBoardLineMaster_TypeInfo, v47);
    sub_1BCAFF8(&ClassBoardLockMaster_TypeInfo, v48);
    sub_1BCAFF8(&ClassBoardSquareMaster_TypeInfo, v49);
    sub_1BCAFF8(&ClassRelationMaster_TypeInfo, v50);
    sub_1BCAFF8(&ClassRelationOverwriteMaster_TypeInfo, v51);
    sub_1BCAFF8(&ClosedMessageMaster_TypeInfo, v52);
    sub_1BCAFF8(&CombineAppendPassiveSkillMaster_TypeInfo, v53);
    sub_1BCAFF8(&CombineCostumeMaster_TypeInfo, v54);
    sub_1BCAFF8(&CombineLimitGiftMaster_TypeInfo, v55);
    sub_1BCAFF8(&CombineLimitMaster_TypeInfo, v56);
    sub_1BCAFF8(&CombineLimitReleaseMaster_TypeInfo, v57);
    sub_1BCAFF8(&CombineMaster_TypeInfo, v58);
    sub_1BCAFF8(&CombineMaterialMaster_TypeInfo, v59);
    sub_1BCAFF8(&CombineQpMaster_TypeInfo, v60);
    sub_1BCAFF8(&CombineQpSvtEquipMaster_TypeInfo, v61);
    sub_1BCAFF8(&CombineSkillMaster_TypeInfo, v62);
    sub_1BCAFF8(&CombineTdMaster_TypeInfo, v63);
    sub_1BCAFF8(&CommandCardRankParamMaster_TypeInfo, v64);
    sub_1BCAFF8(&CommandCodeCommentMaster_TypeInfo, v65);
    sub_1BCAFF8(&CommandCodeMaster_TypeInfo, v66);
    sub_1BCAFF8(&CommandCodeSkillMaster_TypeInfo, v67);
    sub_1BCAFF8(&CommandCodeSkillReleaseMaster_TypeInfo, v68);
    sub_1BCAFF8(&CommandSpellMaster_TypeInfo, v69);
    sub_1BCAFF8(&CommonConsumeMaster_TypeInfo, v70);
    sub_1BCAFF8(&CommonReleaseMaster_TypeInfo, v71);
    sub_1BCAFF8(&CommonRestrictionMaster_TypeInfo, v72);
    sub_1BCAFF8(&CompleteMissionMaster_TypeInfo, v73);
    sub_1BCAFF8(&ConstantLongMaster_TypeInfo, v74);
    sub_1BCAFF8(&ConstantMaster_TypeInfo, v75);
    sub_1BCAFF8(&ConstantStrMaster_TypeInfo, v76);
    sub_1BCAFF8(&CvMaster_TypeInfo, v77);
    sub_1BCAFF8(&DataMasterBase___TypeInfo, v78);
    sub_1BCAFF8(&DialogMessageMaster_TypeInfo, v79);
    sub_1BCAFF8(&EffectMaster_TypeInfo, v80);
    sub_1BCAFF8(&EffectMovieMaster_TypeInfo, v81);
    sub_1BCAFF8(&EnemyMstBattleMaster_TypeInfo, v82);
    sub_1BCAFF8(&EnemyMstMaster_TypeInfo, v83);
    sub_1BCAFF8(&EquipAddMaster_TypeInfo, v84);
    sub_1BCAFF8(&EquipExpMaster_TypeInfo, v85);
    sub_1BCAFF8(&EquipImageMaster_TypeInfo, v86);
    sub_1BCAFF8(&EquipMaster_TypeInfo, v87);
    sub_1BCAFF8(&EquipSkillMaster_TypeInfo, v88);
    sub_1BCAFF8(&EventAddMaster_TypeInfo, v89);
    sub_1BCAFF8(&EventBoardGameCellMaster_TypeInfo, v90);
    sub_1BCAFF8(&EventBoardGameTokenMaster_TypeInfo, v91);
    sub_1BCAFF8(&EventBoardGameTokenRewardMaster_TypeInfo, v92);
    sub_1BCAFF8(&EventBonusFilterGroupInfoMaster_TypeInfo, v93);
    sub_1BCAFF8(&EventBonusFilterGroupMemberMaster_TypeInfo, v94);
    sub_1BCAFF8(&EventBonusFilterMaster_TypeInfo, v95);
    sub_1BCAFF8(&EventBoostItemUsedMaster_TypeInfo, v96);
    sub_1BCAFF8(&EventBossStatusUiMaster_TypeInfo, v97);
    sub_1BCAFF8(&EventBuddyPointMaster_TypeInfo, v98);
    sub_1BCAFF8(&EventBulletinBoardMaster_TypeInfo, v99);
    sub_1BCAFF8(&EventBulletinBoardReleaseMaster_TypeInfo, v100);
    sub_1BCAFF8(&EventCampaignMaster_TypeInfo, v101);
    sub_1BCAFF8(&EventCampaignReleaseMaster_TypeInfo, v102);
    sub_1BCAFF8(&EventCombineCostumeMaster_TypeInfo, v103);
    sub_1BCAFF8(&EventCombineMaster_TypeInfo, v104);
    sub_1BCAFF8(&EventCommandAssistMaster_TypeInfo, v105);
    sub_1BCAFF8(&EventConquestRewardMaster_TypeInfo, v106);
    sub_1BCAFF8(&EventCooltimeRewardMaster_TypeInfo, v107);
    sub_1BCAFF8(&EventDataLostBattleMaster_TypeInfo, v108);
    sub_1BCAFF8(&EventDataLostBattleResetMaster_TypeInfo, v109);
    sub_1BCAFF8(&EventDetailMaster_TypeInfo, v110);
    sub_1BCAFF8(&EventDiggingBlockMaster_TypeInfo, v111);
    sub_1BCAFF8(&EventDiggingMaster_TypeInfo, v112);
    sub_1BCAFF8(&EventDiggingRewardMaster_TypeInfo, v113);
    sub_1BCAFF8(&EventEquipSkillPartsMaster_TypeInfo, v114);
    sub_1BCAFF8(&EventEquipSkillReleaseMaster_TypeInfo, v115);
    sub_1BCAFF8(&EventExpeditionMaster_TypeInfo, v116);
    sub_1BCAFF8(&EventExpeditionPieceMaster_TypeInfo, v117);
    sub_1BCAFF8(&EventFactoryMaster_TypeInfo, v118);
    sub_1BCAFF8(&EventFatigueRecoveryMaster_TypeInfo, v119);
    sub_1BCAFF8(&EventFilterMaster_TypeInfo, v120);
    sub_1BCAFF8(&EventFortificationDetailMaster_TypeInfo, v121);
    sub_1BCAFF8(&EventFortificationMaster_TypeInfo, v122);
    sub_1BCAFF8(&EventFortificationSvtMaster_TypeInfo, v123);
    sub_1BCAFF8(&EventGroupMaster_TypeInfo, v124);
    sub_1BCAFF8(&EventItemDisplayGroupMaster_TypeInfo, v125);
    sub_1BCAFF8(&EventItemDisplayMaster_TypeInfo, v126);
    sub_1BCAFF8(&EventItemDisplayReleaseMaster_TypeInfo, v127);
    sub_1BCAFF8(&EventLocationCampaignMaster_TypeInfo, v128);
    sub_1BCAFF8(&EventMaster_TypeInfo, v129);
    sub_1BCAFF8(&EventMissionActionAddMaster_TypeInfo, v130);
    sub_1BCAFF8(&EventMissionActionMaster_TypeInfo, v131);
    sub_1BCAFF8(&EventMissionAddMaster_TypeInfo, v132);
    sub_1BCAFF8(&EventMissionCondDetailMaster_TypeInfo, v133);
    sub_1BCAFF8(&EventMissionConditionMaster_TypeInfo, v134);
    sub_1BCAFF8(&EventMissionGroupMaster_TypeInfo, v135);
    sub_1BCAFF8(&EventMissionMaster_TypeInfo, v136);
    sub_1BCAFF8(&EventMuralMaster_TypeInfo, v137);
    sub_1BCAFF8(&EventPanelMapDetailMaster_TypeInfo, v138);
    sub_1BCAFF8(&EventPanelMapMaster_TypeInfo, v139);
    sub_1BCAFF8(&EventPanelScanMaster_TypeInfo, v140);
    sub_1BCAFF8(&EventPanelSpotMaster_TypeInfo, v141);
    sub_1BCAFF8(&EventPointActivityMaster_TypeInfo, v142);
    sub_1BCAFF8(&EventPointBuffMaster_TypeInfo, v143);
    sub_1BCAFF8(&EventPointGroupAddMaster_TypeInfo, v144);
    sub_1BCAFF8(&EventPointGroupMaster_TypeInfo, v145);
    sub_1BCAFF8(&EventPointMaster_TypeInfo, v146);
    sub_1BCAFF8(&EventPointUpperMaster_TypeInfo, v147);
    sub_1BCAFF8(&EventPointUpperReleaseMaster_TypeInfo, v148);
    sub_1BCAFF8(&EventProgressValueMaster_TypeInfo, v149);
    sub_1BCAFF8(&EventQuestCooltimeMaster_TypeInfo, v150);
    sub_1BCAFF8(&EventQuestMaster_TypeInfo, v151);
    sub_1BCAFF8(&EventRaceMaster_TypeInfo, v152);
    sub_1BCAFF8(&EventRaceResultMaster_TypeInfo, v153);
    sub_1BCAFF8(&EventRaidMaster_TypeInfo, v154);
    sub_1BCAFF8(&EventRandomMissionMaster_TypeInfo, v155);
    sub_1BCAFF8(&EventRecipeGiftMaster_TypeInfo, v156);
    sub_1BCAFF8(&EventRecipeMaster_TypeInfo, v157);
    sub_1BCAFF8(&EventRewardBgMaster_TypeInfo, v158);
    sub_1BCAFF8(&EventRewardExtraMaster_TypeInfo, v159);
    sub_1BCAFF8(&EventRewardGuideReleaseMaster_TypeInfo, v160);
    sub_1BCAFF8(&EventRewardMaster_TypeInfo, v161);
    sub_1BCAFF8(&EventRewardSceneMaster_TypeInfo, v162);
    sub_1BCAFF8(&EventRewardSceneReleaseMaster_TypeInfo, v163);
    sub_1BCAFF8(&EventRewardSetMaster_TypeInfo, v164);
    sub_1BCAFF8(&EventScriptMaster_TypeInfo, v165);
    sub_1BCAFF8(&EventScriptReleaseMaster_TypeInfo, v166);
    sub_1BCAFF8(&EventServantFatigueMaster_TypeInfo, v167);
    sub_1BCAFF8(&EventServantMaster_TypeInfo, v168);
    sub_1BCAFF8(&EventServantPointRankMaster_TypeInfo, v169);
    sub_1BCAFF8(&EventStatusMaster_TypeInfo, v170);
    sub_1BCAFF8(&EventStatusQuestMaster_TypeInfo, v171);
    sub_1BCAFF8(&EventSuperBossMaster_TypeInfo, v172);
    sub_1BCAFF8(&EventTowerMaster_TypeInfo, v173);
    sub_1BCAFF8(&EventTowerRewardMaster_TypeInfo, v174);
    sub_1BCAFF8(&EventTradeGoodsMaster_TypeInfo, v175);
    sub_1BCAFF8(&EventTradePickupMaster_TypeInfo, v176);
    sub_1BCAFF8(&EventTradeStoreMaster_TypeInfo, v177);
    sub_1BCAFF8(&EventTutorialCondMaster_TypeInfo, v178);
    sub_1BCAFF8(&EventTutorialMaster_TypeInfo, v179);
    sub_1BCAFF8(&EventUiMaster_TypeInfo, v180);
    sub_1BCAFF8(&EventUiReleaseMaster_TypeInfo, v181);
    sub_1BCAFF8(&EventUiValueMaster_TypeInfo, v182);
    sub_1BCAFF8(&EventVoicePlayMaster_TypeInfo, v183);
    sub_1BCAFF8(&ExchangeSvtCoinGivenNumMaster_TypeInfo, v184);
    sub_1BCAFF8(&ExcludeMotionMaster_TypeInfo, v185);
    sub_1BCAFF8(&FieldMotionMaster_TypeInfo, v186);
    sub_1BCAFF8(&FriendshipMaster_TypeInfo, v187);
    sub_1BCAFF8(&FriendshipQuestDialogInfoMaster_TypeInfo, v188);
    sub_1BCAFF8(&FriendshipServantMaster_TypeInfo, v189);
    sub_1BCAFF8(&FuncDispMaster_TypeInfo, v190);
    sub_1BCAFF8(&FuncTypeDetailMaster_TypeInfo, v191);
    sub_1BCAFF8(&FunctionCategoryMaster_TypeInfo, v192);
    sub_1BCAFF8(&FunctionGroupMaster_TypeInfo, v193);
    sub_1BCAFF8(&FunctionMaster_TypeInfo, v194);
    sub_1BCAFF8(&GachaAdjustAddMaster_TypeInfo, v195);
    sub_1BCAFF8(&GachaAppendMaster_TypeInfo, v196);
    sub_1BCAFF8(&GachaBaseCollateralMaster_TypeInfo, v197);
    sub_1BCAFF8(&GachaBehaviorMaster_TypeInfo, v198);
    sub_1BCAFF8(&GachaBonusSelectLineupMaster_TypeInfo, v199);
    sub_1BCAFF8(&GachaBonusSelectMaster_TypeInfo, v200);
    sub_1BCAFF8(&GachaDetailMaster_TypeInfo, v201);
    sub_1BCAFF8(&GachaExtraGiftMaster_TypeInfo, v202);
    sub_1BCAFF8(&GachaGroupMaster_TypeInfo, v203);
    sub_1BCAFF8(&GachaImageMaster_TypeInfo, v204);
    sub_1BCAFF8(&GachaMaster_TypeInfo, v205);
    sub_1BCAFF8(&GachaPickupCollateralGroupMaster_TypeInfo, v206);
    sub_1BCAFF8(&GachaPickupCollateralMaster_TypeInfo, v207);
    sub_1BCAFF8(&GachaReleaseMaster_TypeInfo, v208);
    sub_1BCAFF8(&GachaStoryAdjustMaster_TypeInfo, v209);
    sub_1BCAFF8(&GachaSubMaster_TypeInfo, v210);
    sub_1BCAFF8(&GachaTicketMaster_TypeInfo, v211);
    sub_1BCAFF8(&GalleryFolderReleaseMaster_TypeInfo, v212);
    sub_1BCAFF8(&GalleryMaster_TypeInfo, v213);
    sub_1BCAFF8(&GalleryResourceMaster_TypeInfo, v214);
    sub_1BCAFF8(&GiftAddMaster_TypeInfo, v215);
    sub_1BCAFF8(&GiftDetailMaster_TypeInfo, v216);
    sub_1BCAFF8(&GiftMaster_TypeInfo, v217);
    sub_1BCAFF8(&GrandGraphDetailMaster_TypeInfo, v218);
    sub_1BCAFF8(&GrandGraphMaster_TypeInfo, v219);
    sub_1BCAFF8(&GuideMaster_TypeInfo, v220);
    sub_1BCAFF8(&HeelPortraitMaster_TypeInfo, v221);
    sub_1BCAFF8(&IllustratorMaster_TypeInfo, v222);
    sub_1BCAFF8(&ImagePartsGroupMaster_TypeInfo, v223);
    sub_1BCAFF8(&IndividualityPersonalityMaster_TypeInfo, v224);
    sub_1BCAFF8(&IndividualityPolicyMaster_TypeInfo, v225);
    sub_1BCAFF8(&ItemDropEfficiencyMaster_TypeInfo, v226);
    sub_1BCAFF8(&ItemMaster_TypeInfo, v227);
    sub_1BCAFF8(&ItemSelectMaster_TypeInfo, v228);
    sub_1BCAFF8(&LoginQuestMaster_TypeInfo, v229);
    sub_1BCAFF8(&MapButtonMaster_TypeInfo, v230);
    sub_1BCAFF8(&MapCondMaster_TypeInfo, v231);
    sub_1BCAFF8(&MapGimmickLayerMaster_TypeInfo, v232);
    sub_1BCAFF8(&MapGimmickMaster_TypeInfo, v233);
    sub_1BCAFF8(&MapGimmickPathMaster_TypeInfo, v234);
    sub_1BCAFF8(&MapGimmickPathReleaseMaster_TypeInfo, v235);
    sub_1BCAFF8(&MapGimmickReleaseMaster_TypeInfo, v236);
    sub_1BCAFF8(&MapLayerMaster_TypeInfo, v237);
    sub_1BCAFF8(&MapMaster_TypeInfo, v238);
    sub_1BCAFF8(&MapUpdateScheduleMaster_TypeInfo, v239);
    sub_1BCAFF8(&MasterPhotoMaster_TypeInfo, v240);
    sub_1BCAFF8(&MaterialFolderMaster_TypeInfo, v241);
    sub_1BCAFF8(&MissionItemDisplayMaster_TypeInfo, v242);
    sub_1BCAFF8(&MissionNaviQuestMaster_TypeInfo, v243);
    sub_1BCAFF8(&MissionNaviTransitionMaster_TypeInfo, v244);
    sub_1BCAFF8(&MstMissionDisplayInfoMaster_TypeInfo, v245);
    sub_1BCAFF8(&MstMissionMaster_TypeInfo, v246);
    sub_1BCAFF8(&MyRoomAddMaster_TypeInfo, v247);
    sub_1BCAFF8(&MyroomServantSpecialImageMaster_TypeInfo, v248);
    sub_1BCAFF8(&NewsMaster_TypeInfo, v249);
    sub_1BCAFF8(&NotEndEventMissionFixMaster_TypeInfo, v250);
    sub_1BCAFF8(&NpcFollowerMaster_TypeInfo, v251);
    sub_1BCAFF8(&NpcFollowerReleaseMaster_TypeInfo, v252);
    sub_1BCAFF8(&NpcServantDisplayTypeDetailMaster_TypeInfo, v253);
    sub_1BCAFF8(&NpcServantEquipMaster_TypeInfo, v254);
    sub_1BCAFF8(&NpcServantFollowerIndividualityMaster_TypeInfo, v255);
    sub_1BCAFF8(&NpcServantFollowerMaster_TypeInfo, v256);
    sub_1BCAFF8(&OpeningMovieMaster_TypeInfo, v257);
    sub_1BCAFF8(&OtherUserGameMaster_TypeInfo, v258);
    sub_1BCAFF8(&PartialMaintenanceMaster_TypeInfo, v259);
    sub_1BCAFF8(&PaymentHistoryMaster_TypeInfo, v260);
    sub_1BCAFF8(&PaymentLimitMaster_TypeInfo, v261);
    sub_1BCAFF8(&PhotoFrameMaster_TypeInfo, v262);
    sub_1BCAFF8(&PickupUserFollowerMaster_TypeInfo, v263);
    sub_1BCAFF8(&PrivilegeMaster_TypeInfo, v264);
    sub_1BCAFF8(&QuestAddMaster_TypeInfo, v265);
    sub_1BCAFF8(&QuestAutoOrganizationAdjustMaster_TypeInfo, v266);
    sub_1BCAFF8(&QuestBehaviorMaster_TypeInfo, v267);
    sub_1BCAFF8(&QuestConsumeItemMaster_TypeInfo, v268);
    sub_1BCAFF8(&QuestDateRangeMaster_TypeInfo, v269);
    sub_1BCAFF8(&QuestExtensionMaster_TypeInfo, v270);
    sub_1BCAFF8(&QuestGroupMaster_TypeInfo, v271);
    sub_1BCAFF8(&QuestHintMaster_TypeInfo, v272);
    sub_1BCAFF8(&QuestHintOverwriteMaster_TypeInfo, v273);
    sub_1BCAFF8(&QuestMaster_TypeInfo, v274);
    sub_1BCAFF8(&QuestMessageMaster_TypeInfo, v275);
    sub_1BCAFF8(&QuestPhaseDetailAddMaster_TypeInfo, v276);
    sub_1BCAFF8(&QuestPhaseDetailMaster_TypeInfo, v277);
    sub_1BCAFF8(&QuestPhaseIndividualityMaster_TypeInfo, v278);
    sub_1BCAFF8(&QuestPhaseMaster_TypeInfo, v279);
    sub_1BCAFF8(&QuestPhasePresentMaster_TypeInfo, v280);
    sub_1BCAFF8(&QuestPickupMaster_TypeInfo, v281);
    sub_1BCAFF8(&QuestRacePointMaster_TypeInfo, v282);
    sub_1BCAFF8(&QuestRandomGroupMaster_TypeInfo, v283);
    sub_1BCAFF8(&QuestReleaseMaster_TypeInfo, v284);
    sub_1BCAFF8(&QuestReleaseOverwriteMaster_TypeInfo, v285);
    sub_1BCAFF8(&QuestResetMaster_TypeInfo, v286);
    sub_1BCAFF8(&QuestRestrictionInfoMaster_TypeInfo, v287);
    sub_1BCAFF8(&QuestRestrictionMaster_TypeInfo, v288);
    sub_1BCAFF8(&QuestScriptBranchMaterialMaster_TypeInfo, v289);
    sub_1BCAFF8(&QuestScriptMaster_TypeInfo, v290);
    sub_1BCAFF8(&QuestScriptMaterialNextMaster_TypeInfo, v291);
    sub_1BCAFF8(&QuestScriptMaterialOverwriteMaster_TypeInfo, v292);
    sub_1BCAFF8(&QuestScriptReleaseMaster_TypeInfo, v293);
    sub_1BCAFF8(&QuestSpotReleaseMaster_TypeInfo, v294);
    sub_1BCAFF8(&QuestUseItemGroupMaster_TypeInfo, v295);
    sub_1BCAFF8(&QuestUseItemPickupMaster_TypeInfo, v296);
    sub_1BCAFF8(&ReachedWaveInfoMaster_TypeInfo, v297);
    sub_1BCAFF8(&RecommendAdviceMessageMaster_TypeInfo, v298);
    sub_1BCAFF8(&RecommendSupportQuestMaster_TypeInfo, v299);
    sub_1BCAFF8(&RecoverMaster_TypeInfo, v300);
    sub_1BCAFF8(&ReprintStageMaster_TypeInfo, v301);
    sub_1BCAFF8(&RestrictionBaseMaster_TypeInfo, v302);
    sub_1BCAFF8(&RestrictionMaster_TypeInfo, v303);
    sub_1BCAFF8(&RestrictionMessageMaster_TypeInfo, v304);
    sub_1BCAFF8(&RestrictionSlotDetailMaster_TypeInfo, v305);
    sub_1BCAFF8(&RestrictionSlotMaster_TypeInfo, v306);
    sub_1BCAFF8(&RestrictionWholeMaster_TypeInfo, v307);
    sub_1BCAFF8(&RoadmapMaster_TypeInfo, v308);
    sub_1BCAFF8(&SelectBonusBaseMaster_TypeInfo, v309);
    sub_1BCAFF8(&SelectBonusMaster_TypeInfo, v310);
    sub_1BCAFF8(&ServantAddMaster_TypeInfo, v311);
    sub_1BCAFF8(&ServantAnimationOverwriteMaster_TypeInfo, v312);
    sub_1BCAFF8(&ServantAppendPassiveSkillMaster_TypeInfo, v313);
    sub_1BCAFF8(&ServantBattlePointMaster_TypeInfo, v314);
    sub_1BCAFF8(&ServantCardAddMaster_TypeInfo, v315);
    sub_1BCAFF8(&ServantCardMaster_TypeInfo, v316);
    sub_1BCAFF8(&ServantChangeMaster_TypeInfo, v317);
    sub_1BCAFF8(&ServantClassMaster_TypeInfo, v318);
    sub_1BCAFF8(&ServantCollectionMaster_TypeInfo, v319);
    sub_1BCAFF8(&ServantCommandCodeUnlockMaster_TypeInfo, v320);
    sub_1BCAFF8(&ServantCommentAddMaster_TypeInfo, v321);
    sub_1BCAFF8(&ServantCommentMaster_TypeInfo, v322);
    sub_1BCAFF8(&ServantCostumeMaster_TypeInfo, v323);
    sub_1BCAFF8(&ServantCostumeReleaseMaster_TypeInfo, v324);
    sub_1BCAFF8(&ServantExceedMaster_TypeInfo, v325);
    sub_1BCAFF8(&ServantExpMaster_TypeInfo, v326);
    sub_1BCAFF8(&ServantFilterMaster_TypeInfo, v327);
    sub_1BCAFF8(&ServantFlagMaster_TypeInfo, v328);
    sub_1BCAFF8(&ServantFlagReleaseMaster_TypeInfo, v329);
    sub_1BCAFF8(&ServantGroupMaster_TypeInfo, v330);
    sub_1BCAFF8(&ServantIndividualityMaster_TypeInfo, v331);
    sub_1BCAFF8(&ServantLimitAddMaster_TypeInfo, v332);
    sub_1BCAFF8(&ServantLimitImageMaster_TypeInfo, v333);
    sub_1BCAFF8(&ServantLimitMaster_TypeInfo, v334);
    sub_1BCAFF8(&ServantLimitSpoilerProtectionMaster_TypeInfo, v335);
    sub_1BCAFF8(&ServantLvDetailMaster_TypeInfo, v336);
    sub_1BCAFF8(&ServantMaster_TypeInfo, v337);
    sub_1BCAFF8(&ServantMaterialFolderMaster_TypeInfo, v338);
    sub_1BCAFF8(&ServantOverwriteMaster_TypeInfo, v339);
    sub_1BCAFF8(&ServantPassiveSkillMaster_TypeInfo, v340);
    sub_1BCAFF8(&ServantPassiveSkillReleaseMaster_TypeInfo, v341);
    sub_1BCAFF8(&ServantPhotoMaster_TypeInfo, v342);
    sub_1BCAFF8(&ServantProfileMaster_TypeInfo, v343);
    sub_1BCAFF8(&ServantProfilePushMaster_TypeInfo, v344);
    sub_1BCAFF8(&ServantRarityMaster_TypeInfo, v345);
    sub_1BCAFF8(&ServantScriptAddMaster_TypeInfo, v346);
    sub_1BCAFF8(&ServantScriptMaster_TypeInfo, v347);
    sub_1BCAFF8(&ServantScriptMultipleMaster_TypeInfo, v348);
    sub_1BCAFF8(&ServantSkillAddMaster_TypeInfo, v349);
    sub_1BCAFF8(&ServantSkillMaster_TypeInfo, v350);
    sub_1BCAFF8(&ServantSkillReleaseMaster_TypeInfo, v351);
    sub_1BCAFF8(&ServantTransformMaster_TypeInfo, v352);
    sub_1BCAFF8(&ServantTreasureDeviceAddMaster_TypeInfo, v353);
    sub_1BCAFF8(&ServantTreasureDeviceDamageMaster_TypeInfo, v354);
    sub_1BCAFF8(&ServantTreasureDeviceReleaseMaster_TypeInfo, v355);
    sub_1BCAFF8(&ServantTreasureDvcMaster_TypeInfo, v356);
    sub_1BCAFF8(&ServantVoiceMaster_TypeInfo, v357);
    sub_1BCAFF8(&ServantVoicePatternMaster_TypeInfo, v358);
    sub_1BCAFF8(&ServantVoiceRelationMaster_TypeInfo, v359);
    sub_1BCAFF8(&SetItemMaster_TypeInfo, v360);
    sub_1BCAFF8(&ShopActionMaster_TypeInfo, v361);
    sub_1BCAFF8(&ShopDetailMaster_TypeInfo, v362);
    sub_1BCAFF8(&ShopGroupMaster_TypeInfo, v363);
    sub_1BCAFF8(&ShopMaster_TypeInfo, v364);
    sub_1BCAFF8(&ShopReleaseMaster_TypeInfo, v365);
    sub_1BCAFF8(&ShopResetMaster_TypeInfo, v366);
    sub_1BCAFF8(&ShopScriptMaster_TypeInfo, v367);
    sub_1BCAFF8(&SkillAddMaster_TypeInfo, v368);
    sub_1BCAFF8(&SkillDetailMaster_TypeInfo, v369);
    sub_1BCAFF8(&SkillGroupMaster_TypeInfo, v370);
    sub_1BCAFF8(&SkillGroupOverwriteMaster_TypeInfo, v371);
    sub_1BCAFF8(&SkillIndividualityMaster_TypeInfo, v372);
    sub_1BCAFF8(&SkillLvMaster_TypeInfo, v373);
    sub_1BCAFF8(&SkillMaster_TypeInfo, v374);
    sub_1BCAFF8(&SpotAddMaster_TypeInfo, v375);
    sub_1BCAFF8(&SpotImageMaster_TypeInfo, v376);
    sub_1BCAFF8(&SpotLayerMaster_TypeInfo, v377);
    sub_1BCAFF8(&SpotMaster_TypeInfo, v378);
    sub_1BCAFF8(&SpotPathMaster_TypeInfo, v379);
    sub_1BCAFF8(&SpotRoadMaster_TypeInfo, v380);
    sub_1BCAFF8(&StaffPhotoCostumeMaster_TypeInfo, v381);
    sub_1BCAFF8(&StaffPhotoMaster_TypeInfo, v382);
    sub_1BCAFF8(&StageMaster_TypeInfo, v383);
    sub_1BCAFF8(&StatusEffectPosOverwriteMaster_TypeInfo, v384);
    sub_1BCAFF8(&StoneShopMaster_TypeInfo, v385);
    sub_1BCAFF8(&SubEquipMaster_TypeInfo, v386);
    sub_1BCAFF8(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v387);
    sub_1BCAFF8(&SvtCoinMaster_TypeInfo, v388);
    sub_1BCAFF8(&SvtMaterialTdMaster_TypeInfo, v389);
    sub_1BCAFF8(&SvtMultiPortraitMaster_TypeInfo, v390);
    sub_1BCAFF8(&TblFriendMaster_TypeInfo, v391);
    sub_1BCAFF8(&TblUserMaster_TypeInfo, v392);
    sub_1BCAFF8(&TelopMaster_TypeInfo, v393);
    sub_1BCAFF8(&TerminalOverwriteMaster_TypeInfo, v394);
    sub_1BCAFF8(&TipsBattleMaster_TypeInfo, v395);
    sub_1BCAFF8(&TotalBoxGachaMaster_TypeInfo, v396);
    sub_1BCAFF8(&TotalEventPointMaster_TypeInfo, v397);
    sub_1BCAFF8(&TotalEventRaceMaster_TypeInfo, v398);
    sub_1BCAFF8(&TotalEventRaidMaster_TypeInfo, v399);
    sub_1BCAFF8(&TotalLoginMaster_TypeInfo, v400);
    sub_1BCAFF8(&TreasureBoxGiftMaster_TypeInfo, v401);
    sub_1BCAFF8(&TreasureBoxMaster_TypeInfo, v402);
    sub_1BCAFF8(&TreasureBoxTalkMaster_TypeInfo, v403);
    sub_1BCAFF8(&TreasureDeviceSequenceWeightMaster_TypeInfo, v404);
    sub_1BCAFF8(&TreasureDvcDetailMaster_TypeInfo, v405);
    sub_1BCAFF8(&TreasureDvcLvMaster_TypeInfo, v406);
    sub_1BCAFF8(&TreasureDvcMaster_TypeInfo, v407);
    sub_1BCAFF8(&UpdateProfileDialogInfoMaster_TypeInfo, v408);
    sub_1BCAFF8(&UserAccessaryMaster_TypeInfo, v409);
    sub_1BCAFF8(&UserAccountLinkageMaster_TypeInfo, v410);
    sub_1BCAFF8(&UserBlacklistMaster_TypeInfo, v411);
    sub_1BCAFF8(&UserBoxGachaMaster_TypeInfo, v412);
    sub_1BCAFF8(&UserClassBoardSquareMaster_TypeInfo, v413);
    sub_1BCAFF8(&UserClassStatisticsMaster_TypeInfo, v414);
    sub_1BCAFF8(&UserCoinRoomMaster_TypeInfo, v415);
    sub_1BCAFF8(&UserCombineExpMaster_TypeInfo, v416);
    sub_1BCAFF8(&UserCommandCodeCollectionMaster_TypeInfo, v417);
    sub_1BCAFF8(&UserCommandCodeMaster_TypeInfo, v418);
    sub_1BCAFF8(&UserContinueMaster_TypeInfo, v419);
    sub_1BCAFF8(&UserDeckMaster_TypeInfo, v420);
    sub_1BCAFF8(&UserDeleteReservationMaster_TypeInfo, v421);
    sub_1BCAFF8(&UserEquipMaster_TypeInfo, v422);
    sub_1BCAFF8(&UserEventAlloutBattleMaster_TypeInfo, v423);
    sub_1BCAFF8(&UserEventBoardGameTokenMaster_TypeInfo, v424);
    sub_1BCAFF8(&UserEventCooltimeRewardMaster_TypeInfo, v425);
    sub_1BCAFF8(&UserEventDataLostMaster_TypeInfo, v426);
    sub_1BCAFF8(&UserEventDeckMaster_TypeInfo, v427);
    sub_1BCAFF8(&UserEventDiggingMaster_TypeInfo, v428);
    sub_1BCAFF8(&UserEventExpeditionMaster_TypeInfo, v429);
    sub_1BCAFF8(&UserEventFortificationMaster_TypeInfo, v430);
    sub_1BCAFF8(&UserEventItemLinkSvtMaster_TypeInfo, v431);
    sub_1BCAFF8(&UserEventMapMaster_TypeInfo, v432);
    sub_1BCAFF8(&UserEventMaster_TypeInfo, v433);
    sub_1BCAFF8(&UserEventMissionCondDetailMaster_TypeInfo, v434);
    sub_1BCAFF8(&UserEventMissionFixMaster_TypeInfo, v435);
    sub_1BCAFF8(&UserEventMissionMaster_TypeInfo, v436);
    sub_1BCAFF8(&UserEventPointMaster_TypeInfo, v437);
    sub_1BCAFF8(&UserEventQuestCooltimeMaster_TypeInfo, v438);
    sub_1BCAFF8(&UserEventRaceMaster_TypeInfo, v439);
    sub_1BCAFF8(&UserEventRaidMaster_TypeInfo, v440);
    sub_1BCAFF8(&UserEventRandomMissionMaster_TypeInfo, v441);
    sub_1BCAFF8(&UserEventServantFatigueMaster_TypeInfo, v442);
    sub_1BCAFF8(&UserEventServantPointMaster_TypeInfo, v443);
    sub_1BCAFF8(&UserEventSpotMaster_TypeInfo, v444);
    sub_1BCAFF8(&UserEventTradeMaster_TypeInfo, v445);
    sub_1BCAFF8(&UserExchangeSvtMaster_TypeInfo, v446);
    sub_1BCAFF8(&UserExpMaster_TypeInfo, v447);
    sub_1BCAFF8(&UserExternalPaymentStoneMaster_TypeInfo, v448);
    sub_1BCAFF8(&UserFollowMaster_TypeInfo, v449);
    sub_1BCAFF8(&UserFollowerMaster_TypeInfo, v450);
    sub_1BCAFF8(&UserFormationMaster_TypeInfo, v451);
    sub_1BCAFF8(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v452);
    sub_1BCAFF8(&UserFriendRequestHistoryMaster_TypeInfo, v453);
    sub_1BCAFF8(&UserGachaDrawLogMaster_TypeInfo, v454);
    sub_1BCAFF8(&UserGachaExtraCountMaster_TypeInfo, v455);
    sub_1BCAFF8(&UserGachaHistoryMaster_TypeInfo, v456);
    sub_1BCAFF8(&UserGachaMaster_TypeInfo, v457);
    sub_1BCAFF8(&UserGachaPickupCollateralMaster_TypeInfo, v458);
    sub_1BCAFF8(&UserGameCommonMaster_TypeInfo, v459);
    sub_1BCAFF8(&UserGameMaster_TypeInfo, v460);
    sub_1BCAFF8(&UserHeelPortraitMaster_TypeInfo, v461);
    sub_1BCAFF8(&UserImagePartsGroupMaster_TypeInfo, v462);
    sub_1BCAFF8(&UserInterruptionQuestMaster_TypeInfo, v463);
    sub_1BCAFF8(&UserItemMaster_TypeInfo, v464);
    sub_1BCAFF8(&UserLoginMaster_TypeInfo, v465);
    sub_1BCAFF8(&UserMaster_TypeInfo, v466);
    sub_1BCAFF8(&UserNpcSvtRecordMaster_TypeInfo, v467);
    sub_1BCAFF8(&UserPaymentLimitMaster_TypeInfo, v468);
    sub_1BCAFF8(&UserPresentBoxMaster_TypeInfo, v469);
    sub_1BCAFF8(&UserPresentHistoryMaster_TypeInfo, v470);
    sub_1BCAFF8(&UserPrivilegeMaster_TypeInfo, v471);
    sub_1BCAFF8(&UserQuestInfoMaster_TypeInfo, v472);
    sub_1BCAFF8(&UserQuestMaster_TypeInfo, v473);
    sub_1BCAFF8(&UserQuestRecordMaster_TypeInfo, v474);
    sub_1BCAFF8(&UserQuestRouteMaster_TypeInfo, v475);
    sub_1BCAFF8(&UserRecommendFollowerMaster_TypeInfo, v476);
    sub_1BCAFF8(&UserRecommendSupportMaster_TypeInfo, v477);
    sub_1BCAFF8(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v478);
    sub_1BCAFF8(&UserServantAppendPassiveSkillMaster_TypeInfo, v479);
    sub_1BCAFF8(&UserServantCollectionMaster_TypeInfo, v480);
    sub_1BCAFF8(&UserServantCommandCardMaster_TypeInfo, v481);
    sub_1BCAFF8(&UserServantCommandCodeMaster_TypeInfo, v482);
    sub_1BCAFF8(&UserServantGrandMaster_TypeInfo, v483);
    sub_1BCAFF8(&UserServantLeaderMaster_TypeInfo, v484);
    sub_1BCAFF8(&UserServantMaster_TypeInfo, v485);
    sub_1BCAFF8(&UserServantStorageMaster_TypeInfo, v486);
    sub_1BCAFF8(&UserServantVoicePlayedMaster_TypeInfo, v487);
    sub_1BCAFF8(&UserShopMaster_TypeInfo, v488);
    sub_1BCAFF8(&UserSubEquipMaster_TypeInfo, v489);
    sub_1BCAFF8(&UserSuperBossMaster_TypeInfo, v490);
    sub_1BCAFF8(&UserSupportDeckMaster_TypeInfo, v491);
    sub_1BCAFF8(&UserSvtCoinMaster_TypeInfo, v492);
    sub_1BCAFF8(&UserSvtFirstGetTimeMaster_TypeInfo, v493);
    sub_1BCAFF8(&ViewEnemyMaster_TypeInfo, v494);
    sub_1BCAFF8(&ViewGachaFeaturedServantMaster_TypeInfo, v495);
    sub_1BCAFF8(&ViewQuestEnemyInfoMaster_TypeInfo, v496);
    sub_1BCAFF8(&ViewQuestInfoMaster_TypeInfo, v497);
    sub_1BCAFF8(&ViewWaveEnemyMaster_TypeInfo, v498);
    sub_1BCAFF8(&VoiceClosedMessageMaster_TypeInfo, v499);
    sub_1BCAFF8(&VoiceCondMaster_TypeInfo, v500);
    sub_1BCAFF8(&VoiceMaster_TypeInfo, v501);
    sub_1BCAFF8(&VoiceMaterialCondMaster_TypeInfo, v502);
    sub_1BCAFF8(&VoicePlayCondMaster_TypeInfo, v503);
    sub_1BCAFF8(&VoicePlayGroupMaster_TypeInfo, v504);
    sub_1BCAFF8(&VoiceReleaseMaster_TypeInfo, v505);
    sub_1BCAFF8(&WarAddMaster_TypeInfo, v506);
    sub_1BCAFF8(&WarBoardAIMaster_TypeInfo, v507);
    sub_1BCAFF8(&WarBoardActionPointClassMaster_TypeInfo, v508);
    sub_1BCAFF8(&WarBoardActionPointMaster_TypeInfo, v509);
    sub_1BCAFF8(&WarBoardActionTrendConditionMaster_TypeInfo, v510);
    sub_1BCAFF8(&WarBoardActionTrendGroupMaster_TypeInfo, v511);
    sub_1BCAFF8(&WarBoardActionTrendMaster_TypeInfo, v512);
    sub_1BCAFF8(&WarBoardCommonReleaseMaster_TypeInfo, v513);
    sub_1BCAFF8(&WarBoardDataMaster_TypeInfo, v514);
    sub_1BCAFF8(&WarBoardEffectMaster_TypeInfo, v515);
    sub_1BCAFF8(&WarBoardEventMaster_TypeInfo, v516);
    sub_1BCAFF8(&WarBoardEventScriptMaster_TypeInfo, v517);
    sub_1BCAFF8(&WarBoardFutureActionTrendMaster_TypeInfo, v518);
    sub_1BCAFF8(&WarBoardIndividualityClassMaster_TypeInfo, v519);
    sub_1BCAFF8(&WarBoardItemMaster_TypeInfo, v520);
    sub_1BCAFF8(&WarBoardMaster_TypeInfo, v521);
    sub_1BCAFF8(&WarBoardMessageMaster_TypeInfo, v522);
    sub_1BCAFF8(&WarBoardMessageScriptMaster_TypeInfo, v523);
    sub_1BCAFF8(&WarBoardOnboardSkillMaster_TypeInfo, v524);
    sub_1BCAFF8(&WarBoardPartySkillMaster_TypeInfo, v525);
    sub_1BCAFF8(&WarBoardQuestMaster_TypeInfo, v526);
    sub_1BCAFF8(&WarBoardRatingBaseMaster_TypeInfo, v527);
    sub_1BCAFF8(&WarBoardRatingOffsetGroupMaster_TypeInfo, v528);
    sub_1BCAFF8(&WarBoardRatingOffsetMaster_TypeInfo, v529);
    sub_1BCAFF8(&WarBoardReinforcementsMaster_TypeInfo, v530);
    sub_1BCAFF8(&WarBoardRoadMaster_TypeInfo, v531);
    sub_1BCAFF8(&WarBoardSquareIndexGroupMaster_TypeInfo, v532);
    sub_1BCAFF8(&WarBoardSquareMaster_TypeInfo, v533);
    sub_1BCAFF8(&WarBoardStageBossMaster_TypeInfo, v534);
    sub_1BCAFF8(&WarBoardStageDetailMaster_TypeInfo, v535);
    sub_1BCAFF8(&WarBoardStageLayoutMaster_TypeInfo, v536);
    sub_1BCAFF8(&WarBoardStageMaster_TypeInfo, v537);
    sub_1BCAFF8(&WarBoardStageNpcMaster_TypeInfo, v538);
    sub_1BCAFF8(&WarBoardStagePieceDetailMaster_TypeInfo, v539);
    sub_1BCAFF8(&WarBoardStageReinforcementsMaster_TypeInfo, v540);
    sub_1BCAFF8(&WarBoardStageWallMaster_TypeInfo, v541);
    sub_1BCAFF8(&WarBoardTacticalTrendMaster_TypeInfo, v542);
    sub_1BCAFF8(&WarBoardTreasureMaster_TypeInfo, v543);
    sub_1BCAFF8(&WarGroupIgnoreMaster_TypeInfo, v544);
    sub_1BCAFF8(&WarGroupMaster_TypeInfo, v545);
    sub_1BCAFF8(&WarMaster_TypeInfo, v546);
    sub_1BCAFF8(&WarMessageMaster_TypeInfo, v547);
    sub_1BCAFF8(&WarQuestSelectionMaster_TypeInfo, v548);
    sub_1BCAFF8(&WarReleaseMaster_TypeInfo, v549);
    byte_4B1C00A = 1;
  }
  v550 = (DataMasterBase_array *)sub_1BCB0A0(DataMasterBase___TypeInfo, 548LL);
  v551 = (ServantMaster_o *)sub_1BCB244(ServantMaster_TypeInfo);
  ServantMaster___ctor(v551, 0LL);
  if ( !v550 )
    sub_1BCB254(v552, v553);
  if ( v551 )
  {
    v552 = sub_1BCB134(v551, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  p_max_length = &v550->max_length;
  if ( !v550->max_length )
    goto LABEL_1649;
  v550->m_Items[0] = (DataMasterBase_o *)v551;
  sub_1BCAF9C((CGThumbnailListItem_o *)v550->m_Items, (int32_t)v551, v554, v555);
  v557 = (ServantClassMaster_o *)sub_1BCB244(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v557, 0LL);
  if ( v557 )
  {
    v552 = sub_1BCB134(v557, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1649;
  v550->m_Items[1] = (DataMasterBase_o *)v557;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[1], (int32_t)v557, v554, v558);
  v559 = (ServantCommentMaster_o *)sub_1BCB244(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v559, 0LL);
  if ( v559 )
  {
    v552 = sub_1BCB134(v559, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1649;
  v550->m_Items[2] = (DataMasterBase_o *)v559;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[2], (int32_t)v559, v554, v560);
  v561 = (ServantProfileMaster_o *)sub_1BCB244(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v561, 0LL);
  if ( v561 )
  {
    v552 = sub_1BCB134(v561, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1649;
  v550->m_Items[3] = (DataMasterBase_o *)v561;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[3], (int32_t)v561, v554, v562);
  v563 = (WarMaster_o *)sub_1BCB244(WarMaster_TypeInfo);
  WarMaster___ctor(v563, 0LL);
  if ( v563 )
  {
    v552 = sub_1BCB134(v563, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1649;
  v550->m_Items[4] = (DataMasterBase_o *)v563;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[4], (int32_t)v563, v554, v564);
  v565 = (UserMaster_o *)sub_1BCB244(UserMaster_TypeInfo);
  UserMaster___ctor(v565, 0LL);
  if ( v565 )
  {
    v552 = sub_1BCB134(v565, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1649;
  v550->m_Items[5] = (DataMasterBase_o *)v565;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[5], (int32_t)v565, v554, v566);
  v567 = (UserGameMaster_o *)sub_1BCB244(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v567, 0LL);
  if ( v567 )
  {
    v552 = sub_1BCB134(v567, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1649;
  v550->m_Items[6] = (DataMasterBase_o *)v567;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[6], (int32_t)v567, v554, v568);
  v569 = (TblUserMaster_o *)sub_1BCB244(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v569, 0LL);
  if ( v569 )
  {
    v552 = sub_1BCB134(v569, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1649;
  v550->m_Items[7] = (DataMasterBase_o *)v569;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[7], (int32_t)v569, v554, v570);
  v571 = (UserItemMaster_o *)sub_1BCB244(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v571, 0LL);
  if ( v571 )
  {
    v552 = sub_1BCB134(v571, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1649;
  v550->m_Items[8] = (DataMasterBase_o *)v571;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[8], (int32_t)v571, v554, v572);
  v573 = (UserServantMaster_o *)sub_1BCB244(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v573, 0LL);
  if ( v573 )
  {
    v552 = sub_1BCB134(v573, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1649;
  v550->m_Items[9] = (DataMasterBase_o *)v573;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[9], (int32_t)v573, v554, v574);
  v575 = (UserServantStorageMaster_o *)sub_1BCB244(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v575, 0LL);
  if ( v575 )
  {
    v552 = sub_1BCB134(v575, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1649;
  v550->m_Items[10] = (DataMasterBase_o *)v575;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[10], (int32_t)v575, v554, v576);
  v577 = (UserAccessaryMaster_o *)sub_1BCB244(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v577, 0LL);
  if ( v577 )
  {
    v552 = sub_1BCB134(v577, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1649;
  v550->m_Items[11] = (DataMasterBase_o *)v577;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[11], (int32_t)v577, v554, v578);
  v579 = (UserQuestMaster_o *)sub_1BCB244(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v579, 0LL);
  if ( v579 )
  {
    v552 = sub_1BCB134(v579, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1649;
  v550->m_Items[12] = (DataMasterBase_o *)v579;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[12], (int32_t)v579, v554, v580);
  v581 = (BattleMaster_o *)sub_1BCB244(BattleMaster_TypeInfo);
  BattleMaster___ctor(v581, 0LL);
  if ( v581 )
  {
    v552 = sub_1BCB134(v581, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1649;
  v550->m_Items[13] = (DataMasterBase_o *)v581;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[13], (int32_t)v581, v554, v582);
  v583 = (OtherUserGameMaster_o *)sub_1BCB244(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v583, 0LL);
  if ( v583 )
  {
    v552 = sub_1BCB134(v583, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1649;
  v550->m_Items[14] = (DataMasterBase_o *)v583;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[14], (int32_t)v583, v554, v584);
  v585 = (TblFriendMaster_o *)sub_1BCB244(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v585, 0LL);
  if ( v585 )
  {
    v552 = sub_1BCB134(v585, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1649;
  v550->m_Items[15] = (DataMasterBase_o *)v585;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[15], (int32_t)v585, v554, v586);
  v587 = (AreaMaster_o *)sub_1BCB244(AreaMaster_TypeInfo);
  AreaMaster___ctor(v587, 0LL);
  if ( v587 )
  {
    v552 = sub_1BCB134(v587, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1649;
  v550->m_Items[16] = (DataMasterBase_o *)v587;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[16], (int32_t)v587, v554, v588);
  v589 = (ServantCardMaster_o *)sub_1BCB244(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v589, 0LL);
  if ( v589 )
  {
    v552 = sub_1BCB134(v589, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1649;
  v550->m_Items[17] = (DataMasterBase_o *)v589;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[17], (int32_t)v589, v554, v590);
  v591 = (EventMaster_o *)sub_1BCB244(EventMaster_TypeInfo);
  EventMaster___ctor(v591, 0LL);
  if ( v591 )
  {
    v552 = sub_1BCB134(v591, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1649;
  v550->m_Items[18] = (DataMasterBase_o *)v591;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[18], (int32_t)v591, v554, v592);
  v593 = (ItemMaster_o *)sub_1BCB244(ItemMaster_TypeInfo);
  ItemMaster___ctor(v593, 0LL);
  if ( v593 )
  {
    v552 = sub_1BCB134(v593, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1649;
  v550->m_Items[19] = (DataMasterBase_o *)v593;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[19], (int32_t)v593, v554, v594);
  v595 = (QuestMaster_o *)sub_1BCB244(QuestMaster_TypeInfo);
  QuestMaster___ctor(v595, 0LL);
  if ( v595 )
  {
    v552 = sub_1BCB134(v595, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1649;
  v550->m_Items[20] = (DataMasterBase_o *)v595;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[20], (int32_t)v595, v554, v596);
  v597 = (QuestAddMaster_o *)sub_1BCB244(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v597, 0LL);
  if ( v597 )
  {
    v552 = sub_1BCB134(v597, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1649;
  v550->m_Items[21] = (DataMasterBase_o *)v597;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[21], (int32_t)v597, v554, v598);
  v599 = (QuestReleaseMaster_o *)sub_1BCB244(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v599, 0LL);
  if ( v599 )
  {
    v552 = sub_1BCB134(v599, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1649;
  v550->m_Items[22] = (DataMasterBase_o *)v599;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[22], (int32_t)v599, v554, v600);
  v601 = (QuestDateRangeMaster_o *)sub_1BCB244(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v601, 0LL);
  if ( v601 )
  {
    v552 = sub_1BCB134(v601, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1649;
  v550->m_Items[23] = (DataMasterBase_o *)v601;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[23], (int32_t)v601, v554, v602);
  v603 = (QuestPhaseMaster_o *)sub_1BCB244(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v603, 0LL);
  if ( v603 )
  {
    v552 = sub_1BCB134(v603, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1649;
  v550->m_Items[24] = (DataMasterBase_o *)v603;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[24], (int32_t)v603, v554, v604);
  v605 = (QuestPhaseDetailMaster_o *)sub_1BCB244(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v605, 0LL);
  if ( v605 )
  {
    v552 = sub_1BCB134(v605, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1649;
  v550->m_Items[25] = (DataMasterBase_o *)v605;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[25], (int32_t)v605, v554, v606);
  v607 = (QuestGroupMaster_o *)sub_1BCB244(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v607, 0LL);
  if ( v607 )
  {
    v552 = sub_1BCB134(v607, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1649;
  v550->m_Items[26] = (DataMasterBase_o *)v607;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[26], (int32_t)v607, v554, v608);
  v609 = (QuestRandomGroupMaster_o *)sub_1BCB244(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v609, 0LL);
  if ( v609 )
  {
    v552 = sub_1BCB134(v609, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1649;
  v550->m_Items[27] = (DataMasterBase_o *)v609;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[27], (int32_t)v609, v554, v610);
  v611 = (QuestConsumeItemMaster_o *)sub_1BCB244(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v611, 0LL);
  if ( v611 )
  {
    v552 = sub_1BCB134(v611, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1649;
  v550->m_Items[28] = (DataMasterBase_o *)v611;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[28], (int32_t)v611, v554, v612);
  v613 = (QuestMessageMaster_o *)sub_1BCB244(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v613, 0LL);
  if ( v613 )
  {
    v552 = sub_1BCB134(v613, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1649;
  v550->m_Items[29] = (DataMasterBase_o *)v613;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[29], (int32_t)v613, v554, v614);
  v615 = (UserQuestInfoMaster_o *)sub_1BCB244(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v615, 0LL);
  if ( v615 )
  {
    v552 = sub_1BCB134(v615, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1649;
  v550->m_Items[30] = (DataMasterBase_o *)v615;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[30], (int32_t)v615, v554, v616);
  v617 = (UserQuestRecordMaster_o *)sub_1BCB244(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v617, 0LL);
  if ( v617 )
  {
    v552 = sub_1BCB134(v617, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1649;
  v550->m_Items[31] = (DataMasterBase_o *)v617;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[31], (int32_t)v617, v554, v618);
  v619 = (ViewQuestInfoMaster_o *)sub_1BCB244(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v619, 0LL);
  if ( v619 )
  {
    v552 = sub_1BCB134(v619, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1649;
  v550->m_Items[32] = (DataMasterBase_o *)v619;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[32], (int32_t)v619, v554, v620);
  v621 = (ViewEnemyMaster_o *)sub_1BCB244(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v621, 0LL);
  if ( v621 )
  {
    v552 = sub_1BCB134(v621, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1649;
  v550->m_Items[33] = (DataMasterBase_o *)v621;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[33], (int32_t)v621, v554, v622);
  v623 = (ViewQuestEnemyInfoMaster_o *)sub_1BCB244(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v623, 0LL);
  if ( v623 )
  {
    v552 = sub_1BCB134(v623, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1649;
  v550->m_Items[34] = (DataMasterBase_o *)v623;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[34], (int32_t)v623, v554, v624);
  v625 = (BlankEarthSpotMaster_o *)sub_1BCB244(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v625, 0LL);
  if ( v625 )
  {
    v552 = sub_1BCB134(v625, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1649;
  v550->m_Items[35] = (DataMasterBase_o *)v625;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[35], (int32_t)v625, v554, v626);
  v627 = (BlankEarthSpotAddMaster_o *)sub_1BCB244(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v627, 0LL);
  if ( v627 )
  {
    v552 = sub_1BCB134(v627, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1649;
  v550->m_Items[36] = (DataMasterBase_o *)v627;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[36], (int32_t)v627, v554, v628);
  v629 = (SpotMaster_o *)sub_1BCB244(SpotMaster_TypeInfo);
  SpotMaster___ctor(v629, 0LL);
  if ( v629 )
  {
    v552 = sub_1BCB134(v629, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1649;
  v550->m_Items[37] = (DataMasterBase_o *)v629;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[37], (int32_t)v629, v554, v630);
  v631 = (SpotImageMaster_o *)sub_1BCB244(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v631, 0LL);
  if ( v631 )
  {
    v552 = sub_1BCB134(v631, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1649;
  v550->m_Items[38] = (DataMasterBase_o *)v631;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[38], (int32_t)v631, v554, v632);
  v633 = (SpotRoadMaster_o *)sub_1BCB244(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v633, 0LL);
  if ( v633 )
  {
    v552 = sub_1BCB134(v633, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1649;
  v550->m_Items[39] = (DataMasterBase_o *)v633;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[39], (int32_t)v633, v554, v634);
  v635 = (SpotPathMaster_o *)sub_1BCB244(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v635, 0LL);
  if ( v635 )
  {
    v552 = sub_1BCB134(v635, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1649;
  v550->m_Items[40] = (DataMasterBase_o *)v635;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[40], (int32_t)v635, v554, v636);
  v637 = (SpotAddMaster_o *)sub_1BCB244(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v637, 0LL);
  if ( v637 )
  {
    v552 = sub_1BCB134(v637, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1649;
  v550->m_Items[41] = (DataMasterBase_o *)v637;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[41], (int32_t)v637, v554, v638);
  v639 = (MapGimmickMaster_o *)sub_1BCB244(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v639, 0LL);
  if ( v639 )
  {
    v552 = sub_1BCB134(v639, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1649;
  v550->m_Items[42] = (DataMasterBase_o *)v639;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[42], (int32_t)v639, v554, v640);
  v641 = (GiftMaster_o *)sub_1BCB244(GiftMaster_TypeInfo);
  GiftMaster___ctor(v641, 0LL);
  if ( v641 )
  {
    v552 = sub_1BCB134(v641, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1649;
  v550->m_Items[43] = (DataMasterBase_o *)v641;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[43], (int32_t)v641, v554, v642);
  v643 = (GiftAddMaster_o *)sub_1BCB244(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v643, 0LL);
  if ( v643 )
  {
    v552 = sub_1BCB134(v643, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1649;
  v550->m_Items[44] = (DataMasterBase_o *)v643;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[44], (int32_t)v643, v554, v644);
  v645 = (ShopMaster_o *)sub_1BCB244(ShopMaster_TypeInfo);
  ShopMaster___ctor(v645, 0LL);
  if ( v645 )
  {
    v552 = sub_1BCB134(v645, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1649;
  v550->m_Items[45] = (DataMasterBase_o *)v645;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[45], (int32_t)v645, v554, v646);
  v647 = (StoneShopMaster_o *)sub_1BCB244(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v647, 0LL);
  if ( v647 )
  {
    v552 = sub_1BCB134(v647, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1649;
  v550->m_Items[46] = (DataMasterBase_o *)v647;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[46], (int32_t)v647, v554, v648);
  v649 = (BankShopMaster_o *)sub_1BCB244(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v649, 0LL);
  if ( v649 )
  {
    v552 = sub_1BCB134(v649, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1649;
  v550->m_Items[47] = (DataMasterBase_o *)v649;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[47], (int32_t)v649, v554, v650);
  v651 = (ShopScriptMaster_o *)sub_1BCB244(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v651, 0LL);
  if ( v651 )
  {
    v552 = sub_1BCB134(v651, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1649;
  v550->m_Items[48] = (DataMasterBase_o *)v651;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[48], (int32_t)v651, v554, v652);
  v653 = (StageMaster_o *)sub_1BCB244(StageMaster_TypeInfo);
  StageMaster___ctor(v653, 0LL);
  if ( v653 )
  {
    v552 = sub_1BCB134(v653, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1649;
  v550->m_Items[49] = (DataMasterBase_o *)v653;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[49], (int32_t)v653, v554, v654);
  v655 = (ServantGroupMaster_o *)sub_1BCB244(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v655, 0LL);
  if ( v655 )
  {
    v552 = sub_1BCB134(v655, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1649;
  v550->m_Items[50] = (DataMasterBase_o *)v655;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[50], (int32_t)v655, v554, v656);
  v657 = (ServantLimitMaster_o *)sub_1BCB244(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v657, 0LL);
  if ( v657 )
  {
    v552 = sub_1BCB134(v657, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1649;
  v550->m_Items[51] = (DataMasterBase_o *)v657;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[51], (int32_t)v657, v554, v658);
  v659 = (ServantLimitAddMaster_o *)sub_1BCB244(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v659, 0LL);
  if ( v659 )
  {
    v552 = sub_1BCB134(v659, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1649;
  v550->m_Items[52] = (DataMasterBase_o *)v659;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[52], (int32_t)v659, v554, v660);
  v661 = (ServantSkillMaster_o *)sub_1BCB244(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v661, 0LL);
  if ( v661 )
  {
    v552 = sub_1BCB134(v661, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1649;
  v550->m_Items[53] = (DataMasterBase_o *)v661;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[53], (int32_t)v661, v554, v662);
  v663 = (ServantPassiveSkillMaster_o *)sub_1BCB244(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v663, 0LL);
  if ( v663 )
  {
    v552 = sub_1BCB134(v663, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1649;
  v550->m_Items[54] = (DataMasterBase_o *)v663;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[54], (int32_t)v663, v554, v664);
  v665 = (BgmMaster_o *)sub_1BCB244(BgmMaster_TypeInfo);
  BgmMaster___ctor(v665, 0LL);
  if ( v665 )
  {
    v552 = sub_1BCB134(v665, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1649;
  v550->m_Items[55] = (DataMasterBase_o *)v665;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[55], (int32_t)v665, v554, v666);
  v667 = (ServantScriptMaster_o *)sub_1BCB244(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v667, 0LL);
  if ( v667 )
  {
    v552 = sub_1BCB134(v667, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1649;
  v550->m_Items[56] = (DataMasterBase_o *)v667;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[56], (int32_t)v667, v554, v668);
  v669 = (NewsMaster_o *)sub_1BCB244(NewsMaster_TypeInfo);
  NewsMaster___ctor(v669, 0LL);
  if ( v669 )
  {
    v552 = sub_1BCB134(v669, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1649;
  v550->m_Items[57] = (DataMasterBase_o *)v669;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[57], (int32_t)v669, v554, v670);
  v671 = (TelopMaster_o *)sub_1BCB244(TelopMaster_TypeInfo);
  TelopMaster___ctor(v671, 0LL);
  if ( v671 )
  {
    v552 = sub_1BCB134(v671, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1649;
  v550->m_Items[58] = (DataMasterBase_o *)v671;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[58], (int32_t)v671, v554, v672);
  v673 = (UserExpMaster_o *)sub_1BCB244(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v673, 0LL);
  if ( v673 )
  {
    v552 = sub_1BCB134(v673, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1649;
  v550->m_Items[59] = (DataMasterBase_o *)v673;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[59], (int32_t)v673, v554, v674);
  v675 = (TreasureDvcMaster_o *)sub_1BCB244(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v675, 0LL);
  if ( v675 )
  {
    v552 = sub_1BCB134(v675, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1649;
  v550->m_Items[60] = (DataMasterBase_o *)v675;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[60], (int32_t)v675, v554, v676);
  v677 = (ServantTreasureDvcMaster_o *)sub_1BCB244(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v677, 0LL);
  if ( v677 )
  {
    v552 = sub_1BCB134(v677, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1649;
  v550->m_Items[61] = (DataMasterBase_o *)v677;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[61], (int32_t)v677, v554, v678);
  v679 = (SkillMaster_o *)sub_1BCB244(SkillMaster_TypeInfo);
  SkillMaster___ctor(v679, 0LL);
  if ( v679 )
  {
    v552 = sub_1BCB134(v679, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1649;
  v550->m_Items[62] = (DataMasterBase_o *)v679;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[62], (int32_t)v679, v554, v680);
  v681 = (SkillLvMaster_o *)sub_1BCB244(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v681, 0LL);
  if ( v681 )
  {
    v552 = sub_1BCB134(v681, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1649;
  v550->m_Items[63] = (DataMasterBase_o *)v681;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[63], (int32_t)v681, v554, v682);
  v683 = (SkillDetailMaster_o *)sub_1BCB244(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v683, 0LL);
  if ( v683 )
  {
    v552 = sub_1BCB134(v683, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1649;
  v550->m_Items[64] = (DataMasterBase_o *)v683;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[64], (int32_t)v683, v554, v684);
  v685 = (CommandSpellMaster_o *)sub_1BCB244(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v685, 0LL);
  if ( v685 )
  {
    v552 = sub_1BCB134(v685, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1649;
  v550->m_Items[65] = (DataMasterBase_o *)v685;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[65], (int32_t)v685, v554, v686);
  v687 = (EquipMaster_o *)sub_1BCB244(EquipMaster_TypeInfo);
  EquipMaster___ctor(v687, 0LL);
  if ( v687 )
  {
    v552 = sub_1BCB134(v687, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1649;
  v550->m_Items[66] = (DataMasterBase_o *)v687;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[66], (int32_t)v687, v554, v688);
  v689 = (EquipExpMaster_o *)sub_1BCB244(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v689, 0LL);
  if ( v689 )
  {
    v552 = sub_1BCB134(v689, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1649;
  v550->m_Items[67] = (DataMasterBase_o *)v689;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[67], (int32_t)v689, v554, v690);
  v691 = (EquipSkillMaster_o *)sub_1BCB244(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v691, 0LL);
  if ( v691 )
  {
    v552 = sub_1BCB134(v691, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1649;
  v550->m_Items[68] = (DataMasterBase_o *)v691;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[68], (int32_t)v691, v554, v692);
  v693 = (SubEquipMaster_o *)sub_1BCB244(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v693, 0LL);
  if ( v693 )
  {
    v552 = sub_1BCB134(v693, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1649;
  v550->m_Items[69] = (DataMasterBase_o *)v693;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[69], (int32_t)v693, v554, v694);
  v695 = (AccessaryMaster_o *)sub_1BCB244(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v695, 0LL);
  if ( v695 )
  {
    v552 = sub_1BCB134(v695, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1649;
  v550->m_Items[70] = (DataMasterBase_o *)v695;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[70], (int32_t)v695, v554, v696);
  v697 = (UserPresentBoxMaster_o *)sub_1BCB244(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v697, 0LL);
  if ( v697 )
  {
    v552 = sub_1BCB134(v697, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1649;
  v550->m_Items[71] = (DataMasterBase_o *)v697;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[71], (int32_t)v697, v554, v698);
  v699 = (UserDeckMaster_o *)sub_1BCB244(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v699, 0LL);
  if ( v699 )
  {
    v552 = sub_1BCB134(v699, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1649;
  v550->m_Items[72] = (DataMasterBase_o *)v699;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[72], (int32_t)v699, v554, v700);
  v701 = (UserSubEquipMaster_o *)sub_1BCB244(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v701, 0LL);
  if ( v701 )
  {
    v552 = sub_1BCB134(v701, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1649;
  v550->m_Items[73] = (DataMasterBase_o *)v701;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[73], (int32_t)v701, v554, v702);
  v703 = (GachaMaster_o *)sub_1BCB244(GachaMaster_TypeInfo);
  GachaMaster___ctor(v703, 0LL);
  if ( v703 )
  {
    v552 = sub_1BCB134(v703, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1649;
  v550->m_Items[74] = (DataMasterBase_o *)v703;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[74], (int32_t)v703, v554, v704);
  v705 = (GachaImageMaster_o *)sub_1BCB244(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v705, 0LL);
  if ( v705 )
  {
    v552 = sub_1BCB134(v705, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1649;
  v550->m_Items[75] = (DataMasterBase_o *)v705;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[75], (int32_t)v705, v554, v706);
  v707 = (UserGachaMaster_o *)sub_1BCB244(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v707, 0LL);
  if ( v707 )
  {
    v552 = sub_1BCB134(v707, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1649;
  v550->m_Items[76] = (DataMasterBase_o *)v707;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[76], (int32_t)v707, v554, v708);
  v709 = (UserEquipMaster_o *)sub_1BCB244(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v709, 0LL);
  if ( v709 )
  {
    v552 = sub_1BCB134(v709, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1649;
  v550->m_Items[77] = (DataMasterBase_o *)v709;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[77], (int32_t)v709, v554, v710);
  v711 = (UserServantCollectionMaster_o *)sub_1BCB244(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v711, 0LL);
  if ( v711 )
  {
    v552 = sub_1BCB134(v711, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1649;
  v550->m_Items[78] = (DataMasterBase_o *)v711;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[78], (int32_t)v711, v554, v712);
  v713 = (FriendshipMaster_o *)sub_1BCB244(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v713, 0LL);
  if ( v713 )
  {
    v552 = sub_1BCB134(v713, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1649;
  v550->m_Items[79] = (DataMasterBase_o *)v713;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[79], (int32_t)v713, v554, v714);
  v715 = (GachaTicketMaster_o *)sub_1BCB244(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v715, 0LL);
  if ( v715 )
  {
    v552 = sub_1BCB134(v715, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1649;
  v550->m_Items[80] = (DataMasterBase_o *)v715;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[80], (int32_t)v715, v554, v716);
  v717 = (UserFormationMaster_o *)sub_1BCB244(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v717, 0LL);
  if ( v717 )
  {
    v552 = sub_1BCB134(v717, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1649;
  v550->m_Items[81] = (DataMasterBase_o *)v717;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[81], (int32_t)v717, v554, v718);
  v719 = (FunctionMaster_o *)sub_1BCB244(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v719, 0LL);
  if ( v719 )
  {
    v552 = sub_1BCB134(v719, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1649;
  v550->m_Items[82] = (DataMasterBase_o *)v719;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[82], (int32_t)v719, v554, v720);
  v721 = (BuffMaster_o *)sub_1BCB244(BuffMaster_TypeInfo);
  BuffMaster___ctor(v721, 0LL);
  if ( v721 )
  {
    v552 = sub_1BCB134(v721, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1649;
  v550->m_Items[83] = (DataMasterBase_o *)v721;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[83], (int32_t)v721, v554, v722);
  v723 = (GachaReleaseMaster_o *)sub_1BCB244(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v723, 0LL);
  if ( v723 )
  {
    v552 = sub_1BCB134(v723, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1649;
  v550->m_Items[84] = (DataMasterBase_o *)v723;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[84], (int32_t)v723, v554, v724);
  v725 = (CombineQpMaster_o *)sub_1BCB244(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v725, 0LL);
  if ( v725 )
  {
    v552 = sub_1BCB134(v725, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1649;
  v550->m_Items[85] = (DataMasterBase_o *)v725;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[85], (int32_t)v725, v554, v726);
  v727 = (CombineMaterialMaster_o *)sub_1BCB244(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v727, 0LL);
  if ( v727 )
  {
    v552 = sub_1BCB134(v727, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1649;
  v550->m_Items[86] = (DataMasterBase_o *)v727;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[86], (int32_t)v727, v554, v728);
  v729 = (EventCombineMaster_o *)sub_1BCB244(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v729, 0LL);
  if ( v729 )
  {
    v552 = sub_1BCB134(v729, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1649;
  v550->m_Items[87] = (DataMasterBase_o *)v729;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[87], (int32_t)v729, v554, v730);
  v731 = (ServantExpMaster_o *)sub_1BCB244(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v731, 0LL);
  if ( v731 )
  {
    v552 = sub_1BCB134(v731, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1649;
  v550->m_Items[88] = (DataMasterBase_o *)v731;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[88], (int32_t)v731, v554, v732);
  v733 = (CombineSkillMaster_o *)sub_1BCB244(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v733, 0LL);
  if ( v733 )
  {
    v552 = sub_1BCB134(v733, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1649;
  v550->m_Items[89] = (DataMasterBase_o *)v733;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[89], (int32_t)v733, v554, v734);
  v735 = (CombineTdMaster_o *)sub_1BCB244(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v735, 0LL);
  if ( v735 )
  {
    v552 = sub_1BCB134(v735, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1649;
  v550->m_Items[90] = (DataMasterBase_o *)v735;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[90], (int32_t)v735, v554, v736);
  v737 = (EventQuestMaster_o *)sub_1BCB244(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v737, 0LL);
  if ( v737 )
  {
    v552 = sub_1BCB134(v737, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1649;
  v550->m_Items[91] = (DataMasterBase_o *)v737;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[91], (int32_t)v737, v554, v738);
  v739 = (EventCampaignMaster_o *)sub_1BCB244(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v739, 0LL);
  if ( v739 )
  {
    v552 = sub_1BCB134(v739, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1649;
  v550->m_Items[92] = (DataMasterBase_o *)v739;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[92], (int32_t)v739, v554, v740);
  v741 = (IllustratorMaster_o *)sub_1BCB244(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v741, 0LL);
  if ( v741 )
  {
    v552 = sub_1BCB134(v741, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1649;
  v550->m_Items[93] = (DataMasterBase_o *)v741;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[93], (int32_t)v741, v554, v742);
  v743 = (CvMaster_o *)sub_1BCB244(CvMaster_TypeInfo);
  CvMaster___ctor(v743, 0LL);
  if ( v743 )
  {
    v552 = sub_1BCB134(v743, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1649;
  v550->m_Items[94] = (DataMasterBase_o *)v743;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[94], (int32_t)v743, v554, v744);
  v745 = (TreasureDvcLvMaster_o *)sub_1BCB244(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v745, 0LL);
  if ( v745 )
  {
    v552 = sub_1BCB134(v745, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1649;
  v550->m_Items[95] = (DataMasterBase_o *)v745;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[95], (int32_t)v745, v554, v746);
  v747 = (TreasureDvcDetailMaster_o *)sub_1BCB244(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v747, 0LL);
  if ( v747 )
  {
    v552 = sub_1BCB134(v747, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1649;
  v550->m_Items[96] = (DataMasterBase_o *)v747;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[96], (int32_t)v747, v554, v748);
  v749 = (UserFollowerMaster_o *)sub_1BCB244(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v749, 0LL);
  if ( v749 )
  {
    v552 = sub_1BCB134(v749, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1649;
  v550->m_Items[97] = (DataMasterBase_o *)v749;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[97], (int32_t)v749, v554, v750);
  v751 = (NpcFollowerMaster_o *)sub_1BCB244(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v751, 0LL);
  if ( v751 )
  {
    v552 = sub_1BCB134(v751, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1649;
  v550->m_Items[98] = (DataMasterBase_o *)v751;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[98], (int32_t)v751, v554, v752);
  v753 = (NpcServantFollowerMaster_o *)sub_1BCB244(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v753, 0LL);
  if ( v753 )
  {
    v552 = sub_1BCB134(v753, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1649;
  v550->m_Items[99] = (DataMasterBase_o *)v753;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[99], (int32_t)v753, v554, v754);
  v755 = (UserEventMaster_o *)sub_1BCB244(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v755, 0LL);
  if ( v755 )
  {
    v552 = sub_1BCB134(v755, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1649;
  v550->m_Items[100] = (DataMasterBase_o *)v755;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[100], (int32_t)v755, v554, v756);
  v757 = (UserShopMaster_o *)sub_1BCB244(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v757, 0LL);
  if ( v757 )
  {
    v552 = sub_1BCB134(v757, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1649;
  v550->m_Items[101] = (DataMasterBase_o *)v757;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[101], (int32_t)v757, v554, v758);
  v759 = (UserContinueMaster_o *)sub_1BCB244(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v759, 0LL);
  if ( v759 )
  {
    v552 = sub_1BCB134(v759, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1649;
  v550->m_Items[102] = (DataMasterBase_o *)v759;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[102], (int32_t)v759, v554, v760);
  v761 = (ConstantMaster_o *)sub_1BCB244(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v761, 0LL);
  if ( v761 )
  {
    v552 = sub_1BCB134(v761, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1649;
  v550->m_Items[103] = (DataMasterBase_o *)v761;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[103], (int32_t)v761, v554, v762);
  v763 = (ConstantLongMaster_o *)sub_1BCB244(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v763, 0LL);
  if ( v763 )
  {
    v552 = sub_1BCB134(v763, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1649;
  v550->m_Items[104] = (DataMasterBase_o *)v763;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[104], (int32_t)v763, v554, v764);
  v765 = (ConstantStrMaster_o *)sub_1BCB244(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v765, 0LL);
  if ( v765 )
  {
    v552 = sub_1BCB134(v765, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1649;
  v550->m_Items[105] = (DataMasterBase_o *)v765;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[105], (int32_t)v765, v554, v766);
  v767 = (AiMaster_o *)sub_1BCB244(AiMaster_TypeInfo);
  AiMaster___ctor(v767, 0LL);
  if ( v767 )
  {
    v552 = sub_1BCB134(v767, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1649;
  v550->m_Items[106] = (DataMasterBase_o *)v767;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[106], (int32_t)v767, v554, v768);
  v769 = (AiActMaster_o *)sub_1BCB244(AiActMaster_TypeInfo);
  AiActMaster___ctor(v769, 0LL);
  if ( v769 )
  {
    v552 = sub_1BCB134(v769, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1649;
  v550->m_Items[107] = (DataMasterBase_o *)v769;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[107], (int32_t)v769, v554, v770);
  v771 = (AttriRelationMaster_o *)sub_1BCB244(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v771, 0LL);
  if ( v771 )
  {
    v552 = sub_1BCB134(v771, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1649;
  v550->m_Items[108] = (DataMasterBase_o *)v771;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[108], (int32_t)v771, v554, v772);
  v773 = (ClassRelationMaster_o *)sub_1BCB244(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v773, 0LL);
  if ( v773 )
  {
    v552 = sub_1BCB134(v773, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1649;
  v550->m_Items[109] = (DataMasterBase_o *)v773;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[109], (int32_t)v773, v554, v774);
  v775 = (EffectMaster_o *)sub_1BCB244(EffectMaster_TypeInfo);
  EffectMaster___ctor(v775, 0LL);
  if ( v775 )
  {
    v552 = sub_1BCB134(v775, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1649;
  v550->m_Items[110] = (DataMasterBase_o *)v775;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[110], (int32_t)v775, v554, v776);
  v777 = (EquipImageMaster_o *)sub_1BCB244(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v777, 0LL);
  if ( v777 )
  {
    v552 = sub_1BCB134(v777, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1649;
  v550->m_Items[111] = (DataMasterBase_o *)v777;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[111], (int32_t)v777, v554, v778);
  v779 = (ServantVoiceMaster_o *)sub_1BCB244(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v779, 0LL);
  if ( v779 )
  {
    v552 = sub_1BCB134(v779, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1649;
  v550->m_Items[112] = (DataMasterBase_o *)v779;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[112], (int32_t)v779, v554, v780);
  v781 = (CombineLimitMaster_o *)sub_1BCB244(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v781, 0LL);
  if ( v781 )
  {
    v552 = sub_1BCB134(v781, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1649;
  v550->m_Items[113] = (DataMasterBase_o *)v781;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[113], (int32_t)v781, v554, v782);
  v783 = (CardMaster_o *)sub_1BCB244(CardMaster_TypeInfo);
  CardMaster___ctor(v783, 0LL);
  if ( v783 )
  {
    v552 = sub_1BCB134(v783, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1649;
  v550->m_Items[114] = (DataMasterBase_o *)v783;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[114], (int32_t)v783, v554, v784);
  v785 = (CombineQpSvtEquipMaster_o *)sub_1BCB244(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v785, 0LL);
  if ( v785 )
  {
    v552 = sub_1BCB134(v785, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1649;
  v550->m_Items[115] = (DataMasterBase_o *)v785;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[115], (int32_t)v785, v554, v786);
  v787 = (ServantRarityMaster_o *)sub_1BCB244(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v787, 0LL);
  if ( v787 )
  {
    v552 = sub_1BCB134(v787, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1649;
  v550->m_Items[116] = (DataMasterBase_o *)v787;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[116], (int32_t)v787, v554, v788);
  v789 = (SetItemMaster_o *)sub_1BCB244(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v789, 0LL);
  if ( v789 )
  {
    v552 = sub_1BCB134(v789, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1649;
  v550->m_Items[117] = (DataMasterBase_o *)v789;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[117], (int32_t)v789, v554, v790);
  v791 = (RecoverMaster_o *)sub_1BCB244(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v791, 0LL);
  if ( v791 )
  {
    v552 = sub_1BCB134(v791, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1649;
  v550->m_Items[118] = (DataMasterBase_o *)v791;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[118], (int32_t)v791, v554, v792);
  v793 = (BannerMaster_o *)sub_1BCB244(BannerMaster_TypeInfo);
  BannerMaster___ctor(v793, 0LL);
  if ( v793 )
  {
    v552 = sub_1BCB134(v793, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1649;
  v550->m_Items[119] = (DataMasterBase_o *)v793;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[119], (int32_t)v793, v554, v794);
  v795 = (ShopReleaseMaster_o *)sub_1BCB244(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v795, 0LL);
  if ( v795 )
  {
    v552 = sub_1BCB134(v795, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1649;
  v550->m_Items[120] = (DataMasterBase_o *)v795;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[120], (int32_t)v795, v554, v796);
  v797 = (EventRewardMaster_o *)sub_1BCB244(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v797, 0LL);
  if ( v797 )
  {
    v552 = sub_1BCB134(v797, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1649;
  v550->m_Items[121] = (DataMasterBase_o *)v797;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[121], (int32_t)v797, v554, v798);
  v799 = (EventDetailMaster_o *)sub_1BCB244(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v799, 0LL);
  if ( v799 )
  {
    v552 = sub_1BCB134(v799, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1649;
  v550->m_Items[122] = (DataMasterBase_o *)v799;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[122], (int32_t)v799, v554, v800);
  v801 = (EventServantMaster_o *)sub_1BCB244(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v801, 0LL);
  if ( v801 )
  {
    v552 = sub_1BCB134(v801, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1649;
  v550->m_Items[123] = (DataMasterBase_o *)v801;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[123], (int32_t)v801, v554, v802);
  v803 = (BoxGachaMaster_o *)sub_1BCB244(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v803, 0LL);
  if ( v803 )
  {
    v552 = sub_1BCB134(v803, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1649;
  v550->m_Items[124] = (DataMasterBase_o *)v803;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[124], (int32_t)v803, v554, v804);
  v805 = (BoxGachaBaseMaster_o *)sub_1BCB244(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v805, 0LL);
  if ( v805 )
  {
    v552 = sub_1BCB134(v805, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1649;
  v550->m_Items[125] = (DataMasterBase_o *)v805;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[125], (int32_t)v805, v554, v806);
  v807 = (BoxGachaTalkMaster_o *)sub_1BCB244(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v807, 0LL);
  if ( v807 )
  {
    v552 = sub_1BCB134(v807, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1649;
  v550->m_Items[126] = (DataMasterBase_o *)v807;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[126], (int32_t)v807, v554, v808);
  v809 = (UserBoxGachaMaster_o *)sub_1BCB244(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v809, 0LL);
  if ( v809 )
  {
    v552 = sub_1BCB134(v809, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1649;
  v550->m_Items[127] = (DataMasterBase_o *)v809;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[127], (int32_t)v809, v554, v810);
  v811 = (BoxGachaHistoryMaster_o *)sub_1BCB244(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v811, 0LL);
  if ( v811 )
  {
    v552 = sub_1BCB134(v811, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1649;
  v550->m_Items[128] = (DataMasterBase_o *)v811;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[128], (int32_t)v811, v554, v812);
  v813 = (BattleBgMaster_o *)sub_1BCB244(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v813, 0LL);
  if ( v813 )
  {
    v552 = sub_1BCB134(v813, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1649;
  v550->m_Items[129] = (DataMasterBase_o *)v813;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[129], (int32_t)v813, v554, v814);
  v815 = (TipsBattleMaster_o *)sub_1BCB244(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v815, 0LL);
  if ( v815 )
  {
    v552 = sub_1BCB134(v815, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1649;
  v550->m_Items[130] = (DataMasterBase_o *)v815;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[130], (int32_t)v815, v554, v816);
  v817 = (UserLoginMaster_o *)sub_1BCB244(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v817, 0LL);
  if ( v817 )
  {
    v552 = sub_1BCB134(v817, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1649;
  v550->m_Items[131] = (DataMasterBase_o *)v817;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[131], (int32_t)v817, v554, v818);
  v819 = (VoiceMaster_o *)sub_1BCB244(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v819, 0LL);
  if ( v819 )
  {
    v552 = sub_1BCB134(v819, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1649;
  v550->m_Items[132] = (DataMasterBase_o *)v819;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[132], (int32_t)v819, v554, v820);
  v821 = (EventRewardExtraMaster_o *)sub_1BCB244(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v821, 0LL);
  if ( v821 )
  {
    v552 = sub_1BCB134(v821, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1649;
  v550->m_Items[133] = (DataMasterBase_o *)v821;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[133], (int32_t)v821, v554, v822);
  v823 = (EventMissionMaster_o *)sub_1BCB244(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v823, 0LL);
  if ( v823 )
  {
    v552 = sub_1BCB134(v823, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1649;
  v550->m_Items[134] = (DataMasterBase_o *)v823;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[134], (int32_t)v823, v554, v824);
  v825 = (EventMissionActionMaster_o *)sub_1BCB244(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v825, 0LL);
  if ( v825 )
  {
    v552 = sub_1BCB134(v825, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1649;
  v550->m_Items[135] = (DataMasterBase_o *)v825;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[135], (int32_t)v825, v554, v826);
  v827 = (EventMissionActionAddMaster_o *)sub_1BCB244(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v827, 0LL);
  if ( v827 )
  {
    v552 = sub_1BCB134(v827, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1649;
  v550->m_Items[136] = (DataMasterBase_o *)v827;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[136], (int32_t)v827, v554, v828);
  v829 = (EventMissionConditionMaster_o *)sub_1BCB244(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v829, 0LL);
  if ( v829 )
  {
    v552 = sub_1BCB134(v829, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1649;
  v550->m_Items[137] = (DataMasterBase_o *)v829;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[137], (int32_t)v829, v554, v830);
  v831 = (EventMissionCondDetailMaster_o *)sub_1BCB244(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v831, 0LL);
  if ( v831 )
  {
    v552 = sub_1BCB134(v831, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1649;
  v550->m_Items[138] = (DataMasterBase_o *)v831;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[138], (int32_t)v831, v554, v832);
  v833 = (EventMissionAddMaster_o *)sub_1BCB244(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v833, 0LL);
  if ( v833 )
  {
    v552 = sub_1BCB134(v833, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1649;
  v550->m_Items[139] = (DataMasterBase_o *)v833;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[139], (int32_t)v833, v554, v834);
  v835 = (CompleteMissionMaster_o *)sub_1BCB244(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v835, 0LL);
  if ( v835 )
  {
    v552 = sub_1BCB134(v835, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1649;
  v550->m_Items[140] = (DataMasterBase_o *)v835;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[140], (int32_t)v835, v554, v836);
  v837 = (EventRewardSetMaster_o *)sub_1BCB244(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v837, 0LL);
  if ( v837 )
  {
    v552 = sub_1BCB134(v837, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1649;
  v550->m_Items[141] = (DataMasterBase_o *)v837;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[141], (int32_t)v837, v554, v838);
  v839 = (UserEventMissionMaster_o *)sub_1BCB244(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v839, 0LL);
  if ( v839 )
  {
    v552 = sub_1BCB134(v839, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1649;
  v550->m_Items[142] = (DataMasterBase_o *)v839;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[142], (int32_t)v839, v554, v840);
  v841 = (UserEventMissionCondDetailMaster_o *)sub_1BCB244(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v841, 0LL);
  if ( v841 )
  {
    v552 = sub_1BCB134(v841, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1649;
  v550->m_Items[143] = (DataMasterBase_o *)v841;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[143], (int32_t)v841, v554, v842);
  v843 = (BoxGachaBaseDetailMaster_o *)sub_1BCB244(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v843, 0LL);
  if ( v843 )
  {
    v552 = sub_1BCB134(v843, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1649;
  v550->m_Items[144] = (DataMasterBase_o *)v843;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[144], (int32_t)v843, v554, v844);
  v845 = (UserServantLeaderMaster_o *)sub_1BCB244(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v845, 0LL);
  if ( v845 )
  {
    v552 = sub_1BCB134(v845, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1649;
  v550->m_Items[145] = (DataMasterBase_o *)v845;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[145], (int32_t)v845, v554, v846);
  v847 = (ClosedMessageMaster_o *)sub_1BCB244(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v847, 0LL);
  if ( v847 )
  {
    v552 = sub_1BCB134(v847, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1649;
  v550->m_Items[146] = (DataMasterBase_o *)v847;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[146], (int32_t)v847, v554, v848);
  v849 = (FunctionGroupMaster_o *)sub_1BCB244(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v849, 0LL);
  if ( v849 )
  {
    v552 = sub_1BCB134(v849, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1649;
  v550->m_Items[147] = (DataMasterBase_o *)v849;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[147], (int32_t)v849, v554, v850);
  v851 = (EventRaidMaster_o *)sub_1BCB244(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v851, 0LL);
  if ( v851 )
  {
    v552 = sub_1BCB134(v851, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1649;
  v550->m_Items[148] = (DataMasterBase_o *)v851;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[148], (int32_t)v851, v554, v852);
  v853 = (TotalEventRaidMaster_o *)sub_1BCB244(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v853, 0LL);
  if ( v853 )
  {
    v552 = sub_1BCB134(v853, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1649;
  v550->m_Items[149] = (DataMasterBase_o *)v853;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[149], (int32_t)v853, v554, v854);
  v855 = (UserEventRaidMaster_o *)sub_1BCB244(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v855, 0LL);
  if ( v855 )
  {
    v552 = sub_1BCB134(v855, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1649;
  v550->m_Items[150] = (DataMasterBase_o *)v855;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[150], (int32_t)v855, v554, v856);
  v857 = (EventPointMaster_o *)sub_1BCB244(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v857, 0LL);
  if ( v857 )
  {
    v552 = sub_1BCB134(v857, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1649;
  v550->m_Items[151] = (DataMasterBase_o *)v857;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[151], (int32_t)v857, v554, v858);
  v859 = (EventPointGroupMaster_o *)sub_1BCB244(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v859, 0LL);
  if ( v859 )
  {
    v552 = sub_1BCB134(v859, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1649;
  v550->m_Items[152] = (DataMasterBase_o *)v859;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[152], (int32_t)v859, v554, v860);
  v861 = (TotalEventPointMaster_o *)sub_1BCB244(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v861, 0LL);
  if ( v861 )
  {
    v552 = sub_1BCB134(v861, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1649;
  v550->m_Items[153] = (DataMasterBase_o *)v861;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[153], (int32_t)v861, v554, v862);
  v863 = (UserEventPointMaster_o *)sub_1BCB244(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v863, 0LL);
  if ( v863 )
  {
    v552 = sub_1BCB134(v863, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1649;
  v550->m_Items[154] = (DataMasterBase_o *)v863;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[154], (int32_t)v863, v554, v864);
  v865 = (EventPointUpperMaster_o *)sub_1BCB244(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v865, 0LL);
  if ( v865 )
  {
    v552 = sub_1BCB134(v865, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1649;
  v550->m_Items[155] = (DataMasterBase_o *)v865;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[155], (int32_t)v865, v554, v866);
  v867 = (EventPointUpperReleaseMaster_o *)sub_1BCB244(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v867, 0LL);
  if ( v867 )
  {
    v552 = sub_1BCB134(v867, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1649;
  v550->m_Items[156] = (DataMasterBase_o *)v867;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[156], (int32_t)v867, v554, v868);
  v869 = (EventRaceMaster_o *)sub_1BCB244(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v869, 0LL);
  if ( v869 )
  {
    v552 = sub_1BCB134(v869, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1649;
  v550->m_Items[157] = (DataMasterBase_o *)v869;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[157], (int32_t)v869, v554, v870);
  v871 = (EventRaceResultMaster_o *)sub_1BCB244(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v871, 0LL);
  if ( v871 )
  {
    v552 = sub_1BCB134(v871, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1649;
  v550->m_Items[158] = (DataMasterBase_o *)v871;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[158], (int32_t)v871, v554, v872);
  v873 = (QuestRacePointMaster_o *)sub_1BCB244(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v873, 0LL);
  if ( v873 )
  {
    v552 = sub_1BCB134(v873, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1649;
  v550->m_Items[159] = (DataMasterBase_o *)v873;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[159], (int32_t)v873, v554, v874);
  v875 = (UserEventRaceMaster_o *)sub_1BCB244(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v875, 0LL);
  if ( v875 )
  {
    v552 = sub_1BCB134(v875, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1649;
  v550->m_Items[160] = (DataMasterBase_o *)v875;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[160], (int32_t)v875, v554, v876);
  v877 = (EventScriptMaster_o *)sub_1BCB244(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v877, 0LL);
  if ( v877 )
  {
    v552 = sub_1BCB134(v877, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1649;
  v550->m_Items[161] = (DataMasterBase_o *)v877;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[161], (int32_t)v877, v554, v878);
  v879 = (EventScriptReleaseMaster_o *)sub_1BCB244(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v879, 0LL);
  if ( v879 )
  {
    v552 = sub_1BCB134(v879, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1649;
  v550->m_Items[162] = (DataMasterBase_o *)v879;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[162], (int32_t)v879, v554, v880);
  v881 = (UserPresentHistoryMaster_o *)sub_1BCB244(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v881, 0LL);
  if ( v881 )
  {
    v552 = sub_1BCB134(v881, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1649;
  v550->m_Items[163] = (DataMasterBase_o *)v881;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[163], (int32_t)v881, v554, v882);
  v883 = (MstMissionMaster_o *)sub_1BCB244(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v883, 0LL);
  if ( v883 )
  {
    v552 = sub_1BCB134(v883, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1649;
  v550->m_Items[164] = (DataMasterBase_o *)v883;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[164], (int32_t)v883, v554, v884);
  v885 = (ServantExceedMaster_o *)sub_1BCB244(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v885, 0LL);
  if ( v885 )
  {
    v552 = sub_1BCB134(v885, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1649;
  v550->m_Items[165] = (DataMasterBase_o *)v885;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[165], (int32_t)v885, v554, v886);
  v887 = (PartialMaintenanceMaster_o *)sub_1BCB244(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v887, 0LL);
  if ( v887 )
  {
    v552 = sub_1BCB134(v887, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1649;
  v550->m_Items[166] = (DataMasterBase_o *)v887;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[166], (int32_t)v887, v554, v888);
  v889 = (GuideMaster_o *)sub_1BCB244(GuideMaster_TypeInfo);
  GuideMaster___ctor(v889, 0LL);
  if ( v889 )
  {
    v552 = sub_1BCB134(v889, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1649;
  v550->m_Items[167] = (DataMasterBase_o *)v889;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[167], (int32_t)v889, v554, v890);
  v891 = (MstMissionDisplayInfoMaster_o *)sub_1BCB244(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v891, 0LL);
  if ( v891 )
  {
    v552 = sub_1BCB134(v891, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1649;
  v550->m_Items[168] = (DataMasterBase_o *)v891;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[168], (int32_t)v891, v554, v892);
  v893 = (GachaGroupMaster_o *)sub_1BCB244(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v893, 0LL);
  if ( v893 )
  {
    v552 = sub_1BCB134(v893, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1649;
  v550->m_Items[169] = (DataMasterBase_o *)v893;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[169], (int32_t)v893, v554, v894);
  v895 = (QuestResetMaster_o *)sub_1BCB244(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v895, 0LL);
  if ( v895 )
  {
    v552 = sub_1BCB134(v895, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1649;
  v550->m_Items[170] = (DataMasterBase_o *)v895;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[170], (int32_t)v895, v554, v896);
  v897 = (WarAddMaster_o *)sub_1BCB244(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v897, 0LL);
  if ( v897 )
  {
    v552 = sub_1BCB134(v897, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1649;
  v550->m_Items[171] = (DataMasterBase_o *)v897;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[171], (int32_t)v897, v554, v898);
  v899 = (EventItemDisplayMaster_o *)sub_1BCB244(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v899, 0LL);
  if ( v899 )
  {
    v552 = sub_1BCB134(v899, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1649;
  v550->m_Items[172] = (DataMasterBase_o *)v899;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[172], (int32_t)v899, v554, v900);
  v901 = (EventItemDisplayGroupMaster_o *)sub_1BCB244(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v901, 0LL);
  if ( v901 )
  {
    v552 = sub_1BCB134(v901, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1649;
  v550->m_Items[173] = (DataMasterBase_o *)v901;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[173], (int32_t)v901, v554, v902);
  v903 = (EventItemDisplayReleaseMaster_o *)sub_1BCB244(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v903, 0LL);
  if ( v903 )
  {
    v552 = sub_1BCB134(v903, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1649;
  v550->m_Items[174] = (DataMasterBase_o *)v903;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[174], (int32_t)v903, v554, v904);
  v905 = (EventTutorialMaster_o *)sub_1BCB244(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v905, 0LL);
  if ( v905 )
  {
    v552 = sub_1BCB134(v905, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1649;
  v550->m_Items[175] = (DataMasterBase_o *)v905;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[175], (int32_t)v905, v554, v906);
  v907 = (EventTutorialCondMaster_o *)sub_1BCB244(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v907, 0LL);
  if ( v907 )
  {
    v552 = sub_1BCB134(v907, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1649;
  v550->m_Items[176] = (DataMasterBase_o *)v907;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[176], (int32_t)v907, v554, v908);
  v909 = (VoiceReleaseMaster_o *)sub_1BCB244(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v909, 0LL);
  if ( v909 )
  {
    v552 = sub_1BCB134(v909, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1649;
  v550->m_Items[177] = (DataMasterBase_o *)v909;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[177], (int32_t)v909, v554, v910);
  v911 = (EventSuperBossMaster_o *)sub_1BCB244(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v911, 0LL);
  if ( v911 )
  {
    v552 = sub_1BCB134(v911, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1649;
  v550->m_Items[178] = (DataMasterBase_o *)v911;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[178], (int32_t)v911, v554, v912);
  v913 = (UserSuperBossMaster_o *)sub_1BCB244(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v913, 0LL);
  if ( v913 )
  {
    v552 = sub_1BCB134(v913, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1649;
  v550->m_Items[179] = (DataMasterBase_o *)v913;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[179], (int32_t)v913, v554, v914);
  v915 = (QuestScriptMaster_o *)sub_1BCB244(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v915, 0LL);
  if ( v915 )
  {
    v552 = sub_1BCB134(v915, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1649;
  v550->m_Items[180] = (DataMasterBase_o *)v915;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[180], (int32_t)v915, v554, v916);
  v917 = (QuestScriptReleaseMaster_o *)sub_1BCB244(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v917, 0LL);
  if ( v917 )
  {
    v552 = sub_1BCB134(v917, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1649;
  v550->m_Items[181] = (DataMasterBase_o *)v917;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[181], (int32_t)v917, v554, v918);
  v919 = (MaterialFolderMaster_o *)sub_1BCB244(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v919, 0LL);
  if ( v919 )
  {
    v552 = sub_1BCB134(v919, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1649;
  v550->m_Items[182] = (DataMasterBase_o *)v919;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[182], (int32_t)v919, v554, v920);
  v921 = (RestrictionMaster_o *)sub_1BCB244(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v921, 0LL);
  if ( v921 )
  {
    v552 = sub_1BCB134(v921, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1649;
  v550->m_Items[183] = (DataMasterBase_o *)v921;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[183], (int32_t)v921, v554, v922);
  v923 = (QuestRestrictionMaster_o *)sub_1BCB244(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v923, 0LL);
  if ( v923 )
  {
    v552 = sub_1BCB134(v923, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1649;
  v550->m_Items[184] = (DataMasterBase_o *)v923;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[184], (int32_t)v923, v554, v924);
  v925 = (ServantVoiceRelationMaster_o *)sub_1BCB244(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v925, 0LL);
  if ( v925 )
  {
    v552 = sub_1BCB134(v925, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1649;
  v550->m_Items[185] = (DataMasterBase_o *)v925;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[185], (int32_t)v925, v554, v926);
  v927 = (ShopDetailMaster_o *)sub_1BCB244(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v927, 0LL);
  if ( v927 )
  {
    v552 = sub_1BCB134(v927, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1649;
  v550->m_Items[186] = (DataMasterBase_o *)v927;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[186], (int32_t)v927, v554, v928);
  v929 = (ServantScriptAddMaster_o *)sub_1BCB244(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v929, 0LL);
  if ( v929 )
  {
    v552 = sub_1BCB134(v929, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1649;
  v550->m_Items[187] = (DataMasterBase_o *)v929;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[187], (int32_t)v929, v554, v930);
  v931 = (CombineMaster_o *)sub_1BCB244(CombineMaster_TypeInfo);
  CombineMaster___ctor(v931, 0LL);
  if ( v931 )
  {
    v552 = sub_1BCB134(v931, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1649;
  v550->m_Items[188] = (DataMasterBase_o *)v931;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[188], (int32_t)v931, v554, v932);
  v933 = (AiFieldMaster_o *)sub_1BCB244(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v933, 0LL);
  if ( v933 )
  {
    v552 = sub_1BCB134(v933, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1649;
  v550->m_Items[189] = (DataMasterBase_o *)v933;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[189], (int32_t)v933, v554, v934);
  v935 = (ServantCommentAddMaster_o *)sub_1BCB244(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v935, 0LL);
  if ( v935 )
  {
    v552 = sub_1BCB134(v935, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1649;
  v550->m_Items[190] = (DataMasterBase_o *)v935;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[190], (int32_t)v935, v554, v936);
  v937 = (EventFilterMaster_o *)sub_1BCB244(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v937, 0LL);
  if ( v937 )
  {
    v552 = sub_1BCB134(v937, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1649;
  v550->m_Items[191] = (DataMasterBase_o *)v937;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[191], (int32_t)v937, v554, v938);
  v939 = (UserSupportDeckMaster_o *)sub_1BCB244(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v939, 0LL);
  if ( v939 )
  {
    v552 = sub_1BCB134(v939, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1649;
  v550->m_Items[192] = (DataMasterBase_o *)v939;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[192], (int32_t)v939, v554, v940);
  v941 = (EventRewardSceneMaster_o *)sub_1BCB244(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v941, 0LL);
  if ( v941 )
  {
    v552 = sub_1BCB134(v941, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1649;
  v550->m_Items[193] = (DataMasterBase_o *)v941;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[193], (int32_t)v941, v554, v942);
  v943 = (EventVoicePlayMaster_o *)sub_1BCB244(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v943, 0LL);
  if ( v943 )
  {
    v552 = sub_1BCB134(v943, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1649;
  v550->m_Items[194] = (DataMasterBase_o *)v943;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[194], (int32_t)v943, v554, v944);
  v945 = (GachaSubMaster_o *)sub_1BCB244(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v945, 0LL);
  if ( v945 )
  {
    v552 = sub_1BCB134(v945, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1649;
  v550->m_Items[195] = (DataMasterBase_o *)v945;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[195], (int32_t)v945, v554, v946);
  v947 = (GachaDetailMaster_o *)sub_1BCB244(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v947, 0LL);
  if ( v947 )
  {
    v552 = sub_1BCB134(v947, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1649;
  v550->m_Items[196] = (DataMasterBase_o *)v947;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[196], (int32_t)v947, v554, v948);
  v949 = (GachaBaseCollateralMaster_o *)sub_1BCB244(GachaBaseCollateralMaster_TypeInfo);
  GachaBaseCollateralMaster___ctor(v949, 0LL);
  if ( v949 )
  {
    v552 = sub_1BCB134(v949, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1649;
  v550->m_Items[197] = (DataMasterBase_o *)v949;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[197], (int32_t)v949, v554, v950);
  v951 = (GachaAdjustAddMaster_o *)sub_1BCB244(GachaAdjustAddMaster_TypeInfo);
  GachaAdjustAddMaster___ctor(v951, 0LL);
  if ( v951 )
  {
    v552 = sub_1BCB134(v951, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1649;
  v550->m_Items[198] = (DataMasterBase_o *)v951;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[198], (int32_t)v951, v554, v952);
  v953 = (GachaBonusSelectMaster_o *)sub_1BCB244(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v953, 0LL);
  if ( v953 )
  {
    v552 = sub_1BCB134(v953, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1649;
  v550->m_Items[199] = (DataMasterBase_o *)v953;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[199], (int32_t)v953, v554, v954);
  v955 = (GachaBonusSelectLineupMaster_o *)sub_1BCB244(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v955, 0LL);
  if ( v955 )
  {
    v552 = sub_1BCB134(v955, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1649;
  v550->m_Items[200] = (DataMasterBase_o *)v955;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[200], (int32_t)v955, v554, v956);
  v957 = (ServantChangeMaster_o *)sub_1BCB244(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v957, 0LL);
  if ( v957 )
  {
    v552 = sub_1BCB134(v957, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1649;
  v550->m_Items[201] = (DataMasterBase_o *)v957;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[201], (int32_t)v957, v554, v958);
  v959 = (VoiceCondMaster_o *)sub_1BCB244(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v959, 0LL);
  if ( v959 )
  {
    v552 = sub_1BCB134(v959, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1649;
  v550->m_Items[202] = (DataMasterBase_o *)v959;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[202], (int32_t)v959, v554, v960);
  v961 = (BgmReleaseMaster_o *)sub_1BCB244(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v961, 0LL);
  if ( v961 )
  {
    v552 = sub_1BCB134(v961, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1649;
  v550->m_Items[203] = (DataMasterBase_o *)v961;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[203], (int32_t)v961, v554, v962);
  v963 = (MyRoomAddMaster_o *)sub_1BCB244(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v963, 0LL);
  if ( v963 )
  {
    v552 = sub_1BCB134(v963, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1649;
  v550->m_Items[204] = (DataMasterBase_o *)v963;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[204], (int32_t)v963, v554, v964);
  v965 = (ShopActionMaster_o *)sub_1BCB244(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v965, 0LL);
  if ( v965 )
  {
    v552 = sub_1BCB134(v965, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1649;
  v550->m_Items[205] = (DataMasterBase_o *)v965;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[205], (int32_t)v965, v554, v966);
  v967 = (EventRewardSceneReleaseMaster_o *)sub_1BCB244(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v967, 0LL);
  if ( v967 )
  {
    v552 = sub_1BCB134(v967, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1649;
  v550->m_Items[206] = (DataMasterBase_o *)v967;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[206], (int32_t)v967, v554, v968);
  v969 = (QuestBehaviorMaster_o *)sub_1BCB244(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v969, 0LL);
  if ( v969 )
  {
    v552 = sub_1BCB134(v969, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1649;
  v550->m_Items[207] = (DataMasterBase_o *)v969;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[207], (int32_t)v969, v554, v970);
  v971 = (MapMaster_o *)sub_1BCB244(MapMaster_TypeInfo);
  MapMaster___ctor(v971, 0LL);
  if ( v971 )
  {
    v552 = sub_1BCB134(v971, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1649;
  v550->m_Items[208] = (DataMasterBase_o *)v971;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[208], (int32_t)v971, v554, v972);
  v973 = (MapCondMaster_o *)sub_1BCB244(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v973, 0LL);
  if ( v973 )
  {
    v552 = sub_1BCB134(v973, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1649;
  v550->m_Items[209] = (DataMasterBase_o *)v973;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[209], (int32_t)v973, v554, v974);
  v975 = (MapButtonMaster_o *)sub_1BCB244(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v975, 0LL);
  if ( v975 )
  {
    v552 = sub_1BCB134(v975, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1649;
  v550->m_Items[210] = (DataMasterBase_o *)v975;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[210], (int32_t)v975, v554, v976);
  v977 = (BannerAddMaster_o *)sub_1BCB244(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v977, 0LL);
  if ( v977 )
  {
    v552 = sub_1BCB134(v977, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1649;
  v550->m_Items[211] = (DataMasterBase_o *)v977;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[211], (int32_t)v977, v554, v978);
  v979 = (EventAddMaster_o *)sub_1BCB244(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v979, 0LL);
  if ( v979 )
  {
    v552 = sub_1BCB134(v979, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1649;
  v550->m_Items[212] = (DataMasterBase_o *)v979;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[212], (int32_t)v979, v554, v980);
  v981 = (TotalLoginMaster_o *)sub_1BCB244(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v981, 0LL);
  if ( v981 )
  {
    v552 = sub_1BCB134(v981, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1649;
  v550->m_Items[213] = (DataMasterBase_o *)v981;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[213], (int32_t)v981, v554, v982);
  v983 = (ServantFilterMaster_o *)sub_1BCB244(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v983, 0LL);
  if ( v983 )
  {
    v552 = sub_1BCB134(v983, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1649;
  v550->m_Items[214] = (DataMasterBase_o *)v983;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[214], (int32_t)v983, v554, v984);
  v985 = (CombineCostumeMaster_o *)sub_1BCB244(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v985, 0LL);
  if ( v985 )
  {
    v552 = sub_1BCB134(v985, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1649;
  v550->m_Items[215] = (DataMasterBase_o *)v985;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[215], (int32_t)v985, v554, v986);
  v987 = (ServantCostumeMaster_o *)sub_1BCB244(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v987, 0LL);
  if ( v987 )
  {
    v552 = sub_1BCB134(v987, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1649;
  v550->m_Items[216] = (DataMasterBase_o *)v987;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[216], (int32_t)v987, v554, v988);
  v989 = (ServantCostumeReleaseMaster_o *)sub_1BCB244(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v989, 0LL);
  if ( v989 )
  {
    v552 = sub_1BCB134(v989, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1649;
  v550->m_Items[217] = (DataMasterBase_o *)v989;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[217], (int32_t)v989, v554, v990);
  v991 = (StaffPhotoMaster_o *)sub_1BCB244(StaffPhotoMaster_TypeInfo);
  StaffPhotoMaster___ctor(v991, 0LL);
  if ( v991 )
  {
    v552 = sub_1BCB134(v991, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1649;
  v550->m_Items[218] = (DataMasterBase_o *)v991;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[218], (int32_t)v991, v554, v992);
  v993 = (StaffPhotoCostumeMaster_o *)sub_1BCB244(StaffPhotoCostumeMaster_TypeInfo);
  StaffPhotoCostumeMaster___ctor(v993, 0LL);
  if ( v993 )
  {
    v552 = sub_1BCB134(v993, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1649;
  v550->m_Items[219] = (DataMasterBase_o *)v993;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[219], (int32_t)v993, v554, v994);
  v995 = (UserFriendRequestHistoryMaster_o *)sub_1BCB244(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v995, 0LL);
  if ( v995 )
  {
    v552 = sub_1BCB134(v995, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1649;
  v550->m_Items[220] = (DataMasterBase_o *)v995;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[220], (int32_t)v995, v554, v996);
  v997 = (UserBlacklistMaster_o *)sub_1BCB244(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v997, 0LL);
  if ( v997 )
  {
    v552 = sub_1BCB134(v997, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1649;
  v550->m_Items[221] = (DataMasterBase_o *)v997;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[221], (int32_t)v997, v554, v998);
  v999 = (ItemSelectMaster_o *)sub_1BCB244(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v999, 0LL);
  if ( v999 )
  {
    v552 = sub_1BCB134(v999, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1649;
  v550->m_Items[222] = (DataMasterBase_o *)v999;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[222], (int32_t)v999, v554, v1000);
  v1001 = (TotalEventRaceMaster_o *)sub_1BCB244(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v1001, 0LL);
  if ( v1001 )
  {
    v552 = sub_1BCB134(v1001, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1649;
  v550->m_Items[223] = (DataMasterBase_o *)v1001;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[223], (int32_t)v1001, v554, v1002);
  v1003 = (EventPointGroupAddMaster_o *)sub_1BCB244(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v1003, 0LL);
  if ( v1003 )
  {
    v552 = sub_1BCB134(v1003, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1649;
  v550->m_Items[224] = (DataMasterBase_o *)v1003;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[224], (int32_t)v1003, v554, v1004);
  v1005 = (VoicePlayGroupMaster_o *)sub_1BCB244(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v1005, 0LL);
  if ( v1005 )
  {
    v552 = sub_1BCB134(v1005, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1649;
  v550->m_Items[225] = (DataMasterBase_o *)v1005;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[225], (int32_t)v1005, v554, v1006);
  v1007 = (VoicePlayCondMaster_o *)sub_1BCB244(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v1007, 0LL);
  if ( v1007 )
  {
    v552 = sub_1BCB134(v1007, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1649;
  v550->m_Items[226] = (DataMasterBase_o *)v1007;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[226], (int32_t)v1007, v554, v1008);
  v1009 = (GachaStoryAdjustMaster_o *)sub_1BCB244(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v1009, 0LL);
  if ( v1009 )
  {
    v552 = sub_1BCB134(v1009, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1649;
  v550->m_Items[227] = (DataMasterBase_o *)v1009;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[227], (int32_t)v1009, v554, v1010);
  v1011 = (ServantFlagMaster_o *)sub_1BCB244(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v1011, 0LL);
  if ( v1011 )
  {
    v552 = sub_1BCB134(v1011, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1649;
  v550->m_Items[228] = (DataMasterBase_o *)v1011;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[228], (int32_t)v1011, v554, v1012);
  v1013 = (ServantFlagReleaseMaster_o *)sub_1BCB244(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v1013, 0LL);
  if ( v1013 )
  {
    v552 = sub_1BCB134(v1013, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1649;
  v550->m_Items[229] = (DataMasterBase_o *)v1013;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[229], (int32_t)v1013, v554, v1014);
  v1015 = (EventLocationCampaignMaster_o *)sub_1BCB244(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v1015, 0LL);
  if ( v1015 )
  {
    v552 = sub_1BCB134(v1015, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1649;
  v550->m_Items[230] = (DataMasterBase_o *)v1015;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[230], (int32_t)v1015, v554, v1016);
  v1017 = (CampaignInfoMaster_o *)sub_1BCB244(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v1017, 0LL);
  if ( v1017 )
  {
    v552 = sub_1BCB134(v1017, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1649;
  v550->m_Items[231] = (DataMasterBase_o *)v1017;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[231], (int32_t)v1017, v554, v1018);
  v1019 = (DialogMessageMaster_o *)sub_1BCB244(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v1019, 0LL);
  if ( v1019 )
  {
    v552 = sub_1BCB134(v1019, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1649;
  v550->m_Items[232] = (DataMasterBase_o *)v1019;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[232], (int32_t)v1019, v554, v1020);
  v1021 = (ServantIndividualityMaster_o *)sub_1BCB244(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v1021, 0LL);
  if ( v1021 )
  {
    v552 = sub_1BCB134(v1021, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1649;
  v550->m_Items[233] = (DataMasterBase_o *)v1021;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[233], (int32_t)v1021, v554, v1022);
  v1023 = (BoardMessageMaster_o *)sub_1BCB244(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v1023, 0LL);
  if ( v1023 )
  {
    v552 = sub_1BCB134(v1023, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1649;
  v550->m_Items[234] = (DataMasterBase_o *)v1023;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[234], (int32_t)v1023, v554, v1024);
  v1025 = (BoardMessageReleaseMaster_o *)sub_1BCB244(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v1025, 0LL);
  if ( v1025 )
  {
    v552 = sub_1BCB134(v1025, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1649;
  v550->m_Items[235] = (DataMasterBase_o *)v1025;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[235], (int32_t)v1025, v554, v1026);
  v1027 = (EventServantFatigueMaster_o *)sub_1BCB244(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v1027, 0LL);
  if ( v1027 )
  {
    v552 = sub_1BCB134(v1027, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1649;
  v550->m_Items[236] = (DataMasterBase_o *)v1027;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[236], (int32_t)v1027, v554, v1028);
  v1029 = (UserEventDeckMaster_o *)sub_1BCB244(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v1029, 0LL);
  if ( v1029 )
  {
    v552 = sub_1BCB134(v1029, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1649;
  v550->m_Items[237] = (DataMasterBase_o *)v1029;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[237], (int32_t)v1029, v554, v1030);
  v1031 = (EventTowerMaster_o *)sub_1BCB244(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v1031, 0LL);
  if ( v1031 )
  {
    v552 = sub_1BCB134(v1031, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1649;
  v550->m_Items[238] = (DataMasterBase_o *)v1031;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[238], (int32_t)v1031, v554, v1032);
  v1033 = (EventTowerRewardMaster_o *)sub_1BCB244(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v1033, 0LL);
  if ( v1033 )
  {
    v552 = sub_1BCB134(v1033, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1649;
  v550->m_Items[239] = (DataMasterBase_o *)v1033;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[239], (int32_t)v1033, v554, v1034);
  v1035 = (EventBulletinBoardMaster_o *)sub_1BCB244(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v1035, 0LL);
  if ( v1035 )
  {
    v552 = sub_1BCB134(v1035, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1649;
  v550->m_Items[240] = (DataMasterBase_o *)v1035;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[240], (int32_t)v1035, v554, v1036);
  v1037 = (EventBulletinBoardReleaseMaster_o *)sub_1BCB244(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v1037, 0LL);
  if ( v1037 )
  {
    v552 = sub_1BCB134(v1037, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1649;
  v550->m_Items[241] = (DataMasterBase_o *)v1037;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[241], (int32_t)v1037, v554, v1038);
  v1039 = (EventFactoryMaster_o *)sub_1BCB244(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v1039, 0LL);
  if ( v1039 )
  {
    v552 = sub_1BCB134(v1039, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1649;
  v550->m_Items[242] = (DataMasterBase_o *)v1039;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[242], (int32_t)v1039, v554, v1040);
  v1041 = (ShopGroupMaster_o *)sub_1BCB244(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v1041, 0LL);
  if ( v1041 )
  {
    v552 = sub_1BCB134(v1041, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1649;
  v550->m_Items[243] = (DataMasterBase_o *)v1041;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[243], (int32_t)v1041, v554, v1042);
  v1043 = (AuraEffectMaster_o *)sub_1BCB244(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v1043, 0LL);
  if ( v1043 )
  {
    v552 = sub_1BCB134(v1043, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1649;
  v550->m_Items[244] = (DataMasterBase_o *)v1043;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[244], (int32_t)v1043, v554, v1044);
  v1045 = (AuraEffectPosOverwriteMaster_o *)sub_1BCB244(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v1045, 0LL);
  if ( v1045 )
  {
    v552 = sub_1BCB134(v1045, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1649;
  v550->m_Items[245] = (DataMasterBase_o *)v1045;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[245], (int32_t)v1045, v554, v1046);
  v1047 = (UserEventMissionFixMaster_o *)sub_1BCB244(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v1047, 0LL);
  if ( v1047 )
  {
    v552 = sub_1BCB134(v1047, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1649;
  v550->m_Items[246] = (DataMasterBase_o *)v1047;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[246], (int32_t)v1047, v554, v1048);
  v1049 = (NotEndEventMissionFixMaster_o *)sub_1BCB244(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v1049, 0LL);
  if ( v1049 )
  {
    v552 = sub_1BCB134(v1049, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1649;
  v550->m_Items[247] = (DataMasterBase_o *)v1049;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[247], (int32_t)v1049, v554, v1050);
  v1051 = (EnemyMstMaster_o *)sub_1BCB244(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v1051, 0LL);
  if ( v1051 )
  {
    v552 = sub_1BCB134(v1051, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1649;
  v550->m_Items[248] = (DataMasterBase_o *)v1051;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[248], (int32_t)v1051, v554, v1052);
  v1053 = (EnemyMstBattleMaster_o *)sub_1BCB244(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v1053, 0LL);
  if ( v1053 )
  {
    v552 = sub_1BCB134(v1053, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1649;
  v550->m_Items[249] = (DataMasterBase_o *)v1053;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[249], (int32_t)v1053, v554, v1054);
  v1055 = (ServantSkillReleaseMaster_o *)sub_1BCB244(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v1055, 0LL);
  if ( v1055 )
  {
    v552 = sub_1BCB134(v1055, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1649;
  v550->m_Items[250] = (DataMasterBase_o *)v1055;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[250], (int32_t)v1055, v554, v1056);
  v1057 = (ServantPassiveSkillReleaseMaster_o *)sub_1BCB244(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v1057, 0LL);
  if ( v1057 )
  {
    v552 = sub_1BCB134(v1057, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1649;
  v550->m_Items[251] = (DataMasterBase_o *)v1057;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[251], (int32_t)v1057, v554, v1058);
  v1059 = (ServantTreasureDeviceReleaseMaster_o *)sub_1BCB244(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v1059, 0LL);
  if ( v1059 )
  {
    v552 = sub_1BCB134(v1059, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1649;
  v550->m_Items[252] = (DataMasterBase_o *)v1059;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[252], (int32_t)v1059, v554, v1060);
  v1061 = (MapGimmickReleaseMaster_o *)sub_1BCB244(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v1061, 0LL);
  if ( v1061 )
  {
    v552 = sub_1BCB134(v1061, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1649;
  v550->m_Items[253] = (DataMasterBase_o *)v1061;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[253], (int32_t)v1061, v554, v1062);
  v1063 = (CommandCodeMaster_o *)sub_1BCB244(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v1063, 0LL);
  if ( v1063 )
  {
    v552 = sub_1BCB134(v1063, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1649;
  v550->m_Items[254] = (DataMasterBase_o *)v1063;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[254], (int32_t)v1063, v554, v1064);
  v1065 = (ServantCommandCodeUnlockMaster_o *)sub_1BCB244(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v1065, 0LL);
  if ( v1065 )
  {
    v552 = sub_1BCB134(v1065, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1649;
  v550->m_Items[255] = (DataMasterBase_o *)v1065;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[255], (int32_t)v1065, v554, v1066);
  v1067 = (UserCommandCodeMaster_o *)sub_1BCB244(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v1067, 0LL);
  if ( v1067 )
  {
    v552 = sub_1BCB134(v1067, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1649;
  v550->m_Items[256] = (DataMasterBase_o *)v1067;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[256], (int32_t)v1067, v554, v1068);
  v1069 = (UserCommandCodeCollectionMaster_o *)sub_1BCB244(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v1069, 0LL);
  if ( v1069 )
  {
    v552 = sub_1BCB134(v1069, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1649;
  v550->m_Items[257] = (DataMasterBase_o *)v1069;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[257], (int32_t)v1069, v554, v1070);
  v1071 = (UserServantCommandCodeMaster_o *)sub_1BCB244(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v1071, 0LL);
  if ( v1071 )
  {
    v552 = sub_1BCB134(v1071, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1649;
  v550->m_Items[258] = (DataMasterBase_o *)v1071;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[258], (int32_t)v1071, v554, v1072);
  v1073 = (UserServantCommandCardMaster_o *)sub_1BCB244(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v1073, 0LL);
  if ( v1073 )
  {
    v552 = sub_1BCB134(v1073, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1649;
  v550->m_Items[259] = (DataMasterBase_o *)v1073;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[259], (int32_t)v1073, v554, v1074);
  v1075 = (CommandCardRankParamMaster_o *)sub_1BCB244(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v1075, 0LL);
  if ( v1075 )
  {
    v552 = sub_1BCB134(v1075, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1649;
  v550->m_Items[260] = (DataMasterBase_o *)v1075;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[260], (int32_t)v1075, v554, v1076);
  v1077 = (CommandCodeSkillMaster_o *)sub_1BCB244(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v1077, 0LL);
  if ( v1077 )
  {
    v552 = sub_1BCB134(v1077, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1649;
  v550->m_Items[261] = (DataMasterBase_o *)v1077;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[261], (int32_t)v1077, v554, v1078);
  v1079 = (CommandCodeSkillReleaseMaster_o *)sub_1BCB244(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v1079, 0LL);
  if ( v1079 )
  {
    v552 = sub_1BCB134(v1079, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1649;
  v550->m_Items[262] = (DataMasterBase_o *)v1079;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[262], (int32_t)v1079, v554, v1080);
  v1081 = (CommandCodeCommentMaster_o *)sub_1BCB244(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v1081, 0LL);
  if ( v1081 )
  {
    v552 = sub_1BCB134(v1081, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1649;
  v550->m_Items[263] = (DataMasterBase_o *)v1081;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[263], (int32_t)v1081, v554, v1082);
  v1083 = (EventStatusMaster_o *)sub_1BCB244(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v1083, 0LL);
  if ( v1083 )
  {
    v552 = sub_1BCB134(v1083, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1649;
  v550->m_Items[264] = (DataMasterBase_o *)v1083;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[264], (int32_t)v1083, v554, v1084);
  v1085 = (EventStatusQuestMaster_o *)sub_1BCB244(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v1085, 0LL);
  if ( v1085 )
  {
    v552 = sub_1BCB134(v1085, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1649;
  v550->m_Items[265] = (DataMasterBase_o *)v1085;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[265], (int32_t)v1085, v554, v1086);
  v1087 = (CommonRestrictionMaster_o *)sub_1BCB244(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v1087, 0LL);
  if ( v1087 )
  {
    v552 = sub_1BCB134(v1087, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1649;
  v550->m_Items[266] = (DataMasterBase_o *)v1087;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[266], (int32_t)v1087, v554, v1088);
  v1089 = (EventPointBuffMaster_o *)sub_1BCB244(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v1089, 0LL);
  if ( v1089 )
  {
    v552 = sub_1BCB134(v1089, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1649;
  v550->m_Items[267] = (DataMasterBase_o *)v1089;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[267], (int32_t)v1089, v554, v1090);
  v1091 = (UserFollowMaster_o *)sub_1BCB244(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v1091, 0LL);
  if ( v1091 )
  {
    v552 = sub_1BCB134(v1091, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1649;
  v550->m_Items[268] = (DataMasterBase_o *)v1091;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[268], (int32_t)v1091, v554, v1092);
  v1093 = (EventRewardGuideReleaseMaster_o *)sub_1BCB244(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v1093, 0LL);
  if ( v1093 )
  {
    v552 = sub_1BCB134(v1093, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1649;
  v550->m_Items[269] = (DataMasterBase_o *)v1093;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[269], (int32_t)v1093, v554, v1094);
  v1095 = (NpcServantEquipMaster_o *)sub_1BCB244(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v1095, 0LL);
  if ( v1095 )
  {
    v552 = sub_1BCB134(v1095, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1649;
  v550->m_Items[270] = (DataMasterBase_o *)v1095;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[270], (int32_t)v1095, v554, v1096);
  v1097 = (EventCampaignReleaseMaster_o *)sub_1BCB244(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v1097, 0LL);
  if ( v1097 )
  {
    v552 = sub_1BCB134(v1097, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1649;
  v550->m_Items[271] = (DataMasterBase_o *)v1097;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[271], (int32_t)v1097, v554, v1098);
  v1099 = (ServantMaterialFolderMaster_o *)sub_1BCB244(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v1099, 0LL);
  if ( v1099 )
  {
    v552 = sub_1BCB134(v1099, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1649;
  v550->m_Items[272] = (DataMasterBase_o *)v1099;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[272], (int32_t)v1099, v554, v1100);
  v1101 = (EventEquipSkillReleaseMaster_o *)sub_1BCB244(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v1101, 0LL);
  if ( v1101 )
  {
    v552 = sub_1BCB134(v1101, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1649;
  v550->m_Items[273] = (DataMasterBase_o *)v1101;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[273], (int32_t)v1101, v554, v1102);
  v1103 = (EventPointActivityMaster_o *)sub_1BCB244(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v1103, 0LL);
  if ( v1103 )
  {
    v552 = sub_1BCB134(v1103, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1649;
  v550->m_Items[274] = (DataMasterBase_o *)v1103;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[274], (int32_t)v1103, v554, v1104);
  v1105 = (FunctionCategoryMaster_o *)sub_1BCB244(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v1105, 0LL);
  if ( v1105 )
  {
    v552 = sub_1BCB134(v1105, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1649;
  v550->m_Items[275] = (DataMasterBase_o *)v1105;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[275], (int32_t)v1105, v554, v1106);
  v1107 = (QuestPickupMaster_o *)sub_1BCB244(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v1107, 0LL);
  if ( v1107 )
  {
    v552 = sub_1BCB134(v1107, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1649;
  v550->m_Items[276] = (DataMasterBase_o *)v1107;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[276], (int32_t)v1107, v554, v1108);
  v1109 = (EventUiMaster_o *)sub_1BCB244(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v1109, 0LL);
  if ( v1109 )
  {
    v552 = sub_1BCB134(v1109, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1649;
  v550->m_Items[277] = (DataMasterBase_o *)v1109;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[277], (int32_t)v1109, v554, v1110);
  v1111 = (EventUiReleaseMaster_o *)sub_1BCB244(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v1111, 0LL);
  if ( v1111 )
  {
    v552 = sub_1BCB134(v1111, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1649;
  v550->m_Items[278] = (DataMasterBase_o *)v1111;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[278], (int32_t)v1111, v554, v1112);
  v1113 = (EventUiValueMaster_o *)sub_1BCB244(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v1113, 0LL);
  if ( v1113 )
  {
    v552 = sub_1BCB134(v1113, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1649;
  v550->m_Items[279] = (DataMasterBase_o *)v1113;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[279], (int32_t)v1113, v554, v1114);
  v1115 = (EventConquestRewardMaster_o *)sub_1BCB244(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v1115, 0LL);
  if ( v1115 )
  {
    v552 = sub_1BCB134(v1115, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1649;
  v550->m_Items[280] = (DataMasterBase_o *)v1115;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[280], (int32_t)v1115, v554, v1116);
  v1117 = (NpcFollowerReleaseMaster_o *)sub_1BCB244(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v1117, 0LL);
  if ( v1117 )
  {
    v552 = sub_1BCB134(v1117, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1649;
  v550->m_Items[281] = (DataMasterBase_o *)v1117;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[281], (int32_t)v1117, v554, v1118);
  v1119 = (EventBonusFilterMaster_o *)sub_1BCB244(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v1119, 0LL);
  if ( v1119 )
  {
    v552 = sub_1BCB134(v1119, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1649;
  v550->m_Items[282] = (DataMasterBase_o *)v1119;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[282], (int32_t)v1119, v554, v1120);
  v1121 = (EventBonusFilterGroupInfoMaster_o *)sub_1BCB244(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v1121, 0LL);
  if ( v1121 )
  {
    v552 = sub_1BCB134(v1121, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1649;
  v550->m_Items[283] = (DataMasterBase_o *)v1121;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[283], (int32_t)v1121, v554, v1122);
  v1123 = (EventBonusFilterGroupMemberMaster_o *)sub_1BCB244(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v1123, 0LL);
  if ( v1123 )
  {
    v552 = sub_1BCB134(v1123, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1649;
  v550->m_Items[284] = (DataMasterBase_o *)v1123;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[284], (int32_t)v1123, v554, v1124);
  v1125 = (UserGachaExtraCountMaster_o *)sub_1BCB244(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v1125, 0LL);
  if ( v1125 )
  {
    v552 = sub_1BCB134(v1125, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1649;
  v550->m_Items[285] = (DataMasterBase_o *)v1125;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[285], (int32_t)v1125, v554, v1126);
  v1127 = (PrivilegeMaster_o *)sub_1BCB244(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v1127, 0LL);
  if ( v1127 )
  {
    v552 = sub_1BCB134(v1127, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1649;
  v550->m_Items[286] = (DataMasterBase_o *)v1127;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[286], (int32_t)v1127, v554, v1128);
  v1129 = (UserPrivilegeMaster_o *)sub_1BCB244(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v1129, 0LL);
  if ( v1129 )
  {
    v552 = sub_1BCB134(v1129, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1649;
  v550->m_Items[287] = (DataMasterBase_o *)v1129;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[287], (int32_t)v1129, v554, v1130);
  v1131 = (UserQuestRouteMaster_o *)sub_1BCB244(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v1131, 0LL);
  if ( v1131 )
  {
    v552 = sub_1BCB134(v1131, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1649;
  v550->m_Items[288] = (DataMasterBase_o *)v1131;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[288], (int32_t)v1131, v554, v1132);
  v1133 = (EventBossStatusUiMaster_o *)sub_1BCB244(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v1133, 0LL);
  if ( v1133 )
  {
    v552 = sub_1BCB134(v1133, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1649;
  v550->m_Items[289] = (DataMasterBase_o *)v1133;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[289], (int32_t)v1133, v554, v1134);
  v1135 = (CommonReleaseMaster_o *)sub_1BCB244(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v1135, 0LL);
  if ( v1135 )
  {
    v552 = sub_1BCB134(v1135, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1649;
  v550->m_Items[290] = (DataMasterBase_o *)v1135;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[290], (int32_t)v1135, v554, v1136);
  v1137 = (QuestSpotReleaseMaster_o *)sub_1BCB244(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v1137, 0LL);
  if ( v1137 )
  {
    v552 = sub_1BCB134(v1137, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1649;
  v550->m_Items[291] = (DataMasterBase_o *)v1137;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[291], (int32_t)v1137, v554, v1138);
  v1139 = (VoiceMaterialCondMaster_o *)sub_1BCB244(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v1139, 0LL);
  if ( v1139 )
  {
    v552 = sub_1BCB134(v1139, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1649;
  v550->m_Items[292] = (DataMasterBase_o *)v1139;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[292], (int32_t)v1139, v554, v1140);
  v1141 = (ClassRelationOverwriteMaster_o *)sub_1BCB244(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v1141, 0LL);
  if ( v1141 )
  {
    v552 = sub_1BCB134(v1141, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1649;
  v550->m_Items[293] = (DataMasterBase_o *)v1141;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[293], (int32_t)v1141, v554, v1142);
  v1143 = (EventGroupMaster_o *)sub_1BCB244(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v1143, 0LL);
  if ( v1143 )
  {
    v552 = sub_1BCB134(v1143, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1649;
  v550->m_Items[294] = (DataMasterBase_o *)v1143;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[294], (int32_t)v1143, v554, v1144);
  v1145 = (TotalBoxGachaMaster_o *)sub_1BCB244(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v1145, 0LL);
  if ( v1145 )
  {
    v552 = sub_1BCB134(v1145, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1649;
  v550->m_Items[295] = (DataMasterBase_o *)v1145;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[295], (int32_t)v1145, v554, v1146);
  v1147 = (ServantTreasureDeviceDamageMaster_o *)sub_1BCB244(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v1147, 0LL);
  if ( v1147 )
  {
    v552 = sub_1BCB134(v1147, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1649;
  v550->m_Items[296] = (DataMasterBase_o *)v1147;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[296], (int32_t)v1147, v554, v1148);
  v1149 = (UserEventServantFatigueMaster_o *)sub_1BCB244(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v1149, 0LL);
  if ( v1149 )
  {
    v552 = sub_1BCB134(v1149, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1649;
  v550->m_Items[297] = (DataMasterBase_o *)v1149;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[297], (int32_t)v1149, v554, v1150);
  v1151 = (EventRewardBgMaster_o *)sub_1BCB244(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v1151, 0LL);
  if ( v1151 )
  {
    v552 = sub_1BCB134(v1151, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1649;
  v550->m_Items[298] = (DataMasterBase_o *)v1151;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[298], (int32_t)v1151, v554, v1152);
  v1153 = (EventFatigueRecoveryMaster_o *)sub_1BCB244(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v1153, 0LL);
  if ( v1153 )
  {
    v552 = sub_1BCB134(v1153, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1649;
  v550->m_Items[299] = (DataMasterBase_o *)v1153;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[299], (int32_t)v1153, v554, v1154);
  v1155 = (EventBoostItemUsedMaster_o *)sub_1BCB244(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v1155, 0LL);
  if ( v1155 )
  {
    v552 = sub_1BCB134(v1155, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1649;
  v550->m_Items[300] = (DataMasterBase_o *)v1155;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[300], (int32_t)v1155, v554, v1156);
  v1157 = (StatusEffectPosOverwriteMaster_o *)sub_1BCB244(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v1157, 0LL);
  if ( v1157 )
  {
    v552 = sub_1BCB134(v1157, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1649;
  v550->m_Items[301] = (DataMasterBase_o *)v1157;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[301], (int32_t)v1157, v554, v1158);
  v1159 = (QuestPhaseDetailAddMaster_o *)sub_1BCB244(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v1159, 0LL);
  if ( v1159 )
  {
    v552 = sub_1BCB134(v1159, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1649;
  v550->m_Items[302] = (DataMasterBase_o *)v1159;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[302], (int32_t)v1159, v554, v1160);
  v1161 = (VoiceClosedMessageMaster_o *)sub_1BCB244(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v1161, 0LL);
  if ( v1161 )
  {
    v552 = sub_1BCB134(v1161, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1649;
  v550->m_Items[303] = (DataMasterBase_o *)v1161;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[303], (int32_t)v1161, v554, v1162);
  v1163 = (ReprintStageMaster_o *)sub_1BCB244(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v1163, 0LL);
  if ( v1163 )
  {
    v552 = sub_1BCB134(v1163, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1649;
  v550->m_Items[304] = (DataMasterBase_o *)v1163;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[304], (int32_t)v1163, v554, v1164);
  v1165 = (UserCombineExpMaster_o *)sub_1BCB244(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v1165, 0LL);
  if ( v1165 )
  {
    v552 = sub_1BCB134(v1165, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1649;
  v550->m_Items[305] = (DataMasterBase_o *)v1165;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[305], (int32_t)v1165, v554, v1166);
  v1167 = (EventBoardGameCellMaster_o *)sub_1BCB244(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v1167, 0LL);
  if ( v1167 )
  {
    v552 = sub_1BCB134(v1167, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1649;
  v550->m_Items[306] = (DataMasterBase_o *)v1167;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[306], (int32_t)v1167, v554, v1168);
  v1169 = (EventBoardGameTokenMaster_o *)sub_1BCB244(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v1169, 0LL);
  if ( v1169 )
  {
    v552 = sub_1BCB134(v1169, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1649;
  v550->m_Items[307] = (DataMasterBase_o *)v1169;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[307], (int32_t)v1169, v554, v1170);
  v1171 = (EventBoardGameTokenRewardMaster_o *)sub_1BCB244(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v1171, 0LL);
  if ( v1171 )
  {
    v552 = sub_1BCB134(v1171, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1649;
  v550->m_Items[308] = (DataMasterBase_o *)v1171;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[308], (int32_t)v1171, v554, v1172);
  v1173 = (UserEventBoardGameTokenMaster_o *)sub_1BCB244(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v1173, 0LL);
  if ( v1173 )
  {
    v552 = sub_1BCB134(v1173, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1649;
  v550->m_Items[309] = (DataMasterBase_o *)v1173;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[309], (int32_t)v1173, v554, v1174);
  v1175 = (ServantAnimationOverwriteMaster_o *)sub_1BCB244(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v1175, 0LL);
  if ( v1175 )
  {
    v552 = sub_1BCB134(v1175, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1649;
  v550->m_Items[310] = (DataMasterBase_o *)v1175;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[310], (int32_t)v1175, v554, v1176);
  v1177 = (OpeningMovieMaster_o *)sub_1BCB244(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v1177, 0LL);
  if ( v1177 )
  {
    v552 = sub_1BCB134(v1177, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1649;
  v550->m_Items[311] = (DataMasterBase_o *)v1177;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[311], (int32_t)v1177, v554, v1178);
  v1179 = (ServantLimitSpoilerProtectionMaster_o *)sub_1BCB244(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v1179, 0LL);
  if ( v1179 )
  {
    v552 = sub_1BCB134(v1179, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1649;
  v550->m_Items[312] = (DataMasterBase_o *)v1179;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[312], (int32_t)v1179, v554, v1180);
  v1181 = (PickupUserFollowerMaster_o *)sub_1BCB244(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v1181, 0LL);
  if ( v1181 )
  {
    v552 = sub_1BCB134(v1181, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1649;
  v550->m_Items[313] = (DataMasterBase_o *)v1181;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[313], (int32_t)v1181, v554, v1182);
  v1183 = (ServantCollectionMaster_o *)sub_1BCB244(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v1183, 0LL);
  if ( v1183 )
  {
    v552 = sub_1BCB134(v1183, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1649;
  v550->m_Items[314] = (DataMasterBase_o *)v1183;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[314], (int32_t)v1183, v554, v1184);
  v1185 = (GachaBehaviorMaster_o *)sub_1BCB244(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v1185, 0LL);
  if ( v1185 )
  {
    v552 = sub_1BCB134(v1185, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1649;
  v550->m_Items[315] = (DataMasterBase_o *)v1185;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[315], (int32_t)v1185, v554, v1186);
  v1187 = (EventQuestCooltimeMaster_o *)sub_1BCB244(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v1187, 0LL);
  if ( v1187 )
  {
    v552 = sub_1BCB134(v1187, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1649;
  v550->m_Items[316] = (DataMasterBase_o *)v1187;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[316], (int32_t)v1187, v554, v1188);
  v1189 = (UserEventQuestCooltimeMaster_o *)sub_1BCB244(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v1189, 0LL);
  if ( v1189 )
  {
    v552 = sub_1BCB134(v1189, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1649;
  v550->m_Items[317] = (DataMasterBase_o *)v1189;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[317], (int32_t)v1189, v554, v1190);
  v1191 = (BoostMaster_o *)sub_1BCB244(BoostMaster_TypeInfo);
  BoostMaster___ctor(v1191, 0LL);
  if ( v1191 )
  {
    v552 = sub_1BCB134(v1191, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1649;
  v550->m_Items[318] = (DataMasterBase_o *)v1191;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[318], (int32_t)v1191, v554, v1192);
  v1193 = (WarBoardMaster_o *)sub_1BCB244(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v1193, 0LL);
  if ( v1193 )
  {
    v552 = sub_1BCB134(v1193, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1649;
  v550->m_Items[319] = (DataMasterBase_o *)v1193;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[319], (int32_t)v1193, v554, v1194);
  v1195 = (WarBoardSquareMaster_o *)sub_1BCB244(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v1195, 0LL);
  if ( v1195 )
  {
    v552 = sub_1BCB134(v1195, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1649;
  v550->m_Items[320] = (DataMasterBase_o *)v1195;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[320], (int32_t)v1195, v554, v1196);
  v1197 = (WarBoardRoadMaster_o *)sub_1BCB244(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v1197, 0LL);
  if ( v1197 )
  {
    v552 = sub_1BCB134(v1197, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1649;
  v550->m_Items[321] = (DataMasterBase_o *)v1197;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[321], (int32_t)v1197, v554, v1198);
  v1199 = (WarBoardStageMaster_o *)sub_1BCB244(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v1199, 0LL);
  if ( v1199 )
  {
    v552 = sub_1BCB134(v1199, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1649;
  v550->m_Items[322] = (DataMasterBase_o *)v1199;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[322], (int32_t)v1199, v554, v1200);
  v1201 = (WarBoardActionPointMaster_o *)sub_1BCB244(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v1201, 0LL);
  if ( v1201 )
  {
    v552 = sub_1BCB134(v1201, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1649;
  v550->m_Items[323] = (DataMasterBase_o *)v1201;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[323], (int32_t)v1201, v554, v1202);
  v1203 = (WarBoardActionTrendMaster_o *)sub_1BCB244(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v1203, 0LL);
  if ( v1203 )
  {
    v552 = sub_1BCB134(v1203, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1649;
  v550->m_Items[324] = (DataMasterBase_o *)v1203;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[324], (int32_t)v1203, v554, v1204);
  v1205 = (WarBoardTacticalTrendMaster_o *)sub_1BCB244(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v1205, 0LL);
  if ( v1205 )
  {
    v552 = sub_1BCB134(v1205, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1649;
  v550->m_Items[325] = (DataMasterBase_o *)v1205;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[325], (int32_t)v1205, v554, v1206);
  v1207 = (WarBoardStageLayoutMaster_o *)sub_1BCB244(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v1207, 0LL);
  if ( v1207 )
  {
    v552 = sub_1BCB134(v1207, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1649;
  v550->m_Items[326] = (DataMasterBase_o *)v1207;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[326], (int32_t)v1207, v554, v1208);
  v1209 = (WarBoardStageNpcMaster_o *)sub_1BCB244(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v1209, 0LL);
  if ( v1209 )
  {
    v552 = sub_1BCB134(v1209, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1649;
  v550->m_Items[327] = (DataMasterBase_o *)v1209;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[327], (int32_t)v1209, v554, v1210);
  v1211 = (WarBoardStageWallMaster_o *)sub_1BCB244(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v1211, 0LL);
  if ( v1211 )
  {
    v552 = sub_1BCB134(v1211, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1649;
  v550->m_Items[328] = (DataMasterBase_o *)v1211;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[328], (int32_t)v1211, v554, v1212);
  v1213 = (WarBoardAIMaster_o *)sub_1BCB244(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v1213, 0LL);
  if ( v1213 )
  {
    v552 = sub_1BCB134(v1213, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1649;
  v550->m_Items[329] = (DataMasterBase_o *)v1213;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[329], (int32_t)v1213, v554, v1214);
  v1215 = (WarBoardRatingBaseMaster_o *)sub_1BCB244(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v1215, 0LL);
  if ( v1215 )
  {
    v552 = sub_1BCB134(v1215, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1649;
  v550->m_Items[330] = (DataMasterBase_o *)v1215;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[330], (int32_t)v1215, v554, v1216);
  v1217 = (WarBoardRatingOffsetMaster_o *)sub_1BCB244(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v1217, 0LL);
  if ( v1217 )
  {
    v552 = sub_1BCB134(v1217, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1649;
  v550->m_Items[331] = (DataMasterBase_o *)v1217;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[331], (int32_t)v1217, v554, v1218);
  v1219 = (WarBoardItemMaster_o *)sub_1BCB244(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v1219, 0LL);
  if ( v1219 )
  {
    v552 = sub_1BCB134(v1219, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1649;
  v550->m_Items[332] = (DataMasterBase_o *)v1219;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[332], (int32_t)v1219, v554, v1220);
  v1221 = (WarBoardTreasureMaster_o *)sub_1BCB244(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v1221, 0LL);
  if ( v1221 )
  {
    v552 = sub_1BCB134(v1221, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1649;
  v550->m_Items[333] = (DataMasterBase_o *)v1221;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[333], (int32_t)v1221, v554, v1222);
  v1223 = (WarBoardQuestMaster_o *)sub_1BCB244(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v1223, 0LL);
  if ( v1223 )
  {
    v552 = sub_1BCB134(v1223, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1649;
  v550->m_Items[334] = (DataMasterBase_o *)v1223;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[334], (int32_t)v1223, v554, v1224);
  v1225 = (WarBoardDataMaster_o *)sub_1BCB244(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v1225, 0LL);
  if ( v1225 )
  {
    v552 = sub_1BCB134(v1225, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1649;
  v550->m_Items[335] = (DataMasterBase_o *)v1225;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[335], (int32_t)v1225, v554, v1226);
  v1227 = (WarBoardIndividualityClassMaster_o *)sub_1BCB244(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v1227, 0LL);
  if ( v1227 )
  {
    v552 = sub_1BCB134(v1227, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1649;
  v550->m_Items[336] = (DataMasterBase_o *)v1227;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[336], (int32_t)v1227, v554, v1228);
  v1229 = (WarBoardActionTrendConditionMaster_o *)sub_1BCB244(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v1229, 0LL);
  if ( v1229 )
  {
    v552 = sub_1BCB134(v1229, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1649;
  v550->m_Items[337] = (DataMasterBase_o *)v1229;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[337], (int32_t)v1229, v554, v1230);
  v1231 = (WarBoardActionPointClassMaster_o *)sub_1BCB244(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v1231, 0LL);
  if ( v1231 )
  {
    v552 = sub_1BCB134(v1231, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1649;
  v550->m_Items[338] = (DataMasterBase_o *)v1231;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[338], (int32_t)v1231, v554, v1232);
  v1233 = (EventPanelMapMaster_o *)sub_1BCB244(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v1233, 0LL);
  if ( v1233 )
  {
    v552 = sub_1BCB134(v1233, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1649;
  v550->m_Items[339] = (DataMasterBase_o *)v1233;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[339], (int32_t)v1233, v554, v1234);
  v1235 = (EventPanelMapDetailMaster_o *)sub_1BCB244(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v1235, 0LL);
  if ( v1235 )
  {
    v552 = sub_1BCB134(v1235, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1649;
  v550->m_Items[340] = (DataMasterBase_o *)v1235;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[340], (int32_t)v1235, v554, v1236);
  v1237 = (EventPanelSpotMaster_o *)sub_1BCB244(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v1237, 0LL);
  if ( v1237 )
  {
    v552 = sub_1BCB134(v1237, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1649;
  v550->m_Items[341] = (DataMasterBase_o *)v1237;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[341], (int32_t)v1237, v554, v1238);
  v1239 = (EventPanelScanMaster_o *)sub_1BCB244(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v1239, 0LL);
  if ( v1239 )
  {
    v552 = sub_1BCB134(v1239, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1649;
  v550->m_Items[342] = (DataMasterBase_o *)v1239;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[342], (int32_t)v1239, v554, v1240);
  v1241 = (CommonConsumeMaster_o *)sub_1BCB244(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v1241, 0LL);
  if ( v1241 )
  {
    v552 = sub_1BCB134(v1241, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1649;
  v550->m_Items[343] = (DataMasterBase_o *)v1241;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[343], (int32_t)v1241, v554, v1242);
  v1243 = (UserEventMapMaster_o *)sub_1BCB244(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v1243, 0LL);
  if ( v1243 )
  {
    v552 = sub_1BCB134(v1243, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1649;
  v550->m_Items[344] = (DataMasterBase_o *)v1243;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[344], (int32_t)v1243, v554, v1244);
  v1245 = (UserEventSpotMaster_o *)sub_1BCB244(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v1245, 0LL);
  if ( v1245 )
  {
    v552 = sub_1BCB134(v1245, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1649;
  v550->m_Items[345] = (DataMasterBase_o *)v1245;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[345], (int32_t)v1245, v554, v1246);
  v1247 = (WarGroupMaster_o *)sub_1BCB244(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v1247, 0LL);
  if ( v1247 )
  {
    v552 = sub_1BCB134(v1247, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1649;
  v550->m_Items[346] = (DataMasterBase_o *)v1247;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[346], (int32_t)v1247, v554, v1248);
  v1249 = (ServantLimitImageMaster_o *)sub_1BCB244(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v1249, 0LL);
  if ( v1249 )
  {
    v552 = sub_1BCB134(v1249, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1649;
  v550->m_Items[347] = (DataMasterBase_o *)v1249;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[347], (int32_t)v1249, v554, v1250);
  v1251 = (FriendshipQuestDialogInfoMaster_o *)sub_1BCB244(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v1251, 0LL);
  if ( v1251 )
  {
    v552 = sub_1BCB134(v1251, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1649;
  v550->m_Items[348] = (DataMasterBase_o *)v1251;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[348], (int32_t)v1251, v554, v1252);
  v1253 = (QuestRestrictionInfoMaster_o *)sub_1BCB244(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v1253, 0LL);
  if ( v1253 )
  {
    v552 = sub_1BCB134(v1253, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1649;
  v550->m_Items[349] = (DataMasterBase_o *)v1253;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[349], (int32_t)v1253, v554, v1254);
  v1255 = (AssistMaster_o *)sub_1BCB244(AssistMaster_TypeInfo);
  AssistMaster___ctor(v1255, 0LL);
  if ( v1255 )
  {
    v552 = sub_1BCB134(v1255, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1649;
  v550->m_Items[350] = (DataMasterBase_o *)v1255;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[350], (int32_t)v1255, v554, v1256);
  v1257 = (WarBoardEffectMaster_o *)sub_1BCB244(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v1257, 0LL);
  if ( v1257 )
  {
    v552 = sub_1BCB134(v1257, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1649;
  v550->m_Items[351] = (DataMasterBase_o *)v1257;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[351], (int32_t)v1257, v554, v1258);
  v1259 = (WarBoardOnboardSkillMaster_o *)sub_1BCB244(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v1259, 0LL);
  if ( v1259 )
  {
    v552 = sub_1BCB134(v1259, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1649;
  v550->m_Items[352] = (DataMasterBase_o *)v1259;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[352], (int32_t)v1259, v554, v1260);
  v1261 = (BeforeBirthDayMaster_o *)sub_1BCB244(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v1261, 0LL);
  if ( v1261 )
  {
    v552 = sub_1BCB134(v1261, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1649;
  v550->m_Items[353] = (DataMasterBase_o *)v1261;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[353], (int32_t)v1261, v554, v1262);
  v1263 = (LoginQuestMaster_o *)sub_1BCB244(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v1263, 0LL);
  if ( v1263 )
  {
    v552 = sub_1BCB134(v1263, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1649;
  v550->m_Items[354] = (DataMasterBase_o *)v1263;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[354], (int32_t)v1263, v554, v1264);
  v1265 = (EventCombineCostumeMaster_o *)sub_1BCB244(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v1265, 0LL);
  if ( v1265 )
  {
    v552 = sub_1BCB134(v1265, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1649;
  v550->m_Items[355] = (DataMasterBase_o *)v1265;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[355], (int32_t)v1265, v554, v1266);
  v1267 = (WarBoardStagePieceDetailMaster_o *)sub_1BCB244(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v1267, 0LL);
  if ( v1267 )
  {
    v552 = sub_1BCB134(v1267, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1649;
  v550->m_Items[356] = (DataMasterBase_o *)v1267;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[356], (int32_t)v1267, v554, v1268);
  v1269 = (ServantTreasureDeviceAddMaster_o *)sub_1BCB244(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v1269, 0LL);
  if ( v1269 )
  {
    v552 = sub_1BCB134(v1269, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1649;
  v550->m_Items[357] = (DataMasterBase_o *)v1269;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[357], (int32_t)v1269, v554, v1270);
  v1271 = (SkillAddMaster_o *)sub_1BCB244(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v1271, 0LL);
  if ( v1271 )
  {
    v552 = sub_1BCB134(v1271, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1649;
  v550->m_Items[358] = (DataMasterBase_o *)v1271;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[358], (int32_t)v1271, v554, v1272);
  v1273 = (ServantLvDetailMaster_o *)sub_1BCB244(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v1273, 0LL);
  if ( v1273 )
  {
    v552 = sub_1BCB134(v1273, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1649;
  v550->m_Items[359] = (DataMasterBase_o *)v1273;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[359], (int32_t)v1273, v554, v1274);
  v1275 = (GachaAppendMaster_o *)sub_1BCB244(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v1275, 0LL);
  if ( v1275 )
  {
    v552 = sub_1BCB134(v1275, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1649;
  v550->m_Items[360] = (DataMasterBase_o *)v1275;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[360], (int32_t)v1275, v554, v1276);
  v1277 = (UserGachaDrawLogMaster_o *)sub_1BCB244(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v1277, 0LL);
  if ( v1277 )
  {
    v552 = sub_1BCB134(v1277, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1649;
  v550->m_Items[361] = (DataMasterBase_o *)v1277;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[361], (int32_t)v1277, v554, v1278);
  v1279 = (ServantAppendPassiveSkillMaster_o *)sub_1BCB244(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v1279, 0LL);
  if ( v1279 )
  {
    v552 = sub_1BCB134(v1279, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1649;
  v550->m_Items[362] = (DataMasterBase_o *)v1279;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[362], (int32_t)v1279, v554, v1280);
  v1281 = (UserServantAppendPassiveSkillMaster_o *)sub_1BCB244(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v1281, 0LL);
  if ( v1281 )
  {
    v552 = sub_1BCB134(v1281, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1649;
  v550->m_Items[363] = (DataMasterBase_o *)v1281;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[363], (int32_t)v1281, v554, v1282);
  v1283 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1BCB244(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v1283, 0LL);
  if ( v1283 )
  {
    v552 = sub_1BCB134(v1283, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1649;
  v550->m_Items[364] = (DataMasterBase_o *)v1283;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[364], (int32_t)v1283, v554, v1284);
  v1285 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1BCB244(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v1285, 0LL);
  if ( v1285 )
  {
    v552 = sub_1BCB134(v1285, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1649;
  v550->m_Items[365] = (DataMasterBase_o *)v1285;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[365], (int32_t)v1285, v554, v1286);
  v1287 = (CombineAppendPassiveSkillMaster_o *)sub_1BCB244(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v1287, 0LL);
  if ( v1287 )
  {
    v552 = sub_1BCB134(v1287, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1649;
  v550->m_Items[366] = (DataMasterBase_o *)v1287;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[366], (int32_t)v1287, v554, v1288);
  v1289 = (SvtCoinMaster_o *)sub_1BCB244(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v1289, 0LL);
  if ( v1289 )
  {
    v552 = sub_1BCB134(v1289, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1649;
  v550->m_Items[367] = (DataMasterBase_o *)v1289;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[367], (int32_t)v1289, v554, v1290);
  v1291 = (UserSvtCoinMaster_o *)sub_1BCB244(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v1291, 0LL);
  if ( v1291 )
  {
    v552 = sub_1BCB134(v1291, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1649;
  v550->m_Items[368] = (DataMasterBase_o *)v1291;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[368], (int32_t)v1291, v554, v1292);
  v1293 = (ServantAddMaster_o *)sub_1BCB244(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v1293, 0LL);
  if ( v1293 )
  {
    v552 = sub_1BCB134(v1293, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1649;
  v550->m_Items[369] = (DataMasterBase_o *)v1293;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[369], (int32_t)v1293, v554, v1294);
  v1295 = (TreasureBoxMaster_o *)sub_1BCB244(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v1295, 0LL);
  if ( v1295 )
  {
    v552 = sub_1BCB134(v1295, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1649;
  v550->m_Items[370] = (DataMasterBase_o *)v1295;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[370], (int32_t)v1295, v554, v1296);
  v1297 = (TreasureBoxGiftMaster_o *)sub_1BCB244(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v1297, 0LL);
  if ( v1297 )
  {
    v552 = sub_1BCB134(v1297, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1649;
  v550->m_Items[371] = (DataMasterBase_o *)v1297;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[371], (int32_t)v1297, v554, v1298);
  v1299 = (TreasureBoxTalkMaster_o *)sub_1BCB244(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v1299, 0LL);
  if ( v1299 )
  {
    v552 = sub_1BCB134(v1299, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1649;
  v550->m_Items[372] = (DataMasterBase_o *)v1299;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[372], (int32_t)v1299, v554, v1300);
  v1301 = (UserEventExpeditionMaster_o *)sub_1BCB244(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v1301, 0LL);
  if ( v1301 )
  {
    v552 = sub_1BCB134(v1301, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1649;
  v550->m_Items[373] = (DataMasterBase_o *)v1301;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[373], (int32_t)v1301, v554, v1302);
  v1303 = (EventExpeditionMaster_o *)sub_1BCB244(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v1303, 0LL);
  if ( v1303 )
  {
    v552 = sub_1BCB134(v1303, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1649;
  v550->m_Items[374] = (DataMasterBase_o *)v1303;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[374], (int32_t)v1303, v554, v1304);
  v1305 = (EventExpeditionPieceMaster_o *)sub_1BCB244(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v1305, 0LL);
  if ( v1305 )
  {
    v552 = sub_1BCB134(v1305, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1649;
  v550->m_Items[375] = (DataMasterBase_o *)v1305;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[375], (int32_t)v1305, v554, v1306);
  v1307 = (EventRecipeMaster_o *)sub_1BCB244(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v1307, 0LL);
  if ( v1307 )
  {
    v552 = sub_1BCB134(v1307, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1649;
  v550->m_Items[376] = (DataMasterBase_o *)v1307;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[376], (int32_t)v1307, v554, v1308);
  v1309 = (EventRecipeGiftMaster_o *)sub_1BCB244(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v1309, 0LL);
  if ( v1309 )
  {
    v552 = sub_1BCB134(v1309, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1649;
  v550->m_Items[377] = (DataMasterBase_o *)v1309;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[377], (int32_t)v1309, v554, v1310);
  v1311 = (UserEventFortificationMaster_o *)sub_1BCB244(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v1311, 0LL);
  if ( v1311 )
  {
    v552 = sub_1BCB134(v1311, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1649;
  v550->m_Items[378] = (DataMasterBase_o *)v1311;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[378], (int32_t)v1311, v554, v1312);
  v1313 = (EventFortificationMaster_o *)sub_1BCB244(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v1313, 0LL);
  if ( v1313 )
  {
    v552 = sub_1BCB134(v1313, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1649;
  v550->m_Items[379] = (DataMasterBase_o *)v1313;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[379], (int32_t)v1313, v554, v1314);
  v1315 = (EventFortificationDetailMaster_o *)sub_1BCB244(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v1315, 0LL);
  if ( v1315 )
  {
    v552 = sub_1BCB134(v1315, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1649;
  v550->m_Items[380] = (DataMasterBase_o *)v1315;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[380], (int32_t)v1315, v554, v1316);
  v1317 = (EventFortificationSvtMaster_o *)sub_1BCB244(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v1317, 0LL);
  if ( v1317 )
  {
    v552 = sub_1BCB134(v1317, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1649;
  v550->m_Items[381] = (DataMasterBase_o *)v1317;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[381], (int32_t)v1317, v554, v1318);
  v1319 = (UserServantVoicePlayedMaster_o *)sub_1BCB244(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v1319, 0LL);
  if ( v1319 )
  {
    v552 = sub_1BCB134(v1319, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1649;
  v550->m_Items[382] = (DataMasterBase_o *)v1319;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[382], (int32_t)v1319, v554, v1320);
  v1321 = (UpdateProfileDialogInfoMaster_o *)sub_1BCB244(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v1321, 0LL);
  if ( v1321 )
  {
    v552 = sub_1BCB134(v1321, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1649;
  v550->m_Items[383] = (DataMasterBase_o *)v1321;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[383], (int32_t)v1321, v554, v1322);
  v1323 = (SvtMaterialTdMaster_o *)sub_1BCB244(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v1323, 0LL);
  if ( v1323 )
  {
    v552 = sub_1BCB134(v1323, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1649;
  v550->m_Items[384] = (DataMasterBase_o *)v1323;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[384], (int32_t)v1323, v554, v1324);
  v1325 = (BattleMasterImageMaster_o *)sub_1BCB244(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v1325, 0LL);
  if ( v1325 )
  {
    v552 = sub_1BCB134(v1325, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1649;
  v550->m_Items[385] = (DataMasterBase_o *)v1325;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[385], (int32_t)v1325, v554, v1326);
  v1327 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1BCB244(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v1327, 0LL);
  if ( v1327 )
  {
    v552 = sub_1BCB134(v1327, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1649;
  v550->m_Items[386] = (DataMasterBase_o *)v1327;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[386], (int32_t)v1327, v554, v1328);
  v1329 = (UserEventRandomMissionMaster_o *)sub_1BCB244(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v1329, 0LL);
  if ( v1329 )
  {
    v552 = sub_1BCB134(v1329, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1649;
  v550->m_Items[387] = (DataMasterBase_o *)v1329;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[387], (int32_t)v1329, v554, v1330);
  v1331 = (EventProgressValueMaster_o *)sub_1BCB244(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v1331, 0LL);
  if ( v1331 )
  {
    v552 = sub_1BCB134(v1331, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1649;
  v550->m_Items[388] = (DataMasterBase_o *)v1331;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[388], (int32_t)v1331, v554, v1332);
  v1333 = (SvtMultiPortraitMaster_o *)sub_1BCB244(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v1333, 0LL);
  if ( v1333 )
  {
    v552 = sub_1BCB134(v1333, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1649;
  v550->m_Items[389] = (DataMasterBase_o *)v1333;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[389], (int32_t)v1333, v554, v1334);
  v1335 = (EventRandomMissionMaster_o *)sub_1BCB244(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v1335, 0LL);
  if ( v1335 )
  {
    v552 = sub_1BCB134(v1335, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1649;
  v550->m_Items[390] = (DataMasterBase_o *)v1335;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[390], (int32_t)v1335, v554, v1336);
  v1337 = (UserGachaHistoryMaster_o *)sub_1BCB244(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v1337, 0LL);
  if ( v1337 )
  {
    v552 = sub_1BCB134(v1337, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1649;
  v550->m_Items[391] = (DataMasterBase_o *)v1337;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[391], (int32_t)v1337, v554, v1338);
  v1339 = (UserCoinRoomMaster_o *)sub_1BCB244(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v1339, 0LL);
  if ( v1339 )
  {
    v552 = sub_1BCB134(v1339, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1649;
  v550->m_Items[392] = (DataMasterBase_o *)v1339;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[392], (int32_t)v1339, v554, v1340);
  v1341 = (EventBuddyPointMaster_o *)sub_1BCB244(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v1341, 0LL);
  if ( v1341 )
  {
    v552 = sub_1BCB134(v1341, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1649;
  v550->m_Items[393] = (DataMasterBase_o *)v1341;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[393], (int32_t)v1341, v554, v1342);
  v1343 = (EventServantPointRankMaster_o *)sub_1BCB244(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v1343, 0LL);
  if ( v1343 )
  {
    v552 = sub_1BCB134(v1343, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1649;
  v550->m_Items[394] = (DataMasterBase_o *)v1343;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[394], (int32_t)v1343, v554, v1344);
  v1345 = (UserEventServantPointMaster_o *)sub_1BCB244(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v1345, 0LL);
  if ( v1345 )
  {
    v552 = sub_1BCB134(v1345, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1649;
  v550->m_Items[395] = (DataMasterBase_o *)v1345;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[395], (int32_t)v1345, v554, v1346);
  v1347 = (FieldMotionMaster_o *)sub_1BCB244(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v1347, 0LL);
  if ( v1347 )
  {
    v552 = sub_1BCB134(v1347, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1649;
  v550->m_Items[396] = (DataMasterBase_o *)v1347;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[396], (int32_t)v1347, v554, v1348);
  v1349 = (UserDeleteReservationMaster_o *)sub_1BCB244(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v1349, 0LL);
  if ( v1349 )
  {
    v552 = sub_1BCB134(v1349, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1649;
  v550->m_Items[397] = (DataMasterBase_o *)v1349;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[397], (int32_t)v1349, v554, v1350);
  v1351 = (ServantScriptMultipleMaster_o *)sub_1BCB244(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v1351, 0LL);
  if ( v1351 )
  {
    v552 = sub_1BCB134(v1351, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1649;
  v550->m_Items[398] = (DataMasterBase_o *)v1351;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[398], (int32_t)v1351, v554, v1352);
  v1353 = (EquipAddMaster_o *)sub_1BCB244(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v1353, 0LL);
  if ( v1353 )
  {
    v552 = sub_1BCB134(v1353, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1649;
  v550->m_Items[399] = (DataMasterBase_o *)v1353;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[399], (int32_t)v1353, v554, v1354);
  v1355 = (QuestReleaseOverwriteMaster_o *)sub_1BCB244(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v1355, 0LL);
  if ( v1355 )
  {
    v552 = sub_1BCB134(v1355, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1649;
  v550->m_Items[400] = (DataMasterBase_o *)v1355;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[400], (int32_t)v1355, v554, v1356);
  v1357 = (UserEventAlloutBattleMaster_o *)sub_1BCB244(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v1357, 0LL);
  if ( v1357 )
  {
    v552 = sub_1BCB134(v1357, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1649;
  v550->m_Items[401] = (DataMasterBase_o *)v1357;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[401], (int32_t)v1357, v554, v1358);
  v1359 = (QuestScriptMaterialNextMaster_o *)sub_1BCB244(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v1359, 0LL);
  if ( v1359 )
  {
    v552 = sub_1BCB134(v1359, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1649;
  v550->m_Items[402] = (DataMasterBase_o *)v1359;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[402], (int32_t)v1359, v554, v1360);
  v1361 = (EventDiggingMaster_o *)sub_1BCB244(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v1361, 0LL);
  if ( v1361 )
  {
    v552 = sub_1BCB134(v1361, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1649;
  v550->m_Items[403] = (DataMasterBase_o *)v1361;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[403], (int32_t)v1361, v554, v1362);
  v1363 = (EventDiggingBlockMaster_o *)sub_1BCB244(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v1363, 0LL);
  if ( v1363 )
  {
    v552 = sub_1BCB134(v1363, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1649;
  v550->m_Items[404] = (DataMasterBase_o *)v1363;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[404], (int32_t)v1363, v554, v1364);
  v1365 = (EventDiggingRewardMaster_o *)sub_1BCB244(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v1365, 0LL);
  if ( v1365 )
  {
    v552 = sub_1BCB134(v1365, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1649;
  v550->m_Items[405] = (DataMasterBase_o *)v1365;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[405], (int32_t)v1365, v554, v1366);
  v1367 = (UserEventDiggingMaster_o *)sub_1BCB244(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v1367, 0LL);
  if ( v1367 )
  {
    v552 = sub_1BCB134(v1367, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1649;
  v550->m_Items[406] = (DataMasterBase_o *)v1367;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[406], (int32_t)v1367, v554, v1368);
  v1369 = (BattleMessageMaster_o *)sub_1BCB244(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v1369, 0LL);
  if ( v1369 )
  {
    v552 = sub_1BCB134(v1369, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1649;
  v550->m_Items[407] = (DataMasterBase_o *)v1369;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[407], (int32_t)v1369, v554, v1370);
  v1371 = (BattleMessageGroupMaster_o *)sub_1BCB244(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v1371, 0LL);
  if ( v1371 )
  {
    v552 = sub_1BCB134(v1371, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1649;
  v550->m_Items[408] = (DataMasterBase_o *)v1371;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[408], (int32_t)v1371, v554, v1372);
  v1373 = (UserNpcSvtRecordMaster_o *)sub_1BCB244(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v1373, 0LL);
  if ( v1373 )
  {
    v552 = sub_1BCB134(v1373, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1649;
  v550->m_Items[409] = (DataMasterBase_o *)v1373;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[409], (int32_t)v1373, v554, v1374);
  v1375 = (BuffTypeDetailMaster_o *)sub_1BCB244(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v1375, 0LL);
  if ( v1375 )
  {
    v552 = sub_1BCB134(v1375, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1649;
  v550->m_Items[410] = (DataMasterBase_o *)v1375;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[410], (int32_t)v1375, v554, v1376);
  v1377 = (WarBoardMessageMaster_o *)sub_1BCB244(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v1377, 0LL);
  if ( v1377 )
  {
    v552 = sub_1BCB134(v1377, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1649;
  v550->m_Items[411] = (DataMasterBase_o *)v1377;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[411], (int32_t)v1377, v554, v1378);
  v1379 = (WarBoardPartySkillMaster_o *)sub_1BCB244(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v1379, 0LL);
  if ( v1379 )
  {
    v552 = sub_1BCB134(v1379, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1649;
  v550->m_Items[412] = (DataMasterBase_o *)v1379;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[412], (int32_t)v1379, v554, v1380);
  v1381 = (WarBoardMessageScriptMaster_o *)sub_1BCB244(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v1381, 0LL);
  if ( v1381 )
  {
    v552 = sub_1BCB134(v1381, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1649;
  v550->m_Items[413] = (DataMasterBase_o *)v1381;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[413], (int32_t)v1381, v554, v1382);
  v1383 = (WarQuestSelectionMaster_o *)sub_1BCB244(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v1383, 0LL);
  if ( v1383 )
  {
    v552 = sub_1BCB134(v1383, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1649;
  v550->m_Items[414] = (DataMasterBase_o *)v1383;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[414], (int32_t)v1383, v554, v1384);
  v1385 = (WarBoardStageDetailMaster_o *)sub_1BCB244(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v1385, 0LL);
  if ( v1385 )
  {
    v552 = sub_1BCB134(v1385, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1649;
  v550->m_Items[415] = (DataMasterBase_o *)v1385;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[415], (int32_t)v1385, v554, v1386);
  v1387 = (QuestScriptMaterialOverwriteMaster_o *)sub_1BCB244(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v1387, 0LL);
  if ( v1387 )
  {
    v552 = sub_1BCB134(v1387, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1649;
  v550->m_Items[416] = (DataMasterBase_o *)v1387;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[416], (int32_t)v1387, v554, v1388);
  v1389 = (QuestScriptBranchMaterialMaster_o *)sub_1BCB244(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v1389, 0LL);
  if ( v1389 )
  {
    v552 = sub_1BCB134(v1389, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1649;
  v550->m_Items[417] = (DataMasterBase_o *)v1389;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[417], (int32_t)v1389, v554, v1390);
  v1391 = (AdCheckPointMaster_o *)sub_1BCB244(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v1391, 0LL);
  if ( v1391 )
  {
    v552 = sub_1BCB134(v1391, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1649;
  v550->m_Items[418] = (DataMasterBase_o *)v1391;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[418], (int32_t)v1391, v554, v1392);
  v1393 = (GiftDetailMaster_o *)sub_1BCB244(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v1393, 0LL);
  if ( v1393 )
  {
    v552 = sub_1BCB134(v1393, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1649;
  v550->m_Items[419] = (DataMasterBase_o *)v1393;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[419], (int32_t)v1393, v554, v1394);
  v1395 = (CombineLimitGiftMaster_o *)sub_1BCB244(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v1395, 0LL);
  if ( v1395 )
  {
    v552 = sub_1BCB134(v1395, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1649;
  v550->m_Items[420] = (DataMasterBase_o *)v1395;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[420], (int32_t)v1395, v554, v1396);
  v1397 = (EventCooltimeRewardMaster_o *)sub_1BCB244(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v1397, 0LL);
  if ( v1397 )
  {
    v552 = sub_1BCB134(v1397, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1649;
  v550->m_Items[421] = (DataMasterBase_o *)v1397;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[421], (int32_t)v1397, v554, v1398);
  v1399 = (UserEventCooltimeRewardMaster_o *)sub_1BCB244(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v1399, 0LL);
  if ( v1399 )
  {
    v552 = sub_1BCB134(v1399, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1649;
  v550->m_Items[422] = (DataMasterBase_o *)v1399;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[422], (int32_t)v1399, v554, v1400);
  v1401 = (ClassBoardBaseMaster_o *)sub_1BCB244(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v1401, 0LL);
  if ( v1401 )
  {
    v552 = sub_1BCB134(v1401, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1649;
  v550->m_Items[423] = (DataMasterBase_o *)v1401;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[423], (int32_t)v1401, v554, v1402);
  v1403 = (ClassBoardLockMaster_o *)sub_1BCB244(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v1403, 0LL);
  if ( v1403 )
  {
    v552 = sub_1BCB134(v1403, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1649;
  v550->m_Items[424] = (DataMasterBase_o *)v1403;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[424], (int32_t)v1403, v554, v1404);
  v1405 = (ClassBoardSquareMaster_o *)sub_1BCB244(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v1405, 0LL);
  if ( v1405 )
  {
    v552 = sub_1BCB134(v1405, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1649;
  v550->m_Items[425] = (DataMasterBase_o *)v1405;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[425], (int32_t)v1405, v554, v1406);
  v1407 = (ClassBoardLineMaster_o *)sub_1BCB244(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v1407, 0LL);
  if ( v1407 )
  {
    v552 = sub_1BCB134(v1407, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1649;
  v550->m_Items[426] = (DataMasterBase_o *)v1407;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[426], (int32_t)v1407, v554, v1408);
  v1409 = (UserClassBoardSquareMaster_o *)sub_1BCB244(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v1409, 0LL);
  if ( v1409 )
  {
    v552 = sub_1BCB134(v1409, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1649;
  v550->m_Items[427] = (DataMasterBase_o *)v1409;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[427], (int32_t)v1409, v554, v1410);
  v1411 = (ServantCardAddMaster_o *)sub_1BCB244(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v1411, 0LL);
  if ( v1411 )
  {
    v552 = sub_1BCB134(v1411, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1649;
  v550->m_Items[428] = (DataMasterBase_o *)v1411;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[428], (int32_t)v1411, v554, v1412);
  v1413 = (MapLayerMaster_o *)sub_1BCB244(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v1413, 0LL);
  if ( v1413 )
  {
    v552 = sub_1BCB134(v1413, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1649;
  v550->m_Items[429] = (DataMasterBase_o *)v1413;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[429], (int32_t)v1413, v554, v1414);
  v1415 = (SpotLayerMaster_o *)sub_1BCB244(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v1415, 0LL);
  if ( v1415 )
  {
    v552 = sub_1BCB134(v1415, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1649;
  v550->m_Items[430] = (DataMasterBase_o *)v1415;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[430], (int32_t)v1415, v554, v1416);
  v1417 = (MapGimmickLayerMaster_o *)sub_1BCB244(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v1417, 0LL);
  if ( v1417 )
  {
    v552 = sub_1BCB134(v1417, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1649;
  v550->m_Items[431] = (DataMasterBase_o *)v1417;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[431], (int32_t)v1417, v554, v1418);
  v1419 = (EventDataLostBattleMaster_o *)sub_1BCB244(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v1419, 0LL);
  if ( v1419 )
  {
    v552 = sub_1BCB134(v1419, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1649;
  v550->m_Items[432] = (DataMasterBase_o *)v1419;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[432], (int32_t)v1419, v554, v1420);
  v1421 = (EventDataLostBattleResetMaster_o *)sub_1BCB244(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v1421, 0LL);
  if ( v1421 )
  {
    v552 = sub_1BCB134(v1421, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1649;
  v550->m_Items[433] = (DataMasterBase_o *)v1421;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[433], (int32_t)v1421, v554, v1422);
  v1423 = (UserEventDataLostMaster_o *)sub_1BCB244(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v1423, 0LL);
  if ( v1423 )
  {
    v552 = sub_1BCB134(v1423, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1649;
  v550->m_Items[434] = (DataMasterBase_o *)v1423;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[434], (int32_t)v1423, v554, v1424);
  v1425 = (QuestHintMaster_o *)sub_1BCB244(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v1425, 0LL);
  if ( v1425 )
  {
    v552 = sub_1BCB134(v1425, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1649;
  v550->m_Items[435] = (DataMasterBase_o *)v1425;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[435], (int32_t)v1425, v554, v1426);
  v1427 = (FuncTypeDetailMaster_o *)sub_1BCB244(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v1427, 0LL);
  if ( v1427 )
  {
    v552 = sub_1BCB134(v1427, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1649;
  v550->m_Items[436] = (DataMasterBase_o *)v1427;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[436], (int32_t)v1427, v554, v1428);
  v1429 = (BuffConvertMaster_o *)sub_1BCB244(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v1429, 0LL);
  if ( v1429 )
  {
    v552 = sub_1BCB134(v1429, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1649;
  v550->m_Items[437] = (DataMasterBase_o *)v1429;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[437], (int32_t)v1429, v554, v1430);
  v1431 = (SkillGroupMaster_o *)sub_1BCB244(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v1431, 0LL);
  if ( v1431 )
  {
    v552 = sub_1BCB134(v1431, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1649;
  v550->m_Items[438] = (DataMasterBase_o *)v1431;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[438], (int32_t)v1431, v554, v1432);
  v1433 = (SkillGroupOverwriteMaster_o *)sub_1BCB244(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v1433, 0LL);
  if ( v1433 )
  {
    v552 = sub_1BCB134(v1433, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1649;
  v550->m_Items[439] = (DataMasterBase_o *)v1433;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[439], (int32_t)v1433, v554, v1434);
  v1435 = (SkillIndividualityMaster_o *)sub_1BCB244(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v1435, 0LL);
  if ( v1435 )
  {
    v552 = sub_1BCB134(v1435, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1649;
  v550->m_Items[440] = (DataMasterBase_o *)v1435;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[440], (int32_t)v1435, v554, v1436);
  v1437 = (RestrictionBaseMaster_o *)sub_1BCB244(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v1437, 0LL);
  if ( v1437 )
  {
    v552 = sub_1BCB134(v1437, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1649;
  v550->m_Items[441] = (DataMasterBase_o *)v1437;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[441], (int32_t)v1437, v554, v1438);
  v1439 = (RestrictionSlotMaster_o *)sub_1BCB244(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v1439, 0LL);
  if ( v1439 )
  {
    v552 = sub_1BCB134(v1439, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1649;
  v550->m_Items[442] = (DataMasterBase_o *)v1439;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[442], (int32_t)v1439, v554, v1440);
  v1441 = (RestrictionSlotDetailMaster_o *)sub_1BCB244(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v1441, 0LL);
  if ( v1441 )
  {
    v552 = sub_1BCB134(v1441, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1649;
  v550->m_Items[443] = (DataMasterBase_o *)v1441;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[443], (int32_t)v1441, v554, v1442);
  v1443 = (RestrictionMessageMaster_o *)sub_1BCB244(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v1443, 0LL);
  if ( v1443 )
  {
    v552 = sub_1BCB134(v1443, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1649;
  v550->m_Items[444] = (DataMasterBase_o *)v1443;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[444], (int32_t)v1443, v554, v1444);
  v1445 = (RestrictionWholeMaster_o *)sub_1BCB244(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v1445, 0LL);
  if ( v1445 )
  {
    v552 = sub_1BCB134(v1445, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1649;
  v550->m_Items[445] = (DataMasterBase_o *)v1445;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[445], (int32_t)v1445, v554, v1446);
  v1447 = (FuncDispMaster_o *)sub_1BCB244(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v1447, 0LL);
  if ( v1447 )
  {
    v552 = sub_1BCB134(v1447, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1649;
  v550->m_Items[446] = (DataMasterBase_o *)v1447;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[446], (int32_t)v1447, v554, v1448);
  v1449 = (ClassBoardCommandSpellMaster_o *)sub_1BCB244(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v1449, 0LL);
  if ( v1449 )
  {
    v552 = sub_1BCB134(v1449, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1649;
  v550->m_Items[447] = (DataMasterBase_o *)v1449;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[447], (int32_t)v1449, v554, v1450);
  v1451 = (ClassBoardClassMaster_o *)sub_1BCB244(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v1451, 0LL);
  if ( v1451 )
  {
    v552 = sub_1BCB134(v1451, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1649;
  v550->m_Items[448] = (DataMasterBase_o *)v1451;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[448], (int32_t)v1451, v554, v1452);
  v1453 = (EventCommandAssistMaster_o *)sub_1BCB244(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v1453, 0LL);
  if ( v1453 )
  {
    v552 = sub_1BCB134(v1453, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1649;
  v550->m_Items[449] = (DataMasterBase_o *)v1453;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[449], (int32_t)v1453, v554, v1454);
  v1455 = (EventMissionGroupMaster_o *)sub_1BCB244(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v1455, 0LL);
  if ( v1455 )
  {
    v552 = sub_1BCB134(v1455, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1649;
  v550->m_Items[450] = (DataMasterBase_o *)v1455;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[450], (int32_t)v1455, v554, v1456);
  v1457 = (CombineLimitReleaseMaster_o *)sub_1BCB244(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v1457, 0LL);
  if ( v1457 )
  {
    v552 = sub_1BCB134(v1457, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1649;
  v550->m_Items[451] = (DataMasterBase_o *)v1457;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[451], (int32_t)v1457, v554, v1458);
  v1459 = (HeelPortraitMaster_o *)sub_1BCB244(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v1459, 0LL);
  if ( v1459 )
  {
    v552 = sub_1BCB134(v1459, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1649;
  v550->m_Items[452] = (DataMasterBase_o *)v1459;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[452], (int32_t)v1459, v554, v1460);
  v1461 = (UserHeelPortraitMaster_o *)sub_1BCB244(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v1461, 0LL);
  if ( v1461 )
  {
    v552 = sub_1BCB134(v1461, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1649;
  v550->m_Items[453] = (DataMasterBase_o *)v1461;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[453], (int32_t)v1461, v554, v1462);
  v1463 = (TreasureDeviceSequenceWeightMaster_o *)sub_1BCB244(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v1463, 0LL);
  if ( v1463 )
  {
    v552 = sub_1BCB134(v1463, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1649;
  v550->m_Items[454] = (DataMasterBase_o *)v1463;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[454], (int32_t)v1463, v554, v1464);
  v1465 = (NpcServantFollowerIndividualityMaster_o *)sub_1BCB244(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v1465, 0LL);
  if ( v1465 )
  {
    v552 = sub_1BCB134(v1465, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1649;
  v550->m_Items[455] = (DataMasterBase_o *)v1465;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[455], (int32_t)v1465, v554, v1466);
  v1467 = (GachaExtraGiftMaster_o *)sub_1BCB244(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v1467, 0LL);
  if ( v1467 )
  {
    v552 = sub_1BCB134(v1467, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1649;
  v550->m_Items[456] = (DataMasterBase_o *)v1467;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[456], (int32_t)v1467, v554, v1468);
  v1469 = (EventMuralMaster_o *)sub_1BCB244(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v1469, 0LL);
  if ( v1469 )
  {
    v552 = sub_1BCB134(v1469, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1649;
  v550->m_Items[457] = (DataMasterBase_o *)v1469;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[457], (int32_t)v1469, v554, v1470);
  v1471 = (ViewWaveEnemyMaster_o *)sub_1BCB244(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v1471, 0LL);
  if ( v1471 )
  {
    v552 = sub_1BCB134(v1471, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1649;
  v550->m_Items[458] = (DataMasterBase_o *)v1471;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[458], (int32_t)v1471, v554, v1472);
  v1473 = (BlankEarthSpotNavimenuMaster_o *)sub_1BCB244(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v1473, 0LL);
  if ( v1473 )
  {
    v552 = sub_1BCB134(v1473, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1649;
  v550->m_Items[459] = (DataMasterBase_o *)v1473;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[459], (int32_t)v1473, v554, v1474);
  v1475 = (BlankEarthGimmickMaster_o *)sub_1BCB244(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v1475, 0LL);
  if ( v1475 )
  {
    v552 = sub_1BCB134(v1475, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1649;
  v550->m_Items[460] = (DataMasterBase_o *)v1475;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[460], (int32_t)v1475, v554, v1476);
  v1477 = (TerminalOverwriteMaster_o *)sub_1BCB244(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v1477, 0LL);
  if ( v1477 )
  {
    v552 = sub_1BCB134(v1477, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1649;
  v550->m_Items[461] = (DataMasterBase_o *)v1477;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[461], (int32_t)v1477, v554, v1478);
  v1479 = (UserExchangeSvtMaster_o *)sub_1BCB244(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v1479, 0LL);
  if ( v1479 )
  {
    v552 = sub_1BCB134(v1479, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1649;
  v550->m_Items[462] = (DataMasterBase_o *)v1479;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[462], (int32_t)v1479, v554, v1480);
  v1481 = (WarBoardCommonReleaseMaster_o *)sub_1BCB244(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v1481, 0LL);
  if ( v1481 )
  {
    v552 = sub_1BCB134(v1481, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1649;
  v550->m_Items[463] = (DataMasterBase_o *)v1481;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[463], (int32_t)v1481, v554, v1482);
  v1483 = (WarBoardEventMaster_o *)sub_1BCB244(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v1483, 0LL);
  if ( v1483 )
  {
    v552 = sub_1BCB134(v1483, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1649;
  v550->m_Items[464] = (DataMasterBase_o *)v1483;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[464], (int32_t)v1483, v554, v1484);
  v1485 = (WarBoardEventScriptMaster_o *)sub_1BCB244(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v1485, 0LL);
  if ( v1485 )
  {
    v552 = sub_1BCB134(v1485, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1649;
  v550->m_Items[465] = (DataMasterBase_o *)v1485;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[465], (int32_t)v1485, v554, v1486);
  v1487 = (WarBoardStageBossMaster_o *)sub_1BCB244(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v1487, 0LL);
  if ( v1487 )
  {
    v552 = sub_1BCB134(v1487, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1649;
  v550->m_Items[466] = (DataMasterBase_o *)v1487;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[466], (int32_t)v1487, v554, v1488);
  v1489 = (WarBoardSquareIndexGroupMaster_o *)sub_1BCB244(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v1489, 0LL);
  if ( v1489 )
  {
    v552 = sub_1BCB134(v1489, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1649;
  v550->m_Items[467] = (DataMasterBase_o *)v1489;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[467], (int32_t)v1489, v554, v1490);
  v1491 = (WarBoardActionTrendGroupMaster_o *)sub_1BCB244(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v1491, 0LL);
  if ( v1491 )
  {
    v552 = sub_1BCB134(v1491, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1649;
  v550->m_Items[468] = (DataMasterBase_o *)v1491;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[468], (int32_t)v1491, v554, v1492);
  v1493 = (WarBoardRatingOffsetGroupMaster_o *)sub_1BCB244(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v1493, 0LL);
  if ( v1493 )
  {
    v552 = sub_1BCB134(v1493, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1649;
  v550->m_Items[469] = (DataMasterBase_o *)v1493;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[469], (int32_t)v1493, v554, v1494);
  v1495 = (WarBoardReinforcementsMaster_o *)sub_1BCB244(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v1495, 0LL);
  if ( v1495 )
  {
    v552 = sub_1BCB134(v1495, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1649;
  v550->m_Items[470] = (DataMasterBase_o *)v1495;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[470], (int32_t)v1495, v554, v1496);
  v1497 = (WarBoardStageReinforcementsMaster_o *)sub_1BCB244(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v1497, 0LL);
  if ( v1497 )
  {
    v552 = sub_1BCB134(v1497, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1649;
  v550->m_Items[471] = (DataMasterBase_o *)v1497;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[471], (int32_t)v1497, v554, v1498);
  v1499 = (WarBoardFutureActionTrendMaster_o *)sub_1BCB244(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v1499, 0LL);
  if ( v1499 )
  {
    v552 = sub_1BCB134(v1499, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1649;
  v550->m_Items[472] = (DataMasterBase_o *)v1499;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[472], (int32_t)v1499, v554, v1500);
  v1501 = (ServantProfilePushMaster_o *)sub_1BCB244(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v1501, 0LL);
  if ( v1501 )
  {
    v552 = sub_1BCB134(v1501, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1649;
  v550->m_Items[473] = (DataMasterBase_o *)v1501;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[473], (int32_t)v1501, v554, v1502);
  v1503 = (MapGimmickPathMaster_o *)sub_1BCB244(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v1503, 0LL);
  if ( v1503 )
  {
    v552 = sub_1BCB134(v1503, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1649;
  v550->m_Items[474] = (DataMasterBase_o *)v1503;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[474], (int32_t)v1503, v554, v1504);
  v1505 = (MapGimmickPathReleaseMaster_o *)sub_1BCB244(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v1505, 0LL);
  if ( v1505 )
  {
    v552 = sub_1BCB134(v1505, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1649;
  v550->m_Items[475] = (DataMasterBase_o *)v1505;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[475], (int32_t)v1505, v554, v1506);
  v1507 = (ServantOverwriteMaster_o *)sub_1BCB244(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v1507, 0LL);
  if ( v1507 )
  {
    v552 = sub_1BCB134(v1507, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1649;
  v550->m_Items[476] = (DataMasterBase_o *)v1507;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[476], (int32_t)v1507, v554, v1508);
  v1509 = (IndividualityPolicyMaster_o *)sub_1BCB244(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v1509, 0LL);
  if ( v1509 )
  {
    v552 = sub_1BCB134(v1509, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1649;
  v550->m_Items[477] = (DataMasterBase_o *)v1509;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[477], (int32_t)v1509, v554, v1510);
  v1511 = (IndividualityPersonalityMaster_o *)sub_1BCB244(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v1511, 0LL);
  if ( v1511 )
  {
    v552 = sub_1BCB134(v1511, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1649;
  v550->m_Items[478] = (DataMasterBase_o *)v1511;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[478], (int32_t)v1511, v554, v1512);
  v1513 = (AttriMaster_o *)sub_1BCB244(AttriMaster_TypeInfo);
  AttriMaster___ctor(v1513, 0LL);
  if ( v1513 )
  {
    v552 = sub_1BCB134(v1513, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1649;
  v550->m_Items[479] = (DataMasterBase_o *)v1513;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[479], (int32_t)v1513, v554, v1514);
  v1515 = (ServantVoicePatternMaster_o *)sub_1BCB244(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v1515, 0LL);
  if ( v1515 )
  {
    v552 = sub_1BCB134(v1515, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1649;
  v550->m_Items[480] = (DataMasterBase_o *)v1515;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[480], (int32_t)v1515, v554, v1516);
  v1517 = (UserGameCommonMaster_o *)sub_1BCB244(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v1517, 0LL);
  if ( v1517 )
  {
    v552 = sub_1BCB134(v1517, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1649;
  v550->m_Items[481] = (DataMasterBase_o *)v1517;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[481], (int32_t)v1517, v554, v1518);
  v1519 = (ServantPhotoMaster_o *)sub_1BCB244(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v1519, 0LL);
  if ( v1519 )
  {
    v552 = sub_1BCB134(v1519, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1649;
  v550->m_Items[482] = (DataMasterBase_o *)v1519;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[482], (int32_t)v1519, v554, v1520);
  v1521 = (MasterPhotoMaster_o *)sub_1BCB244(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v1521, 0LL);
  if ( v1521 )
  {
    v552 = sub_1BCB134(v1521, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1649;
  v550->m_Items[483] = (DataMasterBase_o *)v1521;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[483], (int32_t)v1521, v554, v1522);
  v1523 = (PhotoFrameMaster_o *)sub_1BCB244(PhotoFrameMaster_TypeInfo);
  PhotoFrameMaster___ctor(v1523, 0LL);
  if ( v1523 )
  {
    v552 = sub_1BCB134(v1523, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1649;
  v550->m_Items[484] = (DataMasterBase_o *)v1523;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[484], (int32_t)v1523, v554, v1524);
  v1525 = (WarMessageMaster_o *)sub_1BCB244(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v1525, 0LL);
  if ( v1525 )
  {
    v552 = sub_1BCB134(v1525, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1649;
  v550->m_Items[485] = (DataMasterBase_o *)v1525;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[485], (int32_t)v1525, v554, v1526);
  v1527 = (QuestAutoOrganizationAdjustMaster_o *)sub_1BCB244(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v1527, 0LL);
  if ( v1527 )
  {
    v552 = sub_1BCB134(v1527, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1649;
  v550->m_Items[486] = (DataMasterBase_o *)v1527;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[486], (int32_t)v1527, v554, v1528);
  v1529 = (ExcludeMotionMaster_o *)sub_1BCB244(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v1529, 0LL);
  if ( v1529 )
  {
    v552 = sub_1BCB134(v1529, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1649;
  v550->m_Items[487] = (DataMasterBase_o *)v1529;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[487], (int32_t)v1529, v554, v1530);
  v1531 = (UserInterruptionQuestMaster_o *)sub_1BCB244(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v1531, 0LL);
  if ( v1531 )
  {
    v552 = sub_1BCB134(v1531, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1649;
  v550->m_Items[488] = (DataMasterBase_o *)v1531;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[488], (int32_t)v1531, v554, v1532);
  v1533 = (ServantTransformMaster_o *)sub_1BCB244(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v1533, 0LL);
  if ( v1533 )
  {
    v552 = sub_1BCB134(v1533, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1649;
  v550->m_Items[489] = (DataMasterBase_o *)v1533;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[489], (int32_t)v1533, v554, v1534);
  v1535 = (MapUpdateScheduleMaster_o *)sub_1BCB244(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v1535, 0LL);
  if ( v1535 )
  {
    v552 = sub_1BCB134(v1535, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1649;
  v550->m_Items[490] = (DataMasterBase_o *)v1535;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[490], (int32_t)v1535, v554, v1536);
  v1537 = (QuestPhasePresentMaster_o *)sub_1BCB244(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v1537, 0LL);
  if ( v1537 )
  {
    v552 = sub_1BCB134(v1537, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1649;
  v550->m_Items[491] = (DataMasterBase_o *)v1537;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[491], (int32_t)v1537, v554, v1538);
  v1539 = (UserAccountLinkageMaster_o *)sub_1BCB244(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v1539, 0LL);
  if ( v1539 )
  {
    v552 = sub_1BCB134(v1539, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1649;
  v550->m_Items[492] = (DataMasterBase_o *)v1539;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[492], (int32_t)v1539, v554, v1540);
  v1541 = (MissionNaviTransitionMaster_o *)sub_1BCB244(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v1541, 0LL);
  if ( v1541 )
  {
    v552 = sub_1BCB134(v1541, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1649;
  v550->m_Items[493] = (DataMasterBase_o *)v1541;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[493], (int32_t)v1541, v554, v1542);
  v1543 = (MissionNaviQuestMaster_o *)sub_1BCB244(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v1543, 0LL);
  if ( v1543 )
  {
    v552 = sub_1BCB134(v1543, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1649;
  v550->m_Items[494] = (DataMasterBase_o *)v1543;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[494], (int32_t)v1543, v554, v1544);
  v1545 = (EventTradeGoodsMaster_o *)sub_1BCB244(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v1545, 0LL);
  if ( v1545 )
  {
    v552 = sub_1BCB134(v1545, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1649;
  v550->m_Items[495] = (DataMasterBase_o *)v1545;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[495], (int32_t)v1545, v554, v1546);
  v1547 = (EventTradeStoreMaster_o *)sub_1BCB244(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v1547, 0LL);
  if ( v1547 )
  {
    v552 = sub_1BCB134(v1547, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1649;
  v550->m_Items[496] = (DataMasterBase_o *)v1547;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[496], (int32_t)v1547, v554, v1548);
  v1549 = (EventTradePickupMaster_o *)sub_1BCB244(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v1549, 0LL);
  if ( v1549 )
  {
    v552 = sub_1BCB134(v1549, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1649;
  v550->m_Items[497] = (DataMasterBase_o *)v1549;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[497], (int32_t)v1549, v554, v1550);
  v1551 = (UserEventTradeMaster_o *)sub_1BCB244(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v1551, 0LL);
  if ( v1551 )
  {
    v552 = sub_1BCB134(v1551, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1649;
  v550->m_Items[498] = (DataMasterBase_o *)v1551;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[498], (int32_t)v1551, v554, v1552);
  v1553 = (PaymentHistoryMaster_o *)sub_1BCB244(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v1553, 0LL);
  if ( v1553 )
  {
    v552 = sub_1BCB134(v1553, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1649;
  v550->m_Items[499] = (DataMasterBase_o *)v1553;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[499], (int32_t)v1553, v554, v1554);
  v1555 = (UserExternalPaymentStoneMaster_o *)sub_1BCB244(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v1555, 0LL);
  if ( v1555 )
  {
    v552 = sub_1BCB134(v1555, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1649;
  v550->m_Items[500] = (DataMasterBase_o *)v1555;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[500], (int32_t)v1555, v554, v1556);
  v1557 = (QuestPhaseIndividualityMaster_o *)sub_1BCB244(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v1557, 0LL);
  if ( v1557 )
  {
    v552 = sub_1BCB134(v1557, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1649;
  v550->m_Items[501] = (DataMasterBase_o *)v1557;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[501], (int32_t)v1557, v554, v1558);
  v1559 = (ViewGachaFeaturedServantMaster_o *)sub_1BCB244(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v1559, 0LL);
  if ( v1559 )
  {
    v552 = sub_1BCB134(v1559, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1649;
  v550->m_Items[502] = (DataMasterBase_o *)v1559;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[502], (int32_t)v1559, v554, v1560);
  v1561 = (UserGachaPickupCollateralMaster_o *)sub_1BCB244(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v1561, 0LL);
  if ( v1561 )
  {
    v552 = sub_1BCB134(v1561, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1649;
  v550->m_Items[503] = (DataMasterBase_o *)v1561;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[503], (int32_t)v1561, v554, v1562);
  v1563 = (GachaPickupCollateralMaster_o *)sub_1BCB244(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v1563, 0LL);
  if ( v1563 )
  {
    v552 = sub_1BCB134(v1563, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1649;
  v550->m_Items[504] = (DataMasterBase_o *)v1563;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[504], (int32_t)v1563, v554, v1564);
  v1565 = (GachaPickupCollateralGroupMaster_o *)sub_1BCB244(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v1565, 0LL);
  if ( v1565 )
  {
    v552 = sub_1BCB134(v1565, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1649;
  v550->m_Items[505] = (DataMasterBase_o *)v1565;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[505], (int32_t)v1565, v554, v1566);
  v1567 = (BattlePointMaster_o *)sub_1BCB244(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v1567, 0LL);
  if ( v1567 )
  {
    v552 = sub_1BCB134(v1567, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1649;
  v550->m_Items[506] = (DataMasterBase_o *)v1567;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[506], (int32_t)v1567, v554, v1568);
  v1569 = (BattlePointPhaseMaster_o *)sub_1BCB244(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v1569, 0LL);
  if ( v1569 )
  {
    v552 = sub_1BCB134(v1569, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1649;
  v550->m_Items[507] = (DataMasterBase_o *)v1569;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[507], (int32_t)v1569, v554, v1570);
  v1571 = (ServantBattlePointMaster_o *)sub_1BCB244(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v1571, 0LL);
  if ( v1571 )
  {
    v552 = sub_1BCB134(v1571, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1649;
  v550->m_Items[508] = (DataMasterBase_o *)v1571;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[508], (int32_t)v1571, v554, v1572);
  v1573 = (EffectMovieMaster_o *)sub_1BCB244(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v1573, 0LL);
  if ( v1573 )
  {
    v552 = sub_1BCB134(v1573, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1649;
  v550->m_Items[509] = (DataMasterBase_o *)v1573;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[509], (int32_t)v1573, v554, v1574);
  v1575 = (PaymentLimitMaster_o *)sub_1BCB244(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v1575, 0LL);
  if ( v1575 )
  {
    v552 = sub_1BCB134(v1575, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1649;
  v550->m_Items[510] = (DataMasterBase_o *)v1575;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[510], (int32_t)v1575, v554, v1576);
  v1577 = (UserPaymentLimitMaster_o *)sub_1BCB244(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v1577, 0LL);
  if ( v1577 )
  {
    v552 = sub_1BCB134(v1577, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1649;
  v550->m_Items[511] = (DataMasterBase_o *)v1577;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[511], (int32_t)v1577, v554, v1578);
  v1579 = (RoadmapMaster_o *)sub_1BCB244(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v1579, 0LL);
  if ( v1579 )
  {
    v552 = sub_1BCB134(v1579, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x200 )
    goto LABEL_1649;
  v550->m_Items[512] = (DataMasterBase_o *)v1579;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[512], (int32_t)v1579, v554, v1580);
  v1581 = (UserRecommendSupportMaster_o *)sub_1BCB244(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v1581, 0LL);
  if ( v1581 )
  {
    v552 = sub_1BCB134(v1581, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x201 )
    goto LABEL_1649;
  v550->m_Items[513] = (DataMasterBase_o *)v1581;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[513], (int32_t)v1581, v554, v1582);
  v1583 = (RecommendSupportQuestMaster_o *)sub_1BCB244(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v1583, 0LL);
  if ( v1583 )
  {
    v552 = sub_1BCB134(v1583, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x202 )
    goto LABEL_1649;
  v550->m_Items[514] = (DataMasterBase_o *)v1583;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[514], (int32_t)v1583, v554, v1584);
  v1585 = (RecommendAdviceMessageMaster_o *)sub_1BCB244(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v1585, 0LL);
  if ( v1585 )
  {
    v552 = sub_1BCB134(v1585, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x203 )
    goto LABEL_1649;
  v550->m_Items[515] = (DataMasterBase_o *)v1585;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[515], (int32_t)v1585, v554, v1586);
  v1587 = (UserRecommendFollowerMaster_o *)sub_1BCB244(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v1587, 0LL);
  if ( v1587 )
  {
    v552 = sub_1BCB134(v1587, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x204 )
    goto LABEL_1649;
  v550->m_Items[516] = (DataMasterBase_o *)v1587;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[516], (int32_t)v1587, v554, v1588);
  v1589 = (ItemDropEfficiencyMaster_o *)sub_1BCB244(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v1589, 0LL);
  if ( v1589 )
  {
    v552 = sub_1BCB134(v1589, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x205 )
    goto LABEL_1649;
  v550->m_Items[517] = (DataMasterBase_o *)v1589;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[517], (int32_t)v1589, v554, v1590);
  v1591 = (BlankEarthGimmickAddMaster_o *)sub_1BCB244(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v1591, 0LL);
  if ( v1591 )
  {
    v552 = sub_1BCB134(v1591, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x206 )
    goto LABEL_1649;
  v550->m_Items[518] = (DataMasterBase_o *)v1591;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[518], (int32_t)v1591, v554, v1592);
  v1593 = (WarReleaseMaster_o *)sub_1BCB244(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v1593, 0LL);
  if ( v1593 )
  {
    v552 = sub_1BCB134(v1593, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x207 )
    goto LABEL_1649;
  v550->m_Items[519] = (DataMasterBase_o *)v1593;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[519], (int32_t)v1593, v554, v1594);
  v1595 = (SelectBonusBaseMaster_o *)sub_1BCB244(SelectBonusBaseMaster_TypeInfo);
  SelectBonusBaseMaster___ctor(v1595, 0LL);
  if ( v1595 )
  {
    v552 = sub_1BCB134(v1595, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x208 )
    goto LABEL_1649;
  v550->m_Items[520] = (DataMasterBase_o *)v1595;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[520], (int32_t)v1595, v554, v1596);
  v1597 = (SelectBonusMaster_o *)sub_1BCB244(SelectBonusMaster_TypeInfo);
  SelectBonusMaster___ctor(v1597, 0LL);
  if ( v1597 )
  {
    v552 = sub_1BCB134(v1597, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x209 )
    goto LABEL_1649;
  v550->m_Items[521] = (DataMasterBase_o *)v1597;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[521], (int32_t)v1597, v554, v1598);
  v1599 = (MyroomServantSpecialImageMaster_o *)sub_1BCB244(MyroomServantSpecialImageMaster_TypeInfo);
  MyroomServantSpecialImageMaster___ctor(v1599, 0LL);
  if ( v1599 )
  {
    v552 = sub_1BCB134(v1599, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x20A )
    goto LABEL_1649;
  v550->m_Items[522] = (DataMasterBase_o *)v1599;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[522], (int32_t)v1599, v554, v1600);
  v1601 = (ShopResetMaster_o *)sub_1BCB244(ShopResetMaster_TypeInfo);
  ShopResetMaster___ctor(v1601, 0LL);
  if ( v1601 )
  {
    v552 = sub_1BCB134(v1601, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x20B )
    goto LABEL_1649;
  v550->m_Items[523] = (DataMasterBase_o *)v1601;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[523], (int32_t)v1601, v554, v1602);
  v1603 = (NpcServantDisplayTypeDetailMaster_o *)sub_1BCB244(NpcServantDisplayTypeDetailMaster_TypeInfo);
  NpcServantDisplayTypeDetailMaster___ctor(v1603, 0LL);
  if ( v1603 )
  {
    v552 = sub_1BCB134(v1603, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x20C )
    goto LABEL_1649;
  v550->m_Items[524] = (DataMasterBase_o *)v1603;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[524], (int32_t)v1603, v554, v1604);
  v1605 = (FriendshipServantMaster_o *)sub_1BCB244(FriendshipServantMaster_TypeInfo);
  FriendshipServantMaster___ctor(v1605, 0LL);
  if ( v1605 )
  {
    v552 = sub_1BCB134(v1605, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x20D )
    goto LABEL_1649;
  v550->m_Items[525] = (DataMasterBase_o *)v1605;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[525], (int32_t)v1605, v554, v1606);
  v1607 = (ExchangeSvtCoinGivenNumMaster_o *)sub_1BCB244(ExchangeSvtCoinGivenNumMaster_TypeInfo);
  ExchangeSvtCoinGivenNumMaster___ctor(v1607, 0LL);
  if ( v1607 )
  {
    v552 = sub_1BCB134(v1607, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x20E )
    goto LABEL_1649;
  v550->m_Items[526] = (DataMasterBase_o *)v1607;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[526], (int32_t)v1607, v554, v1608);
  v1609 = (ChaldeaGatePickupMaster_o *)sub_1BCB244(ChaldeaGatePickupMaster_TypeInfo);
  ChaldeaGatePickupMaster___ctor(v1609, 0LL);
  if ( v1609 )
  {
    v552 = sub_1BCB134(v1609, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x20F )
    goto LABEL_1649;
  v550->m_Items[527] = (DataMasterBase_o *)v1609;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[527], (int32_t)v1609, v554, v1610);
  v1611 = (WarGroupIgnoreMaster_o *)sub_1BCB244(WarGroupIgnoreMaster_TypeInfo);
  WarGroupIgnoreMaster___ctor(v1611, 0LL);
  if ( v1611 )
  {
    v552 = sub_1BCB134(v1611, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x210 )
    goto LABEL_1649;
  v550->m_Items[528] = (DataMasterBase_o *)v1611;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[528], (int32_t)v1611, v554, v1612);
  v1613 = (ImagePartsGroupMaster_o *)sub_1BCB244(ImagePartsGroupMaster_TypeInfo);
  ImagePartsGroupMaster___ctor(v1613, 0LL);
  if ( v1613 )
  {
    v552 = sub_1BCB134(v1613, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x211 )
    goto LABEL_1649;
  v550->m_Items[529] = (DataMasterBase_o *)v1613;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[529], (int32_t)v1613, v554, v1614);
  v1615 = (UserImagePartsGroupMaster_o *)sub_1BCB244(UserImagePartsGroupMaster_TypeInfo);
  UserImagePartsGroupMaster___ctor(v1615, 0LL);
  if ( v1615 )
  {
    v552 = sub_1BCB134(v1615, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x212 )
    goto LABEL_1649;
  v550->m_Items[530] = (DataMasterBase_o *)v1615;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[530], (int32_t)v1615, v554, v1616);
  v1617 = (MissionItemDisplayMaster_o *)sub_1BCB244(MissionItemDisplayMaster_TypeInfo);
  MissionItemDisplayMaster___ctor(v1617, 0LL);
  if ( v1617 )
  {
    v552 = sub_1BCB134(v1617, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x213 )
    goto LABEL_1649;
  v550->m_Items[531] = (DataMasterBase_o *)v1617;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[531], (int32_t)v1617, v554, v1618);
  v1619 = (QuestUseItemGroupMaster_o *)sub_1BCB244(QuestUseItemGroupMaster_TypeInfo);
  QuestUseItemGroupMaster___ctor(v1619, 0LL);
  if ( v1619 )
  {
    v552 = sub_1BCB134(v1619, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x214 )
    goto LABEL_1649;
  v550->m_Items[532] = (DataMasterBase_o *)v1619;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[532], (int32_t)v1619, v554, v1620);
  v1621 = (QuestUseItemPickupMaster_o *)sub_1BCB244(QuestUseItemPickupMaster_TypeInfo);
  QuestUseItemPickupMaster___ctor(v1621, 0LL);
  if ( v1621 )
  {
    v552 = sub_1BCB134(v1621, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x215 )
    goto LABEL_1649;
  v550->m_Items[533] = (DataMasterBase_o *)v1621;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[533], (int32_t)v1621, v554, v1622);
  v1623 = (UserEventItemLinkSvtMaster_o *)sub_1BCB244(UserEventItemLinkSvtMaster_TypeInfo);
  UserEventItemLinkSvtMaster___ctor(v1623, 0LL);
  if ( v1623 )
  {
    v552 = sub_1BCB134(v1623, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x216 )
    goto LABEL_1649;
  v550->m_Items[534] = (DataMasterBase_o *)v1623;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[534], (int32_t)v1623, v554, v1624);
  v1625 = (QuestHintOverwriteMaster_o *)sub_1BCB244(QuestHintOverwriteMaster_TypeInfo);
  QuestHintOverwriteMaster___ctor(v1625, 0LL);
  if ( v1625 )
  {
    v552 = sub_1BCB134(v1625, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x217 )
    goto LABEL_1649;
  v550->m_Items[535] = (DataMasterBase_o *)v1625;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[535], (int32_t)v1625, v554, v1626);
  v1627 = (ReachedWaveInfoMaster_o *)sub_1BCB244(ReachedWaveInfoMaster_TypeInfo);
  ReachedWaveInfoMaster___ctor(v1627, 0LL);
  if ( v1627 )
  {
    v552 = sub_1BCB134(v1627, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x218 )
    goto LABEL_1649;
  v550->m_Items[536] = (DataMasterBase_o *)v1627;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[536], (int32_t)v1627, v554, v1628);
  v1629 = (GalleryMaster_o *)sub_1BCB244(GalleryMaster_TypeInfo);
  GalleryMaster___ctor(v1629, 0LL);
  if ( v1629 )
  {
    v552 = sub_1BCB134(v1629, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x219 )
    goto LABEL_1649;
  v550->m_Items[537] = (DataMasterBase_o *)v1629;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[537], (int32_t)v1629, v554, v1630);
  v1631 = (GalleryResourceMaster_o *)sub_1BCB244(GalleryResourceMaster_TypeInfo);
  GalleryResourceMaster___ctor(v1631, 0LL);
  if ( v1631 )
  {
    v552 = sub_1BCB134(v1631, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x21A )
    goto LABEL_1649;
  v550->m_Items[538] = (DataMasterBase_o *)v1631;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[538], (int32_t)v1631, v554, v1632);
  v1633 = (ServantSkillAddMaster_o *)sub_1BCB244(ServantSkillAddMaster_TypeInfo);
  ServantSkillAddMaster___ctor(v1633, 0LL);
  if ( v1633 )
  {
    v552 = sub_1BCB134(v1633, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x21B )
    goto LABEL_1649;
  v550->m_Items[539] = (DataMasterBase_o *)v1633;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[539], (int32_t)v1633, v554, v1634);
  v1635 = (GalleryFolderReleaseMaster_o *)sub_1BCB244(GalleryFolderReleaseMaster_TypeInfo);
  GalleryFolderReleaseMaster___ctor(v1635, 0LL);
  if ( v1635 )
  {
    v552 = sub_1BCB134(v1635, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x21C )
    goto LABEL_1649;
  v550->m_Items[540] = (DataMasterBase_o *)v1635;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[540], (int32_t)v1635, v554, v1636);
  v1637 = (UserSvtFirstGetTimeMaster_o *)sub_1BCB244(UserSvtFirstGetTimeMaster_TypeInfo);
  UserSvtFirstGetTimeMaster___ctor(v1637, 0LL);
  if ( v1637 )
  {
    v552 = sub_1BCB134(v1637, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x21D )
    goto LABEL_1649;
  v550->m_Items[541] = (DataMasterBase_o *)v1637;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[541], (int32_t)v1637, v554, v1638);
  v1639 = (QuestExtensionMaster_o *)sub_1BCB244(QuestExtensionMaster_TypeInfo);
  QuestExtensionMaster___ctor(v1639, 0LL);
  if ( v1639 )
  {
    v552 = sub_1BCB134(v1639, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x21E )
    goto LABEL_1649;
  v550->m_Items[542] = (DataMasterBase_o *)v1639;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[542], (int32_t)v1639, v554, v1640);
  v1641 = (UserServantGrandMaster_o *)sub_1BCB244(UserServantGrandMaster_TypeInfo);
  UserServantGrandMaster___ctor(v1641, 0LL);
  if ( v1641 )
  {
    v552 = sub_1BCB134(v1641, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x21F )
    goto LABEL_1649;
  v550->m_Items[543] = (DataMasterBase_o *)v1641;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[543], (int32_t)v1641, v554, v1642);
  v1643 = (GrandGraphMaster_o *)sub_1BCB244(GrandGraphMaster_TypeInfo);
  GrandGraphMaster___ctor(v1643, 0LL);
  if ( v1643 )
  {
    v552 = sub_1BCB134(v1643, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x220 )
    goto LABEL_1649;
  v550->m_Items[544] = (DataMasterBase_o *)v1643;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[544], (int32_t)v1643, v554, v1644);
  v1645 = (GrandGraphDetailMaster_o *)sub_1BCB244(GrandGraphDetailMaster_TypeInfo);
  GrandGraphDetailMaster___ctor(v1645, 0LL);
  if ( v1645 )
  {
    v552 = sub_1BCB134(v1645, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x221 )
    goto LABEL_1649;
  v550->m_Items[545] = (DataMasterBase_o *)v1645;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[545], (int32_t)v1645, v554, v1646);
  v1647 = (UserClassStatisticsMaster_o *)sub_1BCB244(UserClassStatisticsMaster_TypeInfo);
  UserClassStatisticsMaster___ctor(v1647, 0LL);
  if ( v1647 )
  {
    v552 = sub_1BCB134(v1647, v550->obj.klass->_1.element_class);
    if ( !v552 )
      goto LABEL_1650;
  }
  if ( *p_max_length <= 0x222 )
    goto LABEL_1649;
  v550->m_Items[546] = (DataMasterBase_o *)v1647;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[546], (int32_t)v1647, v554, v1648);
  v1649 = (EventEquipSkillPartsMaster_o *)sub_1BCB244(EventEquipSkillPartsMaster_TypeInfo);
  EventEquipSkillPartsMaster___ctor(v1649, 0LL);
  if ( v1649 )
  {
    v552 = sub_1BCB134(v1649, v550->obj.klass->_1.element_class);
    if ( !v552 )
    {
LABEL_1650:
      v1652 = sub_1BCB278(v552);
      sub_1BCB120(v1652, 0LL);
    }
  }
  if ( *p_max_length <= 0x223 )
LABEL_1649:
    sub_1BCB25C(v552, v553, v554);
  v550->m_Items[547] = (DataMasterBase_o *)v1649;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v550->m_Items[547], (int32_t)v1649, v554, v1650);
  return v550;
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

  if ( (byte_4B1C003 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v2);
    byte_4B1C003 = 1;
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

  if ( (byte_4B1C000 & 1) == 0 )
  {
    sub_1BCAFF8(&int_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_8477/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v7);
    byte_4B1C000 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v8;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_masterCheckName, (int32_t)v8, v10, v11);
  v15 = 1;
  do
  {
    v27 = v15;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v12, v13, v14);
    v17 = System_String__Format((System_String_o *)StringLiteral_8477/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v16, 0LL);
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
    sub_1BCB254(v22, v19);
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v18,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v18;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
    }
    ++v15;
  }
  while ( v15 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_301AAA4 *method)
{
  long double v2; // q0
  const MethodInfo_301AAA4_RGCTXs *rgctx_data; // x8
  const MethodInfo_301AAA4 *_1_TMaster; // x19
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
    sub_1BCAFF8(&UnityEngine_Debug_TypeInfo, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v6);
    sub_1BCAFF8(&int_TypeInfo, v7);
    sub_1BCAFF8(&DataNameKind_Kind_TypeInfo, v8);
    sub_1BCAFF8(&System_Type_TypeInfo, v9);
    sub_1BCAFF8(&StringLiteral_21273/*"master[{0}] is null[{1}:{2}]"*/, v10);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1B4B8();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v12 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v12 )
  {
    sub_1C1B4B8();
    v12 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v12[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1C1B45C(v2);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v15) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v15,
         &value,
         (const MethodInfo_3322A70 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v15 = value;
    _1_TMaster = (const MethodInfo_301AAA4 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_301AAA4 *)sub_1C1B45C(v16);
    if ( !v15 )
      return 0LL;
    result = (Il2CppObject *)sub_1BCB134(v15, _1_TMaster);
    if ( result )
      return result;
    sub_1BCB514(v15);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v30.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v30, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1BCB254(rgctxDataDummy, method);
  v19 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v28 = (int)v15;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v20, v21, v22);
  v27 = (int)v15;
  v26.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v26.monitor = (void *)-1LL;
  v24 = (Il2CppObject *)System_Enum__ToString(&v26, 0LL);
  v25 = (Il2CppObject *)System_String__Format_62491784((System_String_o *)StringLiteral_21273/*"master[{0}] is null[{1}:{2}]"*/, v19, v23, v24, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v25, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_301AA50 *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    if ( !method->rgctx_data )
      sub_1C1B4B8();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1BCB254(0LL, v4);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_301AAA4 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Func_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4B1BFEB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_CreateMasterData__, method);
    sub_1BCAFF8(&System_Func_DataMasterBase____TypeInfo, v3);
    byte_4B1BFEB = 1;
  }
  v4 = (System_Func_object__o *)sub_1BCB244(System_Func_DataMasterBase____TypeInfo);
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
  if ( (byte_4B1BFEC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    this = (DataManager_o *)sub_1BCAFF8(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    byte_4B1BFEC = 1;
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
          v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v11,
            (const MethodInfo_3320910 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v10) )
    {
LABEL_19:
      sub_1BCB254(this, createMasterDataMethod);
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
          (const MethodInfo_33212E4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v13 = *(_DWORD *)(v10 + 24);
        if ( (int)++v14 >= v13 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1BCB25C(this, createMasterDataMethod, method);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v10;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.datalist, v10, (int32_t)method, v12);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v11;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.lookup, (int32_t)v11, v16, v17);
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
  const MethodInfo_37D95B4 *v35; // x3
  struct DataMasterBase_array *v36; // x8
  DataMasterBase_o *v37; // x25
  struct System_Byte_array *masterDataBytes; // x22
  struct System_Threading_SynchronizationContext_o *context; // x24
  __int64 v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  const MethodInfo_37D95B4 *v43; // x3
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
  if ( (byte_4B1BFFD & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_1BCAFF8(&byte___TypeInfo, v6);
    sub_1BCAFF8(&int___TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____get_Item__, v9);
    sub_1BCAFF8(&Method_System_Nullable_long___ctor__, v10);
    sub_1BCAFF8(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_1BCAFF8(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_1BCAFF8(&DataManager___c__DisplayClass58_0_TypeInfo, v13);
    byte_4B1BFFD = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1BCB254(this, indexList);
  v14 = sub_1BCB134(indexList, int___TypeInfo);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(v14 + 24);
    v65 = sub_1BCB0A0(byte___TypeInfo, 2000LL);
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; i != v16; ++i )
      {
        v18 = sub_1BCB244(DataManager___c__DisplayClass58_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v18, 0LL);
        if ( i >= *(unsigned int *)(v15 + 24) )
          sub_1BCB25C(v19, v20, v21);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1BCB254(0LL, v20);
        v23 = *(_DWORD *)(v15 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v23,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v18 )
          sub_1BCB254(Item, Item);
        *(_QWORD *)(v18 + 16) = Item;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 16), (int32_t)Item, v25, v26);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1BCB254(0LL, v27);
        v29 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v23,
                (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v18 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v31 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v31,
            (Il2CppObject *)v18,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v31,
                           (const MethodInfo_3117D0C *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v36 = v5->fields.datalist;
            if ( !v36 )
              sub_1BCB254(Index_object, v33);
            if ( (unsigned int)Index_object >= v36->max_length )
              sub_1BCB25C(Index_object, v33, v34);
            if ( !v29 )
              sub_1BCB254(Index_object, v33);
            if ( !LODWORD(v29[1].monitor) )
              sub_1BCB25C(Index_object, v33, v34);
            v37 = v36->m_Items[(unsigned int)Index_object];
            masterDataBytes = v5->fields.masterDataBytes;
            context = v5->fields.context;
            v71.fields.value = (int64_t)v29[2].klass;
            v68 = 0LL;
            v69 = 0LL;
            *(_QWORD *)&v71.fields.hasValue = &v68;
            System_Nullable_long____ctor(v71, Method_System_Nullable_long___ctor__, v35);
            if ( LODWORD(v29[1].monitor) <= 1 )
              sub_1BCB25C(v40, v41, v42);
            v72.fields.value = (int64_t)v29[2].monitor;
            v66 = 0LL;
            v67 = 0LL;
            *(_QWORD *)&v72.fields.hasValue = &v66;
            System_Nullable_long____ctor(v72, Method_System_Nullable_long___ctor__, v43);
            if ( !v37 )
              sub_1BCB254(v44, v45);
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
        System_Threading_Monitor__Enter_64378436(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1BCB514(indexList);
    if ( v47 != 1 )
      sub_1CB3D40();
    v48 = (_QWORD **)__cxa_begin_catch(v3);
    v49 = sub_1BCB00C(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v49, **v48) & 1) != 0 )
    {
      __cxa_end_catch();
      v50 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_64378436(v50, lockTaken, 0LL);
    }
    else
    {
      v51 = sub_1BCB00C(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v51, **v48) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v48;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v52 = v5->fields.context;
      v53 = sub_1BCB00C(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v53 + 224) )
        j_il2cpp_runtime_class_init_0(v53);
      v54 = sub_1BCB00C(&DataManager___c_TypeInfo);
      v56 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v54 + 184) + 8LL);
      if ( !v56 )
      {
        v57 = sub_1BCB00C(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v57 + 224) )
          j_il2cpp_runtime_class_init_0(v57);
        v58 = **(Il2CppObject ***)(sub_1BCB00C(&DataManager___c_TypeInfo) + 184);
        v59 = sub_1BCB00C(&System_Threading_SendOrPostCallback_TypeInfo);
        v56 = (System_Threading_SendOrPostCallback_o *)sub_1BCB244(v59);
        v60 = sub_1BCB00C(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v56, v58, v60, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1BCB00C(&DataManager___c_TypeInfo) + 184) + 8LL) = v56;
        v61 = sub_1BCB00C(&DataManager___c_TypeInfo);
        sub_1BCAF9C((CGThumbnailListItem_o *)(*(_QWORD *)(v61 + 184) + 8LL), (int32_t)v56, v62, v63);
      }
      if ( !v52 )
        sub_1BCB254(v54, v55);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v52->klass->vtable._5_Post.method)(
        v52,
        v56,
        0LL,
        v52->klass->vtable._6_OperationStarted.methodPtr);
      v50 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_64378436(v50, lockTaken, 0LL);
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

  if ( (byte_4B1BFFB & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_Sort_int____76914264, *(_QWORD *)&maxIndex);
    sub_1BCAFF8(&System_Comparison_int__TypeInfo, v7);
    sub_1BCAFF8(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1BCAFF8(&System_Func_int__bool__TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Thread__Add__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Thread___ctor__, v13);
    sub_1BCAFF8(&System_Collections_Generic_List_Thread__TypeInfo, v14);
    sub_1BCAFF8(&System_Threading_ParameterizedThreadStart_TypeInfo, v15);
    sub_1BCAFF8(&System_Threading_Thread_TypeInfo, v16);
    sub_1BCAFF8(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__, v17);
    sub_1BCAFF8(&DataManager___c__DisplayClass56_0_TypeInfo, v18);
    sub_1BCAFF8(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__, v19);
    sub_1BCAFF8(&DataManager___c__DisplayClass56_1_TypeInfo, v20);
    byte_4B1BFFB = 1;
  }
  v21 = sub_1BCB244(DataManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v21 + 24) = loadedIndices;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v21 + 24), (int32_t)loadedIndices, v26, v27);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.context, (int32_t)Current, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v31;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.masterLoadThreads, (int32_t)v31, v33, v34);
  v35 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v36 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
  v37 = (System_Comparison_int__o *)sub_1BCB244(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v37,
    (Il2CppObject *)v21,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__50231784(
    v36,
    (System_Comparison_T__o *)v37,
    (const MethodInfo_2FE79E8 *)Method_System_Array_Sort_int____76914264);
  v38 = sub_1BCB244(DataManager___c__DisplayClass56_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v38, 0LL);
  if ( !v38 )
LABEL_14:
    sub_1BCB254(v22, v23);
  *(_QWORD *)(v38 + 24) = v21;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v38 + 24), v21, v39, v40);
  *(_DWORD *)(v38 + 16) = 0;
  do
  {
    v41 = (System_Threading_ParameterizedThreadStart_o *)sub_1BCB244(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v41,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v42 = (System_Threading_Thread_o *)sub_1BCB244(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_64413940(v42, v41, 0LL);
    if ( !v42 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v42, 1, 0LL);
    v43 = (System_Func_int__bool__o *)sub_1BCB244(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v43,
      (Il2CppObject *)v38,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v44 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v36,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_305D9B4 *)Method_System_Linq_Enumerable_Where_int___);
    v45 = System_Linq_Enumerable__ToArray_int_(
            v44,
            (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_64414520(v42, &v45->obj, 0LL);
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
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v51[4] = (Il2CppClass *)v42;
      sub_1BCAF9C((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v42, v46, v47);
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

  if ( (byte_4B1BFFE & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_1BCAFF8(&System_Threading_ParameterizedThreadStart_TypeInfo, v6);
    sub_1BCAFF8(&System_Threading_Thread_TypeInfo, v7);
    byte_4B1BFFE = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v8 = (System_Threading_ParameterizedThreadStart_o *)sub_1BCB244(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v9 = (System_Threading_Thread_o *)sub_1BCB244(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_64413940(v9, v8, 0LL);
  this->fields.writeMasterDataThread = v9;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_writeMasterDataThread, (int32_t)v9, v11, v12);
  if ( !*p_writeMasterDataThread )
    sub_1BCB254(0LL, v13);
  System_Threading_Thread__Start_64414520(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
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

  if ( (byte_4B1BFFC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_4B1BFFC = 1;
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
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1BCB254(Item, v7);
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
    sub_1BCAF9C(p_masterLoadThreads, 0, v9, v10);
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
        sub_1BCB254(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1BCAF9C((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v5, v6);
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

  if ( (byte_4B1BFFF & 1) == 0 )
  {
    sub_1BCAFF8(&System_IO_BinaryWriter_TypeInfo, param);
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, v5);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_1BCAFF8(&string_TypeInfo, v9);
    byte_4B1BFFF = 1;
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
  v13 = (System_IO_BinaryWriter_o *)sub_1BCB244(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_63360348(v13, v12, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1BCB254(v14, v15);
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
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1BCB254(0LL, v22);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1BCB25C(Item, v22, v23);
      if ( !v13 )
        sub_1BCB254(Item, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[2].monitor),
        v13->klass->vtable._18_Write.methodPtr);
      v25 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v25 )
        sub_1BCB254(0LL, v24);
      masterDataBytes = this->fields.masterDataBytes;
      v27 = System_Collections_Generic_List_object___get_Item(
              v25,
              v20,
              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v27 )
        sub_1BCB254(0LL, v28);
      if ( !LODWORD(v27[1].monitor) )
        sub_1BCB25C(v27, v28, v29);
      if ( !this->fields.saveDataMapList )
        sub_1BCB254(v27, v28);
      klass = v27[2].klass;
      v31 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v20,
              (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v31 )
        sub_1BCB254(0LL, v32);
      if ( LODWORD(v31[1].monitor) <= 1 )
        sub_1BCB25C(v31, v32, v33);
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
        sub_1BCB254(v34, v35);
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
    v39 = sub_1C1B560(v13, System_IDisposable_TypeInfo, 0LL);
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
      v43 = sub_1C1B560(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v43)(v11, *(_QWORD *)(v43 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1BCAF9C((CGThumbnailListItem_o *)p_writeMasterDataThread, 0, v16, v17);
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

  if ( (byte_4B1BFE6 & 1) == 0 )
  {
    sub_1BCAFF8(&DatFileName_TypeInfo, v1);
    sub_1BCAFF8(&DataManager_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v3);
    byte_4B1BFE6 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_62488672(CachePath, (System_String_o *)StringLiteral_1039/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B1BFE5 & 1) == 0 )
  {
    sub_1BCAFF8(&DatFileName_TypeInfo, v1);
    sub_1BCAFF8(&DataManager_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v3);
    byte_4B1BFE5 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_62488672(CachePath, (System_String_o *)StringLiteral_1039/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4B1BFE3 & 1) == 0 )
  {
    sub_1BCAFF8(&AndroidUtil_TypeInfo, v1);
    sub_1BCAFF8(&CacheFolderName_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v3);
    byte_4B1BFE3 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_62488672(DatFileSavePath, (System_String_o *)StringLiteral_1039/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B1BFE4 & 1) == 0 )
  {
    sub_1BCAFF8(&DatFileName_TypeInfo, v1);
    sub_1BCAFF8(&DataManager_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v3);
    byte_4B1BFE4 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_62488672(CachePath, (System_String_o *)StringLiteral_1039/*"/"*/, FileName, 0LL);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4B1BFF1 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    byte_4B1BFF1 = 1;
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

  if ( (byte_4B1BFF2 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    byte_4B1BFF2 = 1;
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

  if ( (byte_4B1C001 & 1) == 0 )
  {
    sub_1BCAFF8(&Crc32_TypeInfo, name);
    byte_4B1C001 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BCB254(0LL, v7);
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

  if ( (byte_4B1BFE7 & 1) == 0 )
  {
    sub_1BCAFF8(&AndroidUtil_TypeInfo, v1);
    sub_1BCAFF8(&CacheFolderName_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v3);
    byte_4B1BFE7 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_62488672(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1039/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4B1BFF6 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    byte_4B1BFF6 = 1;
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

  if ( (byte_4B1BFF5 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    byte_4B1BFF5 = 1;
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
    sub_1BCB254(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4B1BFEE & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    byte_4B1BFEE = 1;
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

  if ( (byte_4B1BFF9 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    byte_4B1BFF9 = 1;
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

  if ( (byte_4B1BFF8 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_4B1BFF8 = 1;
  }
  v3 = sub_1BCB244(DataManager__readMasterData_d__47_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
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
  if ( (byte_4B1C006 & 1) == 0 )
  {
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, method);
    sub_1BCAFF8(&char___TypeInfo, v3);
    sub_1BCAFF8(&Crc32_TypeInfo, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v9);
    sub_1BCAFF8(&string___TypeInfo, v10);
    sub_1BCAFF8(&StringLiteral_5039/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_1BCAFF8(&StringLiteral_5042/*"DataManager version load error : list file parameter error"*/, v12);
    sub_1BCAFF8(&StringLiteral_113/*" "*/, v13);
    sub_1BCAFF8(&StringLiteral_25039/*"~"*/, v14);
    sub_1BCAFF8(&StringLiteral_763/*") -> ("*/, v15);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v16);
    sub_1BCAFF8(&StringLiteral_1760/*"@"*/, v17);
    sub_1BCAFF8(&StringLiteral_21249/*"master versiton different ("*/, v18);
    sub_1BCAFF8(&StringLiteral_5043/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_1BCAFF8(&StringLiteral_5044/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    this = (DataManager_o *)sub_1BCAFF8(&StringLiteral_5041/*"DataManager version load error : list file break"*/, v21);
    byte_4B1C006 = 1;
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
    v33 = (System_Char_array *)sub_1BCB0A0(char___TypeInfo, 1LL);
    if ( !v33 )
      sub_1BCB254(0LL, 0LL);
    if ( !v33->max_length )
      sub_1BCB25C(v33, v33, v34);
    v33->m_Items[2] = -257;
    v35 = System_String__Trim_62506972(v32, v33, 0LL);
    v36 = (System_Char_array *)sub_1BCB0A0(char___TypeInfo, 2LL);
    if ( !v36 )
      sub_1BCB254(0LL, 0LL);
    max_length = v36->max_length;
    if ( !max_length )
      sub_1BCB25C(v36, v36, v37);
    v36->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1BCB25C(v36, v36, v37);
    v36->m_Items[3] = 10;
    if ( !v35 )
      sub_1BCB254(v36, v36);
    v39 = System_String__IndexOfAny(v35, v36, 0LL);
    if ( v39 < 2 )
    {
      v40 = &StringLiteral_5043/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v41 = System_String__Substring_62496348(v35, 0, v39, 0LL);
    v43 = v41;
    if ( !v41 )
      sub_1BCB254(0LL, v42);
    if ( System_String__StartsWith(v41, (System_String_o *)StringLiteral_25039/*"~"*/, 0LL) )
    {
      v44 = System_String__Substring(v43, 1, 0LL);
      v45 = System_String__Substring(v35, v39 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1BCB254(0LL, v47);
      v48 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                   UTF8,
                                   v45,
                                   UTF8->klass->vtable._19_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v49 = Crc32__Compute(v48, 0LL);
      if ( System_UInt32__Parse(v44, 0LL) == v49 )
      {
        v50 = (System_Char_array *)sub_1BCB0A0(char___TypeInfo, 2LL);
        if ( !v50 )
          sub_1BCB254(0LL, 0LL);
        v52 = v50->max_length;
        if ( !v52 )
          sub_1BCB25C(v50, v50, v51);
        v50->m_Items[2] = 13;
        if ( v52 == 1 )
          sub_1BCB25C(v50, v50, v51);
        v50->m_Items[3] = 10;
        if ( !v45 )
          sub_1BCB254(v50, v50);
        this = (DataManager_o *)System_String__Split_62499616(v45, v50, 1, 0LL);
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
                                  (System_String_o *)StringLiteral_1760/*"@"*/,
                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v54->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v56 = *(System_String_o **)&v54->fields._DispLog;
          this = (DataManager_o *)sub_1BCB0A0(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v56 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_62499500(v56, (System_Char_array *)this, 0LL);
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
            this = (DataManager_o *)sub_1BCB0A0(string___TypeInfo, 5LL);
            if ( this )
            {
              v62 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v63 = StringLiteral_21249/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21249/*"master versiton different ("*/;
                sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._DispLog, v63, v53, v61);
                if ( LODWORD(v62->fields.m_CancellationTokenSource) > 1 )
                {
                  v62->fields.datalist = (struct DataMasterBase_array *)v60;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&v62->fields.datalist, (int32_t)v60, v53, v64);
                  if ( LODWORD(v62->fields.m_CancellationTokenSource) > 2 )
                  {
                    v66 = StringLiteral_763/*") -> ("*/;
                    v62->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_763/*") -> ("*/;
                    sub_1BCAF9C((CGThumbnailListItem_o *)&v62->fields.lookup, v66, v53, v65);
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
                      sub_1BCAF9C((CGThumbnailListItem_o *)&v62->fields.masterDataBytes, (int32_t)v68, v53, v67);
                      if ( LODWORD(v62->fields.m_CancellationTokenSource) > 4 )
                      {
                        v70 = StringLiteral_754/*")"*/;
                        v62->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_754/*")"*/;
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
                this = (DataManager_o *)sub_1BCB0A0(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v80 )
                  break;
                this = (DataManager_o *)System_String__Split_62499500(v80, (System_Char_array *)this, 0LL);
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
                    *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                }
                else
                {
                  v87 = v84 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v87 + 32) = method;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 32), (int32_t)method, v81, v82);
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
              this = (DataManager_o *)sub_1BCB0A0(string___TypeInfo, 9LL);
              if ( this )
              {
                v62 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v90 = StringLiteral_21249/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21249/*"master versiton different ("*/;
                  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._DispLog, v90, v53, v89);
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
                    sub_1BCAF9C((CGThumbnailListItem_o *)&v62->fields.datalist, (int32_t)this, v53, v92);
                    if ( LODWORD(v62->fields.m_CancellationTokenSource) > 2 )
                    {
                      v94 = (int)StringLiteral_113/*" "*/;
                      v62->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_113/*" "*/;
                      sub_1BCAF9C((CGThumbnailListItem_o *)&v62->fields.lookup, v94, v53, v93);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v62->fields.m_CancellationTokenSource) > 3 )
                      {
                        v62->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1BCAF9C((CGThumbnailListItem_o *)&v62->fields.masterDataBytes, (int32_t)this, v53, v95);
                        if ( LODWORD(v62->fields.m_CancellationTokenSource) > 4 )
                        {
                          v97 = StringLiteral_763/*") -> ("*/;
                          v62->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_763/*") -> ("*/;
                          sub_1BCAF9C((CGThumbnailListItem_o *)&v62->fields.saveNameList, v97, v53, v96);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v103, 0LL);
                          if ( LODWORD(v62->fields.m_CancellationTokenSource) > 5 )
                          {
                            v62->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1BCAF9C((CGThumbnailListItem_o *)&v62->fields.saveDataMapList, (int32_t)this, v53, v98);
                            if ( LODWORD(v62->fields.m_CancellationTokenSource) > 6 )
                            {
                              v100 = (int)StringLiteral_113/*" "*/;
                              *(_QWORD *)&v62->fields.lastFrameTime = StringLiteral_113/*" "*/;
                              sub_1BCAF9C((CGThumbnailListItem_o *)&v62->fields.lastFrameTime, v100, v53, v99);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v102, 0LL);
                              if ( LODWORD(v62->fields.m_CancellationTokenSource) > 7 )
                              {
                                v62->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1BCAF9C(
                                  (CGThumbnailListItem_o *)&v62->fields.masterCheckName,
                                  (int32_t)this,
                                  v53,
                                  v101);
                                if ( LODWORD(v62->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v70 = StringLiteral_754/*")"*/;
                                  v62->fields.lockCountObj = (Il2CppObject *)StringLiteral_754/*")"*/;
                                  p_saveNameList = (CGThumbnailListItem_o *)&v62->fields.lockCountObj;
LABEL_104:
                                  sub_1BCAF9C(p_saveNameList, v70, v53, v69);
                                  if ( System_String__Concat_62490940((System_String_array *)v62, 0LL) )
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
                sub_1BCB25C(this, method, v53);
              }
            }
LABEL_119:
            sub_1BCB254(this, method);
          }
          v40 = &StringLiteral_5042/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v40 = &StringLiteral_5041/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v40 = &StringLiteral_5039/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v40 = &StringLiteral_5044/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
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

  if ( (byte_4B1BFF7 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_4B1BFF7 = 1;
  }
  v3 = sub_1BCB244(DataManager__readMasterVersion_d__46_TypeInfo);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BCB254(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4B1C004 & 1) == 0 )
  {
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, method);
    sub_1BCAFF8(&char___TypeInfo, v3);
    sub_1BCAFF8(&Crc32_TypeInfo, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v6);
    sub_1BCAFF8(&string___TypeInfo, v7);
    sub_1BCAFF8(&StringLiteral_5038/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_1BCAFF8(&StringLiteral_5035/*"DataManager boot load error : list file break"*/, v9);
    sub_1BCAFF8(&StringLiteral_5037/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_1BCAFF8(&StringLiteral_5033/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_1BCAFF8(&StringLiteral_25039/*"~"*/, v12);
    sub_1BCAFF8(&StringLiteral_21248/*"master data versiton different ("*/, v13);
    sub_1BCAFF8(&StringLiteral_763/*") -> ("*/, v14);
    sub_1BCAFF8(&StringLiteral_754/*")"*/, v15);
    sub_1BCAFF8(&StringLiteral_1760/*"@"*/, v16);
    sub_1BCAFF8(&StringLiteral_5036/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_4B1C004 = 1;
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
    v24 = (System_Char_array *)sub_1BCB0A0(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_1BCB254(0LL, 0LL);
    if ( !v24->max_length )
      sub_1BCB25C(v24, v24, v25);
    v24->m_Items[2] = -257;
    v26 = System_String__Trim_62506972(v23, v24, 0LL);
    v27 = (System_Char_array *)sub_1BCB0A0(char___TypeInfo, 2LL);
    if ( !v27 )
      sub_1BCB254(0LL, 0LL);
    max_length = v27->max_length;
    if ( !max_length )
      sub_1BCB25C(v27, v27, v28);
    v27->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1BCB25C(v27, v27, v28);
    v27->m_Items[3] = 10;
    if ( !v26 )
      sub_1BCB254(v27, v27);
    v30 = System_String__IndexOfAny(v26, v27, 0LL);
    if ( v30 < 2 )
    {
      v31 = &StringLiteral_5037/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v63 = (System_String_o *)*v31;
LABEL_58:
      if ( v63 )
        goto LABEL_59;
      return 1;
    }
    v32 = System_String__Substring_62496348(v26, 0, v30, 0LL);
    v34 = v32;
    if ( !v32 )
      sub_1BCB254(0LL, v33);
    if ( !System_String__StartsWith(v32, (System_String_o *)StringLiteral_25039/*"~"*/, 0LL) )
    {
      v31 = &StringLiteral_5038/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v35 = System_String__Substring(v34, 1, 0LL);
    v36 = System_String__Substring(v26, v30 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1BCB254(0LL, v38);
    v39 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._18_GetBytes.method)(
                                 UTF8,
                                 v36,
                                 UTF8->klass->vtable._19_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v40 = Crc32__Compute(v39, 0LL);
    if ( System_UInt32__Parse(v35, 0LL) != v40 )
    {
      v31 = &StringLiteral_5033/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v41 = (System_Char_array *)sub_1BCB0A0(char___TypeInfo, 2LL);
    if ( !v41 )
      sub_1BCB254(0LL, 0LL);
    v43 = v41->max_length;
    if ( !v43 )
      sub_1BCB25C(v41, v41, v42);
    v41->m_Items[2] = 13;
    if ( v43 == 1 )
      sub_1BCB25C(v41, v41, v42);
    v41->m_Items[3] = 10;
    if ( !v36 )
      sub_1BCB254(v41, v41);
    v44 = (__int64)System_String__Split_62499616(v36, v41, 1, 0LL);
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
      v44 = System_String__StartsWith((System_String_o *)v44, (System_String_o *)StringLiteral_1760/*"@"*/, 0LL);
      if ( (v44 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v46 + 24) )
          goto LABEL_78;
        v48 = *(System_String_o **)(v46 + 32);
        v44 = sub_1BCB0A0(char___TypeInfo, 1LL);
        if ( v44 )
        {
          v21 = (const MethodInfo *)v44;
          if ( !*(_DWORD *)(v44 + 24) )
            goto LABEL_78;
          *(_WORD *)(v44 + 32) = 44;
          if ( v48 )
          {
            v44 = (__int64)System_String__Split_62499500(v48, (System_Char_array *)v44, 0LL);
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
                    v31 = &StringLiteral_5036/*"DataManager boot load error : list file parameter error"*/;
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
                  sub_1BCB25C(v44, v21, v45);
                }
                v44 = sub_1BCB0A0(string___TypeInfo, 5LL);
                if ( v44 )
                {
                  v54 = v44;
                  if ( *(_DWORD *)(v44 + 24) )
                  {
                    v55 = StringLiteral_21248/*"master data versiton different ("*/;
                    *(_QWORD *)(v44 + 32) = StringLiteral_21248/*"master data versiton different ("*/;
                    sub_1BCAF9C((CGThumbnailListItem_o *)(v44 + 32), v55, v45, v53);
                    if ( *(_DWORD *)(v54 + 24) > 1u )
                    {
                      *(_QWORD *)(v54 + 40) = v52;
                      sub_1BCAF9C((CGThumbnailListItem_o *)(v54 + 40), (int32_t)v52, v45, v56);
                      if ( *(_DWORD *)(v54 + 24) > 2u )
                      {
                        v58 = StringLiteral_763/*") -> ("*/;
                        *(_QWORD *)(v54 + 48) = StringLiteral_763/*") -> ("*/;
                        sub_1BCAF9C((CGThumbnailListItem_o *)(v54 + 48), v58, v45, v57);
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
                          sub_1BCAF9C((CGThumbnailListItem_o *)(v54 + 56), v60, v45, v59);
                          if ( *(_DWORD *)(v54 + 24) > 4u )
                          {
                            v62 = StringLiteral_754/*")"*/;
                            *(_QWORD *)(v54 + 64) = StringLiteral_754/*")"*/;
                            sub_1BCAF9C((CGThumbnailListItem_o *)(v54 + 64), v62, v45, v61);
                            v63 = System_String__Concat_62490940((System_String_array *)v54, 0LL);
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
        sub_1BCB254(v44, v21);
      }
    }
    v31 = &StringLiteral_5035/*"DataManager boot load error : list file break"*/;
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

  if ( (byte_4B1BFF4 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4B1BFF4 = 1;
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
  sub_1BCAF9C(p_updateData, v11, dateVer, (const MethodInfo *)obj);
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

  if ( (byte_4B1BFF3 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4B1BFF3 = 1;
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

  if ( (byte_4B1BFED & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, obj);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v5);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    byte_4B1BFED = 1;
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->serverHash, v8, (int32_t)method, v3);
  if ( obj )
  {
    v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v11 = System_String__op_Equality(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v11 )
    {
      if ( !v10 )
        sub_1BCB254(v11, v12);
      v13 = System_String__Substring(v10, v10->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v16 = System_String__Substring_62496348(v10, 0, v10->fields._stringLength - 1, 0LL);
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
      sub_1BCAF9C((CGThumbnailListItem_o *)&v18->serverHash, (int32_t)v10, v14, v15);
    }
  }
}


void __fastcall DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4B1BFEF & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, obj);
    byte_4B1BFEF = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void __fastcall DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4B1C008 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_4B1C008 = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1BCB514(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_40782768(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_40782768(
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
  if ( (byte_4B1C009 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_24231/*"updated"*/, v7);
    sub_1BCAFF8(&StringLiteral_18410/*"deleted"*/, v8);
    this = (DataManager_o *)sub_1BCAFF8(&StringLiteral_22842/*"replaced"*/, v9);
    byte_4B1C009 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1BCB254(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18410/*"deleted"*/,
         (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18410/*"deleted"*/,
                              (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                  (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                    (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      sub_1BCB25C(this, data, v10);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24231/*"updated"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24231/*"updated"*/,
                            (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v22 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v22
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1BCB514(v11);
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
                                (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
          (Il2CppObject *)StringLiteral_22842/*"replaced"*/,
          (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_22842/*"replaced"*/,
                            (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v32 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v32
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v32 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1BCB514(v3);
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
                                (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_4B1BFFA & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_4B1BFFA = 1;
  }
  v5 = sub_1BCB244(DataManager__updateMasterData_d__49_TypeInfo);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1BCB254(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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

  if ( (byte_4B1BFF0 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_4B1BFF0 = 1;
  }
  v3 = sub_1BCB244(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BCB254(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4B1C007 & 1) == 0 )
  {
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, method);
    sub_1BCAFF8(&Crc32_TypeInfo, v3);
    sub_1BCAFF8(&DataManager_TypeInfo, v4);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v5);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v8);
    sub_1BCAFF8(&System_IO_StreamWriter_TypeInfo, v9);
    sub_1BCAFF8(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1BCAFF8(&uint_TypeInfo, v11);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v12);
    sub_1BCAFF8(&StringLiteral_25042/*"~{0}\n{1}"*/, v13);
    sub_1BCAFF8(&StringLiteral_1760/*"@"*/, v14);
    sub_1BCAFF8(&StringLiteral_806/*","*/, v15);
    byte_4B1C007 = 1;
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
    v23 = (System_Text_StringBuilder_o *)sub_1BCB244(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_62527720(v23, (size << 7) + 128, 0LL);
    if ( !v23 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_62534368(v23, (System_String_o *)StringLiteral_1760/*"@"*/, 0LL);
    v24 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_62534368(v23, v24->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_62534368(v23, (System_String_o *)StringLiteral_806/*","*/, 0LL);
    System_Text_StringBuilder__Append_62536864(v23, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_62534368(v23, (System_String_o *)StringLiteral_806/*","*/, 0LL);
    System_Text_StringBuilder__Append_62536952(v23, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_62534368(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_62534368(v23, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_62534368(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
      sub_1BCB254(CacheListFileName, v19);
    v30 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._18_System_Collections_IList_get_Item.method)(
                                 CacheListFileName,
                                 v29,
                                 CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v45 = Crc32__Compute(v30, 0LL);
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v45, v31, v32, v33);
    v35 = System_String__Format_62491716((System_String_o *)StringLiteral_25042/*"~{0}\n{1}"*/, v34, v29, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v36 = CatAndMouseGame__CatGame3(v35, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v38 = (System_IO_StreamWriter_o *)sub_1BCB244(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_63295488(v38, v22, 0, UTF8, 0LL);
    if ( !v38 )
      sub_1BCB254(v39, v40);
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
      v44 = sub_1C1B560(v38, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_4B1C005 & 1) == 0 )
  {
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, method);
    sub_1BCAFF8(&Crc32_TypeInfo, v2);
    sub_1BCAFF8(&DataManager_TypeInfo, v3);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v4);
    sub_1BCAFF8(&System_IO_StreamWriter_TypeInfo, v5);
    sub_1BCAFF8(&string___TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_43/*"\n"*/, v7);
    sub_1BCAFF8(&StringLiteral_25039/*"~"*/, v8);
    sub_1BCAFF8(&StringLiteral_1760/*"@"*/, v9);
    sub_1BCAFF8(&StringLiteral_806/*","*/, v10);
    byte_4B1C005 = 1;
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
    UTF8 = (char *)sub_1BCB0A0(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v18 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v19 = StringLiteral_1760/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1760/*"@"*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(UTF8 + 32), v19, v16, v17);
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
    sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 40), v21, v16, v20);
    if ( *((_DWORD *)v18 + 6) <= 2u )
      goto LABEL_26;
    v23 = (int)StringLiteral_806/*","*/;
    *((_QWORD *)v18 + 6) = StringLiteral_806/*","*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 48), v23, v16, v22);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v18 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v18 + 7) = UTF8;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 56), (int32_t)UTF8, v16, v24);
    if ( *((_DWORD *)v18 + 6) <= 4u
      || (v26 = (int)StringLiteral_806/*","*/,
          *((_QWORD *)v18 + 8) = StringLiteral_806/*","*/,
          sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 64), v26, v16, v25),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v18 + 6) <= 5u)
      || (*((_QWORD *)v18 + 9) = UTF8,
          sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 72), (int32_t)UTF8, v16, v27),
          *((_DWORD *)v18 + 6) <= 6u) )
    {
LABEL_26:
      sub_1BCB25C(UTF8, v15, v16);
    }
    v29 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v18 + 10) = StringLiteral_43/*"\n"*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v18 + 80), v29, v16, v28);
    v30 = System_String__Concat_62490940((System_String_array *)v18, 0LL);
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
    v33 = System_String__Concat_62490676(
            (System_String_o *)StringLiteral_25039/*"~"*/,
            v32,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v30,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v34 = CatAndMouseGame__CatGame1(v33, 0, 0LL);
    v35 = System_Text_Encoding__get_UTF8(0LL);
    v36 = (System_IO_StreamWriter_o *)sub_1BCB244(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_63295488(v36, CacheVersionFileName, 0, v35, 0LL);
    if ( !v36 )
LABEL_27:
      sub_1BCB254(UTF8, v15);
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

  if ( (byte_4B1C00D & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager___c_TypeInfo, v1);
    byte_4B1C00D = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(DataManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( (byte_4B1C00E & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1BCAFF8(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_4B1C00E = 1;
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
                                                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                         (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1BCB254(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1BCB25C(this, *(_QWORD *)&a, v8);
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
  if ( (byte_4B1C00F & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1BCAFF8(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_4B1C00F = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1BCB254(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_369CF24 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1BCB254(this, 0LL);
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
  __int64 v71; // x2
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
  if ( (byte_4B1C010 & 1) == 0 )
  {
    sub_1BCAFF8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1BCAFF8(&byte___TypeInfo, v3);
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, v4);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&System_GC_TypeInfo, v6);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v7);
    sub_1BCAFF8(&long___TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1BCAFF8(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_4B1C010 = 1;
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
        v15 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v15, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v15;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BCAF9C(p__2__current, (int32_t)v15, v17, v18);
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
          v25 = (System_IO_MemoryStream_o *)sub_1BCB244(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v25, 0LL);
          v26 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v27 = CatAndMouseGame__MouseGameZ(v26, 0LL);
          v28 = sub_1BCB0A0(byte___TypeInfo, 0x4000LL);
          v30 = v28;
          if ( !v28 )
            sub_1BCB254(0LL, v29);
          if ( !v27 )
            sub_1BCB254(v28, v29);
          while ( 1 )
          {
            v31 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v27->klass->vtable._31_unknown.method)(
                    v27,
                    v30,
                    0LL,
                    *(unsigned int *)(v30 + 24),
                    v27->klass->vtable._32_Read.methodPtr);
            if ( (int)v31 <= 0 )
              break;
            if ( !v25 )
              sub_1BCB254(v31, v32);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v25->klass->vtable._34_Write.method)(
              v25,
              v30,
              0LL,
              (unsigned int)v31,
              v25->klass->vtable._35_Write.methodPtr);
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
            v43 = sub_1C1B560(v27, System_IDisposable_TypeInfo, 0LL);
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
              v49 = sub_1C1B560(v26, System_IDisposable_TypeInfo, 0LL);
            }
            v44 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v49)(v26, *(_QWORD *)(v49 + 8));
          }
          if ( !v25 )
            sub_1BCB254(v44, v45);
          v50 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v25->klass->vtable._40_ToArray.method)(
                  v25,
                  v25->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v50;
          sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, v50, v51, v52);
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
            v56 = sub_1C1B560(v25, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v56)(v25, *(_QWORD *)(v56 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v58 = (System_IO_MemoryStream_o *)sub_1BCB244(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_63271944(v58, masterDataBytes, 0LL);
          v59 = (System_IO_BinaryReader_o *)sub_1BCB244(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v59, (System_IO_Stream_o *)v58, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1BCB254(v60, v61);
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
                  v86 = sub_1C1B560(v58, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v86)(v58, *(_QWORD *)(v86 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0LL);
              v87 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v87, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v87;
              v35 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
              sub_1BCAF9C(v35, (int32_t)v87, v88, v89);
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
              sub_1BCB254(v60, v61);
            do
            {
              v64 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v59->klass->vtable._15_ReadInt32.method)(
                      v59,
                      v59->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v58 )
                sub_1BCB254(v64, v65);
              v66 = v64;
              v67 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v58->klass->vtable._12_get_Position.method)(
                      v58,
                      v58->klass->vtable._13_set_Position.methodPtr);
              v68 = v66;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v58->klass->vtable._29_Seek.method)(
                v58,
                v66,
                1LL,
                v58->klass->vtable._30_SetLength.methodPtr);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v70 = sub_1BCB0A0(long___TypeInfo, 2LL);
              v73 = v70;
              if ( !v70 )
                sub_1BCB254(0LL, 0LL);
              v74 = *(_DWORD *)(v70 + 24);
              if ( !v74 )
                sub_1BCB25C(v70, v70, v71);
              *(_QWORD *)(v70 + 32) = v67;
              if ( v74 == 1 )
                sub_1BCB25C(v70, v70, v71);
              *(_QWORD *)(v70 + 40) = v68;
              if ( !saveDataMapList )
                sub_1BCB254(v70, v70);
              items = saveDataMapList->fields._items;
              v76 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1BCB254(v70, v70);
              v77 = saveDataMapList->fields._size;
              if ( (unsigned int)v77 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v70,
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
              }
              else
              {
                v78 = &items->obj.klass + v77;
                saveDataMapList->fields._size = v77 + 1;
                v78[4] = (Il2CppClass *)v73;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v78 + 4), v73, v71, v72);
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
            v82 = sub_1C1B560(v59, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v82)(v59, *(_QWORD *)(v82 + 8));
          goto LABEL_76;
        }
      }
      v33 = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      if ( (float)(v33 - _4__this->fields.lastFrameTime) > 0.1 )
      {
        _4__this->fields.lastFrameTime = v33;
        v34 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v34, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v34;
        v35 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BCAF9C(v35, (int32_t)v34, v36, v37);
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
        sub_1BCB254(this, method);
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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
  if ( (byte_4B1C011 & 1) == 0 )
  {
    sub_1BCAFF8(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4B1C011 = 1;
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
        v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1BCAF9C(p__2__current, (int32_t)v6, v8, v9);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1BCB254(this, method);
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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
  DataManager___c__DisplayClass49_0_o *v143; // x22
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
  const MethodInfo_37D95B4 *v231; // x3
  const MethodInfo_37D95B4 *v232; // x3
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
  if ( (byte_4B1C012 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, method);
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, v5);
    sub_1BCAFF8(&System_Convert_TypeInfo, v6);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantProfileMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventServantMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantAddMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantClassMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantCommentMaster___, v12);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v13);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantMaster___, v14);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantProfileMaster___, v15);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v16);
    sub_1BCAFF8(&Method_DataManager__updateMasterData_b__49_0__, v17);
    sub_1BCAFF8(&DataManager_TypeInfo, v18);
    sub_1BCAFF8(&DataMasterBase___TypeInfo, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v21);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v22);
    sub_1BCAFF8(&EventRandomMissionClearManager_TypeInfo, v23);
    sub_1BCAFF8(&System_Func_bool__TypeInfo, v24);
    sub_1BCAFF8(&System_GC_TypeInfo, v25);
    sub_1BCAFF8(&ImageLimitCount_TypeInfo, v26);
    sub_1BCAFF8(&LastUsedDeckNumberManager_TypeInfo, v27);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v28);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v29);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____Add__, v30);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Clear__, v31);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____Clear__, v32);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Contains__, v33);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__FindIndex__, v34);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__RemoveAt__, v35);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____RemoveAt__, v36);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v37);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____get_Count__, v38);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v39);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____get_Item__, v40);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_long____set_Item__, v41);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v42);
    sub_1BCAFF8(&LogoMain_TypeInfo, v43);
    sub_1BCAFF8(&ManagerConfig_TypeInfo, v44);
    sub_1BCAFF8(&MasterDataUnpakcer_TypeInfo, v45);
    sub_1BCAFF8(&MaterialBranchRouteManager_TypeInfo, v46);
    sub_1BCAFF8(&MaterialGroupClearHistoryManager_TypeInfo, v47);
    sub_1BCAFF8(&MaterialServantLimitCountManager_TypeInfo, v48);
    sub_1BCAFF8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v49);
    sub_1BCAFF8(&Method_System_Nullable_long___ctor__, v50);
    sub_1BCAFF8(&OtherUserNewManager_TypeInfo, v51);
    sub_1BCAFF8(&System_Predicate_string__TypeInfo, v52);
    sub_1BCAFF8(&ServantCommentManager_TypeInfo, v53);
    sub_1BCAFF8(&ServantProfileEventJoinManager_TypeInfo, v54);
    sub_1BCAFF8(&ServantProfileLimitCountManager_TypeInfo, v55);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v56);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v57);
    sub_1BCAFF8(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v58);
    sub_1BCAFF8(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__, v59);
    sub_1BCAFF8(&DataManager___c__DisplayClass49_0_TypeInfo, v60);
    sub_1BCAFF8(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__, v61);
    sub_1BCAFF8(&DataManager___c__DisplayClass49_1_TypeInfo, v62);
    sub_1BCAFF8(&UserCommandCodeCollectionManager_TypeInfo, v63);
    sub_1BCAFF8(&UserCommandCodeNewManager_TypeInfo, v64);
    sub_1BCAFF8(&UserEquipNewManager_TypeInfo, v65);
    sub_1BCAFF8(&UserMissionProgressManager_TypeInfo, v66);
    sub_1BCAFF8(&UserServantCollectionManager_TypeInfo, v67);
    sub_1BCAFF8(&UserServantLockManager_TypeInfo, v68);
    sub_1BCAFF8(&UserServantNewManager_TypeInfo, v69);
    sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v70);
    sub_1BCAFF8(&UnityEngine_WaitUntil_TypeInfo, v71);
    sub_1BCAFF8(&WarBoardMessageHistoryManager_TypeInfo, v72);
    sub_1BCAFF8(&WarBoardMovieHistoryManager_TypeInfo, v73);
    this = (DataManager__updateMasterData_d__49_o *)sub_1BCAFF8(&StringLiteral_11377/*"SCRIPT"*/, v74);
    byte_4B1C012 = 1;
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
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v96, v97);
      v4->fields._dataMapObject_5__7 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v98, v99);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v100, v101);
      v103 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v103 = DataManager_TypeInfo;
      }
      updateData = v103->static_fields->updateData;
      if ( !updateData )
        sub_1BCB254(0LL, v102);
      v105 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v106 = System_Convert__FromBase64String(v105, 0LL);
      v4->fields._cryptBytes_5__8 = v106;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v106, v107, v108);
      v111 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v111 = DataManager_TypeInfo;
      }
      static_fields = v111->static_fields;
      static_fields->updateData = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->updateData, 0, v109, v110);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v113 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v113, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v113;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(p__2__current, (int32_t)v113, v115, v116);
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
        sub_1BCB254(v119, v119);
      _4__this->fields.masterDataBytes = v119;
      sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v119, v120, v121);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v122, v123);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v124 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v124, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v124;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(v85, (int32_t)v124, v125, v126);
      v88 = 2;
      goto LABEL_82;
    case 2:
      v4->fields.__1__state = -1;
      v78 = (MasterDataUnpakcer_o *)sub_1BCB244(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v78, 0LL);
      if ( !_4__this )
        sub_1BCB254(v79, v80);
      if ( !v78 )
        sub_1BCB254(v79, v80);
      v81 = MasterDataUnpakcer__Unpack_40146700(v78, _4__this->fields.masterDataBytes, 0LL);
      v4->fields._dataMapObject_5__7 = v81;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v81, v82, v83);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v84;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(v85, (int32_t)v84, v86, v87);
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
      sub_1BCAF9C(p_dataMapDict_5__6, v131, v2, v3);
      if ( !_4__this )
        goto LABEL_291;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v136 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v136, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v136;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(v85, (int32_t)v136, v137, v138);
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
          v143 = (DataManager___c__DisplayClass49_0_o *)sub_1BCB244(DataManager___c__DisplayClass49_0_TypeInfo);
          DataManager___c__DisplayClass49_0___ctor(v143, 0LL);
          v4->fields.__8__1 = v143;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
          sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v143, v145, v146);
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
          sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)MasterName_k__BackingField, v2, v147);
          _8__1 = v4->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_291;
          this = (DataManager__updateMasterData_d__49_o *)v4->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_291;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0LL;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v153, v154);
            v157 = v4->fields.__8__1;
            if ( !v157 )
              sub_1BCB254(v155, v156);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1BCB254(0LL, v156);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v157->fields.masterName,
                     (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v160, v161);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v260 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v260, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v260;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BCAF9C(v85, (int32_t)v260, v261, v262);
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
                                                              (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_string__Contains__);
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
            v166 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_string__TypeInfo);
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
                                                              (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_string__FindIndex__);
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
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
              }
              else
              {
                v181 = v178 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v181 + 32) = method;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v181 + 32), (int32_t)method, v167, v168);
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
                  *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
              }
              else
              {
                v187 = v184 + 8 * v186;
                LODWORD(this->fields.__2__current) = v186 + 1;
                *(_QWORD *)(v187 + 32) = method;
                sub_1BCAF9C((CGThumbnailListItem_o *)(v187 + 32), (int32_t)method, v182, v183);
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
                (const MethodInfo_36B9954 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0LL;
            v4->fields._isAdd_5__4 = 1;
            sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._dataMap_5__10, 0, v169, v170);
          }
          else
          {
            v171 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v172 = *p__8__1;
            v173 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_string__TypeInfo);
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
                      (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_125;
            v175 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v175,
              (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_291;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v175,
              (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0LL;
          sub_1BCAF9C((CGThumbnailListItem_o *)p__8__1, 0, v176, v177);
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
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, v3);
        v4->fields._dataMapObject_5__7 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._dataMapObject_5__7, 0, v192, v193);
        v4->fields._cryptBytes_5__8 = 0LL;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._cryptBytes_5__8, 0, v194, v195);
        if ( !_4__this )
          goto LABEL_291;
LABEL_134:
        v196 = _4__this->fields.saveNameList;
        if ( !v196 )
LABEL_291:
          sub_1BCB254(this, method);
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
        v197 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v197,
          (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v197;
        sub_1BCAF9C((CGThumbnailListItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v197, v198, v199);
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
                 (System_String_o *)StringLiteral_11377/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_291;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v201 = sub_1BCB0A0(DataMasterBase___TypeInfo, 9LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v201 )
                goto LABEL_291;
              v203 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( !*(_DWORD *)(v201 + 24) )
                goto LABEL_292;
              *(_QWORD *)(v201 + 32) = v203;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 32), (int32_t)v203, v2, v202);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantClassMaster___);
              v205 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 1u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 40) = v205;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 40), (int32_t)v205, v2, v204);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v207 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 2u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 48) = v207;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 48), (int32_t)v207, v2, v206);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v209 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 3u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 56) = v209;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 56), (int32_t)v209, v2, v208);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v211 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 4u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 64) = v211;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 64), (int32_t)v211, v2, v210);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventServantMaster___);
              v213 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 5u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 72) = v213;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 72), (int32_t)v213, v2, v212);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v215 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 6u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 80) = v215;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 80), (int32_t)v215, v2, v214);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v217 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_241;
              }
              if ( *(_DWORD *)(v201 + 24) <= 7u )
                goto LABEL_292;
              *(_QWORD *)(v201 + 88) = v217;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 88), (int32_t)v217, v2, v216);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantAddMaster___);
              v219 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1BCB134(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                {
LABEL_241:
                  v263 = sub_1BCB278(this);
                  sub_1BCB120(v263, 0LL);
                }
              }
              if ( *(_DWORD *)(v201 + 24) <= 8u )
LABEL_292:
                sub_1BCB25C(this, method, v2);
              *(_QWORD *)(v201 + 96) = v219;
              sub_1BCAF9C((CGThumbnailListItem_o *)(v201 + 96), (int32_t)v219, v2, v218);
              v220 = *(_QWORD *)(v201 + 24);
              if ( (int)v220 >= 1 )
              {
                v221 = 0LL;
                while ( (unsigned int)v221 < (unsigned int)v220 )
                {
                  v222 = *(_QWORD **)(v201 + 32 + 8 * v221);
                  v223 = sub_1BCB244(DataManager___c__DisplayClass49_1_TypeInfo);
                  DataManager___c__DisplayClass49_1___ctor((DataManager___c__DisplayClass49_1_o *)v223, 0LL);
                  if ( !v222 )
                    goto LABEL_291;
                  if ( !v223 )
                    goto LABEL_291;
                  v226 = v222[3];
                  *(_QWORD *)(v223 + 16) = v226;
                  sub_1BCAF9C((CGThumbnailListItem_o *)(v223 + 16), v226, v224, v225);
                  v227 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v228 = (System_Predicate_object__o *)sub_1BCB244(System_Predicate_string__TypeInfo);
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
                                                                    (const MethodInfo_36BA428 *)Method_System_Collections_Generic_List_string__FindIndex__);
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
                                                                      (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                                      (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                        *(const MethodInfo_369CBAC **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
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
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_291;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_204:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v236 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v236, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v236;
                  v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                  sub_1BCAF9C(v85, (int32_t)v236, v237, v238);
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
              v257 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v257, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v257;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BCAF9C(v85, (int32_t)v257, v258, v259);
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
              v127 = (System_Func_bool__o *)sub_1BCB244(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v127,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v128 = (UnityEngine_WaitUntil_o *)sub_1BCB244(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v128, v127, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v128;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BCAF9C(v85, (int32_t)v128, v129, v130);
              v88 = 9;
              goto LABEL_82;
            }
            goto LABEL_291;
          }
        }
LABEL_209:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_64378436(lockCountObj, &lockTaken, 0LL);
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
          v244 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v244, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v244;
          v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1BCAF9C(v85, (int32_t)v244, v245, v246);
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
              sub_1BCAF9C((CGThumbnailListItem_o *)&_4__this->fields.masterDataBytes, 0, v252, v247);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0LL);
              v254 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v254, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v254;
              v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BCAF9C(v85, (int32_t)v254, v255, v256);
              v88 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_291;
        }
        return 0;
      }
      v188 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v188, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v188;
      v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BCAF9C(v85, (int32_t)v188, v189, v190);
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
        v133 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v133, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v133;
        v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BCAF9C(v85, (int32_t)v133, v134, v135);
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
            v267 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v267, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v267;
            v85 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BCAF9C(v85, (int32_t)v267, v268, v269);
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_40121248; // x0
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

  if ( (byte_4B1C013 & 1) == 0 )
  {
    sub_1BCAFF8(&CatAndMouseGame_TypeInfo, method);
    sub_1BCAFF8(&System_Convert_TypeInfo, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1BCAFF8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1BCAFF8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1BCAFF8(&JsonManager_TypeInfo, v10);
    sub_1BCAFF8(&NetworkManager_TypeInfo, v11);
    sub_1BCAFF8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    sub_1BCAFF8(&StringLiteral_18073/*"contactURL"*/, v13);
    sub_1BCAFF8(&StringLiteral_19271/*"filePass"*/, v14);
    sub_1BCAFF8(&StringLiteral_16907/*"baseURL"*/, v15);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v16);
    byte_4B1C013 = 1;
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
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v19, v20);
      this->fields._dataObject_5__4 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v21, v22);
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
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, (int32_t)v26, v27, v28);
      v31 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v31 = DataManager_TypeInfo;
      }
      static_fields = v31->static_fields;
      static_fields->webViewData = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->webViewData, 0, v29, v30);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        this->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &this->fields.__2__current;
        sub_1BCAF9C((CGThumbnailListItem_o *)p__2__current, (int32_t)v35, v37, v38);
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
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, (int32_t)v42, v43, v44);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v45, 0LL);
        this->fields.__2__current = (Il2CppObject *)v45;
        v46 = &this->fields.__2__current;
        sub_1BCAF9C((CGThumbnailListItem_o *)v46, (int32_t)v45, v47, v48);
        v49 = 2;
LABEL_30:
        *((_DWORD *)v46 - 2) = v49;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_40121248 = JsonManager__getDictionary_40121248(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_40121248;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_40121248, v52, v53);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCB244(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v54, 0LL);
        this->fields.__2__current = (Il2CppObject *)v54;
        v46 = &this->fields.__2__current;
        sub_1BCAF9C((CGThumbnailListItem_o *)v46, (int32_t)v54, v55, v56);
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
              (Il2CppObject *)StringLiteral_16907/*"baseURL"*/,
              (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_16907/*"baseURL"*/,
               (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
              (Il2CppObject *)StringLiteral_18073/*"contactURL"*/,
              (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18073/*"contactURL"*/,
               (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
             (Il2CppObject *)StringLiteral_19271/*"filePass"*/,
             (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1BCB254(Item, v34);
        v61 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19271/*"filePass"*/,
                (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v62 = (System_Collections_Generic_Dictionary_string__object__o *)v61;
        if ( v61 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v61->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v61->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1BCB514(v61);
LABEL_54:
            sub_1BCB254(webViewData, v23);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v60, v59, v62, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._cryptString_5__3, 0, v64, v65);
      this->fields._dataObject_5__4 = 0LL;
      sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields._dataObject_5__4, 0, v66, v67);
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

  v2 = sub_1BCB00C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BCB244(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BCB00C(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1BCB120(v3, v4);
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