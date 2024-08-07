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

  if ( (byte_49FE67B & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, v1);
    sub_1B64A00(&StringLiteral_1/*""*/, v4);
    byte_49FE67B = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->updateData, 0, v2, v3);
  v6 = DataManager_TypeInfo->static_fields;
  v6->webViewData = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v6->webViewData, 0, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  v10 = DataManager_TypeInfo->static_fields;
  v10->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v10->serverHash, v9, v11, v12);
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

  if ( (byte_49FE67A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_long_____ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_List_long____TypeInfo, v4);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B64A00(&object_TypeInfo, v6);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager___ctor__, v7);
    byte_49FE67A = 1;
  }
  this->fields._DispLog = 1;
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v8;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.saveNameList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_long____TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v11;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.saveDataMapList, (int32_t)v11, v12, v13);
  v14 = (Il2CppObject *)sub_1B64C4C(object_TypeInfo);
  System_Object___ctor(v14, 0LL);
  this->fields.lockCountObj = v14;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.lockCountObj, (int32_t)v14, v15, v16);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EED48 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_49FE658 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, v1);
    byte_49FE658 = 1;
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

  if ( (byte_49FE659 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    byte_49FE659 = 1;
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

  if ( (byte_49FE657 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, v1);
    byte_49FE657 = 1;
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

  if ( (byte_49FE671 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_49FE671 = 1;
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
    sub_1B64C5C(v5, method);
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
  DataMasterBase_array *v515; // x19
  ServantMaster_o *v516; // x20
  __int64 v517; // x0
  __int64 v518; // x1
  int32_t v519; // w2
  int32_t v520; // w3
  il2cpp_array_size_t *p_max_length; // x21
  ServantClassMaster_o *v522; // x20
  int32_t v523; // w2
  int32_t v524; // w3
  ServantCommentMaster_o *v525; // x20
  int32_t v526; // w2
  int32_t v527; // w3
  ServantProfileMaster_o *v528; // x20
  int32_t v529; // w2
  int32_t v530; // w3
  WarMaster_o *v531; // x20
  int32_t v532; // w2
  int32_t v533; // w3
  UserMaster_o *v534; // x20
  int32_t v535; // w2
  int32_t v536; // w3
  UserGameMaster_o *v537; // x20
  int32_t v538; // w2
  int32_t v539; // w3
  TblUserMaster_o *v540; // x20
  int32_t v541; // w2
  int32_t v542; // w3
  UserItemMaster_o *v543; // x20
  int32_t v544; // w2
  int32_t v545; // w3
  UserServantMaster_o *v546; // x20
  int32_t v547; // w2
  int32_t v548; // w3
  UserServantStorageMaster_o *v549; // x20
  int32_t v550; // w2
  int32_t v551; // w3
  UserAccessaryMaster_o *v552; // x20
  int32_t v553; // w2
  int32_t v554; // w3
  UserQuestMaster_o *v555; // x20
  int32_t v556; // w2
  int32_t v557; // w3
  BattleMaster_o *v558; // x20
  int32_t v559; // w2
  int32_t v560; // w3
  OtherUserGameMaster_o *v561; // x20
  int32_t v562; // w2
  int32_t v563; // w3
  TblFriendMaster_o *v564; // x20
  int32_t v565; // w2
  int32_t v566; // w3
  AreaMaster_o *v567; // x20
  int32_t v568; // w2
  int32_t v569; // w3
  ServantCardMaster_o *v570; // x20
  int32_t v571; // w2
  int32_t v572; // w3
  EventMaster_o *v573; // x20
  int32_t v574; // w2
  int32_t v575; // w3
  ItemMaster_o *v576; // x20
  int32_t v577; // w2
  int32_t v578; // w3
  QuestMaster_o *v579; // x20
  int32_t v580; // w2
  int32_t v581; // w3
  QuestAddMaster_o *v582; // x20
  int32_t v583; // w2
  int32_t v584; // w3
  QuestReleaseMaster_o *v585; // x20
  int32_t v586; // w2
  int32_t v587; // w3
  QuestDateRangeMaster_o *v588; // x20
  int32_t v589; // w2
  int32_t v590; // w3
  QuestPhaseMaster_o *v591; // x20
  int32_t v592; // w2
  int32_t v593; // w3
  QuestPhaseDetailMaster_o *v594; // x20
  int32_t v595; // w2
  int32_t v596; // w3
  QuestGroupMaster_o *v597; // x20
  int32_t v598; // w2
  int32_t v599; // w3
  QuestRandomGroupMaster_o *v600; // x20
  int32_t v601; // w2
  int32_t v602; // w3
  QuestConsumeItemMaster_o *v603; // x20
  int32_t v604; // w2
  int32_t v605; // w3
  QuestMessageMaster_o *v606; // x20
  int32_t v607; // w2
  int32_t v608; // w3
  UserQuestInfoMaster_o *v609; // x20
  int32_t v610; // w2
  int32_t v611; // w3
  UserQuestRecordMaster_o *v612; // x20
  int32_t v613; // w2
  int32_t v614; // w3
  ViewQuestInfoMaster_o *v615; // x20
  int32_t v616; // w2
  int32_t v617; // w3
  ViewEnemyMaster_o *v618; // x20
  int32_t v619; // w2
  int32_t v620; // w3
  ViewQuestEnemyInfoMaster_o *v621; // x20
  int32_t v622; // w2
  int32_t v623; // w3
  BlankEarthSpotMaster_o *v624; // x20
  int32_t v625; // w2
  int32_t v626; // w3
  BlankEarthSpotAddMaster_o *v627; // x20
  int32_t v628; // w2
  int32_t v629; // w3
  SpotMaster_o *v630; // x20
  int32_t v631; // w2
  int32_t v632; // w3
  SpotImageMaster_o *v633; // x20
  int32_t v634; // w2
  int32_t v635; // w3
  SpotRoadMaster_o *v636; // x20
  int32_t v637; // w2
  int32_t v638; // w3
  SpotPathMaster_o *v639; // x20
  int32_t v640; // w2
  int32_t v641; // w3
  SpotAddMaster_o *v642; // x20
  int32_t v643; // w2
  int32_t v644; // w3
  MapGimmickMaster_o *v645; // x20
  int32_t v646; // w2
  int32_t v647; // w3
  GiftMaster_o *v648; // x20
  int32_t v649; // w2
  int32_t v650; // w3
  GiftAddMaster_o *v651; // x20
  int32_t v652; // w2
  int32_t v653; // w3
  ShopMaster_o *v654; // x20
  int32_t v655; // w2
  int32_t v656; // w3
  StoneShopMaster_o *v657; // x20
  int32_t v658; // w2
  int32_t v659; // w3
  BankShopMaster_o *v660; // x20
  int32_t v661; // w2
  int32_t v662; // w3
  ShopScriptMaster_o *v663; // x20
  int32_t v664; // w2
  int32_t v665; // w3
  StageMaster_o *v666; // x20
  int32_t v667; // w2
  int32_t v668; // w3
  ServantGroupMaster_o *v669; // x20
  int32_t v670; // w2
  int32_t v671; // w3
  ServantLimitMaster_o *v672; // x20
  int32_t v673; // w2
  int32_t v674; // w3
  ServantLimitAddMaster_o *v675; // x20
  int32_t v676; // w2
  int32_t v677; // w3
  ServantSkillMaster_o *v678; // x20
  int32_t v679; // w2
  int32_t v680; // w3
  ServantPassiveSkillMaster_o *v681; // x20
  int32_t v682; // w2
  int32_t v683; // w3
  BgmMaster_o *v684; // x20
  int32_t v685; // w2
  int32_t v686; // w3
  ServantScriptMaster_o *v687; // x20
  int32_t v688; // w2
  int32_t v689; // w3
  NewsMaster_o *v690; // x20
  int32_t v691; // w2
  int32_t v692; // w3
  TelopMaster_o *v693; // x20
  int32_t v694; // w2
  int32_t v695; // w3
  UserExpMaster_o *v696; // x20
  int32_t v697; // w2
  int32_t v698; // w3
  TreasureDvcMaster_o *v699; // x20
  int32_t v700; // w2
  int32_t v701; // w3
  ServantTreasureDvcMaster_o *v702; // x20
  int32_t v703; // w2
  int32_t v704; // w3
  SkillMaster_o *v705; // x20
  int32_t v706; // w2
  int32_t v707; // w3
  SkillLvMaster_o *v708; // x20
  int32_t v709; // w2
  int32_t v710; // w3
  SkillDetailMaster_o *v711; // x20
  int32_t v712; // w2
  int32_t v713; // w3
  CommandSpellMaster_o *v714; // x20
  int32_t v715; // w2
  int32_t v716; // w3
  EquipMaster_o *v717; // x20
  int32_t v718; // w2
  int32_t v719; // w3
  EquipExpMaster_o *v720; // x20
  int32_t v721; // w2
  int32_t v722; // w3
  EquipSkillMaster_o *v723; // x20
  int32_t v724; // w2
  int32_t v725; // w3
  SubEquipMaster_o *v726; // x20
  int32_t v727; // w2
  int32_t v728; // w3
  AccessaryMaster_o *v729; // x20
  int32_t v730; // w2
  int32_t v731; // w3
  UserPresentBoxMaster_o *v732; // x20
  int32_t v733; // w2
  int32_t v734; // w3
  UserDeckMaster_o *v735; // x20
  int32_t v736; // w2
  int32_t v737; // w3
  UserSubEquipMaster_o *v738; // x20
  int32_t v739; // w2
  int32_t v740; // w3
  GachaMaster_o *v741; // x20
  int32_t v742; // w2
  int32_t v743; // w3
  GachaImageMaster_o *v744; // x20
  int32_t v745; // w2
  int32_t v746; // w3
  UserGachaMaster_o *v747; // x20
  int32_t v748; // w2
  int32_t v749; // w3
  UserEquipMaster_o *v750; // x20
  int32_t v751; // w2
  int32_t v752; // w3
  UserServantCollectionMaster_o *v753; // x20
  int32_t v754; // w2
  int32_t v755; // w3
  FriendshipMaster_o *v756; // x20
  int32_t v757; // w2
  int32_t v758; // w3
  GachaTicketMaster_o *v759; // x20
  int32_t v760; // w2
  int32_t v761; // w3
  UserFormationMaster_o *v762; // x20
  int32_t v763; // w2
  int32_t v764; // w3
  FunctionMaster_o *v765; // x20
  int32_t v766; // w2
  int32_t v767; // w3
  BuffMaster_o *v768; // x20
  int32_t v769; // w2
  int32_t v770; // w3
  GachaReleaseMaster_o *v771; // x20
  int32_t v772; // w2
  int32_t v773; // w3
  CombineQpMaster_o *v774; // x20
  int32_t v775; // w2
  int32_t v776; // w3
  CombineMaterialMaster_o *v777; // x20
  int32_t v778; // w2
  int32_t v779; // w3
  EventCombineMaster_o *v780; // x20
  int32_t v781; // w2
  int32_t v782; // w3
  ServantExpMaster_o *v783; // x20
  int32_t v784; // w2
  int32_t v785; // w3
  CombineSkillMaster_o *v786; // x20
  int32_t v787; // w2
  int32_t v788; // w3
  CombineTdMaster_o *v789; // x20
  int32_t v790; // w2
  int32_t v791; // w3
  EventQuestMaster_o *v792; // x20
  int32_t v793; // w2
  int32_t v794; // w3
  EventCampaignMaster_o *v795; // x20
  int32_t v796; // w2
  int32_t v797; // w3
  IllustratorMaster_o *v798; // x20
  int32_t v799; // w2
  int32_t v800; // w3
  CvMaster_o *v801; // x20
  int32_t v802; // w2
  int32_t v803; // w3
  TreasureDvcLvMaster_o *v804; // x20
  int32_t v805; // w2
  int32_t v806; // w3
  TreasureDvcDetailMaster_o *v807; // x20
  int32_t v808; // w2
  int32_t v809; // w3
  UserFollowerMaster_o *v810; // x20
  int32_t v811; // w2
  int32_t v812; // w3
  NpcFollowerMaster_o *v813; // x20
  int32_t v814; // w2
  int32_t v815; // w3
  NpcServantFollowerMaster_o *v816; // x20
  int32_t v817; // w2
  int32_t v818; // w3
  UserEventMaster_o *v819; // x20
  int32_t v820; // w2
  int32_t v821; // w3
  UserShopMaster_o *v822; // x20
  int32_t v823; // w2
  int32_t v824; // w3
  UserContinueMaster_o *v825; // x20
  int32_t v826; // w2
  int32_t v827; // w3
  ConstantMaster_o *v828; // x20
  int32_t v829; // w2
  int32_t v830; // w3
  ConstantLongMaster_o *v831; // x20
  int32_t v832; // w2
  int32_t v833; // w3
  ConstantStrMaster_o *v834; // x20
  int32_t v835; // w2
  int32_t v836; // w3
  AiMaster_o *v837; // x20
  int32_t v838; // w2
  int32_t v839; // w3
  AiActMaster_o *v840; // x20
  int32_t v841; // w2
  int32_t v842; // w3
  AttriRelationMaster_o *v843; // x20
  int32_t v844; // w2
  int32_t v845; // w3
  ClassRelationMaster_o *v846; // x20
  int32_t v847; // w2
  int32_t v848; // w3
  EffectMaster_o *v849; // x20
  int32_t v850; // w2
  int32_t v851; // w3
  EquipImageMaster_o *v852; // x20
  int32_t v853; // w2
  int32_t v854; // w3
  ServantVoiceMaster_o *v855; // x20
  int32_t v856; // w2
  int32_t v857; // w3
  CombineLimitMaster_o *v858; // x20
  int32_t v859; // w2
  int32_t v860; // w3
  CardMaster_o *v861; // x20
  int32_t v862; // w2
  int32_t v863; // w3
  CombineQpSvtEquipMaster_o *v864; // x20
  int32_t v865; // w2
  int32_t v866; // w3
  ServantRarityMaster_o *v867; // x20
  int32_t v868; // w2
  int32_t v869; // w3
  SetItemMaster_o *v870; // x20
  int32_t v871; // w2
  int32_t v872; // w3
  RecoverMaster_o *v873; // x20
  int32_t v874; // w2
  int32_t v875; // w3
  BannerMaster_o *v876; // x20
  int32_t v877; // w2
  int32_t v878; // w3
  ShopReleaseMaster_o *v879; // x20
  int32_t v880; // w2
  int32_t v881; // w3
  EventRewardMaster_o *v882; // x20
  int32_t v883; // w2
  int32_t v884; // w3
  EventDetailMaster_o *v885; // x20
  int32_t v886; // w2
  int32_t v887; // w3
  EventServantMaster_o *v888; // x20
  int32_t v889; // w2
  int32_t v890; // w3
  BoxGachaMaster_o *v891; // x20
  int32_t v892; // w2
  int32_t v893; // w3
  BoxGachaBaseMaster_o *v894; // x20
  int32_t v895; // w2
  int32_t v896; // w3
  BoxGachaTalkMaster_o *v897; // x20
  int32_t v898; // w2
  int32_t v899; // w3
  UserBoxGachaMaster_o *v900; // x20
  int32_t v901; // w2
  int32_t v902; // w3
  BoxGachaHistoryMaster_o *v903; // x20
  int32_t v904; // w2
  int32_t v905; // w3
  BattleBgMaster_o *v906; // x20
  int32_t v907; // w2
  int32_t v908; // w3
  TipsBattleMaster_o *v909; // x20
  int32_t v910; // w2
  int32_t v911; // w3
  UserLoginMaster_o *v912; // x20
  int32_t v913; // w2
  int32_t v914; // w3
  VoiceMaster_o *v915; // x20
  int32_t v916; // w2
  int32_t v917; // w3
  EventRewardExtraMaster_o *v918; // x20
  int32_t v919; // w2
  int32_t v920; // w3
  EventMissionMaster_o *v921; // x20
  int32_t v922; // w2
  int32_t v923; // w3
  EventMissionActionMaster_o *v924; // x20
  int32_t v925; // w2
  int32_t v926; // w3
  EventMissionActionAddMaster_o *v927; // x20
  int32_t v928; // w2
  int32_t v929; // w3
  EventMissionConditionMaster_o *v930; // x20
  int32_t v931; // w2
  int32_t v932; // w3
  EventMissionCondDetailMaster_o *v933; // x20
  int32_t v934; // w2
  int32_t v935; // w3
  EventMissionAddMaster_o *v936; // x20
  int32_t v937; // w2
  int32_t v938; // w3
  CompleteMissionMaster_o *v939; // x20
  int32_t v940; // w2
  int32_t v941; // w3
  EventRewardSetMaster_o *v942; // x20
  int32_t v943; // w2
  int32_t v944; // w3
  UserEventMissionMaster_o *v945; // x20
  int32_t v946; // w2
  int32_t v947; // w3
  UserEventMissionCondDetailMaster_o *v948; // x20
  int32_t v949; // w2
  int32_t v950; // w3
  BoxGachaBaseDetailMaster_o *v951; // x20
  int32_t v952; // w2
  int32_t v953; // w3
  UserServantLeaderMaster_o *v954; // x20
  int32_t v955; // w2
  int32_t v956; // w3
  ClosedMessageMaster_o *v957; // x20
  int32_t v958; // w2
  int32_t v959; // w3
  FunctionGroupMaster_o *v960; // x20
  int32_t v961; // w2
  int32_t v962; // w3
  EventRaidMaster_o *v963; // x20
  int32_t v964; // w2
  int32_t v965; // w3
  TotalEventRaidMaster_o *v966; // x20
  int32_t v967; // w2
  int32_t v968; // w3
  UserEventRaidMaster_o *v969; // x20
  int32_t v970; // w2
  int32_t v971; // w3
  EventPointMaster_o *v972; // x20
  int32_t v973; // w2
  int32_t v974; // w3
  EventPointGroupMaster_o *v975; // x20
  int32_t v976; // w2
  int32_t v977; // w3
  TotalEventPointMaster_o *v978; // x20
  int32_t v979; // w2
  int32_t v980; // w3
  UserEventPointMaster_o *v981; // x20
  int32_t v982; // w2
  int32_t v983; // w3
  EventPointUpperMaster_o *v984; // x20
  int32_t v985; // w2
  int32_t v986; // w3
  EventPointUpperReleaseMaster_o *v987; // x20
  int32_t v988; // w2
  int32_t v989; // w3
  EventRaceMaster_o *v990; // x20
  int32_t v991; // w2
  int32_t v992; // w3
  EventRaceResultMaster_o *v993; // x20
  int32_t v994; // w2
  int32_t v995; // w3
  QuestRacePointMaster_o *v996; // x20
  int32_t v997; // w2
  int32_t v998; // w3
  UserEventRaceMaster_o *v999; // x20
  int32_t v1000; // w2
  int32_t v1001; // w3
  EventScriptMaster_o *v1002; // x20
  int32_t v1003; // w2
  int32_t v1004; // w3
  EventScriptReleaseMaster_o *v1005; // x20
  int32_t v1006; // w2
  int32_t v1007; // w3
  UserPresentHistoryMaster_o *v1008; // x20
  int32_t v1009; // w2
  int32_t v1010; // w3
  MstMissionMaster_o *v1011; // x20
  int32_t v1012; // w2
  int32_t v1013; // w3
  ServantExceedMaster_o *v1014; // x20
  int32_t v1015; // w2
  int32_t v1016; // w3
  PartialMaintenanceMaster_o *v1017; // x20
  int32_t v1018; // w2
  int32_t v1019; // w3
  GuideMaster_o *v1020; // x20
  int32_t v1021; // w2
  int32_t v1022; // w3
  MstMissionDisplayInfoMaster_o *v1023; // x20
  int32_t v1024; // w2
  int32_t v1025; // w3
  GachaGroupMaster_o *v1026; // x20
  int32_t v1027; // w2
  int32_t v1028; // w3
  QuestResetMaster_o *v1029; // x20
  int32_t v1030; // w2
  int32_t v1031; // w3
  WarAddMaster_o *v1032; // x20
  int32_t v1033; // w2
  int32_t v1034; // w3
  EventItemDisplayMaster_o *v1035; // x20
  int32_t v1036; // w2
  int32_t v1037; // w3
  EventItemDisplayGroupMaster_o *v1038; // x20
  int32_t v1039; // w2
  int32_t v1040; // w3
  EventItemDisplayReleaseMaster_o *v1041; // x20
  int32_t v1042; // w2
  int32_t v1043; // w3
  EventTutorialMaster_o *v1044; // x20
  int32_t v1045; // w2
  int32_t v1046; // w3
  EventTutorialCondMaster_o *v1047; // x20
  int32_t v1048; // w2
  int32_t v1049; // w3
  VoiceReleaseMaster_o *v1050; // x20
  int32_t v1051; // w2
  int32_t v1052; // w3
  EventSuperBossMaster_o *v1053; // x20
  int32_t v1054; // w2
  int32_t v1055; // w3
  UserSuperBossMaster_o *v1056; // x20
  int32_t v1057; // w2
  int32_t v1058; // w3
  QuestScriptMaster_o *v1059; // x20
  int32_t v1060; // w2
  int32_t v1061; // w3
  QuestScriptReleaseMaster_o *v1062; // x20
  int32_t v1063; // w2
  int32_t v1064; // w3
  MaterialFolderMaster_o *v1065; // x20
  int32_t v1066; // w2
  int32_t v1067; // w3
  RestrictionMaster_o *v1068; // x20
  int32_t v1069; // w2
  int32_t v1070; // w3
  QuestRestrictionMaster_o *v1071; // x20
  int32_t v1072; // w2
  int32_t v1073; // w3
  ServantVoiceRelationMaster_o *v1074; // x20
  int32_t v1075; // w2
  int32_t v1076; // w3
  ShopDetailMaster_o *v1077; // x20
  int32_t v1078; // w2
  int32_t v1079; // w3
  ServantScriptAddMaster_o *v1080; // x20
  int32_t v1081; // w2
  int32_t v1082; // w3
  CombineMaster_o *v1083; // x20
  int32_t v1084; // w2
  int32_t v1085; // w3
  AiFieldMaster_o *v1086; // x20
  int32_t v1087; // w2
  int32_t v1088; // w3
  ServantCommentAddMaster_o *v1089; // x20
  int32_t v1090; // w2
  int32_t v1091; // w3
  EventFilterMaster_o *v1092; // x20
  int32_t v1093; // w2
  int32_t v1094; // w3
  UserSupportDeckMaster_o *v1095; // x20
  int32_t v1096; // w2
  int32_t v1097; // w3
  EventRewardSceneMaster_o *v1098; // x20
  int32_t v1099; // w2
  int32_t v1100; // w3
  EventVoicePlayMaster_o *v1101; // x20
  int32_t v1102; // w2
  int32_t v1103; // w3
  GachaSubMaster_o *v1104; // x20
  int32_t v1105; // w2
  int32_t v1106; // w3
  GachaDetailMaster_o *v1107; // x20
  int32_t v1108; // w2
  int32_t v1109; // w3
  GachaBonusSelectMaster_o *v1110; // x20
  int32_t v1111; // w2
  int32_t v1112; // w3
  GachaBonusSelectLineupMaster_o *v1113; // x20
  int32_t v1114; // w2
  int32_t v1115; // w3
  ServantChangeMaster_o *v1116; // x20
  int32_t v1117; // w2
  int32_t v1118; // w3
  VoiceCondMaster_o *v1119; // x20
  int32_t v1120; // w2
  int32_t v1121; // w3
  BgmReleaseMaster_o *v1122; // x20
  int32_t v1123; // w2
  int32_t v1124; // w3
  MyRoomAddMaster_o *v1125; // x20
  int32_t v1126; // w2
  int32_t v1127; // w3
  ShopActionMaster_o *v1128; // x20
  int32_t v1129; // w2
  int32_t v1130; // w3
  EventRewardSceneReleaseMaster_o *v1131; // x20
  int32_t v1132; // w2
  int32_t v1133; // w3
  QuestBehaviorMaster_o *v1134; // x20
  int32_t v1135; // w2
  int32_t v1136; // w3
  MapMaster_o *v1137; // x20
  int32_t v1138; // w2
  int32_t v1139; // w3
  MapCondMaster_o *v1140; // x20
  int32_t v1141; // w2
  int32_t v1142; // w3
  MapButtonMaster_o *v1143; // x20
  int32_t v1144; // w2
  int32_t v1145; // w3
  BannerAddMaster_o *v1146; // x20
  int32_t v1147; // w2
  int32_t v1148; // w3
  EventAddMaster_o *v1149; // x20
  int32_t v1150; // w2
  int32_t v1151; // w3
  TotalLoginMaster_o *v1152; // x20
  int32_t v1153; // w2
  int32_t v1154; // w3
  ServantFilterMaster_o *v1155; // x20
  int32_t v1156; // w2
  int32_t v1157; // w3
  CombineCostumeMaster_o *v1158; // x20
  int32_t v1159; // w2
  int32_t v1160; // w3
  ServantCostumeMaster_o *v1161; // x20
  int32_t v1162; // w2
  int32_t v1163; // w3
  ServantCostumeReleaseMaster_o *v1164; // x20
  int32_t v1165; // w2
  int32_t v1166; // w3
  UserFriendRequestHistoryMaster_o *v1167; // x20
  int32_t v1168; // w2
  int32_t v1169; // w3
  UserBlacklistMaster_o *v1170; // x20
  int32_t v1171; // w2
  int32_t v1172; // w3
  ItemSelectMaster_o *v1173; // x20
  int32_t v1174; // w2
  int32_t v1175; // w3
  TotalEventRaceMaster_o *v1176; // x20
  int32_t v1177; // w2
  int32_t v1178; // w3
  EventPointGroupAddMaster_o *v1179; // x20
  int32_t v1180; // w2
  int32_t v1181; // w3
  VoicePlayGroupMaster_o *v1182; // x20
  int32_t v1183; // w2
  int32_t v1184; // w3
  VoicePlayCondMaster_o *v1185; // x20
  int32_t v1186; // w2
  int32_t v1187; // w3
  GachaStoryAdjustMaster_o *v1188; // x20
  int32_t v1189; // w2
  int32_t v1190; // w3
  ServantFlagMaster_o *v1191; // x20
  int32_t v1192; // w2
  int32_t v1193; // w3
  ServantFlagReleaseMaster_o *v1194; // x20
  int32_t v1195; // w2
  int32_t v1196; // w3
  EventLocationCampaignMaster_o *v1197; // x20
  int32_t v1198; // w2
  int32_t v1199; // w3
  CampaignInfoMaster_o *v1200; // x20
  int32_t v1201; // w2
  int32_t v1202; // w3
  DialogMessageMaster_o *v1203; // x20
  int32_t v1204; // w2
  int32_t v1205; // w3
  ServantIndividualityMaster_o *v1206; // x20
  int32_t v1207; // w2
  int32_t v1208; // w3
  BoardMessageMaster_o *v1209; // x20
  int32_t v1210; // w2
  int32_t v1211; // w3
  BoardMessageReleaseMaster_o *v1212; // x20
  int32_t v1213; // w2
  int32_t v1214; // w3
  EventServantFatigueMaster_o *v1215; // x20
  int32_t v1216; // w2
  int32_t v1217; // w3
  UserEventDeckMaster_o *v1218; // x20
  int32_t v1219; // w2
  int32_t v1220; // w3
  EventTowerMaster_o *v1221; // x20
  int32_t v1222; // w2
  int32_t v1223; // w3
  EventTowerRewardMaster_o *v1224; // x20
  int32_t v1225; // w2
  int32_t v1226; // w3
  EventBulletinBoardMaster_o *v1227; // x20
  int32_t v1228; // w2
  int32_t v1229; // w3
  EventBulletinBoardReleaseMaster_o *v1230; // x20
  int32_t v1231; // w2
  int32_t v1232; // w3
  EventFactoryMaster_o *v1233; // x20
  int32_t v1234; // w2
  int32_t v1235; // w3
  ShopGroupMaster_o *v1236; // x20
  int32_t v1237; // w2
  int32_t v1238; // w3
  AuraEffectMaster_o *v1239; // x20
  int32_t v1240; // w2
  int32_t v1241; // w3
  AuraEffectPosOverwriteMaster_o *v1242; // x20
  int32_t v1243; // w2
  int32_t v1244; // w3
  UserEventMissionFixMaster_o *v1245; // x20
  int32_t v1246; // w2
  int32_t v1247; // w3
  NotEndEventMissionFixMaster_o *v1248; // x20
  int32_t v1249; // w2
  int32_t v1250; // w3
  EnemyMstMaster_o *v1251; // x20
  int32_t v1252; // w2
  int32_t v1253; // w3
  EnemyMstBattleMaster_o *v1254; // x20
  int32_t v1255; // w2
  int32_t v1256; // w3
  ServantSkillReleaseMaster_o *v1257; // x20
  int32_t v1258; // w2
  int32_t v1259; // w3
  ServantPassiveSkillReleaseMaster_o *v1260; // x20
  int32_t v1261; // w2
  int32_t v1262; // w3
  ServantTreasureDeviceReleaseMaster_o *v1263; // x20
  int32_t v1264; // w2
  int32_t v1265; // w3
  MapGimmickReleaseMaster_o *v1266; // x20
  int32_t v1267; // w2
  int32_t v1268; // w3
  CommandCodeMaster_o *v1269; // x20
  int32_t v1270; // w2
  int32_t v1271; // w3
  ServantCommandCodeUnlockMaster_o *v1272; // x20
  int32_t v1273; // w2
  int32_t v1274; // w3
  UserCommandCodeMaster_o *v1275; // x20
  int32_t v1276; // w2
  int32_t v1277; // w3
  UserCommandCodeCollectionMaster_o *v1278; // x20
  int32_t v1279; // w2
  int32_t v1280; // w3
  UserServantCommandCodeMaster_o *v1281; // x20
  int32_t v1282; // w2
  int32_t v1283; // w3
  UserServantCommandCardMaster_o *v1284; // x20
  int32_t v1285; // w2
  int32_t v1286; // w3
  CommandCardRankParamMaster_o *v1287; // x20
  int32_t v1288; // w2
  int32_t v1289; // w3
  CommandCodeSkillMaster_o *v1290; // x20
  int32_t v1291; // w2
  int32_t v1292; // w3
  CommandCodeSkillReleaseMaster_o *v1293; // x20
  int32_t v1294; // w2
  int32_t v1295; // w3
  CommandCodeCommentMaster_o *v1296; // x20
  int32_t v1297; // w2
  int32_t v1298; // w3
  EventStatusMaster_o *v1299; // x20
  int32_t v1300; // w2
  int32_t v1301; // w3
  EventStatusQuestMaster_o *v1302; // x20
  int32_t v1303; // w2
  int32_t v1304; // w3
  CommonRestrictionMaster_o *v1305; // x20
  int32_t v1306; // w2
  int32_t v1307; // w3
  EventPointBuffMaster_o *v1308; // x20
  int32_t v1309; // w2
  int32_t v1310; // w3
  UserFollowMaster_o *v1311; // x20
  int32_t v1312; // w2
  int32_t v1313; // w3
  EventRewardGuideReleaseMaster_o *v1314; // x20
  int32_t v1315; // w2
  int32_t v1316; // w3
  NpcServantEquipMaster_o *v1317; // x20
  int32_t v1318; // w2
  int32_t v1319; // w3
  EventCampaignReleaseMaster_o *v1320; // x20
  int32_t v1321; // w2
  int32_t v1322; // w3
  ServantMaterialFolderMaster_o *v1323; // x20
  int32_t v1324; // w2
  int32_t v1325; // w3
  EventEquipSkillReleaseMaster_o *v1326; // x20
  int32_t v1327; // w2
  int32_t v1328; // w3
  EventPointActivityMaster_o *v1329; // x20
  int32_t v1330; // w2
  int32_t v1331; // w3
  FunctionCategoryMaster_o *v1332; // x20
  int32_t v1333; // w2
  int32_t v1334; // w3
  QuestPickupMaster_o *v1335; // x20
  int32_t v1336; // w2
  int32_t v1337; // w3
  EventUiMaster_o *v1338; // x20
  int32_t v1339; // w2
  int32_t v1340; // w3
  EventUiReleaseMaster_o *v1341; // x20
  int32_t v1342; // w2
  int32_t v1343; // w3
  EventUiValueMaster_o *v1344; // x20
  int32_t v1345; // w2
  int32_t v1346; // w3
  EventConquestRewardMaster_o *v1347; // x20
  int32_t v1348; // w2
  int32_t v1349; // w3
  NpcFollowerReleaseMaster_o *v1350; // x20
  int32_t v1351; // w2
  int32_t v1352; // w3
  EventBonusFilterMaster_o *v1353; // x20
  int32_t v1354; // w2
  int32_t v1355; // w3
  EventBonusFilterGroupInfoMaster_o *v1356; // x20
  int32_t v1357; // w2
  int32_t v1358; // w3
  EventBonusFilterGroupMemberMaster_o *v1359; // x20
  int32_t v1360; // w2
  int32_t v1361; // w3
  UserGachaExtraCountMaster_o *v1362; // x20
  int32_t v1363; // w2
  int32_t v1364; // w3
  PrivilegeMaster_o *v1365; // x20
  int32_t v1366; // w2
  int32_t v1367; // w3
  UserPrivilegeMaster_o *v1368; // x20
  int32_t v1369; // w2
  int32_t v1370; // w3
  UserQuestRouteMaster_o *v1371; // x20
  int32_t v1372; // w2
  int32_t v1373; // w3
  EventBossStatusUiMaster_o *v1374; // x20
  int32_t v1375; // w2
  int32_t v1376; // w3
  CommonReleaseMaster_o *v1377; // x20
  int32_t v1378; // w2
  int32_t v1379; // w3
  QuestSpotReleaseMaster_o *v1380; // x20
  int32_t v1381; // w2
  int32_t v1382; // w3
  VoiceMaterialCondMaster_o *v1383; // x20
  int32_t v1384; // w2
  int32_t v1385; // w3
  ClassRelationOverwriteMaster_o *v1386; // x20
  int32_t v1387; // w2
  int32_t v1388; // w3
  EventGroupMaster_o *v1389; // x20
  int32_t v1390; // w2
  int32_t v1391; // w3
  TotalBoxGachaMaster_o *v1392; // x20
  int32_t v1393; // w2
  int32_t v1394; // w3
  ServantTreasureDeviceDamageMaster_o *v1395; // x20
  int32_t v1396; // w2
  int32_t v1397; // w3
  UserEventServantFatigueMaster_o *v1398; // x20
  int32_t v1399; // w2
  int32_t v1400; // w3
  EventRewardBgMaster_o *v1401; // x20
  int32_t v1402; // w2
  int32_t v1403; // w3
  EventFatigueRecoveryMaster_o *v1404; // x20
  int32_t v1405; // w2
  int32_t v1406; // w3
  EventBoostItemUsedMaster_o *v1407; // x20
  int32_t v1408; // w2
  int32_t v1409; // w3
  StatusEffectPosOverwriteMaster_o *v1410; // x20
  int32_t v1411; // w2
  int32_t v1412; // w3
  QuestPhaseDetailAddMaster_o *v1413; // x20
  int32_t v1414; // w2
  int32_t v1415; // w3
  VoiceClosedMessageMaster_o *v1416; // x20
  int32_t v1417; // w2
  int32_t v1418; // w3
  ReprintStageMaster_o *v1419; // x20
  int32_t v1420; // w2
  int32_t v1421; // w3
  UserCombineExpMaster_o *v1422; // x20
  int32_t v1423; // w2
  int32_t v1424; // w3
  EventBoardGameCellMaster_o *v1425; // x20
  int32_t v1426; // w2
  int32_t v1427; // w3
  EventBoardGameTokenMaster_o *v1428; // x20
  int32_t v1429; // w2
  int32_t v1430; // w3
  EventBoardGameTokenRewardMaster_o *v1431; // x20
  int32_t v1432; // w2
  int32_t v1433; // w3
  UserEventBoardGameTokenMaster_o *v1434; // x20
  int32_t v1435; // w2
  int32_t v1436; // w3
  ServantAnimationOverwriteMaster_o *v1437; // x20
  int32_t v1438; // w2
  int32_t v1439; // w3
  OpeningMovieMaster_o *v1440; // x20
  int32_t v1441; // w2
  int32_t v1442; // w3
  ServantLimitSpoilerProtectionMaster_o *v1443; // x20
  int32_t v1444; // w2
  int32_t v1445; // w3
  PickupUserFollowerMaster_o *v1446; // x20
  int32_t v1447; // w2
  int32_t v1448; // w3
  ServantCollectionMaster_o *v1449; // x20
  int32_t v1450; // w2
  int32_t v1451; // w3
  GachaBehaviorMaster_o *v1452; // x20
  int32_t v1453; // w2
  int32_t v1454; // w3
  EventQuestCooltimeMaster_o *v1455; // x20
  int32_t v1456; // w2
  int32_t v1457; // w3
  UserEventQuestCooltimeMaster_o *v1458; // x20
  int32_t v1459; // w2
  int32_t v1460; // w3
  BoostMaster_o *v1461; // x20
  int32_t v1462; // w2
  int32_t v1463; // w3
  WarBoardMaster_o *v1464; // x20
  int32_t v1465; // w2
  int32_t v1466; // w3
  WarBoardSquareMaster_o *v1467; // x20
  int32_t v1468; // w2
  int32_t v1469; // w3
  WarBoardRoadMaster_o *v1470; // x20
  int32_t v1471; // w2
  int32_t v1472; // w3
  WarBoardStageMaster_o *v1473; // x20
  int32_t v1474; // w2
  int32_t v1475; // w3
  WarBoardActionPointMaster_o *v1476; // x20
  int32_t v1477; // w2
  int32_t v1478; // w3
  WarBoardActionTrendMaster_o *v1479; // x20
  int32_t v1480; // w2
  int32_t v1481; // w3
  WarBoardTacticalTrendMaster_o *v1482; // x20
  int32_t v1483; // w2
  int32_t v1484; // w3
  WarBoardStageLayoutMaster_o *v1485; // x20
  int32_t v1486; // w2
  int32_t v1487; // w3
  WarBoardStageNpcMaster_o *v1488; // x20
  int32_t v1489; // w2
  int32_t v1490; // w3
  WarBoardStageWallMaster_o *v1491; // x20
  int32_t v1492; // w2
  int32_t v1493; // w3
  WarBoardAIMaster_o *v1494; // x20
  int32_t v1495; // w2
  int32_t v1496; // w3
  WarBoardRatingBaseMaster_o *v1497; // x20
  int32_t v1498; // w2
  int32_t v1499; // w3
  WarBoardRatingOffsetMaster_o *v1500; // x20
  int32_t v1501; // w2
  int32_t v1502; // w3
  WarBoardItemMaster_o *v1503; // x20
  int32_t v1504; // w2
  int32_t v1505; // w3
  WarBoardTreasureMaster_o *v1506; // x20
  int32_t v1507; // w2
  int32_t v1508; // w3
  WarBoardQuestMaster_o *v1509; // x20
  int32_t v1510; // w2
  int32_t v1511; // w3
  WarBoardDataMaster_o *v1512; // x20
  int32_t v1513; // w2
  int32_t v1514; // w3
  WarBoardIndividualityClassMaster_o *v1515; // x20
  int32_t v1516; // w2
  int32_t v1517; // w3
  WarBoardActionTrendConditionMaster_o *v1518; // x20
  int32_t v1519; // w2
  int32_t v1520; // w3
  WarBoardActionPointClassMaster_o *v1521; // x20
  int32_t v1522; // w2
  int32_t v1523; // w3
  EventPanelMapMaster_o *v1524; // x20
  int32_t v1525; // w2
  int32_t v1526; // w3
  EventPanelMapDetailMaster_o *v1527; // x20
  int32_t v1528; // w2
  int32_t v1529; // w3
  EventPanelSpotMaster_o *v1530; // x20
  int32_t v1531; // w2
  int32_t v1532; // w3
  EventPanelScanMaster_o *v1533; // x20
  int32_t v1534; // w2
  int32_t v1535; // w3
  CommonConsumeMaster_o *v1536; // x20
  int32_t v1537; // w2
  int32_t v1538; // w3
  UserEventMapMaster_o *v1539; // x20
  int32_t v1540; // w2
  int32_t v1541; // w3
  UserEventSpotMaster_o *v1542; // x20
  int32_t v1543; // w2
  int32_t v1544; // w3
  WarGroupMaster_o *v1545; // x20
  int32_t v1546; // w2
  int32_t v1547; // w3
  ServantLimitImageMaster_o *v1548; // x20
  int32_t v1549; // w2
  int32_t v1550; // w3
  FriendshipQuestDialogInfoMaster_o *v1551; // x20
  int32_t v1552; // w2
  int32_t v1553; // w3
  QuestRestrictionInfoMaster_o *v1554; // x20
  int32_t v1555; // w2
  int32_t v1556; // w3
  AssistMaster_o *v1557; // x20
  int32_t v1558; // w2
  int32_t v1559; // w3
  WarBoardEffectMaster_o *v1560; // x20
  int32_t v1561; // w2
  int32_t v1562; // w3
  WarBoardOnboardSkillMaster_o *v1563; // x20
  int32_t v1564; // w2
  int32_t v1565; // w3
  BeforeBirthDayMaster_o *v1566; // x20
  int32_t v1567; // w2
  int32_t v1568; // w3
  LoginQuestMaster_o *v1569; // x20
  int32_t v1570; // w2
  int32_t v1571; // w3
  EventCombineCostumeMaster_o *v1572; // x20
  int32_t v1573; // w2
  int32_t v1574; // w3
  WarBoardStagePieceDetailMaster_o *v1575; // x20
  int32_t v1576; // w2
  int32_t v1577; // w3
  ServantTreasureDeviceAddMaster_o *v1578; // x20
  int32_t v1579; // w2
  int32_t v1580; // w3
  SkillAddMaster_o *v1581; // x20
  int32_t v1582; // w2
  int32_t v1583; // w3
  ServantLvDetailMaster_o *v1584; // x20
  int32_t v1585; // w2
  int32_t v1586; // w3
  GachaAppendMaster_o *v1587; // x20
  int32_t v1588; // w2
  int32_t v1589; // w3
  UserGachaDrawLogMaster_o *v1590; // x20
  int32_t v1591; // w2
  int32_t v1592; // w3
  ServantAppendPassiveSkillMaster_o *v1593; // x20
  int32_t v1594; // w2
  int32_t v1595; // w3
  UserServantAppendPassiveSkillMaster_o *v1596; // x20
  int32_t v1597; // w2
  int32_t v1598; // w3
  UserServantAppendPassiveSkillLvMaster_o *v1599; // x20
  int32_t v1600; // w2
  int32_t v1601; // w3
  SvtAppendPassiveSkillUnlockMaster_o *v1602; // x20
  int32_t v1603; // w2
  int32_t v1604; // w3
  CombineAppendPassiveSkillMaster_o *v1605; // x20
  int32_t v1606; // w2
  int32_t v1607; // w3
  SvtCoinMaster_o *v1608; // x20
  int32_t v1609; // w2
  int32_t v1610; // w3
  UserSvtCoinMaster_o *v1611; // x20
  int32_t v1612; // w2
  int32_t v1613; // w3
  ServantAddMaster_o *v1614; // x20
  int32_t v1615; // w2
  int32_t v1616; // w3
  TreasureBoxMaster_o *v1617; // x20
  int32_t v1618; // w2
  int32_t v1619; // w3
  TreasureBoxGiftMaster_o *v1620; // x20
  int32_t v1621; // w2
  int32_t v1622; // w3
  TreasureBoxTalkMaster_o *v1623; // x20
  int32_t v1624; // w2
  int32_t v1625; // w3
  UserEventExpeditionMaster_o *v1626; // x20
  int32_t v1627; // w2
  int32_t v1628; // w3
  EventExpeditionMaster_o *v1629; // x20
  int32_t v1630; // w2
  int32_t v1631; // w3
  EventExpeditionPieceMaster_o *v1632; // x20
  int32_t v1633; // w2
  int32_t v1634; // w3
  EventRecipeMaster_o *v1635; // x20
  int32_t v1636; // w2
  int32_t v1637; // w3
  EventRecipeGiftMaster_o *v1638; // x20
  int32_t v1639; // w2
  int32_t v1640; // w3
  UserEventFortificationMaster_o *v1641; // x20
  int32_t v1642; // w2
  int32_t v1643; // w3
  EventFortificationMaster_o *v1644; // x20
  int32_t v1645; // w2
  int32_t v1646; // w3
  EventFortificationDetailMaster_o *v1647; // x20
  int32_t v1648; // w2
  int32_t v1649; // w3
  EventFortificationSvtMaster_o *v1650; // x20
  int32_t v1651; // w2
  int32_t v1652; // w3
  UserServantVoicePlayedMaster_o *v1653; // x20
  int32_t v1654; // w2
  int32_t v1655; // w3
  UpdateProfileDialogInfoMaster_o *v1656; // x20
  int32_t v1657; // w2
  int32_t v1658; // w3
  SvtMaterialTdMaster_o *v1659; // x20
  int32_t v1660; // w2
  int32_t v1661; // w3
  BattleMasterImageMaster_o *v1662; // x20
  int32_t v1663; // w2
  int32_t v1664; // w3
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v1665; // x20
  int32_t v1666; // w2
  int32_t v1667; // w3
  UserEventRandomMissionMaster_o *v1668; // x20
  int32_t v1669; // w2
  int32_t v1670; // w3
  EventProgressValueMaster_o *v1671; // x20
  int32_t v1672; // w2
  int32_t v1673; // w3
  SvtMultiPortraitMaster_o *v1674; // x20
  int32_t v1675; // w2
  int32_t v1676; // w3
  EventRandomMissionMaster_o *v1677; // x20
  int32_t v1678; // w2
  int32_t v1679; // w3
  UserGachaHistoryMaster_o *v1680; // x20
  int32_t v1681; // w2
  int32_t v1682; // w3
  UserCoinRoomMaster_o *v1683; // x20
  int32_t v1684; // w2
  int32_t v1685; // w3
  EventBuddyPointMaster_o *v1686; // x20
  int32_t v1687; // w2
  int32_t v1688; // w3
  EventServantPointRankMaster_o *v1689; // x20
  int32_t v1690; // w2
  int32_t v1691; // w3
  UserEventServantPointMaster_o *v1692; // x20
  int32_t v1693; // w2
  int32_t v1694; // w3
  FieldMotionMaster_o *v1695; // x20
  int32_t v1696; // w2
  int32_t v1697; // w3
  UserDeleteReservationMaster_o *v1698; // x20
  int32_t v1699; // w2
  int32_t v1700; // w3
  ServantScriptMultipleMaster_o *v1701; // x20
  int32_t v1702; // w2
  int32_t v1703; // w3
  EquipAddMaster_o *v1704; // x20
  int32_t v1705; // w2
  int32_t v1706; // w3
  QuestReleaseOverwriteMaster_o *v1707; // x20
  int32_t v1708; // w2
  int32_t v1709; // w3
  UserEventAlloutBattleMaster_o *v1710; // x20
  int32_t v1711; // w2
  int32_t v1712; // w3
  QuestScriptMaterialNextMaster_o *v1713; // x20
  int32_t v1714; // w2
  int32_t v1715; // w3
  EventDiggingMaster_o *v1716; // x20
  int32_t v1717; // w2
  int32_t v1718; // w3
  EventDiggingBlockMaster_o *v1719; // x20
  int32_t v1720; // w2
  int32_t v1721; // w3
  EventDiggingRewardMaster_o *v1722; // x20
  int32_t v1723; // w2
  int32_t v1724; // w3
  UserEventDiggingMaster_o *v1725; // x20
  int32_t v1726; // w2
  int32_t v1727; // w3
  BattleMessageMaster_o *v1728; // x20
  int32_t v1729; // w2
  int32_t v1730; // w3
  BattleMessageGroupMaster_o *v1731; // x20
  int32_t v1732; // w2
  int32_t v1733; // w3
  UserNpcSvtRecordMaster_o *v1734; // x20
  int32_t v1735; // w2
  int32_t v1736; // w3
  BuffTypeDetailMaster_o *v1737; // x20
  int32_t v1738; // w2
  int32_t v1739; // w3
  WarBoardMessageMaster_o *v1740; // x20
  int32_t v1741; // w2
  int32_t v1742; // w3
  WarBoardPartySkillMaster_o *v1743; // x20
  int32_t v1744; // w2
  int32_t v1745; // w3
  WarBoardMessageScriptMaster_o *v1746; // x20
  int32_t v1747; // w2
  int32_t v1748; // w3
  WarQuestSelectionMaster_o *v1749; // x20
  int32_t v1750; // w2
  int32_t v1751; // w3
  WarBoardStageDetailMaster_o *v1752; // x20
  int32_t v1753; // w2
  int32_t v1754; // w3
  QuestScriptMaterialOverwriteMaster_o *v1755; // x20
  int32_t v1756; // w2
  int32_t v1757; // w3
  QuestScriptBranchMaterialMaster_o *v1758; // x20
  int32_t v1759; // w2
  int32_t v1760; // w3
  AdCheckPointMaster_o *v1761; // x20
  int32_t v1762; // w2
  int32_t v1763; // w3
  GiftDetailMaster_o *v1764; // x20
  int32_t v1765; // w2
  int32_t v1766; // w3
  CombineLimitGiftMaster_o *v1767; // x20
  int32_t v1768; // w2
  int32_t v1769; // w3
  EventCooltimeRewardMaster_o *v1770; // x20
  int32_t v1771; // w2
  int32_t v1772; // w3
  UserEventCooltimeRewardMaster_o *v1773; // x20
  int32_t v1774; // w2
  int32_t v1775; // w3
  ClassBoardBaseMaster_o *v1776; // x20
  int32_t v1777; // w2
  int32_t v1778; // w3
  ClassBoardLockMaster_o *v1779; // x20
  int32_t v1780; // w2
  int32_t v1781; // w3
  ClassBoardSquareMaster_o *v1782; // x20
  int32_t v1783; // w2
  int32_t v1784; // w3
  ClassBoardLineMaster_o *v1785; // x20
  int32_t v1786; // w2
  int32_t v1787; // w3
  UserClassBoardSquareMaster_o *v1788; // x20
  int32_t v1789; // w2
  int32_t v1790; // w3
  ServantCardAddMaster_o *v1791; // x20
  int32_t v1792; // w2
  int32_t v1793; // w3
  MapLayerMaster_o *v1794; // x20
  int32_t v1795; // w2
  int32_t v1796; // w3
  SpotLayerMaster_o *v1797; // x20
  int32_t v1798; // w2
  int32_t v1799; // w3
  MapGimmickLayerMaster_o *v1800; // x20
  int32_t v1801; // w2
  int32_t v1802; // w3
  EventDataLostBattleMaster_o *v1803; // x20
  int32_t v1804; // w2
  int32_t v1805; // w3
  EventDataLostBattleResetMaster_o *v1806; // x20
  int32_t v1807; // w2
  int32_t v1808; // w3
  UserEventDataLostMaster_o *v1809; // x20
  int32_t v1810; // w2
  int32_t v1811; // w3
  QuestHintMaster_o *v1812; // x20
  int32_t v1813; // w2
  int32_t v1814; // w3
  FuncTypeDetailMaster_o *v1815; // x20
  int32_t v1816; // w2
  int32_t v1817; // w3
  BuffConvertMaster_o *v1818; // x20
  int32_t v1819; // w2
  int32_t v1820; // w3
  SkillGroupMaster_o *v1821; // x20
  int32_t v1822; // w2
  int32_t v1823; // w3
  SkillGroupOverwriteMaster_o *v1824; // x20
  int32_t v1825; // w2
  int32_t v1826; // w3
  SkillIndividualityMaster_o *v1827; // x20
  int32_t v1828; // w2
  int32_t v1829; // w3
  RestrictionBaseMaster_o *v1830; // x20
  int32_t v1831; // w2
  int32_t v1832; // w3
  RestrictionSlotMaster_o *v1833; // x20
  int32_t v1834; // w2
  int32_t v1835; // w3
  RestrictionSlotDetailMaster_o *v1836; // x20
  int32_t v1837; // w2
  int32_t v1838; // w3
  RestrictionMessageMaster_o *v1839; // x20
  int32_t v1840; // w2
  int32_t v1841; // w3
  RestrictionWholeMaster_o *v1842; // x20
  int32_t v1843; // w2
  int32_t v1844; // w3
  FuncDispMaster_o *v1845; // x20
  int32_t v1846; // w2
  int32_t v1847; // w3
  ClassBoardCommandSpellMaster_o *v1848; // x20
  int32_t v1849; // w2
  int32_t v1850; // w3
  ClassBoardClassMaster_o *v1851; // x20
  int32_t v1852; // w2
  int32_t v1853; // w3
  EventCommandAssistMaster_o *v1854; // x20
  int32_t v1855; // w2
  int32_t v1856; // w3
  EventMissionGroupMaster_o *v1857; // x20
  int32_t v1858; // w2
  int32_t v1859; // w3
  CombineLimitReleaseMaster_o *v1860; // x20
  int32_t v1861; // w2
  int32_t v1862; // w3
  HeelPortraitMaster_o *v1863; // x20
  int32_t v1864; // w2
  int32_t v1865; // w3
  UserHeelPortraitMaster_o *v1866; // x20
  int32_t v1867; // w2
  int32_t v1868; // w3
  TreasureDeviceSequenceWeightMaster_o *v1869; // x20
  int32_t v1870; // w2
  int32_t v1871; // w3
  NpcServantFollowerIndividualityMaster_o *v1872; // x20
  int32_t v1873; // w2
  int32_t v1874; // w3
  GachaExtraGiftMaster_o *v1875; // x20
  int32_t v1876; // w2
  int32_t v1877; // w3
  EventMuralMaster_o *v1878; // x20
  int32_t v1879; // w2
  int32_t v1880; // w3
  ViewWaveEnemyMaster_o *v1881; // x20
  int32_t v1882; // w2
  int32_t v1883; // w3
  BlankEarthSpotNavimenuMaster_o *v1884; // x20
  int32_t v1885; // w2
  int32_t v1886; // w3
  BlankEarthGimmickMaster_o *v1887; // x20
  int32_t v1888; // w2
  int32_t v1889; // w3
  TerminalOverwriteMaster_o *v1890; // x20
  int32_t v1891; // w2
  int32_t v1892; // w3
  UserExchangeSvtMaster_o *v1893; // x20
  int32_t v1894; // w2
  int32_t v1895; // w3
  WarBoardCommonReleaseMaster_o *v1896; // x20
  int32_t v1897; // w2
  int32_t v1898; // w3
  WarBoardEventMaster_o *v1899; // x20
  int32_t v1900; // w2
  int32_t v1901; // w3
  WarBoardEventScriptMaster_o *v1902; // x20
  int32_t v1903; // w2
  int32_t v1904; // w3
  WarBoardStageBossMaster_o *v1905; // x20
  int32_t v1906; // w2
  int32_t v1907; // w3
  WarBoardSquareIndexGroupMaster_o *v1908; // x20
  int32_t v1909; // w2
  int32_t v1910; // w3
  WarBoardActionTrendGroupMaster_o *v1911; // x20
  int32_t v1912; // w2
  int32_t v1913; // w3
  WarBoardRatingOffsetGroupMaster_o *v1914; // x20
  int32_t v1915; // w2
  int32_t v1916; // w3
  WarBoardReinforcementsMaster_o *v1917; // x20
  int32_t v1918; // w2
  int32_t v1919; // w3
  WarBoardStageReinforcementsMaster_o *v1920; // x20
  int32_t v1921; // w2
  int32_t v1922; // w3
  WarBoardFutureActionTrendMaster_o *v1923; // x20
  int32_t v1924; // w2
  int32_t v1925; // w3
  ServantProfilePushMaster_o *v1926; // x20
  int32_t v1927; // w2
  int32_t v1928; // w3
  MapGimmickPathMaster_o *v1929; // x20
  int32_t v1930; // w2
  int32_t v1931; // w3
  MapGimmickPathReleaseMaster_o *v1932; // x20
  int32_t v1933; // w2
  int32_t v1934; // w3
  ServantOverwriteMaster_o *v1935; // x20
  int32_t v1936; // w2
  int32_t v1937; // w3
  IndividualityPolicyMaster_o *v1938; // x20
  int32_t v1939; // w2
  int32_t v1940; // w3
  IndividualityPersonalityMaster_o *v1941; // x20
  int32_t v1942; // w2
  int32_t v1943; // w3
  AttriMaster_o *v1944; // x20
  int32_t v1945; // w2
  int32_t v1946; // w3
  ServantVoicePatternMaster_o *v1947; // x20
  int32_t v1948; // w2
  int32_t v1949; // w3
  UserGameCommonMaster_o *v1950; // x20
  int32_t v1951; // w2
  int32_t v1952; // w3
  ServantPhotoMaster_o *v1953; // x20
  int32_t v1954; // w2
  int32_t v1955; // w3
  MasterPhotoMaster_o *v1956; // x20
  int32_t v1957; // w2
  int32_t v1958; // w3
  WarMessageMaster_o *v1959; // x20
  int32_t v1960; // w2
  int32_t v1961; // w3
  QuestAutoOrganizationAdjustMaster_o *v1962; // x20
  int32_t v1963; // w2
  int32_t v1964; // w3
  ExcludeMotionMaster_o *v1965; // x20
  int32_t v1966; // w2
  int32_t v1967; // w3
  UserInterruptionQuestMaster_o *v1968; // x20
  int32_t v1969; // w2
  int32_t v1970; // w3
  ServantTransformMaster_o *v1971; // x20
  int32_t v1972; // w2
  int32_t v1973; // w3
  MapUpdateScheduleMaster_o *v1974; // x20
  int32_t v1975; // w2
  int32_t v1976; // w3
  QuestPhasePresentMaster_o *v1977; // x20
  int32_t v1978; // w2
  int32_t v1979; // w3
  UserAccountLinkageMaster_o *v1980; // x20
  int32_t v1981; // w2
  int32_t v1982; // w3
  MissionNaviTransitionMaster_o *v1983; // x20
  int32_t v1984; // w2
  int32_t v1985; // w3
  MissionNaviQuestMaster_o *v1986; // x20
  int32_t v1987; // w2
  int32_t v1988; // w3
  EventTradeGoodsMaster_o *v1989; // x20
  int32_t v1990; // w2
  int32_t v1991; // w3
  EventTradeStoreMaster_o *v1992; // x20
  int32_t v1993; // w2
  int32_t v1994; // w3
  EventTradePickupMaster_o *v1995; // x20
  int32_t v1996; // w2
  int32_t v1997; // w3
  UserEventTradeMaster_o *v1998; // x20
  int32_t v1999; // w2
  int32_t v2000; // w3
  PaymentHistoryMaster_o *v2001; // x20
  int32_t v2002; // w2
  int32_t v2003; // w3
  UserExternalPaymentStoneMaster_o *v2004; // x20
  int32_t v2005; // w2
  int32_t v2006; // w3
  QuestPhaseIndividualityMaster_o *v2007; // x20
  int32_t v2008; // w2
  int32_t v2009; // w3
  ViewGachaFeaturedServantMaster_o *v2010; // x20
  int32_t v2011; // w2
  int32_t v2012; // w3
  UserGachaPickupCollateralMaster_o *v2013; // x20
  int32_t v2014; // w2
  int32_t v2015; // w3
  GachaPickupCollateralMaster_o *v2016; // x20
  int32_t v2017; // w2
  int32_t v2018; // w3
  GachaPickupCollateralGroupMaster_o *v2019; // x20
  int32_t v2020; // w2
  int32_t v2021; // w3
  BattlePointMaster_o *v2022; // x20
  int32_t v2023; // w2
  int32_t v2024; // w3
  BattlePointPhaseMaster_o *v2025; // x20
  int32_t v2026; // w2
  int32_t v2027; // w3
  ServantBattlePointMaster_o *v2028; // x20
  int32_t v2029; // w2
  int32_t v2030; // w3
  EffectMovieMaster_o *v2031; // x20
  int32_t v2032; // w2
  int32_t v2033; // w3
  PaymentLimitMaster_o *v2034; // x20
  int32_t v2035; // w2
  int32_t v2036; // w3
  UserPaymentLimitMaster_o *v2037; // x20
  int32_t v2038; // w2
  int32_t v2039; // w3
  RoadmapMaster_o *v2040; // x20
  int32_t v2041; // w2
  int32_t v2042; // w3
  UserRecommendSupportMaster_o *v2043; // x20
  int32_t v2044; // w2
  int32_t v2045; // w3
  RecommendSupportQuestMaster_o *v2046; // x20
  int32_t v2047; // w2
  int32_t v2048; // w3
  RecommendAdviceMessageMaster_o *v2049; // x20
  int32_t v2050; // w2
  int32_t v2051; // w3
  UserRecommendFollowerMaster_o *v2052; // x20
  int32_t v2053; // w2
  int32_t v2054; // w3
  ItemDropEfficiencyMaster_o *v2055; // x20
  int32_t v2056; // w2
  int32_t v2057; // w3
  __int64 v2059; // x0

  if ( (byte_49FE679 & 1) == 0 )
  {
    sub_1B64A00(&AccessaryMaster_TypeInfo, v1);
    sub_1B64A00(&AdCheckPointMaster_TypeInfo, v2);
    sub_1B64A00(&AiActMaster_TypeInfo, v3);
    sub_1B64A00(&AiFieldMaster_TypeInfo, v4);
    sub_1B64A00(&AiMaster_TypeInfo, v5);
    sub_1B64A00(&AreaMaster_TypeInfo, v6);
    sub_1B64A00(&AssistMaster_TypeInfo, v7);
    sub_1B64A00(&AttriMaster_TypeInfo, v8);
    sub_1B64A00(&AttriRelationMaster_TypeInfo, v9);
    sub_1B64A00(&AuraEffectMaster_TypeInfo, v10);
    sub_1B64A00(&AuraEffectPosOverwriteMaster_TypeInfo, v11);
    sub_1B64A00(&BankShopMaster_TypeInfo, v12);
    sub_1B64A00(&BannerAddMaster_TypeInfo, v13);
    sub_1B64A00(&BannerMaster_TypeInfo, v14);
    sub_1B64A00(&BattleBgMaster_TypeInfo, v15);
    sub_1B64A00(&BattleMasterImageMaster_TypeInfo, v16);
    sub_1B64A00(&BattleMaster_TypeInfo, v17);
    sub_1B64A00(&BattleMessageGroupMaster_TypeInfo, v18);
    sub_1B64A00(&BattleMessageMaster_TypeInfo, v19);
    sub_1B64A00(&BattlePointMaster_TypeInfo, v20);
    sub_1B64A00(&BattlePointPhaseMaster_TypeInfo, v21);
    sub_1B64A00(&BeforeBirthDayMaster_TypeInfo, v22);
    sub_1B64A00(&BgmMaster_TypeInfo, v23);
    sub_1B64A00(&BgmReleaseMaster_TypeInfo, v24);
    sub_1B64A00(&BlankEarthGimmickMaster_TypeInfo, v25);
    sub_1B64A00(&BlankEarthSpotAddMaster_TypeInfo, v26);
    sub_1B64A00(&BlankEarthSpotMaster_TypeInfo, v27);
    sub_1B64A00(&BlankEarthSpotNavimenuMaster_TypeInfo, v28);
    sub_1B64A00(&BoardMessageMaster_TypeInfo, v29);
    sub_1B64A00(&BoardMessageReleaseMaster_TypeInfo, v30);
    sub_1B64A00(&BoostMaster_TypeInfo, v31);
    sub_1B64A00(&BoxGachaBaseDetailMaster_TypeInfo, v32);
    sub_1B64A00(&BoxGachaBaseMaster_TypeInfo, v33);
    sub_1B64A00(&BoxGachaHistoryMaster_TypeInfo, v34);
    sub_1B64A00(&BoxGachaMaster_TypeInfo, v35);
    sub_1B64A00(&BoxGachaTalkMaster_TypeInfo, v36);
    sub_1B64A00(&BuffConvertMaster_TypeInfo, v37);
    sub_1B64A00(&BuffMaster_TypeInfo, v38);
    sub_1B64A00(&BuffTypeDetailMaster_TypeInfo, v39);
    sub_1B64A00(&CampaignInfoMaster_TypeInfo, v40);
    sub_1B64A00(&CardMaster_TypeInfo, v41);
    sub_1B64A00(&ClassBoardBaseMaster_TypeInfo, v42);
    sub_1B64A00(&ClassBoardClassMaster_TypeInfo, v43);
    sub_1B64A00(&ClassBoardCommandSpellMaster_TypeInfo, v44);
    sub_1B64A00(&ClassBoardLineMaster_TypeInfo, v45);
    sub_1B64A00(&ClassBoardLockMaster_TypeInfo, v46);
    sub_1B64A00(&ClassBoardSquareMaster_TypeInfo, v47);
    sub_1B64A00(&ClassRelationMaster_TypeInfo, v48);
    sub_1B64A00(&ClassRelationOverwriteMaster_TypeInfo, v49);
    sub_1B64A00(&ClosedMessageMaster_TypeInfo, v50);
    sub_1B64A00(&CombineAppendPassiveSkillMaster_TypeInfo, v51);
    sub_1B64A00(&CombineCostumeMaster_TypeInfo, v52);
    sub_1B64A00(&CombineLimitGiftMaster_TypeInfo, v53);
    sub_1B64A00(&CombineLimitMaster_TypeInfo, v54);
    sub_1B64A00(&CombineLimitReleaseMaster_TypeInfo, v55);
    sub_1B64A00(&CombineMaster_TypeInfo, v56);
    sub_1B64A00(&CombineMaterialMaster_TypeInfo, v57);
    sub_1B64A00(&CombineQpMaster_TypeInfo, v58);
    sub_1B64A00(&CombineQpSvtEquipMaster_TypeInfo, v59);
    sub_1B64A00(&CombineSkillMaster_TypeInfo, v60);
    sub_1B64A00(&CombineTdMaster_TypeInfo, v61);
    sub_1B64A00(&CommandCardRankParamMaster_TypeInfo, v62);
    sub_1B64A00(&CommandCodeCommentMaster_TypeInfo, v63);
    sub_1B64A00(&CommandCodeMaster_TypeInfo, v64);
    sub_1B64A00(&CommandCodeSkillMaster_TypeInfo, v65);
    sub_1B64A00(&CommandCodeSkillReleaseMaster_TypeInfo, v66);
    sub_1B64A00(&CommandSpellMaster_TypeInfo, v67);
    sub_1B64A00(&CommonConsumeMaster_TypeInfo, v68);
    sub_1B64A00(&CommonReleaseMaster_TypeInfo, v69);
    sub_1B64A00(&CommonRestrictionMaster_TypeInfo, v70);
    sub_1B64A00(&CompleteMissionMaster_TypeInfo, v71);
    sub_1B64A00(&ConstantLongMaster_TypeInfo, v72);
    sub_1B64A00(&ConstantMaster_TypeInfo, v73);
    sub_1B64A00(&ConstantStrMaster_TypeInfo, v74);
    sub_1B64A00(&CvMaster_TypeInfo, v75);
    sub_1B64A00(&DataMasterBase___TypeInfo, v76);
    sub_1B64A00(&DialogMessageMaster_TypeInfo, v77);
    sub_1B64A00(&EffectMaster_TypeInfo, v78);
    sub_1B64A00(&EffectMovieMaster_TypeInfo, v79);
    sub_1B64A00(&EnemyMstBattleMaster_TypeInfo, v80);
    sub_1B64A00(&EnemyMstMaster_TypeInfo, v81);
    sub_1B64A00(&EquipAddMaster_TypeInfo, v82);
    sub_1B64A00(&EquipExpMaster_TypeInfo, v83);
    sub_1B64A00(&EquipImageMaster_TypeInfo, v84);
    sub_1B64A00(&EquipMaster_TypeInfo, v85);
    sub_1B64A00(&EquipSkillMaster_TypeInfo, v86);
    sub_1B64A00(&EventAddMaster_TypeInfo, v87);
    sub_1B64A00(&EventBoardGameCellMaster_TypeInfo, v88);
    sub_1B64A00(&EventBoardGameTokenMaster_TypeInfo, v89);
    sub_1B64A00(&EventBoardGameTokenRewardMaster_TypeInfo, v90);
    sub_1B64A00(&EventBonusFilterGroupInfoMaster_TypeInfo, v91);
    sub_1B64A00(&EventBonusFilterGroupMemberMaster_TypeInfo, v92);
    sub_1B64A00(&EventBonusFilterMaster_TypeInfo, v93);
    sub_1B64A00(&EventBoostItemUsedMaster_TypeInfo, v94);
    sub_1B64A00(&EventBossStatusUiMaster_TypeInfo, v95);
    sub_1B64A00(&EventBuddyPointMaster_TypeInfo, v96);
    sub_1B64A00(&EventBulletinBoardMaster_TypeInfo, v97);
    sub_1B64A00(&EventBulletinBoardReleaseMaster_TypeInfo, v98);
    sub_1B64A00(&EventCampaignMaster_TypeInfo, v99);
    sub_1B64A00(&EventCampaignReleaseMaster_TypeInfo, v100);
    sub_1B64A00(&EventCombineCostumeMaster_TypeInfo, v101);
    sub_1B64A00(&EventCombineMaster_TypeInfo, v102);
    sub_1B64A00(&EventCommandAssistMaster_TypeInfo, v103);
    sub_1B64A00(&EventConquestRewardMaster_TypeInfo, v104);
    sub_1B64A00(&EventCooltimeRewardMaster_TypeInfo, v105);
    sub_1B64A00(&EventDataLostBattleMaster_TypeInfo, v106);
    sub_1B64A00(&EventDataLostBattleResetMaster_TypeInfo, v107);
    sub_1B64A00(&EventDetailMaster_TypeInfo, v108);
    sub_1B64A00(&EventDiggingBlockMaster_TypeInfo, v109);
    sub_1B64A00(&EventDiggingMaster_TypeInfo, v110);
    sub_1B64A00(&EventDiggingRewardMaster_TypeInfo, v111);
    sub_1B64A00(&EventEquipSkillReleaseMaster_TypeInfo, v112);
    sub_1B64A00(&EventExpeditionMaster_TypeInfo, v113);
    sub_1B64A00(&EventExpeditionPieceMaster_TypeInfo, v114);
    sub_1B64A00(&EventFactoryMaster_TypeInfo, v115);
    sub_1B64A00(&EventFatigueRecoveryMaster_TypeInfo, v116);
    sub_1B64A00(&EventFilterMaster_TypeInfo, v117);
    sub_1B64A00(&EventFortificationDetailMaster_TypeInfo, v118);
    sub_1B64A00(&EventFortificationMaster_TypeInfo, v119);
    sub_1B64A00(&EventFortificationSvtMaster_TypeInfo, v120);
    sub_1B64A00(&EventGroupMaster_TypeInfo, v121);
    sub_1B64A00(&EventItemDisplayGroupMaster_TypeInfo, v122);
    sub_1B64A00(&EventItemDisplayMaster_TypeInfo, v123);
    sub_1B64A00(&EventItemDisplayReleaseMaster_TypeInfo, v124);
    sub_1B64A00(&EventLocationCampaignMaster_TypeInfo, v125);
    sub_1B64A00(&EventMaster_TypeInfo, v126);
    sub_1B64A00(&EventMissionActionAddMaster_TypeInfo, v127);
    sub_1B64A00(&EventMissionActionMaster_TypeInfo, v128);
    sub_1B64A00(&EventMissionAddMaster_TypeInfo, v129);
    sub_1B64A00(&EventMissionCondDetailMaster_TypeInfo, v130);
    sub_1B64A00(&EventMissionConditionMaster_TypeInfo, v131);
    sub_1B64A00(&EventMissionGroupMaster_TypeInfo, v132);
    sub_1B64A00(&EventMissionMaster_TypeInfo, v133);
    sub_1B64A00(&EventMuralMaster_TypeInfo, v134);
    sub_1B64A00(&EventPanelMapDetailMaster_TypeInfo, v135);
    sub_1B64A00(&EventPanelMapMaster_TypeInfo, v136);
    sub_1B64A00(&EventPanelScanMaster_TypeInfo, v137);
    sub_1B64A00(&EventPanelSpotMaster_TypeInfo, v138);
    sub_1B64A00(&EventPointActivityMaster_TypeInfo, v139);
    sub_1B64A00(&EventPointBuffMaster_TypeInfo, v140);
    sub_1B64A00(&EventPointGroupAddMaster_TypeInfo, v141);
    sub_1B64A00(&EventPointGroupMaster_TypeInfo, v142);
    sub_1B64A00(&EventPointMaster_TypeInfo, v143);
    sub_1B64A00(&EventPointUpperMaster_TypeInfo, v144);
    sub_1B64A00(&EventPointUpperReleaseMaster_TypeInfo, v145);
    sub_1B64A00(&EventProgressValueMaster_TypeInfo, v146);
    sub_1B64A00(&EventQuestCooltimeMaster_TypeInfo, v147);
    sub_1B64A00(&EventQuestMaster_TypeInfo, v148);
    sub_1B64A00(&EventRaceMaster_TypeInfo, v149);
    sub_1B64A00(&EventRaceResultMaster_TypeInfo, v150);
    sub_1B64A00(&EventRaidMaster_TypeInfo, v151);
    sub_1B64A00(&EventRandomMissionMaster_TypeInfo, v152);
    sub_1B64A00(&EventRecipeGiftMaster_TypeInfo, v153);
    sub_1B64A00(&EventRecipeMaster_TypeInfo, v154);
    sub_1B64A00(&EventRewardBgMaster_TypeInfo, v155);
    sub_1B64A00(&EventRewardExtraMaster_TypeInfo, v156);
    sub_1B64A00(&EventRewardGuideReleaseMaster_TypeInfo, v157);
    sub_1B64A00(&EventRewardMaster_TypeInfo, v158);
    sub_1B64A00(&EventRewardSceneMaster_TypeInfo, v159);
    sub_1B64A00(&EventRewardSceneReleaseMaster_TypeInfo, v160);
    sub_1B64A00(&EventRewardSetMaster_TypeInfo, v161);
    sub_1B64A00(&EventScriptMaster_TypeInfo, v162);
    sub_1B64A00(&EventScriptReleaseMaster_TypeInfo, v163);
    sub_1B64A00(&EventServantFatigueMaster_TypeInfo, v164);
    sub_1B64A00(&EventServantMaster_TypeInfo, v165);
    sub_1B64A00(&EventServantPointRankMaster_TypeInfo, v166);
    sub_1B64A00(&EventStatusMaster_TypeInfo, v167);
    sub_1B64A00(&EventStatusQuestMaster_TypeInfo, v168);
    sub_1B64A00(&EventSuperBossMaster_TypeInfo, v169);
    sub_1B64A00(&EventTowerMaster_TypeInfo, v170);
    sub_1B64A00(&EventTowerRewardMaster_TypeInfo, v171);
    sub_1B64A00(&EventTradeGoodsMaster_TypeInfo, v172);
    sub_1B64A00(&EventTradePickupMaster_TypeInfo, v173);
    sub_1B64A00(&EventTradeStoreMaster_TypeInfo, v174);
    sub_1B64A00(&EventTutorialCondMaster_TypeInfo, v175);
    sub_1B64A00(&EventTutorialMaster_TypeInfo, v176);
    sub_1B64A00(&EventUiMaster_TypeInfo, v177);
    sub_1B64A00(&EventUiReleaseMaster_TypeInfo, v178);
    sub_1B64A00(&EventUiValueMaster_TypeInfo, v179);
    sub_1B64A00(&EventVoicePlayMaster_TypeInfo, v180);
    sub_1B64A00(&ExcludeMotionMaster_TypeInfo, v181);
    sub_1B64A00(&FieldMotionMaster_TypeInfo, v182);
    sub_1B64A00(&FriendshipMaster_TypeInfo, v183);
    sub_1B64A00(&FriendshipQuestDialogInfoMaster_TypeInfo, v184);
    sub_1B64A00(&FuncDispMaster_TypeInfo, v185);
    sub_1B64A00(&FuncTypeDetailMaster_TypeInfo, v186);
    sub_1B64A00(&FunctionCategoryMaster_TypeInfo, v187);
    sub_1B64A00(&FunctionGroupMaster_TypeInfo, v188);
    sub_1B64A00(&FunctionMaster_TypeInfo, v189);
    sub_1B64A00(&GachaAppendMaster_TypeInfo, v190);
    sub_1B64A00(&GachaBehaviorMaster_TypeInfo, v191);
    sub_1B64A00(&GachaBonusSelectLineupMaster_TypeInfo, v192);
    sub_1B64A00(&GachaBonusSelectMaster_TypeInfo, v193);
    sub_1B64A00(&GachaDetailMaster_TypeInfo, v194);
    sub_1B64A00(&GachaExtraGiftMaster_TypeInfo, v195);
    sub_1B64A00(&GachaGroupMaster_TypeInfo, v196);
    sub_1B64A00(&GachaImageMaster_TypeInfo, v197);
    sub_1B64A00(&GachaMaster_TypeInfo, v198);
    sub_1B64A00(&GachaPickupCollateralGroupMaster_TypeInfo, v199);
    sub_1B64A00(&GachaPickupCollateralMaster_TypeInfo, v200);
    sub_1B64A00(&GachaReleaseMaster_TypeInfo, v201);
    sub_1B64A00(&GachaStoryAdjustMaster_TypeInfo, v202);
    sub_1B64A00(&GachaSubMaster_TypeInfo, v203);
    sub_1B64A00(&GachaTicketMaster_TypeInfo, v204);
    sub_1B64A00(&GiftAddMaster_TypeInfo, v205);
    sub_1B64A00(&GiftDetailMaster_TypeInfo, v206);
    sub_1B64A00(&GiftMaster_TypeInfo, v207);
    sub_1B64A00(&GuideMaster_TypeInfo, v208);
    sub_1B64A00(&HeelPortraitMaster_TypeInfo, v209);
    sub_1B64A00(&IllustratorMaster_TypeInfo, v210);
    sub_1B64A00(&IndividualityPersonalityMaster_TypeInfo, v211);
    sub_1B64A00(&IndividualityPolicyMaster_TypeInfo, v212);
    sub_1B64A00(&ItemDropEfficiencyMaster_TypeInfo, v213);
    sub_1B64A00(&ItemMaster_TypeInfo, v214);
    sub_1B64A00(&ItemSelectMaster_TypeInfo, v215);
    sub_1B64A00(&LoginQuestMaster_TypeInfo, v216);
    sub_1B64A00(&MapButtonMaster_TypeInfo, v217);
    sub_1B64A00(&MapCondMaster_TypeInfo, v218);
    sub_1B64A00(&MapGimmickLayerMaster_TypeInfo, v219);
    sub_1B64A00(&MapGimmickMaster_TypeInfo, v220);
    sub_1B64A00(&MapGimmickPathMaster_TypeInfo, v221);
    sub_1B64A00(&MapGimmickPathReleaseMaster_TypeInfo, v222);
    sub_1B64A00(&MapGimmickReleaseMaster_TypeInfo, v223);
    sub_1B64A00(&MapLayerMaster_TypeInfo, v224);
    sub_1B64A00(&MapMaster_TypeInfo, v225);
    sub_1B64A00(&MapUpdateScheduleMaster_TypeInfo, v226);
    sub_1B64A00(&MasterPhotoMaster_TypeInfo, v227);
    sub_1B64A00(&MaterialFolderMaster_TypeInfo, v228);
    sub_1B64A00(&MissionNaviQuestMaster_TypeInfo, v229);
    sub_1B64A00(&MissionNaviTransitionMaster_TypeInfo, v230);
    sub_1B64A00(&MstMissionDisplayInfoMaster_TypeInfo, v231);
    sub_1B64A00(&MstMissionMaster_TypeInfo, v232);
    sub_1B64A00(&MyRoomAddMaster_TypeInfo, v233);
    sub_1B64A00(&NewsMaster_TypeInfo, v234);
    sub_1B64A00(&NotEndEventMissionFixMaster_TypeInfo, v235);
    sub_1B64A00(&NpcFollowerMaster_TypeInfo, v236);
    sub_1B64A00(&NpcFollowerReleaseMaster_TypeInfo, v237);
    sub_1B64A00(&NpcServantEquipMaster_TypeInfo, v238);
    sub_1B64A00(&NpcServantFollowerIndividualityMaster_TypeInfo, v239);
    sub_1B64A00(&NpcServantFollowerMaster_TypeInfo, v240);
    sub_1B64A00(&OpeningMovieMaster_TypeInfo, v241);
    sub_1B64A00(&OtherUserGameMaster_TypeInfo, v242);
    sub_1B64A00(&PartialMaintenanceMaster_TypeInfo, v243);
    sub_1B64A00(&PaymentHistoryMaster_TypeInfo, v244);
    sub_1B64A00(&PaymentLimitMaster_TypeInfo, v245);
    sub_1B64A00(&PickupUserFollowerMaster_TypeInfo, v246);
    sub_1B64A00(&PrivilegeMaster_TypeInfo, v247);
    sub_1B64A00(&QuestAddMaster_TypeInfo, v248);
    sub_1B64A00(&QuestAutoOrganizationAdjustMaster_TypeInfo, v249);
    sub_1B64A00(&QuestBehaviorMaster_TypeInfo, v250);
    sub_1B64A00(&QuestConsumeItemMaster_TypeInfo, v251);
    sub_1B64A00(&QuestDateRangeMaster_TypeInfo, v252);
    sub_1B64A00(&QuestGroupMaster_TypeInfo, v253);
    sub_1B64A00(&QuestHintMaster_TypeInfo, v254);
    sub_1B64A00(&QuestMaster_TypeInfo, v255);
    sub_1B64A00(&QuestMessageMaster_TypeInfo, v256);
    sub_1B64A00(&QuestPhaseDetailAddMaster_TypeInfo, v257);
    sub_1B64A00(&QuestPhaseDetailMaster_TypeInfo, v258);
    sub_1B64A00(&QuestPhaseIndividualityMaster_TypeInfo, v259);
    sub_1B64A00(&QuestPhaseMaster_TypeInfo, v260);
    sub_1B64A00(&QuestPhasePresentMaster_TypeInfo, v261);
    sub_1B64A00(&QuestPickupMaster_TypeInfo, v262);
    sub_1B64A00(&QuestRacePointMaster_TypeInfo, v263);
    sub_1B64A00(&QuestRandomGroupMaster_TypeInfo, v264);
    sub_1B64A00(&QuestReleaseMaster_TypeInfo, v265);
    sub_1B64A00(&QuestReleaseOverwriteMaster_TypeInfo, v266);
    sub_1B64A00(&QuestResetMaster_TypeInfo, v267);
    sub_1B64A00(&QuestRestrictionInfoMaster_TypeInfo, v268);
    sub_1B64A00(&QuestRestrictionMaster_TypeInfo, v269);
    sub_1B64A00(&QuestScriptBranchMaterialMaster_TypeInfo, v270);
    sub_1B64A00(&QuestScriptMaster_TypeInfo, v271);
    sub_1B64A00(&QuestScriptMaterialNextMaster_TypeInfo, v272);
    sub_1B64A00(&QuestScriptMaterialOverwriteMaster_TypeInfo, v273);
    sub_1B64A00(&QuestScriptReleaseMaster_TypeInfo, v274);
    sub_1B64A00(&QuestSpotReleaseMaster_TypeInfo, v275);
    sub_1B64A00(&RecommendAdviceMessageMaster_TypeInfo, v276);
    sub_1B64A00(&RecommendSupportQuestMaster_TypeInfo, v277);
    sub_1B64A00(&RecoverMaster_TypeInfo, v278);
    sub_1B64A00(&ReprintStageMaster_TypeInfo, v279);
    sub_1B64A00(&RestrictionBaseMaster_TypeInfo, v280);
    sub_1B64A00(&RestrictionMaster_TypeInfo, v281);
    sub_1B64A00(&RestrictionMessageMaster_TypeInfo, v282);
    sub_1B64A00(&RestrictionSlotDetailMaster_TypeInfo, v283);
    sub_1B64A00(&RestrictionSlotMaster_TypeInfo, v284);
    sub_1B64A00(&RestrictionWholeMaster_TypeInfo, v285);
    sub_1B64A00(&RoadmapMaster_TypeInfo, v286);
    sub_1B64A00(&ServantAddMaster_TypeInfo, v287);
    sub_1B64A00(&ServantAnimationOverwriteMaster_TypeInfo, v288);
    sub_1B64A00(&ServantAppendPassiveSkillMaster_TypeInfo, v289);
    sub_1B64A00(&ServantBattlePointMaster_TypeInfo, v290);
    sub_1B64A00(&ServantCardAddMaster_TypeInfo, v291);
    sub_1B64A00(&ServantCardMaster_TypeInfo, v292);
    sub_1B64A00(&ServantChangeMaster_TypeInfo, v293);
    sub_1B64A00(&ServantClassMaster_TypeInfo, v294);
    sub_1B64A00(&ServantCollectionMaster_TypeInfo, v295);
    sub_1B64A00(&ServantCommandCodeUnlockMaster_TypeInfo, v296);
    sub_1B64A00(&ServantCommentAddMaster_TypeInfo, v297);
    sub_1B64A00(&ServantCommentMaster_TypeInfo, v298);
    sub_1B64A00(&ServantCostumeMaster_TypeInfo, v299);
    sub_1B64A00(&ServantCostumeReleaseMaster_TypeInfo, v300);
    sub_1B64A00(&ServantExceedMaster_TypeInfo, v301);
    sub_1B64A00(&ServantExpMaster_TypeInfo, v302);
    sub_1B64A00(&ServantFilterMaster_TypeInfo, v303);
    sub_1B64A00(&ServantFlagMaster_TypeInfo, v304);
    sub_1B64A00(&ServantFlagReleaseMaster_TypeInfo, v305);
    sub_1B64A00(&ServantGroupMaster_TypeInfo, v306);
    sub_1B64A00(&ServantIndividualityMaster_TypeInfo, v307);
    sub_1B64A00(&ServantLimitAddMaster_TypeInfo, v308);
    sub_1B64A00(&ServantLimitImageMaster_TypeInfo, v309);
    sub_1B64A00(&ServantLimitMaster_TypeInfo, v310);
    sub_1B64A00(&ServantLimitSpoilerProtectionMaster_TypeInfo, v311);
    sub_1B64A00(&ServantLvDetailMaster_TypeInfo, v312);
    sub_1B64A00(&ServantMaster_TypeInfo, v313);
    sub_1B64A00(&ServantMaterialFolderMaster_TypeInfo, v314);
    sub_1B64A00(&ServantOverwriteMaster_TypeInfo, v315);
    sub_1B64A00(&ServantPassiveSkillMaster_TypeInfo, v316);
    sub_1B64A00(&ServantPassiveSkillReleaseMaster_TypeInfo, v317);
    sub_1B64A00(&ServantPhotoMaster_TypeInfo, v318);
    sub_1B64A00(&ServantProfileMaster_TypeInfo, v319);
    sub_1B64A00(&ServantProfilePushMaster_TypeInfo, v320);
    sub_1B64A00(&ServantRarityMaster_TypeInfo, v321);
    sub_1B64A00(&ServantScriptAddMaster_TypeInfo, v322);
    sub_1B64A00(&ServantScriptMaster_TypeInfo, v323);
    sub_1B64A00(&ServantScriptMultipleMaster_TypeInfo, v324);
    sub_1B64A00(&ServantSkillMaster_TypeInfo, v325);
    sub_1B64A00(&ServantSkillReleaseMaster_TypeInfo, v326);
    sub_1B64A00(&ServantTransformMaster_TypeInfo, v327);
    sub_1B64A00(&ServantTreasureDeviceAddMaster_TypeInfo, v328);
    sub_1B64A00(&ServantTreasureDeviceDamageMaster_TypeInfo, v329);
    sub_1B64A00(&ServantTreasureDeviceReleaseMaster_TypeInfo, v330);
    sub_1B64A00(&ServantTreasureDvcMaster_TypeInfo, v331);
    sub_1B64A00(&ServantVoiceMaster_TypeInfo, v332);
    sub_1B64A00(&ServantVoicePatternMaster_TypeInfo, v333);
    sub_1B64A00(&ServantVoiceRelationMaster_TypeInfo, v334);
    sub_1B64A00(&SetItemMaster_TypeInfo, v335);
    sub_1B64A00(&ShopActionMaster_TypeInfo, v336);
    sub_1B64A00(&ShopDetailMaster_TypeInfo, v337);
    sub_1B64A00(&ShopGroupMaster_TypeInfo, v338);
    sub_1B64A00(&ShopMaster_TypeInfo, v339);
    sub_1B64A00(&ShopReleaseMaster_TypeInfo, v340);
    sub_1B64A00(&ShopScriptMaster_TypeInfo, v341);
    sub_1B64A00(&SkillAddMaster_TypeInfo, v342);
    sub_1B64A00(&SkillDetailMaster_TypeInfo, v343);
    sub_1B64A00(&SkillGroupMaster_TypeInfo, v344);
    sub_1B64A00(&SkillGroupOverwriteMaster_TypeInfo, v345);
    sub_1B64A00(&SkillIndividualityMaster_TypeInfo, v346);
    sub_1B64A00(&SkillLvMaster_TypeInfo, v347);
    sub_1B64A00(&SkillMaster_TypeInfo, v348);
    sub_1B64A00(&SpotAddMaster_TypeInfo, v349);
    sub_1B64A00(&SpotImageMaster_TypeInfo, v350);
    sub_1B64A00(&SpotLayerMaster_TypeInfo, v351);
    sub_1B64A00(&SpotMaster_TypeInfo, v352);
    sub_1B64A00(&SpotPathMaster_TypeInfo, v353);
    sub_1B64A00(&SpotRoadMaster_TypeInfo, v354);
    sub_1B64A00(&StageMaster_TypeInfo, v355);
    sub_1B64A00(&StatusEffectPosOverwriteMaster_TypeInfo, v356);
    sub_1B64A00(&StoneShopMaster_TypeInfo, v357);
    sub_1B64A00(&SubEquipMaster_TypeInfo, v358);
    sub_1B64A00(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v359);
    sub_1B64A00(&SvtCoinMaster_TypeInfo, v360);
    sub_1B64A00(&SvtMaterialTdMaster_TypeInfo, v361);
    sub_1B64A00(&SvtMultiPortraitMaster_TypeInfo, v362);
    sub_1B64A00(&TblFriendMaster_TypeInfo, v363);
    sub_1B64A00(&TblUserMaster_TypeInfo, v364);
    sub_1B64A00(&TelopMaster_TypeInfo, v365);
    sub_1B64A00(&TerminalOverwriteMaster_TypeInfo, v366);
    sub_1B64A00(&TipsBattleMaster_TypeInfo, v367);
    sub_1B64A00(&TotalBoxGachaMaster_TypeInfo, v368);
    sub_1B64A00(&TotalEventPointMaster_TypeInfo, v369);
    sub_1B64A00(&TotalEventRaceMaster_TypeInfo, v370);
    sub_1B64A00(&TotalEventRaidMaster_TypeInfo, v371);
    sub_1B64A00(&TotalLoginMaster_TypeInfo, v372);
    sub_1B64A00(&TreasureBoxGiftMaster_TypeInfo, v373);
    sub_1B64A00(&TreasureBoxMaster_TypeInfo, v374);
    sub_1B64A00(&TreasureBoxTalkMaster_TypeInfo, v375);
    sub_1B64A00(&TreasureDeviceSequenceWeightMaster_TypeInfo, v376);
    sub_1B64A00(&TreasureDvcDetailMaster_TypeInfo, v377);
    sub_1B64A00(&TreasureDvcLvMaster_TypeInfo, v378);
    sub_1B64A00(&TreasureDvcMaster_TypeInfo, v379);
    sub_1B64A00(&UpdateProfileDialogInfoMaster_TypeInfo, v380);
    sub_1B64A00(&UserAccessaryMaster_TypeInfo, v381);
    sub_1B64A00(&UserAccountLinkageMaster_TypeInfo, v382);
    sub_1B64A00(&UserBlacklistMaster_TypeInfo, v383);
    sub_1B64A00(&UserBoxGachaMaster_TypeInfo, v384);
    sub_1B64A00(&UserClassBoardSquareMaster_TypeInfo, v385);
    sub_1B64A00(&UserCoinRoomMaster_TypeInfo, v386);
    sub_1B64A00(&UserCombineExpMaster_TypeInfo, v387);
    sub_1B64A00(&UserCommandCodeCollectionMaster_TypeInfo, v388);
    sub_1B64A00(&UserCommandCodeMaster_TypeInfo, v389);
    sub_1B64A00(&UserContinueMaster_TypeInfo, v390);
    sub_1B64A00(&UserDeckMaster_TypeInfo, v391);
    sub_1B64A00(&UserDeleteReservationMaster_TypeInfo, v392);
    sub_1B64A00(&UserEquipMaster_TypeInfo, v393);
    sub_1B64A00(&UserEventAlloutBattleMaster_TypeInfo, v394);
    sub_1B64A00(&UserEventBoardGameTokenMaster_TypeInfo, v395);
    sub_1B64A00(&UserEventCooltimeRewardMaster_TypeInfo, v396);
    sub_1B64A00(&UserEventDataLostMaster_TypeInfo, v397);
    sub_1B64A00(&UserEventDeckMaster_TypeInfo, v398);
    sub_1B64A00(&UserEventDiggingMaster_TypeInfo, v399);
    sub_1B64A00(&UserEventExpeditionMaster_TypeInfo, v400);
    sub_1B64A00(&UserEventFortificationMaster_TypeInfo, v401);
    sub_1B64A00(&UserEventMapMaster_TypeInfo, v402);
    sub_1B64A00(&UserEventMaster_TypeInfo, v403);
    sub_1B64A00(&UserEventMissionCondDetailMaster_TypeInfo, v404);
    sub_1B64A00(&UserEventMissionFixMaster_TypeInfo, v405);
    sub_1B64A00(&UserEventMissionMaster_TypeInfo, v406);
    sub_1B64A00(&UserEventPointMaster_TypeInfo, v407);
    sub_1B64A00(&UserEventQuestCooltimeMaster_TypeInfo, v408);
    sub_1B64A00(&UserEventRaceMaster_TypeInfo, v409);
    sub_1B64A00(&UserEventRaidMaster_TypeInfo, v410);
    sub_1B64A00(&UserEventRandomMissionMaster_TypeInfo, v411);
    sub_1B64A00(&UserEventServantFatigueMaster_TypeInfo, v412);
    sub_1B64A00(&UserEventServantPointMaster_TypeInfo, v413);
    sub_1B64A00(&UserEventSpotMaster_TypeInfo, v414);
    sub_1B64A00(&UserEventTradeMaster_TypeInfo, v415);
    sub_1B64A00(&UserExchangeSvtMaster_TypeInfo, v416);
    sub_1B64A00(&UserExpMaster_TypeInfo, v417);
    sub_1B64A00(&UserExternalPaymentStoneMaster_TypeInfo, v418);
    sub_1B64A00(&UserFollowMaster_TypeInfo, v419);
    sub_1B64A00(&UserFollowerMaster_TypeInfo, v420);
    sub_1B64A00(&UserFormationMaster_TypeInfo, v421);
    sub_1B64A00(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v422);
    sub_1B64A00(&UserFriendRequestHistoryMaster_TypeInfo, v423);
    sub_1B64A00(&UserGachaDrawLogMaster_TypeInfo, v424);
    sub_1B64A00(&UserGachaExtraCountMaster_TypeInfo, v425);
    sub_1B64A00(&UserGachaHistoryMaster_TypeInfo, v426);
    sub_1B64A00(&UserGachaMaster_TypeInfo, v427);
    sub_1B64A00(&UserGachaPickupCollateralMaster_TypeInfo, v428);
    sub_1B64A00(&UserGameCommonMaster_TypeInfo, v429);
    sub_1B64A00(&UserGameMaster_TypeInfo, v430);
    sub_1B64A00(&UserHeelPortraitMaster_TypeInfo, v431);
    sub_1B64A00(&UserInterruptionQuestMaster_TypeInfo, v432);
    sub_1B64A00(&UserItemMaster_TypeInfo, v433);
    sub_1B64A00(&UserLoginMaster_TypeInfo, v434);
    sub_1B64A00(&UserMaster_TypeInfo, v435);
    sub_1B64A00(&UserNpcSvtRecordMaster_TypeInfo, v436);
    sub_1B64A00(&UserPaymentLimitMaster_TypeInfo, v437);
    sub_1B64A00(&UserPresentBoxMaster_TypeInfo, v438);
    sub_1B64A00(&UserPresentHistoryMaster_TypeInfo, v439);
    sub_1B64A00(&UserPrivilegeMaster_TypeInfo, v440);
    sub_1B64A00(&UserQuestInfoMaster_TypeInfo, v441);
    sub_1B64A00(&UserQuestMaster_TypeInfo, v442);
    sub_1B64A00(&UserQuestRecordMaster_TypeInfo, v443);
    sub_1B64A00(&UserQuestRouteMaster_TypeInfo, v444);
    sub_1B64A00(&UserRecommendFollowerMaster_TypeInfo, v445);
    sub_1B64A00(&UserRecommendSupportMaster_TypeInfo, v446);
    sub_1B64A00(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v447);
    sub_1B64A00(&UserServantAppendPassiveSkillMaster_TypeInfo, v448);
    sub_1B64A00(&UserServantCollectionMaster_TypeInfo, v449);
    sub_1B64A00(&UserServantCommandCardMaster_TypeInfo, v450);
    sub_1B64A00(&UserServantCommandCodeMaster_TypeInfo, v451);
    sub_1B64A00(&UserServantLeaderMaster_TypeInfo, v452);
    sub_1B64A00(&UserServantMaster_TypeInfo, v453);
    sub_1B64A00(&UserServantStorageMaster_TypeInfo, v454);
    sub_1B64A00(&UserServantVoicePlayedMaster_TypeInfo, v455);
    sub_1B64A00(&UserShopMaster_TypeInfo, v456);
    sub_1B64A00(&UserSubEquipMaster_TypeInfo, v457);
    sub_1B64A00(&UserSuperBossMaster_TypeInfo, v458);
    sub_1B64A00(&UserSupportDeckMaster_TypeInfo, v459);
    sub_1B64A00(&UserSvtCoinMaster_TypeInfo, v460);
    sub_1B64A00(&ViewEnemyMaster_TypeInfo, v461);
    sub_1B64A00(&ViewGachaFeaturedServantMaster_TypeInfo, v462);
    sub_1B64A00(&ViewQuestEnemyInfoMaster_TypeInfo, v463);
    sub_1B64A00(&ViewQuestInfoMaster_TypeInfo, v464);
    sub_1B64A00(&ViewWaveEnemyMaster_TypeInfo, v465);
    sub_1B64A00(&VoiceClosedMessageMaster_TypeInfo, v466);
    sub_1B64A00(&VoiceCondMaster_TypeInfo, v467);
    sub_1B64A00(&VoiceMaster_TypeInfo, v468);
    sub_1B64A00(&VoiceMaterialCondMaster_TypeInfo, v469);
    sub_1B64A00(&VoicePlayCondMaster_TypeInfo, v470);
    sub_1B64A00(&VoicePlayGroupMaster_TypeInfo, v471);
    sub_1B64A00(&VoiceReleaseMaster_TypeInfo, v472);
    sub_1B64A00(&WarAddMaster_TypeInfo, v473);
    sub_1B64A00(&WarBoardAIMaster_TypeInfo, v474);
    sub_1B64A00(&WarBoardActionPointClassMaster_TypeInfo, v475);
    sub_1B64A00(&WarBoardActionPointMaster_TypeInfo, v476);
    sub_1B64A00(&WarBoardActionTrendConditionMaster_TypeInfo, v477);
    sub_1B64A00(&WarBoardActionTrendGroupMaster_TypeInfo, v478);
    sub_1B64A00(&WarBoardActionTrendMaster_TypeInfo, v479);
    sub_1B64A00(&WarBoardCommonReleaseMaster_TypeInfo, v480);
    sub_1B64A00(&WarBoardDataMaster_TypeInfo, v481);
    sub_1B64A00(&WarBoardEffectMaster_TypeInfo, v482);
    sub_1B64A00(&WarBoardEventMaster_TypeInfo, v483);
    sub_1B64A00(&WarBoardEventScriptMaster_TypeInfo, v484);
    sub_1B64A00(&WarBoardFutureActionTrendMaster_TypeInfo, v485);
    sub_1B64A00(&WarBoardIndividualityClassMaster_TypeInfo, v486);
    sub_1B64A00(&WarBoardItemMaster_TypeInfo, v487);
    sub_1B64A00(&WarBoardMaster_TypeInfo, v488);
    sub_1B64A00(&WarBoardMessageMaster_TypeInfo, v489);
    sub_1B64A00(&WarBoardMessageScriptMaster_TypeInfo, v490);
    sub_1B64A00(&WarBoardOnboardSkillMaster_TypeInfo, v491);
    sub_1B64A00(&WarBoardPartySkillMaster_TypeInfo, v492);
    sub_1B64A00(&WarBoardQuestMaster_TypeInfo, v493);
    sub_1B64A00(&WarBoardRatingBaseMaster_TypeInfo, v494);
    sub_1B64A00(&WarBoardRatingOffsetGroupMaster_TypeInfo, v495);
    sub_1B64A00(&WarBoardRatingOffsetMaster_TypeInfo, v496);
    sub_1B64A00(&WarBoardReinforcementsMaster_TypeInfo, v497);
    sub_1B64A00(&WarBoardRoadMaster_TypeInfo, v498);
    sub_1B64A00(&WarBoardSquareIndexGroupMaster_TypeInfo, v499);
    sub_1B64A00(&WarBoardSquareMaster_TypeInfo, v500);
    sub_1B64A00(&WarBoardStageBossMaster_TypeInfo, v501);
    sub_1B64A00(&WarBoardStageDetailMaster_TypeInfo, v502);
    sub_1B64A00(&WarBoardStageLayoutMaster_TypeInfo, v503);
    sub_1B64A00(&WarBoardStageMaster_TypeInfo, v504);
    sub_1B64A00(&WarBoardStageNpcMaster_TypeInfo, v505);
    sub_1B64A00(&WarBoardStagePieceDetailMaster_TypeInfo, v506);
    sub_1B64A00(&WarBoardStageReinforcementsMaster_TypeInfo, v507);
    sub_1B64A00(&WarBoardStageWallMaster_TypeInfo, v508);
    sub_1B64A00(&WarBoardTacticalTrendMaster_TypeInfo, v509);
    sub_1B64A00(&WarBoardTreasureMaster_TypeInfo, v510);
    sub_1B64A00(&WarGroupMaster_TypeInfo, v511);
    sub_1B64A00(&WarMaster_TypeInfo, v512);
    sub_1B64A00(&WarMessageMaster_TypeInfo, v513);
    sub_1B64A00(&WarQuestSelectionMaster_TypeInfo, v514);
    byte_49FE679 = 1;
  }
  v515 = (DataMasterBase_array *)sub_1B64AA8(DataMasterBase___TypeInfo, 513LL);
  v516 = (ServantMaster_o *)sub_1B64C4C(ServantMaster_TypeInfo);
  ServantMaster___ctor(v516, 0LL);
  if ( !v515 )
    sub_1B64C5C(v517, v518);
  if ( v516 )
  {
    v517 = sub_1B64B3C(v516, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  p_max_length = &v515->max_length;
  if ( !v515->max_length )
    goto LABEL_1544;
  v515->m_Items[0] = (DataMasterBase_o *)v516;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)v515->m_Items, (int32_t)v516, v519, v520);
  v522 = (ServantClassMaster_o *)sub_1B64C4C(ServantClassMaster_TypeInfo);
  ServantClassMaster___ctor(v522, 0LL);
  if ( v522 )
  {
    v517 = sub_1B64B3C(v522, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1544;
  v515->m_Items[1] = (DataMasterBase_o *)v522;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[1], (int32_t)v522, v523, v524);
  v525 = (ServantCommentMaster_o *)sub_1B64C4C(ServantCommentMaster_TypeInfo);
  ServantCommentMaster___ctor(v525, 0LL);
  if ( v525 )
  {
    v517 = sub_1B64B3C(v525, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1544;
  v515->m_Items[2] = (DataMasterBase_o *)v525;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[2], (int32_t)v525, v526, v527);
  v528 = (ServantProfileMaster_o *)sub_1B64C4C(ServantProfileMaster_TypeInfo);
  ServantProfileMaster___ctor(v528, 0LL);
  if ( v528 )
  {
    v517 = sub_1B64B3C(v528, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1544;
  v515->m_Items[3] = (DataMasterBase_o *)v528;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[3], (int32_t)v528, v529, v530);
  v531 = (WarMaster_o *)sub_1B64C4C(WarMaster_TypeInfo);
  WarMaster___ctor(v531, 0LL);
  if ( v531 )
  {
    v517 = sub_1B64B3C(v531, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1544;
  v515->m_Items[4] = (DataMasterBase_o *)v531;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[4], (int32_t)v531, v532, v533);
  v534 = (UserMaster_o *)sub_1B64C4C(UserMaster_TypeInfo);
  UserMaster___ctor(v534, 0LL);
  if ( v534 )
  {
    v517 = sub_1B64B3C(v534, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1544;
  v515->m_Items[5] = (DataMasterBase_o *)v534;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[5], (int32_t)v534, v535, v536);
  v537 = (UserGameMaster_o *)sub_1B64C4C(UserGameMaster_TypeInfo);
  UserGameMaster___ctor(v537, 0LL);
  if ( v537 )
  {
    v517 = sub_1B64B3C(v537, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1544;
  v515->m_Items[6] = (DataMasterBase_o *)v537;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[6], (int32_t)v537, v538, v539);
  v540 = (TblUserMaster_o *)sub_1B64C4C(TblUserMaster_TypeInfo);
  TblUserMaster___ctor(v540, 0LL);
  if ( v540 )
  {
    v517 = sub_1B64B3C(v540, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1544;
  v515->m_Items[7] = (DataMasterBase_o *)v540;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[7], (int32_t)v540, v541, v542);
  v543 = (UserItemMaster_o *)sub_1B64C4C(UserItemMaster_TypeInfo);
  UserItemMaster___ctor(v543, 0LL);
  if ( v543 )
  {
    v517 = sub_1B64B3C(v543, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1544;
  v515->m_Items[8] = (DataMasterBase_o *)v543;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[8], (int32_t)v543, v544, v545);
  v546 = (UserServantMaster_o *)sub_1B64C4C(UserServantMaster_TypeInfo);
  UserServantMaster___ctor(v546, 0LL);
  if ( v546 )
  {
    v517 = sub_1B64B3C(v546, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1544;
  v515->m_Items[9] = (DataMasterBase_o *)v546;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[9], (int32_t)v546, v547, v548);
  v549 = (UserServantStorageMaster_o *)sub_1B64C4C(UserServantStorageMaster_TypeInfo);
  UserServantStorageMaster___ctor(v549, 0LL);
  if ( v549 )
  {
    v517 = sub_1B64B3C(v549, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1544;
  v515->m_Items[10] = (DataMasterBase_o *)v549;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[10], (int32_t)v549, v550, v551);
  v552 = (UserAccessaryMaster_o *)sub_1B64C4C(UserAccessaryMaster_TypeInfo);
  UserAccessaryMaster___ctor(v552, 0LL);
  if ( v552 )
  {
    v517 = sub_1B64B3C(v552, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1544;
  v515->m_Items[11] = (DataMasterBase_o *)v552;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[11], (int32_t)v552, v553, v554);
  v555 = (UserQuestMaster_o *)sub_1B64C4C(UserQuestMaster_TypeInfo);
  UserQuestMaster___ctor(v555, 0LL);
  if ( v555 )
  {
    v517 = sub_1B64B3C(v555, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1544;
  v515->m_Items[12] = (DataMasterBase_o *)v555;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[12], (int32_t)v555, v556, v557);
  v558 = (BattleMaster_o *)sub_1B64C4C(BattleMaster_TypeInfo);
  BattleMaster___ctor(v558, 0LL);
  if ( v558 )
  {
    v517 = sub_1B64B3C(v558, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1544;
  v515->m_Items[13] = (DataMasterBase_o *)v558;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[13], (int32_t)v558, v559, v560);
  v561 = (OtherUserGameMaster_o *)sub_1B64C4C(OtherUserGameMaster_TypeInfo);
  OtherUserGameMaster___ctor(v561, 0LL);
  if ( v561 )
  {
    v517 = sub_1B64B3C(v561, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1544;
  v515->m_Items[14] = (DataMasterBase_o *)v561;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[14], (int32_t)v561, v562, v563);
  v564 = (TblFriendMaster_o *)sub_1B64C4C(TblFriendMaster_TypeInfo);
  TblFriendMaster___ctor(v564, 0LL);
  if ( v564 )
  {
    v517 = sub_1B64B3C(v564, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1544;
  v515->m_Items[15] = (DataMasterBase_o *)v564;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[15], (int32_t)v564, v565, v566);
  v567 = (AreaMaster_o *)sub_1B64C4C(AreaMaster_TypeInfo);
  AreaMaster___ctor(v567, 0LL);
  if ( v567 )
  {
    v517 = sub_1B64B3C(v567, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1544;
  v515->m_Items[16] = (DataMasterBase_o *)v567;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[16], (int32_t)v567, v568, v569);
  v570 = (ServantCardMaster_o *)sub_1B64C4C(ServantCardMaster_TypeInfo);
  ServantCardMaster___ctor(v570, 0LL);
  if ( v570 )
  {
    v517 = sub_1B64B3C(v570, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1544;
  v515->m_Items[17] = (DataMasterBase_o *)v570;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[17], (int32_t)v570, v571, v572);
  v573 = (EventMaster_o *)sub_1B64C4C(EventMaster_TypeInfo);
  EventMaster___ctor(v573, 0LL);
  if ( v573 )
  {
    v517 = sub_1B64B3C(v573, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1544;
  v515->m_Items[18] = (DataMasterBase_o *)v573;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[18], (int32_t)v573, v574, v575);
  v576 = (ItemMaster_o *)sub_1B64C4C(ItemMaster_TypeInfo);
  ItemMaster___ctor(v576, 0LL);
  if ( v576 )
  {
    v517 = sub_1B64B3C(v576, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1544;
  v515->m_Items[19] = (DataMasterBase_o *)v576;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[19], (int32_t)v576, v577, v578);
  v579 = (QuestMaster_o *)sub_1B64C4C(QuestMaster_TypeInfo);
  QuestMaster___ctor(v579, 0LL);
  if ( v579 )
  {
    v517 = sub_1B64B3C(v579, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1544;
  v515->m_Items[20] = (DataMasterBase_o *)v579;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[20], (int32_t)v579, v580, v581);
  v582 = (QuestAddMaster_o *)sub_1B64C4C(QuestAddMaster_TypeInfo);
  QuestAddMaster___ctor(v582, 0LL);
  if ( v582 )
  {
    v517 = sub_1B64B3C(v582, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1544;
  v515->m_Items[21] = (DataMasterBase_o *)v582;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[21], (int32_t)v582, v583, v584);
  v585 = (QuestReleaseMaster_o *)sub_1B64C4C(QuestReleaseMaster_TypeInfo);
  QuestReleaseMaster___ctor(v585, 0LL);
  if ( v585 )
  {
    v517 = sub_1B64B3C(v585, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1544;
  v515->m_Items[22] = (DataMasterBase_o *)v585;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[22], (int32_t)v585, v586, v587);
  v588 = (QuestDateRangeMaster_o *)sub_1B64C4C(QuestDateRangeMaster_TypeInfo);
  QuestDateRangeMaster___ctor(v588, 0LL);
  if ( v588 )
  {
    v517 = sub_1B64B3C(v588, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1544;
  v515->m_Items[23] = (DataMasterBase_o *)v588;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[23], (int32_t)v588, v589, v590);
  v591 = (QuestPhaseMaster_o *)sub_1B64C4C(QuestPhaseMaster_TypeInfo);
  QuestPhaseMaster___ctor(v591, 0LL);
  if ( v591 )
  {
    v517 = sub_1B64B3C(v591, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1544;
  v515->m_Items[24] = (DataMasterBase_o *)v591;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[24], (int32_t)v591, v592, v593);
  v594 = (QuestPhaseDetailMaster_o *)sub_1B64C4C(QuestPhaseDetailMaster_TypeInfo);
  QuestPhaseDetailMaster___ctor(v594, 0LL);
  if ( v594 )
  {
    v517 = sub_1B64B3C(v594, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1544;
  v515->m_Items[25] = (DataMasterBase_o *)v594;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[25], (int32_t)v594, v595, v596);
  v597 = (QuestGroupMaster_o *)sub_1B64C4C(QuestGroupMaster_TypeInfo);
  QuestGroupMaster___ctor(v597, 0LL);
  if ( v597 )
  {
    v517 = sub_1B64B3C(v597, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1544;
  v515->m_Items[26] = (DataMasterBase_o *)v597;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[26], (int32_t)v597, v598, v599);
  v600 = (QuestRandomGroupMaster_o *)sub_1B64C4C(QuestRandomGroupMaster_TypeInfo);
  QuestRandomGroupMaster___ctor(v600, 0LL);
  if ( v600 )
  {
    v517 = sub_1B64B3C(v600, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1544;
  v515->m_Items[27] = (DataMasterBase_o *)v600;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[27], (int32_t)v600, v601, v602);
  v603 = (QuestConsumeItemMaster_o *)sub_1B64C4C(QuestConsumeItemMaster_TypeInfo);
  QuestConsumeItemMaster___ctor(v603, 0LL);
  if ( v603 )
  {
    v517 = sub_1B64B3C(v603, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1544;
  v515->m_Items[28] = (DataMasterBase_o *)v603;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[28], (int32_t)v603, v604, v605);
  v606 = (QuestMessageMaster_o *)sub_1B64C4C(QuestMessageMaster_TypeInfo);
  QuestMessageMaster___ctor(v606, 0LL);
  if ( v606 )
  {
    v517 = sub_1B64B3C(v606, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1544;
  v515->m_Items[29] = (DataMasterBase_o *)v606;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[29], (int32_t)v606, v607, v608);
  v609 = (UserQuestInfoMaster_o *)sub_1B64C4C(UserQuestInfoMaster_TypeInfo);
  UserQuestInfoMaster___ctor(v609, 0LL);
  if ( v609 )
  {
    v517 = sub_1B64B3C(v609, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1544;
  v515->m_Items[30] = (DataMasterBase_o *)v609;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[30], (int32_t)v609, v610, v611);
  v612 = (UserQuestRecordMaster_o *)sub_1B64C4C(UserQuestRecordMaster_TypeInfo);
  UserQuestRecordMaster___ctor(v612, 0LL);
  if ( v612 )
  {
    v517 = sub_1B64B3C(v612, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1544;
  v515->m_Items[31] = (DataMasterBase_o *)v612;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[31], (int32_t)v612, v613, v614);
  v615 = (ViewQuestInfoMaster_o *)sub_1B64C4C(ViewQuestInfoMaster_TypeInfo);
  ViewQuestInfoMaster___ctor(v615, 0LL);
  if ( v615 )
  {
    v517 = sub_1B64B3C(v615, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1544;
  v515->m_Items[32] = (DataMasterBase_o *)v615;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[32], (int32_t)v615, v616, v617);
  v618 = (ViewEnemyMaster_o *)sub_1B64C4C(ViewEnemyMaster_TypeInfo);
  ViewEnemyMaster___ctor(v618, 0LL);
  if ( v618 )
  {
    v517 = sub_1B64B3C(v618, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1544;
  v515->m_Items[33] = (DataMasterBase_o *)v618;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[33], (int32_t)v618, v619, v620);
  v621 = (ViewQuestEnemyInfoMaster_o *)sub_1B64C4C(ViewQuestEnemyInfoMaster_TypeInfo);
  ViewQuestEnemyInfoMaster___ctor(v621, 0LL);
  if ( v621 )
  {
    v517 = sub_1B64B3C(v621, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1544;
  v515->m_Items[34] = (DataMasterBase_o *)v621;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[34], (int32_t)v621, v622, v623);
  v624 = (BlankEarthSpotMaster_o *)sub_1B64C4C(BlankEarthSpotMaster_TypeInfo);
  BlankEarthSpotMaster___ctor(v624, 0LL);
  if ( v624 )
  {
    v517 = sub_1B64B3C(v624, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1544;
  v515->m_Items[35] = (DataMasterBase_o *)v624;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[35], (int32_t)v624, v625, v626);
  v627 = (BlankEarthSpotAddMaster_o *)sub_1B64C4C(BlankEarthSpotAddMaster_TypeInfo);
  BlankEarthSpotAddMaster___ctor(v627, 0LL);
  if ( v627 )
  {
    v517 = sub_1B64B3C(v627, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1544;
  v515->m_Items[36] = (DataMasterBase_o *)v627;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[36], (int32_t)v627, v628, v629);
  v630 = (SpotMaster_o *)sub_1B64C4C(SpotMaster_TypeInfo);
  SpotMaster___ctor(v630, 0LL);
  if ( v630 )
  {
    v517 = sub_1B64B3C(v630, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1544;
  v515->m_Items[37] = (DataMasterBase_o *)v630;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[37], (int32_t)v630, v631, v632);
  v633 = (SpotImageMaster_o *)sub_1B64C4C(SpotImageMaster_TypeInfo);
  SpotImageMaster___ctor(v633, 0LL);
  if ( v633 )
  {
    v517 = sub_1B64B3C(v633, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1544;
  v515->m_Items[38] = (DataMasterBase_o *)v633;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[38], (int32_t)v633, v634, v635);
  v636 = (SpotRoadMaster_o *)sub_1B64C4C(SpotRoadMaster_TypeInfo);
  SpotRoadMaster___ctor(v636, 0LL);
  if ( v636 )
  {
    v517 = sub_1B64B3C(v636, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1544;
  v515->m_Items[39] = (DataMasterBase_o *)v636;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[39], (int32_t)v636, v637, v638);
  v639 = (SpotPathMaster_o *)sub_1B64C4C(SpotPathMaster_TypeInfo);
  SpotPathMaster___ctor(v639, 0LL);
  if ( v639 )
  {
    v517 = sub_1B64B3C(v639, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1544;
  v515->m_Items[40] = (DataMasterBase_o *)v639;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[40], (int32_t)v639, v640, v641);
  v642 = (SpotAddMaster_o *)sub_1B64C4C(SpotAddMaster_TypeInfo);
  SpotAddMaster___ctor(v642, 0LL);
  if ( v642 )
  {
    v517 = sub_1B64B3C(v642, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1544;
  v515->m_Items[41] = (DataMasterBase_o *)v642;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[41], (int32_t)v642, v643, v644);
  v645 = (MapGimmickMaster_o *)sub_1B64C4C(MapGimmickMaster_TypeInfo);
  MapGimmickMaster___ctor(v645, 0LL);
  if ( v645 )
  {
    v517 = sub_1B64B3C(v645, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1544;
  v515->m_Items[42] = (DataMasterBase_o *)v645;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[42], (int32_t)v645, v646, v647);
  v648 = (GiftMaster_o *)sub_1B64C4C(GiftMaster_TypeInfo);
  GiftMaster___ctor(v648, 0LL);
  if ( v648 )
  {
    v517 = sub_1B64B3C(v648, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1544;
  v515->m_Items[43] = (DataMasterBase_o *)v648;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[43], (int32_t)v648, v649, v650);
  v651 = (GiftAddMaster_o *)sub_1B64C4C(GiftAddMaster_TypeInfo);
  GiftAddMaster___ctor(v651, 0LL);
  if ( v651 )
  {
    v517 = sub_1B64B3C(v651, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1544;
  v515->m_Items[44] = (DataMasterBase_o *)v651;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[44], (int32_t)v651, v652, v653);
  v654 = (ShopMaster_o *)sub_1B64C4C(ShopMaster_TypeInfo);
  ShopMaster___ctor(v654, 0LL);
  if ( v654 )
  {
    v517 = sub_1B64B3C(v654, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1544;
  v515->m_Items[45] = (DataMasterBase_o *)v654;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[45], (int32_t)v654, v655, v656);
  v657 = (StoneShopMaster_o *)sub_1B64C4C(StoneShopMaster_TypeInfo);
  StoneShopMaster___ctor(v657, 0LL);
  if ( v657 )
  {
    v517 = sub_1B64B3C(v657, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1544;
  v515->m_Items[46] = (DataMasterBase_o *)v657;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[46], (int32_t)v657, v658, v659);
  v660 = (BankShopMaster_o *)sub_1B64C4C(BankShopMaster_TypeInfo);
  BankShopMaster___ctor(v660, 0LL);
  if ( v660 )
  {
    v517 = sub_1B64B3C(v660, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1544;
  v515->m_Items[47] = (DataMasterBase_o *)v660;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[47], (int32_t)v660, v661, v662);
  v663 = (ShopScriptMaster_o *)sub_1B64C4C(ShopScriptMaster_TypeInfo);
  ShopScriptMaster___ctor(v663, 0LL);
  if ( v663 )
  {
    v517 = sub_1B64B3C(v663, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1544;
  v515->m_Items[48] = (DataMasterBase_o *)v663;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[48], (int32_t)v663, v664, v665);
  v666 = (StageMaster_o *)sub_1B64C4C(StageMaster_TypeInfo);
  StageMaster___ctor(v666, 0LL);
  if ( v666 )
  {
    v517 = sub_1B64B3C(v666, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1544;
  v515->m_Items[49] = (DataMasterBase_o *)v666;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[49], (int32_t)v666, v667, v668);
  v669 = (ServantGroupMaster_o *)sub_1B64C4C(ServantGroupMaster_TypeInfo);
  ServantGroupMaster___ctor(v669, 0LL);
  if ( v669 )
  {
    v517 = sub_1B64B3C(v669, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1544;
  v515->m_Items[50] = (DataMasterBase_o *)v669;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[50], (int32_t)v669, v670, v671);
  v672 = (ServantLimitMaster_o *)sub_1B64C4C(ServantLimitMaster_TypeInfo);
  ServantLimitMaster___ctor(v672, 0LL);
  if ( v672 )
  {
    v517 = sub_1B64B3C(v672, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1544;
  v515->m_Items[51] = (DataMasterBase_o *)v672;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[51], (int32_t)v672, v673, v674);
  v675 = (ServantLimitAddMaster_o *)sub_1B64C4C(ServantLimitAddMaster_TypeInfo);
  ServantLimitAddMaster___ctor(v675, 0LL);
  if ( v675 )
  {
    v517 = sub_1B64B3C(v675, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1544;
  v515->m_Items[52] = (DataMasterBase_o *)v675;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[52], (int32_t)v675, v676, v677);
  v678 = (ServantSkillMaster_o *)sub_1B64C4C(ServantSkillMaster_TypeInfo);
  ServantSkillMaster___ctor(v678, 0LL);
  if ( v678 )
  {
    v517 = sub_1B64B3C(v678, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1544;
  v515->m_Items[53] = (DataMasterBase_o *)v678;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[53], (int32_t)v678, v679, v680);
  v681 = (ServantPassiveSkillMaster_o *)sub_1B64C4C(ServantPassiveSkillMaster_TypeInfo);
  ServantPassiveSkillMaster___ctor(v681, 0LL);
  if ( v681 )
  {
    v517 = sub_1B64B3C(v681, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1544;
  v515->m_Items[54] = (DataMasterBase_o *)v681;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[54], (int32_t)v681, v682, v683);
  v684 = (BgmMaster_o *)sub_1B64C4C(BgmMaster_TypeInfo);
  BgmMaster___ctor(v684, 0LL);
  if ( v684 )
  {
    v517 = sub_1B64B3C(v684, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1544;
  v515->m_Items[55] = (DataMasterBase_o *)v684;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[55], (int32_t)v684, v685, v686);
  v687 = (ServantScriptMaster_o *)sub_1B64C4C(ServantScriptMaster_TypeInfo);
  ServantScriptMaster___ctor(v687, 0LL);
  if ( v687 )
  {
    v517 = sub_1B64B3C(v687, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1544;
  v515->m_Items[56] = (DataMasterBase_o *)v687;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[56], (int32_t)v687, v688, v689);
  v690 = (NewsMaster_o *)sub_1B64C4C(NewsMaster_TypeInfo);
  NewsMaster___ctor(v690, 0LL);
  if ( v690 )
  {
    v517 = sub_1B64B3C(v690, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1544;
  v515->m_Items[57] = (DataMasterBase_o *)v690;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[57], (int32_t)v690, v691, v692);
  v693 = (TelopMaster_o *)sub_1B64C4C(TelopMaster_TypeInfo);
  TelopMaster___ctor(v693, 0LL);
  if ( v693 )
  {
    v517 = sub_1B64B3C(v693, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1544;
  v515->m_Items[58] = (DataMasterBase_o *)v693;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[58], (int32_t)v693, v694, v695);
  v696 = (UserExpMaster_o *)sub_1B64C4C(UserExpMaster_TypeInfo);
  UserExpMaster___ctor(v696, 0LL);
  if ( v696 )
  {
    v517 = sub_1B64B3C(v696, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1544;
  v515->m_Items[59] = (DataMasterBase_o *)v696;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[59], (int32_t)v696, v697, v698);
  v699 = (TreasureDvcMaster_o *)sub_1B64C4C(TreasureDvcMaster_TypeInfo);
  TreasureDvcMaster___ctor(v699, 0LL);
  if ( v699 )
  {
    v517 = sub_1B64B3C(v699, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1544;
  v515->m_Items[60] = (DataMasterBase_o *)v699;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[60], (int32_t)v699, v700, v701);
  v702 = (ServantTreasureDvcMaster_o *)sub_1B64C4C(ServantTreasureDvcMaster_TypeInfo);
  ServantTreasureDvcMaster___ctor(v702, 0LL);
  if ( v702 )
  {
    v517 = sub_1B64B3C(v702, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1544;
  v515->m_Items[61] = (DataMasterBase_o *)v702;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[61], (int32_t)v702, v703, v704);
  v705 = (SkillMaster_o *)sub_1B64C4C(SkillMaster_TypeInfo);
  SkillMaster___ctor(v705, 0LL);
  if ( v705 )
  {
    v517 = sub_1B64B3C(v705, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1544;
  v515->m_Items[62] = (DataMasterBase_o *)v705;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[62], (int32_t)v705, v706, v707);
  v708 = (SkillLvMaster_o *)sub_1B64C4C(SkillLvMaster_TypeInfo);
  SkillLvMaster___ctor(v708, 0LL);
  if ( v708 )
  {
    v517 = sub_1B64B3C(v708, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1544;
  v515->m_Items[63] = (DataMasterBase_o *)v708;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[63], (int32_t)v708, v709, v710);
  v711 = (SkillDetailMaster_o *)sub_1B64C4C(SkillDetailMaster_TypeInfo);
  SkillDetailMaster___ctor(v711, 0LL);
  if ( v711 )
  {
    v517 = sub_1B64B3C(v711, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1544;
  v515->m_Items[64] = (DataMasterBase_o *)v711;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[64], (int32_t)v711, v712, v713);
  v714 = (CommandSpellMaster_o *)sub_1B64C4C(CommandSpellMaster_TypeInfo);
  CommandSpellMaster___ctor(v714, 0LL);
  if ( v714 )
  {
    v517 = sub_1B64B3C(v714, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1544;
  v515->m_Items[65] = (DataMasterBase_o *)v714;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[65], (int32_t)v714, v715, v716);
  v717 = (EquipMaster_o *)sub_1B64C4C(EquipMaster_TypeInfo);
  EquipMaster___ctor(v717, 0LL);
  if ( v717 )
  {
    v517 = sub_1B64B3C(v717, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1544;
  v515->m_Items[66] = (DataMasterBase_o *)v717;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[66], (int32_t)v717, v718, v719);
  v720 = (EquipExpMaster_o *)sub_1B64C4C(EquipExpMaster_TypeInfo);
  EquipExpMaster___ctor(v720, 0LL);
  if ( v720 )
  {
    v517 = sub_1B64B3C(v720, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1544;
  v515->m_Items[67] = (DataMasterBase_o *)v720;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[67], (int32_t)v720, v721, v722);
  v723 = (EquipSkillMaster_o *)sub_1B64C4C(EquipSkillMaster_TypeInfo);
  EquipSkillMaster___ctor(v723, 0LL);
  if ( v723 )
  {
    v517 = sub_1B64B3C(v723, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1544;
  v515->m_Items[68] = (DataMasterBase_o *)v723;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[68], (int32_t)v723, v724, v725);
  v726 = (SubEquipMaster_o *)sub_1B64C4C(SubEquipMaster_TypeInfo);
  SubEquipMaster___ctor(v726, 0LL);
  if ( v726 )
  {
    v517 = sub_1B64B3C(v726, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1544;
  v515->m_Items[69] = (DataMasterBase_o *)v726;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[69], (int32_t)v726, v727, v728);
  v729 = (AccessaryMaster_o *)sub_1B64C4C(AccessaryMaster_TypeInfo);
  AccessaryMaster___ctor(v729, 0LL);
  if ( v729 )
  {
    v517 = sub_1B64B3C(v729, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1544;
  v515->m_Items[70] = (DataMasterBase_o *)v729;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[70], (int32_t)v729, v730, v731);
  v732 = (UserPresentBoxMaster_o *)sub_1B64C4C(UserPresentBoxMaster_TypeInfo);
  UserPresentBoxMaster___ctor(v732, 0LL);
  if ( v732 )
  {
    v517 = sub_1B64B3C(v732, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1544;
  v515->m_Items[71] = (DataMasterBase_o *)v732;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[71], (int32_t)v732, v733, v734);
  v735 = (UserDeckMaster_o *)sub_1B64C4C(UserDeckMaster_TypeInfo);
  UserDeckMaster___ctor(v735, 0LL);
  if ( v735 )
  {
    v517 = sub_1B64B3C(v735, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1544;
  v515->m_Items[72] = (DataMasterBase_o *)v735;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[72], (int32_t)v735, v736, v737);
  v738 = (UserSubEquipMaster_o *)sub_1B64C4C(UserSubEquipMaster_TypeInfo);
  UserSubEquipMaster___ctor(v738, 0LL);
  if ( v738 )
  {
    v517 = sub_1B64B3C(v738, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1544;
  v515->m_Items[73] = (DataMasterBase_o *)v738;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[73], (int32_t)v738, v739, v740);
  v741 = (GachaMaster_o *)sub_1B64C4C(GachaMaster_TypeInfo);
  GachaMaster___ctor(v741, 0LL);
  if ( v741 )
  {
    v517 = sub_1B64B3C(v741, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1544;
  v515->m_Items[74] = (DataMasterBase_o *)v741;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[74], (int32_t)v741, v742, v743);
  v744 = (GachaImageMaster_o *)sub_1B64C4C(GachaImageMaster_TypeInfo);
  GachaImageMaster___ctor(v744, 0LL);
  if ( v744 )
  {
    v517 = sub_1B64B3C(v744, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1544;
  v515->m_Items[75] = (DataMasterBase_o *)v744;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[75], (int32_t)v744, v745, v746);
  v747 = (UserGachaMaster_o *)sub_1B64C4C(UserGachaMaster_TypeInfo);
  UserGachaMaster___ctor(v747, 0LL);
  if ( v747 )
  {
    v517 = sub_1B64B3C(v747, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1544;
  v515->m_Items[76] = (DataMasterBase_o *)v747;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[76], (int32_t)v747, v748, v749);
  v750 = (UserEquipMaster_o *)sub_1B64C4C(UserEquipMaster_TypeInfo);
  UserEquipMaster___ctor(v750, 0LL);
  if ( v750 )
  {
    v517 = sub_1B64B3C(v750, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1544;
  v515->m_Items[77] = (DataMasterBase_o *)v750;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[77], (int32_t)v750, v751, v752);
  v753 = (UserServantCollectionMaster_o *)sub_1B64C4C(UserServantCollectionMaster_TypeInfo);
  UserServantCollectionMaster___ctor(v753, 0LL);
  if ( v753 )
  {
    v517 = sub_1B64B3C(v753, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1544;
  v515->m_Items[78] = (DataMasterBase_o *)v753;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[78], (int32_t)v753, v754, v755);
  v756 = (FriendshipMaster_o *)sub_1B64C4C(FriendshipMaster_TypeInfo);
  FriendshipMaster___ctor(v756, 0LL);
  if ( v756 )
  {
    v517 = sub_1B64B3C(v756, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1544;
  v515->m_Items[79] = (DataMasterBase_o *)v756;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[79], (int32_t)v756, v757, v758);
  v759 = (GachaTicketMaster_o *)sub_1B64C4C(GachaTicketMaster_TypeInfo);
  GachaTicketMaster___ctor(v759, 0LL);
  if ( v759 )
  {
    v517 = sub_1B64B3C(v759, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1544;
  v515->m_Items[80] = (DataMasterBase_o *)v759;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[80], (int32_t)v759, v760, v761);
  v762 = (UserFormationMaster_o *)sub_1B64C4C(UserFormationMaster_TypeInfo);
  UserFormationMaster___ctor(v762, 0LL);
  if ( v762 )
  {
    v517 = sub_1B64B3C(v762, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1544;
  v515->m_Items[81] = (DataMasterBase_o *)v762;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[81], (int32_t)v762, v763, v764);
  v765 = (FunctionMaster_o *)sub_1B64C4C(FunctionMaster_TypeInfo);
  FunctionMaster___ctor(v765, 0LL);
  if ( v765 )
  {
    v517 = sub_1B64B3C(v765, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1544;
  v515->m_Items[82] = (DataMasterBase_o *)v765;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[82], (int32_t)v765, v766, v767);
  v768 = (BuffMaster_o *)sub_1B64C4C(BuffMaster_TypeInfo);
  BuffMaster___ctor(v768, 0LL);
  if ( v768 )
  {
    v517 = sub_1B64B3C(v768, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1544;
  v515->m_Items[83] = (DataMasterBase_o *)v768;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[83], (int32_t)v768, v769, v770);
  v771 = (GachaReleaseMaster_o *)sub_1B64C4C(GachaReleaseMaster_TypeInfo);
  GachaReleaseMaster___ctor(v771, 0LL);
  if ( v771 )
  {
    v517 = sub_1B64B3C(v771, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1544;
  v515->m_Items[84] = (DataMasterBase_o *)v771;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[84], (int32_t)v771, v772, v773);
  v774 = (CombineQpMaster_o *)sub_1B64C4C(CombineQpMaster_TypeInfo);
  CombineQpMaster___ctor(v774, 0LL);
  if ( v774 )
  {
    v517 = sub_1B64B3C(v774, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1544;
  v515->m_Items[85] = (DataMasterBase_o *)v774;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[85], (int32_t)v774, v775, v776);
  v777 = (CombineMaterialMaster_o *)sub_1B64C4C(CombineMaterialMaster_TypeInfo);
  CombineMaterialMaster___ctor(v777, 0LL);
  if ( v777 )
  {
    v517 = sub_1B64B3C(v777, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1544;
  v515->m_Items[86] = (DataMasterBase_o *)v777;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[86], (int32_t)v777, v778, v779);
  v780 = (EventCombineMaster_o *)sub_1B64C4C(EventCombineMaster_TypeInfo);
  EventCombineMaster___ctor(v780, 0LL);
  if ( v780 )
  {
    v517 = sub_1B64B3C(v780, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1544;
  v515->m_Items[87] = (DataMasterBase_o *)v780;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[87], (int32_t)v780, v781, v782);
  v783 = (ServantExpMaster_o *)sub_1B64C4C(ServantExpMaster_TypeInfo);
  ServantExpMaster___ctor(v783, 0LL);
  if ( v783 )
  {
    v517 = sub_1B64B3C(v783, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1544;
  v515->m_Items[88] = (DataMasterBase_o *)v783;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[88], (int32_t)v783, v784, v785);
  v786 = (CombineSkillMaster_o *)sub_1B64C4C(CombineSkillMaster_TypeInfo);
  CombineSkillMaster___ctor(v786, 0LL);
  if ( v786 )
  {
    v517 = sub_1B64B3C(v786, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1544;
  v515->m_Items[89] = (DataMasterBase_o *)v786;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[89], (int32_t)v786, v787, v788);
  v789 = (CombineTdMaster_o *)sub_1B64C4C(CombineTdMaster_TypeInfo);
  CombineTdMaster___ctor(v789, 0LL);
  if ( v789 )
  {
    v517 = sub_1B64B3C(v789, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1544;
  v515->m_Items[90] = (DataMasterBase_o *)v789;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[90], (int32_t)v789, v790, v791);
  v792 = (EventQuestMaster_o *)sub_1B64C4C(EventQuestMaster_TypeInfo);
  EventQuestMaster___ctor(v792, 0LL);
  if ( v792 )
  {
    v517 = sub_1B64B3C(v792, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1544;
  v515->m_Items[91] = (DataMasterBase_o *)v792;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[91], (int32_t)v792, v793, v794);
  v795 = (EventCampaignMaster_o *)sub_1B64C4C(EventCampaignMaster_TypeInfo);
  EventCampaignMaster___ctor(v795, 0LL);
  if ( v795 )
  {
    v517 = sub_1B64B3C(v795, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1544;
  v515->m_Items[92] = (DataMasterBase_o *)v795;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[92], (int32_t)v795, v796, v797);
  v798 = (IllustratorMaster_o *)sub_1B64C4C(IllustratorMaster_TypeInfo);
  IllustratorMaster___ctor(v798, 0LL);
  if ( v798 )
  {
    v517 = sub_1B64B3C(v798, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1544;
  v515->m_Items[93] = (DataMasterBase_o *)v798;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[93], (int32_t)v798, v799, v800);
  v801 = (CvMaster_o *)sub_1B64C4C(CvMaster_TypeInfo);
  CvMaster___ctor(v801, 0LL);
  if ( v801 )
  {
    v517 = sub_1B64B3C(v801, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1544;
  v515->m_Items[94] = (DataMasterBase_o *)v801;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[94], (int32_t)v801, v802, v803);
  v804 = (TreasureDvcLvMaster_o *)sub_1B64C4C(TreasureDvcLvMaster_TypeInfo);
  TreasureDvcLvMaster___ctor(v804, 0LL);
  if ( v804 )
  {
    v517 = sub_1B64B3C(v804, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1544;
  v515->m_Items[95] = (DataMasterBase_o *)v804;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[95], (int32_t)v804, v805, v806);
  v807 = (TreasureDvcDetailMaster_o *)sub_1B64C4C(TreasureDvcDetailMaster_TypeInfo);
  TreasureDvcDetailMaster___ctor(v807, 0LL);
  if ( v807 )
  {
    v517 = sub_1B64B3C(v807, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1544;
  v515->m_Items[96] = (DataMasterBase_o *)v807;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[96], (int32_t)v807, v808, v809);
  v810 = (UserFollowerMaster_o *)sub_1B64C4C(UserFollowerMaster_TypeInfo);
  UserFollowerMaster___ctor(v810, 0LL);
  if ( v810 )
  {
    v517 = sub_1B64B3C(v810, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1544;
  v515->m_Items[97] = (DataMasterBase_o *)v810;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[97], (int32_t)v810, v811, v812);
  v813 = (NpcFollowerMaster_o *)sub_1B64C4C(NpcFollowerMaster_TypeInfo);
  NpcFollowerMaster___ctor(v813, 0LL);
  if ( v813 )
  {
    v517 = sub_1B64B3C(v813, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1544;
  v515->m_Items[98] = (DataMasterBase_o *)v813;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[98], (int32_t)v813, v814, v815);
  v816 = (NpcServantFollowerMaster_o *)sub_1B64C4C(NpcServantFollowerMaster_TypeInfo);
  NpcServantFollowerMaster___ctor(v816, 0LL);
  if ( v816 )
  {
    v517 = sub_1B64B3C(v816, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1544;
  v515->m_Items[99] = (DataMasterBase_o *)v816;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[99], (int32_t)v816, v817, v818);
  v819 = (UserEventMaster_o *)sub_1B64C4C(UserEventMaster_TypeInfo);
  UserEventMaster___ctor(v819, 0LL);
  if ( v819 )
  {
    v517 = sub_1B64B3C(v819, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1544;
  v515->m_Items[100] = (DataMasterBase_o *)v819;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[100], (int32_t)v819, v820, v821);
  v822 = (UserShopMaster_o *)sub_1B64C4C(UserShopMaster_TypeInfo);
  UserShopMaster___ctor(v822, 0LL);
  if ( v822 )
  {
    v517 = sub_1B64B3C(v822, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1544;
  v515->m_Items[101] = (DataMasterBase_o *)v822;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[101], (int32_t)v822, v823, v824);
  v825 = (UserContinueMaster_o *)sub_1B64C4C(UserContinueMaster_TypeInfo);
  UserContinueMaster___ctor(v825, 0LL);
  if ( v825 )
  {
    v517 = sub_1B64B3C(v825, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1544;
  v515->m_Items[102] = (DataMasterBase_o *)v825;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[102], (int32_t)v825, v826, v827);
  v828 = (ConstantMaster_o *)sub_1B64C4C(ConstantMaster_TypeInfo);
  ConstantMaster___ctor(v828, 0LL);
  if ( v828 )
  {
    v517 = sub_1B64B3C(v828, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1544;
  v515->m_Items[103] = (DataMasterBase_o *)v828;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[103], (int32_t)v828, v829, v830);
  v831 = (ConstantLongMaster_o *)sub_1B64C4C(ConstantLongMaster_TypeInfo);
  ConstantLongMaster___ctor(v831, 0LL);
  if ( v831 )
  {
    v517 = sub_1B64B3C(v831, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1544;
  v515->m_Items[104] = (DataMasterBase_o *)v831;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[104], (int32_t)v831, v832, v833);
  v834 = (ConstantStrMaster_o *)sub_1B64C4C(ConstantStrMaster_TypeInfo);
  ConstantStrMaster___ctor(v834, 0LL);
  if ( v834 )
  {
    v517 = sub_1B64B3C(v834, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1544;
  v515->m_Items[105] = (DataMasterBase_o *)v834;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[105], (int32_t)v834, v835, v836);
  v837 = (AiMaster_o *)sub_1B64C4C(AiMaster_TypeInfo);
  AiMaster___ctor(v837, 0LL);
  if ( v837 )
  {
    v517 = sub_1B64B3C(v837, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1544;
  v515->m_Items[106] = (DataMasterBase_o *)v837;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[106], (int32_t)v837, v838, v839);
  v840 = (AiActMaster_o *)sub_1B64C4C(AiActMaster_TypeInfo);
  AiActMaster___ctor(v840, 0LL);
  if ( v840 )
  {
    v517 = sub_1B64B3C(v840, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1544;
  v515->m_Items[107] = (DataMasterBase_o *)v840;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[107], (int32_t)v840, v841, v842);
  v843 = (AttriRelationMaster_o *)sub_1B64C4C(AttriRelationMaster_TypeInfo);
  AttriRelationMaster___ctor(v843, 0LL);
  if ( v843 )
  {
    v517 = sub_1B64B3C(v843, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1544;
  v515->m_Items[108] = (DataMasterBase_o *)v843;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[108], (int32_t)v843, v844, v845);
  v846 = (ClassRelationMaster_o *)sub_1B64C4C(ClassRelationMaster_TypeInfo);
  ClassRelationMaster___ctor(v846, 0LL);
  if ( v846 )
  {
    v517 = sub_1B64B3C(v846, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1544;
  v515->m_Items[109] = (DataMasterBase_o *)v846;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[109], (int32_t)v846, v847, v848);
  v849 = (EffectMaster_o *)sub_1B64C4C(EffectMaster_TypeInfo);
  EffectMaster___ctor(v849, 0LL);
  if ( v849 )
  {
    v517 = sub_1B64B3C(v849, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1544;
  v515->m_Items[110] = (DataMasterBase_o *)v849;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[110], (int32_t)v849, v850, v851);
  v852 = (EquipImageMaster_o *)sub_1B64C4C(EquipImageMaster_TypeInfo);
  EquipImageMaster___ctor(v852, 0LL);
  if ( v852 )
  {
    v517 = sub_1B64B3C(v852, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1544;
  v515->m_Items[111] = (DataMasterBase_o *)v852;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[111], (int32_t)v852, v853, v854);
  v855 = (ServantVoiceMaster_o *)sub_1B64C4C(ServantVoiceMaster_TypeInfo);
  ServantVoiceMaster___ctor(v855, 0LL);
  if ( v855 )
  {
    v517 = sub_1B64B3C(v855, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1544;
  v515->m_Items[112] = (DataMasterBase_o *)v855;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[112], (int32_t)v855, v856, v857);
  v858 = (CombineLimitMaster_o *)sub_1B64C4C(CombineLimitMaster_TypeInfo);
  CombineLimitMaster___ctor(v858, 0LL);
  if ( v858 )
  {
    v517 = sub_1B64B3C(v858, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1544;
  v515->m_Items[113] = (DataMasterBase_o *)v858;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[113], (int32_t)v858, v859, v860);
  v861 = (CardMaster_o *)sub_1B64C4C(CardMaster_TypeInfo);
  CardMaster___ctor(v861, 0LL);
  if ( v861 )
  {
    v517 = sub_1B64B3C(v861, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1544;
  v515->m_Items[114] = (DataMasterBase_o *)v861;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[114], (int32_t)v861, v862, v863);
  v864 = (CombineQpSvtEquipMaster_o *)sub_1B64C4C(CombineQpSvtEquipMaster_TypeInfo);
  CombineQpSvtEquipMaster___ctor(v864, 0LL);
  if ( v864 )
  {
    v517 = sub_1B64B3C(v864, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1544;
  v515->m_Items[115] = (DataMasterBase_o *)v864;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[115], (int32_t)v864, v865, v866);
  v867 = (ServantRarityMaster_o *)sub_1B64C4C(ServantRarityMaster_TypeInfo);
  ServantRarityMaster___ctor(v867, 0LL);
  if ( v867 )
  {
    v517 = sub_1B64B3C(v867, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1544;
  v515->m_Items[116] = (DataMasterBase_o *)v867;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[116], (int32_t)v867, v868, v869);
  v870 = (SetItemMaster_o *)sub_1B64C4C(SetItemMaster_TypeInfo);
  SetItemMaster___ctor(v870, 0LL);
  if ( v870 )
  {
    v517 = sub_1B64B3C(v870, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1544;
  v515->m_Items[117] = (DataMasterBase_o *)v870;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[117], (int32_t)v870, v871, v872);
  v873 = (RecoverMaster_o *)sub_1B64C4C(RecoverMaster_TypeInfo);
  RecoverMaster___ctor(v873, 0LL);
  if ( v873 )
  {
    v517 = sub_1B64B3C(v873, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1544;
  v515->m_Items[118] = (DataMasterBase_o *)v873;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[118], (int32_t)v873, v874, v875);
  v876 = (BannerMaster_o *)sub_1B64C4C(BannerMaster_TypeInfo);
  BannerMaster___ctor(v876, 0LL);
  if ( v876 )
  {
    v517 = sub_1B64B3C(v876, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1544;
  v515->m_Items[119] = (DataMasterBase_o *)v876;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[119], (int32_t)v876, v877, v878);
  v879 = (ShopReleaseMaster_o *)sub_1B64C4C(ShopReleaseMaster_TypeInfo);
  ShopReleaseMaster___ctor(v879, 0LL);
  if ( v879 )
  {
    v517 = sub_1B64B3C(v879, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1544;
  v515->m_Items[120] = (DataMasterBase_o *)v879;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[120], (int32_t)v879, v880, v881);
  v882 = (EventRewardMaster_o *)sub_1B64C4C(EventRewardMaster_TypeInfo);
  EventRewardMaster___ctor(v882, 0LL);
  if ( v882 )
  {
    v517 = sub_1B64B3C(v882, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1544;
  v515->m_Items[121] = (DataMasterBase_o *)v882;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[121], (int32_t)v882, v883, v884);
  v885 = (EventDetailMaster_o *)sub_1B64C4C(EventDetailMaster_TypeInfo);
  EventDetailMaster___ctor(v885, 0LL);
  if ( v885 )
  {
    v517 = sub_1B64B3C(v885, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1544;
  v515->m_Items[122] = (DataMasterBase_o *)v885;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[122], (int32_t)v885, v886, v887);
  v888 = (EventServantMaster_o *)sub_1B64C4C(EventServantMaster_TypeInfo);
  EventServantMaster___ctor(v888, 0LL);
  if ( v888 )
  {
    v517 = sub_1B64B3C(v888, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1544;
  v515->m_Items[123] = (DataMasterBase_o *)v888;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[123], (int32_t)v888, v889, v890);
  v891 = (BoxGachaMaster_o *)sub_1B64C4C(BoxGachaMaster_TypeInfo);
  BoxGachaMaster___ctor(v891, 0LL);
  if ( v891 )
  {
    v517 = sub_1B64B3C(v891, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1544;
  v515->m_Items[124] = (DataMasterBase_o *)v891;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[124], (int32_t)v891, v892, v893);
  v894 = (BoxGachaBaseMaster_o *)sub_1B64C4C(BoxGachaBaseMaster_TypeInfo);
  BoxGachaBaseMaster___ctor(v894, 0LL);
  if ( v894 )
  {
    v517 = sub_1B64B3C(v894, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1544;
  v515->m_Items[125] = (DataMasterBase_o *)v894;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[125], (int32_t)v894, v895, v896);
  v897 = (BoxGachaTalkMaster_o *)sub_1B64C4C(BoxGachaTalkMaster_TypeInfo);
  BoxGachaTalkMaster___ctor(v897, 0LL);
  if ( v897 )
  {
    v517 = sub_1B64B3C(v897, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1544;
  v515->m_Items[126] = (DataMasterBase_o *)v897;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[126], (int32_t)v897, v898, v899);
  v900 = (UserBoxGachaMaster_o *)sub_1B64C4C(UserBoxGachaMaster_TypeInfo);
  UserBoxGachaMaster___ctor(v900, 0LL);
  if ( v900 )
  {
    v517 = sub_1B64B3C(v900, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1544;
  v515->m_Items[127] = (DataMasterBase_o *)v900;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[127], (int32_t)v900, v901, v902);
  v903 = (BoxGachaHistoryMaster_o *)sub_1B64C4C(BoxGachaHistoryMaster_TypeInfo);
  BoxGachaHistoryMaster___ctor(v903, 0LL);
  if ( v903 )
  {
    v517 = sub_1B64B3C(v903, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1544;
  v515->m_Items[128] = (DataMasterBase_o *)v903;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[128], (int32_t)v903, v904, v905);
  v906 = (BattleBgMaster_o *)sub_1B64C4C(BattleBgMaster_TypeInfo);
  BattleBgMaster___ctor(v906, 0LL);
  if ( v906 )
  {
    v517 = sub_1B64B3C(v906, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1544;
  v515->m_Items[129] = (DataMasterBase_o *)v906;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[129], (int32_t)v906, v907, v908);
  v909 = (TipsBattleMaster_o *)sub_1B64C4C(TipsBattleMaster_TypeInfo);
  TipsBattleMaster___ctor(v909, 0LL);
  if ( v909 )
  {
    v517 = sub_1B64B3C(v909, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1544;
  v515->m_Items[130] = (DataMasterBase_o *)v909;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[130], (int32_t)v909, v910, v911);
  v912 = (UserLoginMaster_o *)sub_1B64C4C(UserLoginMaster_TypeInfo);
  UserLoginMaster___ctor(v912, 0LL);
  if ( v912 )
  {
    v517 = sub_1B64B3C(v912, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1544;
  v515->m_Items[131] = (DataMasterBase_o *)v912;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[131], (int32_t)v912, v913, v914);
  v915 = (VoiceMaster_o *)sub_1B64C4C(VoiceMaster_TypeInfo);
  VoiceMaster___ctor(v915, 0LL);
  if ( v915 )
  {
    v517 = sub_1B64B3C(v915, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1544;
  v515->m_Items[132] = (DataMasterBase_o *)v915;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[132], (int32_t)v915, v916, v917);
  v918 = (EventRewardExtraMaster_o *)sub_1B64C4C(EventRewardExtraMaster_TypeInfo);
  EventRewardExtraMaster___ctor(v918, 0LL);
  if ( v918 )
  {
    v517 = sub_1B64B3C(v918, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1544;
  v515->m_Items[133] = (DataMasterBase_o *)v918;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[133], (int32_t)v918, v919, v920);
  v921 = (EventMissionMaster_o *)sub_1B64C4C(EventMissionMaster_TypeInfo);
  EventMissionMaster___ctor(v921, 0LL);
  if ( v921 )
  {
    v517 = sub_1B64B3C(v921, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1544;
  v515->m_Items[134] = (DataMasterBase_o *)v921;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[134], (int32_t)v921, v922, v923);
  v924 = (EventMissionActionMaster_o *)sub_1B64C4C(EventMissionActionMaster_TypeInfo);
  EventMissionActionMaster___ctor(v924, 0LL);
  if ( v924 )
  {
    v517 = sub_1B64B3C(v924, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1544;
  v515->m_Items[135] = (DataMasterBase_o *)v924;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[135], (int32_t)v924, v925, v926);
  v927 = (EventMissionActionAddMaster_o *)sub_1B64C4C(EventMissionActionAddMaster_TypeInfo);
  EventMissionActionAddMaster___ctor(v927, 0LL);
  if ( v927 )
  {
    v517 = sub_1B64B3C(v927, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1544;
  v515->m_Items[136] = (DataMasterBase_o *)v927;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[136], (int32_t)v927, v928, v929);
  v930 = (EventMissionConditionMaster_o *)sub_1B64C4C(EventMissionConditionMaster_TypeInfo);
  EventMissionConditionMaster___ctor(v930, 0LL);
  if ( v930 )
  {
    v517 = sub_1B64B3C(v930, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1544;
  v515->m_Items[137] = (DataMasterBase_o *)v930;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[137], (int32_t)v930, v931, v932);
  v933 = (EventMissionCondDetailMaster_o *)sub_1B64C4C(EventMissionCondDetailMaster_TypeInfo);
  EventMissionCondDetailMaster___ctor(v933, 0LL);
  if ( v933 )
  {
    v517 = sub_1B64B3C(v933, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1544;
  v515->m_Items[138] = (DataMasterBase_o *)v933;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[138], (int32_t)v933, v934, v935);
  v936 = (EventMissionAddMaster_o *)sub_1B64C4C(EventMissionAddMaster_TypeInfo);
  EventMissionAddMaster___ctor(v936, 0LL);
  if ( v936 )
  {
    v517 = sub_1B64B3C(v936, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1544;
  v515->m_Items[139] = (DataMasterBase_o *)v936;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[139], (int32_t)v936, v937, v938);
  v939 = (CompleteMissionMaster_o *)sub_1B64C4C(CompleteMissionMaster_TypeInfo);
  CompleteMissionMaster___ctor(v939, 0LL);
  if ( v939 )
  {
    v517 = sub_1B64B3C(v939, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1544;
  v515->m_Items[140] = (DataMasterBase_o *)v939;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[140], (int32_t)v939, v940, v941);
  v942 = (EventRewardSetMaster_o *)sub_1B64C4C(EventRewardSetMaster_TypeInfo);
  EventRewardSetMaster___ctor(v942, 0LL);
  if ( v942 )
  {
    v517 = sub_1B64B3C(v942, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1544;
  v515->m_Items[141] = (DataMasterBase_o *)v942;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[141], (int32_t)v942, v943, v944);
  v945 = (UserEventMissionMaster_o *)sub_1B64C4C(UserEventMissionMaster_TypeInfo);
  UserEventMissionMaster___ctor(v945, 0LL);
  if ( v945 )
  {
    v517 = sub_1B64B3C(v945, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1544;
  v515->m_Items[142] = (DataMasterBase_o *)v945;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[142], (int32_t)v945, v946, v947);
  v948 = (UserEventMissionCondDetailMaster_o *)sub_1B64C4C(UserEventMissionCondDetailMaster_TypeInfo);
  UserEventMissionCondDetailMaster___ctor(v948, 0LL);
  if ( v948 )
  {
    v517 = sub_1B64B3C(v948, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1544;
  v515->m_Items[143] = (DataMasterBase_o *)v948;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[143], (int32_t)v948, v949, v950);
  v951 = (BoxGachaBaseDetailMaster_o *)sub_1B64C4C(BoxGachaBaseDetailMaster_TypeInfo);
  BoxGachaBaseDetailMaster___ctor(v951, 0LL);
  if ( v951 )
  {
    v517 = sub_1B64B3C(v951, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1544;
  v515->m_Items[144] = (DataMasterBase_o *)v951;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[144], (int32_t)v951, v952, v953);
  v954 = (UserServantLeaderMaster_o *)sub_1B64C4C(UserServantLeaderMaster_TypeInfo);
  UserServantLeaderMaster___ctor(v954, 0LL);
  if ( v954 )
  {
    v517 = sub_1B64B3C(v954, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1544;
  v515->m_Items[145] = (DataMasterBase_o *)v954;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[145], (int32_t)v954, v955, v956);
  v957 = (ClosedMessageMaster_o *)sub_1B64C4C(ClosedMessageMaster_TypeInfo);
  ClosedMessageMaster___ctor(v957, 0LL);
  if ( v957 )
  {
    v517 = sub_1B64B3C(v957, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1544;
  v515->m_Items[146] = (DataMasterBase_o *)v957;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[146], (int32_t)v957, v958, v959);
  v960 = (FunctionGroupMaster_o *)sub_1B64C4C(FunctionGroupMaster_TypeInfo);
  FunctionGroupMaster___ctor(v960, 0LL);
  if ( v960 )
  {
    v517 = sub_1B64B3C(v960, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1544;
  v515->m_Items[147] = (DataMasterBase_o *)v960;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[147], (int32_t)v960, v961, v962);
  v963 = (EventRaidMaster_o *)sub_1B64C4C(EventRaidMaster_TypeInfo);
  EventRaidMaster___ctor(v963, 0LL);
  if ( v963 )
  {
    v517 = sub_1B64B3C(v963, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1544;
  v515->m_Items[148] = (DataMasterBase_o *)v963;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[148], (int32_t)v963, v964, v965);
  v966 = (TotalEventRaidMaster_o *)sub_1B64C4C(TotalEventRaidMaster_TypeInfo);
  TotalEventRaidMaster___ctor(v966, 0LL);
  if ( v966 )
  {
    v517 = sub_1B64B3C(v966, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1544;
  v515->m_Items[149] = (DataMasterBase_o *)v966;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[149], (int32_t)v966, v967, v968);
  v969 = (UserEventRaidMaster_o *)sub_1B64C4C(UserEventRaidMaster_TypeInfo);
  UserEventRaidMaster___ctor(v969, 0LL);
  if ( v969 )
  {
    v517 = sub_1B64B3C(v969, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1544;
  v515->m_Items[150] = (DataMasterBase_o *)v969;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[150], (int32_t)v969, v970, v971);
  v972 = (EventPointMaster_o *)sub_1B64C4C(EventPointMaster_TypeInfo);
  EventPointMaster___ctor(v972, 0LL);
  if ( v972 )
  {
    v517 = sub_1B64B3C(v972, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1544;
  v515->m_Items[151] = (DataMasterBase_o *)v972;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[151], (int32_t)v972, v973, v974);
  v975 = (EventPointGroupMaster_o *)sub_1B64C4C(EventPointGroupMaster_TypeInfo);
  EventPointGroupMaster___ctor(v975, 0LL);
  if ( v975 )
  {
    v517 = sub_1B64B3C(v975, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1544;
  v515->m_Items[152] = (DataMasterBase_o *)v975;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[152], (int32_t)v975, v976, v977);
  v978 = (TotalEventPointMaster_o *)sub_1B64C4C(TotalEventPointMaster_TypeInfo);
  TotalEventPointMaster___ctor(v978, 0LL);
  if ( v978 )
  {
    v517 = sub_1B64B3C(v978, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1544;
  v515->m_Items[153] = (DataMasterBase_o *)v978;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[153], (int32_t)v978, v979, v980);
  v981 = (UserEventPointMaster_o *)sub_1B64C4C(UserEventPointMaster_TypeInfo);
  UserEventPointMaster___ctor(v981, 0LL);
  if ( v981 )
  {
    v517 = sub_1B64B3C(v981, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1544;
  v515->m_Items[154] = (DataMasterBase_o *)v981;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[154], (int32_t)v981, v982, v983);
  v984 = (EventPointUpperMaster_o *)sub_1B64C4C(EventPointUpperMaster_TypeInfo);
  EventPointUpperMaster___ctor(v984, 0LL);
  if ( v984 )
  {
    v517 = sub_1B64B3C(v984, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1544;
  v515->m_Items[155] = (DataMasterBase_o *)v984;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[155], (int32_t)v984, v985, v986);
  v987 = (EventPointUpperReleaseMaster_o *)sub_1B64C4C(EventPointUpperReleaseMaster_TypeInfo);
  EventPointUpperReleaseMaster___ctor(v987, 0LL);
  if ( v987 )
  {
    v517 = sub_1B64B3C(v987, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1544;
  v515->m_Items[156] = (DataMasterBase_o *)v987;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[156], (int32_t)v987, v988, v989);
  v990 = (EventRaceMaster_o *)sub_1B64C4C(EventRaceMaster_TypeInfo);
  EventRaceMaster___ctor(v990, 0LL);
  if ( v990 )
  {
    v517 = sub_1B64B3C(v990, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1544;
  v515->m_Items[157] = (DataMasterBase_o *)v990;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[157], (int32_t)v990, v991, v992);
  v993 = (EventRaceResultMaster_o *)sub_1B64C4C(EventRaceResultMaster_TypeInfo);
  EventRaceResultMaster___ctor(v993, 0LL);
  if ( v993 )
  {
    v517 = sub_1B64B3C(v993, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1544;
  v515->m_Items[158] = (DataMasterBase_o *)v993;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[158], (int32_t)v993, v994, v995);
  v996 = (QuestRacePointMaster_o *)sub_1B64C4C(QuestRacePointMaster_TypeInfo);
  QuestRacePointMaster___ctor(v996, 0LL);
  if ( v996 )
  {
    v517 = sub_1B64B3C(v996, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1544;
  v515->m_Items[159] = (DataMasterBase_o *)v996;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[159], (int32_t)v996, v997, v998);
  v999 = (UserEventRaceMaster_o *)sub_1B64C4C(UserEventRaceMaster_TypeInfo);
  UserEventRaceMaster___ctor(v999, 0LL);
  if ( v999 )
  {
    v517 = sub_1B64B3C(v999, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1544;
  v515->m_Items[160] = (DataMasterBase_o *)v999;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[160], (int32_t)v999, v1000, v1001);
  v1002 = (EventScriptMaster_o *)sub_1B64C4C(EventScriptMaster_TypeInfo);
  EventScriptMaster___ctor(v1002, 0LL);
  if ( v1002 )
  {
    v517 = sub_1B64B3C(v1002, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1544;
  v515->m_Items[161] = (DataMasterBase_o *)v1002;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[161], (int32_t)v1002, v1003, v1004);
  v1005 = (EventScriptReleaseMaster_o *)sub_1B64C4C(EventScriptReleaseMaster_TypeInfo);
  EventScriptReleaseMaster___ctor(v1005, 0LL);
  if ( v1005 )
  {
    v517 = sub_1B64B3C(v1005, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1544;
  v515->m_Items[162] = (DataMasterBase_o *)v1005;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[162], (int32_t)v1005, v1006, v1007);
  v1008 = (UserPresentHistoryMaster_o *)sub_1B64C4C(UserPresentHistoryMaster_TypeInfo);
  UserPresentHistoryMaster___ctor(v1008, 0LL);
  if ( v1008 )
  {
    v517 = sub_1B64B3C(v1008, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1544;
  v515->m_Items[163] = (DataMasterBase_o *)v1008;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[163], (int32_t)v1008, v1009, v1010);
  v1011 = (MstMissionMaster_o *)sub_1B64C4C(MstMissionMaster_TypeInfo);
  MstMissionMaster___ctor(v1011, 0LL);
  if ( v1011 )
  {
    v517 = sub_1B64B3C(v1011, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1544;
  v515->m_Items[164] = (DataMasterBase_o *)v1011;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[164], (int32_t)v1011, v1012, v1013);
  v1014 = (ServantExceedMaster_o *)sub_1B64C4C(ServantExceedMaster_TypeInfo);
  ServantExceedMaster___ctor(v1014, 0LL);
  if ( v1014 )
  {
    v517 = sub_1B64B3C(v1014, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1544;
  v515->m_Items[165] = (DataMasterBase_o *)v1014;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[165], (int32_t)v1014, v1015, v1016);
  v1017 = (PartialMaintenanceMaster_o *)sub_1B64C4C(PartialMaintenanceMaster_TypeInfo);
  PartialMaintenanceMaster___ctor(v1017, 0LL);
  if ( v1017 )
  {
    v517 = sub_1B64B3C(v1017, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1544;
  v515->m_Items[166] = (DataMasterBase_o *)v1017;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[166], (int32_t)v1017, v1018, v1019);
  v1020 = (GuideMaster_o *)sub_1B64C4C(GuideMaster_TypeInfo);
  GuideMaster___ctor(v1020, 0LL);
  if ( v1020 )
  {
    v517 = sub_1B64B3C(v1020, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1544;
  v515->m_Items[167] = (DataMasterBase_o *)v1020;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[167], (int32_t)v1020, v1021, v1022);
  v1023 = (MstMissionDisplayInfoMaster_o *)sub_1B64C4C(MstMissionDisplayInfoMaster_TypeInfo);
  MstMissionDisplayInfoMaster___ctor(v1023, 0LL);
  if ( v1023 )
  {
    v517 = sub_1B64B3C(v1023, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1544;
  v515->m_Items[168] = (DataMasterBase_o *)v1023;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[168], (int32_t)v1023, v1024, v1025);
  v1026 = (GachaGroupMaster_o *)sub_1B64C4C(GachaGroupMaster_TypeInfo);
  GachaGroupMaster___ctor(v1026, 0LL);
  if ( v1026 )
  {
    v517 = sub_1B64B3C(v1026, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1544;
  v515->m_Items[169] = (DataMasterBase_o *)v1026;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[169], (int32_t)v1026, v1027, v1028);
  v1029 = (QuestResetMaster_o *)sub_1B64C4C(QuestResetMaster_TypeInfo);
  QuestResetMaster___ctor(v1029, 0LL);
  if ( v1029 )
  {
    v517 = sub_1B64B3C(v1029, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1544;
  v515->m_Items[170] = (DataMasterBase_o *)v1029;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[170], (int32_t)v1029, v1030, v1031);
  v1032 = (WarAddMaster_o *)sub_1B64C4C(WarAddMaster_TypeInfo);
  WarAddMaster___ctor(v1032, 0LL);
  if ( v1032 )
  {
    v517 = sub_1B64B3C(v1032, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1544;
  v515->m_Items[171] = (DataMasterBase_o *)v1032;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[171], (int32_t)v1032, v1033, v1034);
  v1035 = (EventItemDisplayMaster_o *)sub_1B64C4C(EventItemDisplayMaster_TypeInfo);
  EventItemDisplayMaster___ctor(v1035, 0LL);
  if ( v1035 )
  {
    v517 = sub_1B64B3C(v1035, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1544;
  v515->m_Items[172] = (DataMasterBase_o *)v1035;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[172], (int32_t)v1035, v1036, v1037);
  v1038 = (EventItemDisplayGroupMaster_o *)sub_1B64C4C(EventItemDisplayGroupMaster_TypeInfo);
  EventItemDisplayGroupMaster___ctor(v1038, 0LL);
  if ( v1038 )
  {
    v517 = sub_1B64B3C(v1038, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1544;
  v515->m_Items[173] = (DataMasterBase_o *)v1038;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[173], (int32_t)v1038, v1039, v1040);
  v1041 = (EventItemDisplayReleaseMaster_o *)sub_1B64C4C(EventItemDisplayReleaseMaster_TypeInfo);
  EventItemDisplayReleaseMaster___ctor(v1041, 0LL);
  if ( v1041 )
  {
    v517 = sub_1B64B3C(v1041, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1544;
  v515->m_Items[174] = (DataMasterBase_o *)v1041;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[174], (int32_t)v1041, v1042, v1043);
  v1044 = (EventTutorialMaster_o *)sub_1B64C4C(EventTutorialMaster_TypeInfo);
  EventTutorialMaster___ctor(v1044, 0LL);
  if ( v1044 )
  {
    v517 = sub_1B64B3C(v1044, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1544;
  v515->m_Items[175] = (DataMasterBase_o *)v1044;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[175], (int32_t)v1044, v1045, v1046);
  v1047 = (EventTutorialCondMaster_o *)sub_1B64C4C(EventTutorialCondMaster_TypeInfo);
  EventTutorialCondMaster___ctor(v1047, 0LL);
  if ( v1047 )
  {
    v517 = sub_1B64B3C(v1047, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1544;
  v515->m_Items[176] = (DataMasterBase_o *)v1047;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[176], (int32_t)v1047, v1048, v1049);
  v1050 = (VoiceReleaseMaster_o *)sub_1B64C4C(VoiceReleaseMaster_TypeInfo);
  VoiceReleaseMaster___ctor(v1050, 0LL);
  if ( v1050 )
  {
    v517 = sub_1B64B3C(v1050, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1544;
  v515->m_Items[177] = (DataMasterBase_o *)v1050;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[177], (int32_t)v1050, v1051, v1052);
  v1053 = (EventSuperBossMaster_o *)sub_1B64C4C(EventSuperBossMaster_TypeInfo);
  EventSuperBossMaster___ctor(v1053, 0LL);
  if ( v1053 )
  {
    v517 = sub_1B64B3C(v1053, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1544;
  v515->m_Items[178] = (DataMasterBase_o *)v1053;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[178], (int32_t)v1053, v1054, v1055);
  v1056 = (UserSuperBossMaster_o *)sub_1B64C4C(UserSuperBossMaster_TypeInfo);
  UserSuperBossMaster___ctor(v1056, 0LL);
  if ( v1056 )
  {
    v517 = sub_1B64B3C(v1056, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1544;
  v515->m_Items[179] = (DataMasterBase_o *)v1056;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[179], (int32_t)v1056, v1057, v1058);
  v1059 = (QuestScriptMaster_o *)sub_1B64C4C(QuestScriptMaster_TypeInfo);
  QuestScriptMaster___ctor(v1059, 0LL);
  if ( v1059 )
  {
    v517 = sub_1B64B3C(v1059, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1544;
  v515->m_Items[180] = (DataMasterBase_o *)v1059;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[180], (int32_t)v1059, v1060, v1061);
  v1062 = (QuestScriptReleaseMaster_o *)sub_1B64C4C(QuestScriptReleaseMaster_TypeInfo);
  QuestScriptReleaseMaster___ctor(v1062, 0LL);
  if ( v1062 )
  {
    v517 = sub_1B64B3C(v1062, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1544;
  v515->m_Items[181] = (DataMasterBase_o *)v1062;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[181], (int32_t)v1062, v1063, v1064);
  v1065 = (MaterialFolderMaster_o *)sub_1B64C4C(MaterialFolderMaster_TypeInfo);
  MaterialFolderMaster___ctor(v1065, 0LL);
  if ( v1065 )
  {
    v517 = sub_1B64B3C(v1065, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1544;
  v515->m_Items[182] = (DataMasterBase_o *)v1065;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[182], (int32_t)v1065, v1066, v1067);
  v1068 = (RestrictionMaster_o *)sub_1B64C4C(RestrictionMaster_TypeInfo);
  RestrictionMaster___ctor(v1068, 0LL);
  if ( v1068 )
  {
    v517 = sub_1B64B3C(v1068, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1544;
  v515->m_Items[183] = (DataMasterBase_o *)v1068;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[183], (int32_t)v1068, v1069, v1070);
  v1071 = (QuestRestrictionMaster_o *)sub_1B64C4C(QuestRestrictionMaster_TypeInfo);
  QuestRestrictionMaster___ctor(v1071, 0LL);
  if ( v1071 )
  {
    v517 = sub_1B64B3C(v1071, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1544;
  v515->m_Items[184] = (DataMasterBase_o *)v1071;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[184], (int32_t)v1071, v1072, v1073);
  v1074 = (ServantVoiceRelationMaster_o *)sub_1B64C4C(ServantVoiceRelationMaster_TypeInfo);
  ServantVoiceRelationMaster___ctor(v1074, 0LL);
  if ( v1074 )
  {
    v517 = sub_1B64B3C(v1074, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1544;
  v515->m_Items[185] = (DataMasterBase_o *)v1074;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[185], (int32_t)v1074, v1075, v1076);
  v1077 = (ShopDetailMaster_o *)sub_1B64C4C(ShopDetailMaster_TypeInfo);
  ShopDetailMaster___ctor(v1077, 0LL);
  if ( v1077 )
  {
    v517 = sub_1B64B3C(v1077, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1544;
  v515->m_Items[186] = (DataMasterBase_o *)v1077;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[186], (int32_t)v1077, v1078, v1079);
  v1080 = (ServantScriptAddMaster_o *)sub_1B64C4C(ServantScriptAddMaster_TypeInfo);
  ServantScriptAddMaster___ctor(v1080, 0LL);
  if ( v1080 )
  {
    v517 = sub_1B64B3C(v1080, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1544;
  v515->m_Items[187] = (DataMasterBase_o *)v1080;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[187], (int32_t)v1080, v1081, v1082);
  v1083 = (CombineMaster_o *)sub_1B64C4C(CombineMaster_TypeInfo);
  CombineMaster___ctor(v1083, 0LL);
  if ( v1083 )
  {
    v517 = sub_1B64B3C(v1083, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1544;
  v515->m_Items[188] = (DataMasterBase_o *)v1083;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[188], (int32_t)v1083, v1084, v1085);
  v1086 = (AiFieldMaster_o *)sub_1B64C4C(AiFieldMaster_TypeInfo);
  AiFieldMaster___ctor(v1086, 0LL);
  if ( v1086 )
  {
    v517 = sub_1B64B3C(v1086, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1544;
  v515->m_Items[189] = (DataMasterBase_o *)v1086;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[189], (int32_t)v1086, v1087, v1088);
  v1089 = (ServantCommentAddMaster_o *)sub_1B64C4C(ServantCommentAddMaster_TypeInfo);
  ServantCommentAddMaster___ctor(v1089, 0LL);
  if ( v1089 )
  {
    v517 = sub_1B64B3C(v1089, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1544;
  v515->m_Items[190] = (DataMasterBase_o *)v1089;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[190], (int32_t)v1089, v1090, v1091);
  v1092 = (EventFilterMaster_o *)sub_1B64C4C(EventFilterMaster_TypeInfo);
  EventFilterMaster___ctor(v1092, 0LL);
  if ( v1092 )
  {
    v517 = sub_1B64B3C(v1092, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1544;
  v515->m_Items[191] = (DataMasterBase_o *)v1092;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[191], (int32_t)v1092, v1093, v1094);
  v1095 = (UserSupportDeckMaster_o *)sub_1B64C4C(UserSupportDeckMaster_TypeInfo);
  UserSupportDeckMaster___ctor(v1095, 0LL);
  if ( v1095 )
  {
    v517 = sub_1B64B3C(v1095, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1544;
  v515->m_Items[192] = (DataMasterBase_o *)v1095;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[192], (int32_t)v1095, v1096, v1097);
  v1098 = (EventRewardSceneMaster_o *)sub_1B64C4C(EventRewardSceneMaster_TypeInfo);
  EventRewardSceneMaster___ctor(v1098, 0LL);
  if ( v1098 )
  {
    v517 = sub_1B64B3C(v1098, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1544;
  v515->m_Items[193] = (DataMasterBase_o *)v1098;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[193], (int32_t)v1098, v1099, v1100);
  v1101 = (EventVoicePlayMaster_o *)sub_1B64C4C(EventVoicePlayMaster_TypeInfo);
  EventVoicePlayMaster___ctor(v1101, 0LL);
  if ( v1101 )
  {
    v517 = sub_1B64B3C(v1101, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1544;
  v515->m_Items[194] = (DataMasterBase_o *)v1101;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[194], (int32_t)v1101, v1102, v1103);
  v1104 = (GachaSubMaster_o *)sub_1B64C4C(GachaSubMaster_TypeInfo);
  GachaSubMaster___ctor(v1104, 0LL);
  if ( v1104 )
  {
    v517 = sub_1B64B3C(v1104, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1544;
  v515->m_Items[195] = (DataMasterBase_o *)v1104;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[195], (int32_t)v1104, v1105, v1106);
  v1107 = (GachaDetailMaster_o *)sub_1B64C4C(GachaDetailMaster_TypeInfo);
  GachaDetailMaster___ctor(v1107, 0LL);
  if ( v1107 )
  {
    v517 = sub_1B64B3C(v1107, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1544;
  v515->m_Items[196] = (DataMasterBase_o *)v1107;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[196], (int32_t)v1107, v1108, v1109);
  v1110 = (GachaBonusSelectMaster_o *)sub_1B64C4C(GachaBonusSelectMaster_TypeInfo);
  GachaBonusSelectMaster___ctor(v1110, 0LL);
  if ( v1110 )
  {
    v517 = sub_1B64B3C(v1110, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1544;
  v515->m_Items[197] = (DataMasterBase_o *)v1110;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[197], (int32_t)v1110, v1111, v1112);
  v1113 = (GachaBonusSelectLineupMaster_o *)sub_1B64C4C(GachaBonusSelectLineupMaster_TypeInfo);
  GachaBonusSelectLineupMaster___ctor(v1113, 0LL);
  if ( v1113 )
  {
    v517 = sub_1B64B3C(v1113, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1544;
  v515->m_Items[198] = (DataMasterBase_o *)v1113;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[198], (int32_t)v1113, v1114, v1115);
  v1116 = (ServantChangeMaster_o *)sub_1B64C4C(ServantChangeMaster_TypeInfo);
  ServantChangeMaster___ctor(v1116, 0LL);
  if ( v1116 )
  {
    v517 = sub_1B64B3C(v1116, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1544;
  v515->m_Items[199] = (DataMasterBase_o *)v1116;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[199], (int32_t)v1116, v1117, v1118);
  v1119 = (VoiceCondMaster_o *)sub_1B64C4C(VoiceCondMaster_TypeInfo);
  VoiceCondMaster___ctor(v1119, 0LL);
  if ( v1119 )
  {
    v517 = sub_1B64B3C(v1119, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1544;
  v515->m_Items[200] = (DataMasterBase_o *)v1119;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[200], (int32_t)v1119, v1120, v1121);
  v1122 = (BgmReleaseMaster_o *)sub_1B64C4C(BgmReleaseMaster_TypeInfo);
  BgmReleaseMaster___ctor(v1122, 0LL);
  if ( v1122 )
  {
    v517 = sub_1B64B3C(v1122, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1544;
  v515->m_Items[201] = (DataMasterBase_o *)v1122;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[201], (int32_t)v1122, v1123, v1124);
  v1125 = (MyRoomAddMaster_o *)sub_1B64C4C(MyRoomAddMaster_TypeInfo);
  MyRoomAddMaster___ctor(v1125, 0LL);
  if ( v1125 )
  {
    v517 = sub_1B64B3C(v1125, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1544;
  v515->m_Items[202] = (DataMasterBase_o *)v1125;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[202], (int32_t)v1125, v1126, v1127);
  v1128 = (ShopActionMaster_o *)sub_1B64C4C(ShopActionMaster_TypeInfo);
  ShopActionMaster___ctor(v1128, 0LL);
  if ( v1128 )
  {
    v517 = sub_1B64B3C(v1128, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1544;
  v515->m_Items[203] = (DataMasterBase_o *)v1128;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[203], (int32_t)v1128, v1129, v1130);
  v1131 = (EventRewardSceneReleaseMaster_o *)sub_1B64C4C(EventRewardSceneReleaseMaster_TypeInfo);
  EventRewardSceneReleaseMaster___ctor(v1131, 0LL);
  if ( v1131 )
  {
    v517 = sub_1B64B3C(v1131, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1544;
  v515->m_Items[204] = (DataMasterBase_o *)v1131;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[204], (int32_t)v1131, v1132, v1133);
  v1134 = (QuestBehaviorMaster_o *)sub_1B64C4C(QuestBehaviorMaster_TypeInfo);
  QuestBehaviorMaster___ctor(v1134, 0LL);
  if ( v1134 )
  {
    v517 = sub_1B64B3C(v1134, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1544;
  v515->m_Items[205] = (DataMasterBase_o *)v1134;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[205], (int32_t)v1134, v1135, v1136);
  v1137 = (MapMaster_o *)sub_1B64C4C(MapMaster_TypeInfo);
  MapMaster___ctor(v1137, 0LL);
  if ( v1137 )
  {
    v517 = sub_1B64B3C(v1137, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1544;
  v515->m_Items[206] = (DataMasterBase_o *)v1137;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[206], (int32_t)v1137, v1138, v1139);
  v1140 = (MapCondMaster_o *)sub_1B64C4C(MapCondMaster_TypeInfo);
  MapCondMaster___ctor(v1140, 0LL);
  if ( v1140 )
  {
    v517 = sub_1B64B3C(v1140, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1544;
  v515->m_Items[207] = (DataMasterBase_o *)v1140;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[207], (int32_t)v1140, v1141, v1142);
  v1143 = (MapButtonMaster_o *)sub_1B64C4C(MapButtonMaster_TypeInfo);
  MapButtonMaster___ctor(v1143, 0LL);
  if ( v1143 )
  {
    v517 = sub_1B64B3C(v1143, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1544;
  v515->m_Items[208] = (DataMasterBase_o *)v1143;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[208], (int32_t)v1143, v1144, v1145);
  v1146 = (BannerAddMaster_o *)sub_1B64C4C(BannerAddMaster_TypeInfo);
  BannerAddMaster___ctor(v1146, 0LL);
  if ( v1146 )
  {
    v517 = sub_1B64B3C(v1146, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1544;
  v515->m_Items[209] = (DataMasterBase_o *)v1146;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[209], (int32_t)v1146, v1147, v1148);
  v1149 = (EventAddMaster_o *)sub_1B64C4C(EventAddMaster_TypeInfo);
  EventAddMaster___ctor(v1149, 0LL);
  if ( v1149 )
  {
    v517 = sub_1B64B3C(v1149, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1544;
  v515->m_Items[210] = (DataMasterBase_o *)v1149;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[210], (int32_t)v1149, v1150, v1151);
  v1152 = (TotalLoginMaster_o *)sub_1B64C4C(TotalLoginMaster_TypeInfo);
  TotalLoginMaster___ctor(v1152, 0LL);
  if ( v1152 )
  {
    v517 = sub_1B64B3C(v1152, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1544;
  v515->m_Items[211] = (DataMasterBase_o *)v1152;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[211], (int32_t)v1152, v1153, v1154);
  v1155 = (ServantFilterMaster_o *)sub_1B64C4C(ServantFilterMaster_TypeInfo);
  ServantFilterMaster___ctor(v1155, 0LL);
  if ( v1155 )
  {
    v517 = sub_1B64B3C(v1155, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1544;
  v515->m_Items[212] = (DataMasterBase_o *)v1155;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[212], (int32_t)v1155, v1156, v1157);
  v1158 = (CombineCostumeMaster_o *)sub_1B64C4C(CombineCostumeMaster_TypeInfo);
  CombineCostumeMaster___ctor(v1158, 0LL);
  if ( v1158 )
  {
    v517 = sub_1B64B3C(v1158, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1544;
  v515->m_Items[213] = (DataMasterBase_o *)v1158;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[213], (int32_t)v1158, v1159, v1160);
  v1161 = (ServantCostumeMaster_o *)sub_1B64C4C(ServantCostumeMaster_TypeInfo);
  ServantCostumeMaster___ctor(v1161, 0LL);
  if ( v1161 )
  {
    v517 = sub_1B64B3C(v1161, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1544;
  v515->m_Items[214] = (DataMasterBase_o *)v1161;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[214], (int32_t)v1161, v1162, v1163);
  v1164 = (ServantCostumeReleaseMaster_o *)sub_1B64C4C(ServantCostumeReleaseMaster_TypeInfo);
  ServantCostumeReleaseMaster___ctor(v1164, 0LL);
  if ( v1164 )
  {
    v517 = sub_1B64B3C(v1164, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1544;
  v515->m_Items[215] = (DataMasterBase_o *)v1164;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[215], (int32_t)v1164, v1165, v1166);
  v1167 = (UserFriendRequestHistoryMaster_o *)sub_1B64C4C(UserFriendRequestHistoryMaster_TypeInfo);
  UserFriendRequestHistoryMaster___ctor(v1167, 0LL);
  if ( v1167 )
  {
    v517 = sub_1B64B3C(v1167, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1544;
  v515->m_Items[216] = (DataMasterBase_o *)v1167;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[216], (int32_t)v1167, v1168, v1169);
  v1170 = (UserBlacklistMaster_o *)sub_1B64C4C(UserBlacklistMaster_TypeInfo);
  UserBlacklistMaster___ctor(v1170, 0LL);
  if ( v1170 )
  {
    v517 = sub_1B64B3C(v1170, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1544;
  v515->m_Items[217] = (DataMasterBase_o *)v1170;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[217], (int32_t)v1170, v1171, v1172);
  v1173 = (ItemSelectMaster_o *)sub_1B64C4C(ItemSelectMaster_TypeInfo);
  ItemSelectMaster___ctor(v1173, 0LL);
  if ( v1173 )
  {
    v517 = sub_1B64B3C(v1173, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1544;
  v515->m_Items[218] = (DataMasterBase_o *)v1173;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[218], (int32_t)v1173, v1174, v1175);
  v1176 = (TotalEventRaceMaster_o *)sub_1B64C4C(TotalEventRaceMaster_TypeInfo);
  TotalEventRaceMaster___ctor(v1176, 0LL);
  if ( v1176 )
  {
    v517 = sub_1B64B3C(v1176, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1544;
  v515->m_Items[219] = (DataMasterBase_o *)v1176;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[219], (int32_t)v1176, v1177, v1178);
  v1179 = (EventPointGroupAddMaster_o *)sub_1B64C4C(EventPointGroupAddMaster_TypeInfo);
  EventPointGroupAddMaster___ctor(v1179, 0LL);
  if ( v1179 )
  {
    v517 = sub_1B64B3C(v1179, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1544;
  v515->m_Items[220] = (DataMasterBase_o *)v1179;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[220], (int32_t)v1179, v1180, v1181);
  v1182 = (VoicePlayGroupMaster_o *)sub_1B64C4C(VoicePlayGroupMaster_TypeInfo);
  VoicePlayGroupMaster___ctor(v1182, 0LL);
  if ( v1182 )
  {
    v517 = sub_1B64B3C(v1182, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1544;
  v515->m_Items[221] = (DataMasterBase_o *)v1182;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[221], (int32_t)v1182, v1183, v1184);
  v1185 = (VoicePlayCondMaster_o *)sub_1B64C4C(VoicePlayCondMaster_TypeInfo);
  VoicePlayCondMaster___ctor(v1185, 0LL);
  if ( v1185 )
  {
    v517 = sub_1B64B3C(v1185, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1544;
  v515->m_Items[222] = (DataMasterBase_o *)v1185;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[222], (int32_t)v1185, v1186, v1187);
  v1188 = (GachaStoryAdjustMaster_o *)sub_1B64C4C(GachaStoryAdjustMaster_TypeInfo);
  GachaStoryAdjustMaster___ctor(v1188, 0LL);
  if ( v1188 )
  {
    v517 = sub_1B64B3C(v1188, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1544;
  v515->m_Items[223] = (DataMasterBase_o *)v1188;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[223], (int32_t)v1188, v1189, v1190);
  v1191 = (ServantFlagMaster_o *)sub_1B64C4C(ServantFlagMaster_TypeInfo);
  ServantFlagMaster___ctor(v1191, 0LL);
  if ( v1191 )
  {
    v517 = sub_1B64B3C(v1191, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1544;
  v515->m_Items[224] = (DataMasterBase_o *)v1191;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[224], (int32_t)v1191, v1192, v1193);
  v1194 = (ServantFlagReleaseMaster_o *)sub_1B64C4C(ServantFlagReleaseMaster_TypeInfo);
  ServantFlagReleaseMaster___ctor(v1194, 0LL);
  if ( v1194 )
  {
    v517 = sub_1B64B3C(v1194, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1544;
  v515->m_Items[225] = (DataMasterBase_o *)v1194;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[225], (int32_t)v1194, v1195, v1196);
  v1197 = (EventLocationCampaignMaster_o *)sub_1B64C4C(EventLocationCampaignMaster_TypeInfo);
  EventLocationCampaignMaster___ctor(v1197, 0LL);
  if ( v1197 )
  {
    v517 = sub_1B64B3C(v1197, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1544;
  v515->m_Items[226] = (DataMasterBase_o *)v1197;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[226], (int32_t)v1197, v1198, v1199);
  v1200 = (CampaignInfoMaster_o *)sub_1B64C4C(CampaignInfoMaster_TypeInfo);
  CampaignInfoMaster___ctor(v1200, 0LL);
  if ( v1200 )
  {
    v517 = sub_1B64B3C(v1200, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1544;
  v515->m_Items[227] = (DataMasterBase_o *)v1200;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[227], (int32_t)v1200, v1201, v1202);
  v1203 = (DialogMessageMaster_o *)sub_1B64C4C(DialogMessageMaster_TypeInfo);
  DialogMessageMaster___ctor(v1203, 0LL);
  if ( v1203 )
  {
    v517 = sub_1B64B3C(v1203, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1544;
  v515->m_Items[228] = (DataMasterBase_o *)v1203;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[228], (int32_t)v1203, v1204, v1205);
  v1206 = (ServantIndividualityMaster_o *)sub_1B64C4C(ServantIndividualityMaster_TypeInfo);
  ServantIndividualityMaster___ctor(v1206, 0LL);
  if ( v1206 )
  {
    v517 = sub_1B64B3C(v1206, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1544;
  v515->m_Items[229] = (DataMasterBase_o *)v1206;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[229], (int32_t)v1206, v1207, v1208);
  v1209 = (BoardMessageMaster_o *)sub_1B64C4C(BoardMessageMaster_TypeInfo);
  BoardMessageMaster___ctor(v1209, 0LL);
  if ( v1209 )
  {
    v517 = sub_1B64B3C(v1209, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1544;
  v515->m_Items[230] = (DataMasterBase_o *)v1209;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[230], (int32_t)v1209, v1210, v1211);
  v1212 = (BoardMessageReleaseMaster_o *)sub_1B64C4C(BoardMessageReleaseMaster_TypeInfo);
  BoardMessageReleaseMaster___ctor(v1212, 0LL);
  if ( v1212 )
  {
    v517 = sub_1B64B3C(v1212, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1544;
  v515->m_Items[231] = (DataMasterBase_o *)v1212;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[231], (int32_t)v1212, v1213, v1214);
  v1215 = (EventServantFatigueMaster_o *)sub_1B64C4C(EventServantFatigueMaster_TypeInfo);
  EventServantFatigueMaster___ctor(v1215, 0LL);
  if ( v1215 )
  {
    v517 = sub_1B64B3C(v1215, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1544;
  v515->m_Items[232] = (DataMasterBase_o *)v1215;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[232], (int32_t)v1215, v1216, v1217);
  v1218 = (UserEventDeckMaster_o *)sub_1B64C4C(UserEventDeckMaster_TypeInfo);
  UserEventDeckMaster___ctor(v1218, 0LL);
  if ( v1218 )
  {
    v517 = sub_1B64B3C(v1218, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1544;
  v515->m_Items[233] = (DataMasterBase_o *)v1218;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[233], (int32_t)v1218, v1219, v1220);
  v1221 = (EventTowerMaster_o *)sub_1B64C4C(EventTowerMaster_TypeInfo);
  EventTowerMaster___ctor(v1221, 0LL);
  if ( v1221 )
  {
    v517 = sub_1B64B3C(v1221, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1544;
  v515->m_Items[234] = (DataMasterBase_o *)v1221;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[234], (int32_t)v1221, v1222, v1223);
  v1224 = (EventTowerRewardMaster_o *)sub_1B64C4C(EventTowerRewardMaster_TypeInfo);
  EventTowerRewardMaster___ctor(v1224, 0LL);
  if ( v1224 )
  {
    v517 = sub_1B64B3C(v1224, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1544;
  v515->m_Items[235] = (DataMasterBase_o *)v1224;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[235], (int32_t)v1224, v1225, v1226);
  v1227 = (EventBulletinBoardMaster_o *)sub_1B64C4C(EventBulletinBoardMaster_TypeInfo);
  EventBulletinBoardMaster___ctor(v1227, 0LL);
  if ( v1227 )
  {
    v517 = sub_1B64B3C(v1227, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1544;
  v515->m_Items[236] = (DataMasterBase_o *)v1227;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[236], (int32_t)v1227, v1228, v1229);
  v1230 = (EventBulletinBoardReleaseMaster_o *)sub_1B64C4C(EventBulletinBoardReleaseMaster_TypeInfo);
  EventBulletinBoardReleaseMaster___ctor(v1230, 0LL);
  if ( v1230 )
  {
    v517 = sub_1B64B3C(v1230, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1544;
  v515->m_Items[237] = (DataMasterBase_o *)v1230;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[237], (int32_t)v1230, v1231, v1232);
  v1233 = (EventFactoryMaster_o *)sub_1B64C4C(EventFactoryMaster_TypeInfo);
  EventFactoryMaster___ctor(v1233, 0LL);
  if ( v1233 )
  {
    v517 = sub_1B64B3C(v1233, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1544;
  v515->m_Items[238] = (DataMasterBase_o *)v1233;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[238], (int32_t)v1233, v1234, v1235);
  v1236 = (ShopGroupMaster_o *)sub_1B64C4C(ShopGroupMaster_TypeInfo);
  ShopGroupMaster___ctor(v1236, 0LL);
  if ( v1236 )
  {
    v517 = sub_1B64B3C(v1236, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1544;
  v515->m_Items[239] = (DataMasterBase_o *)v1236;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[239], (int32_t)v1236, v1237, v1238);
  v1239 = (AuraEffectMaster_o *)sub_1B64C4C(AuraEffectMaster_TypeInfo);
  AuraEffectMaster___ctor(v1239, 0LL);
  if ( v1239 )
  {
    v517 = sub_1B64B3C(v1239, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1544;
  v515->m_Items[240] = (DataMasterBase_o *)v1239;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[240], (int32_t)v1239, v1240, v1241);
  v1242 = (AuraEffectPosOverwriteMaster_o *)sub_1B64C4C(AuraEffectPosOverwriteMaster_TypeInfo);
  AuraEffectPosOverwriteMaster___ctor(v1242, 0LL);
  if ( v1242 )
  {
    v517 = sub_1B64B3C(v1242, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1544;
  v515->m_Items[241] = (DataMasterBase_o *)v1242;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[241], (int32_t)v1242, v1243, v1244);
  v1245 = (UserEventMissionFixMaster_o *)sub_1B64C4C(UserEventMissionFixMaster_TypeInfo);
  UserEventMissionFixMaster___ctor(v1245, 0LL);
  if ( v1245 )
  {
    v517 = sub_1B64B3C(v1245, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1544;
  v515->m_Items[242] = (DataMasterBase_o *)v1245;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[242], (int32_t)v1245, v1246, v1247);
  v1248 = (NotEndEventMissionFixMaster_o *)sub_1B64C4C(NotEndEventMissionFixMaster_TypeInfo);
  NotEndEventMissionFixMaster___ctor(v1248, 0LL);
  if ( v1248 )
  {
    v517 = sub_1B64B3C(v1248, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1544;
  v515->m_Items[243] = (DataMasterBase_o *)v1248;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[243], (int32_t)v1248, v1249, v1250);
  v1251 = (EnemyMstMaster_o *)sub_1B64C4C(EnemyMstMaster_TypeInfo);
  EnemyMstMaster___ctor(v1251, 0LL);
  if ( v1251 )
  {
    v517 = sub_1B64B3C(v1251, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1544;
  v515->m_Items[244] = (DataMasterBase_o *)v1251;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[244], (int32_t)v1251, v1252, v1253);
  v1254 = (EnemyMstBattleMaster_o *)sub_1B64C4C(EnemyMstBattleMaster_TypeInfo);
  EnemyMstBattleMaster___ctor(v1254, 0LL);
  if ( v1254 )
  {
    v517 = sub_1B64B3C(v1254, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1544;
  v515->m_Items[245] = (DataMasterBase_o *)v1254;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[245], (int32_t)v1254, v1255, v1256);
  v1257 = (ServantSkillReleaseMaster_o *)sub_1B64C4C(ServantSkillReleaseMaster_TypeInfo);
  ServantSkillReleaseMaster___ctor(v1257, 0LL);
  if ( v1257 )
  {
    v517 = sub_1B64B3C(v1257, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1544;
  v515->m_Items[246] = (DataMasterBase_o *)v1257;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[246], (int32_t)v1257, v1258, v1259);
  v1260 = (ServantPassiveSkillReleaseMaster_o *)sub_1B64C4C(ServantPassiveSkillReleaseMaster_TypeInfo);
  ServantPassiveSkillReleaseMaster___ctor(v1260, 0LL);
  if ( v1260 )
  {
    v517 = sub_1B64B3C(v1260, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1544;
  v515->m_Items[247] = (DataMasterBase_o *)v1260;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[247], (int32_t)v1260, v1261, v1262);
  v1263 = (ServantTreasureDeviceReleaseMaster_o *)sub_1B64C4C(ServantTreasureDeviceReleaseMaster_TypeInfo);
  ServantTreasureDeviceReleaseMaster___ctor(v1263, 0LL);
  if ( v1263 )
  {
    v517 = sub_1B64B3C(v1263, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1544;
  v515->m_Items[248] = (DataMasterBase_o *)v1263;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[248], (int32_t)v1263, v1264, v1265);
  v1266 = (MapGimmickReleaseMaster_o *)sub_1B64C4C(MapGimmickReleaseMaster_TypeInfo);
  MapGimmickReleaseMaster___ctor(v1266, 0LL);
  if ( v1266 )
  {
    v517 = sub_1B64B3C(v1266, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1544;
  v515->m_Items[249] = (DataMasterBase_o *)v1266;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[249], (int32_t)v1266, v1267, v1268);
  v1269 = (CommandCodeMaster_o *)sub_1B64C4C(CommandCodeMaster_TypeInfo);
  CommandCodeMaster___ctor(v1269, 0LL);
  if ( v1269 )
  {
    v517 = sub_1B64B3C(v1269, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1544;
  v515->m_Items[250] = (DataMasterBase_o *)v1269;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[250], (int32_t)v1269, v1270, v1271);
  v1272 = (ServantCommandCodeUnlockMaster_o *)sub_1B64C4C(ServantCommandCodeUnlockMaster_TypeInfo);
  ServantCommandCodeUnlockMaster___ctor(v1272, 0LL);
  if ( v1272 )
  {
    v517 = sub_1B64B3C(v1272, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1544;
  v515->m_Items[251] = (DataMasterBase_o *)v1272;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[251], (int32_t)v1272, v1273, v1274);
  v1275 = (UserCommandCodeMaster_o *)sub_1B64C4C(UserCommandCodeMaster_TypeInfo);
  UserCommandCodeMaster___ctor(v1275, 0LL);
  if ( v1275 )
  {
    v517 = sub_1B64B3C(v1275, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1544;
  v515->m_Items[252] = (DataMasterBase_o *)v1275;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[252], (int32_t)v1275, v1276, v1277);
  v1278 = (UserCommandCodeCollectionMaster_o *)sub_1B64C4C(UserCommandCodeCollectionMaster_TypeInfo);
  UserCommandCodeCollectionMaster___ctor(v1278, 0LL);
  if ( v1278 )
  {
    v517 = sub_1B64B3C(v1278, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1544;
  v515->m_Items[253] = (DataMasterBase_o *)v1278;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[253], (int32_t)v1278, v1279, v1280);
  v1281 = (UserServantCommandCodeMaster_o *)sub_1B64C4C(UserServantCommandCodeMaster_TypeInfo);
  UserServantCommandCodeMaster___ctor(v1281, 0LL);
  if ( v1281 )
  {
    v517 = sub_1B64B3C(v1281, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1544;
  v515->m_Items[254] = (DataMasterBase_o *)v1281;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[254], (int32_t)v1281, v1282, v1283);
  v1284 = (UserServantCommandCardMaster_o *)sub_1B64C4C(UserServantCommandCardMaster_TypeInfo);
  UserServantCommandCardMaster___ctor(v1284, 0LL);
  if ( v1284 )
  {
    v517 = sub_1B64B3C(v1284, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1544;
  v515->m_Items[255] = (DataMasterBase_o *)v1284;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[255], (int32_t)v1284, v1285, v1286);
  v1287 = (CommandCardRankParamMaster_o *)sub_1B64C4C(CommandCardRankParamMaster_TypeInfo);
  CommandCardRankParamMaster___ctor(v1287, 0LL);
  if ( v1287 )
  {
    v517 = sub_1B64B3C(v1287, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1544;
  v515->m_Items[256] = (DataMasterBase_o *)v1287;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[256], (int32_t)v1287, v1288, v1289);
  v1290 = (CommandCodeSkillMaster_o *)sub_1B64C4C(CommandCodeSkillMaster_TypeInfo);
  CommandCodeSkillMaster___ctor(v1290, 0LL);
  if ( v1290 )
  {
    v517 = sub_1B64B3C(v1290, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1544;
  v515->m_Items[257] = (DataMasterBase_o *)v1290;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[257], (int32_t)v1290, v1291, v1292);
  v1293 = (CommandCodeSkillReleaseMaster_o *)sub_1B64C4C(CommandCodeSkillReleaseMaster_TypeInfo);
  CommandCodeSkillReleaseMaster___ctor(v1293, 0LL);
  if ( v1293 )
  {
    v517 = sub_1B64B3C(v1293, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1544;
  v515->m_Items[258] = (DataMasterBase_o *)v1293;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[258], (int32_t)v1293, v1294, v1295);
  v1296 = (CommandCodeCommentMaster_o *)sub_1B64C4C(CommandCodeCommentMaster_TypeInfo);
  CommandCodeCommentMaster___ctor(v1296, 0LL);
  if ( v1296 )
  {
    v517 = sub_1B64B3C(v1296, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1544;
  v515->m_Items[259] = (DataMasterBase_o *)v1296;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[259], (int32_t)v1296, v1297, v1298);
  v1299 = (EventStatusMaster_o *)sub_1B64C4C(EventStatusMaster_TypeInfo);
  EventStatusMaster___ctor(v1299, 0LL);
  if ( v1299 )
  {
    v517 = sub_1B64B3C(v1299, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1544;
  v515->m_Items[260] = (DataMasterBase_o *)v1299;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[260], (int32_t)v1299, v1300, v1301);
  v1302 = (EventStatusQuestMaster_o *)sub_1B64C4C(EventStatusQuestMaster_TypeInfo);
  EventStatusQuestMaster___ctor(v1302, 0LL);
  if ( v1302 )
  {
    v517 = sub_1B64B3C(v1302, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1544;
  v515->m_Items[261] = (DataMasterBase_o *)v1302;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[261], (int32_t)v1302, v1303, v1304);
  v1305 = (CommonRestrictionMaster_o *)sub_1B64C4C(CommonRestrictionMaster_TypeInfo);
  CommonRestrictionMaster___ctor(v1305, 0LL);
  if ( v1305 )
  {
    v517 = sub_1B64B3C(v1305, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1544;
  v515->m_Items[262] = (DataMasterBase_o *)v1305;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[262], (int32_t)v1305, v1306, v1307);
  v1308 = (EventPointBuffMaster_o *)sub_1B64C4C(EventPointBuffMaster_TypeInfo);
  EventPointBuffMaster___ctor(v1308, 0LL);
  if ( v1308 )
  {
    v517 = sub_1B64B3C(v1308, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1544;
  v515->m_Items[263] = (DataMasterBase_o *)v1308;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[263], (int32_t)v1308, v1309, v1310);
  v1311 = (UserFollowMaster_o *)sub_1B64C4C(UserFollowMaster_TypeInfo);
  UserFollowMaster___ctor(v1311, 0LL);
  if ( v1311 )
  {
    v517 = sub_1B64B3C(v1311, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1544;
  v515->m_Items[264] = (DataMasterBase_o *)v1311;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[264], (int32_t)v1311, v1312, v1313);
  v1314 = (EventRewardGuideReleaseMaster_o *)sub_1B64C4C(EventRewardGuideReleaseMaster_TypeInfo);
  EventRewardGuideReleaseMaster___ctor(v1314, 0LL);
  if ( v1314 )
  {
    v517 = sub_1B64B3C(v1314, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1544;
  v515->m_Items[265] = (DataMasterBase_o *)v1314;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[265], (int32_t)v1314, v1315, v1316);
  v1317 = (NpcServantEquipMaster_o *)sub_1B64C4C(NpcServantEquipMaster_TypeInfo);
  NpcServantEquipMaster___ctor(v1317, 0LL);
  if ( v1317 )
  {
    v517 = sub_1B64B3C(v1317, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1544;
  v515->m_Items[266] = (DataMasterBase_o *)v1317;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[266], (int32_t)v1317, v1318, v1319);
  v1320 = (EventCampaignReleaseMaster_o *)sub_1B64C4C(EventCampaignReleaseMaster_TypeInfo);
  EventCampaignReleaseMaster___ctor(v1320, 0LL);
  if ( v1320 )
  {
    v517 = sub_1B64B3C(v1320, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1544;
  v515->m_Items[267] = (DataMasterBase_o *)v1320;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[267], (int32_t)v1320, v1321, v1322);
  v1323 = (ServantMaterialFolderMaster_o *)sub_1B64C4C(ServantMaterialFolderMaster_TypeInfo);
  ServantMaterialFolderMaster___ctor(v1323, 0LL);
  if ( v1323 )
  {
    v517 = sub_1B64B3C(v1323, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1544;
  v515->m_Items[268] = (DataMasterBase_o *)v1323;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[268], (int32_t)v1323, v1324, v1325);
  v1326 = (EventEquipSkillReleaseMaster_o *)sub_1B64C4C(EventEquipSkillReleaseMaster_TypeInfo);
  EventEquipSkillReleaseMaster___ctor(v1326, 0LL);
  if ( v1326 )
  {
    v517 = sub_1B64B3C(v1326, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1544;
  v515->m_Items[269] = (DataMasterBase_o *)v1326;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[269], (int32_t)v1326, v1327, v1328);
  v1329 = (EventPointActivityMaster_o *)sub_1B64C4C(EventPointActivityMaster_TypeInfo);
  EventPointActivityMaster___ctor(v1329, 0LL);
  if ( v1329 )
  {
    v517 = sub_1B64B3C(v1329, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1544;
  v515->m_Items[270] = (DataMasterBase_o *)v1329;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[270], (int32_t)v1329, v1330, v1331);
  v1332 = (FunctionCategoryMaster_o *)sub_1B64C4C(FunctionCategoryMaster_TypeInfo);
  FunctionCategoryMaster___ctor(v1332, 0LL);
  if ( v1332 )
  {
    v517 = sub_1B64B3C(v1332, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1544;
  v515->m_Items[271] = (DataMasterBase_o *)v1332;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[271], (int32_t)v1332, v1333, v1334);
  v1335 = (QuestPickupMaster_o *)sub_1B64C4C(QuestPickupMaster_TypeInfo);
  QuestPickupMaster___ctor(v1335, 0LL);
  if ( v1335 )
  {
    v517 = sub_1B64B3C(v1335, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1544;
  v515->m_Items[272] = (DataMasterBase_o *)v1335;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[272], (int32_t)v1335, v1336, v1337);
  v1338 = (EventUiMaster_o *)sub_1B64C4C(EventUiMaster_TypeInfo);
  EventUiMaster___ctor(v1338, 0LL);
  if ( v1338 )
  {
    v517 = sub_1B64B3C(v1338, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1544;
  v515->m_Items[273] = (DataMasterBase_o *)v1338;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[273], (int32_t)v1338, v1339, v1340);
  v1341 = (EventUiReleaseMaster_o *)sub_1B64C4C(EventUiReleaseMaster_TypeInfo);
  EventUiReleaseMaster___ctor(v1341, 0LL);
  if ( v1341 )
  {
    v517 = sub_1B64B3C(v1341, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1544;
  v515->m_Items[274] = (DataMasterBase_o *)v1341;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[274], (int32_t)v1341, v1342, v1343);
  v1344 = (EventUiValueMaster_o *)sub_1B64C4C(EventUiValueMaster_TypeInfo);
  EventUiValueMaster___ctor(v1344, 0LL);
  if ( v1344 )
  {
    v517 = sub_1B64B3C(v1344, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1544;
  v515->m_Items[275] = (DataMasterBase_o *)v1344;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[275], (int32_t)v1344, v1345, v1346);
  v1347 = (EventConquestRewardMaster_o *)sub_1B64C4C(EventConquestRewardMaster_TypeInfo);
  EventConquestRewardMaster___ctor(v1347, 0LL);
  if ( v1347 )
  {
    v517 = sub_1B64B3C(v1347, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1544;
  v515->m_Items[276] = (DataMasterBase_o *)v1347;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[276], (int32_t)v1347, v1348, v1349);
  v1350 = (NpcFollowerReleaseMaster_o *)sub_1B64C4C(NpcFollowerReleaseMaster_TypeInfo);
  NpcFollowerReleaseMaster___ctor(v1350, 0LL);
  if ( v1350 )
  {
    v517 = sub_1B64B3C(v1350, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1544;
  v515->m_Items[277] = (DataMasterBase_o *)v1350;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[277], (int32_t)v1350, v1351, v1352);
  v1353 = (EventBonusFilterMaster_o *)sub_1B64C4C(EventBonusFilterMaster_TypeInfo);
  EventBonusFilterMaster___ctor(v1353, 0LL);
  if ( v1353 )
  {
    v517 = sub_1B64B3C(v1353, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1544;
  v515->m_Items[278] = (DataMasterBase_o *)v1353;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[278], (int32_t)v1353, v1354, v1355);
  v1356 = (EventBonusFilterGroupInfoMaster_o *)sub_1B64C4C(EventBonusFilterGroupInfoMaster_TypeInfo);
  EventBonusFilterGroupInfoMaster___ctor(v1356, 0LL);
  if ( v1356 )
  {
    v517 = sub_1B64B3C(v1356, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1544;
  v515->m_Items[279] = (DataMasterBase_o *)v1356;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[279], (int32_t)v1356, v1357, v1358);
  v1359 = (EventBonusFilterGroupMemberMaster_o *)sub_1B64C4C(EventBonusFilterGroupMemberMaster_TypeInfo);
  EventBonusFilterGroupMemberMaster___ctor(v1359, 0LL);
  if ( v1359 )
  {
    v517 = sub_1B64B3C(v1359, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1544;
  v515->m_Items[280] = (DataMasterBase_o *)v1359;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[280], (int32_t)v1359, v1360, v1361);
  v1362 = (UserGachaExtraCountMaster_o *)sub_1B64C4C(UserGachaExtraCountMaster_TypeInfo);
  UserGachaExtraCountMaster___ctor(v1362, 0LL);
  if ( v1362 )
  {
    v517 = sub_1B64B3C(v1362, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1544;
  v515->m_Items[281] = (DataMasterBase_o *)v1362;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[281], (int32_t)v1362, v1363, v1364);
  v1365 = (PrivilegeMaster_o *)sub_1B64C4C(PrivilegeMaster_TypeInfo);
  PrivilegeMaster___ctor(v1365, 0LL);
  if ( v1365 )
  {
    v517 = sub_1B64B3C(v1365, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1544;
  v515->m_Items[282] = (DataMasterBase_o *)v1365;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[282], (int32_t)v1365, v1366, v1367);
  v1368 = (UserPrivilegeMaster_o *)sub_1B64C4C(UserPrivilegeMaster_TypeInfo);
  UserPrivilegeMaster___ctor(v1368, 0LL);
  if ( v1368 )
  {
    v517 = sub_1B64B3C(v1368, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1544;
  v515->m_Items[283] = (DataMasterBase_o *)v1368;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[283], (int32_t)v1368, v1369, v1370);
  v1371 = (UserQuestRouteMaster_o *)sub_1B64C4C(UserQuestRouteMaster_TypeInfo);
  UserQuestRouteMaster___ctor(v1371, 0LL);
  if ( v1371 )
  {
    v517 = sub_1B64B3C(v1371, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1544;
  v515->m_Items[284] = (DataMasterBase_o *)v1371;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[284], (int32_t)v1371, v1372, v1373);
  v1374 = (EventBossStatusUiMaster_o *)sub_1B64C4C(EventBossStatusUiMaster_TypeInfo);
  EventBossStatusUiMaster___ctor(v1374, 0LL);
  if ( v1374 )
  {
    v517 = sub_1B64B3C(v1374, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1544;
  v515->m_Items[285] = (DataMasterBase_o *)v1374;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[285], (int32_t)v1374, v1375, v1376);
  v1377 = (CommonReleaseMaster_o *)sub_1B64C4C(CommonReleaseMaster_TypeInfo);
  CommonReleaseMaster___ctor(v1377, 0LL);
  if ( v1377 )
  {
    v517 = sub_1B64B3C(v1377, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1544;
  v515->m_Items[286] = (DataMasterBase_o *)v1377;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[286], (int32_t)v1377, v1378, v1379);
  v1380 = (QuestSpotReleaseMaster_o *)sub_1B64C4C(QuestSpotReleaseMaster_TypeInfo);
  QuestSpotReleaseMaster___ctor(v1380, 0LL);
  if ( v1380 )
  {
    v517 = sub_1B64B3C(v1380, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1544;
  v515->m_Items[287] = (DataMasterBase_o *)v1380;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[287], (int32_t)v1380, v1381, v1382);
  v1383 = (VoiceMaterialCondMaster_o *)sub_1B64C4C(VoiceMaterialCondMaster_TypeInfo);
  VoiceMaterialCondMaster___ctor(v1383, 0LL);
  if ( v1383 )
  {
    v517 = sub_1B64B3C(v1383, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1544;
  v515->m_Items[288] = (DataMasterBase_o *)v1383;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[288], (int32_t)v1383, v1384, v1385);
  v1386 = (ClassRelationOverwriteMaster_o *)sub_1B64C4C(ClassRelationOverwriteMaster_TypeInfo);
  ClassRelationOverwriteMaster___ctor(v1386, 0LL);
  if ( v1386 )
  {
    v517 = sub_1B64B3C(v1386, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1544;
  v515->m_Items[289] = (DataMasterBase_o *)v1386;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[289], (int32_t)v1386, v1387, v1388);
  v1389 = (EventGroupMaster_o *)sub_1B64C4C(EventGroupMaster_TypeInfo);
  EventGroupMaster___ctor(v1389, 0LL);
  if ( v1389 )
  {
    v517 = sub_1B64B3C(v1389, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1544;
  v515->m_Items[290] = (DataMasterBase_o *)v1389;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[290], (int32_t)v1389, v1390, v1391);
  v1392 = (TotalBoxGachaMaster_o *)sub_1B64C4C(TotalBoxGachaMaster_TypeInfo);
  TotalBoxGachaMaster___ctor(v1392, 0LL);
  if ( v1392 )
  {
    v517 = sub_1B64B3C(v1392, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1544;
  v515->m_Items[291] = (DataMasterBase_o *)v1392;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[291], (int32_t)v1392, v1393, v1394);
  v1395 = (ServantTreasureDeviceDamageMaster_o *)sub_1B64C4C(ServantTreasureDeviceDamageMaster_TypeInfo);
  ServantTreasureDeviceDamageMaster___ctor(v1395, 0LL);
  if ( v1395 )
  {
    v517 = sub_1B64B3C(v1395, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1544;
  v515->m_Items[292] = (DataMasterBase_o *)v1395;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[292], (int32_t)v1395, v1396, v1397);
  v1398 = (UserEventServantFatigueMaster_o *)sub_1B64C4C(UserEventServantFatigueMaster_TypeInfo);
  UserEventServantFatigueMaster___ctor(v1398, 0LL);
  if ( v1398 )
  {
    v517 = sub_1B64B3C(v1398, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1544;
  v515->m_Items[293] = (DataMasterBase_o *)v1398;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[293], (int32_t)v1398, v1399, v1400);
  v1401 = (EventRewardBgMaster_o *)sub_1B64C4C(EventRewardBgMaster_TypeInfo);
  EventRewardBgMaster___ctor(v1401, 0LL);
  if ( v1401 )
  {
    v517 = sub_1B64B3C(v1401, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1544;
  v515->m_Items[294] = (DataMasterBase_o *)v1401;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[294], (int32_t)v1401, v1402, v1403);
  v1404 = (EventFatigueRecoveryMaster_o *)sub_1B64C4C(EventFatigueRecoveryMaster_TypeInfo);
  EventFatigueRecoveryMaster___ctor(v1404, 0LL);
  if ( v1404 )
  {
    v517 = sub_1B64B3C(v1404, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1544;
  v515->m_Items[295] = (DataMasterBase_o *)v1404;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[295], (int32_t)v1404, v1405, v1406);
  v1407 = (EventBoostItemUsedMaster_o *)sub_1B64C4C(EventBoostItemUsedMaster_TypeInfo);
  EventBoostItemUsedMaster___ctor(v1407, 0LL);
  if ( v1407 )
  {
    v517 = sub_1B64B3C(v1407, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1544;
  v515->m_Items[296] = (DataMasterBase_o *)v1407;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[296], (int32_t)v1407, v1408, v1409);
  v1410 = (StatusEffectPosOverwriteMaster_o *)sub_1B64C4C(StatusEffectPosOverwriteMaster_TypeInfo);
  StatusEffectPosOverwriteMaster___ctor(v1410, 0LL);
  if ( v1410 )
  {
    v517 = sub_1B64B3C(v1410, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1544;
  v515->m_Items[297] = (DataMasterBase_o *)v1410;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[297], (int32_t)v1410, v1411, v1412);
  v1413 = (QuestPhaseDetailAddMaster_o *)sub_1B64C4C(QuestPhaseDetailAddMaster_TypeInfo);
  QuestPhaseDetailAddMaster___ctor(v1413, 0LL);
  if ( v1413 )
  {
    v517 = sub_1B64B3C(v1413, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1544;
  v515->m_Items[298] = (DataMasterBase_o *)v1413;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[298], (int32_t)v1413, v1414, v1415);
  v1416 = (VoiceClosedMessageMaster_o *)sub_1B64C4C(VoiceClosedMessageMaster_TypeInfo);
  VoiceClosedMessageMaster___ctor(v1416, 0LL);
  if ( v1416 )
  {
    v517 = sub_1B64B3C(v1416, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1544;
  v515->m_Items[299] = (DataMasterBase_o *)v1416;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[299], (int32_t)v1416, v1417, v1418);
  v1419 = (ReprintStageMaster_o *)sub_1B64C4C(ReprintStageMaster_TypeInfo);
  ReprintStageMaster___ctor(v1419, 0LL);
  if ( v1419 )
  {
    v517 = sub_1B64B3C(v1419, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1544;
  v515->m_Items[300] = (DataMasterBase_o *)v1419;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[300], (int32_t)v1419, v1420, v1421);
  v1422 = (UserCombineExpMaster_o *)sub_1B64C4C(UserCombineExpMaster_TypeInfo);
  UserCombineExpMaster___ctor(v1422, 0LL);
  if ( v1422 )
  {
    v517 = sub_1B64B3C(v1422, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1544;
  v515->m_Items[301] = (DataMasterBase_o *)v1422;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[301], (int32_t)v1422, v1423, v1424);
  v1425 = (EventBoardGameCellMaster_o *)sub_1B64C4C(EventBoardGameCellMaster_TypeInfo);
  EventBoardGameCellMaster___ctor(v1425, 0LL);
  if ( v1425 )
  {
    v517 = sub_1B64B3C(v1425, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1544;
  v515->m_Items[302] = (DataMasterBase_o *)v1425;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[302], (int32_t)v1425, v1426, v1427);
  v1428 = (EventBoardGameTokenMaster_o *)sub_1B64C4C(EventBoardGameTokenMaster_TypeInfo);
  EventBoardGameTokenMaster___ctor(v1428, 0LL);
  if ( v1428 )
  {
    v517 = sub_1B64B3C(v1428, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1544;
  v515->m_Items[303] = (DataMasterBase_o *)v1428;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[303], (int32_t)v1428, v1429, v1430);
  v1431 = (EventBoardGameTokenRewardMaster_o *)sub_1B64C4C(EventBoardGameTokenRewardMaster_TypeInfo);
  EventBoardGameTokenRewardMaster___ctor(v1431, 0LL);
  if ( v1431 )
  {
    v517 = sub_1B64B3C(v1431, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1544;
  v515->m_Items[304] = (DataMasterBase_o *)v1431;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[304], (int32_t)v1431, v1432, v1433);
  v1434 = (UserEventBoardGameTokenMaster_o *)sub_1B64C4C(UserEventBoardGameTokenMaster_TypeInfo);
  UserEventBoardGameTokenMaster___ctor(v1434, 0LL);
  if ( v1434 )
  {
    v517 = sub_1B64B3C(v1434, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1544;
  v515->m_Items[305] = (DataMasterBase_o *)v1434;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[305], (int32_t)v1434, v1435, v1436);
  v1437 = (ServantAnimationOverwriteMaster_o *)sub_1B64C4C(ServantAnimationOverwriteMaster_TypeInfo);
  ServantAnimationOverwriteMaster___ctor(v1437, 0LL);
  if ( v1437 )
  {
    v517 = sub_1B64B3C(v1437, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1544;
  v515->m_Items[306] = (DataMasterBase_o *)v1437;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[306], (int32_t)v1437, v1438, v1439);
  v1440 = (OpeningMovieMaster_o *)sub_1B64C4C(OpeningMovieMaster_TypeInfo);
  OpeningMovieMaster___ctor(v1440, 0LL);
  if ( v1440 )
  {
    v517 = sub_1B64B3C(v1440, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1544;
  v515->m_Items[307] = (DataMasterBase_o *)v1440;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[307], (int32_t)v1440, v1441, v1442);
  v1443 = (ServantLimitSpoilerProtectionMaster_o *)sub_1B64C4C(ServantLimitSpoilerProtectionMaster_TypeInfo);
  ServantLimitSpoilerProtectionMaster___ctor(v1443, 0LL);
  if ( v1443 )
  {
    v517 = sub_1B64B3C(v1443, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1544;
  v515->m_Items[308] = (DataMasterBase_o *)v1443;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[308], (int32_t)v1443, v1444, v1445);
  v1446 = (PickupUserFollowerMaster_o *)sub_1B64C4C(PickupUserFollowerMaster_TypeInfo);
  PickupUserFollowerMaster___ctor(v1446, 0LL);
  if ( v1446 )
  {
    v517 = sub_1B64B3C(v1446, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1544;
  v515->m_Items[309] = (DataMasterBase_o *)v1446;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[309], (int32_t)v1446, v1447, v1448);
  v1449 = (ServantCollectionMaster_o *)sub_1B64C4C(ServantCollectionMaster_TypeInfo);
  ServantCollectionMaster___ctor(v1449, 0LL);
  if ( v1449 )
  {
    v517 = sub_1B64B3C(v1449, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1544;
  v515->m_Items[310] = (DataMasterBase_o *)v1449;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[310], (int32_t)v1449, v1450, v1451);
  v1452 = (GachaBehaviorMaster_o *)sub_1B64C4C(GachaBehaviorMaster_TypeInfo);
  GachaBehaviorMaster___ctor(v1452, 0LL);
  if ( v1452 )
  {
    v517 = sub_1B64B3C(v1452, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1544;
  v515->m_Items[311] = (DataMasterBase_o *)v1452;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[311], (int32_t)v1452, v1453, v1454);
  v1455 = (EventQuestCooltimeMaster_o *)sub_1B64C4C(EventQuestCooltimeMaster_TypeInfo);
  EventQuestCooltimeMaster___ctor(v1455, 0LL);
  if ( v1455 )
  {
    v517 = sub_1B64B3C(v1455, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1544;
  v515->m_Items[312] = (DataMasterBase_o *)v1455;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[312], (int32_t)v1455, v1456, v1457);
  v1458 = (UserEventQuestCooltimeMaster_o *)sub_1B64C4C(UserEventQuestCooltimeMaster_TypeInfo);
  UserEventQuestCooltimeMaster___ctor(v1458, 0LL);
  if ( v1458 )
  {
    v517 = sub_1B64B3C(v1458, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1544;
  v515->m_Items[313] = (DataMasterBase_o *)v1458;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[313], (int32_t)v1458, v1459, v1460);
  v1461 = (BoostMaster_o *)sub_1B64C4C(BoostMaster_TypeInfo);
  BoostMaster___ctor(v1461, 0LL);
  if ( v1461 )
  {
    v517 = sub_1B64B3C(v1461, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1544;
  v515->m_Items[314] = (DataMasterBase_o *)v1461;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[314], (int32_t)v1461, v1462, v1463);
  v1464 = (WarBoardMaster_o *)sub_1B64C4C(WarBoardMaster_TypeInfo);
  WarBoardMaster___ctor(v1464, 0LL);
  if ( v1464 )
  {
    v517 = sub_1B64B3C(v1464, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1544;
  v515->m_Items[315] = (DataMasterBase_o *)v1464;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[315], (int32_t)v1464, v1465, v1466);
  v1467 = (WarBoardSquareMaster_o *)sub_1B64C4C(WarBoardSquareMaster_TypeInfo);
  WarBoardSquareMaster___ctor(v1467, 0LL);
  if ( v1467 )
  {
    v517 = sub_1B64B3C(v1467, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1544;
  v515->m_Items[316] = (DataMasterBase_o *)v1467;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[316], (int32_t)v1467, v1468, v1469);
  v1470 = (WarBoardRoadMaster_o *)sub_1B64C4C(WarBoardRoadMaster_TypeInfo);
  WarBoardRoadMaster___ctor(v1470, 0LL);
  if ( v1470 )
  {
    v517 = sub_1B64B3C(v1470, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1544;
  v515->m_Items[317] = (DataMasterBase_o *)v1470;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[317], (int32_t)v1470, v1471, v1472);
  v1473 = (WarBoardStageMaster_o *)sub_1B64C4C(WarBoardStageMaster_TypeInfo);
  WarBoardStageMaster___ctor(v1473, 0LL);
  if ( v1473 )
  {
    v517 = sub_1B64B3C(v1473, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1544;
  v515->m_Items[318] = (DataMasterBase_o *)v1473;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[318], (int32_t)v1473, v1474, v1475);
  v1476 = (WarBoardActionPointMaster_o *)sub_1B64C4C(WarBoardActionPointMaster_TypeInfo);
  WarBoardActionPointMaster___ctor(v1476, 0LL);
  if ( v1476 )
  {
    v517 = sub_1B64B3C(v1476, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1544;
  v515->m_Items[319] = (DataMasterBase_o *)v1476;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[319], (int32_t)v1476, v1477, v1478);
  v1479 = (WarBoardActionTrendMaster_o *)sub_1B64C4C(WarBoardActionTrendMaster_TypeInfo);
  WarBoardActionTrendMaster___ctor(v1479, 0LL);
  if ( v1479 )
  {
    v517 = sub_1B64B3C(v1479, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1544;
  v515->m_Items[320] = (DataMasterBase_o *)v1479;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[320], (int32_t)v1479, v1480, v1481);
  v1482 = (WarBoardTacticalTrendMaster_o *)sub_1B64C4C(WarBoardTacticalTrendMaster_TypeInfo);
  WarBoardTacticalTrendMaster___ctor(v1482, 0LL);
  if ( v1482 )
  {
    v517 = sub_1B64B3C(v1482, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1544;
  v515->m_Items[321] = (DataMasterBase_o *)v1482;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[321], (int32_t)v1482, v1483, v1484);
  v1485 = (WarBoardStageLayoutMaster_o *)sub_1B64C4C(WarBoardStageLayoutMaster_TypeInfo);
  WarBoardStageLayoutMaster___ctor(v1485, 0LL);
  if ( v1485 )
  {
    v517 = sub_1B64B3C(v1485, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1544;
  v515->m_Items[322] = (DataMasterBase_o *)v1485;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[322], (int32_t)v1485, v1486, v1487);
  v1488 = (WarBoardStageNpcMaster_o *)sub_1B64C4C(WarBoardStageNpcMaster_TypeInfo);
  WarBoardStageNpcMaster___ctor(v1488, 0LL);
  if ( v1488 )
  {
    v517 = sub_1B64B3C(v1488, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1544;
  v515->m_Items[323] = (DataMasterBase_o *)v1488;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[323], (int32_t)v1488, v1489, v1490);
  v1491 = (WarBoardStageWallMaster_o *)sub_1B64C4C(WarBoardStageWallMaster_TypeInfo);
  WarBoardStageWallMaster___ctor(v1491, 0LL);
  if ( v1491 )
  {
    v517 = sub_1B64B3C(v1491, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1544;
  v515->m_Items[324] = (DataMasterBase_o *)v1491;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[324], (int32_t)v1491, v1492, v1493);
  v1494 = (WarBoardAIMaster_o *)sub_1B64C4C(WarBoardAIMaster_TypeInfo);
  WarBoardAIMaster___ctor(v1494, 0LL);
  if ( v1494 )
  {
    v517 = sub_1B64B3C(v1494, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1544;
  v515->m_Items[325] = (DataMasterBase_o *)v1494;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[325], (int32_t)v1494, v1495, v1496);
  v1497 = (WarBoardRatingBaseMaster_o *)sub_1B64C4C(WarBoardRatingBaseMaster_TypeInfo);
  WarBoardRatingBaseMaster___ctor(v1497, 0LL);
  if ( v1497 )
  {
    v517 = sub_1B64B3C(v1497, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1544;
  v515->m_Items[326] = (DataMasterBase_o *)v1497;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[326], (int32_t)v1497, v1498, v1499);
  v1500 = (WarBoardRatingOffsetMaster_o *)sub_1B64C4C(WarBoardRatingOffsetMaster_TypeInfo);
  WarBoardRatingOffsetMaster___ctor(v1500, 0LL);
  if ( v1500 )
  {
    v517 = sub_1B64B3C(v1500, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1544;
  v515->m_Items[327] = (DataMasterBase_o *)v1500;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[327], (int32_t)v1500, v1501, v1502);
  v1503 = (WarBoardItemMaster_o *)sub_1B64C4C(WarBoardItemMaster_TypeInfo);
  WarBoardItemMaster___ctor(v1503, 0LL);
  if ( v1503 )
  {
    v517 = sub_1B64B3C(v1503, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1544;
  v515->m_Items[328] = (DataMasterBase_o *)v1503;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[328], (int32_t)v1503, v1504, v1505);
  v1506 = (WarBoardTreasureMaster_o *)sub_1B64C4C(WarBoardTreasureMaster_TypeInfo);
  WarBoardTreasureMaster___ctor(v1506, 0LL);
  if ( v1506 )
  {
    v517 = sub_1B64B3C(v1506, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1544;
  v515->m_Items[329] = (DataMasterBase_o *)v1506;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[329], (int32_t)v1506, v1507, v1508);
  v1509 = (WarBoardQuestMaster_o *)sub_1B64C4C(WarBoardQuestMaster_TypeInfo);
  WarBoardQuestMaster___ctor(v1509, 0LL);
  if ( v1509 )
  {
    v517 = sub_1B64B3C(v1509, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1544;
  v515->m_Items[330] = (DataMasterBase_o *)v1509;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[330], (int32_t)v1509, v1510, v1511);
  v1512 = (WarBoardDataMaster_o *)sub_1B64C4C(WarBoardDataMaster_TypeInfo);
  WarBoardDataMaster___ctor(v1512, 0LL);
  if ( v1512 )
  {
    v517 = sub_1B64B3C(v1512, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1544;
  v515->m_Items[331] = (DataMasterBase_o *)v1512;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[331], (int32_t)v1512, v1513, v1514);
  v1515 = (WarBoardIndividualityClassMaster_o *)sub_1B64C4C(WarBoardIndividualityClassMaster_TypeInfo);
  WarBoardIndividualityClassMaster___ctor(v1515, 0LL);
  if ( v1515 )
  {
    v517 = sub_1B64B3C(v1515, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1544;
  v515->m_Items[332] = (DataMasterBase_o *)v1515;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[332], (int32_t)v1515, v1516, v1517);
  v1518 = (WarBoardActionTrendConditionMaster_o *)sub_1B64C4C(WarBoardActionTrendConditionMaster_TypeInfo);
  WarBoardActionTrendConditionMaster___ctor(v1518, 0LL);
  if ( v1518 )
  {
    v517 = sub_1B64B3C(v1518, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1544;
  v515->m_Items[333] = (DataMasterBase_o *)v1518;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[333], (int32_t)v1518, v1519, v1520);
  v1521 = (WarBoardActionPointClassMaster_o *)sub_1B64C4C(WarBoardActionPointClassMaster_TypeInfo);
  WarBoardActionPointClassMaster___ctor(v1521, 0LL);
  if ( v1521 )
  {
    v517 = sub_1B64B3C(v1521, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1544;
  v515->m_Items[334] = (DataMasterBase_o *)v1521;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[334], (int32_t)v1521, v1522, v1523);
  v1524 = (EventPanelMapMaster_o *)sub_1B64C4C(EventPanelMapMaster_TypeInfo);
  EventPanelMapMaster___ctor(v1524, 0LL);
  if ( v1524 )
  {
    v517 = sub_1B64B3C(v1524, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1544;
  v515->m_Items[335] = (DataMasterBase_o *)v1524;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[335], (int32_t)v1524, v1525, v1526);
  v1527 = (EventPanelMapDetailMaster_o *)sub_1B64C4C(EventPanelMapDetailMaster_TypeInfo);
  EventPanelMapDetailMaster___ctor(v1527, 0LL);
  if ( v1527 )
  {
    v517 = sub_1B64B3C(v1527, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1544;
  v515->m_Items[336] = (DataMasterBase_o *)v1527;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[336], (int32_t)v1527, v1528, v1529);
  v1530 = (EventPanelSpotMaster_o *)sub_1B64C4C(EventPanelSpotMaster_TypeInfo);
  EventPanelSpotMaster___ctor(v1530, 0LL);
  if ( v1530 )
  {
    v517 = sub_1B64B3C(v1530, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1544;
  v515->m_Items[337] = (DataMasterBase_o *)v1530;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[337], (int32_t)v1530, v1531, v1532);
  v1533 = (EventPanelScanMaster_o *)sub_1B64C4C(EventPanelScanMaster_TypeInfo);
  EventPanelScanMaster___ctor(v1533, 0LL);
  if ( v1533 )
  {
    v517 = sub_1B64B3C(v1533, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1544;
  v515->m_Items[338] = (DataMasterBase_o *)v1533;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[338], (int32_t)v1533, v1534, v1535);
  v1536 = (CommonConsumeMaster_o *)sub_1B64C4C(CommonConsumeMaster_TypeInfo);
  CommonConsumeMaster___ctor(v1536, 0LL);
  if ( v1536 )
  {
    v517 = sub_1B64B3C(v1536, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1544;
  v515->m_Items[339] = (DataMasterBase_o *)v1536;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[339], (int32_t)v1536, v1537, v1538);
  v1539 = (UserEventMapMaster_o *)sub_1B64C4C(UserEventMapMaster_TypeInfo);
  UserEventMapMaster___ctor(v1539, 0LL);
  if ( v1539 )
  {
    v517 = sub_1B64B3C(v1539, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1544;
  v515->m_Items[340] = (DataMasterBase_o *)v1539;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[340], (int32_t)v1539, v1540, v1541);
  v1542 = (UserEventSpotMaster_o *)sub_1B64C4C(UserEventSpotMaster_TypeInfo);
  UserEventSpotMaster___ctor(v1542, 0LL);
  if ( v1542 )
  {
    v517 = sub_1B64B3C(v1542, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1544;
  v515->m_Items[341] = (DataMasterBase_o *)v1542;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[341], (int32_t)v1542, v1543, v1544);
  v1545 = (WarGroupMaster_o *)sub_1B64C4C(WarGroupMaster_TypeInfo);
  WarGroupMaster___ctor(v1545, 0LL);
  if ( v1545 )
  {
    v517 = sub_1B64B3C(v1545, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1544;
  v515->m_Items[342] = (DataMasterBase_o *)v1545;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[342], (int32_t)v1545, v1546, v1547);
  v1548 = (ServantLimitImageMaster_o *)sub_1B64C4C(ServantLimitImageMaster_TypeInfo);
  ServantLimitImageMaster___ctor(v1548, 0LL);
  if ( v1548 )
  {
    v517 = sub_1B64B3C(v1548, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1544;
  v515->m_Items[343] = (DataMasterBase_o *)v1548;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[343], (int32_t)v1548, v1549, v1550);
  v1551 = (FriendshipQuestDialogInfoMaster_o *)sub_1B64C4C(FriendshipQuestDialogInfoMaster_TypeInfo);
  FriendshipQuestDialogInfoMaster___ctor(v1551, 0LL);
  if ( v1551 )
  {
    v517 = sub_1B64B3C(v1551, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1544;
  v515->m_Items[344] = (DataMasterBase_o *)v1551;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[344], (int32_t)v1551, v1552, v1553);
  v1554 = (QuestRestrictionInfoMaster_o *)sub_1B64C4C(QuestRestrictionInfoMaster_TypeInfo);
  QuestRestrictionInfoMaster___ctor(v1554, 0LL);
  if ( v1554 )
  {
    v517 = sub_1B64B3C(v1554, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1544;
  v515->m_Items[345] = (DataMasterBase_o *)v1554;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[345], (int32_t)v1554, v1555, v1556);
  v1557 = (AssistMaster_o *)sub_1B64C4C(AssistMaster_TypeInfo);
  AssistMaster___ctor(v1557, 0LL);
  if ( v1557 )
  {
    v517 = sub_1B64B3C(v1557, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1544;
  v515->m_Items[346] = (DataMasterBase_o *)v1557;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[346], (int32_t)v1557, v1558, v1559);
  v1560 = (WarBoardEffectMaster_o *)sub_1B64C4C(WarBoardEffectMaster_TypeInfo);
  WarBoardEffectMaster___ctor(v1560, 0LL);
  if ( v1560 )
  {
    v517 = sub_1B64B3C(v1560, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1544;
  v515->m_Items[347] = (DataMasterBase_o *)v1560;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[347], (int32_t)v1560, v1561, v1562);
  v1563 = (WarBoardOnboardSkillMaster_o *)sub_1B64C4C(WarBoardOnboardSkillMaster_TypeInfo);
  WarBoardOnboardSkillMaster___ctor(v1563, 0LL);
  if ( v1563 )
  {
    v517 = sub_1B64B3C(v1563, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1544;
  v515->m_Items[348] = (DataMasterBase_o *)v1563;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[348], (int32_t)v1563, v1564, v1565);
  v1566 = (BeforeBirthDayMaster_o *)sub_1B64C4C(BeforeBirthDayMaster_TypeInfo);
  BeforeBirthDayMaster___ctor(v1566, 0LL);
  if ( v1566 )
  {
    v517 = sub_1B64B3C(v1566, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1544;
  v515->m_Items[349] = (DataMasterBase_o *)v1566;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[349], (int32_t)v1566, v1567, v1568);
  v1569 = (LoginQuestMaster_o *)sub_1B64C4C(LoginQuestMaster_TypeInfo);
  LoginQuestMaster___ctor(v1569, 0LL);
  if ( v1569 )
  {
    v517 = sub_1B64B3C(v1569, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1544;
  v515->m_Items[350] = (DataMasterBase_o *)v1569;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[350], (int32_t)v1569, v1570, v1571);
  v1572 = (EventCombineCostumeMaster_o *)sub_1B64C4C(EventCombineCostumeMaster_TypeInfo);
  EventCombineCostumeMaster___ctor(v1572, 0LL);
  if ( v1572 )
  {
    v517 = sub_1B64B3C(v1572, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1544;
  v515->m_Items[351] = (DataMasterBase_o *)v1572;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[351], (int32_t)v1572, v1573, v1574);
  v1575 = (WarBoardStagePieceDetailMaster_o *)sub_1B64C4C(WarBoardStagePieceDetailMaster_TypeInfo);
  WarBoardStagePieceDetailMaster___ctor(v1575, 0LL);
  if ( v1575 )
  {
    v517 = sub_1B64B3C(v1575, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1544;
  v515->m_Items[352] = (DataMasterBase_o *)v1575;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[352], (int32_t)v1575, v1576, v1577);
  v1578 = (ServantTreasureDeviceAddMaster_o *)sub_1B64C4C(ServantTreasureDeviceAddMaster_TypeInfo);
  ServantTreasureDeviceAddMaster___ctor(v1578, 0LL);
  if ( v1578 )
  {
    v517 = sub_1B64B3C(v1578, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1544;
  v515->m_Items[353] = (DataMasterBase_o *)v1578;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[353], (int32_t)v1578, v1579, v1580);
  v1581 = (SkillAddMaster_o *)sub_1B64C4C(SkillAddMaster_TypeInfo);
  SkillAddMaster___ctor(v1581, 0LL);
  if ( v1581 )
  {
    v517 = sub_1B64B3C(v1581, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1544;
  v515->m_Items[354] = (DataMasterBase_o *)v1581;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[354], (int32_t)v1581, v1582, v1583);
  v1584 = (ServantLvDetailMaster_o *)sub_1B64C4C(ServantLvDetailMaster_TypeInfo);
  ServantLvDetailMaster___ctor(v1584, 0LL);
  if ( v1584 )
  {
    v517 = sub_1B64B3C(v1584, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1544;
  v515->m_Items[355] = (DataMasterBase_o *)v1584;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[355], (int32_t)v1584, v1585, v1586);
  v1587 = (GachaAppendMaster_o *)sub_1B64C4C(GachaAppendMaster_TypeInfo);
  GachaAppendMaster___ctor(v1587, 0LL);
  if ( v1587 )
  {
    v517 = sub_1B64B3C(v1587, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1544;
  v515->m_Items[356] = (DataMasterBase_o *)v1587;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[356], (int32_t)v1587, v1588, v1589);
  v1590 = (UserGachaDrawLogMaster_o *)sub_1B64C4C(UserGachaDrawLogMaster_TypeInfo);
  UserGachaDrawLogMaster___ctor(v1590, 0LL);
  if ( v1590 )
  {
    v517 = sub_1B64B3C(v1590, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1544;
  v515->m_Items[357] = (DataMasterBase_o *)v1590;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[357], (int32_t)v1590, v1591, v1592);
  v1593 = (ServantAppendPassiveSkillMaster_o *)sub_1B64C4C(ServantAppendPassiveSkillMaster_TypeInfo);
  ServantAppendPassiveSkillMaster___ctor(v1593, 0LL);
  if ( v1593 )
  {
    v517 = sub_1B64B3C(v1593, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1544;
  v515->m_Items[358] = (DataMasterBase_o *)v1593;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[358], (int32_t)v1593, v1594, v1595);
  v1596 = (UserServantAppendPassiveSkillMaster_o *)sub_1B64C4C(UserServantAppendPassiveSkillMaster_TypeInfo);
  UserServantAppendPassiveSkillMaster___ctor(v1596, 0LL);
  if ( v1596 )
  {
    v517 = sub_1B64B3C(v1596, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1544;
  v515->m_Items[359] = (DataMasterBase_o *)v1596;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[359], (int32_t)v1596, v1597, v1598);
  v1599 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1B64C4C(UserServantAppendPassiveSkillLvMaster_TypeInfo);
  UserServantAppendPassiveSkillLvMaster___ctor(v1599, 0LL);
  if ( v1599 )
  {
    v517 = sub_1B64B3C(v1599, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1544;
  v515->m_Items[360] = (DataMasterBase_o *)v1599;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[360], (int32_t)v1599, v1600, v1601);
  v1602 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1B64C4C(SvtAppendPassiveSkillUnlockMaster_TypeInfo);
  SvtAppendPassiveSkillUnlockMaster___ctor(v1602, 0LL);
  if ( v1602 )
  {
    v517 = sub_1B64B3C(v1602, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1544;
  v515->m_Items[361] = (DataMasterBase_o *)v1602;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[361], (int32_t)v1602, v1603, v1604);
  v1605 = (CombineAppendPassiveSkillMaster_o *)sub_1B64C4C(CombineAppendPassiveSkillMaster_TypeInfo);
  CombineAppendPassiveSkillMaster___ctor(v1605, 0LL);
  if ( v1605 )
  {
    v517 = sub_1B64B3C(v1605, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1544;
  v515->m_Items[362] = (DataMasterBase_o *)v1605;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[362], (int32_t)v1605, v1606, v1607);
  v1608 = (SvtCoinMaster_o *)sub_1B64C4C(SvtCoinMaster_TypeInfo);
  SvtCoinMaster___ctor(v1608, 0LL);
  if ( v1608 )
  {
    v517 = sub_1B64B3C(v1608, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1544;
  v515->m_Items[363] = (DataMasterBase_o *)v1608;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[363], (int32_t)v1608, v1609, v1610);
  v1611 = (UserSvtCoinMaster_o *)sub_1B64C4C(UserSvtCoinMaster_TypeInfo);
  UserSvtCoinMaster___ctor(v1611, 0LL);
  if ( v1611 )
  {
    v517 = sub_1B64B3C(v1611, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1544;
  v515->m_Items[364] = (DataMasterBase_o *)v1611;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[364], (int32_t)v1611, v1612, v1613);
  v1614 = (ServantAddMaster_o *)sub_1B64C4C(ServantAddMaster_TypeInfo);
  ServantAddMaster___ctor(v1614, 0LL);
  if ( v1614 )
  {
    v517 = sub_1B64B3C(v1614, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1544;
  v515->m_Items[365] = (DataMasterBase_o *)v1614;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[365], (int32_t)v1614, v1615, v1616);
  v1617 = (TreasureBoxMaster_o *)sub_1B64C4C(TreasureBoxMaster_TypeInfo);
  TreasureBoxMaster___ctor(v1617, 0LL);
  if ( v1617 )
  {
    v517 = sub_1B64B3C(v1617, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1544;
  v515->m_Items[366] = (DataMasterBase_o *)v1617;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[366], (int32_t)v1617, v1618, v1619);
  v1620 = (TreasureBoxGiftMaster_o *)sub_1B64C4C(TreasureBoxGiftMaster_TypeInfo);
  TreasureBoxGiftMaster___ctor(v1620, 0LL);
  if ( v1620 )
  {
    v517 = sub_1B64B3C(v1620, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1544;
  v515->m_Items[367] = (DataMasterBase_o *)v1620;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[367], (int32_t)v1620, v1621, v1622);
  v1623 = (TreasureBoxTalkMaster_o *)sub_1B64C4C(TreasureBoxTalkMaster_TypeInfo);
  TreasureBoxTalkMaster___ctor(v1623, 0LL);
  if ( v1623 )
  {
    v517 = sub_1B64B3C(v1623, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1544;
  v515->m_Items[368] = (DataMasterBase_o *)v1623;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[368], (int32_t)v1623, v1624, v1625);
  v1626 = (UserEventExpeditionMaster_o *)sub_1B64C4C(UserEventExpeditionMaster_TypeInfo);
  UserEventExpeditionMaster___ctor(v1626, 0LL);
  if ( v1626 )
  {
    v517 = sub_1B64B3C(v1626, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1544;
  v515->m_Items[369] = (DataMasterBase_o *)v1626;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[369], (int32_t)v1626, v1627, v1628);
  v1629 = (EventExpeditionMaster_o *)sub_1B64C4C(EventExpeditionMaster_TypeInfo);
  EventExpeditionMaster___ctor(v1629, 0LL);
  if ( v1629 )
  {
    v517 = sub_1B64B3C(v1629, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1544;
  v515->m_Items[370] = (DataMasterBase_o *)v1629;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[370], (int32_t)v1629, v1630, v1631);
  v1632 = (EventExpeditionPieceMaster_o *)sub_1B64C4C(EventExpeditionPieceMaster_TypeInfo);
  EventExpeditionPieceMaster___ctor(v1632, 0LL);
  if ( v1632 )
  {
    v517 = sub_1B64B3C(v1632, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1544;
  v515->m_Items[371] = (DataMasterBase_o *)v1632;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[371], (int32_t)v1632, v1633, v1634);
  v1635 = (EventRecipeMaster_o *)sub_1B64C4C(EventRecipeMaster_TypeInfo);
  EventRecipeMaster___ctor(v1635, 0LL);
  if ( v1635 )
  {
    v517 = sub_1B64B3C(v1635, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1544;
  v515->m_Items[372] = (DataMasterBase_o *)v1635;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[372], (int32_t)v1635, v1636, v1637);
  v1638 = (EventRecipeGiftMaster_o *)sub_1B64C4C(EventRecipeGiftMaster_TypeInfo);
  EventRecipeGiftMaster___ctor(v1638, 0LL);
  if ( v1638 )
  {
    v517 = sub_1B64B3C(v1638, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1544;
  v515->m_Items[373] = (DataMasterBase_o *)v1638;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[373], (int32_t)v1638, v1639, v1640);
  v1641 = (UserEventFortificationMaster_o *)sub_1B64C4C(UserEventFortificationMaster_TypeInfo);
  UserEventFortificationMaster___ctor(v1641, 0LL);
  if ( v1641 )
  {
    v517 = sub_1B64B3C(v1641, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1544;
  v515->m_Items[374] = (DataMasterBase_o *)v1641;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[374], (int32_t)v1641, v1642, v1643);
  v1644 = (EventFortificationMaster_o *)sub_1B64C4C(EventFortificationMaster_TypeInfo);
  EventFortificationMaster___ctor(v1644, 0LL);
  if ( v1644 )
  {
    v517 = sub_1B64B3C(v1644, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1544;
  v515->m_Items[375] = (DataMasterBase_o *)v1644;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[375], (int32_t)v1644, v1645, v1646);
  v1647 = (EventFortificationDetailMaster_o *)sub_1B64C4C(EventFortificationDetailMaster_TypeInfo);
  EventFortificationDetailMaster___ctor(v1647, 0LL);
  if ( v1647 )
  {
    v517 = sub_1B64B3C(v1647, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1544;
  v515->m_Items[376] = (DataMasterBase_o *)v1647;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[376], (int32_t)v1647, v1648, v1649);
  v1650 = (EventFortificationSvtMaster_o *)sub_1B64C4C(EventFortificationSvtMaster_TypeInfo);
  EventFortificationSvtMaster___ctor(v1650, 0LL);
  if ( v1650 )
  {
    v517 = sub_1B64B3C(v1650, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1544;
  v515->m_Items[377] = (DataMasterBase_o *)v1650;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[377], (int32_t)v1650, v1651, v1652);
  v1653 = (UserServantVoicePlayedMaster_o *)sub_1B64C4C(UserServantVoicePlayedMaster_TypeInfo);
  UserServantVoicePlayedMaster___ctor(v1653, 0LL);
  if ( v1653 )
  {
    v517 = sub_1B64B3C(v1653, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1544;
  v515->m_Items[378] = (DataMasterBase_o *)v1653;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[378], (int32_t)v1653, v1654, v1655);
  v1656 = (UpdateProfileDialogInfoMaster_o *)sub_1B64C4C(UpdateProfileDialogInfoMaster_TypeInfo);
  UpdateProfileDialogInfoMaster___ctor(v1656, 0LL);
  if ( v1656 )
  {
    v517 = sub_1B64B3C(v1656, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1544;
  v515->m_Items[379] = (DataMasterBase_o *)v1656;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[379], (int32_t)v1656, v1657, v1658);
  v1659 = (SvtMaterialTdMaster_o *)sub_1B64C4C(SvtMaterialTdMaster_TypeInfo);
  SvtMaterialTdMaster___ctor(v1659, 0LL);
  if ( v1659 )
  {
    v517 = sub_1B64B3C(v1659, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1544;
  v515->m_Items[380] = (DataMasterBase_o *)v1659;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[380], (int32_t)v1659, v1660, v1661);
  v1662 = (BattleMasterImageMaster_o *)sub_1B64C4C(BattleMasterImageMaster_TypeInfo);
  BattleMasterImageMaster___ctor(v1662, 0LL);
  if ( v1662 )
  {
    v517 = sub_1B64B3C(v1662, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1544;
  v515->m_Items[381] = (DataMasterBase_o *)v1662;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[381], (int32_t)v1662, v1663, v1664);
  v1665 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1B64C4C(UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v1665, 0LL);
  if ( v1665 )
  {
    v517 = sub_1B64B3C(v1665, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1544;
  v515->m_Items[382] = (DataMasterBase_o *)v1665;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[382], (int32_t)v1665, v1666, v1667);
  v1668 = (UserEventRandomMissionMaster_o *)sub_1B64C4C(UserEventRandomMissionMaster_TypeInfo);
  UserEventRandomMissionMaster___ctor(v1668, 0LL);
  if ( v1668 )
  {
    v517 = sub_1B64B3C(v1668, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1544;
  v515->m_Items[383] = (DataMasterBase_o *)v1668;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[383], (int32_t)v1668, v1669, v1670);
  v1671 = (EventProgressValueMaster_o *)sub_1B64C4C(EventProgressValueMaster_TypeInfo);
  EventProgressValueMaster___ctor(v1671, 0LL);
  if ( v1671 )
  {
    v517 = sub_1B64B3C(v1671, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1544;
  v515->m_Items[384] = (DataMasterBase_o *)v1671;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[384], (int32_t)v1671, v1672, v1673);
  v1674 = (SvtMultiPortraitMaster_o *)sub_1B64C4C(SvtMultiPortraitMaster_TypeInfo);
  SvtMultiPortraitMaster___ctor(v1674, 0LL);
  if ( v1674 )
  {
    v517 = sub_1B64B3C(v1674, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1544;
  v515->m_Items[385] = (DataMasterBase_o *)v1674;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[385], (int32_t)v1674, v1675, v1676);
  v1677 = (EventRandomMissionMaster_o *)sub_1B64C4C(EventRandomMissionMaster_TypeInfo);
  EventRandomMissionMaster___ctor(v1677, 0LL);
  if ( v1677 )
  {
    v517 = sub_1B64B3C(v1677, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1544;
  v515->m_Items[386] = (DataMasterBase_o *)v1677;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[386], (int32_t)v1677, v1678, v1679);
  v1680 = (UserGachaHistoryMaster_o *)sub_1B64C4C(UserGachaHistoryMaster_TypeInfo);
  UserGachaHistoryMaster___ctor(v1680, 0LL);
  if ( v1680 )
  {
    v517 = sub_1B64B3C(v1680, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1544;
  v515->m_Items[387] = (DataMasterBase_o *)v1680;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[387], (int32_t)v1680, v1681, v1682);
  v1683 = (UserCoinRoomMaster_o *)sub_1B64C4C(UserCoinRoomMaster_TypeInfo);
  UserCoinRoomMaster___ctor(v1683, 0LL);
  if ( v1683 )
  {
    v517 = sub_1B64B3C(v1683, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1544;
  v515->m_Items[388] = (DataMasterBase_o *)v1683;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[388], (int32_t)v1683, v1684, v1685);
  v1686 = (EventBuddyPointMaster_o *)sub_1B64C4C(EventBuddyPointMaster_TypeInfo);
  EventBuddyPointMaster___ctor(v1686, 0LL);
  if ( v1686 )
  {
    v517 = sub_1B64B3C(v1686, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1544;
  v515->m_Items[389] = (DataMasterBase_o *)v1686;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[389], (int32_t)v1686, v1687, v1688);
  v1689 = (EventServantPointRankMaster_o *)sub_1B64C4C(EventServantPointRankMaster_TypeInfo);
  EventServantPointRankMaster___ctor(v1689, 0LL);
  if ( v1689 )
  {
    v517 = sub_1B64B3C(v1689, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1544;
  v515->m_Items[390] = (DataMasterBase_o *)v1689;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[390], (int32_t)v1689, v1690, v1691);
  v1692 = (UserEventServantPointMaster_o *)sub_1B64C4C(UserEventServantPointMaster_TypeInfo);
  UserEventServantPointMaster___ctor(v1692, 0LL);
  if ( v1692 )
  {
    v517 = sub_1B64B3C(v1692, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1544;
  v515->m_Items[391] = (DataMasterBase_o *)v1692;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[391], (int32_t)v1692, v1693, v1694);
  v1695 = (FieldMotionMaster_o *)sub_1B64C4C(FieldMotionMaster_TypeInfo);
  FieldMotionMaster___ctor(v1695, 0LL);
  if ( v1695 )
  {
    v517 = sub_1B64B3C(v1695, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1544;
  v515->m_Items[392] = (DataMasterBase_o *)v1695;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[392], (int32_t)v1695, v1696, v1697);
  v1698 = (UserDeleteReservationMaster_o *)sub_1B64C4C(UserDeleteReservationMaster_TypeInfo);
  UserDeleteReservationMaster___ctor(v1698, 0LL);
  if ( v1698 )
  {
    v517 = sub_1B64B3C(v1698, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1544;
  v515->m_Items[393] = (DataMasterBase_o *)v1698;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[393], (int32_t)v1698, v1699, v1700);
  v1701 = (ServantScriptMultipleMaster_o *)sub_1B64C4C(ServantScriptMultipleMaster_TypeInfo);
  ServantScriptMultipleMaster___ctor(v1701, 0LL);
  if ( v1701 )
  {
    v517 = sub_1B64B3C(v1701, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1544;
  v515->m_Items[394] = (DataMasterBase_o *)v1701;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[394], (int32_t)v1701, v1702, v1703);
  v1704 = (EquipAddMaster_o *)sub_1B64C4C(EquipAddMaster_TypeInfo);
  EquipAddMaster___ctor(v1704, 0LL);
  if ( v1704 )
  {
    v517 = sub_1B64B3C(v1704, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1544;
  v515->m_Items[395] = (DataMasterBase_o *)v1704;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[395], (int32_t)v1704, v1705, v1706);
  v1707 = (QuestReleaseOverwriteMaster_o *)sub_1B64C4C(QuestReleaseOverwriteMaster_TypeInfo);
  QuestReleaseOverwriteMaster___ctor(v1707, 0LL);
  if ( v1707 )
  {
    v517 = sub_1B64B3C(v1707, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1544;
  v515->m_Items[396] = (DataMasterBase_o *)v1707;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[396], (int32_t)v1707, v1708, v1709);
  v1710 = (UserEventAlloutBattleMaster_o *)sub_1B64C4C(UserEventAlloutBattleMaster_TypeInfo);
  UserEventAlloutBattleMaster___ctor(v1710, 0LL);
  if ( v1710 )
  {
    v517 = sub_1B64B3C(v1710, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1544;
  v515->m_Items[397] = (DataMasterBase_o *)v1710;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[397], (int32_t)v1710, v1711, v1712);
  v1713 = (QuestScriptMaterialNextMaster_o *)sub_1B64C4C(QuestScriptMaterialNextMaster_TypeInfo);
  QuestScriptMaterialNextMaster___ctor(v1713, 0LL);
  if ( v1713 )
  {
    v517 = sub_1B64B3C(v1713, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1544;
  v515->m_Items[398] = (DataMasterBase_o *)v1713;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[398], (int32_t)v1713, v1714, v1715);
  v1716 = (EventDiggingMaster_o *)sub_1B64C4C(EventDiggingMaster_TypeInfo);
  EventDiggingMaster___ctor(v1716, 0LL);
  if ( v1716 )
  {
    v517 = sub_1B64B3C(v1716, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1544;
  v515->m_Items[399] = (DataMasterBase_o *)v1716;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[399], (int32_t)v1716, v1717, v1718);
  v1719 = (EventDiggingBlockMaster_o *)sub_1B64C4C(EventDiggingBlockMaster_TypeInfo);
  EventDiggingBlockMaster___ctor(v1719, 0LL);
  if ( v1719 )
  {
    v517 = sub_1B64B3C(v1719, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1544;
  v515->m_Items[400] = (DataMasterBase_o *)v1719;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[400], (int32_t)v1719, v1720, v1721);
  v1722 = (EventDiggingRewardMaster_o *)sub_1B64C4C(EventDiggingRewardMaster_TypeInfo);
  EventDiggingRewardMaster___ctor(v1722, 0LL);
  if ( v1722 )
  {
    v517 = sub_1B64B3C(v1722, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1544;
  v515->m_Items[401] = (DataMasterBase_o *)v1722;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[401], (int32_t)v1722, v1723, v1724);
  v1725 = (UserEventDiggingMaster_o *)sub_1B64C4C(UserEventDiggingMaster_TypeInfo);
  UserEventDiggingMaster___ctor(v1725, 0LL);
  if ( v1725 )
  {
    v517 = sub_1B64B3C(v1725, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1544;
  v515->m_Items[402] = (DataMasterBase_o *)v1725;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[402], (int32_t)v1725, v1726, v1727);
  v1728 = (BattleMessageMaster_o *)sub_1B64C4C(BattleMessageMaster_TypeInfo);
  BattleMessageMaster___ctor(v1728, 0LL);
  if ( v1728 )
  {
    v517 = sub_1B64B3C(v1728, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1544;
  v515->m_Items[403] = (DataMasterBase_o *)v1728;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[403], (int32_t)v1728, v1729, v1730);
  v1731 = (BattleMessageGroupMaster_o *)sub_1B64C4C(BattleMessageGroupMaster_TypeInfo);
  BattleMessageGroupMaster___ctor(v1731, 0LL);
  if ( v1731 )
  {
    v517 = sub_1B64B3C(v1731, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1544;
  v515->m_Items[404] = (DataMasterBase_o *)v1731;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[404], (int32_t)v1731, v1732, v1733);
  v1734 = (UserNpcSvtRecordMaster_o *)sub_1B64C4C(UserNpcSvtRecordMaster_TypeInfo);
  UserNpcSvtRecordMaster___ctor(v1734, 0LL);
  if ( v1734 )
  {
    v517 = sub_1B64B3C(v1734, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1544;
  v515->m_Items[405] = (DataMasterBase_o *)v1734;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[405], (int32_t)v1734, v1735, v1736);
  v1737 = (BuffTypeDetailMaster_o *)sub_1B64C4C(BuffTypeDetailMaster_TypeInfo);
  BuffTypeDetailMaster___ctor(v1737, 0LL);
  if ( v1737 )
  {
    v517 = sub_1B64B3C(v1737, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1544;
  v515->m_Items[406] = (DataMasterBase_o *)v1737;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[406], (int32_t)v1737, v1738, v1739);
  v1740 = (WarBoardMessageMaster_o *)sub_1B64C4C(WarBoardMessageMaster_TypeInfo);
  WarBoardMessageMaster___ctor(v1740, 0LL);
  if ( v1740 )
  {
    v517 = sub_1B64B3C(v1740, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1544;
  v515->m_Items[407] = (DataMasterBase_o *)v1740;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[407], (int32_t)v1740, v1741, v1742);
  v1743 = (WarBoardPartySkillMaster_o *)sub_1B64C4C(WarBoardPartySkillMaster_TypeInfo);
  WarBoardPartySkillMaster___ctor(v1743, 0LL);
  if ( v1743 )
  {
    v517 = sub_1B64B3C(v1743, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1544;
  v515->m_Items[408] = (DataMasterBase_o *)v1743;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[408], (int32_t)v1743, v1744, v1745);
  v1746 = (WarBoardMessageScriptMaster_o *)sub_1B64C4C(WarBoardMessageScriptMaster_TypeInfo);
  WarBoardMessageScriptMaster___ctor(v1746, 0LL);
  if ( v1746 )
  {
    v517 = sub_1B64B3C(v1746, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1544;
  v515->m_Items[409] = (DataMasterBase_o *)v1746;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[409], (int32_t)v1746, v1747, v1748);
  v1749 = (WarQuestSelectionMaster_o *)sub_1B64C4C(WarQuestSelectionMaster_TypeInfo);
  WarQuestSelectionMaster___ctor(v1749, 0LL);
  if ( v1749 )
  {
    v517 = sub_1B64B3C(v1749, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1544;
  v515->m_Items[410] = (DataMasterBase_o *)v1749;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[410], (int32_t)v1749, v1750, v1751);
  v1752 = (WarBoardStageDetailMaster_o *)sub_1B64C4C(WarBoardStageDetailMaster_TypeInfo);
  WarBoardStageDetailMaster___ctor(v1752, 0LL);
  if ( v1752 )
  {
    v517 = sub_1B64B3C(v1752, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1544;
  v515->m_Items[411] = (DataMasterBase_o *)v1752;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[411], (int32_t)v1752, v1753, v1754);
  v1755 = (QuestScriptMaterialOverwriteMaster_o *)sub_1B64C4C(QuestScriptMaterialOverwriteMaster_TypeInfo);
  QuestScriptMaterialOverwriteMaster___ctor(v1755, 0LL);
  if ( v1755 )
  {
    v517 = sub_1B64B3C(v1755, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1544;
  v515->m_Items[412] = (DataMasterBase_o *)v1755;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[412], (int32_t)v1755, v1756, v1757);
  v1758 = (QuestScriptBranchMaterialMaster_o *)sub_1B64C4C(QuestScriptBranchMaterialMaster_TypeInfo);
  QuestScriptBranchMaterialMaster___ctor(v1758, 0LL);
  if ( v1758 )
  {
    v517 = sub_1B64B3C(v1758, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1544;
  v515->m_Items[413] = (DataMasterBase_o *)v1758;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[413], (int32_t)v1758, v1759, v1760);
  v1761 = (AdCheckPointMaster_o *)sub_1B64C4C(AdCheckPointMaster_TypeInfo);
  AdCheckPointMaster___ctor(v1761, 0LL);
  if ( v1761 )
  {
    v517 = sub_1B64B3C(v1761, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1544;
  v515->m_Items[414] = (DataMasterBase_o *)v1761;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[414], (int32_t)v1761, v1762, v1763);
  v1764 = (GiftDetailMaster_o *)sub_1B64C4C(GiftDetailMaster_TypeInfo);
  GiftDetailMaster___ctor(v1764, 0LL);
  if ( v1764 )
  {
    v517 = sub_1B64B3C(v1764, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1544;
  v515->m_Items[415] = (DataMasterBase_o *)v1764;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[415], (int32_t)v1764, v1765, v1766);
  v1767 = (CombineLimitGiftMaster_o *)sub_1B64C4C(CombineLimitGiftMaster_TypeInfo);
  CombineLimitGiftMaster___ctor(v1767, 0LL);
  if ( v1767 )
  {
    v517 = sub_1B64B3C(v1767, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1544;
  v515->m_Items[416] = (DataMasterBase_o *)v1767;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[416], (int32_t)v1767, v1768, v1769);
  v1770 = (EventCooltimeRewardMaster_o *)sub_1B64C4C(EventCooltimeRewardMaster_TypeInfo);
  EventCooltimeRewardMaster___ctor(v1770, 0LL);
  if ( v1770 )
  {
    v517 = sub_1B64B3C(v1770, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1544;
  v515->m_Items[417] = (DataMasterBase_o *)v1770;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[417], (int32_t)v1770, v1771, v1772);
  v1773 = (UserEventCooltimeRewardMaster_o *)sub_1B64C4C(UserEventCooltimeRewardMaster_TypeInfo);
  UserEventCooltimeRewardMaster___ctor(v1773, 0LL);
  if ( v1773 )
  {
    v517 = sub_1B64B3C(v1773, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1544;
  v515->m_Items[418] = (DataMasterBase_o *)v1773;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[418], (int32_t)v1773, v1774, v1775);
  v1776 = (ClassBoardBaseMaster_o *)sub_1B64C4C(ClassBoardBaseMaster_TypeInfo);
  ClassBoardBaseMaster___ctor(v1776, 0LL);
  if ( v1776 )
  {
    v517 = sub_1B64B3C(v1776, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1544;
  v515->m_Items[419] = (DataMasterBase_o *)v1776;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[419], (int32_t)v1776, v1777, v1778);
  v1779 = (ClassBoardLockMaster_o *)sub_1B64C4C(ClassBoardLockMaster_TypeInfo);
  ClassBoardLockMaster___ctor(v1779, 0LL);
  if ( v1779 )
  {
    v517 = sub_1B64B3C(v1779, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1544;
  v515->m_Items[420] = (DataMasterBase_o *)v1779;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[420], (int32_t)v1779, v1780, v1781);
  v1782 = (ClassBoardSquareMaster_o *)sub_1B64C4C(ClassBoardSquareMaster_TypeInfo);
  ClassBoardSquareMaster___ctor(v1782, 0LL);
  if ( v1782 )
  {
    v517 = sub_1B64B3C(v1782, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1544;
  v515->m_Items[421] = (DataMasterBase_o *)v1782;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[421], (int32_t)v1782, v1783, v1784);
  v1785 = (ClassBoardLineMaster_o *)sub_1B64C4C(ClassBoardLineMaster_TypeInfo);
  ClassBoardLineMaster___ctor(v1785, 0LL);
  if ( v1785 )
  {
    v517 = sub_1B64B3C(v1785, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1544;
  v515->m_Items[422] = (DataMasterBase_o *)v1785;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[422], (int32_t)v1785, v1786, v1787);
  v1788 = (UserClassBoardSquareMaster_o *)sub_1B64C4C(UserClassBoardSquareMaster_TypeInfo);
  UserClassBoardSquareMaster___ctor(v1788, 0LL);
  if ( v1788 )
  {
    v517 = sub_1B64B3C(v1788, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1544;
  v515->m_Items[423] = (DataMasterBase_o *)v1788;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[423], (int32_t)v1788, v1789, v1790);
  v1791 = (ServantCardAddMaster_o *)sub_1B64C4C(ServantCardAddMaster_TypeInfo);
  ServantCardAddMaster___ctor(v1791, 0LL);
  if ( v1791 )
  {
    v517 = sub_1B64B3C(v1791, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1544;
  v515->m_Items[424] = (DataMasterBase_o *)v1791;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[424], (int32_t)v1791, v1792, v1793);
  v1794 = (MapLayerMaster_o *)sub_1B64C4C(MapLayerMaster_TypeInfo);
  MapLayerMaster___ctor(v1794, 0LL);
  if ( v1794 )
  {
    v517 = sub_1B64B3C(v1794, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1544;
  v515->m_Items[425] = (DataMasterBase_o *)v1794;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[425], (int32_t)v1794, v1795, v1796);
  v1797 = (SpotLayerMaster_o *)sub_1B64C4C(SpotLayerMaster_TypeInfo);
  SpotLayerMaster___ctor(v1797, 0LL);
  if ( v1797 )
  {
    v517 = sub_1B64B3C(v1797, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1544;
  v515->m_Items[426] = (DataMasterBase_o *)v1797;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[426], (int32_t)v1797, v1798, v1799);
  v1800 = (MapGimmickLayerMaster_o *)sub_1B64C4C(MapGimmickLayerMaster_TypeInfo);
  MapGimmickLayerMaster___ctor(v1800, 0LL);
  if ( v1800 )
  {
    v517 = sub_1B64B3C(v1800, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1544;
  v515->m_Items[427] = (DataMasterBase_o *)v1800;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[427], (int32_t)v1800, v1801, v1802);
  v1803 = (EventDataLostBattleMaster_o *)sub_1B64C4C(EventDataLostBattleMaster_TypeInfo);
  EventDataLostBattleMaster___ctor(v1803, 0LL);
  if ( v1803 )
  {
    v517 = sub_1B64B3C(v1803, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1544;
  v515->m_Items[428] = (DataMasterBase_o *)v1803;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[428], (int32_t)v1803, v1804, v1805);
  v1806 = (EventDataLostBattleResetMaster_o *)sub_1B64C4C(EventDataLostBattleResetMaster_TypeInfo);
  EventDataLostBattleResetMaster___ctor(v1806, 0LL);
  if ( v1806 )
  {
    v517 = sub_1B64B3C(v1806, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1544;
  v515->m_Items[429] = (DataMasterBase_o *)v1806;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[429], (int32_t)v1806, v1807, v1808);
  v1809 = (UserEventDataLostMaster_o *)sub_1B64C4C(UserEventDataLostMaster_TypeInfo);
  UserEventDataLostMaster___ctor(v1809, 0LL);
  if ( v1809 )
  {
    v517 = sub_1B64B3C(v1809, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1544;
  v515->m_Items[430] = (DataMasterBase_o *)v1809;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[430], (int32_t)v1809, v1810, v1811);
  v1812 = (QuestHintMaster_o *)sub_1B64C4C(QuestHintMaster_TypeInfo);
  QuestHintMaster___ctor(v1812, 0LL);
  if ( v1812 )
  {
    v517 = sub_1B64B3C(v1812, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1544;
  v515->m_Items[431] = (DataMasterBase_o *)v1812;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[431], (int32_t)v1812, v1813, v1814);
  v1815 = (FuncTypeDetailMaster_o *)sub_1B64C4C(FuncTypeDetailMaster_TypeInfo);
  FuncTypeDetailMaster___ctor(v1815, 0LL);
  if ( v1815 )
  {
    v517 = sub_1B64B3C(v1815, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1544;
  v515->m_Items[432] = (DataMasterBase_o *)v1815;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[432], (int32_t)v1815, v1816, v1817);
  v1818 = (BuffConvertMaster_o *)sub_1B64C4C(BuffConvertMaster_TypeInfo);
  BuffConvertMaster___ctor(v1818, 0LL);
  if ( v1818 )
  {
    v517 = sub_1B64B3C(v1818, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1544;
  v515->m_Items[433] = (DataMasterBase_o *)v1818;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[433], (int32_t)v1818, v1819, v1820);
  v1821 = (SkillGroupMaster_o *)sub_1B64C4C(SkillGroupMaster_TypeInfo);
  SkillGroupMaster___ctor(v1821, 0LL);
  if ( v1821 )
  {
    v517 = sub_1B64B3C(v1821, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1544;
  v515->m_Items[434] = (DataMasterBase_o *)v1821;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[434], (int32_t)v1821, v1822, v1823);
  v1824 = (SkillGroupOverwriteMaster_o *)sub_1B64C4C(SkillGroupOverwriteMaster_TypeInfo);
  SkillGroupOverwriteMaster___ctor(v1824, 0LL);
  if ( v1824 )
  {
    v517 = sub_1B64B3C(v1824, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1544;
  v515->m_Items[435] = (DataMasterBase_o *)v1824;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[435], (int32_t)v1824, v1825, v1826);
  v1827 = (SkillIndividualityMaster_o *)sub_1B64C4C(SkillIndividualityMaster_TypeInfo);
  SkillIndividualityMaster___ctor(v1827, 0LL);
  if ( v1827 )
  {
    v517 = sub_1B64B3C(v1827, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1544;
  v515->m_Items[436] = (DataMasterBase_o *)v1827;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[436], (int32_t)v1827, v1828, v1829);
  v1830 = (RestrictionBaseMaster_o *)sub_1B64C4C(RestrictionBaseMaster_TypeInfo);
  RestrictionBaseMaster___ctor(v1830, 0LL);
  if ( v1830 )
  {
    v517 = sub_1B64B3C(v1830, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1544;
  v515->m_Items[437] = (DataMasterBase_o *)v1830;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[437], (int32_t)v1830, v1831, v1832);
  v1833 = (RestrictionSlotMaster_o *)sub_1B64C4C(RestrictionSlotMaster_TypeInfo);
  RestrictionSlotMaster___ctor(v1833, 0LL);
  if ( v1833 )
  {
    v517 = sub_1B64B3C(v1833, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1544;
  v515->m_Items[438] = (DataMasterBase_o *)v1833;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[438], (int32_t)v1833, v1834, v1835);
  v1836 = (RestrictionSlotDetailMaster_o *)sub_1B64C4C(RestrictionSlotDetailMaster_TypeInfo);
  RestrictionSlotDetailMaster___ctor(v1836, 0LL);
  if ( v1836 )
  {
    v517 = sub_1B64B3C(v1836, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1544;
  v515->m_Items[439] = (DataMasterBase_o *)v1836;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[439], (int32_t)v1836, v1837, v1838);
  v1839 = (RestrictionMessageMaster_o *)sub_1B64C4C(RestrictionMessageMaster_TypeInfo);
  RestrictionMessageMaster___ctor(v1839, 0LL);
  if ( v1839 )
  {
    v517 = sub_1B64B3C(v1839, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1544;
  v515->m_Items[440] = (DataMasterBase_o *)v1839;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[440], (int32_t)v1839, v1840, v1841);
  v1842 = (RestrictionWholeMaster_o *)sub_1B64C4C(RestrictionWholeMaster_TypeInfo);
  RestrictionWholeMaster___ctor(v1842, 0LL);
  if ( v1842 )
  {
    v517 = sub_1B64B3C(v1842, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1544;
  v515->m_Items[441] = (DataMasterBase_o *)v1842;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[441], (int32_t)v1842, v1843, v1844);
  v1845 = (FuncDispMaster_o *)sub_1B64C4C(FuncDispMaster_TypeInfo);
  FuncDispMaster___ctor(v1845, 0LL);
  if ( v1845 )
  {
    v517 = sub_1B64B3C(v1845, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1544;
  v515->m_Items[442] = (DataMasterBase_o *)v1845;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[442], (int32_t)v1845, v1846, v1847);
  v1848 = (ClassBoardCommandSpellMaster_o *)sub_1B64C4C(ClassBoardCommandSpellMaster_TypeInfo);
  ClassBoardCommandSpellMaster___ctor(v1848, 0LL);
  if ( v1848 )
  {
    v517 = sub_1B64B3C(v1848, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1544;
  v515->m_Items[443] = (DataMasterBase_o *)v1848;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[443], (int32_t)v1848, v1849, v1850);
  v1851 = (ClassBoardClassMaster_o *)sub_1B64C4C(ClassBoardClassMaster_TypeInfo);
  ClassBoardClassMaster___ctor(v1851, 0LL);
  if ( v1851 )
  {
    v517 = sub_1B64B3C(v1851, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1544;
  v515->m_Items[444] = (DataMasterBase_o *)v1851;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[444], (int32_t)v1851, v1852, v1853);
  v1854 = (EventCommandAssistMaster_o *)sub_1B64C4C(EventCommandAssistMaster_TypeInfo);
  EventCommandAssistMaster___ctor(v1854, 0LL);
  if ( v1854 )
  {
    v517 = sub_1B64B3C(v1854, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1544;
  v515->m_Items[445] = (DataMasterBase_o *)v1854;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[445], (int32_t)v1854, v1855, v1856);
  v1857 = (EventMissionGroupMaster_o *)sub_1B64C4C(EventMissionGroupMaster_TypeInfo);
  EventMissionGroupMaster___ctor(v1857, 0LL);
  if ( v1857 )
  {
    v517 = sub_1B64B3C(v1857, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1544;
  v515->m_Items[446] = (DataMasterBase_o *)v1857;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[446], (int32_t)v1857, v1858, v1859);
  v1860 = (CombineLimitReleaseMaster_o *)sub_1B64C4C(CombineLimitReleaseMaster_TypeInfo);
  CombineLimitReleaseMaster___ctor(v1860, 0LL);
  if ( v1860 )
  {
    v517 = sub_1B64B3C(v1860, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1544;
  v515->m_Items[447] = (DataMasterBase_o *)v1860;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[447], (int32_t)v1860, v1861, v1862);
  v1863 = (HeelPortraitMaster_o *)sub_1B64C4C(HeelPortraitMaster_TypeInfo);
  HeelPortraitMaster___ctor(v1863, 0LL);
  if ( v1863 )
  {
    v517 = sub_1B64B3C(v1863, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1544;
  v515->m_Items[448] = (DataMasterBase_o *)v1863;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[448], (int32_t)v1863, v1864, v1865);
  v1866 = (UserHeelPortraitMaster_o *)sub_1B64C4C(UserHeelPortraitMaster_TypeInfo);
  UserHeelPortraitMaster___ctor(v1866, 0LL);
  if ( v1866 )
  {
    v517 = sub_1B64B3C(v1866, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1544;
  v515->m_Items[449] = (DataMasterBase_o *)v1866;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[449], (int32_t)v1866, v1867, v1868);
  v1869 = (TreasureDeviceSequenceWeightMaster_o *)sub_1B64C4C(TreasureDeviceSequenceWeightMaster_TypeInfo);
  TreasureDeviceSequenceWeightMaster___ctor(v1869, 0LL);
  if ( v1869 )
  {
    v517 = sub_1B64B3C(v1869, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1544;
  v515->m_Items[450] = (DataMasterBase_o *)v1869;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[450], (int32_t)v1869, v1870, v1871);
  v1872 = (NpcServantFollowerIndividualityMaster_o *)sub_1B64C4C(NpcServantFollowerIndividualityMaster_TypeInfo);
  NpcServantFollowerIndividualityMaster___ctor(v1872, 0LL);
  if ( v1872 )
  {
    v517 = sub_1B64B3C(v1872, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1544;
  v515->m_Items[451] = (DataMasterBase_o *)v1872;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[451], (int32_t)v1872, v1873, v1874);
  v1875 = (GachaExtraGiftMaster_o *)sub_1B64C4C(GachaExtraGiftMaster_TypeInfo);
  GachaExtraGiftMaster___ctor(v1875, 0LL);
  if ( v1875 )
  {
    v517 = sub_1B64B3C(v1875, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1544;
  v515->m_Items[452] = (DataMasterBase_o *)v1875;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[452], (int32_t)v1875, v1876, v1877);
  v1878 = (EventMuralMaster_o *)sub_1B64C4C(EventMuralMaster_TypeInfo);
  EventMuralMaster___ctor(v1878, 0LL);
  if ( v1878 )
  {
    v517 = sub_1B64B3C(v1878, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1544;
  v515->m_Items[453] = (DataMasterBase_o *)v1878;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[453], (int32_t)v1878, v1879, v1880);
  v1881 = (ViewWaveEnemyMaster_o *)sub_1B64C4C(ViewWaveEnemyMaster_TypeInfo);
  ViewWaveEnemyMaster___ctor(v1881, 0LL);
  if ( v1881 )
  {
    v517 = sub_1B64B3C(v1881, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1544;
  v515->m_Items[454] = (DataMasterBase_o *)v1881;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[454], (int32_t)v1881, v1882, v1883);
  v1884 = (BlankEarthSpotNavimenuMaster_o *)sub_1B64C4C(BlankEarthSpotNavimenuMaster_TypeInfo);
  BlankEarthSpotNavimenuMaster___ctor(v1884, 0LL);
  if ( v1884 )
  {
    v517 = sub_1B64B3C(v1884, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1544;
  v515->m_Items[455] = (DataMasterBase_o *)v1884;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[455], (int32_t)v1884, v1885, v1886);
  v1887 = (BlankEarthGimmickMaster_o *)sub_1B64C4C(BlankEarthGimmickMaster_TypeInfo);
  BlankEarthGimmickMaster___ctor(v1887, 0LL);
  if ( v1887 )
  {
    v517 = sub_1B64B3C(v1887, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1544;
  v515->m_Items[456] = (DataMasterBase_o *)v1887;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[456], (int32_t)v1887, v1888, v1889);
  v1890 = (TerminalOverwriteMaster_o *)sub_1B64C4C(TerminalOverwriteMaster_TypeInfo);
  TerminalOverwriteMaster___ctor(v1890, 0LL);
  if ( v1890 )
  {
    v517 = sub_1B64B3C(v1890, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1544;
  v515->m_Items[457] = (DataMasterBase_o *)v1890;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[457], (int32_t)v1890, v1891, v1892);
  v1893 = (UserExchangeSvtMaster_o *)sub_1B64C4C(UserExchangeSvtMaster_TypeInfo);
  UserExchangeSvtMaster___ctor(v1893, 0LL);
  if ( v1893 )
  {
    v517 = sub_1B64B3C(v1893, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1544;
  v515->m_Items[458] = (DataMasterBase_o *)v1893;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[458], (int32_t)v1893, v1894, v1895);
  v1896 = (WarBoardCommonReleaseMaster_o *)sub_1B64C4C(WarBoardCommonReleaseMaster_TypeInfo);
  WarBoardCommonReleaseMaster___ctor(v1896, 0LL);
  if ( v1896 )
  {
    v517 = sub_1B64B3C(v1896, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1544;
  v515->m_Items[459] = (DataMasterBase_o *)v1896;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[459], (int32_t)v1896, v1897, v1898);
  v1899 = (WarBoardEventMaster_o *)sub_1B64C4C(WarBoardEventMaster_TypeInfo);
  WarBoardEventMaster___ctor(v1899, 0LL);
  if ( v1899 )
  {
    v517 = sub_1B64B3C(v1899, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1544;
  v515->m_Items[460] = (DataMasterBase_o *)v1899;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[460], (int32_t)v1899, v1900, v1901);
  v1902 = (WarBoardEventScriptMaster_o *)sub_1B64C4C(WarBoardEventScriptMaster_TypeInfo);
  WarBoardEventScriptMaster___ctor(v1902, 0LL);
  if ( v1902 )
  {
    v517 = sub_1B64B3C(v1902, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1544;
  v515->m_Items[461] = (DataMasterBase_o *)v1902;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[461], (int32_t)v1902, v1903, v1904);
  v1905 = (WarBoardStageBossMaster_o *)sub_1B64C4C(WarBoardStageBossMaster_TypeInfo);
  WarBoardStageBossMaster___ctor(v1905, 0LL);
  if ( v1905 )
  {
    v517 = sub_1B64B3C(v1905, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1544;
  v515->m_Items[462] = (DataMasterBase_o *)v1905;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[462], (int32_t)v1905, v1906, v1907);
  v1908 = (WarBoardSquareIndexGroupMaster_o *)sub_1B64C4C(WarBoardSquareIndexGroupMaster_TypeInfo);
  WarBoardSquareIndexGroupMaster___ctor(v1908, 0LL);
  if ( v1908 )
  {
    v517 = sub_1B64B3C(v1908, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1544;
  v515->m_Items[463] = (DataMasterBase_o *)v1908;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[463], (int32_t)v1908, v1909, v1910);
  v1911 = (WarBoardActionTrendGroupMaster_o *)sub_1B64C4C(WarBoardActionTrendGroupMaster_TypeInfo);
  WarBoardActionTrendGroupMaster___ctor(v1911, 0LL);
  if ( v1911 )
  {
    v517 = sub_1B64B3C(v1911, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1544;
  v515->m_Items[464] = (DataMasterBase_o *)v1911;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[464], (int32_t)v1911, v1912, v1913);
  v1914 = (WarBoardRatingOffsetGroupMaster_o *)sub_1B64C4C(WarBoardRatingOffsetGroupMaster_TypeInfo);
  WarBoardRatingOffsetGroupMaster___ctor(v1914, 0LL);
  if ( v1914 )
  {
    v517 = sub_1B64B3C(v1914, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1544;
  v515->m_Items[465] = (DataMasterBase_o *)v1914;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[465], (int32_t)v1914, v1915, v1916);
  v1917 = (WarBoardReinforcementsMaster_o *)sub_1B64C4C(WarBoardReinforcementsMaster_TypeInfo);
  WarBoardReinforcementsMaster___ctor(v1917, 0LL);
  if ( v1917 )
  {
    v517 = sub_1B64B3C(v1917, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1544;
  v515->m_Items[466] = (DataMasterBase_o *)v1917;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[466], (int32_t)v1917, v1918, v1919);
  v1920 = (WarBoardStageReinforcementsMaster_o *)sub_1B64C4C(WarBoardStageReinforcementsMaster_TypeInfo);
  WarBoardStageReinforcementsMaster___ctor(v1920, 0LL);
  if ( v1920 )
  {
    v517 = sub_1B64B3C(v1920, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1544;
  v515->m_Items[467] = (DataMasterBase_o *)v1920;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[467], (int32_t)v1920, v1921, v1922);
  v1923 = (WarBoardFutureActionTrendMaster_o *)sub_1B64C4C(WarBoardFutureActionTrendMaster_TypeInfo);
  WarBoardFutureActionTrendMaster___ctor(v1923, 0LL);
  if ( v1923 )
  {
    v517 = sub_1B64B3C(v1923, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1544;
  v515->m_Items[468] = (DataMasterBase_o *)v1923;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[468], (int32_t)v1923, v1924, v1925);
  v1926 = (ServantProfilePushMaster_o *)sub_1B64C4C(ServantProfilePushMaster_TypeInfo);
  ServantProfilePushMaster___ctor(v1926, 0LL);
  if ( v1926 )
  {
    v517 = sub_1B64B3C(v1926, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1544;
  v515->m_Items[469] = (DataMasterBase_o *)v1926;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[469], (int32_t)v1926, v1927, v1928);
  v1929 = (MapGimmickPathMaster_o *)sub_1B64C4C(MapGimmickPathMaster_TypeInfo);
  MapGimmickPathMaster___ctor(v1929, 0LL);
  if ( v1929 )
  {
    v517 = sub_1B64B3C(v1929, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1544;
  v515->m_Items[470] = (DataMasterBase_o *)v1929;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[470], (int32_t)v1929, v1930, v1931);
  v1932 = (MapGimmickPathReleaseMaster_o *)sub_1B64C4C(MapGimmickPathReleaseMaster_TypeInfo);
  MapGimmickPathReleaseMaster___ctor(v1932, 0LL);
  if ( v1932 )
  {
    v517 = sub_1B64B3C(v1932, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1544;
  v515->m_Items[471] = (DataMasterBase_o *)v1932;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[471], (int32_t)v1932, v1933, v1934);
  v1935 = (ServantOverwriteMaster_o *)sub_1B64C4C(ServantOverwriteMaster_TypeInfo);
  ServantOverwriteMaster___ctor(v1935, 0LL);
  if ( v1935 )
  {
    v517 = sub_1B64B3C(v1935, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1544;
  v515->m_Items[472] = (DataMasterBase_o *)v1935;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[472], (int32_t)v1935, v1936, v1937);
  v1938 = (IndividualityPolicyMaster_o *)sub_1B64C4C(IndividualityPolicyMaster_TypeInfo);
  IndividualityPolicyMaster___ctor(v1938, 0LL);
  if ( v1938 )
  {
    v517 = sub_1B64B3C(v1938, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1544;
  v515->m_Items[473] = (DataMasterBase_o *)v1938;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[473], (int32_t)v1938, v1939, v1940);
  v1941 = (IndividualityPersonalityMaster_o *)sub_1B64C4C(IndividualityPersonalityMaster_TypeInfo);
  IndividualityPersonalityMaster___ctor(v1941, 0LL);
  if ( v1941 )
  {
    v517 = sub_1B64B3C(v1941, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1544;
  v515->m_Items[474] = (DataMasterBase_o *)v1941;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[474], (int32_t)v1941, v1942, v1943);
  v1944 = (AttriMaster_o *)sub_1B64C4C(AttriMaster_TypeInfo);
  AttriMaster___ctor(v1944, 0LL);
  if ( v1944 )
  {
    v517 = sub_1B64B3C(v1944, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1544;
  v515->m_Items[475] = (DataMasterBase_o *)v1944;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[475], (int32_t)v1944, v1945, v1946);
  v1947 = (ServantVoicePatternMaster_o *)sub_1B64C4C(ServantVoicePatternMaster_TypeInfo);
  ServantVoicePatternMaster___ctor(v1947, 0LL);
  if ( v1947 )
  {
    v517 = sub_1B64B3C(v1947, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1544;
  v515->m_Items[476] = (DataMasterBase_o *)v1947;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[476], (int32_t)v1947, v1948, v1949);
  v1950 = (UserGameCommonMaster_o *)sub_1B64C4C(UserGameCommonMaster_TypeInfo);
  UserGameCommonMaster___ctor(v1950, 0LL);
  if ( v1950 )
  {
    v517 = sub_1B64B3C(v1950, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1544;
  v515->m_Items[477] = (DataMasterBase_o *)v1950;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[477], (int32_t)v1950, v1951, v1952);
  v1953 = (ServantPhotoMaster_o *)sub_1B64C4C(ServantPhotoMaster_TypeInfo);
  ServantPhotoMaster___ctor(v1953, 0LL);
  if ( v1953 )
  {
    v517 = sub_1B64B3C(v1953, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1544;
  v515->m_Items[478] = (DataMasterBase_o *)v1953;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[478], (int32_t)v1953, v1954, v1955);
  v1956 = (MasterPhotoMaster_o *)sub_1B64C4C(MasterPhotoMaster_TypeInfo);
  MasterPhotoMaster___ctor(v1956, 0LL);
  if ( v1956 )
  {
    v517 = sub_1B64B3C(v1956, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1544;
  v515->m_Items[479] = (DataMasterBase_o *)v1956;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[479], (int32_t)v1956, v1957, v1958);
  v1959 = (WarMessageMaster_o *)sub_1B64C4C(WarMessageMaster_TypeInfo);
  WarMessageMaster___ctor(v1959, 0LL);
  if ( v1959 )
  {
    v517 = sub_1B64B3C(v1959, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1544;
  v515->m_Items[480] = (DataMasterBase_o *)v1959;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[480], (int32_t)v1959, v1960, v1961);
  v1962 = (QuestAutoOrganizationAdjustMaster_o *)sub_1B64C4C(QuestAutoOrganizationAdjustMaster_TypeInfo);
  QuestAutoOrganizationAdjustMaster___ctor(v1962, 0LL);
  if ( v1962 )
  {
    v517 = sub_1B64B3C(v1962, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1544;
  v515->m_Items[481] = (DataMasterBase_o *)v1962;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[481], (int32_t)v1962, v1963, v1964);
  v1965 = (ExcludeMotionMaster_o *)sub_1B64C4C(ExcludeMotionMaster_TypeInfo);
  ExcludeMotionMaster___ctor(v1965, 0LL);
  if ( v1965 )
  {
    v517 = sub_1B64B3C(v1965, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1544;
  v515->m_Items[482] = (DataMasterBase_o *)v1965;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[482], (int32_t)v1965, v1966, v1967);
  v1968 = (UserInterruptionQuestMaster_o *)sub_1B64C4C(UserInterruptionQuestMaster_TypeInfo);
  UserInterruptionQuestMaster___ctor(v1968, 0LL);
  if ( v1968 )
  {
    v517 = sub_1B64B3C(v1968, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1544;
  v515->m_Items[483] = (DataMasterBase_o *)v1968;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[483], (int32_t)v1968, v1969, v1970);
  v1971 = (ServantTransformMaster_o *)sub_1B64C4C(ServantTransformMaster_TypeInfo);
  ServantTransformMaster___ctor(v1971, 0LL);
  if ( v1971 )
  {
    v517 = sub_1B64B3C(v1971, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1544;
  v515->m_Items[484] = (DataMasterBase_o *)v1971;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[484], (int32_t)v1971, v1972, v1973);
  v1974 = (MapUpdateScheduleMaster_o *)sub_1B64C4C(MapUpdateScheduleMaster_TypeInfo);
  MapUpdateScheduleMaster___ctor(v1974, 0LL);
  if ( v1974 )
  {
    v517 = sub_1B64B3C(v1974, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1544;
  v515->m_Items[485] = (DataMasterBase_o *)v1974;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[485], (int32_t)v1974, v1975, v1976);
  v1977 = (QuestPhasePresentMaster_o *)sub_1B64C4C(QuestPhasePresentMaster_TypeInfo);
  QuestPhasePresentMaster___ctor(v1977, 0LL);
  if ( v1977 )
  {
    v517 = sub_1B64B3C(v1977, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1544;
  v515->m_Items[486] = (DataMasterBase_o *)v1977;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[486], (int32_t)v1977, v1978, v1979);
  v1980 = (UserAccountLinkageMaster_o *)sub_1B64C4C(UserAccountLinkageMaster_TypeInfo);
  UserAccountLinkageMaster___ctor(v1980, 0LL);
  if ( v1980 )
  {
    v517 = sub_1B64B3C(v1980, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1544;
  v515->m_Items[487] = (DataMasterBase_o *)v1980;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[487], (int32_t)v1980, v1981, v1982);
  v1983 = (MissionNaviTransitionMaster_o *)sub_1B64C4C(MissionNaviTransitionMaster_TypeInfo);
  MissionNaviTransitionMaster___ctor(v1983, 0LL);
  if ( v1983 )
  {
    v517 = sub_1B64B3C(v1983, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1544;
  v515->m_Items[488] = (DataMasterBase_o *)v1983;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[488], (int32_t)v1983, v1984, v1985);
  v1986 = (MissionNaviQuestMaster_o *)sub_1B64C4C(MissionNaviQuestMaster_TypeInfo);
  MissionNaviQuestMaster___ctor(v1986, 0LL);
  if ( v1986 )
  {
    v517 = sub_1B64B3C(v1986, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1544;
  v515->m_Items[489] = (DataMasterBase_o *)v1986;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[489], (int32_t)v1986, v1987, v1988);
  v1989 = (EventTradeGoodsMaster_o *)sub_1B64C4C(EventTradeGoodsMaster_TypeInfo);
  EventTradeGoodsMaster___ctor(v1989, 0LL);
  if ( v1989 )
  {
    v517 = sub_1B64B3C(v1989, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1544;
  v515->m_Items[490] = (DataMasterBase_o *)v1989;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[490], (int32_t)v1989, v1990, v1991);
  v1992 = (EventTradeStoreMaster_o *)sub_1B64C4C(EventTradeStoreMaster_TypeInfo);
  EventTradeStoreMaster___ctor(v1992, 0LL);
  if ( v1992 )
  {
    v517 = sub_1B64B3C(v1992, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1544;
  v515->m_Items[491] = (DataMasterBase_o *)v1992;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[491], (int32_t)v1992, v1993, v1994);
  v1995 = (EventTradePickupMaster_o *)sub_1B64C4C(EventTradePickupMaster_TypeInfo);
  EventTradePickupMaster___ctor(v1995, 0LL);
  if ( v1995 )
  {
    v517 = sub_1B64B3C(v1995, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1544;
  v515->m_Items[492] = (DataMasterBase_o *)v1995;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[492], (int32_t)v1995, v1996, v1997);
  v1998 = (UserEventTradeMaster_o *)sub_1B64C4C(UserEventTradeMaster_TypeInfo);
  UserEventTradeMaster___ctor(v1998, 0LL);
  if ( v1998 )
  {
    v517 = sub_1B64B3C(v1998, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1544;
  v515->m_Items[493] = (DataMasterBase_o *)v1998;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[493], (int32_t)v1998, v1999, v2000);
  v2001 = (PaymentHistoryMaster_o *)sub_1B64C4C(PaymentHistoryMaster_TypeInfo);
  PaymentHistoryMaster___ctor(v2001, 0LL);
  if ( v2001 )
  {
    v517 = sub_1B64B3C(v2001, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1544;
  v515->m_Items[494] = (DataMasterBase_o *)v2001;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[494], (int32_t)v2001, v2002, v2003);
  v2004 = (UserExternalPaymentStoneMaster_o *)sub_1B64C4C(UserExternalPaymentStoneMaster_TypeInfo);
  UserExternalPaymentStoneMaster___ctor(v2004, 0LL);
  if ( v2004 )
  {
    v517 = sub_1B64B3C(v2004, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1544;
  v515->m_Items[495] = (DataMasterBase_o *)v2004;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[495], (int32_t)v2004, v2005, v2006);
  v2007 = (QuestPhaseIndividualityMaster_o *)sub_1B64C4C(QuestPhaseIndividualityMaster_TypeInfo);
  QuestPhaseIndividualityMaster___ctor(v2007, 0LL);
  if ( v2007 )
  {
    v517 = sub_1B64B3C(v2007, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1544;
  v515->m_Items[496] = (DataMasterBase_o *)v2007;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[496], (int32_t)v2007, v2008, v2009);
  v2010 = (ViewGachaFeaturedServantMaster_o *)sub_1B64C4C(ViewGachaFeaturedServantMaster_TypeInfo);
  ViewGachaFeaturedServantMaster___ctor(v2010, 0LL);
  if ( v2010 )
  {
    v517 = sub_1B64B3C(v2010, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1544;
  v515->m_Items[497] = (DataMasterBase_o *)v2010;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[497], (int32_t)v2010, v2011, v2012);
  v2013 = (UserGachaPickupCollateralMaster_o *)sub_1B64C4C(UserGachaPickupCollateralMaster_TypeInfo);
  UserGachaPickupCollateralMaster___ctor(v2013, 0LL);
  if ( v2013 )
  {
    v517 = sub_1B64B3C(v2013, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1544;
  v515->m_Items[498] = (DataMasterBase_o *)v2013;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[498], (int32_t)v2013, v2014, v2015);
  v2016 = (GachaPickupCollateralMaster_o *)sub_1B64C4C(GachaPickupCollateralMaster_TypeInfo);
  GachaPickupCollateralMaster___ctor(v2016, 0LL);
  if ( v2016 )
  {
    v517 = sub_1B64B3C(v2016, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1544;
  v515->m_Items[499] = (DataMasterBase_o *)v2016;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[499], (int32_t)v2016, v2017, v2018);
  v2019 = (GachaPickupCollateralGroupMaster_o *)sub_1B64C4C(GachaPickupCollateralGroupMaster_TypeInfo);
  GachaPickupCollateralGroupMaster___ctor(v2019, 0LL);
  if ( v2019 )
  {
    v517 = sub_1B64B3C(v2019, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1544;
  v515->m_Items[500] = (DataMasterBase_o *)v2019;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[500], (int32_t)v2019, v2020, v2021);
  v2022 = (BattlePointMaster_o *)sub_1B64C4C(BattlePointMaster_TypeInfo);
  BattlePointMaster___ctor(v2022, 0LL);
  if ( v2022 )
  {
    v517 = sub_1B64B3C(v2022, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1544;
  v515->m_Items[501] = (DataMasterBase_o *)v2022;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[501], (int32_t)v2022, v2023, v2024);
  v2025 = (BattlePointPhaseMaster_o *)sub_1B64C4C(BattlePointPhaseMaster_TypeInfo);
  BattlePointPhaseMaster___ctor(v2025, 0LL);
  if ( v2025 )
  {
    v517 = sub_1B64B3C(v2025, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1544;
  v515->m_Items[502] = (DataMasterBase_o *)v2025;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[502], (int32_t)v2025, v2026, v2027);
  v2028 = (ServantBattlePointMaster_o *)sub_1B64C4C(ServantBattlePointMaster_TypeInfo);
  ServantBattlePointMaster___ctor(v2028, 0LL);
  if ( v2028 )
  {
    v517 = sub_1B64B3C(v2028, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1544;
  v515->m_Items[503] = (DataMasterBase_o *)v2028;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[503], (int32_t)v2028, v2029, v2030);
  v2031 = (EffectMovieMaster_o *)sub_1B64C4C(EffectMovieMaster_TypeInfo);
  EffectMovieMaster___ctor(v2031, 0LL);
  if ( v2031 )
  {
    v517 = sub_1B64B3C(v2031, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1544;
  v515->m_Items[504] = (DataMasterBase_o *)v2031;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[504], (int32_t)v2031, v2032, v2033);
  v2034 = (PaymentLimitMaster_o *)sub_1B64C4C(PaymentLimitMaster_TypeInfo);
  PaymentLimitMaster___ctor(v2034, 0LL);
  if ( v2034 )
  {
    v517 = sub_1B64B3C(v2034, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1544;
  v515->m_Items[505] = (DataMasterBase_o *)v2034;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[505], (int32_t)v2034, v2035, v2036);
  v2037 = (UserPaymentLimitMaster_o *)sub_1B64C4C(UserPaymentLimitMaster_TypeInfo);
  UserPaymentLimitMaster___ctor(v2037, 0LL);
  if ( v2037 )
  {
    v517 = sub_1B64B3C(v2037, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1544;
  v515->m_Items[506] = (DataMasterBase_o *)v2037;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[506], (int32_t)v2037, v2038, v2039);
  v2040 = (RoadmapMaster_o *)sub_1B64C4C(RoadmapMaster_TypeInfo);
  RoadmapMaster___ctor(v2040, 0LL);
  if ( v2040 )
  {
    v517 = sub_1B64B3C(v2040, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1544;
  v515->m_Items[507] = (DataMasterBase_o *)v2040;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[507], (int32_t)v2040, v2041, v2042);
  v2043 = (UserRecommendSupportMaster_o *)sub_1B64C4C(UserRecommendSupportMaster_TypeInfo);
  UserRecommendSupportMaster___ctor(v2043, 0LL);
  if ( v2043 )
  {
    v517 = sub_1B64B3C(v2043, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1544;
  v515->m_Items[508] = (DataMasterBase_o *)v2043;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[508], (int32_t)v2043, v2044, v2045);
  v2046 = (RecommendSupportQuestMaster_o *)sub_1B64C4C(RecommendSupportQuestMaster_TypeInfo);
  RecommendSupportQuestMaster___ctor(v2046, 0LL);
  if ( v2046 )
  {
    v517 = sub_1B64B3C(v2046, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1544;
  v515->m_Items[509] = (DataMasterBase_o *)v2046;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[509], (int32_t)v2046, v2047, v2048);
  v2049 = (RecommendAdviceMessageMaster_o *)sub_1B64C4C(RecommendAdviceMessageMaster_TypeInfo);
  RecommendAdviceMessageMaster___ctor(v2049, 0LL);
  if ( v2049 )
  {
    v517 = sub_1B64B3C(v2049, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1544;
  v515->m_Items[510] = (DataMasterBase_o *)v2049;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[510], (int32_t)v2049, v2050, v2051);
  v2052 = (UserRecommendFollowerMaster_o *)sub_1B64C4C(UserRecommendFollowerMaster_TypeInfo);
  UserRecommendFollowerMaster___ctor(v2052, 0LL);
  if ( v2052 )
  {
    v517 = sub_1B64B3C(v2052, v515->obj.klass->_1.element_class);
    if ( !v517 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1544;
  v515->m_Items[511] = (DataMasterBase_o *)v2052;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[511], (int32_t)v2052, v2053, v2054);
  v2055 = (ItemDropEfficiencyMaster_o *)sub_1B64C4C(ItemDropEfficiencyMaster_TypeInfo);
  ItemDropEfficiencyMaster___ctor(v2055, 0LL);
  if ( v2055 )
  {
    v517 = sub_1B64B3C(v2055, v515->obj.klass->_1.element_class);
    if ( !v517 )
    {
LABEL_1545:
      v2059 = sub_1B64C80(v517);
      sub_1B64B28(v2059, 0LL);
    }
  }
  if ( *p_max_length <= 0x200 )
LABEL_1544:
    sub_1B64C64(v517, v518);
  v515->m_Items[512] = (DataMasterBase_o *)v2055;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v515->m_Items[512], (int32_t)v2055, v2056, v2057);
  return v515;
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

  if ( (byte_49FE672 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    sub_1B64A00(&ManagerConfig_TypeInfo, v2);
    byte_49FE672 = 1;
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

  if ( (byte_49FE66F & 1) == 0 )
  {
    sub_1B64A00(&int_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B64A00(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B64A00(&LocalizationManager_TypeInfo, v6);
    sub_1B64A00(&StringLiteral_8483/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v7);
    byte_49FE66F = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v8;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_masterCheckName, (int32_t)v8, v10, v11);
  v15 = 1;
  do
  {
    v27 = v15;
    v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27, v12, v13, v14);
    v17 = System_String__Format((System_String_o *)StringLiteral_8483/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v16, 0LL);
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
    sub_1B64C5C(v22, v19);
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v18,
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v26[4] = (Il2CppClass *)v18;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v18, v20, v21);
    }
    ++v15;
  }
  while ( v15 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_2E3BCE0 *method)
{
  const MethodInfo_2E3BCE0_RGCTXs *rgctx_data; // x8
  const MethodInfo_2E3BCE0 *_1_TMaster; // x19
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
    sub_1B64A00(&UnityEngine_Debug_TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v5);
    sub_1B64A00(&int_TypeInfo, v6);
    sub_1B64A00(&DataNameKind_Kind_TypeInfo, v7);
    sub_1B64A00(&System_Type_TypeInfo, v8);
    sub_1B64A00(&StringLiteral_21237/*"master[{0}] is null[{1}:{2}]"*/, v9);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6938();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v11 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v11 )
  {
    sub_1BB6938();
    v11 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v11[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1BB68DC(rgctxDataDummy);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v14) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v14,
         &value,
         (const MethodInfo_3127A04 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v14 = value;
    _1_TMaster = (const MethodInfo_2E3BCE0 *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_2E3BCE0 *)sub_1BB68DC(_1_TMaster);
    if ( !v14 )
      return 0LL;
    result = (Il2CppObject *)sub_1B64B3C(v14, _1_TMaster);
    if ( result )
      return result;
    sub_1B64F1C(v14);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v28.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v28, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1B64C5C(rgctxDataDummy, method);
  v17 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v26 = (int)v14;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v18, v19, v20);
  v25 = (int)v14;
  v24.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v24.monitor = (void *)-1LL;
  v22 = (Il2CppObject *)System_Enum__ToString(&v24, 0LL);
  v23 = (Il2CppObject *)System_String__Format_61399576((System_String_o *)StringLiteral_21237/*"master[{0}] is null[{1}:{2}]"*/, v17, v21, v22, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v23, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_2E3BC8C *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    if ( !method->rgctx_data )
      sub_1BB6938();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64C5C(0LL, v4);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E3BCE0 *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Func_object__o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_49FE65A & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_CreateMasterData__, method);
    sub_1B64A00(&System_Func_DataMasterBase____TypeInfo, v3);
    byte_49FE65A = 1;
  }
  v4 = (System_Func_object__o *)sub_1B64C4C(System_Func_DataMasterBase____TypeInfo);
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
  if ( (byte_49FE65B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    this = (DataManager_o *)sub_1B64A00(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    byte_49FE65B = 1;
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
          v11 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64C4C(System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v11,
            (const MethodInfo_31258A4 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v10) )
    {
LABEL_19:
      sub_1B64C5C(this, createMasterDataMethod);
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
          (const MethodInfo_3126278 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v14 = *(_DWORD *)(v10 + 24);
        if ( (int)++v15 >= v14 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1B64C64(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v10;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields.datalist, v10, v12, v13);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v11;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields.lookup, (int32_t)v11, v17, v18);
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
  const MethodInfo_35D0E08 *v33; // x3
  struct DataMasterBase_array *v34; // x8
  DataMasterBase_o *v35; // x25
  Il2CppObject *p_obj; // x22
  System_Threading_SynchronizationContext_o *context; // x24
  __int64 v38; // x0
  __int64 v39; // x1
  const MethodInfo_35D0E08 *v40; // x3
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
  if ( (byte_49FE66C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_1B64A00(&byte___TypeInfo, v6);
    sub_1B64A00(&int___TypeInfo, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____get_Item__, v9);
    sub_1B64A00(&Method_System_Nullable_long___ctor__, v10);
    sub_1B64A00(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_1B64A00(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_1B64A00(&DataManager___c__DisplayClass58_0_TypeInfo, v13);
    byte_49FE66C = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1B64C5C(this, indexList);
  v14 = sub_1B64B3C(indexList, int___TypeInfo);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(v14 + 24);
    work = (System_Byte_array *)sub_1B64AA8(byte___TypeInfo, 2000LL);
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; i != v16; ++i )
      {
        v18 = sub_1B64C4C(DataManager___c__DisplayClass58_0_TypeInfo);
        DataManager___c__DisplayClass58_0___ctor((DataManager___c__DisplayClass58_0_o *)v18, 0LL);
        if ( i >= *(unsigned int *)(v15 + 24) )
          sub_1B64C64(v19, v20);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1B64C5C(0LL, v20);
        v22 = *(_DWORD *)(v15 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v22,
                 (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v18 )
          sub_1B64C5C(Item, Item);
        *(_QWORD *)(v18 + 16) = Item;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)Item, v24, v25);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1B64C5C(0LL, v26);
        v28 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v22,
                (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v18 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v30 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_DataMasterBase__TypeInfo);
          System_Predicate_object____ctor(
            v30,
            (Il2CppObject *)v18,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v30,
                           (const MethodInfo_2F33430 *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v34 = v5->fields.datalist;
            if ( !v34 )
              sub_1B64C5C(Index_object, v32);
            if ( (unsigned int)Index_object >= v34->max_length )
              sub_1B64C64(Index_object, v32);
            if ( !v28 )
              sub_1B64C5C(Index_object, v32);
            if ( !LODWORD(v28[1].monitor) )
              sub_1B64C64(Index_object, v32);
            v35 = v34->m_Items[(unsigned int)Index_object];
            p_obj = &v5->fields.masterDataBytes->obj;
            context = v5->fields.context;
            v66.fields.value = (int64_t)v28[2].klass;
            *(_QWORD *)&v64.fields.hasValue = 0LL;
            v64.fields.value = 0LL;
            *(_QWORD *)&v66.fields.hasValue = &v64;
            System_Nullable_long____ctor(v66, Method_System_Nullable_long___ctor__, v33);
            if ( LODWORD(v28[1].monitor) <= 1 )
              sub_1B64C64(v38, v39);
            v67.fields.value = (int64_t)v28[2].monitor;
            *(_QWORD *)&v63.fields.hasValue = 0LL;
            v63.fields.value = 0LL;
            *(_QWORD *)&v67.fields.hasValue = &v63;
            System_Nullable_long____ctor(v67, Method_System_Nullable_long___ctor__, v40);
            if ( !v35 )
              sub_1B64C5C(v41, v42);
            DataMasterBase__ReplacedForThread(v35, p_obj, context, v64, v63, work, 0LL);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_62610856(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1B64F1C(indexList);
    if ( v44 != 1 )
      sub_1C4F490();
    v45 = (_QWORD **)__cxa_begin_catch(v3);
    v46 = sub_1B64A14(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v46, **v45) & 1) != 0 )
    {
      __cxa_end_catch();
      v47 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_62610856(v47, lockTaken, 0LL);
    }
    else
    {
      v48 = sub_1B64A14(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v48, **v45) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v45;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v49 = v5->fields.context;
      v50 = sub_1B64A14(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v50 + 224) )
        j_il2cpp_runtime_class_init_0(v50);
      v51 = sub_1B64A14(&DataManager___c_TypeInfo);
      v53 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v51 + 184) + 8LL);
      if ( !v53 )
      {
        v54 = sub_1B64A14(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v54 + 224) )
          j_il2cpp_runtime_class_init_0(v54);
        v55 = **(Il2CppObject ***)(sub_1B64A14(&DataManager___c_TypeInfo) + 184);
        v56 = sub_1B64A14(&System_Threading_SendOrPostCallback_TypeInfo);
        v53 = (System_Threading_SendOrPostCallback_o *)sub_1B64C4C(v56);
        v57 = sub_1B64A14(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v53, v55, v57, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1B64A14(&DataManager___c_TypeInfo) + 184) + 8LL) = v53;
        v58 = sub_1B64A14(&DataManager___c_TypeInfo);
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(*(_QWORD *)(v58 + 184) + 8LL), (int32_t)v53, v59, v60);
      }
      if ( !v49 )
        sub_1B64C5C(v51, v52);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v49->klass->vtable._5_Post.method)(
        v49,
        v53,
        0LL,
        v49->klass->vtable._6_OperationStarted.methodPtr);
      v47 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_62610856(v47, lockTaken, 0LL);
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

  if ( (byte_49FE66A & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Array_Sort_int____75714800, *(_QWORD *)&maxIndex);
    sub_1B64A00(&System_Comparison_int__TypeInfo, v7);
    sub_1B64A00(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_1B64A00(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B64A00(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1B64A00(&System_Func_int__bool__TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_Thread__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_Thread___ctor__, v13);
    sub_1B64A00(&System_Collections_Generic_List_Thread__TypeInfo, v14);
    sub_1B64A00(&System_Threading_ParameterizedThreadStart_TypeInfo, v15);
    sub_1B64A00(&System_Threading_Thread_TypeInfo, v16);
    sub_1B64A00(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__, v17);
    sub_1B64A00(&DataManager___c__DisplayClass56_0_TypeInfo, v18);
    sub_1B64A00(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__, v19);
    sub_1B64A00(&DataManager___c__DisplayClass56_1_TypeInfo, v20);
    byte_49FE66A = 1;
  }
  v21 = sub_1B64C4C(DataManager___c__DisplayClass56_0_TypeInfo);
  DataManager___c__DisplayClass56_0___ctor((DataManager___c__DisplayClass56_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)this, v24, v25);
  *(_QWORD *)(v21 + 24) = loadedIndices;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)loadedIndices, v26, v27);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.context, (int32_t)Current, v29, v30);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_Thread__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v31;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.masterLoadThreads, (int32_t)v31, v33, v34);
  v35 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v36 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v35,
          (const MethodInfo_2E73B20 *)Method_System_Linq_Enumerable_ToArray_int___);
  v37 = (System_Comparison_int__o *)sub_1B64C4C(System_Comparison_int__TypeInfo);
  System_Comparison_int____ctor(
    v37,
    (Il2CppObject *)v21,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__48274728(
    v36,
    (System_Comparison_T__o *)v37,
    (const MethodInfo_2E09D28 *)Method_System_Array_Sort_int____75714800);
  v38 = sub_1B64C4C(DataManager___c__DisplayClass56_1_TypeInfo);
  DataManager___c__DisplayClass56_1___ctor((DataManager___c__DisplayClass56_1_o *)v38, 0LL);
  if ( !v38 )
LABEL_14:
    sub_1B64C5C(v22, v23);
  *(_QWORD *)(v38 + 24) = v21;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v38 + 24), v21, v39, v40);
  *(_DWORD *)(v38 + 16) = 0;
  do
  {
    v41 = (System_Threading_ParameterizedThreadStart_o *)sub_1B64C4C(System_Threading_ParameterizedThreadStart_TypeInfo);
    System_Threading_ParameterizedThreadStart___ctor(
      v41,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v42 = (System_Threading_Thread_o *)sub_1B64C4C(System_Threading_Thread_TypeInfo);
    System_Threading_Thread___ctor_62646936(v42, v41, 0LL);
    if ( !v42 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v42, 1, 0LL);
    v43 = (System_Func_int__bool__o *)sub_1B64C4C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v43,
      (Il2CppObject *)v38,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v44 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v36,
            (System_Func_TSource__bool__o *)v43,
            (const MethodInfo_2E796BC *)Method_System_Linq_Enumerable_Where_int___);
    v45 = System_Linq_Enumerable__ToArray_int_(
            v44,
            (const MethodInfo_2E73B20 *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_62647516(v42, &v45->obj, 0LL);
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
        *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
    }
    else
    {
      v51 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v51[4] = (Il2CppClass *)v42;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v42, v46, v47);
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

  if ( (byte_49FE66D & 1) == 0 )
  {
    sub_1B64A00(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_1B64A00(&System_Threading_ParameterizedThreadStart_TypeInfo, v6);
    sub_1B64A00(&System_Threading_Thread_TypeInfo, v7);
    byte_49FE66D = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v8 = (System_Threading_ParameterizedThreadStart_o *)sub_1B64C4C(System_Threading_ParameterizedThreadStart_TypeInfo);
  System_Threading_ParameterizedThreadStart___ctor(
    v8,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v9 = (System_Threading_Thread_o *)sub_1B64C4C(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_62646936(v9, v8, 0LL);
  this->fields.writeMasterDataThread = v9;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, (int32_t)v9, v11, v12);
  if ( !*p_writeMasterDataThread )
    sub_1B64C5C(0LL, v13);
  System_Threading_Thread__Start_62647516(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
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

  if ( (byte_49FE66B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_49FE66B = 1;
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
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1B64C5C(Item, v7);
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
    sub_1B649A4(p_masterLoadThreads, 0, v9, v10);
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
        sub_1B64C5C(0LL, v4);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, 0, v5, v6);
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

  if ( (byte_49FE66E & 1) == 0 )
  {
    sub_1B64A00(&System_IO_BinaryWriter_TypeInfo, param);
    sub_1B64A00(&CatAndMouseGame_TypeInfo, v5);
    sub_1B64A00(&System_IDisposable_TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_1B64A00(&string_TypeInfo, v9);
    byte_49FE66E = 1;
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
  v13 = (System_IO_BinaryWriter_o *)sub_1B64C4C(System_IO_BinaryWriter_TypeInfo);
  System_IO_BinaryWriter___ctor_61623292(v13, v12, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1B64C5C(v14, v15);
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
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1B64C5C(0LL, v22);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1B64C64(Item, v22);
      if ( !v13 )
        sub_1B64C5C(Item, v22);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._17_Write.method)(
        v13,
        LODWORD(Item[2].monitor),
        v13->klass->vtable._18_Write.methodPtr);
      v24 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v24 )
        sub_1B64C5C(0LL, v23);
      masterDataBytes = this->fields.masterDataBytes;
      v26 = System_Collections_Generic_List_object___get_Item(
              v24,
              v20,
              (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v26 )
        sub_1B64C5C(0LL, v27);
      if ( !LODWORD(v26[1].monitor) )
        sub_1B64C64(v26, v27);
      if ( !this->fields.saveDataMapList )
        sub_1B64C5C(v26, v27);
      klass = v26[2].klass;
      v29 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v20,
              (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v29 )
        sub_1B64C5C(0LL, v30);
      if ( LODWORD(v29[1].monitor) <= 1 )
        sub_1B64C64(v29, v30);
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
        sub_1B64C5C(v31, v32);
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
    v36 = sub_1BB69E0(v13, System_IDisposable_TypeInfo, 0LL);
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
      v40 = sub_1BB69E0(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v40)(v11, *(_QWORD *)(v40 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, 0, v16, v17);
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

  if ( (byte_49FE655 & 1) == 0 )
  {
    sub_1B64A00(&DatFileName_TypeInfo, v1);
    sub_1B64A00(&DataManager_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_1124/*"/"*/, v3);
    byte_49FE655 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_61396396(CachePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FE654 & 1) == 0 )
  {
    sub_1B64A00(&DatFileName_TypeInfo, v1);
    sub_1B64A00(&DataManager_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_1124/*"/"*/, v3);
    byte_49FE654 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_61396396(CachePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_49FE652 & 1) == 0 )
  {
    sub_1B64A00(&AndroidUtil_TypeInfo, v1);
    sub_1B64A00(&CacheFolderName_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_1124/*"/"*/, v3);
    byte_49FE652 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_61396396(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FE653 & 1) == 0 )
  {
    sub_1B64A00(&DatFileName_TypeInfo, v1);
    sub_1B64A00(&DataManager_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_1124/*"/"*/, v3);
    byte_49FE653 = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_61396396(CachePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_object_(
        DataManager_o *this,
        const MethodInfo_2E3BEDC *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1BB6938();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1B64C5C(0LL, v4);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)Master_object[2].klass;
}


System_Object_array *__fastcall DataManager__getEntitys_object__object_(
        DataManager_o *this,
        const MethodInfo_2E3BF40 *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( !method->rgctx_data )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1BB6938();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1B64C5C(0LL, v4);
  return DataMasterBase__getEntitys_object_(
           (DataMasterBase_o *)Master_object,
           (const MethodInfo_2E3C574 *)method->rgctx_data->_2_DataMasterBase_getEntitys_T_);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_49FE660 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    byte_49FE660 = 1;
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

  if ( (byte_49FE661 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    byte_49FE661 = 1;
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

  if ( (byte_49FE670 & 1) == 0 )
  {
    sub_1B64A00(&Crc32_TypeInfo, name);
    byte_49FE670 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B64C5C(0LL, v7);
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

  if ( (byte_49FE656 & 1) == 0 )
  {
    sub_1B64A00(&AndroidUtil_TypeInfo, v1);
    sub_1B64A00(&CacheFolderName_TypeInfo, v2);
    sub_1B64A00(&StringLiteral_1124/*"/"*/, v3);
    byte_49FE656 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_61396396(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1124/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_49FE665 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    byte_49FE665 = 1;
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

  if ( (byte_49FE664 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    byte_49FE664 = 1;
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
    sub_1B64C5C(this, method);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_49FE65D & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    byte_49FE65D = 1;
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

  if ( (byte_49FE668 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    byte_49FE668 = 1;
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

  if ( (byte_49FE667 & 1) == 0 )
  {
    sub_1B64A00(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_49FE667 = 1;
  }
  v3 = sub_1B64C4C(DataManager__readMasterData_d__47_TypeInfo);
  DataManager__readMasterData_d__47___ctor((DataManager__readMasterData_d__47_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B64C5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  if ( (byte_49FE675 & 1) == 0 )
  {
    sub_1B64A00(&CatAndMouseGame_TypeInfo, method);
    sub_1B64A00(&char___TypeInfo, v3);
    sub_1B64A00(&Crc32_TypeInfo, v4);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_1B64A00(&ManagerConfig_TypeInfo, v9);
    sub_1B64A00(&string___TypeInfo, v10);
    sub_1B64A00(&StringLiteral_5092/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_1B64A00(&StringLiteral_5095/*"DataManager version load error : list file parameter error"*/, v12);
    sub_1B64A00(&StringLiteral_117/*" "*/, v13);
    sub_1B64A00(&StringLiteral_25058/*"~"*/, v14);
    sub_1B64A00(&StringLiteral_824/*") -> ("*/, v15);
    sub_1B64A00(&StringLiteral_815/*")"*/, v16);
    sub_1B64A00(&StringLiteral_1888/*"@"*/, v17);
    sub_1B64A00(&StringLiteral_21213/*"master versiton different ("*/, v18);
    sub_1B64A00(&StringLiteral_5096/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_1B64A00(&StringLiteral_5097/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    this = (DataManager_o *)sub_1B64A00(&StringLiteral_5094/*"DataManager version load error : list file break"*/, v21);
    byte_49FE675 = 1;
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
    v33 = (System_Char_array *)sub_1B64AA8(char___TypeInfo, 1LL);
    if ( !v33 )
      sub_1B64C5C(0LL, 0LL);
    if ( !v33->max_length )
      sub_1B64C64(v33, v33);
    v33->m_Items[2] = -257;
    v34 = System_String__Trim_61414876(v32, v33, 0LL);
    v35 = (System_Char_array *)sub_1B64AA8(char___TypeInfo, 2LL);
    if ( !v35 )
      sub_1B64C5C(0LL, 0LL);
    max_length = v35->max_length;
    if ( !max_length )
      sub_1B64C64(v35, v35);
    v35->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B64C64(v35, v35);
    v35->m_Items[3] = 10;
    if ( !v34 )
      sub_1B64C5C(v35, v35);
    v37 = System_String__IndexOfAny(v34, v35, 0LL);
    if ( v37 < 2 )
    {
      v38 = &StringLiteral_5096/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v39 = System_String__Substring_61404132(v34, 0, v37, 0LL);
    v41 = v39;
    if ( !v39 )
      sub_1B64C5C(0LL, v40);
    if ( System_String__StartsWith(v39, (System_String_o *)StringLiteral_25058/*"~"*/, 0LL) )
    {
      v42 = System_String__Substring(v41, 1, 0LL);
      v43 = System_String__Substring(v34, v37 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1B64C5C(0LL, v45);
      v46 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v43,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v47 = Crc32__Compute(v46, 0LL);
      if ( System_UInt32__Parse(v42, 0LL) == v47 )
      {
        v48 = (System_Char_array *)sub_1B64AA8(char___TypeInfo, 2LL);
        if ( !v48 )
          sub_1B64C5C(0LL, 0LL);
        v49 = v48->max_length;
        if ( !v49 )
          sub_1B64C64(v48, v48);
        v48->m_Items[2] = 13;
        if ( v49 == 1 )
          sub_1B64C64(v48, v48);
        v48->m_Items[3] = 10;
        if ( !v43 )
          sub_1B64C5C(v48, v48);
        this = (DataManager_o *)System_String__Split_61407520(v43, v48, 1, 0LL);
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
          this = (DataManager_o *)sub_1B64AA8(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          method = (const MethodInfo *)this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v52 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_61407284(v52, (System_Char_array *)this, 0LL);
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
            this = (DataManager_o *)sub_1B64AA8(string___TypeInfo, 5LL);
            if ( this )
            {
              v59 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v60 = StringLiteral_21213/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21213/*"master versiton different ("*/;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._DispLog, v60, v57, v58);
                if ( LODWORD(v59->fields.m_CancellationTokenSource) > 1 )
                {
                  v59->fields.datalist = (struct DataMasterBase_array *)v56;
                  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v59->fields.datalist, (int32_t)v56, v61, v62);
                  if ( LODWORD(v59->fields.m_CancellationTokenSource) > 2 )
                  {
                    v65 = StringLiteral_824/*") -> ("*/;
                    v59->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_824/*") -> ("*/;
                    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v59->fields.lookup, v65, v63, v64);
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
                      sub_1B649A4(
                        (ServantStatusBattleListViewItem_o *)&v59->fields.masterDataBytes,
                        (int32_t)v68,
                        v66,
                        v67);
                      if ( LODWORD(v59->fields.m_CancellationTokenSource) > 4 )
                      {
                        v71 = StringLiteral_815/*")"*/;
                        v59->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_815/*")"*/;
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
                this = (DataManager_o *)sub_1B64AA8(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                method = (const MethodInfo *)this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v81 )
                  break;
                this = (DataManager_o *)System_String__Split_61407284(v81, (System_Char_array *)this, 0LL);
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
                    *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v88 = v85 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v88 + 32) = method;
                  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v88 + 32), (int32_t)method, v82, v83);
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
              this = (DataManager_o *)sub_1B64AA8(string___TypeInfo, 9LL);
              if ( this )
              {
                v59 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v92 = StringLiteral_21213/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21213/*"master versiton different ("*/;
                  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._DispLog, v92, v90, v91);
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
                    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v59->fields.datalist, (int32_t)this, v94, v95);
                    if ( LODWORD(v59->fields.m_CancellationTokenSource) > 2 )
                    {
                      v98 = (int)StringLiteral_117/*" "*/;
                      v59->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_117/*" "*/;
                      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v59->fields.lookup, v98, v96, v97);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v59->fields.m_CancellationTokenSource) > 3 )
                      {
                        v59->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1B649A4(
                          (ServantStatusBattleListViewItem_o *)&v59->fields.masterDataBytes,
                          (int32_t)this,
                          v99,
                          v100);
                        if ( LODWORD(v59->fields.m_CancellationTokenSource) > 4 )
                        {
                          v103 = StringLiteral_824/*") -> ("*/;
                          v59->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_824/*") -> ("*/;
                          sub_1B649A4((ServantStatusBattleListViewItem_o *)&v59->fields.saveNameList, v103, v101, v102);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v112, 0LL);
                          if ( LODWORD(v59->fields.m_CancellationTokenSource) > 5 )
                          {
                            v59->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1B649A4(
                              (ServantStatusBattleListViewItem_o *)&v59->fields.saveDataMapList,
                              (int32_t)this,
                              v104,
                              v105);
                            if ( LODWORD(v59->fields.m_CancellationTokenSource) > 6 )
                            {
                              v108 = (int)StringLiteral_117/*" "*/;
                              *(_QWORD *)&v59->fields.lastFrameTime = StringLiteral_117/*" "*/;
                              sub_1B649A4(
                                (ServantStatusBattleListViewItem_o *)&v59->fields.lastFrameTime,
                                v108,
                                v106,
                                v107);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v111, 0LL);
                              if ( LODWORD(v59->fields.m_CancellationTokenSource) > 7 )
                              {
                                v59->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1B649A4(
                                  (ServantStatusBattleListViewItem_o *)&v59->fields.masterCheckName,
                                  (int32_t)this,
                                  v109,
                                  v110);
                                if ( LODWORD(v59->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v71 = StringLiteral_815/*")"*/;
                                  v59->fields.lockCountObj = (Il2CppObject *)StringLiteral_815/*")"*/;
                                  p_saveNameList = (ServantStatusBattleListViewItem_o *)&v59->fields.lockCountObj;
LABEL_104:
                                  sub_1B649A4(p_saveNameList, v71, v69, v70);
                                  if ( System_String__Concat_61398664((System_String_array *)v59, 0LL) )
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
                sub_1B64C64(this, method);
              }
            }
LABEL_119:
            sub_1B64C5C(this, method);
          }
          v38 = &StringLiteral_5095/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v38 = &StringLiteral_5094/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v38 = &StringLiteral_5092/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v38 = &StringLiteral_5097/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
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

  if ( (byte_49FE666 & 1) == 0 )
  {
    sub_1B64A00(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_49FE666 = 1;
  }
  v3 = sub_1B64C4C(DataManager__readMasterVersion_d__46_TypeInfo);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B64C5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_49FE673 & 1) == 0 )
  {
    sub_1B64A00(&CatAndMouseGame_TypeInfo, method);
    sub_1B64A00(&char___TypeInfo, v3);
    sub_1B64A00(&Crc32_TypeInfo, v4);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&ManagerConfig_TypeInfo, v6);
    sub_1B64A00(&string___TypeInfo, v7);
    sub_1B64A00(&StringLiteral_5091/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_1B64A00(&StringLiteral_5088/*"DataManager boot load error : list file break"*/, v9);
    sub_1B64A00(&StringLiteral_5090/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_1B64A00(&StringLiteral_5086/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_1B64A00(&StringLiteral_25058/*"~"*/, v12);
    sub_1B64A00(&StringLiteral_21212/*"master data versiton different ("*/, v13);
    sub_1B64A00(&StringLiteral_824/*") -> ("*/, v14);
    sub_1B64A00(&StringLiteral_815/*")"*/, v15);
    sub_1B64A00(&StringLiteral_1888/*"@"*/, v16);
    sub_1B64A00(&StringLiteral_5089/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_49FE673 = 1;
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
    v24 = (System_Char_array *)sub_1B64AA8(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_1B64C5C(0LL, 0LL);
    if ( !v24->max_length )
      sub_1B64C64(v24, v24);
    v24->m_Items[2] = -257;
    v25 = System_String__Trim_61414876(v23, v24, 0LL);
    v26 = (System_Char_array *)sub_1B64AA8(char___TypeInfo, 2LL);
    if ( !v26 )
      sub_1B64C5C(0LL, 0LL);
    max_length = v26->max_length;
    if ( !max_length )
      sub_1B64C64(v26, v26);
    v26->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B64C64(v26, v26);
    v26->m_Items[3] = 10;
    if ( !v25 )
      sub_1B64C5C(v26, v26);
    v28 = System_String__IndexOfAny(v25, v26, 0LL);
    if ( v28 < 2 )
    {
      v29 = &StringLiteral_5090/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v64 = (System_String_o *)*v29;
LABEL_58:
      if ( v64 )
        goto LABEL_59;
      return 1;
    }
    v30 = System_String__Substring_61404132(v25, 0, v28, 0LL);
    v32 = v30;
    if ( !v30 )
      sub_1B64C5C(0LL, v31);
    if ( !System_String__StartsWith(v30, (System_String_o *)StringLiteral_25058/*"~"*/, 0LL) )
    {
      v29 = &StringLiteral_5091/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v33 = System_String__Substring(v32, 1, 0LL);
    v34 = System_String__Substring(v25, v28 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1B64C5C(0LL, v36);
    v37 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                 UTF8,
                                 v34,
                                 UTF8->klass->vtable._20_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v38 = Crc32__Compute(v37, 0LL);
    if ( System_UInt32__Parse(v33, 0LL) != v38 )
    {
      v29 = &StringLiteral_5086/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v39 = (System_Char_array *)sub_1B64AA8(char___TypeInfo, 2LL);
    if ( !v39 )
      sub_1B64C5C(0LL, 0LL);
    v40 = v39->max_length;
    if ( !v40 )
      sub_1B64C64(v39, v39);
    v39->m_Items[2] = 13;
    if ( v40 == 1 )
      sub_1B64C64(v39, v39);
    v39->m_Items[3] = 10;
    if ( !v34 )
      sub_1B64C5C(v39, v39);
    v41 = (__int64)System_String__Split_61407520(v34, v39, 1, 0LL);
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
        v41 = sub_1B64AA8(char___TypeInfo, 1LL);
        if ( v41 )
        {
          v21 = (const MethodInfo *)v41;
          if ( !*(_DWORD *)(v41 + 24) )
            goto LABEL_78;
          *(_WORD *)(v41 + 32) = 44;
          if ( v44 )
          {
            v41 = (__int64)System_String__Split_61407284(v44, (System_Char_array *)v41, 0LL);
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
                    v29 = &StringLiteral_5089/*"DataManager boot load error : list file parameter error"*/;
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
                  sub_1B64C64(v41, v21);
                }
                v41 = sub_1B64AA8(string___TypeInfo, 5LL);
                if ( v41 )
                {
                  v51 = v41;
                  if ( *(_DWORD *)(v41 + 24) )
                  {
                    v52 = StringLiteral_21212/*"master data versiton different ("*/;
                    *(_QWORD *)(v41 + 32) = StringLiteral_21212/*"master data versiton different ("*/;
                    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v41 + 32), v52, v49, v50);
                    if ( *(_DWORD *)(v51 + 24) > 1u )
                    {
                      *(_QWORD *)(v51 + 40) = v48;
                      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v51 + 40), (int32_t)v48, v53, v54);
                      if ( *(_DWORD *)(v51 + 24) > 2u )
                      {
                        v57 = StringLiteral_824/*") -> ("*/;
                        *(_QWORD *)(v51 + 48) = StringLiteral_824/*") -> ("*/;
                        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v51 + 48), v57, v55, v56);
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
                          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v51 + 56), v60, v58, v59);
                          if ( *(_DWORD *)(v51 + 24) > 4u )
                          {
                            v63 = StringLiteral_815/*")"*/;
                            *(_QWORD *)(v51 + 64) = StringLiteral_815/*")"*/;
                            sub_1B649A4((ServantStatusBattleListViewItem_o *)(v51 + 64), v63, v61, v62);
                            v64 = System_String__Concat_61398664((System_String_array *)v51, 0LL);
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
        sub_1B64C5C(v41, v21);
      }
    }
    v29 = &StringLiteral_5088/*"DataManager boot load error : list file break"*/;
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

  if ( (byte_49FE663 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_49FE663 = 1;
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
  sub_1B649A4(p_updateData, v11, dateVer, (int32_t)obj);
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

  if ( (byte_49FE662 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_49FE662 = 1;
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

  if ( (byte_49FE65C & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, obj);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v5);
    sub_1B64A00(&StringLiteral_1/*""*/, v6);
    byte_49FE65C = 1;
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
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->serverHash, v8, (int32_t)method, v3);
  if ( obj )
  {
    v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v11 = System_String__op_Equality(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v11 )
    {
      if ( !v10 )
        sub_1B64C5C(v11, v12);
      v13 = System_String__Substring(v10, v10->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v16 = System_String__Substring_61404132(v10, 0, v10->fields._stringLength - 1, 0LL);
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
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v18->serverHash, (int32_t)v10, v14, v15);
    }
  }
}


void __fastcall DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_49FE65E & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, obj);
    byte_49FE65E = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void __fastcall DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_49FE677 & 1) == 0 )
  {
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_49FE677 = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1B64F1C(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_38479128(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_38479128(
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
  if ( (byte_49FE678 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B64A00(&StringLiteral_24223/*"updated"*/, v7);
    sub_1B64A00(&StringLiteral_18495/*"deleted"*/, v8);
    this = (DataManager_o *)sub_1B64A00(&StringLiteral_22785/*"replaced"*/, v9);
    byte_49FE678 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1B64C5C(this, data);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18495/*"deleted"*/,
         (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18495/*"deleted"*/,
                              (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
                                  (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                    (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
      sub_1B64C64(this, data);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24223/*"updated"*/,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24223/*"updated"*/,
                            (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v10 = this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v21 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v21
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v21 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1B64F1C(v10);
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
                                (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
          (Il2CppObject *)StringLiteral_22785/*"replaced"*/,
          (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_22785/*"replaced"*/,
                            (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    data = (System_Collections_Generic_Dictionary_string__object__o *)System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v31 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v31
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v31 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1B64F1C(v3);
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
                                (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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

  if ( (byte_49FE669 & 1) == 0 )
  {
    sub_1B64A00(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_49FE669 = 1;
  }
  v5 = sub_1B64C4C(DataManager__updateMasterData_d__49_TypeInfo);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B64C5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
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

  if ( (byte_49FE65F & 1) == 0 )
  {
    sub_1B64A00(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_49FE65F = 1;
  }
  v3 = sub_1B64C4C(DataManager__updateWebViewData_d__38_TypeInfo);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B64C5C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_49FE676 & 1) == 0 )
  {
    sub_1B64A00(&CatAndMouseGame_TypeInfo, method);
    sub_1B64A00(&Crc32_TypeInfo, v3);
    sub_1B64A00(&DataManager_TypeInfo, v4);
    sub_1B64A00(&System_IDisposable_TypeInfo, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_1B64A00(&ManagerConfig_TypeInfo, v8);
    sub_1B64A00(&System_IO_StreamWriter_TypeInfo, v9);
    sub_1B64A00(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1B64A00(&uint_TypeInfo, v11);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v12);
    sub_1B64A00(&StringLiteral_25061/*"~{0}\n{1}"*/, v13);
    sub_1B64A00(&StringLiteral_1888/*"@"*/, v14);
    sub_1B64A00(&StringLiteral_869/*","*/, v15);
    byte_49FE676 = 1;
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
    v23 = (System_Text_StringBuilder_o *)sub_1B64C4C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor_60540384(v23, (size << 7) + 128, 0LL);
    if ( !v23 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_60547032(v23, (System_String_o *)StringLiteral_1888/*"@"*/, 0LL);
    v24 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_60547032(v23, v24->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_60547032(v23, (System_String_o *)StringLiteral_869/*","*/, 0LL);
    System_Text_StringBuilder__Append_60549528(v23, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_60547032(v23, (System_String_o *)StringLiteral_869/*","*/, 0LL);
    System_Text_StringBuilder__Append_60549616(v23, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_60547032(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
                 (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_60547032(v23, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_60547032(v23, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
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
      sub_1B64C5C(CacheListFileName, v19);
    v30 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.method)(
                                 CacheListFileName,
                                 v29,
                                 CacheListFileName->klass->vtable._20_System_Collections_IList_Add.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v45 = Crc32__Compute(v30, 0LL);
    v34 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v45, v31, v32, v33);
    v35 = System_String__Format_61399508((System_String_o *)StringLiteral_25061/*"~{0}\n{1}"*/, v34, v29, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v36 = CatAndMouseGame__CatGame3(v35, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v38 = (System_IO_StreamWriter_o *)sub_1B64C4C(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_61554264(v38, v22, 0, UTF8, 0LL);
    if ( !v38 )
      sub_1B64C5C(v39, v40);
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
      v44 = sub_1BB69E0(v38, System_IDisposable_TypeInfo, 0LL);
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

  if ( (byte_49FE674 & 1) == 0 )
  {
    sub_1B64A00(&CatAndMouseGame_TypeInfo, method);
    sub_1B64A00(&Crc32_TypeInfo, v2);
    sub_1B64A00(&DataManager_TypeInfo, v3);
    sub_1B64A00(&ManagerConfig_TypeInfo, v4);
    sub_1B64A00(&System_IO_StreamWriter_TypeInfo, v5);
    sub_1B64A00(&string___TypeInfo, v6);
    sub_1B64A00(&StringLiteral_43/*"\n"*/, v7);
    sub_1B64A00(&StringLiteral_25058/*"~"*/, v8);
    sub_1B64A00(&StringLiteral_1888/*"@"*/, v9);
    sub_1B64A00(&StringLiteral_869/*","*/, v10);
    byte_49FE674 = 1;
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
    UTF8 = (char *)sub_1B64AA8(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v18 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v19 = StringLiteral_1888/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1888/*"@"*/;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(UTF8 + 32), v19, v16, v17);
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
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 40), v22, v20, v21);
    if ( *((_DWORD *)v18 + 6) <= 2u )
      goto LABEL_26;
    v25 = (int)StringLiteral_869/*","*/;
    *((_QWORD *)v18 + 6) = StringLiteral_869/*","*/;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 48), v25, v23, v24);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v18 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v18 + 7) = UTF8;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 56), (int32_t)UTF8, v26, v27);
    if ( *((_DWORD *)v18 + 6) <= 4u
      || (v30 = (int)StringLiteral_869/*","*/,
          *((_QWORD *)v18 + 8) = StringLiteral_869/*","*/,
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 64), v30, v28, v29),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v18 + 6) <= 5u)
      || (*((_QWORD *)v18 + 9) = UTF8,
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 72), (int32_t)UTF8, v31, v32),
          *((_DWORD *)v18 + 6) <= 6u) )
    {
LABEL_26:
      sub_1B64C64(UTF8, v15);
    }
    v35 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v18 + 10) = StringLiteral_43/*"\n"*/;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v18 + 80), v35, v33, v34);
    v36 = System_String__Concat_61398664((System_String_array *)v18, 0LL);
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
    v39 = System_String__Concat_61398400(
            (System_String_o *)StringLiteral_25058/*"~"*/,
            v38,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v36,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v40 = CatAndMouseGame__CatGame1(v39, 0, 0LL);
    v41 = System_Text_Encoding__get_UTF8(0LL);
    v42 = (System_IO_StreamWriter_o *)sub_1B64C4C(System_IO_StreamWriter_TypeInfo);
    System_IO_StreamWriter___ctor_61554264(v42, CacheVersionFileName, 0, v41, 0LL);
    if ( !v42 )
LABEL_27:
      sub_1B64C5C(UTF8, v15);
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

  if ( (byte_49FE681 & 1) == 0 )
  {
    sub_1B64A00(&DataManager___c_TypeInfo, v1);
    byte_49FE681 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(DataManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
  if ( (byte_49FE682 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1B64A00(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_49FE682 = 1;
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
                                                  (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                         (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1B64C5C(this, *(_QWORD *)&a);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1B64C64(this, *(_QWORD *)&a);
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
  if ( (byte_49FE683 & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1B64A00(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_49FE683 = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1B64C5C(this, *(_QWORD *)&x);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_3492B48 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1B64C5C(this, 0LL);
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
  if ( (byte_49FE684 & 1) == 0 )
  {
    sub_1B64A00(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B64A00(&byte___TypeInfo, v3);
    sub_1B64A00(&CatAndMouseGame_TypeInfo, v4);
    sub_1B64A00(&DataManager_TypeInfo, v5);
    sub_1B64A00(&System_GC_TypeInfo, v6);
    sub_1B64A00(&System_IDisposable_TypeInfo, v7);
    sub_1B64A00(&long___TypeInfo, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1B64A00(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_1B64A00(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_49FE684 = 1;
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
        v14 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v14, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v14;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B649A4(p__2__current, (int32_t)v14, v16, v17);
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
          v23 = (System_IO_MemoryStream_o *)sub_1B64C4C(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor(v23, 0LL);
          v24 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v25 = CatAndMouseGame__MouseGameZ(v24, 0LL);
          v26 = sub_1B64AA8(byte___TypeInfo, 0x4000LL);
          v28 = v26;
          if ( !v26 )
            sub_1B64C5C(0LL, v27);
          if ( !v25 )
            sub_1B64C5C(v26, v27);
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
              sub_1B64C5C(v29, v30);
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
            v40 = sub_1BB69E0(v25, System_IDisposable_TypeInfo, 0LL);
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
              v46 = sub_1BB69E0(v24, System_IDisposable_TypeInfo, 0LL);
            }
            v41 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v46)(v24, *(_QWORD *)(v46 + 8));
          }
          if ( !v23 )
            sub_1B64C5C(v41, v42);
          v47 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v23->klass->vtable._42_ToArray.method)(
                  v23,
                  v23->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v47;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, v47, v48, v49);
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
            v53 = sub_1BB69E0(v23, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v53)(v23, *(_QWORD *)(v53 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v55 = (System_IO_MemoryStream_o *)sub_1B64C4C(System_IO_MemoryStream_TypeInfo);
          System_IO_MemoryStream___ctor_61529140(v55, masterDataBytes, 0LL);
          v56 = (System_IO_BinaryReader_o *)sub_1B64C4C(System_IO_BinaryReader_TypeInfo);
          System_IO_BinaryReader___ctor(v56, (System_IO_Stream_o *)v55, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1B64C5C(v57, v58);
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
                  v83 = sub_1BB69E0(v55, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v83)(v55, *(_QWORD *)(v83 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62431196(0LL);
              v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v84;
              v32 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B649A4(v32, (int32_t)v84, v85, v86);
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
              sub_1B64C5C(v57, v58);
            do
            {
              v61 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v56->klass->vtable._15_ReadInt32.method)(
                      v56,
                      v56->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v55 )
                sub_1B64C5C(v61, v62);
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
              v67 = sub_1B64AA8(long___TypeInfo, 2LL);
              v70 = v67;
              if ( !v67 )
                sub_1B64C5C(0LL, 0LL);
              v71 = *(_DWORD *)(v67 + 24);
              if ( !v71 )
                sub_1B64C64(v67, v67);
              *(_QWORD *)(v67 + 32) = v64;
              if ( v71 == 1 )
                sub_1B64C64(v67, v67);
              *(_QWORD *)(v67 + 40) = v65;
              if ( !saveDataMapList )
                sub_1B64C5C(v67, v67);
              items = saveDataMapList->fields._items;
              v73 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1B64C5C(v67, v67);
              v74 = saveDataMapList->fields._size;
              if ( (unsigned int)v74 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v67,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
              }
              else
              {
                v75 = &items->obj.klass + v74;
                saveDataMapList->fields._size = v74 + 1;
                v75[4] = (Il2CppClass *)v70;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v75 + 4), v70, v68, v69);
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
            v79 = sub_1BB69E0(v56, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v79)(v56, *(_QWORD *)(v79 + 8));
          goto LABEL_76;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v31, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v31;
        v32 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B649A4(v32, (int32_t)v31, v33, v34);
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
        sub_1B64C5C(this, method);
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
  if ( (byte_49FE685 & 1) == 0 )
  {
    sub_1B64A00(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1B64A00(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_49FE685 = 1;
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
        v6 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v6, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B649A4(p__2__current, (int32_t)v6, v8, v9);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1B64C5C(this, method);
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
  const MethodInfo_35D0E08 *v237; // x3
  const MethodInfo_35D0E08 *v238; // x3
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
  if ( (byte_49FE686 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, method);
    sub_1B64A00(&CatAndMouseGame_TypeInfo, v5);
    sub_1B64A00(&System_Convert_TypeInfo, v6);
    sub_1B64A00(&Method_DataManager_GetMasterData_ServantProfileMaster___, v7);
    sub_1B64A00(&Method_DataManager_GetMaster_EventServantMaster___, v8);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantClassMaster___, v9);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v10);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantCommentMaster___, v11);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v12);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantMaster___, v13);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantProfileMaster___, v14);
    sub_1B64A00(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v15);
    sub_1B64A00(&Method_DataManager__updateMasterData_b__49_0__, v16);
    sub_1B64A00(&DataManager_TypeInfo, v17);
    sub_1B64A00(&DataMasterBase___TypeInfo, v18);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v20);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v21);
    sub_1B64A00(&EventRandomMissionClearManager_TypeInfo, v22);
    sub_1B64A00(&System_Func_bool__TypeInfo, v23);
    sub_1B64A00(&System_GC_TypeInfo, v24);
    sub_1B64A00(&ImageLimitCount_TypeInfo, v25);
    sub_1B64A00(&LastUsedDeckNumberManager_TypeInfo, v26);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____Add__, v29);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Clear__, v30);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____Clear__, v31);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__Contains__, v32);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__FindIndex__, v33);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__RemoveAt__, v34);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____RemoveAt__, v35);
    sub_1B64A00(&Method_System_Collections_Generic_List_int___ctor__, v36);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____get_Count__, v37);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Count__, v38);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____get_Item__, v39);
    sub_1B64A00(&Method_System_Collections_Generic_List_long____set_Item__, v40);
    sub_1B64A00(&System_Collections_Generic_List_int__TypeInfo, v41);
    sub_1B64A00(&LogoMain_TypeInfo, v42);
    sub_1B64A00(&ManagerConfig_TypeInfo, v43);
    sub_1B64A00(&MasterDataUnpakcer_TypeInfo, v44);
    sub_1B64A00(&MaterialBranchRouteManager_TypeInfo, v45);
    sub_1B64A00(&MaterialGroupClearHistoryManager_TypeInfo, v46);
    sub_1B64A00(&MaterialServantLimitCountManager_TypeInfo, v47);
    sub_1B64A00(&MiniMessagePack_MiniMessagePacker_TypeInfo, v48);
    sub_1B64A00(&Method_System_Nullable_long___ctor__, v49);
    sub_1B64A00(&OtherUserNewManager_TypeInfo, v50);
    sub_1B64A00(&System_Predicate_string__TypeInfo, v51);
    sub_1B64A00(&ServantCommentManager_TypeInfo, v52);
    sub_1B64A00(&ServantProfileEventJoinManager_TypeInfo, v53);
    sub_1B64A00(&ServantProfileLimitCountManager_TypeInfo, v54);
    sub_1B64A00(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v55);
    sub_1B64A00(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56);
    sub_1B64A00(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v57);
    sub_1B64A00(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__, v58);
    sub_1B64A00(&DataManager___c__DisplayClass49_0_TypeInfo, v59);
    sub_1B64A00(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__, v60);
    sub_1B64A00(&DataManager___c__DisplayClass49_1_TypeInfo, v61);
    sub_1B64A00(&UserCommandCodeCollectionManager_TypeInfo, v62);
    sub_1B64A00(&UserCommandCodeNewManager_TypeInfo, v63);
    sub_1B64A00(&UserEquipNewManager_TypeInfo, v64);
    sub_1B64A00(&UserMissionProgressManager_TypeInfo, v65);
    sub_1B64A00(&UserServantCollectionManager_TypeInfo, v66);
    sub_1B64A00(&UserServantLockManager_TypeInfo, v67);
    sub_1B64A00(&UserServantNewManager_TypeInfo, v68);
    sub_1B64A00(&UnityEngine_WaitForEndOfFrame_TypeInfo, v69);
    sub_1B64A00(&UnityEngine_WaitUntil_TypeInfo, v70);
    sub_1B64A00(&WarBoardMessageHistoryManager_TypeInfo, v71);
    sub_1B64A00(&WarBoardMovieHistoryManager_TypeInfo, v72);
    this = (DataManager__updateMasterData_d__49_o *)sub_1B64A00(&StringLiteral_11406/*"SCRIPT"*/, v73);
    byte_49FE686 = 1;
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
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6, 0, v95, v96);
      v4->fields._dataMapObject_5__7 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, 0, v97, v98);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v99, v100);
      v102 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v102 = DataManager_TypeInfo;
      }
      updateData = v102->static_fields->updateData;
      if ( !updateData )
        sub_1B64C5C(0LL, v101);
      v104 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v105 = System_Convert__FromBase64String(v104, 0LL);
      v4->fields._cryptBytes_5__8 = v105;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v105, v106, v107);
      v110 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v110 = DataManager_TypeInfo;
      }
      static_fields = v110->static_fields;
      static_fields->updateData = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->updateData, 0, v108, v109);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62431196(0LL);
      v112 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v112, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v112;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B649A4(p__2__current, (int32_t)v112, v114, v115);
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
        sub_1B64C5C(v118, v118);
      _4__this->fields.masterDataBytes = v118;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v118, v119, v120);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v121, v122);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62431196(0LL);
      v123 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v123, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v123;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B649A4(v84, (int32_t)v123, v124, v125);
      v87 = 2;
      goto LABEL_82;
    case 2:
      v4->fields.__1__state = -1;
      v77 = (MasterDataUnpakcer_o *)sub_1B64C4C(MasterDataUnpakcer_TypeInfo);
      MasterDataUnpakcer___ctor(v77, 0LL);
      if ( !_4__this )
        sub_1B64C5C(v78, v79);
      if ( !v77 )
        sub_1B64C5C(v78, v79);
      v80 = MasterDataUnpakcer__Unpack_37872348(v77, _4__this->fields.masterDataBytes, 0LL);
      v4->fields._dataMapObject_5__7 = v80;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v80, v81, v82);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62431196(0LL);
      v83 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v83, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v83;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B649A4(v84, (int32_t)v83, v85, v86);
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
      sub_1B649A4(p_dataMapDict_5__6, v130, v2, v3);
      if ( !_4__this )
        goto LABEL_288;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v135 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v135, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v135;
        v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B649A4(v84, (int32_t)v135, v136, v137);
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
          v142 = (Il2CppObject *)sub_1B64C4C(DataManager___c__DisplayClass49_0_TypeInfo);
          System_Object___ctor(v142, 0LL);
          v4->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v142;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v142, v144, v145);
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
          sub_1B649A4(
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
                 (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0LL;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, 0, v153, v154);
            v157 = v4->fields.__8__1;
            if ( !v157 )
              sub_1B64C5C(v155, v156);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1B64C5C(0LL, v156);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v157->fields.masterName,
                     (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v160, v161);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v267 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v267, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v267;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B649A4(v84, (int32_t)v267, v268, v269);
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
                                                              (const MethodInfo_34B0358 *)Method_System_Collections_Generic_List_string__Contains__);
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
            v166 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_string__TypeInfo);
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
                                                              (const MethodInfo_34B0820 *)Method_System_Collections_Generic_List_string__FindIndex__);
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
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
              }
              else
              {
                v181 = v178 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v181 + 32) = method;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v181 + 32), (int32_t)method, v167, v168);
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
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
              }
              else
              {
                v187 = v184 + 8 * v186;
                LODWORD(this->fields.__2__current) = v186 + 1;
                *(_QWORD *)(v187 + 32) = method;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v187 + 32), (int32_t)method, v182, v183);
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
                (const MethodInfo_34AFD4C *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0LL;
            v4->fields._isAdd_5__4 = 1;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, 0, v169, v170);
          }
          else
          {
            v171 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v172 = *p__8__1;
            v173 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_string__TypeInfo);
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
                      (const MethodInfo_34B0820 *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_125;
            v175 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v175,
              (const MethodInfo_34B183C *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v175,
              (const MethodInfo_34B183C *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0LL;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)p__8__1, 0, v176, v177);
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
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, v3);
        v4->fields._dataMapObject_5__7 = 0LL;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, 0, v192, v193);
        v4->fields._cryptBytes_5__8 = 0LL;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v194, v195);
        if ( !_4__this )
          goto LABEL_288;
LABEL_134:
        v196 = _4__this->fields.saveNameList;
        if ( !v196 )
LABEL_288:
          sub_1B64C5C(this, method);
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
        v197 = (System_Collections_Generic_List_int__o *)sub_1B64C4C(System_Collections_Generic_List_int__TypeInfo);
        System_Collections_Generic_List_int____ctor(
          v197,
          (const MethodInfo_3491F7C *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v197;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v197, v198, v199);
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
                 (System_String_o *)StringLiteral_11406/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_288;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v201 = sub_1B64AA8(DataMasterBase___TypeInfo, 8LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v201 )
                goto LABEL_288;
              v204 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64B3C(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( !*(_DWORD *)(v201 + 24) )
                goto LABEL_289;
              *(_QWORD *)(v201 + 32) = v204;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v201 + 32), (int32_t)v204, v202, v203);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantClassMaster___);
              v207 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64B3C(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 1u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 40) = v207;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v201 + 40), (int32_t)v207, v205, v206);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v210 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64B3C(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 2u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 48) = v210;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v201 + 48), (int32_t)v210, v208, v209);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v213 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64B3C(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 3u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 56) = v213;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v201 + 56), (int32_t)v213, v211, v212);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v216 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64B3C(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 4u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 64) = v216;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v201 + 64), (int32_t)v216, v214, v215);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_EventServantMaster___);
              v219 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64B3C(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 5u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 72) = v219;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v201 + 72), (int32_t)v219, v217, v218);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v222 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64B3C(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v201 + 24) <= 6u )
                goto LABEL_289;
              *(_QWORD *)(v201 + 80) = v222;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v201 + 80), (int32_t)v222, v220, v221);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E3BC8C *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v225 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64B3C(this, *(_QWORD *)(*(_QWORD *)v201 + 64LL));
                if ( !this )
                {
LABEL_238:
                  v270 = sub_1B64C80(this);
                  sub_1B64B28(v270, 0LL);
                }
              }
              if ( *(_DWORD *)(v201 + 24) <= 7u )
LABEL_289:
                sub_1B64C64(this, method);
              *(_QWORD *)(v201 + 88) = v225;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v201 + 88), (int32_t)v225, v223, v224);
              v226 = *(_QWORD *)(v201 + 24);
              if ( (int)v226 >= 1 )
              {
                v227 = 0LL;
                while ( (unsigned int)v227 < (unsigned int)v226 )
                {
                  v228 = *(DataMasterBase_o **)(v201 + 32 + 8 * v227);
                  v229 = sub_1B64C4C(DataManager___c__DisplayClass49_1_TypeInfo);
                  System_Object___ctor((Il2CppObject *)v229, 0LL);
                  if ( !v228 )
                    goto LABEL_288;
                  if ( !v229 )
                    goto LABEL_288;
                  v232 = v228->fields._MasterName_k__BackingField;
                  *(_QWORD *)(v229 + 16) = v232;
                  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v229 + 16), (int32_t)v232, v230, v231);
                  v233 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v234 = (System_Predicate_object__o *)sub_1B64C4C(System_Predicate_string__TypeInfo);
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
                                                                    (const MethodInfo_34B0820 *)Method_System_Collections_Generic_List_string__FindIndex__);
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
                                                                      (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                                      (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                        *(const MethodInfo_34927D0 **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
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
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_2E3BCE0 *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EE930 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_201:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v243 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
                  UnityEngine_WaitForEndOfFrame___ctor(v243, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v243;
                  v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B649A4(v84, (int32_t)v243, v244, v245);
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
              v264 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v264, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v264;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B649A4(v84, (int32_t)v264, v265, v266);
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
              v126 = (System_Func_bool__o *)sub_1B64C4C(System_Func_bool__TypeInfo);
              System_Func_bool____ctor(
                v126,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v127 = (UnityEngine_WaitUntil_o *)sub_1B64C4C(UnityEngine_WaitUntil_TypeInfo);
              UnityEngine_WaitUntil___ctor(v127, v126, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v127;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B649A4(v84, (int32_t)v127, v128, v129);
              v87 = 9;
              goto LABEL_82;
            }
            goto LABEL_288;
          }
        }
LABEL_206:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_62610856(lockCountObj, &lockTaken, 0LL);
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
          v251 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v251, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v251;
          v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B649A4(v84, (int32_t)v251, v252, v253);
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
              sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, 0, v259, v254);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62431196(0LL);
              v261 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v261, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v261;
              v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B649A4(v84, (int32_t)v261, v262, v263);
              v87 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_288;
        }
        return 0;
      }
      v188 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v188, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v188;
      v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B649A4(v84, (int32_t)v188, v189, v190);
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
        v132 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v132, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v132;
        v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B649A4(v84, (int32_t)v132, v133, v134);
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
            v275 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v275, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v275;
            v84 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B649A4(v84, (int32_t)v275, v276, v277);
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_37847032; // x0
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

  if ( (byte_49FE687 & 1) == 0 )
  {
    sub_1B64A00(&CatAndMouseGame_TypeInfo, method);
    sub_1B64A00(&System_Convert_TypeInfo, v5);
    sub_1B64A00(&DataManager_TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1B64A00(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1B64A00(&JsonManager_TypeInfo, v10);
    sub_1B64A00(&NetworkManager_TypeInfo, v11);
    sub_1B64A00(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    sub_1B64A00(&StringLiteral_18151/*"contactURL"*/, v13);
    sub_1B64A00(&StringLiteral_19349/*"filePass"*/, v14);
    sub_1B64A00(&StringLiteral_17015/*"baseURL"*/, v15);
    sub_1B64A00(&StringLiteral_1/*""*/, v16);
    byte_49FE687 = 1;
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
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, 0, v19, v20);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, 0, v21, v22);
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
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, (int32_t)v26, v27, v28);
      v31 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v31 = DataManager_TypeInfo;
      }
      static_fields = v31->static_fields;
      static_fields->webViewData = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->webViewData, 0, v29, v30);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        this->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &this->fields.__2__current;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v35, v37, v38);
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
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, (int32_t)v42, v43, v44);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v45 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v45, 0LL);
        this->fields.__2__current = (Il2CppObject *)v45;
        v46 = &this->fields.__2__current;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)v46, (int32_t)v45, v47, v48);
        v49 = 2;
LABEL_30:
        *((_DWORD *)v46 - 2) = v49;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_37847032 = JsonManager__getDictionary_37847032(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_37847032;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_37847032, v52, v53);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64C4C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v54, 0LL);
        this->fields.__2__current = (Il2CppObject *)v54;
        v46 = &this->fields.__2__current;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)v46, (int32_t)v54, v55, v56);
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
              (Il2CppObject *)StringLiteral_17015/*"baseURL"*/,
              (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17015/*"baseURL"*/,
               (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
              (Il2CppObject *)StringLiteral_18151/*"contactURL"*/,
              (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18151/*"contactURL"*/,
               (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
             (Il2CppObject *)StringLiteral_19349/*"filePass"*/,
             (const MethodInfo_317BEE0 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1B64C5C(Item, v34);
        v61 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19349/*"filePass"*/,
                (const MethodInfo_317BC6C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v62 = (System_Collections_Generic_Dictionary_string__object__o *)v61;
        if ( v61 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v61->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v61->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1B64F1C(v61);
LABEL_54:
            sub_1B64C5C(webViewData, v23);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v60, v59, v62, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, 0, v64, v65);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, 0, v66, v67);
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

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
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