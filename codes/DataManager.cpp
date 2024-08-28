void __fastcall DataManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct DataManager_StaticFields *static_fields; // x0
  struct DataManager_StaticFields *v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  struct DataManager_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A1F616 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, v1);
    sub_1B715CC(&StringLiteral_1/*""*/, v4);
    byte_4A1F616 = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->updateData, 0, v2, v3);
  v6 = DataManager_TypeInfo->static_fields;
  v6->webViewData = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v6->webViewData, 0, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  v10 = DataManager_TypeInfo->static_fields;
  v10->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v10->serverHash, v9, v11, v12);
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
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  Il2CppObject *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_4A1F615 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_long_____ctor__, v3);
    sub_1B715CC(&System_Collections_Generic_List_long____TypeInfo, v4);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B715CC(&object_TypeInfo, v6);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager___ctor__, v7);
    byte_4A1F615 = 1;
  }
  this->fields._DispLog = 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.saveNameList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v11;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.saveDataMapList, (int32_t)v11, v12, v13);
  v14 = (Il2CppObject *)sub_1B71818(object_TypeInfo);
  System_Object___ctor(v14, 0LL);
  this->fields.lockCountObj = v14;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.lockCountObj, (int32_t)v14, v15, v16);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_370B620 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_4A1F5F3 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, v1);
    byte_4A1F5F3 = 1;
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

  if ( (byte_4A1F5F4 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    byte_4A1F5F4 = 1;
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

  if ( (byte_4A1F5F2 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, v1);
    byte_4A1F5F2 = 1;
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

  if ( (byte_4A1F60C & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_4A1F60C = 1;
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
    sub_1B71828(v5, method);
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
  DataMasterBase_array *v517; // x19
  ServantMaster_o *v518; // x20
  __int64 v519; // x0
  __int64 v520; // x1
  int32_t v521; // w2
  int32_t v522; // w3
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v524; // x20
  int32_t v525; // w2
  int32_t v526; // w3
  ServantCommentMaster_o *v527; // x20
  int32_t v528; // w2
  int32_t v529; // w3
  ServantProfileMaster_o *v530; // x20
  int32_t v531; // w2
  int32_t v532; // w3
  WarMaster_o *v533; // x20
  int32_t v534; // w2
  int32_t v535; // w3
  UserMaster_o *v536; // x20
  int32_t v537; // w2
  int32_t v538; // w3
  UserGameMaster_o *v539; // x20
  int32_t v540; // w2
  int32_t v541; // w3
  TblUserMaster_o *v542; // x20
  int32_t v543; // w2
  int32_t v544; // w3
  UserItemMaster_o *v545; // x20
  int32_t v546; // w2
  int32_t v547; // w3
  UserServantMaster_o *v548; // x20
  int32_t v549; // w2
  int32_t v550; // w3
  UserServantStorageMaster_o *v551; // x20
  int32_t v552; // w2
  int32_t v553; // w3
  UserAccessaryMaster_o *v554; // x20
  int32_t v555; // w2
  int32_t v556; // w3
  UserQuestMaster_o *v557; // x20
  int32_t v558; // w2
  int32_t v559; // w3
  BattleMaster_o *v560; // x20
  int32_t v561; // w2
  int32_t v562; // w3
  OtherUserGameMaster_o *v563; // x20
  int32_t v564; // w2
  int32_t v565; // w3
  TblFriendMaster_o *v566; // x20
  int32_t v567; // w2
  int32_t v568; // w3
  AreaMaster_o *v569; // x20
  int32_t v570; // w2
  int32_t v571; // w3
  ServantCardMaster_o *v572; // x20
  int32_t v573; // w2
  int32_t v574; // w3
  EventMaster_o *v575; // x20
  int32_t v576; // w2
  int32_t v577; // w3
  ItemMaster_o *v578; // x20
  int32_t v579; // w2
  int32_t v580; // w3
  QuestMaster_o *v581; // x20
  int32_t v582; // w2
  int32_t v583; // w3
  QuestAddMaster_o *v584; // x20
  int32_t v585; // w2
  int32_t v586; // w3
  QuestReleaseMaster_o *v587; // x20
  int32_t v588; // w2
  int32_t v589; // w3
  QuestDateRangeMaster_o *v590; // x20
  int32_t v591; // w2
  int32_t v592; // w3
  QuestPhaseMaster_o *v593; // x20
  int32_t v594; // w2
  int32_t v595; // w3
  QuestPhaseDetailMaster_o *v596; // x20
  int32_t v597; // w2
  int32_t v598; // w3
  QuestGroupMaster_o *v599; // x20
  int32_t v600; // w2
  int32_t v601; // w3
  QuestRandomGroupMaster_o *v602; // x20
  int32_t v603; // w2
  int32_t v604; // w3
  QuestConsumeItemMaster_o *v605; // x20
  int32_t v606; // w2
  int32_t v607; // w3
  QuestMessageMaster_o *v608; // x20
  int32_t v609; // w2
  int32_t v610; // w3
  UserQuestInfoMaster_o *v611; // x20
  int32_t v612; // w2
  int32_t v613; // w3
  UserQuestRecordMaster_o *v614; // x20
  int32_t v615; // w2
  int32_t v616; // w3
  ViewQuestInfoMaster_o *v617; // x20
  int32_t v618; // w2
  int32_t v619; // w3
  ViewEnemyMaster_o *v620; // x20
  int32_t v621; // w2
  int32_t v622; // w3
  ViewQuestEnemyInfoMaster_o *v623; // x20
  int32_t v624; // w2
  int32_t v625; // w3
  BlankEarthSpotMaster_o *v626; // x20
  int32_t v627; // w2
  int32_t v628; // w3
  BlankEarthSpotAddMaster_o *v629; // x20
  int32_t v630; // w2
  int32_t v631; // w3
  SpotMaster_o *v632; // x20
  int32_t v633; // w2
  int32_t v634; // w3
  SpotImageMaster_o *v635; // x20
  int32_t v636; // w2
  int32_t v637; // w3
  SpotRoadMaster_o *v638; // x20
  int32_t v639; // w2
  int32_t v640; // w3
  SpotPathMaster_o *v641; // x20
  int32_t v642; // w2
  int32_t v643; // w3
  SpotAddMaster_o *v644; // x20
  int32_t v645; // w2
  int32_t v646; // w3
  MapGimmickMaster_o *v647; // x20
  int32_t v648; // w2
  int32_t v649; // w3
  GiftMaster_o *v650; // x20
  int32_t v651; // w2
  int32_t v652; // w3
  GiftAddMaster_o *v653; // x20
  int32_t v654; // w2
  int32_t v655; // w3
  ShopMaster_o *v656; // x20
  int32_t v657; // w2
  int32_t v658; // w3
  StoneShopMaster_o *v659; // x20
  int32_t v660; // w2
  int32_t v661; // w3
  BankShopMaster_o *v662; // x20
  int32_t v663; // w2
  int32_t v664; // w3
  ShopScriptMaster_o *v665; // x20
  int32_t v666; // w2
  int32_t v667; // w3
  StageMaster_o *v668; // x20
  int32_t v669; // w2
  int32_t v670; // w3
  ServantGroupMaster_o *v671; // x20
  int32_t v672; // w2
  int32_t v673; // w3
  ServantLimitMaster_o *v674; // x20
  int32_t v675; // w2
  int32_t v676; // w3
  ServantLimitAddMaster_o *v677; // x20
  int32_t v678; // w2
  int32_t v679; // w3
  ServantSkillMaster_o *v680; // x20
  int32_t v681; // w2
  int32_t v682; // w3
  ServantPassiveSkillMaster_o *v683; // x20
  int32_t v684; // w2
  int32_t v685; // w3
  BgmMaster_o *v686; // x20
  int32_t v687; // w2
  int32_t v688; // w3
  ServantScriptMaster_o *v689; // x20
  int32_t v690; // w2
  int32_t v691; // w3
  NewsMaster_o *v692; // x20
  int32_t v693; // w2
  int32_t v694; // w3
  TelopMaster_o *v695; // x20
  int32_t v696; // w2
  int32_t v697; // w3
  UserExpMaster_o *v698; // x20
  int32_t v699; // w2
  int32_t v700; // w3
  TreasureDvcMaster_o *v701; // x20
  int32_t v702; // w2
  int32_t v703; // w3
  ServantTreasureDvcMaster_o *v704; // x20
  int32_t v705; // w2
  int32_t v706; // w3
  SkillMaster_o *v707; // x20
  int32_t v708; // w2
  int32_t v709; // w3
  SkillLvMaster_o *v710; // x20
  int32_t v711; // w2
  int32_t v712; // w3
  SkillDetailMaster_o *v713; // x20
  int32_t v714; // w2
  int32_t v715; // w3
  CommandSpellMaster_o *v716; // x20
  int32_t v717; // w2
  int32_t v718; // w3
  EquipMaster_o *v719; // x20
  int32_t v720; // w2
  int32_t v721; // w3
  EquipExpMaster_o *v722; // x20
  int32_t v723; // w2
  int32_t v724; // w3
  EquipSkillMaster_o *v725; // x20
  int32_t v726; // w2
  int32_t v727; // w3
  SubEquipMaster_o *v728; // x20
  int32_t v729; // w2
  int32_t v730; // w3
  AccessaryMaster_o *v731; // x20
  int32_t v732; // w2
  int32_t v733; // w3
  UserPresentBoxMaster_o *v734; // x20
  int32_t v735; // w2
  int32_t v736; // w3
  UserDeckMaster_o *v737; // x20
  int32_t v738; // w2
  int32_t v739; // w3
  UserSubEquipMaster_o *v740; // x20
  int32_t v741; // w2
  int32_t v742; // w3
  GachaMaster_o *v743; // x20
  int32_t v744; // w2
  int32_t v745; // w3
  GachaImageMaster_o *v746; // x20
  int32_t v747; // w2
  int32_t v748; // w3
  UserGachaMaster_o *v749; // x20
  int32_t v750; // w2
  int32_t v751; // w3
  UserEquipMaster_o *v752; // x20
  int32_t v753; // w2
  int32_t v754; // w3
  UserServantCollectionMaster_o *v755; // x20
  int32_t v756; // w2
  int32_t v757; // w3
  FriendshipMaster_o *v758; // x20
  int32_t v759; // w2
  int32_t v760; // w3
  GachaTicketMaster_o *v761; // x20
  int32_t v762; // w2
  int32_t v763; // w3
  UserFormationMaster_o *v764; // x20
  int32_t v765; // w2
  int32_t v766; // w3
  FunctionMaster_o *v767; // x20
  int32_t v768; // w2
  int32_t v769; // w3
  BuffMaster_o *v770; // x20
  int32_t v771; // w2
  int32_t v772; // w3
  GachaReleaseMaster_o *v773; // x20
  int32_t v774; // w2
  int32_t v775; // w3
  CombineQpMaster_o *v776; // x20
  int32_t v777; // w2
  int32_t v778; // w3
  CombineMaterialMaster_o *v779; // x20
  int32_t v780; // w2
  int32_t v781; // w3
  EventCombineMaster_o *v782; // x20
  int32_t v783; // w2
  int32_t v784; // w3
  ServantExpMaster_o *v785; // x20
  int32_t v786; // w2
  int32_t v787; // w3
  CombineSkillMaster_o *v788; // x20
  int32_t v789; // w2
  int32_t v790; // w3
  CombineTdMaster_o *v791; // x20
  int32_t v792; // w2
  int32_t v793; // w3
  EventQuestMaster_o *v794; // x20
  int32_t v795; // w2
  int32_t v796; // w3
  EventCampaignMaster_o *v797; // x20
  int32_t v798; // w2
  int32_t v799; // w3
  IllustratorMaster_o *v800; // x20
  int32_t v801; // w2
  int32_t v802; // w3
  CvMaster_o *v803; // x20
  int32_t v804; // w2
  int32_t v805; // w3
  TreasureDvcLvMaster_o *v806; // x20
  int32_t v807; // w2
  int32_t v808; // w3
  TreasureDvcDetailMaster_o *v809; // x20
  int32_t v810; // w2
  int32_t v811; // w3
  UserFollowerMaster_o *v812; // x20
  int32_t v813; // w2
  int32_t v814; // w3
  NpcFollowerMaster_o *v815; // x20
  int32_t v816; // w2
  int32_t v817; // w3
  NpcServantFollowerMaster_o *v818; // x20
  int32_t v819; // w2
  int32_t v820; // w3
  UserEventMaster_o *v821; // x20
  int32_t v822; // w2
  int32_t v823; // w3
  UserShopMaster_o *v824; // x20
  int32_t v825; // w2
  int32_t v826; // w3
  UserContinueMaster_o *v827; // x20
  int32_t v828; // w2
  int32_t v829; // w3
  ConstantMaster_o *v830; // x20
  int32_t v831; // w2
  int32_t v832; // w3
  ConstantLongMaster_o *v833; // x20
  int32_t v834; // w2
  int32_t v835; // w3
  ConstantStrMaster_o *v836; // x20
  int32_t v837; // w2
  int32_t v838; // w3
  AiMaster_o *v839; // x20
  int32_t v840; // w2
  int32_t v841; // w3
  AiActMaster_o *v842; // x20
  int32_t v843; // w2
  int32_t v844; // w3
  AttriRelationMaster_o *v845; // x20
  int32_t v846; // w2
  int32_t v847; // w3
  ClassRelationMaster_o *v848; // x20
  int32_t v849; // w2
  int32_t v850; // w3
  EffectMaster_o *v851; // x20
  int32_t v852; // w2
  int32_t v853; // w3
  EquipImageMaster_o *v854; // x20
  int32_t v855; // w2
  int32_t v856; // w3
  ServantVoiceMaster_o *v857; // x20
  int32_t v858; // w2
  int32_t v859; // w3
  CombineLimitMaster_o *v860; // x20
  int32_t v861; // w2
  int32_t v862; // w3
  CardMaster_o *v863; // x20
  int32_t v864; // w2
  int32_t v865; // w3
  CombineQpSvtEquipMaster_o *v866; // x20
  int32_t v867; // w2
  int32_t v868; // w3
  ServantRarityMaster_o *v869; // x20
  int32_t v870; // w2
  int32_t v871; // w3
  SetItemMaster_o *v872; // x20
  int32_t v873; // w2
  int32_t v874; // w3
  RecoverMaster_o *v875; // x20
  int32_t v876; // w2
  int32_t v877; // w3
  BannerMaster_o *v878; // x20
  int32_t v879; // w2
  int32_t v880; // w3
  ShopReleaseMaster_o *v881; // x20
  int32_t v882; // w2
  int32_t v883; // w3
  EventRewardMaster_o *v884; // x20
  int32_t v885; // w2
  int32_t v886; // w3
  EventDetailMaster_o *v887; // x20
  int32_t v888; // w2
  int32_t v889; // w3
  EventServantMaster_o *v890; // x20
  int32_t v891; // w2
  int32_t v892; // w3
  BoxGachaMaster_o *v893; // x20
  int32_t v894; // w2
  int32_t v895; // w3
  BoxGachaBaseMaster_o *v896; // x20
  int32_t v897; // w2
  int32_t v898; // w3
  BoxGachaTalkMaster_o *v899; // x20
  int32_t v900; // w2
  int32_t v901; // w3
  UserBoxGachaMaster_o *v902; // x20
  int32_t v903; // w2
  int32_t v904; // w3
  BoxGachaHistoryMaster_o *v905; // x20
  int32_t v906; // w2
  int32_t v907; // w3
  BattleBgMaster_o *v908; // x20
  int32_t v909; // w2
  int32_t v910; // w3
  TipsBattleMaster_o *v911; // x20
  int32_t v912; // w2
  int32_t v913; // w3
  UserLoginMaster_o *v914; // x20
  int32_t v915; // w2
  int32_t v916; // w3
  VoiceMaster_o *v917; // x20
  int32_t v918; // w2
  int32_t v919; // w3
  EventRewardExtraMaster_o *v920; // x20
  int32_t v921; // w2
  int32_t v922; // w3
  EventMissionMaster_o *v923; // x20
  int32_t v924; // w2
  int32_t v925; // w3
  EventMissionActionMaster_o *v926; // x20
  int32_t v927; // w2
  int32_t v928; // w3
  EventMissionActionAddMaster_o *v929; // x20
  int32_t v930; // w2
  int32_t v931; // w3
  EventMissionConditionMaster_o *v932; // x20
  int32_t v933; // w2
  int32_t v934; // w3
  EventMissionCondDetailMaster_o *v935; // x20
  int32_t v936; // w2
  int32_t v937; // w3
  EventMissionAddMaster_o *v938; // x20
  int32_t v939; // w2
  int32_t v940; // w3
  CompleteMissionMaster_o *v941; // x20
  int32_t v942; // w2
  int32_t v943; // w3
  EventRewardSetMaster_o *v944; // x20
  int32_t v945; // w2
  int32_t v946; // w3
  UserEventMissionMaster_o *v947; // x20
  int32_t v948; // w2
  int32_t v949; // w3
  UserEventMissionCondDetailMaster_o *v950; // x20
  int32_t v951; // w2
  int32_t v952; // w3
  BoxGachaBaseDetailMaster_o *v953; // x20
  int32_t v954; // w2
  int32_t v955; // w3
  UserServantLeaderMaster_o *v956; // x20
  int32_t v957; // w2
  int32_t v958; // w3
  ClosedMessageMaster_o *v959; // x20
  int32_t v960; // w2
  int32_t v961; // w3
  FunctionGroupMaster_o *v962; // x20
  int32_t v963; // w2
  int32_t v964; // w3
  EventRaidMaster_o *v965; // x20
  int32_t v966; // w2
  int32_t v967; // w3
  TotalEventRaidMaster_o *v968; // x20
  int32_t v969; // w2
  int32_t v970; // w3
  UserEventRaidMaster_o *v971; // x20
  int32_t v972; // w2
  int32_t v973; // w3
  EventPointMaster_o *v974; // x20
  int32_t v975; // w2
  int32_t v976; // w3
  EventPointGroupMaster_o *v977; // x20
  int32_t v978; // w2
  int32_t v979; // w3
  TotalEventPointMaster_o *v980; // x20
  int32_t v981; // w2
  int32_t v982; // w3
  UserEventPointMaster_o *v983; // x20
  int32_t v984; // w2
  int32_t v985; // w3
  EventPointUpperMaster_o *v986; // x20
  int32_t v987; // w2
  int32_t v988; // w3
  EventPointUpperReleaseMaster_o *v989; // x20
  int32_t v990; // w2
  int32_t v991; // w3
  EventRaceMaster_o *v992; // x20
  int32_t v993; // w2
  int32_t v994; // w3
  EventRaceResultMaster_o *v995; // x20
  int32_t v996; // w2
  int32_t v997; // w3
  QuestRacePointMaster_o *v998; // x20
  int32_t v999; // w2
  int32_t v1000; // w3
  UserEventRaceMaster_o *v1001; // x20
  int32_t v1002; // w2
  int32_t v1003; // w3
  EventScriptMaster_o *v1004; // x20
  int32_t v1005; // w2
  int32_t v1006; // w3
  EventScriptReleaseMaster_o *v1007; // x20
  int32_t v1008; // w2
  int32_t v1009; // w3
  UserPresentHistoryMaster_o *v1010; // x20
  int32_t v1011; // w2
  int32_t v1012; // w3
  MstMissionMaster_o *v1013; // x20
  int32_t v1014; // w2
  int32_t v1015; // w3
  ServantExceedMaster_o *v1016; // x20
  int32_t v1017; // w2
  int32_t v1018; // w3
  PartialMaintenanceMaster_o *v1019; // x20
  int32_t v1020; // w2
  int32_t v1021; // w3
  GuideMaster_o *v1022; // x20
  int32_t v1023; // w2
  int32_t v1024; // w3
  MstMissionDisplayInfoMaster_o *v1025; // x20
  int32_t v1026; // w2
  int32_t v1027; // w3
  GachaGroupMaster_o *v1028; // x20
  int32_t v1029; // w2
  int32_t v1030; // w3
  QuestResetMaster_o *v1031; // x20
  int32_t v1032; // w2
  int32_t v1033; // w3
  WarAddMaster_o *v1034; // x20
  int32_t v1035; // w2
  int32_t v1036; // w3
  EventItemDisplayMaster_o *v1037; // x20
  int32_t v1038; // w2
  int32_t v1039; // w3
  EventItemDisplayGroupMaster_o *v1040; // x20
  int32_t v1041; // w2
  int32_t v1042; // w3
  EventItemDisplayReleaseMaster_o *v1043; // x20
  int32_t v1044; // w2
  int32_t v1045; // w3
  EventTutorialMaster_o *v1046; // x20
  int32_t v1047; // w2
  int32_t v1048; // w3
  EventTutorialCondMaster_o *v1049; // x20
  int32_t v1050; // w2
  int32_t v1051; // w3
  VoiceReleaseMaster_o *v1052; // x20
  int32_t v1053; // w2
  int32_t v1054; // w3
  EventSuperBossMaster_o *v1055; // x20
  int32_t v1056; // w2
  int32_t v1057; // w3
  UserSuperBossMaster_o *v1058; // x20
  int32_t v1059; // w2
  int32_t v1060; // w3
  QuestScriptMaster_o *v1061; // x20
  int32_t v1062; // w2
  int32_t v1063; // w3
  QuestScriptReleaseMaster_o *v1064; // x20
  int32_t v1065; // w2
  int32_t v1066; // w3
  MaterialFolderMaster_o *v1067; // x20
  int32_t v1068; // w2
  int32_t v1069; // w3
  RestrictionMaster_o *v1070; // x20
  int32_t v1071; // w2
  int32_t v1072; // w3
  QuestRestrictionMaster_o *v1073; // x20
  int32_t v1074; // w2
  int32_t v1075; // w3
  ServantVoiceRelationMaster_o *v1076; // x20
  int32_t v1077; // w2
  int32_t v1078; // w3
  ShopDetailMaster_o *v1079; // x20
  int32_t v1080; // w2
  int32_t v1081; // w3
  ServantScriptAddMaster_o *v1082; // x20
  int32_t v1083; // w2
  int32_t v1084; // w3
  CombineMaster_o *v1085; // x20
  int32_t v1086; // w2
  int32_t v1087; // w3
  AiFieldMaster_o *v1088; // x20
  int32_t v1089; // w2
  int32_t v1090; // w3
  ServantCommentAddMaster_o *v1091; // x20
  int32_t v1092; // w2
  int32_t v1093; // w3
  EventFilterMaster_o *v1094; // x20
  int32_t v1095; // w2
  int32_t v1096; // w3
  UserSupportDeckMaster_o *v1097; // x20
  int32_t v1098; // w2
  int32_t v1099; // w3
  EventRewardSceneMaster_o *v1100; // x20
  int32_t v1101; // w2
  int32_t v1102; // w3
  EventVoicePlayMaster_o *v1103; // x20
  int32_t v1104; // w2
  int32_t v1105; // w3
  GachaSubMaster_o *v1106; // x20
  int32_t v1107; // w2
  int32_t v1108; // w3
  GachaDetailMaster_o *v1109; // x20
  int32_t v1110; // w2
  int32_t v1111; // w3
  GachaBonusSelectMaster_o *v1112; // x20
  int32_t v1113; // w2
  int32_t v1114; // w3
  GachaBonusSelectLineupMaster_o *v1115; // x20
  int32_t v1116; // w2
  int32_t v1117; // w3
  ServantChangeMaster_o *v1118; // x20
  int32_t v1119; // w2
  int32_t v1120; // w3
  VoiceCondMaster_o *v1121; // x20
  int32_t v1122; // w2
  int32_t v1123; // w3
  BgmReleaseMaster_o *v1124; // x20
  int32_t v1125; // w2
  int32_t v1126; // w3
  MyRoomAddMaster_o *v1127; // x20
  int32_t v1128; // w2
  int32_t v1129; // w3
  ShopActionMaster_o *v1130; // x20
  int32_t v1131; // w2
  int32_t v1132; // w3
  EventRewardSceneReleaseMaster_o *v1133; // x20
  int32_t v1134; // w2
  int32_t v1135; // w3
  QuestBehaviorMaster_o *v1136; // x20
  int32_t v1137; // w2
  int32_t v1138; // w3
  MapMaster_o *v1139; // x20
  int32_t v1140; // w2
  int32_t v1141; // w3
  MapCondMaster_o *v1142; // x20
  int32_t v1143; // w2
  int32_t v1144; // w3
  MapButtonMaster_o *v1145; // x20
  int32_t v1146; // w2
  int32_t v1147; // w3
  BannerAddMaster_o *v1148; // x20
  int32_t v1149; // w2
  int32_t v1150; // w3
  EventAddMaster_o *v1151; // x20
  int32_t v1152; // w2
  int32_t v1153; // w3
  TotalLoginMaster_o *v1154; // x20
  int32_t v1155; // w2
  int32_t v1156; // w3
  ServantFilterMaster_o *v1157; // x20
  int32_t v1158; // w2
  int32_t v1159; // w3
  CombineCostumeMaster_o *v1160; // x20
  int32_t v1161; // w2
  int32_t v1162; // w3
  ServantCostumeMaster_o *v1163; // x20
  int32_t v1164; // w2
  int32_t v1165; // w3
  ServantCostumeReleaseMaster_o *v1166; // x20
  int32_t v1167; // w2
  int32_t v1168; // w3
  UserFriendRequestHistoryMaster_o *v1169; // x20
  int32_t v1170; // w2
  int32_t v1171; // w3
  UserBlacklistMaster_o *v1172; // x20
  int32_t v1173; // w2
  int32_t v1174; // w3
  ItemSelectMaster_o *v1175; // x20
  int32_t v1176; // w2
  int32_t v1177; // w3
  TotalEventRaceMaster_o *v1178; // x20
  int32_t v1179; // w2
  int32_t v1180; // w3
  EventPointGroupAddMaster_o *v1181; // x20
  int32_t v1182; // w2
  int32_t v1183; // w3
  VoicePlayGroupMaster_o *v1184; // x20
  int32_t v1185; // w2
  int32_t v1186; // w3
  VoicePlayCondMaster_o *v1187; // x20
  int32_t v1188; // w2
  int32_t v1189; // w3
  GachaStoryAdjustMaster_o *v1190; // x20
  int32_t v1191; // w2
  int32_t v1192; // w3
  ServantFlagMaster_o *v1193; // x20
  int32_t v1194; // w2
  int32_t v1195; // w3
  ServantFlagReleaseMaster_o *v1196; // x20
  int32_t v1197; // w2
  int32_t v1198; // w3
  EventLocationCampaignMaster_o *v1199; // x20
  int32_t v1200; // w2
  int32_t v1201; // w3
  CampaignInfoMaster_o *v1202; // x20
  int32_t v1203; // w2
  int32_t v1204; // w3
  DialogMessageMaster_o *v1205; // x20
  int32_t v1206; // w2
  int32_t v1207; // w3
  ServantIndividualityMaster_o *v1208; // x20
  int32_t v1209; // w2
  int32_t v1210; // w3
  BoardMessageMaster_o *v1211; // x20
  int32_t v1212; // w2
  int32_t v1213; // w3
  BoardMessageReleaseMaster_o *v1214; // x20
  int32_t v1215; // w2
  int32_t v1216; // w3
  EventServantFatigueMaster_o *v1217; // x20
  int32_t v1218; // w2
  int32_t v1219; // w3
  UserEventDeckMaster_o *v1220; // x20
  int32_t v1221; // w2
  int32_t v1222; // w3
  EventTowerMaster_o *v1223; // x20
  int32_t v1224; // w2
  int32_t v1225; // w3
  EventTowerRewardMaster_o *v1226; // x20
  int32_t v1227; // w2
  int32_t v1228; // w3
  EventBulletinBoardMaster_o *v1229; // x20
  int32_t v1230; // w2
  int32_t v1231; // w3
  EventBulletinBoardReleaseMaster_o *v1232; // x20
  int32_t v1233; // w2
  int32_t v1234; // w3
  EventFactoryMaster_o *v1235; // x20
  int32_t v1236; // w2
  int32_t v1237; // w3
  ShopGroupMaster_o *v1238; // x20
  int32_t v1239; // w2
  int32_t v1240; // w3
  AuraEffectMaster_o *v1241; // x20
  int32_t v1242; // w2
  int32_t v1243; // w3
  AuraEffectPosOverwriteMaster_o *v1244; // x20
  int32_t v1245; // w2
  int32_t v1246; // w3
  UserEventMissionFixMaster_o *v1247; // x20
  int32_t v1248; // w2
  int32_t v1249; // w3
  NotEndEventMissionFixMaster_o *v1250; // x20
  int32_t v1251; // w2
  int32_t v1252; // w3
  EnemyMstMaster_o *v1253; // x20
  int32_t v1254; // w2
  int32_t v1255; // w3
  EnemyMstBattleMaster_o *v1256; // x20
  int32_t v1257; // w2
  int32_t v1258; // w3
  ServantSkillReleaseMaster_o *v1259; // x20
  int32_t v1260; // w2
  int32_t v1261; // w3
  ServantPassiveSkillReleaseMaster_o *v1262; // x20
  int32_t v1263; // w2
  int32_t v1264; // w3
  ServantTreasureDeviceReleaseMaster_o *v1265; // x20
  int32_t v1266; // w2
  int32_t v1267; // w3
  MapGimmickReleaseMaster_o *v1268; // x20
  int32_t v1269; // w2
  int32_t v1270; // w3
  CommandCodeMaster_o *v1271; // x20
  int32_t v1272; // w2
  int32_t v1273; // w3
  ServantCommandCodeUnlockMaster_o *v1274; // x20
  int32_t v1275; // w2
  int32_t v1276; // w3
  UserCommandCodeMaster_o *v1277; // x20
  int32_t v1278; // w2
  int32_t v1279; // w3
  UserCommandCodeCollectionMaster_o *v1280; // x20
  int32_t v1281; // w2
  int32_t v1282; // w3
  UserServantCommandCodeMaster_o *v1283; // x20
  int32_t v1284; // w2
  int32_t v1285; // w3
  UserServantCommandCardMaster_o *v1286; // x20
  int32_t v1287; // w2
  int32_t v1288; // w3
  CommandCardRankParamMaster_o *v1289; // x20
  int32_t v1290; // w2
  int32_t v1291; // w3
  CommandCodeSkillMaster_o *v1292; // x20
  int32_t v1293; // w2
  int32_t v1294; // w3
  CommandCodeSkillReleaseMaster_o *v1295; // x20
  int32_t v1296; // w2
  int32_t v1297; // w3
  CommandCodeCommentMaster_o *v1298; // x20
  int32_t v1299; // w2
  int32_t v1300; // w3
  EventStatusMaster_o *v1301; // x20
  int32_t v1302; // w2
  int32_t v1303; // w3
  EventStatusQuestMaster_o *v1304; // x20
  int32_t v1305; // w2
  int32_t v1306; // w3
  CommonRestrictionMaster_o *v1307; // x20
  int32_t v1308; // w2
  int32_t v1309; // w3
  EventPointBuffMaster_o *v1310; // x20
  int32_t v1311; // w2
  int32_t v1312; // w3
  UserFollowMaster_o *v1313; // x20
  int32_t v1314; // w2
  int32_t v1315; // w3
  EventRewardGuideReleaseMaster_o *v1316; // x20
  int32_t v1317; // w2
  int32_t v1318; // w3
  NpcServantEquipMaster_o *v1319; // x20
  int32_t v1320; // w2
  int32_t v1321; // w3
  EventCampaignReleaseMaster_o *v1322; // x20
  int32_t v1323; // w2
  int32_t v1324; // w3
  ServantMaterialFolderMaster_o *v1325; // x20
  int32_t v1326; // w2
  int32_t v1327; // w3
  EventEquipSkillReleaseMaster_o *v1328; // x20
  int32_t v1329; // w2
  int32_t v1330; // w3
  EventPointActivityMaster_o *v1331; // x20
  int32_t v1332; // w2
  int32_t v1333; // w3
  FunctionCategoryMaster_o *v1334; // x20
  int32_t v1335; // w2
  int32_t v1336; // w3
  QuestPickupMaster_o *v1337; // x20
  int32_t v1338; // w2
  int32_t v1339; // w3
  EventUiMaster_o *v1340; // x20
  int32_t v1341; // w2
  int32_t v1342; // w3
  EventUiReleaseMaster_o *v1343; // x20
  int32_t v1344; // w2
  int32_t v1345; // w3
  EventUiValueMaster_o *v1346; // x20
  int32_t v1347; // w2
  int32_t v1348; // w3
  EventConquestRewardMaster_o *v1349; // x20
  int32_t v1350; // w2
  int32_t v1351; // w3
  NpcFollowerReleaseMaster_o *v1352; // x20
  int32_t v1353; // w2
  int32_t v1354; // w3
  EventBonusFilterMaster_o *v1355; // x20
  int32_t v1356; // w2
  int32_t v1357; // w3
  EventBonusFilterGroupInfoMaster_o *v1358; // x20
  int32_t v1359; // w2
  int32_t v1360; // w3
  EventBonusFilterGroupMemberMaster_o *v1361; // x20
  int32_t v1362; // w2
  int32_t v1363; // w3
  UserGachaExtraCountMaster_o *v1364; // x20
  int32_t v1365; // w2
  int32_t v1366; // w3
  PrivilegeMaster_o *v1367; // x20
  int32_t v1368; // w2
  int32_t v1369; // w3
  UserPrivilegeMaster_o *v1370; // x20
  int32_t v1371; // w2
  int32_t v1372; // w3
  UserQuestRouteMaster_o *v1373; // x20
  int32_t v1374; // w2
  int32_t v1375; // w3
  EventBossStatusUiMaster_o *v1376; // x20
  int32_t v1377; // w2
  int32_t v1378; // w3
  CommonReleaseMaster_o *v1379; // x20
  int32_t v1380; // w2
  int32_t v1381; // w3
  QuestSpotReleaseMaster_o *v1382; // x20
  int32_t v1383; // w2
  int32_t v1384; // w3
  VoiceMaterialCondMaster_o *v1385; // x20
  int32_t v1386; // w2
  int32_t v1387; // w3
  ClassRelationOverwriteMaster_o *v1388; // x20
  int32_t v1389; // w2
  int32_t v1390; // w3
  EventGroupMaster_o *v1391; // x20
  int32_t v1392; // w2
  int32_t v1393; // w3
  TotalBoxGachaMaster_o *v1394; // x20
  int32_t v1395; // w2
  int32_t v1396; // w3
  ServantTreasureDeviceDamageMaster_o *v1397; // x20
  int32_t v1398; // w2
  int32_t v1399; // w3
  UserEventServantFatigueMaster_o *v1400; // x20
  int32_t v1401; // w2
  int32_t v1402; // w3
  EventRewardBgMaster_o *v1403; // x20
  int32_t v1404; // w2
  int32_t v1405; // w3
  EventFatigueRecoveryMaster_o *v1406; // x20
  int32_t v1407; // w2
  int32_t v1408; // w3
  EventBoostItemUsedMaster_o *v1409; // x20
  int32_t v1410; // w2
  int32_t v1411; // w3
  StatusEffectPosOverwriteMaster_o *v1412; // x20
  int32_t v1413; // w2
  int32_t v1414; // w3
  QuestPhaseDetailAddMaster_o *v1415; // x20
  int32_t v1416; // w2
  int32_t v1417; // w3
  VoiceClosedMessageMaster_o *v1418; // x20
  int32_t v1419; // w2
  int32_t v1420; // w3
  ReprintStageMaster_o *v1421; // x20
  int32_t v1422; // w2
  int32_t v1423; // w3
  UserCombineExpMaster_o *v1424; // x20
  int32_t v1425; // w2
  int32_t v1426; // w3
  EventBoardGameCellMaster_o *v1427; // x20
  int32_t v1428; // w2
  int32_t v1429; // w3
  EventBoardGameTokenMaster_o *v1430; // x20
  int32_t v1431; // w2
  int32_t v1432; // w3
  EventBoardGameTokenRewardMaster_o *v1433; // x20
  int32_t v1434; // w2
  int32_t v1435; // w3
  UserEventBoardGameTokenMaster_o *v1436; // x20
  int32_t v1437; // w2
  int32_t v1438; // w3
  ServantAnimationOverwriteMaster_o *v1439; // x20
  int32_t v1440; // w2
  int32_t v1441; // w3
  OpeningMovieMaster_o *v1442; // x20
  int32_t v1443; // w2
  int32_t v1444; // w3
  ServantLimitSpoilerProtectionMaster_o *v1445; // x20
  int32_t v1446; // w2
  int32_t v1447; // w3
  PickupUserFollowerMaster_o *v1448; // x20
  int32_t v1449; // w2
  int32_t v1450; // w3
  ServantCollectionMaster_o *v1451; // x20
  int32_t v1452; // w2
  int32_t v1453; // w3
  GachaBehaviorMaster_o *v1454; // x20
  int32_t v1455; // w2
  int32_t v1456; // w3
  EventQuestCooltimeMaster_o *v1457; // x20
  int32_t v1458; // w2
  int32_t v1459; // w3
  UserEventQuestCooltimeMaster_o *v1460; // x20
  int32_t v1461; // w2
  int32_t v1462; // w3
  BoostMaster_o *v1463; // x20
  int32_t v1464; // w2
  int32_t v1465; // w3
  WarBoardMaster_o *v1466; // x20
  int32_t v1467; // w2
  int32_t v1468; // w3
  WarBoardSquareMaster_o *v1469; // x20
  int32_t v1470; // w2
  int32_t v1471; // w3
  WarBoardRoadMaster_o *v1472; // x20
  int32_t v1473; // w2
  int32_t v1474; // w3
  WarBoardStageMaster_o *v1475; // x20
  int32_t v1476; // w2
  int32_t v1477; // w3
  WarBoardActionPointMaster_o *v1478; // x20
  int32_t v1479; // w2
  int32_t v1480; // w3
  WarBoardActionTrendMaster_o *v1481; // x20
  int32_t v1482; // w2
  int32_t v1483; // w3
  WarBoardTacticalTrendMaster_o *v1484; // x20
  int32_t v1485; // w2
  int32_t v1486; // w3
  WarBoardStageLayoutMaster_o *v1487; // x20
  int32_t v1488; // w2
  int32_t v1489; // w3
  WarBoardStageNpcMaster_o *v1490; // x20
  int32_t v1491; // w2
  int32_t v1492; // w3
  WarBoardStageWallMaster_o *v1493; // x20
  int32_t v1494; // w2
  int32_t v1495; // w3
  WarBoardAIMaster_o *v1496; // x20
  int32_t v1497; // w2
  int32_t v1498; // w3
  WarBoardRatingBaseMaster_o *v1499; // x20
  int32_t v1500; // w2
  int32_t v1501; // w3
  WarBoardRatingOffsetMaster_o *v1502; // x20
  int32_t v1503; // w2
  int32_t v1504; // w3
  WarBoardItemMaster_o *v1505; // x20
  int32_t v1506; // w2
  int32_t v1507; // w3
  WarBoardTreasureMaster_o *v1508; // x20
  int32_t v1509; // w2
  int32_t v1510; // w3
  WarBoardQuestMaster_o *v1511; // x20
  int32_t v1512; // w2
  int32_t v1513; // w3
  WarBoardDataMaster_o *v1514; // x20
  int32_t v1515; // w2
  int32_t v1516; // w3
  WarBoardIndividualityClassMaster_o *v1517; // x20
  int32_t v1518; // w2
  int32_t v1519; // w3
  WarBoardActionTrendConditionMaster_o *v1520; // x20
  int32_t v1521; // w2
  int32_t v1522; // w3
  WarBoardActionPointClassMaster_o *v1523; // x20
  int32_t v1524; // w2
  int32_t v1525; // w3
  EventPanelMapMaster_o *v1526; // x20
  int32_t v1527; // w2
  int32_t v1528; // w3
  EventPanelMapDetailMaster_o *v1529; // x20
  int32_t v1530; // w2
  int32_t v1531; // w3
  EventPanelSpotMaster_o *v1532; // x20
  int32_t v1533; // w2
  int32_t v1534; // w3
  EventPanelScanMaster_o *v1535; // x20
  int32_t v1536; // w2
  int32_t v1537; // w3
  CommonConsumeMaster_o *v1538; // x20
  int32_t v1539; // w2
  int32_t v1540; // w3
  UserEventMapMaster_o *v1541; // x20
  int32_t v1542; // w2
  int32_t v1543; // w3
  UserEventSpotMaster_o *v1544; // x20
  int32_t v1545; // w2
  int32_t v1546; // w3
  WarGroupMaster_o *v1547; // x20
  int32_t v1548; // w2
  int32_t v1549; // w3
  ServantLimitImageMaster_o *v1550; // x20
  int32_t v1551; // w2
  int32_t v1552; // w3
  FriendshipQuestDialogInfoMaster_o *v1553; // x20
  int32_t v1554; // w2
  int32_t v1555; // w3
  QuestRestrictionInfoMaster_o *v1556; // x20
  int32_t v1557; // w2
  int32_t v1558; // w3
  AssistMaster_o *v1559; // x20
  int32_t v1560; // w2
  int32_t v1561; // w3
  WarBoardEffectMaster_o *v1562; // x20
  int32_t v1563; // w2
  int32_t v1564; // w3
  WarBoardOnboardSkillMaster_o *v1565; // x20
  int32_t v1566; // w2
  int32_t v1567; // w3
  BeforeBirthDayMaster_o *v1568; // x20
  int32_t v1569; // w2
  int32_t v1570; // w3
  LoginQuestMaster_o *v1571; // x20
  int32_t v1572; // w2
  int32_t v1573; // w3
  EventCombineCostumeMaster_o *v1574; // x20
  int32_t v1575; // w2
  int32_t v1576; // w3
  WarBoardStagePieceDetailMaster_o *v1577; // x20
  int32_t v1578; // w2
  int32_t v1579; // w3
  ServantTreasureDeviceAddMaster_o *v1580; // x20
  int32_t v1581; // w2
  int32_t v1582; // w3
  SkillAddMaster_o *v1583; // x20
  int32_t v1584; // w2
  int32_t v1585; // w3
  ServantLvDetailMaster_o *v1586; // x20
  int32_t v1587; // w2
  int32_t v1588; // w3
  GachaAppendMaster_o *v1589; // x20
  int32_t v1590; // w2
  int32_t v1591; // w3
  UserGachaDrawLogMaster_o *v1592; // x20
  int32_t v1593; // w2
  int32_t v1594; // w3
  ServantAppendPassiveSkillMaster_o *v1595; // x20
  int32_t v1596; // w2
  int32_t v1597; // w3
  UserServantAppendPassiveSkillMaster_o *v1598; // x20
  int32_t v1599; // w2
  int32_t v1600; // w3
  UserServantAppendPassiveSkillLvMaster_o *v1601; // x20
  int32_t v1602; // w2
  int32_t v1603; // w3
  SvtAppendPassiveSkillUnlockMaster_o *v1604; // x20
  int32_t v1605; // w2
  int32_t v1606; // w3
  CombineAppendPassiveSkillMaster_o *v1607; // x20
  int32_t v1608; // w2
  int32_t v1609; // w3
  SvtCoinMaster_o *v1610; // x20
  int32_t v1611; // w2
  int32_t v1612; // w3
  UserSvtCoinMaster_o *v1613; // x20
  int32_t v1614; // w2
  int32_t v1615; // w3
  ServantAddMaster_o *v1616; // x20
  int32_t v1617; // w2
  int32_t v1618; // w3
  TreasureBoxMaster_o *v1619; // x20
  int32_t v1620; // w2
  int32_t v1621; // w3
  TreasureBoxGiftMaster_o *v1622; // x20
  int32_t v1623; // w2
  int32_t v1624; // w3
  TreasureBoxTalkMaster_o *v1625; // x20
  int32_t v1626; // w2
  int32_t v1627; // w3
  UserEventExpeditionMaster_o *v1628; // x20
  int32_t v1629; // w2
  int32_t v1630; // w3
  EventExpeditionMaster_o *v1631; // x20
  int32_t v1632; // w2
  int32_t v1633; // w3
  EventExpeditionPieceMaster_o *v1634; // x20
  int32_t v1635; // w2
  int32_t v1636; // w3
  EventRecipeMaster_o *v1637; // x20
  int32_t v1638; // w2
  int32_t v1639; // w3
  EventRecipeGiftMaster_o *v1640; // x20
  int32_t v1641; // w2
  int32_t v1642; // w3
  UserEventFortificationMaster_o *v1643; // x20
  int32_t v1644; // w2
  int32_t v1645; // w3
  EventFortificationMaster_o *v1646; // x20
  int32_t v1647; // w2
  int32_t v1648; // w3
  EventFortificationDetailMaster_o *v1649; // x20
  int32_t v1650; // w2
  int32_t v1651; // w3
  EventFortificationSvtMaster_o *v1652; // x20
  int32_t v1653; // w2
  int32_t v1654; // w3
  UserServantVoicePlayedMaster_o *v1655; // x20
  int32_t v1656; // w2
  int32_t v1657; // w3
  UpdateProfileDialogInfoMaster_o *v1658; // x20
  int32_t v1659; // w2
  int32_t v1660; // w3
  SvtMaterialTdMaster_o *v1661; // x20
  int32_t v1662; // w2
  int32_t v1663; // w3
  BattleMasterImageMaster_o *v1664; // x20
  int32_t v1665; // w2
  int32_t v1666; // w3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v1667; // x20
  int32_t v1668; // w2
  int32_t v1669; // w3
  UserEventRandomMissionMaster_o *v1670; // x20
  int32_t v1671; // w2
  int32_t v1672; // w3
  EventProgressValueMaster_o *v1673; // x20
  int32_t v1674; // w2
  int32_t v1675; // w3
  SvtMultiPortraitMaster_o *v1676; // x20
  int32_t v1677; // w2
  int32_t v1678; // w3
  EventRandomMissionMaster_o *v1679; // x20
  int32_t v1680; // w2
  int32_t v1681; // w3
  UserGachaHistoryMaster_o *v1682; // x20
  int32_t v1683; // w2
  int32_t v1684; // w3
  UserCoinRoomMaster_o *v1685; // x20
  int32_t v1686; // w2
  int32_t v1687; // w3
  EventBuddyPointMaster_o *v1688; // x20
  int32_t v1689; // w2
  int32_t v1690; // w3
  EventServantPointRankMaster_o *v1691; // x20
  int32_t v1692; // w2
  int32_t v1693; // w3
  UserEventServantPointMaster_o *v1694; // x20
  int32_t v1695; // w2
  int32_t v1696; // w3
  FieldMotionMaster_o *v1697; // x20
  int32_t v1698; // w2
  int32_t v1699; // w3
  UserDeleteReservationMaster_o *v1700; // x20
  int32_t v1701; // w2
  int32_t v1702; // w3
  ServantScriptMultipleMaster_o *v1703; // x20
  int32_t v1704; // w2
  int32_t v1705; // w3
  EquipAddMaster_o *v1706; // x20
  int32_t v1707; // w2
  int32_t v1708; // w3
  QuestReleaseOverwriteMaster_o *v1709; // x20
  int32_t v1710; // w2
  int32_t v1711; // w3
  UserEventAlloutBattleMaster_o *v1712; // x20
  int32_t v1713; // w2
  int32_t v1714; // w3
  QuestScriptMaterialNextMaster_o *v1715; // x20
  int32_t v1716; // w2
  int32_t v1717; // w3
  EventDiggingMaster_o *v1718; // x20
  int32_t v1719; // w2
  int32_t v1720; // w3
  EventDiggingBlockMaster_o *v1721; // x20
  int32_t v1722; // w2
  int32_t v1723; // w3
  EventDiggingRewardMaster_o *v1724; // x20
  int32_t v1725; // w2
  int32_t v1726; // w3
  UserEventDiggingMaster_o *v1727; // x20
  int32_t v1728; // w2
  int32_t v1729; // w3
  BattleMessageMaster_o *v1730; // x20
  int32_t v1731; // w2
  int32_t v1732; // w3
  BattleMessageGroupMaster_o *v1733; // x20
  int32_t v1734; // w2
  int32_t v1735; // w3
  UserNpcSvtRecordMaster_o *v1736; // x20
  int32_t v1737; // w2
  int32_t v1738; // w3
  BuffTypeDetailMaster_o *v1739; // x20
  int32_t v1740; // w2
  int32_t v1741; // w3
  WarBoardMessageMaster_o *v1742; // x20
  int32_t v1743; // w2
  int32_t v1744; // w3
  WarBoardPartySkillMaster_o *v1745; // x20
  int32_t v1746; // w2
  int32_t v1747; // w3
  WarBoardMessageScriptMaster_o *v1748; // x20
  int32_t v1749; // w2
  int32_t v1750; // w3
  WarQuestSelectionMaster_o *v1751; // x20
  int32_t v1752; // w2
  int32_t v1753; // w3
  WarBoardStageDetailMaster_o *v1754; // x20
  int32_t v1755; // w2
  int32_t v1756; // w3
  QuestScriptMaterialOverwriteMaster_o *v1757; // x20
  int32_t v1758; // w2
  int32_t v1759; // w3
  QuestScriptBranchMaterialMaster_o *v1760; // x20
  int32_t v1761; // w2
  int32_t v1762; // w3
  AdCheckPointMaster_o *v1763; // x20
  int32_t v1764; // w2
  int32_t v1765; // w3
  GiftDetailMaster_o *v1766; // x20
  int32_t v1767; // w2
  int32_t v1768; // w3
  CombineLimitGiftMaster_o *v1769; // x20
  int32_t v1770; // w2
  int32_t v1771; // w3
  EventCooltimeRewardMaster_o *v1772; // x20
  int32_t v1773; // w2
  int32_t v1774; // w3
  UserEventCooltimeRewardMaster_o *v1775; // x20
  int32_t v1776; // w2
  int32_t v1777; // w3
  ClassBoardBaseMaster_o *v1778; // x20
  int32_t v1779; // w2
  int32_t v1780; // w3
  ClassBoardLockMaster_o *v1781; // x20
  int32_t v1782; // w2
  int32_t v1783; // w3
  ClassBoardSquareMaster_o *v1784; // x20
  int32_t v1785; // w2
  int32_t v1786; // w3
  ClassBoardLineMaster_o *v1787; // x20
  int32_t v1788; // w2
  int32_t v1789; // w3
  UserClassBoardSquareMaster_o *v1790; // x20
  int32_t v1791; // w2
  int32_t v1792; // w3
  ServantCardAddMaster_o *v1793; // x20
  int32_t v1794; // w2
  int32_t v1795; // w3
  MapLayerMaster_o *v1796; // x20
  int32_t v1797; // w2
  int32_t v1798; // w3
  SpotLayerMaster_o *v1799; // x20
  int32_t v1800; // w2
  int32_t v1801; // w3
  MapGimmickLayerMaster_o *v1802; // x20
  int32_t v1803; // w2
  int32_t v1804; // w3
  EventDataLostBattleMaster_o *v1805; // x20
  int32_t v1806; // w2
  int32_t v1807; // w3
  EventDataLostBattleResetMaster_o *v1808; // x20
  int32_t v1809; // w2
  int32_t v1810; // w3
  UserEventDataLostMaster_o *v1811; // x20
  int32_t v1812; // w2
  int32_t v1813; // w3
  QuestHintMaster_o *v1814; // x20
  int32_t v1815; // w2
  int32_t v1816; // w3
  FuncTypeDetailMaster_o *v1817; // x20
  int32_t v1818; // w2
  int32_t v1819; // w3
  BuffConvertMaster_o *v1820; // x20
  int32_t v1821; // w2
  int32_t v1822; // w3
  SkillGroupMaster_o *v1823; // x20
  int32_t v1824; // w2
  int32_t v1825; // w3
  SkillGroupOverwriteMaster_o *v1826; // x20
  int32_t v1827; // w2
  int32_t v1828; // w3
  SkillIndividualityMaster_o *v1829; // x20
  int32_t v1830; // w2
  int32_t v1831; // w3
  RestrictionBaseMaster_o *v1832; // x20
  int32_t v1833; // w2
  int32_t v1834; // w3
  RestrictionSlotMaster_o *v1835; // x20
  int32_t v1836; // w2
  int32_t v1837; // w3
  RestrictionSlotDetailMaster_o *v1838; // x20
  int32_t v1839; // w2
  int32_t v1840; // w3
  RestrictionMessageMaster_o *v1841; // x20
  int32_t v1842; // w2
  int32_t v1843; // w3
  RestrictionWholeMaster_o *v1844; // x20
  int32_t v1845; // w2
  int32_t v1846; // w3
  FuncDispMaster_o *v1847; // x20
  int32_t v1848; // w2
  int32_t v1849; // w3
  ClassBoardCommandSpellMaster_o *v1850; // x20
  int32_t v1851; // w2
  int32_t v1852; // w3
  ClassBoardClassMaster_o *v1853; // x20
  int32_t v1854; // w2
  int32_t v1855; // w3
  EventCommandAssistMaster_o *v1856; // x20
  int32_t v1857; // w2
  int32_t v1858; // w3
  EventMissionGroupMaster_o *v1859; // x20
  int32_t v1860; // w2
  int32_t v1861; // w3
  CombineLimitReleaseMaster_o *v1862; // x20
  int32_t v1863; // w2
  int32_t v1864; // w3
  HeelPortraitMaster_o *v1865; // x20
  int32_t v1866; // w2
  int32_t v1867; // w3
  UserHeelPortraitMaster_o *v1868; // x20
  int32_t v1869; // w2
  int32_t v1870; // w3
  TreasureDeviceSequenceWeightMaster_o *v1871; // x20
  int32_t v1872; // w2
  int32_t v1873; // w3
  NpcServantFollowerIndividualityMaster_o *v1874; // x20
  int32_t v1875; // w2
  int32_t v1876; // w3
  GachaExtraGiftMaster_o *v1877; // x20
  int32_t v1878; // w2
  int32_t v1879; // w3
  EventMuralMaster_o *v1880; // x20
  int32_t v1881; // w2
  int32_t v1882; // w3
  ViewWaveEnemyMaster_o *v1883; // x20
  int32_t v1884; // w2
  int32_t v1885; // w3
  BlankEarthSpotNavimenuMaster_o *v1886; // x20
  int32_t v1887; // w2
  int32_t v1888; // w3
  BlankEarthGimmickMaster_o *v1889; // x20
  int32_t v1890; // w2
  int32_t v1891; // w3
  TerminalOverwriteMaster_o *v1892; // x20
  int32_t v1893; // w2
  int32_t v1894; // w3
  UserExchangeSvtMaster_o *v1895; // x20
  int32_t v1896; // w2
  int32_t v1897; // w3
  WarBoardCommonReleaseMaster_o *v1898; // x20
  int32_t v1899; // w2
  int32_t v1900; // w3
  WarBoardEventMaster_o *v1901; // x20
  int32_t v1902; // w2
  int32_t v1903; // w3
  WarBoardEventScriptMaster_o *v1904; // x20
  int32_t v1905; // w2
  int32_t v1906; // w3
  WarBoardStageBossMaster_o *v1907; // x20
  int32_t v1908; // w2
  int32_t v1909; // w3
  WarBoardSquareIndexGroupMaster_o *v1910; // x20
  int32_t v1911; // w2
  int32_t v1912; // w3
  WarBoardActionTrendGroupMaster_o *v1913; // x20
  int32_t v1914; // w2
  int32_t v1915; // w3
  WarBoardRatingOffsetGroupMaster_o *v1916; // x20
  int32_t v1917; // w2
  int32_t v1918; // w3
  WarBoardReinforcementsMaster_o *v1919; // x20
  int32_t v1920; // w2
  int32_t v1921; // w3
  WarBoardStageReinforcementsMaster_o *v1922; // x20
  int32_t v1923; // w2
  int32_t v1924; // w3
  WarBoardFutureActionTrendMaster_o *v1925; // x20
  int32_t v1926; // w2
  int32_t v1927; // w3
  ServantProfilePushMaster_o *v1928; // x20
  int32_t v1929; // w2
  int32_t v1930; // w3
  MapGimmickPathMaster_o *v1931; // x20
  int32_t v1932; // w2
  int32_t v1933; // w3
  MapGimmickPathReleaseMaster_o *v1934; // x20
  int32_t v1935; // w2
  int32_t v1936; // w3
  ServantOverwriteMaster_o *v1937; // x20
  int32_t v1938; // w2
  int32_t v1939; // w3
  IndividualityPolicyMaster_o *v1940; // x20
  int32_t v1941; // w2
  int32_t v1942; // w3
  IndividualityPersonalityMaster_o *v1943; // x20
  int32_t v1944; // w2
  int32_t v1945; // w3
  AttriMaster_o *v1946; // x20
  int32_t v1947; // w2
  int32_t v1948; // w3
  ServantVoicePatternMaster_o *v1949; // x20
  int32_t v1950; // w2
  int32_t v1951; // w3
  UserGameCommonMaster_o *v1952; // x20
  int32_t v1953; // w2
  int32_t v1954; // w3
  ServantPhotoMaster_o *v1955; // x20
  int32_t v1956; // w2
  int32_t v1957; // w3
  MasterPhotoMaster_o *v1958; // x20
  int32_t v1959; // w2
  int32_t v1960; // w3
  WarMessageMaster_o *v1961; // x20
  int32_t v1962; // w2
  int32_t v1963; // w3
  QuestAutoOrganizationAdjustMaster_o *v1964; // x20
  int32_t v1965; // w2
  int32_t v1966; // w3
  ExcludeMotionMaster_o *v1967; // x20
  int32_t v1968; // w2
  int32_t v1969; // w3
  UserInterruptionQuestMaster_o *v1970; // x20
  int32_t v1971; // w2
  int32_t v1972; // w3
  ServantTransformMaster_o *v1973; // x20
  int32_t v1974; // w2
  int32_t v1975; // w3
  MapUpdateScheduleMaster_o *v1976; // x20
  int32_t v1977; // w2
  int32_t v1978; // w3
  QuestPhasePresentMaster_o *v1979; // x20
  int32_t v1980; // w2
  int32_t v1981; // w3
  UserAccountLinkageMaster_o *v1982; // x20
  int32_t v1983; // w2
  int32_t v1984; // w3
  MissionNaviTransitionMaster_o *v1985; // x20
  int32_t v1986; // w2
  int32_t v1987; // w3
  MissionNaviQuestMaster_o *v1988; // x20
  int32_t v1989; // w2
  int32_t v1990; // w3
  EventTradeGoodsMaster_o *v1991; // x20
  int32_t v1992; // w2
  int32_t v1993; // w3
  EventTradeStoreMaster_o *v1994; // x20
  int32_t v1995; // w2
  int32_t v1996; // w3
  EventTradePickupMaster_o *v1997; // x20
  int32_t v1998; // w2
  int32_t v1999; // w3
  UserEventTradeMaster_o *v2000; // x20
  int32_t v2001; // w2
  int32_t v2002; // w3
  PaymentHistoryMaster_o *v2003; // x20
  int32_t v2004; // w2
  int32_t v2005; // w3
  UserExternalPaymentStoneMaster_o *v2006; // x20
  int32_t v2007; // w2
  int32_t v2008; // w3
  QuestPhaseIndividualityMaster_o *v2009; // x20
  int32_t v2010; // w2
  int32_t v2011; // w3
  ViewGachaFeaturedServantMaster_o *v2012; // x20
  int32_t v2013; // w2
  int32_t v2014; // w3
  UserGachaPickupCollateralMaster_o *v2015; // x20
  int32_t v2016; // w2
  int32_t v2017; // w3
  GachaPickupCollateralMaster_o *v2018; // x20
  int32_t v2019; // w2
  int32_t v2020; // w3
  GachaPickupCollateralGroupMaster_o *v2021; // x20
  int32_t v2022; // w2
  int32_t v2023; // w3
  BattlePointMaster_o *v2024; // x20
  int32_t v2025; // w2
  int32_t v2026; // w3
  BattlePointPhaseMaster_o *v2027; // x20
  int32_t v2028; // w2
  int32_t v2029; // w3
  ServantBattlePointMaster_o *v2030; // x20
  int32_t v2031; // w2
  int32_t v2032; // w3
  EffectMovieMaster_o *v2033; // x20
  int32_t v2034; // w2
  int32_t v2035; // w3
  PaymentLimitMaster_o *v2036; // x20
  int32_t v2037; // w2
  int32_t v2038; // w3
  UserPaymentLimitMaster_o *v2039; // x20
  int32_t v2040; // w2
  int32_t v2041; // w3
  RoadmapMaster_o *v2042; // x20
  int32_t v2043; // w2
  int32_t v2044; // w3
  UserRecommendSupportMaster_o *v2045; // x20
  int32_t v2046; // w2
  int32_t v2047; // w3
  RecommendSupportQuestMaster_o *v2048; // x20
  int32_t v2049; // w2
  int32_t v2050; // w3
  RecommendAdviceMessageMaster_o *v2051; // x20
  int32_t v2052; // w2
  int32_t v2053; // w3
  UserRecommendFollowerMaster_o *v2054; // x20
  int32_t v2055; // w2
  int32_t v2056; // w3
  ItemDropEfficiencyMaster_o *v2057; // x20
  int32_t v2058; // w2
  int32_t v2059; // w3
  BlankEarthGimmickAddMaster_o *v2060; // x20
  int32_t v2061; // w2
  int32_t v2062; // w3
  WarReleaseMaster_o *v2063; // x20
  int32_t v2064; // w2
  int32_t v2065; // w3
  __int64 v2067; // x0

  if ( (byte_4A1F614 & 1) == 0 )
  {
    sub_1B715CC(&AccessaryMaster_TypeInfo, v1);
    sub_1B715CC(&AdCheckPointMaster_TypeInfo, v2);
    sub_1B715CC(&AiActMaster_TypeInfo, v3);
    sub_1B715CC(&AiFieldMaster_TypeInfo, v4);
    sub_1B715CC(&AiMaster_TypeInfo, v5);
    sub_1B715CC(&AreaMaster_TypeInfo, v6);
    sub_1B715CC(&AssistMaster_TypeInfo, v7);
    sub_1B715CC(&AttriMaster_TypeInfo, v8);
    sub_1B715CC(&AttriRelationMaster_TypeInfo, v9);
    sub_1B715CC(&AuraEffectMaster_TypeInfo, v10);
    sub_1B715CC(&AuraEffectPosOverwriteMaster_TypeInfo, v11);
    sub_1B715CC(&BankShopMaster_TypeInfo, v12);
    sub_1B715CC(&BannerAddMaster_TypeInfo, v13);
    sub_1B715CC(&BannerMaster_TypeInfo, v14);
    sub_1B715CC(&BattleBgMaster_TypeInfo, v15);
    sub_1B715CC(&BattleMasterImageMaster_TypeInfo, v16);
    sub_1B715CC(&BattleMaster_TypeInfo, v17);
    sub_1B715CC(&BattleMessageGroupMaster_TypeInfo, v18);
    sub_1B715CC(&BattleMessageMaster_TypeInfo, v19);
    sub_1B715CC(&BattlePointMaster_TypeInfo, v20);
    sub_1B715CC(&BattlePointPhaseMaster_TypeInfo, v21);
    sub_1B715CC(&BeforeBirthDayMaster_TypeInfo, v22);
    sub_1B715CC(&BgmMaster_TypeInfo, v23);
    sub_1B715CC(&BgmReleaseMaster_TypeInfo, v24);
    sub_1B715CC(&BlankEarthGimmickAddMaster_TypeInfo, v25);
    sub_1B715CC(&BlankEarthGimmickMaster_TypeInfo, v26);
    sub_1B715CC(&BlankEarthSpotAddMaster_TypeInfo, v27);
    sub_1B715CC(&BlankEarthSpotMaster_TypeInfo, v28);
    sub_1B715CC(&BlankEarthSpotNavimenuMaster_TypeInfo, v29);
    sub_1B715CC(&BoardMessageMaster_TypeInfo, v30);
    sub_1B715CC(&BoardMessageReleaseMaster_TypeInfo, v31);
    sub_1B715CC(&BoostMaster_TypeInfo, v32);
    sub_1B715CC(&BoxGachaBaseDetailMaster_TypeInfo, v33);
    sub_1B715CC(&BoxGachaBaseMaster_TypeInfo, v34);
    sub_1B715CC(&BoxGachaHistoryMaster_TypeInfo, v35);
    sub_1B715CC(&BoxGachaMaster_TypeInfo, v36);
    sub_1B715CC(&BoxGachaTalkMaster_TypeInfo, v37);
    sub_1B715CC(&BuffConvertMaster_TypeInfo, v38);
    sub_1B715CC(&BuffMaster_TypeInfo, v39);
    sub_1B715CC(&BuffTypeDetailMaster_TypeInfo, v40);
    sub_1B715CC(&CampaignInfoMaster_TypeInfo, v41);
    sub_1B715CC(&CardMaster_TypeInfo, v42);
    sub_1B715CC(&ClassBoardBaseMaster_TypeInfo, v43);
    sub_1B715CC(&ClassBoardClassMaster_TypeInfo, v44);
    sub_1B715CC(&ClassBoardCommandSpellMaster_TypeInfo, v45);
    sub_1B715CC(&ClassBoardLineMaster_TypeInfo, v46);
    sub_1B715CC(&ClassBoardLockMaster_TypeInfo, v47);
    sub_1B715CC(&ClassBoardSquareMaster_TypeInfo, v48);
    sub_1B715CC(&ClassRelationMaster_TypeInfo, v49);
    sub_1B715CC(&ClassRelationOverwriteMaster_TypeInfo, v50);
    sub_1B715CC(&ClosedMessageMaster_TypeInfo, v51);
    sub_1B715CC(&CombineAppendPassiveSkillMaster_TypeInfo, v52);
    sub_1B715CC(&CombineCostumeMaster_TypeInfo, v53);
    sub_1B715CC(&CombineLimitGiftMaster_TypeInfo, v54);
    sub_1B715CC(&CombineLimitMaster_TypeInfo, v55);
    sub_1B715CC(&CombineLimitReleaseMaster_TypeInfo, v56);
    sub_1B715CC(&CombineMaster_TypeInfo, v57);
    sub_1B715CC(&CombineMaterialMaster_TypeInfo, v58);
    sub_1B715CC(&CombineQpMaster_TypeInfo, v59);
    sub_1B715CC(&CombineQpSvtEquipMaster_TypeInfo, v60);
    sub_1B715CC(&CombineSkillMaster_TypeInfo, v61);
    sub_1B715CC(&CombineTdMaster_TypeInfo, v62);
    sub_1B715CC(&CommandCardRankParamMaster_TypeInfo, v63);
    sub_1B715CC(&CommandCodeCommentMaster_TypeInfo, v64);
    sub_1B715CC(&CommandCodeMaster_TypeInfo, v65);
    sub_1B715CC(&CommandCodeSkillMaster_TypeInfo, v66);
    sub_1B715CC(&CommandCodeSkillReleaseMaster_TypeInfo, v67);
    sub_1B715CC(&CommandSpellMaster_TypeInfo, v68);
    sub_1B715CC(&CommonConsumeMaster_TypeInfo, v69);
    sub_1B715CC(&CommonReleaseMaster_TypeInfo, v70);
    sub_1B715CC(&CommonRestrictionMaster_TypeInfo, v71);
    sub_1B715CC(&CompleteMissionMaster_TypeInfo, v72);
    sub_1B715CC(&ConstantLongMaster_TypeInfo, v73);
    sub_1B715CC(&ConstantMaster_TypeInfo, v74);
    sub_1B715CC(&ConstantStrMaster_TypeInfo, v75);
    sub_1B715CC(&CvMaster_TypeInfo, v76);
    sub_1B715CC(&DataMasterBase___TypeInfo, v77);
    sub_1B715CC(&DialogMessageMaster_TypeInfo, v78);
    sub_1B715CC(&EffectMaster_TypeInfo, v79);
    sub_1B715CC(&EffectMovieMaster_TypeInfo, v80);
    sub_1B715CC(&EnemyMstBattleMaster_TypeInfo, v81);
    sub_1B715CC(&EnemyMstMaster_TypeInfo, v82);
    sub_1B715CC(&EquipAddMaster_TypeInfo, v83);
    sub_1B715CC(&EquipExpMaster_TypeInfo, v84);
    sub_1B715CC(&EquipImageMaster_TypeInfo, v85);
    sub_1B715CC(&EquipMaster_TypeInfo, v86);
    sub_1B715CC(&EquipSkillMaster_TypeInfo, v87);
    sub_1B715CC(&EventAddMaster_TypeInfo, v88);
    sub_1B715CC(&EventBoardGameCellMaster_TypeInfo, v89);
    sub_1B715CC(&EventBoardGameTokenMaster_TypeInfo, v90);
    sub_1B715CC(&EventBoardGameTokenRewardMaster_TypeInfo, v91);
    sub_1B715CC(&EventBonusFilterGroupInfoMaster_TypeInfo, v92);
    sub_1B715CC(&EventBonusFilterGroupMemberMaster_TypeInfo, v93);
    sub_1B715CC(&EventBonusFilterMaster_TypeInfo, v94);
    sub_1B715CC(&EventBoostItemUsedMaster_TypeInfo, v95);
    sub_1B715CC(&EventBossStatusUiMaster_TypeInfo, v96);
    sub_1B715CC(&EventBuddyPointMaster_TypeInfo, v97);
    sub_1B715CC(&EventBulletinBoardMaster_TypeInfo, v98);
    sub_1B715CC(&EventBulletinBoardReleaseMaster_TypeInfo, v99);
    sub_1B715CC(&EventCampaignMaster_TypeInfo, v100);
    sub_1B715CC(&EventCampaignReleaseMaster_TypeInfo, v101);
    sub_1B715CC(&EventCombineCostumeMaster_TypeInfo, v102);
    sub_1B715CC(&EventCombineMaster_TypeInfo, v103);
    sub_1B715CC(&EventCommandAssistMaster_TypeInfo, v104);
    sub_1B715CC(&EventConquestRewardMaster_TypeInfo, v105);
    sub_1B715CC(&EventCooltimeRewardMaster_TypeInfo, v106);
    sub_1B715CC(&EventDataLostBattleMaster_TypeInfo, v107);
    sub_1B715CC(&EventDataLostBattleResetMaster_TypeInfo, v108);
    sub_1B715CC(&EventDetailMaster_TypeInfo, v109);
    sub_1B715CC(&EventDiggingBlockMaster_TypeInfo, v110);
    sub_1B715CC(&EventDiggingMaster_TypeInfo, v111);
    sub_1B715CC(&EventDiggingRewardMaster_TypeInfo, v112);
    sub_1B715CC(&EventEquipSkillReleaseMaster_TypeInfo, v113);
    sub_1B715CC(&EventExpeditionMaster_TypeInfo, v114);
    sub_1B715CC(&EventExpeditionPieceMaster_TypeInfo, v115);
    sub_1B715CC(&EventFactoryMaster_TypeInfo, v116);
    sub_1B715CC(&EventFatigueRecoveryMaster_TypeInfo, v117);
    sub_1B715CC(&EventFilterMaster_TypeInfo, v118);
    sub_1B715CC(&EventFortificationDetailMaster_TypeInfo, v119);
    sub_1B715CC(&EventFortificationMaster_TypeInfo, v120);
    sub_1B715CC(&EventFortificationSvtMaster_TypeInfo, v121);
    sub_1B715CC(&EventGroupMaster_TypeInfo, v122);
    sub_1B715CC(&EventItemDisplayGroupMaster_TypeInfo, v123);
    sub_1B715CC(&EventItemDisplayMaster_TypeInfo, v124);
    sub_1B715CC(&EventItemDisplayReleaseMaster_TypeInfo, v125);
    sub_1B715CC(&EventLocationCampaignMaster_TypeInfo, v126);
    sub_1B715CC(&EventMaster_TypeInfo, v127);
    sub_1B715CC(&EventMissionActionAddMaster_TypeInfo, v128);
    sub_1B715CC(&EventMissionActionMaster_TypeInfo, v129);
    sub_1B715CC(&EventMissionAddMaster_TypeInfo, v130);
    sub_1B715CC(&EventMissionCondDetailMaster_TypeInfo, v131);
    sub_1B715CC(&EventMissionConditionMaster_TypeInfo, v132);
    sub_1B715CC(&EventMissionGroupMaster_TypeInfo, v133);
    sub_1B715CC(&EventMissionMaster_TypeInfo, v134);
    sub_1B715CC(&EventMuralMaster_TypeInfo, v135);
    sub_1B715CC(&EventPanelMapDetailMaster_TypeInfo, v136);
    sub_1B715CC(&EventPanelMapMaster_TypeInfo, v137);
    sub_1B715CC(&EventPanelScanMaster_TypeInfo, v138);
    sub_1B715CC(&EventPanelSpotMaster_TypeInfo, v139);
    sub_1B715CC(&EventPointActivityMaster_TypeInfo, v140);
    sub_1B715CC(&EventPointBuffMaster_TypeInfo, v141);
    sub_1B715CC(&EventPointGroupAddMaster_TypeInfo, v142);
    sub_1B715CC(&EventPointGroupMaster_TypeInfo, v143);
    sub_1B715CC(&EventPointMaster_TypeInfo, v144);
    sub_1B715CC(&EventPointUpperMaster_TypeInfo, v145);
    sub_1B715CC(&EventPointUpperReleaseMaster_TypeInfo, v146);
    sub_1B715CC(&EventProgressValueMaster_TypeInfo, v147);
    sub_1B715CC(&EventQuestCooltimeMaster_TypeInfo, v148);
    sub_1B715CC(&EventQuestMaster_TypeInfo, v149);
    sub_1B715CC(&EventRaceMaster_TypeInfo, v150);
    sub_1B715CC(&EventRaceResultMaster_TypeInfo, v151);
    sub_1B715CC(&EventRaidMaster_TypeInfo, v152);
    sub_1B715CC(&EventRandomMissionMaster_TypeInfo, v153);
    sub_1B715CC(&EventRecipeGiftMaster_TypeInfo, v154);
    sub_1B715CC(&EventRecipeMaster_TypeInfo, v155);
    sub_1B715CC(&EventRewardBgMaster_TypeInfo, v156);
    sub_1B715CC(&EventRewardExtraMaster_TypeInfo, v157);
    sub_1B715CC(&EventRewardGuideReleaseMaster_TypeInfo, v158);
    sub_1B715CC(&EventRewardMaster_TypeInfo, v159);
    sub_1B715CC(&EventRewardSceneMaster_TypeInfo, v160);
    sub_1B715CC(&EventRewardSceneReleaseMaster_TypeInfo, v161);
    sub_1B715CC(&EventRewardSetMaster_TypeInfo, v162);
    sub_1B715CC(&EventScriptMaster_TypeInfo, v163);
    sub_1B715CC(&EventScriptReleaseMaster_TypeInfo, v164);
    sub_1B715CC(&EventServantFatigueMaster_TypeInfo, v165);
    sub_1B715CC(&EventServantMaster_TypeInfo, v166);
    sub_1B715CC(&EventServantPointRankMaster_TypeInfo, v167);
    sub_1B715CC(&EventStatusMaster_TypeInfo, v168);
    sub_1B715CC(&EventStatusQuestMaster_TypeInfo, v169);
    sub_1B715CC(&EventSuperBossMaster_TypeInfo, v170);
    sub_1B715CC(&EventTowerMaster_TypeInfo, v171);
    sub_1B715CC(&EventTowerRewardMaster_TypeInfo, v172);
    sub_1B715CC(&EventTradeGoodsMaster_TypeInfo, v173);
    sub_1B715CC(&EventTradePickupMaster_TypeInfo, v174);
    sub_1B715CC(&EventTradeStoreMaster_TypeInfo, v175);
    sub_1B715CC(&EventTutorialCondMaster_TypeInfo, v176);
    sub_1B715CC(&EventTutorialMaster_TypeInfo, v177);
    sub_1B715CC(&EventUiMaster_TypeInfo, v178);
    sub_1B715CC(&EventUiReleaseMaster_TypeInfo, v179);
    sub_1B715CC(&EventUiValueMaster_TypeInfo, v180);
    sub_1B715CC(&EventVoicePlayMaster_TypeInfo, v181);
    sub_1B715CC(&ExcludeMotionMaster_TypeInfo, v182);
    sub_1B715CC(&FieldMotionMaster_TypeInfo, v183);
    sub_1B715CC(&FriendshipMaster_TypeInfo, v184);
    sub_1B715CC(&FriendshipQuestDialogInfoMaster_TypeInfo, v185);
    sub_1B715CC(&FuncDispMaster_TypeInfo, v186);
    sub_1B715CC(&FuncTypeDetailMaster_TypeInfo, v187);
    sub_1B715CC(&FunctionCategoryMaster_TypeInfo, v188);
    sub_1B715CC(&FunctionGroupMaster_TypeInfo, v189);
    sub_1B715CC(&FunctionMaster_TypeInfo, v190);
    sub_1B715CC(&GachaAppendMaster_TypeInfo, v191);
    sub_1B715CC(&GachaBehaviorMaster_TypeInfo, v192);
    sub_1B715CC(&GachaBonusSelectLineupMaster_TypeInfo, v193);
    sub_1B715CC(&GachaBonusSelectMaster_TypeInfo, v194);
    sub_1B715CC(&GachaDetailMaster_TypeInfo, v195);
    sub_1B715CC(&GachaExtraGiftMaster_TypeInfo, v196);
    sub_1B715CC(&GachaGroupMaster_TypeInfo, v197);
    sub_1B715CC(&GachaImageMaster_TypeInfo, v198);
    sub_1B715CC(&GachaMaster_TypeInfo, v199);
    sub_1B715CC(&GachaPickupCollateralGroupMaster_TypeInfo, v200);
    sub_1B715CC(&GachaPickupCollateralMaster_TypeInfo, v201);
    sub_1B715CC(&GachaReleaseMaster_TypeInfo, v202);
    sub_1B715CC(&GachaStoryAdjustMaster_TypeInfo, v203);
    sub_1B715CC(&GachaSubMaster_TypeInfo, v204);
    sub_1B715CC(&GachaTicketMaster_TypeInfo, v205);
    sub_1B715CC(&GiftAddMaster_TypeInfo, v206);
    sub_1B715CC(&GiftDetailMaster_TypeInfo, v207);
    sub_1B715CC(&GiftMaster_TypeInfo, v208);
    sub_1B715CC(&GuideMaster_TypeInfo, v209);
    sub_1B715CC(&HeelPortraitMaster_TypeInfo, v210);
    sub_1B715CC(&IllustratorMaster_TypeInfo, v211);
    sub_1B715CC(&IndividualityPersonalityMaster_TypeInfo, v212);
    sub_1B715CC(&IndividualityPolicyMaster_TypeInfo, v213);
    sub_1B715CC(&ItemDropEfficiencyMaster_TypeInfo, v214);
    sub_1B715CC(&ItemMaster_TypeInfo, v215);
    sub_1B715CC(&ItemSelectMaster_TypeInfo, v216);
    sub_1B715CC(&LoginQuestMaster_TypeInfo, v217);
    sub_1B715CC(&MapButtonMaster_TypeInfo, v218);
    sub_1B715CC(&MapCondMaster_TypeInfo, v219);
    sub_1B715CC(&MapGimmickLayerMaster_TypeInfo, v220);
    sub_1B715CC(&MapGimmickMaster_TypeInfo, v221);
    sub_1B715CC(&MapGimmickPathMaster_TypeInfo, v222);
    sub_1B715CC(&MapGimmickPathReleaseMaster_TypeInfo, v223);
    sub_1B715CC(&MapGimmickReleaseMaster_TypeInfo, v224);
    sub_1B715CC(&MapLayerMaster_TypeInfo, v225);
    sub_1B715CC(&MapMaster_TypeInfo, v226);
    sub_1B715CC(&MapUpdateScheduleMaster_TypeInfo, v227);
    sub_1B715CC(&MasterPhotoMaster_TypeInfo, v228);
    sub_1B715CC(&MaterialFolderMaster_TypeInfo, v229);
    sub_1B715CC(&MissionNaviQuestMaster_TypeInfo, v230);
    sub_1B715CC(&MissionNaviTransitionMaster_TypeInfo, v231);
    sub_1B715CC(&MstMissionDisplayInfoMaster_TypeInfo, v232);
    sub_1B715CC(&MstMissionMaster_TypeInfo, v233);
    sub_1B715CC(&MyRoomAddMaster_TypeInfo, v234);
    sub_1B715CC(&NewsMaster_TypeInfo, v235);
    sub_1B715CC(&NotEndEventMissionFixMaster_TypeInfo, v236);
    sub_1B715CC(&NpcFollowerMaster_TypeInfo, v237);
    sub_1B715CC(&NpcFollowerReleaseMaster_TypeInfo, v238);
    sub_1B715CC(&NpcServantEquipMaster_TypeInfo, v239);
    sub_1B715CC(&NpcServantFollowerIndividualityMaster_TypeInfo, v240);
    sub_1B715CC(&NpcServantFollowerMaster_TypeInfo, v241);
    sub_1B715CC(&OpeningMovieMaster_TypeInfo, v242);
    sub_1B715CC(&OtherUserGameMaster_TypeInfo, v243);
    sub_1B715CC(&PartialMaintenanceMaster_TypeInfo, v244);
    sub_1B715CC(&PaymentHistoryMaster_TypeInfo, v245);
    sub_1B715CC(&PaymentLimitMaster_TypeInfo, v246);
    sub_1B715CC(&PickupUserFollowerMaster_TypeInfo, v247);
    sub_1B715CC(&PrivilegeMaster_TypeInfo, v248);
    sub_1B715CC(&QuestAddMaster_TypeInfo, v249);
    sub_1B715CC(&QuestAutoOrganizationAdjustMaster_TypeInfo, v250);
    sub_1B715CC(&QuestBehaviorMaster_TypeInfo, v251);
    sub_1B715CC(&QuestConsumeItemMaster_TypeInfo, v252);
    sub_1B715CC(&QuestDateRangeMaster_TypeInfo, v253);
    sub_1B715CC(&QuestGroupMaster_TypeInfo, v254);
    sub_1B715CC(&QuestHintMaster_TypeInfo, v255);
    sub_1B715CC(&QuestMaster_TypeInfo, v256);
    sub_1B715CC(&QuestMessageMaster_TypeInfo, v257);
    sub_1B715CC(&QuestPhaseDetailAddMaster_TypeInfo, v258);
    sub_1B715CC(&QuestPhaseDetailMaster_TypeInfo, v259);
    sub_1B715CC(&QuestPhaseIndividualityMaster_TypeInfo, v260);
    sub_1B715CC(&QuestPhaseMaster_TypeInfo, v261);
    sub_1B715CC(&QuestPhasePresentMaster_TypeInfo, v262);
    sub_1B715CC(&QuestPickupMaster_TypeInfo, v263);
    sub_1B715CC(&QuestRacePointMaster_TypeInfo, v264);
    sub_1B715CC(&QuestRandomGroupMaster_TypeInfo, v265);
    sub_1B715CC(&QuestReleaseMaster_TypeInfo, v266);
    sub_1B715CC(&QuestReleaseOverwriteMaster_TypeInfo, v267);
    sub_1B715CC(&QuestResetMaster_TypeInfo, v268);
    sub_1B715CC(&QuestRestrictionInfoMaster_TypeInfo, v269);
    sub_1B715CC(&QuestRestrictionMaster_TypeInfo, v270);
    sub_1B715CC(&QuestScriptBranchMaterialMaster_TypeInfo, v271);
    sub_1B715CC(&QuestScriptMaster_TypeInfo, v272);
    sub_1B715CC(&QuestScriptMaterialNextMaster_TypeInfo, v273);
    sub_1B715CC(&QuestScriptMaterialOverwriteMaster_TypeInfo, v274);
    sub_1B715CC(&QuestScriptReleaseMaster_TypeInfo, v275);
    sub_1B715CC(&QuestSpotReleaseMaster_TypeInfo, v276);
    sub_1B715CC(&RecommendAdviceMessageMaster_TypeInfo, v277);
    sub_1B715CC(&RecommendSupportQuestMaster_TypeInfo, v278);
    sub_1B715CC(&RecoverMaster_TypeInfo, v279);
    sub_1B715CC(&ReprintStageMaster_TypeInfo, v280);
    sub_1B715CC(&RestrictionBaseMaster_TypeInfo, v281);
    sub_1B715CC(&RestrictionMaster_TypeInfo, v282);
    sub_1B715CC(&RestrictionMessageMaster_TypeInfo, v283);
    sub_1B715CC(&RestrictionSlotDetailMaster_TypeInfo, v284);
    sub_1B715CC(&RestrictionSlotMaster_TypeInfo, v285);
    sub_1B715CC(&RestrictionWholeMaster_TypeInfo, v286);
    sub_1B715CC(&RoadmapMaster_TypeInfo, v287);
    sub_1B715CC(&ServantAddMaster_TypeInfo, v288);
    sub_1B715CC(&ServantAnimationOverwriteMaster_TypeInfo, v289);
    sub_1B715CC(&ServantAppendPassiveSkillMaster_TypeInfo, v290);
    sub_1B715CC(&ServantBattlePointMaster_TypeInfo, v291);
    sub_1B715CC(&ServantCardAddMaster_TypeInfo, v292);
    sub_1B715CC(&ServantCardMaster_TypeInfo, v293);
    sub_1B715CC(&ServantChangeMaster_TypeInfo, v294);
    sub_1B715CC(&ServantClassMaster_TypeInfo, v295);
    sub_1B715CC(&ServantCollectionMaster_TypeInfo, v296);
    sub_1B715CC(&ServantCommandCodeUnlockMaster_TypeInfo, v297);
    sub_1B715CC(&ServantCommentAddMaster_TypeInfo, v298);
    sub_1B715CC(&ServantCommentMaster_TypeInfo, v299);
    sub_1B715CC(&ServantCostumeMaster_TypeInfo, v300);
    sub_1B715CC(&ServantCostumeReleaseMaster_TypeInfo, v301);
    sub_1B715CC(&ServantExceedMaster_TypeInfo, v302);
    sub_1B715CC(&ServantExpMaster_TypeInfo, v303);
    sub_1B715CC(&ServantFilterMaster_TypeInfo, v304);
    sub_1B715CC(&ServantFlagMaster_TypeInfo, v305);
    sub_1B715CC(&ServantFlagReleaseMaster_TypeInfo, v306);
    sub_1B715CC(&ServantGroupMaster_TypeInfo, v307);
    sub_1B715CC(&ServantIndividualityMaster_TypeInfo, v308);
    sub_1B715CC(&ServantLimitAddMaster_TypeInfo, v309);
    sub_1B715CC(&ServantLimitImageMaster_TypeInfo, v310);
    sub_1B715CC(&ServantLimitMaster_TypeInfo, v311);
    sub_1B715CC(&ServantLimitSpoilerProtectionMaster_TypeInfo, v312);
    sub_1B715CC(&ServantLvDetailMaster_TypeInfo, v313);
    sub_1B715CC(&ServantMaster_TypeInfo, v314);
    sub_1B715CC(&ServantMaterialFolderMaster_TypeInfo, v315);
    sub_1B715CC(&ServantOverwriteMaster_TypeInfo, v316);
    sub_1B715CC(&ServantPassiveSkillMaster_TypeInfo, v317);
    sub_1B715CC(&ServantPassiveSkillReleaseMaster_TypeInfo, v318);
    sub_1B715CC(&ServantPhotoMaster_TypeInfo, v319);
    sub_1B715CC(&ServantProfileMaster_TypeInfo, v320);
    sub_1B715CC(&ServantProfilePushMaster_TypeInfo, v321);
    sub_1B715CC(&ServantRarityMaster_TypeInfo, v322);
    sub_1B715CC(&ServantScriptAddMaster_TypeInfo, v323);
    sub_1B715CC(&ServantScriptMaster_TypeInfo, v324);
    sub_1B715CC(&ServantScriptMultipleMaster_TypeInfo, v325);
    sub_1B715CC(&ServantSkillMaster_TypeInfo, v326);
    sub_1B715CC(&ServantSkillReleaseMaster_TypeInfo, v327);
    sub_1B715CC(&ServantTransformMaster_TypeInfo, v328);
    sub_1B715CC(&ServantTreasureDeviceAddMaster_TypeInfo, v329);
    sub_1B715CC(&ServantTreasureDeviceDamageMaster_TypeInfo, v330);
    sub_1B715CC(&ServantTreasureDeviceReleaseMaster_TypeInfo, v331);
    sub_1B715CC(&ServantTreasureDvcMaster_TypeInfo, v332);
    sub_1B715CC(&ServantVoiceMaster_TypeInfo, v333);
    sub_1B715CC(&ServantVoicePatternMaster_TypeInfo, v334);
    sub_1B715CC(&ServantVoiceRelationMaster_TypeInfo, v335);
    sub_1B715CC(&SetItemMaster_TypeInfo, v336);
    sub_1B715CC(&ShopActionMaster_TypeInfo, v337);
    sub_1B715CC(&ShopDetailMaster_TypeInfo, v338);
    sub_1B715CC(&ShopGroupMaster_TypeInfo, v339);
    sub_1B715CC(&ShopMaster_TypeInfo, v340);
    sub_1B715CC(&ShopReleaseMaster_TypeInfo, v341);
    sub_1B715CC(&ShopScriptMaster_TypeInfo, v342);
    sub_1B715CC(&SkillAddMaster_TypeInfo, v343);
    sub_1B715CC(&SkillDetailMaster_TypeInfo, v344);
    sub_1B715CC(&SkillGroupMaster_TypeInfo, v345);
    sub_1B715CC(&SkillGroupOverwriteMaster_TypeInfo, v346);
    sub_1B715CC(&SkillIndividualityMaster_TypeInfo, v347);
    sub_1B715CC(&SkillLvMaster_TypeInfo, v348);
    sub_1B715CC(&SkillMaster_TypeInfo, v349);
    sub_1B715CC(&SpotAddMaster_TypeInfo, v350);
    sub_1B715CC(&SpotImageMaster_TypeInfo, v351);
    sub_1B715CC(&SpotLayerMaster_TypeInfo, v352);
    sub_1B715CC(&SpotMaster_TypeInfo, v353);
    sub_1B715CC(&SpotPathMaster_TypeInfo, v354);
    sub_1B715CC(&SpotRoadMaster_TypeInfo, v355);
    sub_1B715CC(&StageMaster_TypeInfo, v356);
    sub_1B715CC(&StatusEffectPosOverwriteMaster_TypeInfo, v357);
    sub_1B715CC(&StoneShopMaster_TypeInfo, v358);
    sub_1B715CC(&SubEquipMaster_TypeInfo, v359);
    sub_1B715CC(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v360);
    sub_1B715CC(&SvtCoinMaster_TypeInfo, v361);
    sub_1B715CC(&SvtMaterialTdMaster_TypeInfo, v362);
    sub_1B715CC(&SvtMultiPortraitMaster_TypeInfo, v363);
    sub_1B715CC(&TblFriendMaster_TypeInfo, v364);
    sub_1B715CC(&TblUserMaster_TypeInfo, v365);
    sub_1B715CC(&TelopMaster_TypeInfo, v366);
    sub_1B715CC(&TerminalOverwriteMaster_TypeInfo, v367);
    sub_1B715CC(&TipsBattleMaster_TypeInfo, v368);
    sub_1B715CC(&TotalBoxGachaMaster_TypeInfo, v369);
    sub_1B715CC(&TotalEventPointMaster_TypeInfo, v370);
    sub_1B715CC(&TotalEventRaceMaster_TypeInfo, v371);
    sub_1B715CC(&TotalEventRaidMaster_TypeInfo, v372);
    sub_1B715CC(&TotalLoginMaster_TypeInfo, v373);
    sub_1B715CC(&TreasureBoxGiftMaster_TypeInfo, v374);
    sub_1B715CC(&TreasureBoxMaster_TypeInfo, v375);
    sub_1B715CC(&TreasureBoxTalkMaster_TypeInfo, v376);
    sub_1B715CC(&TreasureDeviceSequenceWeightMaster_TypeInfo, v377);
    sub_1B715CC(&TreasureDvcDetailMaster_TypeInfo, v378);
    sub_1B715CC(&TreasureDvcLvMaster_TypeInfo, v379);
    sub_1B715CC(&TreasureDvcMaster_TypeInfo, v380);
    sub_1B715CC(&UpdateProfileDialogInfoMaster_TypeInfo, v381);
    sub_1B715CC(&UserAccessaryMaster_TypeInfo, v382);
    sub_1B715CC(&UserAccountLinkageMaster_TypeInfo, v383);
    sub_1B715CC(&UserBlacklistMaster_TypeInfo, v384);
    sub_1B715CC(&UserBoxGachaMaster_TypeInfo, v385);
    sub_1B715CC(&UserClassBoardSquareMaster_TypeInfo, v386);
    sub_1B715CC(&UserCoinRoomMaster_TypeInfo, v387);
    sub_1B715CC(&UserCombineExpMaster_TypeInfo, v388);
    sub_1B715CC(&UserCommandCodeCollectionMaster_TypeInfo, v389);
    sub_1B715CC(&UserCommandCodeMaster_TypeInfo, v390);
    sub_1B715CC(&UserContinueMaster_TypeInfo, v391);
    sub_1B715CC(&UserDeckMaster_TypeInfo, v392);
    sub_1B715CC(&UserDeleteReservationMaster_TypeInfo, v393);
    sub_1B715CC(&UserEquipMaster_TypeInfo, v394);
    sub_1B715CC(&UserEventAlloutBattleMaster_TypeInfo, v395);
    sub_1B715CC(&UserEventBoardGameTokenMaster_TypeInfo, v396);
    sub_1B715CC(&UserEventCooltimeRewardMaster_TypeInfo, v397);
    sub_1B715CC(&UserEventDataLostMaster_TypeInfo, v398);
    sub_1B715CC(&UserEventDeckMaster_TypeInfo, v399);
    sub_1B715CC(&UserEventDiggingMaster_TypeInfo, v400);
    sub_1B715CC(&UserEventExpeditionMaster_TypeInfo, v401);
    sub_1B715CC(&UserEventFortificationMaster_TypeInfo, v402);
    sub_1B715CC(&UserEventMapMaster_TypeInfo, v403);
    sub_1B715CC(&UserEventMaster_TypeInfo, v404);
    sub_1B715CC(&UserEventMissionCondDetailMaster_TypeInfo, v405);
    sub_1B715CC(&UserEventMissionFixMaster_TypeInfo, v406);
    sub_1B715CC(&UserEventMissionMaster_TypeInfo, v407);
    sub_1B715CC(&UserEventPointMaster_TypeInfo, v408);
    sub_1B715CC(&UserEventQuestCooltimeMaster_TypeInfo, v409);
    sub_1B715CC(&UserEventRaceMaster_TypeInfo, v410);
    sub_1B715CC(&UserEventRaidMaster_TypeInfo, v411);
    sub_1B715CC(&UserEventRandomMissionMaster_TypeInfo, v412);
    sub_1B715CC(&UserEventServantFatigueMaster_TypeInfo, v413);
    sub_1B715CC(&UserEventServantPointMaster_TypeInfo, v414);
    sub_1B715CC(&UserEventSpotMaster_TypeInfo, v415);
    sub_1B715CC(&UserEventTradeMaster_TypeInfo, v416);
    sub_1B715CC(&UserExchangeSvtMaster_TypeInfo, v417);
    sub_1B715CC(&UserExpMaster_TypeInfo, v418);
    sub_1B715CC(&UserExternalPaymentStoneMaster_TypeInfo, v419);
    sub_1B715CC(&UserFollowMaster_TypeInfo, v420);
    sub_1B715CC(&UserFollowerMaster_TypeInfo, v421);
    sub_1B715CC(&UserFormationMaster_TypeInfo, v422);
    sub_1B715CC(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v423);
    sub_1B715CC(&UserFriendRequestHistoryMaster_TypeInfo, v424);
    sub_1B715CC(&UserGachaDrawLogMaster_TypeInfo, v425);
    sub_1B715CC(&UserGachaExtraCountMaster_TypeInfo, v426);
    sub_1B715CC(&UserGachaHistoryMaster_TypeInfo, v427);
    sub_1B715CC(&UserGachaMaster_TypeInfo, v428);
    sub_1B715CC(&UserGachaPickupCollateralMaster_TypeInfo, v429);
    sub_1B715CC(&UserGameCommonMaster_TypeInfo, v430);
    sub_1B715CC(&UserGameMaster_TypeInfo, v431);
    sub_1B715CC(&UserHeelPortraitMaster_TypeInfo, v432);
    sub_1B715CC(&UserInterruptionQuestMaster_TypeInfo, v433);
    sub_1B715CC(&UserItemMaster_TypeInfo, v434);
    sub_1B715CC(&UserLoginMaster_TypeInfo, v435);
    sub_1B715CC(&UserMaster_TypeInfo, v436);
    sub_1B715CC(&UserNpcSvtRecordMaster_TypeInfo, v437);
    sub_1B715CC(&UserPaymentLimitMaster_TypeInfo, v438);
    sub_1B715CC(&UserPresentBoxMaster_TypeInfo, v439);
    sub_1B715CC(&UserPresentHistoryMaster_TypeInfo, v440);
    sub_1B715CC(&UserPrivilegeMaster_TypeInfo, v441);
    sub_1B715CC(&UserQuestInfoMaster_TypeInfo, v442);
    sub_1B715CC(&UserQuestMaster_TypeInfo, v443);
    sub_1B715CC(&UserQuestRecordMaster_TypeInfo, v444);
    sub_1B715CC(&UserQuestRouteMaster_TypeInfo, v445);
    sub_1B715CC(&UserRecommendFollowerMaster_TypeInfo, v446);
    sub_1B715CC(&UserRecommendSupportMaster_TypeInfo, v447);
    sub_1B715CC(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v448);
    sub_1B715CC(&UserServantAppendPassiveSkillMaster_TypeInfo, v449);
    sub_1B715CC(&UserServantCollectionMaster_TypeInfo, v450);
    sub_1B715CC(&UserServantCommandCardMaster_TypeInfo, v451);
    sub_1B715CC(&UserServantCommandCodeMaster_TypeInfo, v452);
    sub_1B715CC(&UserServantLeaderMaster_TypeInfo, v453);
    sub_1B715CC(&UserServantMaster_TypeInfo, v454);
    sub_1B715CC(&UserServantStorageMaster_TypeInfo, v455);
    sub_1B715CC(&UserServantVoicePlayedMaster_TypeInfo, v456);
    sub_1B715CC(&UserShopMaster_TypeInfo, v457);
    sub_1B715CC(&UserSubEquipMaster_TypeInfo, v458);
    sub_1B715CC(&UserSuperBossMaster_TypeInfo, v459);
    sub_1B715CC(&UserSupportDeckMaster_TypeInfo, v460);
    sub_1B715CC(&UserSvtCoinMaster_TypeInfo, v461);
    sub_1B715CC(&ViewEnemyMaster_TypeInfo, v462);
    sub_1B715CC(&ViewGachaFeaturedServantMaster_TypeInfo, v463);
    sub_1B715CC(&ViewQuestEnemyInfoMaster_TypeInfo, v464);
    sub_1B715CC(&ViewQuestInfoMaster_TypeInfo, v465);
    sub_1B715CC(&ViewWaveEnemyMaster_TypeInfo, v466);
    sub_1B715CC(&VoiceClosedMessageMaster_TypeInfo, v467);
    sub_1B715CC(&VoiceCondMaster_TypeInfo, v468);
    sub_1B715CC(&VoiceMaster_TypeInfo, v469);
    sub_1B715CC(&VoiceMaterialCondMaster_TypeInfo, v470);
    sub_1B715CC(&VoicePlayCondMaster_TypeInfo, v471);
    sub_1B715CC(&VoicePlayGroupMaster_TypeInfo, v472);
    sub_1B715CC(&VoiceReleaseMaster_TypeInfo, v473);
    sub_1B715CC(&WarAddMaster_TypeInfo, v474);
    sub_1B715CC(&WarBoardAIMaster_TypeInfo, v475);
    sub_1B715CC(&WarBoardActionPointClassMaster_TypeInfo, v476);
    sub_1B715CC(&WarBoardActionPointMaster_TypeInfo, v477);
    sub_1B715CC(&WarBoardActionTrendConditionMaster_TypeInfo, v478);
    sub_1B715CC(&WarBoardActionTrendGroupMaster_TypeInfo, v479);
    sub_1B715CC(&WarBoardActionTrendMaster_TypeInfo, v480);
    sub_1B715CC(&WarBoardCommonReleaseMaster_TypeInfo, v481);
    sub_1B715CC(&WarBoardDataMaster_TypeInfo, v482);
    sub_1B715CC(&WarBoardEffectMaster_TypeInfo, v483);
    sub_1B715CC(&WarBoardEventMaster_TypeInfo, v484);
    sub_1B715CC(&WarBoardEventScriptMaster_TypeInfo, v485);
    sub_1B715CC(&WarBoardFutureActionTrendMaster_TypeInfo, v486);
    sub_1B715CC(&WarBoardIndividualityClassMaster_TypeInfo, v487);
    sub_1B715CC(&WarBoardItemMaster_TypeInfo, v488);
    sub_1B715CC(&WarBoardMaster_TypeInfo, v489);
    sub_1B715CC(&WarBoardMessageMaster_TypeInfo, v490);
    sub_1B715CC(&WarBoardMessageScriptMaster_TypeInfo, v491);
    sub_1B715CC(&WarBoardOnboardSkillMaster_TypeInfo, v492);
    sub_1B715CC(&WarBoardPartySkillMaster_TypeInfo, v493);
    sub_1B715CC(&WarBoardQuestMaster_TypeInfo, v494);
    sub_1B715CC(&WarBoardRatingBaseMaster_TypeInfo, v495);
    sub_1B715CC(&WarBoardRatingOffsetGroupMaster_TypeInfo, v496);
    sub_1B715CC(&WarBoardRatingOffsetMaster_TypeInfo, v497);
    sub_1B715CC(&WarBoardReinforcementsMaster_TypeInfo, v498);
    sub_1B715CC(&WarBoardRoadMaster_TypeInfo, v499);
    sub_1B715CC(&WarBoardSquareIndexGroupMaster_TypeInfo, v500);
    sub_1B715CC(&WarBoardSquareMaster_TypeInfo, v501);
    sub_1B715CC(&WarBoardStageBossMaster_TypeInfo, v502);
    sub_1B715CC(&WarBoardStageDetailMaster_TypeInfo, v503);
    sub_1B715CC(&WarBoardStageLayoutMaster_TypeInfo, v504);
    sub_1B715CC(&WarBoardStageMaster_TypeInfo, v505);
    sub_1B715CC(&WarBoardStageNpcMaster_TypeInfo, v506);
    sub_1B715CC(&WarBoardStagePieceDetailMaster_TypeInfo, v507);
    sub_1B715CC(&WarBoardStageReinforcementsMaster_TypeInfo, v508);
    sub_1B715CC(&WarBoardStageWallMaster_TypeInfo, v509);
    sub_1B715CC(&WarBoardTacticalTrendMaster_TypeInfo, v510);
    sub_1B715CC(&WarBoardTreasureMaster_TypeInfo, v511);
    sub_1B715CC(&WarGroupMaster_TypeInfo, v512);
    sub_1B715CC(&WarMaster_TypeInfo, v513);
    sub_1B715CC(&WarMessageMaster_TypeInfo, v514);
    sub_1B715CC(&WarQuestSelectionMaster_TypeInfo, v515);
    sub_1B715CC(&WarReleaseMaster_TypeInfo, v516);
    byte_4A1F614 = 1;
  }
  v517 = (DataMasterBase_array *)sub_1B71674(DataMasterBase___TypeInfo, 515LL);
  v518 = (ServantMaster_o *)sub_1B71818(ServantMaster_TypeInfo);
  ServantMaster___ctor(v518, 0LL);
  if ( !v517 )
    sub_1B71828(v519, v520);
  if ( v518 )
  {
    v519 = sub_1B71708(v518, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  p_max_length = &v517->max_length;
  if ( !v517->max_length )
    goto LABEL_1550;
  v517->m_Items[0] = (DataMasterBase_o *)v518;
  sub_1B71570((ServantStatusBattleListViewItem_o *)v517->m_Items, (int32_t)v518, v521, v522);
  v524 = (ServantClassMaster_o *)sub_1B71818(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v524, 0LL);
  if ( v524 )
  {
    v519 = sub_1B71708(v524, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1550;
  v517->m_Items[1] = (DataMasterBase_o *)v524;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[1], (int32_t)v524, v525, v526);
  v527 = (ServantCommentMaster_o *)sub_1B71818(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v527, 0LL);
  if ( v527 )
  {
    v519 = sub_1B71708(v527, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1550;
  v517->m_Items[2] = (DataMasterBase_o *)v527;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[2], (int32_t)v527, v528, v529);
  v530 = (ServantProfileMaster_o *)sub_1B71818(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v530, 0LL);
  if ( v530 )
  {
    v519 = sub_1B71708(v530, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1550;
  v517->m_Items[3] = (DataMasterBase_o *)v530;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[3], (int32_t)v530, v531, v532);
  v533 = (WarMaster_o *)sub_1B71818(WarMaster_TypeInfo);
  WarMaster___ctor(v533, 0LL);
  if ( v533 )
  {
    v519 = sub_1B71708(v533, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1550;
  v517->m_Items[4] = (DataMasterBase_o *)v533;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[4], (int32_t)v533, v534, v535);
  v536 = (UserMaster_o *)sub_1B71818(UserMaster_TypeInfo);
  UserMaster___ctor(v536, 0LL);
  if ( v536 )
  {
    v519 = sub_1B71708(v536, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1550;
  v517->m_Items[5] = (DataMasterBase_o *)v536;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[5], (int32_t)v536, v537, v538);
  v539 = (UserGameMaster_o *)sub_1B71818(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v539, 0LL);
  if ( v539 )
  {
    v519 = sub_1B71708(v539, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1550;
  v517->m_Items[6] = (DataMasterBase_o *)v539;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[6], (int32_t)v539, v540, v541);
  v542 = (TblUserMaster_o *)sub_1B71818(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v542, 0LL);
  if ( v542 )
  {
    v519 = sub_1B71708(v542, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1550;
  v517->m_Items[7] = (DataMasterBase_o *)v542;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[7], (int32_t)v542, v543, v544);
  v545 = (UserItemMaster_o *)sub_1B71818(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v545, 0LL);
  if ( v545 )
  {
    v519 = sub_1B71708(v545, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1550;
  v517->m_Items[8] = (DataMasterBase_o *)v545;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[8], (int32_t)v545, v546, v547);
  v548 = (UserServantMaster_o *)sub_1B71818(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v548, 0LL);
  if ( v548 )
  {
    v519 = sub_1B71708(v548, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1550;
  v517->m_Items[9] = (DataMasterBase_o *)v548;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[9], (int32_t)v548, v549, v550);
  v551 = (UserServantStorageMaster_o *)sub_1B71818(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v551, 0LL);
  if ( v551 )
  {
    v519 = sub_1B71708(v551, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1550;
  v517->m_Items[10] = (DataMasterBase_o *)v551;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[10], (int32_t)v551, v552, v553);
  v554 = (UserAccessaryMaster_o *)sub_1B71818(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v554, 0LL);
  if ( v554 )
  {
    v519 = sub_1B71708(v554, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1550;
  v517->m_Items[11] = (DataMasterBase_o *)v554;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[11], (int32_t)v554, v555, v556);
  v557 = (UserQuestMaster_o *)sub_1B71818(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v557, 0LL);
  if ( v557 )
  {
    v519 = sub_1B71708(v557, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1550;
  v517->m_Items[12] = (DataMasterBase_o *)v557;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[12], (int32_t)v557, v558, v559);
  v560 = (BattleMaster_o *)sub_1B71818(BattleMaster_TypeInfo);
  BattleMaster___ctor(v560, 0LL);
  if ( v560 )
  {
    v519 = sub_1B71708(v560, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1550;
  v517->m_Items[13] = (DataMasterBase_o *)v560;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[13], (int32_t)v560, v561, v562);
  v563 = (OtherUserGameMaster_o *)sub_1B71818(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v563, 0LL);
  if ( v563 )
  {
    v519 = sub_1B71708(v563, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1550;
  v517->m_Items[14] = (DataMasterBase_o *)v563;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[14], (int32_t)v563, v564, v565);
  v566 = (TblFriendMaster_o *)sub_1B71818(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v566, 0LL);
  if ( v566 )
  {
    v519 = sub_1B71708(v566, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1550;
  v517->m_Items[15] = (DataMasterBase_o *)v566;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[15], (int32_t)v566, v567, v568);
  v569 = (AreaMaster_o *)sub_1B71818(AreaMaster_TypeInfo);
  AreaMaster___ctor(v569, 0LL);
  if ( v569 )
  {
    v519 = sub_1B71708(v569, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1550;
  v517->m_Items[16] = (DataMasterBase_o *)v569;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[16], (int32_t)v569, v570, v571);
  v572 = (ServantCardMaster_o *)sub_1B71818(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v572, 0LL);
  if ( v572 )
  {
    v519 = sub_1B71708(v572, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1550;
  v517->m_Items[17] = (DataMasterBase_o *)v572;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[17], (int32_t)v572, v573, v574);
  v575 = (EventMaster_o *)sub_1B71818(EventMaster_TypeInfo);
  EventMaster___ctor(v575, 0LL);
  if ( v575 )
  {
    v519 = sub_1B71708(v575, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1550;
  v517->m_Items[18] = (DataMasterBase_o *)v575;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[18], (int32_t)v575, v576, v577);
  v578 = (ItemMaster_o *)sub_1B71818(ItemMaster_TypeInfo);
  ItemMaster___ctor(v578, 0LL);
  if ( v578 )
  {
    v519 = sub_1B71708(v578, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1550;
  v517->m_Items[19] = (DataMasterBase_o *)v578;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[19], (int32_t)v578, v579, v580);
  v581 = (QuestMaster_o *)sub_1B71818(QuestMaster_TypeInfo);
  QuestMaster___ctor(v581, 0LL);
  if ( v581 )
  {
    v519 = sub_1B71708(v581, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1550;
  v517->m_Items[20] = (DataMasterBase_o *)v581;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[20], (int32_t)v581, v582, v583);
  v584 = (QuestAddMaster_o *)sub_1B71818(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v584, 0LL);
  if ( v584 )
  {
    v519 = sub_1B71708(v584, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1550;
  v517->m_Items[21] = (DataMasterBase_o *)v584;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[21], (int32_t)v584, v585, v586);
  v587 = (QuestReleaseMaster_o *)sub_1B71818(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v587, 0LL);
  if ( v587 )
  {
    v519 = sub_1B71708(v587, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1550;
  v517->m_Items[22] = (DataMasterBase_o *)v587;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[22], (int32_t)v587, v588, v589);
  v590 = (QuestDateRangeMaster_o *)sub_1B71818(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v590, 0LL);
  if ( v590 )
  {
    v519 = sub_1B71708(v590, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1550;
  v517->m_Items[23] = (DataMasterBase_o *)v590;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[23], (int32_t)v590, v591, v592);
  v593 = (QuestPhaseMaster_o *)sub_1B71818(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v593, 0LL);
  if ( v593 )
  {
    v519 = sub_1B71708(v593, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1550;
  v517->m_Items[24] = (DataMasterBase_o *)v593;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[24], (int32_t)v593, v594, v595);
  v596 = (QuestPhaseDetailMaster_o *)sub_1B71818(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v596, 0LL);
  if ( v596 )
  {
    v519 = sub_1B71708(v596, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1550;
  v517->m_Items[25] = (DataMasterBase_o *)v596;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[25], (int32_t)v596, v597, v598);
  v599 = (QuestGroupMaster_o *)sub_1B71818(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v599, 0LL);
  if ( v599 )
  {
    v519 = sub_1B71708(v599, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1550;
  v517->m_Items[26] = (DataMasterBase_o *)v599;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[26], (int32_t)v599, v600, v601);
  v602 = (QuestRandomGroupMaster_o *)sub_1B71818(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v602, 0LL);
  if ( v602 )
  {
    v519 = sub_1B71708(v602, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1550;
  v517->m_Items[27] = (DataMasterBase_o *)v602;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[27], (int32_t)v602, v603, v604);
  v605 = (QuestConsumeItemMaster_o *)sub_1B71818(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v605, 0LL);
  if ( v605 )
  {
    v519 = sub_1B71708(v605, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1550;
  v517->m_Items[28] = (DataMasterBase_o *)v605;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[28], (int32_t)v605, v606, v607);
  v608 = (QuestMessageMaster_o *)sub_1B71818(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v608, 0LL);
  if ( v608 )
  {
    v519 = sub_1B71708(v608, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1550;
  v517->m_Items[29] = (DataMasterBase_o *)v608;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[29], (int32_t)v608, v609, v610);
  v611 = (UserQuestInfoMaster_o *)sub_1B71818(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v611, 0LL);
  if ( v611 )
  {
    v519 = sub_1B71708(v611, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1550;
  v517->m_Items[30] = (DataMasterBase_o *)v611;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[30], (int32_t)v611, v612, v613);
  v614 = (UserQuestRecordMaster_o *)sub_1B71818(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v614, 0LL);
  if ( v614 )
  {
    v519 = sub_1B71708(v614, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1550;
  v517->m_Items[31] = (DataMasterBase_o *)v614;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[31], (int32_t)v614, v615, v616);
  v617 = (ViewQuestInfoMaster_o *)sub_1B71818(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v617, 0LL);
  if ( v617 )
  {
    v519 = sub_1B71708(v617, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1550;
  v517->m_Items[32] = (DataMasterBase_o *)v617;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[32], (int32_t)v617, v618, v619);
  v620 = (ViewEnemyMaster_o *)sub_1B71818(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v620, 0LL);
  if ( v620 )
  {
    v519 = sub_1B71708(v620, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1550;
  v517->m_Items[33] = (DataMasterBase_o *)v620;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[33], (int32_t)v620, v621, v622);
  v623 = (ViewQuestEnemyInfoMaster_o *)sub_1B71818(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v623, 0LL);
  if ( v623 )
  {
    v519 = sub_1B71708(v623, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1550;
  v517->m_Items[34] = (DataMasterBase_o *)v623;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[34], (int32_t)v623, v624, v625);
  v626 = (BlankEarthSpotMaster_o *)sub_1B71818(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v626, 0LL);
  if ( v626 )
  {
    v519 = sub_1B71708(v626, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1550;
  v517->m_Items[35] = (DataMasterBase_o *)v626;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[35], (int32_t)v626, v627, v628);
  v629 = (BlankEarthSpotAddMaster_o *)sub_1B71818(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v629, 0LL);
  if ( v629 )
  {
    v519 = sub_1B71708(v629, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1550;
  v517->m_Items[36] = (DataMasterBase_o *)v629;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[36], (int32_t)v629, v630, v631);
  v632 = (SpotMaster_o *)sub_1B71818(SpotMaster_TypeInfo);
  SpotMaster___ctor(v632, 0LL);
  if ( v632 )
  {
    v519 = sub_1B71708(v632, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1550;
  v517->m_Items[37] = (DataMasterBase_o *)v632;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[37], (int32_t)v632, v633, v634);
  v635 = (SpotImageMaster_o *)sub_1B71818(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v635, 0LL);
  if ( v635 )
  {
    v519 = sub_1B71708(v635, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1550;
  v517->m_Items[38] = (DataMasterBase_o *)v635;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[38], (int32_t)v635, v636, v637);
  v638 = (SpotRoadMaster_o *)sub_1B71818(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v638, 0LL);
  if ( v638 )
  {
    v519 = sub_1B71708(v638, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1550;
  v517->m_Items[39] = (DataMasterBase_o *)v638;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[39], (int32_t)v638, v639, v640);
  v641 = (SpotPathMaster_o *)sub_1B71818(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v641, 0LL);
  if ( v641 )
  {
    v519 = sub_1B71708(v641, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1550;
  v517->m_Items[40] = (DataMasterBase_o *)v641;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[40], (int32_t)v641, v642, v643);
  v644 = (SpotAddMaster_o *)sub_1B71818(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v644, 0LL);
  if ( v644 )
  {
    v519 = sub_1B71708(v644, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1550;
  v517->m_Items[41] = (DataMasterBase_o *)v644;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[41], (int32_t)v644, v645, v646);
  v647 = (MapGimmickMaster_o *)sub_1B71818(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v647, 0LL);
  if ( v647 )
  {
    v519 = sub_1B71708(v647, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1550;
  v517->m_Items[42] = (DataMasterBase_o *)v647;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[42], (int32_t)v647, v648, v649);
  v650 = (GiftMaster_o *)sub_1B71818(GiftMaster_TypeInfo);
  GiftMaster___ctor(v650, 0LL);
  if ( v650 )
  {
    v519 = sub_1B71708(v650, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1550;
  v517->m_Items[43] = (DataMasterBase_o *)v650;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[43], (int32_t)v650, v651, v652);
  v653 = (GiftAddMaster_o *)sub_1B71818(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v653, 0LL);
  if ( v653 )
  {
    v519 = sub_1B71708(v653, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1550;
  v517->m_Items[44] = (DataMasterBase_o *)v653;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[44], (int32_t)v653, v654, v655);
  v656 = (ShopMaster_o *)sub_1B71818(ShopMaster_TypeInfo);
  ShopMaster___ctor(v656, 0LL);
  if ( v656 )
  {
    v519 = sub_1B71708(v656, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1550;
  v517->m_Items[45] = (DataMasterBase_o *)v656;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[45], (int32_t)v656, v657, v658);
  v659 = (StoneShopMaster_o *)sub_1B71818(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v659, 0LL);
  if ( v659 )
  {
    v519 = sub_1B71708(v659, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1550;
  v517->m_Items[46] = (DataMasterBase_o *)v659;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[46], (int32_t)v659, v660, v661);
  v662 = (BankShopMaster_o *)sub_1B71818(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v662, 0LL);
  if ( v662 )
  {
    v519 = sub_1B71708(v662, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1550;
  v517->m_Items[47] = (DataMasterBase_o *)v662;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[47], (int32_t)v662, v663, v664);
  v665 = (ShopScriptMaster_o *)sub_1B71818(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v665, 0LL);
  if ( v665 )
  {
    v519 = sub_1B71708(v665, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1550;
  v517->m_Items[48] = (DataMasterBase_o *)v665;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[48], (int32_t)v665, v666, v667);
  v668 = (StageMaster_o *)sub_1B71818(StageMaster_TypeInfo);
  StageMaster___ctor(v668, 0LL);
  if ( v668 )
  {
    v519 = sub_1B71708(v668, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1550;
  v517->m_Items[49] = (DataMasterBase_o *)v668;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[49], (int32_t)v668, v669, v670);
  v671 = (ServantGroupMaster_o *)sub_1B71818(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v671, 0LL);
  if ( v671 )
  {
    v519 = sub_1B71708(v671, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1550;
  v517->m_Items[50] = (DataMasterBase_o *)v671;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[50], (int32_t)v671, v672, v673);
  v674 = (ServantLimitMaster_o *)sub_1B71818(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v674, 0LL);
  if ( v674 )
  {
    v519 = sub_1B71708(v674, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1550;
  v517->m_Items[51] = (DataMasterBase_o *)v674;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[51], (int32_t)v674, v675, v676);
  v677 = (ServantLimitAddMaster_o *)sub_1B71818(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v677, 0LL);
  if ( v677 )
  {
    v519 = sub_1B71708(v677, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1550;
  v517->m_Items[52] = (DataMasterBase_o *)v677;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[52], (int32_t)v677, v678, v679);
  v680 = (ServantSkillMaster_o *)sub_1B71818(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v680, 0LL);
  if ( v680 )
  {
    v519 = sub_1B71708(v680, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1550;
  v517->m_Items[53] = (DataMasterBase_o *)v680;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[53], (int32_t)v680, v681, v682);
  v683 = (ServantPassiveSkillMaster_o *)sub_1B71818(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v683, 0LL);
  if ( v683 )
  {
    v519 = sub_1B71708(v683, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1550;
  v517->m_Items[54] = (DataMasterBase_o *)v683;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[54], (int32_t)v683, v684, v685);
  v686 = (BgmMaster_o *)sub_1B71818(BgmMaster_TypeInfo);
  BgmMaster___ctor(v686, 0LL);
  if ( v686 )
  {
    v519 = sub_1B71708(v686, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1550;
  v517->m_Items[55] = (DataMasterBase_o *)v686;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[55], (int32_t)v686, v687, v688);
  v689 = (ServantScriptMaster_o *)sub_1B71818(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v689, 0LL);
  if ( v689 )
  {
    v519 = sub_1B71708(v689, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1550;
  v517->m_Items[56] = (DataMasterBase_o *)v689;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[56], (int32_t)v689, v690, v691);
  v692 = (NewsMaster_o *)sub_1B71818(NewsMaster_TypeInfo);
  NewsMaster___ctor(v692, 0LL);
  if ( v692 )
  {
    v519 = sub_1B71708(v692, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1550;
  v517->m_Items[57] = (DataMasterBase_o *)v692;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[57], (int32_t)v692, v693, v694);
  v695 = (TelopMaster_o *)sub_1B71818(TelopMaster_TypeInfo);
  TelopMaster___ctor(v695, 0LL);
  if ( v695 )
  {
    v519 = sub_1B71708(v695, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1550;
  v517->m_Items[58] = (DataMasterBase_o *)v695;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[58], (int32_t)v695, v696, v697);
  v698 = (UserExpMaster_o *)sub_1B71818(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v698, 0LL);
  if ( v698 )
  {
    v519 = sub_1B71708(v698, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1550;
  v517->m_Items[59] = (DataMasterBase_o *)v698;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[59], (int32_t)v698, v699, v700);
  v701 = (TreasureDvcMaster_o *)sub_1B71818(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v701, 0LL);
  if ( v701 )
  {
    v519 = sub_1B71708(v701, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1550;
  v517->m_Items[60] = (DataMasterBase_o *)v701;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[60], (int32_t)v701, v702, v703);
  v704 = (ServantTreasureDvcMaster_o *)sub_1B71818(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v704, 0LL);
  if ( v704 )
  {
    v519 = sub_1B71708(v704, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1550;
  v517->m_Items[61] = (DataMasterBase_o *)v704;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[61], (int32_t)v704, v705, v706);
  v707 = (SkillMaster_o *)sub_1B71818(SkillMaster_TypeInfo);
  SkillMaster___ctor(v707, 0LL);
  if ( v707 )
  {
    v519 = sub_1B71708(v707, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1550;
  v517->m_Items[62] = (DataMasterBase_o *)v707;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[62], (int32_t)v707, v708, v709);
  v710 = (SkillLvMaster_o *)sub_1B71818(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v710, 0LL);
  if ( v710 )
  {
    v519 = sub_1B71708(v710, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1550;
  v517->m_Items[63] = (DataMasterBase_o *)v710;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[63], (int32_t)v710, v711, v712);
  v713 = (SkillDetailMaster_o *)sub_1B71818(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v713, 0LL);
  if ( v713 )
  {
    v519 = sub_1B71708(v713, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1550;
  v517->m_Items[64] = (DataMasterBase_o *)v713;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[64], (int32_t)v713, v714, v715);
  v716 = (CommandSpellMaster_o *)sub_1B71818(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v716, 0LL);
  if ( v716 )
  {
    v519 = sub_1B71708(v716, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1550;
  v517->m_Items[65] = (DataMasterBase_o *)v716;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[65], (int32_t)v716, v717, v718);
  v719 = (EquipMaster_o *)sub_1B71818(EquipMaster_TypeInfo);
  EquipMaster___ctor(v719, 0LL);
  if ( v719 )
  {
    v519 = sub_1B71708(v719, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1550;
  v517->m_Items[66] = (DataMasterBase_o *)v719;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[66], (int32_t)v719, v720, v721);
  v722 = (EquipExpMaster_o *)sub_1B71818(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v722, 0LL);
  if ( v722 )
  {
    v519 = sub_1B71708(v722, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1550;
  v517->m_Items[67] = (DataMasterBase_o *)v722;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[67], (int32_t)v722, v723, v724);
  v725 = (EquipSkillMaster_o *)sub_1B71818(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v725, 0LL);
  if ( v725 )
  {
    v519 = sub_1B71708(v725, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1550;
  v517->m_Items[68] = (DataMasterBase_o *)v725;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[68], (int32_t)v725, v726, v727);
  v728 = (SubEquipMaster_o *)sub_1B71818(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v728, 0LL);
  if ( v728 )
  {
    v519 = sub_1B71708(v728, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1550;
  v517->m_Items[69] = (DataMasterBase_o *)v728;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[69], (int32_t)v728, v729, v730);
  v731 = (AccessaryMaster_o *)sub_1B71818(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v731, 0LL);
  if ( v731 )
  {
    v519 = sub_1B71708(v731, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1550;
  v517->m_Items[70] = (DataMasterBase_o *)v731;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[70], (int32_t)v731, v732, v733);
  v734 = (UserPresentBoxMaster_o *)sub_1B71818(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v734, 0LL);
  if ( v734 )
  {
    v519 = sub_1B71708(v734, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1550;
  v517->m_Items[71] = (DataMasterBase_o *)v734;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[71], (int32_t)v734, v735, v736);
  v737 = (UserDeckMaster_o *)sub_1B71818(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v737, 0LL);
  if ( v737 )
  {
    v519 = sub_1B71708(v737, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1550;
  v517->m_Items[72] = (DataMasterBase_o *)v737;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[72], (int32_t)v737, v738, v739);
  v740 = (UserSubEquipMaster_o *)sub_1B71818(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v740, 0LL);
  if ( v740 )
  {
    v519 = sub_1B71708(v740, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1550;
  v517->m_Items[73] = (DataMasterBase_o *)v740;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[73], (int32_t)v740, v741, v742);
  v743 = (GachaMaster_o *)sub_1B71818(GachaMaster_TypeInfo);
  GachaMaster___ctor(v743, 0LL);
  if ( v743 )
  {
    v519 = sub_1B71708(v743, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1550;
  v517->m_Items[74] = (DataMasterBase_o *)v743;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[74], (int32_t)v743, v744, v745);
  v746 = (GachaImageMaster_o *)sub_1B71818(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v746, 0LL);
  if ( v746 )
  {
    v519 = sub_1B71708(v746, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1550;
  v517->m_Items[75] = (DataMasterBase_o *)v746;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[75], (int32_t)v746, v747, v748);
  v749 = (UserGachaMaster_o *)sub_1B71818(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v749, 0LL);
  if ( v749 )
  {
    v519 = sub_1B71708(v749, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1550;
  v517->m_Items[76] = (DataMasterBase_o *)v749;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[76], (int32_t)v749, v750, v751);
  v752 = (UserEquipMaster_o *)sub_1B71818(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v752, 0LL);
  if ( v752 )
  {
    v519 = sub_1B71708(v752, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1550;
  v517->m_Items[77] = (DataMasterBase_o *)v752;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[77], (int32_t)v752, v753, v754);
  v755 = (UserServantCollectionMaster_o *)sub_1B71818(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v755, 0LL);
  if ( v755 )
  {
    v519 = sub_1B71708(v755, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1550;
  v517->m_Items[78] = (DataMasterBase_o *)v755;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[78], (int32_t)v755, v756, v757);
  v758 = (FriendshipMaster_o *)sub_1B71818(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v758, 0LL);
  if ( v758 )
  {
    v519 = sub_1B71708(v758, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1550;
  v517->m_Items[79] = (DataMasterBase_o *)v758;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[79], (int32_t)v758, v759, v760);
  v761 = (GachaTicketMaster_o *)sub_1B71818(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v761, 0LL);
  if ( v761 )
  {
    v519 = sub_1B71708(v761, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1550;
  v517->m_Items[80] = (DataMasterBase_o *)v761;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[80], (int32_t)v761, v762, v763);
  v764 = (UserFormationMaster_o *)sub_1B71818(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v764, 0LL);
  if ( v764 )
  {
    v519 = sub_1B71708(v764, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1550;
  v517->m_Items[81] = (DataMasterBase_o *)v764;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[81], (int32_t)v764, v765, v766);
  v767 = (FunctionMaster_o *)sub_1B71818(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v767, 0LL);
  if ( v767 )
  {
    v519 = sub_1B71708(v767, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1550;
  v517->m_Items[82] = (DataMasterBase_o *)v767;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[82], (int32_t)v767, v768, v769);
  v770 = (BuffMaster_o *)sub_1B71818(BuffMaster_TypeInfo);
  BuffMaster___ctor(v770, 0LL);
  if ( v770 )
  {
    v519 = sub_1B71708(v770, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1550;
  v517->m_Items[83] = (DataMasterBase_o *)v770;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[83], (int32_t)v770, v771, v772);
  v773 = (GachaReleaseMaster_o *)sub_1B71818(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v773, 0LL);
  if ( v773 )
  {
    v519 = sub_1B71708(v773, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1550;
  v517->m_Items[84] = (DataMasterBase_o *)v773;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[84], (int32_t)v773, v774, v775);
  v776 = (CombineQpMaster_o *)sub_1B71818(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v776, 0LL);
  if ( v776 )
  {
    v519 = sub_1B71708(v776, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1550;
  v517->m_Items[85] = (DataMasterBase_o *)v776;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[85], (int32_t)v776, v777, v778);
  v779 = (CombineMaterialMaster_o *)sub_1B71818(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v779, 0LL);
  if ( v779 )
  {
    v519 = sub_1B71708(v779, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1550;
  v517->m_Items[86] = (DataMasterBase_o *)v779;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[86], (int32_t)v779, v780, v781);
  v782 = (EventCombineMaster_o *)sub_1B71818(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v782, 0LL);
  if ( v782 )
  {
    v519 = sub_1B71708(v782, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1550;
  v517->m_Items[87] = (DataMasterBase_o *)v782;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[87], (int32_t)v782, v783, v784);
  v785 = (ServantExpMaster_o *)sub_1B71818(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v785, 0LL);
  if ( v785 )
  {
    v519 = sub_1B71708(v785, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1550;
  v517->m_Items[88] = (DataMasterBase_o *)v785;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[88], (int32_t)v785, v786, v787);
  v788 = (CombineSkillMaster_o *)sub_1B71818(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v788, 0LL);
  if ( v788 )
  {
    v519 = sub_1B71708(v788, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1550;
  v517->m_Items[89] = (DataMasterBase_o *)v788;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[89], (int32_t)v788, v789, v790);
  v791 = (CombineTdMaster_o *)sub_1B71818(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v791, 0LL);
  if ( v791 )
  {
    v519 = sub_1B71708(v791, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1550;
  v517->m_Items[90] = (DataMasterBase_o *)v791;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[90], (int32_t)v791, v792, v793);
  v794 = (EventQuestMaster_o *)sub_1B71818(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v794, 0LL);
  if ( v794 )
  {
    v519 = sub_1B71708(v794, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1550;
  v517->m_Items[91] = (DataMasterBase_o *)v794;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[91], (int32_t)v794, v795, v796);
  v797 = (EventCampaignMaster_o *)sub_1B71818(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v797, 0LL);
  if ( v797 )
  {
    v519 = sub_1B71708(v797, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1550;
  v517->m_Items[92] = (DataMasterBase_o *)v797;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[92], (int32_t)v797, v798, v799);
  v800 = (IllustratorMaster_o *)sub_1B71818(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v800, 0LL);
  if ( v800 )
  {
    v519 = sub_1B71708(v800, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1550;
  v517->m_Items[93] = (DataMasterBase_o *)v800;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[93], (int32_t)v800, v801, v802);
  v803 = (CvMaster_o *)sub_1B71818(CvMaster_TypeInfo);
  CvMaster___ctor(v803, 0LL);
  if ( v803 )
  {
    v519 = sub_1B71708(v803, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1550;
  v517->m_Items[94] = (DataMasterBase_o *)v803;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[94], (int32_t)v803, v804, v805);
  v806 = (TreasureDvcLvMaster_o *)sub_1B71818(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v806, 0LL);
  if ( v806 )
  {
    v519 = sub_1B71708(v806, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1550;
  v517->m_Items[95] = (DataMasterBase_o *)v806;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[95], (int32_t)v806, v807, v808);
  v809 = (TreasureDvcDetailMaster_o *)sub_1B71818(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v809, 0LL);
  if ( v809 )
  {
    v519 = sub_1B71708(v809, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1550;
  v517->m_Items[96] = (DataMasterBase_o *)v809;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[96], (int32_t)v809, v810, v811);
  v812 = (UserFollowerMaster_o *)sub_1B71818(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v812, 0LL);
  if ( v812 )
  {
    v519 = sub_1B71708(v812, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1550;
  v517->m_Items[97] = (DataMasterBase_o *)v812;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[97], (int32_t)v812, v813, v814);
  v815 = (NpcFollowerMaster_o *)sub_1B71818(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v815, 0LL);
  if ( v815 )
  {
    v519 = sub_1B71708(v815, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1550;
  v517->m_Items[98] = (DataMasterBase_o *)v815;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[98], (int32_t)v815, v816, v817);
  v818 = (NpcServantFollowerMaster_o *)sub_1B71818(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v818, 0LL);
  if ( v818 )
  {
    v519 = sub_1B71708(v818, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1550;
  v517->m_Items[99] = (DataMasterBase_o *)v818;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[99], (int32_t)v818, v819, v820);
  v821 = (UserEventMaster_o *)sub_1B71818(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v821, 0LL);
  if ( v821 )
  {
    v519 = sub_1B71708(v821, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1550;
  v517->m_Items[100] = (DataMasterBase_o *)v821;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[100], (int32_t)v821, v822, v823);
  v824 = (UserShopMaster_o *)sub_1B71818(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v824, 0LL);
  if ( v824 )
  {
    v519 = sub_1B71708(v824, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1550;
  v517->m_Items[101] = (DataMasterBase_o *)v824;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[101], (int32_t)v824, v825, v826);
  v827 = (UserContinueMaster_o *)sub_1B71818(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v827, 0LL);
  if ( v827 )
  {
    v519 = sub_1B71708(v827, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1550;
  v517->m_Items[102] = (DataMasterBase_o *)v827;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[102], (int32_t)v827, v828, v829);
  v830 = (ConstantMaster_o *)sub_1B71818(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v830, 0LL);
  if ( v830 )
  {
    v519 = sub_1B71708(v830, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1550;
  v517->m_Items[103] = (DataMasterBase_o *)v830;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[103], (int32_t)v830, v831, v832);
  v833 = (ConstantLongMaster_o *)sub_1B71818(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v833, 0LL);
  if ( v833 )
  {
    v519 = sub_1B71708(v833, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1550;
  v517->m_Items[104] = (DataMasterBase_o *)v833;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[104], (int32_t)v833, v834, v835);
  v836 = (ConstantStrMaster_o *)sub_1B71818(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v836, 0LL);
  if ( v836 )
  {
    v519 = sub_1B71708(v836, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1550;
  v517->m_Items[105] = (DataMasterBase_o *)v836;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[105], (int32_t)v836, v837, v838);
  v839 = (AiMaster_o *)sub_1B71818(AiMaster_TypeInfo);
  AiMaster___ctor(v839, 0LL);
  if ( v839 )
  {
    v519 = sub_1B71708(v839, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1550;
  v517->m_Items[106] = (DataMasterBase_o *)v839;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[106], (int32_t)v839, v840, v841);
  v842 = (AiActMaster_o *)sub_1B71818(AiActMaster_TypeInfo);
  AiActMaster___ctor(v842, 0LL);
  if ( v842 )
  {
    v519 = sub_1B71708(v842, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1550;
  v517->m_Items[107] = (DataMasterBase_o *)v842;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[107], (int32_t)v842, v843, v844);
  v845 = (AttriRelationMaster_o *)sub_1B71818(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v845, 0LL);
  if ( v845 )
  {
    v519 = sub_1B71708(v845, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1550;
  v517->m_Items[108] = (DataMasterBase_o *)v845;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[108], (int32_t)v845, v846, v847);
  v848 = (ClassRelationMaster_o *)sub_1B71818(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v848, 0LL);
  if ( v848 )
  {
    v519 = sub_1B71708(v848, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1550;
  v517->m_Items[109] = (DataMasterBase_o *)v848;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[109], (int32_t)v848, v849, v850);
  v851 = (EffectMaster_o *)sub_1B71818(EffectMaster_TypeInfo);
  EffectMaster___ctor(v851, 0LL);
  if ( v851 )
  {
    v519 = sub_1B71708(v851, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1550;
  v517->m_Items[110] = (DataMasterBase_o *)v851;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[110], (int32_t)v851, v852, v853);
  v854 = (EquipImageMaster_o *)sub_1B71818(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v854, 0LL);
  if ( v854 )
  {
    v519 = sub_1B71708(v854, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1550;
  v517->m_Items[111] = (DataMasterBase_o *)v854;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[111], (int32_t)v854, v855, v856);
  v857 = (ServantVoiceMaster_o *)sub_1B71818(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v857, 0LL);
  if ( v857 )
  {
    v519 = sub_1B71708(v857, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1550;
  v517->m_Items[112] = (DataMasterBase_o *)v857;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[112], (int32_t)v857, v858, v859);
  v860 = (CombineLimitMaster_o *)sub_1B71818(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v860, 0LL);
  if ( v860 )
  {
    v519 = sub_1B71708(v860, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1550;
  v517->m_Items[113] = (DataMasterBase_o *)v860;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[113], (int32_t)v860, v861, v862);
  v863 = (CardMaster_o *)sub_1B71818(CardMaster_TypeInfo);
  CardMaster___ctor(v863, 0LL);
  if ( v863 )
  {
    v519 = sub_1B71708(v863, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1550;
  v517->m_Items[114] = (DataMasterBase_o *)v863;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[114], (int32_t)v863, v864, v865);
  v866 = (CombineQpSvtEquipMaster_o *)sub_1B71818(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v866, 0LL);
  if ( v866 )
  {
    v519 = sub_1B71708(v866, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1550;
  v517->m_Items[115] = (DataMasterBase_o *)v866;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[115], (int32_t)v866, v867, v868);
  v869 = (ServantRarityMaster_o *)sub_1B71818(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v869, 0LL);
  if ( v869 )
  {
    v519 = sub_1B71708(v869, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1550;
  v517->m_Items[116] = (DataMasterBase_o *)v869;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[116], (int32_t)v869, v870, v871);
  v872 = (SetItemMaster_o *)sub_1B71818(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v872, 0LL);
  if ( v872 )
  {
    v519 = sub_1B71708(v872, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1550;
  v517->m_Items[117] = (DataMasterBase_o *)v872;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[117], (int32_t)v872, v873, v874);
  v875 = (RecoverMaster_o *)sub_1B71818(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v875, 0LL);
  if ( v875 )
  {
    v519 = sub_1B71708(v875, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1550;
  v517->m_Items[118] = (DataMasterBase_o *)v875;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[118], (int32_t)v875, v876, v877);
  v878 = (BannerMaster_o *)sub_1B71818(BannerMaster_TypeInfo);
  BannerMaster___ctor(v878, 0LL);
  if ( v878 )
  {
    v519 = sub_1B71708(v878, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1550;
  v517->m_Items[119] = (DataMasterBase_o *)v878;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[119], (int32_t)v878, v879, v880);
  v881 = (ShopReleaseMaster_o *)sub_1B71818(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v881, 0LL);
  if ( v881 )
  {
    v519 = sub_1B71708(v881, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1550;
  v517->m_Items[120] = (DataMasterBase_o *)v881;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[120], (int32_t)v881, v882, v883);
  v884 = (EventRewardMaster_o *)sub_1B71818(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v884, 0LL);
  if ( v884 )
  {
    v519 = sub_1B71708(v884, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1550;
  v517->m_Items[121] = (DataMasterBase_o *)v884;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[121], (int32_t)v884, v885, v886);
  v887 = (EventDetailMaster_o *)sub_1B71818(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v887, 0LL);
  if ( v887 )
  {
    v519 = sub_1B71708(v887, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1550;
  v517->m_Items[122] = (DataMasterBase_o *)v887;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[122], (int32_t)v887, v888, v889);
  v890 = (EventServantMaster_o *)sub_1B71818(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v890, 0LL);
  if ( v890 )
  {
    v519 = sub_1B71708(v890, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1550;
  v517->m_Items[123] = (DataMasterBase_o *)v890;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[123], (int32_t)v890, v891, v892);
  v893 = (BoxGachaMaster_o *)sub_1B71818(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v893, 0LL);
  if ( v893 )
  {
    v519 = sub_1B71708(v893, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1550;
  v517->m_Items[124] = (DataMasterBase_o *)v893;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[124], (int32_t)v893, v894, v895);
  v896 = (BoxGachaBaseMaster_o *)sub_1B71818(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v896, 0LL);
  if ( v896 )
  {
    v519 = sub_1B71708(v896, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1550;
  v517->m_Items[125] = (DataMasterBase_o *)v896;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[125], (int32_t)v896, v897, v898);
  v899 = (BoxGachaTalkMaster_o *)sub_1B71818(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v899, 0LL);
  if ( v899 )
  {
    v519 = sub_1B71708(v899, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1550;
  v517->m_Items[126] = (DataMasterBase_o *)v899;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[126], (int32_t)v899, v900, v901);
  v902 = (UserBoxGachaMaster_o *)sub_1B71818(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v902, 0LL);
  if ( v902 )
  {
    v519 = sub_1B71708(v902, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1550;
  v517->m_Items[127] = (DataMasterBase_o *)v902;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[127], (int32_t)v902, v903, v904);
  v905 = (BoxGachaHistoryMaster_o *)sub_1B71818(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v905, 0LL);
  if ( v905 )
  {
    v519 = sub_1B71708(v905, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1550;
  v517->m_Items[128] = (DataMasterBase_o *)v905;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[128], (int32_t)v905, v906, v907);
  v908 = (BattleBgMaster_o *)sub_1B71818(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v908, 0LL);
  if ( v908 )
  {
    v519 = sub_1B71708(v908, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1550;
  v517->m_Items[129] = (DataMasterBase_o *)v908;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[129], (int32_t)v908, v909, v910);
  v911 = (TipsBattleMaster_o *)sub_1B71818(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v911, 0LL);
  if ( v911 )
  {
    v519 = sub_1B71708(v911, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1550;
  v517->m_Items[130] = (DataMasterBase_o *)v911;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[130], (int32_t)v911, v912, v913);
  v914 = (UserLoginMaster_o *)sub_1B71818(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v914, 0LL);
  if ( v914 )
  {
    v519 = sub_1B71708(v914, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1550;
  v517->m_Items[131] = (DataMasterBase_o *)v914;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[131], (int32_t)v914, v915, v916);
  v917 = (VoiceMaster_o *)sub_1B71818(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v917, 0LL);
  if ( v917 )
  {
    v519 = sub_1B71708(v917, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1550;
  v517->m_Items[132] = (DataMasterBase_o *)v917;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[132], (int32_t)v917, v918, v919);
  v920 = (EventRewardExtraMaster_o *)sub_1B71818(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v920, 0LL);
  if ( v920 )
  {
    v519 = sub_1B71708(v920, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1550;
  v517->m_Items[133] = (DataMasterBase_o *)v920;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[133], (int32_t)v920, v921, v922);
  v923 = (EventMissionMaster_o *)sub_1B71818(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v923, 0LL);
  if ( v923 )
  {
    v519 = sub_1B71708(v923, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1550;
  v517->m_Items[134] = (DataMasterBase_o *)v923;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[134], (int32_t)v923, v924, v925);
  v926 = (EventMissionActionMaster_o *)sub_1B71818(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v926, 0LL);
  if ( v926 )
  {
    v519 = sub_1B71708(v926, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1550;
  v517->m_Items[135] = (DataMasterBase_o *)v926;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[135], (int32_t)v926, v927, v928);
  v929 = (EventMissionActionAddMaster_o *)sub_1B71818(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v929, 0LL);
  if ( v929 )
  {
    v519 = sub_1B71708(v929, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1550;
  v517->m_Items[136] = (DataMasterBase_o *)v929;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[136], (int32_t)v929, v930, v931);
  v932 = (EventMissionConditionMaster_o *)sub_1B71818(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v932, 0LL);
  if ( v932 )
  {
    v519 = sub_1B71708(v932, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1550;
  v517->m_Items[137] = (DataMasterBase_o *)v932;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[137], (int32_t)v932, v933, v934);
  v935 = (EventMissionCondDetailMaster_o *)sub_1B71818(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v935, 0LL);
  if ( v935 )
  {
    v519 = sub_1B71708(v935, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1550;
  v517->m_Items[138] = (DataMasterBase_o *)v935;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[138], (int32_t)v935, v936, v937);
  v938 = (EventMissionAddMaster_o *)sub_1B71818(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v938, 0LL);
  if ( v938 )
  {
    v519 = sub_1B71708(v938, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1550;
  v517->m_Items[139] = (DataMasterBase_o *)v938;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[139], (int32_t)v938, v939, v940);
  v941 = (CompleteMissionMaster_o *)sub_1B71818(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v941, 0LL);
  if ( v941 )
  {
    v519 = sub_1B71708(v941, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1550;
  v517->m_Items[140] = (DataMasterBase_o *)v941;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[140], (int32_t)v941, v942, v943);
  v944 = (EventRewardSetMaster_o *)sub_1B71818(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v944, 0LL);
  if ( v944 )
  {
    v519 = sub_1B71708(v944, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1550;
  v517->m_Items[141] = (DataMasterBase_o *)v944;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[141], (int32_t)v944, v945, v946);
  v947 = (UserEventMissionMaster_o *)sub_1B71818(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v947, 0LL);
  if ( v947 )
  {
    v519 = sub_1B71708(v947, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1550;
  v517->m_Items[142] = (DataMasterBase_o *)v947;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[142], (int32_t)v947, v948, v949);
  v950 = (UserEventMissionCondDetailMaster_o *)sub_1B71818(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v950, 0LL);
  if ( v950 )
  {
    v519 = sub_1B71708(v950, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1550;
  v517->m_Items[143] = (DataMasterBase_o *)v950;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[143], (int32_t)v950, v951, v952);
  v953 = (BoxGachaBaseDetailMaster_o *)sub_1B71818(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v953, 0LL);
  if ( v953 )
  {
    v519 = sub_1B71708(v953, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1550;
  v517->m_Items[144] = (DataMasterBase_o *)v953;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[144], (int32_t)v953, v954, v955);
  v956 = (UserServantLeaderMaster_o *)sub_1B71818(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v956, 0LL);
  if ( v956 )
  {
    v519 = sub_1B71708(v956, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1550;
  v517->m_Items[145] = (DataMasterBase_o *)v956;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[145], (int32_t)v956, v957, v958);
  v959 = (ClosedMessageMaster_o *)sub_1B71818(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v959, 0LL);
  if ( v959 )
  {
    v519 = sub_1B71708(v959, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1550;
  v517->m_Items[146] = (DataMasterBase_o *)v959;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[146], (int32_t)v959, v960, v961);
  v962 = (FunctionGroupMaster_o *)sub_1B71818(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v962, 0LL);
  if ( v962 )
  {
    v519 = sub_1B71708(v962, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1550;
  v517->m_Items[147] = (DataMasterBase_o *)v962;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[147], (int32_t)v962, v963, v964);
  v965 = (EventRaidMaster_o *)sub_1B71818(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v965, 0LL);
  if ( v965 )
  {
    v519 = sub_1B71708(v965, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1550;
  v517->m_Items[148] = (DataMasterBase_o *)v965;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[148], (int32_t)v965, v966, v967);
  v968 = (TotalEventRaidMaster_o *)sub_1B71818(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v968, 0LL);
  if ( v968 )
  {
    v519 = sub_1B71708(v968, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1550;
  v517->m_Items[149] = (DataMasterBase_o *)v968;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[149], (int32_t)v968, v969, v970);
  v971 = (UserEventRaidMaster_o *)sub_1B71818(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v971, 0LL);
  if ( v971 )
  {
    v519 = sub_1B71708(v971, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1550;
  v517->m_Items[150] = (DataMasterBase_o *)v971;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[150], (int32_t)v971, v972, v973);
  v974 = (EventPointMaster_o *)sub_1B71818(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v974, 0LL);
  if ( v974 )
  {
    v519 = sub_1B71708(v974, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1550;
  v517->m_Items[151] = (DataMasterBase_o *)v974;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[151], (int32_t)v974, v975, v976);
  v977 = (EventPointGroupMaster_o *)sub_1B71818(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v977, 0LL);
  if ( v977 )
  {
    v519 = sub_1B71708(v977, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1550;
  v517->m_Items[152] = (DataMasterBase_o *)v977;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[152], (int32_t)v977, v978, v979);
  v980 = (TotalEventPointMaster_o *)sub_1B71818(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v980, 0LL);
  if ( v980 )
  {
    v519 = sub_1B71708(v980, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1550;
  v517->m_Items[153] = (DataMasterBase_o *)v980;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[153], (int32_t)v980, v981, v982);
  v983 = (UserEventPointMaster_o *)sub_1B71818(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v983, 0LL);
  if ( v983 )
  {
    v519 = sub_1B71708(v983, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1550;
  v517->m_Items[154] = (DataMasterBase_o *)v983;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[154], (int32_t)v983, v984, v985);
  v986 = (EventPointUpperMaster_o *)sub_1B71818(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v986, 0LL);
  if ( v986 )
  {
    v519 = sub_1B71708(v986, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1550;
  v517->m_Items[155] = (DataMasterBase_o *)v986;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[155], (int32_t)v986, v987, v988);
  v989 = (EventPointUpperReleaseMaster_o *)sub_1B71818(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v989, 0LL);
  if ( v989 )
  {
    v519 = sub_1B71708(v989, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1550;
  v517->m_Items[156] = (DataMasterBase_o *)v989;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[156], (int32_t)v989, v990, v991);
  v992 = (EventRaceMaster_o *)sub_1B71818(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v992, 0LL);
  if ( v992 )
  {
    v519 = sub_1B71708(v992, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1550;
  v517->m_Items[157] = (DataMasterBase_o *)v992;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[157], (int32_t)v992, v993, v994);
  v995 = (EventRaceResultMaster_o *)sub_1B71818(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v995, 0LL);
  if ( v995 )
  {
    v519 = sub_1B71708(v995, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1550;
  v517->m_Items[158] = (DataMasterBase_o *)v995;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[158], (int32_t)v995, v996, v997);
  v998 = (QuestRacePointMaster_o *)sub_1B71818(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v998, 0LL);
  if ( v998 )
  {
    v519 = sub_1B71708(v998, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1550;
  v517->m_Items[159] = (DataMasterBase_o *)v998;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[159], (int32_t)v998, v999, v1000);
  v1001 = (UserEventRaceMaster_o *)sub_1B71818(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v1001, 0LL);
  if ( v1001 )
  {
    v519 = sub_1B71708(v1001, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1550;
  v517->m_Items[160] = (DataMasterBase_o *)v1001;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[160], (int32_t)v1001, v1002, v1003);
  v1004 = (EventScriptMaster_o *)sub_1B71818(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v1004, 0LL);
  if ( v1004 )
  {
    v519 = sub_1B71708(v1004, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1550;
  v517->m_Items[161] = (DataMasterBase_o *)v1004;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[161], (int32_t)v1004, v1005, v1006);
  v1007 = (EventScriptReleaseMaster_o *)sub_1B71818(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v1007, 0LL);
  if ( v1007 )
  {
    v519 = sub_1B71708(v1007, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1550;
  v517->m_Items[162] = (DataMasterBase_o *)v1007;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[162], (int32_t)v1007, v1008, v1009);
  v1010 = (UserPresentHistoryMaster_o *)sub_1B71818(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v1010, 0LL);
  if ( v1010 )
  {
    v519 = sub_1B71708(v1010, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1550;
  v517->m_Items[163] = (DataMasterBase_o *)v1010;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[163], (int32_t)v1010, v1011, v1012);
  v1013 = (MstMissionMaster_o *)sub_1B71818(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v1013, 0LL);
  if ( v1013 )
  {
    v519 = sub_1B71708(v1013, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1550;
  v517->m_Items[164] = (DataMasterBase_o *)v1013;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[164], (int32_t)v1013, v1014, v1015);
  v1016 = (ServantExceedMaster_o *)sub_1B71818(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v1016, 0LL);
  if ( v1016 )
  {
    v519 = sub_1B71708(v1016, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1550;
  v517->m_Items[165] = (DataMasterBase_o *)v1016;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[165], (int32_t)v1016, v1017, v1018);
  v1019 = (PartialMaintenanceMaster_o *)sub_1B71818(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v1019, 0LL);
  if ( v1019 )
  {
    v519 = sub_1B71708(v1019, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1550;
  v517->m_Items[166] = (DataMasterBase_o *)v1019;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[166], (int32_t)v1019, v1020, v1021);
  v1022 = (GuideMaster_o *)sub_1B71818(GuideMaster_TypeInfo);
  GuideMaster___ctor(v1022, 0LL);
  if ( v1022 )
  {
    v519 = sub_1B71708(v1022, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1550;
  v517->m_Items[167] = (DataMasterBase_o *)v1022;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[167], (int32_t)v1022, v1023, v1024);
  v1025 = (MstMissionDisplayInfoMaster_o *)sub_1B71818(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v1025, 0LL);
  if ( v1025 )
  {
    v519 = sub_1B71708(v1025, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1550;
  v517->m_Items[168] = (DataMasterBase_o *)v1025;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[168], (int32_t)v1025, v1026, v1027);
  v1028 = (GachaGroupMaster_o *)sub_1B71818(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v1028, 0LL);
  if ( v1028 )
  {
    v519 = sub_1B71708(v1028, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1550;
  v517->m_Items[169] = (DataMasterBase_o *)v1028;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[169], (int32_t)v1028, v1029, v1030);
  v1031 = (QuestResetMaster_o *)sub_1B71818(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v1031, 0LL);
  if ( v1031 )
  {
    v519 = sub_1B71708(v1031, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1550;
  v517->m_Items[170] = (DataMasterBase_o *)v1031;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[170], (int32_t)v1031, v1032, v1033);
  v1034 = (WarAddMaster_o *)sub_1B71818(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v1034, 0LL);
  if ( v1034 )
  {
    v519 = sub_1B71708(v1034, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1550;
  v517->m_Items[171] = (DataMasterBase_o *)v1034;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[171], (int32_t)v1034, v1035, v1036);
  v1037 = (EventItemDisplayMaster_o *)sub_1B71818(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v1037, 0LL);
  if ( v1037 )
  {
    v519 = sub_1B71708(v1037, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1550;
  v517->m_Items[172] = (DataMasterBase_o *)v1037;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[172], (int32_t)v1037, v1038, v1039);
  v1040 = (EventItemDisplayGroupMaster_o *)sub_1B71818(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v1040, 0LL);
  if ( v1040 )
  {
    v519 = sub_1B71708(v1040, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1550;
  v517->m_Items[173] = (DataMasterBase_o *)v1040;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[173], (int32_t)v1040, v1041, v1042);
  v1043 = (EventItemDisplayReleaseMaster_o *)sub_1B71818(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v1043, 0LL);
  if ( v1043 )
  {
    v519 = sub_1B71708(v1043, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1550;
  v517->m_Items[174] = (DataMasterBase_o *)v1043;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[174], (int32_t)v1043, v1044, v1045);
  v1046 = (EventTutorialMaster_o *)sub_1B71818(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v1046, 0LL);
  if ( v1046 )
  {
    v519 = sub_1B71708(v1046, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1550;
  v517->m_Items[175] = (DataMasterBase_o *)v1046;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[175], (int32_t)v1046, v1047, v1048);
  v1049 = (EventTutorialCondMaster_o *)sub_1B71818(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v1049, 0LL);
  if ( v1049 )
  {
    v519 = sub_1B71708(v1049, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1550;
  v517->m_Items[176] = (DataMasterBase_o *)v1049;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[176], (int32_t)v1049, v1050, v1051);
  v1052 = (VoiceReleaseMaster_o *)sub_1B71818(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v1052, 0LL);
  if ( v1052 )
  {
    v519 = sub_1B71708(v1052, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1550;
  v517->m_Items[177] = (DataMasterBase_o *)v1052;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[177], (int32_t)v1052, v1053, v1054);
  v1055 = (EventSuperBossMaster_o *)sub_1B71818(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v1055, 0LL);
  if ( v1055 )
  {
    v519 = sub_1B71708(v1055, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1550;
  v517->m_Items[178] = (DataMasterBase_o *)v1055;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[178], (int32_t)v1055, v1056, v1057);
  v1058 = (UserSuperBossMaster_o *)sub_1B71818(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v1058, 0LL);
  if ( v1058 )
  {
    v519 = sub_1B71708(v1058, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1550;
  v517->m_Items[179] = (DataMasterBase_o *)v1058;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[179], (int32_t)v1058, v1059, v1060);
  v1061 = (QuestScriptMaster_o *)sub_1B71818(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v1061, 0LL);
  if ( v1061 )
  {
    v519 = sub_1B71708(v1061, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1550;
  v517->m_Items[180] = (DataMasterBase_o *)v1061;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[180], (int32_t)v1061, v1062, v1063);
  v1064 = (QuestScriptReleaseMaster_o *)sub_1B71818(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v1064, 0LL);
  if ( v1064 )
  {
    v519 = sub_1B71708(v1064, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1550;
  v517->m_Items[181] = (DataMasterBase_o *)v1064;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[181], (int32_t)v1064, v1065, v1066);
  v1067 = (MaterialFolderMaster_o *)sub_1B71818(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v1067, 0LL);
  if ( v1067 )
  {
    v519 = sub_1B71708(v1067, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1550;
  v517->m_Items[182] = (DataMasterBase_o *)v1067;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[182], (int32_t)v1067, v1068, v1069);
  v1070 = (RestrictionMaster_o *)sub_1B71818(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v1070, 0LL);
  if ( v1070 )
  {
    v519 = sub_1B71708(v1070, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1550;
  v517->m_Items[183] = (DataMasterBase_o *)v1070;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[183], (int32_t)v1070, v1071, v1072);
  v1073 = (QuestRestrictionMaster_o *)sub_1B71818(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v1073, 0LL);
  if ( v1073 )
  {
    v519 = sub_1B71708(v1073, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1550;
  v517->m_Items[184] = (DataMasterBase_o *)v1073;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[184], (int32_t)v1073, v1074, v1075);
  v1076 = (ServantVoiceRelationMaster_o *)sub_1B71818(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v1076, 0LL);
  if ( v1076 )
  {
    v519 = sub_1B71708(v1076, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1550;
  v517->m_Items[185] = (DataMasterBase_o *)v1076;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[185], (int32_t)v1076, v1077, v1078);
  v1079 = (ShopDetailMaster_o *)sub_1B71818(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v1079, 0LL);
  if ( v1079 )
  {
    v519 = sub_1B71708(v1079, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1550;
  v517->m_Items[186] = (DataMasterBase_o *)v1079;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[186], (int32_t)v1079, v1080, v1081);
  v1082 = (ServantScriptAddMaster_o *)sub_1B71818(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v1082, 0LL);
  if ( v1082 )
  {
    v519 = sub_1B71708(v1082, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1550;
  v517->m_Items[187] = (DataMasterBase_o *)v1082;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[187], (int32_t)v1082, v1083, v1084);
  v1085 = (CombineMaster_o *)sub_1B71818(CombineMaster_TypeInfo);
  CombineMaster___ctor(v1085, 0LL);
  if ( v1085 )
  {
    v519 = sub_1B71708(v1085, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1550;
  v517->m_Items[188] = (DataMasterBase_o *)v1085;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[188], (int32_t)v1085, v1086, v1087);
  v1088 = (AiFieldMaster_o *)sub_1B71818(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v1088, 0LL);
  if ( v1088 )
  {
    v519 = sub_1B71708(v1088, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1550;
  v517->m_Items[189] = (DataMasterBase_o *)v1088;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[189], (int32_t)v1088, v1089, v1090);
  v1091 = (ServantCommentAddMaster_o *)sub_1B71818(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v1091, 0LL);
  if ( v1091 )
  {
    v519 = sub_1B71708(v1091, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1550;
  v517->m_Items[190] = (DataMasterBase_o *)v1091;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[190], (int32_t)v1091, v1092, v1093);
  v1094 = (EventFilterMaster_o *)sub_1B71818(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v1094, 0LL);
  if ( v1094 )
  {
    v519 = sub_1B71708(v1094, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1550;
  v517->m_Items[191] = (DataMasterBase_o *)v1094;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[191], (int32_t)v1094, v1095, v1096);
  v1097 = (UserSupportDeckMaster_o *)sub_1B71818(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v1097, 0LL);
  if ( v1097 )
  {
    v519 = sub_1B71708(v1097, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1550;
  v517->m_Items[192] = (DataMasterBase_o *)v1097;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[192], (int32_t)v1097, v1098, v1099);
  v1100 = (EventRewardSceneMaster_o *)sub_1B71818(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v1100, 0LL);
  if ( v1100 )
  {
    v519 = sub_1B71708(v1100, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1550;
  v517->m_Items[193] = (DataMasterBase_o *)v1100;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[193], (int32_t)v1100, v1101, v1102);
  v1103 = (EventVoicePlayMaster_o *)sub_1B71818(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v1103, 0LL);
  if ( v1103 )
  {
    v519 = sub_1B71708(v1103, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1550;
  v517->m_Items[194] = (DataMasterBase_o *)v1103;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[194], (int32_t)v1103, v1104, v1105);
  v1106 = (GachaSubMaster_o *)sub_1B71818(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v1106, 0LL);
  if ( v1106 )
  {
    v519 = sub_1B71708(v1106, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1550;
  v517->m_Items[195] = (DataMasterBase_o *)v1106;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[195], (int32_t)v1106, v1107, v1108);
  v1109 = (GachaDetailMaster_o *)sub_1B71818(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v1109, 0LL);
  if ( v1109 )
  {
    v519 = sub_1B71708(v1109, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1550;
  v517->m_Items[196] = (DataMasterBase_o *)v1109;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[196], (int32_t)v1109, v1110, v1111);
  v1112 = (GachaBonusSelectMaster_o *)sub_1B71818(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v1112, 0LL);
  if ( v1112 )
  {
    v519 = sub_1B71708(v1112, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1550;
  v517->m_Items[197] = (DataMasterBase_o *)v1112;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[197], (int32_t)v1112, v1113, v1114);
  v1115 = (GachaBonusSelectLineupMaster_o *)sub_1B71818(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v1115, 0LL);
  if ( v1115 )
  {
    v519 = sub_1B71708(v1115, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1550;
  v517->m_Items[198] = (DataMasterBase_o *)v1115;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[198], (int32_t)v1115, v1116, v1117);
  v1118 = (ServantChangeMaster_o *)sub_1B71818(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v1118, 0LL);
  if ( v1118 )
  {
    v519 = sub_1B71708(v1118, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1550;
  v517->m_Items[199] = (DataMasterBase_o *)v1118;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[199], (int32_t)v1118, v1119, v1120);
  v1121 = (VoiceCondMaster_o *)sub_1B71818(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v1121, 0LL);
  if ( v1121 )
  {
    v519 = sub_1B71708(v1121, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1550;
  v517->m_Items[200] = (DataMasterBase_o *)v1121;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[200], (int32_t)v1121, v1122, v1123);
  v1124 = (BgmReleaseMaster_o *)sub_1B71818(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v1124, 0LL);
  if ( v1124 )
  {
    v519 = sub_1B71708(v1124, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1550;
  v517->m_Items[201] = (DataMasterBase_o *)v1124;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[201], (int32_t)v1124, v1125, v1126);
  v1127 = (MyRoomAddMaster_o *)sub_1B71818(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v1127, 0LL);
  if ( v1127 )
  {
    v519 = sub_1B71708(v1127, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1550;
  v517->m_Items[202] = (DataMasterBase_o *)v1127;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[202], (int32_t)v1127, v1128, v1129);
  v1130 = (ShopActionMaster_o *)sub_1B71818(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v1130, 0LL);
  if ( v1130 )
  {
    v519 = sub_1B71708(v1130, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1550;
  v517->m_Items[203] = (DataMasterBase_o *)v1130;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[203], (int32_t)v1130, v1131, v1132);
  v1133 = (EventRewardSceneReleaseMaster_o *)sub_1B71818(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v1133, 0LL);
  if ( v1133 )
  {
    v519 = sub_1B71708(v1133, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1550;
  v517->m_Items[204] = (DataMasterBase_o *)v1133;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[204], (int32_t)v1133, v1134, v1135);
  v1136 = (QuestBehaviorMaster_o *)sub_1B71818(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v1136, 0LL);
  if ( v1136 )
  {
    v519 = sub_1B71708(v1136, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1550;
  v517->m_Items[205] = (DataMasterBase_o *)v1136;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[205], (int32_t)v1136, v1137, v1138);
  v1139 = (MapMaster_o *)sub_1B71818(MapMaster_TypeInfo);
  MapMaster___ctor(v1139, 0LL);
  if ( v1139 )
  {
    v519 = sub_1B71708(v1139, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1550;
  v517->m_Items[206] = (DataMasterBase_o *)v1139;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[206], (int32_t)v1139, v1140, v1141);
  v1142 = (MapCondMaster_o *)sub_1B71818(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v1142, 0LL);
  if ( v1142 )
  {
    v519 = sub_1B71708(v1142, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1550;
  v517->m_Items[207] = (DataMasterBase_o *)v1142;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[207], (int32_t)v1142, v1143, v1144);
  v1145 = (MapButtonMaster_o *)sub_1B71818(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v1145, 0LL);
  if ( v1145 )
  {
    v519 = sub_1B71708(v1145, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1550;
  v517->m_Items[208] = (DataMasterBase_o *)v1145;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[208], (int32_t)v1145, v1146, v1147);
  v1148 = (BannerAddMaster_o *)sub_1B71818(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v1148, 0LL);
  if ( v1148 )
  {
    v519 = sub_1B71708(v1148, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1550;
  v517->m_Items[209] = (DataMasterBase_o *)v1148;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[209], (int32_t)v1148, v1149, v1150);
  v1151 = (EventAddMaster_o *)sub_1B71818(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v1151, 0LL);
  if ( v1151 )
  {
    v519 = sub_1B71708(v1151, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1550;
  v517->m_Items[210] = (DataMasterBase_o *)v1151;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[210], (int32_t)v1151, v1152, v1153);
  v1154 = (TotalLoginMaster_o *)sub_1B71818(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v1154, 0LL);
  if ( v1154 )
  {
    v519 = sub_1B71708(v1154, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1550;
  v517->m_Items[211] = (DataMasterBase_o *)v1154;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[211], (int32_t)v1154, v1155, v1156);
  v1157 = (ServantFilterMaster_o *)sub_1B71818(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v1157, 0LL);
  if ( v1157 )
  {
    v519 = sub_1B71708(v1157, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1550;
  v517->m_Items[212] = (DataMasterBase_o *)v1157;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[212], (int32_t)v1157, v1158, v1159);
  v1160 = (CombineCostumeMaster_o *)sub_1B71818(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v1160, 0LL);
  if ( v1160 )
  {
    v519 = sub_1B71708(v1160, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1550;
  v517->m_Items[213] = (DataMasterBase_o *)v1160;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[213], (int32_t)v1160, v1161, v1162);
  v1163 = (ServantCostumeMaster_o *)sub_1B71818(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v1163, 0LL);
  if ( v1163 )
  {
    v519 = sub_1B71708(v1163, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1550;
  v517->m_Items[214] = (DataMasterBase_o *)v1163;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[214], (int32_t)v1163, v1164, v1165);
  v1166 = (ServantCostumeReleaseMaster_o *)sub_1B71818(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v1166, 0LL);
  if ( v1166 )
  {
    v519 = sub_1B71708(v1166, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1550;
  v517->m_Items[215] = (DataMasterBase_o *)v1166;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[215], (int32_t)v1166, v1167, v1168);
  v1169 = (UserFriendRequestHistoryMaster_o *)sub_1B71818(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v1169, 0LL);
  if ( v1169 )
  {
    v519 = sub_1B71708(v1169, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1550;
  v517->m_Items[216] = (DataMasterBase_o *)v1169;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[216], (int32_t)v1169, v1170, v1171);
  v1172 = (UserBlacklistMaster_o *)sub_1B71818(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v1172, 0LL);
  if ( v1172 )
  {
    v519 = sub_1B71708(v1172, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1550;
  v517->m_Items[217] = (DataMasterBase_o *)v1172;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[217], (int32_t)v1172, v1173, v1174);
  v1175 = (ItemSelectMaster_o *)sub_1B71818(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v1175, 0LL);
  if ( v1175 )
  {
    v519 = sub_1B71708(v1175, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1550;
  v517->m_Items[218] = (DataMasterBase_o *)v1175;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[218], (int32_t)v1175, v1176, v1177);
  v1178 = (TotalEventRaceMaster_o *)sub_1B71818(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v1178, 0LL);
  if ( v1178 )
  {
    v519 = sub_1B71708(v1178, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1550;
  v517->m_Items[219] = (DataMasterBase_o *)v1178;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[219], (int32_t)v1178, v1179, v1180);
  v1181 = (EventPointGroupAddMaster_o *)sub_1B71818(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v1181, 0LL);
  if ( v1181 )
  {
    v519 = sub_1B71708(v1181, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1550;
  v517->m_Items[220] = (DataMasterBase_o *)v1181;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[220], (int32_t)v1181, v1182, v1183);
  v1184 = (VoicePlayGroupMaster_o *)sub_1B71818(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v1184, 0LL);
  if ( v1184 )
  {
    v519 = sub_1B71708(v1184, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1550;
  v517->m_Items[221] = (DataMasterBase_o *)v1184;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[221], (int32_t)v1184, v1185, v1186);
  v1187 = (VoicePlayCondMaster_o *)sub_1B71818(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v1187, 0LL);
  if ( v1187 )
  {
    v519 = sub_1B71708(v1187, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1550;
  v517->m_Items[222] = (DataMasterBase_o *)v1187;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[222], (int32_t)v1187, v1188, v1189);
  v1190 = (GachaStoryAdjustMaster_o *)sub_1B71818(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v1190, 0LL);
  if ( v1190 )
  {
    v519 = sub_1B71708(v1190, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1550;
  v517->m_Items[223] = (DataMasterBase_o *)v1190;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[223], (int32_t)v1190, v1191, v1192);
  v1193 = (ServantFlagMaster_o *)sub_1B71818(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v1193, 0LL);
  if ( v1193 )
  {
    v519 = sub_1B71708(v1193, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1550;
  v517->m_Items[224] = (DataMasterBase_o *)v1193;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[224], (int32_t)v1193, v1194, v1195);
  v1196 = (ServantFlagReleaseMaster_o *)sub_1B71818(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v1196, 0LL);
  if ( v1196 )
  {
    v519 = sub_1B71708(v1196, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1550;
  v517->m_Items[225] = (DataMasterBase_o *)v1196;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[225], (int32_t)v1196, v1197, v1198);
  v1199 = (EventLocationCampaignMaster_o *)sub_1B71818(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v1199, 0LL);
  if ( v1199 )
  {
    v519 = sub_1B71708(v1199, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1550;
  v517->m_Items[226] = (DataMasterBase_o *)v1199;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[226], (int32_t)v1199, v1200, v1201);
  v1202 = (CampaignInfoMaster_o *)sub_1B71818(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v1202, 0LL);
  if ( v1202 )
  {
    v519 = sub_1B71708(v1202, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1550;
  v517->m_Items[227] = (DataMasterBase_o *)v1202;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[227], (int32_t)v1202, v1203, v1204);
  v1205 = (DialogMessageMaster_o *)sub_1B71818(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v1205, 0LL);
  if ( v1205 )
  {
    v519 = sub_1B71708(v1205, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1550;
  v517->m_Items[228] = (DataMasterBase_o *)v1205;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[228], (int32_t)v1205, v1206, v1207);
  v1208 = (ServantIndividualityMaster_o *)sub_1B71818(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v1208, 0LL);
  if ( v1208 )
  {
    v519 = sub_1B71708(v1208, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1550;
  v517->m_Items[229] = (DataMasterBase_o *)v1208;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[229], (int32_t)v1208, v1209, v1210);
  v1211 = (BoardMessageMaster_o *)sub_1B71818(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v1211, 0LL);
  if ( v1211 )
  {
    v519 = sub_1B71708(v1211, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1550;
  v517->m_Items[230] = (DataMasterBase_o *)v1211;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[230], (int32_t)v1211, v1212, v1213);
  v1214 = (BoardMessageReleaseMaster_o *)sub_1B71818(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v1214, 0LL);
  if ( v1214 )
  {
    v519 = sub_1B71708(v1214, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1550;
  v517->m_Items[231] = (DataMasterBase_o *)v1214;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[231], (int32_t)v1214, v1215, v1216);
  v1217 = (EventServantFatigueMaster_o *)sub_1B71818(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v1217, 0LL);
  if ( v1217 )
  {
    v519 = sub_1B71708(v1217, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1550;
  v517->m_Items[232] = (DataMasterBase_o *)v1217;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[232], (int32_t)v1217, v1218, v1219);
  v1220 = (UserEventDeckMaster_o *)sub_1B71818(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v1220, 0LL);
  if ( v1220 )
  {
    v519 = sub_1B71708(v1220, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1550;
  v517->m_Items[233] = (DataMasterBase_o *)v1220;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[233], (int32_t)v1220, v1221, v1222);
  v1223 = (EventTowerMaster_o *)sub_1B71818(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v1223, 0LL);
  if ( v1223 )
  {
    v519 = sub_1B71708(v1223, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1550;
  v517->m_Items[234] = (DataMasterBase_o *)v1223;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[234], (int32_t)v1223, v1224, v1225);
  v1226 = (EventTowerRewardMaster_o *)sub_1B71818(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v1226, 0LL);
  if ( v1226 )
  {
    v519 = sub_1B71708(v1226, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1550;
  v517->m_Items[235] = (DataMasterBase_o *)v1226;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[235], (int32_t)v1226, v1227, v1228);
  v1229 = (EventBulletinBoardMaster_o *)sub_1B71818(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v1229, 0LL);
  if ( v1229 )
  {
    v519 = sub_1B71708(v1229, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1550;
  v517->m_Items[236] = (DataMasterBase_o *)v1229;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[236], (int32_t)v1229, v1230, v1231);
  v1232 = (EventBulletinBoardReleaseMaster_o *)sub_1B71818(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v1232, 0LL);
  if ( v1232 )
  {
    v519 = sub_1B71708(v1232, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1550;
  v517->m_Items[237] = (DataMasterBase_o *)v1232;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[237], (int32_t)v1232, v1233, v1234);
  v1235 = (EventFactoryMaster_o *)sub_1B71818(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v1235, 0LL);
  if ( v1235 )
  {
    v519 = sub_1B71708(v1235, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1550;
  v517->m_Items[238] = (DataMasterBase_o *)v1235;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[238], (int32_t)v1235, v1236, v1237);
  v1238 = (ShopGroupMaster_o *)sub_1B71818(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v1238, 0LL);
  if ( v1238 )
  {
    v519 = sub_1B71708(v1238, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1550;
  v517->m_Items[239] = (DataMasterBase_o *)v1238;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[239], (int32_t)v1238, v1239, v1240);
  v1241 = (AuraEffectMaster_o *)sub_1B71818(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v1241, 0LL);
  if ( v1241 )
  {
    v519 = sub_1B71708(v1241, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1550;
  v517->m_Items[240] = (DataMasterBase_o *)v1241;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[240], (int32_t)v1241, v1242, v1243);
  v1244 = (AuraEffectPosOverwriteMaster_o *)sub_1B71818(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v1244, 0LL);
  if ( v1244 )
  {
    v519 = sub_1B71708(v1244, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1550;
  v517->m_Items[241] = (DataMasterBase_o *)v1244;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[241], (int32_t)v1244, v1245, v1246);
  v1247 = (UserEventMissionFixMaster_o *)sub_1B71818(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v1247, 0LL);
  if ( v1247 )
  {
    v519 = sub_1B71708(v1247, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1550;
  v517->m_Items[242] = (DataMasterBase_o *)v1247;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[242], (int32_t)v1247, v1248, v1249);
  v1250 = (NotEndEventMissionFixMaster_o *)sub_1B71818(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v1250, 0LL);
  if ( v1250 )
  {
    v519 = sub_1B71708(v1250, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1550;
  v517->m_Items[243] = (DataMasterBase_o *)v1250;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[243], (int32_t)v1250, v1251, v1252);
  v1253 = (EnemyMstMaster_o *)sub_1B71818(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v1253, 0LL);
  if ( v1253 )
  {
    v519 = sub_1B71708(v1253, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1550;
  v517->m_Items[244] = (DataMasterBase_o *)v1253;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[244], (int32_t)v1253, v1254, v1255);
  v1256 = (EnemyMstBattleMaster_o *)sub_1B71818(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v1256, 0LL);
  if ( v1256 )
  {
    v519 = sub_1B71708(v1256, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1550;
  v517->m_Items[245] = (DataMasterBase_o *)v1256;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[245], (int32_t)v1256, v1257, v1258);
  v1259 = (ServantSkillReleaseMaster_o *)sub_1B71818(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v1259, 0LL);
  if ( v1259 )
  {
    v519 = sub_1B71708(v1259, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1550;
  v517->m_Items[246] = (DataMasterBase_o *)v1259;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[246], (int32_t)v1259, v1260, v1261);
  v1262 = (ServantPassiveSkillReleaseMaster_o *)sub_1B71818(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v1262, 0LL);
  if ( v1262 )
  {
    v519 = sub_1B71708(v1262, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1550;
  v517->m_Items[247] = (DataMasterBase_o *)v1262;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[247], (int32_t)v1262, v1263, v1264);
  v1265 = (ServantTreasureDeviceReleaseMaster_o *)sub_1B71818(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v1265, 0LL);
  if ( v1265 )
  {
    v519 = sub_1B71708(v1265, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1550;
  v517->m_Items[248] = (DataMasterBase_o *)v1265;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[248], (int32_t)v1265, v1266, v1267);
  v1268 = (MapGimmickReleaseMaster_o *)sub_1B71818(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v1268, 0LL);
  if ( v1268 )
  {
    v519 = sub_1B71708(v1268, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1550;
  v517->m_Items[249] = (DataMasterBase_o *)v1268;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[249], (int32_t)v1268, v1269, v1270);
  v1271 = (CommandCodeMaster_o *)sub_1B71818(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v1271, 0LL);
  if ( v1271 )
  {
    v519 = sub_1B71708(v1271, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1550;
  v517->m_Items[250] = (DataMasterBase_o *)v1271;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[250], (int32_t)v1271, v1272, v1273);
  v1274 = (ServantCommandCodeUnlockMaster_o *)sub_1B71818(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v1274, 0LL);
  if ( v1274 )
  {
    v519 = sub_1B71708(v1274, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1550;
  v517->m_Items[251] = (DataMasterBase_o *)v1274;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[251], (int32_t)v1274, v1275, v1276);
  v1277 = (UserCommandCodeMaster_o *)sub_1B71818(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v1277, 0LL);
  if ( v1277 )
  {
    v519 = sub_1B71708(v1277, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1550;
  v517->m_Items[252] = (DataMasterBase_o *)v1277;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[252], (int32_t)v1277, v1278, v1279);
  v1280 = (UserCommandCodeCollectionMaster_o *)sub_1B71818(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v1280, 0LL);
  if ( v1280 )
  {
    v519 = sub_1B71708(v1280, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1550;
  v517->m_Items[253] = (DataMasterBase_o *)v1280;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[253], (int32_t)v1280, v1281, v1282);
  v1283 = (UserServantCommandCodeMaster_o *)sub_1B71818(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v1283, 0LL);
  if ( v1283 )
  {
    v519 = sub_1B71708(v1283, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1550;
  v517->m_Items[254] = (DataMasterBase_o *)v1283;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[254], (int32_t)v1283, v1284, v1285);
  v1286 = (UserServantCommandCardMaster_o *)sub_1B71818(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v1286, 0LL);
  if ( v1286 )
  {
    v519 = sub_1B71708(v1286, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1550;
  v517->m_Items[255] = (DataMasterBase_o *)v1286;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[255], (int32_t)v1286, v1287, v1288);
  v1289 = (CommandCardRankParamMaster_o *)sub_1B71818(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v1289, 0LL);
  if ( v1289 )
  {
    v519 = sub_1B71708(v1289, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1550;
  v517->m_Items[256] = (DataMasterBase_o *)v1289;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[256], (int32_t)v1289, v1290, v1291);
  v1292 = (CommandCodeSkillMaster_o *)sub_1B71818(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v1292, 0LL);
  if ( v1292 )
  {
    v519 = sub_1B71708(v1292, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1550;
  v517->m_Items[257] = (DataMasterBase_o *)v1292;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[257], (int32_t)v1292, v1293, v1294);
  v1295 = (CommandCodeSkillReleaseMaster_o *)sub_1B71818(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v1295, 0LL);
  if ( v1295 )
  {
    v519 = sub_1B71708(v1295, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1550;
  v517->m_Items[258] = (DataMasterBase_o *)v1295;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[258], (int32_t)v1295, v1296, v1297);
  v1298 = (CommandCodeCommentMaster_o *)sub_1B71818(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v1298, 0LL);
  if ( v1298 )
  {
    v519 = sub_1B71708(v1298, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1550;
  v517->m_Items[259] = (DataMasterBase_o *)v1298;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[259], (int32_t)v1298, v1299, v1300);
  v1301 = (EventStatusMaster_o *)sub_1B71818(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v1301, 0LL);
  if ( v1301 )
  {
    v519 = sub_1B71708(v1301, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1550;
  v517->m_Items[260] = (DataMasterBase_o *)v1301;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[260], (int32_t)v1301, v1302, v1303);
  v1304 = (EventStatusQuestMaster_o *)sub_1B71818(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v1304, 0LL);
  if ( v1304 )
  {
    v519 = sub_1B71708(v1304, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1550;
  v517->m_Items[261] = (DataMasterBase_o *)v1304;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[261], (int32_t)v1304, v1305, v1306);
  v1307 = (CommonRestrictionMaster_o *)sub_1B71818(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v1307, 0LL);
  if ( v1307 )
  {
    v519 = sub_1B71708(v1307, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1550;
  v517->m_Items[262] = (DataMasterBase_o *)v1307;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[262], (int32_t)v1307, v1308, v1309);
  v1310 = (EventPointBuffMaster_o *)sub_1B71818(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v1310, 0LL);
  if ( v1310 )
  {
    v519 = sub_1B71708(v1310, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1550;
  v517->m_Items[263] = (DataMasterBase_o *)v1310;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[263], (int32_t)v1310, v1311, v1312);
  v1313 = (UserFollowMaster_o *)sub_1B71818(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v1313, 0LL);
  if ( v1313 )
  {
    v519 = sub_1B71708(v1313, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1550;
  v517->m_Items[264] = (DataMasterBase_o *)v1313;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[264], (int32_t)v1313, v1314, v1315);
  v1316 = (EventRewardGuideReleaseMaster_o *)sub_1B71818(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v1316, 0LL);
  if ( v1316 )
  {
    v519 = sub_1B71708(v1316, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1550;
  v517->m_Items[265] = (DataMasterBase_o *)v1316;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[265], (int32_t)v1316, v1317, v1318);
  v1319 = (NpcServantEquipMaster_o *)sub_1B71818(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v1319, 0LL);
  if ( v1319 )
  {
    v519 = sub_1B71708(v1319, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1550;
  v517->m_Items[266] = (DataMasterBase_o *)v1319;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[266], (int32_t)v1319, v1320, v1321);
  v1322 = (EventCampaignReleaseMaster_o *)sub_1B71818(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v1322, 0LL);
  if ( v1322 )
  {
    v519 = sub_1B71708(v1322, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1550;
  v517->m_Items[267] = (DataMasterBase_o *)v1322;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[267], (int32_t)v1322, v1323, v1324);
  v1325 = (ServantMaterialFolderMaster_o *)sub_1B71818(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v1325, 0LL);
  if ( v1325 )
  {
    v519 = sub_1B71708(v1325, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1550;
  v517->m_Items[268] = (DataMasterBase_o *)v1325;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[268], (int32_t)v1325, v1326, v1327);
  v1328 = (EventEquipSkillReleaseMaster_o *)sub_1B71818(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v1328, 0LL);
  if ( v1328 )
  {
    v519 = sub_1B71708(v1328, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1550;
  v517->m_Items[269] = (DataMasterBase_o *)v1328;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[269], (int32_t)v1328, v1329, v1330);
  v1331 = (EventPointActivityMaster_o *)sub_1B71818(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v1331, 0LL);
  if ( v1331 )
  {
    v519 = sub_1B71708(v1331, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1550;
  v517->m_Items[270] = (DataMasterBase_o *)v1331;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[270], (int32_t)v1331, v1332, v1333);
  v1334 = (FunctionCategoryMaster_o *)sub_1B71818(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v1334, 0LL);
  if ( v1334 )
  {
    v519 = sub_1B71708(v1334, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1550;
  v517->m_Items[271] = (DataMasterBase_o *)v1334;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[271], (int32_t)v1334, v1335, v1336);
  v1337 = (QuestPickupMaster_o *)sub_1B71818(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v1337, 0LL);
  if ( v1337 )
  {
    v519 = sub_1B71708(v1337, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1550;
  v517->m_Items[272] = (DataMasterBase_o *)v1337;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[272], (int32_t)v1337, v1338, v1339);
  v1340 = (EventUiMaster_o *)sub_1B71818(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v1340, 0LL);
  if ( v1340 )
  {
    v519 = sub_1B71708(v1340, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1550;
  v517->m_Items[273] = (DataMasterBase_o *)v1340;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[273], (int32_t)v1340, v1341, v1342);
  v1343 = (EventUiReleaseMaster_o *)sub_1B71818(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v1343, 0LL);
  if ( v1343 )
  {
    v519 = sub_1B71708(v1343, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1550;
  v517->m_Items[274] = (DataMasterBase_o *)v1343;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[274], (int32_t)v1343, v1344, v1345);
  v1346 = (EventUiValueMaster_o *)sub_1B71818(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v1346, 0LL);
  if ( v1346 )
  {
    v519 = sub_1B71708(v1346, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1550;
  v517->m_Items[275] = (DataMasterBase_o *)v1346;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[275], (int32_t)v1346, v1347, v1348);
  v1349 = (EventConquestRewardMaster_o *)sub_1B71818(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v1349, 0LL);
  if ( v1349 )
  {
    v519 = sub_1B71708(v1349, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1550;
  v517->m_Items[276] = (DataMasterBase_o *)v1349;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[276], (int32_t)v1349, v1350, v1351);
  v1352 = (NpcFollowerReleaseMaster_o *)sub_1B71818(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v1352, 0LL);
  if ( v1352 )
  {
    v519 = sub_1B71708(v1352, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1550;
  v517->m_Items[277] = (DataMasterBase_o *)v1352;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[277], (int32_t)v1352, v1353, v1354);
  v1355 = (EventBonusFilterMaster_o *)sub_1B71818(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v1355, 0LL);
  if ( v1355 )
  {
    v519 = sub_1B71708(v1355, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1550;
  v517->m_Items[278] = (DataMasterBase_o *)v1355;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[278], (int32_t)v1355, v1356, v1357);
  v1358 = (EventBonusFilterGroupInfoMaster_o *)sub_1B71818(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v1358, 0LL);
  if ( v1358 )
  {
    v519 = sub_1B71708(v1358, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1550;
  v517->m_Items[279] = (DataMasterBase_o *)v1358;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[279], (int32_t)v1358, v1359, v1360);
  v1361 = (EventBonusFilterGroupMemberMaster_o *)sub_1B71818(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v1361, 0LL);
  if ( v1361 )
  {
    v519 = sub_1B71708(v1361, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1550;
  v517->m_Items[280] = (DataMasterBase_o *)v1361;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[280], (int32_t)v1361, v1362, v1363);
  v1364 = (UserGachaExtraCountMaster_o *)sub_1B71818(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v1364, 0LL);
  if ( v1364 )
  {
    v519 = sub_1B71708(v1364, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1550;
  v517->m_Items[281] = (DataMasterBase_o *)v1364;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[281], (int32_t)v1364, v1365, v1366);
  v1367 = (PrivilegeMaster_o *)sub_1B71818(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v1367, 0LL);
  if ( v1367 )
  {
    v519 = sub_1B71708(v1367, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1550;
  v517->m_Items[282] = (DataMasterBase_o *)v1367;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[282], (int32_t)v1367, v1368, v1369);
  v1370 = (UserPrivilegeMaster_o *)sub_1B71818(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v1370, 0LL);
  if ( v1370 )
  {
    v519 = sub_1B71708(v1370, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1550;
  v517->m_Items[283] = (DataMasterBase_o *)v1370;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[283], (int32_t)v1370, v1371, v1372);
  v1373 = (UserQuestRouteMaster_o *)sub_1B71818(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v1373, 0LL);
  if ( v1373 )
  {
    v519 = sub_1B71708(v1373, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1550;
  v517->m_Items[284] = (DataMasterBase_o *)v1373;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[284], (int32_t)v1373, v1374, v1375);
  v1376 = (EventBossStatusUiMaster_o *)sub_1B71818(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v1376, 0LL);
  if ( v1376 )
  {
    v519 = sub_1B71708(v1376, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1550;
  v517->m_Items[285] = (DataMasterBase_o *)v1376;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[285], (int32_t)v1376, v1377, v1378);
  v1379 = (CommonReleaseMaster_o *)sub_1B71818(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v1379, 0LL);
  if ( v1379 )
  {
    v519 = sub_1B71708(v1379, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1550;
  v517->m_Items[286] = (DataMasterBase_o *)v1379;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[286], (int32_t)v1379, v1380, v1381);
  v1382 = (QuestSpotReleaseMaster_o *)sub_1B71818(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v1382, 0LL);
  if ( v1382 )
  {
    v519 = sub_1B71708(v1382, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1550;
  v517->m_Items[287] = (DataMasterBase_o *)v1382;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[287], (int32_t)v1382, v1383, v1384);
  v1385 = (VoiceMaterialCondMaster_o *)sub_1B71818(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v1385, 0LL);
  if ( v1385 )
  {
    v519 = sub_1B71708(v1385, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1550;
  v517->m_Items[288] = (DataMasterBase_o *)v1385;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[288], (int32_t)v1385, v1386, v1387);
  v1388 = (ClassRelationOverwriteMaster_o *)sub_1B71818(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v1388, 0LL);
  if ( v1388 )
  {
    v519 = sub_1B71708(v1388, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1550;
  v517->m_Items[289] = (DataMasterBase_o *)v1388;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[289], (int32_t)v1388, v1389, v1390);
  v1391 = (EventGroupMaster_o *)sub_1B71818(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v1391, 0LL);
  if ( v1391 )
  {
    v519 = sub_1B71708(v1391, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1550;
  v517->m_Items[290] = (DataMasterBase_o *)v1391;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[290], (int32_t)v1391, v1392, v1393);
  v1394 = (TotalBoxGachaMaster_o *)sub_1B71818(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v1394, 0LL);
  if ( v1394 )
  {
    v519 = sub_1B71708(v1394, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1550;
  v517->m_Items[291] = (DataMasterBase_o *)v1394;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[291], (int32_t)v1394, v1395, v1396);
  v1397 = (ServantTreasureDeviceDamageMaster_o *)sub_1B71818(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v1397, 0LL);
  if ( v1397 )
  {
    v519 = sub_1B71708(v1397, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1550;
  v517->m_Items[292] = (DataMasterBase_o *)v1397;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[292], (int32_t)v1397, v1398, v1399);
  v1400 = (UserEventServantFatigueMaster_o *)sub_1B71818(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v1400, 0LL);
  if ( v1400 )
  {
    v519 = sub_1B71708(v1400, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1550;
  v517->m_Items[293] = (DataMasterBase_o *)v1400;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[293], (int32_t)v1400, v1401, v1402);
  v1403 = (EventRewardBgMaster_o *)sub_1B71818(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v1403, 0LL);
  if ( v1403 )
  {
    v519 = sub_1B71708(v1403, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1550;
  v517->m_Items[294] = (DataMasterBase_o *)v1403;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[294], (int32_t)v1403, v1404, v1405);
  v1406 = (EventFatigueRecoveryMaster_o *)sub_1B71818(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v1406, 0LL);
  if ( v1406 )
  {
    v519 = sub_1B71708(v1406, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1550;
  v517->m_Items[295] = (DataMasterBase_o *)v1406;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[295], (int32_t)v1406, v1407, v1408);
  v1409 = (EventBoostItemUsedMaster_o *)sub_1B71818(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v1409, 0LL);
  if ( v1409 )
  {
    v519 = sub_1B71708(v1409, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1550;
  v517->m_Items[296] = (DataMasterBase_o *)v1409;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[296], (int32_t)v1409, v1410, v1411);
  v1412 = (StatusEffectPosOverwriteMaster_o *)sub_1B71818(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v1412, 0LL);
  if ( v1412 )
  {
    v519 = sub_1B71708(v1412, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1550;
  v517->m_Items[297] = (DataMasterBase_o *)v1412;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[297], (int32_t)v1412, v1413, v1414);
  v1415 = (QuestPhaseDetailAddMaster_o *)sub_1B71818(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v1415, 0LL);
  if ( v1415 )
  {
    v519 = sub_1B71708(v1415, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1550;
  v517->m_Items[298] = (DataMasterBase_o *)v1415;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[298], (int32_t)v1415, v1416, v1417);
  v1418 = (VoiceClosedMessageMaster_o *)sub_1B71818(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v1418, 0LL);
  if ( v1418 )
  {
    v519 = sub_1B71708(v1418, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1550;
  v517->m_Items[299] = (DataMasterBase_o *)v1418;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[299], (int32_t)v1418, v1419, v1420);
  v1421 = (ReprintStageMaster_o *)sub_1B71818(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v1421, 0LL);
  if ( v1421 )
  {
    v519 = sub_1B71708(v1421, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1550;
  v517->m_Items[300] = (DataMasterBase_o *)v1421;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[300], (int32_t)v1421, v1422, v1423);
  v1424 = (UserCombineExpMaster_o *)sub_1B71818(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v1424, 0LL);
  if ( v1424 )
  {
    v519 = sub_1B71708(v1424, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1550;
  v517->m_Items[301] = (DataMasterBase_o *)v1424;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[301], (int32_t)v1424, v1425, v1426);
  v1427 = (EventBoardGameCellMaster_o *)sub_1B71818(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v1427, 0LL);
  if ( v1427 )
  {
    v519 = sub_1B71708(v1427, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1550;
  v517->m_Items[302] = (DataMasterBase_o *)v1427;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[302], (int32_t)v1427, v1428, v1429);
  v1430 = (EventBoardGameTokenMaster_o *)sub_1B71818(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v1430, 0LL);
  if ( v1430 )
  {
    v519 = sub_1B71708(v1430, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1550;
  v517->m_Items[303] = (DataMasterBase_o *)v1430;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[303], (int32_t)v1430, v1431, v1432);
  v1433 = (EventBoardGameTokenRewardMaster_o *)sub_1B71818(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v1433, 0LL);
  if ( v1433 )
  {
    v519 = sub_1B71708(v1433, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1550;
  v517->m_Items[304] = (DataMasterBase_o *)v1433;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[304], (int32_t)v1433, v1434, v1435);
  v1436 = (UserEventBoardGameTokenMaster_o *)sub_1B71818(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v1436, 0LL);
  if ( v1436 )
  {
    v519 = sub_1B71708(v1436, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1550;
  v517->m_Items[305] = (DataMasterBase_o *)v1436;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[305], (int32_t)v1436, v1437, v1438);
  v1439 = (ServantAnimationOverwriteMaster_o *)sub_1B71818(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v1439, 0LL);
  if ( v1439 )
  {
    v519 = sub_1B71708(v1439, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1550;
  v517->m_Items[306] = (DataMasterBase_o *)v1439;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[306], (int32_t)v1439, v1440, v1441);
  v1442 = (OpeningMovieMaster_o *)sub_1B71818(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v1442, 0LL);
  if ( v1442 )
  {
    v519 = sub_1B71708(v1442, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1550;
  v517->m_Items[307] = (DataMasterBase_o *)v1442;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[307], (int32_t)v1442, v1443, v1444);
  v1445 = (ServantLimitSpoilerProtectionMaster_o *)sub_1B71818(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v1445, 0LL);
  if ( v1445 )
  {
    v519 = sub_1B71708(v1445, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1550;
  v517->m_Items[308] = (DataMasterBase_o *)v1445;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[308], (int32_t)v1445, v1446, v1447);
  v1448 = (PickupUserFollowerMaster_o *)sub_1B71818(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v1448, 0LL);
  if ( v1448 )
  {
    v519 = sub_1B71708(v1448, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1550;
  v517->m_Items[309] = (DataMasterBase_o *)v1448;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[309], (int32_t)v1448, v1449, v1450);
  v1451 = (ServantCollectionMaster_o *)sub_1B71818(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v1451, 0LL);
  if ( v1451 )
  {
    v519 = sub_1B71708(v1451, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1550;
  v517->m_Items[310] = (DataMasterBase_o *)v1451;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[310], (int32_t)v1451, v1452, v1453);
  v1454 = (GachaBehaviorMaster_o *)sub_1B71818(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v1454, 0LL);
  if ( v1454 )
  {
    v519 = sub_1B71708(v1454, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1550;
  v517->m_Items[311] = (DataMasterBase_o *)v1454;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[311], (int32_t)v1454, v1455, v1456);
  v1457 = (EventQuestCooltimeMaster_o *)sub_1B71818(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v1457, 0LL);
  if ( v1457 )
  {
    v519 = sub_1B71708(v1457, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1550;
  v517->m_Items[312] = (DataMasterBase_o *)v1457;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[312], (int32_t)v1457, v1458, v1459);
  v1460 = (UserEventQuestCooltimeMaster_o *)sub_1B71818(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v1460, 0LL);
  if ( v1460 )
  {
    v519 = sub_1B71708(v1460, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1550;
  v517->m_Items[313] = (DataMasterBase_o *)v1460;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[313], (int32_t)v1460, v1461, v1462);
  v1463 = (BoostMaster_o *)sub_1B71818(BoostMaster_TypeInfo);
  BoostMaster___ctor(v1463, 0LL);
  if ( v1463 )
  {
    v519 = sub_1B71708(v1463, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1550;
  v517->m_Items[314] = (DataMasterBase_o *)v1463;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[314], (int32_t)v1463, v1464, v1465);
  v1466 = (WarBoardMaster_o *)sub_1B71818(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v1466, 0LL);
  if ( v1466 )
  {
    v519 = sub_1B71708(v1466, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1550;
  v517->m_Items[315] = (DataMasterBase_o *)v1466;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[315], (int32_t)v1466, v1467, v1468);
  v1469 = (WarBoardSquareMaster_o *)sub_1B71818(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v1469, 0LL);
  if ( v1469 )
  {
    v519 = sub_1B71708(v1469, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1550;
  v517->m_Items[316] = (DataMasterBase_o *)v1469;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[316], (int32_t)v1469, v1470, v1471);
  v1472 = (WarBoardRoadMaster_o *)sub_1B71818(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v1472, 0LL);
  if ( v1472 )
  {
    v519 = sub_1B71708(v1472, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1550;
  v517->m_Items[317] = (DataMasterBase_o *)v1472;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[317], (int32_t)v1472, v1473, v1474);
  v1475 = (WarBoardStageMaster_o *)sub_1B71818(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v1475, 0LL);
  if ( v1475 )
  {
    v519 = sub_1B71708(v1475, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1550;
  v517->m_Items[318] = (DataMasterBase_o *)v1475;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[318], (int32_t)v1475, v1476, v1477);
  v1478 = (WarBoardActionPointMaster_o *)sub_1B71818(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v1478, 0LL);
  if ( v1478 )
  {
    v519 = sub_1B71708(v1478, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1550;
  v517->m_Items[319] = (DataMasterBase_o *)v1478;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[319], (int32_t)v1478, v1479, v1480);
  v1481 = (WarBoardActionTrendMaster_o *)sub_1B71818(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v1481, 0LL);
  if ( v1481 )
  {
    v519 = sub_1B71708(v1481, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1550;
  v517->m_Items[320] = (DataMasterBase_o *)v1481;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[320], (int32_t)v1481, v1482, v1483);
  v1484 = (WarBoardTacticalTrendMaster_o *)sub_1B71818(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v1484, 0LL);
  if ( v1484 )
  {
    v519 = sub_1B71708(v1484, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1550;
  v517->m_Items[321] = (DataMasterBase_o *)v1484;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[321], (int32_t)v1484, v1485, v1486);
  v1487 = (WarBoardStageLayoutMaster_o *)sub_1B71818(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v1487, 0LL);
  if ( v1487 )
  {
    v519 = sub_1B71708(v1487, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1550;
  v517->m_Items[322] = (DataMasterBase_o *)v1487;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[322], (int32_t)v1487, v1488, v1489);
  v1490 = (WarBoardStageNpcMaster_o *)sub_1B71818(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v1490, 0LL);
  if ( v1490 )
  {
    v519 = sub_1B71708(v1490, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1550;
  v517->m_Items[323] = (DataMasterBase_o *)v1490;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[323], (int32_t)v1490, v1491, v1492);
  v1493 = (WarBoardStageWallMaster_o *)sub_1B71818(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v1493, 0LL);
  if ( v1493 )
  {
    v519 = sub_1B71708(v1493, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1550;
  v517->m_Items[324] = (DataMasterBase_o *)v1493;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[324], (int32_t)v1493, v1494, v1495);
  v1496 = (WarBoardAIMaster_o *)sub_1B71818(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v1496, 0LL);
  if ( v1496 )
  {
    v519 = sub_1B71708(v1496, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1550;
  v517->m_Items[325] = (DataMasterBase_o *)v1496;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[325], (int32_t)v1496, v1497, v1498);
  v1499 = (WarBoardRatingBaseMaster_o *)sub_1B71818(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v1499, 0LL);
  if ( v1499 )
  {
    v519 = sub_1B71708(v1499, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1550;
  v517->m_Items[326] = (DataMasterBase_o *)v1499;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[326], (int32_t)v1499, v1500, v1501);
  v1502 = (WarBoardRatingOffsetMaster_o *)sub_1B71818(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v1502, 0LL);
  if ( v1502 )
  {
    v519 = sub_1B71708(v1502, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1550;
  v517->m_Items[327] = (DataMasterBase_o *)v1502;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[327], (int32_t)v1502, v1503, v1504);
  v1505 = (WarBoardItemMaster_o *)sub_1B71818(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v1505, 0LL);
  if ( v1505 )
  {
    v519 = sub_1B71708(v1505, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1550;
  v517->m_Items[328] = (DataMasterBase_o *)v1505;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[328], (int32_t)v1505, v1506, v1507);
  v1508 = (WarBoardTreasureMaster_o *)sub_1B71818(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v1508, 0LL);
  if ( v1508 )
  {
    v519 = sub_1B71708(v1508, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1550;
  v517->m_Items[329] = (DataMasterBase_o *)v1508;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[329], (int32_t)v1508, v1509, v1510);
  v1511 = (WarBoardQuestMaster_o *)sub_1B71818(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v1511, 0LL);
  if ( v1511 )
  {
    v519 = sub_1B71708(v1511, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1550;
  v517->m_Items[330] = (DataMasterBase_o *)v1511;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[330], (int32_t)v1511, v1512, v1513);
  v1514 = (WarBoardDataMaster_o *)sub_1B71818(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v1514, 0LL);
  if ( v1514 )
  {
    v519 = sub_1B71708(v1514, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1550;
  v517->m_Items[331] = (DataMasterBase_o *)v1514;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[331], (int32_t)v1514, v1515, v1516);
  v1517 = (WarBoardIndividualityClassMaster_o *)sub_1B71818(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v1517, 0LL);
  if ( v1517 )
  {
    v519 = sub_1B71708(v1517, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1550;
  v517->m_Items[332] = (DataMasterBase_o *)v1517;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[332], (int32_t)v1517, v1518, v1519);
  v1520 = (WarBoardActionTrendConditionMaster_o *)sub_1B71818(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v1520, 0LL);
  if ( v1520 )
  {
    v519 = sub_1B71708(v1520, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1550;
  v517->m_Items[333] = (DataMasterBase_o *)v1520;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[333], (int32_t)v1520, v1521, v1522);
  v1523 = (WarBoardActionPointClassMaster_o *)sub_1B71818(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v1523, 0LL);
  if ( v1523 )
  {
    v519 = sub_1B71708(v1523, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1550;
  v517->m_Items[334] = (DataMasterBase_o *)v1523;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[334], (int32_t)v1523, v1524, v1525);
  v1526 = (EventPanelMapMaster_o *)sub_1B71818(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v1526, 0LL);
  if ( v1526 )
  {
    v519 = sub_1B71708(v1526, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1550;
  v517->m_Items[335] = (DataMasterBase_o *)v1526;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[335], (int32_t)v1526, v1527, v1528);
  v1529 = (EventPanelMapDetailMaster_o *)sub_1B71818(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v1529, 0LL);
  if ( v1529 )
  {
    v519 = sub_1B71708(v1529, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1550;
  v517->m_Items[336] = (DataMasterBase_o *)v1529;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[336], (int32_t)v1529, v1530, v1531);
  v1532 = (EventPanelSpotMaster_o *)sub_1B71818(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v1532, 0LL);
  if ( v1532 )
  {
    v519 = sub_1B71708(v1532, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1550;
  v517->m_Items[337] = (DataMasterBase_o *)v1532;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[337], (int32_t)v1532, v1533, v1534);
  v1535 = (EventPanelScanMaster_o *)sub_1B71818(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v1535, 0LL);
  if ( v1535 )
  {
    v519 = sub_1B71708(v1535, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1550;
  v517->m_Items[338] = (DataMasterBase_o *)v1535;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[338], (int32_t)v1535, v1536, v1537);
  v1538 = (CommonConsumeMaster_o *)sub_1B71818(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v1538, 0LL);
  if ( v1538 )
  {
    v519 = sub_1B71708(v1538, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1550;
  v517->m_Items[339] = (DataMasterBase_o *)v1538;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[339], (int32_t)v1538, v1539, v1540);
  v1541 = (UserEventMapMaster_o *)sub_1B71818(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v1541, 0LL);
  if ( v1541 )
  {
    v519 = sub_1B71708(v1541, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1550;
  v517->m_Items[340] = (DataMasterBase_o *)v1541;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[340], (int32_t)v1541, v1542, v1543);
  v1544 = (UserEventSpotMaster_o *)sub_1B71818(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v1544, 0LL);
  if ( v1544 )
  {
    v519 = sub_1B71708(v1544, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1550;
  v517->m_Items[341] = (DataMasterBase_o *)v1544;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[341], (int32_t)v1544, v1545, v1546);
  v1547 = (WarGroupMaster_o *)sub_1B71818(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v1547, 0LL);
  if ( v1547 )
  {
    v519 = sub_1B71708(v1547, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1550;
  v517->m_Items[342] = (DataMasterBase_o *)v1547;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[342], (int32_t)v1547, v1548, v1549);
  v1550 = (ServantLimitImageMaster_o *)sub_1B71818(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v1550, 0LL);
  if ( v1550 )
  {
    v519 = sub_1B71708(v1550, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1550;
  v517->m_Items[343] = (DataMasterBase_o *)v1550;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[343], (int32_t)v1550, v1551, v1552);
  v1553 = (FriendshipQuestDialogInfoMaster_o *)sub_1B71818(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v1553, 0LL);
  if ( v1553 )
  {
    v519 = sub_1B71708(v1553, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1550;
  v517->m_Items[344] = (DataMasterBase_o *)v1553;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[344], (int32_t)v1553, v1554, v1555);
  v1556 = (QuestRestrictionInfoMaster_o *)sub_1B71818(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v1556, 0LL);
  if ( v1556 )
  {
    v519 = sub_1B71708(v1556, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1550;
  v517->m_Items[345] = (DataMasterBase_o *)v1556;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[345], (int32_t)v1556, v1557, v1558);
  v1559 = (AssistMaster_o *)sub_1B71818(AssistMaster_TypeInfo);
  AssistMaster___ctor(v1559, 0LL);
  if ( v1559 )
  {
    v519 = sub_1B71708(v1559, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1550;
  v517->m_Items[346] = (DataMasterBase_o *)v1559;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[346], (int32_t)v1559, v1560, v1561);
  v1562 = (WarBoardEffectMaster_o *)sub_1B71818(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v1562, 0LL);
  if ( v1562 )
  {
    v519 = sub_1B71708(v1562, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1550;
  v517->m_Items[347] = (DataMasterBase_o *)v1562;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[347], (int32_t)v1562, v1563, v1564);
  v1565 = (WarBoardOnboardSkillMaster_o *)sub_1B71818(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v1565, 0LL);
  if ( v1565 )
  {
    v519 = sub_1B71708(v1565, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1550;
  v517->m_Items[348] = (DataMasterBase_o *)v1565;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[348], (int32_t)v1565, v1566, v1567);
  v1568 = (BeforeBirthDayMaster_o *)sub_1B71818(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v1568, 0LL);
  if ( v1568 )
  {
    v519 = sub_1B71708(v1568, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1550;
  v517->m_Items[349] = (DataMasterBase_o *)v1568;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[349], (int32_t)v1568, v1569, v1570);
  v1571 = (LoginQuestMaster_o *)sub_1B71818(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v1571, 0LL);
  if ( v1571 )
  {
    v519 = sub_1B71708(v1571, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1550;
  v517->m_Items[350] = (DataMasterBase_o *)v1571;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[350], (int32_t)v1571, v1572, v1573);
  v1574 = (EventCombineCostumeMaster_o *)sub_1B71818(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v1574, 0LL);
  if ( v1574 )
  {
    v519 = sub_1B71708(v1574, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1550;
  v517->m_Items[351] = (DataMasterBase_o *)v1574;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[351], (int32_t)v1574, v1575, v1576);
  v1577 = (WarBoardStagePieceDetailMaster_o *)sub_1B71818(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v1577, 0LL);
  if ( v1577 )
  {
    v519 = sub_1B71708(v1577, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1550;
  v517->m_Items[352] = (DataMasterBase_o *)v1577;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[352], (int32_t)v1577, v1578, v1579);
  v1580 = (ServantTreasureDeviceAddMaster_o *)sub_1B71818(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v1580, 0LL);
  if ( v1580 )
  {
    v519 = sub_1B71708(v1580, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1550;
  v517->m_Items[353] = (DataMasterBase_o *)v1580;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[353], (int32_t)v1580, v1581, v1582);
  v1583 = (SkillAddMaster_o *)sub_1B71818(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v1583, 0LL);
  if ( v1583 )
  {
    v519 = sub_1B71708(v1583, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1550;
  v517->m_Items[354] = (DataMasterBase_o *)v1583;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[354], (int32_t)v1583, v1584, v1585);
  v1586 = (ServantLvDetailMaster_o *)sub_1B71818(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v1586, 0LL);
  if ( v1586 )
  {
    v519 = sub_1B71708(v1586, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1550;
  v517->m_Items[355] = (DataMasterBase_o *)v1586;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[355], (int32_t)v1586, v1587, v1588);
  v1589 = (GachaAppendMaster_o *)sub_1B71818(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v1589, 0LL);
  if ( v1589 )
  {
    v519 = sub_1B71708(v1589, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1550;
  v517->m_Items[356] = (DataMasterBase_o *)v1589;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[356], (int32_t)v1589, v1590, v1591);
  v1592 = (UserGachaDrawLogMaster_o *)sub_1B71818(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v1592, 0LL);
  if ( v1592 )
  {
    v519 = sub_1B71708(v1592, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1550;
  v517->m_Items[357] = (DataMasterBase_o *)v1592;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[357], (int32_t)v1592, v1593, v1594);
  v1595 = (ServantAppendPassiveSkillMaster_o *)sub_1B71818(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v1595, 0LL);
  if ( v1595 )
  {
    v519 = sub_1B71708(v1595, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1550;
  v517->m_Items[358] = (DataMasterBase_o *)v1595;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[358], (int32_t)v1595, v1596, v1597);
  v1598 = (UserServantAppendPassiveSkillMaster_o *)sub_1B71818(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v1598, 0LL);
  if ( v1598 )
  {
    v519 = sub_1B71708(v1598, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1550;
  v517->m_Items[359] = (DataMasterBase_o *)v1598;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[359], (int32_t)v1598, v1599, v1600);
  v1601 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1B71818(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v1601, 0LL);
  if ( v1601 )
  {
    v519 = sub_1B71708(v1601, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1550;
  v517->m_Items[360] = (DataMasterBase_o *)v1601;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[360], (int32_t)v1601, v1602, v1603);
  v1604 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1B71818(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v1604, 0LL);
  if ( v1604 )
  {
    v519 = sub_1B71708(v1604, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1550;
  v517->m_Items[361] = (DataMasterBase_o *)v1604;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[361], (int32_t)v1604, v1605, v1606);
  v1607 = (CombineAppendPassiveSkillMaster_o *)sub_1B71818(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v1607, 0LL);
  if ( v1607 )
  {
    v519 = sub_1B71708(v1607, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1550;
  v517->m_Items[362] = (DataMasterBase_o *)v1607;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[362], (int32_t)v1607, v1608, v1609);
  v1610 = (SvtCoinMaster_o *)sub_1B71818(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v1610, 0LL);
  if ( v1610 )
  {
    v519 = sub_1B71708(v1610, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1550;
  v517->m_Items[363] = (DataMasterBase_o *)v1610;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[363], (int32_t)v1610, v1611, v1612);
  v1613 = (UserSvtCoinMaster_o *)sub_1B71818(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v1613, 0LL);
  if ( v1613 )
  {
    v519 = sub_1B71708(v1613, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1550;
  v517->m_Items[364] = (DataMasterBase_o *)v1613;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[364], (int32_t)v1613, v1614, v1615);
  v1616 = (ServantAddMaster_o *)sub_1B71818(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v1616, 0LL);
  if ( v1616 )
  {
    v519 = sub_1B71708(v1616, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1550;
  v517->m_Items[365] = (DataMasterBase_o *)v1616;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[365], (int32_t)v1616, v1617, v1618);
  v1619 = (TreasureBoxMaster_o *)sub_1B71818(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v1619, 0LL);
  if ( v1619 )
  {
    v519 = sub_1B71708(v1619, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1550;
  v517->m_Items[366] = (DataMasterBase_o *)v1619;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[366], (int32_t)v1619, v1620, v1621);
  v1622 = (TreasureBoxGiftMaster_o *)sub_1B71818(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v1622, 0LL);
  if ( v1622 )
  {
    v519 = sub_1B71708(v1622, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1550;
  v517->m_Items[367] = (DataMasterBase_o *)v1622;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[367], (int32_t)v1622, v1623, v1624);
  v1625 = (TreasureBoxTalkMaster_o *)sub_1B71818(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v1625, 0LL);
  if ( v1625 )
  {
    v519 = sub_1B71708(v1625, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1550;
  v517->m_Items[368] = (DataMasterBase_o *)v1625;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[368], (int32_t)v1625, v1626, v1627);
  v1628 = (UserEventExpeditionMaster_o *)sub_1B71818(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v1628, 0LL);
  if ( v1628 )
  {
    v519 = sub_1B71708(v1628, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1550;
  v517->m_Items[369] = (DataMasterBase_o *)v1628;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[369], (int32_t)v1628, v1629, v1630);
  v1631 = (EventExpeditionMaster_o *)sub_1B71818(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v1631, 0LL);
  if ( v1631 )
  {
    v519 = sub_1B71708(v1631, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1550;
  v517->m_Items[370] = (DataMasterBase_o *)v1631;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[370], (int32_t)v1631, v1632, v1633);
  v1634 = (EventExpeditionPieceMaster_o *)sub_1B71818(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v1634, 0LL);
  if ( v1634 )
  {
    v519 = sub_1B71708(v1634, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1550;
  v517->m_Items[371] = (DataMasterBase_o *)v1634;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[371], (int32_t)v1634, v1635, v1636);
  v1637 = (EventRecipeMaster_o *)sub_1B71818(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v1637, 0LL);
  if ( v1637 )
  {
    v519 = sub_1B71708(v1637, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1550;
  v517->m_Items[372] = (DataMasterBase_o *)v1637;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[372], (int32_t)v1637, v1638, v1639);
  v1640 = (EventRecipeGiftMaster_o *)sub_1B71818(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v1640, 0LL);
  if ( v1640 )
  {
    v519 = sub_1B71708(v1640, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1550;
  v517->m_Items[373] = (DataMasterBase_o *)v1640;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[373], (int32_t)v1640, v1641, v1642);
  v1643 = (UserEventFortificationMaster_o *)sub_1B71818(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v1643, 0LL);
  if ( v1643 )
  {
    v519 = sub_1B71708(v1643, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1550;
  v517->m_Items[374] = (DataMasterBase_o *)v1643;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[374], (int32_t)v1643, v1644, v1645);
  v1646 = (EventFortificationMaster_o *)sub_1B71818(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v1646, 0LL);
  if ( v1646 )
  {
    v519 = sub_1B71708(v1646, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1550;
  v517->m_Items[375] = (DataMasterBase_o *)v1646;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[375], (int32_t)v1646, v1647, v1648);
  v1649 = (EventFortificationDetailMaster_o *)sub_1B71818(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v1649, 0LL);
  if ( v1649 )
  {
    v519 = sub_1B71708(v1649, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1550;
  v517->m_Items[376] = (DataMasterBase_o *)v1649;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[376], (int32_t)v1649, v1650, v1651);
  v1652 = (EventFortificationSvtMaster_o *)sub_1B71818(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v1652, 0LL);
  if ( v1652 )
  {
    v519 = sub_1B71708(v1652, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1550;
  v517->m_Items[377] = (DataMasterBase_o *)v1652;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[377], (int32_t)v1652, v1653, v1654);
  v1655 = (UserServantVoicePlayedMaster_o *)sub_1B71818(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v1655, 0LL);
  if ( v1655 )
  {
    v519 = sub_1B71708(v1655, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1550;
  v517->m_Items[378] = (DataMasterBase_o *)v1655;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[378], (int32_t)v1655, v1656, v1657);
  v1658 = (UpdateProfileDialogInfoMaster_o *)sub_1B71818(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v1658, 0LL);
  if ( v1658 )
  {
    v519 = sub_1B71708(v1658, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1550;
  v517->m_Items[379] = (DataMasterBase_o *)v1658;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[379], (int32_t)v1658, v1659, v1660);
  v1661 = (SvtMaterialTdMaster_o *)sub_1B71818(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v1661, 0LL);
  if ( v1661 )
  {
    v519 = sub_1B71708(v1661, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1550;
  v517->m_Items[380] = (DataMasterBase_o *)v1661;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[380], (int32_t)v1661, v1662, v1663);
  v1664 = (BattleMasterImageMaster_o *)sub_1B71818(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v1664, 0LL);
  if ( v1664 )
  {
    v519 = sub_1B71708(v1664, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1550;
  v517->m_Items[381] = (DataMasterBase_o *)v1664;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[381], (int32_t)v1664, v1665, v1666);
  v1667 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1B71818(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v1667, 0LL);
  if ( v1667 )
  {
    v519 = sub_1B71708(v1667, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1550;
  v517->m_Items[382] = (DataMasterBase_o *)v1667;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[382], (int32_t)v1667, v1668, v1669);
  v1670 = (UserEventRandomMissionMaster_o *)sub_1B71818(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v1670, 0LL);
  if ( v1670 )
  {
    v519 = sub_1B71708(v1670, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1550;
  v517->m_Items[383] = (DataMasterBase_o *)v1670;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[383], (int32_t)v1670, v1671, v1672);
  v1673 = (EventProgressValueMaster_o *)sub_1B71818(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v1673, 0LL);
  if ( v1673 )
  {
    v519 = sub_1B71708(v1673, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1550;
  v517->m_Items[384] = (DataMasterBase_o *)v1673;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[384], (int32_t)v1673, v1674, v1675);
  v1676 = (SvtMultiPortraitMaster_o *)sub_1B71818(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v1676, 0LL);
  if ( v1676 )
  {
    v519 = sub_1B71708(v1676, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1550;
  v517->m_Items[385] = (DataMasterBase_o *)v1676;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[385], (int32_t)v1676, v1677, v1678);
  v1679 = (EventRandomMissionMaster_o *)sub_1B71818(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v1679, 0LL);
  if ( v1679 )
  {
    v519 = sub_1B71708(v1679, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1550;
  v517->m_Items[386] = (DataMasterBase_o *)v1679;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[386], (int32_t)v1679, v1680, v1681);
  v1682 = (UserGachaHistoryMaster_o *)sub_1B71818(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v1682, 0LL);
  if ( v1682 )
  {
    v519 = sub_1B71708(v1682, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1550;
  v517->m_Items[387] = (DataMasterBase_o *)v1682;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[387], (int32_t)v1682, v1683, v1684);
  v1685 = (UserCoinRoomMaster_o *)sub_1B71818(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v1685, 0LL);
  if ( v1685 )
  {
    v519 = sub_1B71708(v1685, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1550;
  v517->m_Items[388] = (DataMasterBase_o *)v1685;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[388], (int32_t)v1685, v1686, v1687);
  v1688 = (EventBuddyPointMaster_o *)sub_1B71818(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v1688, 0LL);
  if ( v1688 )
  {
    v519 = sub_1B71708(v1688, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1550;
  v517->m_Items[389] = (DataMasterBase_o *)v1688;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[389], (int32_t)v1688, v1689, v1690);
  v1691 = (EventServantPointRankMaster_o *)sub_1B71818(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v1691, 0LL);
  if ( v1691 )
  {
    v519 = sub_1B71708(v1691, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1550;
  v517->m_Items[390] = (DataMasterBase_o *)v1691;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[390], (int32_t)v1691, v1692, v1693);
  v1694 = (UserEventServantPointMaster_o *)sub_1B71818(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v1694, 0LL);
  if ( v1694 )
  {
    v519 = sub_1B71708(v1694, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1550;
  v517->m_Items[391] = (DataMasterBase_o *)v1694;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[391], (int32_t)v1694, v1695, v1696);
  v1697 = (FieldMotionMaster_o *)sub_1B71818(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v1697, 0LL);
  if ( v1697 )
  {
    v519 = sub_1B71708(v1697, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1550;
  v517->m_Items[392] = (DataMasterBase_o *)v1697;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[392], (int32_t)v1697, v1698, v1699);
  v1700 = (UserDeleteReservationMaster_o *)sub_1B71818(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v1700, 0LL);
  if ( v1700 )
  {
    v519 = sub_1B71708(v1700, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1550;
  v517->m_Items[393] = (DataMasterBase_o *)v1700;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[393], (int32_t)v1700, v1701, v1702);
  v1703 = (ServantScriptMultipleMaster_o *)sub_1B71818(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v1703, 0LL);
  if ( v1703 )
  {
    v519 = sub_1B71708(v1703, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1550;
  v517->m_Items[394] = (DataMasterBase_o *)v1703;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[394], (int32_t)v1703, v1704, v1705);
  v1706 = (EquipAddMaster_o *)sub_1B71818(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v1706, 0LL);
  if ( v1706 )
  {
    v519 = sub_1B71708(v1706, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1550;
  v517->m_Items[395] = (DataMasterBase_o *)v1706;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[395], (int32_t)v1706, v1707, v1708);
  v1709 = (QuestReleaseOverwriteMaster_o *)sub_1B71818(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v1709, 0LL);
  if ( v1709 )
  {
    v519 = sub_1B71708(v1709, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1550;
  v517->m_Items[396] = (DataMasterBase_o *)v1709;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[396], (int32_t)v1709, v1710, v1711);
  v1712 = (UserEventAlloutBattleMaster_o *)sub_1B71818(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v1712, 0LL);
  if ( v1712 )
  {
    v519 = sub_1B71708(v1712, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1550;
  v517->m_Items[397] = (DataMasterBase_o *)v1712;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[397], (int32_t)v1712, v1713, v1714);
  v1715 = (QuestScriptMaterialNextMaster_o *)sub_1B71818(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v1715, 0LL);
  if ( v1715 )
  {
    v519 = sub_1B71708(v1715, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1550;
  v517->m_Items[398] = (DataMasterBase_o *)v1715;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[398], (int32_t)v1715, v1716, v1717);
  v1718 = (EventDiggingMaster_o *)sub_1B71818(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v1718, 0LL);
  if ( v1718 )
  {
    v519 = sub_1B71708(v1718, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1550;
  v517->m_Items[399] = (DataMasterBase_o *)v1718;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[399], (int32_t)v1718, v1719, v1720);
  v1721 = (EventDiggingBlockMaster_o *)sub_1B71818(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v1721, 0LL);
  if ( v1721 )
  {
    v519 = sub_1B71708(v1721, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1550;
  v517->m_Items[400] = (DataMasterBase_o *)v1721;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[400], (int32_t)v1721, v1722, v1723);
  v1724 = (EventDiggingRewardMaster_o *)sub_1B71818(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v1724, 0LL);
  if ( v1724 )
  {
    v519 = sub_1B71708(v1724, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1550;
  v517->m_Items[401] = (DataMasterBase_o *)v1724;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[401], (int32_t)v1724, v1725, v1726);
  v1727 = (UserEventDiggingMaster_o *)sub_1B71818(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v1727, 0LL);
  if ( v1727 )
  {
    v519 = sub_1B71708(v1727, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1550;
  v517->m_Items[402] = (DataMasterBase_o *)v1727;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[402], (int32_t)v1727, v1728, v1729);
  v1730 = (BattleMessageMaster_o *)sub_1B71818(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v1730, 0LL);
  if ( v1730 )
  {
    v519 = sub_1B71708(v1730, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1550;
  v517->m_Items[403] = (DataMasterBase_o *)v1730;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[403], (int32_t)v1730, v1731, v1732);
  v1733 = (BattleMessageGroupMaster_o *)sub_1B71818(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v1733, 0LL);
  if ( v1733 )
  {
    v519 = sub_1B71708(v1733, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1550;
  v517->m_Items[404] = (DataMasterBase_o *)v1733;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[404], (int32_t)v1733, v1734, v1735);
  v1736 = (UserNpcSvtRecordMaster_o *)sub_1B71818(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v1736, 0LL);
  if ( v1736 )
  {
    v519 = sub_1B71708(v1736, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1550;
  v517->m_Items[405] = (DataMasterBase_o *)v1736;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[405], (int32_t)v1736, v1737, v1738);
  v1739 = (BuffTypeDetailMaster_o *)sub_1B71818(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v1739, 0LL);
  if ( v1739 )
  {
    v519 = sub_1B71708(v1739, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1550;
  v517->m_Items[406] = (DataMasterBase_o *)v1739;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[406], (int32_t)v1739, v1740, v1741);
  v1742 = (WarBoardMessageMaster_o *)sub_1B71818(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v1742, 0LL);
  if ( v1742 )
  {
    v519 = sub_1B71708(v1742, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1550;
  v517->m_Items[407] = (DataMasterBase_o *)v1742;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[407], (int32_t)v1742, v1743, v1744);
  v1745 = (WarBoardPartySkillMaster_o *)sub_1B71818(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v1745, 0LL);
  if ( v1745 )
  {
    v519 = sub_1B71708(v1745, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1550;
  v517->m_Items[408] = (DataMasterBase_o *)v1745;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[408], (int32_t)v1745, v1746, v1747);
  v1748 = (WarBoardMessageScriptMaster_o *)sub_1B71818(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v1748, 0LL);
  if ( v1748 )
  {
    v519 = sub_1B71708(v1748, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1550;
  v517->m_Items[409] = (DataMasterBase_o *)v1748;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[409], (int32_t)v1748, v1749, v1750);
  v1751 = (WarQuestSelectionMaster_o *)sub_1B71818(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v1751, 0LL);
  if ( v1751 )
  {
    v519 = sub_1B71708(v1751, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1550;
  v517->m_Items[410] = (DataMasterBase_o *)v1751;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[410], (int32_t)v1751, v1752, v1753);
  v1754 = (WarBoardStageDetailMaster_o *)sub_1B71818(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v1754, 0LL);
  if ( v1754 )
  {
    v519 = sub_1B71708(v1754, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1550;
  v517->m_Items[411] = (DataMasterBase_o *)v1754;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[411], (int32_t)v1754, v1755, v1756);
  v1757 = (QuestScriptMaterialOverwriteMaster_o *)sub_1B71818(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v1757, 0LL);
  if ( v1757 )
  {
    v519 = sub_1B71708(v1757, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1550;
  v517->m_Items[412] = (DataMasterBase_o *)v1757;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[412], (int32_t)v1757, v1758, v1759);
  v1760 = (QuestScriptBranchMaterialMaster_o *)sub_1B71818(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v1760, 0LL);
  if ( v1760 )
  {
    v519 = sub_1B71708(v1760, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1550;
  v517->m_Items[413] = (DataMasterBase_o *)v1760;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[413], (int32_t)v1760, v1761, v1762);
  v1763 = (AdCheckPointMaster_o *)sub_1B71818(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v1763, 0LL);
  if ( v1763 )
  {
    v519 = sub_1B71708(v1763, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1550;
  v517->m_Items[414] = (DataMasterBase_o *)v1763;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[414], (int32_t)v1763, v1764, v1765);
  v1766 = (GiftDetailMaster_o *)sub_1B71818(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v1766, 0LL);
  if ( v1766 )
  {
    v519 = sub_1B71708(v1766, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1550;
  v517->m_Items[415] = (DataMasterBase_o *)v1766;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[415], (int32_t)v1766, v1767, v1768);
  v1769 = (CombineLimitGiftMaster_o *)sub_1B71818(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v1769, 0LL);
  if ( v1769 )
  {
    v519 = sub_1B71708(v1769, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1550;
  v517->m_Items[416] = (DataMasterBase_o *)v1769;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[416], (int32_t)v1769, v1770, v1771);
  v1772 = (EventCooltimeRewardMaster_o *)sub_1B71818(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v1772, 0LL);
  if ( v1772 )
  {
    v519 = sub_1B71708(v1772, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1550;
  v517->m_Items[417] = (DataMasterBase_o *)v1772;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[417], (int32_t)v1772, v1773, v1774);
  v1775 = (UserEventCooltimeRewardMaster_o *)sub_1B71818(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v1775, 0LL);
  if ( v1775 )
  {
    v519 = sub_1B71708(v1775, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1550;
  v517->m_Items[418] = (DataMasterBase_o *)v1775;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[418], (int32_t)v1775, v1776, v1777);
  v1778 = (ClassBoardBaseMaster_o *)sub_1B71818(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v1778, 0LL);
  if ( v1778 )
  {
    v519 = sub_1B71708(v1778, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1550;
  v517->m_Items[419] = (DataMasterBase_o *)v1778;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[419], (int32_t)v1778, v1779, v1780);
  v1781 = (ClassBoardLockMaster_o *)sub_1B71818(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v1781, 0LL);
  if ( v1781 )
  {
    v519 = sub_1B71708(v1781, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1550;
  v517->m_Items[420] = (DataMasterBase_o *)v1781;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[420], (int32_t)v1781, v1782, v1783);
  v1784 = (ClassBoardSquareMaster_o *)sub_1B71818(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v1784, 0LL);
  if ( v1784 )
  {
    v519 = sub_1B71708(v1784, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1550;
  v517->m_Items[421] = (DataMasterBase_o *)v1784;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[421], (int32_t)v1784, v1785, v1786);
  v1787 = (ClassBoardLineMaster_o *)sub_1B71818(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v1787, 0LL);
  if ( v1787 )
  {
    v519 = sub_1B71708(v1787, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1550;
  v517->m_Items[422] = (DataMasterBase_o *)v1787;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[422], (int32_t)v1787, v1788, v1789);
  v1790 = (UserClassBoardSquareMaster_o *)sub_1B71818(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v1790, 0LL);
  if ( v1790 )
  {
    v519 = sub_1B71708(v1790, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1550;
  v517->m_Items[423] = (DataMasterBase_o *)v1790;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[423], (int32_t)v1790, v1791, v1792);
  v1793 = (ServantCardAddMaster_o *)sub_1B71818(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v1793, 0LL);
  if ( v1793 )
  {
    v519 = sub_1B71708(v1793, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1550;
  v517->m_Items[424] = (DataMasterBase_o *)v1793;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[424], (int32_t)v1793, v1794, v1795);
  v1796 = (MapLayerMaster_o *)sub_1B71818(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v1796, 0LL);
  if ( v1796 )
  {
    v519 = sub_1B71708(v1796, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1550;
  v517->m_Items[425] = (DataMasterBase_o *)v1796;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[425], (int32_t)v1796, v1797, v1798);
  v1799 = (SpotLayerMaster_o *)sub_1B71818(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v1799, 0LL);
  if ( v1799 )
  {
    v519 = sub_1B71708(v1799, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1550;
  v517->m_Items[426] = (DataMasterBase_o *)v1799;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[426], (int32_t)v1799, v1800, v1801);
  v1802 = (MapGimmickLayerMaster_o *)sub_1B71818(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v1802, 0LL);
  if ( v1802 )
  {
    v519 = sub_1B71708(v1802, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1550;
  v517->m_Items[427] = (DataMasterBase_o *)v1802;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[427], (int32_t)v1802, v1803, v1804);
  v1805 = (EventDataLostBattleMaster_o *)sub_1B71818(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v1805, 0LL);
  if ( v1805 )
  {
    v519 = sub_1B71708(v1805, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1550;
  v517->m_Items[428] = (DataMasterBase_o *)v1805;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[428], (int32_t)v1805, v1806, v1807);
  v1808 = (EventDataLostBattleResetMaster_o *)sub_1B71818(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v1808, 0LL);
  if ( v1808 )
  {
    v519 = sub_1B71708(v1808, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1550;
  v517->m_Items[429] = (DataMasterBase_o *)v1808;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[429], (int32_t)v1808, v1809, v1810);
  v1811 = (UserEventDataLostMaster_o *)sub_1B71818(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v1811, 0LL);
  if ( v1811 )
  {
    v519 = sub_1B71708(v1811, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1550;
  v517->m_Items[430] = (DataMasterBase_o *)v1811;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[430], (int32_t)v1811, v1812, v1813);
  v1814 = (QuestHintMaster_o *)sub_1B71818(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v1814, 0LL);
  if ( v1814 )
  {
    v519 = sub_1B71708(v1814, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1550;
  v517->m_Items[431] = (DataMasterBase_o *)v1814;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[431], (int32_t)v1814, v1815, v1816);
  v1817 = (FuncTypeDetailMaster_o *)sub_1B71818(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v1817, 0LL);
  if ( v1817 )
  {
    v519 = sub_1B71708(v1817, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1550;
  v517->m_Items[432] = (DataMasterBase_o *)v1817;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[432], (int32_t)v1817, v1818, v1819);
  v1820 = (BuffConvertMaster_o *)sub_1B71818(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v1820, 0LL);
  if ( v1820 )
  {
    v519 = sub_1B71708(v1820, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1550;
  v517->m_Items[433] = (DataMasterBase_o *)v1820;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[433], (int32_t)v1820, v1821, v1822);
  v1823 = (SkillGroupMaster_o *)sub_1B71818(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v1823, 0LL);
  if ( v1823 )
  {
    v519 = sub_1B71708(v1823, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1550;
  v517->m_Items[434] = (DataMasterBase_o *)v1823;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[434], (int32_t)v1823, v1824, v1825);
  v1826 = (SkillGroupOverwriteMaster_o *)sub_1B71818(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v1826, 0LL);
  if ( v1826 )
  {
    v519 = sub_1B71708(v1826, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1550;
  v517->m_Items[435] = (DataMasterBase_o *)v1826;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[435], (int32_t)v1826, v1827, v1828);
  v1829 = (SkillIndividualityMaster_o *)sub_1B71818(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v1829, 0LL);
  if ( v1829 )
  {
    v519 = sub_1B71708(v1829, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1550;
  v517->m_Items[436] = (DataMasterBase_o *)v1829;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[436], (int32_t)v1829, v1830, v1831);
  v1832 = (RestrictionBaseMaster_o *)sub_1B71818(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v1832, 0LL);
  if ( v1832 )
  {
    v519 = sub_1B71708(v1832, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1550;
  v517->m_Items[437] = (DataMasterBase_o *)v1832;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[437], (int32_t)v1832, v1833, v1834);
  v1835 = (RestrictionSlotMaster_o *)sub_1B71818(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v1835, 0LL);
  if ( v1835 )
  {
    v519 = sub_1B71708(v1835, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1550;
  v517->m_Items[438] = (DataMasterBase_o *)v1835;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[438], (int32_t)v1835, v1836, v1837);
  v1838 = (RestrictionSlotDetailMaster_o *)sub_1B71818(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v1838, 0LL);
  if ( v1838 )
  {
    v519 = sub_1B71708(v1838, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1550;
  v517->m_Items[439] = (DataMasterBase_o *)v1838;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[439], (int32_t)v1838, v1839, v1840);
  v1841 = (RestrictionMessageMaster_o *)sub_1B71818(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v1841, 0LL);
  if ( v1841 )
  {
    v519 = sub_1B71708(v1841, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1550;
  v517->m_Items[440] = (DataMasterBase_o *)v1841;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[440], (int32_t)v1841, v1842, v1843);
  v1844 = (RestrictionWholeMaster_o *)sub_1B71818(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v1844, 0LL);
  if ( v1844 )
  {
    v519 = sub_1B71708(v1844, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1550;
  v517->m_Items[441] = (DataMasterBase_o *)v1844;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[441], (int32_t)v1844, v1845, v1846);
  v1847 = (FuncDispMaster_o *)sub_1B71818(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v1847, 0LL);
  if ( v1847 )
  {
    v519 = sub_1B71708(v1847, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1550;
  v517->m_Items[442] = (DataMasterBase_o *)v1847;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[442], (int32_t)v1847, v1848, v1849);
  v1850 = (ClassBoardCommandSpellMaster_o *)sub_1B71818(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v1850, 0LL);
  if ( v1850 )
  {
    v519 = sub_1B71708(v1850, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1550;
  v517->m_Items[443] = (DataMasterBase_o *)v1850;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[443], (int32_t)v1850, v1851, v1852);
  v1853 = (ClassBoardClassMaster_o *)sub_1B71818(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v1853, 0LL);
  if ( v1853 )
  {
    v519 = sub_1B71708(v1853, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1550;
  v517->m_Items[444] = (DataMasterBase_o *)v1853;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[444], (int32_t)v1853, v1854, v1855);
  v1856 = (EventCommandAssistMaster_o *)sub_1B71818(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v1856, 0LL);
  if ( v1856 )
  {
    v519 = sub_1B71708(v1856, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1550;
  v517->m_Items[445] = (DataMasterBase_o *)v1856;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[445], (int32_t)v1856, v1857, v1858);
  v1859 = (EventMissionGroupMaster_o *)sub_1B71818(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v1859, 0LL);
  if ( v1859 )
  {
    v519 = sub_1B71708(v1859, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1550;
  v517->m_Items[446] = (DataMasterBase_o *)v1859;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[446], (int32_t)v1859, v1860, v1861);
  v1862 = (CombineLimitReleaseMaster_o *)sub_1B71818(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v1862, 0LL);
  if ( v1862 )
  {
    v519 = sub_1B71708(v1862, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1550;
  v517->m_Items[447] = (DataMasterBase_o *)v1862;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[447], (int32_t)v1862, v1863, v1864);
  v1865 = (HeelPortraitMaster_o *)sub_1B71818(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v1865, 0LL);
  if ( v1865 )
  {
    v519 = sub_1B71708(v1865, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1550;
  v517->m_Items[448] = (DataMasterBase_o *)v1865;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[448], (int32_t)v1865, v1866, v1867);
  v1868 = (UserHeelPortraitMaster_o *)sub_1B71818(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v1868, 0LL);
  if ( v1868 )
  {
    v519 = sub_1B71708(v1868, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1550;
  v517->m_Items[449] = (DataMasterBase_o *)v1868;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[449], (int32_t)v1868, v1869, v1870);
  v1871 = (TreasureDeviceSequenceWeightMaster_o *)sub_1B71818(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v1871, 0LL);
  if ( v1871 )
  {
    v519 = sub_1B71708(v1871, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1550;
  v517->m_Items[450] = (DataMasterBase_o *)v1871;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[450], (int32_t)v1871, v1872, v1873);
  v1874 = (NpcServantFollowerIndividualityMaster_o *)sub_1B71818(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v1874, 0LL);
  if ( v1874 )
  {
    v519 = sub_1B71708(v1874, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1550;
  v517->m_Items[451] = (DataMasterBase_o *)v1874;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[451], (int32_t)v1874, v1875, v1876);
  v1877 = (GachaExtraGiftMaster_o *)sub_1B71818(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v1877, 0LL);
  if ( v1877 )
  {
    v519 = sub_1B71708(v1877, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1550;
  v517->m_Items[452] = (DataMasterBase_o *)v1877;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[452], (int32_t)v1877, v1878, v1879);
  v1880 = (EventMuralMaster_o *)sub_1B71818(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v1880, 0LL);
  if ( v1880 )
  {
    v519 = sub_1B71708(v1880, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1550;
  v517->m_Items[453] = (DataMasterBase_o *)v1880;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[453], (int32_t)v1880, v1881, v1882);
  v1883 = (ViewWaveEnemyMaster_o *)sub_1B71818(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v1883, 0LL);
  if ( v1883 )
  {
    v519 = sub_1B71708(v1883, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1550;
  v517->m_Items[454] = (DataMasterBase_o *)v1883;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[454], (int32_t)v1883, v1884, v1885);
  v1886 = (BlankEarthSpotNavimenuMaster_o *)sub_1B71818(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v1886, 0LL);
  if ( v1886 )
  {
    v519 = sub_1B71708(v1886, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1550;
  v517->m_Items[455] = (DataMasterBase_o *)v1886;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[455], (int32_t)v1886, v1887, v1888);
  v1889 = (BlankEarthGimmickMaster_o *)sub_1B71818(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v1889, 0LL);
  if ( v1889 )
  {
    v519 = sub_1B71708(v1889, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1550;
  v517->m_Items[456] = (DataMasterBase_o *)v1889;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[456], (int32_t)v1889, v1890, v1891);
  v1892 = (TerminalOverwriteMaster_o *)sub_1B71818(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v1892, 0LL);
  if ( v1892 )
  {
    v519 = sub_1B71708(v1892, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1550;
  v517->m_Items[457] = (DataMasterBase_o *)v1892;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[457], (int32_t)v1892, v1893, v1894);
  v1895 = (UserExchangeSvtMaster_o *)sub_1B71818(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v1895, 0LL);
  if ( v1895 )
  {
    v519 = sub_1B71708(v1895, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1550;
  v517->m_Items[458] = (DataMasterBase_o *)v1895;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[458], (int32_t)v1895, v1896, v1897);
  v1898 = (WarBoardCommonReleaseMaster_o *)sub_1B71818(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v1898, 0LL);
  if ( v1898 )
  {
    v519 = sub_1B71708(v1898, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1550;
  v517->m_Items[459] = (DataMasterBase_o *)v1898;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[459], (int32_t)v1898, v1899, v1900);
  v1901 = (WarBoardEventMaster_o *)sub_1B71818(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v1901, 0LL);
  if ( v1901 )
  {
    v519 = sub_1B71708(v1901, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1550;
  v517->m_Items[460] = (DataMasterBase_o *)v1901;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[460], (int32_t)v1901, v1902, v1903);
  v1904 = (WarBoardEventScriptMaster_o *)sub_1B71818(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v1904, 0LL);
  if ( v1904 )
  {
    v519 = sub_1B71708(v1904, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1550;
  v517->m_Items[461] = (DataMasterBase_o *)v1904;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[461], (int32_t)v1904, v1905, v1906);
  v1907 = (WarBoardStageBossMaster_o *)sub_1B71818(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v1907, 0LL);
  if ( v1907 )
  {
    v519 = sub_1B71708(v1907, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1550;
  v517->m_Items[462] = (DataMasterBase_o *)v1907;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[462], (int32_t)v1907, v1908, v1909);
  v1910 = (WarBoardSquareIndexGroupMaster_o *)sub_1B71818(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v1910, 0LL);
  if ( v1910 )
  {
    v519 = sub_1B71708(v1910, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1550;
  v517->m_Items[463] = (DataMasterBase_o *)v1910;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[463], (int32_t)v1910, v1911, v1912);
  v1913 = (WarBoardActionTrendGroupMaster_o *)sub_1B71818(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v1913, 0LL);
  if ( v1913 )
  {
    v519 = sub_1B71708(v1913, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1550;
  v517->m_Items[464] = (DataMasterBase_o *)v1913;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[464], (int32_t)v1913, v1914, v1915);
  v1916 = (WarBoardRatingOffsetGroupMaster_o *)sub_1B71818(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v1916, 0LL);
  if ( v1916 )
  {
    v519 = sub_1B71708(v1916, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1550;
  v517->m_Items[465] = (DataMasterBase_o *)v1916;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[465], (int32_t)v1916, v1917, v1918);
  v1919 = (WarBoardReinforcementsMaster_o *)sub_1B71818(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v1919, 0LL);
  if ( v1919 )
  {
    v519 = sub_1B71708(v1919, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1550;
  v517->m_Items[466] = (DataMasterBase_o *)v1919;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[466], (int32_t)v1919, v1920, v1921);
  v1922 = (WarBoardStageReinforcementsMaster_o *)sub_1B71818(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v1922, 0LL);
  if ( v1922 )
  {
    v519 = sub_1B71708(v1922, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1550;
  v517->m_Items[467] = (DataMasterBase_o *)v1922;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[467], (int32_t)v1922, v1923, v1924);
  v1925 = (WarBoardFutureActionTrendMaster_o *)sub_1B71818(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v1925, 0LL);
  if ( v1925 )
  {
    v519 = sub_1B71708(v1925, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1550;
  v517->m_Items[468] = (DataMasterBase_o *)v1925;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[468], (int32_t)v1925, v1926, v1927);
  v1928 = (ServantProfilePushMaster_o *)sub_1B71818(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v1928, 0LL);
  if ( v1928 )
  {
    v519 = sub_1B71708(v1928, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1550;
  v517->m_Items[469] = (DataMasterBase_o *)v1928;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[469], (int32_t)v1928, v1929, v1930);
  v1931 = (MapGimmickPathMaster_o *)sub_1B71818(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v1931, 0LL);
  if ( v1931 )
  {
    v519 = sub_1B71708(v1931, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1550;
  v517->m_Items[470] = (DataMasterBase_o *)v1931;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[470], (int32_t)v1931, v1932, v1933);
  v1934 = (MapGimmickPathReleaseMaster_o *)sub_1B71818(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v1934, 0LL);
  if ( v1934 )
  {
    v519 = sub_1B71708(v1934, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1550;
  v517->m_Items[471] = (DataMasterBase_o *)v1934;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[471], (int32_t)v1934, v1935, v1936);
  v1937 = (ServantOverwriteMaster_o *)sub_1B71818(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v1937, 0LL);
  if ( v1937 )
  {
    v519 = sub_1B71708(v1937, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1550;
  v517->m_Items[472] = (DataMasterBase_o *)v1937;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[472], (int32_t)v1937, v1938, v1939);
  v1940 = (IndividualityPolicyMaster_o *)sub_1B71818(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v1940, 0LL);
  if ( v1940 )
  {
    v519 = sub_1B71708(v1940, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1550;
  v517->m_Items[473] = (DataMasterBase_o *)v1940;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[473], (int32_t)v1940, v1941, v1942);
  v1943 = (IndividualityPersonalityMaster_o *)sub_1B71818(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v1943, 0LL);
  if ( v1943 )
  {
    v519 = sub_1B71708(v1943, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1550;
  v517->m_Items[474] = (DataMasterBase_o *)v1943;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[474], (int32_t)v1943, v1944, v1945);
  v1946 = (AttriMaster_o *)sub_1B71818(AttriMaster_TypeInfo);
  AttriMaster___ctor(v1946, 0LL);
  if ( v1946 )
  {
    v519 = sub_1B71708(v1946, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1550;
  v517->m_Items[475] = (DataMasterBase_o *)v1946;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[475], (int32_t)v1946, v1947, v1948);
  v1949 = (ServantVoicePatternMaster_o *)sub_1B71818(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v1949, 0LL);
  if ( v1949 )
  {
    v519 = sub_1B71708(v1949, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1550;
  v517->m_Items[476] = (DataMasterBase_o *)v1949;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[476], (int32_t)v1949, v1950, v1951);
  v1952 = (UserGameCommonMaster_o *)sub_1B71818(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v1952, 0LL);
  if ( v1952 )
  {
    v519 = sub_1B71708(v1952, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1550;
  v517->m_Items[477] = (DataMasterBase_o *)v1952;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[477], (int32_t)v1952, v1953, v1954);
  v1955 = (ServantPhotoMaster_o *)sub_1B71818(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v1955, 0LL);
  if ( v1955 )
  {
    v519 = sub_1B71708(v1955, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1550;
  v517->m_Items[478] = (DataMasterBase_o *)v1955;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[478], (int32_t)v1955, v1956, v1957);
  v1958 = (MasterPhotoMaster_o *)sub_1B71818(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v1958, 0LL);
  if ( v1958 )
  {
    v519 = sub_1B71708(v1958, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1550;
  v517->m_Items[479] = (DataMasterBase_o *)v1958;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[479], (int32_t)v1958, v1959, v1960);
  v1961 = (WarMessageMaster_o *)sub_1B71818(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v1961, 0LL);
  if ( v1961 )
  {
    v519 = sub_1B71708(v1961, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1550;
  v517->m_Items[480] = (DataMasterBase_o *)v1961;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[480], (int32_t)v1961, v1962, v1963);
  v1964 = (QuestAutoOrganizationAdjustMaster_o *)sub_1B71818(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v1964, 0LL);
  if ( v1964 )
  {
    v519 = sub_1B71708(v1964, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1550;
  v517->m_Items[481] = (DataMasterBase_o *)v1964;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[481], (int32_t)v1964, v1965, v1966);
  v1967 = (ExcludeMotionMaster_o *)sub_1B71818(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v1967, 0LL);
  if ( v1967 )
  {
    v519 = sub_1B71708(v1967, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1550;
  v517->m_Items[482] = (DataMasterBase_o *)v1967;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[482], (int32_t)v1967, v1968, v1969);
  v1970 = (UserInterruptionQuestMaster_o *)sub_1B71818(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v1970, 0LL);
  if ( v1970 )
  {
    v519 = sub_1B71708(v1970, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1550;
  v517->m_Items[483] = (DataMasterBase_o *)v1970;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[483], (int32_t)v1970, v1971, v1972);
  v1973 = (ServantTransformMaster_o *)sub_1B71818(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v1973, 0LL);
  if ( v1973 )
  {
    v519 = sub_1B71708(v1973, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1550;
  v517->m_Items[484] = (DataMasterBase_o *)v1973;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[484], (int32_t)v1973, v1974, v1975);
  v1976 = (MapUpdateScheduleMaster_o *)sub_1B71818(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v1976, 0LL);
  if ( v1976 )
  {
    v519 = sub_1B71708(v1976, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1550;
  v517->m_Items[485] = (DataMasterBase_o *)v1976;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[485], (int32_t)v1976, v1977, v1978);
  v1979 = (QuestPhasePresentMaster_o *)sub_1B71818(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v1979, 0LL);
  if ( v1979 )
  {
    v519 = sub_1B71708(v1979, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1550;
  v517->m_Items[486] = (DataMasterBase_o *)v1979;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[486], (int32_t)v1979, v1980, v1981);
  v1982 = (UserAccountLinkageMaster_o *)sub_1B71818(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v1982, 0LL);
  if ( v1982 )
  {
    v519 = sub_1B71708(v1982, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1550;
  v517->m_Items[487] = (DataMasterBase_o *)v1982;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[487], (int32_t)v1982, v1983, v1984);
  v1985 = (MissionNaviTransitionMaster_o *)sub_1B71818(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v1985, 0LL);
  if ( v1985 )
  {
    v519 = sub_1B71708(v1985, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1550;
  v517->m_Items[488] = (DataMasterBase_o *)v1985;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[488], (int32_t)v1985, v1986, v1987);
  v1988 = (MissionNaviQuestMaster_o *)sub_1B71818(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v1988, 0LL);
  if ( v1988 )
  {
    v519 = sub_1B71708(v1988, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1550;
  v517->m_Items[489] = (DataMasterBase_o *)v1988;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[489], (int32_t)v1988, v1989, v1990);
  v1991 = (EventTradeGoodsMaster_o *)sub_1B71818(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v1991, 0LL);
  if ( v1991 )
  {
    v519 = sub_1B71708(v1991, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1550;
  v517->m_Items[490] = (DataMasterBase_o *)v1991;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[490], (int32_t)v1991, v1992, v1993);
  v1994 = (EventTradeStoreMaster_o *)sub_1B71818(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v1994, 0LL);
  if ( v1994 )
  {
    v519 = sub_1B71708(v1994, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1550;
  v517->m_Items[491] = (DataMasterBase_o *)v1994;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[491], (int32_t)v1994, v1995, v1996);
  v1997 = (EventTradePickupMaster_o *)sub_1B71818(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v1997, 0LL);
  if ( v1997 )
  {
    v519 = sub_1B71708(v1997, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1550;
  v517->m_Items[492] = (DataMasterBase_o *)v1997;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[492], (int32_t)v1997, v1998, v1999);
  v2000 = (UserEventTradeMaster_o *)sub_1B71818(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v2000, 0LL);
  if ( v2000 )
  {
    v519 = sub_1B71708(v2000, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1550;
  v517->m_Items[493] = (DataMasterBase_o *)v2000;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[493], (int32_t)v2000, v2001, v2002);
  v2003 = (PaymentHistoryMaster_o *)sub_1B71818(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v2003, 0LL);
  if ( v2003 )
  {
    v519 = sub_1B71708(v2003, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1550;
  v517->m_Items[494] = (DataMasterBase_o *)v2003;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[494], (int32_t)v2003, v2004, v2005);
  v2006 = (UserExternalPaymentStoneMaster_o *)sub_1B71818(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v2006, 0LL);
  if ( v2006 )
  {
    v519 = sub_1B71708(v2006, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1550;
  v517->m_Items[495] = (DataMasterBase_o *)v2006;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[495], (int32_t)v2006, v2007, v2008);
  v2009 = (QuestPhaseIndividualityMaster_o *)sub_1B71818(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v2009, 0LL);
  if ( v2009 )
  {
    v519 = sub_1B71708(v2009, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1550;
  v517->m_Items[496] = (DataMasterBase_o *)v2009;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[496], (int32_t)v2009, v2010, v2011);
  v2012 = (ViewGachaFeaturedServantMaster_o *)sub_1B71818(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v2012, 0LL);
  if ( v2012 )
  {
    v519 = sub_1B71708(v2012, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1550;
  v517->m_Items[497] = (DataMasterBase_o *)v2012;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[497], (int32_t)v2012, v2013, v2014);
  v2015 = (UserGachaPickupCollateralMaster_o *)sub_1B71818(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v2015, 0LL);
  if ( v2015 )
  {
    v519 = sub_1B71708(v2015, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1550;
  v517->m_Items[498] = (DataMasterBase_o *)v2015;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[498], (int32_t)v2015, v2016, v2017);
  v2018 = (GachaPickupCollateralMaster_o *)sub_1B71818(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v2018, 0LL);
  if ( v2018 )
  {
    v519 = sub_1B71708(v2018, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1550;
  v517->m_Items[499] = (DataMasterBase_o *)v2018;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[499], (int32_t)v2018, v2019, v2020);
  v2021 = (GachaPickupCollateralGroupMaster_o *)sub_1B71818(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v2021, 0LL);
  if ( v2021 )
  {
    v519 = sub_1B71708(v2021, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1550;
  v517->m_Items[500] = (DataMasterBase_o *)v2021;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[500], (int32_t)v2021, v2022, v2023);
  v2024 = (BattlePointMaster_o *)sub_1B71818(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v2024, 0LL);
  if ( v2024 )
  {
    v519 = sub_1B71708(v2024, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1550;
  v517->m_Items[501] = (DataMasterBase_o *)v2024;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[501], (int32_t)v2024, v2025, v2026);
  v2027 = (BattlePointPhaseMaster_o *)sub_1B71818(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v2027, 0LL);
  if ( v2027 )
  {
    v519 = sub_1B71708(v2027, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1550;
  v517->m_Items[502] = (DataMasterBase_o *)v2027;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[502], (int32_t)v2027, v2028, v2029);
  v2030 = (ServantBattlePointMaster_o *)sub_1B71818(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v2030, 0LL);
  if ( v2030 )
  {
    v519 = sub_1B71708(v2030, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1550;
  v517->m_Items[503] = (DataMasterBase_o *)v2030;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[503], (int32_t)v2030, v2031, v2032);
  v2033 = (EffectMovieMaster_o *)sub_1B71818(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v2033, 0LL);
  if ( v2033 )
  {
    v519 = sub_1B71708(v2033, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1550;
  v517->m_Items[504] = (DataMasterBase_o *)v2033;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[504], (int32_t)v2033, v2034, v2035);
  v2036 = (PaymentLimitMaster_o *)sub_1B71818(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v2036, 0LL);
  if ( v2036 )
  {
    v519 = sub_1B71708(v2036, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1550;
  v517->m_Items[505] = (DataMasterBase_o *)v2036;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[505], (int32_t)v2036, v2037, v2038);
  v2039 = (UserPaymentLimitMaster_o *)sub_1B71818(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v2039, 0LL);
  if ( v2039 )
  {
    v519 = sub_1B71708(v2039, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1550;
  v517->m_Items[506] = (DataMasterBase_o *)v2039;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[506], (int32_t)v2039, v2040, v2041);
  v2042 = (RoadmapMaster_o *)sub_1B71818(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v2042, 0LL);
  if ( v2042 )
  {
    v519 = sub_1B71708(v2042, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1550;
  v517->m_Items[507] = (DataMasterBase_o *)v2042;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[507], (int32_t)v2042, v2043, v2044);
  v2045 = (UserRecommendSupportMaster_o *)sub_1B71818(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v2045, 0LL);
  if ( v2045 )
  {
    v519 = sub_1B71708(v2045, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1550;
  v517->m_Items[508] = (DataMasterBase_o *)v2045;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[508], (int32_t)v2045, v2046, v2047);
  v2048 = (RecommendSupportQuestMaster_o *)sub_1B71818(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v2048, 0LL);
  if ( v2048 )
  {
    v519 = sub_1B71708(v2048, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1550;
  v517->m_Items[509] = (DataMasterBase_o *)v2048;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[509], (int32_t)v2048, v2049, v2050);
  v2051 = (RecommendAdviceMessageMaster_o *)sub_1B71818(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v2051, 0LL);
  if ( v2051 )
  {
    v519 = sub_1B71708(v2051, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1550;
  v517->m_Items[510] = (DataMasterBase_o *)v2051;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[510], (int32_t)v2051, v2052, v2053);
  v2054 = (UserRecommendFollowerMaster_o *)sub_1B71818(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v2054, 0LL);
  if ( v2054 )
  {
    v519 = sub_1B71708(v2054, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1550;
  v517->m_Items[511] = (DataMasterBase_o *)v2054;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[511], (int32_t)v2054, v2055, v2056);
  v2057 = (ItemDropEfficiencyMaster_o *)sub_1B71818(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v2057, 0LL);
  if ( v2057 )
  {
    v519 = sub_1B71708(v2057, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x200 )
    goto LABEL_1550;
  v517->m_Items[512] = (DataMasterBase_o *)v2057;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[512], (int32_t)v2057, v2058, v2059);
  v2060 = (BlankEarthGimmickAddMaster_o *)sub_1B71818(BlankEarthGimmickAddMaster_TypeInfo);
  BlankEarthGimmickAddMaster___ctor(v2060, 0LL);
  if ( v2060 )
  {
    v519 = sub_1B71708(v2060, v517->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1551;
  }
  if ( *p_max_length <= 0x201 )
    goto LABEL_1550;
  v517->m_Items[513] = (DataMasterBase_o *)v2060;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[513], (int32_t)v2060, v2061, v2062);
  v2063 = (WarReleaseMaster_o *)sub_1B71818(WarReleaseMaster_TypeInfo);
  WarReleaseMaster___ctor(v2063, 0LL);
  if ( v2063 )
  {
    v519 = sub_1B71708(v2063, v517->obj.klass->_1.element_class);
    if ( !v519 )
    {
LABEL_1551:
      v2067 = sub_1B7184C(v519);
      sub_1B716F4(v2067, 0LL);
    }
  }
  if ( *p_max_length <= 0x202 )
LABEL_1550:
    sub_1B71830(v519, v520);
  v517->m_Items[514] = (DataMasterBase_o *)v2063;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v517->m_Items[514], (int32_t)v2063, v2064, v2065);
  return v517;
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

  if ( (byte_4A1F60D & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    sub_1B715CC(&ManagerConfig_TypeInfo, v2);
    byte_4A1F60D = 1;
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
  int32_t v11; // w3
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  int v15; // w26
  Il2CppObject *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x20
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_List_object__o *v22; // x0
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  int v27; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4A1F60A & 1) == 0 )
  {
    sub_1B715CC(&int_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B715CC(&LocalizationManager_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_8490/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v7);
    byte_4A1F60A = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v8;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_masterCheckName, (int32_t)v8, v10, v11);
  v15 = 1;
  do
  {
    v27 = v15;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v12, v13, v14);
    v17 = System_String__Format((System_String_o *)StringLiteral_8490/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v16, 0LL);
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
    sub_1B71828(v22, v19);
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v18,
        *(const MethodInfo_34D0260 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v18;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
    }
    ++v15;
  }
  while ( v15 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_2E5B3E8 *method)
{
  const MethodInfo_2E5B3E8_RGCTXs *rgctx_data; // x8
  const MethodInfo_2E5B3E8 *_1_TMaster; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  MethodInfo *_0_DataMasterBase_GetRegisteredKind_TMaster; // x21
  const Il2CppRGCTXData *v11; // x8
  System_Type_o *rgctxDataDummy; // x0
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x8
  Il2CppObject *v14; // x20
  Il2CppObject *result; // x0
  Il2CppType *_2_TMaster; // x19
  Il2CppObject *v17; // x19
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  Il2CppObject *v21; // x21
  Il2CppObject *v22; // x0
  Il2CppObject *v23; // x19
  System_Enum_o v24; // [xsp+8h] [xbp-48h] BYREF
  int v25; // [xsp+18h] [xbp-38h]
  int v26; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF
  System_RuntimeTypeHandle_o v28; // 0:w0.4

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_1B715CC(&UnityEngine_Debug_TypeInfo, method);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v5);
    sub_1B715CC(&int_TypeInfo, v6);
    sub_1B715CC(&DataNameKind_Kind_TypeInfo, v7);
    sub_1B715CC(&System_Type_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_21264/*"master[{0}] is null[{1}:{2}]"*/, v9);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BC3504();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v11 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v11 )
  {
    sub_1BC3504();
    v11 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v11[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1BC34A8(rgctxDataDummy);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v14) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v14,
         &value,
         (const MethodInfo_3149FE0 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v14 = value;
    _1_TMaster = (const MethodInfo_2E5B3E8 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_2E5B3E8 *)sub_1BC34A8(_1_TMaster);
    if ( !v14 )
      return 0LL;
    result = (Il2CppObject *)sub_1B71708(v14, _1_TMaster);
    if ( result )
      return result;
    sub_1B71AE8(v14);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v28.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v28, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1B71828(rgctxDataDummy, method);
  v17 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v26 = (int)v14;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v18, v19, v20);
  v25 = (int)v14;
  v24.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v24.monitor = (void *)-1LL;
  v22 = (Il2CppObject *)System_Enum__ToString(&v24, 0LL);
  v23 = (Il2CppObject *)System_String__Format_61519944((System_String_o *)StringLiteral_21264/*"master[{0}] is null[{1}:{2}]"*/, v17, v21, v22, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v23, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_2E5B394 *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B71828(0LL, v4);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E5B3E8 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Func_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4A1F5F5 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_CreateMasterData__, method);
    sub_1B715CC(&System_Func_DataMasterBase____TypeInfo, v3);
    byte_4A1F5F5 = 1;
  }
  v4 = (System_Func_object__o *)sub_1B71818(System_Func_DataMasterBase____TypeInfo);
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
  int32_t v13; // w3
  int v14; // w8
  unsigned int v15; // w23
  __int64 v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3

  v4 = this;
  if ( (byte_4A1F5F6 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    this = (DataManager_o *)sub_1B715CC(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    byte_4A1F5F6 = 1;
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
          v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B71818(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v11,
            (const MethodInfo_3147E80 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v10) )
    {
LABEL_19:
      sub_1B71828(this, createMasterDataMethod);
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
          (const MethodInfo_3148854 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v14 = *(_DWORD *)(v10 + 24);
        if ( (int)++v15 >= v14 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1B71830(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v10;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.datalist, v10, v12, v13);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v11;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.lookup, (int32_t)v11, v17, v18);
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
  int32_t v25; // w3
  __int64 v26; // x1
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v28; // x23
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v30; // x25
  __int64 Index_object; // x0
  __int64 v32; // x1
  const MethodInfo_35ED708 *v33; // x3
  struct DataMasterBase_array *v34; // x8
  DataMasterBase_o *v35; // x25
  Il2CppObject *p_obj; // x22
  System_Threading_SynchronizationContext_o *context; // x24
  __int64 v38; // x0
  __int64 v39; // x1
  const MethodInfo_35ED708 *v40; // x3
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
  int32_t v60; // w3
  _QWORD *exception; // x0
  System_Byte_array *work; // [xsp+10h] [xbp-90h]
  System_Nullable_long__o v63; // [xsp+18h] [xbp-88h] BYREF
  System_Nullable_long__o v64; // [xsp+28h] [xbp-78h] BYREF
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v66; // 0:x0.16
  System_Nullable_long__o v67; // 0:x0.16

  v5 = this;
  if ( (byte_4A1F607 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_1B715CC(&byte___TypeInfo, v6);
    sub_1B715CC(&int___TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____get_Item__, v9);
    sub_1B715CC(&Method_System_Nullable_long___ctor__, v10);
    sub_1B715CC(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_1B715CC(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_1B715CC(&DataManager___c__DisplayClass58_0_TypeInfo, v13);
    byte_4A1F607 = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1B71828(this, indexList);
  v14 = sub_1B71708(indexList, int___TypeInfo);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(v14 + 24);
    work = (System_Byte_array *)sub_1B71674(byte___TypeInfo, 2000LL);
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; i != v16; ++i )
      {
        v18 = sub_1B71818(DataManager___c__DisplayClass58_0_TypeInfo);
        DataManager___c__DisplayClass58_0___ctor((DataManager___c__DisplayClass58_0_o *)v18, 0LL);
        if ( i >= *(unsigned int *)(v15 + 24) )
          sub_1B71830(v19, v20);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1B71828(0LL, v20);
        v22 = *(_DWORD *)(v15 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v22,
                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v18 )
          sub_1B71828(Item, Item);
        *(_QWORD *)(v18 + 16) = Item;
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)Item, v24, v25);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1B71828(0LL, v26);
        v28 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v22,
                (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v18 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v30 = (System_Predicate_object__o *)sub_1B71818(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v30,
            (Il2CppObject *)v18,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v30,
                           (const MethodInfo_2F547E4 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v34 = v5->fields.datalist;
            if ( !v34 )
              sub_1B71828(Index_object, v32);
            if ( (unsigned int)Index_object >= v34->max_length )
              sub_1B71830(Index_object, v32);
            if ( !v28 )
              sub_1B71828(Index_object, v32);
            if ( !LODWORD(v28[1].monitor) )
              sub_1B71830(Index_object, v32);
            v35 = v34->m_Items[(unsigned int)Index_object];
            p_obj = &v5->fields.masterDataBytes->obj;
            context = v5->fields.context;
            v66.fields.value = (int64_t)v28[2].klass;
            *(_QWORD *)&v64.fields.hasValue = 0LL;
            v64.fields.value = 0LL;
            *(_QWORD *)&v66.fields.hasValue = &v64;
            System_Nullable_long____ctor(v66, Method_System_Nullable_long___ctor__, v33);
            if ( LODWORD(v28[1].monitor) <= 1 )
              sub_1B71830(v38, v39);
            v67.fields.value = (int64_t)v28[2].monitor;
            *(_QWORD *)&v63.fields.hasValue = 0LL;
            v63.fields.value = 0LL;
            *(_QWORD *)&v67.fields.hasValue = &v63;
            System_Nullable_long____ctor(v67, Method_System_Nullable_long___ctor__, v40);
            if ( !v35 )
              sub_1B71828(v41, v42);
            DataMasterBase__ReplacedForThread(v35, p_obj, context, v64, v63, work, 0LL);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_62731232(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1B71AE8(indexList);
    if ( v44 != 1 )
      sub_1C5C05C();
    v45 = (_QWORD **)__cxa_begin_catch(v3);
    v46 = sub_1B715E0(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v46, **v45) & 1) != 0 )
    {
      __cxa_end_catch();
      v47 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_62731232(v47, lockTaken, 0LL);
    }
    else
    {
      v48 = sub_1B715E0(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v48, **v45) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v45;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v49 = v5->fields.context;
      v50 = sub_1B715E0(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v50 + 224) )
        j_il2cpp_runtime_class_init_0(v50);
      v51 = sub_1B715E0(&DataManager___c_TypeInfo);
      v53 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v51 + 184) + 8LL);
      if ( !v53 )
      {
        v54 = sub_1B715E0(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v54 + 224) )
          j_il2cpp_runtime_class_init_0(v54);
        v55 = **(Il2CppObject ***)(sub_1B715E0(&DataManager___c_TypeInfo) + 184);
        v56 = sub_1B715E0(&System_Threading_SendOrPostCallback_TypeInfo);
        v53 = (System_Threading_SendOrPostCallback_o *)sub_1B71818(v56);
        v57 = sub_1B715E0(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v53, v55, v57, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1B715E0(&DataManager___c_TypeInfo) + 184) + 8LL) = v53;
        v58 = sub_1B715E0(&DataManager___c_TypeInfo);
        sub_1B71570((ServantStatusBattleListViewItem_o *)(*(_QWORD *)(v58 + 184) + 8LL), (int32_t)v53, v59, v60);
      }
      if ( !v49 )
        sub_1B71828(v51, v52);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v49->klass->vtable._5_Post.method)(
        v49,
        v53,
        0LL,
        v49->klass->vtable._6_OperationStarted.methodPtr);
      v47 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_62731232(v47, lockTaken, 0LL);
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
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_List_object__o *v31; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  System_Collections_Generic_IEnumerable_int__o *v35; // x0
  System_Int32_array *v36; // x21
  System_Comparison_int__o *v37; // x22
  __int64 v38; // x22
  int32_t v39; // w2
  int32_t v40; // w3
  System_Threading_ParameterizedThreadStart_o *v41; // x24
  System_Threading_Thread_o *v42; // x23
  System_Func_int__bool__o *v43; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  System_Int32_array *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x8
  int v52; // w8
  bool v53; // nf

  if ( (byte_4A1F605 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_Sort_int____75845784, *(_QWORD *)&maxIndex);
    sub_1B715CC(&System_Comparison_int__TypeInfo, v7);
    sub_1B715CC(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_1B715CC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B715CC(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1B715CC(&System_Func_int__bool__TypeInfo, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_Thread__Add__, v12);
    sub_1B715CC(&Method_System_Collections_Generic_List_Thread___ctor__, v13);
    sub_1B715CC(&System_Collections_Generic_List_Thread__TypeInfo, v14);
    sub_1B715CC(&System_Threading_ParameterizedThreadStart_TypeInfo, v15);
    sub_1B715CC(&System_Threading_Thread_TypeInfo, v16);
    sub_1B715CC(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__, v17);
    sub_1B715CC(&DataManager___c__DisplayClass56_0_TypeInfo, v18);
    sub_1B715CC(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__, v19);
    sub_1B715CC(&DataManager___c__DisplayClass56_1_TypeInfo, v20);
    byte_4A1F605 = 1;
  }
  v21 = sub_1B71818(DataManager___c__DisplayClass56_0_TypeInfo);
  DataManager___c__DisplayClass56_0___ctor((DataManager___c__DisplayClass56_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v21 + 24) = loadedIndices;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)loadedIndices, v26, v27);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.context, (int32_t)Current, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v31;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.masterLoadThreads, (int32_t)v31, v33, v34);
  v35 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v36 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
  v37 = (System_Comparison_int__o *)sub_1B71818(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v37,
    (Il2CppObject *)v21,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__48403316(
    v36,
    (System_Comparison_T__o *)v37,
    (const MethodInfo_2E29374 *)Method_System_Array_Sort_int____75845784);
  v38 = sub_1B71818(DataManager___c__DisplayClass56_1_TypeInfo);
  DataManager___c__DisplayClass56_1___ctor((DataManager___c__DisplayClass56_1_o *)v38, 0LL);
  if ( !v38 )
LABEL_14:
    sub_1B71828(v22, v23);
  *(_QWORD *)(v38 + 24) = v21;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v38 + 24), v21, v39, v40);
  *(_DWORD *)(v38 + 16) = 0;
  do
  {
    v41 = (System_Threading_ParameterizedThreadStart_o *)sub_1B71818(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v41,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v42 = (System_Threading_Thread_o *)sub_1B71818(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_62767312(v42, v41, 0LL);
    if ( !v42 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v42, 1, 0LL);
    v43 = (System_Func_int__bool__o *)sub_1B71818(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v43,
      (Il2CppObject *)v38,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v44 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v36,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_2E99888 *)Method_System_Linq_Enumerable_Where_int___);
    v45 = System_Linq_Enumerable__ToArray_int_(
            v44,
            (const MethodInfo_2E93CEC *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_62767892(v42, &v45->obj, 0LL);
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
        *(const MethodInfo_34D0260 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v51[4] = (Il2CppClass *)v42;
      sub_1B71570((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v42, v46, v47);
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
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  System_Threading_ParameterizedThreadStart_o *v8; // x21
  System_Threading_Thread_o *v9; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x1

  if ( (byte_4A1F608 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_1B715CC(&System_Threading_ParameterizedThreadStart_TypeInfo, v6);
    sub_1B715CC(&System_Threading_Thread_TypeInfo, v7);
    byte_4A1F608 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v8 = (System_Threading_ParameterizedThreadStart_o *)sub_1B71818(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v9 = (System_Threading_Thread_o *)sub_1B71818(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_62767312(v9, v8, 0LL);
  this->fields.writeMasterDataThread = v9;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, (int32_t)v9, v11, v12);
  if ( !*p_writeMasterDataThread )
    sub_1B71828(0LL, v13);
  System_Threading_Thread__Start_62767892(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
}


void __fastcall DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  ServantStatusBattleListViewItem_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v6; // w20
  __int64 v7; // x1
  System_Threading_Thread_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A1F606 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_4A1F606 = 1;
  }
  masterLoadThreads = this->fields.masterLoadThreads;
  p_masterLoadThreads = (ServantStatusBattleListViewItem_o *)&this->fields.masterLoadThreads;
  Item = (Il2CppObject *)masterLoadThreads;
  if ( masterLoadThreads )
  {
    v6 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)Item,
               v6,
               (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1B71828(Item, v7);
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
    sub_1B71570(p_masterLoadThreads, 0, v9, v10);
  }
}


void __fastcall DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *writeMasterDataThread; // x0
  System_Threading_Thread_o **p_writeMasterDataThread; // x19
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3

  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  writeMasterDataThread = this->fields.writeMasterDataThread;
  if ( writeMasterDataThread )
  {
    if ( System_Threading_Thread__get_IsAlive(writeMasterDataThread, 0LL) )
    {
      if ( !*p_writeMasterDataThread )
        sub_1B71828(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1B71570((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, 0, v5, v6);
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
  int32_t v17; // w3
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

  if ( (byte_4A1F609 & 1) == 0 )
  {
    sub_1B715CC(&System_IO_BinaryWriter_TypeInfo, param);
    sub_1B715CC(&CatAndMouseGame_TypeInfo, v5);
    sub_1B715CC(&System_IDisposable_TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_1B715CC(&string_TypeInfo, v9);
    byte_4A1F609 = 1;
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
  v13 = (System_IO_BinaryWriter_o *)sub_1B71818(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61743668(v13, v12, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1B71828(v14, v15);
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
               (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1B71828(0LL, v22);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1B71830(Item, v22);
      if ( !v13 )
        sub_1B71828(Item, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[2].monitor),
        v13->klass->vtable._18_Write.methodPtr);
      v24 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v24 )
        sub_1B71828(0LL, v23);
      masterDataBytes = this->fields.masterDataBytes;
      v26 = System_Collections_Generic_List_object___get_Item(
              v24,
              v20,
              (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v26 )
        sub_1B71828(0LL, v27);
      if ( !LODWORD(v26[1].monitor) )
        sub_1B71830(v26, v27);
      if ( !this->fields.saveDataMapList )
        sub_1B71828(v26, v27);
      klass = v26[2].klass;
      v29 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v20,
              (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v29 )
        sub_1B71828(0LL, v30);
      if ( LODWORD(v29[1].monitor) <= 1 )
        sub_1B71830(v29, v30);
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
        sub_1B71828(v31, v32);
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
    v36 = sub_1BC35AC(v13, System_IDisposable_TypeInfo, 0LL);
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
      v40 = sub_1BC35AC(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v40)(v11, *(_QWORD *)(v40 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1B71570((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, 0, v16, v17);
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

  if ( (byte_4A1F5F0 & 1) == 0 )
  {
    sub_1B715CC(&DatFileName_TypeInfo, v1);
    sub_1B715CC(&DataManager_TypeInfo, v2);
    sub_1B715CC(&StringLiteral_1123/*"/"*/, v3);
    byte_4A1F5F0 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_61516764(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A1F5EF & 1) == 0 )
  {
    sub_1B715CC(&DatFileName_TypeInfo, v1);
    sub_1B715CC(&DataManager_TypeInfo, v2);
    sub_1B715CC(&StringLiteral_1123/*"/"*/, v3);
    byte_4A1F5EF = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_61516764(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_4A1F5ED & 1) == 0 )
  {
    sub_1B715CC(&AndroidUtil_TypeInfo, v1);
    sub_1B715CC(&CacheFolderName_TypeInfo, v2);
    sub_1B715CC(&StringLiteral_1123/*"/"*/, v3);
    byte_4A1F5ED = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_61516764(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A1F5EE & 1) == 0 )
  {
    sub_1B715CC(&DatFileName_TypeInfo, v1);
    sub_1B715CC(&DataManager_TypeInfo, v2);
    sub_1B715CC(&StringLiteral_1123/*"/"*/, v3);
    byte_4A1F5EE = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_61516764(CachePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_object_(
        DataManager_o *this,
        const MethodInfo_2E5B5E4 *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1B71828(0LL, v4);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)Master_object[2].klass;
}


System_Object_array *__fastcall DataManager__getEntitys_object__object_(
        DataManager_o *this,
        const MethodInfo_2E5B648 *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1BC3504();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1B71828(0LL, v4);
  return DataMasterBase__getEntitys_object_(
           (DataMasterBase_o *)Master_object,
           (const MethodInfo_2E5BC7C *)method->rgctx_data->_2_DataMasterBase_getEntitys_T_);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A1F5FB & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    byte_4A1F5FB = 1;
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

  if ( (byte_4A1F5FC & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    byte_4A1F5FC = 1;
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

  if ( (byte_4A1F60B & 1) == 0 )
  {
    sub_1B715CC(&Crc32_TypeInfo, name);
    byte_4A1F60B = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B71828(0LL, v7);
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

  if ( (byte_4A1F5F1 & 1) == 0 )
  {
    sub_1B715CC(&AndroidUtil_TypeInfo, v1);
    sub_1B715CC(&CacheFolderName_TypeInfo, v2);
    sub_1B715CC(&StringLiteral_1123/*"/"*/, v3);
    byte_4A1F5F1 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_61516764(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1123/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A1F600 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    byte_4A1F600 = 1;
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

  if ( (byte_4A1F5FF & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    byte_4A1F5FF = 1;
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
    sub_1B71828(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_4A1F5F8 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    byte_4A1F5F8 = 1;
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

  if ( (byte_4A1F603 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    byte_4A1F603 = 1;
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
  int32_t v7; // w3

  if ( (byte_4A1F602 & 1) == 0 )
  {
    sub_1B715CC(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_4A1F602 = 1;
  }
  v3 = sub_1B71818(DataManager__readMasterData_d__47_TypeInfo);
  DataManager__readMasterData_d__47___ctor((DataManager__readMasterData_d__47_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B71828(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int32_t v58; // w3
  DataManager_o *v59; // x20
  int32_t v60; // w1
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w1
  int32_t v66; // w2
  int32_t v67; // w3
  struct System_Byte_array *v68; // x1
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w1
  ServantStatusBattleListViewItem_o *p_saveNameList; // x0
  int v74; // w22
  int64_t v75; // x0
  DataManager_c *v76; // x8
  int64_t v77; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v79; // x22
  unsigned int v80; // w23
  System_String_o *v81; // x21
  int32_t v82; // w2
  int32_t v83; // w3
  DataManager_o *v84; // x8
  __int64 v85; // x8
  _QWORD *v86; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v88; // x8
  int32_t v90; // w2
  int32_t v91; // w3
  int32_t v92; // w1
  DataManager_c *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  int32_t v96; // w2
  int32_t v97; // w3
  int32_t v98; // w1
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w2
  int32_t v102; // w3
  int32_t v103; // w1
  int32_t v104; // w2
  int32_t v105; // w3
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w1
  int32_t v109; // w2
  int32_t v110; // w3
  int64_t v111; // [xsp+8h] [xbp-58h] BYREF
  int v112; // [xsp+1Ch] [xbp-44h] BYREF

  v2 = this;
  if ( (byte_4A1F610 & 1) == 0 )
  {
    sub_1B715CC(&CatAndMouseGame_TypeInfo, method);
    sub_1B715CC(&char___TypeInfo, v3);
    sub_1B715CC(&Crc32_TypeInfo, v4);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_1B715CC(&ManagerConfig_TypeInfo, v9);
    sub_1B715CC(&string___TypeInfo, v10);
    sub_1B715CC(&StringLiteral_5095/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_1B715CC(&StringLiteral_5098/*"DataManager version load error : list file parameter error"*/, v12);
    sub_1B715CC(&StringLiteral_117/*" "*/, v13);
    sub_1B715CC(&StringLiteral_25097/*"~"*/, v14);
    sub_1B715CC(&StringLiteral_823/*") -> ("*/, v15);
    sub_1B715CC(&StringLiteral_814/*")"*/, v16);
    sub_1B715CC(&StringLiteral_1887/*"@"*/, v17);
    sub_1B715CC(&StringLiteral_21240/*"master versiton different ("*/, v18);
    sub_1B715CC(&StringLiteral_5099/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_1B715CC(&StringLiteral_5100/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    this = (DataManager_o *)sub_1B715CC(&StringLiteral_5097/*"DataManager version load error : list file break"*/, v21);
    byte_4A1F610 = 1;
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
    v33 = (System_Char_array *)sub_1B71674(char___TypeInfo, 1LL);
    if ( !v33 )
      sub_1B71828(0LL, 0LL);
    if ( !v33->max_length )
      sub_1B71830(v33, v33);
    v33->m_Items[2] = -257;
    v34 = System_String__Trim_61535252(v32, v33, 0LL);
    v35 = (System_Char_array *)sub_1B71674(char___TypeInfo, 2LL);
    if ( !v35 )
      sub_1B71828(0LL, 0LL);
    max_length = v35->max_length;
    if ( !max_length )
      sub_1B71830(v35, v35);
    v35->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B71830(v35, v35);
    v35->m_Items[3] = 10;
    if ( !v34 )
      sub_1B71828(v35, v35);
    v37 = System_String__IndexOfAny(v34, v35, 0LL);
    if ( v37 < 2 )
    {
      v38 = &StringLiteral_5099/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v39 = System_String__Substring_61524508(v34, 0, v37, 0LL);
    v41 = v39;
    if ( !v39 )
      sub_1B71828(0LL, v40);
    if ( System_String__StartsWith(v39, (System_String_o *)StringLiteral_25097/*"~"*/, 0LL) )
    {
      v42 = System_String__Substring(v41, 1, 0LL);
      v43 = System_String__Substring(v34, v37 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1B71828(0LL, v45);
      v46 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v43,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v47 = Crc32__Compute(v46, 0LL);
      if ( System_UInt32__Parse(v42, 0LL) == v47 )
      {
        v48 = (System_Char_array *)sub_1B71674(char___TypeInfo, 2LL);
        if ( !v48 )
          sub_1B71828(0LL, 0LL);
        v49 = v48->max_length;
        if ( !v49 )
          sub_1B71830(v48, v48);
        v48->m_Items[2] = 13;
        if ( v49 == 1 )
          sub_1B71830(v48, v48);
        v48->m_Items[3] = 10;
        if ( !v43 )
          sub_1B71828(v48, v48);
        this = (DataManager_o *)System_String__Split_61527896(v43, v48, 1, 0LL);
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
                                  (System_String_o *)StringLiteral_1887/*"@"*/,
                                  0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !LODWORD(v50->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v52 = *(System_String_o **)&v50->fields._DispLog;
          this = (DataManager_o *)sub_1B71674(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v52 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_61527660(v52, (System_Char_array *)this, 0LL);
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
            this = (DataManager_o *)sub_1B71674(string___TypeInfo, 5LL);
            if ( this )
            {
              v59 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v60 = StringLiteral_21240/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21240/*"master versiton different ("*/;
                sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._DispLog, v60, v57, v58);
                if ( LODWORD(v59->fields.m_CancellationTokenSource) > 1 )
                {
                  v59->fields.datalist = (struct DataMasterBase_array *)v56;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)&v59->fields.datalist, (int32_t)v56, v61, v62);
                  if ( LODWORD(v59->fields.m_CancellationTokenSource) > 2 )
                  {
                    v65 = StringLiteral_823/*") -> ("*/;
                    v59->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_823/*") -> ("*/;
                    sub_1B71570((ServantStatusBattleListViewItem_o *)&v59->fields.lookup, v65, v63, v64);
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
                      sub_1B71570(
                        (ServantStatusBattleListViewItem_o *)&v59->fields.masterDataBytes,
                        (int32_t)v68,
                        v66,
                        v67);
                      if ( LODWORD(v59->fields.m_CancellationTokenSource) > 4 )
                      {
                        v71 = StringLiteral_814/*")"*/;
                        v59->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_814/*")"*/;
                        p_saveNameList = (ServantStatusBattleListViewItem_o *)&v59->fields.saveNameList;
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
                this = (DataManager_o *)sub_1B71674(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v81 )
                  break;
                this = (DataManager_o *)System_String__Split_61527660(v81, (System_Char_array *)this, 0LL);
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
                    *(const MethodInfo_34D0260 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v88 = v85 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v88 + 32) = method;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v88 + 32), (int32_t)method, v82, v83);
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
              this = (DataManager_o *)sub_1B71674(string___TypeInfo, 9LL);
              if ( this )
              {
                v59 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v92 = StringLiteral_21240/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21240/*"master versiton different ("*/;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._DispLog, v92, v90, v91);
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
                    sub_1B71570((ServantStatusBattleListViewItem_o *)&v59->fields.datalist, (int32_t)this, v94, v95);
                    if ( LODWORD(v59->fields.m_CancellationTokenSource) > 2 )
                    {
                      v98 = (int)StringLiteral_117/*" "*/;
                      v59->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_117/*" "*/;
                      sub_1B71570((ServantStatusBattleListViewItem_o *)&v59->fields.lookup, v98, v96, v97);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v59->fields.m_CancellationTokenSource) > 3 )
                      {
                        v59->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1B71570(
                          (ServantStatusBattleListViewItem_o *)&v59->fields.masterDataBytes,
                          (int32_t)this,
                          v99,
                          v100);
                        if ( LODWORD(v59->fields.m_CancellationTokenSource) > 4 )
                        {
                          v103 = StringLiteral_823/*") -> ("*/;
                          v59->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_823/*") -> ("*/;
                          sub_1B71570((ServantStatusBattleListViewItem_o *)&v59->fields.saveNameList, v103, v101, v102);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v112, 0LL);
                          if ( LODWORD(v59->fields.m_CancellationTokenSource) > 5 )
                          {
                            v59->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1B71570(
                              (ServantStatusBattleListViewItem_o *)&v59->fields.saveDataMapList,
                              (int32_t)this,
                              v104,
                              v105);
                            if ( LODWORD(v59->fields.m_CancellationTokenSource) > 6 )
                            {
                              v108 = (int)StringLiteral_117/*" "*/;
                              *(_QWORD *)&v59->fields.lastFrameTime = StringLiteral_117/*" "*/;
                              sub_1B71570(
                                (ServantStatusBattleListViewItem_o *)&v59->fields.lastFrameTime,
                                v108,
                                v106,
                                v107);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v111, 0LL);
                              if ( LODWORD(v59->fields.m_CancellationTokenSource) > 7 )
                              {
                                v59->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1B71570(
                                  (ServantStatusBattleListViewItem_o *)&v59->fields.masterCheckName,
                                  (int32_t)this,
                                  v109,
                                  v110);
                                if ( LODWORD(v59->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v71 = StringLiteral_814/*")"*/;
                                  v59->fields.lockCountObj = (Il2CppObject *)StringLiteral_814/*")"*/;
                                  p_saveNameList = (ServantStatusBattleListViewItem_o *)&v59->fields.lockCountObj;
LABEL_104:
                                  sub_1B71570(p_saveNameList, v71, v69, v70);
                                  if ( System_String__Concat_61519032((System_String_array *)v59, 0LL) )
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
                sub_1B71830(this, method);
              }
            }
LABEL_119:
            sub_1B71828(this, method);
          }
          v38 = &StringLiteral_5098/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v38 = &StringLiteral_5097/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v38 = &StringLiteral_5095/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v38 = &StringLiteral_5100/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
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
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A1F601 & 1) == 0 )
  {
    sub_1B715CC(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_4A1F601 = 1;
  }
  v3 = sub_1B71818(DataManager__readMasterVersion_d__46_TypeInfo);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B71828(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int32_t v50; // w3
  __int64 v51; // x20
  int32_t v52; // w1
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w1
  int32_t v58; // w2
  int32_t v59; // w3
  __int64 v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w1
  System_String_o *v64; // x8
  DataManager_c *v65; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v68; // x8
  int32_t v69; // w19
  struct DataManager_StaticFields *v70; // x8
  int64_t v71; // x0
  struct DataManager_StaticFields *v72; // x8

  if ( (byte_4A1F60E & 1) == 0 )
  {
    sub_1B715CC(&CatAndMouseGame_TypeInfo, method);
    sub_1B715CC(&char___TypeInfo, v3);
    sub_1B715CC(&Crc32_TypeInfo, v4);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&ManagerConfig_TypeInfo, v6);
    sub_1B715CC(&string___TypeInfo, v7);
    sub_1B715CC(&StringLiteral_5094/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_1B715CC(&StringLiteral_5091/*"DataManager boot load error : list file break"*/, v9);
    sub_1B715CC(&StringLiteral_5093/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_1B715CC(&StringLiteral_5089/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_1B715CC(&StringLiteral_25097/*"~"*/, v12);
    sub_1B715CC(&StringLiteral_21239/*"master data versiton different ("*/, v13);
    sub_1B715CC(&StringLiteral_823/*") -> ("*/, v14);
    sub_1B715CC(&StringLiteral_814/*")"*/, v15);
    sub_1B715CC(&StringLiteral_1887/*"@"*/, v16);
    sub_1B715CC(&StringLiteral_5092/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_4A1F60E = 1;
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
    v24 = (System_Char_array *)sub_1B71674(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_1B71828(0LL, 0LL);
    if ( !v24->max_length )
      sub_1B71830(v24, v24);
    v24->m_Items[2] = -257;
    v25 = System_String__Trim_61535252(v23, v24, 0LL);
    v26 = (System_Char_array *)sub_1B71674(char___TypeInfo, 2LL);
    if ( !v26 )
      sub_1B71828(0LL, 0LL);
    max_length = v26->max_length;
    if ( !max_length )
      sub_1B71830(v26, v26);
    v26->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B71830(v26, v26);
    v26->m_Items[3] = 10;
    if ( !v25 )
      sub_1B71828(v26, v26);
    v28 = System_String__IndexOfAny(v25, v26, 0LL);
    if ( v28 < 2 )
    {
      v29 = &StringLiteral_5093/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v64 = (System_String_o *)*v29;
LABEL_58:
      if ( v64 )
        goto LABEL_59;
      return 1;
    }
    v30 = System_String__Substring_61524508(v25, 0, v28, 0LL);
    v32 = v30;
    if ( !v30 )
      sub_1B71828(0LL, v31);
    if ( !System_String__StartsWith(v30, (System_String_o *)StringLiteral_25097/*"~"*/, 0LL) )
    {
      v29 = &StringLiteral_5094/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v33 = System_String__Substring(v32, 1, 0LL);
    v34 = System_String__Substring(v25, v28 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1B71828(0LL, v36);
    v37 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                 UTF8,
                                 v34,
                                 UTF8->klass->vtable._20_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v38 = Crc32__Compute(v37, 0LL);
    if ( System_UInt32__Parse(v33, 0LL) != v38 )
    {
      v29 = &StringLiteral_5089/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v39 = (System_Char_array *)sub_1B71674(char___TypeInfo, 2LL);
    if ( !v39 )
      sub_1B71828(0LL, 0LL);
    v40 = v39->max_length;
    if ( !v40 )
      sub_1B71830(v39, v39);
    v39->m_Items[2] = 13;
    if ( v40 == 1 )
      sub_1B71830(v39, v39);
    v39->m_Items[3] = 10;
    if ( !v34 )
      sub_1B71828(v39, v39);
    v41 = (__int64)System_String__Split_61527896(v34, v39, 1, 0LL);
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
      v41 = System_String__StartsWith((System_String_o *)v41, (System_String_o *)StringLiteral_1887/*"@"*/, 0LL);
      if ( (v41 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v42 + 24) )
          goto LABEL_78;
        v44 = *(System_String_o **)(v42 + 32);
        v41 = sub_1B71674(char___TypeInfo, 1LL);
        if ( v41 )
        {
          v21 = (const MethodInfo *)v41;
          if ( !*(_DWORD *)(v41 + 24) )
            goto LABEL_78;
          *(_WORD *)(v41 + 32) = 44;
          if ( v44 )
          {
            v41 = (__int64)System_String__Split_61527660(v44, (System_Char_array *)v41, 0LL);
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
                    v29 = &StringLiteral_5092/*"DataManager boot load error : list file parameter error"*/;
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
                  sub_1B71830(v41, v21);
                }
                v41 = sub_1B71674(string___TypeInfo, 5LL);
                if ( v41 )
                {
                  v51 = v41;
                  if ( *(_DWORD *)(v41 + 24) )
                  {
                    v52 = StringLiteral_21239/*"master data versiton different ("*/;
                    *(_QWORD *)(v41 + 32) = StringLiteral_21239/*"master data versiton different ("*/;
                    sub_1B71570((ServantStatusBattleListViewItem_o *)(v41 + 32), v52, v49, v50);
                    if ( *(_DWORD *)(v51 + 24) > 1u )
                    {
                      *(_QWORD *)(v51 + 40) = v48;
                      sub_1B71570((ServantStatusBattleListViewItem_o *)(v51 + 40), (int32_t)v48, v53, v54);
                      if ( *(_DWORD *)(v51 + 24) > 2u )
                      {
                        v57 = StringLiteral_823/*") -> ("*/;
                        *(_QWORD *)(v51 + 48) = StringLiteral_823/*") -> ("*/;
                        sub_1B71570((ServantStatusBattleListViewItem_o *)(v51 + 48), v57, v55, v56);
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
                          sub_1B71570((ServantStatusBattleListViewItem_o *)(v51 + 56), v60, v58, v59);
                          if ( *(_DWORD *)(v51 + 24) > 4u )
                          {
                            v63 = StringLiteral_814/*")"*/;
                            *(_QWORD *)(v51 + 64) = StringLiteral_814/*")"*/;
                            sub_1B71570((ServantStatusBattleListViewItem_o *)(v51 + 64), v63, v61, v62);
                            v64 = System_String__Concat_61519032((System_String_array *)v51, 0LL);
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
        sub_1B71828(v41, v21);
      }
    }
    v29 = &StringLiteral_5091/*"DataManager boot load error : list file break"*/;
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
  ServantStatusBattleListViewItem_o *p_updateData; // x0
  int32_t v11; // w1
  struct DataManager_StaticFields *v12; // x0

  if ( (byte_4A1F5FE & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4A1F5FE = 1;
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
    p_updateData = (ServantStatusBattleListViewItem_o *)&static_fields->updateData;
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
    p_updateData = (ServantStatusBattleListViewItem_o *)&v12->updateData;
    LODWORD(p_updateData[-1].fields.name) = dataVer;
    *(_QWORD *)&p_updateData[-1].fields.isMine = dateVer;
  }
  sub_1B71570(p_updateData, v11, dateVer, (int32_t)obj);
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

  if ( (byte_4A1F5FD & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_4A1F5FD = 1;
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
  int32_t v15; // w3
  System_String_o *v16; // x0
  DataManager_c *v17; // x8
  struct DataManager_StaticFields *v18; // x0
  DataManager_c *v19; // x0

  if ( (byte_4A1F5F7 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, obj);
    sub_1B715CC(&StringLiteral_43/*"\n"*/, v5);
    sub_1B715CC(&StringLiteral_1/*""*/, v6);
    byte_4A1F5F7 = 1;
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
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->serverHash, v8, (int32_t)method, v3);
  if ( obj )
  {
    v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v11 = System_String__op_Equality(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v11 )
    {
      if ( !v10 )
        sub_1B71828(v11, v12);
      v13 = System_String__Substring(v10, v10->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v16 = System_String__Substring_61524508(v10, 0, v10->fields._stringLength - 1, 0LL);
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
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v18->serverHash, (int32_t)v10, v14, v15);
    }
  }
}


void __fastcall DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_4A1F5F9 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, obj);
    byte_4A1F5F9 = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void __fastcall DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_4A1F612 & 1) == 0 )
  {
    sub_1B715CC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_4A1F612 = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1B71AE8(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_38584532(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_38584532(
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
  if ( (byte_4A1F613 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B715CC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B715CC(&StringLiteral_24259/*"updated"*/, v7);
    sub_1B715CC(&StringLiteral_18513/*"deleted"*/, v8);
    this = (DataManager_o *)sub_1B715CC(&StringLiteral_22820/*"replaced"*/, v9);
    byte_4A1F613 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1B71828(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18513/*"deleted"*/,
         (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18513/*"deleted"*/,
                              (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                  (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                    (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      sub_1B71830(this, data);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24259/*"updated"*/,
          (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24259/*"updated"*/,
                            (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v21 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v21
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1B71AE8(v10);
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
                                (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
          (Il2CppObject *)StringLiteral_22820/*"replaced"*/,
          (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_22820/*"replaced"*/,
                            (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v31 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v31
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1B71AE8(v3);
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
                                (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A1F604 & 1) == 0 )
  {
    sub_1B715CC(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_4A1F604 = 1;
  }
  v5 = sub_1B71818(DataManager__updateMasterData_d__49_TypeInfo);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B71828(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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
  int32_t v7; // w3

  if ( (byte_4A1F5FA & 1) == 0 )
  {
    sub_1B715CC(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_4A1F5FA = 1;
  }
  v3 = sub_1B71818(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B71828(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4A1F611 & 1) == 0 )
  {
    sub_1B715CC(&CatAndMouseGame_TypeInfo, method);
    sub_1B715CC(&Crc32_TypeInfo, v3);
    sub_1B715CC(&DataManager_TypeInfo, v4);
    sub_1B715CC(&System_IDisposable_TypeInfo, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_1B715CC(&ManagerConfig_TypeInfo, v8);
    sub_1B715CC(&System_IO_StreamWriter_TypeInfo, v9);
    sub_1B715CC(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1B715CC(&uint_TypeInfo, v11);
    sub_1B715CC(&StringLiteral_43/*"\n"*/, v12);
    sub_1B715CC(&StringLiteral_25100/*"~{0}\n{1}"*/, v13);
    sub_1B715CC(&StringLiteral_1887/*"@"*/, v14);
    sub_1B715CC(&StringLiteral_868/*","*/, v15);
    byte_4A1F611 = 1;
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
    v23 = (System_Text_StringBuilder_o *)sub_1B71818(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_60660752(v23, (size << 7) + 128, 0LL);
    if ( !v23 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_60667400(v23, (System_String_o *)StringLiteral_1887/*"@"*/, 0LL);
    v24 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_60667400(v23, v24->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_60667400(v23, (System_String_o *)StringLiteral_868/*","*/, 0LL);
    System_Text_StringBuilder__Append_60669896(v23, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_60667400(v23, (System_String_o *)StringLiteral_868/*","*/, 0LL);
    System_Text_StringBuilder__Append_60669984(v23, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_60667400(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
                 (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_60667400(v23, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_60667400(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
      sub_1B71828(CacheListFileName, v19);
    v30 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.method)(
                                 CacheListFileName,
                                 v29,
                                 CacheListFileName->klass->vtable._20_System_Collections_IList_Add.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v45 = Crc32__Compute(v30, 0LL);
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v45, v31, v32, v33);
    v35 = System_String__Format_61519876((System_String_o *)StringLiteral_25100/*"~{0}\n{1}"*/, v34, v29, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v36 = CatAndMouseGame__CatGame3(v35, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v38 = (System_IO_StreamWriter_o *)sub_1B71818(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_61674640(v38, v22, 0, UTF8, 0LL);
    if ( !v38 )
      sub_1B71828(v39, v40);
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
      v44 = sub_1BC35AC(v38, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v17; // w3
  char *v18; // x20
  int32_t v19; // w1
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w1
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  System_String_o *v36; // x20
  System_Byte_array *v37; // x21
  System_String_o *v38; // x0
  System_String_o *v39; // x20
  System_String_o *v40; // x20
  System_Text_Encoding_o *v41; // x22
  System_IO_StreamWriter_o *v42; // x21
  uint32_t v43; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A1F60F & 1) == 0 )
  {
    sub_1B715CC(&CatAndMouseGame_TypeInfo, method);
    sub_1B715CC(&Crc32_TypeInfo, v2);
    sub_1B715CC(&DataManager_TypeInfo, v3);
    sub_1B715CC(&ManagerConfig_TypeInfo, v4);
    sub_1B715CC(&System_IO_StreamWriter_TypeInfo, v5);
    sub_1B715CC(&string___TypeInfo, v6);
    sub_1B715CC(&StringLiteral_43/*"\n"*/, v7);
    sub_1B715CC(&StringLiteral_25097/*"~"*/, v8);
    sub_1B715CC(&StringLiteral_1887/*"@"*/, v9);
    sub_1B715CC(&StringLiteral_868/*","*/, v10);
    byte_4A1F60F = 1;
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
    UTF8 = (char *)sub_1B71674(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v18 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v19 = StringLiteral_1887/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1887/*"@"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(UTF8 + 32), v19, v16, v17);
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
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v18 + 40), v22, v20, v21);
    if ( *((_DWORD *)v18 + 6) <= 2u )
      goto LABEL_26;
    v25 = (int)StringLiteral_868/*","*/;
    *((_QWORD *)v18 + 6) = StringLiteral_868/*","*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v18 + 48), v25, v23, v24);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v18 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v18 + 7) = UTF8;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v18 + 56), (int32_t)UTF8, v26, v27);
    if ( *((_DWORD *)v18 + 6) <= 4u
      || (v30 = (int)StringLiteral_868/*","*/,
          *((_QWORD *)v18 + 8) = StringLiteral_868/*","*/,
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v18 + 64), v30, v28, v29),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v18 + 6) <= 5u)
      || (*((_QWORD *)v18 + 9) = UTF8,
          sub_1B71570((ServantStatusBattleListViewItem_o *)(v18 + 72), (int32_t)UTF8, v31, v32),
          *((_DWORD *)v18 + 6) <= 6u) )
    {
LABEL_26:
      sub_1B71830(UTF8, v15);
    }
    v35 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v18 + 10) = StringLiteral_43/*"\n"*/;
    sub_1B71570((ServantStatusBattleListViewItem_o *)(v18 + 80), v35, v33, v34);
    v36 = System_String__Concat_61519032((System_String_array *)v18, 0LL);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_27;
    v37 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                                 UTF8,
                                 v36,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v43 = Crc32__Compute(v37, 0LL);
    v38 = System_UInt32__ToString((uint32_t)&v43, 0LL);
    v39 = System_String__Concat_61518768(
            (System_String_o *)StringLiteral_25097/*"~"*/,
            v38,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v36,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v40 = CatAndMouseGame__CatGame1(v39, 0, 0LL);
    v41 = System_Text_Encoding__get_UTF8(0LL);
    v42 = (System_IO_StreamWriter_o *)sub_1B71818(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_61674640(v42, CacheVersionFileName, 0, v41, 0LL);
    if ( !v42 )
LABEL_27:
      sub_1B71828(UTF8, v15);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v42->klass->vtable._16_Write.method)(
      v42,
      v40,
      v42->klass->vtable._17_Write.methodPtr);
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
  int32_t v4; // w3

  if ( (byte_4A1F61C & 1) == 0 )
  {
    sub_1B715CC(&DataManager___c_TypeInfo, v1);
    byte_4A1F61C = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(DataManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v2;
  sub_1B71570((ServantStatusBattleListViewItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( (byte_4A1F61D & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1B715CC(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_4A1F61D = 1;
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
                                                  (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                         (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1B71828(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1B71830(this, *(_QWORD *)&a);
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
  if ( (byte_4A1F61E & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1B715CC(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_4A1F61E = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1B71828(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_34B35B4 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1B71828(this, 0LL);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v16; // w2
  int32_t v17; // w3
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
  ServantStatusBattleListViewItem_o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
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
  int32_t v49; // w3
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
  int32_t v68; // w2
  int32_t v69; // w3
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
  int32_t v86; // w3

  v2 = this;
  if ( (byte_4A1F61F & 1) == 0 )
  {
    sub_1B715CC(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B715CC(&byte___TypeInfo, v3);
    sub_1B715CC(&CatAndMouseGame_TypeInfo, v4);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&System_GC_TypeInfo, v6);
    sub_1B715CC(&System_IDisposable_TypeInfo, v7);
    sub_1B715CC(&long___TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1B715CC(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_1B715CC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_4A1F61F = 1;
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
        v14 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v14, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v14;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(p__2__current, (int32_t)v14, v16, v17);
        v18 = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
          v23 = (System_IO_MemoryStream_o *)sub_1B71818(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v23, 0LL);
          v24 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v25 = CatAndMouseGame__MouseGameZ(v24, 0LL);
          v26 = sub_1B71674(byte___TypeInfo, 0x4000LL);
          v28 = v26;
          if ( !v26 )
            sub_1B71828(0LL, v27);
          if ( !v25 )
            sub_1B71828(v26, v27);
          while ( 1 )
          {
            v29 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v25->klass->vtable._33_unknown.method)(
                    v25,
                    v28,
                    0LL,
                    *(unsigned int *)(v28 + 24),
                    v25->klass->vtable._34_Read.methodPtr);
            if ( (int)v29 <= 0 )
              break;
            if ( !v23 )
              sub_1B71828(v29, v30);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v23->klass->vtable._36_Write.method)(
              v23,
              v28,
              0LL,
              (unsigned int)v29,
              v23->klass->vtable._37_Write.methodPtr);
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
            v40 = sub_1BC35AC(v25, System_IDisposable_TypeInfo, 0LL);
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
              v46 = sub_1BC35AC(v24, System_IDisposable_TypeInfo, 0LL);
            }
            v41 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v46)(v24, *(_QWORD *)(v46 + 8));
          }
          if ( !v23 )
            sub_1B71828(v41, v42);
          v47 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v23->klass->vtable._42_ToArray.method)(
                  v23,
                  v23->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v47;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, v47, v48, v49);
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
            v53 = sub_1BC35AC(v23, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v53)(v23, *(_QWORD *)(v53 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v55 = (System_IO_MemoryStream_o *)sub_1B71818(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_61649516(v55, masterDataBytes, 0LL);
          v56 = (System_IO_BinaryReader_o *)sub_1B71818(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v56, (System_IO_Stream_o *)v55, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1B71828(v57, v58);
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
                  v83 = sub_1BC35AC(v55, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v83)(v55, *(_QWORD *)(v83 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62551572(0LL);
              v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v84;
              v32 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B71570(v32, (int32_t)v84, v85, v86);
              v35 = 2;
LABEL_87:
              *(_DWORD *)&v32[-1].fields.isMine = v35;
              v18 = 1;
              return v18 & 1;
            }
          }
          else
          {
            if ( !v56 )
              sub_1B71828(v57, v58);
            do
            {
              v61 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v56->klass->vtable._15_ReadInt32.method)(
                      v56,
                      v56->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v55 )
                sub_1B71828(v61, v62);
              v63 = v61;
              v64 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v55->klass->vtable._12_get_Position.method)(
                      v55,
                      v55->klass->vtable._13_set_Position.methodPtr);
              v65 = v63;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v55->klass->vtable._31_Seek.method)(
                v55,
                v63,
                1LL,
                v55->klass->vtable._32_SetLength.methodPtr);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v67 = sub_1B71674(long___TypeInfo, 2LL);
              v70 = v67;
              if ( !v67 )
                sub_1B71828(0LL, 0LL);
              v71 = *(_DWORD *)(v67 + 24);
              if ( !v71 )
                sub_1B71830(v67, v67);
              *(_QWORD *)(v67 + 32) = v64;
              if ( v71 == 1 )
                sub_1B71830(v67, v67);
              *(_QWORD *)(v67 + 40) = v65;
              if ( !saveDataMapList )
                sub_1B71828(v67, v67);
              items = saveDataMapList->fields._items;
              v73 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1B71828(v67, v67);
              v74 = saveDataMapList->fields._size;
              if ( (unsigned int)v74 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v67,
                  *(const MethodInfo_34D0260 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
              }
              else
              {
                v75 = &items->obj.klass + v74;
                saveDataMapList->fields._size = v74 + 1;
                v75[4] = (Il2CppClass *)v70;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v75 + 4), v70, v68, v69);
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
            v79 = sub_1BC35AC(v56, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v79)(v56, *(_QWORD *)(v79 + 8));
          goto LABEL_76;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v31, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v31;
        v32 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(v32, (int32_t)v31, v33, v34);
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
        sub_1B71828(this, method);
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3
  bool result; // w0
  bool MasterVersionFile; // w19
  DataManager_c *v12; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v14; // w9

  v2 = this;
  if ( (byte_4A1F620 & 1) == 0 )
  {
    sub_1B715CC(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1B715CC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_4A1F620 = 1;
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
        v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B71570(p__2__current, (int32_t)v6, v8, v9);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1B71828(this, method);
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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
  int32_t v3; // w3
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
  struct DataManager_o *_4__this; // x20
  DataManager_c *v75; // x0
  int v76; // w8
  MasterDataUnpakcer_o *v77; // x21
  __int64 v78; // x0
  __int64 v79; // x1
  Il2CppObject *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  UnityEngine_WaitForEndOfFrame_o *v83; // x20
  ServantStatusBattleListViewItem_o *v84; // x19
  int32_t v85; // w2
  int32_t v86; // w3
  int v87; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v89; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v91; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  System_String_o *CachePath; // x21
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w2
  int32_t v98; // w3
  int32_t v99; // w2
  int32_t v100; // w3
  __int64 v101; // x1
  DataManager_c *v102; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v104; // x21
  System_Byte_array *v105; // x0
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w2
  int32_t v109; // w3
  DataManager_c *v110; // x0
  struct DataManager_StaticFields *static_fields; // x0
  UnityEngine_WaitForEndOfFrame_o *v112; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v114; // w2
  int32_t v115; // w3
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v118; // x0
  int32_t v119; // w2
  int32_t v120; // w3
  int32_t v121; // w2
  int32_t v122; // w3
  UnityEngine_WaitForEndOfFrame_o *v123; // x20
  int32_t v124; // w2
  int32_t v125; // w3
  System_Func_bool__o *v126; // x21
  UnityEngine_WaitUntil_o *v127; // x20
  int32_t v128; // w2
  int32_t v129; // w3
  int32_t v130; // w1
  ServantStatusBattleListViewItem_o *p_dataMapDict_5__6; // x0
  UnityEngine_WaitForEndOfFrame_o *v132; // x20
  int32_t v133; // w2
  int32_t v134; // w3
  UnityEngine_WaitForEndOfFrame_o *v135; // x20
  int32_t v136; // w2
  int32_t v137; // w3
  int v138; // w8
  DataManager_c *v139; // x8
  struct DataManager_StaticFields *v140; // x8
  int v141; // w9
  Il2CppObject *v142; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int32_t v144; // w2
  int32_t v145; // w3
  int32_t v146; // w2
  int32_t v147; // w3
  struct DataMasterBase_array *v148; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v150; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  int32_t v153; // w2
  int32_t v154; // w3
  __int64 v155; // x0
  __int64 v156; // x1
  struct DataManager___c__DisplayClass49_0_o *v157; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int32_t v160; // w2
  int32_t v161; // w3
  struct DataManager___c__DisplayClass49_0_o *v162; // x8
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v165; // x24
  System_Predicate_object__o *v166; // x23
  int32_t v167; // w2
  int32_t v168; // w3
  int32_t v169; // w2
  int32_t v170; // w3
  System_Collections_Generic_List_object__o *v171; // x22
  DataManager__updateMasterData_d__49_o *v172; // x24
  System_Predicate_object__o *v173; // x23
  int32_t Index; // w0
  int32_t v175; // w22
  int32_t v176; // w2
  int32_t v177; // w3
  __int64 v178; // x8
  _QWORD *v179; // x9
  __int64 _2__current_low; // x10
  __int64 v181; // x8
  int32_t v182; // w2
  int32_t v183; // w3
  __int64 v184; // x8
  _QWORD *v185; // x9
  __int64 v186; // x10
  __int64 v187; // x8
  UnityEngine_WaitForEndOfFrame_o *v188; // x20
  int32_t v189; // w2
  int32_t v190; // w3
  ManagerConfig_c *v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  int32_t v194; // w2
  int32_t v195; // w3
  struct System_Collections_Generic_List_string__o *v196; // x8
  System_Collections_Generic_List_int__o *v197; // x22
  int32_t v198; // w2
  int32_t v199; // w3
  ManagerConfig_c *v200; // x0
  __int64 v201; // x22
  int32_t v202; // w2
  int32_t v203; // w3
  DataManager__updateMasterData_d__49_o *v204; // x23
  int32_t v205; // w2
  int32_t v206; // w3
  DataManager__updateMasterData_d__49_o *v207; // x23
  int32_t v208; // w2
  int32_t v209; // w3
  DataManager__updateMasterData_d__49_o *v210; // x23
  int32_t v211; // w2
  int32_t v212; // w3
  DataManager__updateMasterData_d__49_o *v213; // x23
  int32_t v214; // w2
  int32_t v215; // w3
  DataManager__updateMasterData_d__49_o *v216; // x23
  int32_t v217; // w2
  int32_t v218; // w3
  DataManager__updateMasterData_d__49_o *v219; // x23
  int32_t v220; // w2
  int32_t v221; // w3
  DataManager__updateMasterData_d__49_o *v222; // x23
  int32_t v223; // w2
  int32_t v224; // w3
  DataManager__updateMasterData_d__49_o *v225; // x23
  __int64 v226; // x8
  __int64 v227; // x29
  DataMasterBase_o *v228; // x23
  __int64 v229; // x24
  int32_t v230; // w2
  int32_t v231; // w3
  struct System_String_o *v232; // x1
  System_Collections_Generic_List_object__o *v233; // x25
  System_Predicate_object__o *v234; // x26
  int32_t v235; // w24
  Il2CppObject *p_obj; // x25
  const MethodInfo_35ED708 *v237; // x3
  const MethodInfo_35ED708 *v238; // x3
  const MethodInfo *v239; // x6
  __int64 v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  UnityEngine_WaitForEndOfFrame_o *v243; // x20
  int32_t v244; // w2
  int32_t v245; // w3
  ManagerConfig_c *v246; // x0
  Il2CppObject *lockCountObj; // x22
  DataManager_c *v248; // x0
  int v249; // w21
  DataManager_c *v250; // x8
  UnityEngine_WaitForEndOfFrame_o *v251; // x20
  int32_t v252; // w2
  int32_t v253; // w3
  int32_t v254; // w3
  struct System_Collections_Generic_List_string__o *v255; // x8
  int32_t size; // w2
  int v257; // w9
  struct System_Collections_Generic_List_long____o *v258; // x8
  int32_t v259; // w2
  int v260; // w9
  UnityEngine_WaitForEndOfFrame_o *v261; // x20
  int32_t v262; // w2
  int32_t v263; // w3
  UnityEngine_WaitForEndOfFrame_o *v264; // x20
  int32_t v265; // w2
  int32_t v266; // w3
  UnityEngine_WaitForEndOfFrame_o *v267; // x20
  int32_t v268; // w2
  int32_t v269; // w3
  __int64 v270; // x0
  struct DataMasterBase_array *v271; // x9
  LastUsedDeckNumberManager_c *v272; // x0
  EventRandomMissionClearManager_c *v273; // x0
  DataManager_c *v274; // x8
  UnityEngine_WaitForEndOfFrame_o *v275; // x20
  int32_t v276; // w2
  int32_t v277; // w3
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-A0h]
  System_Nullable_long__o v279; // [xsp+8h] [xbp-98h] BYREF
  System_Nullable_long__o v280; // [xsp+18h] [xbp-88h] BYREF
  int v281; // [xsp+30h] [xbp-70h]
  bool lockTaken; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v283; // 0:x0.16
  System_Nullable_long__o v284; // 0:x0.16

  v4 = this;
  if ( (byte_4A1F621 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&CatAndMouseGame_TypeInfo, v5);
    sub_1B715CC(&System_Convert_TypeInfo, v6);
    sub_1B715CC(&Method_DataManager_GetMasterData_ServantProfileMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMaster_EventServantMaster___, v8);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantClassMaster___, v9);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v10);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantCommentMaster___, v11);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v12);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantMaster___, v13);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantProfileMaster___, v14);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v15);
    sub_1B715CC(&Method_DataManager__updateMasterData_b__49_0__, v16);
    sub_1B715CC(&DataManager_TypeInfo, v17);
    sub_1B715CC(&DataMasterBase___TypeInfo, v18);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v19);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v20);
    sub_1B715CC(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v21);
    sub_1B715CC(&EventRandomMissionClearManager_TypeInfo, v22);
    sub_1B715CC(&System_Func_bool__TypeInfo, v23);
    sub_1B715CC(&System_GC_TypeInfo, v24);
    sub_1B715CC(&ImageLimitCount_TypeInfo, v25);
    sub_1B715CC(&LastUsedDeckNumberManager_TypeInfo, v26);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____Add__, v29);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Clear__, v30);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____Clear__, v31);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Contains__, v32);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__FindIndex__, v33);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__RemoveAt__, v34);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____RemoveAt__, v35);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v36);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____get_Count__, v37);
    sub_1B715CC(&Method_System_Collections_Generic_List_string__get_Count__, v38);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____get_Item__, v39);
    sub_1B715CC(&Method_System_Collections_Generic_List_long____set_Item__, v40);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v41);
    sub_1B715CC(&LogoMain_TypeInfo, v42);
    sub_1B715CC(&ManagerConfig_TypeInfo, v43);
    sub_1B715CC(&MasterDataUnpakcer_TypeInfo, v44);
    sub_1B715CC(&MaterialBranchRouteManager_TypeInfo, v45);
    sub_1B715CC(&MaterialGroupClearHistoryManager_TypeInfo, v46);
    sub_1B715CC(&MaterialServantLimitCountManager_TypeInfo, v47);
    sub_1B715CC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v48);
    sub_1B715CC(&Method_System_Nullable_long___ctor__, v49);
    sub_1B715CC(&OtherUserNewManager_TypeInfo, v50);
    sub_1B715CC(&System_Predicate_string__TypeInfo, v51);
    sub_1B715CC(&ServantCommentManager_TypeInfo, v52);
    sub_1B715CC(&ServantProfileEventJoinManager_TypeInfo, v53);
    sub_1B715CC(&ServantProfileLimitCountManager_TypeInfo, v54);
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v55);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56);
    sub_1B715CC(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v57);
    sub_1B715CC(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__, v58);
    sub_1B715CC(&DataManager___c__DisplayClass49_0_TypeInfo, v59);
    sub_1B715CC(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__, v60);
    sub_1B715CC(&DataManager___c__DisplayClass49_1_TypeInfo, v61);
    sub_1B715CC(&UserCommandCodeCollectionManager_TypeInfo, v62);
    sub_1B715CC(&UserCommandCodeNewManager_TypeInfo, v63);
    sub_1B715CC(&UserEquipNewManager_TypeInfo, v64);
    sub_1B715CC(&UserMissionProgressManager_TypeInfo, v65);
    sub_1B715CC(&UserServantCollectionManager_TypeInfo, v66);
    sub_1B715CC(&UserServantLockManager_TypeInfo, v67);
    sub_1B715CC(&UserServantNewManager_TypeInfo, v68);
    sub_1B715CC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v69);
    sub_1B715CC(&UnityEngine_WaitUntil_TypeInfo, v70);
    sub_1B715CC(&WarBoardMessageHistoryManager_TypeInfo, v71);
    sub_1B715CC(&WarBoardMovieHistoryManager_TypeInfo, v72);
    this = (DataManager__updateMasterData_d__49_o *)sub_1B715CC(&StringLiteral_11415/*"SCRIPT"*/, v73);
    byte_4A1F621 = 1;
  }
  lockTaken = 0;
  v281 = 0;
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
        goto LABEL_288;
      datalist = _4__this->fields.datalist;
      if ( !datalist )
        goto LABEL_288;
      v4->fields._dataListCount_5__2 = *(_QWORD *)&datalist->max_length;
      saveDataMapList = _4__this->fields.saveDataMapList;
      if ( !saveDataMapList )
        goto LABEL_288;
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
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6, 0, v95, v96);
      v4->fields._dataMapObject_5__7 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, 0, v97, v98);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v99, v100);
      v102 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v102 = DataManager_TypeInfo;
      }
      updateData = v102->static_fields->updateData;
      if ( !updateData )
        sub_1B71828(0LL, v101);
      v104 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v105 = System_Convert__FromBase64String(v104, 0LL);
      v4->fields._cryptBytes_5__8 = v105;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v105, v106, v107);
      v110 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v110 = DataManager_TypeInfo;
      }
      static_fields = v110->static_fields;
      static_fields->updateData = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->updateData, 0, v108, v109);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62551572(0LL);
      v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v112, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v112;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(p__2__current, (int32_t)v112, v114, v115);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v4->fields._cryptBytes_5__8;
      v4->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v118 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_1B71828(v118, v118);
      _4__this->fields.masterDataBytes = v118;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v118, v119, v120);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v121, v122);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62551572(0LL);
      v123 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v123, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v123;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(v84, (int32_t)v123, v124, v125);
      v87 = 2;
      goto LABEL_82;
    case 2:
      v4->fields.__1__state = -1;
      v77 = (MasterDataUnpakcer_o *)sub_1B71818(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v77, 0LL);
      if ( !_4__this )
        sub_1B71828(v78, v79);
      if ( !v77 )
        sub_1B71828(v78, v79);
      v80 = MasterDataUnpakcer__Unpack_37977484(v77, _4__this->fields.masterDataBytes, 0LL);
      v4->fields._dataMapObject_5__7 = v80;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v80, v81, v82);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62551572(0LL);
      v83 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v83, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v83;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(v84, (int32_t)v83, v85, v86);
      v87 = 3;
      goto LABEL_82;
    case 3:
      dataMapObject_5__7 = v4->fields._dataMapObject_5__7;
      v4->fields.__1__state = -1;
      if ( dataMapObject_5__7 )
      {
        v89 = System_Collections_Generic_Dictionary_string__long____TypeInfo;
        methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__long____TypeInfo->vtable._0_Equals.methodPtr);
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__long____TypeInfo )
            v91 = (struct System_Collections_Generic_Dictionary_string__long____o *)dataMapObject_5__7;
          else
            v91 = 0LL;
        }
        else
        {
          v91 = 0LL;
        }
        v4->fields._dataMapDict_5__6 = v91;
        p_dataMapDict_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6;
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == v89 )
            v130 = (int)dataMapObject_5__7;
          else
            v130 = 0;
        }
        else
        {
          v130 = 0;
        }
      }
      else
      {
        v130 = 0;
        v4->fields._dataMapDict_5__6 = 0LL;
        p_dataMapDict_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6;
      }
      sub_1B71570(p_dataMapDict_5__6, v130, v2, v3);
      if ( !_4__this )
        goto LABEL_288;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v135 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v135, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v135;
        v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B71570(v84, (int32_t)v135, v136, v137);
        v87 = 4;
        goto LABEL_82;
      }
LABEL_75:
      if ( !v4->fields._dataMapDict_5__6 )
        goto LABEL_83;
      v138 = 0;
      v4->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v138 < v4->fields._dataListCount_5__2 )
        {
          v142 = (Il2CppObject *)sub_1B71818(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v142, 0LL);
          v4->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v142;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
          sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v142, v144, v145);
          v148 = _4__this->fields.datalist;
          if ( !v148 )
            goto LABEL_288;
          i_5__9 = v4->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= v148->max_length )
            goto LABEL_289;
          v150 = v148->m_Items[i_5__9];
          if ( !v150 )
            goto LABEL_288;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_288;
          MasterName_k__BackingField = v150->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1B71570(
            (ServantStatusBattleListViewItem_o *)&this->fields,
            (int32_t)MasterName_k__BackingField,
            v146,
            v147);
          _8__1 = v4->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_288;
          this = (DataManager__updateMasterData_d__49_o *)v4->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_288;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0LL;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, 0, v153, v154);
            v157 = v4->fields.__8__1;
            if ( !v157 )
              sub_1B71828(v155, v156);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1B71828(0LL, v156);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v157->fields.masterName,
                     (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v160, v161);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v267 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v267, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v267;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B71570(v84, (int32_t)v267, v268, v269);
              v87 = 5;
              goto LABEL_82;
            }
LABEL_96:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
            v162 = v4->fields.__8__1;
            if ( !v162 || !this )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v162->fields.masterName,
                                                              (const MethodInfo_34D05F0 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v4->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_288;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v250 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v250 = DataManager_TypeInfo;
                }
                v140 = v250->static_fields;
                result = 0;
                v141 = 6;
                goto LABEL_286;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v165 = *p__8__1;
            v166 = (System_Predicate_object__o *)sub_1B71818(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v166,
              (Il2CppObject *)v165,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0LL);
            if ( !saveNameList )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v166,
                                                              (const MethodInfo_34D0AB8 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_288;
              method = *(const MethodInfo **)&(*p__8__1)->fields.__1__state;
              v178 = *(_QWORD *)&this->fields.__1__state;
              v179 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v178 )
                goto LABEL_288;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v178 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_34D0260 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
              }
              else
              {
                v181 = v178 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v181 + 32) = method;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v181 + 32), (int32_t)method, v167, v168);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_288;
              method = (const MethodInfo *)v4->fields._dataMap_5__10;
              v184 = *(_QWORD *)&this->fields.__1__state;
              v185 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v184 )
                goto LABEL_288;
              v186 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v186 >= *(_DWORD *)(v184 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_34D0260 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
              }
              else
              {
                v187 = v184 + 8 * v186;
                LODWORD(this->fields.__2__current) = v186 + 1;
                *(_QWORD *)(v187 + 32) = method;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v187 + 32), (int32_t)method, v182, v183);
              }
              ++v4->fields._saveDataCount_5__3;
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
                &v4->fields._dataMap_5__10->obj,
                (const MethodInfo_34CFFE4 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0LL;
            v4->fields._isAdd_5__4 = 1;
            sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, 0, v169, v170);
          }
          else
          {
            v171 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v172 = *p__8__1;
            v173 = (System_Predicate_object__o *)sub_1B71818(System_Predicate_string__TypeInfo);
            System_Predicate_object____ctor(
              v173,
              (Il2CppObject *)v172,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0LL);
            if ( !v171 )
              goto LABEL_288;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v171,
                      (System_Predicate_T__o *)v173,
                      (const MethodInfo_34D0AB8 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_125;
            v175 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v175,
              (const MethodInfo_34D1A34 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v175,
              (const MethodInfo_34D1A34 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0LL;
          sub_1B71570((ServantStatusBattleListViewItem_o *)p__8__1, 0, v176, v177);
LABEL_125:
          v138 = v4->fields._i_5__9 + 1;
          v4->fields._i_5__9 = v138;
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
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, v3);
        v4->fields._dataMapObject_5__7 = 0LL;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, 0, v192, v193);
        v4->fields._cryptBytes_5__8 = 0LL;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v194, v195);
        if ( !_4__this )
          goto LABEL_288;
LABEL_134:
        v196 = _4__this->fields.saveNameList;
        if ( !v196 )
LABEL_288:
          sub_1B71828(this, method);
        if ( v196->fields._size <= 0 )
        {
LABEL_83:
          v139 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v139 = DataManager_TypeInfo;
          }
          v140 = v139->static_fields;
          result = 0;
          v141 = 5;
          goto LABEL_286;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v197 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v197,
          (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v197;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v197, v198, v199);
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
                 (System_String_o *)StringLiteral_11415/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_288;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v201 = sub_1B71674(DataMasterBase___TypeInfo, 8LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v201 )
                goto LABEL_288;
              v204 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B71708(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( !*(_DWORD *)(v201 + 24) )
                goto LABEL_289;
              *(_QWORD *)(v201 + 32) = v204;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v201 + 32), (int32_t)v204, v202, v203);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantClassMaster___);
              v207 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B71708(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 1u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 40) = v207;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v201 + 40), (int32_t)v207, v205, v206);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v210 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B71708(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 2u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 48) = v210;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v201 + 48), (int32_t)v210, v208, v209);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v213 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B71708(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 3u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 56) = v213;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v201 + 56), (int32_t)v213, v211, v212);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v216 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B71708(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 4u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 64) = v216;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v201 + 64), (int32_t)v216, v214, v215);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_EventServantMaster___);
              v219 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B71708(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 5u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 72) = v219;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v201 + 72), (int32_t)v219, v217, v218);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v222 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B71708(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 6u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 80) = v222;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v201 + 80), (int32_t)v222, v220, v221);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v225 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B71708(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                {
LABEL_238:
                  v270 = sub_1B7184C(this);
                  sub_1B716F4(v270, 0LL);
                }
              }
              if ( *(_DWORD *)(v201 + 24) <= 7u )
LABEL_289:
                sub_1B71830(this, method);
              *(_QWORD *)(v201 + 88) = v225;
              sub_1B71570((ServantStatusBattleListViewItem_o *)(v201 + 88), (int32_t)v225, v223, v224);
              v226 = *(_QWORD *)(v201 + 24);
              if ( (int)v226 >= 1 )
              {
                v227 = 0LL;
                while ( (unsigned int)v227 < (unsigned int)v226 )
                {
                  v228 = *(DataMasterBase_o **)(v201 + 32 + 8 * v227);
                  v229 = sub_1B71818(DataManager___c__DisplayClass49_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v229, 0LL);
                  if ( !v228 )
                    goto LABEL_288;
                  if ( !v229 )
                    goto LABEL_288;
                  v232 = v228->fields._MasterName_k__BackingField;
                  *(_QWORD *)(v229 + 16) = v232;
                  sub_1B71570((ServantStatusBattleListViewItem_o *)(v229 + 16), (int32_t)v232, v230, v231);
                  v233 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v234 = (System_Predicate_object__o *)sub_1B71818(System_Predicate_string__TypeInfo);
                  System_Predicate_object____ctor(
                    v234,
                    (Il2CppObject *)v229,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0LL);
                  if ( !v233 )
                    goto LABEL_288;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v233,
                                                                    (System_Predicate_T__o *)v234,
                                                                    (const MethodInfo_34D0AB8 *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v235 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    p_obj = &_4__this->fields.masterDataBytes->obj;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v235,
                                                                      (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_289;
                    v283.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v283.fields.hasValue = &v280;
                    *(_QWORD *)&v280.fields.hasValue = 0LL;
                    v280.fields.value = 0LL;
                    System_Nullable_long____ctor(v283, Method_System_Nullable_long___ctor__, v237);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v235,
                                                                      (const MethodInfo_34CFF90 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_289;
                    v284.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v284.fields.hasValue = &v279;
                    *(_QWORD *)&v279.fields.hasValue = 0LL;
                    v279.fields.value = 0LL;
                    System_Nullable_long____ctor(v284, Method_System_Nullable_long___ctor__, v238);
                    DataMasterBase__Replaced(v228, p_obj, v280, v279, v239);
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_288;
                    v240 = *(_QWORD *)&this->fields.__1__state;
                    v241 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v240 )
                      goto LABEL_288;
                    v242 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v242 >= *(_DWORD *)(v240 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v235,
                        *(const MethodInfo_34B323C **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v242 + 1;
                      *(_DWORD *)(v240 + 4 * v242 + 32) = v235;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v226 = *(_QWORD *)(v201 + 24);
                  if ( (int)++v227 >= (int)v226 )
                    goto LABEL_189;
                }
                goto LABEL_289;
              }
LABEL_189:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
                  goto LABEL_201;
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_201:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v243 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v243, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v243;
                  v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B71570(v84, (int32_t)v243, v244, v245);
                  v87 = 7;
                  goto LABEL_82;
                }
                goto LABEL_288;
              }
            }
          }
        }
LABEL_202:
        DataManager__StartMasterLoadThread(
          _4__this,
          v4->fields._saveDataCount_5__3,
          v4->fields._loadedIndices_5__5,
          0LL);
        if ( v4->fields._isAdd_5__4 )
        {
          v246 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v246 = ManagerConfig_TypeInfo;
          }
          if ( !v246->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, 0LL);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v264 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v264, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v264;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B71570(v84, (int32_t)v264, v265, v266);
              v87 = 8;
              goto LABEL_82;
            }
LABEL_56:
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            this = (DataManager__updateMasterData_d__49_o *)DataManager__getCacheFileName(0LL);
            if ( _4__this )
            {
              DataManager__StartWriteLocalFile(_4__this, (System_String_o *)this, 0LL);
              v126 = (System_Func_bool__o *)sub_1B71818(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v126,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v127 = (UnityEngine_WaitUntil_o *)sub_1B71818(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v127, v126, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v127;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B71570(v84, (int32_t)v127, v128, v129);
              v87 = 9;
              goto LABEL_82;
            }
            goto LABEL_288;
          }
        }
LABEL_206:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_62731232(lockCountObj, &lockTaken, 0LL);
        if ( _4__this->fields.nowLoadCount >= v4->fields._saveDataCount_5__3 )
        {
          v249 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v248 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v248 = DataManager_TypeInfo;
          }
          v248->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, 0LL);
          v249 = 20;
        }
        else
        {
          v249 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
        if ( v249 == 62 )
        {
          v251 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v251, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v251;
          v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B71570(v84, (int32_t)v251, v252, v253);
          v87 = 11;
          goto LABEL_82;
        }
        if ( v249 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, 0LL);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          v255 = _4__this->fields.saveNameList;
          if ( v255 )
          {
            size = v255->fields._size;
            v257 = v255->fields._version + 1;
            v255->fields._size = 0;
            v255->fields._version = v257;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v255->fields._items, 0, size, 0LL);
            v258 = _4__this->fields.saveDataMapList;
            if ( v258 )
            {
              v259 = v258->fields._size;
              v260 = v258->fields._version + 1;
              v258->fields._size = 0;
              v258->fields._version = v260;
              if ( v259 >= 1 )
                System_Array__Clear((System_Array_o *)v258->fields._items, 0, v259, 0LL);
              _4__this->fields.masterDataBytes = 0LL;
              sub_1B71570((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, 0, v259, v254);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62551572(0LL);
              v261 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v261, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v261;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B71570(v84, (int32_t)v261, v262, v263);
              v87 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_288;
        }
        return 0;
      }
      v188 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v188, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v188;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B71570(v84, (int32_t)v188, v189, v190);
      v87 = 6;
LABEL_82:
      *(_DWORD *)&v84[-1].fields.isMine = v87;
      return 1;
    case 4:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_75;
    case 5:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_96;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_129;
    case 7:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_202;
    case 8:
      v4->fields.__1__state = -1;
      goto LABEL_56;
    case 9:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      if ( _4__this->fields.writeMasterDataThreadException )
      {
        v75 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v75 = DataManager_TypeInfo;
        }
        v75->static_fields->updateMasterDataResult = 4;
        DataManager__StopMasterLoadThread(_4__this, 0LL);
        return 0;
      }
      DataManager__writeMasterDataListFile(_4__this, 0LL);
      DataManager__writeMasterVersionFile(_4__this, 0LL);
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v132 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v132, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v132;
        v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B71570(v84, (int32_t)v132, v133, v134);
        v87 = 10;
        goto LABEL_82;
      }
      goto LABEL_206;
    case 0xA:
    case 0xB:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_288;
      goto LABEL_206;
    case 0xC:
      v76 = 0;
      v4->fields.__1__state = -1;
      v4->fields._i_5__9 = 0;
      goto LABEL_246;
    case 0xD:
      v4->fields.__1__state = -1;
      while ( 1 )
      {
        v76 = v4->fields._i_5__9 + 1;
        v4->fields._i_5__9 = v76;
LABEL_246:
        if ( v76 >= v4->fields._dataListCount_5__2 )
          break;
        if ( !_4__this )
          goto LABEL_288;
        v271 = _4__this->fields.datalist;
        if ( !v271 )
          goto LABEL_288;
        if ( v76 >= v271->max_length )
          goto LABEL_289;
        this = (DataManager__updateMasterData_d__49_o *)v271->m_Items[v76];
        if ( !this )
          goto LABEL_288;
        this = (DataManager__updateMasterData_d__49_o *)((__int64 (__fastcall *)(DataManager__updateMasterData_d__49_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                          this,
                                                          this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (DataManager__updateMasterData_d__49_o *)DataManager__CheckWaitforFrame(_4__this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v275 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v275, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v275;
            v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B71570(v84, (int32_t)v275, v276, v277);
            v87 = 13;
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
      v272 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__Initialize((const MethodInfo *)v272);
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      MaterialBranchRouteManager__Initialize(0LL);
      v273 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__Initialize((const MethodInfo *)v273);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      MaterialGroupClearHistoryManager__Initialize(0LL);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      WarBoardMessageHistoryManager__Initialize(0LL);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      WarBoardMovieHistoryManager__Initialize(0LL);
      v274 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v274 = DataManager_TypeInfo;
      }
      v140 = v274->static_fields;
      result = 0;
      v141 = 1;
LABEL_286:
      v140->updateMasterDataResult = v141;
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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
  int32_t v3; // w3
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
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  DataManager_c *v24; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  DataManager_c *v31; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v34; // x1
  UnityEngine_WaitForEndOfFrame_o *v35; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  bool result; // w0
  System_String_o *cryptString_5__3; // x21
  System_Byte_array *v41; // x21
  Il2CppObject *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  UnityEngine_WaitForEndOfFrame_o *v45; // x20
  Il2CppObject **v46; // x19
  int32_t v47; // w2
  int32_t v48; // w3
  int v49; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_37952168; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  UnityEngine_WaitForEndOfFrame_o *v54; // x20
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v59; // x21
  System_String_o *v60; // x22
  Il2CppObject *v61; // x0
  System_Collections_Generic_Dictionary_string__object__o *v62; // x23
  __int64 methodPtr_low; // x9
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3

  if ( (byte_4A1F622 & 1) == 0 )
  {
    sub_1B715CC(&CatAndMouseGame_TypeInfo, method);
    sub_1B715CC(&System_Convert_TypeInfo, v5);
    sub_1B715CC(&DataManager_TypeInfo, v6);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1B715CC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1B715CC(&JsonManager_TypeInfo, v10);
    sub_1B715CC(&NetworkManager_TypeInfo, v11);
    sub_1B715CC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    sub_1B715CC(&StringLiteral_18169/*"contactURL"*/, v13);
    sub_1B715CC(&StringLiteral_19372/*"filePass"*/, v14);
    sub_1B715CC(&StringLiteral_17030/*"baseURL"*/, v15);
    sub_1B715CC(&StringLiteral_1/*""*/, v16);
    byte_4A1F622 = 1;
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
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, 0, v19, v20);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, 0, v21, v22);
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
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, (int32_t)v26, v27, v28);
      v31 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v31 = DataManager_TypeInfo;
      }
      static_fields = v31->static_fields;
      static_fields->webViewData = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->webViewData, 0, v29, v30);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        this->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &this->fields.__2__current;
        sub_1B71570((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v35, v37, v38);
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
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, (int32_t)v42, v43, v44);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v45, 0LL);
        this->fields.__2__current = (Il2CppObject *)v45;
        v46 = &this->fields.__2__current;
        sub_1B71570((ServantStatusBattleListViewItem_o *)v46, (int32_t)v45, v47, v48);
        v49 = 2;
LABEL_30:
        *((_DWORD *)v46 - 2) = v49;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_37952168 = JsonManager__getDictionary_37952168(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_37952168;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_37952168, v52, v53);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B71818(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v54, 0LL);
        this->fields.__2__current = (Il2CppObject *)v54;
        v46 = &this->fields.__2__current;
        sub_1B71570((ServantStatusBattleListViewItem_o *)v46, (int32_t)v54, v55, v56);
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
              (Il2CppObject *)StringLiteral_17030/*"baseURL"*/,
              (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17030/*"baseURL"*/,
               (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
              (Il2CppObject *)StringLiteral_18169/*"contactURL"*/,
              (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18169/*"contactURL"*/,
               (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
             (Il2CppObject *)StringLiteral_19372/*"filePass"*/,
             (const MethodInfo_319EF04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1B71828(Item, v34);
        v61 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19372/*"filePass"*/,
                (const MethodInfo_319EC90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v62 = (System_Collections_Generic_Dictionary_string__object__o *)v61;
        if ( v61 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v61->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v61->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1B71AE8(v61);
LABEL_54:
            sub_1B71828(webViewData, v23);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v60, v59, v62, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, 0, v64, v65);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, 0, v66, v67);
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

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
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