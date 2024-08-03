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

  if ( (byte_49FBF63 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_1/*""*/, v4);
    byte_49FBF63 = 1;
  }
  static_fields = DataManager_TypeInfo->static_fields;
  static_fields->readDataVersion = 0;
  static_fields->readDateVersion = 0LL;
  static_fields->dataVersion = 0;
  static_fields->dateVersion = 0LL;
  static_fields->updateData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->updateData, 0, v2, v3);
  v6 = DataManager_TypeInfo->static_fields;
  v6->webViewData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->webViewData, 0, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  v10 = DataManager_TypeInfo->static_fields;
  v10->serverHash = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v10->serverHash, v9, v11, v12);
}


void __fastcall DataManager___ctor(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x1
  __int64 v18; // x2
  Il2CppObject *v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_49FBF62 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_long_____ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_long____TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1B640C8(&object_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager___ctor__, v8);
    byte_49FBF62 = 1;
  }
  this->fields._DispLog = 1;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.saveNameList, (int32_t)v9, v10, v11);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_long____TypeInfo,
                                                       v12,
                                                       v13);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_long_____ctor__);
  this->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.saveDataMapList, (int32_t)v14, v15, v16);
  v19 = (Il2CppObject *)sub_1B64314(object_TypeInfo, v17, v18);
  System_Object___ctor(v19, 0LL);
  this->fields.lockCountObj = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lockCountObj, (int32_t)v19, v20, v21);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_36EC454 *)Method_SingletonMonoBehaviour_DataManager___ctor__);
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

  if ( (byte_49FBF40 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, v1);
    byte_49FBF40 = 1;
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

  if ( (byte_49FBF41 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    byte_49FBF41 = 1;
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

  if ( (byte_49FBF3F & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, v1);
    byte_49FBF3F = 1;
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

  if ( (byte_49FBF59 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____Clear__, v4);
    byte_49FBF59 = 1;
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
    sub_1B64324(v5);
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
  __int64 v516; // x1
  __int64 v517; // x2
  ServantMaster_o *v518; // x20
  __int64 v519; // x0
  __int64 v520; // x1
  int32_t v521; // w2
  int32_t v522; // w3
  il2cpp_array_size_t *p_max_length; // x21
  __int64 v524; // x1
  __int64 v525; // x2
  ServantClassMaster_o *v526; // x20
  int32_t v527; // w2
  int32_t v528; // w3
  __int64 v529; // x1
  __int64 v530; // x2
  ServantCommentMaster_o *v531; // x20
  int32_t v532; // w2
  int32_t v533; // w3
  __int64 v534; // x1
  __int64 v535; // x2
  ServantProfileMaster_o *v536; // x20
  int32_t v537; // w2
  int32_t v538; // w3
  __int64 v539; // x1
  __int64 v540; // x2
  WarMaster_o *v541; // x20
  int32_t v542; // w2
  int32_t v543; // w3
  __int64 v544; // x1
  __int64 v545; // x2
  UserMaster_o *v546; // x20
  int32_t v547; // w2
  int32_t v548; // w3
  __int64 v549; // x1
  __int64 v550; // x2
  UserGameMaster_o *v551; // x20
  int32_t v552; // w2
  int32_t v553; // w3
  __int64 v554; // x1
  __int64 v555; // x2
  TblUserMaster_o *v556; // x20
  int32_t v557; // w2
  int32_t v558; // w3
  __int64 v559; // x1
  __int64 v560; // x2
  UserItemMaster_o *v561; // x20
  int32_t v562; // w2
  int32_t v563; // w3
  __int64 v564; // x1
  __int64 v565; // x2
  UserServantMaster_o *v566; // x20
  int32_t v567; // w2
  int32_t v568; // w3
  __int64 v569; // x1
  __int64 v570; // x2
  UserServantStorageMaster_o *v571; // x20
  int32_t v572; // w2
  int32_t v573; // w3
  __int64 v574; // x1
  __int64 v575; // x2
  UserAccessaryMaster_o *v576; // x20
  int32_t v577; // w2
  int32_t v578; // w3
  __int64 v579; // x1
  __int64 v580; // x2
  UserQuestMaster_o *v581; // x20
  int32_t v582; // w2
  int32_t v583; // w3
  __int64 v584; // x1
  __int64 v585; // x2
  BattleMaster_o *v586; // x20
  int32_t v587; // w2
  int32_t v588; // w3
  __int64 v589; // x1
  __int64 v590; // x2
  OtherUserGameMaster_o *v591; // x20
  int32_t v592; // w2
  int32_t v593; // w3
  __int64 v594; // x1
  __int64 v595; // x2
  TblFriendMaster_o *v596; // x20
  int32_t v597; // w2
  int32_t v598; // w3
  __int64 v599; // x1
  __int64 v600; // x2
  AreaMaster_o *v601; // x20
  int32_t v602; // w2
  int32_t v603; // w3
  __int64 v604; // x1
  __int64 v605; // x2
  ServantCardMaster_o *v606; // x20
  int32_t v607; // w2
  int32_t v608; // w3
  __int64 v609; // x1
  __int64 v610; // x2
  EventMaster_o *v611; // x20
  int32_t v612; // w2
  int32_t v613; // w3
  __int64 v614; // x1
  __int64 v615; // x2
  ItemMaster_o *v616; // x20
  int32_t v617; // w2
  int32_t v618; // w3
  __int64 v619; // x1
  __int64 v620; // x2
  QuestMaster_o *v621; // x20
  int32_t v622; // w2
  int32_t v623; // w3
  __int64 v624; // x1
  __int64 v625; // x2
  QuestAddMaster_o *v626; // x20
  int32_t v627; // w2
  int32_t v628; // w3
  __int64 v629; // x1
  __int64 v630; // x2
  QuestReleaseMaster_o *v631; // x20
  int32_t v632; // w2
  int32_t v633; // w3
  __int64 v634; // x1
  __int64 v635; // x2
  QuestDateRangeMaster_o *v636; // x20
  int32_t v637; // w2
  int32_t v638; // w3
  __int64 v639; // x1
  __int64 v640; // x2
  QuestPhaseMaster_o *v641; // x20
  int32_t v642; // w2
  int32_t v643; // w3
  __int64 v644; // x1
  __int64 v645; // x2
  QuestPhaseDetailMaster_o *v646; // x20
  int32_t v647; // w2
  int32_t v648; // w3
  __int64 v649; // x1
  __int64 v650; // x2
  QuestGroupMaster_o *v651; // x20
  int32_t v652; // w2
  int32_t v653; // w3
  __int64 v654; // x1
  __int64 v655; // x2
  QuestRandomGroupMaster_o *v656; // x20
  int32_t v657; // w2
  int32_t v658; // w3
  __int64 v659; // x1
  __int64 v660; // x2
  QuestConsumeItemMaster_o *v661; // x20
  int32_t v662; // w2
  int32_t v663; // w3
  __int64 v664; // x1
  __int64 v665; // x2
  QuestMessageMaster_o *v666; // x20
  int32_t v667; // w2
  int32_t v668; // w3
  __int64 v669; // x1
  __int64 v670; // x2
  UserQuestInfoMaster_o *v671; // x20
  int32_t v672; // w2
  int32_t v673; // w3
  __int64 v674; // x1
  __int64 v675; // x2
  UserQuestRecordMaster_o *v676; // x20
  int32_t v677; // w2
  int32_t v678; // w3
  __int64 v679; // x1
  __int64 v680; // x2
  ViewQuestInfoMaster_o *v681; // x20
  int32_t v682; // w2
  int32_t v683; // w3
  __int64 v684; // x1
  __int64 v685; // x2
  ViewEnemyMaster_o *v686; // x20
  int32_t v687; // w2
  int32_t v688; // w3
  __int64 v689; // x1
  __int64 v690; // x2
  ViewQuestEnemyInfoMaster_o *v691; // x20
  int32_t v692; // w2
  int32_t v693; // w3
  __int64 v694; // x1
  __int64 v695; // x2
  BlankEarthSpotMaster_o *v696; // x20
  int32_t v697; // w2
  int32_t v698; // w3
  __int64 v699; // x1
  __int64 v700; // x2
  BlankEarthSpotAddMaster_o *v701; // x20
  int32_t v702; // w2
  int32_t v703; // w3
  __int64 v704; // x1
  __int64 v705; // x2
  SpotMaster_o *v706; // x20
  int32_t v707; // w2
  int32_t v708; // w3
  __int64 v709; // x1
  __int64 v710; // x2
  SpotImageMaster_o *v711; // x20
  int32_t v712; // w2
  int32_t v713; // w3
  __int64 v714; // x1
  __int64 v715; // x2
  SpotRoadMaster_o *v716; // x20
  int32_t v717; // w2
  int32_t v718; // w3
  __int64 v719; // x1
  __int64 v720; // x2
  SpotPathMaster_o *v721; // x20
  int32_t v722; // w2
  int32_t v723; // w3
  __int64 v724; // x1
  __int64 v725; // x2
  SpotAddMaster_o *v726; // x20
  int32_t v727; // w2
  int32_t v728; // w3
  __int64 v729; // x1
  __int64 v730; // x2
  MapGimmickMaster_o *v731; // x20
  int32_t v732; // w2
  int32_t v733; // w3
  __int64 v734; // x1
  __int64 v735; // x2
  GiftMaster_o *v736; // x20
  int32_t v737; // w2
  int32_t v738; // w3
  __int64 v739; // x1
  __int64 v740; // x2
  GiftAddMaster_o *v741; // x20
  int32_t v742; // w2
  int32_t v743; // w3
  __int64 v744; // x1
  __int64 v745; // x2
  ShopMaster_o *v746; // x20
  int32_t v747; // w2
  int32_t v748; // w3
  __int64 v749; // x1
  __int64 v750; // x2
  StoneShopMaster_o *v751; // x20
  int32_t v752; // w2
  int32_t v753; // w3
  __int64 v754; // x1
  __int64 v755; // x2
  BankShopMaster_o *v756; // x20
  int32_t v757; // w2
  int32_t v758; // w3
  __int64 v759; // x1
  __int64 v760; // x2
  ShopScriptMaster_o *v761; // x20
  int32_t v762; // w2
  int32_t v763; // w3
  __int64 v764; // x1
  __int64 v765; // x2
  StageMaster_o *v766; // x20
  int32_t v767; // w2
  int32_t v768; // w3
  __int64 v769; // x1
  __int64 v770; // x2
  ServantGroupMaster_o *v771; // x20
  int32_t v772; // w2
  int32_t v773; // w3
  __int64 v774; // x1
  __int64 v775; // x2
  ServantLimitMaster_o *v776; // x20
  int32_t v777; // w2
  int32_t v778; // w3
  __int64 v779; // x1
  __int64 v780; // x2
  ServantLimitAddMaster_o *v781; // x20
  int32_t v782; // w2
  int32_t v783; // w3
  __int64 v784; // x1
  __int64 v785; // x2
  ServantSkillMaster_o *v786; // x20
  int32_t v787; // w2
  int32_t v788; // w3
  __int64 v789; // x1
  __int64 v790; // x2
  ServantPassiveSkillMaster_o *v791; // x20
  int32_t v792; // w2
  int32_t v793; // w3
  __int64 v794; // x1
  __int64 v795; // x2
  BgmMaster_o *v796; // x20
  int32_t v797; // w2
  int32_t v798; // w3
  __int64 v799; // x1
  __int64 v800; // x2
  ServantScriptMaster_o *v801; // x20
  int32_t v802; // w2
  int32_t v803; // w3
  __int64 v804; // x1
  __int64 v805; // x2
  NewsMaster_o *v806; // x20
  int32_t v807; // w2
  int32_t v808; // w3
  __int64 v809; // x1
  __int64 v810; // x2
  TelopMaster_o *v811; // x20
  int32_t v812; // w2
  int32_t v813; // w3
  __int64 v814; // x1
  __int64 v815; // x2
  UserExpMaster_o *v816; // x20
  int32_t v817; // w2
  int32_t v818; // w3
  __int64 v819; // x1
  __int64 v820; // x2
  TreasureDvcMaster_o *v821; // x20
  int32_t v822; // w2
  int32_t v823; // w3
  __int64 v824; // x1
  __int64 v825; // x2
  ServantTreasureDvcMaster_o *v826; // x20
  int32_t v827; // w2
  int32_t v828; // w3
  __int64 v829; // x1
  __int64 v830; // x2
  SkillMaster_o *v831; // x20
  int32_t v832; // w2
  int32_t v833; // w3
  __int64 v834; // x1
  __int64 v835; // x2
  SkillLvMaster_o *v836; // x20
  int32_t v837; // w2
  int32_t v838; // w3
  __int64 v839; // x1
  __int64 v840; // x2
  SkillDetailMaster_o *v841; // x20
  int32_t v842; // w2
  int32_t v843; // w3
  __int64 v844; // x1
  __int64 v845; // x2
  CommandSpellMaster_o *v846; // x20
  int32_t v847; // w2
  int32_t v848; // w3
  __int64 v849; // x1
  __int64 v850; // x2
  EquipMaster_o *v851; // x20
  int32_t v852; // w2
  int32_t v853; // w3
  __int64 v854; // x1
  __int64 v855; // x2
  EquipExpMaster_o *v856; // x20
  int32_t v857; // w2
  int32_t v858; // w3
  __int64 v859; // x1
  __int64 v860; // x2
  EquipSkillMaster_o *v861; // x20
  int32_t v862; // w2
  int32_t v863; // w3
  __int64 v864; // x1
  __int64 v865; // x2
  SubEquipMaster_o *v866; // x20
  int32_t v867; // w2
  int32_t v868; // w3
  __int64 v869; // x1
  __int64 v870; // x2
  AccessaryMaster_o *v871; // x20
  int32_t v872; // w2
  int32_t v873; // w3
  __int64 v874; // x1
  __int64 v875; // x2
  UserPresentBoxMaster_o *v876; // x20
  int32_t v877; // w2
  int32_t v878; // w3
  __int64 v879; // x1
  __int64 v880; // x2
  UserDeckMaster_o *v881; // x20
  int32_t v882; // w2
  int32_t v883; // w3
  __int64 v884; // x1
  __int64 v885; // x2
  UserSubEquipMaster_o *v886; // x20
  int32_t v887; // w2
  int32_t v888; // w3
  __int64 v889; // x1
  __int64 v890; // x2
  GachaMaster_o *v891; // x20
  int32_t v892; // w2
  int32_t v893; // w3
  __int64 v894; // x1
  __int64 v895; // x2
  GachaImageMaster_o *v896; // x20
  int32_t v897; // w2
  int32_t v898; // w3
  __int64 v899; // x1
  __int64 v900; // x2
  UserGachaMaster_o *v901; // x20
  int32_t v902; // w2
  int32_t v903; // w3
  __int64 v904; // x1
  __int64 v905; // x2
  UserEquipMaster_o *v906; // x20
  int32_t v907; // w2
  int32_t v908; // w3
  __int64 v909; // x1
  __int64 v910; // x2
  UserServantCollectionMaster_o *v911; // x20
  int32_t v912; // w2
  int32_t v913; // w3
  __int64 v914; // x1
  __int64 v915; // x2
  FriendshipMaster_o *v916; // x20
  int32_t v917; // w2
  int32_t v918; // w3
  __int64 v919; // x1
  __int64 v920; // x2
  GachaTicketMaster_o *v921; // x20
  int32_t v922; // w2
  int32_t v923; // w3
  __int64 v924; // x1
  __int64 v925; // x2
  UserFormationMaster_o *v926; // x20
  int32_t v927; // w2
  int32_t v928; // w3
  __int64 v929; // x1
  __int64 v930; // x2
  FunctionMaster_o *v931; // x20
  int32_t v932; // w2
  int32_t v933; // w3
  __int64 v934; // x1
  __int64 v935; // x2
  BuffMaster_o *v936; // x20
  int32_t v937; // w2
  int32_t v938; // w3
  __int64 v939; // x1
  __int64 v940; // x2
  GachaReleaseMaster_o *v941; // x20
  int32_t v942; // w2
  int32_t v943; // w3
  __int64 v944; // x1
  __int64 v945; // x2
  CombineQpMaster_o *v946; // x20
  int32_t v947; // w2
  int32_t v948; // w3
  __int64 v949; // x1
  __int64 v950; // x2
  CombineMaterialMaster_o *v951; // x20
  int32_t v952; // w2
  int32_t v953; // w3
  __int64 v954; // x1
  __int64 v955; // x2
  EventCombineMaster_o *v956; // x20
  int32_t v957; // w2
  int32_t v958; // w3
  __int64 v959; // x1
  __int64 v960; // x2
  ServantExpMaster_o *v961; // x20
  int32_t v962; // w2
  int32_t v963; // w3
  __int64 v964; // x1
  __int64 v965; // x2
  CombineSkillMaster_o *v966; // x20
  int32_t v967; // w2
  int32_t v968; // w3
  __int64 v969; // x1
  __int64 v970; // x2
  CombineTdMaster_o *v971; // x20
  int32_t v972; // w2
  int32_t v973; // w3
  __int64 v974; // x1
  __int64 v975; // x2
  EventQuestMaster_o *v976; // x20
  int32_t v977; // w2
  int32_t v978; // w3
  __int64 v979; // x1
  __int64 v980; // x2
  EventCampaignMaster_o *v981; // x20
  int32_t v982; // w2
  int32_t v983; // w3
  __int64 v984; // x1
  __int64 v985; // x2
  IllustratorMaster_o *v986; // x20
  int32_t v987; // w2
  int32_t v988; // w3
  __int64 v989; // x1
  __int64 v990; // x2
  CvMaster_o *v991; // x20
  int32_t v992; // w2
  int32_t v993; // w3
  __int64 v994; // x1
  __int64 v995; // x2
  TreasureDvcLvMaster_o *v996; // x20
  int32_t v997; // w2
  int32_t v998; // w3
  __int64 v999; // x1
  __int64 v1000; // x2
  TreasureDvcDetailMaster_o *v1001; // x20
  int32_t v1002; // w2
  int32_t v1003; // w3
  __int64 v1004; // x1
  __int64 v1005; // x2
  UserFollowerMaster_o *v1006; // x20
  int32_t v1007; // w2
  int32_t v1008; // w3
  __int64 v1009; // x1
  __int64 v1010; // x2
  NpcFollowerMaster_o *v1011; // x20
  int32_t v1012; // w2
  int32_t v1013; // w3
  __int64 v1014; // x1
  __int64 v1015; // x2
  NpcServantFollowerMaster_o *v1016; // x20
  int32_t v1017; // w2
  int32_t v1018; // w3
  __int64 v1019; // x1
  __int64 v1020; // x2
  UserEventMaster_o *v1021; // x20
  int32_t v1022; // w2
  int32_t v1023; // w3
  __int64 v1024; // x1
  __int64 v1025; // x2
  UserShopMaster_o *v1026; // x20
  int32_t v1027; // w2
  int32_t v1028; // w3
  __int64 v1029; // x1
  __int64 v1030; // x2
  UserContinueMaster_o *v1031; // x20
  int32_t v1032; // w2
  int32_t v1033; // w3
  __int64 v1034; // x1
  __int64 v1035; // x2
  ConstantMaster_o *v1036; // x20
  int32_t v1037; // w2
  int32_t v1038; // w3
  __int64 v1039; // x1
  __int64 v1040; // x2
  ConstantLongMaster_o *v1041; // x20
  int32_t v1042; // w2
  int32_t v1043; // w3
  __int64 v1044; // x1
  __int64 v1045; // x2
  ConstantStrMaster_o *v1046; // x20
  int32_t v1047; // w2
  int32_t v1048; // w3
  __int64 v1049; // x1
  __int64 v1050; // x2
  AiMaster_o *v1051; // x20
  int32_t v1052; // w2
  int32_t v1053; // w3
  __int64 v1054; // x1
  __int64 v1055; // x2
  AiActMaster_o *v1056; // x20
  int32_t v1057; // w2
  int32_t v1058; // w3
  __int64 v1059; // x1
  __int64 v1060; // x2
  AttriRelationMaster_o *v1061; // x20
  int32_t v1062; // w2
  int32_t v1063; // w3
  __int64 v1064; // x1
  __int64 v1065; // x2
  ClassRelationMaster_o *v1066; // x20
  int32_t v1067; // w2
  int32_t v1068; // w3
  __int64 v1069; // x1
  __int64 v1070; // x2
  EffectMaster_o *v1071; // x20
  int32_t v1072; // w2
  int32_t v1073; // w3
  __int64 v1074; // x1
  __int64 v1075; // x2
  EquipImageMaster_o *v1076; // x20
  int32_t v1077; // w2
  int32_t v1078; // w3
  __int64 v1079; // x1
  __int64 v1080; // x2
  ServantVoiceMaster_o *v1081; // x20
  int32_t v1082; // w2
  int32_t v1083; // w3
  __int64 v1084; // x1
  __int64 v1085; // x2
  CombineLimitMaster_o *v1086; // x20
  int32_t v1087; // w2
  int32_t v1088; // w3
  __int64 v1089; // x1
  __int64 v1090; // x2
  CardMaster_o *v1091; // x20
  int32_t v1092; // w2
  int32_t v1093; // w3
  __int64 v1094; // x1
  __int64 v1095; // x2
  CombineQpSvtEquipMaster_o *v1096; // x20
  int32_t v1097; // w2
  int32_t v1098; // w3
  __int64 v1099; // x1
  __int64 v1100; // x2
  ServantRarityMaster_o *v1101; // x20
  int32_t v1102; // w2
  int32_t v1103; // w3
  __int64 v1104; // x1
  __int64 v1105; // x2
  SetItemMaster_o *v1106; // x20
  int32_t v1107; // w2
  int32_t v1108; // w3
  __int64 v1109; // x1
  __int64 v1110; // x2
  RecoverMaster_o *v1111; // x20
  int32_t v1112; // w2
  int32_t v1113; // w3
  __int64 v1114; // x1
  __int64 v1115; // x2
  BannerMaster_o *v1116; // x20
  int32_t v1117; // w2
  int32_t v1118; // w3
  __int64 v1119; // x1
  __int64 v1120; // x2
  ShopReleaseMaster_o *v1121; // x20
  int32_t v1122; // w2
  int32_t v1123; // w3
  __int64 v1124; // x1
  __int64 v1125; // x2
  EventRewardMaster_o *v1126; // x20
  int32_t v1127; // w2
  int32_t v1128; // w3
  __int64 v1129; // x1
  __int64 v1130; // x2
  EventDetailMaster_o *v1131; // x20
  int32_t v1132; // w2
  int32_t v1133; // w3
  __int64 v1134; // x1
  __int64 v1135; // x2
  EventServantMaster_o *v1136; // x20
  int32_t v1137; // w2
  int32_t v1138; // w3
  __int64 v1139; // x1
  __int64 v1140; // x2
  BoxGachaMaster_o *v1141; // x20
  int32_t v1142; // w2
  int32_t v1143; // w3
  __int64 v1144; // x1
  __int64 v1145; // x2
  BoxGachaBaseMaster_o *v1146; // x20
  int32_t v1147; // w2
  int32_t v1148; // w3
  __int64 v1149; // x1
  __int64 v1150; // x2
  BoxGachaTalkMaster_o *v1151; // x20
  int32_t v1152; // w2
  int32_t v1153; // w3
  __int64 v1154; // x1
  __int64 v1155; // x2
  UserBoxGachaMaster_o *v1156; // x20
  int32_t v1157; // w2
  int32_t v1158; // w3
  __int64 v1159; // x1
  __int64 v1160; // x2
  BoxGachaHistoryMaster_o *v1161; // x20
  int32_t v1162; // w2
  int32_t v1163; // w3
  __int64 v1164; // x1
  __int64 v1165; // x2
  BattleBgMaster_o *v1166; // x20
  int32_t v1167; // w2
  int32_t v1168; // w3
  __int64 v1169; // x1
  __int64 v1170; // x2
  TipsBattleMaster_o *v1171; // x20
  int32_t v1172; // w2
  int32_t v1173; // w3
  __int64 v1174; // x1
  __int64 v1175; // x2
  UserLoginMaster_o *v1176; // x20
  int32_t v1177; // w2
  int32_t v1178; // w3
  __int64 v1179; // x1
  __int64 v1180; // x2
  VoiceMaster_o *v1181; // x20
  int32_t v1182; // w2
  int32_t v1183; // w3
  __int64 v1184; // x1
  __int64 v1185; // x2
  EventRewardExtraMaster_o *v1186; // x20
  int32_t v1187; // w2
  int32_t v1188; // w3
  __int64 v1189; // x1
  __int64 v1190; // x2
  EventMissionMaster_o *v1191; // x20
  int32_t v1192; // w2
  int32_t v1193; // w3
  __int64 v1194; // x1
  __int64 v1195; // x2
  EventMissionActionMaster_o *v1196; // x20
  int32_t v1197; // w2
  int32_t v1198; // w3
  __int64 v1199; // x1
  __int64 v1200; // x2
  EventMissionActionAddMaster_o *v1201; // x20
  int32_t v1202; // w2
  int32_t v1203; // w3
  __int64 v1204; // x1
  __int64 v1205; // x2
  EventMissionConditionMaster_o *v1206; // x20
  int32_t v1207; // w2
  int32_t v1208; // w3
  __int64 v1209; // x1
  __int64 v1210; // x2
  EventMissionCondDetailMaster_o *v1211; // x20
  int32_t v1212; // w2
  int32_t v1213; // w3
  __int64 v1214; // x1
  __int64 v1215; // x2
  EventMissionAddMaster_o *v1216; // x20
  int32_t v1217; // w2
  int32_t v1218; // w3
  __int64 v1219; // x1
  __int64 v1220; // x2
  CompleteMissionMaster_o *v1221; // x20
  int32_t v1222; // w2
  int32_t v1223; // w3
  __int64 v1224; // x1
  __int64 v1225; // x2
  EventRewardSetMaster_o *v1226; // x20
  int32_t v1227; // w2
  int32_t v1228; // w3
  __int64 v1229; // x1
  __int64 v1230; // x2
  UserEventMissionMaster_o *v1231; // x20
  int32_t v1232; // w2
  int32_t v1233; // w3
  __int64 v1234; // x1
  __int64 v1235; // x2
  UserEventMissionCondDetailMaster_o *v1236; // x20
  int32_t v1237; // w2
  int32_t v1238; // w3
  __int64 v1239; // x1
  __int64 v1240; // x2
  BoxGachaBaseDetailMaster_o *v1241; // x20
  int32_t v1242; // w2
  int32_t v1243; // w3
  __int64 v1244; // x1
  __int64 v1245; // x2
  UserServantLeaderMaster_o *v1246; // x20
  int32_t v1247; // w2
  int32_t v1248; // w3
  __int64 v1249; // x1
  __int64 v1250; // x2
  ClosedMessageMaster_o *v1251; // x20
  int32_t v1252; // w2
  int32_t v1253; // w3
  __int64 v1254; // x1
  __int64 v1255; // x2
  FunctionGroupMaster_o *v1256; // x20
  int32_t v1257; // w2
  int32_t v1258; // w3
  __int64 v1259; // x1
  __int64 v1260; // x2
  EventRaidMaster_o *v1261; // x20
  int32_t v1262; // w2
  int32_t v1263; // w3
  __int64 v1264; // x1
  __int64 v1265; // x2
  TotalEventRaidMaster_o *v1266; // x20
  int32_t v1267; // w2
  int32_t v1268; // w3
  __int64 v1269; // x1
  __int64 v1270; // x2
  UserEventRaidMaster_o *v1271; // x20
  int32_t v1272; // w2
  int32_t v1273; // w3
  __int64 v1274; // x1
  __int64 v1275; // x2
  EventPointMaster_o *v1276; // x20
  int32_t v1277; // w2
  int32_t v1278; // w3
  __int64 v1279; // x1
  __int64 v1280; // x2
  EventPointGroupMaster_o *v1281; // x20
  int32_t v1282; // w2
  int32_t v1283; // w3
  __int64 v1284; // x1
  __int64 v1285; // x2
  TotalEventPointMaster_o *v1286; // x20
  int32_t v1287; // w2
  int32_t v1288; // w3
  __int64 v1289; // x1
  __int64 v1290; // x2
  UserEventPointMaster_o *v1291; // x20
  int32_t v1292; // w2
  int32_t v1293; // w3
  __int64 v1294; // x1
  __int64 v1295; // x2
  EventPointUpperMaster_o *v1296; // x20
  int32_t v1297; // w2
  int32_t v1298; // w3
  __int64 v1299; // x1
  __int64 v1300; // x2
  EventPointUpperReleaseMaster_o *v1301; // x20
  int32_t v1302; // w2
  int32_t v1303; // w3
  __int64 v1304; // x1
  __int64 v1305; // x2
  EventRaceMaster_o *v1306; // x20
  int32_t v1307; // w2
  int32_t v1308; // w3
  __int64 v1309; // x1
  __int64 v1310; // x2
  EventRaceResultMaster_o *v1311; // x20
  int32_t v1312; // w2
  int32_t v1313; // w3
  __int64 v1314; // x1
  __int64 v1315; // x2
  QuestRacePointMaster_o *v1316; // x20
  int32_t v1317; // w2
  int32_t v1318; // w3
  __int64 v1319; // x1
  __int64 v1320; // x2
  UserEventRaceMaster_o *v1321; // x20
  int32_t v1322; // w2
  int32_t v1323; // w3
  __int64 v1324; // x1
  __int64 v1325; // x2
  EventScriptMaster_o *v1326; // x20
  int32_t v1327; // w2
  int32_t v1328; // w3
  __int64 v1329; // x1
  __int64 v1330; // x2
  EventScriptReleaseMaster_o *v1331; // x20
  int32_t v1332; // w2
  int32_t v1333; // w3
  __int64 v1334; // x1
  __int64 v1335; // x2
  UserPresentHistoryMaster_o *v1336; // x20
  int32_t v1337; // w2
  int32_t v1338; // w3
  __int64 v1339; // x1
  __int64 v1340; // x2
  MstMissionMaster_o *v1341; // x20
  int32_t v1342; // w2
  int32_t v1343; // w3
  __int64 v1344; // x1
  __int64 v1345; // x2
  ServantExceedMaster_o *v1346; // x20
  int32_t v1347; // w2
  int32_t v1348; // w3
  __int64 v1349; // x1
  __int64 v1350; // x2
  PartialMaintenanceMaster_o *v1351; // x20
  int32_t v1352; // w2
  int32_t v1353; // w3
  __int64 v1354; // x1
  __int64 v1355; // x2
  GuideMaster_o *v1356; // x20
  int32_t v1357; // w2
  int32_t v1358; // w3
  __int64 v1359; // x1
  __int64 v1360; // x2
  MstMissionDisplayInfoMaster_o *v1361; // x20
  int32_t v1362; // w2
  int32_t v1363; // w3
  __int64 v1364; // x1
  __int64 v1365; // x2
  GachaGroupMaster_o *v1366; // x20
  int32_t v1367; // w2
  int32_t v1368; // w3
  __int64 v1369; // x1
  __int64 v1370; // x2
  QuestResetMaster_o *v1371; // x20
  int32_t v1372; // w2
  int32_t v1373; // w3
  __int64 v1374; // x1
  __int64 v1375; // x2
  WarAddMaster_o *v1376; // x20
  int32_t v1377; // w2
  int32_t v1378; // w3
  __int64 v1379; // x1
  __int64 v1380; // x2
  EventItemDisplayMaster_o *v1381; // x20
  int32_t v1382; // w2
  int32_t v1383; // w3
  __int64 v1384; // x1
  __int64 v1385; // x2
  EventItemDisplayGroupMaster_o *v1386; // x20
  int32_t v1387; // w2
  int32_t v1388; // w3
  __int64 v1389; // x1
  __int64 v1390; // x2
  EventItemDisplayReleaseMaster_o *v1391; // x20
  int32_t v1392; // w2
  int32_t v1393; // w3
  __int64 v1394; // x1
  __int64 v1395; // x2
  EventTutorialMaster_o *v1396; // x20
  int32_t v1397; // w2
  int32_t v1398; // w3
  __int64 v1399; // x1
  __int64 v1400; // x2
  EventTutorialCondMaster_o *v1401; // x20
  int32_t v1402; // w2
  int32_t v1403; // w3
  __int64 v1404; // x1
  __int64 v1405; // x2
  VoiceReleaseMaster_o *v1406; // x20
  int32_t v1407; // w2
  int32_t v1408; // w3
  __int64 v1409; // x1
  __int64 v1410; // x2
  EventSuperBossMaster_o *v1411; // x20
  int32_t v1412; // w2
  int32_t v1413; // w3
  __int64 v1414; // x1
  __int64 v1415; // x2
  UserSuperBossMaster_o *v1416; // x20
  int32_t v1417; // w2
  int32_t v1418; // w3
  __int64 v1419; // x1
  __int64 v1420; // x2
  QuestScriptMaster_o *v1421; // x20
  int32_t v1422; // w2
  int32_t v1423; // w3
  __int64 v1424; // x1
  __int64 v1425; // x2
  QuestScriptReleaseMaster_o *v1426; // x20
  int32_t v1427; // w2
  int32_t v1428; // w3
  __int64 v1429; // x1
  __int64 v1430; // x2
  MaterialFolderMaster_o *v1431; // x20
  int32_t v1432; // w2
  int32_t v1433; // w3
  __int64 v1434; // x1
  __int64 v1435; // x2
  RestrictionMaster_o *v1436; // x20
  int32_t v1437; // w2
  int32_t v1438; // w3
  __int64 v1439; // x1
  __int64 v1440; // x2
  QuestRestrictionMaster_o *v1441; // x20
  int32_t v1442; // w2
  int32_t v1443; // w3
  __int64 v1444; // x1
  __int64 v1445; // x2
  ServantVoiceRelationMaster_o *v1446; // x20
  int32_t v1447; // w2
  int32_t v1448; // w3
  __int64 v1449; // x1
  __int64 v1450; // x2
  ShopDetailMaster_o *v1451; // x20
  int32_t v1452; // w2
  int32_t v1453; // w3
  __int64 v1454; // x1
  __int64 v1455; // x2
  ServantScriptAddMaster_o *v1456; // x20
  int32_t v1457; // w2
  int32_t v1458; // w3
  __int64 v1459; // x1
  __int64 v1460; // x2
  CombineMaster_o *v1461; // x20
  int32_t v1462; // w2
  int32_t v1463; // w3
  __int64 v1464; // x1
  __int64 v1465; // x2
  AiFieldMaster_o *v1466; // x20
  int32_t v1467; // w2
  int32_t v1468; // w3
  __int64 v1469; // x1
  __int64 v1470; // x2
  ServantCommentAddMaster_o *v1471; // x20
  int32_t v1472; // w2
  int32_t v1473; // w3
  __int64 v1474; // x1
  __int64 v1475; // x2
  EventFilterMaster_o *v1476; // x20
  int32_t v1477; // w2
  int32_t v1478; // w3
  __int64 v1479; // x1
  __int64 v1480; // x2
  UserSupportDeckMaster_o *v1481; // x20
  int32_t v1482; // w2
  int32_t v1483; // w3
  __int64 v1484; // x1
  __int64 v1485; // x2
  EventRewardSceneMaster_o *v1486; // x20
  int32_t v1487; // w2
  int32_t v1488; // w3
  __int64 v1489; // x1
  __int64 v1490; // x2
  EventVoicePlayMaster_o *v1491; // x20
  int32_t v1492; // w2
  int32_t v1493; // w3
  __int64 v1494; // x1
  __int64 v1495; // x2
  GachaSubMaster_o *v1496; // x20
  int32_t v1497; // w2
  int32_t v1498; // w3
  __int64 v1499; // x1
  __int64 v1500; // x2
  GachaDetailMaster_o *v1501; // x20
  int32_t v1502; // w2
  int32_t v1503; // w3
  __int64 v1504; // x1
  __int64 v1505; // x2
  GachaBonusSelectMaster_o *v1506; // x20
  int32_t v1507; // w2
  int32_t v1508; // w3
  __int64 v1509; // x1
  __int64 v1510; // x2
  GachaBonusSelectLineupMaster_o *v1511; // x20
  int32_t v1512; // w2
  int32_t v1513; // w3
  __int64 v1514; // x1
  __int64 v1515; // x2
  ServantChangeMaster_o *v1516; // x20
  int32_t v1517; // w2
  int32_t v1518; // w3
  __int64 v1519; // x1
  __int64 v1520; // x2
  VoiceCondMaster_o *v1521; // x20
  int32_t v1522; // w2
  int32_t v1523; // w3
  __int64 v1524; // x1
  __int64 v1525; // x2
  BgmReleaseMaster_o *v1526; // x20
  int32_t v1527; // w2
  int32_t v1528; // w3
  __int64 v1529; // x1
  __int64 v1530; // x2
  MyRoomAddMaster_o *v1531; // x20
  int32_t v1532; // w2
  int32_t v1533; // w3
  __int64 v1534; // x1
  __int64 v1535; // x2
  ShopActionMaster_o *v1536; // x20
  int32_t v1537; // w2
  int32_t v1538; // w3
  __int64 v1539; // x1
  __int64 v1540; // x2
  EventRewardSceneReleaseMaster_o *v1541; // x20
  int32_t v1542; // w2
  int32_t v1543; // w3
  __int64 v1544; // x1
  __int64 v1545; // x2
  QuestBehaviorMaster_o *v1546; // x20
  int32_t v1547; // w2
  int32_t v1548; // w3
  __int64 v1549; // x1
  __int64 v1550; // x2
  MapMaster_o *v1551; // x20
  int32_t v1552; // w2
  int32_t v1553; // w3
  __int64 v1554; // x1
  __int64 v1555; // x2
  MapCondMaster_o *v1556; // x20
  int32_t v1557; // w2
  int32_t v1558; // w3
  __int64 v1559; // x1
  __int64 v1560; // x2
  MapButtonMaster_o *v1561; // x20
  int32_t v1562; // w2
  int32_t v1563; // w3
  __int64 v1564; // x1
  __int64 v1565; // x2
  BannerAddMaster_o *v1566; // x20
  int32_t v1567; // w2
  int32_t v1568; // w3
  __int64 v1569; // x1
  __int64 v1570; // x2
  EventAddMaster_o *v1571; // x20
  int32_t v1572; // w2
  int32_t v1573; // w3
  __int64 v1574; // x1
  __int64 v1575; // x2
  TotalLoginMaster_o *v1576; // x20
  int32_t v1577; // w2
  int32_t v1578; // w3
  __int64 v1579; // x1
  __int64 v1580; // x2
  ServantFilterMaster_o *v1581; // x20
  int32_t v1582; // w2
  int32_t v1583; // w3
  __int64 v1584; // x1
  __int64 v1585; // x2
  CombineCostumeMaster_o *v1586; // x20
  int32_t v1587; // w2
  int32_t v1588; // w3
  __int64 v1589; // x1
  __int64 v1590; // x2
  ServantCostumeMaster_o *v1591; // x20
  int32_t v1592; // w2
  int32_t v1593; // w3
  __int64 v1594; // x1
  __int64 v1595; // x2
  ServantCostumeReleaseMaster_o *v1596; // x20
  int32_t v1597; // w2
  int32_t v1598; // w3
  __int64 v1599; // x1
  __int64 v1600; // x2
  UserFriendRequestHistoryMaster_o *v1601; // x20
  int32_t v1602; // w2
  int32_t v1603; // w3
  __int64 v1604; // x1
  __int64 v1605; // x2
  UserBlacklistMaster_o *v1606; // x20
  int32_t v1607; // w2
  int32_t v1608; // w3
  __int64 v1609; // x1
  __int64 v1610; // x2
  ItemSelectMaster_o *v1611; // x20
  int32_t v1612; // w2
  int32_t v1613; // w3
  __int64 v1614; // x1
  __int64 v1615; // x2
  TotalEventRaceMaster_o *v1616; // x20
  int32_t v1617; // w2
  int32_t v1618; // w3
  __int64 v1619; // x1
  __int64 v1620; // x2
  EventPointGroupAddMaster_o *v1621; // x20
  int32_t v1622; // w2
  int32_t v1623; // w3
  __int64 v1624; // x1
  __int64 v1625; // x2
  VoicePlayGroupMaster_o *v1626; // x20
  int32_t v1627; // w2
  int32_t v1628; // w3
  __int64 v1629; // x1
  __int64 v1630; // x2
  VoicePlayCondMaster_o *v1631; // x20
  int32_t v1632; // w2
  int32_t v1633; // w3
  __int64 v1634; // x1
  __int64 v1635; // x2
  GachaStoryAdjustMaster_o *v1636; // x20
  int32_t v1637; // w2
  int32_t v1638; // w3
  __int64 v1639; // x1
  __int64 v1640; // x2
  ServantFlagMaster_o *v1641; // x20
  int32_t v1642; // w2
  int32_t v1643; // w3
  __int64 v1644; // x1
  __int64 v1645; // x2
  ServantFlagReleaseMaster_o *v1646; // x20
  int32_t v1647; // w2
  int32_t v1648; // w3
  __int64 v1649; // x1
  __int64 v1650; // x2
  EventLocationCampaignMaster_o *v1651; // x20
  int32_t v1652; // w2
  int32_t v1653; // w3
  __int64 v1654; // x1
  __int64 v1655; // x2
  CampaignInfoMaster_o *v1656; // x20
  int32_t v1657; // w2
  int32_t v1658; // w3
  __int64 v1659; // x1
  __int64 v1660; // x2
  DialogMessageMaster_o *v1661; // x20
  int32_t v1662; // w2
  int32_t v1663; // w3
  __int64 v1664; // x1
  __int64 v1665; // x2
  ServantIndividualityMaster_o *v1666; // x20
  int32_t v1667; // w2
  int32_t v1668; // w3
  __int64 v1669; // x1
  __int64 v1670; // x2
  BoardMessageMaster_o *v1671; // x20
  int32_t v1672; // w2
  int32_t v1673; // w3
  __int64 v1674; // x1
  __int64 v1675; // x2
  BoardMessageReleaseMaster_o *v1676; // x20
  int32_t v1677; // w2
  int32_t v1678; // w3
  __int64 v1679; // x1
  __int64 v1680; // x2
  EventServantFatigueMaster_o *v1681; // x20
  int32_t v1682; // w2
  int32_t v1683; // w3
  __int64 v1684; // x1
  __int64 v1685; // x2
  UserEventDeckMaster_o *v1686; // x20
  int32_t v1687; // w2
  int32_t v1688; // w3
  __int64 v1689; // x1
  __int64 v1690; // x2
  EventTowerMaster_o *v1691; // x20
  int32_t v1692; // w2
  int32_t v1693; // w3
  __int64 v1694; // x1
  __int64 v1695; // x2
  EventTowerRewardMaster_o *v1696; // x20
  int32_t v1697; // w2
  int32_t v1698; // w3
  __int64 v1699; // x1
  __int64 v1700; // x2
  EventBulletinBoardMaster_o *v1701; // x20
  int32_t v1702; // w2
  int32_t v1703; // w3
  __int64 v1704; // x1
  __int64 v1705; // x2
  EventBulletinBoardReleaseMaster_o *v1706; // x20
  int32_t v1707; // w2
  int32_t v1708; // w3
  __int64 v1709; // x1
  __int64 v1710; // x2
  EventFactoryMaster_o *v1711; // x20
  int32_t v1712; // w2
  int32_t v1713; // w3
  __int64 v1714; // x1
  __int64 v1715; // x2
  ShopGroupMaster_o *v1716; // x20
  int32_t v1717; // w2
  int32_t v1718; // w3
  __int64 v1719; // x1
  __int64 v1720; // x2
  AuraEffectMaster_o *v1721; // x20
  int32_t v1722; // w2
  int32_t v1723; // w3
  __int64 v1724; // x1
  __int64 v1725; // x2
  AuraEffectPosOverwriteMaster_o *v1726; // x20
  int32_t v1727; // w2
  int32_t v1728; // w3
  __int64 v1729; // x1
  __int64 v1730; // x2
  UserEventMissionFixMaster_o *v1731; // x20
  int32_t v1732; // w2
  int32_t v1733; // w3
  __int64 v1734; // x1
  __int64 v1735; // x2
  NotEndEventMissionFixMaster_o *v1736; // x20
  int32_t v1737; // w2
  int32_t v1738; // w3
  __int64 v1739; // x1
  __int64 v1740; // x2
  EnemyMstMaster_o *v1741; // x20
  int32_t v1742; // w2
  int32_t v1743; // w3
  __int64 v1744; // x1
  __int64 v1745; // x2
  EnemyMstBattleMaster_o *v1746; // x20
  int32_t v1747; // w2
  int32_t v1748; // w3
  __int64 v1749; // x1
  __int64 v1750; // x2
  ServantSkillReleaseMaster_o *v1751; // x20
  int32_t v1752; // w2
  int32_t v1753; // w3
  __int64 v1754; // x1
  __int64 v1755; // x2
  ServantPassiveSkillReleaseMaster_o *v1756; // x20
  int32_t v1757; // w2
  int32_t v1758; // w3
  __int64 v1759; // x1
  __int64 v1760; // x2
  ServantTreasureDeviceReleaseMaster_o *v1761; // x20
  int32_t v1762; // w2
  int32_t v1763; // w3
  __int64 v1764; // x1
  __int64 v1765; // x2
  MapGimmickReleaseMaster_o *v1766; // x20
  int32_t v1767; // w2
  int32_t v1768; // w3
  __int64 v1769; // x1
  __int64 v1770; // x2
  CommandCodeMaster_o *v1771; // x20
  int32_t v1772; // w2
  int32_t v1773; // w3
  __int64 v1774; // x1
  __int64 v1775; // x2
  ServantCommandCodeUnlockMaster_o *v1776; // x20
  int32_t v1777; // w2
  int32_t v1778; // w3
  __int64 v1779; // x1
  __int64 v1780; // x2
  UserCommandCodeMaster_o *v1781; // x20
  int32_t v1782; // w2
  int32_t v1783; // w3
  __int64 v1784; // x1
  __int64 v1785; // x2
  UserCommandCodeCollectionMaster_o *v1786; // x20
  int32_t v1787; // w2
  int32_t v1788; // w3
  __int64 v1789; // x1
  __int64 v1790; // x2
  UserServantCommandCodeMaster_o *v1791; // x20
  int32_t v1792; // w2
  int32_t v1793; // w3
  __int64 v1794; // x1
  __int64 v1795; // x2
  UserServantCommandCardMaster_o *v1796; // x20
  int32_t v1797; // w2
  int32_t v1798; // w3
  __int64 v1799; // x1
  __int64 v1800; // x2
  CommandCardRankParamMaster_o *v1801; // x20
  int32_t v1802; // w2
  int32_t v1803; // w3
  __int64 v1804; // x1
  __int64 v1805; // x2
  CommandCodeSkillMaster_o *v1806; // x20
  int32_t v1807; // w2
  int32_t v1808; // w3
  __int64 v1809; // x1
  __int64 v1810; // x2
  CommandCodeSkillReleaseMaster_o *v1811; // x20
  int32_t v1812; // w2
  int32_t v1813; // w3
  __int64 v1814; // x1
  __int64 v1815; // x2
  CommandCodeCommentMaster_o *v1816; // x20
  int32_t v1817; // w2
  int32_t v1818; // w3
  __int64 v1819; // x1
  __int64 v1820; // x2
  EventStatusMaster_o *v1821; // x20
  int32_t v1822; // w2
  int32_t v1823; // w3
  __int64 v1824; // x1
  __int64 v1825; // x2
  EventStatusQuestMaster_o *v1826; // x20
  int32_t v1827; // w2
  int32_t v1828; // w3
  __int64 v1829; // x1
  __int64 v1830; // x2
  CommonRestrictionMaster_o *v1831; // x20
  int32_t v1832; // w2
  int32_t v1833; // w3
  __int64 v1834; // x1
  __int64 v1835; // x2
  EventPointBuffMaster_o *v1836; // x20
  int32_t v1837; // w2
  int32_t v1838; // w3
  __int64 v1839; // x1
  __int64 v1840; // x2
  UserFollowMaster_o *v1841; // x20
  int32_t v1842; // w2
  int32_t v1843; // w3
  __int64 v1844; // x1
  __int64 v1845; // x2
  EventRewardGuideReleaseMaster_o *v1846; // x20
  int32_t v1847; // w2
  int32_t v1848; // w3
  __int64 v1849; // x1
  __int64 v1850; // x2
  NpcServantEquipMaster_o *v1851; // x20
  int32_t v1852; // w2
  int32_t v1853; // w3
  __int64 v1854; // x1
  __int64 v1855; // x2
  EventCampaignReleaseMaster_o *v1856; // x20
  int32_t v1857; // w2
  int32_t v1858; // w3
  __int64 v1859; // x1
  __int64 v1860; // x2
  ServantMaterialFolderMaster_o *v1861; // x20
  int32_t v1862; // w2
  int32_t v1863; // w3
  __int64 v1864; // x1
  __int64 v1865; // x2
  EventEquipSkillReleaseMaster_o *v1866; // x20
  int32_t v1867; // w2
  int32_t v1868; // w3
  __int64 v1869; // x1
  __int64 v1870; // x2
  EventPointActivityMaster_o *v1871; // x20
  int32_t v1872; // w2
  int32_t v1873; // w3
  __int64 v1874; // x1
  __int64 v1875; // x2
  FunctionCategoryMaster_o *v1876; // x20
  int32_t v1877; // w2
  int32_t v1878; // w3
  __int64 v1879; // x1
  __int64 v1880; // x2
  QuestPickupMaster_o *v1881; // x20
  int32_t v1882; // w2
  int32_t v1883; // w3
  __int64 v1884; // x1
  __int64 v1885; // x2
  EventUiMaster_o *v1886; // x20
  int32_t v1887; // w2
  int32_t v1888; // w3
  __int64 v1889; // x1
  __int64 v1890; // x2
  EventUiReleaseMaster_o *v1891; // x20
  int32_t v1892; // w2
  int32_t v1893; // w3
  __int64 v1894; // x1
  __int64 v1895; // x2
  EventUiValueMaster_o *v1896; // x20
  int32_t v1897; // w2
  int32_t v1898; // w3
  __int64 v1899; // x1
  __int64 v1900; // x2
  EventConquestRewardMaster_o *v1901; // x20
  int32_t v1902; // w2
  int32_t v1903; // w3
  __int64 v1904; // x1
  __int64 v1905; // x2
  NpcFollowerReleaseMaster_o *v1906; // x20
  int32_t v1907; // w2
  int32_t v1908; // w3
  __int64 v1909; // x1
  __int64 v1910; // x2
  EventBonusFilterMaster_o *v1911; // x20
  int32_t v1912; // w2
  int32_t v1913; // w3
  __int64 v1914; // x1
  __int64 v1915; // x2
  EventBonusFilterGroupInfoMaster_o *v1916; // x20
  int32_t v1917; // w2
  int32_t v1918; // w3
  __int64 v1919; // x1
  __int64 v1920; // x2
  EventBonusFilterGroupMemberMaster_o *v1921; // x20
  int32_t v1922; // w2
  int32_t v1923; // w3
  __int64 v1924; // x1
  __int64 v1925; // x2
  UserGachaExtraCountMaster_o *v1926; // x20
  int32_t v1927; // w2
  int32_t v1928; // w3
  __int64 v1929; // x1
  __int64 v1930; // x2
  PrivilegeMaster_o *v1931; // x20
  int32_t v1932; // w2
  int32_t v1933; // w3
  __int64 v1934; // x1
  __int64 v1935; // x2
  UserPrivilegeMaster_o *v1936; // x20
  int32_t v1937; // w2
  int32_t v1938; // w3
  __int64 v1939; // x1
  __int64 v1940; // x2
  UserQuestRouteMaster_o *v1941; // x20
  int32_t v1942; // w2
  int32_t v1943; // w3
  __int64 v1944; // x1
  __int64 v1945; // x2
  EventBossStatusUiMaster_o *v1946; // x20
  int32_t v1947; // w2
  int32_t v1948; // w3
  __int64 v1949; // x1
  __int64 v1950; // x2
  CommonReleaseMaster_o *v1951; // x20
  int32_t v1952; // w2
  int32_t v1953; // w3
  __int64 v1954; // x1
  __int64 v1955; // x2
  QuestSpotReleaseMaster_o *v1956; // x20
  int32_t v1957; // w2
  int32_t v1958; // w3
  __int64 v1959; // x1
  __int64 v1960; // x2
  VoiceMaterialCondMaster_o *v1961; // x20
  int32_t v1962; // w2
  int32_t v1963; // w3
  __int64 v1964; // x1
  __int64 v1965; // x2
  ClassRelationOverwriteMaster_o *v1966; // x20
  int32_t v1967; // w2
  int32_t v1968; // w3
  __int64 v1969; // x1
  __int64 v1970; // x2
  EventGroupMaster_o *v1971; // x20
  int32_t v1972; // w2
  int32_t v1973; // w3
  __int64 v1974; // x1
  __int64 v1975; // x2
  TotalBoxGachaMaster_o *v1976; // x20
  int32_t v1977; // w2
  int32_t v1978; // w3
  __int64 v1979; // x1
  __int64 v1980; // x2
  ServantTreasureDeviceDamageMaster_o *v1981; // x20
  int32_t v1982; // w2
  int32_t v1983; // w3
  __int64 v1984; // x1
  __int64 v1985; // x2
  UserEventServantFatigueMaster_o *v1986; // x20
  int32_t v1987; // w2
  int32_t v1988; // w3
  __int64 v1989; // x1
  __int64 v1990; // x2
  EventRewardBgMaster_o *v1991; // x20
  int32_t v1992; // w2
  int32_t v1993; // w3
  __int64 v1994; // x1
  __int64 v1995; // x2
  EventFatigueRecoveryMaster_o *v1996; // x20
  int32_t v1997; // w2
  int32_t v1998; // w3
  __int64 v1999; // x1
  __int64 v2000; // x2
  EventBoostItemUsedMaster_o *v2001; // x20
  int32_t v2002; // w2
  int32_t v2003; // w3
  __int64 v2004; // x1
  __int64 v2005; // x2
  StatusEffectPosOverwriteMaster_o *v2006; // x20
  int32_t v2007; // w2
  int32_t v2008; // w3
  __int64 v2009; // x1
  __int64 v2010; // x2
  QuestPhaseDetailAddMaster_o *v2011; // x20
  int32_t v2012; // w2
  int32_t v2013; // w3
  __int64 v2014; // x1
  __int64 v2015; // x2
  VoiceClosedMessageMaster_o *v2016; // x20
  int32_t v2017; // w2
  int32_t v2018; // w3
  __int64 v2019; // x1
  __int64 v2020; // x2
  ReprintStageMaster_o *v2021; // x20
  int32_t v2022; // w2
  int32_t v2023; // w3
  __int64 v2024; // x1
  __int64 v2025; // x2
  UserCombineExpMaster_o *v2026; // x20
  int32_t v2027; // w2
  int32_t v2028; // w3
  __int64 v2029; // x1
  __int64 v2030; // x2
  EventBoardGameCellMaster_o *v2031; // x20
  int32_t v2032; // w2
  int32_t v2033; // w3
  __int64 v2034; // x1
  __int64 v2035; // x2
  EventBoardGameTokenMaster_o *v2036; // x20
  int32_t v2037; // w2
  int32_t v2038; // w3
  __int64 v2039; // x1
  __int64 v2040; // x2
  EventBoardGameTokenRewardMaster_o *v2041; // x20
  int32_t v2042; // w2
  int32_t v2043; // w3
  __int64 v2044; // x1
  __int64 v2045; // x2
  UserEventBoardGameTokenMaster_o *v2046; // x20
  int32_t v2047; // w2
  int32_t v2048; // w3
  __int64 v2049; // x1
  __int64 v2050; // x2
  ServantAnimationOverwriteMaster_o *v2051; // x20
  int32_t v2052; // w2
  int32_t v2053; // w3
  __int64 v2054; // x1
  __int64 v2055; // x2
  OpeningMovieMaster_o *v2056; // x20
  int32_t v2057; // w2
  int32_t v2058; // w3
  __int64 v2059; // x1
  __int64 v2060; // x2
  ServantLimitSpoilerProtectionMaster_o *v2061; // x20
  int32_t v2062; // w2
  int32_t v2063; // w3
  __int64 v2064; // x1
  __int64 v2065; // x2
  PickupUserFollowerMaster_o *v2066; // x20
  int32_t v2067; // w2
  int32_t v2068; // w3
  __int64 v2069; // x1
  __int64 v2070; // x2
  ServantCollectionMaster_o *v2071; // x20
  int32_t v2072; // w2
  int32_t v2073; // w3
  __int64 v2074; // x1
  __int64 v2075; // x2
  GachaBehaviorMaster_o *v2076; // x20
  int32_t v2077; // w2
  int32_t v2078; // w3
  __int64 v2079; // x1
  __int64 v2080; // x2
  EventQuestCooltimeMaster_o *v2081; // x20
  int32_t v2082; // w2
  int32_t v2083; // w3
  __int64 v2084; // x1
  __int64 v2085; // x2
  UserEventQuestCooltimeMaster_o *v2086; // x20
  int32_t v2087; // w2
  int32_t v2088; // w3
  __int64 v2089; // x1
  __int64 v2090; // x2
  BoostMaster_o *v2091; // x20
  int32_t v2092; // w2
  int32_t v2093; // w3
  __int64 v2094; // x1
  __int64 v2095; // x2
  WarBoardMaster_o *v2096; // x20
  int32_t v2097; // w2
  int32_t v2098; // w3
  __int64 v2099; // x1
  __int64 v2100; // x2
  WarBoardSquareMaster_o *v2101; // x20
  int32_t v2102; // w2
  int32_t v2103; // w3
  __int64 v2104; // x1
  __int64 v2105; // x2
  WarBoardRoadMaster_o *v2106; // x20
  int32_t v2107; // w2
  int32_t v2108; // w3
  __int64 v2109; // x1
  __int64 v2110; // x2
  WarBoardStageMaster_o *v2111; // x20
  int32_t v2112; // w2
  int32_t v2113; // w3
  __int64 v2114; // x1
  __int64 v2115; // x2
  WarBoardActionPointMaster_o *v2116; // x20
  int32_t v2117; // w2
  int32_t v2118; // w3
  __int64 v2119; // x1
  __int64 v2120; // x2
  WarBoardActionTrendMaster_o *v2121; // x20
  int32_t v2122; // w2
  int32_t v2123; // w3
  __int64 v2124; // x1
  __int64 v2125; // x2
  WarBoardTacticalTrendMaster_o *v2126; // x20
  int32_t v2127; // w2
  int32_t v2128; // w3
  __int64 v2129; // x1
  __int64 v2130; // x2
  WarBoardStageLayoutMaster_o *v2131; // x20
  int32_t v2132; // w2
  int32_t v2133; // w3
  __int64 v2134; // x1
  __int64 v2135; // x2
  WarBoardStageNpcMaster_o *v2136; // x20
  int32_t v2137; // w2
  int32_t v2138; // w3
  __int64 v2139; // x1
  __int64 v2140; // x2
  WarBoardStageWallMaster_o *v2141; // x20
  int32_t v2142; // w2
  int32_t v2143; // w3
  __int64 v2144; // x1
  __int64 v2145; // x2
  WarBoardAIMaster_o *v2146; // x20
  int32_t v2147; // w2
  int32_t v2148; // w3
  __int64 v2149; // x1
  __int64 v2150; // x2
  WarBoardRatingBaseMaster_o *v2151; // x20
  int32_t v2152; // w2
  int32_t v2153; // w3
  __int64 v2154; // x1
  __int64 v2155; // x2
  WarBoardRatingOffsetMaster_o *v2156; // x20
  int32_t v2157; // w2
  int32_t v2158; // w3
  __int64 v2159; // x1
  __int64 v2160; // x2
  WarBoardItemMaster_o *v2161; // x20
  int32_t v2162; // w2
  int32_t v2163; // w3
  __int64 v2164; // x1
  __int64 v2165; // x2
  WarBoardTreasureMaster_o *v2166; // x20
  int32_t v2167; // w2
  int32_t v2168; // w3
  __int64 v2169; // x1
  __int64 v2170; // x2
  WarBoardQuestMaster_o *v2171; // x20
  int32_t v2172; // w2
  int32_t v2173; // w3
  __int64 v2174; // x1
  __int64 v2175; // x2
  WarBoardDataMaster_o *v2176; // x20
  int32_t v2177; // w2
  int32_t v2178; // w3
  __int64 v2179; // x1
  __int64 v2180; // x2
  WarBoardIndividualityClassMaster_o *v2181; // x20
  int32_t v2182; // w2
  int32_t v2183; // w3
  __int64 v2184; // x1
  __int64 v2185; // x2
  WarBoardActionTrendConditionMaster_o *v2186; // x20
  int32_t v2187; // w2
  int32_t v2188; // w3
  __int64 v2189; // x1
  __int64 v2190; // x2
  WarBoardActionPointClassMaster_o *v2191; // x20
  int32_t v2192; // w2
  int32_t v2193; // w3
  __int64 v2194; // x1
  __int64 v2195; // x2
  EventPanelMapMaster_o *v2196; // x20
  int32_t v2197; // w2
  int32_t v2198; // w3
  __int64 v2199; // x1
  __int64 v2200; // x2
  EventPanelMapDetailMaster_o *v2201; // x20
  int32_t v2202; // w2
  int32_t v2203; // w3
  __int64 v2204; // x1
  __int64 v2205; // x2
  EventPanelSpotMaster_o *v2206; // x20
  int32_t v2207; // w2
  int32_t v2208; // w3
  __int64 v2209; // x1
  __int64 v2210; // x2
  EventPanelScanMaster_o *v2211; // x20
  int32_t v2212; // w2
  int32_t v2213; // w3
  __int64 v2214; // x1
  __int64 v2215; // x2
  CommonConsumeMaster_o *v2216; // x20
  int32_t v2217; // w2
  int32_t v2218; // w3
  __int64 v2219; // x1
  __int64 v2220; // x2
  UserEventMapMaster_o *v2221; // x20
  int32_t v2222; // w2
  int32_t v2223; // w3
  __int64 v2224; // x1
  __int64 v2225; // x2
  UserEventSpotMaster_o *v2226; // x20
  int32_t v2227; // w2
  int32_t v2228; // w3
  __int64 v2229; // x1
  __int64 v2230; // x2
  WarGroupMaster_o *v2231; // x20
  int32_t v2232; // w2
  int32_t v2233; // w3
  __int64 v2234; // x1
  __int64 v2235; // x2
  ServantLimitImageMaster_o *v2236; // x20
  int32_t v2237; // w2
  int32_t v2238; // w3
  __int64 v2239; // x1
  __int64 v2240; // x2
  FriendshipQuestDialogInfoMaster_o *v2241; // x20
  int32_t v2242; // w2
  int32_t v2243; // w3
  __int64 v2244; // x1
  __int64 v2245; // x2
  QuestRestrictionInfoMaster_o *v2246; // x20
  int32_t v2247; // w2
  int32_t v2248; // w3
  __int64 v2249; // x1
  __int64 v2250; // x2
  AssistMaster_o *v2251; // x20
  int32_t v2252; // w2
  int32_t v2253; // w3
  __int64 v2254; // x1
  __int64 v2255; // x2
  WarBoardEffectMaster_o *v2256; // x20
  int32_t v2257; // w2
  int32_t v2258; // w3
  __int64 v2259; // x1
  __int64 v2260; // x2
  WarBoardOnboardSkillMaster_o *v2261; // x20
  int32_t v2262; // w2
  int32_t v2263; // w3
  __int64 v2264; // x1
  __int64 v2265; // x2
  BeforeBirthDayMaster_o *v2266; // x20
  int32_t v2267; // w2
  int32_t v2268; // w3
  __int64 v2269; // x1
  __int64 v2270; // x2
  LoginQuestMaster_o *v2271; // x20
  int32_t v2272; // w2
  int32_t v2273; // w3
  __int64 v2274; // x1
  __int64 v2275; // x2
  EventCombineCostumeMaster_o *v2276; // x20
  int32_t v2277; // w2
  int32_t v2278; // w3
  __int64 v2279; // x1
  __int64 v2280; // x2
  WarBoardStagePieceDetailMaster_o *v2281; // x20
  int32_t v2282; // w2
  int32_t v2283; // w3
  __int64 v2284; // x1
  __int64 v2285; // x2
  ServantTreasureDeviceAddMaster_o *v2286; // x20
  int32_t v2287; // w2
  int32_t v2288; // w3
  __int64 v2289; // x1
  __int64 v2290; // x2
  SkillAddMaster_o *v2291; // x20
  int32_t v2292; // w2
  int32_t v2293; // w3
  __int64 v2294; // x1
  __int64 v2295; // x2
  ServantLvDetailMaster_o *v2296; // x20
  int32_t v2297; // w2
  int32_t v2298; // w3
  __int64 v2299; // x1
  __int64 v2300; // x2
  GachaAppendMaster_o *v2301; // x20
  int32_t v2302; // w2
  int32_t v2303; // w3
  __int64 v2304; // x1
  __int64 v2305; // x2
  UserGachaDrawLogMaster_o *v2306; // x20
  int32_t v2307; // w2
  int32_t v2308; // w3
  __int64 v2309; // x1
  __int64 v2310; // x2
  ServantAppendPassiveSkillMaster_o *v2311; // x20
  int32_t v2312; // w2
  int32_t v2313; // w3
  __int64 v2314; // x1
  __int64 v2315; // x2
  UserServantAppendPassiveSkillMaster_o *v2316; // x20
  int32_t v2317; // w2
  int32_t v2318; // w3
  __int64 v2319; // x1
  __int64 v2320; // x2
  UserServantAppendPassiveSkillLvMaster_o *v2321; // x20
  int32_t v2322; // w2
  int32_t v2323; // w3
  __int64 v2324; // x1
  __int64 v2325; // x2
  SvtAppendPassiveSkillUnlockMaster_o *v2326; // x20
  int32_t v2327; // w2
  int32_t v2328; // w3
  __int64 v2329; // x1
  __int64 v2330; // x2
  CombineAppendPassiveSkillMaster_o *v2331; // x20
  int32_t v2332; // w2
  int32_t v2333; // w3
  __int64 v2334; // x1
  __int64 v2335; // x2
  SvtCoinMaster_o *v2336; // x20
  int32_t v2337; // w2
  int32_t v2338; // w3
  __int64 v2339; // x1
  __int64 v2340; // x2
  UserSvtCoinMaster_o *v2341; // x20
  int32_t v2342; // w2
  int32_t v2343; // w3
  __int64 v2344; // x1
  __int64 v2345; // x2
  ServantAddMaster_o *v2346; // x20
  int32_t v2347; // w2
  int32_t v2348; // w3
  __int64 v2349; // x1
  __int64 v2350; // x2
  TreasureBoxMaster_o *v2351; // x20
  int32_t v2352; // w2
  int32_t v2353; // w3
  __int64 v2354; // x1
  __int64 v2355; // x2
  TreasureBoxGiftMaster_o *v2356; // x20
  int32_t v2357; // w2
  int32_t v2358; // w3
  __int64 v2359; // x1
  __int64 v2360; // x2
  TreasureBoxTalkMaster_o *v2361; // x20
  int32_t v2362; // w2
  int32_t v2363; // w3
  __int64 v2364; // x1
  __int64 v2365; // x2
  UserEventExpeditionMaster_o *v2366; // x20
  int32_t v2367; // w2
  int32_t v2368; // w3
  __int64 v2369; // x1
  __int64 v2370; // x2
  EventExpeditionMaster_o *v2371; // x20
  int32_t v2372; // w2
  int32_t v2373; // w3
  __int64 v2374; // x1
  __int64 v2375; // x2
  EventExpeditionPieceMaster_o *v2376; // x20
  int32_t v2377; // w2
  int32_t v2378; // w3
  __int64 v2379; // x1
  __int64 v2380; // x2
  EventRecipeMaster_o *v2381; // x20
  int32_t v2382; // w2
  int32_t v2383; // w3
  __int64 v2384; // x1
  __int64 v2385; // x2
  EventRecipeGiftMaster_o *v2386; // x20
  int32_t v2387; // w2
  int32_t v2388; // w3
  __int64 v2389; // x1
  __int64 v2390; // x2
  UserEventFortificationMaster_o *v2391; // x20
  int32_t v2392; // w2
  int32_t v2393; // w3
  __int64 v2394; // x1
  __int64 v2395; // x2
  EventFortificationMaster_o *v2396; // x20
  int32_t v2397; // w2
  int32_t v2398; // w3
  __int64 v2399; // x1
  __int64 v2400; // x2
  EventFortificationDetailMaster_o *v2401; // x20
  int32_t v2402; // w2
  int32_t v2403; // w3
  __int64 v2404; // x1
  __int64 v2405; // x2
  EventFortificationSvtMaster_o *v2406; // x20
  int32_t v2407; // w2
  int32_t v2408; // w3
  __int64 v2409; // x1
  __int64 v2410; // x2
  UserServantVoicePlayedMaster_o *v2411; // x20
  int32_t v2412; // w2
  int32_t v2413; // w3
  __int64 v2414; // x1
  __int64 v2415; // x2
  UpdateProfileDialogInfoMaster_o *v2416; // x20
  int32_t v2417; // w2
  int32_t v2418; // w3
  __int64 v2419; // x1
  __int64 v2420; // x2
  SvtMaterialTdMaster_o *v2421; // x20
  int32_t v2422; // w2
  int32_t v2423; // w3
  __int64 v2424; // x1
  __int64 v2425; // x2
  BattleMasterImageMaster_o *v2426; // x20
  int32_t v2427; // w2
  int32_t v2428; // w3
  __int64 v2429; // x1
  __int64 v2430; // x2
  UserFriendPointGachaFreeDrawCampaignLogMaster_o *v2431; // x20
  int32_t v2432; // w2
  int32_t v2433; // w3
  __int64 v2434; // x1
  __int64 v2435; // x2
  UserEventRandomMissionMaster_o *v2436; // x20
  int32_t v2437; // w2
  int32_t v2438; // w3
  __int64 v2439; // x1
  __int64 v2440; // x2
  EventProgressValueMaster_o *v2441; // x20
  int32_t v2442; // w2
  int32_t v2443; // w3
  __int64 v2444; // x1
  __int64 v2445; // x2
  SvtMultiPortraitMaster_o *v2446; // x20
  int32_t v2447; // w2
  int32_t v2448; // w3
  __int64 v2449; // x1
  __int64 v2450; // x2
  EventRandomMissionMaster_o *v2451; // x20
  int32_t v2452; // w2
  int32_t v2453; // w3
  __int64 v2454; // x1
  __int64 v2455; // x2
  UserGachaHistoryMaster_o *v2456; // x20
  int32_t v2457; // w2
  int32_t v2458; // w3
  __int64 v2459; // x1
  __int64 v2460; // x2
  UserCoinRoomMaster_o *v2461; // x20
  int32_t v2462; // w2
  int32_t v2463; // w3
  __int64 v2464; // x1
  __int64 v2465; // x2
  EventBuddyPointMaster_o *v2466; // x20
  int32_t v2467; // w2
  int32_t v2468; // w3
  __int64 v2469; // x1
  __int64 v2470; // x2
  EventServantPointRankMaster_o *v2471; // x20
  int32_t v2472; // w2
  int32_t v2473; // w3
  __int64 v2474; // x1
  __int64 v2475; // x2
  UserEventServantPointMaster_o *v2476; // x20
  int32_t v2477; // w2
  int32_t v2478; // w3
  __int64 v2479; // x1
  __int64 v2480; // x2
  FieldMotionMaster_o *v2481; // x20
  int32_t v2482; // w2
  int32_t v2483; // w3
  __int64 v2484; // x1
  __int64 v2485; // x2
  UserDeleteReservationMaster_o *v2486; // x20
  int32_t v2487; // w2
  int32_t v2488; // w3
  __int64 v2489; // x1
  __int64 v2490; // x2
  ServantScriptMultipleMaster_o *v2491; // x20
  int32_t v2492; // w2
  int32_t v2493; // w3
  __int64 v2494; // x1
  __int64 v2495; // x2
  EquipAddMaster_o *v2496; // x20
  int32_t v2497; // w2
  int32_t v2498; // w3
  __int64 v2499; // x1
  __int64 v2500; // x2
  QuestReleaseOverwriteMaster_o *v2501; // x20
  int32_t v2502; // w2
  int32_t v2503; // w3
  __int64 v2504; // x1
  __int64 v2505; // x2
  UserEventAlloutBattleMaster_o *v2506; // x20
  int32_t v2507; // w2
  int32_t v2508; // w3
  __int64 v2509; // x1
  __int64 v2510; // x2
  QuestScriptMaterialNextMaster_o *v2511; // x20
  int32_t v2512; // w2
  int32_t v2513; // w3
  __int64 v2514; // x1
  __int64 v2515; // x2
  EventDiggingMaster_o *v2516; // x20
  int32_t v2517; // w2
  int32_t v2518; // w3
  __int64 v2519; // x1
  __int64 v2520; // x2
  EventDiggingBlockMaster_o *v2521; // x20
  int32_t v2522; // w2
  int32_t v2523; // w3
  __int64 v2524; // x1
  __int64 v2525; // x2
  EventDiggingRewardMaster_o *v2526; // x20
  int32_t v2527; // w2
  int32_t v2528; // w3
  __int64 v2529; // x1
  __int64 v2530; // x2
  UserEventDiggingMaster_o *v2531; // x20
  int32_t v2532; // w2
  int32_t v2533; // w3
  __int64 v2534; // x1
  __int64 v2535; // x2
  BattleMessageMaster_o *v2536; // x20
  int32_t v2537; // w2
  int32_t v2538; // w3
  __int64 v2539; // x1
  __int64 v2540; // x2
  BattleMessageGroupMaster_o *v2541; // x20
  int32_t v2542; // w2
  int32_t v2543; // w3
  __int64 v2544; // x1
  __int64 v2545; // x2
  UserNpcSvtRecordMaster_o *v2546; // x20
  int32_t v2547; // w2
  int32_t v2548; // w3
  __int64 v2549; // x1
  __int64 v2550; // x2
  BuffTypeDetailMaster_o *v2551; // x20
  int32_t v2552; // w2
  int32_t v2553; // w3
  __int64 v2554; // x1
  __int64 v2555; // x2
  WarBoardMessageMaster_o *v2556; // x20
  int32_t v2557; // w2
  int32_t v2558; // w3
  __int64 v2559; // x1
  __int64 v2560; // x2
  WarBoardPartySkillMaster_o *v2561; // x20
  int32_t v2562; // w2
  int32_t v2563; // w3
  __int64 v2564; // x1
  __int64 v2565; // x2
  WarBoardMessageScriptMaster_o *v2566; // x20
  int32_t v2567; // w2
  int32_t v2568; // w3
  __int64 v2569; // x1
  __int64 v2570; // x2
  WarQuestSelectionMaster_o *v2571; // x20
  int32_t v2572; // w2
  int32_t v2573; // w3
  __int64 v2574; // x1
  __int64 v2575; // x2
  WarBoardStageDetailMaster_o *v2576; // x20
  int32_t v2577; // w2
  int32_t v2578; // w3
  __int64 v2579; // x1
  __int64 v2580; // x2
  QuestScriptMaterialOverwriteMaster_o *v2581; // x20
  int32_t v2582; // w2
  int32_t v2583; // w3
  __int64 v2584; // x1
  __int64 v2585; // x2
  QuestScriptBranchMaterialMaster_o *v2586; // x20
  int32_t v2587; // w2
  int32_t v2588; // w3
  __int64 v2589; // x1
  __int64 v2590; // x2
  AdCheckPointMaster_o *v2591; // x20
  int32_t v2592; // w2
  int32_t v2593; // w3
  __int64 v2594; // x1
  __int64 v2595; // x2
  GiftDetailMaster_o *v2596; // x20
  int32_t v2597; // w2
  int32_t v2598; // w3
  __int64 v2599; // x1
  __int64 v2600; // x2
  CombineLimitGiftMaster_o *v2601; // x20
  int32_t v2602; // w2
  int32_t v2603; // w3
  __int64 v2604; // x1
  __int64 v2605; // x2
  EventCooltimeRewardMaster_o *v2606; // x20
  int32_t v2607; // w2
  int32_t v2608; // w3
  __int64 v2609; // x1
  __int64 v2610; // x2
  UserEventCooltimeRewardMaster_o *v2611; // x20
  int32_t v2612; // w2
  int32_t v2613; // w3
  __int64 v2614; // x1
  __int64 v2615; // x2
  ClassBoardBaseMaster_o *v2616; // x20
  int32_t v2617; // w2
  int32_t v2618; // w3
  __int64 v2619; // x1
  __int64 v2620; // x2
  ClassBoardLockMaster_o *v2621; // x20
  int32_t v2622; // w2
  int32_t v2623; // w3
  __int64 v2624; // x1
  __int64 v2625; // x2
  ClassBoardSquareMaster_o *v2626; // x20
  int32_t v2627; // w2
  int32_t v2628; // w3
  __int64 v2629; // x1
  __int64 v2630; // x2
  ClassBoardLineMaster_o *v2631; // x20
  int32_t v2632; // w2
  int32_t v2633; // w3
  __int64 v2634; // x1
  __int64 v2635; // x2
  UserClassBoardSquareMaster_o *v2636; // x20
  int32_t v2637; // w2
  int32_t v2638; // w3
  __int64 v2639; // x1
  __int64 v2640; // x2
  ServantCardAddMaster_o *v2641; // x20
  int32_t v2642; // w2
  int32_t v2643; // w3
  __int64 v2644; // x1
  __int64 v2645; // x2
  MapLayerMaster_o *v2646; // x20
  int32_t v2647; // w2
  int32_t v2648; // w3
  __int64 v2649; // x1
  __int64 v2650; // x2
  SpotLayerMaster_o *v2651; // x20
  int32_t v2652; // w2
  int32_t v2653; // w3
  __int64 v2654; // x1
  __int64 v2655; // x2
  MapGimmickLayerMaster_o *v2656; // x20
  int32_t v2657; // w2
  int32_t v2658; // w3
  __int64 v2659; // x1
  __int64 v2660; // x2
  EventDataLostBattleMaster_o *v2661; // x20
  int32_t v2662; // w2
  int32_t v2663; // w3
  __int64 v2664; // x1
  __int64 v2665; // x2
  EventDataLostBattleResetMaster_o *v2666; // x20
  int32_t v2667; // w2
  int32_t v2668; // w3
  __int64 v2669; // x1
  __int64 v2670; // x2
  UserEventDataLostMaster_o *v2671; // x20
  int32_t v2672; // w2
  int32_t v2673; // w3
  __int64 v2674; // x1
  __int64 v2675; // x2
  QuestHintMaster_o *v2676; // x20
  int32_t v2677; // w2
  int32_t v2678; // w3
  __int64 v2679; // x1
  __int64 v2680; // x2
  FuncTypeDetailMaster_o *v2681; // x20
  int32_t v2682; // w2
  int32_t v2683; // w3
  __int64 v2684; // x1
  __int64 v2685; // x2
  BuffConvertMaster_o *v2686; // x20
  int32_t v2687; // w2
  int32_t v2688; // w3
  __int64 v2689; // x1
  __int64 v2690; // x2
  SkillGroupMaster_o *v2691; // x20
  int32_t v2692; // w2
  int32_t v2693; // w3
  __int64 v2694; // x1
  __int64 v2695; // x2
  SkillGroupOverwriteMaster_o *v2696; // x20
  int32_t v2697; // w2
  int32_t v2698; // w3
  __int64 v2699; // x1
  __int64 v2700; // x2
  SkillIndividualityMaster_o *v2701; // x20
  int32_t v2702; // w2
  int32_t v2703; // w3
  __int64 v2704; // x1
  __int64 v2705; // x2
  RestrictionBaseMaster_o *v2706; // x20
  int32_t v2707; // w2
  int32_t v2708; // w3
  __int64 v2709; // x1
  __int64 v2710; // x2
  RestrictionSlotMaster_o *v2711; // x20
  int32_t v2712; // w2
  int32_t v2713; // w3
  __int64 v2714; // x1
  __int64 v2715; // x2
  RestrictionSlotDetailMaster_o *v2716; // x20
  int32_t v2717; // w2
  int32_t v2718; // w3
  __int64 v2719; // x1
  __int64 v2720; // x2
  RestrictionMessageMaster_o *v2721; // x20
  int32_t v2722; // w2
  int32_t v2723; // w3
  __int64 v2724; // x1
  __int64 v2725; // x2
  RestrictionWholeMaster_o *v2726; // x20
  int32_t v2727; // w2
  int32_t v2728; // w3
  __int64 v2729; // x1
  __int64 v2730; // x2
  FuncDispMaster_o *v2731; // x20
  int32_t v2732; // w2
  int32_t v2733; // w3
  __int64 v2734; // x1
  __int64 v2735; // x2
  ClassBoardCommandSpellMaster_o *v2736; // x20
  int32_t v2737; // w2
  int32_t v2738; // w3
  __int64 v2739; // x1
  __int64 v2740; // x2
  ClassBoardClassMaster_o *v2741; // x20
  int32_t v2742; // w2
  int32_t v2743; // w3
  __int64 v2744; // x1
  __int64 v2745; // x2
  EventCommandAssistMaster_o *v2746; // x20
  int32_t v2747; // w2
  int32_t v2748; // w3
  __int64 v2749; // x1
  __int64 v2750; // x2
  EventMissionGroupMaster_o *v2751; // x20
  int32_t v2752; // w2
  int32_t v2753; // w3
  __int64 v2754; // x1
  __int64 v2755; // x2
  CombineLimitReleaseMaster_o *v2756; // x20
  int32_t v2757; // w2
  int32_t v2758; // w3
  __int64 v2759; // x1
  __int64 v2760; // x2
  HeelPortraitMaster_o *v2761; // x20
  int32_t v2762; // w2
  int32_t v2763; // w3
  __int64 v2764; // x1
  __int64 v2765; // x2
  UserHeelPortraitMaster_o *v2766; // x20
  int32_t v2767; // w2
  int32_t v2768; // w3
  __int64 v2769; // x1
  __int64 v2770; // x2
  TreasureDeviceSequenceWeightMaster_o *v2771; // x20
  int32_t v2772; // w2
  int32_t v2773; // w3
  __int64 v2774; // x1
  __int64 v2775; // x2
  NpcServantFollowerIndividualityMaster_o *v2776; // x20
  int32_t v2777; // w2
  int32_t v2778; // w3
  __int64 v2779; // x1
  __int64 v2780; // x2
  GachaExtraGiftMaster_o *v2781; // x20
  int32_t v2782; // w2
  int32_t v2783; // w3
  __int64 v2784; // x1
  __int64 v2785; // x2
  EventMuralMaster_o *v2786; // x20
  int32_t v2787; // w2
  int32_t v2788; // w3
  __int64 v2789; // x1
  __int64 v2790; // x2
  ViewWaveEnemyMaster_o *v2791; // x20
  int32_t v2792; // w2
  int32_t v2793; // w3
  __int64 v2794; // x1
  __int64 v2795; // x2
  BlankEarthSpotNavimenuMaster_o *v2796; // x20
  int32_t v2797; // w2
  int32_t v2798; // w3
  __int64 v2799; // x1
  __int64 v2800; // x2
  BlankEarthGimmickMaster_o *v2801; // x20
  int32_t v2802; // w2
  int32_t v2803; // w3
  __int64 v2804; // x1
  __int64 v2805; // x2
  TerminalOverwriteMaster_o *v2806; // x20
  int32_t v2807; // w2
  int32_t v2808; // w3
  __int64 v2809; // x1
  __int64 v2810; // x2
  UserExchangeSvtMaster_o *v2811; // x20
  int32_t v2812; // w2
  int32_t v2813; // w3
  __int64 v2814; // x1
  __int64 v2815; // x2
  WarBoardCommonReleaseMaster_o *v2816; // x20
  int32_t v2817; // w2
  int32_t v2818; // w3
  __int64 v2819; // x1
  __int64 v2820; // x2
  WarBoardEventMaster_o *v2821; // x20
  int32_t v2822; // w2
  int32_t v2823; // w3
  __int64 v2824; // x1
  __int64 v2825; // x2
  WarBoardEventScriptMaster_o *v2826; // x20
  int32_t v2827; // w2
  int32_t v2828; // w3
  __int64 v2829; // x1
  __int64 v2830; // x2
  WarBoardStageBossMaster_o *v2831; // x20
  int32_t v2832; // w2
  int32_t v2833; // w3
  __int64 v2834; // x1
  __int64 v2835; // x2
  WarBoardSquareIndexGroupMaster_o *v2836; // x20
  int32_t v2837; // w2
  int32_t v2838; // w3
  __int64 v2839; // x1
  __int64 v2840; // x2
  WarBoardActionTrendGroupMaster_o *v2841; // x20
  int32_t v2842; // w2
  int32_t v2843; // w3
  __int64 v2844; // x1
  __int64 v2845; // x2
  WarBoardRatingOffsetGroupMaster_o *v2846; // x20
  int32_t v2847; // w2
  int32_t v2848; // w3
  __int64 v2849; // x1
  __int64 v2850; // x2
  WarBoardReinforcementsMaster_o *v2851; // x20
  int32_t v2852; // w2
  int32_t v2853; // w3
  __int64 v2854; // x1
  __int64 v2855; // x2
  WarBoardStageReinforcementsMaster_o *v2856; // x20
  int32_t v2857; // w2
  int32_t v2858; // w3
  __int64 v2859; // x1
  __int64 v2860; // x2
  WarBoardFutureActionTrendMaster_o *v2861; // x20
  int32_t v2862; // w2
  int32_t v2863; // w3
  __int64 v2864; // x1
  __int64 v2865; // x2
  ServantProfilePushMaster_o *v2866; // x20
  int32_t v2867; // w2
  int32_t v2868; // w3
  __int64 v2869; // x1
  __int64 v2870; // x2
  MapGimmickPathMaster_o *v2871; // x20
  int32_t v2872; // w2
  int32_t v2873; // w3
  __int64 v2874; // x1
  __int64 v2875; // x2
  MapGimmickPathReleaseMaster_o *v2876; // x20
  int32_t v2877; // w2
  int32_t v2878; // w3
  __int64 v2879; // x1
  __int64 v2880; // x2
  ServantOverwriteMaster_o *v2881; // x20
  int32_t v2882; // w2
  int32_t v2883; // w3
  __int64 v2884; // x1
  __int64 v2885; // x2
  IndividualityPolicyMaster_o *v2886; // x20
  int32_t v2887; // w2
  int32_t v2888; // w3
  __int64 v2889; // x1
  __int64 v2890; // x2
  IndividualityPersonalityMaster_o *v2891; // x20
  int32_t v2892; // w2
  int32_t v2893; // w3
  __int64 v2894; // x1
  __int64 v2895; // x2
  AttriMaster_o *v2896; // x20
  int32_t v2897; // w2
  int32_t v2898; // w3
  __int64 v2899; // x1
  __int64 v2900; // x2
  ServantVoicePatternMaster_o *v2901; // x20
  int32_t v2902; // w2
  int32_t v2903; // w3
  __int64 v2904; // x1
  __int64 v2905; // x2
  UserGameCommonMaster_o *v2906; // x20
  int32_t v2907; // w2
  int32_t v2908; // w3
  __int64 v2909; // x1
  __int64 v2910; // x2
  ServantPhotoMaster_o *v2911; // x20
  int32_t v2912; // w2
  int32_t v2913; // w3
  __int64 v2914; // x1
  __int64 v2915; // x2
  MasterPhotoMaster_o *v2916; // x20
  int32_t v2917; // w2
  int32_t v2918; // w3
  __int64 v2919; // x1
  __int64 v2920; // x2
  WarMessageMaster_o *v2921; // x20
  int32_t v2922; // w2
  int32_t v2923; // w3
  __int64 v2924; // x1
  __int64 v2925; // x2
  QuestAutoOrganizationAdjustMaster_o *v2926; // x20
  int32_t v2927; // w2
  int32_t v2928; // w3
  __int64 v2929; // x1
  __int64 v2930; // x2
  ExcludeMotionMaster_o *v2931; // x20
  int32_t v2932; // w2
  int32_t v2933; // w3
  __int64 v2934; // x1
  __int64 v2935; // x2
  UserInterruptionQuestMaster_o *v2936; // x20
  int32_t v2937; // w2
  int32_t v2938; // w3
  __int64 v2939; // x1
  __int64 v2940; // x2
  ServantTransformMaster_o *v2941; // x20
  int32_t v2942; // w2
  int32_t v2943; // w3
  __int64 v2944; // x1
  __int64 v2945; // x2
  MapUpdateScheduleMaster_o *v2946; // x20
  int32_t v2947; // w2
  int32_t v2948; // w3
  __int64 v2949; // x1
  __int64 v2950; // x2
  QuestPhasePresentMaster_o *v2951; // x20
  int32_t v2952; // w2
  int32_t v2953; // w3
  __int64 v2954; // x1
  __int64 v2955; // x2
  UserAccountLinkageMaster_o *v2956; // x20
  int32_t v2957; // w2
  int32_t v2958; // w3
  __int64 v2959; // x1
  __int64 v2960; // x2
  MissionNaviTransitionMaster_o *v2961; // x20
  int32_t v2962; // w2
  int32_t v2963; // w3
  __int64 v2964; // x1
  __int64 v2965; // x2
  MissionNaviQuestMaster_o *v2966; // x20
  int32_t v2967; // w2
  int32_t v2968; // w3
  __int64 v2969; // x1
  __int64 v2970; // x2
  EventTradeGoodsMaster_o *v2971; // x20
  int32_t v2972; // w2
  int32_t v2973; // w3
  __int64 v2974; // x1
  __int64 v2975; // x2
  EventTradeStoreMaster_o *v2976; // x20
  int32_t v2977; // w2
  int32_t v2978; // w3
  __int64 v2979; // x1
  __int64 v2980; // x2
  EventTradePickupMaster_o *v2981; // x20
  int32_t v2982; // w2
  int32_t v2983; // w3
  __int64 v2984; // x1
  __int64 v2985; // x2
  UserEventTradeMaster_o *v2986; // x20
  int32_t v2987; // w2
  int32_t v2988; // w3
  __int64 v2989; // x1
  __int64 v2990; // x2
  PaymentHistoryMaster_o *v2991; // x20
  int32_t v2992; // w2
  int32_t v2993; // w3
  __int64 v2994; // x1
  __int64 v2995; // x2
  UserExternalPaymentStoneMaster_o *v2996; // x20
  int32_t v2997; // w2
  int32_t v2998; // w3
  __int64 v2999; // x1
  __int64 v3000; // x2
  QuestPhaseIndividualityMaster_o *v3001; // x20
  int32_t v3002; // w2
  int32_t v3003; // w3
  __int64 v3004; // x1
  __int64 v3005; // x2
  ViewGachaFeaturedServantMaster_o *v3006; // x20
  int32_t v3007; // w2
  int32_t v3008; // w3
  __int64 v3009; // x1
  __int64 v3010; // x2
  UserGachaPickupCollateralMaster_o *v3011; // x20
  int32_t v3012; // w2
  int32_t v3013; // w3
  __int64 v3014; // x1
  __int64 v3015; // x2
  GachaPickupCollateralMaster_o *v3016; // x20
  int32_t v3017; // w2
  int32_t v3018; // w3
  __int64 v3019; // x1
  __int64 v3020; // x2
  GachaPickupCollateralGroupMaster_o *v3021; // x20
  int32_t v3022; // w2
  int32_t v3023; // w3
  __int64 v3024; // x1
  __int64 v3025; // x2
  BattlePointMaster_o *v3026; // x20
  int32_t v3027; // w2
  int32_t v3028; // w3
  __int64 v3029; // x1
  __int64 v3030; // x2
  BattlePointPhaseMaster_o *v3031; // x20
  int32_t v3032; // w2
  int32_t v3033; // w3
  __int64 v3034; // x1
  __int64 v3035; // x2
  ServantBattlePointMaster_o *v3036; // x20
  int32_t v3037; // w2
  int32_t v3038; // w3
  __int64 v3039; // x1
  __int64 v3040; // x2
  EffectMovieMaster_o *v3041; // x20
  int32_t v3042; // w2
  int32_t v3043; // w3
  __int64 v3044; // x1
  __int64 v3045; // x2
  PaymentLimitMaster_o *v3046; // x20
  int32_t v3047; // w2
  int32_t v3048; // w3
  __int64 v3049; // x1
  __int64 v3050; // x2
  UserPaymentLimitMaster_o *v3051; // x20
  int32_t v3052; // w2
  int32_t v3053; // w3
  __int64 v3054; // x1
  __int64 v3055; // x2
  RoadmapMaster_o *v3056; // x20
  int32_t v3057; // w2
  int32_t v3058; // w3
  __int64 v3059; // x1
  __int64 v3060; // x2
  UserRecommendSupportMaster_o *v3061; // x20
  int32_t v3062; // w2
  int32_t v3063; // w3
  __int64 v3064; // x1
  __int64 v3065; // x2
  RecommendSupportQuestMaster_o *v3066; // x20
  int32_t v3067; // w2
  int32_t v3068; // w3
  __int64 v3069; // x1
  __int64 v3070; // x2
  RecommendAdviceMessageMaster_o *v3071; // x20
  int32_t v3072; // w2
  int32_t v3073; // w3
  __int64 v3074; // x1
  __int64 v3075; // x2
  UserRecommendFollowerMaster_o *v3076; // x20
  int32_t v3077; // w2
  int32_t v3078; // w3
  __int64 v3079; // x1
  __int64 v3080; // x2
  ItemDropEfficiencyMaster_o *v3081; // x20
  int32_t v3082; // w2
  int32_t v3083; // w3
  __int64 v3085; // x0

  if ( (byte_49FBF61 & 1) == 0 )
  {
    sub_1B640C8(&AccessaryMaster_TypeInfo, v1);
    sub_1B640C8(&AdCheckPointMaster_TypeInfo, v2);
    sub_1B640C8(&AiActMaster_TypeInfo, v3);
    sub_1B640C8(&AiFieldMaster_TypeInfo, v4);
    sub_1B640C8(&AiMaster_TypeInfo, v5);
    sub_1B640C8(&AreaMaster_TypeInfo, v6);
    sub_1B640C8(&AssistMaster_TypeInfo, v7);
    sub_1B640C8(&AttriMaster_TypeInfo, v8);
    sub_1B640C8(&AttriRelationMaster_TypeInfo, v9);
    sub_1B640C8(&AuraEffectMaster_TypeInfo, v10);
    sub_1B640C8(&AuraEffectPosOverwriteMaster_TypeInfo, v11);
    sub_1B640C8(&BankShopMaster_TypeInfo, v12);
    sub_1B640C8(&BannerAddMaster_TypeInfo, v13);
    sub_1B640C8(&BannerMaster_TypeInfo, v14);
    sub_1B640C8(&BattleBgMaster_TypeInfo, v15);
    sub_1B640C8(&BattleMasterImageMaster_TypeInfo, v16);
    sub_1B640C8(&BattleMaster_TypeInfo, v17);
    sub_1B640C8(&BattleMessageGroupMaster_TypeInfo, v18);
    sub_1B640C8(&BattleMessageMaster_TypeInfo, v19);
    sub_1B640C8(&BattlePointMaster_TypeInfo, v20);
    sub_1B640C8(&BattlePointPhaseMaster_TypeInfo, v21);
    sub_1B640C8(&BeforeBirthDayMaster_TypeInfo, v22);
    sub_1B640C8(&BgmMaster_TypeInfo, v23);
    sub_1B640C8(&BgmReleaseMaster_TypeInfo, v24);
    sub_1B640C8(&BlankEarthGimmickMaster_TypeInfo, v25);
    sub_1B640C8(&BlankEarthSpotAddMaster_TypeInfo, v26);
    sub_1B640C8(&BlankEarthSpotMaster_TypeInfo, v27);
    sub_1B640C8(&BlankEarthSpotNavimenuMaster_TypeInfo, v28);
    sub_1B640C8(&BoardMessageMaster_TypeInfo, v29);
    sub_1B640C8(&BoardMessageReleaseMaster_TypeInfo, v30);
    sub_1B640C8(&BoostMaster_TypeInfo, v31);
    sub_1B640C8(&BoxGachaBaseDetailMaster_TypeInfo, v32);
    sub_1B640C8(&BoxGachaBaseMaster_TypeInfo, v33);
    sub_1B640C8(&BoxGachaHistoryMaster_TypeInfo, v34);
    sub_1B640C8(&BoxGachaMaster_TypeInfo, v35);
    sub_1B640C8(&BoxGachaTalkMaster_TypeInfo, v36);
    sub_1B640C8(&BuffConvertMaster_TypeInfo, v37);
    sub_1B640C8(&BuffMaster_TypeInfo, v38);
    sub_1B640C8(&BuffTypeDetailMaster_TypeInfo, v39);
    sub_1B640C8(&CampaignInfoMaster_TypeInfo, v40);
    sub_1B640C8(&CardMaster_TypeInfo, v41);
    sub_1B640C8(&ClassBoardBaseMaster_TypeInfo, v42);
    sub_1B640C8(&ClassBoardClassMaster_TypeInfo, v43);
    sub_1B640C8(&ClassBoardCommandSpellMaster_TypeInfo, v44);
    sub_1B640C8(&ClassBoardLineMaster_TypeInfo, v45);
    sub_1B640C8(&ClassBoardLockMaster_TypeInfo, v46);
    sub_1B640C8(&ClassBoardSquareMaster_TypeInfo, v47);
    sub_1B640C8(&ClassRelationMaster_TypeInfo, v48);
    sub_1B640C8(&ClassRelationOverwriteMaster_TypeInfo, v49);
    sub_1B640C8(&ClosedMessageMaster_TypeInfo, v50);
    sub_1B640C8(&CombineAppendPassiveSkillMaster_TypeInfo, v51);
    sub_1B640C8(&CombineCostumeMaster_TypeInfo, v52);
    sub_1B640C8(&CombineLimitGiftMaster_TypeInfo, v53);
    sub_1B640C8(&CombineLimitMaster_TypeInfo, v54);
    sub_1B640C8(&CombineLimitReleaseMaster_TypeInfo, v55);
    sub_1B640C8(&CombineMaster_TypeInfo, v56);
    sub_1B640C8(&CombineMaterialMaster_TypeInfo, v57);
    sub_1B640C8(&CombineQpMaster_TypeInfo, v58);
    sub_1B640C8(&CombineQpSvtEquipMaster_TypeInfo, v59);
    sub_1B640C8(&CombineSkillMaster_TypeInfo, v60);
    sub_1B640C8(&CombineTdMaster_TypeInfo, v61);
    sub_1B640C8(&CommandCardRankParamMaster_TypeInfo, v62);
    sub_1B640C8(&CommandCodeCommentMaster_TypeInfo, v63);
    sub_1B640C8(&CommandCodeMaster_TypeInfo, v64);
    sub_1B640C8(&CommandCodeSkillMaster_TypeInfo, v65);
    sub_1B640C8(&CommandCodeSkillReleaseMaster_TypeInfo, v66);
    sub_1B640C8(&CommandSpellMaster_TypeInfo, v67);
    sub_1B640C8(&CommonConsumeMaster_TypeInfo, v68);
    sub_1B640C8(&CommonReleaseMaster_TypeInfo, v69);
    sub_1B640C8(&CommonRestrictionMaster_TypeInfo, v70);
    sub_1B640C8(&CompleteMissionMaster_TypeInfo, v71);
    sub_1B640C8(&ConstantLongMaster_TypeInfo, v72);
    sub_1B640C8(&ConstantMaster_TypeInfo, v73);
    sub_1B640C8(&ConstantStrMaster_TypeInfo, v74);
    sub_1B640C8(&CvMaster_TypeInfo, v75);
    sub_1B640C8(&DataMasterBase___TypeInfo, v76);
    sub_1B640C8(&DialogMessageMaster_TypeInfo, v77);
    sub_1B640C8(&EffectMaster_TypeInfo, v78);
    sub_1B640C8(&EffectMovieMaster_TypeInfo, v79);
    sub_1B640C8(&EnemyMstBattleMaster_TypeInfo, v80);
    sub_1B640C8(&EnemyMstMaster_TypeInfo, v81);
    sub_1B640C8(&EquipAddMaster_TypeInfo, v82);
    sub_1B640C8(&EquipExpMaster_TypeInfo, v83);
    sub_1B640C8(&EquipImageMaster_TypeInfo, v84);
    sub_1B640C8(&EquipMaster_TypeInfo, v85);
    sub_1B640C8(&EquipSkillMaster_TypeInfo, v86);
    sub_1B640C8(&EventAddMaster_TypeInfo, v87);
    sub_1B640C8(&EventBoardGameCellMaster_TypeInfo, v88);
    sub_1B640C8(&EventBoardGameTokenMaster_TypeInfo, v89);
    sub_1B640C8(&EventBoardGameTokenRewardMaster_TypeInfo, v90);
    sub_1B640C8(&EventBonusFilterGroupInfoMaster_TypeInfo, v91);
    sub_1B640C8(&EventBonusFilterGroupMemberMaster_TypeInfo, v92);
    sub_1B640C8(&EventBonusFilterMaster_TypeInfo, v93);
    sub_1B640C8(&EventBoostItemUsedMaster_TypeInfo, v94);
    sub_1B640C8(&EventBossStatusUiMaster_TypeInfo, v95);
    sub_1B640C8(&EventBuddyPointMaster_TypeInfo, v96);
    sub_1B640C8(&EventBulletinBoardMaster_TypeInfo, v97);
    sub_1B640C8(&EventBulletinBoardReleaseMaster_TypeInfo, v98);
    sub_1B640C8(&EventCampaignMaster_TypeInfo, v99);
    sub_1B640C8(&EventCampaignReleaseMaster_TypeInfo, v100);
    sub_1B640C8(&EventCombineCostumeMaster_TypeInfo, v101);
    sub_1B640C8(&EventCombineMaster_TypeInfo, v102);
    sub_1B640C8(&EventCommandAssistMaster_TypeInfo, v103);
    sub_1B640C8(&EventConquestRewardMaster_TypeInfo, v104);
    sub_1B640C8(&EventCooltimeRewardMaster_TypeInfo, v105);
    sub_1B640C8(&EventDataLostBattleMaster_TypeInfo, v106);
    sub_1B640C8(&EventDataLostBattleResetMaster_TypeInfo, v107);
    sub_1B640C8(&EventDetailMaster_TypeInfo, v108);
    sub_1B640C8(&EventDiggingBlockMaster_TypeInfo, v109);
    sub_1B640C8(&EventDiggingMaster_TypeInfo, v110);
    sub_1B640C8(&EventDiggingRewardMaster_TypeInfo, v111);
    sub_1B640C8(&EventEquipSkillReleaseMaster_TypeInfo, v112);
    sub_1B640C8(&EventExpeditionMaster_TypeInfo, v113);
    sub_1B640C8(&EventExpeditionPieceMaster_TypeInfo, v114);
    sub_1B640C8(&EventFactoryMaster_TypeInfo, v115);
    sub_1B640C8(&EventFatigueRecoveryMaster_TypeInfo, v116);
    sub_1B640C8(&EventFilterMaster_TypeInfo, v117);
    sub_1B640C8(&EventFortificationDetailMaster_TypeInfo, v118);
    sub_1B640C8(&EventFortificationMaster_TypeInfo, v119);
    sub_1B640C8(&EventFortificationSvtMaster_TypeInfo, v120);
    sub_1B640C8(&EventGroupMaster_TypeInfo, v121);
    sub_1B640C8(&EventItemDisplayGroupMaster_TypeInfo, v122);
    sub_1B640C8(&EventItemDisplayMaster_TypeInfo, v123);
    sub_1B640C8(&EventItemDisplayReleaseMaster_TypeInfo, v124);
    sub_1B640C8(&EventLocationCampaignMaster_TypeInfo, v125);
    sub_1B640C8(&EventMaster_TypeInfo, v126);
    sub_1B640C8(&EventMissionActionAddMaster_TypeInfo, v127);
    sub_1B640C8(&EventMissionActionMaster_TypeInfo, v128);
    sub_1B640C8(&EventMissionAddMaster_TypeInfo, v129);
    sub_1B640C8(&EventMissionCondDetailMaster_TypeInfo, v130);
    sub_1B640C8(&EventMissionConditionMaster_TypeInfo, v131);
    sub_1B640C8(&EventMissionGroupMaster_TypeInfo, v132);
    sub_1B640C8(&EventMissionMaster_TypeInfo, v133);
    sub_1B640C8(&EventMuralMaster_TypeInfo, v134);
    sub_1B640C8(&EventPanelMapDetailMaster_TypeInfo, v135);
    sub_1B640C8(&EventPanelMapMaster_TypeInfo, v136);
    sub_1B640C8(&EventPanelScanMaster_TypeInfo, v137);
    sub_1B640C8(&EventPanelSpotMaster_TypeInfo, v138);
    sub_1B640C8(&EventPointActivityMaster_TypeInfo, v139);
    sub_1B640C8(&EventPointBuffMaster_TypeInfo, v140);
    sub_1B640C8(&EventPointGroupAddMaster_TypeInfo, v141);
    sub_1B640C8(&EventPointGroupMaster_TypeInfo, v142);
    sub_1B640C8(&EventPointMaster_TypeInfo, v143);
    sub_1B640C8(&EventPointUpperMaster_TypeInfo, v144);
    sub_1B640C8(&EventPointUpperReleaseMaster_TypeInfo, v145);
    sub_1B640C8(&EventProgressValueMaster_TypeInfo, v146);
    sub_1B640C8(&EventQuestCooltimeMaster_TypeInfo, v147);
    sub_1B640C8(&EventQuestMaster_TypeInfo, v148);
    sub_1B640C8(&EventRaceMaster_TypeInfo, v149);
    sub_1B640C8(&EventRaceResultMaster_TypeInfo, v150);
    sub_1B640C8(&EventRaidMaster_TypeInfo, v151);
    sub_1B640C8(&EventRandomMissionMaster_TypeInfo, v152);
    sub_1B640C8(&EventRecipeGiftMaster_TypeInfo, v153);
    sub_1B640C8(&EventRecipeMaster_TypeInfo, v154);
    sub_1B640C8(&EventRewardBgMaster_TypeInfo, v155);
    sub_1B640C8(&EventRewardExtraMaster_TypeInfo, v156);
    sub_1B640C8(&EventRewardGuideReleaseMaster_TypeInfo, v157);
    sub_1B640C8(&EventRewardMaster_TypeInfo, v158);
    sub_1B640C8(&EventRewardSceneMaster_TypeInfo, v159);
    sub_1B640C8(&EventRewardSceneReleaseMaster_TypeInfo, v160);
    sub_1B640C8(&EventRewardSetMaster_TypeInfo, v161);
    sub_1B640C8(&EventScriptMaster_TypeInfo, v162);
    sub_1B640C8(&EventScriptReleaseMaster_TypeInfo, v163);
    sub_1B640C8(&EventServantFatigueMaster_TypeInfo, v164);
    sub_1B640C8(&EventServantMaster_TypeInfo, v165);
    sub_1B640C8(&EventServantPointRankMaster_TypeInfo, v166);
    sub_1B640C8(&EventStatusMaster_TypeInfo, v167);
    sub_1B640C8(&EventStatusQuestMaster_TypeInfo, v168);
    sub_1B640C8(&EventSuperBossMaster_TypeInfo, v169);
    sub_1B640C8(&EventTowerMaster_TypeInfo, v170);
    sub_1B640C8(&EventTowerRewardMaster_TypeInfo, v171);
    sub_1B640C8(&EventTradeGoodsMaster_TypeInfo, v172);
    sub_1B640C8(&EventTradePickupMaster_TypeInfo, v173);
    sub_1B640C8(&EventTradeStoreMaster_TypeInfo, v174);
    sub_1B640C8(&EventTutorialCondMaster_TypeInfo, v175);
    sub_1B640C8(&EventTutorialMaster_TypeInfo, v176);
    sub_1B640C8(&EventUiMaster_TypeInfo, v177);
    sub_1B640C8(&EventUiReleaseMaster_TypeInfo, v178);
    sub_1B640C8(&EventUiValueMaster_TypeInfo, v179);
    sub_1B640C8(&EventVoicePlayMaster_TypeInfo, v180);
    sub_1B640C8(&ExcludeMotionMaster_TypeInfo, v181);
    sub_1B640C8(&FieldMotionMaster_TypeInfo, v182);
    sub_1B640C8(&FriendshipMaster_TypeInfo, v183);
    sub_1B640C8(&FriendshipQuestDialogInfoMaster_TypeInfo, v184);
    sub_1B640C8(&FuncDispMaster_TypeInfo, v185);
    sub_1B640C8(&FuncTypeDetailMaster_TypeInfo, v186);
    sub_1B640C8(&FunctionCategoryMaster_TypeInfo, v187);
    sub_1B640C8(&FunctionGroupMaster_TypeInfo, v188);
    sub_1B640C8(&FunctionMaster_TypeInfo, v189);
    sub_1B640C8(&GachaAppendMaster_TypeInfo, v190);
    sub_1B640C8(&GachaBehaviorMaster_TypeInfo, v191);
    sub_1B640C8(&GachaBonusSelectLineupMaster_TypeInfo, v192);
    sub_1B640C8(&GachaBonusSelectMaster_TypeInfo, v193);
    sub_1B640C8(&GachaDetailMaster_TypeInfo, v194);
    sub_1B640C8(&GachaExtraGiftMaster_TypeInfo, v195);
    sub_1B640C8(&GachaGroupMaster_TypeInfo, v196);
    sub_1B640C8(&GachaImageMaster_TypeInfo, v197);
    sub_1B640C8(&GachaMaster_TypeInfo, v198);
    sub_1B640C8(&GachaPickupCollateralGroupMaster_TypeInfo, v199);
    sub_1B640C8(&GachaPickupCollateralMaster_TypeInfo, v200);
    sub_1B640C8(&GachaReleaseMaster_TypeInfo, v201);
    sub_1B640C8(&GachaStoryAdjustMaster_TypeInfo, v202);
    sub_1B640C8(&GachaSubMaster_TypeInfo, v203);
    sub_1B640C8(&GachaTicketMaster_TypeInfo, v204);
    sub_1B640C8(&GiftAddMaster_TypeInfo, v205);
    sub_1B640C8(&GiftDetailMaster_TypeInfo, v206);
    sub_1B640C8(&GiftMaster_TypeInfo, v207);
    sub_1B640C8(&GuideMaster_TypeInfo, v208);
    sub_1B640C8(&HeelPortraitMaster_TypeInfo, v209);
    sub_1B640C8(&IllustratorMaster_TypeInfo, v210);
    sub_1B640C8(&IndividualityPersonalityMaster_TypeInfo, v211);
    sub_1B640C8(&IndividualityPolicyMaster_TypeInfo, v212);
    sub_1B640C8(&ItemDropEfficiencyMaster_TypeInfo, v213);
    sub_1B640C8(&ItemMaster_TypeInfo, v214);
    sub_1B640C8(&ItemSelectMaster_TypeInfo, v215);
    sub_1B640C8(&LoginQuestMaster_TypeInfo, v216);
    sub_1B640C8(&MapButtonMaster_TypeInfo, v217);
    sub_1B640C8(&MapCondMaster_TypeInfo, v218);
    sub_1B640C8(&MapGimmickLayerMaster_TypeInfo, v219);
    sub_1B640C8(&MapGimmickMaster_TypeInfo, v220);
    sub_1B640C8(&MapGimmickPathMaster_TypeInfo, v221);
    sub_1B640C8(&MapGimmickPathReleaseMaster_TypeInfo, v222);
    sub_1B640C8(&MapGimmickReleaseMaster_TypeInfo, v223);
    sub_1B640C8(&MapLayerMaster_TypeInfo, v224);
    sub_1B640C8(&MapMaster_TypeInfo, v225);
    sub_1B640C8(&MapUpdateScheduleMaster_TypeInfo, v226);
    sub_1B640C8(&MasterPhotoMaster_TypeInfo, v227);
    sub_1B640C8(&MaterialFolderMaster_TypeInfo, v228);
    sub_1B640C8(&MissionNaviQuestMaster_TypeInfo, v229);
    sub_1B640C8(&MissionNaviTransitionMaster_TypeInfo, v230);
    sub_1B640C8(&MstMissionDisplayInfoMaster_TypeInfo, v231);
    sub_1B640C8(&MstMissionMaster_TypeInfo, v232);
    sub_1B640C8(&MyRoomAddMaster_TypeInfo, v233);
    sub_1B640C8(&NewsMaster_TypeInfo, v234);
    sub_1B640C8(&NotEndEventMissionFixMaster_TypeInfo, v235);
    sub_1B640C8(&NpcFollowerMaster_TypeInfo, v236);
    sub_1B640C8(&NpcFollowerReleaseMaster_TypeInfo, v237);
    sub_1B640C8(&NpcServantEquipMaster_TypeInfo, v238);
    sub_1B640C8(&NpcServantFollowerIndividualityMaster_TypeInfo, v239);
    sub_1B640C8(&NpcServantFollowerMaster_TypeInfo, v240);
    sub_1B640C8(&OpeningMovieMaster_TypeInfo, v241);
    sub_1B640C8(&OtherUserGameMaster_TypeInfo, v242);
    sub_1B640C8(&PartialMaintenanceMaster_TypeInfo, v243);
    sub_1B640C8(&PaymentHistoryMaster_TypeInfo, v244);
    sub_1B640C8(&PaymentLimitMaster_TypeInfo, v245);
    sub_1B640C8(&PickupUserFollowerMaster_TypeInfo, v246);
    sub_1B640C8(&PrivilegeMaster_TypeInfo, v247);
    sub_1B640C8(&QuestAddMaster_TypeInfo, v248);
    sub_1B640C8(&QuestAutoOrganizationAdjustMaster_TypeInfo, v249);
    sub_1B640C8(&QuestBehaviorMaster_TypeInfo, v250);
    sub_1B640C8(&QuestConsumeItemMaster_TypeInfo, v251);
    sub_1B640C8(&QuestDateRangeMaster_TypeInfo, v252);
    sub_1B640C8(&QuestGroupMaster_TypeInfo, v253);
    sub_1B640C8(&QuestHintMaster_TypeInfo, v254);
    sub_1B640C8(&QuestMaster_TypeInfo, v255);
    sub_1B640C8(&QuestMessageMaster_TypeInfo, v256);
    sub_1B640C8(&QuestPhaseDetailAddMaster_TypeInfo, v257);
    sub_1B640C8(&QuestPhaseDetailMaster_TypeInfo, v258);
    sub_1B640C8(&QuestPhaseIndividualityMaster_TypeInfo, v259);
    sub_1B640C8(&QuestPhaseMaster_TypeInfo, v260);
    sub_1B640C8(&QuestPhasePresentMaster_TypeInfo, v261);
    sub_1B640C8(&QuestPickupMaster_TypeInfo, v262);
    sub_1B640C8(&QuestRacePointMaster_TypeInfo, v263);
    sub_1B640C8(&QuestRandomGroupMaster_TypeInfo, v264);
    sub_1B640C8(&QuestReleaseMaster_TypeInfo, v265);
    sub_1B640C8(&QuestReleaseOverwriteMaster_TypeInfo, v266);
    sub_1B640C8(&QuestResetMaster_TypeInfo, v267);
    sub_1B640C8(&QuestRestrictionInfoMaster_TypeInfo, v268);
    sub_1B640C8(&QuestRestrictionMaster_TypeInfo, v269);
    sub_1B640C8(&QuestScriptBranchMaterialMaster_TypeInfo, v270);
    sub_1B640C8(&QuestScriptMaster_TypeInfo, v271);
    sub_1B640C8(&QuestScriptMaterialNextMaster_TypeInfo, v272);
    sub_1B640C8(&QuestScriptMaterialOverwriteMaster_TypeInfo, v273);
    sub_1B640C8(&QuestScriptReleaseMaster_TypeInfo, v274);
    sub_1B640C8(&QuestSpotReleaseMaster_TypeInfo, v275);
    sub_1B640C8(&RecommendAdviceMessageMaster_TypeInfo, v276);
    sub_1B640C8(&RecommendSupportQuestMaster_TypeInfo, v277);
    sub_1B640C8(&RecoverMaster_TypeInfo, v278);
    sub_1B640C8(&ReprintStageMaster_TypeInfo, v279);
    sub_1B640C8(&RestrictionBaseMaster_TypeInfo, v280);
    sub_1B640C8(&RestrictionMaster_TypeInfo, v281);
    sub_1B640C8(&RestrictionMessageMaster_TypeInfo, v282);
    sub_1B640C8(&RestrictionSlotDetailMaster_TypeInfo, v283);
    sub_1B640C8(&RestrictionSlotMaster_TypeInfo, v284);
    sub_1B640C8(&RestrictionWholeMaster_TypeInfo, v285);
    sub_1B640C8(&RoadmapMaster_TypeInfo, v286);
    sub_1B640C8(&ServantAddMaster_TypeInfo, v287);
    sub_1B640C8(&ServantAnimationOverwriteMaster_TypeInfo, v288);
    sub_1B640C8(&ServantAppendPassiveSkillMaster_TypeInfo, v289);
    sub_1B640C8(&ServantBattlePointMaster_TypeInfo, v290);
    sub_1B640C8(&ServantCardAddMaster_TypeInfo, v291);
    sub_1B640C8(&ServantCardMaster_TypeInfo, v292);
    sub_1B640C8(&ServantChangeMaster_TypeInfo, v293);
    sub_1B640C8(&ServantClassMaster_TypeInfo, v294);
    sub_1B640C8(&ServantCollectionMaster_TypeInfo, v295);
    sub_1B640C8(&ServantCommandCodeUnlockMaster_TypeInfo, v296);
    sub_1B640C8(&ServantCommentAddMaster_TypeInfo, v297);
    sub_1B640C8(&ServantCommentMaster_TypeInfo, v298);
    sub_1B640C8(&ServantCostumeMaster_TypeInfo, v299);
    sub_1B640C8(&ServantCostumeReleaseMaster_TypeInfo, v300);
    sub_1B640C8(&ServantExceedMaster_TypeInfo, v301);
    sub_1B640C8(&ServantExpMaster_TypeInfo, v302);
    sub_1B640C8(&ServantFilterMaster_TypeInfo, v303);
    sub_1B640C8(&ServantFlagMaster_TypeInfo, v304);
    sub_1B640C8(&ServantFlagReleaseMaster_TypeInfo, v305);
    sub_1B640C8(&ServantGroupMaster_TypeInfo, v306);
    sub_1B640C8(&ServantIndividualityMaster_TypeInfo, v307);
    sub_1B640C8(&ServantLimitAddMaster_TypeInfo, v308);
    sub_1B640C8(&ServantLimitImageMaster_TypeInfo, v309);
    sub_1B640C8(&ServantLimitMaster_TypeInfo, v310);
    sub_1B640C8(&ServantLimitSpoilerProtectionMaster_TypeInfo, v311);
    sub_1B640C8(&ServantLvDetailMaster_TypeInfo, v312);
    sub_1B640C8(&ServantMaster_TypeInfo, v313);
    sub_1B640C8(&ServantMaterialFolderMaster_TypeInfo, v314);
    sub_1B640C8(&ServantOverwriteMaster_TypeInfo, v315);
    sub_1B640C8(&ServantPassiveSkillMaster_TypeInfo, v316);
    sub_1B640C8(&ServantPassiveSkillReleaseMaster_TypeInfo, v317);
    sub_1B640C8(&ServantPhotoMaster_TypeInfo, v318);
    sub_1B640C8(&ServantProfileMaster_TypeInfo, v319);
    sub_1B640C8(&ServantProfilePushMaster_TypeInfo, v320);
    sub_1B640C8(&ServantRarityMaster_TypeInfo, v321);
    sub_1B640C8(&ServantScriptAddMaster_TypeInfo, v322);
    sub_1B640C8(&ServantScriptMaster_TypeInfo, v323);
    sub_1B640C8(&ServantScriptMultipleMaster_TypeInfo, v324);
    sub_1B640C8(&ServantSkillMaster_TypeInfo, v325);
    sub_1B640C8(&ServantSkillReleaseMaster_TypeInfo, v326);
    sub_1B640C8(&ServantTransformMaster_TypeInfo, v327);
    sub_1B640C8(&ServantTreasureDeviceAddMaster_TypeInfo, v328);
    sub_1B640C8(&ServantTreasureDeviceDamageMaster_TypeInfo, v329);
    sub_1B640C8(&ServantTreasureDeviceReleaseMaster_TypeInfo, v330);
    sub_1B640C8(&ServantTreasureDvcMaster_TypeInfo, v331);
    sub_1B640C8(&ServantVoiceMaster_TypeInfo, v332);
    sub_1B640C8(&ServantVoicePatternMaster_TypeInfo, v333);
    sub_1B640C8(&ServantVoiceRelationMaster_TypeInfo, v334);
    sub_1B640C8(&SetItemMaster_TypeInfo, v335);
    sub_1B640C8(&ShopActionMaster_TypeInfo, v336);
    sub_1B640C8(&ShopDetailMaster_TypeInfo, v337);
    sub_1B640C8(&ShopGroupMaster_TypeInfo, v338);
    sub_1B640C8(&ShopMaster_TypeInfo, v339);
    sub_1B640C8(&ShopReleaseMaster_TypeInfo, v340);
    sub_1B640C8(&ShopScriptMaster_TypeInfo, v341);
    sub_1B640C8(&SkillAddMaster_TypeInfo, v342);
    sub_1B640C8(&SkillDetailMaster_TypeInfo, v343);
    sub_1B640C8(&SkillGroupMaster_TypeInfo, v344);
    sub_1B640C8(&SkillGroupOverwriteMaster_TypeInfo, v345);
    sub_1B640C8(&SkillIndividualityMaster_TypeInfo, v346);
    sub_1B640C8(&SkillLvMaster_TypeInfo, v347);
    sub_1B640C8(&SkillMaster_TypeInfo, v348);
    sub_1B640C8(&SpotAddMaster_TypeInfo, v349);
    sub_1B640C8(&SpotImageMaster_TypeInfo, v350);
    sub_1B640C8(&SpotLayerMaster_TypeInfo, v351);
    sub_1B640C8(&SpotMaster_TypeInfo, v352);
    sub_1B640C8(&SpotPathMaster_TypeInfo, v353);
    sub_1B640C8(&SpotRoadMaster_TypeInfo, v354);
    sub_1B640C8(&StageMaster_TypeInfo, v355);
    sub_1B640C8(&StatusEffectPosOverwriteMaster_TypeInfo, v356);
    sub_1B640C8(&StoneShopMaster_TypeInfo, v357);
    sub_1B640C8(&SubEquipMaster_TypeInfo, v358);
    sub_1B640C8(&SvtAppendPassiveSkillUnlockMaster_TypeInfo, v359);
    sub_1B640C8(&SvtCoinMaster_TypeInfo, v360);
    sub_1B640C8(&SvtMaterialTdMaster_TypeInfo, v361);
    sub_1B640C8(&SvtMultiPortraitMaster_TypeInfo, v362);
    sub_1B640C8(&TblFriendMaster_TypeInfo, v363);
    sub_1B640C8(&TblUserMaster_TypeInfo, v364);
    sub_1B640C8(&TelopMaster_TypeInfo, v365);
    sub_1B640C8(&TerminalOverwriteMaster_TypeInfo, v366);
    sub_1B640C8(&TipsBattleMaster_TypeInfo, v367);
    sub_1B640C8(&TotalBoxGachaMaster_TypeInfo, v368);
    sub_1B640C8(&TotalEventPointMaster_TypeInfo, v369);
    sub_1B640C8(&TotalEventRaceMaster_TypeInfo, v370);
    sub_1B640C8(&TotalEventRaidMaster_TypeInfo, v371);
    sub_1B640C8(&TotalLoginMaster_TypeInfo, v372);
    sub_1B640C8(&TreasureBoxGiftMaster_TypeInfo, v373);
    sub_1B640C8(&TreasureBoxMaster_TypeInfo, v374);
    sub_1B640C8(&TreasureBoxTalkMaster_TypeInfo, v375);
    sub_1B640C8(&TreasureDeviceSequenceWeightMaster_TypeInfo, v376);
    sub_1B640C8(&TreasureDvcDetailMaster_TypeInfo, v377);
    sub_1B640C8(&TreasureDvcLvMaster_TypeInfo, v378);
    sub_1B640C8(&TreasureDvcMaster_TypeInfo, v379);
    sub_1B640C8(&UpdateProfileDialogInfoMaster_TypeInfo, v380);
    sub_1B640C8(&UserAccessaryMaster_TypeInfo, v381);
    sub_1B640C8(&UserAccountLinkageMaster_TypeInfo, v382);
    sub_1B640C8(&UserBlacklistMaster_TypeInfo, v383);
    sub_1B640C8(&UserBoxGachaMaster_TypeInfo, v384);
    sub_1B640C8(&UserClassBoardSquareMaster_TypeInfo, v385);
    sub_1B640C8(&UserCoinRoomMaster_TypeInfo, v386);
    sub_1B640C8(&UserCombineExpMaster_TypeInfo, v387);
    sub_1B640C8(&UserCommandCodeCollectionMaster_TypeInfo, v388);
    sub_1B640C8(&UserCommandCodeMaster_TypeInfo, v389);
    sub_1B640C8(&UserContinueMaster_TypeInfo, v390);
    sub_1B640C8(&UserDeckMaster_TypeInfo, v391);
    sub_1B640C8(&UserDeleteReservationMaster_TypeInfo, v392);
    sub_1B640C8(&UserEquipMaster_TypeInfo, v393);
    sub_1B640C8(&UserEventAlloutBattleMaster_TypeInfo, v394);
    sub_1B640C8(&UserEventBoardGameTokenMaster_TypeInfo, v395);
    sub_1B640C8(&UserEventCooltimeRewardMaster_TypeInfo, v396);
    sub_1B640C8(&UserEventDataLostMaster_TypeInfo, v397);
    sub_1B640C8(&UserEventDeckMaster_TypeInfo, v398);
    sub_1B640C8(&UserEventDiggingMaster_TypeInfo, v399);
    sub_1B640C8(&UserEventExpeditionMaster_TypeInfo, v400);
    sub_1B640C8(&UserEventFortificationMaster_TypeInfo, v401);
    sub_1B640C8(&UserEventMapMaster_TypeInfo, v402);
    sub_1B640C8(&UserEventMaster_TypeInfo, v403);
    sub_1B640C8(&UserEventMissionCondDetailMaster_TypeInfo, v404);
    sub_1B640C8(&UserEventMissionFixMaster_TypeInfo, v405);
    sub_1B640C8(&UserEventMissionMaster_TypeInfo, v406);
    sub_1B640C8(&UserEventPointMaster_TypeInfo, v407);
    sub_1B640C8(&UserEventQuestCooltimeMaster_TypeInfo, v408);
    sub_1B640C8(&UserEventRaceMaster_TypeInfo, v409);
    sub_1B640C8(&UserEventRaidMaster_TypeInfo, v410);
    sub_1B640C8(&UserEventRandomMissionMaster_TypeInfo, v411);
    sub_1B640C8(&UserEventServantFatigueMaster_TypeInfo, v412);
    sub_1B640C8(&UserEventServantPointMaster_TypeInfo, v413);
    sub_1B640C8(&UserEventSpotMaster_TypeInfo, v414);
    sub_1B640C8(&UserEventTradeMaster_TypeInfo, v415);
    sub_1B640C8(&UserExchangeSvtMaster_TypeInfo, v416);
    sub_1B640C8(&UserExpMaster_TypeInfo, v417);
    sub_1B640C8(&UserExternalPaymentStoneMaster_TypeInfo, v418);
    sub_1B640C8(&UserFollowMaster_TypeInfo, v419);
    sub_1B640C8(&UserFollowerMaster_TypeInfo, v420);
    sub_1B640C8(&UserFormationMaster_TypeInfo, v421);
    sub_1B640C8(&UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo, v422);
    sub_1B640C8(&UserFriendRequestHistoryMaster_TypeInfo, v423);
    sub_1B640C8(&UserGachaDrawLogMaster_TypeInfo, v424);
    sub_1B640C8(&UserGachaExtraCountMaster_TypeInfo, v425);
    sub_1B640C8(&UserGachaHistoryMaster_TypeInfo, v426);
    sub_1B640C8(&UserGachaMaster_TypeInfo, v427);
    sub_1B640C8(&UserGachaPickupCollateralMaster_TypeInfo, v428);
    sub_1B640C8(&UserGameCommonMaster_TypeInfo, v429);
    sub_1B640C8(&UserGameMaster_TypeInfo, v430);
    sub_1B640C8(&UserHeelPortraitMaster_TypeInfo, v431);
    sub_1B640C8(&UserInterruptionQuestMaster_TypeInfo, v432);
    sub_1B640C8(&UserItemMaster_TypeInfo, v433);
    sub_1B640C8(&UserLoginMaster_TypeInfo, v434);
    sub_1B640C8(&UserMaster_TypeInfo, v435);
    sub_1B640C8(&UserNpcSvtRecordMaster_TypeInfo, v436);
    sub_1B640C8(&UserPaymentLimitMaster_TypeInfo, v437);
    sub_1B640C8(&UserPresentBoxMaster_TypeInfo, v438);
    sub_1B640C8(&UserPresentHistoryMaster_TypeInfo, v439);
    sub_1B640C8(&UserPrivilegeMaster_TypeInfo, v440);
    sub_1B640C8(&UserQuestInfoMaster_TypeInfo, v441);
    sub_1B640C8(&UserQuestMaster_TypeInfo, v442);
    sub_1B640C8(&UserQuestRecordMaster_TypeInfo, v443);
    sub_1B640C8(&UserQuestRouteMaster_TypeInfo, v444);
    sub_1B640C8(&UserRecommendFollowerMaster_TypeInfo, v445);
    sub_1B640C8(&UserRecommendSupportMaster_TypeInfo, v446);
    sub_1B640C8(&UserServantAppendPassiveSkillLvMaster_TypeInfo, v447);
    sub_1B640C8(&UserServantAppendPassiveSkillMaster_TypeInfo, v448);
    sub_1B640C8(&UserServantCollectionMaster_TypeInfo, v449);
    sub_1B640C8(&UserServantCommandCardMaster_TypeInfo, v450);
    sub_1B640C8(&UserServantCommandCodeMaster_TypeInfo, v451);
    sub_1B640C8(&UserServantLeaderMaster_TypeInfo, v452);
    sub_1B640C8(&UserServantMaster_TypeInfo, v453);
    sub_1B640C8(&UserServantStorageMaster_TypeInfo, v454);
    sub_1B640C8(&UserServantVoicePlayedMaster_TypeInfo, v455);
    sub_1B640C8(&UserShopMaster_TypeInfo, v456);
    sub_1B640C8(&UserSubEquipMaster_TypeInfo, v457);
    sub_1B640C8(&UserSuperBossMaster_TypeInfo, v458);
    sub_1B640C8(&UserSupportDeckMaster_TypeInfo, v459);
    sub_1B640C8(&UserSvtCoinMaster_TypeInfo, v460);
    sub_1B640C8(&ViewEnemyMaster_TypeInfo, v461);
    sub_1B640C8(&ViewGachaFeaturedServantMaster_TypeInfo, v462);
    sub_1B640C8(&ViewQuestEnemyInfoMaster_TypeInfo, v463);
    sub_1B640C8(&ViewQuestInfoMaster_TypeInfo, v464);
    sub_1B640C8(&ViewWaveEnemyMaster_TypeInfo, v465);
    sub_1B640C8(&VoiceClosedMessageMaster_TypeInfo, v466);
    sub_1B640C8(&VoiceCondMaster_TypeInfo, v467);
    sub_1B640C8(&VoiceMaster_TypeInfo, v468);
    sub_1B640C8(&VoiceMaterialCondMaster_TypeInfo, v469);
    sub_1B640C8(&VoicePlayCondMaster_TypeInfo, v470);
    sub_1B640C8(&VoicePlayGroupMaster_TypeInfo, v471);
    sub_1B640C8(&VoiceReleaseMaster_TypeInfo, v472);
    sub_1B640C8(&WarAddMaster_TypeInfo, v473);
    sub_1B640C8(&WarBoardAIMaster_TypeInfo, v474);
    sub_1B640C8(&WarBoardActionPointClassMaster_TypeInfo, v475);
    sub_1B640C8(&WarBoardActionPointMaster_TypeInfo, v476);
    sub_1B640C8(&WarBoardActionTrendConditionMaster_TypeInfo, v477);
    sub_1B640C8(&WarBoardActionTrendGroupMaster_TypeInfo, v478);
    sub_1B640C8(&WarBoardActionTrendMaster_TypeInfo, v479);
    sub_1B640C8(&WarBoardCommonReleaseMaster_TypeInfo, v480);
    sub_1B640C8(&WarBoardDataMaster_TypeInfo, v481);
    sub_1B640C8(&WarBoardEffectMaster_TypeInfo, v482);
    sub_1B640C8(&WarBoardEventMaster_TypeInfo, v483);
    sub_1B640C8(&WarBoardEventScriptMaster_TypeInfo, v484);
    sub_1B640C8(&WarBoardFutureActionTrendMaster_TypeInfo, v485);
    sub_1B640C8(&WarBoardIndividualityClassMaster_TypeInfo, v486);
    sub_1B640C8(&WarBoardItemMaster_TypeInfo, v487);
    sub_1B640C8(&WarBoardMaster_TypeInfo, v488);
    sub_1B640C8(&WarBoardMessageMaster_TypeInfo, v489);
    sub_1B640C8(&WarBoardMessageScriptMaster_TypeInfo, v490);
    sub_1B640C8(&WarBoardOnboardSkillMaster_TypeInfo, v491);
    sub_1B640C8(&WarBoardPartySkillMaster_TypeInfo, v492);
    sub_1B640C8(&WarBoardQuestMaster_TypeInfo, v493);
    sub_1B640C8(&WarBoardRatingBaseMaster_TypeInfo, v494);
    sub_1B640C8(&WarBoardRatingOffsetGroupMaster_TypeInfo, v495);
    sub_1B640C8(&WarBoardRatingOffsetMaster_TypeInfo, v496);
    sub_1B640C8(&WarBoardReinforcementsMaster_TypeInfo, v497);
    sub_1B640C8(&WarBoardRoadMaster_TypeInfo, v498);
    sub_1B640C8(&WarBoardSquareIndexGroupMaster_TypeInfo, v499);
    sub_1B640C8(&WarBoardSquareMaster_TypeInfo, v500);
    sub_1B640C8(&WarBoardStageBossMaster_TypeInfo, v501);
    sub_1B640C8(&WarBoardStageDetailMaster_TypeInfo, v502);
    sub_1B640C8(&WarBoardStageLayoutMaster_TypeInfo, v503);
    sub_1B640C8(&WarBoardStageMaster_TypeInfo, v504);
    sub_1B640C8(&WarBoardStageNpcMaster_TypeInfo, v505);
    sub_1B640C8(&WarBoardStagePieceDetailMaster_TypeInfo, v506);
    sub_1B640C8(&WarBoardStageReinforcementsMaster_TypeInfo, v507);
    sub_1B640C8(&WarBoardStageWallMaster_TypeInfo, v508);
    sub_1B640C8(&WarBoardTacticalTrendMaster_TypeInfo, v509);
    sub_1B640C8(&WarBoardTreasureMaster_TypeInfo, v510);
    sub_1B640C8(&WarGroupMaster_TypeInfo, v511);
    sub_1B640C8(&WarMaster_TypeInfo, v512);
    sub_1B640C8(&WarMessageMaster_TypeInfo, v513);
    sub_1B640C8(&WarQuestSelectionMaster_TypeInfo, v514);
    byte_49FBF61 = 1;
  }
  v515 = (DataMasterBase_array *)sub_1B64170(DataMasterBase___TypeInfo, 513LL);
  v518 = (ServantMaster_o *)sub_1B64314(ServantMaster_TypeInfo, v516, v517);
  ServantMaster___ctor(v518, 0LL);
  if ( !v515 )
    sub_1B64324(v519);
  if ( v518 )
  {
    v519 = sub_1B64204(v518, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  p_max_length = &v515->max_length;
  if ( !v515->max_length )
    goto LABEL_1544;
  v515->m_Items[0] = (DataMasterBase_o *)v518;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v515->m_Items, (int32_t)v518, v521, v522);
  v526 = (ServantClassMaster_o *)sub_1B64314(ServantClassMaster_TypeInfo, v524, v525);
  ServantClassMaster___ctor(v526, 0LL);
  if ( v526 )
  {
    v519 = sub_1B64204(v526, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 1 )
    goto LABEL_1544;
  v515->m_Items[1] = (DataMasterBase_o *)v526;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[1], (int32_t)v526, v527, v528);
  v531 = (ServantCommentMaster_o *)sub_1B64314(ServantCommentMaster_TypeInfo, v529, v530);
  ServantCommentMaster___ctor(v531, 0LL);
  if ( v531 )
  {
    v519 = sub_1B64204(v531, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 2 )
    goto LABEL_1544;
  v515->m_Items[2] = (DataMasterBase_o *)v531;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[2], (int32_t)v531, v532, v533);
  v536 = (ServantProfileMaster_o *)sub_1B64314(ServantProfileMaster_TypeInfo, v534, v535);
  ServantProfileMaster___ctor(v536, 0LL);
  if ( v536 )
  {
    v519 = sub_1B64204(v536, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 3 )
    goto LABEL_1544;
  v515->m_Items[3] = (DataMasterBase_o *)v536;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[3], (int32_t)v536, v537, v538);
  v541 = (WarMaster_o *)sub_1B64314(WarMaster_TypeInfo, v539, v540);
  WarMaster___ctor(v541, 0LL);
  if ( v541 )
  {
    v519 = sub_1B64204(v541, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 4 )
    goto LABEL_1544;
  v515->m_Items[4] = (DataMasterBase_o *)v541;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[4], (int32_t)v541, v542, v543);
  v546 = (UserMaster_o *)sub_1B64314(UserMaster_TypeInfo, v544, v545);
  UserMaster___ctor(v546, 0LL);
  if ( v546 )
  {
    v519 = sub_1B64204(v546, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 5 )
    goto LABEL_1544;
  v515->m_Items[5] = (DataMasterBase_o *)v546;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[5], (int32_t)v546, v547, v548);
  v551 = (UserGameMaster_o *)sub_1B64314(UserGameMaster_TypeInfo, v549, v550);
  UserGameMaster___ctor(v551, 0LL);
  if ( v551 )
  {
    v519 = sub_1B64204(v551, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 6 )
    goto LABEL_1544;
  v515->m_Items[6] = (DataMasterBase_o *)v551;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[6], (int32_t)v551, v552, v553);
  v556 = (TblUserMaster_o *)sub_1B64314(TblUserMaster_TypeInfo, v554, v555);
  TblUserMaster___ctor(v556, 0LL);
  if ( v556 )
  {
    v519 = sub_1B64204(v556, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 7 )
    goto LABEL_1544;
  v515->m_Items[7] = (DataMasterBase_o *)v556;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[7], (int32_t)v556, v557, v558);
  v561 = (UserItemMaster_o *)sub_1B64314(UserItemMaster_TypeInfo, v559, v560);
  UserItemMaster___ctor(v561, 0LL);
  if ( v561 )
  {
    v519 = sub_1B64204(v561, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 8 )
    goto LABEL_1544;
  v515->m_Items[8] = (DataMasterBase_o *)v561;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[8], (int32_t)v561, v562, v563);
  v566 = (UserServantMaster_o *)sub_1B64314(UserServantMaster_TypeInfo, v564, v565);
  UserServantMaster___ctor(v566, 0LL);
  if ( v566 )
  {
    v519 = sub_1B64204(v566, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 9 )
    goto LABEL_1544;
  v515->m_Items[9] = (DataMasterBase_o *)v566;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[9], (int32_t)v566, v567, v568);
  v571 = (UserServantStorageMaster_o *)sub_1B64314(UserServantStorageMaster_TypeInfo, v569, v570);
  UserServantStorageMaster___ctor(v571, 0LL);
  if ( v571 )
  {
    v519 = sub_1B64204(v571, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA )
    goto LABEL_1544;
  v515->m_Items[10] = (DataMasterBase_o *)v571;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[10], (int32_t)v571, v572, v573);
  v576 = (UserAccessaryMaster_o *)sub_1B64314(UserAccessaryMaster_TypeInfo, v574, v575);
  UserAccessaryMaster___ctor(v576, 0LL);
  if ( v576 )
  {
    v519 = sub_1B64204(v576, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB )
    goto LABEL_1544;
  v515->m_Items[11] = (DataMasterBase_o *)v576;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[11], (int32_t)v576, v577, v578);
  v581 = (UserQuestMaster_o *)sub_1B64314(UserQuestMaster_TypeInfo, v579, v580);
  UserQuestMaster___ctor(v581, 0LL);
  if ( v581 )
  {
    v519 = sub_1B64204(v581, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC )
    goto LABEL_1544;
  v515->m_Items[12] = (DataMasterBase_o *)v581;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[12], (int32_t)v581, v582, v583);
  v586 = (BattleMaster_o *)sub_1B64314(BattleMaster_TypeInfo, v584, v585);
  BattleMaster___ctor(v586, 0LL);
  if ( v586 )
  {
    v519 = sub_1B64204(v586, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD )
    goto LABEL_1544;
  v515->m_Items[13] = (DataMasterBase_o *)v586;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[13], (int32_t)v586, v587, v588);
  v591 = (OtherUserGameMaster_o *)sub_1B64314(OtherUserGameMaster_TypeInfo, v589, v590);
  OtherUserGameMaster___ctor(v591, 0LL);
  if ( v591 )
  {
    v519 = sub_1B64204(v591, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE )
    goto LABEL_1544;
  v515->m_Items[14] = (DataMasterBase_o *)v591;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[14], (int32_t)v591, v592, v593);
  v596 = (TblFriendMaster_o *)sub_1B64314(TblFriendMaster_TypeInfo, v594, v595);
  TblFriendMaster___ctor(v596, 0LL);
  if ( v596 )
  {
    v519 = sub_1B64204(v596, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF )
    goto LABEL_1544;
  v515->m_Items[15] = (DataMasterBase_o *)v596;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[15], (int32_t)v596, v597, v598);
  v601 = (AreaMaster_o *)sub_1B64314(AreaMaster_TypeInfo, v599, v600);
  AreaMaster___ctor(v601, 0LL);
  if ( v601 )
  {
    v519 = sub_1B64204(v601, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10 )
    goto LABEL_1544;
  v515->m_Items[16] = (DataMasterBase_o *)v601;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[16], (int32_t)v601, v602, v603);
  v606 = (ServantCardMaster_o *)sub_1B64314(ServantCardMaster_TypeInfo, v604, v605);
  ServantCardMaster___ctor(v606, 0LL);
  if ( v606 )
  {
    v519 = sub_1B64204(v606, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11 )
    goto LABEL_1544;
  v515->m_Items[17] = (DataMasterBase_o *)v606;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[17], (int32_t)v606, v607, v608);
  v611 = (EventMaster_o *)sub_1B64314(EventMaster_TypeInfo, v609, v610);
  EventMaster___ctor(v611, 0LL);
  if ( v611 )
  {
    v519 = sub_1B64204(v611, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12 )
    goto LABEL_1544;
  v515->m_Items[18] = (DataMasterBase_o *)v611;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[18], (int32_t)v611, v612, v613);
  v616 = (ItemMaster_o *)sub_1B64314(ItemMaster_TypeInfo, v614, v615);
  ItemMaster___ctor(v616, 0LL);
  if ( v616 )
  {
    v519 = sub_1B64204(v616, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13 )
    goto LABEL_1544;
  v515->m_Items[19] = (DataMasterBase_o *)v616;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[19], (int32_t)v616, v617, v618);
  v621 = (QuestMaster_o *)sub_1B64314(QuestMaster_TypeInfo, v619, v620);
  QuestMaster___ctor(v621, 0LL);
  if ( v621 )
  {
    v519 = sub_1B64204(v621, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14 )
    goto LABEL_1544;
  v515->m_Items[20] = (DataMasterBase_o *)v621;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[20], (int32_t)v621, v622, v623);
  v626 = (QuestAddMaster_o *)sub_1B64314(QuestAddMaster_TypeInfo, v624, v625);
  QuestAddMaster___ctor(v626, 0LL);
  if ( v626 )
  {
    v519 = sub_1B64204(v626, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15 )
    goto LABEL_1544;
  v515->m_Items[21] = (DataMasterBase_o *)v626;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[21], (int32_t)v626, v627, v628);
  v631 = (QuestReleaseMaster_o *)sub_1B64314(QuestReleaseMaster_TypeInfo, v629, v630);
  QuestReleaseMaster___ctor(v631, 0LL);
  if ( v631 )
  {
    v519 = sub_1B64204(v631, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16 )
    goto LABEL_1544;
  v515->m_Items[22] = (DataMasterBase_o *)v631;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[22], (int32_t)v631, v632, v633);
  v636 = (QuestDateRangeMaster_o *)sub_1B64314(QuestDateRangeMaster_TypeInfo, v634, v635);
  QuestDateRangeMaster___ctor(v636, 0LL);
  if ( v636 )
  {
    v519 = sub_1B64204(v636, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17 )
    goto LABEL_1544;
  v515->m_Items[23] = (DataMasterBase_o *)v636;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[23], (int32_t)v636, v637, v638);
  v641 = (QuestPhaseMaster_o *)sub_1B64314(QuestPhaseMaster_TypeInfo, v639, v640);
  QuestPhaseMaster___ctor(v641, 0LL);
  if ( v641 )
  {
    v519 = sub_1B64204(v641, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18 )
    goto LABEL_1544;
  v515->m_Items[24] = (DataMasterBase_o *)v641;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[24], (int32_t)v641, v642, v643);
  v646 = (QuestPhaseDetailMaster_o *)sub_1B64314(QuestPhaseDetailMaster_TypeInfo, v644, v645);
  QuestPhaseDetailMaster___ctor(v646, 0LL);
  if ( v646 )
  {
    v519 = sub_1B64204(v646, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19 )
    goto LABEL_1544;
  v515->m_Items[25] = (DataMasterBase_o *)v646;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[25], (int32_t)v646, v647, v648);
  v651 = (QuestGroupMaster_o *)sub_1B64314(QuestGroupMaster_TypeInfo, v649, v650);
  QuestGroupMaster___ctor(v651, 0LL);
  if ( v651 )
  {
    v519 = sub_1B64204(v651, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A )
    goto LABEL_1544;
  v515->m_Items[26] = (DataMasterBase_o *)v651;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[26], (int32_t)v651, v652, v653);
  v656 = (QuestRandomGroupMaster_o *)sub_1B64314(QuestRandomGroupMaster_TypeInfo, v654, v655);
  QuestRandomGroupMaster___ctor(v656, 0LL);
  if ( v656 )
  {
    v519 = sub_1B64204(v656, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B )
    goto LABEL_1544;
  v515->m_Items[27] = (DataMasterBase_o *)v656;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[27], (int32_t)v656, v657, v658);
  v661 = (QuestConsumeItemMaster_o *)sub_1B64314(QuestConsumeItemMaster_TypeInfo, v659, v660);
  QuestConsumeItemMaster___ctor(v661, 0LL);
  if ( v661 )
  {
    v519 = sub_1B64204(v661, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C )
    goto LABEL_1544;
  v515->m_Items[28] = (DataMasterBase_o *)v661;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[28], (int32_t)v661, v662, v663);
  v666 = (QuestMessageMaster_o *)sub_1B64314(QuestMessageMaster_TypeInfo, v664, v665);
  QuestMessageMaster___ctor(v666, 0LL);
  if ( v666 )
  {
    v519 = sub_1B64204(v666, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D )
    goto LABEL_1544;
  v515->m_Items[29] = (DataMasterBase_o *)v666;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[29], (int32_t)v666, v667, v668);
  v671 = (UserQuestInfoMaster_o *)sub_1B64314(UserQuestInfoMaster_TypeInfo, v669, v670);
  UserQuestInfoMaster___ctor(v671, 0LL);
  if ( v671 )
  {
    v519 = sub_1B64204(v671, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E )
    goto LABEL_1544;
  v515->m_Items[30] = (DataMasterBase_o *)v671;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[30], (int32_t)v671, v672, v673);
  v676 = (UserQuestRecordMaster_o *)sub_1B64314(UserQuestRecordMaster_TypeInfo, v674, v675);
  UserQuestRecordMaster___ctor(v676, 0LL);
  if ( v676 )
  {
    v519 = sub_1B64204(v676, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F )
    goto LABEL_1544;
  v515->m_Items[31] = (DataMasterBase_o *)v676;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[31], (int32_t)v676, v677, v678);
  v681 = (ViewQuestInfoMaster_o *)sub_1B64314(ViewQuestInfoMaster_TypeInfo, v679, v680);
  ViewQuestInfoMaster___ctor(v681, 0LL);
  if ( v681 )
  {
    v519 = sub_1B64204(v681, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x20 )
    goto LABEL_1544;
  v515->m_Items[32] = (DataMasterBase_o *)v681;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[32], (int32_t)v681, v682, v683);
  v686 = (ViewEnemyMaster_o *)sub_1B64314(ViewEnemyMaster_TypeInfo, v684, v685);
  ViewEnemyMaster___ctor(v686, 0LL);
  if ( v686 )
  {
    v519 = sub_1B64204(v686, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x21 )
    goto LABEL_1544;
  v515->m_Items[33] = (DataMasterBase_o *)v686;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[33], (int32_t)v686, v687, v688);
  v691 = (ViewQuestEnemyInfoMaster_o *)sub_1B64314(ViewQuestEnemyInfoMaster_TypeInfo, v689, v690);
  ViewQuestEnemyInfoMaster___ctor(v691, 0LL);
  if ( v691 )
  {
    v519 = sub_1B64204(v691, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x22 )
    goto LABEL_1544;
  v515->m_Items[34] = (DataMasterBase_o *)v691;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[34], (int32_t)v691, v692, v693);
  v696 = (BlankEarthSpotMaster_o *)sub_1B64314(BlankEarthSpotMaster_TypeInfo, v694, v695);
  BlankEarthSpotMaster___ctor(v696, 0LL);
  if ( v696 )
  {
    v519 = sub_1B64204(v696, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x23 )
    goto LABEL_1544;
  v515->m_Items[35] = (DataMasterBase_o *)v696;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[35], (int32_t)v696, v697, v698);
  v701 = (BlankEarthSpotAddMaster_o *)sub_1B64314(BlankEarthSpotAddMaster_TypeInfo, v699, v700);
  BlankEarthSpotAddMaster___ctor(v701, 0LL);
  if ( v701 )
  {
    v519 = sub_1B64204(v701, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x24 )
    goto LABEL_1544;
  v515->m_Items[36] = (DataMasterBase_o *)v701;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[36], (int32_t)v701, v702, v703);
  v706 = (SpotMaster_o *)sub_1B64314(SpotMaster_TypeInfo, v704, v705);
  SpotMaster___ctor(v706, 0LL);
  if ( v706 )
  {
    v519 = sub_1B64204(v706, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x25 )
    goto LABEL_1544;
  v515->m_Items[37] = (DataMasterBase_o *)v706;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[37], (int32_t)v706, v707, v708);
  v711 = (SpotImageMaster_o *)sub_1B64314(SpotImageMaster_TypeInfo, v709, v710);
  SpotImageMaster___ctor(v711, 0LL);
  if ( v711 )
  {
    v519 = sub_1B64204(v711, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x26 )
    goto LABEL_1544;
  v515->m_Items[38] = (DataMasterBase_o *)v711;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[38], (int32_t)v711, v712, v713);
  v716 = (SpotRoadMaster_o *)sub_1B64314(SpotRoadMaster_TypeInfo, v714, v715);
  SpotRoadMaster___ctor(v716, 0LL);
  if ( v716 )
  {
    v519 = sub_1B64204(v716, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x27 )
    goto LABEL_1544;
  v515->m_Items[39] = (DataMasterBase_o *)v716;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[39], (int32_t)v716, v717, v718);
  v721 = (SpotPathMaster_o *)sub_1B64314(SpotPathMaster_TypeInfo, v719, v720);
  SpotPathMaster___ctor(v721, 0LL);
  if ( v721 )
  {
    v519 = sub_1B64204(v721, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x28 )
    goto LABEL_1544;
  v515->m_Items[40] = (DataMasterBase_o *)v721;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[40], (int32_t)v721, v722, v723);
  v726 = (SpotAddMaster_o *)sub_1B64314(SpotAddMaster_TypeInfo, v724, v725);
  SpotAddMaster___ctor(v726, 0LL);
  if ( v726 )
  {
    v519 = sub_1B64204(v726, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x29 )
    goto LABEL_1544;
  v515->m_Items[41] = (DataMasterBase_o *)v726;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[41], (int32_t)v726, v727, v728);
  v731 = (MapGimmickMaster_o *)sub_1B64314(MapGimmickMaster_TypeInfo, v729, v730);
  MapGimmickMaster___ctor(v731, 0LL);
  if ( v731 )
  {
    v519 = sub_1B64204(v731, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2A )
    goto LABEL_1544;
  v515->m_Items[42] = (DataMasterBase_o *)v731;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[42], (int32_t)v731, v732, v733);
  v736 = (GiftMaster_o *)sub_1B64314(GiftMaster_TypeInfo, v734, v735);
  GiftMaster___ctor(v736, 0LL);
  if ( v736 )
  {
    v519 = sub_1B64204(v736, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2B )
    goto LABEL_1544;
  v515->m_Items[43] = (DataMasterBase_o *)v736;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[43], (int32_t)v736, v737, v738);
  v741 = (GiftAddMaster_o *)sub_1B64314(GiftAddMaster_TypeInfo, v739, v740);
  GiftAddMaster___ctor(v741, 0LL);
  if ( v741 )
  {
    v519 = sub_1B64204(v741, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2C )
    goto LABEL_1544;
  v515->m_Items[44] = (DataMasterBase_o *)v741;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[44], (int32_t)v741, v742, v743);
  v746 = (ShopMaster_o *)sub_1B64314(ShopMaster_TypeInfo, v744, v745);
  ShopMaster___ctor(v746, 0LL);
  if ( v746 )
  {
    v519 = sub_1B64204(v746, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2D )
    goto LABEL_1544;
  v515->m_Items[45] = (DataMasterBase_o *)v746;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[45], (int32_t)v746, v747, v748);
  v751 = (StoneShopMaster_o *)sub_1B64314(StoneShopMaster_TypeInfo, v749, v750);
  StoneShopMaster___ctor(v751, 0LL);
  if ( v751 )
  {
    v519 = sub_1B64204(v751, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2E )
    goto LABEL_1544;
  v515->m_Items[46] = (DataMasterBase_o *)v751;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[46], (int32_t)v751, v752, v753);
  v756 = (BankShopMaster_o *)sub_1B64314(BankShopMaster_TypeInfo, v754, v755);
  BankShopMaster___ctor(v756, 0LL);
  if ( v756 )
  {
    v519 = sub_1B64204(v756, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x2F )
    goto LABEL_1544;
  v515->m_Items[47] = (DataMasterBase_o *)v756;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[47], (int32_t)v756, v757, v758);
  v761 = (ShopScriptMaster_o *)sub_1B64314(ShopScriptMaster_TypeInfo, v759, v760);
  ShopScriptMaster___ctor(v761, 0LL);
  if ( v761 )
  {
    v519 = sub_1B64204(v761, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x30 )
    goto LABEL_1544;
  v515->m_Items[48] = (DataMasterBase_o *)v761;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[48], (int32_t)v761, v762, v763);
  v766 = (StageMaster_o *)sub_1B64314(StageMaster_TypeInfo, v764, v765);
  StageMaster___ctor(v766, 0LL);
  if ( v766 )
  {
    v519 = sub_1B64204(v766, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x31 )
    goto LABEL_1544;
  v515->m_Items[49] = (DataMasterBase_o *)v766;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[49], (int32_t)v766, v767, v768);
  v771 = (ServantGroupMaster_o *)sub_1B64314(ServantGroupMaster_TypeInfo, v769, v770);
  ServantGroupMaster___ctor(v771, 0LL);
  if ( v771 )
  {
    v519 = sub_1B64204(v771, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x32 )
    goto LABEL_1544;
  v515->m_Items[50] = (DataMasterBase_o *)v771;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[50], (int32_t)v771, v772, v773);
  v776 = (ServantLimitMaster_o *)sub_1B64314(ServantLimitMaster_TypeInfo, v774, v775);
  ServantLimitMaster___ctor(v776, 0LL);
  if ( v776 )
  {
    v519 = sub_1B64204(v776, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x33 )
    goto LABEL_1544;
  v515->m_Items[51] = (DataMasterBase_o *)v776;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[51], (int32_t)v776, v777, v778);
  v781 = (ServantLimitAddMaster_o *)sub_1B64314(ServantLimitAddMaster_TypeInfo, v779, v780);
  ServantLimitAddMaster___ctor(v781, 0LL);
  if ( v781 )
  {
    v519 = sub_1B64204(v781, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x34 )
    goto LABEL_1544;
  v515->m_Items[52] = (DataMasterBase_o *)v781;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[52], (int32_t)v781, v782, v783);
  v786 = (ServantSkillMaster_o *)sub_1B64314(ServantSkillMaster_TypeInfo, v784, v785);
  ServantSkillMaster___ctor(v786, 0LL);
  if ( v786 )
  {
    v519 = sub_1B64204(v786, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x35 )
    goto LABEL_1544;
  v515->m_Items[53] = (DataMasterBase_o *)v786;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[53], (int32_t)v786, v787, v788);
  v791 = (ServantPassiveSkillMaster_o *)sub_1B64314(ServantPassiveSkillMaster_TypeInfo, v789, v790);
  ServantPassiveSkillMaster___ctor(v791, 0LL);
  if ( v791 )
  {
    v519 = sub_1B64204(v791, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x36 )
    goto LABEL_1544;
  v515->m_Items[54] = (DataMasterBase_o *)v791;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[54], (int32_t)v791, v792, v793);
  v796 = (BgmMaster_o *)sub_1B64314(BgmMaster_TypeInfo, v794, v795);
  BgmMaster___ctor(v796, 0LL);
  if ( v796 )
  {
    v519 = sub_1B64204(v796, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x37 )
    goto LABEL_1544;
  v515->m_Items[55] = (DataMasterBase_o *)v796;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[55], (int32_t)v796, v797, v798);
  v801 = (ServantScriptMaster_o *)sub_1B64314(ServantScriptMaster_TypeInfo, v799, v800);
  ServantScriptMaster___ctor(v801, 0LL);
  if ( v801 )
  {
    v519 = sub_1B64204(v801, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x38 )
    goto LABEL_1544;
  v515->m_Items[56] = (DataMasterBase_o *)v801;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[56], (int32_t)v801, v802, v803);
  v806 = (NewsMaster_o *)sub_1B64314(NewsMaster_TypeInfo, v804, v805);
  NewsMaster___ctor(v806, 0LL);
  if ( v806 )
  {
    v519 = sub_1B64204(v806, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x39 )
    goto LABEL_1544;
  v515->m_Items[57] = (DataMasterBase_o *)v806;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[57], (int32_t)v806, v807, v808);
  v811 = (TelopMaster_o *)sub_1B64314(TelopMaster_TypeInfo, v809, v810);
  TelopMaster___ctor(v811, 0LL);
  if ( v811 )
  {
    v519 = sub_1B64204(v811, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3A )
    goto LABEL_1544;
  v515->m_Items[58] = (DataMasterBase_o *)v811;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[58], (int32_t)v811, v812, v813);
  v816 = (UserExpMaster_o *)sub_1B64314(UserExpMaster_TypeInfo, v814, v815);
  UserExpMaster___ctor(v816, 0LL);
  if ( v816 )
  {
    v519 = sub_1B64204(v816, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3B )
    goto LABEL_1544;
  v515->m_Items[59] = (DataMasterBase_o *)v816;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[59], (int32_t)v816, v817, v818);
  v821 = (TreasureDvcMaster_o *)sub_1B64314(TreasureDvcMaster_TypeInfo, v819, v820);
  TreasureDvcMaster___ctor(v821, 0LL);
  if ( v821 )
  {
    v519 = sub_1B64204(v821, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3C )
    goto LABEL_1544;
  v515->m_Items[60] = (DataMasterBase_o *)v821;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[60], (int32_t)v821, v822, v823);
  v826 = (ServantTreasureDvcMaster_o *)sub_1B64314(ServantTreasureDvcMaster_TypeInfo, v824, v825);
  ServantTreasureDvcMaster___ctor(v826, 0LL);
  if ( v826 )
  {
    v519 = sub_1B64204(v826, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3D )
    goto LABEL_1544;
  v515->m_Items[61] = (DataMasterBase_o *)v826;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[61], (int32_t)v826, v827, v828);
  v831 = (SkillMaster_o *)sub_1B64314(SkillMaster_TypeInfo, v829, v830);
  SkillMaster___ctor(v831, 0LL);
  if ( v831 )
  {
    v519 = sub_1B64204(v831, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3E )
    goto LABEL_1544;
  v515->m_Items[62] = (DataMasterBase_o *)v831;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[62], (int32_t)v831, v832, v833);
  v836 = (SkillLvMaster_o *)sub_1B64314(SkillLvMaster_TypeInfo, v834, v835);
  SkillLvMaster___ctor(v836, 0LL);
  if ( v836 )
  {
    v519 = sub_1B64204(v836, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x3F )
    goto LABEL_1544;
  v515->m_Items[63] = (DataMasterBase_o *)v836;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[63], (int32_t)v836, v837, v838);
  v841 = (SkillDetailMaster_o *)sub_1B64314(SkillDetailMaster_TypeInfo, v839, v840);
  SkillDetailMaster___ctor(v841, 0LL);
  if ( v841 )
  {
    v519 = sub_1B64204(v841, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x40 )
    goto LABEL_1544;
  v515->m_Items[64] = (DataMasterBase_o *)v841;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[64], (int32_t)v841, v842, v843);
  v846 = (CommandSpellMaster_o *)sub_1B64314(CommandSpellMaster_TypeInfo, v844, v845);
  CommandSpellMaster___ctor(v846, 0LL);
  if ( v846 )
  {
    v519 = sub_1B64204(v846, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x41 )
    goto LABEL_1544;
  v515->m_Items[65] = (DataMasterBase_o *)v846;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[65], (int32_t)v846, v847, v848);
  v851 = (EquipMaster_o *)sub_1B64314(EquipMaster_TypeInfo, v849, v850);
  EquipMaster___ctor(v851, 0LL);
  if ( v851 )
  {
    v519 = sub_1B64204(v851, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x42 )
    goto LABEL_1544;
  v515->m_Items[66] = (DataMasterBase_o *)v851;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[66], (int32_t)v851, v852, v853);
  v856 = (EquipExpMaster_o *)sub_1B64314(EquipExpMaster_TypeInfo, v854, v855);
  EquipExpMaster___ctor(v856, 0LL);
  if ( v856 )
  {
    v519 = sub_1B64204(v856, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x43 )
    goto LABEL_1544;
  v515->m_Items[67] = (DataMasterBase_o *)v856;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[67], (int32_t)v856, v857, v858);
  v861 = (EquipSkillMaster_o *)sub_1B64314(EquipSkillMaster_TypeInfo, v859, v860);
  EquipSkillMaster___ctor(v861, 0LL);
  if ( v861 )
  {
    v519 = sub_1B64204(v861, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x44 )
    goto LABEL_1544;
  v515->m_Items[68] = (DataMasterBase_o *)v861;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[68], (int32_t)v861, v862, v863);
  v866 = (SubEquipMaster_o *)sub_1B64314(SubEquipMaster_TypeInfo, v864, v865);
  SubEquipMaster___ctor(v866, 0LL);
  if ( v866 )
  {
    v519 = sub_1B64204(v866, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x45 )
    goto LABEL_1544;
  v515->m_Items[69] = (DataMasterBase_o *)v866;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[69], (int32_t)v866, v867, v868);
  v871 = (AccessaryMaster_o *)sub_1B64314(AccessaryMaster_TypeInfo, v869, v870);
  AccessaryMaster___ctor(v871, 0LL);
  if ( v871 )
  {
    v519 = sub_1B64204(v871, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x46 )
    goto LABEL_1544;
  v515->m_Items[70] = (DataMasterBase_o *)v871;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[70], (int32_t)v871, v872, v873);
  v876 = (UserPresentBoxMaster_o *)sub_1B64314(UserPresentBoxMaster_TypeInfo, v874, v875);
  UserPresentBoxMaster___ctor(v876, 0LL);
  if ( v876 )
  {
    v519 = sub_1B64204(v876, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x47 )
    goto LABEL_1544;
  v515->m_Items[71] = (DataMasterBase_o *)v876;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[71], (int32_t)v876, v877, v878);
  v881 = (UserDeckMaster_o *)sub_1B64314(UserDeckMaster_TypeInfo, v879, v880);
  UserDeckMaster___ctor(v881, 0LL);
  if ( v881 )
  {
    v519 = sub_1B64204(v881, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x48 )
    goto LABEL_1544;
  v515->m_Items[72] = (DataMasterBase_o *)v881;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[72], (int32_t)v881, v882, v883);
  v886 = (UserSubEquipMaster_o *)sub_1B64314(UserSubEquipMaster_TypeInfo, v884, v885);
  UserSubEquipMaster___ctor(v886, 0LL);
  if ( v886 )
  {
    v519 = sub_1B64204(v886, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x49 )
    goto LABEL_1544;
  v515->m_Items[73] = (DataMasterBase_o *)v886;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[73], (int32_t)v886, v887, v888);
  v891 = (GachaMaster_o *)sub_1B64314(GachaMaster_TypeInfo, v889, v890);
  GachaMaster___ctor(v891, 0LL);
  if ( v891 )
  {
    v519 = sub_1B64204(v891, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4A )
    goto LABEL_1544;
  v515->m_Items[74] = (DataMasterBase_o *)v891;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[74], (int32_t)v891, v892, v893);
  v896 = (GachaImageMaster_o *)sub_1B64314(GachaImageMaster_TypeInfo, v894, v895);
  GachaImageMaster___ctor(v896, 0LL);
  if ( v896 )
  {
    v519 = sub_1B64204(v896, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4B )
    goto LABEL_1544;
  v515->m_Items[75] = (DataMasterBase_o *)v896;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[75], (int32_t)v896, v897, v898);
  v901 = (UserGachaMaster_o *)sub_1B64314(UserGachaMaster_TypeInfo, v899, v900);
  UserGachaMaster___ctor(v901, 0LL);
  if ( v901 )
  {
    v519 = sub_1B64204(v901, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4C )
    goto LABEL_1544;
  v515->m_Items[76] = (DataMasterBase_o *)v901;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[76], (int32_t)v901, v902, v903);
  v906 = (UserEquipMaster_o *)sub_1B64314(UserEquipMaster_TypeInfo, v904, v905);
  UserEquipMaster___ctor(v906, 0LL);
  if ( v906 )
  {
    v519 = sub_1B64204(v906, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4D )
    goto LABEL_1544;
  v515->m_Items[77] = (DataMasterBase_o *)v906;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[77], (int32_t)v906, v907, v908);
  v911 = (UserServantCollectionMaster_o *)sub_1B64314(UserServantCollectionMaster_TypeInfo, v909, v910);
  UserServantCollectionMaster___ctor(v911, 0LL);
  if ( v911 )
  {
    v519 = sub_1B64204(v911, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4E )
    goto LABEL_1544;
  v515->m_Items[78] = (DataMasterBase_o *)v911;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[78], (int32_t)v911, v912, v913);
  v916 = (FriendshipMaster_o *)sub_1B64314(FriendshipMaster_TypeInfo, v914, v915);
  FriendshipMaster___ctor(v916, 0LL);
  if ( v916 )
  {
    v519 = sub_1B64204(v916, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x4F )
    goto LABEL_1544;
  v515->m_Items[79] = (DataMasterBase_o *)v916;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[79], (int32_t)v916, v917, v918);
  v921 = (GachaTicketMaster_o *)sub_1B64314(GachaTicketMaster_TypeInfo, v919, v920);
  GachaTicketMaster___ctor(v921, 0LL);
  if ( v921 )
  {
    v519 = sub_1B64204(v921, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x50 )
    goto LABEL_1544;
  v515->m_Items[80] = (DataMasterBase_o *)v921;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[80], (int32_t)v921, v922, v923);
  v926 = (UserFormationMaster_o *)sub_1B64314(UserFormationMaster_TypeInfo, v924, v925);
  UserFormationMaster___ctor(v926, 0LL);
  if ( v926 )
  {
    v519 = sub_1B64204(v926, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x51 )
    goto LABEL_1544;
  v515->m_Items[81] = (DataMasterBase_o *)v926;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[81], (int32_t)v926, v927, v928);
  v931 = (FunctionMaster_o *)sub_1B64314(FunctionMaster_TypeInfo, v929, v930);
  FunctionMaster___ctor(v931, 0LL);
  if ( v931 )
  {
    v519 = sub_1B64204(v931, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x52 )
    goto LABEL_1544;
  v515->m_Items[82] = (DataMasterBase_o *)v931;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[82], (int32_t)v931, v932, v933);
  v936 = (BuffMaster_o *)sub_1B64314(BuffMaster_TypeInfo, v934, v935);
  BuffMaster___ctor(v936, 0LL);
  if ( v936 )
  {
    v519 = sub_1B64204(v936, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x53 )
    goto LABEL_1544;
  v515->m_Items[83] = (DataMasterBase_o *)v936;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[83], (int32_t)v936, v937, v938);
  v941 = (GachaReleaseMaster_o *)sub_1B64314(GachaReleaseMaster_TypeInfo, v939, v940);
  GachaReleaseMaster___ctor(v941, 0LL);
  if ( v941 )
  {
    v519 = sub_1B64204(v941, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x54 )
    goto LABEL_1544;
  v515->m_Items[84] = (DataMasterBase_o *)v941;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[84], (int32_t)v941, v942, v943);
  v946 = (CombineQpMaster_o *)sub_1B64314(CombineQpMaster_TypeInfo, v944, v945);
  CombineQpMaster___ctor(v946, 0LL);
  if ( v946 )
  {
    v519 = sub_1B64204(v946, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x55 )
    goto LABEL_1544;
  v515->m_Items[85] = (DataMasterBase_o *)v946;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[85], (int32_t)v946, v947, v948);
  v951 = (CombineMaterialMaster_o *)sub_1B64314(CombineMaterialMaster_TypeInfo, v949, v950);
  CombineMaterialMaster___ctor(v951, 0LL);
  if ( v951 )
  {
    v519 = sub_1B64204(v951, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x56 )
    goto LABEL_1544;
  v515->m_Items[86] = (DataMasterBase_o *)v951;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[86], (int32_t)v951, v952, v953);
  v956 = (EventCombineMaster_o *)sub_1B64314(EventCombineMaster_TypeInfo, v954, v955);
  EventCombineMaster___ctor(v956, 0LL);
  if ( v956 )
  {
    v519 = sub_1B64204(v956, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x57 )
    goto LABEL_1544;
  v515->m_Items[87] = (DataMasterBase_o *)v956;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[87], (int32_t)v956, v957, v958);
  v961 = (ServantExpMaster_o *)sub_1B64314(ServantExpMaster_TypeInfo, v959, v960);
  ServantExpMaster___ctor(v961, 0LL);
  if ( v961 )
  {
    v519 = sub_1B64204(v961, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x58 )
    goto LABEL_1544;
  v515->m_Items[88] = (DataMasterBase_o *)v961;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[88], (int32_t)v961, v962, v963);
  v966 = (CombineSkillMaster_o *)sub_1B64314(CombineSkillMaster_TypeInfo, v964, v965);
  CombineSkillMaster___ctor(v966, 0LL);
  if ( v966 )
  {
    v519 = sub_1B64204(v966, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x59 )
    goto LABEL_1544;
  v515->m_Items[89] = (DataMasterBase_o *)v966;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[89], (int32_t)v966, v967, v968);
  v971 = (CombineTdMaster_o *)sub_1B64314(CombineTdMaster_TypeInfo, v969, v970);
  CombineTdMaster___ctor(v971, 0LL);
  if ( v971 )
  {
    v519 = sub_1B64204(v971, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5A )
    goto LABEL_1544;
  v515->m_Items[90] = (DataMasterBase_o *)v971;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[90], (int32_t)v971, v972, v973);
  v976 = (EventQuestMaster_o *)sub_1B64314(EventQuestMaster_TypeInfo, v974, v975);
  EventQuestMaster___ctor(v976, 0LL);
  if ( v976 )
  {
    v519 = sub_1B64204(v976, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5B )
    goto LABEL_1544;
  v515->m_Items[91] = (DataMasterBase_o *)v976;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[91], (int32_t)v976, v977, v978);
  v981 = (EventCampaignMaster_o *)sub_1B64314(EventCampaignMaster_TypeInfo, v979, v980);
  EventCampaignMaster___ctor(v981, 0LL);
  if ( v981 )
  {
    v519 = sub_1B64204(v981, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5C )
    goto LABEL_1544;
  v515->m_Items[92] = (DataMasterBase_o *)v981;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[92], (int32_t)v981, v982, v983);
  v986 = (IllustratorMaster_o *)sub_1B64314(IllustratorMaster_TypeInfo, v984, v985);
  IllustratorMaster___ctor(v986, 0LL);
  if ( v986 )
  {
    v519 = sub_1B64204(v986, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5D )
    goto LABEL_1544;
  v515->m_Items[93] = (DataMasterBase_o *)v986;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[93], (int32_t)v986, v987, v988);
  v991 = (CvMaster_o *)sub_1B64314(CvMaster_TypeInfo, v989, v990);
  CvMaster___ctor(v991, 0LL);
  if ( v991 )
  {
    v519 = sub_1B64204(v991, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5E )
    goto LABEL_1544;
  v515->m_Items[94] = (DataMasterBase_o *)v991;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[94], (int32_t)v991, v992, v993);
  v996 = (TreasureDvcLvMaster_o *)sub_1B64314(TreasureDvcLvMaster_TypeInfo, v994, v995);
  TreasureDvcLvMaster___ctor(v996, 0LL);
  if ( v996 )
  {
    v519 = sub_1B64204(v996, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x5F )
    goto LABEL_1544;
  v515->m_Items[95] = (DataMasterBase_o *)v996;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[95], (int32_t)v996, v997, v998);
  v1001 = (TreasureDvcDetailMaster_o *)sub_1B64314(TreasureDvcDetailMaster_TypeInfo, v999, v1000);
  TreasureDvcDetailMaster___ctor(v1001, 0LL);
  if ( v1001 )
  {
    v519 = sub_1B64204(v1001, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x60 )
    goto LABEL_1544;
  v515->m_Items[96] = (DataMasterBase_o *)v1001;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[96], (int32_t)v1001, v1002, v1003);
  v1006 = (UserFollowerMaster_o *)sub_1B64314(UserFollowerMaster_TypeInfo, v1004, v1005);
  UserFollowerMaster___ctor(v1006, 0LL);
  if ( v1006 )
  {
    v519 = sub_1B64204(v1006, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x61 )
    goto LABEL_1544;
  v515->m_Items[97] = (DataMasterBase_o *)v1006;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[97], (int32_t)v1006, v1007, v1008);
  v1011 = (NpcFollowerMaster_o *)sub_1B64314(NpcFollowerMaster_TypeInfo, v1009, v1010);
  NpcFollowerMaster___ctor(v1011, 0LL);
  if ( v1011 )
  {
    v519 = sub_1B64204(v1011, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x62 )
    goto LABEL_1544;
  v515->m_Items[98] = (DataMasterBase_o *)v1011;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[98], (int32_t)v1011, v1012, v1013);
  v1016 = (NpcServantFollowerMaster_o *)sub_1B64314(NpcServantFollowerMaster_TypeInfo, v1014, v1015);
  NpcServantFollowerMaster___ctor(v1016, 0LL);
  if ( v1016 )
  {
    v519 = sub_1B64204(v1016, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x63 )
    goto LABEL_1544;
  v515->m_Items[99] = (DataMasterBase_o *)v1016;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[99], (int32_t)v1016, v1017, v1018);
  v1021 = (UserEventMaster_o *)sub_1B64314(UserEventMaster_TypeInfo, v1019, v1020);
  UserEventMaster___ctor(v1021, 0LL);
  if ( v1021 )
  {
    v519 = sub_1B64204(v1021, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x64 )
    goto LABEL_1544;
  v515->m_Items[100] = (DataMasterBase_o *)v1021;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[100], (int32_t)v1021, v1022, v1023);
  v1026 = (UserShopMaster_o *)sub_1B64314(UserShopMaster_TypeInfo, v1024, v1025);
  UserShopMaster___ctor(v1026, 0LL);
  if ( v1026 )
  {
    v519 = sub_1B64204(v1026, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x65 )
    goto LABEL_1544;
  v515->m_Items[101] = (DataMasterBase_o *)v1026;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[101], (int32_t)v1026, v1027, v1028);
  v1031 = (UserContinueMaster_o *)sub_1B64314(UserContinueMaster_TypeInfo, v1029, v1030);
  UserContinueMaster___ctor(v1031, 0LL);
  if ( v1031 )
  {
    v519 = sub_1B64204(v1031, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x66 )
    goto LABEL_1544;
  v515->m_Items[102] = (DataMasterBase_o *)v1031;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[102], (int32_t)v1031, v1032, v1033);
  v1036 = (ConstantMaster_o *)sub_1B64314(ConstantMaster_TypeInfo, v1034, v1035);
  ConstantMaster___ctor(v1036, 0LL);
  if ( v1036 )
  {
    v519 = sub_1B64204(v1036, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x67 )
    goto LABEL_1544;
  v515->m_Items[103] = (DataMasterBase_o *)v1036;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[103], (int32_t)v1036, v1037, v1038);
  v1041 = (ConstantLongMaster_o *)sub_1B64314(ConstantLongMaster_TypeInfo, v1039, v1040);
  ConstantLongMaster___ctor(v1041, 0LL);
  if ( v1041 )
  {
    v519 = sub_1B64204(v1041, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x68 )
    goto LABEL_1544;
  v515->m_Items[104] = (DataMasterBase_o *)v1041;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[104], (int32_t)v1041, v1042, v1043);
  v1046 = (ConstantStrMaster_o *)sub_1B64314(ConstantStrMaster_TypeInfo, v1044, v1045);
  ConstantStrMaster___ctor(v1046, 0LL);
  if ( v1046 )
  {
    v519 = sub_1B64204(v1046, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x69 )
    goto LABEL_1544;
  v515->m_Items[105] = (DataMasterBase_o *)v1046;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[105], (int32_t)v1046, v1047, v1048);
  v1051 = (AiMaster_o *)sub_1B64314(AiMaster_TypeInfo, v1049, v1050);
  AiMaster___ctor(v1051, 0LL);
  if ( v1051 )
  {
    v519 = sub_1B64204(v1051, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6A )
    goto LABEL_1544;
  v515->m_Items[106] = (DataMasterBase_o *)v1051;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[106], (int32_t)v1051, v1052, v1053);
  v1056 = (AiActMaster_o *)sub_1B64314(AiActMaster_TypeInfo, v1054, v1055);
  AiActMaster___ctor(v1056, 0LL);
  if ( v1056 )
  {
    v519 = sub_1B64204(v1056, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6B )
    goto LABEL_1544;
  v515->m_Items[107] = (DataMasterBase_o *)v1056;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[107], (int32_t)v1056, v1057, v1058);
  v1061 = (AttriRelationMaster_o *)sub_1B64314(AttriRelationMaster_TypeInfo, v1059, v1060);
  AttriRelationMaster___ctor(v1061, 0LL);
  if ( v1061 )
  {
    v519 = sub_1B64204(v1061, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6C )
    goto LABEL_1544;
  v515->m_Items[108] = (DataMasterBase_o *)v1061;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[108], (int32_t)v1061, v1062, v1063);
  v1066 = (ClassRelationMaster_o *)sub_1B64314(ClassRelationMaster_TypeInfo, v1064, v1065);
  ClassRelationMaster___ctor(v1066, 0LL);
  if ( v1066 )
  {
    v519 = sub_1B64204(v1066, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6D )
    goto LABEL_1544;
  v515->m_Items[109] = (DataMasterBase_o *)v1066;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[109], (int32_t)v1066, v1067, v1068);
  v1071 = (EffectMaster_o *)sub_1B64314(EffectMaster_TypeInfo, v1069, v1070);
  EffectMaster___ctor(v1071, 0LL);
  if ( v1071 )
  {
    v519 = sub_1B64204(v1071, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6E )
    goto LABEL_1544;
  v515->m_Items[110] = (DataMasterBase_o *)v1071;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[110], (int32_t)v1071, v1072, v1073);
  v1076 = (EquipImageMaster_o *)sub_1B64314(EquipImageMaster_TypeInfo, v1074, v1075);
  EquipImageMaster___ctor(v1076, 0LL);
  if ( v1076 )
  {
    v519 = sub_1B64204(v1076, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x6F )
    goto LABEL_1544;
  v515->m_Items[111] = (DataMasterBase_o *)v1076;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[111], (int32_t)v1076, v1077, v1078);
  v1081 = (ServantVoiceMaster_o *)sub_1B64314(ServantVoiceMaster_TypeInfo, v1079, v1080);
  ServantVoiceMaster___ctor(v1081, 0LL);
  if ( v1081 )
  {
    v519 = sub_1B64204(v1081, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x70 )
    goto LABEL_1544;
  v515->m_Items[112] = (DataMasterBase_o *)v1081;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[112], (int32_t)v1081, v1082, v1083);
  v1086 = (CombineLimitMaster_o *)sub_1B64314(CombineLimitMaster_TypeInfo, v1084, v1085);
  CombineLimitMaster___ctor(v1086, 0LL);
  if ( v1086 )
  {
    v519 = sub_1B64204(v1086, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x71 )
    goto LABEL_1544;
  v515->m_Items[113] = (DataMasterBase_o *)v1086;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[113], (int32_t)v1086, v1087, v1088);
  v1091 = (CardMaster_o *)sub_1B64314(CardMaster_TypeInfo, v1089, v1090);
  CardMaster___ctor(v1091, 0LL);
  if ( v1091 )
  {
    v519 = sub_1B64204(v1091, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x72 )
    goto LABEL_1544;
  v515->m_Items[114] = (DataMasterBase_o *)v1091;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[114], (int32_t)v1091, v1092, v1093);
  v1096 = (CombineQpSvtEquipMaster_o *)sub_1B64314(CombineQpSvtEquipMaster_TypeInfo, v1094, v1095);
  CombineQpSvtEquipMaster___ctor(v1096, 0LL);
  if ( v1096 )
  {
    v519 = sub_1B64204(v1096, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x73 )
    goto LABEL_1544;
  v515->m_Items[115] = (DataMasterBase_o *)v1096;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[115], (int32_t)v1096, v1097, v1098);
  v1101 = (ServantRarityMaster_o *)sub_1B64314(ServantRarityMaster_TypeInfo, v1099, v1100);
  ServantRarityMaster___ctor(v1101, 0LL);
  if ( v1101 )
  {
    v519 = sub_1B64204(v1101, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x74 )
    goto LABEL_1544;
  v515->m_Items[116] = (DataMasterBase_o *)v1101;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[116], (int32_t)v1101, v1102, v1103);
  v1106 = (SetItemMaster_o *)sub_1B64314(SetItemMaster_TypeInfo, v1104, v1105);
  SetItemMaster___ctor(v1106, 0LL);
  if ( v1106 )
  {
    v519 = sub_1B64204(v1106, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x75 )
    goto LABEL_1544;
  v515->m_Items[117] = (DataMasterBase_o *)v1106;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[117], (int32_t)v1106, v1107, v1108);
  v1111 = (RecoverMaster_o *)sub_1B64314(RecoverMaster_TypeInfo, v1109, v1110);
  RecoverMaster___ctor(v1111, 0LL);
  if ( v1111 )
  {
    v519 = sub_1B64204(v1111, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x76 )
    goto LABEL_1544;
  v515->m_Items[118] = (DataMasterBase_o *)v1111;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[118], (int32_t)v1111, v1112, v1113);
  v1116 = (BannerMaster_o *)sub_1B64314(BannerMaster_TypeInfo, v1114, v1115);
  BannerMaster___ctor(v1116, 0LL);
  if ( v1116 )
  {
    v519 = sub_1B64204(v1116, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x77 )
    goto LABEL_1544;
  v515->m_Items[119] = (DataMasterBase_o *)v1116;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[119], (int32_t)v1116, v1117, v1118);
  v1121 = (ShopReleaseMaster_o *)sub_1B64314(ShopReleaseMaster_TypeInfo, v1119, v1120);
  ShopReleaseMaster___ctor(v1121, 0LL);
  if ( v1121 )
  {
    v519 = sub_1B64204(v1121, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x78 )
    goto LABEL_1544;
  v515->m_Items[120] = (DataMasterBase_o *)v1121;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[120], (int32_t)v1121, v1122, v1123);
  v1126 = (EventRewardMaster_o *)sub_1B64314(EventRewardMaster_TypeInfo, v1124, v1125);
  EventRewardMaster___ctor(v1126, 0LL);
  if ( v1126 )
  {
    v519 = sub_1B64204(v1126, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x79 )
    goto LABEL_1544;
  v515->m_Items[121] = (DataMasterBase_o *)v1126;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[121], (int32_t)v1126, v1127, v1128);
  v1131 = (EventDetailMaster_o *)sub_1B64314(EventDetailMaster_TypeInfo, v1129, v1130);
  EventDetailMaster___ctor(v1131, 0LL);
  if ( v1131 )
  {
    v519 = sub_1B64204(v1131, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7A )
    goto LABEL_1544;
  v515->m_Items[122] = (DataMasterBase_o *)v1131;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[122], (int32_t)v1131, v1132, v1133);
  v1136 = (EventServantMaster_o *)sub_1B64314(EventServantMaster_TypeInfo, v1134, v1135);
  EventServantMaster___ctor(v1136, 0LL);
  if ( v1136 )
  {
    v519 = sub_1B64204(v1136, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7B )
    goto LABEL_1544;
  v515->m_Items[123] = (DataMasterBase_o *)v1136;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[123], (int32_t)v1136, v1137, v1138);
  v1141 = (BoxGachaMaster_o *)sub_1B64314(BoxGachaMaster_TypeInfo, v1139, v1140);
  BoxGachaMaster___ctor(v1141, 0LL);
  if ( v1141 )
  {
    v519 = sub_1B64204(v1141, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7C )
    goto LABEL_1544;
  v515->m_Items[124] = (DataMasterBase_o *)v1141;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[124], (int32_t)v1141, v1142, v1143);
  v1146 = (BoxGachaBaseMaster_o *)sub_1B64314(BoxGachaBaseMaster_TypeInfo, v1144, v1145);
  BoxGachaBaseMaster___ctor(v1146, 0LL);
  if ( v1146 )
  {
    v519 = sub_1B64204(v1146, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7D )
    goto LABEL_1544;
  v515->m_Items[125] = (DataMasterBase_o *)v1146;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[125], (int32_t)v1146, v1147, v1148);
  v1151 = (BoxGachaTalkMaster_o *)sub_1B64314(BoxGachaTalkMaster_TypeInfo, v1149, v1150);
  BoxGachaTalkMaster___ctor(v1151, 0LL);
  if ( v1151 )
  {
    v519 = sub_1B64204(v1151, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7E )
    goto LABEL_1544;
  v515->m_Items[126] = (DataMasterBase_o *)v1151;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[126], (int32_t)v1151, v1152, v1153);
  v1156 = (UserBoxGachaMaster_o *)sub_1B64314(UserBoxGachaMaster_TypeInfo, v1154, v1155);
  UserBoxGachaMaster___ctor(v1156, 0LL);
  if ( v1156 )
  {
    v519 = sub_1B64204(v1156, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x7F )
    goto LABEL_1544;
  v515->m_Items[127] = (DataMasterBase_o *)v1156;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[127], (int32_t)v1156, v1157, v1158);
  v1161 = (BoxGachaHistoryMaster_o *)sub_1B64314(BoxGachaHistoryMaster_TypeInfo, v1159, v1160);
  BoxGachaHistoryMaster___ctor(v1161, 0LL);
  if ( v1161 )
  {
    v519 = sub_1B64204(v1161, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x80 )
    goto LABEL_1544;
  v515->m_Items[128] = (DataMasterBase_o *)v1161;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[128], (int32_t)v1161, v1162, v1163);
  v1166 = (BattleBgMaster_o *)sub_1B64314(BattleBgMaster_TypeInfo, v1164, v1165);
  BattleBgMaster___ctor(v1166, 0LL);
  if ( v1166 )
  {
    v519 = sub_1B64204(v1166, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x81 )
    goto LABEL_1544;
  v515->m_Items[129] = (DataMasterBase_o *)v1166;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[129], (int32_t)v1166, v1167, v1168);
  v1171 = (TipsBattleMaster_o *)sub_1B64314(TipsBattleMaster_TypeInfo, v1169, v1170);
  TipsBattleMaster___ctor(v1171, 0LL);
  if ( v1171 )
  {
    v519 = sub_1B64204(v1171, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x82 )
    goto LABEL_1544;
  v515->m_Items[130] = (DataMasterBase_o *)v1171;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[130], (int32_t)v1171, v1172, v1173);
  v1176 = (UserLoginMaster_o *)sub_1B64314(UserLoginMaster_TypeInfo, v1174, v1175);
  UserLoginMaster___ctor(v1176, 0LL);
  if ( v1176 )
  {
    v519 = sub_1B64204(v1176, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x83 )
    goto LABEL_1544;
  v515->m_Items[131] = (DataMasterBase_o *)v1176;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[131], (int32_t)v1176, v1177, v1178);
  v1181 = (VoiceMaster_o *)sub_1B64314(VoiceMaster_TypeInfo, v1179, v1180);
  VoiceMaster___ctor(v1181, 0LL);
  if ( v1181 )
  {
    v519 = sub_1B64204(v1181, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x84 )
    goto LABEL_1544;
  v515->m_Items[132] = (DataMasterBase_o *)v1181;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[132], (int32_t)v1181, v1182, v1183);
  v1186 = (EventRewardExtraMaster_o *)sub_1B64314(EventRewardExtraMaster_TypeInfo, v1184, v1185);
  EventRewardExtraMaster___ctor(v1186, 0LL);
  if ( v1186 )
  {
    v519 = sub_1B64204(v1186, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x85 )
    goto LABEL_1544;
  v515->m_Items[133] = (DataMasterBase_o *)v1186;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[133], (int32_t)v1186, v1187, v1188);
  v1191 = (EventMissionMaster_o *)sub_1B64314(EventMissionMaster_TypeInfo, v1189, v1190);
  EventMissionMaster___ctor(v1191, 0LL);
  if ( v1191 )
  {
    v519 = sub_1B64204(v1191, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x86 )
    goto LABEL_1544;
  v515->m_Items[134] = (DataMasterBase_o *)v1191;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[134], (int32_t)v1191, v1192, v1193);
  v1196 = (EventMissionActionMaster_o *)sub_1B64314(EventMissionActionMaster_TypeInfo, v1194, v1195);
  EventMissionActionMaster___ctor(v1196, 0LL);
  if ( v1196 )
  {
    v519 = sub_1B64204(v1196, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x87 )
    goto LABEL_1544;
  v515->m_Items[135] = (DataMasterBase_o *)v1196;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[135], (int32_t)v1196, v1197, v1198);
  v1201 = (EventMissionActionAddMaster_o *)sub_1B64314(EventMissionActionAddMaster_TypeInfo, v1199, v1200);
  EventMissionActionAddMaster___ctor(v1201, 0LL);
  if ( v1201 )
  {
    v519 = sub_1B64204(v1201, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x88 )
    goto LABEL_1544;
  v515->m_Items[136] = (DataMasterBase_o *)v1201;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[136], (int32_t)v1201, v1202, v1203);
  v1206 = (EventMissionConditionMaster_o *)sub_1B64314(EventMissionConditionMaster_TypeInfo, v1204, v1205);
  EventMissionConditionMaster___ctor(v1206, 0LL);
  if ( v1206 )
  {
    v519 = sub_1B64204(v1206, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x89 )
    goto LABEL_1544;
  v515->m_Items[137] = (DataMasterBase_o *)v1206;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[137], (int32_t)v1206, v1207, v1208);
  v1211 = (EventMissionCondDetailMaster_o *)sub_1B64314(EventMissionCondDetailMaster_TypeInfo, v1209, v1210);
  EventMissionCondDetailMaster___ctor(v1211, 0LL);
  if ( v1211 )
  {
    v519 = sub_1B64204(v1211, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8A )
    goto LABEL_1544;
  v515->m_Items[138] = (DataMasterBase_o *)v1211;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[138], (int32_t)v1211, v1212, v1213);
  v1216 = (EventMissionAddMaster_o *)sub_1B64314(EventMissionAddMaster_TypeInfo, v1214, v1215);
  EventMissionAddMaster___ctor(v1216, 0LL);
  if ( v1216 )
  {
    v519 = sub_1B64204(v1216, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8B )
    goto LABEL_1544;
  v515->m_Items[139] = (DataMasterBase_o *)v1216;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[139], (int32_t)v1216, v1217, v1218);
  v1221 = (CompleteMissionMaster_o *)sub_1B64314(CompleteMissionMaster_TypeInfo, v1219, v1220);
  CompleteMissionMaster___ctor(v1221, 0LL);
  if ( v1221 )
  {
    v519 = sub_1B64204(v1221, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8C )
    goto LABEL_1544;
  v515->m_Items[140] = (DataMasterBase_o *)v1221;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[140], (int32_t)v1221, v1222, v1223);
  v1226 = (EventRewardSetMaster_o *)sub_1B64314(EventRewardSetMaster_TypeInfo, v1224, v1225);
  EventRewardSetMaster___ctor(v1226, 0LL);
  if ( v1226 )
  {
    v519 = sub_1B64204(v1226, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8D )
    goto LABEL_1544;
  v515->m_Items[141] = (DataMasterBase_o *)v1226;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[141], (int32_t)v1226, v1227, v1228);
  v1231 = (UserEventMissionMaster_o *)sub_1B64314(UserEventMissionMaster_TypeInfo, v1229, v1230);
  UserEventMissionMaster___ctor(v1231, 0LL);
  if ( v1231 )
  {
    v519 = sub_1B64204(v1231, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8E )
    goto LABEL_1544;
  v515->m_Items[142] = (DataMasterBase_o *)v1231;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[142], (int32_t)v1231, v1232, v1233);
  v1236 = (UserEventMissionCondDetailMaster_o *)sub_1B64314(UserEventMissionCondDetailMaster_TypeInfo, v1234, v1235);
  UserEventMissionCondDetailMaster___ctor(v1236, 0LL);
  if ( v1236 )
  {
    v519 = sub_1B64204(v1236, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x8F )
    goto LABEL_1544;
  v515->m_Items[143] = (DataMasterBase_o *)v1236;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[143], (int32_t)v1236, v1237, v1238);
  v1241 = (BoxGachaBaseDetailMaster_o *)sub_1B64314(BoxGachaBaseDetailMaster_TypeInfo, v1239, v1240);
  BoxGachaBaseDetailMaster___ctor(v1241, 0LL);
  if ( v1241 )
  {
    v519 = sub_1B64204(v1241, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x90 )
    goto LABEL_1544;
  v515->m_Items[144] = (DataMasterBase_o *)v1241;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[144], (int32_t)v1241, v1242, v1243);
  v1246 = (UserServantLeaderMaster_o *)sub_1B64314(UserServantLeaderMaster_TypeInfo, v1244, v1245);
  UserServantLeaderMaster___ctor(v1246, 0LL);
  if ( v1246 )
  {
    v519 = sub_1B64204(v1246, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x91 )
    goto LABEL_1544;
  v515->m_Items[145] = (DataMasterBase_o *)v1246;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[145], (int32_t)v1246, v1247, v1248);
  v1251 = (ClosedMessageMaster_o *)sub_1B64314(ClosedMessageMaster_TypeInfo, v1249, v1250);
  ClosedMessageMaster___ctor(v1251, 0LL);
  if ( v1251 )
  {
    v519 = sub_1B64204(v1251, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x92 )
    goto LABEL_1544;
  v515->m_Items[146] = (DataMasterBase_o *)v1251;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[146], (int32_t)v1251, v1252, v1253);
  v1256 = (FunctionGroupMaster_o *)sub_1B64314(FunctionGroupMaster_TypeInfo, v1254, v1255);
  FunctionGroupMaster___ctor(v1256, 0LL);
  if ( v1256 )
  {
    v519 = sub_1B64204(v1256, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x93 )
    goto LABEL_1544;
  v515->m_Items[147] = (DataMasterBase_o *)v1256;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[147], (int32_t)v1256, v1257, v1258);
  v1261 = (EventRaidMaster_o *)sub_1B64314(EventRaidMaster_TypeInfo, v1259, v1260);
  EventRaidMaster___ctor(v1261, 0LL);
  if ( v1261 )
  {
    v519 = sub_1B64204(v1261, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x94 )
    goto LABEL_1544;
  v515->m_Items[148] = (DataMasterBase_o *)v1261;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[148], (int32_t)v1261, v1262, v1263);
  v1266 = (TotalEventRaidMaster_o *)sub_1B64314(TotalEventRaidMaster_TypeInfo, v1264, v1265);
  TotalEventRaidMaster___ctor(v1266, 0LL);
  if ( v1266 )
  {
    v519 = sub_1B64204(v1266, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x95 )
    goto LABEL_1544;
  v515->m_Items[149] = (DataMasterBase_o *)v1266;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[149], (int32_t)v1266, v1267, v1268);
  v1271 = (UserEventRaidMaster_o *)sub_1B64314(UserEventRaidMaster_TypeInfo, v1269, v1270);
  UserEventRaidMaster___ctor(v1271, 0LL);
  if ( v1271 )
  {
    v519 = sub_1B64204(v1271, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x96 )
    goto LABEL_1544;
  v515->m_Items[150] = (DataMasterBase_o *)v1271;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[150], (int32_t)v1271, v1272, v1273);
  v1276 = (EventPointMaster_o *)sub_1B64314(EventPointMaster_TypeInfo, v1274, v1275);
  EventPointMaster___ctor(v1276, 0LL);
  if ( v1276 )
  {
    v519 = sub_1B64204(v1276, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x97 )
    goto LABEL_1544;
  v515->m_Items[151] = (DataMasterBase_o *)v1276;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[151], (int32_t)v1276, v1277, v1278);
  v1281 = (EventPointGroupMaster_o *)sub_1B64314(EventPointGroupMaster_TypeInfo, v1279, v1280);
  EventPointGroupMaster___ctor(v1281, 0LL);
  if ( v1281 )
  {
    v519 = sub_1B64204(v1281, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x98 )
    goto LABEL_1544;
  v515->m_Items[152] = (DataMasterBase_o *)v1281;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[152], (int32_t)v1281, v1282, v1283);
  v1286 = (TotalEventPointMaster_o *)sub_1B64314(TotalEventPointMaster_TypeInfo, v1284, v1285);
  TotalEventPointMaster___ctor(v1286, 0LL);
  if ( v1286 )
  {
    v519 = sub_1B64204(v1286, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x99 )
    goto LABEL_1544;
  v515->m_Items[153] = (DataMasterBase_o *)v1286;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[153], (int32_t)v1286, v1287, v1288);
  v1291 = (UserEventPointMaster_o *)sub_1B64314(UserEventPointMaster_TypeInfo, v1289, v1290);
  UserEventPointMaster___ctor(v1291, 0LL);
  if ( v1291 )
  {
    v519 = sub_1B64204(v1291, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9A )
    goto LABEL_1544;
  v515->m_Items[154] = (DataMasterBase_o *)v1291;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[154], (int32_t)v1291, v1292, v1293);
  v1296 = (EventPointUpperMaster_o *)sub_1B64314(EventPointUpperMaster_TypeInfo, v1294, v1295);
  EventPointUpperMaster___ctor(v1296, 0LL);
  if ( v1296 )
  {
    v519 = sub_1B64204(v1296, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9B )
    goto LABEL_1544;
  v515->m_Items[155] = (DataMasterBase_o *)v1296;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[155], (int32_t)v1296, v1297, v1298);
  v1301 = (EventPointUpperReleaseMaster_o *)sub_1B64314(EventPointUpperReleaseMaster_TypeInfo, v1299, v1300);
  EventPointUpperReleaseMaster___ctor(v1301, 0LL);
  if ( v1301 )
  {
    v519 = sub_1B64204(v1301, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9C )
    goto LABEL_1544;
  v515->m_Items[156] = (DataMasterBase_o *)v1301;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[156], (int32_t)v1301, v1302, v1303);
  v1306 = (EventRaceMaster_o *)sub_1B64314(EventRaceMaster_TypeInfo, v1304, v1305);
  EventRaceMaster___ctor(v1306, 0LL);
  if ( v1306 )
  {
    v519 = sub_1B64204(v1306, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9D )
    goto LABEL_1544;
  v515->m_Items[157] = (DataMasterBase_o *)v1306;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[157], (int32_t)v1306, v1307, v1308);
  v1311 = (EventRaceResultMaster_o *)sub_1B64314(EventRaceResultMaster_TypeInfo, v1309, v1310);
  EventRaceResultMaster___ctor(v1311, 0LL);
  if ( v1311 )
  {
    v519 = sub_1B64204(v1311, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9E )
    goto LABEL_1544;
  v515->m_Items[158] = (DataMasterBase_o *)v1311;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[158], (int32_t)v1311, v1312, v1313);
  v1316 = (QuestRacePointMaster_o *)sub_1B64314(QuestRacePointMaster_TypeInfo, v1314, v1315);
  QuestRacePointMaster___ctor(v1316, 0LL);
  if ( v1316 )
  {
    v519 = sub_1B64204(v1316, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x9F )
    goto LABEL_1544;
  v515->m_Items[159] = (DataMasterBase_o *)v1316;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[159], (int32_t)v1316, v1317, v1318);
  v1321 = (UserEventRaceMaster_o *)sub_1B64314(UserEventRaceMaster_TypeInfo, v1319, v1320);
  UserEventRaceMaster___ctor(v1321, 0LL);
  if ( v1321 )
  {
    v519 = sub_1B64204(v1321, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA0 )
    goto LABEL_1544;
  v515->m_Items[160] = (DataMasterBase_o *)v1321;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[160], (int32_t)v1321, v1322, v1323);
  v1326 = (EventScriptMaster_o *)sub_1B64314(EventScriptMaster_TypeInfo, v1324, v1325);
  EventScriptMaster___ctor(v1326, 0LL);
  if ( v1326 )
  {
    v519 = sub_1B64204(v1326, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA1 )
    goto LABEL_1544;
  v515->m_Items[161] = (DataMasterBase_o *)v1326;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[161], (int32_t)v1326, v1327, v1328);
  v1331 = (EventScriptReleaseMaster_o *)sub_1B64314(EventScriptReleaseMaster_TypeInfo, v1329, v1330);
  EventScriptReleaseMaster___ctor(v1331, 0LL);
  if ( v1331 )
  {
    v519 = sub_1B64204(v1331, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA2 )
    goto LABEL_1544;
  v515->m_Items[162] = (DataMasterBase_o *)v1331;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[162], (int32_t)v1331, v1332, v1333);
  v1336 = (UserPresentHistoryMaster_o *)sub_1B64314(UserPresentHistoryMaster_TypeInfo, v1334, v1335);
  UserPresentHistoryMaster___ctor(v1336, 0LL);
  if ( v1336 )
  {
    v519 = sub_1B64204(v1336, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA3 )
    goto LABEL_1544;
  v515->m_Items[163] = (DataMasterBase_o *)v1336;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[163], (int32_t)v1336, v1337, v1338);
  v1341 = (MstMissionMaster_o *)sub_1B64314(MstMissionMaster_TypeInfo, v1339, v1340);
  MstMissionMaster___ctor(v1341, 0LL);
  if ( v1341 )
  {
    v519 = sub_1B64204(v1341, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA4 )
    goto LABEL_1544;
  v515->m_Items[164] = (DataMasterBase_o *)v1341;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[164], (int32_t)v1341, v1342, v1343);
  v1346 = (ServantExceedMaster_o *)sub_1B64314(ServantExceedMaster_TypeInfo, v1344, v1345);
  ServantExceedMaster___ctor(v1346, 0LL);
  if ( v1346 )
  {
    v519 = sub_1B64204(v1346, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA5 )
    goto LABEL_1544;
  v515->m_Items[165] = (DataMasterBase_o *)v1346;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[165], (int32_t)v1346, v1347, v1348);
  v1351 = (PartialMaintenanceMaster_o *)sub_1B64314(PartialMaintenanceMaster_TypeInfo, v1349, v1350);
  PartialMaintenanceMaster___ctor(v1351, 0LL);
  if ( v1351 )
  {
    v519 = sub_1B64204(v1351, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA6 )
    goto LABEL_1544;
  v515->m_Items[166] = (DataMasterBase_o *)v1351;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[166], (int32_t)v1351, v1352, v1353);
  v1356 = (GuideMaster_o *)sub_1B64314(GuideMaster_TypeInfo, v1354, v1355);
  GuideMaster___ctor(v1356, 0LL);
  if ( v1356 )
  {
    v519 = sub_1B64204(v1356, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA7 )
    goto LABEL_1544;
  v515->m_Items[167] = (DataMasterBase_o *)v1356;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[167], (int32_t)v1356, v1357, v1358);
  v1361 = (MstMissionDisplayInfoMaster_o *)sub_1B64314(MstMissionDisplayInfoMaster_TypeInfo, v1359, v1360);
  MstMissionDisplayInfoMaster___ctor(v1361, 0LL);
  if ( v1361 )
  {
    v519 = sub_1B64204(v1361, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA8 )
    goto LABEL_1544;
  v515->m_Items[168] = (DataMasterBase_o *)v1361;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[168], (int32_t)v1361, v1362, v1363);
  v1366 = (GachaGroupMaster_o *)sub_1B64314(GachaGroupMaster_TypeInfo, v1364, v1365);
  GachaGroupMaster___ctor(v1366, 0LL);
  if ( v1366 )
  {
    v519 = sub_1B64204(v1366, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xA9 )
    goto LABEL_1544;
  v515->m_Items[169] = (DataMasterBase_o *)v1366;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[169], (int32_t)v1366, v1367, v1368);
  v1371 = (QuestResetMaster_o *)sub_1B64314(QuestResetMaster_TypeInfo, v1369, v1370);
  QuestResetMaster___ctor(v1371, 0LL);
  if ( v1371 )
  {
    v519 = sub_1B64204(v1371, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAA )
    goto LABEL_1544;
  v515->m_Items[170] = (DataMasterBase_o *)v1371;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[170], (int32_t)v1371, v1372, v1373);
  v1376 = (WarAddMaster_o *)sub_1B64314(WarAddMaster_TypeInfo, v1374, v1375);
  WarAddMaster___ctor(v1376, 0LL);
  if ( v1376 )
  {
    v519 = sub_1B64204(v1376, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAB )
    goto LABEL_1544;
  v515->m_Items[171] = (DataMasterBase_o *)v1376;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[171], (int32_t)v1376, v1377, v1378);
  v1381 = (EventItemDisplayMaster_o *)sub_1B64314(EventItemDisplayMaster_TypeInfo, v1379, v1380);
  EventItemDisplayMaster___ctor(v1381, 0LL);
  if ( v1381 )
  {
    v519 = sub_1B64204(v1381, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAC )
    goto LABEL_1544;
  v515->m_Items[172] = (DataMasterBase_o *)v1381;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[172], (int32_t)v1381, v1382, v1383);
  v1386 = (EventItemDisplayGroupMaster_o *)sub_1B64314(EventItemDisplayGroupMaster_TypeInfo, v1384, v1385);
  EventItemDisplayGroupMaster___ctor(v1386, 0LL);
  if ( v1386 )
  {
    v519 = sub_1B64204(v1386, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAD )
    goto LABEL_1544;
  v515->m_Items[173] = (DataMasterBase_o *)v1386;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[173], (int32_t)v1386, v1387, v1388);
  v1391 = (EventItemDisplayReleaseMaster_o *)sub_1B64314(EventItemDisplayReleaseMaster_TypeInfo, v1389, v1390);
  EventItemDisplayReleaseMaster___ctor(v1391, 0LL);
  if ( v1391 )
  {
    v519 = sub_1B64204(v1391, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAE )
    goto LABEL_1544;
  v515->m_Items[174] = (DataMasterBase_o *)v1391;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[174], (int32_t)v1391, v1392, v1393);
  v1396 = (EventTutorialMaster_o *)sub_1B64314(EventTutorialMaster_TypeInfo, v1394, v1395);
  EventTutorialMaster___ctor(v1396, 0LL);
  if ( v1396 )
  {
    v519 = sub_1B64204(v1396, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xAF )
    goto LABEL_1544;
  v515->m_Items[175] = (DataMasterBase_o *)v1396;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[175], (int32_t)v1396, v1397, v1398);
  v1401 = (EventTutorialCondMaster_o *)sub_1B64314(EventTutorialCondMaster_TypeInfo, v1399, v1400);
  EventTutorialCondMaster___ctor(v1401, 0LL);
  if ( v1401 )
  {
    v519 = sub_1B64204(v1401, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB0 )
    goto LABEL_1544;
  v515->m_Items[176] = (DataMasterBase_o *)v1401;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[176], (int32_t)v1401, v1402, v1403);
  v1406 = (VoiceReleaseMaster_o *)sub_1B64314(VoiceReleaseMaster_TypeInfo, v1404, v1405);
  VoiceReleaseMaster___ctor(v1406, 0LL);
  if ( v1406 )
  {
    v519 = sub_1B64204(v1406, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB1 )
    goto LABEL_1544;
  v515->m_Items[177] = (DataMasterBase_o *)v1406;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[177], (int32_t)v1406, v1407, v1408);
  v1411 = (EventSuperBossMaster_o *)sub_1B64314(EventSuperBossMaster_TypeInfo, v1409, v1410);
  EventSuperBossMaster___ctor(v1411, 0LL);
  if ( v1411 )
  {
    v519 = sub_1B64204(v1411, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB2 )
    goto LABEL_1544;
  v515->m_Items[178] = (DataMasterBase_o *)v1411;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[178], (int32_t)v1411, v1412, v1413);
  v1416 = (UserSuperBossMaster_o *)sub_1B64314(UserSuperBossMaster_TypeInfo, v1414, v1415);
  UserSuperBossMaster___ctor(v1416, 0LL);
  if ( v1416 )
  {
    v519 = sub_1B64204(v1416, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB3 )
    goto LABEL_1544;
  v515->m_Items[179] = (DataMasterBase_o *)v1416;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[179], (int32_t)v1416, v1417, v1418);
  v1421 = (QuestScriptMaster_o *)sub_1B64314(QuestScriptMaster_TypeInfo, v1419, v1420);
  QuestScriptMaster___ctor(v1421, 0LL);
  if ( v1421 )
  {
    v519 = sub_1B64204(v1421, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB4 )
    goto LABEL_1544;
  v515->m_Items[180] = (DataMasterBase_o *)v1421;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[180], (int32_t)v1421, v1422, v1423);
  v1426 = (QuestScriptReleaseMaster_o *)sub_1B64314(QuestScriptReleaseMaster_TypeInfo, v1424, v1425);
  QuestScriptReleaseMaster___ctor(v1426, 0LL);
  if ( v1426 )
  {
    v519 = sub_1B64204(v1426, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB5 )
    goto LABEL_1544;
  v515->m_Items[181] = (DataMasterBase_o *)v1426;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[181], (int32_t)v1426, v1427, v1428);
  v1431 = (MaterialFolderMaster_o *)sub_1B64314(MaterialFolderMaster_TypeInfo, v1429, v1430);
  MaterialFolderMaster___ctor(v1431, 0LL);
  if ( v1431 )
  {
    v519 = sub_1B64204(v1431, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB6 )
    goto LABEL_1544;
  v515->m_Items[182] = (DataMasterBase_o *)v1431;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[182], (int32_t)v1431, v1432, v1433);
  v1436 = (RestrictionMaster_o *)sub_1B64314(RestrictionMaster_TypeInfo, v1434, v1435);
  RestrictionMaster___ctor(v1436, 0LL);
  if ( v1436 )
  {
    v519 = sub_1B64204(v1436, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB7 )
    goto LABEL_1544;
  v515->m_Items[183] = (DataMasterBase_o *)v1436;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[183], (int32_t)v1436, v1437, v1438);
  v1441 = (QuestRestrictionMaster_o *)sub_1B64314(QuestRestrictionMaster_TypeInfo, v1439, v1440);
  QuestRestrictionMaster___ctor(v1441, 0LL);
  if ( v1441 )
  {
    v519 = sub_1B64204(v1441, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB8 )
    goto LABEL_1544;
  v515->m_Items[184] = (DataMasterBase_o *)v1441;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[184], (int32_t)v1441, v1442, v1443);
  v1446 = (ServantVoiceRelationMaster_o *)sub_1B64314(ServantVoiceRelationMaster_TypeInfo, v1444, v1445);
  ServantVoiceRelationMaster___ctor(v1446, 0LL);
  if ( v1446 )
  {
    v519 = sub_1B64204(v1446, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xB9 )
    goto LABEL_1544;
  v515->m_Items[185] = (DataMasterBase_o *)v1446;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[185], (int32_t)v1446, v1447, v1448);
  v1451 = (ShopDetailMaster_o *)sub_1B64314(ShopDetailMaster_TypeInfo, v1449, v1450);
  ShopDetailMaster___ctor(v1451, 0LL);
  if ( v1451 )
  {
    v519 = sub_1B64204(v1451, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBA )
    goto LABEL_1544;
  v515->m_Items[186] = (DataMasterBase_o *)v1451;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[186], (int32_t)v1451, v1452, v1453);
  v1456 = (ServantScriptAddMaster_o *)sub_1B64314(ServantScriptAddMaster_TypeInfo, v1454, v1455);
  ServantScriptAddMaster___ctor(v1456, 0LL);
  if ( v1456 )
  {
    v519 = sub_1B64204(v1456, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBB )
    goto LABEL_1544;
  v515->m_Items[187] = (DataMasterBase_o *)v1456;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[187], (int32_t)v1456, v1457, v1458);
  v1461 = (CombineMaster_o *)sub_1B64314(CombineMaster_TypeInfo, v1459, v1460);
  CombineMaster___ctor(v1461, 0LL);
  if ( v1461 )
  {
    v519 = sub_1B64204(v1461, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBC )
    goto LABEL_1544;
  v515->m_Items[188] = (DataMasterBase_o *)v1461;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[188], (int32_t)v1461, v1462, v1463);
  v1466 = (AiFieldMaster_o *)sub_1B64314(AiFieldMaster_TypeInfo, v1464, v1465);
  AiFieldMaster___ctor(v1466, 0LL);
  if ( v1466 )
  {
    v519 = sub_1B64204(v1466, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBD )
    goto LABEL_1544;
  v515->m_Items[189] = (DataMasterBase_o *)v1466;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[189], (int32_t)v1466, v1467, v1468);
  v1471 = (ServantCommentAddMaster_o *)sub_1B64314(ServantCommentAddMaster_TypeInfo, v1469, v1470);
  ServantCommentAddMaster___ctor(v1471, 0LL);
  if ( v1471 )
  {
    v519 = sub_1B64204(v1471, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBE )
    goto LABEL_1544;
  v515->m_Items[190] = (DataMasterBase_o *)v1471;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[190], (int32_t)v1471, v1472, v1473);
  v1476 = (EventFilterMaster_o *)sub_1B64314(EventFilterMaster_TypeInfo, v1474, v1475);
  EventFilterMaster___ctor(v1476, 0LL);
  if ( v1476 )
  {
    v519 = sub_1B64204(v1476, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xBF )
    goto LABEL_1544;
  v515->m_Items[191] = (DataMasterBase_o *)v1476;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[191], (int32_t)v1476, v1477, v1478);
  v1481 = (UserSupportDeckMaster_o *)sub_1B64314(UserSupportDeckMaster_TypeInfo, v1479, v1480);
  UserSupportDeckMaster___ctor(v1481, 0LL);
  if ( v1481 )
  {
    v519 = sub_1B64204(v1481, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC0 )
    goto LABEL_1544;
  v515->m_Items[192] = (DataMasterBase_o *)v1481;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[192], (int32_t)v1481, v1482, v1483);
  v1486 = (EventRewardSceneMaster_o *)sub_1B64314(EventRewardSceneMaster_TypeInfo, v1484, v1485);
  EventRewardSceneMaster___ctor(v1486, 0LL);
  if ( v1486 )
  {
    v519 = sub_1B64204(v1486, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC1 )
    goto LABEL_1544;
  v515->m_Items[193] = (DataMasterBase_o *)v1486;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[193], (int32_t)v1486, v1487, v1488);
  v1491 = (EventVoicePlayMaster_o *)sub_1B64314(EventVoicePlayMaster_TypeInfo, v1489, v1490);
  EventVoicePlayMaster___ctor(v1491, 0LL);
  if ( v1491 )
  {
    v519 = sub_1B64204(v1491, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC2 )
    goto LABEL_1544;
  v515->m_Items[194] = (DataMasterBase_o *)v1491;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[194], (int32_t)v1491, v1492, v1493);
  v1496 = (GachaSubMaster_o *)sub_1B64314(GachaSubMaster_TypeInfo, v1494, v1495);
  GachaSubMaster___ctor(v1496, 0LL);
  if ( v1496 )
  {
    v519 = sub_1B64204(v1496, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC3 )
    goto LABEL_1544;
  v515->m_Items[195] = (DataMasterBase_o *)v1496;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[195], (int32_t)v1496, v1497, v1498);
  v1501 = (GachaDetailMaster_o *)sub_1B64314(GachaDetailMaster_TypeInfo, v1499, v1500);
  GachaDetailMaster___ctor(v1501, 0LL);
  if ( v1501 )
  {
    v519 = sub_1B64204(v1501, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC4 )
    goto LABEL_1544;
  v515->m_Items[196] = (DataMasterBase_o *)v1501;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[196], (int32_t)v1501, v1502, v1503);
  v1506 = (GachaBonusSelectMaster_o *)sub_1B64314(GachaBonusSelectMaster_TypeInfo, v1504, v1505);
  GachaBonusSelectMaster___ctor(v1506, 0LL);
  if ( v1506 )
  {
    v519 = sub_1B64204(v1506, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC5 )
    goto LABEL_1544;
  v515->m_Items[197] = (DataMasterBase_o *)v1506;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[197], (int32_t)v1506, v1507, v1508);
  v1511 = (GachaBonusSelectLineupMaster_o *)sub_1B64314(GachaBonusSelectLineupMaster_TypeInfo, v1509, v1510);
  GachaBonusSelectLineupMaster___ctor(v1511, 0LL);
  if ( v1511 )
  {
    v519 = sub_1B64204(v1511, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC6 )
    goto LABEL_1544;
  v515->m_Items[198] = (DataMasterBase_o *)v1511;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[198], (int32_t)v1511, v1512, v1513);
  v1516 = (ServantChangeMaster_o *)sub_1B64314(ServantChangeMaster_TypeInfo, v1514, v1515);
  ServantChangeMaster___ctor(v1516, 0LL);
  if ( v1516 )
  {
    v519 = sub_1B64204(v1516, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC7 )
    goto LABEL_1544;
  v515->m_Items[199] = (DataMasterBase_o *)v1516;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[199], (int32_t)v1516, v1517, v1518);
  v1521 = (VoiceCondMaster_o *)sub_1B64314(VoiceCondMaster_TypeInfo, v1519, v1520);
  VoiceCondMaster___ctor(v1521, 0LL);
  if ( v1521 )
  {
    v519 = sub_1B64204(v1521, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC8 )
    goto LABEL_1544;
  v515->m_Items[200] = (DataMasterBase_o *)v1521;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[200], (int32_t)v1521, v1522, v1523);
  v1526 = (BgmReleaseMaster_o *)sub_1B64314(BgmReleaseMaster_TypeInfo, v1524, v1525);
  BgmReleaseMaster___ctor(v1526, 0LL);
  if ( v1526 )
  {
    v519 = sub_1B64204(v1526, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xC9 )
    goto LABEL_1544;
  v515->m_Items[201] = (DataMasterBase_o *)v1526;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[201], (int32_t)v1526, v1527, v1528);
  v1531 = (MyRoomAddMaster_o *)sub_1B64314(MyRoomAddMaster_TypeInfo, v1529, v1530);
  MyRoomAddMaster___ctor(v1531, 0LL);
  if ( v1531 )
  {
    v519 = sub_1B64204(v1531, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCA )
    goto LABEL_1544;
  v515->m_Items[202] = (DataMasterBase_o *)v1531;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[202], (int32_t)v1531, v1532, v1533);
  v1536 = (ShopActionMaster_o *)sub_1B64314(ShopActionMaster_TypeInfo, v1534, v1535);
  ShopActionMaster___ctor(v1536, 0LL);
  if ( v1536 )
  {
    v519 = sub_1B64204(v1536, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCB )
    goto LABEL_1544;
  v515->m_Items[203] = (DataMasterBase_o *)v1536;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[203], (int32_t)v1536, v1537, v1538);
  v1541 = (EventRewardSceneReleaseMaster_o *)sub_1B64314(EventRewardSceneReleaseMaster_TypeInfo, v1539, v1540);
  EventRewardSceneReleaseMaster___ctor(v1541, 0LL);
  if ( v1541 )
  {
    v519 = sub_1B64204(v1541, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCC )
    goto LABEL_1544;
  v515->m_Items[204] = (DataMasterBase_o *)v1541;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[204], (int32_t)v1541, v1542, v1543);
  v1546 = (QuestBehaviorMaster_o *)sub_1B64314(QuestBehaviorMaster_TypeInfo, v1544, v1545);
  QuestBehaviorMaster___ctor(v1546, 0LL);
  if ( v1546 )
  {
    v519 = sub_1B64204(v1546, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCD )
    goto LABEL_1544;
  v515->m_Items[205] = (DataMasterBase_o *)v1546;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[205], (int32_t)v1546, v1547, v1548);
  v1551 = (MapMaster_o *)sub_1B64314(MapMaster_TypeInfo, v1549, v1550);
  MapMaster___ctor(v1551, 0LL);
  if ( v1551 )
  {
    v519 = sub_1B64204(v1551, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCE )
    goto LABEL_1544;
  v515->m_Items[206] = (DataMasterBase_o *)v1551;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[206], (int32_t)v1551, v1552, v1553);
  v1556 = (MapCondMaster_o *)sub_1B64314(MapCondMaster_TypeInfo, v1554, v1555);
  MapCondMaster___ctor(v1556, 0LL);
  if ( v1556 )
  {
    v519 = sub_1B64204(v1556, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xCF )
    goto LABEL_1544;
  v515->m_Items[207] = (DataMasterBase_o *)v1556;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[207], (int32_t)v1556, v1557, v1558);
  v1561 = (MapButtonMaster_o *)sub_1B64314(MapButtonMaster_TypeInfo, v1559, v1560);
  MapButtonMaster___ctor(v1561, 0LL);
  if ( v1561 )
  {
    v519 = sub_1B64204(v1561, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD0 )
    goto LABEL_1544;
  v515->m_Items[208] = (DataMasterBase_o *)v1561;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[208], (int32_t)v1561, v1562, v1563);
  v1566 = (BannerAddMaster_o *)sub_1B64314(BannerAddMaster_TypeInfo, v1564, v1565);
  BannerAddMaster___ctor(v1566, 0LL);
  if ( v1566 )
  {
    v519 = sub_1B64204(v1566, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD1 )
    goto LABEL_1544;
  v515->m_Items[209] = (DataMasterBase_o *)v1566;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[209], (int32_t)v1566, v1567, v1568);
  v1571 = (EventAddMaster_o *)sub_1B64314(EventAddMaster_TypeInfo, v1569, v1570);
  EventAddMaster___ctor(v1571, 0LL);
  if ( v1571 )
  {
    v519 = sub_1B64204(v1571, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD2 )
    goto LABEL_1544;
  v515->m_Items[210] = (DataMasterBase_o *)v1571;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[210], (int32_t)v1571, v1572, v1573);
  v1576 = (TotalLoginMaster_o *)sub_1B64314(TotalLoginMaster_TypeInfo, v1574, v1575);
  TotalLoginMaster___ctor(v1576, 0LL);
  if ( v1576 )
  {
    v519 = sub_1B64204(v1576, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD3 )
    goto LABEL_1544;
  v515->m_Items[211] = (DataMasterBase_o *)v1576;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[211], (int32_t)v1576, v1577, v1578);
  v1581 = (ServantFilterMaster_o *)sub_1B64314(ServantFilterMaster_TypeInfo, v1579, v1580);
  ServantFilterMaster___ctor(v1581, 0LL);
  if ( v1581 )
  {
    v519 = sub_1B64204(v1581, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD4 )
    goto LABEL_1544;
  v515->m_Items[212] = (DataMasterBase_o *)v1581;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[212], (int32_t)v1581, v1582, v1583);
  v1586 = (CombineCostumeMaster_o *)sub_1B64314(CombineCostumeMaster_TypeInfo, v1584, v1585);
  CombineCostumeMaster___ctor(v1586, 0LL);
  if ( v1586 )
  {
    v519 = sub_1B64204(v1586, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD5 )
    goto LABEL_1544;
  v515->m_Items[213] = (DataMasterBase_o *)v1586;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[213], (int32_t)v1586, v1587, v1588);
  v1591 = (ServantCostumeMaster_o *)sub_1B64314(ServantCostumeMaster_TypeInfo, v1589, v1590);
  ServantCostumeMaster___ctor(v1591, 0LL);
  if ( v1591 )
  {
    v519 = sub_1B64204(v1591, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD6 )
    goto LABEL_1544;
  v515->m_Items[214] = (DataMasterBase_o *)v1591;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[214], (int32_t)v1591, v1592, v1593);
  v1596 = (ServantCostumeReleaseMaster_o *)sub_1B64314(ServantCostumeReleaseMaster_TypeInfo, v1594, v1595);
  ServantCostumeReleaseMaster___ctor(v1596, 0LL);
  if ( v1596 )
  {
    v519 = sub_1B64204(v1596, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD7 )
    goto LABEL_1544;
  v515->m_Items[215] = (DataMasterBase_o *)v1596;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[215], (int32_t)v1596, v1597, v1598);
  v1601 = (UserFriendRequestHistoryMaster_o *)sub_1B64314(UserFriendRequestHistoryMaster_TypeInfo, v1599, v1600);
  UserFriendRequestHistoryMaster___ctor(v1601, 0LL);
  if ( v1601 )
  {
    v519 = sub_1B64204(v1601, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD8 )
    goto LABEL_1544;
  v515->m_Items[216] = (DataMasterBase_o *)v1601;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[216], (int32_t)v1601, v1602, v1603);
  v1606 = (UserBlacklistMaster_o *)sub_1B64314(UserBlacklistMaster_TypeInfo, v1604, v1605);
  UserBlacklistMaster___ctor(v1606, 0LL);
  if ( v1606 )
  {
    v519 = sub_1B64204(v1606, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xD9 )
    goto LABEL_1544;
  v515->m_Items[217] = (DataMasterBase_o *)v1606;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[217], (int32_t)v1606, v1607, v1608);
  v1611 = (ItemSelectMaster_o *)sub_1B64314(ItemSelectMaster_TypeInfo, v1609, v1610);
  ItemSelectMaster___ctor(v1611, 0LL);
  if ( v1611 )
  {
    v519 = sub_1B64204(v1611, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDA )
    goto LABEL_1544;
  v515->m_Items[218] = (DataMasterBase_o *)v1611;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[218], (int32_t)v1611, v1612, v1613);
  v1616 = (TotalEventRaceMaster_o *)sub_1B64314(TotalEventRaceMaster_TypeInfo, v1614, v1615);
  TotalEventRaceMaster___ctor(v1616, 0LL);
  if ( v1616 )
  {
    v519 = sub_1B64204(v1616, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDB )
    goto LABEL_1544;
  v515->m_Items[219] = (DataMasterBase_o *)v1616;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[219], (int32_t)v1616, v1617, v1618);
  v1621 = (EventPointGroupAddMaster_o *)sub_1B64314(EventPointGroupAddMaster_TypeInfo, v1619, v1620);
  EventPointGroupAddMaster___ctor(v1621, 0LL);
  if ( v1621 )
  {
    v519 = sub_1B64204(v1621, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDC )
    goto LABEL_1544;
  v515->m_Items[220] = (DataMasterBase_o *)v1621;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[220], (int32_t)v1621, v1622, v1623);
  v1626 = (VoicePlayGroupMaster_o *)sub_1B64314(VoicePlayGroupMaster_TypeInfo, v1624, v1625);
  VoicePlayGroupMaster___ctor(v1626, 0LL);
  if ( v1626 )
  {
    v519 = sub_1B64204(v1626, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDD )
    goto LABEL_1544;
  v515->m_Items[221] = (DataMasterBase_o *)v1626;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[221], (int32_t)v1626, v1627, v1628);
  v1631 = (VoicePlayCondMaster_o *)sub_1B64314(VoicePlayCondMaster_TypeInfo, v1629, v1630);
  VoicePlayCondMaster___ctor(v1631, 0LL);
  if ( v1631 )
  {
    v519 = sub_1B64204(v1631, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDE )
    goto LABEL_1544;
  v515->m_Items[222] = (DataMasterBase_o *)v1631;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[222], (int32_t)v1631, v1632, v1633);
  v1636 = (GachaStoryAdjustMaster_o *)sub_1B64314(GachaStoryAdjustMaster_TypeInfo, v1634, v1635);
  GachaStoryAdjustMaster___ctor(v1636, 0LL);
  if ( v1636 )
  {
    v519 = sub_1B64204(v1636, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xDF )
    goto LABEL_1544;
  v515->m_Items[223] = (DataMasterBase_o *)v1636;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[223], (int32_t)v1636, v1637, v1638);
  v1641 = (ServantFlagMaster_o *)sub_1B64314(ServantFlagMaster_TypeInfo, v1639, v1640);
  ServantFlagMaster___ctor(v1641, 0LL);
  if ( v1641 )
  {
    v519 = sub_1B64204(v1641, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE0 )
    goto LABEL_1544;
  v515->m_Items[224] = (DataMasterBase_o *)v1641;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[224], (int32_t)v1641, v1642, v1643);
  v1646 = (ServantFlagReleaseMaster_o *)sub_1B64314(ServantFlagReleaseMaster_TypeInfo, v1644, v1645);
  ServantFlagReleaseMaster___ctor(v1646, 0LL);
  if ( v1646 )
  {
    v519 = sub_1B64204(v1646, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE1 )
    goto LABEL_1544;
  v515->m_Items[225] = (DataMasterBase_o *)v1646;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[225], (int32_t)v1646, v1647, v1648);
  v1651 = (EventLocationCampaignMaster_o *)sub_1B64314(EventLocationCampaignMaster_TypeInfo, v1649, v1650);
  EventLocationCampaignMaster___ctor(v1651, 0LL);
  if ( v1651 )
  {
    v519 = sub_1B64204(v1651, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE2 )
    goto LABEL_1544;
  v515->m_Items[226] = (DataMasterBase_o *)v1651;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[226], (int32_t)v1651, v1652, v1653);
  v1656 = (CampaignInfoMaster_o *)sub_1B64314(CampaignInfoMaster_TypeInfo, v1654, v1655);
  CampaignInfoMaster___ctor(v1656, 0LL);
  if ( v1656 )
  {
    v519 = sub_1B64204(v1656, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE3 )
    goto LABEL_1544;
  v515->m_Items[227] = (DataMasterBase_o *)v1656;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[227], (int32_t)v1656, v1657, v1658);
  v1661 = (DialogMessageMaster_o *)sub_1B64314(DialogMessageMaster_TypeInfo, v1659, v1660);
  DialogMessageMaster___ctor(v1661, 0LL);
  if ( v1661 )
  {
    v519 = sub_1B64204(v1661, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE4 )
    goto LABEL_1544;
  v515->m_Items[228] = (DataMasterBase_o *)v1661;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[228], (int32_t)v1661, v1662, v1663);
  v1666 = (ServantIndividualityMaster_o *)sub_1B64314(ServantIndividualityMaster_TypeInfo, v1664, v1665);
  ServantIndividualityMaster___ctor(v1666, 0LL);
  if ( v1666 )
  {
    v519 = sub_1B64204(v1666, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE5 )
    goto LABEL_1544;
  v515->m_Items[229] = (DataMasterBase_o *)v1666;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[229], (int32_t)v1666, v1667, v1668);
  v1671 = (BoardMessageMaster_o *)sub_1B64314(BoardMessageMaster_TypeInfo, v1669, v1670);
  BoardMessageMaster___ctor(v1671, 0LL);
  if ( v1671 )
  {
    v519 = sub_1B64204(v1671, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE6 )
    goto LABEL_1544;
  v515->m_Items[230] = (DataMasterBase_o *)v1671;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[230], (int32_t)v1671, v1672, v1673);
  v1676 = (BoardMessageReleaseMaster_o *)sub_1B64314(BoardMessageReleaseMaster_TypeInfo, v1674, v1675);
  BoardMessageReleaseMaster___ctor(v1676, 0LL);
  if ( v1676 )
  {
    v519 = sub_1B64204(v1676, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE7 )
    goto LABEL_1544;
  v515->m_Items[231] = (DataMasterBase_o *)v1676;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[231], (int32_t)v1676, v1677, v1678);
  v1681 = (EventServantFatigueMaster_o *)sub_1B64314(EventServantFatigueMaster_TypeInfo, v1679, v1680);
  EventServantFatigueMaster___ctor(v1681, 0LL);
  if ( v1681 )
  {
    v519 = sub_1B64204(v1681, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE8 )
    goto LABEL_1544;
  v515->m_Items[232] = (DataMasterBase_o *)v1681;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[232], (int32_t)v1681, v1682, v1683);
  v1686 = (UserEventDeckMaster_o *)sub_1B64314(UserEventDeckMaster_TypeInfo, v1684, v1685);
  UserEventDeckMaster___ctor(v1686, 0LL);
  if ( v1686 )
  {
    v519 = sub_1B64204(v1686, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xE9 )
    goto LABEL_1544;
  v515->m_Items[233] = (DataMasterBase_o *)v1686;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[233], (int32_t)v1686, v1687, v1688);
  v1691 = (EventTowerMaster_o *)sub_1B64314(EventTowerMaster_TypeInfo, v1689, v1690);
  EventTowerMaster___ctor(v1691, 0LL);
  if ( v1691 )
  {
    v519 = sub_1B64204(v1691, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEA )
    goto LABEL_1544;
  v515->m_Items[234] = (DataMasterBase_o *)v1691;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[234], (int32_t)v1691, v1692, v1693);
  v1696 = (EventTowerRewardMaster_o *)sub_1B64314(EventTowerRewardMaster_TypeInfo, v1694, v1695);
  EventTowerRewardMaster___ctor(v1696, 0LL);
  if ( v1696 )
  {
    v519 = sub_1B64204(v1696, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEB )
    goto LABEL_1544;
  v515->m_Items[235] = (DataMasterBase_o *)v1696;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[235], (int32_t)v1696, v1697, v1698);
  v1701 = (EventBulletinBoardMaster_o *)sub_1B64314(EventBulletinBoardMaster_TypeInfo, v1699, v1700);
  EventBulletinBoardMaster___ctor(v1701, 0LL);
  if ( v1701 )
  {
    v519 = sub_1B64204(v1701, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEC )
    goto LABEL_1544;
  v515->m_Items[236] = (DataMasterBase_o *)v1701;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[236], (int32_t)v1701, v1702, v1703);
  v1706 = (EventBulletinBoardReleaseMaster_o *)sub_1B64314(EventBulletinBoardReleaseMaster_TypeInfo, v1704, v1705);
  EventBulletinBoardReleaseMaster___ctor(v1706, 0LL);
  if ( v1706 )
  {
    v519 = sub_1B64204(v1706, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xED )
    goto LABEL_1544;
  v515->m_Items[237] = (DataMasterBase_o *)v1706;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[237], (int32_t)v1706, v1707, v1708);
  v1711 = (EventFactoryMaster_o *)sub_1B64314(EventFactoryMaster_TypeInfo, v1709, v1710);
  EventFactoryMaster___ctor(v1711, 0LL);
  if ( v1711 )
  {
    v519 = sub_1B64204(v1711, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEE )
    goto LABEL_1544;
  v515->m_Items[238] = (DataMasterBase_o *)v1711;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[238], (int32_t)v1711, v1712, v1713);
  v1716 = (ShopGroupMaster_o *)sub_1B64314(ShopGroupMaster_TypeInfo, v1714, v1715);
  ShopGroupMaster___ctor(v1716, 0LL);
  if ( v1716 )
  {
    v519 = sub_1B64204(v1716, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xEF )
    goto LABEL_1544;
  v515->m_Items[239] = (DataMasterBase_o *)v1716;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[239], (int32_t)v1716, v1717, v1718);
  v1721 = (AuraEffectMaster_o *)sub_1B64314(AuraEffectMaster_TypeInfo, v1719, v1720);
  AuraEffectMaster___ctor(v1721, 0LL);
  if ( v1721 )
  {
    v519 = sub_1B64204(v1721, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF0 )
    goto LABEL_1544;
  v515->m_Items[240] = (DataMasterBase_o *)v1721;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[240], (int32_t)v1721, v1722, v1723);
  v1726 = (AuraEffectPosOverwriteMaster_o *)sub_1B64314(AuraEffectPosOverwriteMaster_TypeInfo, v1724, v1725);
  AuraEffectPosOverwriteMaster___ctor(v1726, 0LL);
  if ( v1726 )
  {
    v519 = sub_1B64204(v1726, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF1 )
    goto LABEL_1544;
  v515->m_Items[241] = (DataMasterBase_o *)v1726;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[241], (int32_t)v1726, v1727, v1728);
  v1731 = (UserEventMissionFixMaster_o *)sub_1B64314(UserEventMissionFixMaster_TypeInfo, v1729, v1730);
  UserEventMissionFixMaster___ctor(v1731, 0LL);
  if ( v1731 )
  {
    v519 = sub_1B64204(v1731, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF2 )
    goto LABEL_1544;
  v515->m_Items[242] = (DataMasterBase_o *)v1731;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[242], (int32_t)v1731, v1732, v1733);
  v1736 = (NotEndEventMissionFixMaster_o *)sub_1B64314(NotEndEventMissionFixMaster_TypeInfo, v1734, v1735);
  NotEndEventMissionFixMaster___ctor(v1736, 0LL);
  if ( v1736 )
  {
    v519 = sub_1B64204(v1736, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF3 )
    goto LABEL_1544;
  v515->m_Items[243] = (DataMasterBase_o *)v1736;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[243], (int32_t)v1736, v1737, v1738);
  v1741 = (EnemyMstMaster_o *)sub_1B64314(EnemyMstMaster_TypeInfo, v1739, v1740);
  EnemyMstMaster___ctor(v1741, 0LL);
  if ( v1741 )
  {
    v519 = sub_1B64204(v1741, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF4 )
    goto LABEL_1544;
  v515->m_Items[244] = (DataMasterBase_o *)v1741;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[244], (int32_t)v1741, v1742, v1743);
  v1746 = (EnemyMstBattleMaster_o *)sub_1B64314(EnemyMstBattleMaster_TypeInfo, v1744, v1745);
  EnemyMstBattleMaster___ctor(v1746, 0LL);
  if ( v1746 )
  {
    v519 = sub_1B64204(v1746, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF5 )
    goto LABEL_1544;
  v515->m_Items[245] = (DataMasterBase_o *)v1746;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[245], (int32_t)v1746, v1747, v1748);
  v1751 = (ServantSkillReleaseMaster_o *)sub_1B64314(ServantSkillReleaseMaster_TypeInfo, v1749, v1750);
  ServantSkillReleaseMaster___ctor(v1751, 0LL);
  if ( v1751 )
  {
    v519 = sub_1B64204(v1751, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF6 )
    goto LABEL_1544;
  v515->m_Items[246] = (DataMasterBase_o *)v1751;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[246], (int32_t)v1751, v1752, v1753);
  v1756 = (ServantPassiveSkillReleaseMaster_o *)sub_1B64314(ServantPassiveSkillReleaseMaster_TypeInfo, v1754, v1755);
  ServantPassiveSkillReleaseMaster___ctor(v1756, 0LL);
  if ( v1756 )
  {
    v519 = sub_1B64204(v1756, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF7 )
    goto LABEL_1544;
  v515->m_Items[247] = (DataMasterBase_o *)v1756;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[247], (int32_t)v1756, v1757, v1758);
  v1761 = (ServantTreasureDeviceReleaseMaster_o *)sub_1B64314(ServantTreasureDeviceReleaseMaster_TypeInfo, v1759, v1760);
  ServantTreasureDeviceReleaseMaster___ctor(v1761, 0LL);
  if ( v1761 )
  {
    v519 = sub_1B64204(v1761, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF8 )
    goto LABEL_1544;
  v515->m_Items[248] = (DataMasterBase_o *)v1761;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[248], (int32_t)v1761, v1762, v1763);
  v1766 = (MapGimmickReleaseMaster_o *)sub_1B64314(MapGimmickReleaseMaster_TypeInfo, v1764, v1765);
  MapGimmickReleaseMaster___ctor(v1766, 0LL);
  if ( v1766 )
  {
    v519 = sub_1B64204(v1766, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xF9 )
    goto LABEL_1544;
  v515->m_Items[249] = (DataMasterBase_o *)v1766;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[249], (int32_t)v1766, v1767, v1768);
  v1771 = (CommandCodeMaster_o *)sub_1B64314(CommandCodeMaster_TypeInfo, v1769, v1770);
  CommandCodeMaster___ctor(v1771, 0LL);
  if ( v1771 )
  {
    v519 = sub_1B64204(v1771, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFA )
    goto LABEL_1544;
  v515->m_Items[250] = (DataMasterBase_o *)v1771;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[250], (int32_t)v1771, v1772, v1773);
  v1776 = (ServantCommandCodeUnlockMaster_o *)sub_1B64314(ServantCommandCodeUnlockMaster_TypeInfo, v1774, v1775);
  ServantCommandCodeUnlockMaster___ctor(v1776, 0LL);
  if ( v1776 )
  {
    v519 = sub_1B64204(v1776, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFB )
    goto LABEL_1544;
  v515->m_Items[251] = (DataMasterBase_o *)v1776;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[251], (int32_t)v1776, v1777, v1778);
  v1781 = (UserCommandCodeMaster_o *)sub_1B64314(UserCommandCodeMaster_TypeInfo, v1779, v1780);
  UserCommandCodeMaster___ctor(v1781, 0LL);
  if ( v1781 )
  {
    v519 = sub_1B64204(v1781, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFC )
    goto LABEL_1544;
  v515->m_Items[252] = (DataMasterBase_o *)v1781;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[252], (int32_t)v1781, v1782, v1783);
  v1786 = (UserCommandCodeCollectionMaster_o *)sub_1B64314(UserCommandCodeCollectionMaster_TypeInfo, v1784, v1785);
  UserCommandCodeCollectionMaster___ctor(v1786, 0LL);
  if ( v1786 )
  {
    v519 = sub_1B64204(v1786, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFD )
    goto LABEL_1544;
  v515->m_Items[253] = (DataMasterBase_o *)v1786;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[253], (int32_t)v1786, v1787, v1788);
  v1791 = (UserServantCommandCodeMaster_o *)sub_1B64314(UserServantCommandCodeMaster_TypeInfo, v1789, v1790);
  UserServantCommandCodeMaster___ctor(v1791, 0LL);
  if ( v1791 )
  {
    v519 = sub_1B64204(v1791, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFE )
    goto LABEL_1544;
  v515->m_Items[254] = (DataMasterBase_o *)v1791;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[254], (int32_t)v1791, v1792, v1793);
  v1796 = (UserServantCommandCardMaster_o *)sub_1B64314(UserServantCommandCardMaster_TypeInfo, v1794, v1795);
  UserServantCommandCardMaster___ctor(v1796, 0LL);
  if ( v1796 )
  {
    v519 = sub_1B64204(v1796, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0xFF )
    goto LABEL_1544;
  v515->m_Items[255] = (DataMasterBase_o *)v1796;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[255], (int32_t)v1796, v1797, v1798);
  v1801 = (CommandCardRankParamMaster_o *)sub_1B64314(CommandCardRankParamMaster_TypeInfo, v1799, v1800);
  CommandCardRankParamMaster___ctor(v1801, 0LL);
  if ( v1801 )
  {
    v519 = sub_1B64204(v1801, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x100 )
    goto LABEL_1544;
  v515->m_Items[256] = (DataMasterBase_o *)v1801;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[256], (int32_t)v1801, v1802, v1803);
  v1806 = (CommandCodeSkillMaster_o *)sub_1B64314(CommandCodeSkillMaster_TypeInfo, v1804, v1805);
  CommandCodeSkillMaster___ctor(v1806, 0LL);
  if ( v1806 )
  {
    v519 = sub_1B64204(v1806, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x101 )
    goto LABEL_1544;
  v515->m_Items[257] = (DataMasterBase_o *)v1806;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[257], (int32_t)v1806, v1807, v1808);
  v1811 = (CommandCodeSkillReleaseMaster_o *)sub_1B64314(CommandCodeSkillReleaseMaster_TypeInfo, v1809, v1810);
  CommandCodeSkillReleaseMaster___ctor(v1811, 0LL);
  if ( v1811 )
  {
    v519 = sub_1B64204(v1811, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x102 )
    goto LABEL_1544;
  v515->m_Items[258] = (DataMasterBase_o *)v1811;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[258], (int32_t)v1811, v1812, v1813);
  v1816 = (CommandCodeCommentMaster_o *)sub_1B64314(CommandCodeCommentMaster_TypeInfo, v1814, v1815);
  CommandCodeCommentMaster___ctor(v1816, 0LL);
  if ( v1816 )
  {
    v519 = sub_1B64204(v1816, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x103 )
    goto LABEL_1544;
  v515->m_Items[259] = (DataMasterBase_o *)v1816;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[259], (int32_t)v1816, v1817, v1818);
  v1821 = (EventStatusMaster_o *)sub_1B64314(EventStatusMaster_TypeInfo, v1819, v1820);
  EventStatusMaster___ctor(v1821, 0LL);
  if ( v1821 )
  {
    v519 = sub_1B64204(v1821, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x104 )
    goto LABEL_1544;
  v515->m_Items[260] = (DataMasterBase_o *)v1821;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[260], (int32_t)v1821, v1822, v1823);
  v1826 = (EventStatusQuestMaster_o *)sub_1B64314(EventStatusQuestMaster_TypeInfo, v1824, v1825);
  EventStatusQuestMaster___ctor(v1826, 0LL);
  if ( v1826 )
  {
    v519 = sub_1B64204(v1826, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x105 )
    goto LABEL_1544;
  v515->m_Items[261] = (DataMasterBase_o *)v1826;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[261], (int32_t)v1826, v1827, v1828);
  v1831 = (CommonRestrictionMaster_o *)sub_1B64314(CommonRestrictionMaster_TypeInfo, v1829, v1830);
  CommonRestrictionMaster___ctor(v1831, 0LL);
  if ( v1831 )
  {
    v519 = sub_1B64204(v1831, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x106 )
    goto LABEL_1544;
  v515->m_Items[262] = (DataMasterBase_o *)v1831;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[262], (int32_t)v1831, v1832, v1833);
  v1836 = (EventPointBuffMaster_o *)sub_1B64314(EventPointBuffMaster_TypeInfo, v1834, v1835);
  EventPointBuffMaster___ctor(v1836, 0LL);
  if ( v1836 )
  {
    v519 = sub_1B64204(v1836, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x107 )
    goto LABEL_1544;
  v515->m_Items[263] = (DataMasterBase_o *)v1836;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[263], (int32_t)v1836, v1837, v1838);
  v1841 = (UserFollowMaster_o *)sub_1B64314(UserFollowMaster_TypeInfo, v1839, v1840);
  UserFollowMaster___ctor(v1841, 0LL);
  if ( v1841 )
  {
    v519 = sub_1B64204(v1841, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x108 )
    goto LABEL_1544;
  v515->m_Items[264] = (DataMasterBase_o *)v1841;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[264], (int32_t)v1841, v1842, v1843);
  v1846 = (EventRewardGuideReleaseMaster_o *)sub_1B64314(EventRewardGuideReleaseMaster_TypeInfo, v1844, v1845);
  EventRewardGuideReleaseMaster___ctor(v1846, 0LL);
  if ( v1846 )
  {
    v519 = sub_1B64204(v1846, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x109 )
    goto LABEL_1544;
  v515->m_Items[265] = (DataMasterBase_o *)v1846;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[265], (int32_t)v1846, v1847, v1848);
  v1851 = (NpcServantEquipMaster_o *)sub_1B64314(NpcServantEquipMaster_TypeInfo, v1849, v1850);
  NpcServantEquipMaster___ctor(v1851, 0LL);
  if ( v1851 )
  {
    v519 = sub_1B64204(v1851, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10A )
    goto LABEL_1544;
  v515->m_Items[266] = (DataMasterBase_o *)v1851;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[266], (int32_t)v1851, v1852, v1853);
  v1856 = (EventCampaignReleaseMaster_o *)sub_1B64314(EventCampaignReleaseMaster_TypeInfo, v1854, v1855);
  EventCampaignReleaseMaster___ctor(v1856, 0LL);
  if ( v1856 )
  {
    v519 = sub_1B64204(v1856, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10B )
    goto LABEL_1544;
  v515->m_Items[267] = (DataMasterBase_o *)v1856;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[267], (int32_t)v1856, v1857, v1858);
  v1861 = (ServantMaterialFolderMaster_o *)sub_1B64314(ServantMaterialFolderMaster_TypeInfo, v1859, v1860);
  ServantMaterialFolderMaster___ctor(v1861, 0LL);
  if ( v1861 )
  {
    v519 = sub_1B64204(v1861, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10C )
    goto LABEL_1544;
  v515->m_Items[268] = (DataMasterBase_o *)v1861;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[268], (int32_t)v1861, v1862, v1863);
  v1866 = (EventEquipSkillReleaseMaster_o *)sub_1B64314(EventEquipSkillReleaseMaster_TypeInfo, v1864, v1865);
  EventEquipSkillReleaseMaster___ctor(v1866, 0LL);
  if ( v1866 )
  {
    v519 = sub_1B64204(v1866, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10D )
    goto LABEL_1544;
  v515->m_Items[269] = (DataMasterBase_o *)v1866;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[269], (int32_t)v1866, v1867, v1868);
  v1871 = (EventPointActivityMaster_o *)sub_1B64314(EventPointActivityMaster_TypeInfo, v1869, v1870);
  EventPointActivityMaster___ctor(v1871, 0LL);
  if ( v1871 )
  {
    v519 = sub_1B64204(v1871, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10E )
    goto LABEL_1544;
  v515->m_Items[270] = (DataMasterBase_o *)v1871;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[270], (int32_t)v1871, v1872, v1873);
  v1876 = (FunctionCategoryMaster_o *)sub_1B64314(FunctionCategoryMaster_TypeInfo, v1874, v1875);
  FunctionCategoryMaster___ctor(v1876, 0LL);
  if ( v1876 )
  {
    v519 = sub_1B64204(v1876, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x10F )
    goto LABEL_1544;
  v515->m_Items[271] = (DataMasterBase_o *)v1876;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[271], (int32_t)v1876, v1877, v1878);
  v1881 = (QuestPickupMaster_o *)sub_1B64314(QuestPickupMaster_TypeInfo, v1879, v1880);
  QuestPickupMaster___ctor(v1881, 0LL);
  if ( v1881 )
  {
    v519 = sub_1B64204(v1881, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x110 )
    goto LABEL_1544;
  v515->m_Items[272] = (DataMasterBase_o *)v1881;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[272], (int32_t)v1881, v1882, v1883);
  v1886 = (EventUiMaster_o *)sub_1B64314(EventUiMaster_TypeInfo, v1884, v1885);
  EventUiMaster___ctor(v1886, 0LL);
  if ( v1886 )
  {
    v519 = sub_1B64204(v1886, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x111 )
    goto LABEL_1544;
  v515->m_Items[273] = (DataMasterBase_o *)v1886;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[273], (int32_t)v1886, v1887, v1888);
  v1891 = (EventUiReleaseMaster_o *)sub_1B64314(EventUiReleaseMaster_TypeInfo, v1889, v1890);
  EventUiReleaseMaster___ctor(v1891, 0LL);
  if ( v1891 )
  {
    v519 = sub_1B64204(v1891, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x112 )
    goto LABEL_1544;
  v515->m_Items[274] = (DataMasterBase_o *)v1891;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[274], (int32_t)v1891, v1892, v1893);
  v1896 = (EventUiValueMaster_o *)sub_1B64314(EventUiValueMaster_TypeInfo, v1894, v1895);
  EventUiValueMaster___ctor(v1896, 0LL);
  if ( v1896 )
  {
    v519 = sub_1B64204(v1896, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x113 )
    goto LABEL_1544;
  v515->m_Items[275] = (DataMasterBase_o *)v1896;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[275], (int32_t)v1896, v1897, v1898);
  v1901 = (EventConquestRewardMaster_o *)sub_1B64314(EventConquestRewardMaster_TypeInfo, v1899, v1900);
  EventConquestRewardMaster___ctor(v1901, 0LL);
  if ( v1901 )
  {
    v519 = sub_1B64204(v1901, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x114 )
    goto LABEL_1544;
  v515->m_Items[276] = (DataMasterBase_o *)v1901;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[276], (int32_t)v1901, v1902, v1903);
  v1906 = (NpcFollowerReleaseMaster_o *)sub_1B64314(NpcFollowerReleaseMaster_TypeInfo, v1904, v1905);
  NpcFollowerReleaseMaster___ctor(v1906, 0LL);
  if ( v1906 )
  {
    v519 = sub_1B64204(v1906, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x115 )
    goto LABEL_1544;
  v515->m_Items[277] = (DataMasterBase_o *)v1906;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[277], (int32_t)v1906, v1907, v1908);
  v1911 = (EventBonusFilterMaster_o *)sub_1B64314(EventBonusFilterMaster_TypeInfo, v1909, v1910);
  EventBonusFilterMaster___ctor(v1911, 0LL);
  if ( v1911 )
  {
    v519 = sub_1B64204(v1911, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x116 )
    goto LABEL_1544;
  v515->m_Items[278] = (DataMasterBase_o *)v1911;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[278], (int32_t)v1911, v1912, v1913);
  v1916 = (EventBonusFilterGroupInfoMaster_o *)sub_1B64314(EventBonusFilterGroupInfoMaster_TypeInfo, v1914, v1915);
  EventBonusFilterGroupInfoMaster___ctor(v1916, 0LL);
  if ( v1916 )
  {
    v519 = sub_1B64204(v1916, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x117 )
    goto LABEL_1544;
  v515->m_Items[279] = (DataMasterBase_o *)v1916;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[279], (int32_t)v1916, v1917, v1918);
  v1921 = (EventBonusFilterGroupMemberMaster_o *)sub_1B64314(EventBonusFilterGroupMemberMaster_TypeInfo, v1919, v1920);
  EventBonusFilterGroupMemberMaster___ctor(v1921, 0LL);
  if ( v1921 )
  {
    v519 = sub_1B64204(v1921, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x118 )
    goto LABEL_1544;
  v515->m_Items[280] = (DataMasterBase_o *)v1921;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[280], (int32_t)v1921, v1922, v1923);
  v1926 = (UserGachaExtraCountMaster_o *)sub_1B64314(UserGachaExtraCountMaster_TypeInfo, v1924, v1925);
  UserGachaExtraCountMaster___ctor(v1926, 0LL);
  if ( v1926 )
  {
    v519 = sub_1B64204(v1926, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x119 )
    goto LABEL_1544;
  v515->m_Items[281] = (DataMasterBase_o *)v1926;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[281], (int32_t)v1926, v1927, v1928);
  v1931 = (PrivilegeMaster_o *)sub_1B64314(PrivilegeMaster_TypeInfo, v1929, v1930);
  PrivilegeMaster___ctor(v1931, 0LL);
  if ( v1931 )
  {
    v519 = sub_1B64204(v1931, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11A )
    goto LABEL_1544;
  v515->m_Items[282] = (DataMasterBase_o *)v1931;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[282], (int32_t)v1931, v1932, v1933);
  v1936 = (UserPrivilegeMaster_o *)sub_1B64314(UserPrivilegeMaster_TypeInfo, v1934, v1935);
  UserPrivilegeMaster___ctor(v1936, 0LL);
  if ( v1936 )
  {
    v519 = sub_1B64204(v1936, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11B )
    goto LABEL_1544;
  v515->m_Items[283] = (DataMasterBase_o *)v1936;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[283], (int32_t)v1936, v1937, v1938);
  v1941 = (UserQuestRouteMaster_o *)sub_1B64314(UserQuestRouteMaster_TypeInfo, v1939, v1940);
  UserQuestRouteMaster___ctor(v1941, 0LL);
  if ( v1941 )
  {
    v519 = sub_1B64204(v1941, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11C )
    goto LABEL_1544;
  v515->m_Items[284] = (DataMasterBase_o *)v1941;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[284], (int32_t)v1941, v1942, v1943);
  v1946 = (EventBossStatusUiMaster_o *)sub_1B64314(EventBossStatusUiMaster_TypeInfo, v1944, v1945);
  EventBossStatusUiMaster___ctor(v1946, 0LL);
  if ( v1946 )
  {
    v519 = sub_1B64204(v1946, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11D )
    goto LABEL_1544;
  v515->m_Items[285] = (DataMasterBase_o *)v1946;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[285], (int32_t)v1946, v1947, v1948);
  v1951 = (CommonReleaseMaster_o *)sub_1B64314(CommonReleaseMaster_TypeInfo, v1949, v1950);
  CommonReleaseMaster___ctor(v1951, 0LL);
  if ( v1951 )
  {
    v519 = sub_1B64204(v1951, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11E )
    goto LABEL_1544;
  v515->m_Items[286] = (DataMasterBase_o *)v1951;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[286], (int32_t)v1951, v1952, v1953);
  v1956 = (QuestSpotReleaseMaster_o *)sub_1B64314(QuestSpotReleaseMaster_TypeInfo, v1954, v1955);
  QuestSpotReleaseMaster___ctor(v1956, 0LL);
  if ( v1956 )
  {
    v519 = sub_1B64204(v1956, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x11F )
    goto LABEL_1544;
  v515->m_Items[287] = (DataMasterBase_o *)v1956;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[287], (int32_t)v1956, v1957, v1958);
  v1961 = (VoiceMaterialCondMaster_o *)sub_1B64314(VoiceMaterialCondMaster_TypeInfo, v1959, v1960);
  VoiceMaterialCondMaster___ctor(v1961, 0LL);
  if ( v1961 )
  {
    v519 = sub_1B64204(v1961, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x120 )
    goto LABEL_1544;
  v515->m_Items[288] = (DataMasterBase_o *)v1961;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[288], (int32_t)v1961, v1962, v1963);
  v1966 = (ClassRelationOverwriteMaster_o *)sub_1B64314(ClassRelationOverwriteMaster_TypeInfo, v1964, v1965);
  ClassRelationOverwriteMaster___ctor(v1966, 0LL);
  if ( v1966 )
  {
    v519 = sub_1B64204(v1966, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x121 )
    goto LABEL_1544;
  v515->m_Items[289] = (DataMasterBase_o *)v1966;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[289], (int32_t)v1966, v1967, v1968);
  v1971 = (EventGroupMaster_o *)sub_1B64314(EventGroupMaster_TypeInfo, v1969, v1970);
  EventGroupMaster___ctor(v1971, 0LL);
  if ( v1971 )
  {
    v519 = sub_1B64204(v1971, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x122 )
    goto LABEL_1544;
  v515->m_Items[290] = (DataMasterBase_o *)v1971;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[290], (int32_t)v1971, v1972, v1973);
  v1976 = (TotalBoxGachaMaster_o *)sub_1B64314(TotalBoxGachaMaster_TypeInfo, v1974, v1975);
  TotalBoxGachaMaster___ctor(v1976, 0LL);
  if ( v1976 )
  {
    v519 = sub_1B64204(v1976, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x123 )
    goto LABEL_1544;
  v515->m_Items[291] = (DataMasterBase_o *)v1976;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[291], (int32_t)v1976, v1977, v1978);
  v1981 = (ServantTreasureDeviceDamageMaster_o *)sub_1B64314(ServantTreasureDeviceDamageMaster_TypeInfo, v1979, v1980);
  ServantTreasureDeviceDamageMaster___ctor(v1981, 0LL);
  if ( v1981 )
  {
    v519 = sub_1B64204(v1981, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x124 )
    goto LABEL_1544;
  v515->m_Items[292] = (DataMasterBase_o *)v1981;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[292], (int32_t)v1981, v1982, v1983);
  v1986 = (UserEventServantFatigueMaster_o *)sub_1B64314(UserEventServantFatigueMaster_TypeInfo, v1984, v1985);
  UserEventServantFatigueMaster___ctor(v1986, 0LL);
  if ( v1986 )
  {
    v519 = sub_1B64204(v1986, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x125 )
    goto LABEL_1544;
  v515->m_Items[293] = (DataMasterBase_o *)v1986;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[293], (int32_t)v1986, v1987, v1988);
  v1991 = (EventRewardBgMaster_o *)sub_1B64314(EventRewardBgMaster_TypeInfo, v1989, v1990);
  EventRewardBgMaster___ctor(v1991, 0LL);
  if ( v1991 )
  {
    v519 = sub_1B64204(v1991, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x126 )
    goto LABEL_1544;
  v515->m_Items[294] = (DataMasterBase_o *)v1991;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[294], (int32_t)v1991, v1992, v1993);
  v1996 = (EventFatigueRecoveryMaster_o *)sub_1B64314(EventFatigueRecoveryMaster_TypeInfo, v1994, v1995);
  EventFatigueRecoveryMaster___ctor(v1996, 0LL);
  if ( v1996 )
  {
    v519 = sub_1B64204(v1996, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x127 )
    goto LABEL_1544;
  v515->m_Items[295] = (DataMasterBase_o *)v1996;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[295], (int32_t)v1996, v1997, v1998);
  v2001 = (EventBoostItemUsedMaster_o *)sub_1B64314(EventBoostItemUsedMaster_TypeInfo, v1999, v2000);
  EventBoostItemUsedMaster___ctor(v2001, 0LL);
  if ( v2001 )
  {
    v519 = sub_1B64204(v2001, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x128 )
    goto LABEL_1544;
  v515->m_Items[296] = (DataMasterBase_o *)v2001;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[296], (int32_t)v2001, v2002, v2003);
  v2006 = (StatusEffectPosOverwriteMaster_o *)sub_1B64314(StatusEffectPosOverwriteMaster_TypeInfo, v2004, v2005);
  StatusEffectPosOverwriteMaster___ctor(v2006, 0LL);
  if ( v2006 )
  {
    v519 = sub_1B64204(v2006, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x129 )
    goto LABEL_1544;
  v515->m_Items[297] = (DataMasterBase_o *)v2006;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[297], (int32_t)v2006, v2007, v2008);
  v2011 = (QuestPhaseDetailAddMaster_o *)sub_1B64314(QuestPhaseDetailAddMaster_TypeInfo, v2009, v2010);
  QuestPhaseDetailAddMaster___ctor(v2011, 0LL);
  if ( v2011 )
  {
    v519 = sub_1B64204(v2011, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12A )
    goto LABEL_1544;
  v515->m_Items[298] = (DataMasterBase_o *)v2011;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[298], (int32_t)v2011, v2012, v2013);
  v2016 = (VoiceClosedMessageMaster_o *)sub_1B64314(VoiceClosedMessageMaster_TypeInfo, v2014, v2015);
  VoiceClosedMessageMaster___ctor(v2016, 0LL);
  if ( v2016 )
  {
    v519 = sub_1B64204(v2016, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12B )
    goto LABEL_1544;
  v515->m_Items[299] = (DataMasterBase_o *)v2016;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[299], (int32_t)v2016, v2017, v2018);
  v2021 = (ReprintStageMaster_o *)sub_1B64314(ReprintStageMaster_TypeInfo, v2019, v2020);
  ReprintStageMaster___ctor(v2021, 0LL);
  if ( v2021 )
  {
    v519 = sub_1B64204(v2021, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12C )
    goto LABEL_1544;
  v515->m_Items[300] = (DataMasterBase_o *)v2021;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[300], (int32_t)v2021, v2022, v2023);
  v2026 = (UserCombineExpMaster_o *)sub_1B64314(UserCombineExpMaster_TypeInfo, v2024, v2025);
  UserCombineExpMaster___ctor(v2026, 0LL);
  if ( v2026 )
  {
    v519 = sub_1B64204(v2026, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12D )
    goto LABEL_1544;
  v515->m_Items[301] = (DataMasterBase_o *)v2026;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[301], (int32_t)v2026, v2027, v2028);
  v2031 = (EventBoardGameCellMaster_o *)sub_1B64314(EventBoardGameCellMaster_TypeInfo, v2029, v2030);
  EventBoardGameCellMaster___ctor(v2031, 0LL);
  if ( v2031 )
  {
    v519 = sub_1B64204(v2031, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12E )
    goto LABEL_1544;
  v515->m_Items[302] = (DataMasterBase_o *)v2031;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[302], (int32_t)v2031, v2032, v2033);
  v2036 = (EventBoardGameTokenMaster_o *)sub_1B64314(EventBoardGameTokenMaster_TypeInfo, v2034, v2035);
  EventBoardGameTokenMaster___ctor(v2036, 0LL);
  if ( v2036 )
  {
    v519 = sub_1B64204(v2036, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x12F )
    goto LABEL_1544;
  v515->m_Items[303] = (DataMasterBase_o *)v2036;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[303], (int32_t)v2036, v2037, v2038);
  v2041 = (EventBoardGameTokenRewardMaster_o *)sub_1B64314(EventBoardGameTokenRewardMaster_TypeInfo, v2039, v2040);
  EventBoardGameTokenRewardMaster___ctor(v2041, 0LL);
  if ( v2041 )
  {
    v519 = sub_1B64204(v2041, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x130 )
    goto LABEL_1544;
  v515->m_Items[304] = (DataMasterBase_o *)v2041;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[304], (int32_t)v2041, v2042, v2043);
  v2046 = (UserEventBoardGameTokenMaster_o *)sub_1B64314(UserEventBoardGameTokenMaster_TypeInfo, v2044, v2045);
  UserEventBoardGameTokenMaster___ctor(v2046, 0LL);
  if ( v2046 )
  {
    v519 = sub_1B64204(v2046, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x131 )
    goto LABEL_1544;
  v515->m_Items[305] = (DataMasterBase_o *)v2046;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[305], (int32_t)v2046, v2047, v2048);
  v2051 = (ServantAnimationOverwriteMaster_o *)sub_1B64314(ServantAnimationOverwriteMaster_TypeInfo, v2049, v2050);
  ServantAnimationOverwriteMaster___ctor(v2051, 0LL);
  if ( v2051 )
  {
    v519 = sub_1B64204(v2051, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x132 )
    goto LABEL_1544;
  v515->m_Items[306] = (DataMasterBase_o *)v2051;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[306], (int32_t)v2051, v2052, v2053);
  v2056 = (OpeningMovieMaster_o *)sub_1B64314(OpeningMovieMaster_TypeInfo, v2054, v2055);
  OpeningMovieMaster___ctor(v2056, 0LL);
  if ( v2056 )
  {
    v519 = sub_1B64204(v2056, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x133 )
    goto LABEL_1544;
  v515->m_Items[307] = (DataMasterBase_o *)v2056;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[307], (int32_t)v2056, v2057, v2058);
  v2061 = (ServantLimitSpoilerProtectionMaster_o *)sub_1B64314(
                                                     ServantLimitSpoilerProtectionMaster_TypeInfo,
                                                     v2059,
                                                     v2060);
  ServantLimitSpoilerProtectionMaster___ctor(v2061, 0LL);
  if ( v2061 )
  {
    v519 = sub_1B64204(v2061, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x134 )
    goto LABEL_1544;
  v515->m_Items[308] = (DataMasterBase_o *)v2061;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[308], (int32_t)v2061, v2062, v2063);
  v2066 = (PickupUserFollowerMaster_o *)sub_1B64314(PickupUserFollowerMaster_TypeInfo, v2064, v2065);
  PickupUserFollowerMaster___ctor(v2066, 0LL);
  if ( v2066 )
  {
    v519 = sub_1B64204(v2066, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x135 )
    goto LABEL_1544;
  v515->m_Items[309] = (DataMasterBase_o *)v2066;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[309], (int32_t)v2066, v2067, v2068);
  v2071 = (ServantCollectionMaster_o *)sub_1B64314(ServantCollectionMaster_TypeInfo, v2069, v2070);
  ServantCollectionMaster___ctor(v2071, 0LL);
  if ( v2071 )
  {
    v519 = sub_1B64204(v2071, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x136 )
    goto LABEL_1544;
  v515->m_Items[310] = (DataMasterBase_o *)v2071;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[310], (int32_t)v2071, v2072, v2073);
  v2076 = (GachaBehaviorMaster_o *)sub_1B64314(GachaBehaviorMaster_TypeInfo, v2074, v2075);
  GachaBehaviorMaster___ctor(v2076, 0LL);
  if ( v2076 )
  {
    v519 = sub_1B64204(v2076, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x137 )
    goto LABEL_1544;
  v515->m_Items[311] = (DataMasterBase_o *)v2076;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[311], (int32_t)v2076, v2077, v2078);
  v2081 = (EventQuestCooltimeMaster_o *)sub_1B64314(EventQuestCooltimeMaster_TypeInfo, v2079, v2080);
  EventQuestCooltimeMaster___ctor(v2081, 0LL);
  if ( v2081 )
  {
    v519 = sub_1B64204(v2081, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x138 )
    goto LABEL_1544;
  v515->m_Items[312] = (DataMasterBase_o *)v2081;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[312], (int32_t)v2081, v2082, v2083);
  v2086 = (UserEventQuestCooltimeMaster_o *)sub_1B64314(UserEventQuestCooltimeMaster_TypeInfo, v2084, v2085);
  UserEventQuestCooltimeMaster___ctor(v2086, 0LL);
  if ( v2086 )
  {
    v519 = sub_1B64204(v2086, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x139 )
    goto LABEL_1544;
  v515->m_Items[313] = (DataMasterBase_o *)v2086;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[313], (int32_t)v2086, v2087, v2088);
  v2091 = (BoostMaster_o *)sub_1B64314(BoostMaster_TypeInfo, v2089, v2090);
  BoostMaster___ctor(v2091, 0LL);
  if ( v2091 )
  {
    v519 = sub_1B64204(v2091, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13A )
    goto LABEL_1544;
  v515->m_Items[314] = (DataMasterBase_o *)v2091;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[314], (int32_t)v2091, v2092, v2093);
  v2096 = (WarBoardMaster_o *)sub_1B64314(WarBoardMaster_TypeInfo, v2094, v2095);
  WarBoardMaster___ctor(v2096, 0LL);
  if ( v2096 )
  {
    v519 = sub_1B64204(v2096, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13B )
    goto LABEL_1544;
  v515->m_Items[315] = (DataMasterBase_o *)v2096;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[315], (int32_t)v2096, v2097, v2098);
  v2101 = (WarBoardSquareMaster_o *)sub_1B64314(WarBoardSquareMaster_TypeInfo, v2099, v2100);
  WarBoardSquareMaster___ctor(v2101, 0LL);
  if ( v2101 )
  {
    v519 = sub_1B64204(v2101, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13C )
    goto LABEL_1544;
  v515->m_Items[316] = (DataMasterBase_o *)v2101;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[316], (int32_t)v2101, v2102, v2103);
  v2106 = (WarBoardRoadMaster_o *)sub_1B64314(WarBoardRoadMaster_TypeInfo, v2104, v2105);
  WarBoardRoadMaster___ctor(v2106, 0LL);
  if ( v2106 )
  {
    v519 = sub_1B64204(v2106, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13D )
    goto LABEL_1544;
  v515->m_Items[317] = (DataMasterBase_o *)v2106;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[317], (int32_t)v2106, v2107, v2108);
  v2111 = (WarBoardStageMaster_o *)sub_1B64314(WarBoardStageMaster_TypeInfo, v2109, v2110);
  WarBoardStageMaster___ctor(v2111, 0LL);
  if ( v2111 )
  {
    v519 = sub_1B64204(v2111, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13E )
    goto LABEL_1544;
  v515->m_Items[318] = (DataMasterBase_o *)v2111;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[318], (int32_t)v2111, v2112, v2113);
  v2116 = (WarBoardActionPointMaster_o *)sub_1B64314(WarBoardActionPointMaster_TypeInfo, v2114, v2115);
  WarBoardActionPointMaster___ctor(v2116, 0LL);
  if ( v2116 )
  {
    v519 = sub_1B64204(v2116, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x13F )
    goto LABEL_1544;
  v515->m_Items[319] = (DataMasterBase_o *)v2116;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[319], (int32_t)v2116, v2117, v2118);
  v2121 = (WarBoardActionTrendMaster_o *)sub_1B64314(WarBoardActionTrendMaster_TypeInfo, v2119, v2120);
  WarBoardActionTrendMaster___ctor(v2121, 0LL);
  if ( v2121 )
  {
    v519 = sub_1B64204(v2121, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x140 )
    goto LABEL_1544;
  v515->m_Items[320] = (DataMasterBase_o *)v2121;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[320], (int32_t)v2121, v2122, v2123);
  v2126 = (WarBoardTacticalTrendMaster_o *)sub_1B64314(WarBoardTacticalTrendMaster_TypeInfo, v2124, v2125);
  WarBoardTacticalTrendMaster___ctor(v2126, 0LL);
  if ( v2126 )
  {
    v519 = sub_1B64204(v2126, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x141 )
    goto LABEL_1544;
  v515->m_Items[321] = (DataMasterBase_o *)v2126;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[321], (int32_t)v2126, v2127, v2128);
  v2131 = (WarBoardStageLayoutMaster_o *)sub_1B64314(WarBoardStageLayoutMaster_TypeInfo, v2129, v2130);
  WarBoardStageLayoutMaster___ctor(v2131, 0LL);
  if ( v2131 )
  {
    v519 = sub_1B64204(v2131, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x142 )
    goto LABEL_1544;
  v515->m_Items[322] = (DataMasterBase_o *)v2131;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[322], (int32_t)v2131, v2132, v2133);
  v2136 = (WarBoardStageNpcMaster_o *)sub_1B64314(WarBoardStageNpcMaster_TypeInfo, v2134, v2135);
  WarBoardStageNpcMaster___ctor(v2136, 0LL);
  if ( v2136 )
  {
    v519 = sub_1B64204(v2136, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x143 )
    goto LABEL_1544;
  v515->m_Items[323] = (DataMasterBase_o *)v2136;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[323], (int32_t)v2136, v2137, v2138);
  v2141 = (WarBoardStageWallMaster_o *)sub_1B64314(WarBoardStageWallMaster_TypeInfo, v2139, v2140);
  WarBoardStageWallMaster___ctor(v2141, 0LL);
  if ( v2141 )
  {
    v519 = sub_1B64204(v2141, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x144 )
    goto LABEL_1544;
  v515->m_Items[324] = (DataMasterBase_o *)v2141;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[324], (int32_t)v2141, v2142, v2143);
  v2146 = (WarBoardAIMaster_o *)sub_1B64314(WarBoardAIMaster_TypeInfo, v2144, v2145);
  WarBoardAIMaster___ctor(v2146, 0LL);
  if ( v2146 )
  {
    v519 = sub_1B64204(v2146, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x145 )
    goto LABEL_1544;
  v515->m_Items[325] = (DataMasterBase_o *)v2146;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[325], (int32_t)v2146, v2147, v2148);
  v2151 = (WarBoardRatingBaseMaster_o *)sub_1B64314(WarBoardRatingBaseMaster_TypeInfo, v2149, v2150);
  WarBoardRatingBaseMaster___ctor(v2151, 0LL);
  if ( v2151 )
  {
    v519 = sub_1B64204(v2151, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x146 )
    goto LABEL_1544;
  v515->m_Items[326] = (DataMasterBase_o *)v2151;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[326], (int32_t)v2151, v2152, v2153);
  v2156 = (WarBoardRatingOffsetMaster_o *)sub_1B64314(WarBoardRatingOffsetMaster_TypeInfo, v2154, v2155);
  WarBoardRatingOffsetMaster___ctor(v2156, 0LL);
  if ( v2156 )
  {
    v519 = sub_1B64204(v2156, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x147 )
    goto LABEL_1544;
  v515->m_Items[327] = (DataMasterBase_o *)v2156;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[327], (int32_t)v2156, v2157, v2158);
  v2161 = (WarBoardItemMaster_o *)sub_1B64314(WarBoardItemMaster_TypeInfo, v2159, v2160);
  WarBoardItemMaster___ctor(v2161, 0LL);
  if ( v2161 )
  {
    v519 = sub_1B64204(v2161, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x148 )
    goto LABEL_1544;
  v515->m_Items[328] = (DataMasterBase_o *)v2161;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[328], (int32_t)v2161, v2162, v2163);
  v2166 = (WarBoardTreasureMaster_o *)sub_1B64314(WarBoardTreasureMaster_TypeInfo, v2164, v2165);
  WarBoardTreasureMaster___ctor(v2166, 0LL);
  if ( v2166 )
  {
    v519 = sub_1B64204(v2166, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x149 )
    goto LABEL_1544;
  v515->m_Items[329] = (DataMasterBase_o *)v2166;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[329], (int32_t)v2166, v2167, v2168);
  v2171 = (WarBoardQuestMaster_o *)sub_1B64314(WarBoardQuestMaster_TypeInfo, v2169, v2170);
  WarBoardQuestMaster___ctor(v2171, 0LL);
  if ( v2171 )
  {
    v519 = sub_1B64204(v2171, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14A )
    goto LABEL_1544;
  v515->m_Items[330] = (DataMasterBase_o *)v2171;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[330], (int32_t)v2171, v2172, v2173);
  v2176 = (WarBoardDataMaster_o *)sub_1B64314(WarBoardDataMaster_TypeInfo, v2174, v2175);
  WarBoardDataMaster___ctor(v2176, 0LL);
  if ( v2176 )
  {
    v519 = sub_1B64204(v2176, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14B )
    goto LABEL_1544;
  v515->m_Items[331] = (DataMasterBase_o *)v2176;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[331], (int32_t)v2176, v2177, v2178);
  v2181 = (WarBoardIndividualityClassMaster_o *)sub_1B64314(WarBoardIndividualityClassMaster_TypeInfo, v2179, v2180);
  WarBoardIndividualityClassMaster___ctor(v2181, 0LL);
  if ( v2181 )
  {
    v519 = sub_1B64204(v2181, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14C )
    goto LABEL_1544;
  v515->m_Items[332] = (DataMasterBase_o *)v2181;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[332], (int32_t)v2181, v2182, v2183);
  v2186 = (WarBoardActionTrendConditionMaster_o *)sub_1B64314(WarBoardActionTrendConditionMaster_TypeInfo, v2184, v2185);
  WarBoardActionTrendConditionMaster___ctor(v2186, 0LL);
  if ( v2186 )
  {
    v519 = sub_1B64204(v2186, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14D )
    goto LABEL_1544;
  v515->m_Items[333] = (DataMasterBase_o *)v2186;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[333], (int32_t)v2186, v2187, v2188);
  v2191 = (WarBoardActionPointClassMaster_o *)sub_1B64314(WarBoardActionPointClassMaster_TypeInfo, v2189, v2190);
  WarBoardActionPointClassMaster___ctor(v2191, 0LL);
  if ( v2191 )
  {
    v519 = sub_1B64204(v2191, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14E )
    goto LABEL_1544;
  v515->m_Items[334] = (DataMasterBase_o *)v2191;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[334], (int32_t)v2191, v2192, v2193);
  v2196 = (EventPanelMapMaster_o *)sub_1B64314(EventPanelMapMaster_TypeInfo, v2194, v2195);
  EventPanelMapMaster___ctor(v2196, 0LL);
  if ( v2196 )
  {
    v519 = sub_1B64204(v2196, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x14F )
    goto LABEL_1544;
  v515->m_Items[335] = (DataMasterBase_o *)v2196;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[335], (int32_t)v2196, v2197, v2198);
  v2201 = (EventPanelMapDetailMaster_o *)sub_1B64314(EventPanelMapDetailMaster_TypeInfo, v2199, v2200);
  EventPanelMapDetailMaster___ctor(v2201, 0LL);
  if ( v2201 )
  {
    v519 = sub_1B64204(v2201, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x150 )
    goto LABEL_1544;
  v515->m_Items[336] = (DataMasterBase_o *)v2201;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[336], (int32_t)v2201, v2202, v2203);
  v2206 = (EventPanelSpotMaster_o *)sub_1B64314(EventPanelSpotMaster_TypeInfo, v2204, v2205);
  EventPanelSpotMaster___ctor(v2206, 0LL);
  if ( v2206 )
  {
    v519 = sub_1B64204(v2206, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x151 )
    goto LABEL_1544;
  v515->m_Items[337] = (DataMasterBase_o *)v2206;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[337], (int32_t)v2206, v2207, v2208);
  v2211 = (EventPanelScanMaster_o *)sub_1B64314(EventPanelScanMaster_TypeInfo, v2209, v2210);
  EventPanelScanMaster___ctor(v2211, 0LL);
  if ( v2211 )
  {
    v519 = sub_1B64204(v2211, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x152 )
    goto LABEL_1544;
  v515->m_Items[338] = (DataMasterBase_o *)v2211;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[338], (int32_t)v2211, v2212, v2213);
  v2216 = (CommonConsumeMaster_o *)sub_1B64314(CommonConsumeMaster_TypeInfo, v2214, v2215);
  CommonConsumeMaster___ctor(v2216, 0LL);
  if ( v2216 )
  {
    v519 = sub_1B64204(v2216, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x153 )
    goto LABEL_1544;
  v515->m_Items[339] = (DataMasterBase_o *)v2216;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[339], (int32_t)v2216, v2217, v2218);
  v2221 = (UserEventMapMaster_o *)sub_1B64314(UserEventMapMaster_TypeInfo, v2219, v2220);
  UserEventMapMaster___ctor(v2221, 0LL);
  if ( v2221 )
  {
    v519 = sub_1B64204(v2221, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x154 )
    goto LABEL_1544;
  v515->m_Items[340] = (DataMasterBase_o *)v2221;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[340], (int32_t)v2221, v2222, v2223);
  v2226 = (UserEventSpotMaster_o *)sub_1B64314(UserEventSpotMaster_TypeInfo, v2224, v2225);
  UserEventSpotMaster___ctor(v2226, 0LL);
  if ( v2226 )
  {
    v519 = sub_1B64204(v2226, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x155 )
    goto LABEL_1544;
  v515->m_Items[341] = (DataMasterBase_o *)v2226;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[341], (int32_t)v2226, v2227, v2228);
  v2231 = (WarGroupMaster_o *)sub_1B64314(WarGroupMaster_TypeInfo, v2229, v2230);
  WarGroupMaster___ctor(v2231, 0LL);
  if ( v2231 )
  {
    v519 = sub_1B64204(v2231, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x156 )
    goto LABEL_1544;
  v515->m_Items[342] = (DataMasterBase_o *)v2231;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[342], (int32_t)v2231, v2232, v2233);
  v2236 = (ServantLimitImageMaster_o *)sub_1B64314(ServantLimitImageMaster_TypeInfo, v2234, v2235);
  ServantLimitImageMaster___ctor(v2236, 0LL);
  if ( v2236 )
  {
    v519 = sub_1B64204(v2236, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x157 )
    goto LABEL_1544;
  v515->m_Items[343] = (DataMasterBase_o *)v2236;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[343], (int32_t)v2236, v2237, v2238);
  v2241 = (FriendshipQuestDialogInfoMaster_o *)sub_1B64314(FriendshipQuestDialogInfoMaster_TypeInfo, v2239, v2240);
  FriendshipQuestDialogInfoMaster___ctor(v2241, 0LL);
  if ( v2241 )
  {
    v519 = sub_1B64204(v2241, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x158 )
    goto LABEL_1544;
  v515->m_Items[344] = (DataMasterBase_o *)v2241;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[344], (int32_t)v2241, v2242, v2243);
  v2246 = (QuestRestrictionInfoMaster_o *)sub_1B64314(QuestRestrictionInfoMaster_TypeInfo, v2244, v2245);
  QuestRestrictionInfoMaster___ctor(v2246, 0LL);
  if ( v2246 )
  {
    v519 = sub_1B64204(v2246, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x159 )
    goto LABEL_1544;
  v515->m_Items[345] = (DataMasterBase_o *)v2246;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[345], (int32_t)v2246, v2247, v2248);
  v2251 = (AssistMaster_o *)sub_1B64314(AssistMaster_TypeInfo, v2249, v2250);
  AssistMaster___ctor(v2251, 0LL);
  if ( v2251 )
  {
    v519 = sub_1B64204(v2251, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15A )
    goto LABEL_1544;
  v515->m_Items[346] = (DataMasterBase_o *)v2251;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[346], (int32_t)v2251, v2252, v2253);
  v2256 = (WarBoardEffectMaster_o *)sub_1B64314(WarBoardEffectMaster_TypeInfo, v2254, v2255);
  WarBoardEffectMaster___ctor(v2256, 0LL);
  if ( v2256 )
  {
    v519 = sub_1B64204(v2256, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15B )
    goto LABEL_1544;
  v515->m_Items[347] = (DataMasterBase_o *)v2256;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[347], (int32_t)v2256, v2257, v2258);
  v2261 = (WarBoardOnboardSkillMaster_o *)sub_1B64314(WarBoardOnboardSkillMaster_TypeInfo, v2259, v2260);
  WarBoardOnboardSkillMaster___ctor(v2261, 0LL);
  if ( v2261 )
  {
    v519 = sub_1B64204(v2261, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15C )
    goto LABEL_1544;
  v515->m_Items[348] = (DataMasterBase_o *)v2261;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[348], (int32_t)v2261, v2262, v2263);
  v2266 = (BeforeBirthDayMaster_o *)sub_1B64314(BeforeBirthDayMaster_TypeInfo, v2264, v2265);
  BeforeBirthDayMaster___ctor(v2266, 0LL);
  if ( v2266 )
  {
    v519 = sub_1B64204(v2266, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15D )
    goto LABEL_1544;
  v515->m_Items[349] = (DataMasterBase_o *)v2266;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[349], (int32_t)v2266, v2267, v2268);
  v2271 = (LoginQuestMaster_o *)sub_1B64314(LoginQuestMaster_TypeInfo, v2269, v2270);
  LoginQuestMaster___ctor(v2271, 0LL);
  if ( v2271 )
  {
    v519 = sub_1B64204(v2271, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15E )
    goto LABEL_1544;
  v515->m_Items[350] = (DataMasterBase_o *)v2271;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[350], (int32_t)v2271, v2272, v2273);
  v2276 = (EventCombineCostumeMaster_o *)sub_1B64314(EventCombineCostumeMaster_TypeInfo, v2274, v2275);
  EventCombineCostumeMaster___ctor(v2276, 0LL);
  if ( v2276 )
  {
    v519 = sub_1B64204(v2276, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x15F )
    goto LABEL_1544;
  v515->m_Items[351] = (DataMasterBase_o *)v2276;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[351], (int32_t)v2276, v2277, v2278);
  v2281 = (WarBoardStagePieceDetailMaster_o *)sub_1B64314(WarBoardStagePieceDetailMaster_TypeInfo, v2279, v2280);
  WarBoardStagePieceDetailMaster___ctor(v2281, 0LL);
  if ( v2281 )
  {
    v519 = sub_1B64204(v2281, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x160 )
    goto LABEL_1544;
  v515->m_Items[352] = (DataMasterBase_o *)v2281;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[352], (int32_t)v2281, v2282, v2283);
  v2286 = (ServantTreasureDeviceAddMaster_o *)sub_1B64314(ServantTreasureDeviceAddMaster_TypeInfo, v2284, v2285);
  ServantTreasureDeviceAddMaster___ctor(v2286, 0LL);
  if ( v2286 )
  {
    v519 = sub_1B64204(v2286, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x161 )
    goto LABEL_1544;
  v515->m_Items[353] = (DataMasterBase_o *)v2286;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[353], (int32_t)v2286, v2287, v2288);
  v2291 = (SkillAddMaster_o *)sub_1B64314(SkillAddMaster_TypeInfo, v2289, v2290);
  SkillAddMaster___ctor(v2291, 0LL);
  if ( v2291 )
  {
    v519 = sub_1B64204(v2291, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x162 )
    goto LABEL_1544;
  v515->m_Items[354] = (DataMasterBase_o *)v2291;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[354], (int32_t)v2291, v2292, v2293);
  v2296 = (ServantLvDetailMaster_o *)sub_1B64314(ServantLvDetailMaster_TypeInfo, v2294, v2295);
  ServantLvDetailMaster___ctor(v2296, 0LL);
  if ( v2296 )
  {
    v519 = sub_1B64204(v2296, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x163 )
    goto LABEL_1544;
  v515->m_Items[355] = (DataMasterBase_o *)v2296;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[355], (int32_t)v2296, v2297, v2298);
  v2301 = (GachaAppendMaster_o *)sub_1B64314(GachaAppendMaster_TypeInfo, v2299, v2300);
  GachaAppendMaster___ctor(v2301, 0LL);
  if ( v2301 )
  {
    v519 = sub_1B64204(v2301, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x164 )
    goto LABEL_1544;
  v515->m_Items[356] = (DataMasterBase_o *)v2301;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[356], (int32_t)v2301, v2302, v2303);
  v2306 = (UserGachaDrawLogMaster_o *)sub_1B64314(UserGachaDrawLogMaster_TypeInfo, v2304, v2305);
  UserGachaDrawLogMaster___ctor(v2306, 0LL);
  if ( v2306 )
  {
    v519 = sub_1B64204(v2306, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x165 )
    goto LABEL_1544;
  v515->m_Items[357] = (DataMasterBase_o *)v2306;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[357], (int32_t)v2306, v2307, v2308);
  v2311 = (ServantAppendPassiveSkillMaster_o *)sub_1B64314(ServantAppendPassiveSkillMaster_TypeInfo, v2309, v2310);
  ServantAppendPassiveSkillMaster___ctor(v2311, 0LL);
  if ( v2311 )
  {
    v519 = sub_1B64204(v2311, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x166 )
    goto LABEL_1544;
  v515->m_Items[358] = (DataMasterBase_o *)v2311;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[358], (int32_t)v2311, v2312, v2313);
  v2316 = (UserServantAppendPassiveSkillMaster_o *)sub_1B64314(
                                                     UserServantAppendPassiveSkillMaster_TypeInfo,
                                                     v2314,
                                                     v2315);
  UserServantAppendPassiveSkillMaster___ctor(v2316, 0LL);
  if ( v2316 )
  {
    v519 = sub_1B64204(v2316, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x167 )
    goto LABEL_1544;
  v515->m_Items[359] = (DataMasterBase_o *)v2316;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[359], (int32_t)v2316, v2317, v2318);
  v2321 = (UserServantAppendPassiveSkillLvMaster_o *)sub_1B64314(
                                                       UserServantAppendPassiveSkillLvMaster_TypeInfo,
                                                       v2319,
                                                       v2320);
  UserServantAppendPassiveSkillLvMaster___ctor(v2321, 0LL);
  if ( v2321 )
  {
    v519 = sub_1B64204(v2321, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x168 )
    goto LABEL_1544;
  v515->m_Items[360] = (DataMasterBase_o *)v2321;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[360], (int32_t)v2321, v2322, v2323);
  v2326 = (SvtAppendPassiveSkillUnlockMaster_o *)sub_1B64314(SvtAppendPassiveSkillUnlockMaster_TypeInfo, v2324, v2325);
  SvtAppendPassiveSkillUnlockMaster___ctor(v2326, 0LL);
  if ( v2326 )
  {
    v519 = sub_1B64204(v2326, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x169 )
    goto LABEL_1544;
  v515->m_Items[361] = (DataMasterBase_o *)v2326;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[361], (int32_t)v2326, v2327, v2328);
  v2331 = (CombineAppendPassiveSkillMaster_o *)sub_1B64314(CombineAppendPassiveSkillMaster_TypeInfo, v2329, v2330);
  CombineAppendPassiveSkillMaster___ctor(v2331, 0LL);
  if ( v2331 )
  {
    v519 = sub_1B64204(v2331, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16A )
    goto LABEL_1544;
  v515->m_Items[362] = (DataMasterBase_o *)v2331;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[362], (int32_t)v2331, v2332, v2333);
  v2336 = (SvtCoinMaster_o *)sub_1B64314(SvtCoinMaster_TypeInfo, v2334, v2335);
  SvtCoinMaster___ctor(v2336, 0LL);
  if ( v2336 )
  {
    v519 = sub_1B64204(v2336, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16B )
    goto LABEL_1544;
  v515->m_Items[363] = (DataMasterBase_o *)v2336;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[363], (int32_t)v2336, v2337, v2338);
  v2341 = (UserSvtCoinMaster_o *)sub_1B64314(UserSvtCoinMaster_TypeInfo, v2339, v2340);
  UserSvtCoinMaster___ctor(v2341, 0LL);
  if ( v2341 )
  {
    v519 = sub_1B64204(v2341, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16C )
    goto LABEL_1544;
  v515->m_Items[364] = (DataMasterBase_o *)v2341;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[364], (int32_t)v2341, v2342, v2343);
  v2346 = (ServantAddMaster_o *)sub_1B64314(ServantAddMaster_TypeInfo, v2344, v2345);
  ServantAddMaster___ctor(v2346, 0LL);
  if ( v2346 )
  {
    v519 = sub_1B64204(v2346, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16D )
    goto LABEL_1544;
  v515->m_Items[365] = (DataMasterBase_o *)v2346;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[365], (int32_t)v2346, v2347, v2348);
  v2351 = (TreasureBoxMaster_o *)sub_1B64314(TreasureBoxMaster_TypeInfo, v2349, v2350);
  TreasureBoxMaster___ctor(v2351, 0LL);
  if ( v2351 )
  {
    v519 = sub_1B64204(v2351, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16E )
    goto LABEL_1544;
  v515->m_Items[366] = (DataMasterBase_o *)v2351;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[366], (int32_t)v2351, v2352, v2353);
  v2356 = (TreasureBoxGiftMaster_o *)sub_1B64314(TreasureBoxGiftMaster_TypeInfo, v2354, v2355);
  TreasureBoxGiftMaster___ctor(v2356, 0LL);
  if ( v2356 )
  {
    v519 = sub_1B64204(v2356, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x16F )
    goto LABEL_1544;
  v515->m_Items[367] = (DataMasterBase_o *)v2356;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[367], (int32_t)v2356, v2357, v2358);
  v2361 = (TreasureBoxTalkMaster_o *)sub_1B64314(TreasureBoxTalkMaster_TypeInfo, v2359, v2360);
  TreasureBoxTalkMaster___ctor(v2361, 0LL);
  if ( v2361 )
  {
    v519 = sub_1B64204(v2361, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x170 )
    goto LABEL_1544;
  v515->m_Items[368] = (DataMasterBase_o *)v2361;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[368], (int32_t)v2361, v2362, v2363);
  v2366 = (UserEventExpeditionMaster_o *)sub_1B64314(UserEventExpeditionMaster_TypeInfo, v2364, v2365);
  UserEventExpeditionMaster___ctor(v2366, 0LL);
  if ( v2366 )
  {
    v519 = sub_1B64204(v2366, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x171 )
    goto LABEL_1544;
  v515->m_Items[369] = (DataMasterBase_o *)v2366;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[369], (int32_t)v2366, v2367, v2368);
  v2371 = (EventExpeditionMaster_o *)sub_1B64314(EventExpeditionMaster_TypeInfo, v2369, v2370);
  EventExpeditionMaster___ctor(v2371, 0LL);
  if ( v2371 )
  {
    v519 = sub_1B64204(v2371, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x172 )
    goto LABEL_1544;
  v515->m_Items[370] = (DataMasterBase_o *)v2371;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[370], (int32_t)v2371, v2372, v2373);
  v2376 = (EventExpeditionPieceMaster_o *)sub_1B64314(EventExpeditionPieceMaster_TypeInfo, v2374, v2375);
  EventExpeditionPieceMaster___ctor(v2376, 0LL);
  if ( v2376 )
  {
    v519 = sub_1B64204(v2376, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x173 )
    goto LABEL_1544;
  v515->m_Items[371] = (DataMasterBase_o *)v2376;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[371], (int32_t)v2376, v2377, v2378);
  v2381 = (EventRecipeMaster_o *)sub_1B64314(EventRecipeMaster_TypeInfo, v2379, v2380);
  EventRecipeMaster___ctor(v2381, 0LL);
  if ( v2381 )
  {
    v519 = sub_1B64204(v2381, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x174 )
    goto LABEL_1544;
  v515->m_Items[372] = (DataMasterBase_o *)v2381;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[372], (int32_t)v2381, v2382, v2383);
  v2386 = (EventRecipeGiftMaster_o *)sub_1B64314(EventRecipeGiftMaster_TypeInfo, v2384, v2385);
  EventRecipeGiftMaster___ctor(v2386, 0LL);
  if ( v2386 )
  {
    v519 = sub_1B64204(v2386, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x175 )
    goto LABEL_1544;
  v515->m_Items[373] = (DataMasterBase_o *)v2386;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[373], (int32_t)v2386, v2387, v2388);
  v2391 = (UserEventFortificationMaster_o *)sub_1B64314(UserEventFortificationMaster_TypeInfo, v2389, v2390);
  UserEventFortificationMaster___ctor(v2391, 0LL);
  if ( v2391 )
  {
    v519 = sub_1B64204(v2391, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x176 )
    goto LABEL_1544;
  v515->m_Items[374] = (DataMasterBase_o *)v2391;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[374], (int32_t)v2391, v2392, v2393);
  v2396 = (EventFortificationMaster_o *)sub_1B64314(EventFortificationMaster_TypeInfo, v2394, v2395);
  EventFortificationMaster___ctor(v2396, 0LL);
  if ( v2396 )
  {
    v519 = sub_1B64204(v2396, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x177 )
    goto LABEL_1544;
  v515->m_Items[375] = (DataMasterBase_o *)v2396;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[375], (int32_t)v2396, v2397, v2398);
  v2401 = (EventFortificationDetailMaster_o *)sub_1B64314(EventFortificationDetailMaster_TypeInfo, v2399, v2400);
  EventFortificationDetailMaster___ctor(v2401, 0LL);
  if ( v2401 )
  {
    v519 = sub_1B64204(v2401, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x178 )
    goto LABEL_1544;
  v515->m_Items[376] = (DataMasterBase_o *)v2401;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[376], (int32_t)v2401, v2402, v2403);
  v2406 = (EventFortificationSvtMaster_o *)sub_1B64314(EventFortificationSvtMaster_TypeInfo, v2404, v2405);
  EventFortificationSvtMaster___ctor(v2406, 0LL);
  if ( v2406 )
  {
    v519 = sub_1B64204(v2406, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x179 )
    goto LABEL_1544;
  v515->m_Items[377] = (DataMasterBase_o *)v2406;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[377], (int32_t)v2406, v2407, v2408);
  v2411 = (UserServantVoicePlayedMaster_o *)sub_1B64314(UserServantVoicePlayedMaster_TypeInfo, v2409, v2410);
  UserServantVoicePlayedMaster___ctor(v2411, 0LL);
  if ( v2411 )
  {
    v519 = sub_1B64204(v2411, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17A )
    goto LABEL_1544;
  v515->m_Items[378] = (DataMasterBase_o *)v2411;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[378], (int32_t)v2411, v2412, v2413);
  v2416 = (UpdateProfileDialogInfoMaster_o *)sub_1B64314(UpdateProfileDialogInfoMaster_TypeInfo, v2414, v2415);
  UpdateProfileDialogInfoMaster___ctor(v2416, 0LL);
  if ( v2416 )
  {
    v519 = sub_1B64204(v2416, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17B )
    goto LABEL_1544;
  v515->m_Items[379] = (DataMasterBase_o *)v2416;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[379], (int32_t)v2416, v2417, v2418);
  v2421 = (SvtMaterialTdMaster_o *)sub_1B64314(SvtMaterialTdMaster_TypeInfo, v2419, v2420);
  SvtMaterialTdMaster___ctor(v2421, 0LL);
  if ( v2421 )
  {
    v519 = sub_1B64204(v2421, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17C )
    goto LABEL_1544;
  v515->m_Items[380] = (DataMasterBase_o *)v2421;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[380], (int32_t)v2421, v2422, v2423);
  v2426 = (BattleMasterImageMaster_o *)sub_1B64314(BattleMasterImageMaster_TypeInfo, v2424, v2425);
  BattleMasterImageMaster___ctor(v2426, 0LL);
  if ( v2426 )
  {
    v519 = sub_1B64204(v2426, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17D )
    goto LABEL_1544;
  v515->m_Items[381] = (DataMasterBase_o *)v2426;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[381], (int32_t)v2426, v2427, v2428);
  v2431 = (UserFriendPointGachaFreeDrawCampaignLogMaster_o *)sub_1B64314(
                                                               UserFriendPointGachaFreeDrawCampaignLogMaster_TypeInfo,
                                                               v2429,
                                                               v2430);
  UserFriendPointGachaFreeDrawCampaignLogMaster___ctor(v2431, 0LL);
  if ( v2431 )
  {
    v519 = sub_1B64204(v2431, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17E )
    goto LABEL_1544;
  v515->m_Items[382] = (DataMasterBase_o *)v2431;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[382], (int32_t)v2431, v2432, v2433);
  v2436 = (UserEventRandomMissionMaster_o *)sub_1B64314(UserEventRandomMissionMaster_TypeInfo, v2434, v2435);
  UserEventRandomMissionMaster___ctor(v2436, 0LL);
  if ( v2436 )
  {
    v519 = sub_1B64204(v2436, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x17F )
    goto LABEL_1544;
  v515->m_Items[383] = (DataMasterBase_o *)v2436;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[383], (int32_t)v2436, v2437, v2438);
  v2441 = (EventProgressValueMaster_o *)sub_1B64314(EventProgressValueMaster_TypeInfo, v2439, v2440);
  EventProgressValueMaster___ctor(v2441, 0LL);
  if ( v2441 )
  {
    v519 = sub_1B64204(v2441, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x180 )
    goto LABEL_1544;
  v515->m_Items[384] = (DataMasterBase_o *)v2441;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[384], (int32_t)v2441, v2442, v2443);
  v2446 = (SvtMultiPortraitMaster_o *)sub_1B64314(SvtMultiPortraitMaster_TypeInfo, v2444, v2445);
  SvtMultiPortraitMaster___ctor(v2446, 0LL);
  if ( v2446 )
  {
    v519 = sub_1B64204(v2446, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x181 )
    goto LABEL_1544;
  v515->m_Items[385] = (DataMasterBase_o *)v2446;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[385], (int32_t)v2446, v2447, v2448);
  v2451 = (EventRandomMissionMaster_o *)sub_1B64314(EventRandomMissionMaster_TypeInfo, v2449, v2450);
  EventRandomMissionMaster___ctor(v2451, 0LL);
  if ( v2451 )
  {
    v519 = sub_1B64204(v2451, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x182 )
    goto LABEL_1544;
  v515->m_Items[386] = (DataMasterBase_o *)v2451;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[386], (int32_t)v2451, v2452, v2453);
  v2456 = (UserGachaHistoryMaster_o *)sub_1B64314(UserGachaHistoryMaster_TypeInfo, v2454, v2455);
  UserGachaHistoryMaster___ctor(v2456, 0LL);
  if ( v2456 )
  {
    v519 = sub_1B64204(v2456, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x183 )
    goto LABEL_1544;
  v515->m_Items[387] = (DataMasterBase_o *)v2456;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[387], (int32_t)v2456, v2457, v2458);
  v2461 = (UserCoinRoomMaster_o *)sub_1B64314(UserCoinRoomMaster_TypeInfo, v2459, v2460);
  UserCoinRoomMaster___ctor(v2461, 0LL);
  if ( v2461 )
  {
    v519 = sub_1B64204(v2461, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x184 )
    goto LABEL_1544;
  v515->m_Items[388] = (DataMasterBase_o *)v2461;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[388], (int32_t)v2461, v2462, v2463);
  v2466 = (EventBuddyPointMaster_o *)sub_1B64314(EventBuddyPointMaster_TypeInfo, v2464, v2465);
  EventBuddyPointMaster___ctor(v2466, 0LL);
  if ( v2466 )
  {
    v519 = sub_1B64204(v2466, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x185 )
    goto LABEL_1544;
  v515->m_Items[389] = (DataMasterBase_o *)v2466;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[389], (int32_t)v2466, v2467, v2468);
  v2471 = (EventServantPointRankMaster_o *)sub_1B64314(EventServantPointRankMaster_TypeInfo, v2469, v2470);
  EventServantPointRankMaster___ctor(v2471, 0LL);
  if ( v2471 )
  {
    v519 = sub_1B64204(v2471, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x186 )
    goto LABEL_1544;
  v515->m_Items[390] = (DataMasterBase_o *)v2471;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[390], (int32_t)v2471, v2472, v2473);
  v2476 = (UserEventServantPointMaster_o *)sub_1B64314(UserEventServantPointMaster_TypeInfo, v2474, v2475);
  UserEventServantPointMaster___ctor(v2476, 0LL);
  if ( v2476 )
  {
    v519 = sub_1B64204(v2476, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x187 )
    goto LABEL_1544;
  v515->m_Items[391] = (DataMasterBase_o *)v2476;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[391], (int32_t)v2476, v2477, v2478);
  v2481 = (FieldMotionMaster_o *)sub_1B64314(FieldMotionMaster_TypeInfo, v2479, v2480);
  FieldMotionMaster___ctor(v2481, 0LL);
  if ( v2481 )
  {
    v519 = sub_1B64204(v2481, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x188 )
    goto LABEL_1544;
  v515->m_Items[392] = (DataMasterBase_o *)v2481;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[392], (int32_t)v2481, v2482, v2483);
  v2486 = (UserDeleteReservationMaster_o *)sub_1B64314(UserDeleteReservationMaster_TypeInfo, v2484, v2485);
  UserDeleteReservationMaster___ctor(v2486, 0LL);
  if ( v2486 )
  {
    v519 = sub_1B64204(v2486, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x189 )
    goto LABEL_1544;
  v515->m_Items[393] = (DataMasterBase_o *)v2486;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[393], (int32_t)v2486, v2487, v2488);
  v2491 = (ServantScriptMultipleMaster_o *)sub_1B64314(ServantScriptMultipleMaster_TypeInfo, v2489, v2490);
  ServantScriptMultipleMaster___ctor(v2491, 0LL);
  if ( v2491 )
  {
    v519 = sub_1B64204(v2491, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18A )
    goto LABEL_1544;
  v515->m_Items[394] = (DataMasterBase_o *)v2491;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[394], (int32_t)v2491, v2492, v2493);
  v2496 = (EquipAddMaster_o *)sub_1B64314(EquipAddMaster_TypeInfo, v2494, v2495);
  EquipAddMaster___ctor(v2496, 0LL);
  if ( v2496 )
  {
    v519 = sub_1B64204(v2496, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18B )
    goto LABEL_1544;
  v515->m_Items[395] = (DataMasterBase_o *)v2496;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[395], (int32_t)v2496, v2497, v2498);
  v2501 = (QuestReleaseOverwriteMaster_o *)sub_1B64314(QuestReleaseOverwriteMaster_TypeInfo, v2499, v2500);
  QuestReleaseOverwriteMaster___ctor(v2501, 0LL);
  if ( v2501 )
  {
    v519 = sub_1B64204(v2501, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18C )
    goto LABEL_1544;
  v515->m_Items[396] = (DataMasterBase_o *)v2501;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[396], (int32_t)v2501, v2502, v2503);
  v2506 = (UserEventAlloutBattleMaster_o *)sub_1B64314(UserEventAlloutBattleMaster_TypeInfo, v2504, v2505);
  UserEventAlloutBattleMaster___ctor(v2506, 0LL);
  if ( v2506 )
  {
    v519 = sub_1B64204(v2506, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18D )
    goto LABEL_1544;
  v515->m_Items[397] = (DataMasterBase_o *)v2506;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[397], (int32_t)v2506, v2507, v2508);
  v2511 = (QuestScriptMaterialNextMaster_o *)sub_1B64314(QuestScriptMaterialNextMaster_TypeInfo, v2509, v2510);
  QuestScriptMaterialNextMaster___ctor(v2511, 0LL);
  if ( v2511 )
  {
    v519 = sub_1B64204(v2511, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18E )
    goto LABEL_1544;
  v515->m_Items[398] = (DataMasterBase_o *)v2511;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[398], (int32_t)v2511, v2512, v2513);
  v2516 = (EventDiggingMaster_o *)sub_1B64314(EventDiggingMaster_TypeInfo, v2514, v2515);
  EventDiggingMaster___ctor(v2516, 0LL);
  if ( v2516 )
  {
    v519 = sub_1B64204(v2516, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x18F )
    goto LABEL_1544;
  v515->m_Items[399] = (DataMasterBase_o *)v2516;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[399], (int32_t)v2516, v2517, v2518);
  v2521 = (EventDiggingBlockMaster_o *)sub_1B64314(EventDiggingBlockMaster_TypeInfo, v2519, v2520);
  EventDiggingBlockMaster___ctor(v2521, 0LL);
  if ( v2521 )
  {
    v519 = sub_1B64204(v2521, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x190 )
    goto LABEL_1544;
  v515->m_Items[400] = (DataMasterBase_o *)v2521;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[400], (int32_t)v2521, v2522, v2523);
  v2526 = (EventDiggingRewardMaster_o *)sub_1B64314(EventDiggingRewardMaster_TypeInfo, v2524, v2525);
  EventDiggingRewardMaster___ctor(v2526, 0LL);
  if ( v2526 )
  {
    v519 = sub_1B64204(v2526, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x191 )
    goto LABEL_1544;
  v515->m_Items[401] = (DataMasterBase_o *)v2526;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[401], (int32_t)v2526, v2527, v2528);
  v2531 = (UserEventDiggingMaster_o *)sub_1B64314(UserEventDiggingMaster_TypeInfo, v2529, v2530);
  UserEventDiggingMaster___ctor(v2531, 0LL);
  if ( v2531 )
  {
    v519 = sub_1B64204(v2531, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x192 )
    goto LABEL_1544;
  v515->m_Items[402] = (DataMasterBase_o *)v2531;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[402], (int32_t)v2531, v2532, v2533);
  v2536 = (BattleMessageMaster_o *)sub_1B64314(BattleMessageMaster_TypeInfo, v2534, v2535);
  BattleMessageMaster___ctor(v2536, 0LL);
  if ( v2536 )
  {
    v519 = sub_1B64204(v2536, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x193 )
    goto LABEL_1544;
  v515->m_Items[403] = (DataMasterBase_o *)v2536;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[403], (int32_t)v2536, v2537, v2538);
  v2541 = (BattleMessageGroupMaster_o *)sub_1B64314(BattleMessageGroupMaster_TypeInfo, v2539, v2540);
  BattleMessageGroupMaster___ctor(v2541, 0LL);
  if ( v2541 )
  {
    v519 = sub_1B64204(v2541, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x194 )
    goto LABEL_1544;
  v515->m_Items[404] = (DataMasterBase_o *)v2541;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[404], (int32_t)v2541, v2542, v2543);
  v2546 = (UserNpcSvtRecordMaster_o *)sub_1B64314(UserNpcSvtRecordMaster_TypeInfo, v2544, v2545);
  UserNpcSvtRecordMaster___ctor(v2546, 0LL);
  if ( v2546 )
  {
    v519 = sub_1B64204(v2546, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x195 )
    goto LABEL_1544;
  v515->m_Items[405] = (DataMasterBase_o *)v2546;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[405], (int32_t)v2546, v2547, v2548);
  v2551 = (BuffTypeDetailMaster_o *)sub_1B64314(BuffTypeDetailMaster_TypeInfo, v2549, v2550);
  BuffTypeDetailMaster___ctor(v2551, 0LL);
  if ( v2551 )
  {
    v519 = sub_1B64204(v2551, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x196 )
    goto LABEL_1544;
  v515->m_Items[406] = (DataMasterBase_o *)v2551;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[406], (int32_t)v2551, v2552, v2553);
  v2556 = (WarBoardMessageMaster_o *)sub_1B64314(WarBoardMessageMaster_TypeInfo, v2554, v2555);
  WarBoardMessageMaster___ctor(v2556, 0LL);
  if ( v2556 )
  {
    v519 = sub_1B64204(v2556, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x197 )
    goto LABEL_1544;
  v515->m_Items[407] = (DataMasterBase_o *)v2556;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[407], (int32_t)v2556, v2557, v2558);
  v2561 = (WarBoardPartySkillMaster_o *)sub_1B64314(WarBoardPartySkillMaster_TypeInfo, v2559, v2560);
  WarBoardPartySkillMaster___ctor(v2561, 0LL);
  if ( v2561 )
  {
    v519 = sub_1B64204(v2561, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x198 )
    goto LABEL_1544;
  v515->m_Items[408] = (DataMasterBase_o *)v2561;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[408], (int32_t)v2561, v2562, v2563);
  v2566 = (WarBoardMessageScriptMaster_o *)sub_1B64314(WarBoardMessageScriptMaster_TypeInfo, v2564, v2565);
  WarBoardMessageScriptMaster___ctor(v2566, 0LL);
  if ( v2566 )
  {
    v519 = sub_1B64204(v2566, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x199 )
    goto LABEL_1544;
  v515->m_Items[409] = (DataMasterBase_o *)v2566;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[409], (int32_t)v2566, v2567, v2568);
  v2571 = (WarQuestSelectionMaster_o *)sub_1B64314(WarQuestSelectionMaster_TypeInfo, v2569, v2570);
  WarQuestSelectionMaster___ctor(v2571, 0LL);
  if ( v2571 )
  {
    v519 = sub_1B64204(v2571, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19A )
    goto LABEL_1544;
  v515->m_Items[410] = (DataMasterBase_o *)v2571;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[410], (int32_t)v2571, v2572, v2573);
  v2576 = (WarBoardStageDetailMaster_o *)sub_1B64314(WarBoardStageDetailMaster_TypeInfo, v2574, v2575);
  WarBoardStageDetailMaster___ctor(v2576, 0LL);
  if ( v2576 )
  {
    v519 = sub_1B64204(v2576, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19B )
    goto LABEL_1544;
  v515->m_Items[411] = (DataMasterBase_o *)v2576;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[411], (int32_t)v2576, v2577, v2578);
  v2581 = (QuestScriptMaterialOverwriteMaster_o *)sub_1B64314(QuestScriptMaterialOverwriteMaster_TypeInfo, v2579, v2580);
  QuestScriptMaterialOverwriteMaster___ctor(v2581, 0LL);
  if ( v2581 )
  {
    v519 = sub_1B64204(v2581, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19C )
    goto LABEL_1544;
  v515->m_Items[412] = (DataMasterBase_o *)v2581;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[412], (int32_t)v2581, v2582, v2583);
  v2586 = (QuestScriptBranchMaterialMaster_o *)sub_1B64314(QuestScriptBranchMaterialMaster_TypeInfo, v2584, v2585);
  QuestScriptBranchMaterialMaster___ctor(v2586, 0LL);
  if ( v2586 )
  {
    v519 = sub_1B64204(v2586, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19D )
    goto LABEL_1544;
  v515->m_Items[413] = (DataMasterBase_o *)v2586;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[413], (int32_t)v2586, v2587, v2588);
  v2591 = (AdCheckPointMaster_o *)sub_1B64314(AdCheckPointMaster_TypeInfo, v2589, v2590);
  AdCheckPointMaster___ctor(v2591, 0LL);
  if ( v2591 )
  {
    v519 = sub_1B64204(v2591, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19E )
    goto LABEL_1544;
  v515->m_Items[414] = (DataMasterBase_o *)v2591;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[414], (int32_t)v2591, v2592, v2593);
  v2596 = (GiftDetailMaster_o *)sub_1B64314(GiftDetailMaster_TypeInfo, v2594, v2595);
  GiftDetailMaster___ctor(v2596, 0LL);
  if ( v2596 )
  {
    v519 = sub_1B64204(v2596, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x19F )
    goto LABEL_1544;
  v515->m_Items[415] = (DataMasterBase_o *)v2596;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[415], (int32_t)v2596, v2597, v2598);
  v2601 = (CombineLimitGiftMaster_o *)sub_1B64314(CombineLimitGiftMaster_TypeInfo, v2599, v2600);
  CombineLimitGiftMaster___ctor(v2601, 0LL);
  if ( v2601 )
  {
    v519 = sub_1B64204(v2601, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A0 )
    goto LABEL_1544;
  v515->m_Items[416] = (DataMasterBase_o *)v2601;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[416], (int32_t)v2601, v2602, v2603);
  v2606 = (EventCooltimeRewardMaster_o *)sub_1B64314(EventCooltimeRewardMaster_TypeInfo, v2604, v2605);
  EventCooltimeRewardMaster___ctor(v2606, 0LL);
  if ( v2606 )
  {
    v519 = sub_1B64204(v2606, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A1 )
    goto LABEL_1544;
  v515->m_Items[417] = (DataMasterBase_o *)v2606;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[417], (int32_t)v2606, v2607, v2608);
  v2611 = (UserEventCooltimeRewardMaster_o *)sub_1B64314(UserEventCooltimeRewardMaster_TypeInfo, v2609, v2610);
  UserEventCooltimeRewardMaster___ctor(v2611, 0LL);
  if ( v2611 )
  {
    v519 = sub_1B64204(v2611, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A2 )
    goto LABEL_1544;
  v515->m_Items[418] = (DataMasterBase_o *)v2611;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[418], (int32_t)v2611, v2612, v2613);
  v2616 = (ClassBoardBaseMaster_o *)sub_1B64314(ClassBoardBaseMaster_TypeInfo, v2614, v2615);
  ClassBoardBaseMaster___ctor(v2616, 0LL);
  if ( v2616 )
  {
    v519 = sub_1B64204(v2616, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A3 )
    goto LABEL_1544;
  v515->m_Items[419] = (DataMasterBase_o *)v2616;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[419], (int32_t)v2616, v2617, v2618);
  v2621 = (ClassBoardLockMaster_o *)sub_1B64314(ClassBoardLockMaster_TypeInfo, v2619, v2620);
  ClassBoardLockMaster___ctor(v2621, 0LL);
  if ( v2621 )
  {
    v519 = sub_1B64204(v2621, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A4 )
    goto LABEL_1544;
  v515->m_Items[420] = (DataMasterBase_o *)v2621;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[420], (int32_t)v2621, v2622, v2623);
  v2626 = (ClassBoardSquareMaster_o *)sub_1B64314(ClassBoardSquareMaster_TypeInfo, v2624, v2625);
  ClassBoardSquareMaster___ctor(v2626, 0LL);
  if ( v2626 )
  {
    v519 = sub_1B64204(v2626, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A5 )
    goto LABEL_1544;
  v515->m_Items[421] = (DataMasterBase_o *)v2626;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[421], (int32_t)v2626, v2627, v2628);
  v2631 = (ClassBoardLineMaster_o *)sub_1B64314(ClassBoardLineMaster_TypeInfo, v2629, v2630);
  ClassBoardLineMaster___ctor(v2631, 0LL);
  if ( v2631 )
  {
    v519 = sub_1B64204(v2631, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A6 )
    goto LABEL_1544;
  v515->m_Items[422] = (DataMasterBase_o *)v2631;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[422], (int32_t)v2631, v2632, v2633);
  v2636 = (UserClassBoardSquareMaster_o *)sub_1B64314(UserClassBoardSquareMaster_TypeInfo, v2634, v2635);
  UserClassBoardSquareMaster___ctor(v2636, 0LL);
  if ( v2636 )
  {
    v519 = sub_1B64204(v2636, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A7 )
    goto LABEL_1544;
  v515->m_Items[423] = (DataMasterBase_o *)v2636;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[423], (int32_t)v2636, v2637, v2638);
  v2641 = (ServantCardAddMaster_o *)sub_1B64314(ServantCardAddMaster_TypeInfo, v2639, v2640);
  ServantCardAddMaster___ctor(v2641, 0LL);
  if ( v2641 )
  {
    v519 = sub_1B64204(v2641, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A8 )
    goto LABEL_1544;
  v515->m_Items[424] = (DataMasterBase_o *)v2641;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[424], (int32_t)v2641, v2642, v2643);
  v2646 = (MapLayerMaster_o *)sub_1B64314(MapLayerMaster_TypeInfo, v2644, v2645);
  MapLayerMaster___ctor(v2646, 0LL);
  if ( v2646 )
  {
    v519 = sub_1B64204(v2646, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1A9 )
    goto LABEL_1544;
  v515->m_Items[425] = (DataMasterBase_o *)v2646;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[425], (int32_t)v2646, v2647, v2648);
  v2651 = (SpotLayerMaster_o *)sub_1B64314(SpotLayerMaster_TypeInfo, v2649, v2650);
  SpotLayerMaster___ctor(v2651, 0LL);
  if ( v2651 )
  {
    v519 = sub_1B64204(v2651, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AA )
    goto LABEL_1544;
  v515->m_Items[426] = (DataMasterBase_o *)v2651;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[426], (int32_t)v2651, v2652, v2653);
  v2656 = (MapGimmickLayerMaster_o *)sub_1B64314(MapGimmickLayerMaster_TypeInfo, v2654, v2655);
  MapGimmickLayerMaster___ctor(v2656, 0LL);
  if ( v2656 )
  {
    v519 = sub_1B64204(v2656, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AB )
    goto LABEL_1544;
  v515->m_Items[427] = (DataMasterBase_o *)v2656;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[427], (int32_t)v2656, v2657, v2658);
  v2661 = (EventDataLostBattleMaster_o *)sub_1B64314(EventDataLostBattleMaster_TypeInfo, v2659, v2660);
  EventDataLostBattleMaster___ctor(v2661, 0LL);
  if ( v2661 )
  {
    v519 = sub_1B64204(v2661, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AC )
    goto LABEL_1544;
  v515->m_Items[428] = (DataMasterBase_o *)v2661;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[428], (int32_t)v2661, v2662, v2663);
  v2666 = (EventDataLostBattleResetMaster_o *)sub_1B64314(EventDataLostBattleResetMaster_TypeInfo, v2664, v2665);
  EventDataLostBattleResetMaster___ctor(v2666, 0LL);
  if ( v2666 )
  {
    v519 = sub_1B64204(v2666, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AD )
    goto LABEL_1544;
  v515->m_Items[429] = (DataMasterBase_o *)v2666;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[429], (int32_t)v2666, v2667, v2668);
  v2671 = (UserEventDataLostMaster_o *)sub_1B64314(UserEventDataLostMaster_TypeInfo, v2669, v2670);
  UserEventDataLostMaster___ctor(v2671, 0LL);
  if ( v2671 )
  {
    v519 = sub_1B64204(v2671, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AE )
    goto LABEL_1544;
  v515->m_Items[430] = (DataMasterBase_o *)v2671;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[430], (int32_t)v2671, v2672, v2673);
  v2676 = (QuestHintMaster_o *)sub_1B64314(QuestHintMaster_TypeInfo, v2674, v2675);
  QuestHintMaster___ctor(v2676, 0LL);
  if ( v2676 )
  {
    v519 = sub_1B64204(v2676, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1AF )
    goto LABEL_1544;
  v515->m_Items[431] = (DataMasterBase_o *)v2676;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[431], (int32_t)v2676, v2677, v2678);
  v2681 = (FuncTypeDetailMaster_o *)sub_1B64314(FuncTypeDetailMaster_TypeInfo, v2679, v2680);
  FuncTypeDetailMaster___ctor(v2681, 0LL);
  if ( v2681 )
  {
    v519 = sub_1B64204(v2681, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B0 )
    goto LABEL_1544;
  v515->m_Items[432] = (DataMasterBase_o *)v2681;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[432], (int32_t)v2681, v2682, v2683);
  v2686 = (BuffConvertMaster_o *)sub_1B64314(BuffConvertMaster_TypeInfo, v2684, v2685);
  BuffConvertMaster___ctor(v2686, 0LL);
  if ( v2686 )
  {
    v519 = sub_1B64204(v2686, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B1 )
    goto LABEL_1544;
  v515->m_Items[433] = (DataMasterBase_o *)v2686;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[433], (int32_t)v2686, v2687, v2688);
  v2691 = (SkillGroupMaster_o *)sub_1B64314(SkillGroupMaster_TypeInfo, v2689, v2690);
  SkillGroupMaster___ctor(v2691, 0LL);
  if ( v2691 )
  {
    v519 = sub_1B64204(v2691, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B2 )
    goto LABEL_1544;
  v515->m_Items[434] = (DataMasterBase_o *)v2691;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[434], (int32_t)v2691, v2692, v2693);
  v2696 = (SkillGroupOverwriteMaster_o *)sub_1B64314(SkillGroupOverwriteMaster_TypeInfo, v2694, v2695);
  SkillGroupOverwriteMaster___ctor(v2696, 0LL);
  if ( v2696 )
  {
    v519 = sub_1B64204(v2696, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B3 )
    goto LABEL_1544;
  v515->m_Items[435] = (DataMasterBase_o *)v2696;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[435], (int32_t)v2696, v2697, v2698);
  v2701 = (SkillIndividualityMaster_o *)sub_1B64314(SkillIndividualityMaster_TypeInfo, v2699, v2700);
  SkillIndividualityMaster___ctor(v2701, 0LL);
  if ( v2701 )
  {
    v519 = sub_1B64204(v2701, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B4 )
    goto LABEL_1544;
  v515->m_Items[436] = (DataMasterBase_o *)v2701;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[436], (int32_t)v2701, v2702, v2703);
  v2706 = (RestrictionBaseMaster_o *)sub_1B64314(RestrictionBaseMaster_TypeInfo, v2704, v2705);
  RestrictionBaseMaster___ctor(v2706, 0LL);
  if ( v2706 )
  {
    v519 = sub_1B64204(v2706, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B5 )
    goto LABEL_1544;
  v515->m_Items[437] = (DataMasterBase_o *)v2706;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[437], (int32_t)v2706, v2707, v2708);
  v2711 = (RestrictionSlotMaster_o *)sub_1B64314(RestrictionSlotMaster_TypeInfo, v2709, v2710);
  RestrictionSlotMaster___ctor(v2711, 0LL);
  if ( v2711 )
  {
    v519 = sub_1B64204(v2711, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B6 )
    goto LABEL_1544;
  v515->m_Items[438] = (DataMasterBase_o *)v2711;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[438], (int32_t)v2711, v2712, v2713);
  v2716 = (RestrictionSlotDetailMaster_o *)sub_1B64314(RestrictionSlotDetailMaster_TypeInfo, v2714, v2715);
  RestrictionSlotDetailMaster___ctor(v2716, 0LL);
  if ( v2716 )
  {
    v519 = sub_1B64204(v2716, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B7 )
    goto LABEL_1544;
  v515->m_Items[439] = (DataMasterBase_o *)v2716;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[439], (int32_t)v2716, v2717, v2718);
  v2721 = (RestrictionMessageMaster_o *)sub_1B64314(RestrictionMessageMaster_TypeInfo, v2719, v2720);
  RestrictionMessageMaster___ctor(v2721, 0LL);
  if ( v2721 )
  {
    v519 = sub_1B64204(v2721, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B8 )
    goto LABEL_1544;
  v515->m_Items[440] = (DataMasterBase_o *)v2721;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[440], (int32_t)v2721, v2722, v2723);
  v2726 = (RestrictionWholeMaster_o *)sub_1B64314(RestrictionWholeMaster_TypeInfo, v2724, v2725);
  RestrictionWholeMaster___ctor(v2726, 0LL);
  if ( v2726 )
  {
    v519 = sub_1B64204(v2726, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1B9 )
    goto LABEL_1544;
  v515->m_Items[441] = (DataMasterBase_o *)v2726;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[441], (int32_t)v2726, v2727, v2728);
  v2731 = (FuncDispMaster_o *)sub_1B64314(FuncDispMaster_TypeInfo, v2729, v2730);
  FuncDispMaster___ctor(v2731, 0LL);
  if ( v2731 )
  {
    v519 = sub_1B64204(v2731, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BA )
    goto LABEL_1544;
  v515->m_Items[442] = (DataMasterBase_o *)v2731;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[442], (int32_t)v2731, v2732, v2733);
  v2736 = (ClassBoardCommandSpellMaster_o *)sub_1B64314(ClassBoardCommandSpellMaster_TypeInfo, v2734, v2735);
  ClassBoardCommandSpellMaster___ctor(v2736, 0LL);
  if ( v2736 )
  {
    v519 = sub_1B64204(v2736, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BB )
    goto LABEL_1544;
  v515->m_Items[443] = (DataMasterBase_o *)v2736;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[443], (int32_t)v2736, v2737, v2738);
  v2741 = (ClassBoardClassMaster_o *)sub_1B64314(ClassBoardClassMaster_TypeInfo, v2739, v2740);
  ClassBoardClassMaster___ctor(v2741, 0LL);
  if ( v2741 )
  {
    v519 = sub_1B64204(v2741, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BC )
    goto LABEL_1544;
  v515->m_Items[444] = (DataMasterBase_o *)v2741;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[444], (int32_t)v2741, v2742, v2743);
  v2746 = (EventCommandAssistMaster_o *)sub_1B64314(EventCommandAssistMaster_TypeInfo, v2744, v2745);
  EventCommandAssistMaster___ctor(v2746, 0LL);
  if ( v2746 )
  {
    v519 = sub_1B64204(v2746, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BD )
    goto LABEL_1544;
  v515->m_Items[445] = (DataMasterBase_o *)v2746;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[445], (int32_t)v2746, v2747, v2748);
  v2751 = (EventMissionGroupMaster_o *)sub_1B64314(EventMissionGroupMaster_TypeInfo, v2749, v2750);
  EventMissionGroupMaster___ctor(v2751, 0LL);
  if ( v2751 )
  {
    v519 = sub_1B64204(v2751, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BE )
    goto LABEL_1544;
  v515->m_Items[446] = (DataMasterBase_o *)v2751;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[446], (int32_t)v2751, v2752, v2753);
  v2756 = (CombineLimitReleaseMaster_o *)sub_1B64314(CombineLimitReleaseMaster_TypeInfo, v2754, v2755);
  CombineLimitReleaseMaster___ctor(v2756, 0LL);
  if ( v2756 )
  {
    v519 = sub_1B64204(v2756, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1BF )
    goto LABEL_1544;
  v515->m_Items[447] = (DataMasterBase_o *)v2756;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[447], (int32_t)v2756, v2757, v2758);
  v2761 = (HeelPortraitMaster_o *)sub_1B64314(HeelPortraitMaster_TypeInfo, v2759, v2760);
  HeelPortraitMaster___ctor(v2761, 0LL);
  if ( v2761 )
  {
    v519 = sub_1B64204(v2761, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C0 )
    goto LABEL_1544;
  v515->m_Items[448] = (DataMasterBase_o *)v2761;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[448], (int32_t)v2761, v2762, v2763);
  v2766 = (UserHeelPortraitMaster_o *)sub_1B64314(UserHeelPortraitMaster_TypeInfo, v2764, v2765);
  UserHeelPortraitMaster___ctor(v2766, 0LL);
  if ( v2766 )
  {
    v519 = sub_1B64204(v2766, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C1 )
    goto LABEL_1544;
  v515->m_Items[449] = (DataMasterBase_o *)v2766;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[449], (int32_t)v2766, v2767, v2768);
  v2771 = (TreasureDeviceSequenceWeightMaster_o *)sub_1B64314(TreasureDeviceSequenceWeightMaster_TypeInfo, v2769, v2770);
  TreasureDeviceSequenceWeightMaster___ctor(v2771, 0LL);
  if ( v2771 )
  {
    v519 = sub_1B64204(v2771, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C2 )
    goto LABEL_1544;
  v515->m_Items[450] = (DataMasterBase_o *)v2771;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[450], (int32_t)v2771, v2772, v2773);
  v2776 = (NpcServantFollowerIndividualityMaster_o *)sub_1B64314(
                                                       NpcServantFollowerIndividualityMaster_TypeInfo,
                                                       v2774,
                                                       v2775);
  NpcServantFollowerIndividualityMaster___ctor(v2776, 0LL);
  if ( v2776 )
  {
    v519 = sub_1B64204(v2776, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C3 )
    goto LABEL_1544;
  v515->m_Items[451] = (DataMasterBase_o *)v2776;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[451], (int32_t)v2776, v2777, v2778);
  v2781 = (GachaExtraGiftMaster_o *)sub_1B64314(GachaExtraGiftMaster_TypeInfo, v2779, v2780);
  GachaExtraGiftMaster___ctor(v2781, 0LL);
  if ( v2781 )
  {
    v519 = sub_1B64204(v2781, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C4 )
    goto LABEL_1544;
  v515->m_Items[452] = (DataMasterBase_o *)v2781;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[452], (int32_t)v2781, v2782, v2783);
  v2786 = (EventMuralMaster_o *)sub_1B64314(EventMuralMaster_TypeInfo, v2784, v2785);
  EventMuralMaster___ctor(v2786, 0LL);
  if ( v2786 )
  {
    v519 = sub_1B64204(v2786, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C5 )
    goto LABEL_1544;
  v515->m_Items[453] = (DataMasterBase_o *)v2786;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[453], (int32_t)v2786, v2787, v2788);
  v2791 = (ViewWaveEnemyMaster_o *)sub_1B64314(ViewWaveEnemyMaster_TypeInfo, v2789, v2790);
  ViewWaveEnemyMaster___ctor(v2791, 0LL);
  if ( v2791 )
  {
    v519 = sub_1B64204(v2791, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C6 )
    goto LABEL_1544;
  v515->m_Items[454] = (DataMasterBase_o *)v2791;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[454], (int32_t)v2791, v2792, v2793);
  v2796 = (BlankEarthSpotNavimenuMaster_o *)sub_1B64314(BlankEarthSpotNavimenuMaster_TypeInfo, v2794, v2795);
  BlankEarthSpotNavimenuMaster___ctor(v2796, 0LL);
  if ( v2796 )
  {
    v519 = sub_1B64204(v2796, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C7 )
    goto LABEL_1544;
  v515->m_Items[455] = (DataMasterBase_o *)v2796;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[455], (int32_t)v2796, v2797, v2798);
  v2801 = (BlankEarthGimmickMaster_o *)sub_1B64314(BlankEarthGimmickMaster_TypeInfo, v2799, v2800);
  BlankEarthGimmickMaster___ctor(v2801, 0LL);
  if ( v2801 )
  {
    v519 = sub_1B64204(v2801, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C8 )
    goto LABEL_1544;
  v515->m_Items[456] = (DataMasterBase_o *)v2801;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[456], (int32_t)v2801, v2802, v2803);
  v2806 = (TerminalOverwriteMaster_o *)sub_1B64314(TerminalOverwriteMaster_TypeInfo, v2804, v2805);
  TerminalOverwriteMaster___ctor(v2806, 0LL);
  if ( v2806 )
  {
    v519 = sub_1B64204(v2806, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1C9 )
    goto LABEL_1544;
  v515->m_Items[457] = (DataMasterBase_o *)v2806;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[457], (int32_t)v2806, v2807, v2808);
  v2811 = (UserExchangeSvtMaster_o *)sub_1B64314(UserExchangeSvtMaster_TypeInfo, v2809, v2810);
  UserExchangeSvtMaster___ctor(v2811, 0LL);
  if ( v2811 )
  {
    v519 = sub_1B64204(v2811, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CA )
    goto LABEL_1544;
  v515->m_Items[458] = (DataMasterBase_o *)v2811;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[458], (int32_t)v2811, v2812, v2813);
  v2816 = (WarBoardCommonReleaseMaster_o *)sub_1B64314(WarBoardCommonReleaseMaster_TypeInfo, v2814, v2815);
  WarBoardCommonReleaseMaster___ctor(v2816, 0LL);
  if ( v2816 )
  {
    v519 = sub_1B64204(v2816, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CB )
    goto LABEL_1544;
  v515->m_Items[459] = (DataMasterBase_o *)v2816;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[459], (int32_t)v2816, v2817, v2818);
  v2821 = (WarBoardEventMaster_o *)sub_1B64314(WarBoardEventMaster_TypeInfo, v2819, v2820);
  WarBoardEventMaster___ctor(v2821, 0LL);
  if ( v2821 )
  {
    v519 = sub_1B64204(v2821, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CC )
    goto LABEL_1544;
  v515->m_Items[460] = (DataMasterBase_o *)v2821;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[460], (int32_t)v2821, v2822, v2823);
  v2826 = (WarBoardEventScriptMaster_o *)sub_1B64314(WarBoardEventScriptMaster_TypeInfo, v2824, v2825);
  WarBoardEventScriptMaster___ctor(v2826, 0LL);
  if ( v2826 )
  {
    v519 = sub_1B64204(v2826, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CD )
    goto LABEL_1544;
  v515->m_Items[461] = (DataMasterBase_o *)v2826;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[461], (int32_t)v2826, v2827, v2828);
  v2831 = (WarBoardStageBossMaster_o *)sub_1B64314(WarBoardStageBossMaster_TypeInfo, v2829, v2830);
  WarBoardStageBossMaster___ctor(v2831, 0LL);
  if ( v2831 )
  {
    v519 = sub_1B64204(v2831, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CE )
    goto LABEL_1544;
  v515->m_Items[462] = (DataMasterBase_o *)v2831;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[462], (int32_t)v2831, v2832, v2833);
  v2836 = (WarBoardSquareIndexGroupMaster_o *)sub_1B64314(WarBoardSquareIndexGroupMaster_TypeInfo, v2834, v2835);
  WarBoardSquareIndexGroupMaster___ctor(v2836, 0LL);
  if ( v2836 )
  {
    v519 = sub_1B64204(v2836, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1CF )
    goto LABEL_1544;
  v515->m_Items[463] = (DataMasterBase_o *)v2836;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[463], (int32_t)v2836, v2837, v2838);
  v2841 = (WarBoardActionTrendGroupMaster_o *)sub_1B64314(WarBoardActionTrendGroupMaster_TypeInfo, v2839, v2840);
  WarBoardActionTrendGroupMaster___ctor(v2841, 0LL);
  if ( v2841 )
  {
    v519 = sub_1B64204(v2841, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D0 )
    goto LABEL_1544;
  v515->m_Items[464] = (DataMasterBase_o *)v2841;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[464], (int32_t)v2841, v2842, v2843);
  v2846 = (WarBoardRatingOffsetGroupMaster_o *)sub_1B64314(WarBoardRatingOffsetGroupMaster_TypeInfo, v2844, v2845);
  WarBoardRatingOffsetGroupMaster___ctor(v2846, 0LL);
  if ( v2846 )
  {
    v519 = sub_1B64204(v2846, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D1 )
    goto LABEL_1544;
  v515->m_Items[465] = (DataMasterBase_o *)v2846;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[465], (int32_t)v2846, v2847, v2848);
  v2851 = (WarBoardReinforcementsMaster_o *)sub_1B64314(WarBoardReinforcementsMaster_TypeInfo, v2849, v2850);
  WarBoardReinforcementsMaster___ctor(v2851, 0LL);
  if ( v2851 )
  {
    v519 = sub_1B64204(v2851, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D2 )
    goto LABEL_1544;
  v515->m_Items[466] = (DataMasterBase_o *)v2851;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[466], (int32_t)v2851, v2852, v2853);
  v2856 = (WarBoardStageReinforcementsMaster_o *)sub_1B64314(WarBoardStageReinforcementsMaster_TypeInfo, v2854, v2855);
  WarBoardStageReinforcementsMaster___ctor(v2856, 0LL);
  if ( v2856 )
  {
    v519 = sub_1B64204(v2856, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D3 )
    goto LABEL_1544;
  v515->m_Items[467] = (DataMasterBase_o *)v2856;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[467], (int32_t)v2856, v2857, v2858);
  v2861 = (WarBoardFutureActionTrendMaster_o *)sub_1B64314(WarBoardFutureActionTrendMaster_TypeInfo, v2859, v2860);
  WarBoardFutureActionTrendMaster___ctor(v2861, 0LL);
  if ( v2861 )
  {
    v519 = sub_1B64204(v2861, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D4 )
    goto LABEL_1544;
  v515->m_Items[468] = (DataMasterBase_o *)v2861;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[468], (int32_t)v2861, v2862, v2863);
  v2866 = (ServantProfilePushMaster_o *)sub_1B64314(ServantProfilePushMaster_TypeInfo, v2864, v2865);
  ServantProfilePushMaster___ctor(v2866, 0LL);
  if ( v2866 )
  {
    v519 = sub_1B64204(v2866, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D5 )
    goto LABEL_1544;
  v515->m_Items[469] = (DataMasterBase_o *)v2866;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[469], (int32_t)v2866, v2867, v2868);
  v2871 = (MapGimmickPathMaster_o *)sub_1B64314(MapGimmickPathMaster_TypeInfo, v2869, v2870);
  MapGimmickPathMaster___ctor(v2871, 0LL);
  if ( v2871 )
  {
    v519 = sub_1B64204(v2871, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D6 )
    goto LABEL_1544;
  v515->m_Items[470] = (DataMasterBase_o *)v2871;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[470], (int32_t)v2871, v2872, v2873);
  v2876 = (MapGimmickPathReleaseMaster_o *)sub_1B64314(MapGimmickPathReleaseMaster_TypeInfo, v2874, v2875);
  MapGimmickPathReleaseMaster___ctor(v2876, 0LL);
  if ( v2876 )
  {
    v519 = sub_1B64204(v2876, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D7 )
    goto LABEL_1544;
  v515->m_Items[471] = (DataMasterBase_o *)v2876;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[471], (int32_t)v2876, v2877, v2878);
  v2881 = (ServantOverwriteMaster_o *)sub_1B64314(ServantOverwriteMaster_TypeInfo, v2879, v2880);
  ServantOverwriteMaster___ctor(v2881, 0LL);
  if ( v2881 )
  {
    v519 = sub_1B64204(v2881, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D8 )
    goto LABEL_1544;
  v515->m_Items[472] = (DataMasterBase_o *)v2881;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[472], (int32_t)v2881, v2882, v2883);
  v2886 = (IndividualityPolicyMaster_o *)sub_1B64314(IndividualityPolicyMaster_TypeInfo, v2884, v2885);
  IndividualityPolicyMaster___ctor(v2886, 0LL);
  if ( v2886 )
  {
    v519 = sub_1B64204(v2886, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1D9 )
    goto LABEL_1544;
  v515->m_Items[473] = (DataMasterBase_o *)v2886;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[473], (int32_t)v2886, v2887, v2888);
  v2891 = (IndividualityPersonalityMaster_o *)sub_1B64314(IndividualityPersonalityMaster_TypeInfo, v2889, v2890);
  IndividualityPersonalityMaster___ctor(v2891, 0LL);
  if ( v2891 )
  {
    v519 = sub_1B64204(v2891, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DA )
    goto LABEL_1544;
  v515->m_Items[474] = (DataMasterBase_o *)v2891;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[474], (int32_t)v2891, v2892, v2893);
  v2896 = (AttriMaster_o *)sub_1B64314(AttriMaster_TypeInfo, v2894, v2895);
  AttriMaster___ctor(v2896, 0LL);
  if ( v2896 )
  {
    v519 = sub_1B64204(v2896, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DB )
    goto LABEL_1544;
  v515->m_Items[475] = (DataMasterBase_o *)v2896;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[475], (int32_t)v2896, v2897, v2898);
  v2901 = (ServantVoicePatternMaster_o *)sub_1B64314(ServantVoicePatternMaster_TypeInfo, v2899, v2900);
  ServantVoicePatternMaster___ctor(v2901, 0LL);
  if ( v2901 )
  {
    v519 = sub_1B64204(v2901, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DC )
    goto LABEL_1544;
  v515->m_Items[476] = (DataMasterBase_o *)v2901;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[476], (int32_t)v2901, v2902, v2903);
  v2906 = (UserGameCommonMaster_o *)sub_1B64314(UserGameCommonMaster_TypeInfo, v2904, v2905);
  UserGameCommonMaster___ctor(v2906, 0LL);
  if ( v2906 )
  {
    v519 = sub_1B64204(v2906, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DD )
    goto LABEL_1544;
  v515->m_Items[477] = (DataMasterBase_o *)v2906;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[477], (int32_t)v2906, v2907, v2908);
  v2911 = (ServantPhotoMaster_o *)sub_1B64314(ServantPhotoMaster_TypeInfo, v2909, v2910);
  ServantPhotoMaster___ctor(v2911, 0LL);
  if ( v2911 )
  {
    v519 = sub_1B64204(v2911, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DE )
    goto LABEL_1544;
  v515->m_Items[478] = (DataMasterBase_o *)v2911;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[478], (int32_t)v2911, v2912, v2913);
  v2916 = (MasterPhotoMaster_o *)sub_1B64314(MasterPhotoMaster_TypeInfo, v2914, v2915);
  MasterPhotoMaster___ctor(v2916, 0LL);
  if ( v2916 )
  {
    v519 = sub_1B64204(v2916, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1DF )
    goto LABEL_1544;
  v515->m_Items[479] = (DataMasterBase_o *)v2916;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[479], (int32_t)v2916, v2917, v2918);
  v2921 = (WarMessageMaster_o *)sub_1B64314(WarMessageMaster_TypeInfo, v2919, v2920);
  WarMessageMaster___ctor(v2921, 0LL);
  if ( v2921 )
  {
    v519 = sub_1B64204(v2921, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E0 )
    goto LABEL_1544;
  v515->m_Items[480] = (DataMasterBase_o *)v2921;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[480], (int32_t)v2921, v2922, v2923);
  v2926 = (QuestAutoOrganizationAdjustMaster_o *)sub_1B64314(QuestAutoOrganizationAdjustMaster_TypeInfo, v2924, v2925);
  QuestAutoOrganizationAdjustMaster___ctor(v2926, 0LL);
  if ( v2926 )
  {
    v519 = sub_1B64204(v2926, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E1 )
    goto LABEL_1544;
  v515->m_Items[481] = (DataMasterBase_o *)v2926;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[481], (int32_t)v2926, v2927, v2928);
  v2931 = (ExcludeMotionMaster_o *)sub_1B64314(ExcludeMotionMaster_TypeInfo, v2929, v2930);
  ExcludeMotionMaster___ctor(v2931, 0LL);
  if ( v2931 )
  {
    v519 = sub_1B64204(v2931, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E2 )
    goto LABEL_1544;
  v515->m_Items[482] = (DataMasterBase_o *)v2931;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[482], (int32_t)v2931, v2932, v2933);
  v2936 = (UserInterruptionQuestMaster_o *)sub_1B64314(UserInterruptionQuestMaster_TypeInfo, v2934, v2935);
  UserInterruptionQuestMaster___ctor(v2936, 0LL);
  if ( v2936 )
  {
    v519 = sub_1B64204(v2936, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E3 )
    goto LABEL_1544;
  v515->m_Items[483] = (DataMasterBase_o *)v2936;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[483], (int32_t)v2936, v2937, v2938);
  v2941 = (ServantTransformMaster_o *)sub_1B64314(ServantTransformMaster_TypeInfo, v2939, v2940);
  ServantTransformMaster___ctor(v2941, 0LL);
  if ( v2941 )
  {
    v519 = sub_1B64204(v2941, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E4 )
    goto LABEL_1544;
  v515->m_Items[484] = (DataMasterBase_o *)v2941;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[484], (int32_t)v2941, v2942, v2943);
  v2946 = (MapUpdateScheduleMaster_o *)sub_1B64314(MapUpdateScheduleMaster_TypeInfo, v2944, v2945);
  MapUpdateScheduleMaster___ctor(v2946, 0LL);
  if ( v2946 )
  {
    v519 = sub_1B64204(v2946, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E5 )
    goto LABEL_1544;
  v515->m_Items[485] = (DataMasterBase_o *)v2946;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[485], (int32_t)v2946, v2947, v2948);
  v2951 = (QuestPhasePresentMaster_o *)sub_1B64314(QuestPhasePresentMaster_TypeInfo, v2949, v2950);
  QuestPhasePresentMaster___ctor(v2951, 0LL);
  if ( v2951 )
  {
    v519 = sub_1B64204(v2951, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E6 )
    goto LABEL_1544;
  v515->m_Items[486] = (DataMasterBase_o *)v2951;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[486], (int32_t)v2951, v2952, v2953);
  v2956 = (UserAccountLinkageMaster_o *)sub_1B64314(UserAccountLinkageMaster_TypeInfo, v2954, v2955);
  UserAccountLinkageMaster___ctor(v2956, 0LL);
  if ( v2956 )
  {
    v519 = sub_1B64204(v2956, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E7 )
    goto LABEL_1544;
  v515->m_Items[487] = (DataMasterBase_o *)v2956;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[487], (int32_t)v2956, v2957, v2958);
  v2961 = (MissionNaviTransitionMaster_o *)sub_1B64314(MissionNaviTransitionMaster_TypeInfo, v2959, v2960);
  MissionNaviTransitionMaster___ctor(v2961, 0LL);
  if ( v2961 )
  {
    v519 = sub_1B64204(v2961, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E8 )
    goto LABEL_1544;
  v515->m_Items[488] = (DataMasterBase_o *)v2961;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[488], (int32_t)v2961, v2962, v2963);
  v2966 = (MissionNaviQuestMaster_o *)sub_1B64314(MissionNaviQuestMaster_TypeInfo, v2964, v2965);
  MissionNaviQuestMaster___ctor(v2966, 0LL);
  if ( v2966 )
  {
    v519 = sub_1B64204(v2966, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1E9 )
    goto LABEL_1544;
  v515->m_Items[489] = (DataMasterBase_o *)v2966;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[489], (int32_t)v2966, v2967, v2968);
  v2971 = (EventTradeGoodsMaster_o *)sub_1B64314(EventTradeGoodsMaster_TypeInfo, v2969, v2970);
  EventTradeGoodsMaster___ctor(v2971, 0LL);
  if ( v2971 )
  {
    v519 = sub_1B64204(v2971, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EA )
    goto LABEL_1544;
  v515->m_Items[490] = (DataMasterBase_o *)v2971;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[490], (int32_t)v2971, v2972, v2973);
  v2976 = (EventTradeStoreMaster_o *)sub_1B64314(EventTradeStoreMaster_TypeInfo, v2974, v2975);
  EventTradeStoreMaster___ctor(v2976, 0LL);
  if ( v2976 )
  {
    v519 = sub_1B64204(v2976, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EB )
    goto LABEL_1544;
  v515->m_Items[491] = (DataMasterBase_o *)v2976;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[491], (int32_t)v2976, v2977, v2978);
  v2981 = (EventTradePickupMaster_o *)sub_1B64314(EventTradePickupMaster_TypeInfo, v2979, v2980);
  EventTradePickupMaster___ctor(v2981, 0LL);
  if ( v2981 )
  {
    v519 = sub_1B64204(v2981, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EC )
    goto LABEL_1544;
  v515->m_Items[492] = (DataMasterBase_o *)v2981;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[492], (int32_t)v2981, v2982, v2983);
  v2986 = (UserEventTradeMaster_o *)sub_1B64314(UserEventTradeMaster_TypeInfo, v2984, v2985);
  UserEventTradeMaster___ctor(v2986, 0LL);
  if ( v2986 )
  {
    v519 = sub_1B64204(v2986, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1ED )
    goto LABEL_1544;
  v515->m_Items[493] = (DataMasterBase_o *)v2986;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[493], (int32_t)v2986, v2987, v2988);
  v2991 = (PaymentHistoryMaster_o *)sub_1B64314(PaymentHistoryMaster_TypeInfo, v2989, v2990);
  PaymentHistoryMaster___ctor(v2991, 0LL);
  if ( v2991 )
  {
    v519 = sub_1B64204(v2991, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EE )
    goto LABEL_1544;
  v515->m_Items[494] = (DataMasterBase_o *)v2991;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[494], (int32_t)v2991, v2992, v2993);
  v2996 = (UserExternalPaymentStoneMaster_o *)sub_1B64314(UserExternalPaymentStoneMaster_TypeInfo, v2994, v2995);
  UserExternalPaymentStoneMaster___ctor(v2996, 0LL);
  if ( v2996 )
  {
    v519 = sub_1B64204(v2996, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1EF )
    goto LABEL_1544;
  v515->m_Items[495] = (DataMasterBase_o *)v2996;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[495], (int32_t)v2996, v2997, v2998);
  v3001 = (QuestPhaseIndividualityMaster_o *)sub_1B64314(QuestPhaseIndividualityMaster_TypeInfo, v2999, v3000);
  QuestPhaseIndividualityMaster___ctor(v3001, 0LL);
  if ( v3001 )
  {
    v519 = sub_1B64204(v3001, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F0 )
    goto LABEL_1544;
  v515->m_Items[496] = (DataMasterBase_o *)v3001;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[496], (int32_t)v3001, v3002, v3003);
  v3006 = (ViewGachaFeaturedServantMaster_o *)sub_1B64314(ViewGachaFeaturedServantMaster_TypeInfo, v3004, v3005);
  ViewGachaFeaturedServantMaster___ctor(v3006, 0LL);
  if ( v3006 )
  {
    v519 = sub_1B64204(v3006, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F1 )
    goto LABEL_1544;
  v515->m_Items[497] = (DataMasterBase_o *)v3006;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[497], (int32_t)v3006, v3007, v3008);
  v3011 = (UserGachaPickupCollateralMaster_o *)sub_1B64314(UserGachaPickupCollateralMaster_TypeInfo, v3009, v3010);
  UserGachaPickupCollateralMaster___ctor(v3011, 0LL);
  if ( v3011 )
  {
    v519 = sub_1B64204(v3011, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F2 )
    goto LABEL_1544;
  v515->m_Items[498] = (DataMasterBase_o *)v3011;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[498], (int32_t)v3011, v3012, v3013);
  v3016 = (GachaPickupCollateralMaster_o *)sub_1B64314(GachaPickupCollateralMaster_TypeInfo, v3014, v3015);
  GachaPickupCollateralMaster___ctor(v3016, 0LL);
  if ( v3016 )
  {
    v519 = sub_1B64204(v3016, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F3 )
    goto LABEL_1544;
  v515->m_Items[499] = (DataMasterBase_o *)v3016;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[499], (int32_t)v3016, v3017, v3018);
  v3021 = (GachaPickupCollateralGroupMaster_o *)sub_1B64314(GachaPickupCollateralGroupMaster_TypeInfo, v3019, v3020);
  GachaPickupCollateralGroupMaster___ctor(v3021, 0LL);
  if ( v3021 )
  {
    v519 = sub_1B64204(v3021, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F4 )
    goto LABEL_1544;
  v515->m_Items[500] = (DataMasterBase_o *)v3021;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[500], (int32_t)v3021, v3022, v3023);
  v3026 = (BattlePointMaster_o *)sub_1B64314(BattlePointMaster_TypeInfo, v3024, v3025);
  BattlePointMaster___ctor(v3026, 0LL);
  if ( v3026 )
  {
    v519 = sub_1B64204(v3026, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F5 )
    goto LABEL_1544;
  v515->m_Items[501] = (DataMasterBase_o *)v3026;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[501], (int32_t)v3026, v3027, v3028);
  v3031 = (BattlePointPhaseMaster_o *)sub_1B64314(BattlePointPhaseMaster_TypeInfo, v3029, v3030);
  BattlePointPhaseMaster___ctor(v3031, 0LL);
  if ( v3031 )
  {
    v519 = sub_1B64204(v3031, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F6 )
    goto LABEL_1544;
  v515->m_Items[502] = (DataMasterBase_o *)v3031;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[502], (int32_t)v3031, v3032, v3033);
  v3036 = (ServantBattlePointMaster_o *)sub_1B64314(ServantBattlePointMaster_TypeInfo, v3034, v3035);
  ServantBattlePointMaster___ctor(v3036, 0LL);
  if ( v3036 )
  {
    v519 = sub_1B64204(v3036, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F7 )
    goto LABEL_1544;
  v515->m_Items[503] = (DataMasterBase_o *)v3036;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[503], (int32_t)v3036, v3037, v3038);
  v3041 = (EffectMovieMaster_o *)sub_1B64314(EffectMovieMaster_TypeInfo, v3039, v3040);
  EffectMovieMaster___ctor(v3041, 0LL);
  if ( v3041 )
  {
    v519 = sub_1B64204(v3041, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F8 )
    goto LABEL_1544;
  v515->m_Items[504] = (DataMasterBase_o *)v3041;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[504], (int32_t)v3041, v3042, v3043);
  v3046 = (PaymentLimitMaster_o *)sub_1B64314(PaymentLimitMaster_TypeInfo, v3044, v3045);
  PaymentLimitMaster___ctor(v3046, 0LL);
  if ( v3046 )
  {
    v519 = sub_1B64204(v3046, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1F9 )
    goto LABEL_1544;
  v515->m_Items[505] = (DataMasterBase_o *)v3046;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[505], (int32_t)v3046, v3047, v3048);
  v3051 = (UserPaymentLimitMaster_o *)sub_1B64314(UserPaymentLimitMaster_TypeInfo, v3049, v3050);
  UserPaymentLimitMaster___ctor(v3051, 0LL);
  if ( v3051 )
  {
    v519 = sub_1B64204(v3051, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FA )
    goto LABEL_1544;
  v515->m_Items[506] = (DataMasterBase_o *)v3051;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[506], (int32_t)v3051, v3052, v3053);
  v3056 = (RoadmapMaster_o *)sub_1B64314(RoadmapMaster_TypeInfo, v3054, v3055);
  RoadmapMaster___ctor(v3056, 0LL);
  if ( v3056 )
  {
    v519 = sub_1B64204(v3056, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FB )
    goto LABEL_1544;
  v515->m_Items[507] = (DataMasterBase_o *)v3056;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[507], (int32_t)v3056, v3057, v3058);
  v3061 = (UserRecommendSupportMaster_o *)sub_1B64314(UserRecommendSupportMaster_TypeInfo, v3059, v3060);
  UserRecommendSupportMaster___ctor(v3061, 0LL);
  if ( v3061 )
  {
    v519 = sub_1B64204(v3061, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FC )
    goto LABEL_1544;
  v515->m_Items[508] = (DataMasterBase_o *)v3061;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[508], (int32_t)v3061, v3062, v3063);
  v3066 = (RecommendSupportQuestMaster_o *)sub_1B64314(RecommendSupportQuestMaster_TypeInfo, v3064, v3065);
  RecommendSupportQuestMaster___ctor(v3066, 0LL);
  if ( v3066 )
  {
    v519 = sub_1B64204(v3066, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FD )
    goto LABEL_1544;
  v515->m_Items[509] = (DataMasterBase_o *)v3066;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[509], (int32_t)v3066, v3067, v3068);
  v3071 = (RecommendAdviceMessageMaster_o *)sub_1B64314(RecommendAdviceMessageMaster_TypeInfo, v3069, v3070);
  RecommendAdviceMessageMaster___ctor(v3071, 0LL);
  if ( v3071 )
  {
    v519 = sub_1B64204(v3071, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FE )
    goto LABEL_1544;
  v515->m_Items[510] = (DataMasterBase_o *)v3071;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[510], (int32_t)v3071, v3072, v3073);
  v3076 = (UserRecommendFollowerMaster_o *)sub_1B64314(UserRecommendFollowerMaster_TypeInfo, v3074, v3075);
  UserRecommendFollowerMaster___ctor(v3076, 0LL);
  if ( v3076 )
  {
    v519 = sub_1B64204(v3076, v515->obj.klass->_1.element_class);
    if ( !v519 )
      goto LABEL_1545;
  }
  if ( *p_max_length <= 0x1FF )
    goto LABEL_1544;
  v515->m_Items[511] = (DataMasterBase_o *)v3076;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[511], (int32_t)v3076, v3077, v3078);
  v3081 = (ItemDropEfficiencyMaster_o *)sub_1B64314(ItemDropEfficiencyMaster_TypeInfo, v3079, v3080);
  ItemDropEfficiencyMaster___ctor(v3081, 0LL);
  if ( v3081 )
  {
    v519 = sub_1B64204(v3081, v515->obj.klass->_1.element_class);
    if ( !v519 )
    {
LABEL_1545:
      v3085 = sub_1B64348(v519);
      sub_1B641F0(v3085, 0LL);
    }
  }
  if ( *p_max_length <= 0x200 )
LABEL_1544:
    sub_1B6432C(v519, v520);
  v515->m_Items[512] = (DataMasterBase_o *)v3081;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v515->m_Items[512], (int32_t)v3081, v3082, v3083);
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

  if ( (byte_49FBF5A & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    sub_1B640C8(&ManagerConfig_TypeInfo, v2);
    byte_49FBF5A = 1;
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  struct System_Collections_Generic_List_string__o **p_masterCheckName; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  int v13; // w26
  Il2CppObject *v14; // x0
  System_String_o *v15; // x21
  System_String_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_object__o *v19; // x0
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x8
  int v24; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FBF57 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_8480/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v8);
    byte_49FBF57 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)v9;
  p_masterCheckName = &this->fields.masterCheckName;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_masterCheckName, (int32_t)v9, v11, v12);
  v13 = 1;
  do
  {
    v24 = v13;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
    v15 = System_String__Format((System_String_o *)StringLiteral_8480/*"MASTER_DATA_EMPTY_LIST{0:000}"*/, v14, 0LL);
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get(v15, 0LL);
    if ( System_String__op_Equality(v16, v15, 0LL) )
      break;
    v19 = (System_Collections_Generic_List_object__o *)*p_masterCheckName;
    if ( *p_masterCheckName )
    {
      items = v19->fields._items;
      v21 = Method_System_Collections_Generic_List_string__Add__;
      ++v19->fields._version;
      if ( items )
        continue;
    }
    sub_1B64324(v19);
    size = v19->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        (Il2CppObject *)v16,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v19->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v16;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v16, v17, v18);
    }
    ++v13;
  }
  while ( v13 != 999 );
}


Il2CppObject *__fastcall DataManager__GetMasterData_object_(DataManager_o *this, const MethodInfo_2E393EC *method)
{
  const MethodInfo_2E393EC_RGCTXs *rgctx_data; // x8
  const MethodInfo_2E393EC *_1_TMaster; // x19
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
  Il2CppObject *v18; // x21
  Il2CppObject *v19; // x0
  Il2CppObject *v20; // x19
  System_Enum_o v21; // [xsp+8h] [xbp-48h] BYREF
  int v22; // [xsp+18h] [xbp-38h]
  int v23; // [xsp+24h] [xbp-2Ch] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF
  System_RuntimeTypeHandle_o v25; // 0:w0.4

  rgctx_data = method->rgctx_data;
  _1_TMaster = method;
  if ( !rgctx_data )
  {
    sub_1B640C8(&UnityEngine_Debug_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__, v5);
    sub_1B640C8(&int_TypeInfo, v6);
    sub_1B640C8(&DataNameKind_Kind_TypeInfo, v7);
    sub_1B640C8(&System_Type_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_21234/*"master[{0}] is null[{1}:{2}]"*/, v9);
    rgctx_data = _1_TMaster->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000();
      rgctx_data = _1_TMaster->rgctx_data;
    }
  }
  value = 0LL;
  _0_DataMasterBase_GetRegisteredKind_TMaster = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_;
  v11 = rgctx_data->_0_DataMasterBase_GetRegisteredKind_TMaster_->rgctx_data;
  if ( !v11 )
  {
    sub_1BB6000();
    v11 = _0_DataMasterBase_GetRegisteredKind_TMaster->rgctx_data;
  }
  rgctxDataDummy = (System_Type_o *)v11[1].rgctxDataDummy;
  if ( (*((_BYTE *)&rgctxDataDummy[12].fields + 5) & 1) == 0 )
    rgctxDataDummy = (System_Type_o *)sub_1BB5FA4(rgctxDataDummy);
  lookup = this->fields.lookup;
  if ( !lookup )
    goto LABEL_23;
  LODWORD(v14) = **(_DWORD **)&rgctxDataDummy[7].fields._impl.fields.value;
  if ( System_Collections_Generic_Dictionary_int__object___TryGetValue(
         (System_Collections_Generic_Dictionary_int__object__o *)lookup,
         (int32_t)v14,
         &value,
         (const MethodInfo_3125110 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__TryGetValue__) )
  {
    v14 = value;
    _1_TMaster = (const MethodInfo_2E393EC *)_1_TMaster->rgctx_data->_1_TMaster;
    if ( (BYTE5(_1_TMaster[3].return_type) & 1) == 0 )
      _1_TMaster = (const MethodInfo_2E393EC *)sub_1BB5FA4(_1_TMaster);
    if ( !v14 )
      return 0LL;
    result = (Il2CppObject *)sub_1B64204(v14, _1_TMaster);
    if ( result )
      return result;
    sub_1B645E4(v14);
  }
  _2_TMaster = _1_TMaster->rgctx_data->_2_TMaster;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v25.fields.value = (int)_2_TMaster;
  rgctxDataDummy = System_Type__GetTypeFromHandle(v25, 0LL);
  if ( !rgctxDataDummy )
LABEL_23:
    sub_1B64324(rgctxDataDummy);
  v17 = (Il2CppObject *)((__int64 (__fastcall *)(System_Type_o *, Il2CppMethodPointer))rgctxDataDummy->klass->vtable._3_ToString.method)(
                          rgctxDataDummy,
                          rgctxDataDummy->klass->vtable._4_unknown.methodPtr);
  v23 = (int)v14;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  v22 = (int)v14;
  v21.klass = (System_Enum_c *)DataNameKind_Kind_TypeInfo;
  v21.monitor = (void *)-1LL;
  v19 = (Il2CppObject *)System_Enum__ToString(&v21, 0LL);
  v20 = (Il2CppObject *)System_String__Format_61389836((System_String_o *)StringLiteral_21234/*"master[{0}] is null[{1}:{2}]"*/, v17, v18, v19, 0LL);
  if ( !UnityEngine_Debug_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Debug_TypeInfo);
  UnityEngine_Debug__LogError(v20, 0LL);
  return 0LL;
}


Il2CppObject *__fastcall DataManager__GetMaster_object_(const MethodInfo_2E39398 *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x0

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v1);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  return DataManager__GetMasterData_object_(
           (DataManager_o *)Instance,
           (const MethodInfo_2E393EC *)method->rgctx_data->_0_DataManager_GetMasterData_TMaster_);
}


void __fastcall DataManager__Initialize(DataManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Func_object__o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_49FBF42 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_CreateMasterData__, method);
    sub_1B640C8(&System_Func_DataMasterBase____TypeInfo, v4);
    byte_49FBF42 = 1;
  }
  v5 = (System_Func_object__o *)sub_1B64314(System_Func_DataMasterBase____TypeInfo, method, v2);
  System_Func_object____ctor(v5, 0LL, Method_DataManager_CreateMasterData__, 0LL);
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
  struct DataMasterBase_array *datalist; // x22
  int max_length; // w8
  __int64 v9; // x19
  __int64 v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_int__object__o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  int v16; // w8
  unsigned int v17; // w23
  __int64 v18; // x2
  int32_t v19; // w2
  int32_t v20; // w3

  v4 = this;
  if ( (byte_49FBF43 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__, createMasterDataMethod);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__, v5);
    this = (DataManager_o *)sub_1B640C8(&System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo, v6);
    byte_49FBF43 = 1;
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
          v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B64314(
                                                                          System_Collections_Generic_Dictionary_int__DataMasterBase__TypeInfo,
                                                                          v11,
                                                                          v12),
          System_Collections_Generic_Dictionary_int__object____ctor(
            v13,
            (const MethodInfo_3122FB0 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase___ctor__),
          !v10) )
    {
LABEL_19:
      sub_1B64324(this);
    }
    v16 = *(_DWORD *)(v10 + 24);
    if ( v16 >= 1 )
    {
      v17 = 0;
      while ( v17 < v16 )
      {
        v18 = *(_QWORD *)(v10 + 8LL * (int)v17 + 32);
        if ( !v18 || !v13 )
          goto LABEL_19;
        System_Collections_Generic_Dictionary_int__object___Add(
          v13,
          *(_DWORD *)(v18 + 16),
          (Il2CppObject *)v18,
          (const MethodInfo_3123984 *)Method_System_Collections_Generic_Dictionary_int__DataMasterBase__Add__);
        v16 = *(_DWORD *)(v10 + 24);
        if ( (int)++v17 >= v16 )
          goto LABEL_18;
      }
LABEL_20:
      sub_1B6432C(this, createMasterDataMethod);
    }
LABEL_18:
    v4->fields.datalist = (struct DataMasterBase_array *)v10;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.datalist, v10, v14, v15);
    v4->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)v13;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.lookup, (int32_t)v13, v19, v20);
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
  __int64 v17; // x1
  __int64 v18; // x2
  unsigned __int64 i; // x27
  __int64 v20; // x22
  __int64 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_object__o *saveNameList; // x0
  int32_t v24; // w23
  Il2CppObject *Item; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_List_object__o *saveDataMapList; // x0
  Il2CppObject *v29; // x23
  __int64 v30; // x1
  __int64 v31; // x2
  System_Object_array *datalist; // x24
  System_Predicate_object__o *v33; // x25
  __int64 Index_object; // x0
  __int64 v35; // x1
  const MethodInfo_35CE514 *v36; // x3
  struct DataMasterBase_array *v37; // x8
  DataMasterBase_o *v38; // x25
  Il2CppObject *p_obj; // x22
  System_Threading_SynchronizationContext_o *context; // x24
  __int64 v41; // x0
  __int64 v42; // x1
  const MethodInfo_35CE514 *v43; // x3
  __int64 v44; // x0
  Il2CppObject *lockCountObj; // x22
  int v46; // w1
  _QWORD **v47; // x20
  __int64 v48; // x0
  Il2CppObject *v49; // x20
  __int64 v50; // x0
  struct System_Threading_SynchronizationContext_o *v51; // x20
  __int64 v52; // x0
  __int64 v53; // x0
  System_Threading_SendOrPostCallback_o *v54; // x21
  __int64 v55; // x0
  Il2CppObject *v56; // x23
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 v59; // x2
  intptr_t v60; // w0
  __int64 v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  _QWORD *exception; // x0
  System_Byte_array *work; // [xsp+10h] [xbp-90h]
  System_Nullable_long__o v66; // [xsp+18h] [xbp-88h] BYREF
  System_Nullable_long__o v67; // [xsp+28h] [xbp-78h] BYREF
  bool lockTaken[4]; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v69; // 0:x0.16
  System_Nullable_long__o v70; // 0:x0.16

  v5 = this;
  if ( (byte_49FBF54 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindIndex_DataMasterBase___, indexList);
    sub_1B640C8(&byte___TypeInfo, v6);
    sub_1B640C8(&int___TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____get_Item__, v9);
    sub_1B640C8(&Method_System_Nullable_long___ctor__, v10);
    sub_1B640C8(&System_Predicate_DataMasterBase__TypeInfo, v11);
    sub_1B640C8(&Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__, v12);
    this = (DataManager_o *)sub_1B640C8(&DataManager___c__DisplayClass58_0_TypeInfo, v13);
    byte_49FBF54 = 1;
  }
  lockTaken[0] = 0;
  if ( !indexList )
    sub_1B64324(this);
  v14 = sub_1B64204(indexList, int___TypeInfo);
  v15 = v14;
  if ( v14 )
  {
    v16 = *(unsigned int *)(v14 + 24);
    work = (System_Byte_array *)sub_1B64170(byte___TypeInfo, 2000LL);
    if ( (int)v16 >= 1 )
    {
      for ( i = 0LL; i != v16; ++i )
      {
        v20 = sub_1B64314(DataManager___c__DisplayClass58_0_TypeInfo, v17, v18);
        DataManager___c__DisplayClass58_0___ctor((DataManager___c__DisplayClass58_0_o *)v20, 0LL);
        if ( i >= *(unsigned int *)(v15 + 24) )
          sub_1B6432C(v21, v22);
        saveNameList = (System_Collections_Generic_List_object__o *)v5->fields.saveNameList;
        if ( !saveNameList )
          sub_1B64324(0LL);
        v24 = *(_DWORD *)(v15 + 32 + 4 * i);
        Item = System_Collections_Generic_List_object___get_Item(
                 saveNameList,
                 v24,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
        if ( !v20 )
          sub_1B64324(Item);
        *(_QWORD *)(v20 + 16) = Item;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v20 + 16), (int32_t)Item, v26, v27);
        saveDataMapList = (System_Collections_Generic_List_object__o *)v5->fields.saveDataMapList;
        if ( !saveDataMapList )
          sub_1B64324(0LL);
        v29 = System_Collections_Generic_List_object___get_Item(
                saveDataMapList,
                v24,
                (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_long____get_Item__);
        if ( !System_String__IsNullOrEmpty(*(System_String_o **)(v20 + 16), 0LL) )
        {
          datalist = (System_Object_array *)v5->fields.datalist;
          v33 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_DataMasterBase__TypeInfo, v30, v31);
          System_Predicate_object____ctor(
            v33,
            (Il2CppObject *)v20,
            Method_DataManager___c__DisplayClass58_0__LoadMasterDataThread_b__0__,
            0LL);
          Index_object = System_Array__FindIndex_object_(
                           datalist,
                           (System_Predicate_T__o *)v33,
                           (const MethodInfo_2F30B3C *)Method_System_Array_FindIndex_DataMasterBase___);
          if ( (Index_object & 0x80000000) == 0 )
          {
            v37 = v5->fields.datalist;
            if ( !v37 )
              sub_1B64324(Index_object);
            if ( (unsigned int)Index_object >= v37->max_length )
              sub_1B6432C(Index_object, v35);
            if ( !v29 )
              sub_1B64324(Index_object);
            if ( !LODWORD(v29[1].monitor) )
              sub_1B6432C(Index_object, v35);
            v38 = v37->m_Items[(unsigned int)Index_object];
            p_obj = &v5->fields.masterDataBytes->obj;
            context = v5->fields.context;
            v69.fields.value = (int64_t)v29[2].klass;
            *(_QWORD *)&v67.fields.hasValue = 0LL;
            v67.fields.value = 0LL;
            *(_QWORD *)&v69.fields.hasValue = &v67;
            System_Nullable_long____ctor(v69, Method_System_Nullable_long___ctor__, v36);
            if ( LODWORD(v29[1].monitor) <= 1 )
              sub_1B6432C(v41, v42);
            v70.fields.value = (int64_t)v29[2].monitor;
            *(_QWORD *)&v66.fields.hasValue = 0LL;
            v66.fields.value = 0LL;
            *(_QWORD *)&v70.fields.hasValue = &v66;
            System_Nullable_long____ctor(v70, Method_System_Nullable_long___ctor__, v43);
            if ( !v38 )
              sub_1B64324(v44);
            DataMasterBase__ReplacedForThread(v38, p_obj, context, v67, v66, work, 0LL);
          }
        }
        lockCountObj = v5->fields.lockCountObj;
        lockTaken[0] = 0;
        System_Threading_Monitor__Enter_62601116(lockCountObj, lockTaken, 0LL);
        ++v5->fields.nowLoadCount;
        if ( lockTaken[0] )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
      }
    }
  }
  else
  {
    sub_1B645E4(indexList);
    if ( v46 != 1 )
      sub_1C4EB58();
    v47 = (_QWORD **)__cxa_begin_catch(v3);
    v48 = sub_1B640DC(&System_Threading_ThreadAbortException_TypeInfo);
    if ( (j_il2cpp_class_is_assignable_from_0(v48, **v47) & 1) != 0 )
    {
      __cxa_end_catch();
      v49 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_62601116(v49, lockTaken, 0LL);
    }
    else
    {
      v50 = sub_1B640DC(&System_Exception_TypeInfo);
      if ( (j_il2cpp_class_is_assignable_from_0(v50, **v47) & 1) == 0 )
      {
        exception = __cxa_allocate_exception(8u);
        *exception = *v47;
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'Il2CppExceptionWrapper, 0LL);
      }
      __cxa_end_catch();
      v51 = v5->fields.context;
      v52 = sub_1B640DC(&DataManager___c_TypeInfo);
      if ( !*(_DWORD *)(v52 + 224) )
        j_il2cpp_runtime_class_init_0(v52);
      v53 = sub_1B640DC(&DataManager___c_TypeInfo);
      v54 = *(System_Threading_SendOrPostCallback_o **)(*(_QWORD *)(v53 + 184) + 8LL);
      if ( !v54 )
      {
        v55 = sub_1B640DC(&DataManager___c_TypeInfo);
        if ( !*(_DWORD *)(v55 + 224) )
          j_il2cpp_runtime_class_init_0(v55);
        v56 = **(Il2CppObject ***)(sub_1B640DC(&DataManager___c_TypeInfo) + 184);
        v57 = sub_1B640DC(&System_Threading_SendOrPostCallback_TypeInfo);
        v54 = (System_Threading_SendOrPostCallback_o *)sub_1B64314(v57, v58, v59);
        v60 = sub_1B640DC(&Method_DataManager___c__LoadMasterDataThread_b__58_1__);
        System_Threading_SendOrPostCallback___ctor(v54, v56, v60, 0LL);
        *(_QWORD *)(*(_QWORD *)(sub_1B640DC(&DataManager___c_TypeInfo) + 184) + 8LL) = v54;
        v61 = sub_1B640DC(&DataManager___c_TypeInfo);
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(*(_QWORD *)(v61 + 184) + 8LL), (int32_t)v54, v62, v63);
      }
      if ( !v51 )
        sub_1B64324(v53);
      ((void (__fastcall *)(struct System_Threading_SynchronizationContext_o *, System_Threading_SendOrPostCallback_o *, _QWORD, Il2CppMethodPointer))v51->klass->vtable._5_Post.method)(
        v51,
        v54,
        0LL,
        v51->klass->vtable._6_OperationStarted.methodPtr);
      v49 = v5->fields.lockCountObj;
      lockTaken[0] = 0;
      System_Threading_Monitor__Enter_62601116(v49, lockTaken, 0LL);
    }
    v5->fields.isFailedLoad = 1;
    if ( lockTaken[0] )
      System_Threading_Monitor__Exit(v49, 0LL);
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
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Threading_SynchronizationContext_o *Current; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x1
  __int64 v31; // x2
  System_Collections_Generic_List_object__o *v32; // x22
  struct System_Collections_Generic_List_Thread__o **p_masterLoadThreads; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_int__o *v36; // x0
  System_Int32_array *v37; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  System_Comparison_int__o *v40; // x22
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x1
  __int64 v47; // x2
  System_Threading_ParameterizedThreadStart_o *v48; // x24
  __int64 v49; // x1
  __int64 v50; // x2
  System_Threading_Thread_o *v51; // x23
  __int64 v52; // x1
  __int64 v53; // x2
  System_Func_int__bool__o *v54; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Int32_array *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x8
  int v63; // w8
  bool v64; // nf

  if ( (byte_49FBF52 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Sort_int____75704768, *(_QWORD *)&maxIndex);
    sub_1B640C8(&System_Comparison_int__TypeInfo, v7);
    sub_1B640C8(&Method_DataManager_LoadMasterDataThread__, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_1B640C8(&System_Func_int__bool__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Thread__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_Thread___ctor__, v13);
    sub_1B640C8(&System_Collections_Generic_List_Thread__TypeInfo, v14);
    sub_1B640C8(&System_Threading_ParameterizedThreadStart_TypeInfo, v15);
    sub_1B640C8(&System_Threading_Thread_TypeInfo, v16);
    sub_1B640C8(&Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__, v17);
    sub_1B640C8(&DataManager___c__DisplayClass56_0_TypeInfo, v18);
    sub_1B640C8(&Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__, v19);
    sub_1B640C8(&DataManager___c__DisplayClass56_1_TypeInfo, v20);
    byte_49FBF52 = 1;
  }
  v21 = sub_1B64314(DataManager___c__DisplayClass56_0_TypeInfo, *(_QWORD *)&maxIndex, loadedIndices);
  DataManager___c__DisplayClass56_0___ctor((DataManager___c__DisplayClass56_0_o *)v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  *(_QWORD *)(v21 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 16), (int32_t)this, v23, v24);
  *(_QWORD *)(v21 + 24) = loadedIndices;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 24), (int32_t)loadedIndices, v25, v26);
  Current = System_Threading_SynchronizationContext__get_Current(0LL);
  this->fields.context = Current;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.context, (int32_t)Current, v28, v29);
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Thread__TypeInfo,
                                                       v30,
                                                       v31);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Thread___ctor__);
  this->fields.masterLoadThreads = (struct System_Collections_Generic_List_Thread__o *)v32;
  p_masterLoadThreads = &this->fields.masterLoadThreads;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.masterLoadThreads, (int32_t)v32, v34, v35);
  v36 = System_Linq_Enumerable__Range(0, maxIndex, 0LL);
  v37 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v36,
          (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
  v40 = (System_Comparison_int__o *)sub_1B64314(System_Comparison_int__TypeInfo, v38, v39);
  System_Comparison_int____ctor(
    v40,
    (Il2CppObject *)v21,
    Method_DataManager___c__DisplayClass56_0__StartMasterLoadThread_b__0__,
    0LL);
  System_Array__Sort_int__48264244(
    v37,
    (System_Comparison_T__o *)v40,
    (const MethodInfo_2E07434 *)Method_System_Array_Sort_int____75704768);
  v43 = sub_1B64314(DataManager___c__DisplayClass56_1_TypeInfo, v41, v42);
  DataManager___c__DisplayClass56_1___ctor((DataManager___c__DisplayClass56_1_o *)v43, 0LL);
  if ( !v43 )
LABEL_14:
    sub_1B64324(v22);
  *(_QWORD *)(v43 + 24) = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 24), v21, v44, v45);
  *(_DWORD *)(v43 + 16) = 0;
  do
  {
    v48 = (System_Threading_ParameterizedThreadStart_o *)sub_1B64314(
                                                           System_Threading_ParameterizedThreadStart_TypeInfo,
                                                           v46,
                                                           v47);
    System_Threading_ParameterizedThreadStart___ctor(
      v48,
      (Il2CppObject *)this,
      Method_DataManager_LoadMasterDataThread__,
      0LL);
    v51 = (System_Threading_Thread_o *)sub_1B64314(System_Threading_Thread_TypeInfo, v49, v50);
    System_Threading_Thread___ctor_62637196(v51, v48, 0LL);
    if ( !v51 )
      goto LABEL_14;
    System_Threading_Thread__set_IsBackground(v51, 1, 0LL);
    v54 = (System_Func_int__bool__o *)sub_1B64314(System_Func_int__bool__TypeInfo, v52, v53);
    System_Func_int__bool____ctor(
      v54,
      (Il2CppObject *)v43,
      Method_DataManager___c__DisplayClass56_1__StartMasterLoadThread_b__1__,
      0LL);
    v55 = System_Linq_Enumerable__Where_int_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v37,
            (System_Func_TSource__bool__o *)v54,
            (const MethodInfo_2E76DC8 *)Method_System_Linq_Enumerable_Where_int___);
    v56 = System_Linq_Enumerable__ToArray_int_(
            v55,
            (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
    System_Threading_Thread__Start_62637776(v51, &v56->obj, 0LL);
    v22 = (System_Collections_Generic_List_object__o *)*p_masterLoadThreads;
    if ( !*p_masterLoadThreads )
      goto LABEL_14;
    items = v22->fields._items;
    v60 = Method_System_Collections_Generic_List_Thread__Add__;
    ++v22->fields._version;
    if ( !items )
      goto LABEL_14;
    size = v22->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v51,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
    }
    else
    {
      v62 = &items->obj.klass + size;
      v22->fields._size = size + 1;
      v62[4] = (Il2CppClass *)v51;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v51, v57, v58);
    }
    v63 = *(_DWORD *)(v43 + 16) + 1;
    v64 = *(_DWORD *)(v43 + 16) - 4 < 0;
    *(_DWORD *)(v43 + 16) = v63;
  }
  while ( v64 != __OFSUB__(v63, 5) );
}


void __fastcall DataManager__StartWriteLocalFile(
        DataManager_o *this,
        System_String_o *fileName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Threading_ParameterizedThreadStart_o *v10; // x21
  __int64 v11; // x1
  __int64 v12; // x2
  System_Threading_Thread_o *v13; // x22
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x20
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_49FBF55 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_WriteLocalFileThread__, fileName);
    sub_1B640C8(&System_Threading_ParameterizedThreadStart_TypeInfo, v6);
    sub_1B640C8(&System_Threading_Thread_TypeInfo, v7);
    byte_49FBF55 = 1;
  }
  this->fields.writeMasterDataThreadEnd = 0;
  this->fields.writeMasterDataThreadException = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.writeMasterDataThreadException, 0, (int32_t)method, v3);
  v10 = (System_Threading_ParameterizedThreadStart_o *)sub_1B64314(
                                                         System_Threading_ParameterizedThreadStart_TypeInfo,
                                                         v8,
                                                         v9);
  System_Threading_ParameterizedThreadStart___ctor(
    v10,
    (Il2CppObject *)this,
    Method_DataManager_WriteLocalFileThread__,
    0LL);
  v13 = (System_Threading_Thread_o *)sub_1B64314(System_Threading_Thread_TypeInfo, v11, v12);
  System_Threading_Thread___ctor_62637196(v13, v10, 0LL);
  this->fields.writeMasterDataThread = v13;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, (int32_t)v13, v15, v16);
  if ( !*p_writeMasterDataThread )
    sub_1B64324(0LL);
  System_Threading_Thread__Start_62637776(*p_writeMasterDataThread, (Il2CppObject *)fileName, 0LL);
}


void __fastcall DataManager__StopMasterLoadThread(DataManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  ServantStatusBattleListViewItem_o *p_masterLoadThreads; // x19
  struct System_Collections_Generic_List_Thread__o *masterLoadThreads; // t1
  int32_t v6; // w20
  System_Threading_Thread_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FBF53 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Thread__get_Item__, method);
    byte_49FBF53 = 1;
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
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_Thread__get_Item__);
      if ( !Item )
LABEL_10:
        sub_1B64324(Item);
      v7 = (System_Threading_Thread_o *)Item;
      if ( System_Threading_Thread__get_IsAlive((System_Threading_Thread_o *)Item, 0LL) )
        System_Threading_Thread__Abort(v7, 0LL);
      if ( ++v6 == 5 )
        break;
      Item = (Il2CppObject *)p_masterLoadThreads->klass;
      if ( !p_masterLoadThreads->klass )
        goto LABEL_10;
    }
    p_masterLoadThreads->klass = 0LL;
    sub_1B6406C(p_masterLoadThreads, 0, v8, v9);
  }
}


void __fastcall DataManager__StopWriteLocalFile(DataManager_o *this, const MethodInfo *method)
{
  System_Threading_Thread_o *writeMasterDataThread; // x0
  System_Threading_Thread_o **p_writeMasterDataThread; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  writeMasterDataThread = this->fields.writeMasterDataThread;
  if ( writeMasterDataThread )
  {
    if ( System_Threading_Thread__get_IsAlive(writeMasterDataThread, 0LL) )
    {
      if ( !*p_writeMasterDataThread )
        sub_1B64324(0LL);
      System_Threading_Thread__Abort(*p_writeMasterDataThread, 0LL);
    }
    *p_writeMasterDataThread = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, 0, v4, v5);
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
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  int size; // w26
  int32_t v21; // w22
  Il2CppObject *Item; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_object__o *v24; // x0
  struct System_Byte_array *masterDataBytes; // x23
  Il2CppObject *v26; // x0
  __int64 v27; // x1
  Il2CppClass *klass; // x24
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  __int64 v31; // x0
  System_IO_BinaryWriter_c *v32; // x8
  __int64 v33; // x9
  int32_t *p_offset; // x10
  __int64 v35; // x0
  System_IO_Stream_c *v36; // x8
  __int64 v37; // x9
  int32_t *v38; // x10
  __int64 v39; // x0
  struct System_Threading_Thread_o **p_writeMasterDataThread; // x19

  if ( (byte_49FBF56 & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryWriter_TypeInfo, param);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v5);
    sub_1B640C8(&System_IDisposable_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____get_Item__, v8);
    sub_1B640C8(&string_TypeInfo, v9);
    byte_49FBF56 = 1;
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
  v15 = (System_IO_BinaryWriter_o *)sub_1B64314(System_IO_BinaryWriter_TypeInfo, v13, v14);
  System_IO_BinaryWriter___ctor_61613552(v15, v12, 0LL);
  saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
  if ( !saveDataMapList )
    sub_1B64324(v16);
  size = saveDataMapList->fields._size;
  if ( size < 1 )
  {
    if ( !v15 )
      goto LABEL_34;
  }
  else
  {
    v21 = 0;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               saveDataMapList,
               v21,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !Item )
        sub_1B64324(0LL);
      if ( LODWORD(Item[1].monitor) <= 1 )
        sub_1B6432C(Item, v23);
      if ( !v15 )
        sub_1B64324(Item);
      ((void (__fastcall *)(System_IO_BinaryWriter_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._17_Write.method)(
        v15,
        LODWORD(Item[2].monitor),
        v15->klass->vtable._18_Write.methodPtr);
      v24 = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !v24 )
        sub_1B64324(0LL);
      masterDataBytes = this->fields.masterDataBytes;
      v26 = System_Collections_Generic_List_object___get_Item(
              v24,
              v21,
              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v26 )
        sub_1B64324(0LL);
      if ( !LODWORD(v26[1].monitor) )
        sub_1B6432C(v26, v27);
      if ( !this->fields.saveDataMapList )
        sub_1B64324(v26);
      klass = v26[2].klass;
      v29 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList,
              v21,
              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_long____get_Item__);
      if ( !v29 )
        sub_1B64324(0LL);
      if ( LODWORD(v29[1].monitor) <= 1 )
        sub_1B6432C(v29, v30);
      v31 = ((__int64 (__fastcall *)(System_IO_BinaryWriter_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))v15->klass->vtable._11_Write.method)(
              v15,
              masterDataBytes,
              (unsigned int)klass,
              LODWORD(v29[2].monitor),
              v15->klass->vtable._12_Write.methodPtr);
      if ( size == ++v21 )
        break;
      saveDataMapList = (System_Collections_Generic_List_object__o *)this->fields.saveDataMapList;
      if ( !saveDataMapList )
        sub_1B64324(v31);
    }
  }
  v32 = v15->klass;
  v33 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v32->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v33;
      p_offset += 4;
      if ( !v33 )
        goto LABEL_31;
    }
    v35 = (__int64)(&v32->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_31:
    v35 = sub_1BB60A8(v15, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_IO_BinaryWriter_o *, _QWORD))v35)(v15, *(_QWORD *)(v35 + 8));
LABEL_34:
  if ( v11 )
  {
    v36 = v11->klass;
    v37 = *(unsigned __int16 *)(&v11->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v11->klass->_2.bitflags2 + 3) )
    {
      v38 = &v36->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_39;
      }
      v39 = (__int64)(&v36->vtable._0_Equals.method + 2 * *v38);
    }
    else
    {
LABEL_39:
      v39 = sub_1BB60A8(v11, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_Stream_o *, _QWORD))v39)(v11, *(_QWORD *)(v39 + 8));
  }
  this->fields.writeMasterDataThread = 0LL;
  p_writeMasterDataThread = &this->fields.writeMasterDataThread;
  *((_BYTE *)p_writeMasterDataThread + 8) = 1;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_writeMasterDataThread, 0, v17, v18);
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

  if ( (byte_49FBF3D & 1) == 0 )
  {
    sub_1B640C8(&DatFileName_TypeInfo, v1);
    sub_1B640C8(&DataManager_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBF3D = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(15, 0LL);
  return System_String__Concat_61386656(CachePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheListFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FBF3C & 1) == 0 )
  {
    sub_1B640C8(&DatFileName_TypeInfo, v1);
    sub_1B640C8(&DataManager_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBF3C = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(14, 0LL);
  return System_String__Concat_61386656(CachePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall DataManager__getCachePath(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FolderName; // x2

  if ( (byte_49FBF3A & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&CacheFolderName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBF3A = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderName = CacheFolderName__getFolderName(1, 0LL);
  return System_String__Concat_61386656(DatFileSavePath, (System_String_o *)StringLiteral_1124/*"/"*/, FolderName, 0LL);
}


System_String_o *__fastcall DataManager__getCacheVersionFileName(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  DataManager_c *v4; // x0
  System_String_o *CachePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_49FBF3B & 1) == 0 )
  {
    sub_1B640C8(&DatFileName_TypeInfo, v1);
    sub_1B640C8(&DataManager_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBF3B = 1;
  }
  v4 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  CachePath = DataManager__getCachePath((const MethodInfo *)v4);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(13, 0LL);
  return System_String__Concat_61386656(CachePath, (System_String_o *)StringLiteral_1124/*"/"*/, FileName, 0LL);
}


System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *__fastcall DataManager__getEntityList_object_(
        DataManager_o *this,
        const MethodInfo_2E395E8 *method)
{
  Il2CppObject *Master_object; // x0

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1B64324(0LL);
  return (System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)Master_object[2].klass;
}


System_Object_array *__fastcall DataManager__getEntitys_object__object_(
        DataManager_o *this,
        const MethodInfo_2E3964C *method)
{
  Il2CppObject *Master_object; // x0

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1BB6000();
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)method->rgctx_data->_0_DataManager_GetMaster_TMaster_);
  if ( !Master_object )
    sub_1B64324(0LL);
  return DataMasterBase__getEntitys_object_(
           (DataMasterBase_o *)Master_object,
           (const MethodInfo_2E39C80 *)method->rgctx_data->_2_DataMasterBase_getEntitys_T_);
}


int32_t __fastcall DataManager__getMasterDataVersion(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_49FBF48 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    byte_49FBF48 = 1;
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

  if ( (byte_49FBF49 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    byte_49FBF49 = 1;
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

  if ( (byte_49FBF58 & 1) == 0 )
  {
    sub_1B640C8(&Crc32_TypeInfo, name);
    byte_49FBF58 = 1;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B64324(0LL);
  v7 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                              UTF8,
                              name,
                              UTF8->klass->vtable._20_GetBytes.methodPtr);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
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

  if ( (byte_49FBF3E & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, v1);
    sub_1B640C8(&CacheFolderName_TypeInfo, v2);
    sub_1B640C8(&StringLiteral_1124/*"/"*/, v3);
    byte_49FBF3E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  OldUnityPersistentDataPath = AndroidUtil__GetOldUnityPersistentDataPath(0LL);
  if ( !CacheFolderName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CacheFolderName_TypeInfo);
  FolderNameNotConverted = CacheFolderName__getFolderNameNotConverted(0, 0LL);
  return System_String__Concat_61386656(
           OldUnityPersistentDataPath,
           (System_String_o *)StringLiteral_1124/*"/"*/,
           FolderNameNotConverted,
           0LL);
}


int32_t __fastcall DataManager__getReadMasterDataResult(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_49FBF4D & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    byte_49FBF4D = 1;
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

  if ( (byte_49FBF4C & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    byte_49FBF4C = 1;
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
    sub_1B64324(this);
  }
  LODWORD(this) = 0;
  return (int)this;
}


System_String_o *__fastcall DataManager__getServerHash(DataManager_o *this, const MethodInfo *method)
{
  DataManager_c *v2; // x0

  if ( (byte_49FBF45 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    byte_49FBF45 = 1;
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

  if ( (byte_49FBF50 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    byte_49FBF50 = 1;
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
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FBF4F & 1) == 0 )
  {
    sub_1B640C8(&DataManager__readMasterData_d__47_TypeInfo, method);
    byte_49FBF4F = 1;
  }
  v4 = sub_1B64314(DataManager__readMasterData_d__47_TypeInfo, method, v2);
  DataManager__readMasterData_d__47___ctor((DataManager__readMasterData_d__47_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
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
  DataManager_o *v31; // x1
  System_String_o *AllText; // x20
  System_String_o *v33; // x20
  System_Char_array *v34; // x0
  System_String_o *v35; // x20
  System_Char_array *v36; // x0
  il2cpp_array_size_t max_length; // w8
  int v38; // w22
  __int64 *v39; // x8
  System_String_o *v40; // x0
  System_String_o *v41; // x21
  System_String_o *v42; // x21
  System_String_o *v43; // x20
  System_Text_Encoding_o *UTF8; // x0
  System_Byte_array *v45; // x22
  uint32_t v46; // w22
  System_Char_array *v47; // x0
  il2cpp_array_size_t v48; // w8
  DataManager_o *v49; // x20
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  System_String_o *v51; // x21
  DataManager_o *v52; // x21
  System_String_o *v53; // x0
  ManagerConfig_c *v54; // x8
  System_String_o *v55; // x22
  int32_t v56; // w2
  int32_t v57; // w3
  DataManager_o *v58; // x20
  int32_t v59; // w1
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w1
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Byte_array *v67; // x1
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w1
  ServantStatusBattleListViewItem_o *p_saveNameList; // x0
  int v73; // w22
  int64_t v74; // x0
  DataManager_c *v75; // x8
  int64_t v76; // x21
  struct DataManager_StaticFields *static_fields; // x9
  struct System_Threading_CancellationTokenSource_o *v78; // x22
  unsigned int v79; // w23
  System_String_o *v80; // x21
  int32_t v81; // w2
  int32_t v82; // w3
  DataManager_o *v83; // x8
  Il2CppObject *v84; // x1
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
  if ( (byte_49FBF5D & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, method);
    sub_1B640C8(&char___TypeInfo, v3);
    sub_1B640C8(&Crc32_TypeInfo, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____Clear__, v8);
    sub_1B640C8(&ManagerConfig_TypeInfo, v9);
    sub_1B640C8(&string___TypeInfo, v10);
    sub_1B640C8(&StringLiteral_5091/*"DataManager version load crc error : チェックサム値が不一致"*/, v11);
    sub_1B640C8(&StringLiteral_5094/*"DataManager version load error : list file parameter error"*/, v12);
    sub_1B640C8(&StringLiteral_117/*" "*/, v13);
    sub_1B640C8(&StringLiteral_25054/*"~"*/, v14);
    sub_1B640C8(&StringLiteral_824/*") -> ("*/, v15);
    sub_1B640C8(&StringLiteral_815/*")"*/, v16);
    sub_1B640C8(&StringLiteral_1888/*"@"*/, v17);
    sub_1B640C8(&StringLiteral_21210/*"master versiton different ("*/, v18);
    sub_1B640C8(&StringLiteral_5095/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/, v19);
    sub_1B640C8(&StringLiteral_5096/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v20);
    this = (DataManager_o *)sub_1B640C8(&StringLiteral_5093/*"DataManager version load error : list file break"*/, v21);
    byte_49FBF5D = 1;
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
    DataManager__ClearSaveDataList(v2, (const MethodInfo *)v31);
    return 0;
  }
  AllText = System_IO_File__ReadAllText(CacheListFileName, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v33 = CatAndMouseGame__MouseGame3(AllText, 0LL);
  if ( v33 )
  {
    v34 = (System_Char_array *)sub_1B64170(char___TypeInfo, 1LL);
    if ( !v34 )
      sub_1B64324(0LL);
    if ( !v34->max_length )
      sub_1B6432C(v34, v34);
    v34->m_Items[2] = -257;
    v35 = System_String__Trim_61405136(v33, v34, 0LL);
    v36 = (System_Char_array *)sub_1B64170(char___TypeInfo, 2LL);
    if ( !v36 )
      sub_1B64324(0LL);
    max_length = v36->max_length;
    if ( !max_length )
      sub_1B6432C(v36, v36);
    v36->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B6432C(v36, v36);
    v36->m_Items[3] = 10;
    if ( !v35 )
      sub_1B64324(v36);
    v38 = System_String__IndexOfAny(v35, v36, 0LL);
    if ( v38 < 2 )
    {
      v39 = &StringLiteral_5095/*"DataManager version load error : ファイル先頭の１行目の内容が空"*/;
      goto LABEL_63;
    }
    v40 = System_String__Substring_61394392(v35, 0, v38, 0LL);
    v41 = v40;
    if ( !v40 )
      sub_1B64324(0LL);
    if ( System_String__StartsWith(v40, (System_String_o *)StringLiteral_25054/*"~"*/, 0LL) )
    {
      v42 = System_String__Substring(v41, 1, 0LL);
      v43 = System_String__Substring(v35, v38 + 1, 0LL);
      UTF8 = System_Text_Encoding__get_UTF8(0LL);
      if ( !UTF8 )
        sub_1B64324(0LL);
      v45 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                   UTF8,
                                   v43,
                                   UTF8->klass->vtable._20_GetBytes.methodPtr);
      if ( !Crc32_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
      v46 = Crc32__Compute(v45, 0LL);
      if ( System_UInt32__Parse(v42, 0LL) == v46 )
      {
        v47 = (System_Char_array *)sub_1B64170(char___TypeInfo, 2LL);
        if ( !v47 )
          sub_1B64324(0LL);
        v48 = v47->max_length;
        if ( !v48 )
          sub_1B6432C(v47, v47);
        v47->m_Items[2] = 13;
        if ( v48 == 1 )
          sub_1B6432C(v47, v47);
        v47->m_Items[3] = 10;
        if ( !v43 )
          sub_1B64324(v47);
        this = (DataManager_o *)System_String__Split_61397780(v43, v47, 1, 0LL);
        v49 = this;
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
          if ( !LODWORD(v49->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          v51 = *(System_String_o **)&v49->fields._DispLog;
          this = (DataManager_o *)sub_1B64170(char___TypeInfo, 1LL);
          if ( !this )
            goto LABEL_119;
          v31 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          *(_WORD *)&this->fields._DispLog = 44;
          if ( !v51 )
            goto LABEL_119;
          this = (DataManager_o *)System_String__Split_61397544(v51, (System_Char_array *)this, 0LL);
          if ( !this )
            goto LABEL_119;
          v52 = this;
          if ( !LODWORD(this->fields.m_CancellationTokenSource) )
            goto LABEL_113;
          this = *(DataManager_o **)&this->fields._DispLog;
          if ( !this )
            goto LABEL_119;
          v53 = System_String__Substring((System_String_o *)this, 1, 0LL);
          v54 = ManagerConfig_TypeInfo;
          v55 = v53;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v54 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(v54->static_fields->MasterDataCacheVer, v55, 0LL) )
          {
            this = (DataManager_o *)sub_1B64170(string___TypeInfo, 5LL);
            if ( this )
            {
              v58 = this;
              if ( LODWORD(this->fields.m_CancellationTokenSource) )
              {
                v59 = StringLiteral_21210/*"master versiton different ("*/;
                *(_QWORD *)&this->fields._DispLog = StringLiteral_21210/*"master versiton different ("*/;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._DispLog, v59, v56, v57);
                if ( LODWORD(v58->fields.m_CancellationTokenSource) > 1 )
                {
                  v58->fields.datalist = (struct DataMasterBase_array *)v55;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->fields.datalist, (int32_t)v55, v60, v61);
                  if ( LODWORD(v58->fields.m_CancellationTokenSource) > 2 )
                  {
                    v64 = StringLiteral_824/*") -> ("*/;
                    v58->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_824/*") -> ("*/;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->fields.lookup, v64, v62, v63);
                    this = (DataManager_o *)ManagerConfig_TypeInfo;
                    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                      this = (DataManager_o *)ManagerConfig_TypeInfo;
                    }
                    if ( LODWORD(v58->fields.m_CancellationTokenSource) > 3 )
                    {
                      v67 = *(struct System_Byte_array **)(*(_QWORD *)&this[1].fields._DispLog + 32LL);
                      v58->fields.masterDataBytes = v67;
                      sub_1B6406C(
                        (ServantStatusBattleListViewItem_o *)&v58->fields.masterDataBytes,
                        (int32_t)v67,
                        v65,
                        v66);
                      if ( LODWORD(v58->fields.m_CancellationTokenSource) > 4 )
                      {
                        v70 = StringLiteral_815/*")"*/;
                        v58->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_815/*")"*/;
                        p_saveNameList = (ServantStatusBattleListViewItem_o *)&v58->fields.saveNameList;
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
          if ( LODWORD(v52->fields.m_CancellationTokenSource) == 3 )
          {
            this = (DataManager_o *)System_Int32__Parse((System_String_o *)v52->fields.datalist, 0LL);
            v112 = (int)this;
            if ( LODWORD(v52->fields.m_CancellationTokenSource) <= 2 )
              goto LABEL_113;
            v73 = (int)this;
            v74 = System_Int64__Parse((System_String_o *)v52->fields.lookup, 0LL);
            v75 = DataManager_TypeInfo;
            v111 = v74;
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
              v78 = v49->fields.m_CancellationTokenSource;
              if ( (int)v78 < 2 )
                return 1;
              v79 = 2;
              while ( 1 )
              {
                v80 = (System_String_o *)*((_QWORD *)&v49->fields._DispLog + (int)(v79 - 1));
                this = (DataManager_o *)sub_1B64170(char___TypeInfo, 1LL);
                if ( !this )
                  break;
                v31 = this;
                if ( !LODWORD(this->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
                *(_WORD *)&this->fields._DispLog = 44;
                if ( !v80 )
                  break;
                this = (DataManager_o *)System_String__Split_61397544(v80, (System_Char_array *)this, 0LL);
                if ( !this )
                  break;
                v83 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) != 1 )
                  return 1;
                this = (DataManager_o *)v2->fields.saveNameList;
                if ( !this )
                  break;
                v84 = *(Il2CppObject **)&v83->fields._DispLog;
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
                    v84,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v88 = v85 + 8 * m_CancellationTokenSource_low;
                  LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
                  *(_QWORD *)(v88 + 32) = v84;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v88 + 32), (int32_t)v84, v81, v82);
                }
                if ( (_DWORD)v78 == v79 )
                  return 1;
                if ( v79++ >= LODWORD(v49->fields.m_CancellationTokenSource) )
                  goto LABEL_113;
              }
            }
            else
            {
LABEL_91:
              this = (DataManager_o *)sub_1B64170(string___TypeInfo, 9LL);
              if ( this )
              {
                v58 = this;
                if ( LODWORD(this->fields.m_CancellationTokenSource) )
                {
                  v92 = StringLiteral_21210/*"master versiton different ("*/;
                  *(_QWORD *)&this->fields._DispLog = StringLiteral_21210/*"master versiton different ("*/;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._DispLog, v92, v90, v91);
                  v93 = DataManager_TypeInfo;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v93 = DataManager_TypeInfo;
                  }
                  this = (DataManager_o *)System_Int32__ToString((int32_t)v93->static_fields, 0LL);
                  if ( LODWORD(v58->fields.m_CancellationTokenSource) > 1 )
                  {
                    v58->fields.datalist = (struct DataMasterBase_array *)this;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->fields.datalist, (int32_t)this, v94, v95);
                    if ( LODWORD(v58->fields.m_CancellationTokenSource) > 2 )
                    {
                      v98 = (int)StringLiteral_117/*" "*/;
                      v58->fields.lookup = (struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *)StringLiteral_117/*" "*/;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->fields.lookup, v98, v96, v97);
                      this = (DataManager_o *)System_Int64__ToString(
                                                (int64_t)&DataManager_TypeInfo->static_fields->readDateVersion,
                                                0LL);
                      if ( LODWORD(v58->fields.m_CancellationTokenSource) > 3 )
                      {
                        v58->fields.masterDataBytes = (struct System_Byte_array *)this;
                        sub_1B6406C(
                          (ServantStatusBattleListViewItem_o *)&v58->fields.masterDataBytes,
                          (int32_t)this,
                          v99,
                          v100);
                        if ( LODWORD(v58->fields.m_CancellationTokenSource) > 4 )
                        {
                          v103 = StringLiteral_824/*") -> ("*/;
                          v58->fields.saveNameList = (struct System_Collections_Generic_List_string__o *)StringLiteral_824/*") -> ("*/;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v58->fields.saveNameList, v103, v101, v102);
                          this = (DataManager_o *)System_Int32__ToString((int32_t)&v112, 0LL);
                          if ( LODWORD(v58->fields.m_CancellationTokenSource) > 5 )
                          {
                            v58->fields.saveDataMapList = (struct System_Collections_Generic_List_long____o *)this;
                            sub_1B6406C(
                              (ServantStatusBattleListViewItem_o *)&v58->fields.saveDataMapList,
                              (int32_t)this,
                              v104,
                              v105);
                            if ( LODWORD(v58->fields.m_CancellationTokenSource) > 6 )
                            {
                              v108 = (int)StringLiteral_117/*" "*/;
                              *(_QWORD *)&v58->fields.lastFrameTime = StringLiteral_117/*" "*/;
                              sub_1B6406C(
                                (ServantStatusBattleListViewItem_o *)&v58->fields.lastFrameTime,
                                v108,
                                v106,
                                v107);
                              this = (DataManager_o *)System_Int64__ToString((int64_t)&v111, 0LL);
                              if ( LODWORD(v58->fields.m_CancellationTokenSource) > 7 )
                              {
                                v58->fields.masterCheckName = (struct System_Collections_Generic_List_string__o *)this;
                                sub_1B6406C(
                                  (ServantStatusBattleListViewItem_o *)&v58->fields.masterCheckName,
                                  (int32_t)this,
                                  v109,
                                  v110);
                                if ( LODWORD(v58->fields.m_CancellationTokenSource) > 8 )
                                {
                                  v70 = StringLiteral_815/*")"*/;
                                  v58->fields.lockCountObj = (Il2CppObject *)StringLiteral_815/*")"*/;
                                  p_saveNameList = (ServantStatusBattleListViewItem_o *)&v58->fields.lockCountObj;
LABEL_104:
                                  sub_1B6406C(p_saveNameList, v70, v68, v69);
                                  if ( System_String__Concat_61388924((System_String_array *)v58, 0LL) )
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
                sub_1B6432C(this, v31);
              }
            }
LABEL_119:
            sub_1B64324(this);
          }
          v39 = &StringLiteral_5094/*"DataManager version load error : list file parameter error"*/;
        }
        else
        {
LABEL_62:
          v39 = &StringLiteral_5093/*"DataManager version load error : list file break"*/;
        }
      }
      else
      {
        v39 = &StringLiteral_5091/*"DataManager version load crc error : チェックサム値が不一致"*/;
      }
    }
    else
    {
      v39 = &StringLiteral_5096/*"DataManager version load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
    }
LABEL_63:
    if ( *v39 )
      goto LABEL_64;
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FBF4E & 1) == 0 )
  {
    sub_1B640C8(&DataManager__readMasterVersion_d__46_TypeInfo, method);
    byte_49FBF4E = 1;
  }
  v4 = sub_1B64314(DataManager__readMasterVersion_d__46_TypeInfo, method, v2);
  DataManager__readMasterVersion_d__46___ctor((DataManager__readMasterVersion_d__46_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
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
  System_String_o *v46; // x21
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x20
  int32_t v50; // w1
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  System_String_o *v62; // x8
  DataManager_c *v63; // x0
  struct DataManager_StaticFields *static_fields; // x8
  DataManager_c *v66; // x8
  int32_t v67; // w19
  struct DataManager_StaticFields *v68; // x8
  int64_t v69; // x0
  struct DataManager_StaticFields *v70; // x8

  if ( (byte_49FBF5B & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, method);
    sub_1B640C8(&char___TypeInfo, v3);
    sub_1B640C8(&Crc32_TypeInfo, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&ManagerConfig_TypeInfo, v6);
    sub_1B640C8(&string___TypeInfo, v7);
    sub_1B640C8(&StringLiteral_5090/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/, v8);
    sub_1B640C8(&StringLiteral_5087/*"DataManager boot load error : list file break"*/, v9);
    sub_1B640C8(&StringLiteral_5089/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/, v10);
    sub_1B640C8(&StringLiteral_5085/*"DataManager boot load crc error : チェックサム値が不一致"*/, v11);
    sub_1B640C8(&StringLiteral_25054/*"~"*/, v12);
    sub_1B640C8(&StringLiteral_21209/*"master data versiton different ("*/, v13);
    sub_1B640C8(&StringLiteral_824/*") -> ("*/, v14);
    sub_1B640C8(&StringLiteral_815/*")"*/, v15);
    sub_1B640C8(&StringLiteral_1888/*"@"*/, v16);
    sub_1B640C8(&StringLiteral_5088/*"DataManager boot load error : list file parameter error"*/, v17);
    byte_49FBF5B = 1;
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
    v63 = DataManager_TypeInfo;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v63 = DataManager_TypeInfo;
    }
    static_fields = v63->static_fields;
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
    v24 = (System_Char_array *)sub_1B64170(char___TypeInfo, 1LL);
    if ( !v24 )
      sub_1B64324(0LL);
    if ( !v24->max_length )
      sub_1B6432C(v24, v24);
    v24->m_Items[2] = -257;
    v25 = System_String__Trim_61405136(v23, v24, 0LL);
    v26 = (System_Char_array *)sub_1B64170(char___TypeInfo, 2LL);
    if ( !v26 )
      sub_1B64324(0LL);
    max_length = v26->max_length;
    if ( !max_length )
      sub_1B6432C(v26, v26);
    v26->m_Items[2] = 13;
    if ( max_length == 1 )
      sub_1B6432C(v26, v26);
    v26->m_Items[3] = 10;
    if ( !v25 )
      sub_1B64324(v26);
    v28 = System_String__IndexOfAny(v25, v26, 0LL);
    if ( v28 < 2 )
    {
      v29 = &StringLiteral_5089/*"DataManager boot load error : ファイル先頭の１行目の内容が空"*/;
LABEL_57:
      v62 = (System_String_o *)*v29;
LABEL_58:
      if ( v62 )
        goto LABEL_59;
      return 1;
    }
    v30 = System_String__Substring_61394392(v25, 0, v28, 0LL);
    v31 = v30;
    if ( !v30 )
      sub_1B64324(0LL);
    if ( !System_String__StartsWith(v30, (System_String_o *)StringLiteral_25054/*"~"*/, 0LL) )
    {
      v29 = &StringLiteral_5090/*"DataManager boot load error : 読み込んだファイルの先頭がチェックサムデータではなかった"*/;
      goto LABEL_57;
    }
    v32 = System_String__Substring(v31, 1, 0LL);
    v33 = System_String__Substring(v25, v28 + 1, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      sub_1B64324(0LL);
    v35 = (System_Byte_array *)((__int64 (__fastcall *)(System_Text_Encoding_o *, System_String_o *, Il2CppMethodPointer))UTF8->klass->vtable._19_GetBytes.method)(
                                 UTF8,
                                 v33,
                                 UTF8->klass->vtable._20_GetBytes.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v36 = Crc32__Compute(v35, 0LL);
    if ( System_UInt32__Parse(v32, 0LL) != v36 )
    {
      v29 = &StringLiteral_5085/*"DataManager boot load crc error : チェックサム値が不一致"*/;
      goto LABEL_57;
    }
    v37 = (System_Char_array *)sub_1B64170(char___TypeInfo, 2LL);
    if ( !v37 )
      sub_1B64324(0LL);
    v38 = v37->max_length;
    if ( !v38 )
      sub_1B6432C(v37, v37);
    v37->m_Items[2] = 13;
    if ( v38 == 1 )
      sub_1B6432C(v37, v37);
    v37->m_Items[3] = 10;
    if ( !v33 )
      sub_1B64324(v37);
    v39 = (__int64)System_String__Split_61397780(v33, v37, 1, 0LL);
    v40 = v39;
    if ( !v39 )
      return 1;
    v41 = *(_QWORD *)(v39 + 24);
    if ( v41 )
    {
      if ( !(_DWORD)v41 )
        goto LABEL_78;
      v39 = *(_QWORD *)(v39 + 32);
      if ( !v39 )
        goto LABEL_83;
      v39 = System_String__StartsWith((System_String_o *)v39, (System_String_o *)StringLiteral_1888/*"@"*/, 0LL);
      if ( (v39 & 1) != 0 )
      {
        if ( !*(_DWORD *)(v40 + 24) )
          goto LABEL_78;
        v42 = *(System_String_o **)(v40 + 32);
        v39 = sub_1B64170(char___TypeInfo, 1LL);
        if ( v39 )
        {
          v21 = (const MethodInfo *)v39;
          if ( !*(_DWORD *)(v39 + 24) )
            goto LABEL_78;
          *(_WORD *)(v39 + 32) = 44;
          if ( v42 )
          {
            v39 = (__int64)System_String__Split_61397544(v42, (System_Char_array *)v39, 0LL);
            if ( v39 )
            {
              v43 = v39;
              if ( !*(_DWORD *)(v39 + 24) )
                goto LABEL_78;
              v39 = *(_QWORD *)(v39 + 32);
              if ( v39 )
              {
                v44 = System_String__Substring((System_String_o *)v39, 1, 0LL);
                v45 = ManagerConfig_TypeInfo;
                v46 = v44;
                if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                  v45 = ManagerConfig_TypeInfo;
                }
                if ( !System_String__op_Inequality(v45->static_fields->MasterDataCacheVer, v46, 0LL) )
                {
                  if ( *(_DWORD *)(v43 + 24) != 3 )
                  {
                    v29 = &StringLiteral_5088/*"DataManager boot load error : list file parameter error"*/;
                    goto LABEL_57;
                  }
                  v39 = System_Int32__Parse(*(System_String_o **)(v43 + 40), 0LL);
                  v66 = DataManager_TypeInfo;
                  v67 = v39;
                  if ( !DataManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    v66 = DataManager_TypeInfo;
                  }
                  v68 = v66->static_fields;
                  v68->dataVersion = v67;
                  v68->readDataVersion = v67;
                  if ( *(_DWORD *)(v43 + 24) > 2u )
                  {
                    v69 = System_Int64__Parse(*(System_String_o **)(v43 + 48), 0LL);
                    v70 = DataManager_TypeInfo->static_fields;
                    v70->dateVersion = v69;
                    v70->readDateVersion = v69;
                    return 1;
                  }
LABEL_78:
                  sub_1B6432C(v39, v21);
                }
                v39 = sub_1B64170(string___TypeInfo, 5LL);
                if ( v39 )
                {
                  v49 = v39;
                  if ( *(_DWORD *)(v39 + 24) )
                  {
                    v50 = StringLiteral_21209/*"master data versiton different ("*/;
                    *(_QWORD *)(v39 + 32) = StringLiteral_21209/*"master data versiton different ("*/;
                    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v39 + 32), v50, v47, v48);
                    if ( *(_DWORD *)(v49 + 24) > 1u )
                    {
                      *(_QWORD *)(v49 + 40) = v46;
                      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 40), (int32_t)v46, v51, v52);
                      if ( *(_DWORD *)(v49 + 24) > 2u )
                      {
                        v55 = StringLiteral_824/*") -> ("*/;
                        *(_QWORD *)(v49 + 48) = StringLiteral_824/*") -> ("*/;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 48), v55, v53, v54);
                        v39 = (__int64)ManagerConfig_TypeInfo;
                        if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
                          v39 = (__int64)ManagerConfig_TypeInfo;
                        }
                        if ( *(_DWORD *)(v49 + 24) > 3u )
                        {
                          v58 = *(_QWORD *)(*(_QWORD *)(v39 + 184) + 32LL);
                          *(_QWORD *)(v49 + 56) = v58;
                          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 56), v58, v56, v57);
                          if ( *(_DWORD *)(v49 + 24) > 4u )
                          {
                            v61 = StringLiteral_815/*")"*/;
                            *(_QWORD *)(v49 + 64) = StringLiteral_815/*")"*/;
                            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 64), v61, v59, v60);
                            v62 = System_String__Concat_61388924((System_String_array *)v49, 0LL);
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
        sub_1B64324(v39);
      }
    }
    v29 = &StringLiteral_5087/*"DataManager boot load error : list file break"*/;
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

  if ( (byte_49FBF4B & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_49FBF4B = 1;
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
  sub_1B6406C(p_updateData, v11, dateVer, (int32_t)obj);
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

  if ( (byte_49FBF4A & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, *(_QWORD *)&dataVer);
    byte_49FBF4A = 1;
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
  System_String_o *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x0
  DataManager_c *v16; // x8
  struct DataManager_StaticFields *v17; // x0
  DataManager_c *v18; // x0

  if ( (byte_49FBF44 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, obj);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    byte_49FBF44 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->serverHash, v8, (int32_t)method, v3);
  if ( obj )
  {
    v10 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))obj->klass->vtable[3].method)(
                               obj,
                               obj->klass->vtable[4].methodPtr);
    v11 = System_String__op_Equality(v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !v11 )
    {
      if ( !v10 )
        sub_1B64324(v11);
      v12 = System_String__Substring(v10, v10->fields._stringLength - 1, 0LL);
      if ( System_String__op_Equality(v12, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL) )
      {
        v15 = System_String__Substring_61394392(v10, 0, v10->fields._stringLength - 1, 0LL);
        v16 = DataManager_TypeInfo;
        v10 = v15;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v16 = DataManager_TypeInfo;
        }
        v17 = v16->static_fields;
      }
      else
      {
        v18 = DataManager_TypeInfo;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          v18 = DataManager_TypeInfo;
        }
        v17 = v18->static_fields;
      }
      v17->serverHash = v10;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->serverHash, (int32_t)v10, v13, v14);
    }
  }
}


void __fastcall DataManager__setWebViewData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  int32_t v3; // w3
  DataManager_c *v5; // x0
  struct DataManager_StaticFields *static_fields; // x0

  if ( (byte_49FBF46 & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, obj);
    byte_49FBF46 = 1;
  }
  v5 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v5 = DataManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->webViewData = obj;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->webViewData, (int32_t)obj, (int32_t)method, v3);
}


void __fastcall DataManager__updateJsonData(DataManager_o *this, Il2CppObject *obj, const MethodInfo *method)
{
  __int64 methodPtr_low; // x9
  DataManager_o *v6; // x0
  Il2CppObject *v7; // x1

  if ( (byte_49FBF5F & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, obj);
    byte_49FBF5F = 1;
  }
  if ( obj
    && ((methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
         LOBYTE(obj->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low)
     || (System_Collections_Generic_Dictionary_string__object__c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo) )
  {
    sub_1B645E4(obj);
  }
  else
  {
    v6 = this;
    v7 = obj;
  }
  DataManager__updateJsonData_38474412(v6, (System_Collections_Generic_Dictionary_string__object__o *)v7, method);
}


void __fastcall DataManager__updateJsonData_38474412(
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
  System_Collections_Generic_Dictionary_string__object__c *v10; // x1
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
  System_Nullable_long__o v44; // 0:x2.16
  System_Nullable_long__o v45; // 0:x4.16

  v3 = (System_Collections_Generic_Dictionary_object__object__o *)data;
  v4 = this;
  if ( (byte_49FBF60 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, data);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_1B640C8(&StringLiteral_24219/*"updated"*/, v7);
    sub_1B640C8(&StringLiteral_18492/*"deleted"*/, v8);
    this = (DataManager_o *)sub_1B640C8(&StringLiteral_22782/*"replaced"*/, v9);
    byte_49FBF60 = 1;
  }
  if ( !v3 )
LABEL_57:
    sub_1B64324(this);
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         v3,
         (Il2CppObject *)StringLiteral_18492/*"deleted"*/,
         (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                              v3,
                              (Il2CppObject *)StringLiteral_18492/*"deleted"*/,
                              (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v11 = this;
    if ( this )
    {
      v10 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
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
                                  (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                    (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
          if ( !v21 )
            goto LABEL_57;
          this = (DataManager_o *)DataMasterBase__Deleted(v21, (Il2CppObject *)this, 0LL);
        }
        if ( v15 == (_DWORD)v17 )
          goto LABEL_22;
        datalist = v4->fields.datalist;
        v16 = v17 + 1;
        if ( !datalist )
          goto LABEL_57;
      }
LABEL_59:
      sub_1B6432C(this, v10);
    }
  }
LABEL_22:
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          v3,
          (Il2CppObject *)StringLiteral_24219/*"updated"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    goto LABEL_40;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_24219/*"updated"*/,
                            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v11 = this;
  if ( this )
  {
    v10 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v22 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v22
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v22 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_60:
      sub_1B645E4(v11);
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
                                (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v31 )
          goto LABEL_57;
        this = (DataManager_o *)DataMasterBase__Updated(v31, (Il2CppObject *)this, 0LL);
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
          (Il2CppObject *)StringLiteral_22782/*"replaced"*/,
          (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return;
  this = (DataManager_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                            v3,
                            (Il2CppObject *)StringLiteral_22782/*"replaced"*/,
                            (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)this;
  if ( this )
  {
    v10 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
    v32 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(this->klass->vtable._0_Equals.methodPtr) < (unsigned int)v32
      || (System_Collections_Generic_Dictionary_string__object__c *)this->klass->_2.typeHierarchy[v32 - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
    {
LABEL_61:
      sub_1B645E4(v3);
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
                                (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
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
                                  (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        if ( !v41 )
          goto LABEL_57;
        *(_QWORD *)&v44.fields.hasValue = 0LL;
        v44.fields.value = 0LL;
        *(_QWORD *)&v45.fields.hasValue = 0LL;
        v45.fields.value = 0LL;
        this = (DataManager_o *)DataMasterBase__Replaced(v41, (Il2CppObject *)this, v44, v45, 0LL);
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
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_49FBF51 & 1) == 0 )
  {
    sub_1B640C8(&DataManager__updateMasterData_d__49_TypeInfo, isUseTips);
    byte_49FBF51 = 1;
  }
  v5 = sub_1B64314(DataManager__updateMasterData_d__49_TypeInfo, isUseTips, method);
  DataManager__updateMasterData_d__49___ctor((DataManager__updateMasterData_d__49_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B64324(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v7, v8);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FBF47 & 1) == 0 )
  {
    sub_1B640C8(&DataManager__updateWebViewData_d__38_TypeInfo, method);
    byte_49FBF47 = 1;
  }
  v4 = sub_1B64314(DataManager__updateWebViewData_d__38_TypeInfo, method, v2);
  DataManager__updateWebViewData_d__38___ctor((DataManager__updateWebViewData_d__38_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
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
  System_Collections_Generic_List_object__o *CacheListFileName; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int32_t size; // w24
  System_String_o *v23; // x20
  System_Text_StringBuilder_o *v24; // x21
  ManagerConfig_c *v25; // x0
  int v26; // w8
  int v27; // w24
  int32_t v28; // w22
  Il2CppObject *Item; // x0
  Il2CppObject *v30; // x19
  System_Byte_array *v31; // x21
  Il2CppObject *v32; // x0
  System_String_o *v33; // x19
  System_String_o *v34; // x21
  System_Text_Encoding_o *UTF8; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  System_IO_StreamWriter_o *v38; // x19
  __int64 v39; // x0
  System_IO_StreamWriter_c *klass; // x8
  __int64 v41; // x9
  int32_t *p_offset; // x10
  __int64 v43; // x0
  uint32_t v44; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_49FBF5E & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, method);
    sub_1B640C8(&Crc32_TypeInfo, v3);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v7);
    sub_1B640C8(&ManagerConfig_TypeInfo, v8);
    sub_1B640C8(&System_IO_StreamWriter_TypeInfo, v9);
    sub_1B640C8(&System_Text_StringBuilder_TypeInfo, v10);
    sub_1B640C8(&uint_TypeInfo, v11);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v12);
    sub_1B640C8(&StringLiteral_25057/*"~{0}\n{1}"*/, v13);
    sub_1B640C8(&StringLiteral_1888/*"@"*/, v14);
    sub_1B640C8(&StringLiteral_869/*","*/, v15);
    byte_49FBF5E = 1;
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
    v23 = (System_String_o *)CacheListFileName;
    v24 = (System_Text_StringBuilder_o *)sub_1B64314(System_Text_StringBuilder_TypeInfo, v19, v20);
    System_Text_StringBuilder___ctor_60529900(v24, (size << 7) + 128, 0LL);
    if ( !v24 )
      goto LABEL_17;
    System_Text_StringBuilder__Append_60536548(v24, (System_String_o *)StringLiteral_1888/*"@"*/, 0LL);
    v25 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v25 = ManagerConfig_TypeInfo;
    }
    System_Text_StringBuilder__Append_60536548(v24, v25->static_fields->MasterDataCacheVer, 0LL);
    System_Text_StringBuilder__Append_60536548(v24, (System_String_o *)StringLiteral_869/*","*/, 0LL);
    System_Text_StringBuilder__Append_60539044(v24, DataManager_TypeInfo->static_fields->dataVersion, 0LL);
    System_Text_StringBuilder__Append_60536548(v24, (System_String_o *)StringLiteral_869/*","*/, 0LL);
    System_Text_StringBuilder__Append_60539132(v24, DataManager_TypeInfo->static_fields->dateVersion, 0LL);
    System_Text_StringBuilder__Append_60536548(v24, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
    CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
    if ( !CacheListFileName )
      goto LABEL_17;
    v26 = CacheListFileName->fields._size;
    v27 = v26 - 1;
    if ( v26 >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 CacheListFileName,
                 v28,
                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
        System_Text_StringBuilder__Append_60536548(v24, (System_String_o *)Item, 0LL);
        System_Text_StringBuilder__Append_60536548(v24, (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
        if ( v27 == v28 )
          break;
        CacheListFileName = (System_Collections_Generic_List_object__o *)this->fields.saveNameList;
        ++v28;
        if ( !CacheListFileName )
          goto LABEL_17;
      }
    }
    v30 = (Il2CppObject *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v24->klass->vtable._3_ToString.method)(
                            v24,
                            v24->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    CacheListFileName = (System_Collections_Generic_List_object__o *)System_Text_Encoding__get_UTF8(0LL);
    if ( !CacheListFileName )
LABEL_17:
      sub_1B64324(CacheListFileName);
    v31 = (System_Byte_array *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppObject *, Il2CppMethodPointer))CacheListFileName->klass->vtable._19_System_Collections_IList_set_Item.method)(
                                 CacheListFileName,
                                 v30,
                                 CacheListFileName->klass->vtable._20_System_Collections_IList_Add.methodPtr);
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v44 = Crc32__Compute(v31, 0LL);
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v44);
    v33 = System_String__Format_61389768((System_String_o *)StringLiteral_25057/*"~{0}\n{1}"*/, v32, v30, 0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v34 = CatAndMouseGame__CatGame3(v33, 0LL);
    UTF8 = System_Text_Encoding__get_UTF8(0LL);
    v38 = (System_IO_StreamWriter_o *)sub_1B64314(System_IO_StreamWriter_TypeInfo, v36, v37);
    System_IO_StreamWriter___ctor_61544524(v38, v23, 0, UTF8, 0LL);
    if ( !v38 )
      sub_1B64324(v39);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v38->klass->vtable._16_Write.method)(
      v38,
      v34,
      v38->klass->vtable._17_Write.methodPtr);
    klass = v38->klass;
    v41 = *(unsigned __int16 *)(&v38->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&v38->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v41;
        p_offset += 4;
        if ( !v41 )
          goto LABEL_28;
      }
      v43 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_28:
      v43 = sub_1BB60A8(v38, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(System_IO_StreamWriter_o *, _QWORD))v43)(v38, *(_QWORD *)(v43 + 8));
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
  __int64 v42; // x1
  __int64 v43; // x2
  System_IO_StreamWriter_o *v44; // x21
  uint32_t v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FBF5C & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, method);
    sub_1B640C8(&Crc32_TypeInfo, v2);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&ManagerConfig_TypeInfo, v4);
    sub_1B640C8(&System_IO_StreamWriter_TypeInfo, v5);
    sub_1B640C8(&string___TypeInfo, v6);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v7);
    sub_1B640C8(&StringLiteral_25054/*"~"*/, v8);
    sub_1B640C8(&StringLiteral_1888/*"@"*/, v9);
    sub_1B640C8(&StringLiteral_869/*","*/, v10);
    byte_49FBF5C = 1;
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
    UTF8 = (char *)sub_1B64170(string___TypeInfo, 7LL);
    if ( !UTF8 )
      goto LABEL_27;
    v18 = UTF8;
    if ( !*((_DWORD *)UTF8 + 6) )
      goto LABEL_26;
    v19 = StringLiteral_1888/*"@"*/;
    *((_QWORD *)UTF8 + 4) = StringLiteral_1888/*"@"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(UTF8 + 32), v19, v16, v17);
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 40), v22, v20, v21);
    if ( *((_DWORD *)v18 + 6) <= 2u )
      goto LABEL_26;
    v25 = (int)StringLiteral_869/*","*/;
    *((_QWORD *)v18 + 6) = StringLiteral_869/*","*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 48), v25, v23, v24);
    UTF8 = (char *)System_Int32__ToString((unsigned int)DataManager_TypeInfo->static_fields + 16, 0LL);
    if ( *((_DWORD *)v18 + 6) <= 3u )
      goto LABEL_26;
    *((_QWORD *)v18 + 7) = UTF8;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 56), (int32_t)UTF8, v26, v27);
    if ( *((_DWORD *)v18 + 6) <= 4u
      || (v30 = (int)StringLiteral_869/*","*/,
          *((_QWORD *)v18 + 8) = StringLiteral_869/*","*/,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 64), v30, v28, v29),
          UTF8 = (char *)System_Int64__ToString((int64_t)&DataManager_TypeInfo->static_fields->dateVersion, 0LL),
          *((_DWORD *)v18 + 6) <= 5u)
      || (*((_QWORD *)v18 + 9) = UTF8,
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 72), (int32_t)UTF8, v31, v32),
          *((_DWORD *)v18 + 6) <= 6u) )
    {
LABEL_26:
      sub_1B6432C(UTF8, v15);
    }
    v35 = StringLiteral_43/*"\n"*/;
    *((_QWORD *)v18 + 10) = StringLiteral_43/*"\n"*/;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 80), v35, v33, v34);
    v36 = System_String__Concat_61388924((System_String_array *)v18, 0LL);
    UTF8 = (char *)System_Text_Encoding__get_UTF8(0LL);
    if ( !UTF8 )
      goto LABEL_27;
    v37 = (System_Byte_array *)(*(__int64 (__fastcall **)(char *, System_String_o *, _QWORD))(*(_QWORD *)UTF8 + 616LL))(
                                 UTF8,
                                 v36,
                                 *(_QWORD *)(*(_QWORD *)UTF8 + 624LL));
    if ( !Crc32_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
    v45 = Crc32__Compute(v37, 0LL);
    v38 = System_UInt32__ToString((uint32_t)&v45, 0LL);
    v39 = System_String__Concat_61388660(
            (System_String_o *)StringLiteral_25054/*"~"*/,
            v38,
            (System_String_o *)StringLiteral_43/*"\n"*/,
            v36,
            0LL);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v40 = CatAndMouseGame__CatGame1(v39, 0, 0LL);
    v41 = System_Text_Encoding__get_UTF8(0LL);
    v44 = (System_IO_StreamWriter_o *)sub_1B64314(System_IO_StreamWriter_TypeInfo, v42, v43);
    System_IO_StreamWriter___ctor_61544524(v44, CacheVersionFileName, 0, v41, 0LL);
    if ( !v44 )
LABEL_27:
      sub_1B64324(UTF8);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, System_String_o *, Il2CppMethodPointer))v44->klass->vtable._16_Write.method)(
      v44,
      v40,
      v44->klass->vtable._17_Write.methodPtr);
    ((void (__fastcall *)(System_IO_StreamWriter_o *, Il2CppMethodPointer))v44->klass->vtable._8_Close.method)(
      v44,
      v44->klass->vtable._9_Dispose.methodPtr);
  }
}


void __fastcall DataManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FBF69 & 1) == 0 )
  {
    sub_1B640C8(&DataManager___c_TypeInfo, v1);
    byte_49FBF69 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(DataManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  DataManager___c_TypeInfo->static_fields->__9 = (struct DataManager___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)DataManager___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
  __int64 v8; // x1
  struct DataManager_o *v9; // x8
  System_Collections_Generic_List_object__o *saveDataMapList; // x8
  void *monitor; // x20

  v6 = this;
  if ( (byte_49FBF6A & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_0_o *)sub_1B640C8(
                                                    &Method_System_Collections_Generic_List_long____get_Item__,
                                                    *(_QWORD *)&a);
    byte_49FBF6A = 1;
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
                                                  (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_long____get_Item__);
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
                                                         (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_long____get_Item__)) == 0LL) )
  {
LABEL_12:
    sub_1B64324(this);
  }
  if ( LODWORD(this->fields.loadedIndices) <= 1 )
LABEL_13:
    sub_1B6432C(this, v8);
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
  if ( (byte_49FBF6B & 1) == 0 )
  {
    this = (DataManager___c__DisplayClass56_1_o *)sub_1B640C8(
                                                    &Method_System_Collections_Generic_List_int__Contains__,
                                                    *(_QWORD *)&x);
    byte_49FBF6B = 1;
  }
  if ( x % 5 == v4->fields.i )
  {
    CS___8__locals1 = v4->fields.CS___8__locals1;
    if ( !CS___8__locals1
      || (this = (DataManager___c__DisplayClass56_1_o *)CS___8__locals1->fields.loadedIndices) == 0LL )
    {
      sub_1B64324(this);
    }
    return !System_Collections_Generic_List_int___Contains(
              (System_Collections_Generic_List_int__o *)this,
              x,
              (const MethodInfo_3490254 *)Method_System_Collections_Generic_List_int__Contains__);
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
    sub_1B64324(this);
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
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_WaitForEndOfFrame_o *v16; // x19
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  char v20; // w8
  DataManager_c *v21; // x0
  struct DataManager_StaticFields *static_fields; // x9
  int v23; // w10
  System_String_o *CacheFileName; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  System_IO_MemoryStream_o *v27; // x21
  System_IO_Stream_o *v28; // x24
  System_IO_Stream_o *v29; // x25
  __int64 v30; // x0
  __int64 v31; // x22
  __int64 v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  UnityEngine_WaitForEndOfFrame_o *v35; // x19
  ServantStatusBattleListViewItem_o *v36; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  int v39; // w8
  DataManager_c *v40; // x0
  System_IO_Stream_c *klass; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  System_IO_Stream_c *v46; // x8
  __int64 v47; // x9
  int32_t *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_IO_MemoryStream_c *v53; // x8
  __int64 v54; // x9
  int32_t *v55; // x10
  __int64 v56; // x0
  System_Byte_array *masterDataBytes; // x22
  __int64 v58; // x1
  __int64 v59; // x2
  System_IO_MemoryStream_o *v60; // x21
  __int64 v61; // x1
  __int64 v62; // x2
  System_IO_BinaryReader_o *v63; // x24
  __int64 v64; // x0
  struct System_Collections_Generic_List_string__o *saveNameList; // x8
  int size; // w26
  __int64 v67; // x0
  int v68; // w22
  __int64 v69; // x23
  __int64 v70; // x25
  System_Collections_Generic_List_object__o *saveDataMapList; // x22
  __int64 v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x1
  int v76; // w8
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  System_IO_BinaryReader_c *v81; // x8
  __int64 v82; // x9
  int32_t *v83; // x10
  __int64 v84; // x0
  System_IO_MemoryStream_c *v85; // x8
  __int64 v86; // x9
  int32_t *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x2
  UnityEngine_WaitForEndOfFrame_o *v91; // x19
  int32_t v92; // w2
  int32_t v93; // w3

  v2 = this;
  if ( (byte_49FBF6C & 1) == 0 )
  {
    sub_1B640C8(&System_IO_BinaryReader_TypeInfo, method);
    sub_1B640C8(&byte___TypeInfo, v3);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&System_GC_TypeInfo, v6);
    sub_1B640C8(&System_IDisposable_TypeInfo, v7);
    sub_1B640C8(&long___TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v10);
    sub_1B640C8(&System_IO_MemoryStream_TypeInfo, v11);
    this = (DataManager__readMasterData_d__47_o *)sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    byte_49FBF6C = 1;
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
        v16 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v14, v15);
        UnityEngine_WaitForEndOfFrame___ctor(v16, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v16;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)v16, v18, v19);
        v20 = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return v20 & 1;
      }
LABEL_15:
      if ( DataManager__readMasterDataListFile(_4__this, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        CacheFileName = DataManager__getCacheFileName(0LL);
        if ( System_IO_File__Exists(CacheFileName, 0LL) )
        {
          v27 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, v25, v26);
          System_IO_MemoryStream___ctor(v27, 0LL);
          v28 = (System_IO_Stream_o *)System_IO_File__OpenRead(CacheFileName, 0LL);
          if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
          v29 = CatAndMouseGame__MouseGameZ(v28, 0LL);
          v30 = sub_1B64170(byte___TypeInfo, 0x4000LL);
          v31 = v30;
          if ( !v30 )
            sub_1B64324(0LL);
          if ( !v29 )
            sub_1B64324(v30);
          while ( 1 )
          {
            v32 = ((__int64 (__fastcall *)(System_IO_Stream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v29->klass->vtable._33_unknown.method)(
                    v29,
                    v31,
                    0LL,
                    *(unsigned int *)(v31 + 24),
                    v29->klass->vtable._34_Read.methodPtr);
            if ( (int)v32 <= 0 )
              break;
            if ( !v27 )
              sub_1B64324(v32);
            ((void (__fastcall *)(System_IO_MemoryStream_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))v27->klass->vtable._36_Write.method)(
              v27,
              v31,
              0LL,
              (unsigned int)v32,
              v27->klass->vtable._37_Write.methodPtr);
          }
          klass = v29->klass;
          v42 = *(unsigned __int16 *)(&v29->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v29->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
            {
              --v42;
              p_offset += 4;
              if ( !v42 )
                goto LABEL_37;
            }
            v44 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
          }
          else
          {
LABEL_37:
            v44 = sub_1BB60A8(v29, System_IDisposable_TypeInfo, 0LL);
          }
          v45 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v44)(v29, *(_QWORD *)(v44 + 8));
          if ( v28 )
          {
            v46 = v28->klass;
            v47 = *(unsigned __int16 *)(&v28->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v28->klass->_2.bitflags2 + 3) )
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
              v49 = sub_1BB60A8(v28, System_IDisposable_TypeInfo, 0LL);
            }
            v45 = (*(__int64 (__fastcall **)(System_IO_Stream_o *, _QWORD))v49)(v28, *(_QWORD *)(v49 + 8));
          }
          if ( !v27 )
            sub_1B64324(v45);
          v50 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, void *))v27->klass->vtable._42_ToArray.method)(
                  v27,
                  v27->klass[1]._1.image);
          _4__this->fields.masterDataBytes = (struct System_Byte_array *)v50;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, v50, v51, v52);
          v53 = v27->klass;
          v54 = *(unsigned __int16 *)(&v27->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v27->klass->_2.bitflags2 + 3) )
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
            v56 = sub_1BB60A8(v27, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v56)(v27, *(_QWORD *)(v56 + 8));
          masterDataBytes = _4__this->fields.masterDataBytes;
          v60 = (System_IO_MemoryStream_o *)sub_1B64314(System_IO_MemoryStream_TypeInfo, v58, v59);
          System_IO_MemoryStream___ctor_61519400(v60, masterDataBytes, 0LL);
          v63 = (System_IO_BinaryReader_o *)sub_1B64314(System_IO_BinaryReader_TypeInfo, v61, v62);
          System_IO_BinaryReader___ctor(v63, (System_IO_Stream_o *)v60, 0LL);
          saveNameList = _4__this->fields.saveNameList;
          if ( !saveNameList )
            sub_1B64324(v64);
          size = saveNameList->fields._size;
          if ( size < 1 )
          {
            if ( !v63 )
            {
LABEL_76:
              if ( v60 )
              {
                v85 = v60->klass;
                v86 = *(unsigned __int16 *)(&v60->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&v60->klass->_2.bitflags2 + 3) )
                {
                  v87 = &v85->_1.interfaceOffsets->offset;
                  while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
                  {
                    --v86;
                    v87 += 4;
                    if ( !v86 )
                      goto LABEL_81;
                  }
                  v88 = (__int64)(&v85->vtable._0_Equals.method + 2 * *v87);
                }
                else
                {
LABEL_81:
                  v88 = sub_1BB60A8(v60, System_IDisposable_TypeInfo, 0LL);
                }
                (*(void (__fastcall **)(System_IO_MemoryStream_o *, _QWORD))v88)(v60, *(_QWORD *)(v88 + 8));
              }
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62421456(0LL);
              v91 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v89, v90);
              UnityEngine_WaitForEndOfFrame___ctor(v91, 0LL);
              v2->fields.__2__current = (Il2CppObject *)v91;
              v36 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
              sub_1B6406C(v36, (int32_t)v91, v92, v93);
              v39 = 2;
LABEL_87:
              *(_DWORD *)&v36[-1].fields.isMine = v39;
              v20 = 1;
              return v20 & 1;
            }
          }
          else
          {
            if ( !v63 )
              sub_1B64324(v64);
            do
            {
              v67 = ((__int64 (__fastcall *)(System_IO_BinaryReader_o *, Il2CppMethodPointer))v63->klass->vtable._15_ReadInt32.method)(
                      v63,
                      v63->klass->vtable._16_ReadUInt32.methodPtr);
              if ( !v60 )
                sub_1B64324(v67);
              v68 = v67;
              v69 = ((__int64 (__fastcall *)(System_IO_MemoryStream_o *, Il2CppMethodPointer))v60->klass->vtable._12_get_Position.method)(
                      v60,
                      v60->klass->vtable._13_set_Position.methodPtr);
              v70 = v68;
              ((void (__fastcall *)(System_IO_MemoryStream_o *, _QWORD, __int64, Il2CppMethodPointer))v60->klass->vtable._31_Seek.method)(
                v60,
                v68,
                1LL,
                v60->klass->vtable._32_SetLength.methodPtr);
              saveDataMapList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveDataMapList;
              v72 = sub_1B64170(long___TypeInfo, 2LL);
              v75 = v72;
              if ( !v72 )
                sub_1B64324(0LL);
              v76 = *(_DWORD *)(v72 + 24);
              if ( !v76 )
                sub_1B6432C(v72, v72);
              *(_QWORD *)(v72 + 32) = v69;
              if ( v76 == 1 )
                sub_1B6432C(v72, v72);
              *(_QWORD *)(v72 + 40) = v70;
              if ( !saveDataMapList )
                sub_1B64324(v72);
              items = saveDataMapList->fields._items;
              v78 = Method_System_Collections_Generic_List_long____Add__;
              ++saveDataMapList->fields._version;
              if ( !items )
                sub_1B64324(v72);
              v79 = saveDataMapList->fields._size;
              if ( (unsigned int)v79 >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  saveDataMapList,
                  (Il2CppObject *)v72,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
              }
              else
              {
                v80 = &items->obj.klass + v79;
                saveDataMapList->fields._size = v79 + 1;
                v80[4] = (Il2CppClass *)v75;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v80 + 4), v75, v73, v74);
              }
              --size;
            }
            while ( size );
          }
          v81 = v63->klass;
          v82 = *(unsigned __int16 *)(&v63->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&v63->klass->_2.bitflags2 + 3) )
          {
            v83 = &v81->_1.interfaceOffsets->offset;
            while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
            {
              --v82;
              v83 += 4;
              if ( !v82 )
                goto LABEL_73;
            }
            v84 = (__int64)(&v81->vtable._0_Equals.method + 2 * *v83);
          }
          else
          {
LABEL_73:
            v84 = sub_1BB60A8(v63, System_IDisposable_TypeInfo, 0LL);
          }
          (*(void (__fastcall **)(System_IO_BinaryReader_o *, _QWORD))v84)(v63, *(_QWORD *)(v84 + 8));
          goto LABEL_76;
        }
      }
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v33, v34);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v35;
        v36 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(v36, (int32_t)v35, v37, v38);
        v39 = 3;
        goto LABEL_87;
      }
LABEL_28:
      DataManager__ClearSaveDataList(_4__this, 0LL);
      v40 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v40 = DataManager_TypeInfo;
      }
      static_fields = v40->static_fields;
      v20 = 0;
      v23 = 5;
LABEL_31:
      static_fields->readMasterDataResult = v23;
      return v20 & 1;
    case 1:
      v2->fields.__1__state = -1;
      if ( _4__this )
        goto LABEL_15;
      goto LABEL_96;
    case 2:
      v2->fields.__1__state = -1;
      v21 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v21 = DataManager_TypeInfo;
      }
      static_fields = v21->static_fields;
      v20 = 0;
      v23 = 1;
      goto LABEL_31;
    case 3:
      v2->fields.__1__state = -1;
      if ( !_4__this )
LABEL_96:
        sub_1B64324(this);
      goto LABEL_28;
    default:
      v20 = 0;
      return v20 & 1;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DataManager__readMasterData_d__47_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v10; // w2
  int32_t v11; // w3
  bool result; // w0
  bool MasterVersionFile; // w19
  DataManager_c *v14; // x8
  struct DataManager_StaticFields *static_fields; // x8
  int v16; // w9

  v2 = this;
  if ( (byte_49FBF6D & 1) == 0 )
  {
    sub_1B640C8(&DataManager_TypeInfo, method);
    this = (DataManager__readMasterVersion_d__46_o *)sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v3);
    byte_49FBF6D = 1;
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
        v8 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v6, v7);
        UnityEngine_WaitForEndOfFrame___ctor(v8, 0LL);
        v2->fields.__2__current = (Il2CppObject *)v8;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)v8, v10, v11);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      goto LABEL_11;
    }
LABEL_18:
    sub_1B64324(this);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_18;
LABEL_11:
  MasterVersionFile = DataManager__readMasterVersionFile(_4__this, 0LL);
  v14 = DataManager_TypeInfo;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v14 = DataManager_TypeInfo;
  }
  static_fields = v14->static_fields;
  result = 0;
  if ( MasterVersionFile )
    v16 = 1;
  else
    v16 = 5;
  static_fields->readMasterVersionResult = v16;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DataManager__readMasterVersion_d__46_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  Il2CppObject *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  __int64 v82; // x1
  __int64 v83; // x2
  UnityEngine_WaitForEndOfFrame_o *v84; // x20
  ServantStatusBattleListViewItem_o *v85; // x19
  int32_t v86; // w2
  int32_t v87; // w3
  int v88; // w8
  Il2CppObject *dataMapObject_5__7; // x8
  System_Collections_Generic_Dictionary_string__long____c *v90; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__long____o *v92; // x11
  struct DataMasterBase_array *datalist; // x8
  struct System_Collections_Generic_List_long____o *saveDataMapList; // x8
  System_String_o *CachePath; // x21
  __int64 v96; // x1
  __int64 v97; // x2
  int32_t v98; // w3
  int32_t v99; // w2
  int32_t v100; // w3
  int32_t v101; // w2
  int32_t v102; // w3
  DataManager_c *v103; // x0
  Il2CppObject *updateData; // x0
  System_String_o *v105; // x21
  System_Byte_array *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  int32_t v109; // w2
  int32_t v110; // w3
  DataManager_c *v111; // x0
  struct DataManager_StaticFields *static_fields; // x0
  __int64 v113; // x1
  __int64 v114; // x2
  UnityEngine_WaitForEndOfFrame_o *v115; // x20
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v117; // w2
  int32_t v118; // w3
  bool result; // w0
  System_Byte_array *cryptBytes_5__8; // x22
  System_Byte_array *v121; // x0
  int32_t v122; // w2
  int32_t v123; // w3
  int32_t v124; // w2
  int32_t v125; // w3
  __int64 v126; // x1
  __int64 v127; // x2
  UnityEngine_WaitForEndOfFrame_o *v128; // x20
  int32_t v129; // w2
  int32_t v130; // w3
  __int64 v131; // x1
  __int64 v132; // x2
  System_Func_bool__o *v133; // x21
  __int64 v134; // x1
  __int64 v135; // x2
  UnityEngine_WaitUntil_o *v136; // x20
  int32_t v137; // w2
  int32_t v138; // w3
  int32_t v139; // w1
  ServantStatusBattleListViewItem_o *p_dataMapDict_5__6; // x0
  __int64 v141; // x1
  __int64 v142; // x2
  UnityEngine_WaitForEndOfFrame_o *v143; // x20
  int32_t v144; // w2
  int32_t v145; // w3
  UnityEngine_WaitForEndOfFrame_o *v146; // x20
  int32_t v147; // w2
  int32_t v148; // w3
  int v149; // w8
  DataManager_c *v150; // x8
  struct DataManager_StaticFields *v151; // x8
  int v152; // w9
  Il2CppObject *v153; // x22
  DataManager__updateMasterData_d__49_o **p__8__1; // x21
  int32_t v155; // w2
  int32_t v156; // w3
  int32_t v157; // w2
  int32_t v158; // w3
  struct DataMasterBase_array *v159; // x8
  __int64 i_5__9; // x9
  DataMasterBase_o *v161; // x8
  struct System_String_o *MasterName_k__BackingField; // x1
  struct DataManager___c__DisplayClass49_0_o *_8__1; // x8
  __int64 v164; // x1
  __int64 v165; // x2
  int32_t v166; // w3
  __int64 v167; // x0
  struct DataManager___c__DisplayClass49_0_o *v168; // x8
  System_Collections_Generic_Dictionary_object__object__o *dataMapDict_5__6; // x0
  Il2CppObject *Item; // x0
  int32_t v171; // w2
  int32_t v172; // w3
  __int64 v173; // x1
  __int64 v174; // x2
  struct DataManager___c__DisplayClass49_0_o *v175; // x8
  __int64 v176; // x1
  __int64 v177; // x2
  struct System_Int64_array *dataMap_5__10; // x8
  System_Collections_Generic_List_object__o *saveNameList; // x22
  DataManager__updateMasterData_d__49_o *v180; // x24
  System_Predicate_object__o *v181; // x23
  int32_t v182; // w2
  int32_t v183; // w3
  int32_t v184; // w1
  int32_t v185; // w2
  int32_t v186; // w3
  System_Collections_Generic_List_object__o *v187; // x22
  DataManager__updateMasterData_d__49_o *v188; // x24
  System_Predicate_object__o *v189; // x23
  int32_t Index; // w0
  int32_t v191; // w22
  int32_t v192; // w2
  int32_t v193; // w3
  Il2CppObject *v194; // x1
  __int64 v195; // x8
  _QWORD *v196; // x9
  __int64 _2__current_low; // x10
  __int64 v198; // x8
  int32_t v199; // w2
  int32_t v200; // w3
  Il2CppObject *p_obj; // x1
  __int64 v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  __int64 v205; // x8
  __int64 v206; // x1
  UnityEngine_WaitForEndOfFrame_o *v207; // x20
  int32_t v208; // w2
  int32_t v209; // w3
  ManagerConfig_c *v210; // x0
  int32_t v211; // w2
  int32_t v212; // w3
  int32_t v213; // w2
  int32_t v214; // w3
  struct System_Collections_Generic_List_string__o *v215; // x8
  System_Collections_Generic_List_int__o *v216; // x22
  int32_t v217; // w2
  int32_t v218; // w3
  ManagerConfig_c *v219; // x0
  __int64 v220; // x22
  int32_t v221; // w2
  int32_t v222; // w3
  DataManager__updateMasterData_d__49_o *v223; // x23
  int32_t v224; // w2
  int32_t v225; // w3
  DataManager__updateMasterData_d__49_o *v226; // x23
  int32_t v227; // w2
  int32_t v228; // w3
  DataManager__updateMasterData_d__49_o *v229; // x23
  int32_t v230; // w2
  int32_t v231; // w3
  DataManager__updateMasterData_d__49_o *v232; // x23
  int32_t v233; // w2
  int32_t v234; // w3
  DataManager__updateMasterData_d__49_o *v235; // x23
  int32_t v236; // w2
  int32_t v237; // w3
  DataManager__updateMasterData_d__49_o *v238; // x23
  int32_t v239; // w2
  int32_t v240; // w3
  DataManager__updateMasterData_d__49_o *v241; // x23
  int32_t v242; // w2
  int32_t v243; // w3
  DataManager__updateMasterData_d__49_o *v244; // x23
  __int64 v245; // x2
  __int64 v246; // x8
  __int64 v247; // x29
  DataMasterBase_o *v248; // x23
  __int64 v249; // x24
  int32_t v250; // w2
  int32_t v251; // w3
  struct System_String_o *v252; // x1
  System_Collections_Generic_List_object__o *v253; // x25
  __int64 v254; // x1
  __int64 v255; // x2
  System_Predicate_object__o *v256; // x26
  int32_t v257; // w24
  Il2CppObject *v258; // x25
  const MethodInfo_35CE514 *v259; // x3
  const MethodInfo_35CE514 *v260; // x3
  const MethodInfo *v261; // x6
  __int64 v262; // x8
  _QWORD *v263; // x9
  __int64 v264; // x10
  __int64 v265; // x1
  __int64 v266; // x2
  UnityEngine_WaitForEndOfFrame_o *v267; // x20
  int32_t v268; // w2
  int32_t v269; // w3
  ManagerConfig_c *v270; // x0
  Il2CppObject *lockCountObj; // x22
  __int64 v272; // x1
  __int64 v273; // x2
  DataManager_c *v274; // x0
  int v275; // w21
  DataManager_c *v276; // x8
  UnityEngine_WaitForEndOfFrame_o *v277; // x20
  int32_t v278; // w2
  int32_t v279; // w3
  int32_t v280; // w3
  struct System_Collections_Generic_List_string__o *v281; // x8
  int32_t size; // w2
  int v283; // w9
  struct System_Collections_Generic_List_long____o *v284; // x8
  int32_t v285; // w2
  int v286; // w9
  __int64 v287; // x1
  __int64 v288; // x2
  UnityEngine_WaitForEndOfFrame_o *v289; // x20
  int32_t v290; // w2
  int32_t v291; // w3
  __int64 v292; // x1
  __int64 v293; // x2
  UnityEngine_WaitForEndOfFrame_o *v294; // x20
  int32_t v295; // w2
  int32_t v296; // w3
  UnityEngine_WaitForEndOfFrame_o *v297; // x20
  int32_t v298; // w2
  int32_t v299; // w3
  __int64 v300; // x0
  struct DataMasterBase_array *v301; // x9
  __int64 v302; // x2
  LastUsedDeckNumberManager_c *v303; // x0
  EventRandomMissionClearManager_c *v304; // x0
  DataManager_c *v305; // x8
  UnityEngine_WaitForEndOfFrame_o *v306; // x20
  int32_t v307; // w2
  int32_t v308; // w3
  DataManager__updateMasterData_d__49_o **p_loadedIndices_5__5; // [xsp+0h] [xbp-A0h]
  System_Nullable_long__o v310; // [xsp+8h] [xbp-98h] BYREF
  System_Nullable_long__o v311; // [xsp+18h] [xbp-88h] BYREF
  int v312; // [xsp+30h] [xbp-70h]
  bool lockTaken; // [xsp+3Ch] [xbp-64h] BYREF
  System_Nullable_long__o v314; // 0:x0.16
  System_Nullable_long__o v315; // 0:x0.16

  v4 = this;
  if ( (byte_49FBF6E & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&CatAndMouseGame_TypeInfo, v5);
    sub_1B640C8(&System_Convert_TypeInfo, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantProfileMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_EventServantMaster___, v8);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantClassMaster___, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCommentAddMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantCommentMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitAddMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v13);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantProfileMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantProfilePushMaster___, v15);
    sub_1B640C8(&Method_DataManager__updateMasterData_b__49_0__, v16);
    sub_1B640C8(&DataManager_TypeInfo, v17);
    sub_1B640C8(&DataMasterBase___TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__long____get_Item__, v20);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__long____TypeInfo, v21);
    sub_1B640C8(&EventRandomMissionClearManager_TypeInfo, v22);
    sub_1B640C8(&System_Func_bool__TypeInfo, v23);
    sub_1B640C8(&System_GC_TypeInfo, v24);
    sub_1B640C8(&ImageLimitCount_TypeInfo, v25);
    sub_1B640C8(&LastUsedDeckNumberManager_TypeInfo, v26);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v28);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____Add__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Clear__, v30);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____Clear__, v31);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v32);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__FindIndex__, v33);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__RemoveAt__, v34);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____RemoveAt__, v35);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____get_Count__, v37);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v38);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____get_Item__, v39);
    sub_1B640C8(&Method_System_Collections_Generic_List_long____set_Item__, v40);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v41);
    sub_1B640C8(&LogoMain_TypeInfo, v42);
    sub_1B640C8(&ManagerConfig_TypeInfo, v43);
    sub_1B640C8(&MasterDataUnpakcer_TypeInfo, v44);
    sub_1B640C8(&MaterialBranchRouteManager_TypeInfo, v45);
    sub_1B640C8(&MaterialGroupClearHistoryManager_TypeInfo, v46);
    sub_1B640C8(&MaterialServantLimitCountManager_TypeInfo, v47);
    sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v48);
    sub_1B640C8(&Method_System_Nullable_long___ctor__, v49);
    sub_1B640C8(&OtherUserNewManager_TypeInfo, v50);
    sub_1B640C8(&System_Predicate_string__TypeInfo, v51);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v52);
    sub_1B640C8(&ServantProfileEventJoinManager_TypeInfo, v53);
    sub_1B640C8(&ServantProfileLimitCountManager_TypeInfo, v54);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v55);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v56);
    sub_1B640C8(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__, v57);
    sub_1B640C8(&Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__, v58);
    sub_1B640C8(&DataManager___c__DisplayClass49_0_TypeInfo, v59);
    sub_1B640C8(&Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__, v60);
    sub_1B640C8(&DataManager___c__DisplayClass49_1_TypeInfo, v61);
    sub_1B640C8(&UserCommandCodeCollectionManager_TypeInfo, v62);
    sub_1B640C8(&UserCommandCodeNewManager_TypeInfo, v63);
    sub_1B640C8(&UserEquipNewManager_TypeInfo, v64);
    sub_1B640C8(&UserMissionProgressManager_TypeInfo, v65);
    sub_1B640C8(&UserServantCollectionManager_TypeInfo, v66);
    sub_1B640C8(&UserServantLockManager_TypeInfo, v67);
    sub_1B640C8(&UserServantNewManager_TypeInfo, v68);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v69);
    sub_1B640C8(&UnityEngine_WaitUntil_TypeInfo, v70);
    sub_1B640C8(&WarBoardMessageHistoryManager_TypeInfo, v71);
    sub_1B640C8(&WarBoardMovieHistoryManager_TypeInfo, v72);
    this = (DataManager__updateMasterData_d__49_o *)sub_1B640C8(&StringLiteral_11402/*"SCRIPT"*/, v73);
    byte_49FBF6E = 1;
  }
  lockTaken = 0;
  v312 = 0;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6, 0, v97, v98);
      v4->fields._dataMapObject_5__7 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, 0, v99, v100);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v101, v102);
      v103 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v103 = DataManager_TypeInfo;
      }
      updateData = v103->static_fields->updateData;
      if ( !updateData )
        sub_1B64324(0LL);
      v105 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))updateData->klass->vtable[3].method)(
                                  updateData,
                                  updateData->klass->vtable[4].methodPtr);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v106 = System_Convert__FromBase64String(v105, 0LL);
      v4->fields._cryptBytes_5__8 = v106;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, (int32_t)v106, v107, v108);
      v111 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v111 = DataManager_TypeInfo;
      }
      static_fields = v111->static_fields;
      static_fields->updateData = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->updateData, 0, v109, v110);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62421456(0LL);
      v115 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v113, v114);
      UnityEngine_WaitForEndOfFrame___ctor(v115, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v115;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, (int32_t)v115, v117, v118);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    case 1:
      cryptBytes_5__8 = v4->fields._cryptBytes_5__8;
      v4->fields.__1__state = -1;
      if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
      v121 = CatAndMouseGame__MouseGame2Bytes(cryptBytes_5__8, 0, 0LL);
      if ( !_4__this )
        sub_1B64324(v121);
      _4__this->fields.masterDataBytes = v121;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, (int32_t)v121, v122, v123);
      v4->fields._cryptBytes_5__8 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v124, v125);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62421456(0LL);
      v128 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v126, v127);
      UnityEngine_WaitForEndOfFrame___ctor(v128, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v128;
      v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v85, (int32_t)v128, v129, v130);
      v88 = 2;
      goto LABEL_82;
    case 2:
      v4->fields.__1__state = -1;
      v77 = (MasterDataUnpakcer_o *)sub_1B64314(MasterDataUnpakcer_TypeInfo, method, v2);
      MasterDataUnpakcer___ctor(v77, 0LL);
      if ( !_4__this )
        sub_1B64324(v78);
      if ( !v77 )
        sub_1B64324(v78);
      v79 = MasterDataUnpakcer__Unpack_37867616(v77, _4__this->fields.masterDataBytes, 0LL);
      v4->fields._dataMapObject_5__7 = v79;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, (int32_t)v79, v80, v81);
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_62421456(0LL);
      v84 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v82, v83);
      UnityEngine_WaitForEndOfFrame___ctor(v84, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v84;
      v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v85, (int32_t)v84, v86, v87);
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
        p_dataMapDict_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6;
        if ( LOBYTE(dataMapObject_5__7->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
        {
          if ( (System_Collections_Generic_Dictionary_string__long____c *)dataMapObject_5__7->klass->_2.typeHierarchy[methodPtr_low - 1] == v90 )
            v139 = (int)dataMapObject_5__7;
          else
            v139 = 0;
        }
        else
        {
          v139 = 0;
        }
      }
      else
      {
        v139 = 0;
        v4->fields._dataMapDict_5__6 = 0LL;
        p_dataMapDict_5__6 = (ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6;
      }
      sub_1B6406C(p_dataMapDict_5__6, v139, v2, v3);
      if ( !_4__this )
        goto LABEL_288;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v146 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v146, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v146;
        v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v85, (int32_t)v146, v147, v148);
        v88 = 4;
        goto LABEL_82;
      }
LABEL_75:
      if ( !v4->fields._dataMapDict_5__6 )
        goto LABEL_83;
      v149 = 0;
      v4->fields._i_5__9 = 0;
      while ( 2 )
      {
        if ( v149 < v4->fields._dataListCount_5__2 )
        {
          v153 = (Il2CppObject *)sub_1B64314(DataManager___c__DisplayClass49_0_TypeInfo, method, v2);
          System_Object___ctor(v153, 0LL);
          v4->fields.__8__1 = (struct DataManager___c__DisplayClass49_0_o *)v153;
          p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v153, v155, v156);
          v159 = _4__this->fields.datalist;
          if ( !v159 )
            goto LABEL_288;
          i_5__9 = v4->fields._i_5__9;
          if ( (unsigned int)i_5__9 >= v159->max_length )
            goto LABEL_289;
          v161 = v159->m_Items[i_5__9];
          if ( !v161 )
            goto LABEL_288;
          this = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_288;
          MasterName_k__BackingField = v161->fields._MasterName_k__BackingField;
          *(_QWORD *)&this->fields.__1__state = MasterName_k__BackingField;
          sub_1B6406C(
            (ServantStatusBattleListViewItem_o *)&this->fields,
            (int32_t)MasterName_k__BackingField,
            v157,
            v158);
          _8__1 = v4->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_288;
          this = (DataManager__updateMasterData_d__49_o *)v4->fields._dataMapDict_5__6;
          if ( !this )
            goto LABEL_288;
          if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                 (Il2CppObject *)_8__1->fields.masterName,
                 (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__long____ContainsKey__) )
          {
            v4->fields._dataMap_5__10 = 0LL;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, 0, v165, v166);
            v168 = v4->fields.__8__1;
            if ( !v168 )
              sub_1B64324(v167);
            dataMapDict_5__6 = (System_Collections_Generic_Dictionary_object__object__o *)v4->fields._dataMapDict_5__6;
            if ( !dataMapDict_5__6 )
              sub_1B64324(0LL);
            Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                     dataMapDict_5__6,
                     (Il2CppObject *)v168->fields.masterName,
                     (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__long____get_Item__);
            v4->fields._dataMap_5__10 = (struct System_Int64_array *)Item;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, (int32_t)Item, v171, v172);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v297 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v173, v174);
              UnityEngine_WaitForEndOfFrame___ctor(v297, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v297;
              v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v85, (int32_t)v297, v298, v299);
              v88 = 5;
              goto LABEL_82;
            }
LABEL_96:
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.masterCheckName;
            p__8__1 = (DataManager__updateMasterData_d__49_o **)&v4->fields.__8__1;
            v175 = v4->fields.__8__1;
            if ( !v175 || !this )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              (Il2CppObject *)v175->fields.masterName,
                                                              (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
            if ( ((unsigned __int8)this & 1) != 0 )
            {
              dataMap_5__10 = v4->fields._dataMap_5__10;
              if ( !dataMap_5__10 )
                goto LABEL_288;
              if ( (int)dataMap_5__10->max_length < 2 || dataMap_5__10->m_Items[1] <= 5 )
              {
                v276 = DataManager_TypeInfo;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                  v276 = DataManager_TypeInfo;
                }
                v151 = v276->static_fields;
                result = 0;
                v152 = 6;
                goto LABEL_286;
              }
            }
            saveNameList = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v180 = *p__8__1;
            v181 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_string__TypeInfo, v176, v177);
            System_Predicate_object____ctor(
              v181,
              (Il2CppObject *)v180,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__1__,
              0LL);
            if ( !saveNameList )
              goto LABEL_288;
            this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                              saveNameList,
                                                              (System_Predicate_T__o *)v181,
                                                              (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( ((unsigned int)this & 0x80000000) != 0 )
            {
              if ( !*p__8__1 )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
              if ( !this )
                goto LABEL_288;
              v194 = *(Il2CppObject **)&(*p__8__1)->fields.__1__state;
              v195 = *(_QWORD *)&this->fields.__1__state;
              v196 = Method_System_Collections_Generic_List_string__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v195 )
                goto LABEL_288;
              _2__current_low = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)_2__current_low >= *(_DWORD *)(v195 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  v194,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
              }
              else
              {
                v198 = v195 + 8 * _2__current_low;
                LODWORD(this->fields.__2__current) = _2__current_low + 1;
                *(_QWORD *)(v198 + 32) = v194;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v198 + 32), (int32_t)v194, v182, v183);
              }
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_288;
              p_obj = &v4->fields._dataMap_5__10->obj;
              v202 = *(_QWORD *)&this->fields.__1__state;
              v203 = Method_System_Collections_Generic_List_long____Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( !v202 )
                goto LABEL_288;
              v204 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v204 >= *(_DWORD *)(v202 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  p_obj,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
              }
              else
              {
                v205 = v202 + 8 * v204;
                LODWORD(this->fields.__2__current) = v204 + 1;
                *(_QWORD *)(v205 + 32) = p_obj;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v205 + 32), (int32_t)p_obj, v199, v200);
              }
              ++v4->fields._saveDataCount_5__3;
            }
            else
            {
              v184 = (int)this;
              this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
              if ( !this )
                goto LABEL_288;
              System_Collections_Generic_List_object___set_Item(
                (System_Collections_Generic_List_object__o *)this,
                v184,
                &v4->fields._dataMap_5__10->obj,
                (const MethodInfo_34AD458 *)Method_System_Collections_Generic_List_long____set_Item__);
            }
            v4->fields._dataMap_5__10 = 0LL;
            v4->fields._isAdd_5__4 = 1;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._dataMap_5__10, 0, v185, v186);
          }
          else
          {
            v187 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
            v188 = *p__8__1;
            v189 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_string__TypeInfo, v164, v165);
            System_Predicate_object____ctor(
              v189,
              (Il2CppObject *)v188,
              Method_DataManager___c__DisplayClass49_0__updateMasterData_b__2__,
              0LL);
            if ( !v187 )
              goto LABEL_288;
            Index = System_Collections_Generic_List_object___FindIndex(
                      v187,
                      (System_Predicate_T__o *)v189,
                      (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_string__FindIndex__);
            if ( (Index & 0x80000000) != 0 )
              goto LABEL_125;
            v191 = Index;
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveNameList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v191,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
            if ( !this )
              goto LABEL_288;
            System_Collections_Generic_List_object___RemoveAt(
              (System_Collections_Generic_List_object__o *)this,
              v191,
              (const MethodInfo_34AEF48 *)Method_System_Collections_Generic_List_long____RemoveAt__);
            --v4->fields._saveDataCount_5__3;
          }
          v4->fields.__8__1 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)p__8__1, 0, v192, v193);
LABEL_125:
          v149 = v4->fields._i_5__9 + 1;
          v4->fields._i_5__9 = v149;
          continue;
        }
        break;
      }
      if ( !DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
LABEL_129:
        if ( !v4->fields._isAdd_5__4 )
        {
          v210 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v210 = ManagerConfig_TypeInfo;
          }
          if ( !v210->static_fields->UseMock )
            goto LABEL_83;
        }
        v4->fields._dataMapDict_5__6 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapDict_5__6, 0, v2, v3);
        v4->fields._dataMapObject_5__7 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._dataMapObject_5__7, 0, v211, v212);
        v4->fields._cryptBytes_5__8 = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._cryptBytes_5__8, 0, v213, v214);
        if ( !_4__this )
          goto LABEL_288;
LABEL_134:
        v215 = _4__this->fields.saveNameList;
        if ( !v215 )
LABEL_288:
          sub_1B64324(this);
        if ( v215->fields._size <= 0 )
        {
LABEL_83:
          v150 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v150 = DataManager_TypeInfo;
          }
          v151 = v150->static_fields;
          result = 0;
          v152 = 5;
          goto LABEL_286;
        }
        _4__this->fields.nowLoadCount = 0;
        _4__this->fields.isFailedLoad = 0;
        v216 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                           System_Collections_Generic_List_int__TypeInfo,
                                                           v96,
                                                           v97);
        System_Collections_Generic_List_int____ctor(
          v216,
          (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
        v4->fields._loadedIndices_5__5 = v216;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._loadedIndices_5__5, (int32_t)v216, v217, v218);
        p_loadedIndices_5__5 = (DataManager__updateMasterData_d__49_o **)&v4->fields._loadedIndices_5__5;
        if ( v4->fields.isUseTips )
        {
          v219 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v219 = ManagerConfig_TypeInfo;
          }
          if ( System_String__op_Inequality(
                 v219->static_fields->ServerDefaultType,
                 (System_String_o *)StringLiteral_11402/*"SCRIPT"*/,
                 0LL) )
          {
            this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            if ( !this )
              goto LABEL_288;
            if ( !CommonUI__IsLoadMode((CommonUI_o *)this, 3, 0LL) )
            {
              v220 = sub_1B64170(DataMasterBase___TypeInfo, 8LL);
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
              if ( !v220 )
                goto LABEL_288;
              v223 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v220 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( !*(_DWORD *)(v220 + 24) )
                goto LABEL_289;
              *(_QWORD *)(v220 + 32) = v223;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v220 + 32), (int32_t)v223, v221, v222);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantClassMaster___);
              v226 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v220 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v220 + 24) <= 1u )
                goto LABEL_289;
              *(_QWORD *)(v220 + 40) = v226;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v220 + 40), (int32_t)v226, v224, v225);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCommentMaster___);
              v229 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v220 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v220 + 24) <= 2u )
                goto LABEL_289;
              *(_QWORD *)(v220 + 48) = v229;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v220 + 48), (int32_t)v229, v227, v228);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantCommentAddMaster___);
              v232 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v220 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v220 + 24) <= 3u )
                goto LABEL_289;
              *(_QWORD *)(v220 + 56) = v232;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v220 + 56), (int32_t)v232, v230, v231);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantProfileMaster___);
              v235 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v220 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v220 + 24) <= 4u )
                goto LABEL_289;
              *(_QWORD *)(v220 + 64) = v235;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v220 + 64), (int32_t)v235, v233, v234);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventServantMaster___);
              v238 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v220 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v220 + 24) <= 5u )
                goto LABEL_289;
              *(_QWORD *)(v220 + 72) = v238;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v220 + 72), (int32_t)v238, v236, v237);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitAddMaster___);
              v241 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v220 + 64LL));
                if ( !this )
                  goto LABEL_238;
              }
              if ( *(_DWORD *)(v220 + 24) <= 6u )
                goto LABEL_289;
              *(_QWORD *)(v220 + 80) = v241;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v220 + 80), (int32_t)v241, v239, v240);
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantProfilePushMaster___);
              v244 = this;
              if ( this )
              {
                this = (DataManager__updateMasterData_d__49_o *)sub_1B64204(this, *(_QWORD *)(*(_QWORD *)v220 + 64LL));
                if ( !this )
                {
LABEL_238:
                  v300 = sub_1B64348(this);
                  sub_1B641F0(v300, 0LL);
                }
              }
              if ( *(_DWORD *)(v220 + 24) <= 7u )
LABEL_289:
                sub_1B6432C(this, method);
              *(_QWORD *)(v220 + 88) = v244;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v220 + 88), (int32_t)v244, v242, v243);
              v246 = *(_QWORD *)(v220 + 24);
              if ( (int)v246 >= 1 )
              {
                v247 = 0LL;
                while ( (unsigned int)v247 < (unsigned int)v246 )
                {
                  v248 = *(DataMasterBase_o **)(v220 + 32 + 8 * v247);
                  v249 = sub_1B64314(DataManager___c__DisplayClass49_1_TypeInfo, method, v245);
                  System_Object___ctor((Il2CppObject *)v249, 0LL);
                  if ( !v248 )
                    goto LABEL_288;
                  if ( !v249 )
                    goto LABEL_288;
                  v252 = v248->fields._MasterName_k__BackingField;
                  *(_QWORD *)(v249 + 16) = v252;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v249 + 16), (int32_t)v252, v250, v251);
                  v253 = (System_Collections_Generic_List_object__o *)_4__this->fields.saveNameList;
                  v256 = (System_Predicate_object__o *)sub_1B64314(System_Predicate_string__TypeInfo, v254, v255);
                  System_Predicate_object____ctor(
                    v256,
                    (Il2CppObject *)v249,
                    Method_DataManager___c__DisplayClass49_1__updateMasterData_b__3__,
                    0LL);
                  if ( !v253 )
                    goto LABEL_288;
                  this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___FindIndex(
                                                                    v253,
                                                                    (System_Predicate_T__o *)v256,
                                                                    (const MethodInfo_34ADF2C *)Method_System_Collections_Generic_List_string__FindIndex__);
                  if ( ((unsigned int)this & 0x80000000) == 0 )
                  {
                    v257 = (int)this;
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    v258 = &_4__this->fields.masterDataBytes->obj;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v257,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( !LODWORD(this->fields.__2__current) )
                      goto LABEL_289;
                    v314.fields.value = (int64_t)this->fields.__4__this;
                    *(_QWORD *)&v314.fields.hasValue = &v311;
                    *(_QWORD *)&v311.fields.hasValue = 0LL;
                    v311.fields.value = 0LL;
                    System_Nullable_long____ctor(v314, Method_System_Nullable_long___ctor__, v259);
                    this = (DataManager__updateMasterData_d__49_o *)_4__this->fields.saveDataMapList;
                    if ( !this )
                      goto LABEL_288;
                    this = (DataManager__updateMasterData_d__49_o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)this,
                                                                      v257,
                                                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_long____get_Item__);
                    if ( !this )
                      goto LABEL_288;
                    if ( LODWORD(this->fields.__2__current) <= 1 )
                      goto LABEL_289;
                    v315.fields.value = (int64_t)this->fields.__8__1;
                    *(_QWORD *)&v315.fields.hasValue = &v310;
                    *(_QWORD *)&v310.fields.hasValue = 0LL;
                    v310.fields.value = 0LL;
                    System_Nullable_long____ctor(v315, Method_System_Nullable_long___ctor__, v260);
                    DataMasterBase__Replaced(v248, v258, v311, v310, v261);
                    this = *p_loadedIndices_5__5;
                    if ( !*p_loadedIndices_5__5 )
                      goto LABEL_288;
                    v262 = *(_QWORD *)&this->fields.__1__state;
                    v263 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(this->fields.__2__current);
                    if ( !v262 )
                      goto LABEL_288;
                    v264 = SLODWORD(this->fields.__2__current);
                    if ( (unsigned int)v264 >= *(_DWORD *)(v262 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)this,
                        v257,
                        *(const MethodInfo_348FEDC **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      LODWORD(this->fields.__2__current) = v264 + 1;
                      *(_DWORD *)(v262 + 4 * v264 + 32) = v257;
                    }
                    ++_4__this->fields.nowLoadCount;
                  }
                  v246 = *(_QWORD *)(v220 + 24);
                  if ( (int)++v247 >= (int)v246 )
                    goto LABEL_189;
                }
                goto LABEL_289;
              }
LABEL_189:
              this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !this )
                goto LABEL_288;
              this = (DataManager__updateMasterData_d__49_o *)DataManager__GetMasterData_object_(
                                                                (DataManager_o *)this,
                                                                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantProfileMaster___);
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
                this = (DataManager__updateMasterData_d__49_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
                if ( this )
                {
                  CommonUI__SetLoadMode((CommonUI_o *)this, 3, 0LL);
LABEL_201:
                  _4__this->fields.lastFrameTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
                  v267 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(
                                                              UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v265,
                                                              v266);
                  UnityEngine_WaitForEndOfFrame___ctor(v267, 0LL);
                  v4->fields.__2__current = (Il2CppObject *)v267;
                  v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                  sub_1B6406C(v85, (int32_t)v267, v268, v269);
                  v88 = 7;
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
          v270 = ManagerConfig_TypeInfo;
          if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
            v270 = ManagerConfig_TypeInfo;
          }
          if ( !v270->static_fields->UseMock )
          {
            DataManager__DeleteCacheFile(_4__this, 0LL);
            if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
            {
              v294 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v292, v293);
              UnityEngine_WaitForEndOfFrame___ctor(v294, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v294;
              v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v85, (int32_t)v294, v295, v296);
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
              v133 = (System_Func_bool__o *)sub_1B64314(System_Func_bool__TypeInfo, v131, v132);
              System_Func_bool____ctor(
                v133,
                (Il2CppObject *)_4__this,
                Method_DataManager__updateMasterData_b__49_0__,
                0LL);
              v136 = (UnityEngine_WaitUntil_o *)sub_1B64314(UnityEngine_WaitUntil_TypeInfo, v134, v135);
              UnityEngine_WaitUntil___ctor(v136, v133, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v136;
              v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v85, (int32_t)v136, v137, v138);
              v88 = 9;
              goto LABEL_82;
            }
            goto LABEL_288;
          }
        }
LABEL_206:
        lockCountObj = _4__this->fields.lockCountObj;
        lockTaken = 0;
        System_Threading_Monitor__Enter_62601116(lockCountObj, &lockTaken, 0LL);
        if ( _4__this->fields.nowLoadCount >= v4->fields._saveDataCount_5__3 )
        {
          v275 = 60;
        }
        else if ( _4__this->fields.isFailedLoad )
        {
          v274 = DataManager_TypeInfo;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            v274 = DataManager_TypeInfo;
          }
          v274->static_fields->updateMasterDataResult = 4;
          DataManager__StopMasterLoadThread(_4__this, 0LL);
          v275 = 20;
        }
        else
        {
          v275 = 62;
        }
        if ( lockTaken )
          System_Threading_Monitor__Exit(lockCountObj, 0LL);
        if ( v275 == 62 )
        {
          v277 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v272, v273);
          UnityEngine_WaitForEndOfFrame___ctor(v277, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v277;
          v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(v85, (int32_t)v277, v278, v279);
          v88 = 11;
          goto LABEL_82;
        }
        if ( v275 == 60 )
        {
          DataManager__StopMasterLoadThread(_4__this, 0LL);
          if ( !MiniMessagePack_MiniMessagePacker_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MiniMessagePack_MiniMessagePacker_TypeInfo);
          MiniMessagePack_MiniMessagePacker__LL_DiscardInternPool(0LL);
          v281 = _4__this->fields.saveNameList;
          if ( v281 )
          {
            size = v281->fields._size;
            v283 = v281->fields._version + 1;
            v281->fields._size = 0;
            v281->fields._version = v283;
            if ( size >= 1 )
              System_Array__Clear((System_Array_o *)v281->fields._items, 0, size, 0LL);
            v284 = _4__this->fields.saveDataMapList;
            if ( v284 )
            {
              v285 = v284->fields._size;
              v286 = v284->fields._version + 1;
              v284->fields._size = 0;
              v284->fields._version = v286;
              if ( v285 >= 1 )
                System_Array__Clear((System_Array_o *)v284->fields._items, 0, v285, 0LL);
              _4__this->fields.masterDataBytes = 0LL;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.masterDataBytes, 0, v285, v280);
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect_62421456(0LL);
              v289 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v287, v288);
              UnityEngine_WaitForEndOfFrame___ctor(v289, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v289;
              v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
              sub_1B6406C(v85, (int32_t)v289, v290, v291);
              v88 = 12;
              goto LABEL_82;
            }
          }
          goto LABEL_288;
        }
        return 0;
      }
      v207 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v206, v2);
      UnityEngine_WaitForEndOfFrame___ctor(v207, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v207;
      v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v85, (int32_t)v207, v208, v209);
      v88 = 6;
LABEL_82:
      *(_DWORD *)&v85[-1].fields.isMine = v88;
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
        v143 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v141, v142);
        UnityEngine_WaitForEndOfFrame___ctor(v143, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v143;
        v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B6406C(v85, (int32_t)v143, v144, v145);
        v88 = 10;
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
        v301 = _4__this->fields.datalist;
        if ( !v301 )
          goto LABEL_288;
        if ( v76 >= v301->max_length )
          goto LABEL_289;
        this = (DataManager__updateMasterData_d__49_o *)v301->m_Items[v76];
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
            v306 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v302);
            UnityEngine_WaitForEndOfFrame___ctor(v306, 0LL);
            v4->fields.__2__current = (Il2CppObject *)v306;
            v85 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(v85, (int32_t)v306, v307, v308);
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
      v303 = LastUsedDeckNumberManager_TypeInfo;
      if ( !LastUsedDeckNumberManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LastUsedDeckNumberManager_TypeInfo);
      LastUsedDeckNumberManager__Initialize((const MethodInfo *)v303);
      if ( !MaterialBranchRouteManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialBranchRouteManager_TypeInfo);
      MaterialBranchRouteManager__Initialize(0LL);
      v304 = EventRandomMissionClearManager_TypeInfo;
      if ( !EventRandomMissionClearManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EventRandomMissionClearManager_TypeInfo);
      EventRandomMissionClearManager__Initialize((const MethodInfo *)v304);
      if ( !MaterialGroupClearHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MaterialGroupClearHistoryManager_TypeInfo);
      MaterialGroupClearHistoryManager__Initialize(0LL);
      if ( !WarBoardMessageHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMessageHistoryManager_TypeInfo);
      WarBoardMessageHistoryManager__Initialize(0LL);
      if ( !WarBoardMovieHistoryManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardMovieHistoryManager_TypeInfo);
      WarBoardMovieHistoryManager__Initialize(0LL);
      v305 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v305 = DataManager_TypeInfo;
      }
      v151 = v305->static_fields;
      result = 0;
      v152 = 1;
LABEL_286:
      v151->updateMasterDataResult = v152;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DataManager__updateMasterData_d__49_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
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
  DataManager_c *v23; // x0
  Il2CppObject *webViewData; // x0
  struct System_String_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  DataManager_c *v30; // x0
  struct DataManager_StaticFields *static_fields; // x0
  Il2CppObject *Item; // x0
  __int64 v33; // x1
  __int64 v34; // x2
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
  __int64 v45; // x1
  __int64 v46; // x2
  UnityEngine_WaitForEndOfFrame_o *v47; // x20
  Il2CppObject **v48; // x19
  int32_t v49; // w2
  int32_t v50; // w3
  int v51; // w8
  Il2CppObject *dataObject_5__4; // x21
  struct System_Collections_Generic_Dictionary_string__object__o *Dictionary_37842300; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  __int64 v56; // x1
  UnityEngine_WaitForEndOfFrame_o *v57; // x20
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Collections_Generic_Dictionary_string__object__o *data_5__2; // x0
  struct System_Collections_Generic_Dictionary_string__object__o **p_data_5__2; // x20
  System_String_o *v62; // x21
  System_String_o *v63; // x22
  Il2CppObject *v64; // x0
  System_Collections_Generic_Dictionary_string__object__o *v65; // x23
  __int64 methodPtr_low; // x9
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w2
  int32_t v70; // w3

  if ( (byte_49FBF6F & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, method);
    sub_1B640C8(&System_Convert_TypeInfo, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v8);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9);
    sub_1B640C8(&JsonManager_TypeInfo, v10);
    sub_1B640C8(&NetworkManager_TypeInfo, v11);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_18148/*"contactURL"*/, v13);
    sub_1B640C8(&StringLiteral_19346/*"filePass"*/, v14);
    sub_1B640C8(&StringLiteral_17012/*"baseURL"*/, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    byte_49FBF6F = 1;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, 0, v19, v20);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, 0, v21, v22);
      v23 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v23 = DataManager_TypeInfo;
      }
      webViewData = v23->static_fields->webViewData;
      if ( !webViewData )
        goto LABEL_54;
      v25 = (struct System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))webViewData->klass->vtable[3].method)(
                                        webViewData,
                                        webViewData->klass->vtable[4].methodPtr);
      this->fields._cryptString_5__3 = v25;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, (int32_t)v25, v26, v27);
      v30 = DataManager_TypeInfo;
      if ( !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v30 = DataManager_TypeInfo;
      }
      static_fields = v30->static_fields;
      static_fields->webViewData = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->webViewData, 0, v28, v29);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v35 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v33, v34);
        UnityEngine_WaitForEndOfFrame___ctor(v35, 0LL);
        this->fields.__2__current = (Il2CppObject *)v35;
        p__2__current = &this->fields.__2__current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v35, v37, v38);
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, (int32_t)v42, v43, v44);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v47 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v45, v46);
        UnityEngine_WaitForEndOfFrame___ctor(v47, 0LL);
        this->fields.__2__current = (Il2CppObject *)v47;
        v48 = &this->fields.__2__current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)v48, (int32_t)v47, v49, v50);
        v51 = 2;
LABEL_30:
        *((_DWORD *)v48 - 2) = v51;
        return 1;
      }
LABEL_25:
      dataObject_5__4 = this->fields._dataObject_5__4;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      Dictionary_37842300 = JsonManager__getDictionary_37842300(dataObject_5__4, 0LL);
      this->fields._data_5__2 = Dictionary_37842300;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, (int32_t)Dictionary_37842300, v54, v55);
      if ( !_4__this )
        goto LABEL_52;
      if ( DataManager__CheckWaitforFrame(_4__this, 0LL) )
      {
        v57 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v56, v2);
        UnityEngine_WaitForEndOfFrame___ctor(v57, 0LL);
        this->fields.__2__current = (Il2CppObject *)v57;
        v48 = &this->fields.__2__current;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)v48, (int32_t)v57, v58, v59);
        v51 = 3;
        goto LABEL_30;
      }
LABEL_31:
      p_data_5__2 = &this->fields._data_5__2;
      data_5__2 = this->fields._data_5__2;
      if ( !data_5__2 )
        goto LABEL_50;
      v62 = (System_String_o *)StringLiteral_1/*""*/;
      v63 = (System_String_o *)StringLiteral_1/*""*/;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)data_5__2,
              (Il2CppObject *)StringLiteral_17012/*"baseURL"*/,
              (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_36;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_17012/*"baseURL"*/,
               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v63 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
LABEL_36:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
              (System_Collections_Generic_Dictionary_object__object__o *)Item,
              (Il2CppObject *)StringLiteral_18148/*"contactURL"*/,
              (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
        goto LABEL_41;
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)Item,
               (Il2CppObject *)StringLiteral_18148/*"contactURL"*/,
               (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( !Item )
        goto LABEL_52;
      v62 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                 Item,
                                 Item->klass->vtable[4].methodPtr);
LABEL_41:
      Item = (Il2CppObject *)*p_data_5__2;
      if ( !*p_data_5__2 )
        goto LABEL_52;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)Item,
             (Il2CppObject *)StringLiteral_19346/*"filePass"*/,
             (const MethodInfo_31795EC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
      {
        Item = (Il2CppObject *)*p_data_5__2;
        if ( !*p_data_5__2 )
LABEL_52:
          sub_1B64324(Item);
        v64 = System_Collections_Generic_Dictionary_object__object___get_Item(
                (System_Collections_Generic_Dictionary_object__object__o *)Item,
                (Il2CppObject *)StringLiteral_19346/*"filePass"*/,
                (const MethodInfo_3179378 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        v65 = (System_Collections_Generic_Dictionary_string__object__o *)v64;
        if ( v64 )
        {
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v64->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
            || (System_Collections_Generic_Dictionary_string__object__c *)v64->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_Dictionary_string__object__TypeInfo )
          {
            sub_1B645E4(v64);
LABEL_54:
            sub_1B64324(webViewData);
          }
        }
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        NetworkManager__setupWebViewAddress(v63, v62, v65, 0LL);
      }
LABEL_50:
      this->fields._data_5__2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._data_5__2, 0, v2, v3);
      this->fields._cryptString_5__3 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._cryptString_5__3, 0, v67, v68);
      this->fields._dataObject_5__4 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields._dataObject_5__4, 0, v69, v70);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_DataManager__updateWebViewData_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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