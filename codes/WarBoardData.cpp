void WarBoardData___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct WarBoardData_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2E377 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardData_TypeInfo);
    sub_1C93AD4(&StringLiteral_1925/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/);
    sub_1C93AD4(&StringLiteral_15470/*"WARBOARDDATA_SAVEDATA"*/);
    byte_4D2E377 = 1;
  }
  WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY = (struct System_String_o *)StringLiteral_15470/*"WARBOARDDATA_SAVEDATA"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardData_TypeInfo->static_fields,
    StringLiteral_15470/*"WARBOARDDATA_SAVEDATA"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_1925/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  static_fields = WarBoardData_TypeInfo->static_fields;
  static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_1925/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void WarBoardData___ctor(
        WarBoardData_o *this,
        WarBoardStageEntity_o *stage,
        WarBoardStageLayoutEntity_array *layoutEntities,
        WarBoardRoadEntity_array *roadEntities,
        WarBoardDataEntity_o *serverData,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v8; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct System_UInt32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  System_Collections_Generic_List_object__o *v36; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_Generic_List_object__o *v43; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  System_Collections_Generic_List_int__o *v50; // x19
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  System_Collections_Generic_List_object__o *v57; // x19
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  System_Collections_Generic_List_int__o *v64; // x19
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  System_Collections_Generic_List_int__o *v71; // x19
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  WarBoardData___c_c *v78; // x0
  System_Comparison_T__o *_9__77_0; // x19
  Il2CppObject *v80; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  __int64 Instance; // x0
  unsigned __int64 throughCondId; // x1
  Il2CppObject *MasterData_object; // x0
  struct WarBoardStageNpcMaster_o **p_stageNpcMaster; // x19
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  WarBoardData___c_c *v105; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x21
  System_Func_T__TResult__o *_9__77_1; // x19
  Il2CppObject *v108; // x22
  struct WarBoardData___c_StaticFields *v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v116; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  WarBoardData___c_c *v124; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x20
  System_Func_T__TResult__o *_9__77_2; // x19
  Il2CppObject *v127; // x21
  struct WarBoardData___c_StaticFields *v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v135; // x0
  int32_t v136; // w2
  int32_t v137; // w3
  System_String_o *v138; // x4
  int32_t v139; // w5
  int64_t v140; // x6
  System_String_o *v141; // x7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  WarBoardData___c_c *v143; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v144; // x20
  System_Func_object__int__o *_9__77_3; // x19
  Il2CppObject *v146; // x21
  struct WarBoardData___c_StaticFields *v147; // x0
  int32_t v148; // w2
  int32_t v149; // w3
  System_String_o *v150; // x4
  int32_t v151; // w5
  int64_t v152; // x6
  System_String_o *v153; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v155; // x0
  WarBoardData___c_c *v156; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v157; // x20
  System_Func_object__int__o *_9__77_4; // x19
  Il2CppObject *v159; // x21
  struct WarBoardData___c_StaticFields *v160; // x0
  int32_t v161; // w2
  int32_t v162; // w3
  System_String_o *v163; // x4
  int32_t v164; // w5
  int64_t v165; // x6
  System_String_o *v166; // x7
  System_Collections_Generic_List_object__o *v167; // x27
  WarBoardData_c *v168; // x0
  WarBoardDataEntity_o *v169; // x26
  System_Collections_Generic_List_object__o *v170; // x24
  WarBoardStageLayoutEntity_array *v171; // x28
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  WarBoardData_c *v173; // x0
  int32_t progressType; // w19
  System_String_o *v175; // x19
  System_String_o *String; // x19
  System_Byte_array *v177; // x19
  MiniMessagePack_MiniMessagePacker_o *v178; // x20
  Il2CppObject *v179; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x20
  int32_t v181; // w2
  int32_t v182; // w3
  System_String_o *v183; // x4
  int32_t v184; // w5
  int64_t v185; // x6
  System_String_o *v186; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x24
  _QWORD *v189; // x25
  unsigned __int64 v190; // x28
  __int64 v191; // x22
  int32_t v192; // w2
  int32_t v193; // w3
  System_String_o *v194; // x4
  int32_t v195; // w5
  int64_t v196; // x6
  System_String_o *v197; // x7
  WarBoardPieceData_SaveData_o *v198; // x1
  WarBoardPieceData_SaveData_o **v199; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v200; // x19
  System_Func_object__bool__o *v201; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v202; // x19
  System_Func_object__bool__o *v203; // x23
  struct WarBoardItemData_SaveData_array *itemSaves; // x24
  unsigned __int64 v205; // x28
  __int64 v206; // x19
  int32_t v207; // w2
  int32_t v208; // w3
  System_String_o *v209; // x4
  int32_t v210; // w5
  int64_t v211; // x6
  System_String_o *v212; // x7
  WarBoardItemData_SaveData_o *v213; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v214; // x22
  System_Func_object__bool__o *v215; // x23
  GrandQuestFolderBoardItem_o *v216; // x25
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  char v218; // w26
  unsigned __int64 v219; // x29
  __int64 v220; // x19
  int32_t v221; // w2
  int32_t v222; // w3
  System_String_o *v223; // x4
  int32_t v224; // w5
  int64_t v225; // x6
  System_String_o *v226; // x7
  WarBoardTreasureData_SaveData_o *v227; // x1
  __int64 v228; // x21
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x23
  System_Func_object__bool__o *v230; // x24
  WarBoardData___c_c *v231; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v232; // x21
  System_Func_object__bool__o *_9__77_9; // x19
  Il2CppObject *v234; // x23
  struct WarBoardData___c_StaticFields *v235; // x0
  int32_t v236; // w2
  int32_t v237; // w3
  System_String_o *v238; // x4
  int32_t v239; // w5
  int64_t v240; // x6
  System_String_o *v241; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v242; // x0
  System_Object_array *v243; // x0
  int32_t v244; // w2
  int32_t v245; // w3
  System_String_o *v246; // x4
  int32_t v247; // w5
  int64_t v248; // x6
  System_String_o *v249; // x7
  struct WarBoardWallData_SaveData_array *wallSaves; // x24
  unsigned __int64 v251; // x25
  __int64 v252; // x19
  int32_t v253; // w2
  int32_t v254; // w3
  System_String_o *v255; // x4
  int32_t v256; // w5
  int64_t v257; // x6
  System_String_o *v258; // x7
  WarBoardWallData_SaveData_o *v259; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v260; // x22
  System_Func_object__bool__o *v261; // x23
  int v262; // w19
  unsigned __int64 v263; // x23
  __int64 v264; // x24
  __int64 v265; // x25
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v267; // x27
  WarBoardSquareIndexData_SaveData_o *v268; // x21
  WarBoardSquareIndexData_o *v269; // x19
  int32_t v270; // w2
  int32_t v271; // w3
  System_String_o *v272; // x4
  int32_t v273; // w5
  int64_t v274; // x6
  System_String_o *v275; // x7
  int v276; // w19
  unsigned __int64 v277; // x23
  __int64 v278; // x24
  __int64 v279; // x25
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v281; // x27
  WarBoardBossBattleData_SaveData_o *v282; // x21
  WarBoardBossBattleData_o *v283; // x19
  const MethodInfo *v284; // x2
  int32_t v285; // w2
  int32_t v286; // w3
  System_String_o *v287; // x4
  int32_t v288; // w5
  int64_t v289; // x6
  System_String_o *v290; // x7
  WarBoardData_c *v291; // x0
  int32_t v292; // w2
  int32_t v293; // w3
  System_String_o *v294; // x4
  int32_t v295; // w5
  int64_t v296; // x6
  System_String_o *v297; // x7
  unsigned __int64 v298; // x25
  __int64 v299; // x23
  int32_t v300; // w2
  int32_t v301; // w3
  System_String_o *v302; // x4
  int32_t v303; // w5
  int64_t v304; // x6
  System_String_o *v305; // x7
  WarBoardStageLayoutEntity_o *v306; // x1
  WarBoardStageLayoutEntity_o **v307; // x29
  WarBoardStageLayoutEntity_o *v308; // x19
  WarBoardSquareData_o *v309; // x22
  int32_t v310; // w2
  int32_t v311; // w3
  System_String_o *v312; // x4
  int32_t v313; // w5
  int64_t v314; // x6
  System_String_o *v315; // x7
  __int64 v316; // x9
  WarBoardStageLayoutEntity_o *v317; // x8
  struct System_Object_array *items; // x8
  _QWORD *v319; // x9
  __int64 size; // x10
  Il2CppClass **v321; // x0
  WarBoardStageLayoutEntity_o *v322; // x8
  int32_t questPhase; // w22
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_object__bool__o *v325; // x20
  WarBoardUserServantData_o *v326; // x21
  WarBoardUserMasterData_o *v327; // x20
  struct System_Object_array *v328; // x8
  _QWORD *v329; // x9
  __int64 v330; // x10
  Il2CppClass **v331; // x0
  GrandQuestFolderBoardItem_o *v332; // x0
  int32_t v333; // w1
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_object__bool__o *v335; // x20
  WarBoardStageLayoutEntity_o *v336; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v337; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v338; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  WarBoardStageLayoutEntity_o *v341; // x28
  int32_t v342; // w22
  bool v343; // w26
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v344; // x19
  WarBoardPieceData_o *v345; // x0
  WarBoardPieceData_o *v346; // x24
  bool v347; // w5
  int32_t v348; // w2
  int32_t v349; // w3
  System_String_o *v350; // x4
  int32_t v351; // w5
  int64_t v352; // x6
  System_String_o *v353; // x7
  __int64 v354; // x8
  _QWORD *v355; // x9
  __int64 v356; // x10
  NpcFollowerEntity_o *Entity_43141800; // x0
  NpcFollowerEntity_o *v358; // x19
  int32_t v359; // w2
  int32_t v360; // w3
  System_String_o *v361; // x4
  int32_t v362; // w5
  int64_t v363; // x6
  System_String_o *v364; // x7
  struct System_Object_array *v365; // x8
  _QWORD *v366; // x9
  __int64 v367; // x10
  Il2CppClass **v368; // x0
  __int64 v369; // x8
  System_Collections_Generic_List_object__o *v370; // x0
  Il2CppObject *v371; // x1
  struct System_Object_array *v372; // x8
  _QWORD *v373; // x9
  __int64 v374; // x10
  Il2CppClass **v375; // x0
  WarBoardStageLayoutEntity_o *v376; // x21
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_object__bool__o *v378; // x20
  Il2CppObject *v379; // x0
  WarBoardStageLayoutEntity_o *v380; // x19
  WarBoardUserGetItemData_o *v381; // x21
  WarBoardItemData_o *v382; // x20
  System_Collections_Generic_List_object__o *v383; // x12
  int32_t version; // w10
  struct System_Object_array *v385; // x8
  __int64 *v386; // x9
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_object__bool__o *v388; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_object__bool__o *v390; // x20
  Il2CppObject *v391; // x0
  WarBoardStageLayoutEntity_o *v392; // x19
  WarBoardUserWallData_o *v393; // x21
  __int64 v394; // x9
  __int64 v395; // x10
  Il2CppClass **v396; // x0
  System_Object_array *v397; // x0
  WarBoardData_o *v398; // x25
  int32_t v399; // w2
  int32_t v400; // w3
  System_String_o *v401; // x4
  int32_t v402; // w5
  int64_t v403; // x6
  System_String_o *v404; // x7
  System_Object_array *v405; // x0
  int32_t v406; // w2
  int32_t v407; // w3
  System_String_o *v408; // x4
  int32_t v409; // w5
  int64_t v410; // x6
  System_String_o *v411; // x7
  System_Object_array *v412; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x23
  int32_t v414; // w2
  int32_t v415; // w3
  System_String_o *v416; // x4
  int32_t v417; // w5
  int64_t v418; // x6
  System_String_o *v419; // x7
  System_Object_array *pieces; // x19
  System_Comparison_T__o *v421; // x20
  System_Object_array *v422; // x0
  int32_t v423; // w2
  int32_t v424; // w3
  System_String_o *v425; // x4
  int32_t v426; // w5
  int64_t v427; // x6
  System_String_o *v428; // x7
  System_Object_array *v429; // x0
  int32_t v430; // w2
  int32_t v431; // w3
  System_String_o *v432; // x4
  int32_t v433; // w5
  int64_t v434; // x6
  System_String_o *v435; // x7
  System_Object_array *v436; // x0
  int32_t v437; // w2
  int32_t v438; // w3
  System_String_o *v439; // x4
  int32_t v440; // w5
  int64_t v441; // x6
  System_String_o *v442; // x7
  System_Object_array *v443; // x0
  int32_t v444; // w2
  int32_t v445; // w3
  System_String_o *v446; // x4
  int32_t v447; // w5
  int64_t v448; // x6
  System_String_o *v449; // x7
  int32_t v450; // w2
  int32_t v451; // w3
  System_String_o *v452; // x4
  int32_t v453; // w5
  int64_t v454; // x6
  System_String_o *v455; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v456; // x8
  struct WarBoardPieceData_SaveData_array *v457; // x28
  unsigned __int64 v458; // x29
  __int64 v459; // x21
  int32_t v460; // w2
  int32_t v461; // w3
  System_String_o *v462; // x4
  int32_t v463; // w5
  int64_t v464; // x6
  System_String_o *v465; // x7
  WarBoardPieceData_SaveData_o *v466; // x1
  WarBoardPieceData_SaveData_o **v467; // x22
  System_Collections_Generic_IEnumerable_T__o *v468; // x19
  System_Func_object__bool__o *v469; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v470; // x19
  System_Func_object__bool__o *v471; // x24
  Il2CppObject *v472; // x21
  System_Collections_Generic_List_object__o *v473; // x24
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v475; // x26
  WarBoardPieceData_o *v476; // x25
  int32_t v477; // w2
  int32_t v478; // w3
  System_String_o *v479; // x4
  int32_t v480; // w5
  int64_t v481; // x6
  System_String_o *v482; // x7
  struct System_Object_array *v483; // x8
  _QWORD *v484; // x9
  __int64 v485; // x10
  Il2CppClass **v486; // x0
  System_Object_array *v487; // x0
  int32_t v488; // w2
  int32_t v489; // w3
  System_String_o *v490; // x4
  int32_t v491; // w5
  int64_t v492; // x6
  System_String_o *v493; // x7
  __int64 v494; // x20
  int v495; // w8
  unsigned int v496; // w21
  __int64 v497; // x8
  WarBoardItemData_SaveData_o *v498; // x19
  _DWORD *data; // x20
  int v500; // w8
  unsigned int v501; // w21
  char *v502; // x8
  WarBoardTreasureData_SaveData_o *v503; // x19
  __int64 v504; // x20
  int v505; // w8
  unsigned int v506; // w21
  __int64 v507; // x8
  WarBoardWallData_SaveData_o *v508; // x19
  Il2CppClass *element_class; // x20
  int namespaze; // w8
  unsigned int v511; // w21
  void **v512; // x8
  WarBoardSquareData_SaveData_o *v513; // x19
  System_Collections_Generic_List_object__o *v514; // x19
  int32_t v515; // w2
  int32_t v516; // w3
  System_String_o *v517; // x4
  int32_t v518; // w5
  int64_t v519; // x6
  System_String_o *v520; // x7
  int32_t v521; // w2
  int32_t v522; // w3
  System_String_o *v523; // x4
  int32_t v524; // w5
  int64_t v525; // x6
  System_String_o *v526; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v527; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x20
  il2cpp_array_size_t v529; // x8
  unsigned __int64 v530; // x23
  WarBoardEventData_SaveData_o *v531; // x19
  System_Collections_Generic_List_object__o *v532; // x21
  WarBoardEventData_o *v533; // x22
  int32_t v534; // w2
  int32_t v535; // w3
  System_String_o *v536; // x4
  int32_t v537; // w5
  int64_t v538; // x6
  System_String_o *v539; // x7
  struct System_Object_array *v540; // x8
  _QWORD *v541; // x9
  __int64 v542; // x10
  Il2CppClass **v543; // x0
  Il2CppClass *v544; // x8
  struct System_Int32_array *typeHierarchy; // x1
  int32_t v546; // w2
  int32_t v547; // w3
  System_String_o *v548; // x4
  int32_t v549; // w5
  int64_t v550; // x6
  System_String_o *v551; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v552; // x8
  GrandQuestFolderBoardItem_c *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v554; // x19
  int32_t v555; // w2
  int32_t v556; // w3
  System_String_o *v557; // x4
  int32_t v558; // w5
  int64_t v559; // x6
  System_String_o *v560; // x7
  _QWORD *properties; // x20
  __int64 v562; // x8
  unsigned __int64 v563; // x23
  WarBoardPrevCondData_SaveData_o *v564; // x19
  System_Collections_Generic_List_object__o *v565; // x21
  WarBoardPrevCondData_o *v566; // x22
  int32_t v567; // w2
  int32_t v568; // w3
  System_String_o *v569; // x4
  int32_t v570; // w5
  int64_t v571; // x6
  System_String_o *v572; // x7
  struct System_Object_array *v573; // x8
  _QWORD *v574; // x9
  __int64 v575; // x10
  Il2CppClass **v576; // x0
  System_Collections_Generic_List_object__o *v577; // x19
  int32_t v578; // w2
  int32_t v579; // w3
  System_String_o *v580; // x4
  int32_t v581; // w5
  int64_t v582; // x6
  System_String_o *v583; // x7
  _QWORD *methods; // x20
  __int64 v585; // x8
  unsigned __int64 v586; // x23
  HoldReinforcementsData_SaveData_o *v587; // x19
  System_Collections_Generic_List_object__o *v588; // x21
  HoldReinforcementsData_o *v589; // x22
  int32_t v590; // w2
  int32_t v591; // w3
  System_String_o *v592; // x4
  int32_t v593; // w5
  int64_t v594; // x6
  System_String_o *v595; // x7
  struct System_Object_array *v596; // x8
  _QWORD *v597; // x9
  __int64 v598; // x10
  Il2CppClass **v599; // x0
  System_Collections_Generic_List_TSource__o *v600; // x0
  int32_t v601; // w2
  int32_t v602; // w3
  System_String_o *v603; // x4
  int32_t v604; // w5
  int64_t v605; // x6
  System_String_o *v606; // x7
  System_Collections_Generic_List_object__o *v607; // x19
  int32_t v608; // w2
  int32_t v609; // w3
  System_String_o *v610; // x4
  int32_t v611; // w5
  int64_t v612; // x6
  System_String_o *v613; // x7
  int32_t v614; // w2
  int32_t v615; // w3
  System_String_o *v616; // x4
  int32_t v617; // w5
  int64_t v618; // x6
  System_String_o *v619; // x7
  Il2CppClass **implementedInterfaces; // x20
  Il2CppClass *v621; // x8
  unsigned __int64 v622; // x23
  WarBoardUiData_SaveData_o *v623; // x19
  System_Collections_Generic_List_object__o *v624; // x21
  WarBoardUiData_o *v625; // x22
  int32_t v626; // w2
  int32_t v627; // w3
  System_String_o *v628; // x4
  int32_t v629; // w5
  int64_t v630; // x6
  System_String_o *v631; // x7
  struct System_Object_array *v632; // x8
  _QWORD *v633; // x9
  __int64 v634; // x10
  Il2CppClass **v635; // x0
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets; // x1
  Il2CppClass *v637; // x8
  WarBoardData_WarBoardLocalSaveData_o *v638; // x19
  int32_t v639; // w2
  int32_t v640; // w3
  System_String_o *v641; // x4
  int32_t v642; // w5
  int64_t v643; // x6
  System_String_o *v644; // x7
  __int64 v645; // x0
  GrandQuestFolderBoardItem_o *p_bgAnimationInfo_k__BackingField; // [xsp+10h] [xbp-170h]
  GrandQuestFolderBoardItem_o *p_listUiData; // [xsp+18h] [xbp-168h]
  GrandQuestFolderBoardItem_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  GrandQuestFolderBoardItem_o *p_latestBattlePieceUniqueIndexes; // [xsp+28h] [xbp-158h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+30h] [xbp-150h]
  GrandQuestFolderBoardItem_o *p_reinforcementsSaveList; // [xsp+38h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *v652; // [xsp+40h] [xbp-140h]
  System_Collections_Generic_List_object__o *v653; // [xsp+48h] [xbp-138h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+50h] [xbp-130h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_object__o *v656; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_object__o *v657; // [xsp+68h] [xbp-118h]
  System_Collections_Generic_List_object__o *v658; // [xsp+70h] [xbp-110h]
  NpcFollowerMaster_o *v659; // [xsp+78h] [xbp-108h]
  WarBoardStagePieceDetailMaster_o *Master_object; // [xsp+80h] [xbp-100h]
  System_Collections_Generic_List_object__o *v661; // [xsp+88h] [xbp-F8h]
  WarBoardData_Fields *p_fields; // [xsp+90h] [xbp-F0h]
  WarBoardCommonReleaseMaster_o *v663; // [xsp+98h] [xbp-E8h]
  WarBoardData_o *v664; // [xsp+A0h] [xbp-E0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+A8h] [xbp-D8h]
  System_Collections_Generic_List_object__o *v666; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v667; // [xsp+B0h] [xbp-D0h]
  System_Collections_Generic_List_object__o *v668; // [xsp+B8h] [xbp-C8h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+C8h] [xbp-B8h]
  GrandQuestFolderBoardItem_o *p_listPrevCond; // [xsp+D0h] [xbp-B0h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D8h] [xbp-A8h]
  int32_t v673; // [xsp+E4h] [xbp-9Ch]
  int32_t questId; // [xsp+E8h] [xbp-98h]
  int32_t npcIdx; // [xsp+ECh] [xbp-94h]
  System_Object_array **v677; // [xsp+F0h] [xbp-90h]
  WarBoardDataEntity_o *v678; // [xsp+F0h] [xbp-90h]
  il2cpp_array_size_t max_length; // [xsp+F8h] [xbp-88h]
  WarBoardRoadEntity_array *roadEntitiesb; // [xsp+100h] [xbp-80h]
  bool isChangeName; // [xsp+10Ch] [xbp-74h] BYREF
  Il2CppObject *v683; // [xsp+110h] [xbp-70h] BYREF
  WarBoardStagePieceDetailEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_4D2E31F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Resize_WarBoardBossBattleData___);
    sub_1C93AD4(&Method_System_Array_Resize_WarBoardSquareIndexData___);
    sub_1C93AD4(&Method_System_Array_Sort_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Array_Sort_WarBoardStageLayoutEntity___);
    sub_1C93AD4(&Method_BasicHelper_Any_WarBoardPieceData___);
    sub_1C93AD4(&System_Comparison_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
    sub_1C93AD4(&System_Func_WarBoardUserTreasureData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardUserGetItemData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    sub_1C93AD4(&HoldReinforcementsData_TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardWallData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardItemData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardWallData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardItemData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardUiData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardEventData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
    sub_1C93AD4(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
    sub_1C93AD4(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardData___c___ctor_b__77_0__);
    sub_1C93AD4(&Method_WarBoardData___c___ctor_b__77_1__);
    sub_1C93AD4(&Method_WarBoardData___c___ctor_b__77_2__);
    sub_1C93AD4(&Method_WarBoardData___c___ctor_b__77_3__);
    sub_1C93AD4(&Method_WarBoardData___c___ctor_b__77_4__);
    sub_1C93AD4(&Method_WarBoardData___c___ctor_b__77_9__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass77_0_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass77_1_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass77_2_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass77_3_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass77_4_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass77_5_TypeInfo);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    sub_1C93AD4(&uint___TypeInfo);
    sub_1C93AD4(&WarBoardBossBattleData_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData_ComparePiece__);
    sub_1C93AD4(&WarBoardData_TypeInfo);
    sub_1C93AD4(&WarBoardEffectData_TypeInfo);
    sub_1C93AD4(&WarBoardEventData_TypeInfo);
    sub_1C93AD4(&WarBoardItemData_TypeInfo);
    sub_1C93AD4(&WarBoardData_WarBoardLocalSaveData_TypeInfo);
    sub_1C93AD4(&WarBoardPieceData_TypeInfo);
    sub_1C93AD4(&WarBoardPrevCondData_TypeInfo);
    sub_1C93AD4(&WarBoardSquareData_TypeInfo);
    sub_1C93AD4(&WarBoardSquareIndexData_TypeInfo);
    sub_1C93AD4(&WarBoardTreasureData_TypeInfo);
    sub_1C93AD4(&WarBoardUiData_TypeInfo);
    sub_1C93AD4(&WarBoardWallData_TypeInfo);
    byte_4D2E31F = 1;
  }
  v683 = 0;
  entity = 0;
  isChangeName = 0;
  v8 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v8,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v8;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int32_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v15;
  p_listEvent = &this->fields.listEvent;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.listEvent, (int32_t)v15, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)&this->fields.winCondId = -1;
  v22 = (struct System_Int32_array *)sub_1C93B7C(int___TypeInfo, 2);
  this->fields.latestPieceActionSquareIndexes = v22;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.latestPieceActionSquareIndexes,
    (int32_t)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (struct System_UInt32_array *)sub_1C93B7C(uint___TypeInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v29;
  p_latestBattlePieceUniqueIndexes = (GrandQuestFolderBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v36;
  p_listPrevCond = (GrandQuestFolderBoardItem_o *)&this->fields.listPrevCond;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.listPrevCond, (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v43;
  p_reinforcementsSaveList = (GrandQuestFolderBoardItem_o *)&this->fields.reinforcementsSaveList;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.reinforcementsSaveList,
    (int32_t)v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v50,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v50;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.playedStageReinforcementsList,
    (int32_t)v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56);
  v57 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v57,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v57;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.listUiData, (int32_t)v57, v58, v59, v60, v61, v62, v63);
  v64 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v64,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v64;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.masterExistsForce,
    (int32_t)v64,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v71 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v71,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v71;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.reinforcementsAppointmentSquareList,
    (int32_t)v71,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0);
  v78 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v78 = WarBoardData___c_TypeInfo;
  }
  _9__77_0 = (System_Comparison_T__o *)v78->static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v78 = WarBoardData___c_TypeInfo;
    }
    v80 = (Il2CppObject *)v78->static_fields->__9;
    _9__77_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    System_Comparison_object____ctor(_9__77_0, v80, Method_WarBoardData___c___ctor_b__77_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__77_0,
      (int32_t)_9__77_0,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87);
  }
  System_Array__Sort_object__51842132(
    (System_Object_array *)layoutEntities,
    _9__77_0,
    (const MethodInfo_3170C54 *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)stage, v88, v89, v90, v91, v92, v93);
  if ( !layoutEntities )
    goto LABEL_359;
  max_length = layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  DataManager__GetMasterData_object_(
    (DataManager_o *)Instance,
    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = (struct WarBoardStageNpcMaster_o *)MasterData_object;
  p_stageNpcMaster = &this->fields.stageNpcMaster;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.stageNpcMaster,
    (int32_t)MasterData_object,
    v98,
    v99,
    v100,
    v101,
    v102,
    v103);
  if ( !stage )
    goto LABEL_359;
  Instance = (__int64)*p_stageNpcMaster;
  if ( !*p_stageNpcMaster )
    goto LABEL_359;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0);
  v105 = WarBoardData___c_TypeInfo;
  v106 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  p_playedStageReinforcementsList = (GrandQuestFolderBoardItem_o *)&this->fields.playedStageReinforcementsList;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v105 = WarBoardData___c_TypeInfo;
  }
  _9__77_1 = (System_Func_T__TResult__o *)v105->static_fields->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      v105 = WarBoardData___c_TypeInfo;
    }
    v108 = (Il2CppObject *)v105->static_fields->__9;
    _9__77_1 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_1, v108, Method_WarBoardData___c___ctor_b__77_1__, 0);
    v109 = WarBoardData___c_TypeInfo->static_fields;
    v109->__9__77_1 = (struct System_Func_WarBoardStageNpcEntity__uint__o *)_9__77_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v109->__9__77_1, (int32_t)_9__77_1, v110, v111, v112, v113, v114, v115);
  }
  v116 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                           v106,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_31E428C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v116;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.npcEntityDict,
    (int32_t)v116,
    v117,
    v118,
    v119,
    v120,
    v121,
    v122);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_359;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0);
  v124 = WarBoardData___c_TypeInfo;
  v125 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v124 = WarBoardData___c_TypeInfo;
  }
  _9__77_2 = (System_Func_T__TResult__o *)v124->static_fields->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( !v124->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v124);
      v124 = WarBoardData___c_TypeInfo;
    }
    v127 = (Il2CppObject *)v124->static_fields->__9;
    _9__77_2 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    System_Func_object__uint____ctor(_9__77_2, v127, Method_WarBoardData___c___ctor_b__77_2__, 0);
    v128 = WarBoardData___c_TypeInfo->static_fields;
    v128->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v128->__9__77_2, (int32_t)_9__77_2, v129, v130, v131, v132, v133, v134);
  }
  v135 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_object__uint_(
                                                                                              v125,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_31E428C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v135;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.actionPointEntityDict,
    (int32_t)v135,
    v136,
    v137,
    v138,
    v139,
    v140,
    v141);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_359;
  Values = System_Collections_Generic_Dictionary_uint__object___get_Values(
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
             (const MethodInfo_3567588 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v143 = WarBoardData___c_TypeInfo;
  v144 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v143 = WarBoardData___c_TypeInfo;
  }
  _9__77_3 = (System_Func_object__int__o *)v143->static_fields->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( !v143->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v143);
      v143 = WarBoardData___c_TypeInfo;
    }
    v146 = (Il2CppObject *)v143->static_fields->__9;
    _9__77_3 = (System_Func_object__int__o *)sub_1C93D20(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_3, v146, Method_WarBoardData___c___ctor_b__77_3__, 0);
    v147 = WarBoardData___c_TypeInfo->static_fields;
    v147->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v147->__9__77_3, (int32_t)_9__77_3, v148, v149, v150, v151, v152, v153);
  }
  Instance = System_Linq_Enumerable__Max_object_(
               v144,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_31D24AC *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_359;
  v155 = System_Collections_Generic_Dictionary_uint__object___get_Values(
           npcEntityDict,
           (const MethodInfo_3567588 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v156 = WarBoardData___c_TypeInfo;
  v157 = (System_Collections_Generic_IEnumerable_TSource__o *)v155;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v156 = WarBoardData___c_TypeInfo;
  }
  _9__77_4 = (System_Func_object__int__o *)v156->static_fields->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( !v156->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v156);
      v156 = WarBoardData___c_TypeInfo;
    }
    v159 = (Il2CppObject *)v156->static_fields->__9;
    _9__77_4 = (System_Func_object__int__o *)sub_1C93D20(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__77_4, v159, Method_WarBoardData___c___ctor_b__77_4__, 0);
    v160 = WarBoardData___c_TypeInfo->static_fields;
    v160->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v160->__9__77_4, (int32_t)_9__77_4, v161, v162, v163, v164, v165, v166);
  }
  p_bgAnimationInfo_k__BackingField = (GrandQuestFolderBoardItem_o *)&this->fields._bgAnimationInfo_k__BackingField;
  p_listUiData = (GrandQuestFolderBoardItem_o *)&this->fields.listUiData;
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_object_(
                                               v157,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_31D24AC *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v664 = this;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  v652 = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  v659 = (NpcFollowerMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v663 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v668 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v668,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v661 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v661,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v167 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v167,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v658 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardItemData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v658,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v653 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v653,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v656 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardWallData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v656,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v657 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v657,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v168 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v168 = WarBoardData_TypeInfo;
  }
  v169 = serverData;
  v170 = v668;
  v171 = layoutEntities;
  WARBOARDDATA_SAVEDATA_KEY = v168->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0);
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_359;
    v173 = WarBoardData_TypeInfo;
    progressType = serverData->fields.progressType;
    if ( !WarBoardData_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    if ( progressType == 3 )
    {
      WarBoardData__DeleteLocalSave((const MethodInfo *)v173);
    }
    else
    {
      v175 = WarBoardData_TypeInfo->static_fields->WARBOARDDATA_SAVEDATA_KEY;
      if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      String = EncryptedPlayerPrefs__GetString(v175, 0);
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v177 = System_Convert__FromBase64String(String, 0);
      v178 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C93D20(MiniMessagePack_MiniMessagePacker_TypeInfo);
      MiniMessagePack_MiniMessagePacker___ctor(v178, 0);
      if ( !v178 )
        goto LABEL_359;
      v179 = MiniMessagePack_MiniMessagePacker__UnpackClass_object_(
               v178,
               v177,
               (const MethodInfo_322B54C *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)v179;
      p_localSaveData = &this->fields.localSaveData;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields.localSaveData,
        (int32_t)v179,
        v181,
        v182,
        v183,
        v184,
        v185,
        v186);
      localSaveData = this->fields.localSaveData;
      if ( localSaveData
        && localSaveData->fields.questId == serverData->fields.questId
        && localSaveData->fields.questPhase == serverData->fields.questPhase
        && localSaveData->fields.stageId == serverData->fields.stageId )
      {
        if ( localSaveData->fields.localSaveTiming == 6
          && (localSaveData->fields.turn != serverData->fields.turn
           || localSaveData->fields.turnForceId != serverData->fields.turnForceId
           || localSaveData->fields.turnGroupId != serverData->fields.turnGroupId) )
        {
          localSaveData->fields.localSaveTiming = 7;
        }
        Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !*p_localSaveData )
          goto LABEL_359;
        if ( !Instance )
          goto LABEL_359;
        Instance = (__int64)WarBoardManager__CheckAndLoadCacheServerData(
                              (WarBoardManager_o *)Instance,
                              serverData,
                              (*p_localSaveData)->fields.localSaveTiming,
                              0);
        if ( !*p_localSaveData )
          goto LABEL_359;
        pieceSaves = (*p_localSaveData)->fields.pieceSaves;
        if ( !pieceSaves )
          goto LABEL_359;
        v189 = (_QWORD *)Instance;
        if ( SLODWORD(pieceSaves->max_length) < 1 )
        {
LABEL_87:
          v677 = (System_Object_array **)v189;
          if ( !*p_localSaveData )
            goto LABEL_359;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          v666 = v167;
          if ( !itemSaves )
            goto LABEL_359;
          if ( SLODWORD(itemSaves->max_length) < 1 )
          {
LABEL_97:
            if ( !v189 )
              goto LABEL_359;
            v216 = (GrandQuestFolderBoardItem_o *)(v189 + 5);
            if ( v677[5] )
            {
              if ( !*p_localSaveData )
                goto LABEL_359;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_359;
              if ( SLODWORD(treasureSaves->max_length) >= 1 )
              {
                v218 = 0;
                v219 = 0;
                do
                {
                  v220 = sub_1C93D20(WarBoardData___c__DisplayClass77_2_TypeInfo);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v220, 0);
                  if ( v219 >= LODWORD(treasureSaves->max_length) )
                    goto LABEL_360;
                  if ( !v220 )
                    goto LABEL_359;
                  v227 = treasureSaves->m_Items[v219];
                  *(_QWORD *)(v220 + 16) = v227;
                  v228 = v220 + 16;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)(v220 + 16),
                    (int32_t)v227,
                    v221,
                    v222,
                    v223,
                    v224,
                    v225,
                    v226);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v216->klass;
                  v230 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    v230,
                    (Il2CppObject *)v220,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    0);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                        klass,
                                        (System_Func_TSource__bool__o *)v230,
                                        (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v228 )
                      goto LABEL_359;
                    if ( !*(_BYTE *)(*(_QWORD *)v228 + 20LL) )
                    {
                      v218 = 1;
                      *(_BYTE *)(Instance + 20) = 0;
                    }
                  }
                  ++v219;
                }
                while ( (__int64)v219 < SLODWORD(treasureSaves->max_length) );
                if ( (v218 & 1) != 0 )
                {
                  v231 = WarBoardData___c_TypeInfo;
                  v232 = (System_Collections_Generic_IEnumerable_TSource__o *)v216->klass;
                  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v231 = WarBoardData___c_TypeInfo;
                  }
                  _9__77_9 = (System_Func_object__bool__o *)v231->static_fields->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( !v231->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v231);
                      v231 = WarBoardData___c_TypeInfo;
                    }
                    v234 = (Il2CppObject *)v231->static_fields->__9;
                    _9__77_9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                    System_Func_object__bool____ctor(_9__77_9, v234, Method_WarBoardData___c___ctor_b__77_9__, 0);
                    v235 = WarBoardData___c_TypeInfo->static_fields;
                    v235->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_1C93A78(
                      (GrandQuestFolderBoardItem_o *)&v235->__9__77_9,
                      (int32_t)_9__77_9,
                      v236,
                      v237,
                      v238,
                      v239,
                      v240,
                      v241);
                  }
                  v242 = System_Linq_Enumerable__Where_object_(
                           v232,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v243 = System_Linq_Enumerable__ToArray_object_(
                           v242,
                           (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v216->klass = (GrandQuestFolderBoardItem_c *)v243;
                  sub_1C93A78(v216, (int32_t)v243, v244, v245, v246, v247, v248, v249);
                }
              }
            }
            if ( !*p_localSaveData )
              goto LABEL_359;
            wallSaves = (*p_localSaveData)->fields.wallSaves;
            if ( !wallSaves )
              goto LABEL_359;
            if ( SLODWORD(wallSaves->max_length) < 1 )
            {
LABEL_127:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v262 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_object_(
                v677 + 11,
                v262,
                (const MethodInfo_3162B20 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              v171 = layoutEntities;
              if ( v262 >= 1 )
              {
                v263 = 0;
                v264 = (unsigned int)v262;
                v265 = 8;
                while ( *p_localSaveData )
                {
                  squareIndexInfo = (*p_localSaveData)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v263 >= LODWORD(squareIndexInfo->max_length) )
                    goto LABEL_360;
                  v267 = (unsigned int *)v677[11];
                  v268 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v265 * 4);
                  v269 = (WarBoardSquareIndexData_o *)sub_1C93D20(WarBoardSquareIndexData_TypeInfo);
                  WarBoardSquareIndexData___ctor_38775264(v269, v268, 0);
                  if ( !v267 )
                    break;
                  if ( v269 )
                  {
                    Instance = sub_1C93C10(v269, *(_QWORD *)(*(_QWORD *)v267 + 64LL));
                    if ( !Instance )
                    {
LABEL_361:
                      v645 = sub_1C93D50();
                      sub_1C93BFC(v645, 0);
                    }
                  }
                  if ( v263 >= v267[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v267[v265] = v269;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&v267[v265],
                    (int32_t)v269,
                    v270,
                    v271,
                    v272,
                    v273,
                    v274,
                    v275);
                  v167 = v666;
                  ++v263;
                  v265 += 2;
                  if ( v264 == v263 )
                    goto LABEL_138;
                }
                goto LABEL_359;
              }
LABEL_138:
              if ( !*p_localSaveData )
                goto LABEL_359;
              v169 = (WarBoardDataEntity_o *)v677;
              v276 = System_Linq_Enumerable__Count_object_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.bossBattleInfo,
                       (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_object_(
                v677 + 12,
                v276,
                (const MethodInfo_3162B20 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v276 >= 1 )
              {
                v277 = 0;
                v278 = (unsigned int)v276;
                v279 = 8;
                do
                {
                  if ( !*p_localSaveData )
                    goto LABEL_359;
                  bossBattleInfo = (*p_localSaveData)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_359;
                  if ( v277 >= LODWORD(bossBattleInfo->max_length) )
                    goto LABEL_360;
                  v281 = (unsigned int *)v677[12];
                  v282 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v279 * 4);
                  v283 = (WarBoardBossBattleData_o *)sub_1C93D20(WarBoardBossBattleData_TypeInfo);
                  WarBoardBossBattleData___ctor_38529816(v283, v282, v284);
                  if ( !v281 )
                    goto LABEL_359;
                  if ( v283 )
                  {
                    Instance = sub_1C93C10(v283, *(_QWORD *)(*(_QWORD *)v281 + 64LL));
                    if ( !Instance )
                      goto LABEL_361;
                  }
                  if ( v277 >= v281[6] )
                    goto LABEL_360;
                  *(_QWORD *)&v281[v279] = v283;
                  sub_1C93A78(
                    (GrandQuestFolderBoardItem_o *)&v281[v279],
                    (int32_t)v283,
                    v285,
                    v286,
                    v287,
                    v288,
                    v289,
                    v290);
                  v167 = v666;
                  ++v277;
                  v279 += 2;
                }
                while ( v278 != v277 );
                v169 = (WarBoardDataEntity_o *)v677;
              }
              v170 = v668;
              goto LABEL_154;
            }
            v251 = 0;
            while ( 1 )
            {
              v252 = sub_1C93D20(WarBoardData___c__DisplayClass77_3_TypeInfo);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v252, 0);
              if ( v251 >= LODWORD(wallSaves->max_length) )
                break;
              if ( !v252 )
                goto LABEL_359;
              v259 = wallSaves->m_Items[v251];
              *(_QWORD *)(v252 + 16) = v259;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v252 + 16), (int32_t)v259, v253, v254, v255, v256, v257, v258);
              v260 = (System_Collections_Generic_IEnumerable_TSource__o *)v677[6];
              v261 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserWallData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v261,
                (Il2CppObject *)v252,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                    v260,
                                    (System_Func_TSource__bool__o *)v261,
                                    (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v252 + 16),
                  0);
              if ( (__int64)++v251 >= SLODWORD(wallSaves->max_length) )
                goto LABEL_127;
            }
          }
          else
          {
            v205 = 0;
            while ( 1 )
            {
              v206 = sub_1C93D20(WarBoardData___c__DisplayClass77_1_TypeInfo);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v206, 0);
              if ( v205 >= LODWORD(itemSaves->max_length) )
                break;
              if ( !v206 )
                goto LABEL_359;
              v213 = itemSaves->m_Items[v205];
              *(_QWORD *)(v206 + 16) = v213;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v206 + 16), (int32_t)v213, v207, v208, v209, v210, v211, v212);
              if ( !v189 )
                goto LABEL_359;
              v214 = (System_Collections_Generic_IEnumerable_TSource__o *)v189[4];
              v215 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v215,
                (Il2CppObject *)v206,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                    v214,
                                    (System_Func_TSource__bool__o *)v215,
                                    (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v206 + 16),
                  0);
              if ( (__int64)++v205 >= SLODWORD(itemSaves->max_length) )
                goto LABEL_97;
            }
          }
        }
        else
        {
          v190 = 0;
          while ( 1 )
          {
            v191 = sub_1C93D20(WarBoardData___c__DisplayClass77_0_TypeInfo);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v191, 0);
            if ( v190 >= LODWORD(pieceSaves->max_length) )
              break;
            if ( !v191 )
              goto LABEL_359;
            v198 = pieceSaves->m_Items[v190];
            *(_QWORD *)(v191 + 16) = v198;
            v199 = (WarBoardPieceData_SaveData_o **)(v191 + 16);
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v191 + 16), (int32_t)v198, v192, v193, v194, v195, v196, v197);
            if ( !*(_QWORD *)(v191 + 16) || !v189 )
              goto LABEL_359;
            if ( *(_DWORD *)(*(_QWORD *)(v191 + 16) + 24LL) )
            {
              v200 = (System_Collections_Generic_IEnumerable_TSource__o *)v189[2];
              v201 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserServantData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v201,
                (Il2CppObject *)v191,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                    v200,
                                    (System_Func_TSource__bool__o *)v201,
                                    (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v199, 0);
            }
            else
            {
              v202 = (System_Collections_Generic_IEnumerable_TSource__o *)v189[3];
              v203 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserMasterData__bool__TypeInfo);
              System_Func_object__bool____ctor(
                v203,
                (Il2CppObject *)v191,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                0);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                    v202,
                                    (System_Func_TSource__bool__o *)v203,
                                    (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v199, 0);
            }
            if ( (__int64)++v190 >= SLODWORD(pieceSaves->max_length) )
              goto LABEL_87;
          }
        }
LABEL_360:
        sub_1C93D34(Instance);
      }
      v291 = WarBoardData_TypeInfo;
      if ( !WarBoardData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      WarBoardData__DeleteLocalSave((const MethodInfo *)v291);
      *p_localSaveData = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.localSaveData, 0, v292, v293, v294, v295, v296, v297);
    }
LABEL_154:
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    goto LABEL_155;
  }
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_359;
LABEL_155:
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v169, v169->fields.progressType != 3, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_359;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v169, 0);
  v678 = v169;
  if ( (int)max_length >= 1 )
  {
    v298 = 0;
    p_enemyDeck = &v169->fields.enemyDeck;
    npcIdx = 0;
    p_myDeck = &v169->fields.myDeck;
    v667 = v167;
    do
    {
      v299 = sub_1C93D20(WarBoardData___c__DisplayClass77_4_TypeInfo);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v299, 0);
      if ( v298 >= LODWORD(v171->max_length) )
        goto LABEL_360;
      if ( !v299 )
        goto LABEL_359;
      v306 = v171->m_Items[v298];
      *(_QWORD *)(v299 + 16) = v306;
      v307 = (WarBoardStageLayoutEntity_o **)(v299 + 16);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v299 + 16), (int32_t)v306, v300, v301, v302, v303, v304, v305);
      v308 = *(WarBoardStageLayoutEntity_o **)(v299 + 16);
      v309 = (WarBoardSquareData_o *)sub_1C93D20(WarBoardSquareData_TypeInfo);
      WarBoardSquareData___ctor(v309, v308, roadEntities, 0);
      if ( v298 )
      {
        if ( (unsigned int)(v298 - 1) >= LODWORD(v171->max_length) )
          goto LABEL_360;
        v316 = *(&v171->max_length + v298);
        if ( !v316 )
          goto LABEL_359;
        v317 = *v307;
        if ( !*v307 )
          goto LABEL_359;
        if ( *(_DWORD *)(v316 + 20) == v317->fields.squareIndex )
          goto LABEL_176;
      }
      else
      {
        v317 = *v307;
        if ( !*v307 )
          goto LABEL_359;
      }
      throughCondId = (unsigned int)v317->fields.throughCondId;
      if ( !(_DWORD)throughCondId )
        goto LABEL_364;
      Instance = (__int64)v663;
      if ( !v663 )
        goto LABEL_359;
      Instance = WarBoardCommonReleaseMaster__IsOpen(v663, throughCondId, 0);
      if ( (Instance & 1) != 0 )
      {
LABEL_364:
        if ( !v170 )
          goto LABEL_359;
        items = v170->fields._items;
        v319 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
        ++v170->fields._version;
        if ( !items )
          goto LABEL_359;
        size = v170->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v170,
            (Il2CppObject *)v309,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v319[4] + 192LL) + 112LL));
        }
        else
        {
          v321 = &items->obj.klass + size;
          v170->fields._size = size + 1;
          v321[4] = (Il2CppClass *)v309;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v321 + 4), (int32_t)v309, v310, v311, v312, v313, v314, v315);
        }
LABEL_176:
        v322 = *v307;
        if ( !*v307 )
          goto LABEL_359;
        if ( v322->fields.isPiecePut )
        {
          questPhase = v169->fields.questPhase;
          questId = v169->fields.questId;
          if ( v322->fields.pieceIndex )
          {
            svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v169->fields.svtInfo;
            v325 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v325,
              (Il2CppObject *)v299,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
              0);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                  svtInfo,
                                  (System_Func_TSource__bool__o *)v325,
                                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v326 = (WarBoardUserServantData_o *)Instance;
            v327 = 0;
          }
          else
          {
            masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v169->fields.masterInfo;
            v335 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserMasterData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v335,
              (Il2CppObject *)v299,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
              0);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                  masterInfo,
                                  (System_Func_TSource__bool__o *)v335,
                                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
            v327 = (WarBoardUserMasterData_o *)Instance;
            v326 = 0;
          }
          v336 = *v307;
          if ( !*v307 )
            goto LABEL_359;
          v337 = p_enemyDeck;
          v673 = questPhase;
          if ( !v336->fields.forceId )
          {
            v337 = p_enemyDeck;
            if ( !v336->fields.pieceIndex )
              v337 = p_myDeck;
          }
          v338 = *v337;
          Type = Follower__getType(v336->fields.followerType, 0);
          IsNpc = Follower__IsNpc(Type, 0);
          v341 = *v307;
          v342 = v169->fields.progressType;
          v343 = IsNpc;
          v344 = *p_npcEntityDict;
          v345 = (WarBoardPieceData_o *)sub_1C93D20(WarBoardPieceData_TypeInfo);
          v346 = v345;
          v347 = v342 == 3;
          if ( v343 )
          {
            WarBoardPieceData___ctor(v345, v341, v326, v327, v338, v347, v344, npcIdx, 0);
            if ( !*v307 )
              goto LABEL_359;
            v169 = v678;
            v171 = layoutEntities;
            v167 = v667;
            Instance = (__int64)Master_object;
            if ( !Master_object )
              goto LABEL_359;
            Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                         Master_object,
                         &entity,
                         (*v307)->fields.stageId,
                         (*v307)->fields.forceId,
                         (*v307)->fields.groupId,
                         (*v307)->fields.pieceIndex,
                         0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              Instance = WarBoardStagePieceDetailEntity__GetImageSvtId(entity, 0);
              if ( !v346 )
                goto LABEL_359;
              v346->fields._npcImageSvtId_k__BackingField = Instance;
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_359;
              v346->fields._npcDispLimitCount_k__BackingField = WarBoardStagePieceDetailEntity__GetDispLimitCnt(
                                                                  entity,
                                                                  0);
            }
            else if ( !v346 )
            {
              goto LABEL_359;
            }
            Instance = (__int64)v659;
            if ( !v659 )
              goto LABEL_359;
            Entity_43141800 = NpcFollowerMaster__GetEntity_43141800(
                                v659,
                                questId,
                                v673,
                                v346->fields._npcId_k__BackingField,
                                0);
            if ( Entity_43141800 )
            {
              v358 = Entity_43141800;
              if ( !v346->fields._npcImageSvtId_k__BackingField )
                v346->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_43141800, 0);
              if ( v346->fields._npcDispLimitCount_k__BackingField < 0 )
                v346->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v358, -1, 0);
            }
            Instance = WarBoardPieceData__get_isPlayerGroup(v346, 0);
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)v652;
              if ( !v652 )
                goto LABEL_359;
              Instance = DataMasterBase_object__object__long___TryGetEntity(
                           v652,
                           &v683,
                           v346->fields._npcId_k__BackingField,
                           (const MethodInfo_3465A70 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v683;
                if ( !v683 )
                  goto LABEL_359;
                Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_43144684(
                                      (NpcServantFollowerEntity_o *)v683,
                                      v346->fields._npcId_k__BackingField,
                                      questId,
                                      v673,
                                      &isChangeName,
                                      0);
                if ( isChangeName )
                {
                  Instance = (__int64)v346->fields._battleServant_k__BackingField;
                  if ( !Instance )
                    goto LABEL_359;
                  BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0);
                }
              }
            }
            if ( !v667 )
              goto LABEL_359;
            v365 = v667->fields._items;
            v366 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v667->fields._version;
            if ( !v365 )
              goto LABEL_359;
            v367 = v667->fields._size;
            if ( (unsigned int)v367 >= LODWORD(v365->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v667,
                (Il2CppObject *)v346,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v366[4] + 192LL) + 112LL));
            }
            else
            {
              v368 = &v365->obj.klass + v367;
              v667->fields._size = v367 + 1;
              v368[4] = (Il2CppClass *)v346;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v368 + 4), (int32_t)v346, v359, v360, v361, v362, v363, v364);
            }
            ++npcIdx;
          }
          else
          {
            WarBoardPieceData___ctor(v345, v341, v326, v327, v338, v347, v344, -1, 0);
            if ( !v346 )
              goto LABEL_359;
            Instance = WarBoardPieceData__get_isMaster(v346, 0);
            v169 = v678;
            v171 = layoutEntities;
            v167 = v667;
            if ( (Instance & 1) != 0 )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_359;
              Instance = System_Collections_Generic_List_int___Contains(
                           (System_Collections_Generic_List_int__o *)Instance,
                           v346->fields._forceId_k__BackingField,
                           (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
              if ( (Instance & 1) == 0 )
              {
                Instance = (__int64)*p_masterExistsForce;
                if ( !*p_masterExistsForce )
                  goto LABEL_359;
                throughCondId = (unsigned int)v346->fields._forceId_k__BackingField;
                v354 = *(_QWORD *)(Instance + 16);
                v355 = Method_System_Collections_Generic_List_int__Add__;
                ++*(_DWORD *)(Instance + 28);
                if ( !v354 )
                  goto LABEL_359;
                v356 = *(int *)(Instance + 24);
                if ( (unsigned int)v356 >= *(_DWORD *)(v354 + 24) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    (System_Collections_Generic_List_int__o *)Instance,
                    throughCondId,
                    *(const MethodInfo_385C978 **)(*(_QWORD *)(v355[4] + 192LL) + 112LL));
                }
                else
                {
                  *(_DWORD *)(Instance + 24) = v356 + 1;
                  *(_DWORD *)(v354 + 4 * v356 + 32) = throughCondId;
                }
              }
            }
            if ( !v667 )
              goto LABEL_359;
            v372 = v667->fields._items;
            v373 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v667->fields._version;
            if ( !v372 )
              goto LABEL_359;
            v374 = v667->fields._size;
            if ( (unsigned int)v374 >= LODWORD(v372->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v667,
                (Il2CppObject *)v346,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v373[4] + 192LL) + 112LL));
            }
            else
            {
              v375 = &v372->obj.klass + v374;
              v667->fields._size = v374 + 1;
              v375[4] = (Il2CppClass *)v346;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v375 + 4), (int32_t)v346, v348, v349, v350, v351, v352, v353);
            }
          }
          v170 = v668;
        }
        v376 = *v307;
        if ( !*v307 )
          goto LABEL_359;
        switch ( v376->fields.type )
        {
          case 2:
            getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v169->fields.getItemInfo;
            v378 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v378,
              (Il2CppObject *)v299,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
              0);
            v379 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
                     getItemInfo,
                     (System_Func_TSource__bool__o *)v378,
                     (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
            v380 = *(WarBoardStageLayoutEntity_o **)(v299 + 16);
            v381 = (WarBoardUserGetItemData_o *)v379;
            v382 = (WarBoardItemData_o *)sub_1C93D20(WarBoardItemData_TypeInfo);
            WarBoardItemData___ctor(v382, v380, v381, 0);
            v383 = v658;
            if ( !v658 )
              goto LABEL_359;
            version = v658->fields._version;
            v385 = v658->fields._items;
            v386 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
            goto LABEL_246;
          case 3:
            v382 = (WarBoardItemData_o *)sub_1C93D20(WarBoardEffectData_TypeInfo);
            WarBoardEffectData___ctor((WarBoardEffectData_o *)v382, v376, 0);
            v383 = v657;
            if ( !v657 )
              goto LABEL_359;
            version = v657->fields._version;
            v385 = v657->fields._items;
            v386 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
            goto LABEL_246;
          case 4:
            treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v169->fields.treasureInfo;
            if ( !treasureInfo )
              goto LABEL_242;
            v388 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v388,
              (Il2CppObject *)v299,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
              0);
            Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                  treasureInfo,
                                  (System_Func_TSource__bool__o *)v388,
                                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
            if ( Instance )
              continue;
            v376 = *v307;
LABEL_242:
            v382 = (WarBoardItemData_o *)sub_1C93D20(WarBoardTreasureData_TypeInfo);
            WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v382, v376, 0);
            v383 = v653;
            if ( !v653 )
              goto LABEL_359;
            version = v653->fields._version;
            v385 = v653->fields._items;
            v386 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_246:
            v394 = *v386;
            v383->fields._version = version + 1;
            if ( !v385 )
              goto LABEL_359;
            v395 = v383->fields._size;
            if ( (unsigned int)v395 < LODWORD(v385->max_length) )
            {
              v396 = &v385->obj.klass + v395;
              v383->fields._size = v395 + 1;
              v396[4] = (Il2CppClass *)v382;
              v332 = (GrandQuestFolderBoardItem_o *)(v396 + 4);
              v333 = (int)v382;
              goto LABEL_249;
            }
            v369 = *(_QWORD *)(v394 + 32);
            v370 = v383;
            v371 = (Il2CppObject *)v382;
            break;
          case 5:
            wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v169->fields.wallInfo;
            v390 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserWallData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v390,
              (Il2CppObject *)v299,
              Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
              0);
            v391 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
                     wallInfo,
                     (System_Func_TSource__bool__o *)v390,
                     (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
            v392 = *(WarBoardStageLayoutEntity_o **)(v299 + 16);
            v393 = (WarBoardUserWallData_o *)v391;
            v382 = (WarBoardItemData_o *)sub_1C93D20(WarBoardWallData_TypeInfo);
            WarBoardWallData___ctor((WarBoardWallData_o *)v382, v392, v393, 0);
            v383 = v656;
            if ( !v656 )
              goto LABEL_359;
            version = v656->fields._version;
            v385 = v656->fields._items;
            v386 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
            goto LABEL_246;
          default:
            continue;
        }
        goto LABEL_251;
      }
      if ( !v661 )
        goto LABEL_359;
      v328 = v661->fields._items;
      v329 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
      ++v661->fields._version;
      if ( !v328 )
        goto LABEL_359;
      v330 = v661->fields._size;
      if ( (unsigned int)v330 < LODWORD(v328->max_length) )
      {
        v331 = &v328->obj.klass + v330;
        v661->fields._size = v330 + 1;
        v331[4] = (Il2CppClass *)v309;
        v332 = (GrandQuestFolderBoardItem_o *)(v331 + 4);
        v333 = (int)v309;
LABEL_249:
        sub_1C93A78(v332, v333, v310, v311, v312, v313, v314, v315);
        continue;
      }
      v369 = v329[4];
      v370 = v661;
      v371 = (Il2CppObject *)v309;
LABEL_251:
      System_Collections_Generic_List_object___AddWithResize(
        v370,
        v371,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v369 + 192) + 112LL));
    }
    while ( (unsigned int)max_length != ++v298 );
  }
  if ( !v170 )
    goto LABEL_359;
  v397 = System_Collections_Generic_List_object___ToArray(
           v170,
           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v398 = v664;
  v664->fields.squares = (struct WarBoardSquareData_array *)v397;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v664->fields.squares, (int32_t)v397, v399, v400, v401, v402, v403, v404);
  Instance = (__int64)v661;
  if ( !v661 )
    goto LABEL_359;
  v405 = System_Collections_Generic_List_object___ToArray(
           v661,
           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v664->fields.condSquares = (struct WarBoardSquareData_array *)v405;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v664->fields.condSquares,
    (int32_t)v405,
    v406,
    v407,
    v408,
    v409,
    v410,
    v411);
  if ( !v167 )
    goto LABEL_359;
  v412 = System_Collections_Generic_List_object___ToArray(
           v167,
           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v664->fields.pieces = (struct WarBoardPieceData_array *)v412;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v664->fields.pieces;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v664->fields.pieces, (int32_t)v412, v414, v415, v416, v417, v418, v419);
  pieces = (System_Object_array *)v664->fields.pieces;
  v421 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_WarBoardPieceData__TypeInfo);
  System_Comparison_object____ctor(v421, (Il2CppObject *)v664, Method_WarBoardData_ComparePiece__, 0);
  System_Array__Sort_object__51842132(
    pieces,
    v421,
    (const MethodInfo_3170C54 *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v658;
  if ( !v658 )
    goto LABEL_359;
  v422 = System_Collections_Generic_List_object___ToArray(
           v658,
           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v664->fields.items = (struct WarBoardItemData_array *)v422;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v664->fields.items, (int32_t)v422, v423, v424, v425, v426, v427, v428);
  Instance = (__int64)v653;
  if ( !v653 )
    goto LABEL_359;
  v429 = System_Collections_Generic_List_object___ToArray(
           v653,
           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v664->fields.treasures = (struct WarBoardTreasureData_array *)v429;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v664->fields.treasures, (int32_t)v429, v430, v431, v432, v433, v434, v435);
  Instance = (__int64)v657;
  if ( !v657 )
    goto LABEL_359;
  v436 = System_Collections_Generic_List_object___ToArray(
           v657,
           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v664->fields.effects = (struct WarBoardEffectData_array *)v436;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v664->fields.effects, (int32_t)v436, v437, v438, v439, v440, v441, v442);
  Instance = (__int64)v656;
  if ( !v656 )
    goto LABEL_359;
  v443 = System_Collections_Generic_List_object___ToArray(
           v656,
           (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v664->fields.walls = (struct WarBoardWallData_array *)v443;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v664->fields.walls, (int32_t)v443, v444, v445, v446, v447, v448, v449);
  v664->fields.serverData = v169;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v664->fields.serverData,
    (int32_t)v169,
    v450,
    v451,
    v452,
    v453,
    v454,
    v455);
  if ( v169->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v664, (const MethodInfo *)throughCondId);
  v456 = v664->fields.localSaveData;
  if ( v456 )
  {
    v457 = v456->fields.pieceSaves;
    roadEntitiesb = (WarBoardRoadEntity_array *)&v664->fields.localSaveData;
    if ( v457 )
    {
      if ( SLODWORD(v457->max_length) >= 1 )
      {
        v458 = 0;
        do
        {
          v459 = sub_1C93D20(WarBoardData___c__DisplayClass77_5_TypeInfo);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v459, 0);
          if ( v458 >= LODWORD(v457->max_length) )
            goto LABEL_360;
          if ( !v459 )
            goto LABEL_359;
          v466 = v457->m_Items[v458];
          *(_QWORD *)(v459 + 16) = v466;
          v467 = (WarBoardPieceData_SaveData_o **)(v459 + 16);
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v459 + 16), (int32_t)v466, v460, v461, v462, v463, v464, v465);
          v468 = *p_pieces;
          v469 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v469,
            (Il2CppObject *)v459,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            0);
          if ( !BasicHelper__Any_object__51960868(
                  (System_Object_array *)v468,
                  (System_Func_T__bool__o *)v469,
                  (const MethodInfo_318DC24 *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v470 = (System_Collections_Generic_IEnumerable_TSource__o *)v169->fields.svtInfo;
            v471 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_object__bool____ctor(
              v471,
              (Il2CppObject *)v459,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              0);
            v472 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
                     v470,
                     (System_Func_TSource__bool__o *)v471,
                     (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v473 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v473,
              (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v473 )
              goto LABEL_359;
            System_Collections_Generic_List_object___AddRange(
              v473,
              *p_pieces,
              (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_359;
            id = p_fields->stageEntity->fields.id;
            v475 = *v467;
            v476 = (WarBoardPieceData_o *)sub_1C93D20(WarBoardPieceData_TypeInfo);
            WarBoardPieceData___ctor_38752632(v476, id, (WarBoardUserServantData_o *)v472, v475, 0, -1, 0);
            v483 = v473->fields._items;
            v484 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v473->fields._version;
            if ( !v483 )
              goto LABEL_359;
            v485 = v473->fields._size;
            if ( (unsigned int)v485 >= LODWORD(v483->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v473,
                (Il2CppObject *)v476,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v484[4] + 192LL) + 112LL));
            }
            else
            {
              v486 = &v483->obj.klass + v485;
              v473->fields._size = v485 + 1;
              v486[4] = (Il2CppClass *)v476;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v486 + 4), (int32_t)v476, v477, v478, v479, v480, v481, v482);
            }
            v169 = v678;
            v487 = System_Collections_Generic_List_object___ToArray(
                     v473,
                     (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v487;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)p_pieces, (int32_t)v487, v488, v489, v490, v491, v492, v493);
            v398 = v664;
          }
          Instance = (__int64)*v467;
          if ( !*v467 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v398, 0);
          Instance = (__int64)*v467;
          if ( !*v467 )
            goto LABEL_359;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0);
        }
        while ( (__int64)++v458 < SLODWORD(v457->max_length) );
      }
      if ( roadEntitiesb->obj.klass )
      {
        v494 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.byval_arg.bits;
        if ( v494 )
        {
          v495 = *(_DWORD *)(v494 + 24);
          if ( v495 >= 1 )
          {
            v496 = 0;
            while ( v496 < v495 )
            {
              v497 = v494 + 8LL * (int)v496;
              v498 = *(WarBoardItemData_SaveData_o **)(v497 + 32);
              if ( !v498 )
                goto LABEL_359;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v497 + 32), v398, 0);
              WarBoardItemData_SaveData__Load(v498, 0);
              v495 = *(_DWORD *)(v494 + 24);
              if ( (int)++v496 >= v495 )
                goto LABEL_286;
            }
            goto LABEL_360;
          }
LABEL_286:
          if ( roadEntitiesb->obj.klass )
          {
            data = roadEntitiesb->obj.klass->_1.this_arg.data;
            if ( data )
            {
              v500 = data[6];
              if ( v500 >= 1 )
              {
                v501 = 0;
                while ( v501 < v500 )
                {
                  v502 = (char *)&data[2 * v501];
                  v503 = (WarBoardTreasureData_SaveData_o *)*((_QWORD *)v502 + 4);
                  if ( !v503 )
                    goto LABEL_359;
                  WarBoardTreasureData_SaveData__SetOwner(*((WarBoardTreasureData_SaveData_o **)v502 + 4), v398, 0);
                  WarBoardTreasureData_SaveData__Load(v503, 0);
                  v500 = data[6];
                  if ( (int)++v501 >= v500 )
                    goto LABEL_293;
                }
                goto LABEL_360;
              }
LABEL_293:
              if ( roadEntitiesb->obj.klass )
              {
                v504 = *(_QWORD *)&roadEntitiesb->obj.klass->_1.this_arg.bits;
                if ( v504 )
                {
                  v505 = *(_DWORD *)(v504 + 24);
                  if ( v505 >= 1 )
                  {
                    v506 = 0;
                    while ( v506 < v505 )
                    {
                      v507 = v504 + 8LL * (int)v506;
                      v508 = *(WarBoardWallData_SaveData_o **)(v507 + 32);
                      if ( !v508 )
                        goto LABEL_359;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v507 + 32), v398, 0);
                      WarBoardWallData_SaveData__Load(v508, 0);
                      v505 = *(_DWORD *)(v504 + 24);
                      if ( (int)++v506 >= v505 )
                        goto LABEL_300;
                    }
                    goto LABEL_360;
                  }
LABEL_300:
                  if ( roadEntitiesb->obj.klass )
                  {
                    element_class = roadEntitiesb->obj.klass->_1.element_class;
                    if ( element_class )
                    {
                      namespaze = (int)element_class->_1.namespaze;
                      if ( namespaze >= 1 )
                      {
                        v511 = 0;
                        while ( v511 < namespaze )
                        {
                          v512 = &element_class->_1.image + (int)v511;
                          v513 = (WarBoardSquareData_SaveData_o *)v512[4];
                          if ( !v513 )
                            goto LABEL_359;
                          WarBoardSquareData_SaveData__SetOwner((WarBoardSquareData_SaveData_o *)v512[4], v398, 0);
                          WarBoardSquareData_SaveData__Load(v513, 0);
                          namespaze = (int)element_class->_1.namespaze;
                          if ( (int)++v511 >= namespaze )
                            goto LABEL_307;
                        }
                        goto LABEL_360;
                      }
LABEL_307:
                      if ( roadEntitiesb->obj.klass )
                      {
                        v398->fields.isPlayedHalfDeadMessage = (bool)roadEntitiesb->obj.klass->_1.interopData;
                        v514 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v514,
                          (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v398->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v514;
                        sub_1C93A78(
                          (GrandQuestFolderBoardItem_o *)p_listEvent,
                          (int32_t)v514,
                          v515,
                          v516,
                          v517,
                          v518,
                          v519,
                          v520);
                        v527 = v398->fields.localSaveData;
                        if ( v527 )
                        {
                          eventSaves = v527->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v529 = eventSaves->max_length;
                            if ( (int)v529 >= 1 )
                            {
                              v530 = 0;
                              while ( v530 < (unsigned int)v529 )
                              {
                                v531 = eventSaves->m_Items[v530];
                                v532 = (System_Collections_Generic_List_object__o *)*p_listEvent;
                                v533 = (WarBoardEventData_o *)sub_1C93D20(WarBoardEventData_TypeInfo);
                                WarBoardEventData___ctor_38742852(v533, v531, 0);
                                if ( !v532 )
                                  goto LABEL_359;
                                v540 = v532->fields._items;
                                v541 = Method_System_Collections_Generic_List_WarBoardEventData__Add__;
                                ++v532->fields._version;
                                if ( !v540 )
                                  goto LABEL_359;
                                v542 = v532->fields._size;
                                if ( (unsigned int)v542 >= LODWORD(v540->max_length) )
                                {
                                  System_Collections_Generic_List_object___AddWithResize(
                                    v532,
                                    (Il2CppObject *)v533,
                                    *(const MethodInfo_387999C **)(*(_QWORD *)(v541[4] + 192LL) + 112LL));
                                }
                                else
                                {
                                  v543 = &v540->obj.klass + v542;
                                  v532->fields._size = v542 + 1;
                                  v543[4] = (Il2CppClass *)v533;
                                  sub_1C93A78(
                                    (GrandQuestFolderBoardItem_o *)(v543 + 4),
                                    (int32_t)v533,
                                    v534,
                                    v535,
                                    v536,
                                    v537,
                                    v538,
                                    v539);
                                }
                                LODWORD(v529) = eventSaves->max_length;
                                if ( (__int64)++v530 >= (int)v529 )
                                  goto LABEL_319;
                              }
                              goto LABEL_360;
                            }
LABEL_319:
                            v544 = roadEntitiesb->obj.klass;
                            if ( roadEntitiesb->obj.klass )
                            {
                              v664->fields.winCondId = (int32_t)v544->_1.fields;
                              typeHierarchy = (struct System_Int32_array *)v544->_2.typeHierarchy;
                              v664->fields.latestPieceActionSquareIndexes = typeHierarchy;
                              sub_1C93A78(
                                (GrandQuestFolderBoardItem_o *)p_latestPieceActionSquareIndexes,
                                (int32_t)typeHierarchy,
                                v521,
                                v522,
                                v523,
                                v524,
                                v525,
                                v526);
                              v552 = v664->fields.localSaveData;
                              if ( v552 )
                              {
                                latestBattlePieceUniqueIndexes = (GrandQuestFolderBoardItem_c *)v552->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = latestBattlePieceUniqueIndexes;
                                sub_1C93A78(
                                  p_latestBattlePieceUniqueIndexes,
                                  (int32_t)latestBattlePieceUniqueIndexes,
                                  v546,
                                  v547,
                                  v548,
                                  v549,
                                  v550,
                                  v551);
                                v554 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
                                System_Collections_Generic_List_object____ctor(
                                  v554,
                                  (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (GrandQuestFolderBoardItem_c *)v554;
                                sub_1C93A78(p_listPrevCond, (int32_t)v554, v555, v556, v557, v558, v559, v560);
                                if ( roadEntitiesb->obj.klass )
                                {
                                  properties = roadEntitiesb->obj.klass->_1.properties;
                                  if ( properties )
                                  {
                                    v562 = properties[3];
                                    if ( (int)v562 >= 1 )
                                    {
                                      v563 = 0;
                                      while ( v563 < (unsigned int)v562 )
                                      {
                                        v564 = (WarBoardPrevCondData_SaveData_o *)properties[v563 + 4];
                                        v565 = (System_Collections_Generic_List_object__o *)p_listPrevCond->klass;
                                        v566 = (WarBoardPrevCondData_o *)sub_1C93D20(WarBoardPrevCondData_TypeInfo);
                                        WarBoardPrevCondData___ctor_38769892(v566, v564, 0);
                                        if ( !v565 )
                                          goto LABEL_359;
                                        v573 = v565->fields._items;
                                        v574 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
                                        ++v565->fields._version;
                                        if ( !v573 )
                                          goto LABEL_359;
                                        v575 = v565->fields._size;
                                        if ( (unsigned int)v575 >= LODWORD(v573->max_length) )
                                        {
                                          System_Collections_Generic_List_object___AddWithResize(
                                            v565,
                                            (Il2CppObject *)v566,
                                            *(const MethodInfo_387999C **)(*(_QWORD *)(v574[4] + 192LL) + 112LL));
                                        }
                                        else
                                        {
                                          v576 = &v573->obj.klass + v575;
                                          v565->fields._size = v575 + 1;
                                          v576[4] = (Il2CppClass *)v566;
                                          sub_1C93A78(
                                            (GrandQuestFolderBoardItem_o *)(v576 + 4),
                                            (int32_t)v566,
                                            v567,
                                            v568,
                                            v569,
                                            v570,
                                            v571,
                                            v572);
                                        }
                                        LODWORD(v562) = *((_DWORD *)properties + 6);
                                        if ( (__int64)++v563 >= (int)v562 )
                                          goto LABEL_332;
                                      }
                                      goto LABEL_360;
                                    }
LABEL_332:
                                    v577 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
                                    System_Collections_Generic_List_object____ctor(
                                      v577,
                                      (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (GrandQuestFolderBoardItem_c *)v577;
                                    sub_1C93A78(
                                      p_reinforcementsSaveList,
                                      (int32_t)v577,
                                      v578,
                                      v579,
                                      v580,
                                      v581,
                                      v582,
                                      v583);
                                    if ( roadEntitiesb->obj.klass )
                                    {
                                      methods = roadEntitiesb->obj.klass->_1.methods;
                                      if ( methods )
                                      {
                                        v585 = methods[3];
                                        if ( (int)v585 >= 1 )
                                        {
                                          v586 = 0;
                                          while ( v586 < (unsigned int)v585 )
                                          {
                                            v587 = (HoldReinforcementsData_SaveData_o *)methods[v586 + 4];
                                            v588 = (System_Collections_Generic_List_object__o *)p_reinforcementsSaveList->klass;
                                            v589 = (HoldReinforcementsData_o *)sub_1C93D20(HoldReinforcementsData_TypeInfo);
                                            HoldReinforcementsData___ctor_38770092(v589, v587, 0);
                                            if ( !v588 )
                                              goto LABEL_359;
                                            v596 = v588->fields._items;
                                            v597 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
                                            ++v588->fields._version;
                                            if ( !v596 )
                                              goto LABEL_359;
                                            v598 = v588->fields._size;
                                            if ( (unsigned int)v598 >= LODWORD(v596->max_length) )
                                            {
                                              System_Collections_Generic_List_object___AddWithResize(
                                                v588,
                                                (Il2CppObject *)v589,
                                                *(const MethodInfo_387999C **)(*(_QWORD *)(v597[4] + 192LL) + 112LL));
                                            }
                                            else
                                            {
                                              v599 = &v596->obj.klass + v598;
                                              v588->fields._size = v598 + 1;
                                              v599[4] = (Il2CppClass *)v589;
                                              sub_1C93A78(
                                                (GrandQuestFolderBoardItem_o *)(v599 + 4),
                                                (int32_t)v589,
                                                v590,
                                                v591,
                                                v592,
                                                v593,
                                                v594,
                                                v595);
                                            }
                                            LODWORD(v585) = *((_DWORD *)methods + 6);
                                            if ( (__int64)++v586 >= (int)v585 )
                                              goto LABEL_343;
                                          }
                                          goto LABEL_360;
                                        }
LABEL_343:
                                        if ( roadEntitiesb->obj.klass )
                                        {
                                          v600 = System_Linq_Enumerable__ToList_int_(
                                                   (System_Collections_Generic_IEnumerable_TSource__o *)roadEntitiesb->obj.klass->_1.nestedTypes,
                                                   (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (GrandQuestFolderBoardItem_c *)v600;
                                          sub_1C93A78(
                                            p_playedStageReinforcementsList,
                                            (int32_t)v600,
                                            v601,
                                            v602,
                                            v603,
                                            v604,
                                            v605,
                                            v606);
                                          v607 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
                                          System_Collections_Generic_List_object____ctor(
                                            v607,
                                            (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (GrandQuestFolderBoardItem_c *)v607;
                                          sub_1C93A78(p_listUiData, (int32_t)v607, v608, v609, v610, v611, v612, v613);
                                          if ( roadEntitiesb->obj.klass )
                                          {
                                            implementedInterfaces = roadEntitiesb->obj.klass->_1.implementedInterfaces;
                                            if ( implementedInterfaces )
                                            {
                                              v621 = implementedInterfaces[3];
                                              if ( (int)v621 >= 1 )
                                              {
                                                v622 = 0;
                                                while ( v622 < (unsigned int)v621 )
                                                {
                                                  v623 = (WarBoardUiData_SaveData_o *)implementedInterfaces[v622 + 4];
                                                  v624 = (System_Collections_Generic_List_object__o *)p_listUiData->klass;
                                                  v625 = (WarBoardUiData_o *)sub_1C93D20(WarBoardUiData_TypeInfo);
                                                  WarBoardUiData___ctor_38776512(v625, v623, 0);
                                                  if ( !v624 )
                                                    goto LABEL_359;
                                                  v632 = v624->fields._items;
                                                  v633 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
                                                  ++v624->fields._version;
                                                  if ( !v632 )
                                                    goto LABEL_359;
                                                  v634 = v624->fields._size;
                                                  if ( (unsigned int)v634 >= LODWORD(v632->max_length) )
                                                  {
                                                    System_Collections_Generic_List_object___AddWithResize(
                                                      v624,
                                                      (Il2CppObject *)v625,
                                                      *(const MethodInfo_387999C **)(*(_QWORD *)(v633[4] + 192LL) + 112LL));
                                                  }
                                                  else
                                                  {
                                                    v635 = &v632->obj.klass + v634;
                                                    v624->fields._size = v634 + 1;
                                                    v635[4] = (Il2CppClass *)v625;
                                                    sub_1C93A78(
                                                      (GrandQuestFolderBoardItem_o *)(v635 + 4),
                                                      (int32_t)v625,
                                                      v626,
                                                      v627,
                                                      v628,
                                                      v629,
                                                      v630,
                                                      v631);
                                                  }
                                                  LODWORD(v621) = *((_DWORD *)implementedInterfaces + 6);
                                                  if ( (__int64)++v622 >= (int)v621 )
                                                    goto LABEL_355;
                                                }
                                                goto LABEL_360;
                                              }
LABEL_355:
                                              if ( roadEntitiesb->obj.klass )
                                              {
                                                interfaceOffsets = roadEntitiesb->obj.klass->_1.interfaceOffsets;
                                                p_bgAnimationInfo_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)interfaceOffsets;
                                                sub_1C93A78(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  (int32_t)interfaceOffsets,
                                                  v614,
                                                  v615,
                                                  v616,
                                                  v617,
                                                  v618,
                                                  v619);
                                                v637 = roadEntitiesb->obj.klass;
                                                if ( roadEntitiesb->obj.klass )
                                                {
                                                  v664->fields._ContinueConsumeType_k__BackingField = HIDWORD(v637->_2.unity_user_data);
                                                  v664->fields._IsContinue_k__BackingField = v637->_2.initializationExceptionGCHandle;
                                                  v664->fields._IsNextTurn_k__BackingField = BYTE1(v637->_2.initializationExceptionGCHandle);
                                                  v664->fields.localSaveTiming = (int32_t)v637->_2.unity_user_data;
                                                  return;
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
LABEL_359:
    sub_1C93D2C(Instance, throughCondId);
  }
  v638 = (WarBoardData_WarBoardLocalSaveData_o *)sub_1C93D20(WarBoardData_WarBoardLocalSaveData_TypeInfo);
  WarBoardData_WarBoardLocalSaveData___ctor_38729844(v638, v664, 0);
  v664->fields.localSaveData = v638;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v664->fields.localSaveData,
    (int32_t)v638,
    v639,
    v640,
    v641,
    v642,
    v643,
    v644);
}


void WarBoardData__AddPlayedEventData(WarBoardData_o *this, WarBoardEventData_o *eventData, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Collections_Generic_List_object__o *listEvent; // x0
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x8

  if ( (byte_4D2E35A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData__Add__);
    byte_4D2E35A = 1;
  }
  listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent;
  if ( !listEvent
    || (items = listEvent->fields._items,
        v12 = Method_System_Collections_Generic_List_WarBoardEventData__Add__,
        ++listEvent->fields._version,
        !items) )
  {
    sub_1C93D2C(listEvent, eventData);
  }
  size = listEvent->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      listEvent,
      (Il2CppObject *)eventData,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    listEvent->fields._size = size + 1;
    v14[4] = (Il2CppClass *)eventData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v14 + 4), (int32_t)eventData, (int32_t)method, v3, v4, v5, v6, v7);
  }
}


WarBoardPieceData_array *WarBoardData__AddReinforcementPieces(
        WarBoardData_o *this,
        WarBoardDataEntity_o *serverData,
        WarBoardUserServantData_array *reinfoSvtInfo,
        System_Int32_array *indexList,
        WarBoardStageReinforcementsEntity_o *reinfoStage,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x24
  __int64 Instance; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x28
  System_Collections_Generic_List_object__o *v15; // x19
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v17; // x27
  WarBoardUserServantData_o *v18; // x26
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v20; // x8
  __int64 v21; // x9
  WarBoardStagePieceDetailMaster_o *v22; // x19
  WarBoardDataEntity_o *v23; // x22
  WarBoardReinforcementsEntity_o *v24; // x25
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x20
  WarBoardStageReinforcementsEntity_o *v26; // x24
  int32_t v27; // w28
  int32_t v28; // w21
  WarBoardPieceData_o *v29; // x23
  NpcFollowerEntity_o *Entity_43141800; // x0
  NpcFollowerEntity_o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  struct WarBoardPieceData_array **p_pieces; // x20
  System_Object_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  struct WarBoardUserServantData_array *svtInfo; // x1
  il2cpp_array_size_t v57; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  unsigned __int64 v65; // x23
  __int64 v66; // x26
  __int64 v67; // x27
  struct WarBoardData_WarBoardLocalSaveData_o *v68; // x8
  struct WarBoardPieceData_array *v69; // x9
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v71; // x22
  WarBoardPieceData_SaveData_o *v72; // x21
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  __int64 v80; // x0
  System_Collections_Generic_List_object__o *v81; // [xsp+10h] [xbp-D0h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v83; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v84; // [xsp+28h] [xbp-B8h]
  WarBoardUserServantData_array *v85; // [xsp+30h] [xbp-B0h]
  NpcFollowerMaster_o *v86; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v87; // [xsp+40h] [xbp-A0h]
  WarBoardUserServantData_o **v88; // [xsp+48h] [xbp-98h]
  int32_t questPhase; // [xsp+50h] [xbp-90h]
  int32_t questId; // [xsp+54h] [xbp-8Ch]
  int32_t *m_Items; // [xsp+58h] [xbp-88h]
  bool isChangeName; // [xsp+64h] [xbp-7Ch] BYREF
  Il2CppObject *v93; // [xsp+68h] [xbp-78h] BYREF
  WarBoardStagePieceDetailEntity_o *v94; // [xsp+70h] [xbp-70h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+78h] [xbp-68h] BYREF

  if ( (byte_4D2E358 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_NpcFollowerMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&WarBoardPieceData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardPieceData_SaveData_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&WarBoardPieceData_TypeInfo);
    byte_4D2E358 = 1;
  }
  v94 = 0;
  entity = 0;
  v93 = 0;
  isChangeName = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v14 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  Instance = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v86 = (NpcFollowerMaster_o *)Instance;
  if ( !serverData )
    goto LABEL_69;
  questPhase = serverData->fields.questPhase;
  questId = serverData->fields.questId;
  v81 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v81,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_69;
  max_length = reinfoSvtInfo->max_length;
  v87 = v15;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    m_Items = indexList->m_Items;
    v88 = reinfoSvtInfo->m_Items;
    v84 = Master_object;
    v85 = reinfoSvtInfo;
    v83 = indexList;
    do
    {
      if ( v17 >= (unsigned int)max_length )
LABEL_70:
        sub_1C93D34(Instance);
      v18 = v88[v17];
      if ( v18 )
      {
        if ( !reinfoStage || !indexList )
          goto LABEL_69;
      }
      else
      {
        if ( !reinfoStage )
          goto LABEL_69;
        reinforcementsIds = reinfoStage->fields.reinforcementsIds;
        if ( !reinforcementsIds || !indexList )
          goto LABEL_69;
        if ( v17 >= LODWORD(indexList->max_length) )
          goto LABEL_70;
        if ( m_Items[v17] < SLODWORD(reinforcementsIds->max_length) )
          goto LABEL_52;
      }
      if ( v17 >= LODWORD(indexList->max_length) )
        goto LABEL_70;
      v20 = reinfoStage->fields.reinforcementsIds;
      if ( !v20 )
        goto LABEL_69;
      v21 = m_Items[v17];
      if ( (unsigned int)v21 >= LODWORD(v20->max_length) )
        goto LABEL_70;
      if ( !Master_object )
        goto LABEL_69;
      v22 = (WarBoardStagePieceDetailMaster_o *)v14;
      v23 = serverData;
      WarBoardReinforcementsMaster__TryGetEntity(
        (WarBoardReinforcementsMaster_o *)Master_object,
        &entity,
        v20->m_Items[v21],
        0);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      v24 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      v26 = reinfoStage;
      Instance = System_Collections_Generic_List_int___get_Item(
                   (System_Collections_Generic_List_int__o *)Instance,
                   0,
                   (const MethodInfo_385C688 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( v17 >= LODWORD(indexList->max_length) )
        goto LABEL_70;
      v27 = Instance;
      v28 = m_Items[v17];
      v29 = (WarBoardPieceData_o *)sub_1C93D20(WarBoardPieceData_TypeInfo);
      WarBoardPieceData___ctor_38751420(v29, v26, v24, v18, npcEntityDict, v17, v27, v28, 0);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_69;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_385E0F8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      if ( !v29 )
        goto LABEL_69;
      v14 = (Il2CppObject *)v22;
      if ( !v22 )
        goto LABEL_69;
      serverData = v23;
      Instance = WarBoardStagePieceDetailMaster__TryGetEntity(
                   v22,
                   &v94,
                   v23->fields.stageId,
                   v29->fields._forceId_k__BackingField,
                   v29->fields._groupId_k__BackingField,
                   v29->fields._index_k__BackingField,
                   0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)v94;
        if ( !v94 )
          goto LABEL_69;
        v29->fields._npcImageSvtId_k__BackingField = WarBoardStagePieceDetailEntity__GetImageSvtId(v94, 0);
        Instance = (__int64)v94;
        if ( !v94 )
          goto LABEL_69;
        Instance = WarBoardStagePieceDetailEntity__GetDispLimitCnt(v94, 0);
        v29->fields._npcDispLimitCount_k__BackingField = Instance;
      }
      if ( !v86 )
        goto LABEL_69;
      Entity_43141800 = NpcFollowerMaster__GetEntity_43141800(
                          v86,
                          questId,
                          questPhase,
                          v29->fields._npcId_k__BackingField,
                          0);
      if ( Entity_43141800 )
      {
        v31 = Entity_43141800;
        if ( !v29->fields._npcImageSvtId_k__BackingField )
          v29->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_43141800, 0);
        if ( v29->fields._npcDispLimitCount_k__BackingField < 0 )
          v29->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v31, -1, 0);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v29, 0);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_69;
        Instance = DataMasterBase_object__object__long___TryGetEntity(
                     MasterData_object,
                     &v93,
                     v29->fields._npcId_k__BackingField,
                     (const MethodInfo_3465A70 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v93;
          if ( !v93 )
            goto LABEL_69;
          Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_43144684(
                                (NpcServantFollowerEntity_o *)v93,
                                v29->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0);
          if ( isChangeName )
          {
            Instance = (__int64)v29->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_69;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0);
          }
        }
      }
      if ( !v87 )
        goto LABEL_69;
      items = v87->fields._items;
      v39 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
      ++v87->fields._version;
      if ( !items )
        goto LABEL_69;
      size = v87->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v87,
          (Il2CppObject *)v29,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = &items->obj.klass + size;
        v87->fields._size = size + 1;
        v41[4] = (Il2CppClass *)v29;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v41 + 4), (int32_t)v29, v32, v33, v34, v35, v36, v37);
      }
      reinfoStage = v26;
      indexList = v83;
      Master_object = v84;
      reinfoSvtInfo = v85;
LABEL_52:
      LODWORD(max_length) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v17 < (int)max_length );
  }
  if ( !v81 )
    goto LABEL_69;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_object___AddRange(
    v81,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v81,
    (System_Collections_Generic_IEnumerable_T__o *)v87,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v43 = System_Collections_Generic_List_object___ToArray(
          v81,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = (struct WarBoardPieceData_array *)v43;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.pieces, (int32_t)v43, v44, v45, v46, v47, v48, v49);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = serverData->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(Instance + 16), (int32_t)svtInfo, v50, v51, v52, v53, v54, v55),
        !*p_pieces)
    || (v57 = (*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_1C93B7C(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v57),
        !localSaveData) )
  {
LABEL_69:
    sub_1C93D2C(Instance, v13);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&localSaveData->fields.pieceSaves, Instance, v59, v60, v61, v62, v63, v64);
  if ( (int)v57 >= 1 )
  {
    v65 = 0;
    v66 = (unsigned int)v57;
    v67 = 8;
    do
    {
      v68 = this->fields.localSaveData;
      if ( !v68 )
        goto LABEL_69;
      v69 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_69;
      if ( v65 >= LODWORD(v69->max_length) )
        goto LABEL_70;
      pieceSaves = (unsigned int *)v68->fields.pieceSaves;
      v71 = *(WarBoardPieceData_o **)((char *)&v69->obj.klass + v67 * 4);
      v72 = (WarBoardPieceData_SaveData_o *)sub_1C93D20(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_38732896(v72, v71, 0);
      if ( !pieceSaves )
        goto LABEL_69;
      if ( v72 )
      {
        Instance = sub_1C93C10(v72, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v80 = sub_1C93D50();
          sub_1C93BFC(v80, 0);
        }
      }
      if ( v65 >= pieceSaves[6] )
        goto LABEL_70;
      *(_QWORD *)&pieceSaves[v67] = v72;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&pieceSaves[v67], (int32_t)v72, v73, v74, v75, v76, v77, v78);
      ++v65;
      v67 += 2;
    }
    while ( v66 != v65 );
  }
  Instance = (__int64)v87;
  if ( !v87 )
    goto LABEL_69;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v87,
                                      (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void WarBoardData__AddSquareInfo(WarBoardData_o *this, int32_t squareIndex, int32_t effectId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass173_0_o *v7; // x22
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v12; // x21
  Il2CppObject *object; // x0
  GrandQuestFolderBoardItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v16; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  System_Int32_array *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4D2E35F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_1C93AD4(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass173_0_TypeInfo);
    byte_4D2E35F = 1;
  }
  v7 = (WarBoardData___c__DisplayClass173_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass173_0_TypeInfo);
  WarBoardData___c__DisplayClass173_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_14;
  v7->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_14;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v12 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v12,
             (const MethodInfo_318E744 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (GrandQuestFolderBoardItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v16 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_59097676(
    v16,
    monitor,
    (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
  if ( !v16 )
    goto LABEL_14;
  v8 = System_Collections_Generic_List_int___Contains(
         v16,
         effectId,
         (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
  if ( v8 )
    return;
  items = v16->fields._items;
  v18 = Method_System_Collections_Generic_List_int__Add__;
  ++v16->fields._version;
  if ( !items )
LABEL_14:
    sub_1C93D2C(v8, v9);
  size = v16->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v16,
      effectId,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v16->fields._size = size + 1;
    items->m_Items[size] = effectId;
  }
  v20 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  p_monitor->klass = (GrandQuestFolderBoardItem_c *)v20;
  sub_1C93A78(p_monitor, (int32_t)v20, v21, v22, v23, v24, v25, v26);
}


void WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__191_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  WarBoardData___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__bool__o *_9__191_1; // x20
  Il2CppObject *v18; // x21
  struct WarBoardData___c_StaticFields *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  WarBoardData___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_T__o *v28; // x19
  System_Action_object__o *_9__191_2; // x20
  Il2CppObject *v30; // x21
  GrandQuestFolderBoardItem_o *p__9__191_2; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D2E36E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_BattleBuffData__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_BattleBuffData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_BattleBuffData___);
    sub_1C93AD4(&System_Func_BattleBuffData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__);
    sub_1C93AD4(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__);
    sub_1C93AD4(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E36E = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__191_0 = (System_Func_object__object__o *)v3->static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__191_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    System_Func_object__object____ctor(_9__191_0, v6, Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__191_0,
      (int32_t)_9__191_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v15 = WarBoardData___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v15 = WarBoardData___c_TypeInfo;
  }
  _9__191_1 = (System_Func_object__bool__o *)v15->static_fields->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = WarBoardData___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__191_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_BattleBuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__191_1, v18, Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, 0);
    v19 = WarBoardData___c_TypeInfo->static_fields;
    v19->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v19->__9__191_1, (int32_t)_9__191_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v27 = WarBoardData___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_T__o *)v26;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v27 = WarBoardData___c_TypeInfo;
  }
  _9__191_2 = (System_Action_object__o *)v27->static_fields->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = WarBoardData___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__191_2 = (System_Action_object__o *)sub_1C93D20(System_Action_BattleBuffData__TypeInfo);
    System_Action_object____ctor(_9__191_2, v30, Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, 0);
    p__9__191_2 = (GrandQuestFolderBoardItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__191_2;
    p__9__191_2->klass = (GrandQuestFolderBoardItem_c *)_9__191_2;
    sub_1C93A78(p__9__191_2, (int32_t)_9__191_2, v32, v33, v34, v35, v36, v37);
  }
  BasicHelper__ForEach_object_(
    v28,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_BattleBuffData___);
}


void WarBoardData__CheckItem(
        WarBoardData_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  __int64 AliveServantPieces; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  int v8; // w8
  __int64 v9; // x21
  unsigned int v10; // w27
  WarBoardPieceData_o *v11; // x22
  __int64 v12; // x23
  WarBoardManager_o *v13; // x24
  const MethodInfo_39A43D0 *v14; // x2
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  __int64 v21; // x24
  struct WarBoardTaskBase_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  Il2CppObject *Instance; // x25
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  __int64 v33; // x26
  __int64 v34; // x0
  System_Nullable_Vector3__o v35; // [xsp+0h] [xbp-70h] BYREF
  System_Nullable_Vector3__o v36; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2E325 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase___TypeInfo);
    byte_4D2E325 = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_27:
    sub_1C93D2C(AliveServantPieces, v6);
  v8 = *(_DWORD *)(AliveServantPieces + 24);
  v9 = AliveServantPieces;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( v10 < v8 )
    {
      v11 = *(WarBoardPieceData_o **)(v9 + 8LL * (int)v10 + 32);
      if ( !v11 )
        goto LABEL_27;
      AliveServantPieces = (__int64)WarBoardData__GetItem(this, v11->fields._nowSquareIndex_k__BackingField, v7);
      if ( AliveServantPieces )
      {
        v12 = AliveServantPieces;
        AliveServantPieces = WarBoardItemData__get_Acquired((WarBoardItemData_o *)AliveServantPieces, 0);
        if ( (AliveServantPieces & 1) == 0 )
        {
          AliveServantPieces = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !*(_QWORD *)(v12 + 56) )
            goto LABEL_27;
          v13 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(*(UnityEngine_Component_o **)(v12 + 56), 0);
          if ( !AliveServantPieces )
            goto LABEL_27;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0);
          *(_QWORD *)&v36.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v36.fields.hasValue = &v35;
          *(_QWORD *)&v35.fields.hasValue = 0;
          *(_QWORD *)&v35.fields.value.fields.y = 0;
          System_Nullable_Vector3____ctor(v36, localPosition, v14);
          if ( !v13 )
            goto LABEL_27;
          AliveServantPieces = (__int64)WarBoardManager__GetCameraPerformanceTask(v13, v35, 0, 1, 0, 1, 0);
          v21 = AliveServantPieces;
          if ( taskList )
          {
            items = taskList->fields._items;
            v23 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
            ++taskList->fields._version;
            if ( !items )
              goto LABEL_27;
            size = taskList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)taskList,
                (Il2CppObject *)AliveServantPieces,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              taskList->fields._size = size + 1;
              v25[4] = (Il2CppClass *)v21;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), v21, v15, v16, v17, v18, v19, v20);
            }
          }
          else
          {
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            AliveServantPieces = sub_1C93B7C(WarBoardTaskBase___TypeInfo, 1);
            if ( !AliveServantPieces )
              goto LABEL_27;
            v33 = AliveServantPieces;
            if ( v21 )
            {
              AliveServantPieces = sub_1C93C10(v21, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v34 = sub_1C93D50();
                sub_1C93BFC(v34, 0);
              }
            }
            if ( !*(_DWORD *)(v33 + 24) )
              break;
            *(_QWORD *)(v33 + 32) = v21;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 32), v21, v27, v28, v29, v30, v31, v32);
            if ( !Instance )
              goto LABEL_27;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v33, 0);
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v12, v11, taskList, 0, 0);
        }
      }
      v8 = *(_DWORD *)(v9 + 24);
      if ( (int)++v10 >= v8 )
        return;
    }
    sub_1C93D34(AliveServantPieces);
  }
}


bool WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Master_object; // x0
  __int64 v5; // x1
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v9; // w24
  int v10; // w23
  int32_t i; // w20
  int32_t v12; // w21
  int max_length; // w8
  WarBoardPieceData_array *v14; // x22
  unsigned int v15; // w25
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v17; // x0
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v19; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t condGroup; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4D2E32A & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_int____79099168);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__CheckWinCond_b__98_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E32A = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (WarBoardPieceData_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_object )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_43999392(
              (WarBoardCommonReleaseMaster_o *)Master_object,
              this->fields.winCondId,
              &condGroup,
              0) )
        return 0;
      this->fields.winCondGroup = condGroup;
      return 1;
    }
LABEL_39:
    sub_1C93D2C(Master_object, v5);
  }
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v10 = 0;
    v9 = 0;
    goto LABEL_30;
  }
  maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
  v9 = 0;
  v10 = 0;
  for ( i = 1; i <= maxForceId_k__BackingField; ++i )
  {
    if ( maxGroupId_k__BackingField < 0 )
      continue;
    v12 = 0;
    do
    {
      Master_object = WarBoardData__GetPieces_38551008(this, i, v12, v2);
      if ( !Master_object )
        goto LABEL_39;
      max_length = Master_object->max_length;
      v14 = Master_object;
      if ( max_length >= 1 )
      {
        v15 = 0;
        do
        {
          if ( v15 >= max_length )
            sub_1C93D34(Master_object);
          Master_object = (WarBoardPieceData_array *)v14->m_Items[v15];
          if ( !Master_object )
            goto LABEL_39;
          if ( !BYTE4(Master_object->m_Items[3]) && !LOBYTE(Master_object->m_Items[11]) )
          {
            Master_object = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                         (WarBoardPieceData_o *)Master_object,
                                                         0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
              ++v9;
            else
              ++v10;
          }
          max_length = v14->max_length;
        }
        while ( (int)++v15 < max_length );
      }
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      ++v12;
    }
    while ( v12 <= maxGroupId_k__BackingField );
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  }
LABEL_30:
  masterExistsForce = this->fields.masterExistsForce;
  v17 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v17 = WarBoardData___c_TypeInfo;
  }
  _9__98_0 = v17->static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = WarBoardData___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__98_0 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__98_0, v19, Method_WarBoardData___c__CheckWinCond_b__98_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__98_0 = _9__98_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__98_0,
      (int32_t)_9__98_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  return (v9 == 0)
       & (System_Linq_Enumerable__Count_int__52187908(
            (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
            (System_Func_TSource__bool__o *)_9__98_0,
            (const MethodInfo_31C5304 *)Method_System_Linq_Enumerable_Count_int____79099168) > 0)
       | (v10 == 0);
}


void WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_UInt32_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2E362 & 1) == 0 )
  {
    sub_1C93AD4(&uint___TypeInfo);
    byte_4D2E362 = 1;
  }
  v3 = (struct System_UInt32_array *)sub_1C93B7C(uint___TypeInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


int32_t WarBoardData__ComparePiece(
        WarBoardData_o *this,
        WarBoardPieceData_o *a,
        WarBoardPieceData_o *b,
        const MethodInfo *method)
{
  _BOOL4 isServant; // w21
  int32_t result; // w0
  int32_t forceId_k__BackingField; // w8
  int32_t v9; // w9
  int32_t groupId_k__BackingField; // w8
  int32_t index_k__BackingField; // w9
  int32_t v12; // w8
  int32_t v13; // w9
  int32_t v14; // w8
  int32_t v15; // w9

  if ( !a || (this = (WarBoardData_o *)WarBoardPieceData__get_isMaster(a, 0), !b) )
    sub_1C93D2C(this, a);
  if ( (((unsigned int)this ^ WarBoardPieceData__get_isMaster(b, 0)) & 1) == 0 )
  {
    forceId_k__BackingField = a->fields._forceId_k__BackingField;
    v9 = b->fields._forceId_k__BackingField;
    result = v9 - forceId_k__BackingField;
    if ( v9 != forceId_k__BackingField )
      return result;
    groupId_k__BackingField = b->fields._groupId_k__BackingField;
    index_k__BackingField = a->fields._groupId_k__BackingField;
    return groupId_k__BackingField - index_k__BackingField;
  }
  isServant = WarBoardPieceData__get_isServant(a, 0);
  if ( ((isServant ^ WarBoardPieceData__get_isServant(b, 0)) & 1) != 0 )
  {
    if ( WarBoardPieceData__get_isMaster(a, 0) )
      return 1;
    else
      return WarBoardPieceData__get_isMaster(b, 0) << 31 >> 31;
  }
  v12 = a->fields._forceId_k__BackingField;
  v13 = b->fields._forceId_k__BackingField;
  result = v13 - v12;
  if ( v13 == v12 )
  {
    v14 = a->fields._groupId_k__BackingField;
    v15 = b->fields._groupId_k__BackingField;
    result = v15 - v14;
    if ( v15 == v14 )
    {
      groupId_k__BackingField = b->fields._index_k__BackingField;
      index_k__BackingField = a->fields._index_k__BackingField;
      return groupId_k__BackingField - index_k__BackingField;
    }
  }
  return result;
}


WarBoardData_BattleParticipantInfo_o *WarBoardData__CreateBattleParticipantInfo(
        WarBoardData_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v6; // x21

  if ( (byte_4D2E376 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_4D2E376 = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_1C93D20(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0);
  return v6;
}


void WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4D2E322 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&WarBoardData_TypeInfo);
    byte_4D2E322 = 1;
  }
  v1 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v1 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v1->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SetInt(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 1, 0);
}


WarBoardWaitTime_o *WarBoardData__CreateEventBossUIDataTask(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x1
  System_Delegate_o **v5; // x20
  System_Delegate_o *v6; // x21
  WarBoardData___c_c *v7; // x0
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v9; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Delegate_o *v24; // x8
  WarBoardTaskBase_TaskCallback_c *v25; // x1

  if ( (byte_4D2E352 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    sub_1C93AD4(&WarBoardWaitTime_TypeInfo);
    byte_4D2E352 = 1;
  }
  v2 = sub_1C93D20(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v2, 0.0, 0);
  if ( !v2 )
    sub_1C93D2C(v3, v4);
  v5 = (System_Delegate_o **)(v2 + 40);
  v6 = *(System_Delegate_o **)(v2 + 40);
  v7 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v7 = WarBoardData___c_TypeInfo;
  }
  _9__152_0 = v7->static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = WarBoardData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v9,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__152_0 = _9__152_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__152_0,
      (int32_t)_9__152_0,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  v17 = System_Delegate__Combine(v6, (System_Delegate_o *)_9__152_0, 0);
  v24 = v17;
  if ( !v17 )
    goto LABEL_14;
  v25 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v17->klass != WarBoardTaskBase_TaskCallback_TypeInfo
    || (*v5 = v17, (WarBoardTaskBase_TaskCallback_c *)v17->klass != v25) )
  {
    sub_1C940C8(v17);
LABEL_14:
    *v5 = v24;
  }
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v2 + 40), (int32_t)v24, v18, v19, v20, v21, v22, v23);
  return (WarBoardWaitTime_o *)v2;
}


void WarBoardData__DelSquareInfo(WarBoardData_o *this, int32_t squareIndex, int32_t effectId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass174_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *squareIndexInfo; // x20
  System_Func_object__bool__o *v12; // x21
  Il2CppObject *object; // x0
  GrandQuestFolderBoardItem_o *p_monitor; // x20
  System_Collections_Generic_IEnumerable_T__o *monitor; // x22
  System_Collections_Generic_List_int__o *v16; // x21
  System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2E360 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_WarBoardSquareIndexData___);
    sub_1C93AD4(&System_Func_WarBoardSquareIndexData__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass174_0_TypeInfo);
    byte_4D2E360 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass174_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass174_0_TypeInfo);
  WarBoardData___c__DisplayClass174_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_10;
  v7->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (System_Object_array *)serverData->fields.squareIndexInfo;
  v12 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             squareIndexInfo,
             (System_Func_T__bool__o *)v12,
             (const MethodInfo_318E744 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !object )
    return;
  p_monitor = (GrandQuestFolderBoardItem_o *)&object[1].monitor;
  monitor = (System_Collections_Generic_IEnumerable_T__o *)object[1].monitor;
  v16 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_59097676(
    v16,
    monitor,
    (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
  if ( !v16 )
LABEL_10:
    sub_1C93D2C(v8, v9);
  if ( System_Collections_Generic_List_int___Contains(
         v16,
         effectId,
         (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v16,
      effectId,
      (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
    v17 = System_Collections_Generic_List_int___ToArray(
            v16,
            (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_monitor->klass = (GrandQuestFolderBoardItem_c *)v17;
    sub_1C93A78(p_monitor, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  }
}


void WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4D2E323 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&WarBoardData_TypeInfo);
    byte_4D2E323 = 1;
  }
  v1 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v1 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v1->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0);
}


void WarBoardData__DeleteLocalSave(const MethodInfo *method)
{
  WarBoardData_c *v1; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19

  if ( (byte_4D2E321 & 1) == 0 )
  {
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&WarBoardData_TypeInfo);
    byte_4D2E321 = 1;
  }
  v1 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v1 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v1->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__DeleteKey(WARBOARDDATA_SAVEDATA_KEY, 0);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointEntity_o *WarBoardData__GetActionPointEntity(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  System_Collections_Generic_Dictionary_TKey__TValue__o *actionPointEntityDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_4D2E327 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
    byte_4D2E327 = 1;
  }
  value = 0;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_1C93D2C(0, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_3568F04 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__110_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D2E336 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E336 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__110_0 = (System_Func_object__bool__o *)v3->static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__110_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__110_0, v6, Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__110_0,
      (int32_t)_9__110_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v14,
                                                                   (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__107_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D2E333 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__GetAlivePieces_b__107_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E333 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__107_0 = (System_Func_object__bool__o *)v3->static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__107_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__107_0, v6, Method_WarBoardData___c__GetAlivePieces_b__107_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__107_0,
      (int32_t)_9__107_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__109_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D2E335 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E335 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__109_0 = (System_Func_object__bool__o *)v3->static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__109_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__109_0,
      v6,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__109_0,
      (int32_t)_9__109_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_object_(
                                                                   v14,
                                                                   (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__108_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D2E334 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E334 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__108_0 = (System_Func_object__bool__o *)v3->static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__108_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__108_0, v6, Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__108_0,
      (int32_t)_9__108_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_array *WarBoardData__GetAllEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


WarBoardItemData_array *WarBoardData__GetAllItems(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.items;
}


WarBoardPieceData_array *WarBoardData__GetAllPieces(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.pieces;
}


int32_t WarBoardData__GetAttackCost(WarBoardData_o *this, int32_t forceId, int32_t groupId, const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.attackCost;
  return (int)ActionPointEntity;
}


int32_t WarBoardData__GetBaseActionPoint(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.baseActionPoint;
  return (int)ActionPointEntity;
}


int32_t WarBoardData__GetClearedTurn(WarBoardData_o *this, int32_t condId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass183_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listPrevCond; // x19
  System_Predicate_object__o *v9; // x20
  Il2CppObject *v10; // x0

  if ( (byte_4D2E366 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
    sub_1C93AD4(&System_Predicate_WarBoardPrevCondData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass183_0_TypeInfo);
    byte_4D2E366 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass183_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass183_0_TypeInfo);
  WarBoardData___c__DisplayClass183_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.condId = condId,
        listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
        v9 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_WarBoardPrevCondData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          0),
        !listPrevCond) )
  {
    sub_1C93D2C(v6, v7);
  }
  v10 = System_Collections_Generic_List_object___Find(
          listPrevCond,
          (System_Predicate_T__o *)v9,
          (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v10 )
    return HIDWORD(v10[1].klass);
  else
    return -1;
}


WarBoardSquareData_o *WarBoardData__GetCondSquare(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass130_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2E344 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1C93AD4(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass130_0_TypeInfo);
    byte_4D2E344 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass130_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass130_0_TypeInfo);
  WarBoardData___c__DisplayClass130_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    0);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *WarBoardData__GetCondSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.condSquares;
}


System_Int32_array *WarBoardData__GetDeploySquareIds(
        WarBoardData_o *this,
        System_Int32_array_array *squareIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x21
  void *Piece_38493796; // x0
  __int64 value; // x1
  int max_length; // w8
  unsigned int v9; // w25
  System_Int32_array *v10; // x28
  unsigned __int64 v11; // x27
  WarBoardData___c__DisplayClass133_0_o *v12; // x22
  const MethodInfo *v13; // x2
  int32_t v14; // w1
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x3
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v18; // x24
  System_Func_int__bool__o *v19; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10

  if ( (byte_4D2E346 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int___);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass133_0_TypeInfo);
    byte_4D2E346 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !squareIds )
    goto LABEL_29;
  max_length = squareIds->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
LABEL_30:
        sub_1C93D34(Piece_38493796);
      v10 = squareIds->m_Items[v9];
      if ( !v10 )
        break;
      if ( SLODWORD(v10->max_length) < 1 )
      {
LABEL_18:
        value = 0xFFFFFFFFLL;
        if ( !v5 )
          break;
      }
      else
      {
        v11 = 0;
        while ( 1 )
        {
          v12 = (WarBoardData___c__DisplayClass133_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass133_0_TypeInfo);
          WarBoardData___c__DisplayClass133_0___ctor(v12, 0);
          if ( v11 >= LODWORD(v10->max_length) )
            goto LABEL_30;
          if ( !v12 )
            goto LABEL_29;
          v14 = v10->m_Items[v11];
          v12->fields.value = v14;
          Piece_38493796 = WarBoardData__GetPiece_38493796(this, v14, v13);
          if ( !Piece_38493796 )
          {
            Piece_38493796 = WarBoardData__GetUnusedTreasure(this, v12->fields.value, v15);
            if ( !Piece_38493796 )
            {
              Piece_38493796 = WarBoardData__GetWall(this, v12->fields.value, 0, v16);
              if ( !Piece_38493796 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v18 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v18,
                  (Il2CppObject *)v12,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  0);
                Piece_38493796 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v18,
                                           (const MethodInfo_318D84C *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_38493796 & 1) == 0 )
                {
                  v19 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
                  System_Func_int__bool____ctor(
                    v19,
                    (Il2CppObject *)v12,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    0);
                  Piece_38493796 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v5,
                                             (System_Func_T__bool__o *)v19,
                                             (const MethodInfo_318D84C *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_38493796 & 1) == 0 )
                    break;
                }
              }
            }
          }
          if ( (__int64)++v11 >= SLODWORD(v10->max_length) )
            goto LABEL_18;
        }
        value = (unsigned int)v12->fields.value;
        if ( !v5 )
          break;
      }
      items = v5->fields._items;
      v21 = Method_System_Collections_Generic_List_int__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v5,
          value,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v5->fields._size = size + 1;
        items->m_Items[size] = value;
      }
      max_length = squareIds->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_27;
    }
LABEL_29:
    sub_1C93D2C(Piece_38493796, value);
  }
LABEL_27:
  if ( !v5 )
    goto LABEL_29;
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E34F & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C93AD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2E34F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.editBgmId,
                               (const MethodInfo_34632C0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1C93D2C(Instance, v4);
  }
  return 0;
}


WarBoardPieceData_array *WarBoardData__GetEditableServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__120_0; // x20
  Il2CppObject *v6; // x21
  GrandQuestFolderBoardItem_o *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D2E33C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E33C = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__120_0 = (System_Func_object__bool__o *)v3->static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__120_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__120_0, v6, Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, 0);
    static_fields = (GrandQuestFolderBoardItem_o *)WarBoardData___c_TypeInfo->static_fields;
    static_fields[1].klass = (GrandQuestFolderBoardItem_c *)_9__120_0;
    sub_1C93A78(static_fields + 1, (int32_t)_9__120_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_o *WarBoardData__GetEffect(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass142_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2E34B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
    sub_1C93AD4(&System_Func_WarBoardEffectData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass142_0_TypeInfo);
    byte_4D2E34B = 1;
  }
  v5 = (WarBoardData___c__DisplayClass142_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass142_0_TypeInfo);
  WarBoardData___c__DisplayClass142_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardEffectData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    0);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                   effects,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
}


WarBoardEffectData_array *WarBoardData__GetEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


WarBoardPieceData_o *WarBoardData__GetEventBossPiece(
        WarBoardData_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass105_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2E331 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass105_0_TypeInfo);
    byte_4D2E331 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass105_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass105_0_TypeInfo);
  WarBoardData___c__DisplayClass105_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t WarBoardData__GetExpensiveIcon(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x22
  int max_length; // w8
  unsigned int v5; // w24
  int32_t iconId; // w23
  int v7; // w19
  int32_t Rarity; // w20
  WarBoardTreasureData_SaveData_o *v9; // x21

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_17;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_17;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    iconId = 0;
    v7 = -1;
    Rarity = -1;
    while ( 1 )
    {
      if ( v5 >= max_length )
        sub_1C93D34(this);
      v9 = treasureSaves->m_Items[v5];
      if ( !v9 )
        break;
      if ( v9->fields.isUse )
      {
        if ( WarBoardTreasureData_SaveData__get_Rarity(v9, 0) > Rarity
          || (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Rarity(v9, 0), (_DWORD)this == Rarity)
          && (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v9, 0), (int)this > v7) )
        {
          iconId = v9->fields.iconId;
          Rarity = WarBoardTreasureData_SaveData__get_Rarity(v9, 0);
          this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v9, 0);
          v7 = (int)this;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v5 >= max_length )
        return iconId + 1;
    }
LABEL_17:
    sub_1C93D2C(this, method);
  }
  iconId = 0;
  return iconId + 1;
}


void WarBoardData__GetHoldReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinforcementsDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass188_0_o *v8; // x23
  void *v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *reinforcementsSaveList; // x22
  System_Predicate_object__o *v12; // x24
  Il2CppObject *v13; // x25
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_Collections_Generic_List_object__o *v21; // x22
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v28; // x22
  System_Func_object__bool__o *v29; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  const MethodInfo_35FA018 **v31; // x26
  WarBoardData___c__DisplayClass188_1_c **v32; // x27
  __int64 v33; // x24
  __int64 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  int32_t current; // w1
  HoldReinforcementsData_o **v43; // x22
  __int64 v44; // x0
  __int64 v45; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v51; // x1
  const MethodInfo *v52; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v55; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v57; // x1
  struct System_Int32_array *v58; // x8
  __int64 v59; // x9
  _BOOL4 v60; // w25
  Il2CppObject *Instance; // x0
  __int64 v62; // x1
  _BOOL8 IsPlayerTurn; // x0
  __int64 v64; // x1
  __int64 v65; // x10
  int max_length; // w11
  int v67; // w10
  const MethodInfo_35FA018 **v68; // x20
  System_Collections_Generic_List_T__o *v69; // x25
  System_Func_object__bool__o *v70; // x26
  bool v71; // w0
  __int64 v72; // x1
  WarBoardData___c__DisplayClass188_1_c **v73; // x29
  _BOOL8 v74; // x0
  __int64 v75; // x1
  Il2CppObject *v76; // x27
  System_Collections_Generic_List_int__o *v77; // x25
  System_Collections_Generic_List_int__o *v78; // x24
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x0
  __int64 v82; // x1
  __int64 v83; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  System_Int32_array *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  __int64 v94; // x0
  __int64 v95; // x1
  GrandQuestFolderBoardItem_o *v96; // x25
  __int64 v97; // x0
  __int64 v98; // x1
  __int64 v99; // x8
  __int64 v100; // x1
  struct System_Int32_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  System_Int32_array *v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  System_String_o *v107; // x4
  int32_t v108; // w5
  int64_t v109; // x6
  System_String_o *v110; // x7
  Il2CppObject *v111; // x0
  __int64 v112; // x1
  void *monitor; // x8
  HoldReinforcementsData_o *v114; // x0
  __int64 v115; // x9
  System_Collections_Generic_List_int__o *v116; // x8
  __int64 v117; // x1
  struct System_Int32_array *v118; // x9
  _QWORD *v119; // x10
  __int64 v120; // x11
  __int64 v121; // x1
  __int64 v122; // x24
  __int64 v123; // x0
  __int64 v124; // x1
  __int64 v125; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  __int64 v132; // x0
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  __int64 v139; // x8
  __int64 v140; // x1
  int32_t v141; // w2
  int32_t v142; // w3
  System_String_o *v143; // x4
  int32_t v144; // w5
  int64_t v145; // x6
  System_String_o *v146; // x7
  System_Collections_Generic_List_object__o *v147; // x0
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x8
  Il2CppObject *v152; // x0
  __int64 v153; // x1
  void *v154; // x8
  HoldReinforcementsData_o *v155; // x0
  __int64 v156; // x9
  System_Collections_Generic_List_int__o *v157; // x8
  __int64 v158; // x1
  struct System_Int32_array *v159; // x9
  _QWORD *v160; // x10
  __int64 v161; // x11
  __int64 v162; // x1
  System_Collections_Generic_List_Enumerator_object__o v164; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v165; // [xsp+20h] [xbp-A0h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v167; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D2E36B & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_1C93AD4(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_1C93AD4(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_1C93AD4(&int___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_ReinforcementsData__TypeInfo);
    sub_1C93AD4(&System_Predicate_HoldReinforcementsData__TypeInfo);
    sub_1C93AD4(&ReinforcementsData_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass188_0_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass188_1_TypeInfo);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E36B = 1;
  }
  memset(&v167, 0, sizeof(v167));
  entity = 0;
  memset(&v165, 0, sizeof(v165));
  v8 = (WarBoardData___c__DisplayClass188_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass188_0_TypeInfo);
  WarBoardData___c__DisplayClass188_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_156;
  v8->fields.targetStageReinforcementsId = targetStageReinforcementsId;
  reinforcementsSaveList = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  v9 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  v12 = *(System_Predicate_object__o **)(*((_QWORD *)v9 + 23) + 232LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)v9 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = WarBoardData___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)v9 + 23);
    v12 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_HoldReinforcementsData__TypeInfo);
    System_Predicate_object____ctor(v12, v13, Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)v12;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__188_0, (int32_t)v12, v15, v16, v17, v18, v19, v20);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_156;
  System_Collections_Generic_List_object___RemoveAll(
    reinforcementsSaveList,
    (System_Predicate_T__o *)v12,
    (const MethodInfo_387AFF8 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ReinforcementsData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v21;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)reinforcementsDatas, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v28 = this->fields.reinforcementsSaveList;
  if ( (v8->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v29 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_HoldReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v29,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      0);
    v30 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v28,
            (System_Func_TSource__bool__o *)v29,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v9 = System_Linq_Enumerable__ToList_object_(
           v30,
           (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v28 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v9;
  }
  if ( !v28 )
LABEL_156:
    sub_1C93D2C(v9, v10);
  v31 = (const MethodInfo_35FA018 **)&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__;
  v32 = &WarBoardData___c__DisplayClass188_1_TypeInfo;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v164,
    (System_Collections_Generic_List_object__o *)v28,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v167 = v164;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(&v167, *v31) )
  {
    v33 = sub_1C93D20(*v32);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v33, 0);
    if ( !v33 )
      sub_1C93D2C(v34, v35);
    current = (int32_t)v167.fields._current;
    *(_QWORD *)(v33 + 16) = v167.fields._current;
    v43 = (HoldReinforcementsData_o **)(v33 + 16);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v33 + 16), current, v36, v37, v38, v39, v40, v41);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_1C93D2C(v44, v45);
    if ( !*v43 )
      sub_1C93D2C(v44, v45);
    if ( !mst )
      sub_1C93D2C(v44, v45);
    v47 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v43)->fields._id_k__BackingField,
            0);
    if ( v47 )
    {
      if ( !entity )
        sub_1C93D2C(v47, v48);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v49);
      if ( !entity )
        sub_1C93D2C(DeploySquareIds, v51);
      if ( !*v43 )
        sub_1C93D2C(DeploySquareIds, v51);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_1C93D2C(DeploySquareIds, v51);
      index_k__BackingField = (*v43)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= LODWORD(limitNums->max_length) )
        sub_1C93D34(DeploySquareIds);
      v55 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField] < 1 )
      {
        v60 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v52);
        if ( !ReinfocementsPieces )
          sub_1C93D2C(0, v57);
        if ( !entity )
          sub_1C93D2C(ReinfocementsPieces, v57);
        if ( !*v43 )
          sub_1C93D2C(ReinfocementsPieces, v57);
        v58 = entity->fields.limitNums;
        if ( !v58 )
          sub_1C93D2C(ReinfocementsPieces, v57);
        v59 = (*v43)->fields._index_k__BackingField;
        if ( (unsigned int)v59 >= LODWORD(v58->max_length) )
          sub_1C93D34(ReinfocementsPieces);
        v60 = v58->m_Items[v59] <= SLODWORD(ReinfocementsPieces->max_length);
      }
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_1C93D2C(0, v62);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0);
      if ( !entity )
        sub_1C93D2C(IsPlayerTurn, v64);
      if ( !v55 )
        sub_1C93D2C(IsPlayerTurn, v64);
      if ( !*v43 )
        sub_1C93D2C(IsPlayerTurn, v64);
      v65 = (*v43)->fields._index_k__BackingField;
      max_length = v55->max_length;
      if ( (int)v65 >= max_length )
      {
        v67 = 0;
      }
      else
      {
        if ( (unsigned int)v65 >= max_length )
          sub_1C93D34(IsPlayerTurn);
        v67 = v55->m_Items[v65] >= 0 && !v60;
      }
      if ( (IsPlayerTurn ^ (entity->fields.forceId != 0)) & (unsigned int)v67 )
      {
        v68 = v31;
        v69 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v70 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ReinforcementsData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v70,
          (Il2CppObject *)v33,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          0);
        v71 = BasicHelper__Any_object_(
                v69,
                (System_Func_T__bool__o *)v70,
                (const MethodInfo_318DB78 *)Method_BasicHelper_Any_ReinforcementsData___);
        v31 = v68;
        if ( v71 )
        {
          if ( !*reinforcementsDatas )
            sub_1C93D2C(0, v72);
          v73 = v32;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v164,
            (System_Collections_Generic_List_object__o *)*reinforcementsDatas,
            (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
          v165 = v164;
          do
          {
            v74 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v165,
                    (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
            if ( !v74 )
            {
              v32 = v73;
              goto LABEL_76;
            }
            v76 = v165.fields._current;
            if ( !v165.fields._current )
              sub_1C93D2C(v74, v75);
            if ( !*v43 )
              sub_1C93D2C(v74, v75);
          }
          while ( LODWORD(v165.fields._current[1].klass) != (*v43)->fields._id_k__BackingField );
          v77 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v77,
            (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
          v78 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
          System_Collections_Generic_List_int____ctor(
            v78,
            (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
          if ( !v77 )
            sub_1C93D2C(v79, v80);
          System_Collections_Generic_List_int___AddRange(
            v77,
            (System_Collections_Generic_IEnumerable_T__o *)v76[1].monitor,
            (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v43 )
            sub_1C93D2C(v81, v82);
          v83 = (unsigned int)(*v43)->fields._index_k__BackingField;
          items = v77->fields._items;
          v85 = Method_System_Collections_Generic_List_int__Add__;
          ++v77->fields._version;
          if ( !items )
            sub_1C93D2C(v81, v83);
          size = v77->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v77,
              v83,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v77->fields._size = size + 1;
            items->m_Items[size] = v83;
          }
          v87 = System_Collections_Generic_List_int___ToArray(
                  v77,
                  (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
          v76[1].monitor = v87;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v76[1].monitor, (int32_t)v87, v88, v89, v90, v91, v92, v93);
          if ( !v78 )
            sub_1C93D2C(v94, v95);
          v96 = (GrandQuestFolderBoardItem_o *)&v76[2];
          v31 = v68;
          System_Collections_Generic_List_int___AddRange(
            v78,
            (System_Collections_Generic_IEnumerable_T__o *)v76[2].klass,
            (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
          if ( !*v43 )
            sub_1C93D2C(v97, v98);
          v99 = (*v43)->fields._index_k__BackingField;
          v32 = v73;
          if ( (unsigned int)v99 >= LODWORD(v55->max_length) )
            sub_1C93D34(v97);
          v100 = (unsigned int)v55->m_Items[v99];
          v101 = v78->fields._items;
          v102 = Method_System_Collections_Generic_List_int__Add__;
          ++v78->fields._version;
          if ( !v101 )
            sub_1C93D2C(v97, v100);
          v103 = v78->fields._size;
          if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v78,
              v100,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
          }
          else
          {
            v78->fields._size = v103 + 1;
            v101->m_Items[v103] = v100;
          }
          v104 = System_Collections_Generic_List_int___ToArray(
                   v78,
                   (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
          v96->klass = (GrandQuestFolderBoardItem_c *)v104;
          sub_1C93A78(v96, (int32_t)v104, v105, v106, v107, v108, v109, v110);
          v111 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v111 )
            sub_1C93D2C(0, v112);
          monitor = v111[27].monitor;
          if ( !monitor )
            sub_1C93D2C(v111, v112);
          v114 = *v43;
          if ( !*v43 )
            sub_1C93D2C(0, v112);
          v115 = v114->fields._index_k__BackingField;
          if ( (unsigned int)v115 >= LODWORD(v55->max_length) )
            sub_1C93D34(v114);
          v116 = (System_Collections_Generic_List_int__o *)*((_QWORD *)monitor + 29);
          if ( !v116 )
            sub_1C93D2C(v114, v112);
          v117 = (unsigned int)v55->m_Items[v115];
          v118 = v116->fields._items;
          v119 = Method_System_Collections_Generic_List_int__Add__;
          ++v116->fields._version;
          if ( !v118 )
            sub_1C93D2C(v114, v117);
          v120 = v116->fields._size;
          if ( (unsigned int)v120 >= LODWORD(v118->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v116,
              v117,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
            v114 = *v43;
            if ( !*v43 )
              sub_1C93D2C(0, v121);
          }
          else
          {
            v116->fields._size = v120 + 1;
            v118->m_Items[v120] = v117;
          }
          HoldReinforcementsData__DecreaseHoldNum(v114, 0);
LABEL_76:
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v165,
            (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        }
        else
        {
          v122 = sub_1C93D20(ReinforcementsData_TypeInfo);
          ReinforcementsData___ctor((ReinforcementsData_o *)v122, 0);
          if ( !entity )
            sub_1C93D2C(v123, v124);
          if ( !v122 )
            sub_1C93D2C(v123, v124);
          *(_DWORD *)(v122 + 16) = entity->fields.id;
          v125 = sub_1C93B7C(int___TypeInfo, 1);
          if ( !*v43 )
            sub_1C93D2C(v125, v125);
          if ( !v125 )
            sub_1C93D2C(0, 0);
          if ( !*(_DWORD *)(v125 + 24) )
            sub_1C93D34(v125);
          *(_DWORD *)(v125 + 32) = (*v43)->fields._index_k__BackingField;
          *(_QWORD *)(v122 + 24) = v125;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v122 + 24), v125, v126, v127, v128, v129, v130, v131);
          v132 = sub_1C93B7C(int___TypeInfo, 1);
          if ( !*v43 )
            sub_1C93D2C(v132, v132);
          v139 = (*v43)->fields._index_k__BackingField;
          if ( (unsigned int)v139 >= LODWORD(v55->max_length) )
            sub_1C93D34(v132);
          if ( !v132 )
            sub_1C93D2C(0, 0);
          if ( !*(_DWORD *)(v132 + 24) )
            sub_1C93D34(v132);
          *(_DWORD *)(v132 + 32) = v55->m_Items[v139];
          *(_QWORD *)(v122 + 32) = v132;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v122 + 32), v132, v133, v134, v135, v136, v137, v138);
          v147 = (System_Collections_Generic_List_object__o *)*reinforcementsDatas;
          if ( !*reinforcementsDatas )
            sub_1C93D2C(0, v140);
          v148 = v147->fields._items;
          v149 = Method_System_Collections_Generic_List_ReinforcementsData__Add__;
          ++v147->fields._version;
          if ( !v148 )
            sub_1C93D2C(v147, v140);
          v150 = v147->fields._size;
          if ( (unsigned int)v150 >= LODWORD(v148->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v147,
              (Il2CppObject *)v122,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
          }
          else
          {
            v151 = &v148->obj.klass + v150;
            v147->fields._size = v150 + 1;
            v151[4] = (Il2CppClass *)v122;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v151 + 4), v122, v141, v142, v143, v144, v145, v146);
          }
          v152 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v152 )
            sub_1C93D2C(0, v153);
          v154 = v152[27].monitor;
          if ( !v154 )
            sub_1C93D2C(v152, v153);
          v155 = *v43;
          if ( !*v43 )
            sub_1C93D2C(0, v153);
          v156 = v155->fields._index_k__BackingField;
          if ( (unsigned int)v156 >= LODWORD(v55->max_length) )
            sub_1C93D34(v155);
          v157 = (System_Collections_Generic_List_int__o *)*((_QWORD *)v154 + 29);
          if ( !v157 )
            sub_1C93D2C(v155, v153);
          v158 = (unsigned int)v55->m_Items[v156];
          v159 = v157->fields._items;
          v160 = Method_System_Collections_Generic_List_int__Add__;
          ++v157->fields._version;
          if ( !v159 )
            sub_1C93D2C(v155, v158);
          v161 = v157->fields._size;
          if ( (unsigned int)v161 >= LODWORD(v159->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v157,
              v158,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
            v155 = *v43;
            if ( !*v43 )
              sub_1C93D2C(0, v162);
          }
          else
          {
            v157->fields._size = v161 + 1;
            v159->m_Items[v161] = v158;
          }
          HoldReinforcementsData__DecreaseHoldNum(v155, 0);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v167,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


int32_t WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_4D2E357 & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    byte_4D2E357 = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_1C93D2C(this, method);
  return reinforcementsSaveList->fields._size;
}


System_Int32_array *WarBoardData__GetInRangeSquareIndecies(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass123_0_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x4
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v13; // x20
  WarBoardData___c_c *v14; // x0
  System_Func_object__int__o *_9__123_0; // x21
  Il2CppObject *v16; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_int__bool__o *v25; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2E33F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass123_0_TypeInfo);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E33F = 1;
  }
  v9 = (WarBoardData___c__DisplayClass123_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass123_0_TypeInfo);
  WarBoardData___c__DisplayClass123_0___ctor(v9, 0);
  if ( !v9 )
    sub_1C93D2C(v10, v11);
  v9->fields.start = start;
  v9->fields.ignoreStart = ignoreStart;
  rangeSearches = 0;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v12);
  v13 = rangeSearches;
  if ( !rangeSearches )
    return 0;
  v14 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v14 = WarBoardData___c_TypeInfo;
  }
  _9__123_0 = (System_Func_object__int__o *)v14->static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = WarBoardData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__123_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    System_Func_object__int____ctor(_9__123_0, v16, Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__123_0,
      (int32_t)_9__123_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v25 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v25,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    0);
  v26 = System_Linq_Enumerable__Where_int_(
          v24,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_31EAD14 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v26,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


WarBoardSquareData_array *WarBoardData__GetInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  WarBoardSquareData_array *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x20
  System_Func_T__TResult__o *v11; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_4D2E340 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
    sub_1C93AD4(&System_Func_int__WarBoardSquareData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData__GetInRangeSquares_b__124_0__);
    byte_4D2E340 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v10 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v11 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_int__WarBoardSquareData__TypeInfo);
    System_Func_int__object____ctor(v11, (Il2CppObject *)this, Method_WarBoardData__GetInRangeSquares_b__124_0__, 0);
    v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                                 v10,
                                                                 (System_Func_TSource__TResult__o *)v11,
                                                                 (const MethodInfo_31D7E14 *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_object_(
                                         v12,
                                         (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


WarBoardItemData_o *WarBoardData__GetItem(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass135_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2E347 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
    sub_1C93AD4(&System_Func_WarBoardItemData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass135_0_TypeInfo);
    byte_4D2E347 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass135_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass135_0_TypeInfo);
  WarBoardData___c__DisplayClass135_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardItemData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    0);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                 items,
                                 (System_Func_TSource__bool__o *)v9,
                                 (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
}


int32_t WarBoardData__GetItemCost(WarBoardData_o *this, int32_t forceId, int32_t groupId, const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.itemCost;
  return (int)ActionPointEntity;
}


WarBoardItemData_array *WarBoardData__GetItems(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.items;
}


uint32_t WarBoardData__GetLastSelectPieceUniqueIndex(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_1C93D2C(this, method);
  return localSaveData->fields.lastSelectPieceUniqueIndex;
}


System_UInt32_array *WarBoardData__GetLatestBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.latestBattlePieceUniqueIndexes;
}


System_Int32_array *WarBoardData__GetLatestPieceActionSquareIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.latestPieceActionSquareIndexes;
}


// local variable allocation has failed, the output may be wrong!
int32_t WarBoardData__GetMoveCost(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        bool swap,
        bool isMaster,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, (const MethodInfo *)swap);
  if ( ActionPointEntity )
  {
    if ( swap )
    {
      if ( isMaster )
        LODWORD(ActionPointEntity) = ActionPointEntity->fields.moveCost + ActionPointEntity->fields.masterMoveCost;
      else
        LODWORD(ActionPointEntity) = 2 * ActionPointEntity->fields.moveCost;
    }
    else if ( isMaster )
    {
      LODWORD(ActionPointEntity) = ActionPointEntity->fields.masterMoveCost;
    }
    else
    {
      LODWORD(ActionPointEntity) = ActionPointEntity->fields.moveCost;
    }
  }
  return (int)ActionPointEntity;
}


// local variable allocation has failed, the output may be wrong!
WarBoardStageNpcEntity_o *WarBoardData__GetNpcEntity(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  System_Collections_Generic_Dictionary_TKey__TValue__o *npcEntityDict; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_4D2E326 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
    byte_4D2E326 = 1;
  }
  value = 0;
  npcEntityDict = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_1C93D2C(0, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__object___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_3568F04 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return (WarBoardStageNpcEntity_o *)value;
}


int32_t WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1C93D2C(this, method);
  return stageEntity->fields.partySkillId;
}


WarBoardPieceData_array *WarBoardData__GetPicesForRange(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x23
  const MethodInfo *v10; // x4
  System_Int32_array *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4D2E33A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass118_0_TypeInfo);
    byte_4D2E33A = 1;
  }
  v9 = sub_1C93D20(WarBoardData___c__DisplayClass118_0_TypeInfo);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v9, 0);
  v11 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_1C93D2C(v11, v12);
  *(_QWORD *)(v9 + 16) = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)v11, v13, v14, v15, v16, v17, v18);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    0);
  v21 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v21,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPicesForRangeIsAlive(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x23
  const MethodInfo *v10; // x4
  System_Int32_array *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v20; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4D2E33B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass119_0_TypeInfo);
    byte_4D2E33B = 1;
  }
  v9 = sub_1C93D20(WarBoardData___c__DisplayClass119_0_TypeInfo);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v9, 0);
  v11 = WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v10);
  if ( !v9 )
    sub_1C93D2C(v11, v12);
  *(_QWORD *)(v9 + 16) = v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 16), (int32_t)v11, v13, v14, v15, v16, v17, v18);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    0);
  v21 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v20,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v21,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_o *WarBoardData__GetPiece(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        bool ignoreDead,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass100_0_o *v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_4D2E32C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass100_0_TypeInfo);
    sub_1C93AD4(&WarBoardPieceData_TypeInfo);
    byte_4D2E32C = 1;
  }
  v11 = (WarBoardData___c__DisplayClass100_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass100_0_TypeInfo);
  WarBoardData___c__DisplayClass100_0___ctor(v11, 0);
  if ( !v11 )
    sub_1C93D2C(v12, v13);
  v11->fields.ignoreDead = ignoreDead;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  v11->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v15,
                                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t WarBoardData__GetPieceDispPriority(WarBoardData_o *this, WarBoardPieceData_o *piece, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x1
  System_Object_array *AlivePieces; // x19
  System_Predicate_object__o *v16; // x20

  if ( (byte_4D2E34E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_FindIndex_WarBoardPieceData___);
    sub_1C93AD4(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass145_0_TypeInfo);
    byte_4D2E34E = 1;
  }
  v5 = sub_1C93D20(WarBoardData___c__DisplayClass145_0_TypeInfo);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 16) = piece;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)piece, v8, v9, v10, v11, v12, v13);
  AlivePieces = (System_Object_array *)WarBoardData__GetAlivePieces(this, v14);
  v16 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_WarBoardPieceData__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    0);
  return System_Array__FindIndex_object_(
           AlivePieces,
           (System_Predicate_T__o *)v16,
           (const MethodInfo_32A9E28 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_1C93D2C(this, method);
  return pieces->max_length;
}


WarBoardPieceData_o *WarBoardData__GetPieceOnDisplay(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  WarBoardPieceData_o *result; // x0
  WarBoardPieceData_o *v11; // x19
  UnityEngine_Object_o *pieceComponent; // x20
  __int64 v13; // x1
  UnityEngine_Component_o *gameObject; // x0
  bool activeInHierarchy; // w8

  if ( (byte_4D2E32F & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E32F = 1;
  }
  result = WarBoardData__GetPiece(this, forceId, groupId, index, 0, v5);
  if ( result )
  {
    v11 = result;
    if ( !result->fields._isDead_k__BackingField )
      return v11;
    pieceComponent = (UnityEngine_Object_o *)result->fields.pieceComponent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(pieceComponent, 0, 0) )
      return v11;
    gameObject = (UnityEngine_Component_o *)v11->fields.pieceComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
    {
      sub_1C93D2C(gameObject, v13);
    }
    activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0);
    result = 0;
    if ( activeInHierarchy )
      return v11;
  }
  return result;
}


int32_t WarBoardData__GetPiecePosition(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass99_0_o *v9; // x23
  __int64 UniqueIndex; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v13; // x20
  Il2CppObject *v14; // x0

  if ( (byte_4D2E32B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass99_0_TypeInfo);
    sub_1C93AD4(&WarBoardPieceData_TypeInfo);
    byte_4D2E32B = 1;
  }
  v9 = (WarBoardData___c__DisplayClass99_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass99_0_TypeInfo);
  WarBoardData___c__DisplayClass99_0___ctor(v9, 0);
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0);
  if ( !v9 )
    sub_1C93D2C(UniqueIndex, v11);
  v9->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    0);
  v14 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
          pieces,
          (System_Func_TSource__bool__o *)v13,
          (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v14 )
    return (int32_t)v14[4].klass;
  else
    return -1;
}


WarBoardPieceData_o *WarBoardData__GetPiece_38493796(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass101_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2E32D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass101_0_TypeInfo);
    byte_4D2E32D = 1;
  }
  v5 = (WarBoardData___c__DisplayClass101_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass101_0_TypeInfo);
  WarBoardData___c__DisplayClass101_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v9,
                                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_o *WarBoardData__GetPiece_38495500(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass102_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4D2E32E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass102_0_TypeInfo);
    byte_4D2E32E = 1;
  }
  v7 = (WarBoardData___c__DisplayClass102_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass102_0_TypeInfo);
  WarBoardData___c__DisplayClass102_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  v7->fields.uniqueIndex = uniqueIndex;
  v7->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    0);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v11,
                                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPieces(WarBoardData_o *this, int32_t forceId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass116_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4D2E338 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass116_0_TypeInfo);
    byte_4D2E338 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass116_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass116_0_TypeInfo);
  WarBoardData___c__DisplayClass116_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPieces_38551008(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w20
  WarBoardData___c__DisplayClass117_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  v4 = groupId;
  if ( (byte_4D2E339 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass117_0_TypeInfo);
    byte_4D2E339 = 1;
  }
  v7 = (WarBoardData___c__DisplayClass117_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass117_0_TypeInfo);
  WarBoardData___c__DisplayClass117_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  v7->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v12,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2E350 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C93AD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2E350 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               stageEntity->fields.playBgmId,
                               (const MethodInfo_34632C0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return (System_String_o *)entity[1].monitor;
LABEL_11:
    sub_1C93D2C(Instance, v4);
  }
  return 0;
}


System_Int32_array *WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_4D2E369 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4D2E369 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_1C93D2C(0, method);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardEventData_o *WarBoardData__GetPlayedEventData(WarBoardData_o *this, int32_t eventId, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass164_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listEvent; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4D2E359 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData__Find__);
    sub_1C93AD4(&System_Predicate_WarBoardEventData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass164_0_TypeInfo);
    byte_4D2E359 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass164_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass164_0_TypeInfo);
  WarBoardData___c__DisplayClass164_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.eventId = eventId,
        listEvent = (System_Collections_Generic_List_object__o *)this->fields.listEvent,
        v9 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_WarBoardEventData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          0),
        !listEvent) )
  {
    sub_1C93D2C(v6, v7);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_object___Find(
                                  listEvent,
                                  (System_Predicate_T__o *)v9,
                                  (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__104_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2E330 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E330 = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__104_0 = (System_Func_object__bool__o *)v3->static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__104_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__104_0, v6, Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__104_0,
      (int32_t)_9__104_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *_9__121_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D2E33D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E33D = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__121_0 = (System_Func_object__bool__o *)v3->static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__121_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__121_0, v6, Method_WarBoardData___c__GetPlayerPieces_b__121_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__121_0,
      (int32_t)_9__121_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  v14 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v14,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  System_Collections_Generic_List_int__o *Master_object; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  WarBoardCommonReleaseMaster_o *v8; // x21
  unsigned __int64 v9; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v11; // x22
  unsigned int v12; // w25
  __int64 v13; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  if ( (byte_4D2E364 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2E364 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_25;
  max_length = commonReleaseIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = (WarBoardCommonReleaseMaster_o *)Master_object;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        goto LABEL_26;
      if ( !v8 )
        goto LABEL_25;
      Master_object = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                  v8,
                                                                  commonReleaseIds->m_Items[v9],
                                                                  0);
      if ( !Master_object )
        goto LABEL_25;
      size = Master_object->fields._size;
      v11 = Master_object;
      if ( size >= 1 )
        break;
LABEL_22:
      LODWORD(max_length) = commonReleaseIds->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_23;
    }
    v12 = 0;
    while ( v12 < size )
    {
      v13 = *((_QWORD *)&v11->fields._syncRoot + (int)v12);
      if ( !v13 )
        goto LABEL_25;
      if ( (unsigned int)(*(_DWORD *)(v13 + 28) - 7) <= 1 )
      {
        if ( !v4 )
          goto LABEL_25;
        v6 = *(unsigned int *)(v13 + 40);
        items = v4->fields._items;
        v15 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          goto LABEL_25;
        v16 = v4->fields._size;
        if ( (unsigned int)v16 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            v6,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = v16 + 1;
          items->m_Items[v16] = v6;
        }
      }
      size = v11->fields._size;
      if ( (int)++v12 >= size )
        goto LABEL_22;
    }
LABEL_26:
    sub_1C93D34(Master_object);
  }
LABEL_23:
  v17 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
          (const MethodInfo_31C72A8 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                              v17,
                                                              (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_25:
    sub_1C93D2C(Master_object, v6);
  return System_Collections_Generic_List_int___ToArray(
           Master_object,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t WarBoardData__GetRandomGutsCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( localSaveData )
    return localSaveData->fields.randGutsCount;
  else
    return 0;
}


int32_t WarBoardData__GetRandomLogicCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( localSaveData )
    return localSaveData->fields.randLogicCount;
  else
    return 0;
}


WarBoardPieceData_array *WarBoardData__GetReinfocementsPieces(
        WarBoardData_o *this,
        int32_t stageReinfoId,
        int32_t reinfoIndex,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  const MethodInfo *v8; // x1
  WarBoardPieceData_array *AlivePieces; // x0
  WarBoardPieceData_o *v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int max_length; // w8
  WarBoardPieceData_array *v18; // x22
  unsigned int v19; // w23
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0

  if ( (byte_4D2E33E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    byte_4D2E33E = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v8);
  if ( !AlivePieces )
    goto LABEL_18;
  max_length = AlivePieces->max_length;
  v18 = AlivePieces;
  if ( max_length >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1C93D34(AlivePieces);
      v10 = v18->m_Items[v19];
      if ( !v10 )
        break;
      if ( v10->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v10->fields._ReinfoIndex_k__BackingField == reinfoIndex )
      {
        if ( !v7 )
          break;
        items = v7->fields._items;
        v21 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)v10,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v23[4] = (Il2CppClass *)v10;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v10, v11, v12, v13, v14, v15, v16);
        }
      }
      max_length = v18->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C93D2C(AlivePieces, v10);
  }
LABEL_16:
  if ( !v7 )
    goto LABEL_18;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v7,
                                      (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void WarBoardData__GetReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinfoDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass189_0_o *v8; // x27
  WarBoardStageReinforcementsEntity_o *ReinfocementsPieces; // x0
  __int64 v10; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  System_Collections_Generic_List_int__o *v13; // x23
  const MethodInfo *v14; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v16; // x25
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  __int64 v23; // x19
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  int32_t v26; // w2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v29; // x8
  struct System_Int32_array *v30; // x9
  __int64 v31; // x10
  _BOOL4 v32; // w20
  _BOOL4 IsOnce; // w27
  WarBoardData_o *v34; // x26
  const MethodInfo *v35; // x1
  __int64 v36; // x29
  __int64 v37; // x22
  System_Func_int__bool__o *v38; // x21
  System_Int32_array *v39; // x28
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  _BOOL4 v46; // w28
  System_Collections_Generic_List_T__o *v47; // x19
  System_Func_object__bool__o *v48; // x21
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  unsigned int max_length; // w8
  __int64 v52; // x8
  struct System_Int32_array *items; // x9
  _QWORD *v54; // x10
  __int64 size; // x11
  __int64 v56; // x9
  struct System_Int32_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  _QWORD *monitor; // x9
  __int64 v61; // x8
  __int64 v62; // x8
  _QWORD *v63; // x9
  __int64 forceId; // x10
  __int64 v65; // x20
  System_Int32_array *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  System_Int32_array *v73; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  __int64 v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  __int64 v89; // x8
  WarBoardData___c__DisplayClass189_0_Fields *v90; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_int__o *v91; // [xsp+10h] [xbp-70h]

  if ( (byte_4D2E36C & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&Method_BasicHelper_Any_ReinforcementsData___);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&System_Func_ReinforcementsData__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ReinforcementsData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&ReinforcementsData_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass189_0_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass189_1_TypeInfo);
    byte_4D2E36C = 1;
  }
  v8 = (WarBoardData___c__DisplayClass189_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass189_0_TypeInfo);
  WarBoardData___c__DisplayClass189_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_65;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !mst )
    goto LABEL_65;
  p_fields = &v8->fields;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          mst,
          &v8->fields.stageEntity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0) )
    return;
  v13 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v91 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v91,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  v90 = &v8->fields;
  if ( !p_fields->stageEntity )
    goto LABEL_65;
  DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v14);
  v16 = sub_1C93D20(WarBoardData___c__DisplayClass189_1_TypeInfo);
  WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v16, 0);
  if ( !v16 )
    goto LABEL_65;
  *(_QWORD *)(v16 + 24) = v8;
  v23 = v16 + 24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v16 + 24), (int32_t)v8, v17, v18, v19, v20, v21, v22);
  v25 = *(_QWORD *)(v16 + 24);
  *(_DWORD *)(v16 + 16) = 0;
  if ( !v25 )
    goto LABEL_65;
  v26 = 0;
  while ( 1 )
  {
    ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v25 + 16);
    if ( !ReinfocementsPieces )
      goto LABEL_65;
    reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
    if ( !reinforcementsIds )
      goto LABEL_65;
    if ( v26 >= SLODWORD(reinforcementsIds->max_length) )
      break;
    limitNums = ReinfocementsPieces->fields.limitNums;
    if ( !limitNums )
      goto LABEL_65;
    if ( (unsigned int)v26 >= LODWORD(limitNums->max_length) )
      goto LABEL_66;
    if ( limitNums->m_Items[v26] < 1 )
    {
      v32 = 0;
    }
    else
    {
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                     this,
                                                                     ReinfocementsPieces->fields.id,
                                                                     v26,
                                                                     v24);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      if ( !*(_QWORD *)v23 )
        goto LABEL_65;
      v29 = ReinfocementsPieces;
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v23 + 16LL);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v30 = ReinfocementsPieces->fields.limitNums;
      if ( !v30 )
        goto LABEL_65;
      v31 = *(int *)(v16 + 16);
      if ( (unsigned int)v31 >= LODWORD(v30->max_length) )
        goto LABEL_66;
      v32 = v30->m_Items[v31] <= v29->fields.forceId;
    }
    IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0);
    v34 = this;
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v35);
    v36 = *(_QWORD *)v23;
    if ( !*(_QWORD *)v23 )
      goto LABEL_65;
    v37 = v23;
    v38 = *(System_Func_int__bool__o **)(v36 + 24);
    v39 = (System_Int32_array *)ReinfocementsPieces;
    if ( !v38 )
    {
      v38 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
      System_Func_int__bool____ctor(
        v38,
        (Il2CppObject *)v36,
        Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
        0);
      *(_QWORD *)(v36 + 24) = v38;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v36 + 24), (int32_t)v38, v40, v41, v42, v43, v44, v45);
    }
    v46 = BasicHelper__Any_int__51960056(
            v39,
            (System_Func_T__bool__o *)v38,
            (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
    v47 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
    v48 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ReinforcementsData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v48,
      (Il2CppObject *)v16,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
      0);
    ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_object_(
                                                                   v47,
                                                                   (System_Func_T__bool__o *)v48,
                                                                   (const MethodInfo_318DB78 *)Method_BasicHelper_Any_ReinforcementsData___);
    if ( !DeploySquareIds )
      goto LABEL_65;
    v50 = *(_DWORD *)(v16 + 16);
    max_length = DeploySquareIds->max_length;
    if ( v50 >= max_length )
      goto LABEL_66;
    if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v46 || v32 || DeploySquareIds->m_Items[v50] < 0) )
    {
      if ( !*(_QWORD *)v37 )
        goto LABEL_65;
      v52 = *(_QWORD *)(*(_QWORD *)v37 + 16LL);
      if ( !v52 )
        goto LABEL_65;
      v23 = v37;
      this = v34;
      WarBoardData__SaveHoldReinforcements(v34, *(_DWORD *)(v52 + 20), v50, v49);
    }
    else
    {
      if ( !v13 )
        goto LABEL_65;
      items = v13->fields._items;
      v54 = Method_System_Collections_Generic_List_int__Add__;
      ++v13->fields._version;
      if ( !items )
        goto LABEL_65;
      size = v13->fields._size;
      this = v34;
      v23 = v37;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v13,
          v50,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
        max_length = DeploySquareIds->max_length;
      }
      else
      {
        v13->fields._size = size + 1;
        items->m_Items[size] = v50;
      }
      v56 = *(int *)(v16 + 16);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v91;
      if ( (unsigned int)v56 >= max_length )
LABEL_66:
        sub_1C93D34(ReinfocementsPieces);
      if ( !v91 )
        goto LABEL_65;
      v10 = (unsigned int)DeploySquareIds->m_Items[v56];
      v57 = v91->fields._items;
      v58 = Method_System_Collections_Generic_List_int__Add__;
      ++v91->fields._version;
      if ( !v57 )
        goto LABEL_65;
      v59 = v91->fields._size;
      if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v91,
          v10,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        v91->fields._size = v59 + 1;
        v57->m_Items[v59] = v10;
      }
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      monitor = ReinfocementsPieces[6].monitor;
      if ( !monitor )
        goto LABEL_65;
      v61 = *(int *)(v16 + 16);
      if ( (unsigned int)v61 >= LODWORD(DeploySquareIds->max_length) )
        goto LABEL_66;
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)monitor[29];
      if ( !ReinfocementsPieces )
        goto LABEL_65;
      v10 = (unsigned int)DeploySquareIds->m_Items[v61];
      v62 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId;
      v63 = Method_System_Collections_Generic_List_int__Add__;
      ++ReinfocementsPieces->fields.groupId;
      if ( !v62 )
        goto LABEL_65;
      forceId = ReinfocementsPieces->fields.forceId;
      if ( (unsigned int)forceId >= *(_DWORD *)(v62 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          v10,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        ReinfocementsPieces->fields.forceId = forceId + 1;
        *(_DWORD *)(v62 + 4 * forceId + 32) = v10;
      }
    }
    v25 = *(_QWORD *)(v16 + 24);
    v26 = *(_DWORD *)(v16 + 16) + 1;
    *(_DWORD *)(v16 + 16) = v26;
    if ( !v25 )
      goto LABEL_65;
  }
  if ( !v13 )
    goto LABEL_65;
  if ( v13->fields._size < 1 )
    return;
  v65 = sub_1C93D20(ReinforcementsData_TypeInfo);
  ReinforcementsData___ctor((ReinforcementsData_o *)v65, 0);
  if ( !v90->stageEntity )
    goto LABEL_65;
  if ( !v65 )
    goto LABEL_65;
  *(_DWORD *)(v65 + 16) = v90->stageEntity->fields.id;
  v66 = System_Collections_Generic_List_int___ToArray(
          v13,
          (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v65 + 24) = v66;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v65 + 24), (int32_t)v66, v67, v68, v69, v70, v71, v72);
  ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v91;
  if ( !v91
    || (v73 = System_Collections_Generic_List_int___ToArray(
                v91,
                (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__),
        *(_QWORD *)(v65 + 32) = v73,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v65 + 32), (int32_t)v73, v74, v75, v76, v77, v78, v79),
        (ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas) == 0)
    || (v86 = *(_QWORD *)&ReinfocementsPieces->fields.warBoardStageId,
        v87 = Method_System_Collections_Generic_List_ReinforcementsData__Add__,
        ++ReinfocementsPieces->fields.groupId,
        !v86) )
  {
LABEL_65:
    sub_1C93D2C(ReinfocementsPieces, v10);
  }
  v88 = ReinfocementsPieces->fields.forceId;
  if ( (unsigned int)v88 >= *(_DWORD *)(v86 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)ReinfocementsPieces,
      (Il2CppObject *)v65,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v89 = v86 + 8 * v88;
    ReinfocementsPieces->fields.forceId = v88 + 1;
    *(_QWORD *)(v89 + 32) = v65;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v89 + 32), v65, v80, v81, v82, v83, v84, v85);
  }
}


UnityEngine_Vector2_o WarBoardData__GetSaveCameraPos(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_1C93D2C(this, method);
  result.fields.x = localSaveData->fields.cameraPos.fields.x;
  result.fields.y = localSaveData->fields.cameraPos.fields.y;
  return result;
}


float WarBoardData__GetSaveCameraSize(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_1C93D2C(this, method);
  return localSaveData->fields.cameraSize;
}


WarBoardPieceData_array *WarBoardData__GetServantPieces(
        WarBoardData_o *this,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass106_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__bool__o *v9; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x0

  if ( (byte_4D2E332 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass106_0_TypeInfo);
    byte_4D2E332 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass106_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass106_0_TypeInfo);
  WarBoardData___c__DisplayClass106_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    0);
  v10 = System_Linq_Enumerable__Where_object_(
          pieces,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_object_(
                                      v10,
                                      (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardDataEntity_o *WarBoardData__GetServerData(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.serverData;
}


WarBoardSquareData_o *WarBoardData__GetSquare(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass128_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2E343 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
    sub_1C93AD4(&System_Func_WarBoardSquareData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass128_0_TypeInfo);
    byte_4D2E343 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass128_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass128_0_TypeInfo);
  WarBoardData___c__DisplayClass128_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    0);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                   squares,
                                   (System_Func_TSource__bool__o *)v9,
                                   (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *WarBoardData__GetSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.squares;
}


WarBoardUserServantData_o *WarBoardData__GetStageBossData(
        WarBoardData_o *this,
        int32_t stageBossIdx,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass153_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *svtInfo; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4D2E353 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_WarBoardUserServantData___);
    sub_1C93AD4(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass153_0_TypeInfo);
    byte_4D2E353 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass153_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass153_0_TypeInfo);
  WarBoardData___c__DisplayClass153_0___ctor(v5, 0);
  if ( !v5 || (v5->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0) )
    sub_1C93D2C(v6, v7);
  svtInfo = (System_Object_array *)serverData->fields.svtInfo;
  v10 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    0);
  return (WarBoardUserServantData_o *)BasicHelper__Find_object_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v10,
                                        (const MethodInfo_318E744 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


WarBoardTreasureData_o *WarBoardData__GetTreasure(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass137_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2E348 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_1C93AD4(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass137_0_TypeInfo);
    byte_4D2E348 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass137_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass137_0_TypeInfo);
  WarBoardData___c__DisplayClass137_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    0);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v9,
                                     (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  __int64 v4; // x0
  __int64 treasureId; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v9; // w21
  WarBoardTreasureData_SaveData_o *v10; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4D2E337 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2E337 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_18;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_18;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C93D34(v4);
      v10 = treasureSaves->m_Items[v9];
      if ( !v10 )
        break;
      if ( v10->fields.isUse )
      {
        if ( !v3 )
          break;
        treasureId = (unsigned int)v10->fields.treasureId;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            treasureId,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = treasureId;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C93D2C(v4, treasureId);
  }
LABEL_16:
  if ( !v3 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v3,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardTreasureData_array *WarBoardData__GetTreasures(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.treasures;
}


WarBoardUiData_o *WarBoardData__GetUiData(WarBoardData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  WarBoardData___c__DisplayClass193_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v9; // x20

  if ( (byte_4D2E370 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_1C93AD4(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass193_0_TypeInfo);
    byte_4D2E370 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass193_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass193_0_TypeInfo);
  WarBoardData___c__DisplayClass193_0___ctor(v5, 0);
  if ( !v5
    || (v5->fields.squareIndex = squareIndex,
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v9 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v9,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          0),
        !listUiData) )
  {
    sub_1C93D2C(v6, v7);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v9,
                               (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *WarBoardData__GetUiData_38583712(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *listUiData; // x19
  System_Predicate_object__o *v15; // x20

  if ( (byte_4D2E371 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__Find__);
    sub_1C93AD4(&System_Predicate_WarBoardUiData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass194_0_TypeInfo);
    byte_4D2E371 = 1;
  }
  v5 = sub_1C93D20(WarBoardData___c__DisplayClass194_0_TypeInfo);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = pieceIndex,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)pieceIndex, v8, v9, v10, v11, v12, v13),
        listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData,
        v15 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          0),
        !listUiData) )
  {
    sub_1C93D2C(v6, v7);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_object___Find(
                               listUiData,
                               (System_Predicate_T__o *)v15,
                               (const MethodInfo_387A004 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardTreasureData_o *WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass138_0_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_object__bool__o *v9; // x20

  if ( (byte_4D2E349 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
    sub_1C93AD4(&System_Func_WarBoardTreasureData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass138_0_TypeInfo);
    byte_4D2E349 = 1;
  }
  v5 = (WarBoardData___c__DisplayClass138_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass138_0_TypeInfo);
  WarBoardData___c__DisplayClass138_0___ctor(v5, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  v5->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v9 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    0);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v9,
                                     (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x19
  void *Master_object; // x0
  __int64 v5; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WarBoardEventScriptMaster_o *v7; // x20
  int32_t stageId; // w21
  int v9; // w8
  void *v10; // x21
  unsigned int v11; // w23
  __int64 v12; // x22
  __int64 v13; // x25
  __int64 v14; // x8
  unsigned __int64 v15; // x26
  struct System_Int32_array *items; // x9
  _QWORD *v17; // x10
  __int64 size; // x11
  __int64 v19; // x25
  __int64 v20; // x8
  unsigned __int64 v21; // x26
  int v22; // w8
  void *v23; // x22
  unsigned int v24; // w27
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0

  if ( (byte_4D2E363 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardEventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2E363 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_46;
  v7 = (WarBoardEventScriptMaster_o *)Master_object;
  stageId = serverData->fields.stageId;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_object )
    goto LABEL_46;
  Master_object = WarBoardEventMaster__GetListByStageId((WarBoardEventMaster_o *)Master_object, stageId, 0);
  if ( !Master_object )
    goto LABEL_46;
  v9 = *((_DWORD *)Master_object + 6);
  v10 = Master_object;
  if ( v9 >= 1 )
  {
    v11 = 0;
    do
    {
      if ( v11 >= v9 )
        goto LABEL_47;
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      if ( !v12 )
        goto LABEL_46;
      v13 = *(_QWORD *)(v12 + 56);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 24);
        if ( v14 )
        {
          if ( (int)v14 >= 1 )
          {
            v15 = 0;
            while ( v15 < (unsigned int)v14 )
            {
              v5 = *(unsigned int *)(v13 + 32 + 4 * v15);
              if ( (int)v5 >= 1 )
              {
                if ( !v3 )
                  goto LABEL_46;
                items = v3->fields._items;
                v17 = Method_System_Collections_Generic_List_int__Add__;
                ++v3->fields._version;
                if ( !items )
                  goto LABEL_46;
                size = v3->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v3,
                    v5,
                    *(const MethodInfo_385C978 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
                  LODWORD(v14) = *(_DWORD *)(v13 + 24);
                }
                else
                {
                  v3->fields._size = size + 1;
                  items->m_Items[size] = v5;
                }
              }
              if ( (__int64)++v15 >= (int)v14 )
                goto LABEL_24;
            }
LABEL_47:
            sub_1C93D34(Master_object);
          }
LABEL_24:
          v19 = *(_QWORD *)(v12 + 48);
          if ( !v19 )
            goto LABEL_46;
          v20 = *(_QWORD *)(v19 + 24);
          if ( (int)v20 >= 1 )
          {
            v21 = 0;
            while ( 1 )
            {
              if ( v21 >= (unsigned int)v20 )
                goto LABEL_47;
              if ( !v7 )
                goto LABEL_46;
              Master_object = WarBoardEventScriptMaster__GetList(v7, *(_DWORD *)(v19 + 4 * v21 + 32), 0);
              if ( !Master_object )
                goto LABEL_46;
              v22 = *((_DWORD *)Master_object + 6);
              v23 = Master_object;
              if ( v22 >= 1 )
                break;
LABEL_42:
              LODWORD(v20) = *(_DWORD *)(v19 + 24);
              if ( (__int64)++v21 >= (int)v20 )
                goto LABEL_43;
            }
            v24 = 0;
            while ( v24 < v22 )
            {
              Master_object = (void *)*((_QWORD *)v23 + (int)v24 + 4);
              if ( !Master_object )
                goto LABEL_46;
              if ( *((_DWORD *)Master_object + 6) == 2 )
              {
                Master_object = (void *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                          (WarBoardEventScriptEntity_o *)Master_object,
                                          0);
                if ( ((unsigned int)Master_object & 0x80000000) == 0 )
                {
                  if ( !v3 )
                    goto LABEL_46;
                  v25 = v3->fields._items;
                  v26 = Method_System_Collections_Generic_List_int__Add__;
                  ++v3->fields._version;
                  if ( !v25 )
                    goto LABEL_46;
                  v27 = v3->fields._size;
                  v5 = (unsigned int)Master_object;
                  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      v3,
                      (int32_t)Master_object,
                      *(const MethodInfo_385C978 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v3->fields._size = v27 + 1;
                    v25->m_Items[v27] = (int)Master_object;
                  }
                }
              }
              v22 = *((_DWORD *)v23 + 6);
              if ( (int)++v24 >= v22 )
                goto LABEL_42;
            }
            goto LABEL_47;
          }
        }
      }
LABEL_43:
      v9 = *((_DWORD *)v10 + 6);
    }
    while ( (int)++v11 < v9 );
  }
  v28 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
          (const MethodInfo_31C72A8 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToList_int_(
                    v28,
                    (const MethodInfo_31E8BD0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_object )
LABEL_46:
    sub_1C93D2C(Master_object, v5);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_object,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardWallData_o *WarBoardData__GetWall(
        WarBoardData_o *this,
        int32_t squareIndex,
        bool ignoreDestroy,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass140_0_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_object__bool__o *v11; // x20

  if ( (byte_4D2E34A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
    sub_1C93AD4(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass140_0_TypeInfo);
    byte_4D2E34A = 1;
  }
  v7 = (WarBoardData___c__DisplayClass140_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass140_0_TypeInfo);
  WarBoardData___c__DisplayClass140_0___ctor(v7, 0);
  if ( !v7 )
    sub_1C93D2C(v8, v9);
  v7->fields.squareIndex = squareIndex;
  v7->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardWallData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    0);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                 walls,
                                 (System_Func_TSource__bool__o *)v11,
                                 (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
}


int32_t WarBoardData__GetWallAttackCost(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.wallAttackCost;
  return (int)ActionPointEntity;
}


WarBoardWallData_array *WarBoardData__GetWalls(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.walls;
}


int32_t WarBoardData__GetWinCondGroup(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.winCondGroup;
}


int32_t WarBoardData__GetWinCondId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.winCondId;
}


bool WarBoardData__HasNewWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardManager_c *v3; // x0

  if ( (byte_4D2E35B & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardManager_TypeInfo);
    byte_4D2E35B = 1;
  }
  v3 = WarBoardManager_TypeInfo;
  if ( !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v3 = WarBoardManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, -1, 0) != this->fields.winCondId;
}


void WarBoardData__InitPrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *UseCommonReleaseIds; // x0
  const MethodInfo *v4; // x2
  System_Int32_array *PrevCondIds; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x24
  int32_t v10; // w23
  System_Collections_Generic_List_object__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4D2E365 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
    sub_1C93AD4(&WarBoardPrevCondData_TypeInfo);
    byte_4D2E365 = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v4);
  if ( !PrevCondIds )
    goto LABEL_14;
  max_length = PrevCondIds->max_length;
  v8 = PrevCondIds;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C93D34(PrevCondIds);
      v10 = v8->m_Items[v9];
      listPrevCond = (System_Collections_Generic_List_object__o *)this->fields.listPrevCond;
      v12 = (WarBoardPrevCondData_o *)sub_1C93D20(WarBoardPrevCondData_TypeInfo);
      WarBoardPrevCondData___ctor_38769848(v12, v10, -1, 0);
      if ( !listPrevCond )
        break;
      items = listPrevCond->fields._items;
      v20 = Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__;
      ++listPrevCond->fields._version;
      if ( !items )
        break;
      size = listPrevCond->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          listPrevCond,
          (Il2CppObject *)v12,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        listPrevCond->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v12;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 4), (int32_t)v12, v13, v14, v15, v16, v17, v18);
      }
      LODWORD(max_length) = v8->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        return;
    }
LABEL_14:
    sub_1C93D2C(PrevCondIds, v6);
  }
}


bool WarBoardData__IsBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass172_0_o *v9; // x23
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x0
  __int64 v11; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *object; // x0
  Il2CppObject *v16; // x21
  Il2CppObject *v17; // x20
  Il2CppObject *valuea; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2E35E & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C93AD4(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass172_0_TypeInfo);
    byte_4D2E35E = 1;
  }
  valuea = 0;
  v9 = (WarBoardData___c__DisplayClass172_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass172_0_TypeInfo);
  WarBoardData___c__DisplayClass172_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_17;
  v9->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_17;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v14 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_318E744 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return value == 0;
  v16 = object;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  if ( !monitor )
    goto LABEL_17;
  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
          monitor,
          (Il2CppObject *)key,
          (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)v16[1].monitor;
  if ( !monitor )
LABEL_17:
    sub_1C93D2C(monitor, v11);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          monitor,
          (Il2CppObject *)key,
          &valuea,
          (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v17 = valuea;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v17, 0) == value;
}


bool WarBoardData__IsDefenseTarget(
        WarBoardData_o *this,
        System_Int32_array **data,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  long double inited; // q0
  _QWORD *v13; // x23
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0
  System_Int32_array **v17; // x8
  System_Int32_array *v18; // x1
  WarBoardStageNpcMaster_o *stageNpcMaster; // x0
  __int64 v20; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Int32_array *DefenseTarget; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2E35C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    byte_4D2E35C = 1;
  }
  v13 = Method_System_Array_Empty_int___;
  entity = 0;
  v14 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v14 )
  {
    sub_1C69BC4(Method_System_Array_Empty_int___);
    v14 = v13[7];
  }
  v15 = *(_QWORD *)(v14 + 16);
  if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
    v15 = sub_1C69B68(inited);
  if ( !*(_DWORD *)(v15 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v15);
  v16 = *(_QWORD *)(v13[7] + 16LL);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C69B68(inited);
  v17 = *(System_Int32_array ***)(v16 + 184);
  v18 = *v17;
  *data = *v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)data,
    (int32_t)v18,
    forceId,
    groupId,
    (System_String_o *)method,
    v5,
    v6,
    v7);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    goto LABEL_20;
  stageNpcMaster = this->fields.stageNpcMaster;
  if ( !stageNpcMaster )
    goto LABEL_20;
  if ( WarBoardStageNpcMaster__TryGetEntity(stageNpcMaster, &entity, stageEntity->fields.id, forceId, groupId, 0) )
  {
    stageNpcMaster = (WarBoardStageNpcMaster_o *)entity;
    if ( !entity )
      goto LABEL_20;
    DefenseTarget = WarBoardStageNpcEntity__GetDefenseTarget(entity, 0);
    *data = DefenseTarget;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)data, (int32_t)DefenseTarget, v23, v24, v25, v26, v27, v28);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*data, 0);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_20:
    sub_1C93D2C(stageNpcMaster, v20);
  return ((*data)->max_length & 1) == 0;
}


bool WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_38551008; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21

  Pieces_38551008 = WarBoardData__GetPieces_38551008(this, 0, 0, v2);
  if ( !Pieces_38551008 )
LABEL_18:
    sub_1C93D2C(Pieces_38551008, v5);
  max_length = Pieces_38551008->max_length;
  v7 = Pieces_38551008;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
      sub_1C93D34(Pieces_38551008);
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_18;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_38551008 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0);
      if ( ((unsigned __int8)Pieces_38551008 & 1) == 0 )
      {
        Pieces_38551008 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0);
        if ( ((unsigned __int8)Pieces_38551008 & 1) != 0 )
          ++v10;
        else
          ++v9;
      }
    }
    max_length = v7->max_length;
    ++v8;
  }
  while ( v8 < max_length );
  if ( v10 )
    return !v9 && !WarBoardData__IsReachableWinConditions(this, v5);
  else
    return 1;
}


bool WarBoardData__IsPlayedEnemyHalfDeadMessage(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v7; // w25
  int v8; // w24
  int32_t i; // w20
  int32_t v10; // w21
  WarBoardPieceData_array *Pieces_38551008; // x0
  __int64 v12; // x1
  int max_length; // w8
  WarBoardPieceData_array *v14; // x22
  unsigned int v15; // w26
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x23
  int v18; // w8

  if ( this->fields.isPlayedHalfDeadMessage )
    return 1;
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v8 = 0;
    v7 = 0;
  }
  else
  {
    maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
    v7 = 0;
    v8 = 0;
    for ( i = 1; i <= maxForceId_k__BackingField; ++i )
    {
      if ( (maxGroupId_k__BackingField & 0x80000000) == 0 )
      {
        v10 = 0;
        do
        {
          Pieces_38551008 = WarBoardData__GetPieces_38551008(this, i, v10, v2);
          if ( !Pieces_38551008 )
            goto LABEL_28;
          max_length = Pieces_38551008->max_length;
          v14 = Pieces_38551008;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= max_length )
                sub_1C93D34(Pieces_38551008);
              v16 = &v14->obj.klass + (int)v15;
              v17 = v16[4];
              if ( !v17 )
                break;
              Pieces_38551008 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v16[4],
                                                             0);
              if ( ((unsigned __int8)Pieces_38551008 & 1) == 0 && !LOBYTE(v17->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_1C93D2C(Pieces_38551008, v12);
          }
LABEL_16:
          maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
          ++v10;
        }
        while ( v10 <= maxGroupId_k__BackingField );
        maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
      }
    }
  }
  if ( v7 >= 0 )
    v18 = v7;
  else
    v18 = v7 + 1;
  result = 1;
  if ( v8 > v18 >> 1 )
  {
    this->fields.isPlayedHalfDeadMessage = 1;
    return 0;
  }
  return result;
}


bool WarBoardData__IsReachableWinConditions(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  WarBoardCommonReleaseEntity_array *List; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v7; // x19
  int max_length; // w8
  unsigned int v9; // w21
  int32_t *v10; // x25
  int32_t v11; // w8
  int32_t v12; // w1
  const MethodInfo_34AE510 *v13; // x3
  bool v14; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v15; // x0
  WarBoardData___c_c *v16; // x0
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v18; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D2E328 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
    sub_1C93AD4(&System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E328 = 1;
  }
  if ( this->fields.winCondId < 0 )
    return 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_object )
    goto LABEL_33;
  List = WarBoardCommonReleaseMaster__GetList((WarBoardCommonReleaseMaster_o *)Master_object, this->fields.winCondId, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0) )
    return 0;
  v7 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v7,
    (const MethodInfo_34ADB50 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_33:
    sub_1C93D2C(Master_object, v4);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C93D34(Master_object);
      v10 = (int32_t *)List->m_Items[v9];
      if ( !v10 || !v7 )
        goto LABEL_33;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v7,
              v10[6],
              (const MethodInfo_34AE724 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_object = (Il2CppObject *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                        v7,
                                        v10[6],
                                        (const MethodInfo_34AE480 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
        break;
LABEL_25:
      max_length = List->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_26;
    }
    v11 = v10[7];
    if ( v11 == 1 )
    {
      v12 = v10[6];
      v13 = (const MethodInfo_34AE510 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v14 = v10[10] == 0;
    }
    else
    {
      if ( v11 != 5 )
      {
        v12 = v10[6];
        v13 = (const MethodInfo_34AE510 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v15 = v7;
        v14 = 0;
        goto LABEL_24;
      }
      v12 = v10[6];
      v13 = (const MethodInfo_34AE510 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v14 = v10[10] < 1;
    }
    v15 = v7;
LABEL_24:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v15, v12, v14, v13);
    goto LABEL_25;
  }
LABEL_26:
  v16 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v16 = WarBoardData___c_TypeInfo;
  }
  _9__95_0 = v16->static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = WarBoardData___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_1C93D20(System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v18,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__95_0 = _9__95_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__95_0,
      (int32_t)_9__95_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v7,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_31B0F7C *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
}


bool WarBoardData__IsReinforcementsApper(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass190_0_o *v9; // x24
  WarBoardStageReinforcementsMaster_o *Master_object; // x0
  __int64 v11; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  void **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v15; // x1
  System_Int32_array *PlayReinforcements; // x25
  System_Func_int__bool__o *v17; // x26
  const MethodInfo *v18; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v20; // w9
  bool v21; // w23
  const MethodInfo *v22; // x3
  void *v23; // x8
  __int64 v24; // x9
  WarBoardStageReinforcementsMaster_o *v25; // x21
  int32_t v26; // w22
  int32_t v27; // w9
  __int64 v28; // x9
  __int64 v29; // x9
  _BOOL4 v30; // w9

  if ( (byte_4D2E36D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass190_0_TypeInfo);
    byte_4D2E36D = 1;
  }
  v9 = (WarBoardData___c__DisplayClass190_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass190_0_TypeInfo);
  WarBoardData___c__DisplayClass190_0___ctor(v9, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !v9 )
    goto LABEL_32;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Master_object )
    goto LABEL_32;
  p_entity = (void **)&v9->fields.entity;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          Master_object,
          &v9->fields.entity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0) )
    return 0;
  Master_object = (WarBoardStageReinforcementsMaster_o *)*p_entity;
  if ( !*p_entity )
    goto LABEL_32;
  IsOnce = WarBoardStageReinforcementsEntity__IsOnce((WarBoardStageReinforcementsEntity_o *)Master_object, 0);
  PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v15);
  v17 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
    0);
  Master_object = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__51960056(
                                                           PlayReinforcements,
                                                           (System_Func_T__bool__o *)v17,
                                                           (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
  entity = v9->fields.entity;
  if ( !entity )
    goto LABEL_32;
  v20 = IsOnce & (unsigned __int8)Master_object;
  v21 = 0;
  if ( (v20 & 1) != 0 || entity->fields.forceId != forceId || entity->fields.groupId != groupId )
    return v21;
  Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                           this,
                                                           entity->fields.squareIds,
                                                           v18);
  v23 = *p_entity;
  if ( !*p_entity || (v24 = *((_QWORD *)v23 + 5)) == 0 )
LABEL_32:
    sub_1C93D2C(Master_object, v11);
  v25 = Master_object;
  v26 = 0;
  while ( 1 )
  {
    v27 = *(_DWORD *)(v24 + 24);
    v21 = v26 < v27;
    if ( v26 >= v27 )
      return v21;
    v28 = *((_QWORD *)v23 + 8);
    if ( !v28 )
      goto LABEL_32;
    if ( (unsigned int)v26 >= *(_DWORD *)(v28 + 24) )
LABEL_35:
      sub_1C93D34(Master_object);
    if ( *(int *)(v28 + 4LL * v26 + 32) < 1 )
    {
      v30 = 0;
      if ( !v25 )
        goto LABEL_32;
    }
    else
    {
      Master_object = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                               this,
                                                               *((_DWORD *)v23 + 5),
                                                               v26,
                                                               v22);
      if ( !Master_object )
        goto LABEL_32;
      v23 = *p_entity;
      if ( !*p_entity )
        goto LABEL_32;
      v29 = *((_QWORD *)v23 + 8);
      if ( !v29 )
        goto LABEL_32;
      if ( (unsigned int)v26 >= *(_DWORD *)(v29 + 24) )
        goto LABEL_35;
      v30 = *(_DWORD *)(v29 + 4LL * v26 + 32) <= SLODWORD(Master_object->fields._MasterName_k__BackingField);
      if ( !v25 )
        goto LABEL_32;
    }
    if ( (unsigned int)v26 >= LODWORD(v25->fields._MasterName_k__BackingField) )
      goto LABEL_35;
    if ( !v30 && (*(&v25->fields.revision + v26) & 0x80000000) == 0 )
      return v21;
    v24 = *((_QWORD *)v23 + 5);
    ++v26;
    if ( !v24 )
      goto LABEL_32;
  }
}


bool WarBoardData__IsWin(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  __int64 v6; // x1
  bool v7; // w20
  System_Type_o *Type; // x21
  Il2CppType *v9; // x22
  System_Type_o *TypeFromHandle; // x1
  bool v11; // w19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2E329 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&System_Type_TypeInfo);
    sub_1C93AD4(&WarBoardChangeWinConditionTask_var);
    byte_4D2E329 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0, 0);
  Instance = (Il2CppObject *)System_Linq_Enumerable__Any_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                               (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_20;
    WarBoardManager__AddTask_38679444((WarBoardManager_o *)Instance, 0, EventTasks, 0);
  }
  if ( !EventTasks )
LABEL_20:
    sub_1C93D2C(Instance, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)EventTasks,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  v14 = v13;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__);
    if ( !v7 )
      break;
    if ( !v14.fields._current )
      sub_1C93D2C(0, v6);
    Type = System_Object__GetType(v14.fields._current, 0);
    v9 = WarBoardChangeWinConditionTask_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    TypeFromHandle = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)v9, 0);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0) )
    {
      this->fields.winCondGroup = -1;
      break;
    }
  }
  v11 = !v7;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v11;
}


void WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  WarBoardCommonReleaseMaster_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x21
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D2E367 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    byte_4D2E367 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_1C93D2C(Master_object, v4);
  v5 = (WarBoardCommonReleaseMaster_o *)Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)this->fields.listPrevCond,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v12 = v11;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v12,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v6 )
      break;
    current = v12.fields._current;
    if ( !v12.fields._current )
      sub_1C93D2C(v6, v7);
    if ( (HIDWORD(v12.fields._current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v5 )
        sub_1C93D2C(v6, v7);
      if ( WarBoardCommonReleaseMaster__IsOpen(v5, (int32_t)v12.fields._current[1].klass, 0) )
      {
        serverData = this->fields.serverData;
        if ( serverData )
          turn = serverData->fields.turn;
        else
          turn = 0;
        WarBoardPrevCondData__SetClearedTurn((WarBoardPrevCondData_o *)current, turn, 0);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
}


WarBoardData_BattleParticipantInfo_o *WarBoardData__LoadBattleParticipantInfo(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(this->fields.latestBattlePieceUniqueIndexes, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardData__LocalSave(WarBoardData_o *this, bool onBoardSkillUpdate, const MethodInfo *method)
{
  WarBoardData_o *v4; // x19
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  WarBoardData_o **p_localSaveData; // x23
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x21
  int max_length; // w8
  unsigned int v9; // w22
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *actionPointEntityDict; // x21
  int entries; // w8
  unsigned int v12; // w22
  struct WarBoardPieceData_array *pieces; // x21
  int v14; // w8
  unsigned int v15; // w22
  struct WarBoardSquareData_array *squares; // x21
  int v17; // w8
  unsigned int v18; // w22
  struct WarBoardSquareData_array *condSquares; // x21
  int v20; // w8
  unsigned int v21; // w22
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v23; // x22
  WarBoardData_o *v24; // x21
  struct WarBoardPieceData_array *v25; // x8
  struct WarBoardPieceData_array *v26; // x8
  WarBoardData_o *v27; // x22
  float ZoomSize; // s0
  WarBoardData_o *v29; // x22
  int npcEntityDict_high; // w8
  WarBoardData_o *v31; // x20
  System_Collections_Generic_List_object__o *v32; // x20
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v34; // x21
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  WarBoardData_o *v47; // x21
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_object__o *v68; // x20
  Il2CppObject *v69; // x22
  WarBoardPrevCondData_SaveData_o *v70; // x21
  __int64 v71; // x0
  __int64 v72; // x1
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  struct System_Object_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  Il2CppClass **v82; // x0
  WarBoardData_o *v83; // x21
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  System_Collections_Generic_List_object__o *v90; // x20
  Il2CppObject *v91; // x22
  HoldReinforcementsData_SaveData_o *v92; // x21
  __int64 v93; // x0
  __int64 v94; // x1
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  WarBoardData_o *v105; // x21
  int32_t v106; // w2
  int32_t v107; // w3
  System_String_o *v108; // x4
  int32_t v109; // w5
  int64_t v110; // x6
  System_String_o *v111; // x7
  GrandQuestFolderBoardItem_o *v112; // x20
  int32_t v113; // w2
  int32_t v114; // w3
  System_String_o *v115; // x4
  int32_t v116; // w5
  int64_t v117; // x6
  System_String_o *v118; // x7
  System_Collections_Generic_List_object__o *v119; // x20
  Il2CppObject *v120; // x22
  WarBoardUiData_SaveData_o *v121; // x21
  __int64 v122; // x0
  __int64 v123; // x1
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  WarBoardData_o *v134; // x21
  int32_t v135; // w2
  int32_t v136; // w3
  System_String_o *v137; // x4
  int32_t v138; // w5
  int64_t v139; // x6
  System_String_o *v140; // x7
  struct WarBoardDataEntity_o *v141; // x8
  unsigned int v142; // w0
  WarBoardData_o *v143; // x21
  int v144; // w20
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  unsigned __int64 v151; // x22
  __int64 v152; // x24
  __int64 v153; // x25
  struct WarBoardDataEntity_o *v154; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x26
  WarBoardSquareIndexData_o *v157; // x21
  WarBoardSquareIndexData_SaveData_o *v158; // x20
  int32_t v159; // w2
  int32_t v160; // w3
  System_String_o *v161; // x4
  int32_t v162; // w5
  int64_t v163; // x6
  System_String_o *v164; // x7
  struct WarBoardDataEntity_o *v165; // x8
  unsigned int v166; // w0
  WarBoardData_o *v167; // x21
  int v168; // w20
  int32_t v169; // w2
  int32_t v170; // w3
  System_String_o *v171; // x4
  int32_t v172; // w5
  int64_t v173; // x6
  System_String_o *v174; // x7
  int32_t v175; // w2
  int32_t v176; // w3
  System_String_o *v177; // x4
  int32_t v178; // w5
  int64_t v179; // x6
  System_String_o *v180; // x7
  unsigned __int64 v181; // x22
  __int64 v182; // x24
  __int64 v183; // x25
  struct WarBoardDataEntity_o *v184; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x26
  WarBoardBossBattleData_o *v187; // x21
  WarBoardBossBattleData_SaveData_o *v188; // x20
  const MethodInfo *v189; // x2
  int32_t v190; // w2
  int32_t v191; // w3
  System_String_o *v192; // x4
  int32_t v193; // w5
  int64_t v194; // x6
  System_String_o *v195; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  WarBoardData_o *v197; // x8
  MiniMessagePack_MiniMessagePacker_o *v198; // x19
  System_Byte_array *v199; // x19
  WarBoardData_c *v200; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v202; // x19
  __int64 v203; // x0
  System_Collections_Generic_List_Enumerator_object__o v204; // [xsp+8h] [xbp-F8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v205; // [xsp+20h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v206; // [xsp+40h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v207; // [xsp+60h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v208; // [xsp+80h] [xbp-80h] BYREF

  v4 = this;
  if ( (byte_4D2E320 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&EncryptedPlayerPrefs_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
    sub_1C93AD4(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C93AD4(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardBossBattleData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardUiData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardEventData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_1C93AD4(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    this = (WarBoardData_o *)sub_1C93AD4(&WarBoardData_TypeInfo);
    byte_4D2E320 = 1;
  }
  memset(&v208, 0, sizeof(v208));
  memset(&v207, 0, sizeof(v207));
  memset(&v206, 0, sizeof(v206));
  memset(&v205, 0, sizeof(v205));
  p_localSaveData = (WarBoardData_o **)&v4->fields.localSaveData;
  localSaveData = v4->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_129;
  pieceSaves = localSaveData->fields.pieceSaves;
  if ( !pieceSaves )
    goto LABEL_129;
  max_length = pieceSaves->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( v9 < max_length )
    {
      this = (WarBoardData_o *)pieceSaves->m_Items[v9];
      if ( !this )
        goto LABEL_129;
      WarBoardPieceData_SaveData__Save((WarBoardPieceData_SaveData_o *)this, 0);
      max_length = pieceSaves->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_10;
    }
LABEL_130:
    sub_1C93D34(this);
  }
LABEL_10:
  if ( !*p_localSaveData )
    goto LABEL_129;
  actionPointEntityDict = (*p_localSaveData)->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    goto LABEL_129;
  entries = (int)actionPointEntityDict->fields._entries;
  if ( entries >= 1 )
  {
    v12 = 0;
    while ( v12 < entries )
    {
      this = (WarBoardData_o *)*((_QWORD *)&actionPointEntityDict->fields._count + (int)v12);
      if ( !this )
        goto LABEL_129;
      WarBoardItemData_SaveData__Save((WarBoardItemData_SaveData_o *)this, 0);
      entries = (int)actionPointEntityDict->fields._entries;
      if ( (int)++v12 >= entries )
        goto LABEL_17;
    }
    goto LABEL_130;
  }
LABEL_17:
  if ( !*p_localSaveData )
    goto LABEL_129;
  pieces = (*p_localSaveData)->fields.pieces;
  if ( !pieces )
    goto LABEL_129;
  v14 = pieces->max_length;
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( v15 < v14 )
    {
      this = (WarBoardData_o *)pieces->m_Items[v15];
      if ( !this )
        goto LABEL_129;
      WarBoardTreasureData_SaveData__Save((WarBoardTreasureData_SaveData_o *)this, 0);
      v14 = pieces->max_length;
      if ( (int)++v15 >= v14 )
        goto LABEL_24;
    }
    goto LABEL_130;
  }
LABEL_24:
  if ( !*p_localSaveData )
    goto LABEL_129;
  squares = (*p_localSaveData)->fields.squares;
  if ( !squares )
    goto LABEL_129;
  v17 = squares->max_length;
  if ( v17 >= 1 )
  {
    v18 = 0;
    while ( v18 < v17 )
    {
      this = (WarBoardData_o *)squares->m_Items[v18];
      if ( !this )
        goto LABEL_129;
      WarBoardWallData_SaveData__Save((WarBoardWallData_SaveData_o *)this, 0);
      v17 = squares->max_length;
      if ( (int)++v18 >= v17 )
        goto LABEL_31;
    }
    goto LABEL_130;
  }
LABEL_31:
  if ( !*p_localSaveData )
    goto LABEL_129;
  condSquares = (*p_localSaveData)->fields.condSquares;
  if ( !condSquares )
    goto LABEL_129;
  v20 = condSquares->max_length;
  if ( v20 >= 1 )
  {
    v21 = 0;
    while ( v21 < v20 )
    {
      this = (WarBoardData_o *)condSquares->m_Items[v21];
      if ( !this )
        goto LABEL_129;
      WarBoardSquareData_SaveData__Save((WarBoardSquareData_SaveData_o *)this, 0);
      v20 = condSquares->max_length;
      if ( (int)++v21 >= v20 )
        goto LABEL_38;
    }
    goto LABEL_130;
  }
LABEL_38:
  this = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  serverData = v4->fields.serverData;
  if ( !serverData )
    goto LABEL_129;
  v23 = v4->fields.localSaveData;
  if ( !v23 )
    goto LABEL_129;
  v24 = this;
  v23->fields.turn = serverData->fields.turn;
  *(_QWORD *)&v23->fields.turnForceId = *(_QWORD *)&serverData->fields.turnForceId;
  if ( !this )
    goto LABEL_129;
  v25 = this->fields.pieces;
  if ( !v25 )
    goto LABEL_129;
  this = (WarBoardData_o *)v25->m_Items[5];
  if ( !this )
    goto LABEL_129;
  v23->fields.cameraPos = MapScroll__GetScrlPos((MapScroll_o *)this, 0);
  v26 = v24->fields.pieces;
  if ( !v26 )
    goto LABEL_129;
  this = (WarBoardData_o *)v26->m_Items[6];
  if ( !this )
    goto LABEL_129;
  v27 = *p_localSaveData;
  ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)this, 0);
  if ( !v27 )
    goto LABEL_129;
  *(float *)&v27->fields.treasures = ZoomSize;
  v29 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  npcEntityDict_high = HIDWORD(v24[3].fields.npcEntityDict);
  BYTE4(v29->fields.effects) = onBoardSkillUpdate;
  HIDWORD(v29->fields.treasures) = npcEntityDict_high;
  LODWORD(v29->fields.serverData) = BattleRandom__GetLogicCount(0);
  v31 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetGutsCount(0);
  if ( !v31 )
    goto LABEL_129;
  HIDWORD(v31->fields.serverData) = (_DWORD)this;
  if ( !*p_localSaveData )
    goto LABEL_129;
  LOBYTE((*p_localSaveData)->fields._bgAnimationInfo_k__BackingField) = v4->fields.isPlayedHalfDeadMessage;
  v32 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v204,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v208 = v204;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v208,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v208.fields._current;
    v34 = (WarBoardEventData_SaveData_o *)sub_1C93D20(WarBoardEventData_SaveData_TypeInfo);
    WarBoardEventData_SaveData___ctor_38733380(v34, (WarBoardEventData_o *)current, 0);
    if ( !v32 )
      sub_1C93D2C(v35, v36);
    items = v32->fields._items;
    v44 = Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__;
    ++v32->fields._version;
    if ( !items )
      sub_1C93D2C(v35, v36);
    size = v32->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        (Il2CppObject *)v34,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
    }
    else
    {
      v46 = &items->obj.klass + size;
      v32->fields._size = size + 1;
      v46[4] = (Il2CppClass *)v34;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v34, v37, v38, v39, v40, v41, v42);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v208,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( !v32 )
    goto LABEL_129;
  v47 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v32,
                             (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v47 )
    goto LABEL_129;
  v47->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->fields.localSaveData, (int32_t)this, v48, v49, v50, v51, v52, v53);
  this = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  this->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.listUiData,
    (int32_t)latestPieceActionSquareIndexes,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_129;
  latestBattlePieceUniqueIndexes = v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.isPlayedHalfDeadMessage,
    (int32_t)latestBattlePieceUniqueIndexes,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v68 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v68,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v204,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v207 = v204;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v207,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v69 = v207.fields._current;
    v70 = (WarBoardPrevCondData_SaveData_o *)sub_1C93D20(WarBoardPrevCondData_SaveData_TypeInfo);
    WarBoardPrevCondData_SaveData___ctor_38733440(v70, (WarBoardPrevCondData_o *)v69, 0);
    if ( !v68 )
      sub_1C93D2C(v71, v72);
    v79 = v68->fields._items;
    v80 = Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__;
    ++v68->fields._version;
    if ( !v79 )
      sub_1C93D2C(v71, v72);
    v81 = v68->fields._size;
    if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v68,
        (Il2CppObject *)v70,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
    }
    else
    {
      v82 = &v79->obj.klass + v81;
      v68->fields._size = v81 + 1;
      v82[4] = (Il2CppClass *)v70;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v82 + 4), (int32_t)v70, v73, v74, v75, v76, v77, v78);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v207,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( !v68 )
    goto LABEL_129;
  v83 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v68,
                             (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v83 )
    goto LABEL_129;
  v83->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v83->fields.listEvent, (int32_t)this, v84, v85, v86, v87, v88, v89);
  v90 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v90,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v204,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v206 = v204;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v206,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v91 = v206.fields._current;
    v92 = (HoldReinforcementsData_SaveData_o *)sub_1C93D20(HoldReinforcementsData_SaveData_TypeInfo);
    HoldReinforcementsData_SaveData___ctor_38733492(v92, (HoldReinforcementsData_o *)v91, 0);
    if ( !v90 )
      sub_1C93D2C(v93, v94);
    v101 = v90->fields._items;
    v102 = Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__;
    ++v90->fields._version;
    if ( !v101 )
      sub_1C93D2C(v93, v94);
    v103 = v90->fields._size;
    if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v90,
        (Il2CppObject *)v92,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
    }
    else
    {
      v104 = &v101->obj.klass + v103;
      v90->fields._size = v103 + 1;
      v104[4] = (Il2CppClass *)v92;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v104 + 4), (int32_t)v92, v95, v96, v97, v98, v99, v100);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v206,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( !v90 )
    goto LABEL_129;
  v105 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v90,
                             (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v105 )
    goto LABEL_129;
  *(_QWORD *)&v105->fields.winCondId = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v105->fields.winCondId, (int32_t)this, v106, v107, v108, v109, v110, v111);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_129;
  v112 = (GrandQuestFolderBoardItem_o *)v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v112 )
    goto LABEL_129;
  v112[1].klass = (GrandQuestFolderBoardItem_c *)this;
  sub_1C93A78(v112 + 1, (int32_t)this, v113, v114, v115, v116, v117, v118);
  v119 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v119,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_129;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v204,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v205 = v204;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v205,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v120 = v205.fields._current;
    v121 = (WarBoardUiData_SaveData_o *)sub_1C93D20(WarBoardUiData_SaveData_TypeInfo);
    WarBoardUiData_SaveData___ctor_38733552(v121, (WarBoardUiData_o *)v120, 0);
    if ( !v119 )
      sub_1C93D2C(v122, v123);
    v130 = v119->fields._items;
    v131 = Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__;
    ++v119->fields._version;
    if ( !v130 )
      sub_1C93D2C(v122, v123);
    v132 = v119->fields._size;
    if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v119,
        (Il2CppObject *)v121,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
    }
    else
    {
      v133 = &v130->obj.klass + v132;
      v119->fields._size = v132 + 1;
      v133[4] = (Il2CppClass *)v121;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v133 + 4), (int32_t)v121, v124, v125, v126, v127, v128, v129);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v205,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !v119 )
    goto LABEL_129;
  v134 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_object___ToArray(
                             v119,
                             (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v134
    || (v134->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&v134->fields.latestBattlePieceUniqueIndexes,
          (int32_t)this,
          v135,
          v136,
          v137,
          v138,
          v139,
          v140),
        (v141 = v4->fields.serverData) == 0)
    || (v142 = System_Linq_Enumerable__Count_object_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v141->fields.squareIndexInfo,
                 (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v143 = *p_localSaveData,
        v144 = v142,
        this = (WarBoardData_o *)sub_1C93B7C(WarBoardSquareIndexData_SaveData___TypeInfo, v142),
        !v143) )
  {
LABEL_129:
    sub_1C93D2C(this, onBoardSkillUpdate);
  }
  v143->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v143->fields.reinforcementsSaveList,
    (int32_t)this,
    v145,
    v146,
    v147,
    v148,
    v149,
    v150);
  if ( v144 >= 1 )
  {
    v151 = 0;
    v152 = (unsigned int)v144;
    v153 = 8;
    while ( *p_localSaveData )
    {
      v154 = v4->fields.serverData;
      if ( !v154 )
        break;
      squareIndexInfo = v154->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v151 >= LODWORD(squareIndexInfo->max_length) )
        goto LABEL_130;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v157 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v153 * 4);
      v158 = (WarBoardSquareIndexData_SaveData_o *)sub_1C93D20(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_38733632(v158, v157, 0);
      if ( !reinforcementsSaveList )
        break;
      if ( v158 )
      {
        this = (WarBoardData_o *)sub_1C93C10(v158, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_139:
          v203 = sub_1C93D50();
          sub_1C93BFC(v203, 0);
        }
      }
      if ( v151 >= reinforcementsSaveList[6] )
        goto LABEL_130;
      *(_QWORD *)&reinforcementsSaveList[v153] = v158;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&reinforcementsSaveList[v153],
        (int32_t)v158,
        v159,
        v160,
        v161,
        v162,
        v163,
        v164);
      ++v151;
      v153 += 2;
      if ( v152 == v151 )
        goto LABEL_106;
    }
    goto LABEL_129;
  }
LABEL_106:
  v165 = v4->fields.serverData;
  if ( !v165 )
    goto LABEL_129;
  v166 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v165->fields.bossBattleInfo,
           (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v167 = *p_localSaveData;
  v168 = v166;
  this = (WarBoardData_o *)sub_1C93B7C(WarBoardBossBattleData_SaveData___TypeInfo, v166);
  if ( !v167 )
    goto LABEL_129;
  v167->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v167->fields.playedStageReinforcementsList,
    (int32_t)this,
    v169,
    v170,
    v171,
    v172,
    v173,
    v174);
  this = *p_localSaveData;
  if ( v168 >= 1 )
  {
    v181 = 0;
    v182 = (unsigned int)v168;
    v183 = 32;
    while ( this )
    {
      v184 = v4->fields.serverData;
      if ( !v184 )
        break;
      bossBattleInfo = v184->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v181 >= LODWORD(bossBattleInfo->max_length) )
        goto LABEL_130;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v187 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v183);
      v188 = (WarBoardBossBattleData_SaveData_o *)sub_1C93D20(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_38529920(v188, v187, v189);
      if ( !playedStageReinforcementsList )
        break;
      if ( v188 )
      {
        this = (WarBoardData_o *)sub_1C93C10(v188, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_139;
      }
      if ( v181 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_130;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v183) = (System_Collections_Generic_List_int__c *)v188;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)((char *)playedStageReinforcementsList + v183),
        (int32_t)v188,
        v190,
        v191,
        v192,
        v193,
        v194,
        v195);
      this = *p_localSaveData;
      ++v181;
      v183 += 8;
      if ( v182 == v181 )
        goto LABEL_119;
    }
    goto LABEL_129;
  }
LABEL_119:
  if ( !this )
    goto LABEL_129;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.listPrevCond,
    (int32_t)bgAnimationInfo_k__BackingField,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180);
  v197 = *p_localSaveData;
  if ( !*p_localSaveData )
    goto LABEL_129;
  v197->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  LOBYTE(v197->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsContinue_k__BackingField;
  BYTE1(v197->fields._ContinueConsumeType_k__BackingField) = v4->fields._IsNextTurn_k__BackingField;
  v197->fields._CurrentPartyCost_k__BackingField = v4->fields.localSaveTiming;
  v198 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C93D20(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v198, 0);
  if ( !v198 )
    goto LABEL_129;
  v199 = MiniMessagePack_MiniMessagePacker__PackClass(v198, (Il2CppObject *)*p_localSaveData, 0);
  v200 = WarBoardData_TypeInfo;
  if ( !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v200 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v200->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v202 = System_Convert__ToBase64String(v199, 0);
  if ( !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v202, 0);
}


void WarBoardData__SaveHoldReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        int32_t index,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass187_0_o *v7; // x20
  System_Collections_Generic_List_object__o *v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_object__bool__o *v11; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w21
  int32_t v15; // w22
  HoldReinforcementsData_o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D2E36A & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_HoldReinforcementsData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__);
    sub_1C93AD4(&System_Func_HoldReinforcementsData__bool__TypeInfo);
    sub_1C93AD4(&HoldReinforcementsData_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass187_0_TypeInfo);
    byte_4D2E36A = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v7 = (WarBoardData___c__DisplayClass187_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass187_0_TypeInfo);
  WarBoardData___c__DisplayClass187_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_20;
  v7->fields.stageReinforcementsId = stageReinforcementsId;
  v7->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v11 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_HoldReinforcementsData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    0);
  if ( !BasicHelper__Any_object_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v11,
          (const MethodInfo_318DB78 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v14 = v7->fields.stageReinforcementsId;
    v15 = v7->fields.index;
    v16 = (HoldReinforcementsData_o *)sub_1C93D20(HoldReinforcementsData_TypeInfo);
    HoldReinforcementsData___ctor_38770152(v16, v14, v15, 1, 0);
    v8 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
    if ( v8 )
    {
      items = v8->fields._items;
      v24 = Method_System_Collections_Generic_List_HoldReinforcementsData__Add__;
      ++v8->fields._version;
      if ( items )
      {
        size = v8->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v16,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v26[4] = (Il2CppClass *)v16;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v16, v17, v18, v19, v20, v21, v22);
        }
        return;
      }
    }
LABEL_20:
    sub_1C93D2C(v8, v9);
  }
  v8 = (System_Collections_Generic_List_object__o *)this->fields.reinforcementsSaveList;
  if ( !v8 )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    v8,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v28,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v12 )
      break;
    if ( !v28.fields._current )
      sub_1C93D2C(v12, v13);
    if ( LODWORD(v28.fields._current[1].klass) == v7->fields.stageReinforcementsId
      && HIDWORD(v28.fields._current[1].klass) == v7->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v28.fields._current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v28,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardData__SavePlayReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10

  if ( (byte_4D2E368 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    byte_4D2E368 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList
    || (items = playedStageReinforcementsList->fields._items,
        v7 = Method_System_Collections_Generic_List_int__Add__,
        ++playedStageReinforcementsList->fields._version,
        !items) )
  {
    sub_1C93D2C(playedStageReinforcementsList, *(_QWORD *)&stageReinforcementsId);
  }
  size = playedStageReinforcementsList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      playedStageReinforcementsList,
      stageReinforcementsId,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    playedStageReinforcementsList->fields._size = size + 1;
    items->m_Items[size] = stageReinforcementsId;
  }
}


void WarBoardData__SearchInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o **rangeSearches,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass125_0_o *v8; // x21
  Il2CppObject *v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v13; // x24
  WarBoardSquareData_o *v14; // x22
  System_Collections_Generic_List_object__o *v15; // x24
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Func_object__bool__o *v22; // x25
  System_Collections_Generic_List_object__o *v23; // x24
  int32_t v24; // w26
  WarBoardData_SquareRangeSearch_o *v25; // x25
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x0
  struct System_Int32_array *linkedSquares; // x8
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v38; // x28
  __int64 v39; // x29
  __int64 v40; // x24
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  __int64 v47; // x23
  struct System_Int32_array *v48; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v49; // x25
  System_Func_object__bool__o *v50; // x26
  const MethodInfo *v51; // x4
  System_Collections_Generic_List_T__o *v52; // x25
  System_Func_object__bool__o *v53; // x26
  struct System_Int32_array *v54; // x8

  if ( (byte_4D2E341 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    sub_1C93AD4(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
    sub_1C93AD4(&WarBoardData_SquareRangeSearch_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass125_0_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass125_1_TypeInfo);
    byte_4D2E341 = 1;
  }
  v8 = (WarBoardData___c__DisplayClass125_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass125_0_TypeInfo);
  WarBoardData___c__DisplayClass125_0___ctor(v8, 0);
  if ( !v8 )
    goto LABEL_29;
  v8->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v11);
  if ( Square )
  {
    v13 = *rangeSearches;
    v14 = Square;
    if ( !*rangeSearches )
    {
      v15 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v15,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v15;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)rangeSearches, (int32_t)v15, v16, v17, v18, v19, v20, v21);
      v13 = *rangeSearches;
    }
    v22 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)v8,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      0);
    v9 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
           (System_Func_TSource__bool__o *)v22,
           (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v9 )
    {
      HIDWORD(v9[1].klass) = range;
    }
    else
    {
      v23 = (System_Collections_Generic_List_object__o *)*rangeSearches;
      v24 = v8->fields.start;
      v25 = (WarBoardData_SquareRangeSearch_o *)sub_1C93D20(WarBoardData_SquareRangeSearch_TypeInfo);
      WarBoardData_SquareRangeSearch___ctor(v25, v24, range, 0);
      if ( !v23 )
        goto LABEL_29;
      items = v23->fields._items;
      v33 = Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__;
      ++v23->fields._version;
      if ( !items )
        goto LABEL_29;
      size = v23->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v23,
          (Il2CppObject *)v25,
          *(const MethodInfo_387999C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        v23->fields._size = size + 1;
        v35[4] = (Il2CppClass *)v25;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v25, v26, v27, v28, v29, v30, v31);
      }
    }
    v8->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v14->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_29;
      max_length = linkedSquares->max_length;
      if ( (int)max_length >= 1 )
      {
        v38 = 0;
        v39 = (unsigned int)max_length;
        while ( 1 )
        {
          v40 = sub_1C93D20(WarBoardData___c__DisplayClass125_1_TypeInfo);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v40, 0);
          if ( !v40 )
            break;
          *(_QWORD *)(v40 + 24) = v8;
          v47 = v40 + 24;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v40 + 24), (int32_t)v8, v41, v42, v43, v44, v45, v46);
          v48 = v14->fields.linkedSquares;
          if ( !v48 )
            break;
          if ( v38 >= LODWORD(v48->max_length) )
            goto LABEL_30;
          *(_DWORD *)(v40 + 16) = v48->m_Items[v38];
          v49 = *rangeSearches;
          v50 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v50,
            (Il2CppObject *)v40,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            0);
          v9 = (Il2CppObject *)System_Linq_Enumerable__All_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)v49,
                                 (System_Func_TSource__bool__o *)v50,
                                 (const MethodInfo_31AF04C *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v9 & 1) != 0
            || (v52 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v53 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo),
                System_Func_object__bool____ctor(
                  v53,
                  (Il2CppObject *)v40,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  0),
                v9 = (Il2CppObject *)BasicHelper__Any_object_(
                                       v52,
                                       (System_Func_T__bool__o *)v53,
                                       (const MethodInfo_318DB78 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v9 & 1) != 0) )
          {
            v54 = v14->fields.linkedSquares;
            if ( !v54 )
              break;
            if ( v38 >= LODWORD(v54->max_length) )
LABEL_30:
              sub_1C93D34(v9);
            if ( !*(_QWORD *)v47 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              v54->m_Items[v38],
              *(_DWORD *)(*(_QWORD *)v47 + 20LL),
              rangeSearches,
              v51);
          }
          if ( v39 == ++v38 )
            return;
        }
LABEL_29:
        sub_1C93D2C(v9, v10);
      }
    }
  }
}


int32_t WarBoardData__SearchNearestEmptySquare(
        WarBoardData_o *this,
        int32_t destination,
        int32_t current,
        System_Func_WarBoardPieceData__bool__o *checkReplaceFunc,
        const MethodInfo *method)
{
  System_Collections_Generic_Queue_int__o *v9; // x21
  WarBoardPieceData_o *Piece_38493796; // x0
  __int64 v11; // x1
  System_Collections_Generic_HashSet_int__o *v12; // x23
  const MethodInfo *v13; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v15; // x2
  WarBoardSquareData_o *v16; // x24
  WarBoardPieceData_o *v17; // x25
  struct System_Int32_array *linkedSquares; // x24
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v20; // x25
  int32_t v21; // w22

  if ( (byte_4D2E342 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_int__Dequeue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_int__Enqueue__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Queue_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_Queue_int__TypeInfo);
    byte_4D2E342 = 1;
  }
  if ( destination != current )
  {
    v9 = (System_Collections_Generic_Queue_int__o *)sub_1C93D20(System_Collections_Generic_Queue_int__TypeInfo);
    System_Collections_Generic_Queue_int____ctor(
      v9,
      (const MethodInfo_3A20C44 *)Method_System_Collections_Generic_Queue_int___ctor__);
    if ( !v9 )
LABEL_24:
      sub_1C93D2C(Piece_38493796, v11);
    System_Collections_Generic_Queue_int___Enqueue(
      v9,
      destination,
      (const MethodInfo_3A211BC *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v12 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v12,
      (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( v9->fields._size >= 1 )
    {
      do
      {
        destination = System_Collections_Generic_Queue_int___Dequeue(
                        v9,
                        (const MethodInfo_3A21338 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, destination, v13);
        if ( !Square )
          break;
        v16 = Square;
        Piece_38493796 = WarBoardData__GetPiece_38493796(this, destination, v15);
        if ( !Piece_38493796 )
          return destination;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v17 = Piece_38493796;
        Piece_38493796 = (WarBoardPieceData_o *)((__int64 (__fastcall *)(intptr_t, WarBoardPieceData_o *, intptr_t))checkReplaceFunc->fields.invoke_impl)(
                                                  checkReplaceFunc->fields.method_code,
                                                  Piece_38493796,
                                                  checkReplaceFunc->fields.method);
        if ( ((unsigned __int8)Piece_38493796 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v17, -1, 0);
          return destination;
        }
        if ( !v12 )
          goto LABEL_24;
        Piece_38493796 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v12,
                                                  destination,
                                                  (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v16->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        max_length = linkedSquares->max_length;
        if ( (int)max_length >= 1 )
        {
          v20 = 0;
          do
          {
            if ( v20 >= (unsigned int)max_length )
              sub_1C93D34(Piece_38493796);
            v21 = linkedSquares->m_Items[v20];
            Piece_38493796 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v12,
                                                      v21,
                                                      (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_38493796 & 1) == 0 )
            {
              Piece_38493796 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v9,
                                                        v21,
                                                        (const MethodInfo_3A214BC *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_38493796 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v9,
                  v21,
                  (const MethodInfo_3A211BC *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(max_length) = linkedSquares->max_length;
            ++v20;
          }
          while ( (__int64)v20 < (int)max_length );
        }
      }
      while ( v9->fields._size > 0 );
    }
    return -1;
  }
  return destination;
}


void WarBoardData__SetBgAnimationInfo(
        WarBoardData_o *this,
        System_String_o *objectName,
        System_String_o *animName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *bgAnimationInfo_k__BackingField; // x0

  if ( (byte_4D2E375 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    byte_4D2E375 = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_1C93D2C(0, objectName);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)bgAnimationInfo_k__BackingField,
    (Il2CppObject *)objectName,
    (Il2CppObject *)animName,
    (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void WarBoardData__SetContinue(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardPieceData_array *PlayerPieces; // x0
  WarBoardData___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x20
  System_Func_object__int__o *_9__82_0; // x21
  Il2CppObject *v7; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  System_Object_array *v16; // x0
  WarBoardData___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_object__object__o *_9__82_1; // x21
  Il2CppObject *v20; // x22
  struct WarBoardData___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  System_Collections_Generic_IEnumerable_T__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Object_array *v30; // x0
  WarBoardData___c_c *v31; // x8
  BattleServantData_array *v32; // x21
  System_Func_object__bool__o *_9__82_2; // x22
  Il2CppObject *v34; // x23
  struct WarBoardData___c_StaticFields *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  WarBoardData___c_c *v43; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x22
  System_Func_object__int__o *_9__82_3; // x23
  Il2CppObject *v46; // x24
  struct WarBoardData___c_StaticFields *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  System_Collections_Generic_IEnumerable_T__o *v54; // x23
  System_Collections_Generic_HashSet_int__o *v55; // x22
  BattleData_o *Instance; // x0
  __int64 v57; // x1
  WarBoardData___c_c *v58; // x0
  System_Action_object__o *_9__82_4; // x21
  Il2CppObject *v60; // x22
  struct WarBoardData___c_StaticFields *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v70; // w20

  if ( (byte_4D2E324 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ExcludeNull_BattleServantData___);
    sub_1C93AD4(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_BattleServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardPieceData__int__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor___78987192);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardData___c__SetContinue_b__82_0__);
    sub_1C93AD4(&Method_WarBoardData___c__SetContinue_b__82_1__);
    sub_1C93AD4(&Method_WarBoardData___c__SetContinue_b__82_2__);
    sub_1C93AD4(&Method_WarBoardData___c__SetContinue_b__82_3__);
    sub_1C93AD4(&Method_WarBoardData___c__SetContinue_b__82_4__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E324 = 1;
  }
  PlayerPieces = WarBoardData__GetPlayerPieces(this, method);
  v4 = WarBoardData___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)PlayerPieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v4 = WarBoardData___c_TypeInfo;
  }
  _9__82_0 = (System_Func_object__int__o *)v4->static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = WarBoardData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__82_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_0, v7, Method_WarBoardData___c__SetContinue_b__82_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__82_0,
      (int32_t)_9__82_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               v5,
                                                               (System_Func_TSource__TKey__o *)_9__82_0,
                                                               (const MethodInfo_31D38D0 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  v16 = System_Linq_Enumerable__ToArray_object_(
          v15,
          (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
  v17 = WarBoardData___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)v16;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v17 = WarBoardData___c_TypeInfo;
  }
  _9__82_1 = (System_Func_object__object__o *)v17->static_fields->__9__82_1;
  if ( !_9__82_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = WarBoardData___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__82_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_WarBoardPieceData__BattleServantData__TypeInfo);
    System_Func_object__object____ctor(_9__82_1, v20, Method_WarBoardData___c__SetContinue_b__82_1__, 0);
    v21 = WarBoardData___c_TypeInfo->static_fields;
    v21->__9__82_1 = (struct System_Func_WarBoardPieceData__BattleServantData__o *)_9__82_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v21->__9__82_1, (int32_t)_9__82_1, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__object_(
                                                         v18,
                                                         (System_Func_TSource__TResult__o *)_9__82_1,
                                                         (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleServantData___);
  v29 = BasicHelper__ExcludeNull_object_(
          v28,
          (const MethodInfo_318E4CC *)Method_BasicHelper_ExcludeNull_BattleServantData___);
  v30 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v29,
          (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_BattleServantData___);
  v31 = WarBoardData___c_TypeInfo;
  v32 = (BattleServantData_array *)v30;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v31 = WarBoardData___c_TypeInfo;
  }
  _9__82_2 = (System_Func_object__bool__o *)v31->static_fields->__9__82_2;
  if ( !_9__82_2 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = WarBoardData___c_TypeInfo;
    }
    v34 = (Il2CppObject *)v31->static_fields->__9;
    _9__82_2 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__82_2, v34, Method_WarBoardData___c__SetContinue_b__82_2__, 0);
    v35 = WarBoardData___c_TypeInfo->static_fields;
    v35->__9__82_2 = (struct System_Func_WarBoardPieceData__bool__o *)_9__82_2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v35->__9__82_2, (int32_t)_9__82_2, v36, v37, v38, v39, v40, v41);
  }
  v42 = System_Linq_Enumerable__Where_object_(
          v18,
          (System_Func_TSource__bool__o *)_9__82_2,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  v43 = WarBoardData___c_TypeInfo;
  v44 = v42;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v43 = WarBoardData___c_TypeInfo;
  }
  _9__82_3 = (System_Func_object__int__o *)v43->static_fields->__9__82_3;
  if ( !_9__82_3 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = WarBoardData___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__82_3 = (System_Func_object__int__o *)sub_1C93D20(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_object__int____ctor(_9__82_3, v46, Method_WarBoardData___c__SetContinue_b__82_3__, 0);
    v47 = WarBoardData___c_TypeInfo->static_fields;
    v47->__9__82_3 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v47->__9__82_3, (int32_t)_9__82_3, v48, v49, v50, v51, v52, v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         v44,
                                                         (System_Func_TSource__TResult__o *)_9__82_3,
                                                         (const MethodInfo_31DA264 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__int___);
  v55 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_57824408(
    v55,
    v54,
    (const MethodInfo_3725498 *)Method_System_Collections_Generic_HashSet_int___ctor___78987192);
  Instance = (BattleData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = (BattleData_o *)Instance->fields.freshBuffDataList;
  if ( !Instance )
    goto LABEL_42;
  BattleData__ProcContinue(Instance, v32, v55, 0);
  v58 = WarBoardData___c_TypeInfo;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v58 = WarBoardData___c_TypeInfo;
  }
  _9__82_4 = (System_Action_object__o *)v58->static_fields->__9__82_4;
  if ( !_9__82_4 )
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v58 = WarBoardData___c_TypeInfo;
    }
    v60 = (Il2CppObject *)v58->static_fields->__9;
    _9__82_4 = (System_Action_object__o *)sub_1C93D20(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__82_4, v60, Method_WarBoardData___c__SetContinue_b__82_4__, 0);
    v61 = WarBoardData___c_TypeInfo->static_fields;
    v61->__9__82_4 = (struct System_Action_WarBoardPieceData__o *)_9__82_4;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v61->__9__82_4, (int32_t)_9__82_4, v62, v63, v64, v65, v66, v67);
  }
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)v18,
    (System_Action_T__o *)_9__82_4,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  items = this->fields.items;
  if ( !items )
    goto LABEL_42;
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v70 = 0;
    while ( 1 )
    {
      if ( v70 >= max_length )
        sub_1C93D34(Instance);
      Instance = (BattleData_o *)items->m_Items[v70];
      if ( !Instance )
        break;
      WarBoardItemData__ResetItem((WarBoardItemData_o *)Instance, 0);
      max_length = items->max_length;
      if ( (int)++v70 >= max_length )
        return;
    }
LABEL_42:
    sub_1C93D2C(Instance, v57);
  }
}


void WarBoardData__SetPlayerMasterUserEquip(WarBoardData_o *this, int64_t userEquipId, const MethodInfo *method)
{
  WarBoardData___c_c *v5; // x0
  System_Object_array *pieces; // x20
  System_Predicate_object__o *_9__144_0; // x21
  Il2CppObject *v8; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *object; // x0

  if ( (byte_4D2E34D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Find_WarBoardPieceData___);
    sub_1C93AD4(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E34D = 1;
  }
  v5 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v5 = WarBoardData___c_TypeInfo;
  }
  _9__144_0 = (System_Predicate_object__o *)v5->static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = WarBoardData___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__144_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__144_0, v8, Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__144_0,
      (int32_t)_9__144_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  object = System_Array__Find_object_(
             pieces,
             (System_Predicate_T__o *)_9__144_0,
             (const MethodInfo_32A8FC0 *)Method_System_Array_Find_WarBoardPieceData___);
  if ( object )
    WarBoardPieceData__SetMasterEquip((WarBoardPieceData_o *)object, userEquipId, 0);
}


void WarBoardData__SetRequest(WarBoardData_o *this, RequestBase_o *request, const MethodInfo *method)
{
  WarBoardData___c_c *v5; // x0
  System_Collections_Generic_IEnumerable_T__o *pieces; // x21
  System_Action_object__o *_9__156_0; // x22
  Il2CppObject *v8; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v20; // x21
  System_Byte_array *v21; // x21
  System_String_o *v22; // x0
  struct WarBoardDataEntity_o *v23; // x8
  Il2CppObject *v24; // x0
  System_Byte_array *v25; // x0
  System_Byte_array *v26; // x0
  System_String_o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v29; // x0
  System_String_o *v30; // x22
  System_String_o *v31; // x21
  System_Func_object__object__o *_9__156_1; // x24
  System_Byte_array *v33; // x21
  System_Byte_array *v34; // x0
  System_Convert_c *v35; // x8
  System_Byte_array *v36; // x21
  Il2CppObject *v37; // x25
  struct WarBoardData___c_StaticFields *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v45; // x0
  WarBoardData___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x23
  System_Func_object__bool__o *_9__156_2; // x24
  Il2CppObject *v49; // x25
  struct WarBoardData___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  System_String_array *v58; // x0
  Il2CppObject *v59; // x0
  Il2CppObject *v60; // x0
  System_Byte_array *v61; // x21
  System_Byte_array *v62; // x0
  System_String_o *v63; // x0
  struct WarBoardDataEntity_o *v64; // x8
  Il2CppObject *v65; // x21
  Il2CppObject *v66; // x0
  System_Byte_array *v67; // x21
  System_Byte_array *v68; // x21
  System_String_o *v69; // x0
  struct WarBoardDataEntity_o *v70; // x8
  Il2CppObject *v71; // x0
  System_Byte_array *v72; // x0
  System_Byte_array *v73; // x0
  System_String_o *v74; // x0
  struct WarBoardDataEntity_o *v75; // x8
  Il2CppObject *v76; // x0
  System_Byte_array *v77; // x0
  System_Byte_array *v78; // x0
  System_String_o *v79; // x2

  if ( (byte_4D2E356 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_WarBoardPieceData___);
    sub_1C93AD4(&CatAndMouseGame_TypeInfo);
    sub_1C93AD4(&System_Convert_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_string___);
    sub_1C93AD4(&System_Func_WarBoardItemData__string__TypeInfo);
    sub_1C93AD4(&System_Func_string__bool__TypeInfo);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__SetRequest_b__156_0__);
    sub_1C93AD4(&Method_WarBoardData___c__SetRequest_b__156_1__);
    sub_1C93AD4(&Method_WarBoardData___c__SetRequest_b__156_2__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_17480/*"bossBattleInfo"*/);
    sub_1C93AD4(&StringLiteral_24168/*"svtInfo"*/);
    sub_1C93AD4(&StringLiteral_21720/*"masterInfo"*/);
    sub_1C93AD4(&StringLiteral_25046/*"wallInfo"*/);
    sub_1C93AD4(&StringLiteral_22605/*"null"*/);
    sub_1C93AD4(&StringLiteral_23920/*"squareIndexInfo"*/);
    sub_1C93AD4(&StringLiteral_20011/*"getItemInfo"*/);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    sub_1C93AD4(&StringLiteral_16114/*"[{0}]"*/);
    byte_4D2E356 = 1;
  }
  v5 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v5 = WarBoardData___c_TypeInfo;
  }
  _9__156_0 = (System_Action_object__o *)v5->static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = WarBoardData___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__156_0 = (System_Action_object__o *)sub_1C93D20(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_object____ctor(_9__156_0, v8, Method_WarBoardData___c__SetRequest_b__156_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__156_0,
      (int32_t)_9__156_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  BasicHelper__ForEach_object_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_51;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v16 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0);
  if ( !request )
    goto LABEL_51;
  v20 = RequestBase__PackToMessagePack(request, v16, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v21 = CatAndMouseGame__CatGame5Bytes(v20, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v22 = System_Convert__ToBase64String(v21, 0);
  RequestBase__addField_44907496(request, (System_String_o *)StringLiteral_24168/*"svtInfo"*/, v22, 0);
  v23 = this->fields.serverData;
  if ( !v23
    || (v24 = (Il2CppObject *)JsonManager__toJson(&v23->fields.masterInfo->obj, 0, 0, 0),
        v25 = RequestBase__PackToMessagePack(request, v24, 0),
        v26 = CatAndMouseGame__CatGame5Bytes(v25, 0),
        v27 = System_Convert__ToBase64String(v26, 0),
        RequestBase__addField_44907496(request, (System_String_o *)StringLiteral_21720/*"masterInfo"*/, v27, 0),
        (items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items) == 0) )
  {
LABEL_51:
    sub_1C93D2C(v16, v17);
  }
  if ( items[1].monitor )
  {
    v29 = WarBoardData___c_TypeInfo;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v29 = WarBoardData___c_TypeInfo;
    }
    v30 = (System_String_o *)StringLiteral_809/*","*/;
    v31 = (System_String_o *)StringLiteral_16114/*"[{0}]"*/;
    _9__156_1 = (System_Func_object__object__o *)v29->static_fields->__9__156_1;
    if ( !_9__156_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = WarBoardData___c_TypeInfo;
      }
      v37 = (Il2CppObject *)v29->static_fields->__9;
      _9__156_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_WarBoardItemData__string__TypeInfo);
      System_Func_object__object____ctor(_9__156_1, v37, Method_WarBoardData___c__SetRequest_b__156_1__, 0);
      v38 = WarBoardData___c_TypeInfo->static_fields;
      v38->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v38->__9__156_1, (int32_t)_9__156_1, v39, v40, v41, v42, v43, v44);
    }
    v45 = System_Linq_Enumerable__Select_object__object_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v46 = WarBoardData___c_TypeInfo;
    v47 = (System_Collections_Generic_IEnumerable_TSource__o *)v45;
    if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v46 = WarBoardData___c_TypeInfo;
    }
    _9__156_2 = (System_Func_object__bool__o *)v46->static_fields->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46);
        v46 = WarBoardData___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v46->static_fields->__9;
      _9__156_2 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_string__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__156_2, v49, Method_WarBoardData___c__SetRequest_b__156_2__, 0);
      v50 = WarBoardData___c_TypeInfo->static_fields;
      v50->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v50->__9__156_2, (int32_t)_9__156_2, v51, v52, v53, v54, v55, v56);
    }
    v57 = System_Linq_Enumerable__Where_object_(
            v47,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_string___);
    v58 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                   v57,
                                   (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
    v59 = (Il2CppObject *)System_String__Join(v30, v58, 0);
    v60 = (Il2CppObject *)System_String__Format(v31, v59, 0);
    v61 = RequestBase__PackToMessagePack(request, v60, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v62 = CatAndMouseGame__CatGame5Bytes(v61, 0);
    v35 = System_Convert_TypeInfo;
    v36 = v62;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
LABEL_40:
      j_il2cpp_runtime_class_init_0(v35);
  }
  else
  {
    v33 = RequestBase__PackToMessagePack(request, (Il2CppObject *)StringLiteral_22605/*"null"*/, 0);
    if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
    v34 = CatAndMouseGame__CatGame5Bytes(v33, 0);
    v35 = System_Convert_TypeInfo;
    v36 = v34;
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      goto LABEL_40;
  }
  v63 = System_Convert__ToBase64String(v36, 0);
  RequestBase__addField_44907496(request, (System_String_o *)StringLiteral_20011/*"getItemInfo"*/, v63, 0);
  v64 = this->fields.serverData;
  if ( !v64 )
    goto LABEL_51;
  v65 = &v64->fields.wallInfo->obj;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v66 = (Il2CppObject *)JsonManager__toJson(v65, 0, 0, 0);
  v67 = RequestBase__PackToMessagePack(request, v66, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v68 = CatAndMouseGame__CatGame5Bytes(v67, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v69 = System_Convert__ToBase64String(v68, 0);
  RequestBase__addField_44907496(request, (System_String_o *)StringLiteral_25046/*"wallInfo"*/, v69, 0);
  v70 = this->fields.serverData;
  if ( !v70 )
    goto LABEL_51;
  v71 = (Il2CppObject *)JsonManager__toJson(&v70->fields.squareIndexInfo->obj, 0, 0, 0);
  v72 = RequestBase__PackToMessagePack(request, v71, 0);
  v73 = CatAndMouseGame__CatGame5Bytes(v72, 0);
  v74 = System_Convert__ToBase64String(v73, 0);
  RequestBase__addField_44907496(request, (System_String_o *)StringLiteral_23920/*"squareIndexInfo"*/, v74, 0);
  v75 = this->fields.serverData;
  if ( !v75 )
    goto LABEL_51;
  v76 = (Il2CppObject *)JsonManager__toJson(&v75->fields.bossBattleInfo->obj, 0, 0, 0);
  v77 = RequestBase__PackToMessagePack(request, v76, 0);
  v78 = CatAndMouseGame__CatGame5Bytes(v77, 0);
  v79 = System_Convert__ToBase64String(v78, 0);
  RequestBase__addField_44907496(request, (System_String_o *)StringLiteral_17480/*"bossBattleInfo"*/, v79, 0);
}


void WarBoardData__SetUiDataFromLocalData(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *listUiData; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x5
  Il2CppObject *current; // x25
  __int64 klass_low; // x1
  WarBoardSquareData_o *Square; // x0
  __int64 v11; // x1
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v14; // w9
  WarBoardPieceData_o *Piece; // x0
  __int64 v16; // x1
  UnityEngine_Object_o *v17; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2E374 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&WarBoardControlUiDataComponent_TypeInfo);
    byte_4D2E374 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  listUiData = (System_Collections_Generic_List_object__o *)this->fields.listUiData;
  if ( !listUiData )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    listUiData,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v21 = v20;
  while ( 1 )
  {
    v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v21,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v4 )
      break;
    current = v21.fields._current;
    if ( !v21.fields._current )
      sub_1C93D2C(v4, v5);
    klass_low = LODWORD(v21.fields._current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v21.fields._current[1].monitor;
      if ( !monitor )
        sub_1C93D2C(v4, klass_low);
      v14 = monitor[6];
      if ( !v14 )
        sub_1C93D34(v4);
      if ( v14 == 1 )
        sub_1C93D34(v4);
      if ( v14 <= 2 )
        sub_1C93D34(v4);
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v7);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_1C93D2C(Piece, v16);
LABEL_17:
        v17 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 23);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v18 = UnityEngine_Object__op_Equality(v17, 0, 0);
        if ( !v18 )
        {
          if ( !v17 )
            sub_1C93D2C(v18, v19);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v17,
            (System_String_array *)current[2].klass,
            0);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass_low, v6);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_1C93D2C(Square, v11);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  WarBoardControlUiDataComponent__ResumeUiDataAll(0);
}


void WarBoardData__ShowConsumedPieceActionPointPopup(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict,
        const MethodInfo *method)
{
  __int64 v5; // x19
  System_Collections_Generic_Dictionary_int__object__o *v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Func_bool__o *v20; // x20
  UnityEngine_WaitUntil_o *v21; // x21
  __int64 v22; // x20
  System_Delegate_o **v23; // x21
  System_Delegate_o *v24; // x22
  WarBoardTaskBase_TaskCallback_o *v25; // x23
  System_Delegate_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  WarBoardTaskBase_TaskCallback_c *v33; // x1
  Il2CppObject *Instance; // x19
  System_Collections_Generic_Dictionary_int__object__o *v35; // x21
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  __int64 v43; // x0

  if ( (byte_4D2E354 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_1C93AD4(&System_Func_bool__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass154_0_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C93AD4(&WarBoardCallbackTask_TypeInfo);
    sub_1C93AD4(&WarBoardTaskBase___TypeInfo);
    byte_4D2E354 = 1;
  }
  v5 = sub_1C93D20(WarBoardData___c__DisplayClass154_0_TypeInfo);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_18;
  *(_QWORD *)(v5 + 24) = consumedPieceActionPointDict;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)(v5 + 24),
    (int32_t)consumedPieceActionPointDict,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v14, v15, v16, v17, v18, v19);
  v6 = *(System_Collections_Generic_Dictionary_int__object__o **)(v5 + 24);
  if ( !v6 )
    goto LABEL_18;
  if ( System_Collections_Generic_Dictionary_int__object___get_Count(
         v6,
         (const MethodInfo_34BCA34 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) < 1 )
    return;
  *(_BYTE *)(v5 + 16) = 0;
  v20 = (System_Func_bool__o *)sub_1C93D20(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v20,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
    0);
  v21 = (UnityEngine_WaitUntil_o *)sub_1C93D20(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v21, v20, 0);
  v22 = sub_1C93D20(WarBoardCallbackTask_TypeInfo);
  WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v22, (UnityEngine_CustomYieldInstruction_o *)v21, 0);
  if ( !v22 )
LABEL_18:
    sub_1C93D2C(v6, v7);
  v23 = (System_Delegate_o **)(v22 + 32);
  v24 = *(System_Delegate_o **)(v22 + 32);
  v25 = (WarBoardTaskBase_TaskCallback_o *)sub_1C93D20(WarBoardTaskBase_TaskCallback_TypeInfo);
  WarBoardTaskBase_TaskCallback___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
    0);
  v26 = System_Delegate__Combine(v24, (System_Delegate_o *)v25, 0);
  if ( !v26 )
  {
    *v23 = 0;
LABEL_13:
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v22 + 32), (int32_t)v26, v27, v28, v29, v30, v31, v32);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93B7C(WarBoardTaskBase___TypeInfo, 1);
    if ( v6 )
    {
      v35 = v6;
      v36 = sub_1C93C10(v22, v6->klass->_1.element_class);
      if ( !v36 )
      {
        v43 = sub_1C93D50();
        sub_1C93BFC(v43, 0);
      }
      if ( !LODWORD(v35->fields._entries) )
        sub_1C93D34(v36);
      *(_QWORD *)&v35->fields._count = v22;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v35->fields._count, v22, v37, v38, v39, v40, v41, v42);
      if ( Instance )
      {
        WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v35, 0);
        return;
      }
    }
    goto LABEL_18;
  }
  v33 = WarBoardTaskBase_TaskCallback_TypeInfo;
  if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    *v23 = v26;
    if ( (WarBoardTaskBase_TaskCallback_c *)v26->klass == v33 )
      goto LABEL_13;
  }
  sub_1C940C8(v26);
}


System_String_o *WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  Il2CppObject *serverData; // x19

  if ( (byte_4D2E355 & 1) == 0 )
  {
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D2E355 = 1;
  }
  serverData = (Il2CppObject *)this->fields.serverData;
  if ( !serverData )
    return string_TypeInfo->static_fields->Empty;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(serverData, 0, 0, 0);
}


void WarBoardData__UpdateBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass171_0_o *v9; // x23
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  System_Object_array *bossBattleInfo; // x21
  System_Func_object__bool__o *v14; // x22
  Il2CppObject *object; // x0
  System_Collections_Generic_Dictionary_object__object__o *monitor; // x21
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2E35D & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Find_WarBoardBossBattleData___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1C93AD4(&System_Func_WarBoardBossBattleData__bool__TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass171_0_TypeInfo);
    byte_4D2E35D = 1;
  }
  v9 = (WarBoardData___c__DisplayClass171_0_o *)sub_1C93D20(WarBoardData___c__DisplayClass171_0_TypeInfo);
  WarBoardData___c__DisplayClass171_0___ctor(v9, 0);
  if ( !v9 )
    goto LABEL_9;
  v9->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (System_Object_array *)serverData->fields.bossBattleInfo;
  v14 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    0);
  object = BasicHelper__Find_object_(
             bossBattleInfo,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_318E744 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !object )
    return;
  monitor = (System_Collections_Generic_Dictionary_object__object__o *)object[1].monitor;
  v17 = value;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  if ( !monitor )
LABEL_9:
    sub_1C93D2C(v10, v11);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    monitor,
    (Il2CppObject *)key,
    v10,
    (const MethodInfo_352EB94 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_object__object__o *_9__192_0; // x20
  Il2CppObject *v6; // x21
  GrandQuestFolderBoardItem_o *p__9__192_0; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v14; // x0
  WarBoardData___c_c *v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__bool__o *_9__192_1; // x20
  Il2CppObject *v18; // x21
  GrandQuestFolderBoardItem_o *p__9__192_1; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  WarBoardData___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_T__o *v28; // x19
  System_Action_object__o *_9__192_2; // x20
  Il2CppObject *v30; // x21
  GrandQuestFolderBoardItem_o *p__9__192_2; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D2E36F & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_WarBoardPieceBaseComponent__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
    sub_1C93AD4(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    sub_1C93AD4(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__);
    sub_1C93AD4(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__);
    sub_1C93AD4(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E36F = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__192_0 = (System_Func_object__object__o *)v3->static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__192_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    System_Func_object__object____ctor(_9__192_0, v6, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, 0);
    p__9__192_0 = (GrandQuestFolderBoardItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_0;
    p__9__192_0->klass = (GrandQuestFolderBoardItem_c *)_9__192_0;
    sub_1C93A78(p__9__192_0, (int32_t)_9__192_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = System_Linq_Enumerable__Select_object__object_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_31DAB40 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v15 = WarBoardData___c_TypeInfo;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)v14;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v15 = WarBoardData___c_TypeInfo;
  }
  _9__192_1 = (System_Func_object__bool__o *)v15->static_fields->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = WarBoardData___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__192_1 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__192_1, v18, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, 0);
    p__9__192_1 = (GrandQuestFolderBoardItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_1;
    p__9__192_1->klass = (GrandQuestFolderBoardItem_c *)_9__192_1;
    sub_1C93A78(p__9__192_1, (int32_t)_9__192_1, v20, v21, v22, v23, v24, v25);
  }
  v26 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_31EB2BC *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v27 = WarBoardData___c_TypeInfo;
  v28 = (System_Collections_Generic_IEnumerable_T__o *)v26;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v27 = WarBoardData___c_TypeInfo;
  }
  _9__192_2 = (System_Action_object__o *)v27->static_fields->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = WarBoardData___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__192_2 = (System_Action_object__o *)sub_1C93D20(System_Action_WarBoardPieceBaseComponent__TypeInfo);
    System_Action_object____ctor(_9__192_2, v30, Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, 0);
    p__9__192_2 = (GrandQuestFolderBoardItem_o *)&WarBoardData___c_TypeInfo->static_fields->__9__192_2;
    p__9__192_2->klass = (GrandQuestFolderBoardItem_c *)_9__192_2;
    sub_1C93A78(p__9__192_2, (int32_t)_9__192_2, v32, v33, v34, v35, v36, v37);
  }
  BasicHelper__ForEach_object_(
    v28,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_long__o *v4; // x21
  const MethodInfo *v5; // x1
  WarBoardPieceData_array *EditableServantPieces; // x0
  int64_t UserServantId_k__BackingField; // x1
  long double v8; // q0
  int max_length; // w8
  WarBoardPieceData_array *v10; // x22
  unsigned int v11; // w23
  WarBoardPieceData_o *v12; // x25
  int32_t version; // w11
  struct System_Int64_array *items; // x9
  _QWORD *v15; // x8
  __int64 size; // x12
  int32_t v17; // w10
  __int64 v18; // x0
  __int64 v19; // x0
  UserServantEntity_array *Entities; // x0
  WarBoardData___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x21
  System_Func_object__int__o *_9__143_0; // x22
  Il2CppObject *v24; // x23
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Func_object__bool__o *v38; // x22

  if ( (byte_4D2E34C & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_UserServantEntity____79099192);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Sum_UserServantEntity___);
    sub_1C93AD4(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_1C93AD4(&System_Func_UserServantEntity__int__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_long__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass143_0_TypeInfo);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E34C = 1;
  }
  v3 = sub_1C93D20(WarBoardData___c__DisplayClass143_0_TypeInfo);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v3, 0);
  v4 = (System_Collections_Generic_List_long__o *)sub_1C93D20(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v4,
    (const MethodInfo_386117C *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v5);
  if ( !EditableServantPieces )
    goto LABEL_33;
  max_length = EditableServantPieces->max_length;
  v10 = EditableServantPieces;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1C93D34(EditableServantPieces);
      v12 = v10->m_Items[v11];
      if ( !v12 )
        break;
      if ( !v4 )
        break;
      version = v4->fields._version;
      UserServantId_k__BackingField = v12->fields._UserServantId_k__BackingField;
      items = v4->fields._items;
      v15 = Method_System_Collections_Generic_List_long__Add__;
      v4->fields._version = version + 1;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v4,
          UserServantId_k__BackingField,
          *(const MethodInfo_38619D0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        v17 = v4->fields._size;
        v15 = Method_System_Collections_Generic_List_long__Add__;
        items = v4->fields._items;
        UserServantId_k__BackingField = v12->fields._UserServantEquipId_k__BackingField;
        ++v4->fields._version;
        if ( !items )
          break;
      }
      else
      {
        v17 = size + 1;
        v4->fields._size = size + 1;
        items->m_Items[size] = UserServantId_k__BackingField;
        UserServantId_k__BackingField = v12->fields._UserServantEquipId_k__BackingField;
        v4->fields._version = version + 2;
      }
      if ( (unsigned int)v17 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_long___AddWithResize(
          v4,
          UserServantId_k__BackingField,
          *(const MethodInfo_38619D0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = v17 + 1;
        items->m_Items[v17] = UserServantId_k__BackingField;
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        goto LABEL_17;
    }
LABEL_33:
    sub_1C93D2C(EditableServantPieces, UserServantId_k__BackingField);
  }
LABEL_17:
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C69B68(v8);
  v19 = *(_QWORD *)(*(_QWORD *)(v18 + 192) + 16LL);
  if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
    v19 = sub_1C69B68(v8);
  EditableServantPieces = **(WarBoardPieceData_array ***)(v19 + 184);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_33;
  Entities = UserServantMaster__GetEntities((UserServantMaster_o *)EditableServantPieces, v4, 0);
  v21 = WarBoardData___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)Entities;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v21 = WarBoardData___c_TypeInfo;
  }
  _9__143_0 = (System_Func_object__int__o *)v21->static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = WarBoardData___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__143_0 = (System_Func_object__int__o *)sub_1C93D20(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__143_0, v24, Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__143_0,
      (int32_t)_9__143_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  EditableServantPieces = (WarBoardPieceData_array *)System_Linq_Enumerable__Sum_object_(
                                                       v22,
                                                       (System_Func_TSource__int__o *)_9__143_0,
                                                       (const MethodInfo_31E23D0 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_33;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = (WarBoardPieceData_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_33;
  EditableServantPieces = (WarBoardPieceData_array *)DataManager__GetMasterData_object_(
                                                       (DataManager_o *)EditableServantPieces,
                                                       (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v3 )
    goto LABEL_33;
  *(_QWORD *)(v3 + 16) = EditableServantPieces;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)EditableServantPieces, v32, v33, v34, v35, v36, v37);
  v38 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v3,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    0);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_object__52190488(
                                                       v22,
                                                       (System_Func_TSource__bool__o *)v38,
                                                       (const MethodInfo_31C5D18 *)Method_System_Linq_Enumerable_Count_UserServantEntity____79099192);
}


void WarBoardData__UpdateFromServerData(
        WarBoardData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        bool forceUpdate,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  WarBoardDataEntity_o **p_serverData; // x21
  WarBoardManager_TaskMultiList_o *v11; // x24
  WarBoardManager_TaskMultiList_o *v12; // x23
  System_Collections_Generic_Dictionary_int__object__o *v13; // x20
  System_Collections_Generic_List_object__o *v14; // x26
  System_Collections_Generic_List_object__o *isPlayerGroup; // x0
  const MethodInfo *v16; // x1
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  unsigned int v19; // w19
  bool v20; // w27
  WarBoardPieceData_o *v21; // x28
  WarBoardManager_TaskList_o *v22; // x29
  char v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  struct WarBoardManager_TaskList_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x8
  System_Collections_Generic_List_object__o *v37; // x0
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w29
  System_Collections_Generic_Dictionary_int__object__o *v39; // x21
  System_Collections_Generic_List_object__o *v40; // x20
  System_Collections_Generic_Dictionary_int__object__o *v41; // x0
  Il2CppObject *v42; // x2
  char v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  Il2CppClass **v52; // x8
  Il2CppObject *current; // x28
  WarBoardManager_TaskList_o *v54; // x26
  __int64 v55; // x0
  __int64 v56; // x1
  int monitor; // w25
  Il2CppClass *v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  char v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int monitor_high; // w27
  Il2CppClass *klass; // x0
  Il2CppClass *v69; // x0
  struct WarBoardManager_TaskList_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass **v73; // x0
  struct WarBoardManager_TaskList_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  const MethodInfo *v78; // x2
  System_Collections_Generic_IEnumerable_T__o *v79; // x0
  char v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  System_Collections_Generic_List_object__o *v89; // x1
  Il2CppClass **v90; // x0
  WarBoardWaitNonBlockingTaskEnd_o *v91; // x23
  char v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  Il2CppClass **v101; // x0
  struct WarBoardItemData_array *v102; // x19
  int v103; // w8
  unsigned int v104; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v106; // x24
  __int64 v107; // x20
  char v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  WarBoardWallData_o *v114; // x1
  System_Collections_Generic_List_object__o **v115; // x21
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_object__bool__o *v117; // x23
  Il2CppObject *v118; // x0
  Il2CppObject *v119; // x8
  int32_t klass_high; // w1
  System_Collections_Generic_List_object__o *v121; // [xsp+8h] [xbp-B8h]
  WarBoardData_o *v122; // [xsp+10h] [xbp-B0h]
  WarBoardDataEntity_o **v123; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v125; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v126; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4D2E351 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__);
    sub_1C93AD4(&System_Func_WarBoardUserWallData__bool__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&WarBoardManager_TaskList_TypeInfo);
    sub_1C93AD4(&WarBoardManager_TaskMultiList_TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__);
    sub_1C93AD4(&WarBoardData___c__DisplayClass151_0_TypeInfo);
    sub_1C93AD4(&WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    byte_4D2E351 = 1;
  }
  memset(&v126, 0, sizeof(v126));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.serverData,
    (int32_t)warBoardDataEntity,
    forceUpdate,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  v121 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v121,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v11 = (WarBoardManager_TaskMultiList_o *)sub_1C93D20(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v11, 0);
  v12 = (WarBoardManager_TaskMultiList_o *)sub_1C93D20(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v12, 0);
  v13 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v13,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v14 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v122 = this;
  if ( !pieces )
    goto LABEL_96;
  max_length = pieces->max_length;
  v123 = &this->fields.serverData;
  if ( max_length >= 1 )
  {
    v19 = 0;
    v20 = forceUpdate;
    do
    {
      if ( v19 >= max_length )
        goto LABEL_97;
      v21 = pieces->m_Items[v19];
      v22 = (WarBoardManager_TaskList_o *)sub_1C93D20(WarBoardManager_TaskList_TypeInfo);
      WarBoardManager_TaskList___ctor(v22, 0);
      if ( !v21 )
        goto LABEL_96;
      WarBoardPieceData__UpdateFromServerData(
        v21,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v14,
        v22,
        v20,
        0);
      if ( !v22 )
        goto LABEL_96;
      if ( v22->fields._size >= 1 )
      {
        if ( v21->fields._isDead_k__BackingField )
        {
          if ( !v12 )
            goto LABEL_96;
          items = v12->fields._items;
          v30 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v12->fields._version;
          if ( !items )
            goto LABEL_96;
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            v36 = v30[4];
            v37 = (System_Collections_Generic_List_object__o *)v12;
LABEL_23:
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              (Il2CppObject *)v22,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v36 + 192) + 112LL));
            goto LABEL_24;
          }
          v32 = &items->obj.klass + size;
          v12->fields._size = size + 1;
        }
        else
        {
          if ( !v11 )
            goto LABEL_96;
          v33 = v11->fields._items;
          v34 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
          ++v11->fields._version;
          if ( !v33 )
            goto LABEL_96;
          v35 = v11->fields._size;
          if ( (unsigned int)v35 >= LODWORD(v33->max_length) )
          {
            v36 = v34[4];
            v37 = (System_Collections_Generic_List_object__o *)v11;
            goto LABEL_23;
          }
          v32 = &v33->obj.klass + v35;
          v11->fields._size = v35 + 1;
        }
        v32[4] = (Il2CppClass *)v22;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
      }
LABEL_24:
      isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isPlayerGroup(v21, 0);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardPieceData__get_isMaster(v21, 0);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v21->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v13 )
            goto LABEL_96;
          if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
                  v13,
                  v21->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_34BCF78 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v21->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v39 = v13;
            v40 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v40,
              (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v41 = v39;
            v42 = (Il2CppObject *)v40;
            v13 = v39;
            p_serverData = v123;
            System_Collections_Generic_Dictionary_int__object___Add(
              v41,
              ConsumedRecoverDonotActCost_k__BackingField,
              v42,
              (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                         v13,
                                                                         v21->fields._ConsumedRecoverDonotActCost_k__BackingField,
                                                                         (const MethodInfo_34BCCE4 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_96;
          v49 = isPlayerGroup->fields._items;
          v50 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
          ++isPlayerGroup->fields._version;
          if ( !v49 )
            goto LABEL_96;
          v51 = isPlayerGroup->fields._size;
          if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              isPlayerGroup,
              (Il2CppObject *)v21,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &v49->obj.klass + v51;
            isPlayerGroup->fields._size = v51 + 1;
            v52[4] = (Il2CppClass *)v21;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v52 + 4), (int32_t)v21, v43, v44, v45, v46, v47, v48);
          }
        }
      }
      max_length = pieces->max_length;
    }
    while ( (int)++v19 < max_length );
  }
  if ( !v14 )
    goto LABEL_96;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v125,
    v14,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v126 = v125;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v126,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v126.fields._current;
    v54 = (WarBoardManager_TaskList_o *)sub_1C93D20(WarBoardManager_TaskList_TypeInfo);
    WarBoardManager_TaskList___ctor(v54, 0);
    if ( !current )
      sub_1C93D2C(v55, v56);
    monitor = (int)current[1].monitor;
    if ( monitor < 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_1C93D2C(0, v56);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0,
          v54,
          0xFFFFFFFFLL,
          0,
          1,
          *((_QWORD *)klass->_1.image + 102));
      }
      v69 = current[1].klass;
      if ( !v69 )
        sub_1C93D2C(0, v56);
      v59 = (*((__int64 (**)(void))v69->_1.image + 103))();
    }
    else
    {
      v58 = current[1].klass;
      if ( !v58 )
        sub_1C93D2C(0, v56);
      v59 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v58->_1.image
             + 101))(
              v58,
              HIDWORD(current[1].monitor),
              0,
              v54,
              0xFFFFFFFFLL,
              0,
              1,
              *((_QWORD *)v58->_1.image + 102));
    }
    if ( !v54 )
      sub_1C93D2C(v59, v60);
    if ( v54->fields._size >= 1 )
    {
      if ( monitor < 0 )
      {
        if ( !v12 )
          sub_1C93D2C(v59, v60);
        v74 = v12->fields._items;
        v75 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v12->fields._version;
        if ( !v74 )
          sub_1C93D2C(v59, v60);
        v76 = v12->fields._size;
        if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v12,
            (Il2CppObject *)v54,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = &v74->obj.klass + v76;
          v12->fields._size = v76 + 1;
          v77[4] = (Il2CppClass *)v54;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v77 + 4), (int32_t)v54, v61, v62, v63, v64, v65, v66);
        }
      }
      else
      {
        if ( !v11 )
          sub_1C93D2C(v59, v60);
        v70 = v11->fields._items;
        v71 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++v11->fields._version;
        if ( !v70 )
          sub_1C93D2C(v59, v60);
        v72 = v11->fields._size;
        if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v11,
            (Il2CppObject *)v54,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
        }
        else
        {
          v73 = &v70->obj.klass + v72;
          v11->fields._size = v72 + 1;
          v73[4] = (Il2CppClass *)v54;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v73 + 4), (int32_t)v54, v61, v62, v63, v64, v65, v66);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v126,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v13 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)System_Collections_Generic_Dictionary_int__object___get_Count(
                                                                 v13,
                                                                 (const MethodInfo_34BCA34 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v122,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v13,
      v78);
  if ( !v11 )
    goto LABEL_96;
  isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardManager_TaskMultiList__SortedFlatted(v11, 0);
  if ( !v121 )
    goto LABEL_96;
  System_Collections_Generic_List_object___AddRange(
    v121,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v12 )
    goto LABEL_96;
  v79 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v12, 0);
  System_Collections_Generic_List_object___AddRange(
    v121,
    v79,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( v121->fields._size >= 1 )
  {
    isPlayerGroup = (System_Collections_Generic_List_object__o *)WarBoardData__CreateEventBossUIDataTask(
                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                   v16);
    v86 = v121->fields._items;
    v87 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v121->fields._version;
    if ( !v86 )
      goto LABEL_96;
    v88 = v121->fields._size;
    v89 = isPlayerGroup;
    if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v121,
        (Il2CppObject *)isPlayerGroup,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
    }
    else
    {
      v90 = &v86->obj.klass + v88;
      v121->fields._size = v88 + 1;
      v90[4] = (Il2CppClass *)v89;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v90 + 4), (int32_t)v89, v80, v81, v82, v83, v84, v85);
    }
    v91 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_1C93D20(WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    WarBoardWaitNonBlockingTaskEnd___ctor(v91, 0);
    v98 = v121->fields._items;
    v99 = Method_System_Collections_Generic_List_WarBoardTaskBase__Add__;
    ++v121->fields._version;
    if ( !v98 )
      goto LABEL_96;
    v100 = v121->fields._size;
    if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v121,
        (Il2CppObject *)v91,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
    }
    else
    {
      v101 = &v98->obj.klass + v100;
      v121->fields._size = v100 + 1;
      v101[4] = (Il2CppClass *)v91;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v101 + 4), (int32_t)v91, v92, v93, v94, v95, v96, v97);
    }
    isPlayerGroup = (System_Collections_Generic_List_object__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_96;
    WarBoardManager__InsertTask_38671928(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v121,
      0);
  }
  v102 = v122->fields.items;
  if ( !v102 )
    goto LABEL_96;
  v103 = v102->max_length;
  if ( v103 >= 1 )
  {
    v104 = 0;
    while ( v104 < v103 )
    {
      isPlayerGroup = (System_Collections_Generic_List_object__o *)v102->m_Items[v104];
      if ( !isPlayerGroup )
        goto LABEL_96;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *v123, 0);
      v103 = v102->max_length;
      if ( (int)++v104 >= v103 )
        goto LABEL_84;
    }
LABEL_97:
    sub_1C93D34(isPlayerGroup);
  }
LABEL_84:
  walls = v122->fields.walls;
  if ( !walls )
LABEL_96:
    sub_1C93D2C(isPlayerGroup, v16);
  if ( SLODWORD(walls->max_length) >= 1 )
  {
    v106 = 0;
    while ( 1 )
    {
      v107 = sub_1C93D20(WarBoardData___c__DisplayClass151_0_TypeInfo);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v107, 0);
      if ( v106 >= LODWORD(walls->max_length) )
        goto LABEL_97;
      if ( !v107 )
        goto LABEL_96;
      v114 = walls->m_Items[v106];
      *(_QWORD *)(v107 + 16) = v114;
      v115 = (System_Collections_Generic_List_object__o **)(v107 + 16);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v107 + 16), (int32_t)v114, v108, v109, v110, v111, v112, v113);
      if ( !warBoardDataEntity )
        goto LABEL_96;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.wallInfo;
      v117 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v117,
        (Il2CppObject *)v107,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        0);
      v118 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
               wallInfo,
               (System_Func_TSource__bool__o *)v117,
               (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v118 )
      {
        v119 = v118;
        isPlayerGroup = *v115;
        if ( !*v115 )
          goto LABEL_96;
        klass_high = HIDWORD(v119[1].klass);
        if ( isPlayerGroup->fields._size > klass_high )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, klass_high, 0);
      }
      if ( (__int64)++v106 >= SLODWORD(walls->max_length) )
        return;
    }
  }
}


void WarBoardData__UpdateLatestBattlePieceUniqueIndexes(
        WarBoardData_o *this,
        WarBoardData_BattleParticipantInfo_o *participantInfo,
        const MethodInfo *method)
{
  struct System_UInt32_array *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( !participantInfo )
    sub_1C93D2C(this, 0);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void WarBoardData__UpdateLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        int32_t fromSquareIndex,
        int32_t toSquareIndex,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int v15; // w8

  if ( (byte_4D2E361 & 1) == 0 )
  {
    sub_1C93AD4(&int___TypeInfo);
    byte_4D2E361 = 1;
  }
  v7 = sub_1C93B7C(int___TypeInfo, 2);
  if ( !v7 )
    sub_1C93D2C(0, v8);
  v15 = *(_DWORD *)(v7 + 24);
  if ( !v15 || (*(_DWORD *)(v7 + 32) = fromSquareIndex, v15 == 1) )
    sub_1C93D34(v7);
  *(_DWORD *)(v7 + 36) = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)v7;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.latestPieceActionSquareIndexes,
    v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardData__UpdateLinkedSquareList(
        WarBoardData_o *this,
        int32_t squareIndex1,
        int32_t squareIndex2,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  WarBoardSquareData_o *Square; // x21
  const MethodInfo *v9; // x2
  WarBoardSquareData_o *CondSquare; // x23

  Square = WarBoardData__GetSquare(this, squareIndex1, *(const MethodInfo **)&squareIndex2);
  if ( !Square )
    Square = WarBoardData__GetCondSquare(this, squareIndex1, v7);
  CondSquare = WarBoardData__GetSquare(this, squareIndex2, v7);
  if ( CondSquare )
  {
    if ( !Square )
      return;
  }
  else
  {
    CondSquare = WarBoardData__GetCondSquare(this, squareIndex2, v9);
    if ( !Square )
      return;
  }
  if ( CondSquare )
  {
    WarBoardSquareData__UpdateLinkedSquareList(Square, squareIndex2, 0);
    WarBoardSquareData__UpdateLinkedSquareList(CondSquare, squareIndex1, 0);
  }
}


void WarBoardData__UpdateSquareList(WarBoardData_o *this, WarBoardSquareData_o *square, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *squares; // x23
  System_Collections_Generic_List_object__o *v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  System_Object_array *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  GrandQuestFolderBoardItem_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  System_Collections_Generic_List_object__o *v28; // x21
  System_Object_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  if ( (byte_4D2E345 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___79027000);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
    byte_4D2E345 = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v6,
    squares,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___79027000);
  if ( !v6 )
    goto LABEL_10;
  items = v6->fields._items;
  v16 = Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)square,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v18[4] = (Il2CppClass *)square;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)square, v9, v10, v11, v12, v13, v14);
  }
  v19 = System_Collections_Generic_List_object___ToArray(
          v6,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = (struct WarBoardSquareData_array *)v19;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.squares, (int32_t)v19, v20, v21, v22, v23, v24, v25);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (GrandQuestFolderBoardItem_o *)&this->fields.condSquares;
  v28 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v28,
    condSquares,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___79027000);
  if ( !v28 )
LABEL_10:
    sub_1C93D2C(v7, v8);
  System_Collections_Generic_List_object___Remove(
    v28,
    (Il2CppObject *)square,
    (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v29 = System_Collections_Generic_List_object___ToArray(
          v28,
          (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (GrandQuestFolderBoardItem_c *)v29;
  sub_1C93A78(p_condSquares, (int32_t)v29, v30, v31, v32, v33, v34, v35);
}


void WarBoardData__UpdateUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  Il2CppObject *UiData; // x0
  Il2CppObject *v8; // x1
  int max_length; // w8
  WarBoardUiData_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppClass *klass; // x8
  _QWORD *v18; // x9
  __int64 monitor_low; // x10
  __int64 v20; // x8

  if ( (byte_4D2E372 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_1C93AD4(&WarBoardUiData_TypeInfo);
    byte_4D2E372 = 1;
  }
  UiData = (Il2CppObject *)WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v8 = UiData;
  if ( UiData )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData, setKeys, 0);
      return;
    }
    UiData = (Il2CppObject *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData,
        v8,
        (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1C93D2C(UiData, v8);
  }
  if ( max_length )
  {
    v10 = (WarBoardUiData_o *)sub_1C93D20(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_38776592(v10, squareIndex, setKeys, 0);
    UiData = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData )
      goto LABEL_16;
    klass = UiData[1].klass;
    v18 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData,
        (Il2CppObject *)v10,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v20 + 32) = v10;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)v10, v11, v12, v13, v14, v15, v16);
    }
  }
}


void WarBoardData__UpdateUiData_38584304(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  Il2CppObject *UiData_38583712; // x0
  Il2CppObject *v8; // x1
  int max_length; // w8
  WarBoardUiData_o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  Il2CppClass *klass; // x8
  _QWORD *v18; // x9
  __int64 monitor_low; // x10
  __int64 v20; // x8

  if ( (byte_4D2E373 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
    sub_1C93AD4(&WarBoardUiData_TypeInfo);
    byte_4D2E373 = 1;
  }
  UiData_38583712 = (Il2CppObject *)WarBoardData__GetUiData_38583712(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_16;
  max_length = setKeys->max_length;
  v8 = UiData_38583712;
  if ( UiData_38583712 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys((WarBoardUiData_o *)UiData_38583712, setKeys, 0);
      return;
    }
    UiData_38583712 = (Il2CppObject *)this->fields.listUiData;
    if ( UiData_38583712 )
    {
      System_Collections_Generic_List_object___Remove(
        (System_Collections_Generic_List_object__o *)UiData_38583712,
        v8,
        (const MethodInfo_387AEC4 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_16:
    sub_1C93D2C(UiData_38583712, v8);
  }
  if ( max_length )
  {
    v10 = (WarBoardUiData_o *)sub_1C93D20(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_38776664(v10, pieceIndex, setKeys, 0);
    UiData_38583712 = (Il2CppObject *)this->fields.listUiData;
    if ( !UiData_38583712 )
      goto LABEL_16;
    klass = UiData_38583712[1].klass;
    v18 = Method_System_Collections_Generic_List_WarBoardUiData__Add__;
    ++HIDWORD(UiData_38583712[1].monitor);
    if ( !klass )
      goto LABEL_16;
    monitor_low = SLODWORD(UiData_38583712[1].monitor);
    if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)UiData_38583712,
        (Il2CppObject *)v10,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = (__int64)klass + 8 * monitor_low;
      LODWORD(UiData_38583712[1].monitor) = monitor_low + 1;
      *(_QWORD *)(v20 + 32) = v10;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v20 + 32), (int32_t)v10, v11, v12, v13, v14, v15, v16);
    }
  }
}


void WarBoardData__UpdateWinCondId(WarBoardData_o *this, int32_t overWriteWinCondId, const MethodInfo *method)
{
  this->fields.winCondId = overWriteWinCondId;
}


int32_t WarBoardData__get_ContinueConsumeType(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._ContinueConsumeType_k__BackingField;
}


int32_t WarBoardData__get_CurrentMemberCount(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentMemberCount_k__BackingField;
}


int32_t WarBoardData__get_CurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentPartyCost_k__BackingField;
}


int32_t WarBoardData__get_FormationLimitCost(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( stageEntity )
    return stageEntity->fields.formationCost;
  else
    return 0;
}


bool WarBoardData__get_IsContinue(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._IsContinue_k__BackingField;
}


bool WarBoardData__get_IsEmptyMember(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentMemberCount_k__BackingField < 1;
}


bool WarBoardData__get_IsNextTurn(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._IsNextTurn_k__BackingField;
}


bool WarBoardData__get_IsPartyCostOver(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x9

  stageEntity = this->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  return this->fields._CurrentPartyCost_k__BackingField > (int)stageEntity;
}


System_Collections_Generic_List_int__o *WarBoardData__get_MasterExistsForce(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterExistsForce;
}


int64_t WarBoardData__get_PlayerMasterUserEquipId(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData___c_c *v3; // x0
  System_Object_array *pieces; // x19
  System_Predicate_object__o *_9__62_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int64_t result; // x0

  if ( (byte_4D2E31E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Find_WarBoardPieceData___);
    sub_1C93AD4(&System_Predicate_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__);
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E31E = 1;
  }
  v3 = WarBoardData___c_TypeInfo;
  pieces = (System_Object_array *)this->fields.pieces;
  if ( !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v3 = WarBoardData___c_TypeInfo;
  }
  _9__62_0 = (System_Predicate_object__o *)v3->static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__62_0 = (System_Predicate_object__o *)sub_1C93D20(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_object____ctor(_9__62_0, v6, Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, 0);
    static_fields = WarBoardData___c_TypeInfo->static_fields;
    static_fields->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__62_0, (int32_t)_9__62_0, v8, v9, v10, v11, v12, v13);
  }
  result = (int64_t)System_Array__Find_object_(
                      pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_32A8FC0 *)Method_System_Array_Find_WarBoardPieceData___);
  if ( result )
    return *(_QWORD *)(result + 248);
  return result;
}


int32_t WarBoardData__get_TurnCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardDataEntity_o *serverData; // x8

  serverData = this->fields.serverData;
  if ( serverData )
    return serverData->fields.turn;
  else
    return 0;
}


System_Collections_Generic_Dictionary_string__object__o *WarBoardData__get_bgAnimationInfo(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields._bgAnimationInfo_k__BackingField;
}


int32_t WarBoardData__get_id(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1C93D2C(this, method);
  return stageEntity->fields.id;
}


int32_t WarBoardData__get_maxForceId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._maxForceId_k__BackingField;
}


int32_t WarBoardData__get_maxGroupId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._maxGroupId_k__BackingField;
}


void WarBoardData__set_ContinueConsumeType(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ContinueConsumeType_k__BackingField = value;
}


void WarBoardData__set_CurrentMemberCount(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentMemberCount_k__BackingField = value;
}


void WarBoardData__set_CurrentPartyCost(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentPartyCost_k__BackingField = value;
}


void WarBoardData__set_IsContinue(WarBoardData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsContinue_k__BackingField = value;
}


void WarBoardData__set_IsNextTurn(WarBoardData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNextTurn_k__BackingField = value;
}


void WarBoardData__set_bgAnimationInfo(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._bgAnimationInfo_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardData__set_maxForceId(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._maxForceId_k__BackingField = value;
}


void WarBoardData__set_maxGroupId(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._maxGroupId_k__BackingField = value;
}


void WarBoardData_BattleParticipantInfo___ctor(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v7; // x0
  const MethodInfo *v8; // x3
  struct WarBoardPieceData_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  v9 = WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(v7, attackPieceData, targetPieceData, v8);
  this->fields._Participants_k__BackingField = v9;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v9, v10, v11, v12, v13, v14, v15);
}


void WarBoardData_BattleParticipantInfo___ctor_38734536(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  void *monitor; // x1
  System_Func_T__TResult__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Object_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4D2E480 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
    sub_1C93AD4(&System_Func_uint__WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__);
    sub_1C93AD4(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
    byte_4D2E480 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = sub_1C93D20(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( SLODWORD(uniqueIndexArray->max_length) > 1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v5 )
    {
      monitor = Instance[27].monitor;
      *(_QWORD *)(v5 + 16) = monitor;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)monitor, v8, v9, v10, v11, v12, v13);
      v15 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_uint__WarBoardPieceData__TypeInfo);
      System_Func_uint__object____ctor(
        v15,
        (Il2CppObject *)v5,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        0);
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__object_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v15,
                                                                   (const MethodInfo_31DC05C *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v17 = System_Linq_Enumerable__ToArray_object_(
              v16,
              (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = (struct WarBoardPieceData_array *)v17;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v17, v18, v19, v20, v21, v22, v23);
      return;
    }
LABEL_9:
    sub_1C93D2C(Instance, v7);
  }
  this->fields._Invalid_k__BackingField = 1;
}


WarBoardPieceData_array *WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  WarBoardData_o *Instance; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  il2cpp_array_size_t stageNpcMaster; // x8
  WarBoardPieceData_array *v30; // x20
  unsigned __int64 v31; // x23
  WarBoardPieceData_o **p_npcEntityDict; // x25
  WarBoardPieceData_o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0

  if ( (byte_4D2E482 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E482 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v6 )
    goto LABEL_31;
  items = v6->fields._items;
  v16 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_31;
  size = v6->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)attackPieceData,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v18[4] = (Il2CppClass *)attackPieceData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v18 + 4), (int32_t)attackPieceData, v9, v10, v11, v12, v13, v14);
  }
  v25 = v6->fields._items;
  v26 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
  ++v6->fields._version;
  if ( !v25 )
    goto LABEL_31;
  v27 = v6->fields._size;
  if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      (Il2CppObject *)targetPieceData,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v6->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)targetPieceData;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v28 + 4), (int32_t)targetPieceData, v19, v20, v21, v22, v23, v24);
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance
    || !targetPieceData
    || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0
    || (Instance = (WarBoardData_o *)WarBoardData__GetPicesForRangeIsAlive(
                                       Instance,
                                       targetPieceData->fields._nowSquareIndex_k__BackingField,
                                       1,
                                       1,
                                       0)) == 0 )
  {
LABEL_31:
    sub_1C93D2C(Instance, v8);
  }
  stageNpcMaster = (il2cpp_array_size_t)Instance->fields.stageNpcMaster;
  v30 = (WarBoardPieceData_array *)Instance;
  if ( (int)stageNpcMaster >= 1 )
  {
    v31 = 0;
    p_npcEntityDict = (WarBoardPieceData_o **)&Instance->fields.npcEntityDict;
    do
    {
      if ( v31 >= (unsigned int)stageNpcMaster )
        sub_1C93D34(Instance);
      v33 = p_npcEntityDict[v31];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_object___Contains(
                                     v6,
                                     (Il2CppObject *)v33,
                                     (const MethodInfo_3879D2C *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v33 )
          goto LABEL_31;
        if ( v33->fields._type_k__BackingField != 1 )
        {
          Instance = (WarBoardData_o *)v33->fields._battleServant_k__BackingField;
          if ( !Instance
            || (Instance = (WarBoardData_o *)BattleServantData__HasAvailableWarBoardNotAttackedBuff(
                                               (BattleServantData_o *)Instance,
                                               0),
                ((unsigned __int8)Instance & 1) == 0) )
          {
            v40 = v6->fields._items;
            v41 = Method_System_Collections_Generic_List_WarBoardPieceData__Add__;
            ++v6->fields._version;
            if ( !v40 )
              goto LABEL_31;
            v42 = v6->fields._size;
            if ( (unsigned int)v42 >= LODWORD(v40->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v33,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
            }
            else
            {
              v43 = &v40->obj.klass + v42;
              v6->fields._size = v42 + 1;
              v43[4] = (Il2CppClass *)v33;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v43 + 4), (int32_t)v33, v34, v35, v36, v37, v38, v39);
            }
          }
        }
      }
      LODWORD(stageNpcMaster) = v30->max_length;
      ++v31;
    }
    while ( (__int64)v31 < (int)stageNpcMaster );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_object___ToArray(
                                      v6,
                                      (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4D2E483 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardData_BattleParticipantInfo_TypeInfo);
    byte_4D2E483 = 1;
  }
  v3 = (WarBoardData_BattleParticipantInfo_o *)sub_1C93D20(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor_38734536(v3, uniqueIndexArray, v4);
  return v3;
}


System_UInt32_array *WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  System_Func_T__TResult__o *_9__14_0; // x20
  Il2CppObject *v6; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_4D2E481 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_uint___);
    sub_1C93AD4(&System_Func_WarBoardPieceData__uint__TypeInfo);
    sub_1C93AD4(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__);
    sub_1C93AD4(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_4D2E481 = 1;
  }
  v3 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  if ( !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
    v3 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  _9__14_0 = (System_Func_T__TResult__o *)v3->static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__14_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_WarBoardPieceData__uint__TypeInfo);
    System_Func_object__uint____ctor(
      _9__14_0,
      v6,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      0);
    static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    static_fields->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__14_0, (int32_t)_9__14_0, v8, v9, v10, v11, v12, v13);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_31DB48C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v14,
           (const MethodInfo_31E3E28 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1C93D2C(this, method);
  if ( !LODWORD(Participants_k__BackingField->max_length) )
    sub_1C93D34(this);
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_1C93D2C(this, method);
  if ( LODWORD(Participants_k__BackingField->max_length) <= 1 )
    sub_1C93D34(this);
  return Participants_k__BackingField->m_Items[1];
}


bool WarBoardData_BattleParticipantInfo__get_Invalid(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Invalid_k__BackingField;
}


WarBoardPieceData_array *WarBoardData_BattleParticipantInfo__get_Participants(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Participants_k__BackingField;
}


void WarBoardData_BattleParticipantInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E484 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardData_BattleParticipantInfo___c_TypeInfo);
    byte_4D2E484 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardData_BattleParticipantInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardData_BattleParticipantInfo___c___ctor(
        WarBoardData_BattleParticipantInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


uint32_t WarBoardData_BattleParticipantInfo___c___ToUniqueIndexArray_b__14_0(
        WarBoardData_BattleParticipantInfo___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._uniqueIndex_k__BackingField;
}


void WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


WarBoardPieceData_o *WarBoardData_BattleParticipantInfo___c__DisplayClass13_0____ctor_b__0(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        uint32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_1C93D2C(0, x);
  return WarBoardData__GetPiece_38495500(warBoardData, x, 0, 0);
}


void WarBoardData_SquareRangeSearch___ctor(
        WarBoardData_SquareRangeSearch_o *this,
        int32_t position,
        int32_t range,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareIndex = position;
  this->fields.range = range;
}


void WarBoardData_WarBoardDeadBreakList___ctor(WarBoardData_WarBoardDeadBreakList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardData_WarBoardLocalSaveData___ctor(WarBoardData_WarBoardLocalSaveData_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct UnityEngine_Vector2_o zeroVector; // d1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  int32_t v58; // w2
  int32_t v59; // w3
  System_String_o *v60; // x4
  int32_t v61; // w5
  int64_t v62; // x6
  System_String_o *v63; // x7
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  *(_QWORD *)&this->fields.questId = 0;
  this->fields.stageId = 0;
  this->fields.pieceSaves = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.pieceSaves, 0, v3, v4, v5, v6, v7, v8);
  this->fields.itemSaves = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.itemSaves, 0, v9, v10, v11, v12, v13, v14);
  this->fields.treasureSaves = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.treasureSaves, 0, v15, v16, v17, v18, v19, v20);
  this->fields.wallSaves = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.wallSaves, 0, v21, v22, v23, v24, v25, v26);
  this->fields.squareSaves = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.squareSaves, 0, v27, v28, v29, v30, v31, v32);
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
  }
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  this->fields.cameraSize = 0.0;
  *(_QWORD *)&this->fields.turn = 0xFFFFFFFF00000000LL;
  this->fields.turnGroupId = -1;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.cameraPos = zeroVector;
  this->fields.eventSaves = 0;
  *(_QWORD *)&this->fields.randLogicCount = 0;
  this->fields.isPlayedHalfDeadMessage = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.eventSaves, 0, v33, v34, v35, v36, v37, v38);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    0,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.prevCondSaves = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.prevCondSaves, 0, v46, v47, v48, v49, v50, v51);
  this->fields.reinforcementsSaves = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.reinforcementsSaves, 0, v52, v53, v54, v55, v56, v57);
  this->fields.playedReinforcements = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.playedReinforcements, 0, v58, v59, v60, v61, v62, v63);
  this->fields.uiDataSaves = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.uiDataSaves, 0, v64, v65, v66, v67, v68, v69);
  this->fields.bgAnimationInfo = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bgAnimationInfo, 0, v70, v71, v72, v73, v74, v75);
  this->fields.squareIndexInfo = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.squareIndexInfo, 0, v76, v77, v78, v79, v80, v81);
  this->fields.bossBattleInfo = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bossBattleInfo, 0, v82, v83, v84, v85, v86, v87);
}


void WarBoardData_WarBoardLocalSaveData___ctor_38729844(
        WarBoardData_WarBoardLocalSaveData_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 GutsCount; // x0
  __int64 v6; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardPieceData_array *pieces; // x8
  il2cpp_array_size_t max_length; // x22
  struct WarBoardPieceData_SaveData_array *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  unsigned __int64 v17; // x24
  __int64 v18; // x26
  __int64 v19; // x27
  struct WarBoardPieceData_array *v20; // x8
  unsigned int *pieceSaves; // x28
  WarBoardPieceData_o *v22; // x23
  WarBoardPieceData_SaveData_o *v23; // x22
  const MethodInfo *v24; // x2
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct WarBoardItemData_array *items; // x8
  il2cpp_array_size_t v32; // x22
  struct WarBoardItemData_SaveData_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  unsigned __int64 v40; // x24
  __int64 v41; // x26
  __int64 v42; // x27
  struct WarBoardItemData_array *v43; // x8
  unsigned int *itemSaves; // x28
  WarBoardItemData_o *v45; // x23
  WarBoardItemData_SaveData_o *v46; // x22
  const MethodInfo *v47; // x2
  int32_t v48; // w2
  int32_t v49; // w3
  System_String_o *v50; // x4
  int32_t v51; // w5
  int64_t v52; // x6
  System_String_o *v53; // x7
  struct WarBoardTreasureData_array *treasures; // x8
  il2cpp_array_size_t v55; // x22
  struct WarBoardTreasureData_SaveData_array *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  unsigned __int64 v63; // x24
  __int64 v64; // x26
  __int64 v65; // x27
  struct WarBoardTreasureData_array *v66; // x8
  unsigned int *treasureSaves; // x28
  WarBoardTreasureData_o *v68; // x23
  WarBoardTreasureData_SaveData_o *v69; // x22
  const MethodInfo *v70; // x2
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  struct WarBoardWallData_array *walls; // x8
  il2cpp_array_size_t v78; // x22
  struct WarBoardWallData_SaveData_array *v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  unsigned __int64 v86; // x24
  __int64 v87; // x26
  __int64 v88; // x27
  struct WarBoardWallData_array *v89; // x8
  unsigned int *wallSaves; // x28
  WarBoardWallData_o *v91; // x23
  WarBoardWallData_SaveData_o *v92; // x22
  const MethodInfo *v93; // x2
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  struct WarBoardSquareData_array *squares; // x8
  il2cpp_array_size_t v101; // x22
  struct WarBoardSquareData_SaveData_array *v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  System_String_o *v105; // x4
  int32_t v106; // w5
  int64_t v107; // x6
  System_String_o *v108; // x7
  unsigned __int64 v109; // x24
  __int64 v110; // x26
  __int64 v111; // x27
  struct WarBoardSquareData_array *v112; // x8
  unsigned int *squareSaves; // x28
  WarBoardSquareData_o *v114; // x23
  WarBoardSquareData_SaveData_o *v115; // x22
  const MethodInfo *v116; // x2
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  struct UnityEngine_Vector2_o zeroVector; // d0
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  __int64 size; // x21
  struct WarBoardEventData_SaveData_array *v126; // x0
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  unsigned __int64 v139; // x23
  __int64 v140; // x28
  unsigned int *eventSaves; // x29
  Il2CppObject *Item; // x25
  WarBoardEventData_SaveData_o *v143; // x24
  const MethodInfo *v144; // x2
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  __int64 v160; // x21
  struct WarBoardPrevCondData_SaveData_array *v161; // x0
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  unsigned __int64 v168; // x23
  __int64 v169; // x28
  unsigned int *prevCondSaves; // x29
  Il2CppObject *v171; // x25
  WarBoardPrevCondData_SaveData_o *v172; // x24
  const MethodInfo *v173; // x2
  int32_t v174; // w2
  int32_t v175; // w3
  System_String_o *v176; // x4
  int32_t v177; // w5
  int64_t v178; // x6
  System_String_o *v179; // x7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  __int64 v181; // x21
  struct HoldReinforcementsData_SaveData_array *v182; // x0
  int32_t v183; // w2
  int32_t v184; // w3
  System_String_o *v185; // x4
  int32_t v186; // w5
  int64_t v187; // x6
  System_String_o *v188; // x7
  unsigned __int64 v189; // x23
  __int64 v190; // x28
  unsigned int *reinforcementsSaves; // x29
  Il2CppObject *v192; // x25
  HoldReinforcementsData_SaveData_o *v193; // x24
  const MethodInfo *v194; // x2
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  struct System_Int32_array *v201; // x0
  int32_t v202; // w2
  int32_t v203; // w3
  System_String_o *v204; // x4
  int32_t v205; // w5
  int64_t v206; // x6
  System_String_o *v207; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  __int64 v209; // x21
  struct WarBoardUiData_SaveData_array *v210; // x0
  int32_t v211; // w2
  int32_t v212; // w3
  System_String_o *v213; // x4
  int32_t v214; // w5
  int64_t v215; // x6
  System_String_o *v216; // x7
  unsigned __int64 v217; // x23
  __int64 v218; // x28
  unsigned int *uiDataSaves; // x29
  Il2CppObject *v220; // x25
  WarBoardUiData_SaveData_o *v221; // x24
  const MethodInfo *v222; // x2
  int32_t v223; // w2
  int32_t v224; // w3
  System_String_o *v225; // x4
  int32_t v226; // w5
  int64_t v227; // x6
  System_String_o *v228; // x7
  struct WarBoardDataEntity_o *v229; // x8
  int32_t v230; // w22
  struct WarBoardSquareIndexData_SaveData_array *v231; // x0
  int32_t v232; // w2
  int32_t v233; // w3
  System_String_o *v234; // x4
  int32_t v235; // w5
  int64_t v236; // x6
  System_String_o *v237; // x7
  unsigned __int64 v238; // x24
  __int64 v239; // x26
  __int64 v240; // x27
  struct WarBoardDataEntity_o *v241; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  unsigned int *v243; // x28
  WarBoardSquareIndexData_o *v244; // x23
  WarBoardSquareIndexData_SaveData_o *v245; // x22
  const MethodInfo *v246; // x2
  int32_t v247; // w2
  int32_t v248; // w3
  System_String_o *v249; // x4
  int32_t v250; // w5
  int64_t v251; // x6
  System_String_o *v252; // x7
  struct WarBoardDataEntity_o *v253; // x8
  int32_t v254; // w22
  struct WarBoardBossBattleData_SaveData_array *v255; // x0
  int32_t v256; // w2
  int32_t v257; // w3
  System_String_o *v258; // x4
  int32_t v259; // w5
  int64_t v260; // x6
  System_String_o *v261; // x7
  unsigned __int64 v262; // x24
  __int64 v263; // x26
  __int64 v264; // x27
  struct WarBoardDataEntity_o *v265; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  unsigned int *v267; // x28
  WarBoardBossBattleData_o *v268; // x23
  WarBoardBossBattleData_SaveData_o *v269; // x22
  int32_t v270; // w2
  int32_t v271; // w3
  System_String_o *v272; // x4
  int32_t v273; // w5
  int64_t v274; // x6
  System_String_o *v275; // x7
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v277; // x0

  if ( (byte_4D2E47F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
    sub_1C93AD4(&WarBoardTreasureData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardSquareData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardSquareIndexData_SaveData___TypeInfo);
    sub_1C93AD4(&HoldReinforcementsData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardItemData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardWallData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardPrevCondData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardEventData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardUiData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardPieceData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardBossBattleData_SaveData___TypeInfo);
    sub_1C93AD4(&WarBoardSquareData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardTreasureData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardBossBattleData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardItemData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardPrevCondData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardWallData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardUiData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardEventData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardSquareIndexData_SaveData_TypeInfo);
    sub_1C93AD4(&HoldReinforcementsData_SaveData_TypeInfo);
    sub_1C93AD4(&WarBoardPieceData_SaveData_TypeInfo);
    byte_4D2E47F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !warBoardData )
    goto LABEL_117;
  serverData = warBoardData->fields.serverData;
  if ( !serverData )
    goto LABEL_117;
  *(_QWORD *)&this->fields.questId = *(_QWORD *)&serverData->fields.questId;
  this->fields.stageId = serverData->fields.stageId;
  this->fields.turn = serverData->fields.turn;
  *(_QWORD *)&this->fields.turnForceId = *(_QWORD *)&serverData->fields.turnForceId;
  pieces = warBoardData->fields.pieces;
  if ( !pieces )
    goto LABEL_117;
  max_length = pieces->max_length;
  v10 = (struct WarBoardPieceData_SaveData_array *)sub_1C93B7C(
                                                     WarBoardPieceData_SaveData___TypeInfo,
                                                     (unsigned int)max_length);
  this->fields.pieceSaves = v10;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.pieceSaves, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    v18 = (unsigned int)max_length;
    v19 = 8;
    while ( 1 )
    {
      v20 = warBoardData->fields.pieces;
      if ( !v20 )
        break;
      if ( v17 >= LODWORD(v20->max_length) )
        goto LABEL_118;
      pieceSaves = (unsigned int *)this->fields.pieceSaves;
      v22 = *(WarBoardPieceData_o **)((char *)&v20->obj.klass + v19 * 4);
      v23 = (WarBoardPieceData_SaveData_o *)sub_1C93D20(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_38732896(v23, v22, v24);
      if ( !pieceSaves )
        break;
      if ( v23 )
      {
        GutsCount = sub_1C93C10(v23, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !GutsCount )
        {
LABEL_119:
          v277 = sub_1C93D50();
          sub_1C93BFC(v277, 0);
        }
      }
      if ( v17 >= pieceSaves[6] )
LABEL_118:
        sub_1C93D34(GutsCount);
      *(_QWORD *)&pieceSaves[v19] = v23;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&pieceSaves[v19], (int32_t)v23, v25, v26, v27, v28, v29, v30);
      ++v17;
      v19 += 2;
      if ( v18 == v17 )
        goto LABEL_15;
    }
LABEL_117:
    sub_1C93D2C(GutsCount, v6);
  }
LABEL_15:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_117;
  v32 = items->max_length;
  v33 = (struct WarBoardItemData_SaveData_array *)sub_1C93B7C(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v32);
  this->fields.itemSaves = v33;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.itemSaves, (int32_t)v33, v34, v35, v36, v37, v38, v39);
  if ( (int)v32 >= 1 )
  {
    v40 = 0;
    v41 = (unsigned int)v32;
    v42 = 8;
    do
    {
      v43 = warBoardData->fields.items;
      if ( !v43 )
        goto LABEL_117;
      if ( v40 >= LODWORD(v43->max_length) )
        goto LABEL_118;
      itemSaves = (unsigned int *)this->fields.itemSaves;
      v45 = *(WarBoardItemData_o **)((char *)&v43->obj.klass + v42 * 4);
      v46 = (WarBoardItemData_SaveData_o *)sub_1C93D20(WarBoardItemData_SaveData_TypeInfo);
      WarBoardItemData_SaveData___ctor_38732980(v46, v45, v47);
      if ( !itemSaves )
        goto LABEL_117;
      if ( v46 )
      {
        GutsCount = sub_1C93C10(v46, *(_QWORD *)(*(_QWORD *)itemSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v40 >= itemSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&itemSaves[v42] = v46;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&itemSaves[v42], (int32_t)v46, v48, v49, v50, v51, v52, v53);
      ++v40;
      v42 += 2;
    }
    while ( v41 != v40 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_117;
  v55 = treasures->max_length;
  v56 = (struct WarBoardTreasureData_SaveData_array *)sub_1C93B7C(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v55);
  this->fields.treasureSaves = v56;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.treasureSaves, (int32_t)v56, v57, v58, v59, v60, v61, v62);
  if ( (int)v55 >= 1 )
  {
    v63 = 0;
    v64 = (unsigned int)v55;
    v65 = 8;
    do
    {
      v66 = warBoardData->fields.treasures;
      if ( !v66 )
        goto LABEL_117;
      if ( v63 >= LODWORD(v66->max_length) )
        goto LABEL_118;
      treasureSaves = (unsigned int *)this->fields.treasureSaves;
      v68 = *(WarBoardTreasureData_o **)((char *)&v66->obj.klass + v65 * 4);
      v69 = (WarBoardTreasureData_SaveData_o *)sub_1C93D20(WarBoardTreasureData_SaveData_TypeInfo);
      WarBoardTreasureData_SaveData___ctor_38733064(v69, v68, v70);
      if ( !treasureSaves )
        goto LABEL_117;
      if ( v69 )
      {
        GutsCount = sub_1C93C10(v69, *(_QWORD *)(*(_QWORD *)treasureSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v63 >= treasureSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&treasureSaves[v65] = v69;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&treasureSaves[v65], (int32_t)v69, v71, v72, v73, v74, v75, v76);
      ++v63;
      v65 += 2;
    }
    while ( v64 != v63 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_117;
  v78 = walls->max_length;
  v79 = (struct WarBoardWallData_SaveData_array *)sub_1C93B7C(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v78);
  this->fields.wallSaves = v79;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.wallSaves, (int32_t)v79, v80, v81, v82, v83, v84, v85);
  if ( (int)v78 >= 1 )
  {
    v86 = 0;
    v87 = (unsigned int)v78;
    v88 = 8;
    do
    {
      v89 = warBoardData->fields.walls;
      if ( !v89 )
        goto LABEL_117;
      if ( v86 >= LODWORD(v89->max_length) )
        goto LABEL_118;
      wallSaves = (unsigned int *)this->fields.wallSaves;
      v91 = *(WarBoardWallData_o **)((char *)&v89->obj.klass + v88 * 4);
      v92 = (WarBoardWallData_SaveData_o *)sub_1C93D20(WarBoardWallData_SaveData_TypeInfo);
      WarBoardWallData_SaveData___ctor_38733180(v92, v91, v93);
      if ( !wallSaves )
        goto LABEL_117;
      if ( v92 )
      {
        GutsCount = sub_1C93C10(v92, *(_QWORD *)(*(_QWORD *)wallSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v86 >= wallSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&wallSaves[v88] = v92;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&wallSaves[v88], (int32_t)v92, v94, v95, v96, v97, v98, v99);
      ++v86;
      v88 += 2;
    }
    while ( v87 != v86 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_117;
  v101 = squares->max_length;
  v102 = (struct WarBoardSquareData_SaveData_array *)sub_1C93B7C(
                                                       WarBoardSquareData_SaveData___TypeInfo,
                                                       (unsigned int)v101);
  this->fields.squareSaves = v102;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.squareSaves,
    (int32_t)v102,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  if ( (int)v101 >= 1 )
  {
    v109 = 0;
    v110 = (unsigned int)v101;
    v111 = 8;
    do
    {
      v112 = warBoardData->fields.squares;
      if ( !v112 )
        goto LABEL_117;
      if ( v109 >= LODWORD(v112->max_length) )
        goto LABEL_118;
      squareSaves = (unsigned int *)this->fields.squareSaves;
      v114 = *(WarBoardSquareData_o **)((char *)&v112->obj.klass + v111 * 4);
      v115 = (WarBoardSquareData_SaveData_o *)sub_1C93D20(WarBoardSquareData_SaveData_TypeInfo);
      WarBoardSquareData_SaveData___ctor_38733288(v115, v114, v116);
      if ( !squareSaves )
        goto LABEL_117;
      if ( v115 )
      {
        GutsCount = sub_1C93C10(v115, *(_QWORD *)(*(_QWORD *)squareSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v109 >= squareSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&squareSaves[v111] = v115;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&squareSaves[v111], (int32_t)v115, v117, v118, v119, v120, v121, v122);
      ++v109;
      v111 += 2;
    }
    while ( v110 != v109 );
  }
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
  }
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  *(_QWORD *)&this->fields.cameraSize = 3212836864LL;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.cameraPos = zeroVector;
  this->fields.randLogicCount = BattleRandom__GetLogicCount(0);
  GutsCount = BattleRandom__GetGutsCount(0);
  this->fields.randGutsCount = GutsCount;
  this->fields.isPlayedHalfDeadMessage = warBoardData->fields.isPlayedHalfDeadMessage;
  listEvent = warBoardData->fields.listEvent;
  if ( !listEvent )
    goto LABEL_117;
  size = (unsigned int)listEvent->fields._size;
  v126 = (struct WarBoardEventData_SaveData_array *)sub_1C93B7C(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size);
  this->fields.eventSaves = v126;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventSaves,
    (int32_t)v126,
    v127,
    v128,
    v129,
    v130,
    v131,
    v132);
  if ( (int)size >= 1 )
  {
    v139 = 0;
    v140 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listEvent;
      if ( !GutsCount )
        goto LABEL_117;
      eventSaves = (unsigned int *)this->fields.eventSaves;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v139,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_WarBoardEventData__get_Item__);
      v143 = (WarBoardEventData_SaveData_o *)sub_1C93D20(WarBoardEventData_SaveData_TypeInfo);
      WarBoardEventData_SaveData___ctor_38733380(v143, (WarBoardEventData_o *)Item, v144);
      if ( !eventSaves )
        goto LABEL_117;
      if ( v143 )
      {
        GutsCount = sub_1C93C10(v143, *(_QWORD *)(*(_QWORD *)eventSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v139 >= eventSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&eventSaves[v140] = v143;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&eventSaves[v140], (int32_t)v143, v145, v146, v147, v148, v149, v150);
      ++v139;
      v140 += 2;
    }
    while ( size != v139 );
  }
  this->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  this->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.latestPieceActionSquareIndexes,
    (int32_t)latestPieceActionSquareIndexes,
    v133,
    v134,
    v135,
    v136,
    v137,
    v138);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  this->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (int32_t)latestBattlePieceUniqueIndexes,
    v153,
    v154,
    v155,
    v156,
    v157,
    v158);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_117;
  v160 = (unsigned int)listPrevCond->fields._size;
  v161 = (struct WarBoardPrevCondData_SaveData_array *)sub_1C93B7C(
                                                         WarBoardPrevCondData_SaveData___TypeInfo,
                                                         (unsigned int)v160);
  this->fields.prevCondSaves = v161;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.prevCondSaves,
    (int32_t)v161,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  if ( (int)v160 >= 1 )
  {
    v168 = 0;
    v169 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listPrevCond;
      if ( !GutsCount )
        goto LABEL_117;
      prevCondSaves = (unsigned int *)this->fields.prevCondSaves;
      v171 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v168,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__);
      v172 = (WarBoardPrevCondData_SaveData_o *)sub_1C93D20(WarBoardPrevCondData_SaveData_TypeInfo);
      WarBoardPrevCondData_SaveData___ctor_38733440(v172, (WarBoardPrevCondData_o *)v171, v173);
      if ( !prevCondSaves )
        goto LABEL_117;
      if ( v172 )
      {
        GutsCount = sub_1C93C10(v172, *(_QWORD *)(*(_QWORD *)prevCondSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v168 >= prevCondSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&prevCondSaves[v169] = v172;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&prevCondSaves[v169],
        (int32_t)v172,
        v174,
        v175,
        v176,
        v177,
        v178,
        v179);
      ++v168;
      v169 += 2;
    }
    while ( v160 != v168 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_117;
  v181 = (unsigned int)reinforcementsSaveList->fields._size;
  v182 = (struct HoldReinforcementsData_SaveData_array *)sub_1C93B7C(
                                                           HoldReinforcementsData_SaveData___TypeInfo,
                                                           (unsigned int)v181);
  this->fields.reinforcementsSaves = v182;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.reinforcementsSaves,
    (int32_t)v182,
    v183,
    v184,
    v185,
    v186,
    v187,
    v188);
  if ( (int)v181 >= 1 )
  {
    v189 = 0;
    v190 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.reinforcementsSaveList;
      if ( !GutsCount )
        goto LABEL_117;
      reinforcementsSaves = (unsigned int *)this->fields.reinforcementsSaves;
      v192 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v189,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__);
      v193 = (HoldReinforcementsData_SaveData_o *)sub_1C93D20(HoldReinforcementsData_SaveData_TypeInfo);
      HoldReinforcementsData_SaveData___ctor_38733492(v193, (HoldReinforcementsData_o *)v192, v194);
      if ( !reinforcementsSaves )
        goto LABEL_117;
      if ( v193 )
      {
        GutsCount = sub_1C93C10(v193, *(_QWORD *)(*(_QWORD *)reinforcementsSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v189 >= reinforcementsSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&reinforcementsSaves[v190] = v193;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&reinforcementsSaves[v190],
        (int32_t)v193,
        v195,
        v196,
        v197,
        v198,
        v199,
        v200);
      ++v189;
      v190 += 2;
    }
    while ( v181 != v189 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_117;
  v201 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  this->fields.playedReinforcements = v201;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.playedReinforcements,
    (int32_t)v201,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_117;
  v209 = (unsigned int)listUiData->fields._size;
  v210 = (struct WarBoardUiData_SaveData_array *)sub_1C93B7C(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v209);
  this->fields.uiDataSaves = v210;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.uiDataSaves,
    (int32_t)v210,
    v211,
    v212,
    v213,
    v214,
    v215,
    v216);
  if ( (int)v209 >= 1 )
  {
    v217 = 0;
    v218 = 8;
    do
    {
      GutsCount = (__int64)warBoardData->fields.listUiData;
      if ( !GutsCount )
        goto LABEL_117;
      uiDataSaves = (unsigned int *)this->fields.uiDataSaves;
      v220 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)GutsCount,
               v217,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_WarBoardUiData__get_Item__);
      v221 = (WarBoardUiData_SaveData_o *)sub_1C93D20(WarBoardUiData_SaveData_TypeInfo);
      WarBoardUiData_SaveData___ctor_38733552(v221, (WarBoardUiData_o *)v220, v222);
      if ( !uiDataSaves )
        goto LABEL_117;
      if ( v221 )
      {
        GutsCount = sub_1C93C10(v221, *(_QWORD *)(*(_QWORD *)uiDataSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v217 >= uiDataSaves[6] )
        goto LABEL_118;
      *(_QWORD *)&uiDataSaves[v218] = v221;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&uiDataSaves[v218], (int32_t)v221, v223, v224, v225, v226, v227, v228);
      ++v217;
      v218 += 2;
    }
    while ( v209 != v217 );
  }
  v229 = warBoardData->fields.serverData;
  if ( !v229 )
    goto LABEL_117;
  v230 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v229->fields.squareIndexInfo,
           (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v231 = (struct WarBoardSquareIndexData_SaveData_array *)sub_1C93B7C(
                                                            WarBoardSquareIndexData_SaveData___TypeInfo,
                                                            (unsigned int)v230);
  this->fields.squareIndexInfo = v231;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.squareIndexInfo,
    (int32_t)v231,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
  if ( v230 >= 1 )
  {
    v238 = 0;
    v239 = (unsigned int)v230;
    v240 = 8;
    do
    {
      v241 = warBoardData->fields.serverData;
      if ( !v241 )
        goto LABEL_117;
      squareIndexInfo = v241->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_117;
      if ( v238 >= LODWORD(squareIndexInfo->max_length) )
        goto LABEL_118;
      v243 = (unsigned int *)this->fields.squareIndexInfo;
      v244 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v240 * 4);
      v245 = (WarBoardSquareIndexData_SaveData_o *)sub_1C93D20(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_38733632(v245, v244, v246);
      if ( !v243 )
        goto LABEL_117;
      if ( v245 )
      {
        GutsCount = sub_1C93C10(v245, *(_QWORD *)(*(_QWORD *)v243 + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v238 >= v243[6] )
        goto LABEL_118;
      *(_QWORD *)&v243[v240] = v245;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v243[v240], (int32_t)v245, v247, v248, v249, v250, v251, v252);
      ++v238;
      v240 += 2;
    }
    while ( v239 != v238 );
  }
  v253 = warBoardData->fields.serverData;
  if ( !v253 )
    goto LABEL_117;
  v254 = System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v253->fields.bossBattleInfo,
           (const MethodInfo_31C4444 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v255 = (struct WarBoardBossBattleData_SaveData_array *)sub_1C93B7C(
                                                           WarBoardBossBattleData_SaveData___TypeInfo,
                                                           (unsigned int)v254);
  this->fields.bossBattleInfo = v255;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.bossBattleInfo,
    (int32_t)v255,
    v256,
    v257,
    v258,
    v259,
    v260,
    v261);
  if ( v254 >= 1 )
  {
    v262 = 0;
    v263 = (unsigned int)v254;
    v264 = 8;
    do
    {
      v265 = warBoardData->fields.serverData;
      if ( !v265 )
        goto LABEL_117;
      bossBattleInfo = v265->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_117;
      if ( v262 >= LODWORD(bossBattleInfo->max_length) )
        goto LABEL_118;
      v267 = (unsigned int *)this->fields.bossBattleInfo;
      v268 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v264 * 4);
      v269 = (WarBoardBossBattleData_SaveData_o *)sub_1C93D20(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_38529920(v269, v268, 0);
      if ( !v267 )
        goto LABEL_117;
      if ( v269 )
      {
        GutsCount = sub_1C93C10(v269, *(_QWORD *)(*(_QWORD *)v267 + 64LL));
        if ( !GutsCount )
          goto LABEL_119;
      }
      if ( v262 >= v267[6] )
        goto LABEL_118;
      *(_QWORD *)&v267[v264] = v269;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v267[v264], (int32_t)v269, v270, v271, v272, v273, v274, v275);
      ++v262;
      v264 += 2;
    }
    while ( v263 != v262 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&this->fields.isContinue = 0;
  this->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
  this->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
}


void WarBoardData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E485 & 1) == 0 )
  {
    sub_1C93AD4(&WarBoardData___c_TypeInfo);
    byte_4D2E485 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(WarBoardData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardData___c_TypeInfo->static_fields->__9 = (struct WarBoardData___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)WarBoardData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardData___c___ctor(WarBoardData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardData___c____ctor_b__77_0(
        WarBoardData___c_o *this,
        WarBoardStageLayoutEntity_o *x,
        WarBoardStageLayoutEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_1C93D2C(this, x);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.forceId;
}


int32_t WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.groupId;
}


bool WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.isReceived;
}


BattleBuffData_o *WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !p )
    sub_1C93D2C(this, 0);
  battleServant_k__BackingField = p->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    return battleServant_k__BackingField->fields.buffData;
  else
    return 0;
}


bool WarBoardData___c___BuffTurnProgressing_b__191_1(
        WarBoardData___c_o *this,
        BattleBuffData_o *b,
        const MethodInfo *method)
{
  return b != 0;
}


void WarBoardData___c___BuffTurnProgressing_b__191_2(
        WarBoardData___c_o *this,
        BattleBuffData_o *b,
        const MethodInfo *method)
{
  if ( !b )
    sub_1C93D2C(this, 0);
  BattleBuffData__BoardTurnProgressing(b, 0);
}


bool WarBoardData___c___CheckWinCond_b__98_0(WarBoardData___c_o *this, int32_t x, const MethodInfo *method)
{
  return x > 0;
}


void WarBoardData___c___CreateEventBossUIDataTask_b__152_0(WarBoardData___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1
  WarBoardManager_o *v4; // x19

  if ( (byte_4D2E487 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2E487 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v3);
  v4 = (WarBoardManager_o *)Instance;
  WarBoardManager__UpdateEventBossUIData((WarBoardManager_o *)Instance, 0);
  WarBoardManager__SaveEventBossUIData(v4, v4->fields._EventId_k__BackingField, v4->fields._StageId_k__BackingField, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


bool WarBoardData___c___GetAliveEnemyServantPieces_b__110_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._isDead_k__BackingField
      && x->fields._forceId_k__BackingField
      && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetAlivePieces_b__107_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._isDead_k__BackingField;
}


bool WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._isDead_k__BackingField
      && !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetAliveServantPieces_b__108_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._isDead_k__BackingField && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 0;
}


bool WarBoardData___c___GetHoldReinforcements_b__188_0(
        WarBoardData___c_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.squareIndex;
}


bool WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


bool WarBoardData___c___GetPlayerPieces_b__121_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._iconId_k__BackingField != 0;
}


bool WarBoardData___c___IsReachableWinConditions_b__95_0(
        WarBoardData___c_o *this,
        System_Collections_Generic_KeyValuePair_int__bool__o status,
        const MethodInfo *method)
{
  bool value; // x19^4

  value = status.fields.value;
  if ( (byte_4D2E486 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__);
    byte_4D2E486 = 1;
  }
  return value;
}


int32_t WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._index_k__BackingField;
}


BattleServantData_o *WarBoardData___c___SetContinue_b__82_1(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._battleServant_k__BackingField;
}


bool WarBoardData___c___SetContinue_b__82_2(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._isDead_k__BackingField && x->fields._battleServant_k__BackingField != 0;
}


int32_t WarBoardData___c___SetContinue_b__82_3(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  if ( !x || (battleServant_k__BackingField = x->fields._battleServant_k__BackingField) == 0 )
    sub_1C93D2C(this, x);
  return battleServant_k__BackingField->fields.uniqueId;
}


void WarBoardData___c___SetContinue_b__82_4(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  WarBoardPieceData__ProcContinue(x, (const MethodInfo *)x);
}


bool WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


void WarBoardData___c___SetRequest_b__156_0(WarBoardData___c_o *this, WarBoardPieceData_o *x, const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  WarBoardPieceData__SetServarData(x, (const MethodInfo *)x);
}


System_String_o *WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return WarBoardItemData__ToJson(x, (const MethodInfo *)x);
}


bool WarBoardData___c___SetRequest_b__156_2(WarBoardData___c_o *this, System_String_o *x, const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0);
}


WarBoardPieceBaseComponent_o *WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_1C93D2C(this, 0);
  return p->fields.pieceComponent;
}


bool WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4D2E488 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2E488 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0, 0);
  if ( !v4 )
    return 0;
  if ( !c )
    sub_1C93D2C(v4, v5);
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))c->klass->vtable._4_get_BuffTrunNotice.methodPtr)(
                                 c,
                                 c->klass->vtable._4_get_BuffTrunNotice.method);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(v6, 0, 0);
}


void WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_2(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *n,
        const MethodInfo *method)
{
  if ( !n
    || (this = (WarBoardData___c_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *, const MethodInfo *))n->klass->vtable._4_get_BuffTrunNotice.methodPtr)(
                                       n,
                                       n->klass->vtable._4_get_BuffTrunNotice.method,
                                       method)) == 0 )
  {
    sub_1C93D2C(this, n);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0);
}


int32_t WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return UserServantEntity__getCost(x, 0);
}


bool WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._forceId_k__BackingField
      && !x->fields._groupId_k__BackingField
      && x->fields._type_k__BackingField == 1;
}


void WarBoardData___c__DisplayClass100_0___ctor(WarBoardData___c__DisplayClass100_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass100_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass100_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.ignoreDead )
  {
    if ( x )
      return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
LABEL_7:
    sub_1C93D2C(this, x);
  }
  if ( !x )
    goto LABEL_7;
  if ( x->fields._isDead_k__BackingField )
    return 0;
  return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}


void WarBoardData___c__DisplayClass101_0___ctor(WarBoardData___c__DisplayClass101_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass101_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass101_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._isDead_k__BackingField && x->fields._nowSquareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass102_0___ctor(WarBoardData___c__DisplayClass102_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass102_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass102_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.ignoreDead )
  {
    if ( x )
      return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueIndex;
LABEL_7:
    sub_1C93D2C(this, x);
  }
  if ( !x )
    goto LABEL_7;
  if ( x->fields._isDead_k__BackingField )
    return 0;
  return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueIndex;
}


void WarBoardData___c__DisplayClass105_0___ctor(WarBoardData___c__DisplayClass105_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass105_0___GetEventBossPiece_b__0(
        WarBoardData___c__DisplayClass105_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  if ( !x || (serverServantData = x->fields.serverServantData) == 0 )
    sub_1C93D2C(this, x);
  return serverServantData->fields.stageBossIdx == this->fields.stageBossIndex;
}


void WarBoardData___c__DisplayClass106_0___ctor(WarBoardData___c__DisplayClass106_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass106_0___GetServantPieces_b__0(
        WarBoardData___c__DisplayClass106_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  _BOOL4 v3; // w8

  if ( !x )
    sub_1C93D2C(this, 0);
  if ( x->fields._forceId_k__BackingField )
    v3 = 0;
  else
    v3 = x->fields._groupId_k__BackingField == 0;
  return this->fields.isPlayerGroup == v3 && !x->fields._type_k__BackingField && x->fields._iconId_k__BackingField != 0;
}


void WarBoardData___c__DisplayClass116_0___ctor(WarBoardData___c__DisplayClass116_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass116_0___GetPieces_b__0(
        WarBoardData___c__DisplayClass116_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return this->fields.forceIdOnly == HIBYTE(x->fields._uniqueIndex_k__BackingField) << 24;
}


void WarBoardData___c__DisplayClass117_0___ctor(WarBoardData___c__DisplayClass117_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass117_0___GetPieces_b__0(
        WarBoardData___c__DisplayClass117_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return this->fields.forceAndGroup == HIWORD(x->fields._uniqueIndex_k__BackingField) << 16;
}


void WarBoardData___c__DisplayClass118_0___ctor(WarBoardData___c__DisplayClass118_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass118_0___GetPicesForRange_b__0(
        WarBoardData___c__DisplayClass118_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass118_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D2E489 & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2E489 = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}


void WarBoardData___c__DisplayClass119_0___ctor(WarBoardData___c__DisplayClass119_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass119_0___GetPicesForRangeIsAlive_b__0(
        WarBoardData___c__DisplayClass119_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass119_0_o *v4; // x20

  v4 = this;
  if ( (byte_4D2E48A & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2E48A = 1;
  }
  if ( !x )
    sub_1C93D2C(this, x);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
}


void WarBoardData___c__DisplayClass123_0___ctor(WarBoardData___c__DisplayClass123_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass123_0___GetInRangeSquareIndecies_b__1(
        WarBoardData___c__DisplayClass123_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  _BOOL4 ignoreStart; // w9
  bool result; // w0

  ignoreStart = this->fields.ignoreStart;
  result = !this->fields.ignoreStart;
  if ( ignoreStart && this->fields.start != x )
    return 1;
  return result;
}


void WarBoardData___c__DisplayClass125_0___ctor(WarBoardData___c__DisplayClass125_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass125_0___SearchInRangeSquares_b__0(
        WarBoardData___c__DisplayClass125_0_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.squareIndex == this->fields.start;
}


void WarBoardData___c__DisplayClass125_1___ctor(WarBoardData___c__DisplayClass125_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass125_1___SearchInRangeSquares_b__1(
        WarBoardData___c__DisplayClass125_1_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.squareIndex != this->fields.position;
}


bool WarBoardData___c__DisplayClass125_1___SearchInRangeSquares_b__2(
        WarBoardData___c__DisplayClass125_1_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  struct WarBoardData___c__DisplayClass125_0_o *CS___8__locals1; // x8

  if ( !x )
    goto LABEL_6;
  if ( x->fields.squareIndex == this->fields.position )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
      return x->fields.range < CS___8__locals1->fields.nextRange;
LABEL_6:
    sub_1C93D2C(this, x);
  }
  return 0;
}


void WarBoardData___c__DisplayClass128_0___ctor(WarBoardData___c__DisplayClass128_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass128_0___GetSquare_b__0(
        WarBoardData___c__DisplayClass128_0_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass130_0___ctor(WarBoardData___c__DisplayClass130_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass130_0___GetCondSquare_b__0(
        WarBoardData___c__DisplayClass130_0_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass133_0___ctor(WarBoardData___c__DisplayClass133_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass133_0___GetDeploySquareIds_b__0(
        WarBoardData___c__DisplayClass133_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.value == x;
}


bool WarBoardData___c__DisplayClass133_0___GetDeploySquareIds_b__1(
        WarBoardData___c__DisplayClass133_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.value == x;
}


void WarBoardData___c__DisplayClass135_0___ctor(WarBoardData___c__DisplayClass135_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass135_0___GetItem_b__0(
        WarBoardData___c__DisplayClass135_0_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass137_0___ctor(WarBoardData___c__DisplayClass137_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass137_0___GetTreasure_b__0(
        WarBoardData___c__DisplayClass137_0_o *this,
        WarBoardTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass138_0___ctor(WarBoardData___c__DisplayClass138_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass138_0___GetUnusedTreasure_b__0(
        WarBoardData___c__DisplayClass138_0_o *this,
        WarBoardTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._isUse_k__BackingField && x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass140_0___ctor(WarBoardData___c__DisplayClass140_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass140_0___GetWall_b__0(
        WarBoardData___c__DisplayClass140_0_o *this,
        WarBoardWallData_o *x,
        const MethodInfo *method)
{
  if ( this->fields.ignoreDestroy )
  {
    if ( x )
      return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
LABEL_7:
    sub_1C93D2C(this, x);
  }
  if ( !x )
    goto LABEL_7;
  if ( !x->fields._isDestroy_k__BackingField )
    return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
  return 0;
}


void WarBoardData___c__DisplayClass142_0___ctor(WarBoardData___c__DisplayClass142_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass142_0___GetEffect_b__0(
        WarBoardData___c__DisplayClass142_0_o *this,
        WarBoardEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass143_0___ctor(WarBoardData___c__DisplayClass143_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass143_0___UpdateCurrentPartyCost_b__1(
        WarBoardData___c__DisplayClass143_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass143_0_o *v4; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *svtMaster; // x20
  __int64 v6; // x19
  __int64 v7; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  v4 = this;
  if ( (byte_4D2E48B & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2E48B = 1;
  }
  if ( !x )
    goto LABEL_9;
  svtMaster = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.svtMaster;
  v7 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(
                                                    v9,
                                                    0);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_object__object__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0 )
  {
LABEL_9:
    sub_1C93D2C(this, x);
  }
  return ServantEntity__get_IsServant((ServantEntity_o *)this, 0);
}


void WarBoardData___c__DisplayClass145_0___ctor(WarBoardData___c__DisplayClass145_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass145_0___GetPieceDispPriority_b__0(
        WarBoardData___c__DisplayClass145_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_1C93D2C(this, x);
  return x->fields._uniqueIndex_k__BackingField == piece->fields._uniqueIndex_k__BackingField;
}


void WarBoardData___c__DisplayClass151_0___ctor(WarBoardData___c__DisplayClass151_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass151_0___UpdateFromServerData_b__0(
        WarBoardData___c__DisplayClass151_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *wall; // x8

  if ( !x || (wall = this->fields.wall) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.id == wall->fields._wallId_k__BackingField;
}


void WarBoardData___c__DisplayClass153_0___ctor(WarBoardData___c__DisplayClass153_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass153_0___GetStageBossData_b__0(
        WarBoardData___c__DisplayClass153_0_o *this,
        WarBoardUserServantData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C93D2C(this, 0);
  return n->fields.stageBossIdx == this->fields.stageBossIdx;
}


void WarBoardData___c__DisplayClass154_0___ctor(WarBoardData___c__DisplayClass154_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__0(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  return this->fields.consumedPiecePopupClose;
}


void WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__1(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v14; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4D2E48C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_bool__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__);
    byte_4D2E48C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v5 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_1C93D20(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      0);
    this->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v6, v7, v8, v9, v10, v11);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_31C9C74 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v14 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_31C9C74 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_object___AsReadOnly(
                 (System_Collections_Generic_List_object__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_3879BC4 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v5) )
  {
    sub_1C93D2C(Only, value);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v5,
    _9__2,
    v14,
    (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *)Only,
    0);
}


void WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__2(
        WarBoardData___c__DisplayClass154_0_o *this,
        bool _,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2E48D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C93AD4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__);
    byte_4D2E48D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v7 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0);
    this->fields.__9__3 = _9__3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__3, (int32_t)_9__3, v8, v9, v10, v11, v12, v13);
  }
  if ( !v7 )
    sub_1C93D2C(Instance, v5);
  WarBoardManager__HideConsumedPieceActionPointPopup(v7, _9__3, 0);
}


void WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4D2E48E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__);
    byte_4D2E48E = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_31C9C74 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  _4__this = *(WarBoardData_o **)&KeyValuePair_int__object.fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__object___Remove(
          (System_Collections_Generic_Dictionary_int__object__o *)consumedPieceActionPointDict,
          KeyValuePair_int__object.fields.key,
          (const MethodInfo_34BE20C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(_4__this, value);
  }
  WarBoardData__ShowConsumedPieceActionPointPopup(_4__this, this->fields.consumedPieceActionPointDict, 0);
}


void WarBoardData___c__DisplayClass164_0___ctor(WarBoardData___c__DisplayClass164_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass164_0___GetPlayedEventData_b__0(
        WarBoardData___c__DisplayClass164_0_o *this,
        WarBoardEventData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C93D2C(this, 0);
  return a->fields._eventId_k__BackingField == this->fields.eventId;
}


void WarBoardData___c__DisplayClass171_0___ctor(WarBoardData___c__DisplayClass171_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass171_0___UpdateBossInfo_b__0(
        WarBoardData___c__DisplayClass171_0_o *this,
        WarBoardBossBattleData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C93D2C(this, 0);
  return n->fields.bossIdx == this->fields.bossId;
}


void WarBoardData___c__DisplayClass172_0___ctor(WarBoardData___c__DisplayClass172_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass172_0___IsBossInfo_b__0(
        WarBoardData___c__DisplayClass172_0_o *this,
        WarBoardBossBattleData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C93D2C(this, 0);
  return n->fields.bossIdx == this->fields.bossId;
}


void WarBoardData___c__DisplayClass173_0___ctor(WarBoardData___c__DisplayClass173_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass173_0___AddSquareInfo_b__0(
        WarBoardData___c__DisplayClass173_0_o *this,
        WarBoardSquareIndexData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.squareIndex == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass174_0___ctor(WarBoardData___c__DisplayClass174_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass174_0___DelSquareInfo_b__0(
        WarBoardData___c__DisplayClass174_0_o *this,
        WarBoardSquareIndexData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields.squareIndex == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass183_0___ctor(WarBoardData___c__DisplayClass183_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass183_0___GetClearedTurn_b__0(
        WarBoardData___c__DisplayClass183_0_o *this,
        WarBoardPrevCondData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C93D2C(this, 0);
  return a->fields._condId_k__BackingField == this->fields.condId;
}


void WarBoardData___c__DisplayClass187_0___ctor(WarBoardData___c__DisplayClass187_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass187_0___SaveHoldReinforcements_b__0(
        WarBoardData___c__DisplayClass187_0_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._id_k__BackingField == this->fields.stageReinforcementsId
      && x->fields._index_k__BackingField == this->fields.index;
}


void WarBoardData___c__DisplayClass188_0___ctor(WarBoardData___c__DisplayClass188_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass188_0___GetHoldReinforcements_b__1(
        WarBoardData___c__DisplayClass188_0_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return x->fields._id_k__BackingField == this->fields.targetStageReinforcementsId;
}


void WarBoardData___c__DisplayClass188_1___ctor(WarBoardData___c__DisplayClass188_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass188_1___GetHoldReinforcements_b__2(
        WarBoardData___c__DisplayClass188_1_o *this,
        ReinforcementsData_o *x,
        const MethodInfo *method)
{
  struct HoldReinforcementsData_o *pram; // x8

  if ( !x || (pram = this->fields.pram) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.stageReinforcementId == pram->fields._id_k__BackingField;
}


void WarBoardData___c__DisplayClass189_0___ctor(WarBoardData___c__DisplayClass189_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass189_0___GetReinforcements_b__0(
        WarBoardData___c__DisplayClass189_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_1C93D2C(this, x);
  return stageEntity->fields.id == x;
}


void WarBoardData___c__DisplayClass189_1___ctor(WarBoardData___c__DisplayClass189_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass189_1___GetReinforcements_b__1(
        WarBoardData___c__DisplayClass189_1_o *this,
        ReinforcementsData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass189_1_o *v4; // x19
  struct WarBoardData___c__DisplayClass189_0_o *CS___8__locals1; // x8
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8
  System_Int32_array *reinforcementsIdx; // x20
  System_Func_int__bool__o *_9__2; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  v4 = this;
  if ( (byte_4D2E48F & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_int____79060720);
    sub_1C93AD4(&System_Func_int__bool__TypeInfo);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_1C93AD4(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__);
    byte_4D2E48F = 1;
  }
  if ( !x
    || (CS___8__locals1 = v4->fields.CS___8__locals1) == 0
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0 )
  {
    sub_1C93D2C(this, x);
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = v4->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_1C93D20(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      0);
    v4->fields.__9__2 = _9__2;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
  }
  return BasicHelper__Any_int__51960056(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_318D8F8 *)Method_BasicHelper_Any_int____79060720);
}


bool WarBoardData___c__DisplayClass189_1___GetReinforcements_b__2(
        WarBoardData___c__DisplayClass189_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.i == x;
}


void WarBoardData___c__DisplayClass190_0___ctor(WarBoardData___c__DisplayClass190_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass190_0___IsReinforcementsApper_b__0(
        WarBoardData___c__DisplayClass190_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C93D2C(this, x);
  return entity->fields.id == x;
}


void WarBoardData___c__DisplayClass193_0___ctor(WarBoardData___c__DisplayClass193_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass193_0___GetUiData_b__0(
        WarBoardData___c__DisplayClass193_0_o *this,
        WarBoardUiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_1C93D2C(this, 0);
  return a->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void WarBoardData___c__DisplayClass194_0___ctor(WarBoardData___c__DisplayClass194_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass194_0___GetUiData_b__0(
        WarBoardData___c__DisplayClass194_0_o *this,
        WarBoardUiData_o *a,
        const MethodInfo *method)
{
  struct System_Int32_array *pieceIndex_k__BackingField; // x8
  unsigned int max_length; // w10
  struct System_Int32_array *pieceIndex; // x9
  unsigned int v6; // w11

  if ( !a )
    goto LABEL_15;
  pieceIndex_k__BackingField = a->fields._pieceIndex_k__BackingField;
  if ( !pieceIndex_k__BackingField )
    return 0;
  max_length = pieceIndex_k__BackingField->max_length;
  if ( !max_length )
    goto LABEL_14;
  pieceIndex = this->fields.pieceIndex;
  if ( !pieceIndex )
LABEL_15:
    sub_1C93D2C(this, a);
  v6 = pieceIndex->max_length;
  if ( !v6 )
    goto LABEL_14;
  if ( pieceIndex_k__BackingField->m_Items[0] == pieceIndex->m_Items[0] )
  {
    if ( max_length <= 1 || v6 <= 1 )
      goto LABEL_14;
    if ( pieceIndex_k__BackingField->m_Items[1] == pieceIndex->m_Items[1] )
    {
      if ( max_length > 2 && v6 > 2 )
        return pieceIndex_k__BackingField->m_Items[2] == pieceIndex->m_Items[2];
LABEL_14:
      sub_1C93D34(this);
    }
  }
  return 0;
}


void WarBoardData___c__DisplayClass77_0___ctor(WarBoardData___c__DisplayClass77_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_0____ctor_b__5(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.forceId == piece->fields.forceId
      && x->fields.groupId == piece->fields.groupId
      && x->fields.pieceIndex == piece->fields.pieceIndex;
}


void WarBoardData___c__DisplayClass77_1___ctor(WarBoardData___c__DisplayClass77_1_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_1____ctor_b__7(
        WarBoardData___c__DisplayClass77_1_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  struct WarBoardItemData_SaveData_o *item; // x8

  if ( !x || (item = this->fields.item) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.pieceIndex == item->fields.pieceIndex;
}


void WarBoardData___c__DisplayClass77_2___ctor(WarBoardData___c__DisplayClass77_2_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_2____ctor_b__8(
        WarBoardData___c__DisplayClass77_2_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  struct WarBoardTreasureData_SaveData_o *treasure; // x8

  if ( !x || (treasure = this->fields.treasure) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.treasureId == treasure->fields.treasureId;
}


void WarBoardData___c__DisplayClass77_3___ctor(WarBoardData___c__DisplayClass77_3_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_3____ctor_b__10(
        WarBoardData___c__DisplayClass77_3_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardWallData_SaveData_o *wall; // x8

  if ( !x || (wall = this->fields.wall) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.id == wall->fields.wallId && wall->fields.squareIndex == x->fields.beforeSquareIndex;
}


void WarBoardData___c__DisplayClass77_4___ctor(WarBoardData___c__DisplayClass77_4_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__11(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.treasureId == layout->fields.effectId;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.forceId == layout->fields.forceId
      && x->fields.groupId == layout->fields.groupId
      && x->fields.pieceIndex == layout->fields.pieceIndex;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__14(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.id == layout->fields.effectId;
}


void WarBoardData___c__DisplayClass77_5___ctor(WarBoardData___c__DisplayClass77_5_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass77_5____ctor_b__16(
        WarBoardData___c__DisplayClass77_5_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_1C93D2C(this, x);
  return x->fields._forceId_k__BackingField == piece->fields.forceId
      && x->fields._groupId_k__BackingField == piece->fields.groupId
      && x->fields._index_k__BackingField == piece->fields.pieceIndex;
}


bool WarBoardData___c__DisplayClass77_5____ctor_b__17(
        WarBoardData___c__DisplayClass77_5_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0 )
    sub_1C93D2C(this, x);
  return x->fields.forceId == piece->fields.forceId
      && x->fields.groupId == piece->fields.groupId
      && x->fields.pieceIndex == piece->fields.pieceIndex;
}


void WarBoardData___c__DisplayClass99_0___ctor(WarBoardData___c__DisplayClass99_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardData___c__DisplayClass99_0___GetPiecePosition_b__0(
        WarBoardData___c__DisplayClass99_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}