void __fastcall WarBoardData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v11; // x1
  struct WarBoardData_StaticFields *v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_41866A8 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardData_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_1662/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/, v8);
    sub_B2C35C(&StringLiteral_15231/*"WARBOARDDATA_SAVEDATA"*/, v9);
    byte_41866A8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardData_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15231/*"WARBOARDDATA_SAVEDATA"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15231/*"WARBOARDDATA_SAVEDATA"*/;
  sub_B2C2F8(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WarBoardData_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_1662/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  v12->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_1662/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v12->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
}


void __fastcall WarBoardData___ctor(
        WarBoardData_o *this,
        WarBoardStageEntity_o *stage,
        WarBoardStageLayoutEntity_array *layoutEntities,
        WarBoardRoadEntity_array *roadEntities,
        WarBoardDataEntity_o *serverData,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v149; // x19
  System_String_array **v150; // x2
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v156; // x19
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  struct System_Int32_array *v163; // x0
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  struct System_UInt32_array *v170; // x0
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v177; // x19
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v184; // x19
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  System_Collections_Generic_List_int__o *v191; // x19
  System_String_array **v192; // x2
  System_String_array **v193; // x3
  System_Boolean_array **v194; // x4
  System_Int32_array **v195; // x5
  System_Int32_array *v196; // x6
  System_Int32_array *v197; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v198; // x19
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  System_Collections_Generic_List_int__o *v205; // x19
  System_String_array **v206; // x2
  System_String_array **v207; // x3
  System_Boolean_array **v208; // x4
  System_Int32_array **v209; // x5
  System_Int32_array *v210; // x6
  System_Int32_array *v211; // x7
  System_Collections_Generic_List_int__o *v212; // x19
  System_String_array **v213; // x2
  System_String_array **v214; // x3
  System_Boolean_array **v215; // x4
  System_Int32_array **v216; // x5
  System_Int32_array *v217; // x6
  System_Int32_array *v218; // x7
  WarBoardData___c_c *v219; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__77_0; // x19
  Il2CppObject *v222; // x20
  struct WarBoardData___c_StaticFields *v223; // x0
  System_String_array **v224; // x2
  System_String_array **v225; // x3
  System_Boolean_array **v226; // x4
  System_Int32_array **v227; // x5
  System_Int32_array *v228; // x6
  System_Int32_array *v229; // x7
  System_String_array **v230; // x2
  System_String_array **v231; // x3
  System_Boolean_array **v232; // x4
  System_Int32_array **v233; // x5
  System_Int32_array *v234; // x6
  System_Int32_array *v235; // x7
  __int64 Instance; // x0
  const MethodInfo *throughCondId; // x1
  __int64 v238; // x20
  struct WarBoardStageNpcMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  WarBoardData___c_c *v247; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v248; // x21
  struct WarBoardData___c_StaticFields *v249; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_1; // x19
  Il2CppObject *v251; // x20
  struct WarBoardData___c_StaticFields *v252; // x0
  System_String_array **v253; // x2
  System_String_array **v254; // x3
  System_Boolean_array **v255; // x4
  System_Int32_array **v256; // x5
  System_Int32_array *v257; // x6
  System_Int32_array *v258; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v259; // x0
  System_String_array **v260; // x2
  System_String_array **v261; // x3
  System_Boolean_array **v262; // x4
  System_Int32_array **v263; // x5
  System_Int32_array *v264; // x6
  System_Int32_array *v265; // x7
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  WarBoardData___c_c *v267; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v268; // x21
  struct WarBoardData___c_StaticFields *v269; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_2; // x19
  Il2CppObject *v271; // x20
  struct WarBoardData___c_StaticFields *v272; // x0
  System_String_array **v273; // x2
  System_String_array **v274; // x3
  System_Boolean_array **v275; // x4
  System_Int32_array **v276; // x5
  System_Int32_array *v277; // x6
  System_Int32_array *v278; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v279; // x0
  System_String_array **v280; // x2
  System_String_array **v281; // x3
  System_Boolean_array **v282; // x4
  System_Int32_array **v283; // x5
  System_Int32_array *v284; // x6
  System_Int32_array *v285; // x7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  WarBoardData___c_c *v287; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v288; // x21
  struct WarBoardData___c_StaticFields *v289; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_3; // x19
  Il2CppObject *v291; // x20
  struct WarBoardData___c_StaticFields *v292; // x0
  System_String_array **v293; // x2
  System_String_array **v294; // x3
  System_Boolean_array **v295; // x4
  System_Int32_array **v296; // x5
  System_Int32_array *v297; // x6
  System_Int32_array *v298; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v300; // x0
  WarBoardData___c_c *v301; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v302; // x21
  struct WarBoardData___c_StaticFields *v303; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_4; // x19
  Il2CppObject *v305; // x20
  struct WarBoardData___c_StaticFields *v306; // x0
  System_String_array **v307; // x2
  System_String_array **v308; // x3
  System_Boolean_array **v309; // x4
  System_Int32_array **v310; // x5
  System_Int32_array *v311; // x6
  System_Int32_array *v312; // x7
  WarBoardData_c *v313; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  const MethodInfo *v315; // x0
  int v316; // w19
  WarBoardDataEntity_o *v317; // x25
  System_String_o *image; // x19
  System_String_o *String; // x19
  System_Byte_array *v320; // x19
  MiniMessagePack_MiniMessagePacker_o *v321; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v322; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x24
  System_String_array **v324; // x2
  System_String_array **v325; // x3
  System_Boolean_array **v326; // x4
  System_Int32_array **v327; // x5
  System_Int32_array *v328; // x6
  System_Int32_array *v329; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v330; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x23
  unsigned __int64 v332; // x26
  __int64 v333; // x21
  System_String_array **v334; // x2
  System_String_array **v335; // x3
  System_Boolean_array **v336; // x4
  System_Int32_array **v337; // x5
  System_Int32_array *v338; // x6
  System_Int32_array *v339; // x7
  System_Int32_array **v340; // x1
  WarBoardPieceData_SaveData_o **v341; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v342; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v343; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v344; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v345; // x22
  struct WarBoardItemData_SaveData_array *itemSaves; // x23
  unsigned __int64 v347; // x26
  __int64 v348; // x20
  System_String_array **v349; // x2
  System_String_array **v350; // x3
  System_Boolean_array **v351; // x4
  System_Int32_array **v352; // x5
  System_Int32_array *v353; // x6
  System_Int32_array *v354; // x7
  System_Int32_array **v355; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v356; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v357; // x22
  BattleServantConfConponent_o *v358; // x21
  struct WarBoardData_WarBoardLocalSaveData_o **v359; // x23
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  unsigned __int64 v361; // x26
  __int64 v362; // x19
  System_String_array **v363; // x2
  System_String_array **v364; // x3
  System_Boolean_array **v365; // x4
  System_Int32_array **v366; // x5
  System_Int32_array *v367; // x6
  System_Int32_array *v368; // x7
  System_Int32_array **v369; // x1
  __int64 v370; // x20
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v372; // x23
  WarBoardData___c_c *v373; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v374; // x22
  struct WarBoardData___c_StaticFields *v375; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__77_9; // x19
  Il2CppObject *v377; // x20
  struct WarBoardData___c_StaticFields *v378; // x0
  System_String_array **v379; // x2
  System_String_array **v380; // x3
  System_Boolean_array **v381; // x4
  System_Int32_array **v382; // x5
  System_Int32_array *v383; // x6
  System_Int32_array *v384; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v385; // x0
  System_Int32_array **v386; // x0
  System_String_array **v387; // x2
  System_String_array **v388; // x3
  System_Boolean_array **v389; // x4
  System_Int32_array **v390; // x5
  System_Int32_array *v391; // x6
  System_Int32_array *v392; // x7
  struct WarBoardWallData_SaveData_array *wallSaves; // x23
  unsigned __int64 v394; // x25
  __int64 v395; // x19
  System_String_array **v396; // x2
  System_String_array **v397; // x3
  System_Boolean_array **v398; // x4
  System_Int32_array **v399; // x5
  System_Int32_array *v400; // x6
  System_Int32_array *v401; // x7
  System_Int32_array **v402; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v403; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v404; // x22
  int v405; // w19
  unsigned __int64 v406; // x22
  signed __int64 v407; // x23
  __int64 v408; // x24
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v410; // x26
  WarBoardSquareIndexData_SaveData_o *v411; // x20
  WarBoardSquareIndexData_o *v412; // x19
  System_String_array **v413; // x2
  System_String_array **v414; // x3
  System_Boolean_array **v415; // x4
  System_Int32_array **v416; // x5
  System_Int32_array *v417; // x6
  System_Int32_array *v418; // x7
  int v419; // w19
  unsigned __int64 v420; // x22
  signed __int64 v421; // x23
  __int64 v422; // x24
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v424; // x26
  WarBoardBossBattleData_SaveData_o *v425; // x20
  WarBoardBossBattleData_o *v426; // x19
  const MethodInfo *v427; // x2
  System_String_array **v428; // x2
  System_String_array **v429; // x3
  System_Boolean_array **v430; // x4
  System_Int32_array **v431; // x5
  System_Int32_array *v432; // x6
  System_Int32_array *v433; // x7
  WarBoardData_c *v434; // x0
  System_String_array **v435; // x2
  System_String_array **v436; // x3
  System_Boolean_array **v437; // x4
  System_Int32_array **v438; // x5
  System_Int32_array *v439; // x6
  System_Int32_array *v440; // x7
  unsigned __int64 v441; // x28
  signed __int64 v442; // x22
  __int64 v443; // x26
  System_String_array **v444; // x2
  System_String_array **v445; // x3
  System_Boolean_array **v446; // x4
  System_Int32_array **v447; // x5
  System_Int32_array *v448; // x6
  System_Int32_array *v449; // x7
  System_Int32_array **v450; // x1
  WarBoardStageLayoutEntity_o **v451; // x21
  WarBoardStageLayoutEntity_o *v452; // x19
  WarBoardSquareData_o *v453; // x20
  const MethodInfo *v454; // x3
  __int64 v455; // x9
  WarBoardStageLayoutEntity_o *v456; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v458; // x20
  WarBoardData_SquareRangeSearch_o *v459; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v460; // x1
  const MethodInfo_2EF4460 *v461; // x2
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v463; // x20
  WarBoardStageLayoutEntity_o *v464; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v465; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v466; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  int32_t progressType; // w23
  WarBoardStageLayoutEntity_o *v470; // x19
  bool v471; // w24
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v472; // x25
  WarBoardPieceData_o *v473; // x0
  WarBoardPieceData_o *v474; // x22
  bool v475; // w5
  NpcFollowerEntity_o *Entity_20112236; // x0
  NpcFollowerEntity_o *v477; // x19
  WarBoardStageLayoutEntity_o *v478; // x20
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v480; // x20
  WarBoardData_SquareRangeSearch_o *v481; // x0
  WarBoardStageLayoutEntity_o *v482; // x20
  WarBoardUserGetItemData_o *v483; // x21
  WarBoardItemData_o *v484; // x19
  __int64 *v485; // x8
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v487; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v489; // x20
  WarBoardData_SquareRangeSearch_o *v490; // x0
  WarBoardStageLayoutEntity_o *v491; // x20
  WarBoardUserWallData_o *v492; // x21
  System_Int32_array **v493; // x0
  System_String_array **v494; // x2
  System_String_array **v495; // x3
  System_Boolean_array **v496; // x4
  System_Int32_array **v497; // x5
  System_Int32_array *v498; // x6
  System_Int32_array *v499; // x7
  System_Int32_array **v500; // x0
  System_String_array **v501; // x2
  System_String_array **v502; // x3
  System_Boolean_array **v503; // x4
  System_Int32_array **v504; // x5
  System_Int32_array *v505; // x6
  System_Int32_array *v506; // x7
  System_Int32_array **v507; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x22
  System_String_array **v509; // x2
  System_String_array **v510; // x3
  System_Boolean_array **v511; // x4
  System_Int32_array **v512; // x5
  System_Int32_array *v513; // x6
  System_Int32_array *v514; // x7
  BattleBuffData_BuffData_array *pieces; // x19
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v516; // x20
  System_Int32_array **v517; // x0
  System_String_array **v518; // x2
  System_String_array **v519; // x3
  System_Boolean_array **v520; // x4
  System_Int32_array **v521; // x5
  System_Int32_array *v522; // x6
  System_Int32_array *v523; // x7
  System_Int32_array **v524; // x0
  System_String_array **v525; // x2
  System_String_array **v526; // x3
  System_Boolean_array **v527; // x4
  System_Int32_array **v528; // x5
  System_Int32_array *v529; // x6
  System_Int32_array *v530; // x7
  System_Int32_array **v531; // x0
  System_String_array **v532; // x2
  System_String_array **v533; // x3
  System_Boolean_array **v534; // x4
  System_Int32_array **v535; // x5
  System_Int32_array *v536; // x6
  System_Int32_array *v537; // x7
  System_Int32_array **v538; // x0
  System_String_array **v539; // x2
  System_String_array **v540; // x3
  System_Boolean_array **v541; // x4
  System_Int32_array **v542; // x5
  System_Int32_array *v543; // x6
  System_Int32_array *v544; // x7
  System_String_array **v545; // x2
  System_String_array **v546; // x3
  System_Boolean_array **v547; // x4
  System_Int32_array **v548; // x5
  System_Int32_array *v549; // x6
  System_Int32_array *v550; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *v552; // x28
  WarBoardData___c__DisplayClass77_5_c **v553; // x26
  unsigned __int64 v554; // x27
  WarBoardPieceData_SaveData_o **m_Items; // x21
  __int64 v556; // x20
  System_String_array **v557; // x2
  System_String_array **v558; // x3
  System_Boolean_array **v559; // x4
  System_Int32_array **v560; // x5
  System_Int32_array *v561; // x6
  System_Int32_array *v562; // x7
  System_Int32_array **v563; // x1
  WarBoardPieceData_SaveData_o **v564; // x23
  System_Collections_Generic_IEnumerable_T__o *v565; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v566; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v567; // x19
  WarBoardPieceData_SaveData_o **v568; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v569; // x24
  WarBoardData_SquareRangeSearch_o *v570; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v571; // x20
  WarBoardData___c__DisplayClass77_5_c **v572; // x21
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v574; // x25
  WarBoardPieceData_o *v575; // x26
  System_Int32_array **v576; // x0
  System_String_array **v577; // x2
  System_String_array **v578; // x3
  System_Boolean_array **v579; // x4
  System_Int32_array **v580; // x5
  System_Int32_array *v581; // x6
  System_Int32_array *v582; // x7
  struct WarBoardItemData_SaveData_array *v583; // x20
  int max_length; // w8
  unsigned int v585; // w21
  __int64 v586; // x8
  WarBoardItemData_SaveData_o *v587; // x19
  struct WarBoardTreasureData_SaveData_array *v588; // x20
  int v589; // w8
  unsigned int v590; // w21
  __int64 v591; // x8
  WarBoardTreasureData_SaveData_o *v592; // x19
  struct WarBoardWallData_SaveData_array *v593; // x20
  int v594; // w8
  unsigned int v595; // w21
  __int64 v596; // x8
  WarBoardWallData_SaveData_o *v597; // x19
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  int v599; // w8
  unsigned int v600; // w21
  __int64 v601; // x8
  WarBoardSquareData_SaveData_o *v602; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v603; // x19
  System_String_array **v604; // x2
  System_String_array **v605; // x3
  System_Boolean_array **v606; // x4
  System_Int32_array **v607; // x5
  System_Int32_array *v608; // x6
  System_Int32_array *v609; // x7
  System_String_array **v610; // x2
  System_String_array **v611; // x3
  System_Boolean_array **v612; // x4
  System_Int32_array **v613; // x5
  System_Int32_array *v614; // x6
  System_Int32_array *v615; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v616; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x21
  __int64 v618; // x8
  unsigned __int64 v619; // x23
  WarBoardEventData_SaveData_o *v620; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v621; // x19
  WarBoardEventData_o *v622; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v623; // x8
  System_Int32_array **latestPieceActionSquareIndexes; // x1
  System_String_array **v625; // x2
  System_String_array **v626; // x3
  System_Boolean_array **v627; // x4
  System_Int32_array **v628; // x5
  System_Int32_array *v629; // x6
  System_Int32_array *v630; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v631; // x8
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v633; // x19
  System_String_array **v634; // x2
  System_String_array **v635; // x3
  System_Boolean_array **v636; // x4
  System_Int32_array **v637; // x5
  System_Int32_array *v638; // x6
  System_Int32_array *v639; // x7
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x21
  __int64 v641; // x8
  unsigned __int64 v642; // x23
  WarBoardPrevCondData_SaveData_o *v643; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v644; // x19
  WarBoardPrevCondData_o *v645; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v646; // x19
  System_String_array **v647; // x2
  System_String_array **v648; // x3
  System_Boolean_array **v649; // x4
  System_Int32_array **v650; // x5
  System_Int32_array *v651; // x6
  System_Int32_array *v652; // x7
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x21
  __int64 v654; // x8
  unsigned __int64 v655; // x23
  HoldReinforcementsData_SaveData_o *v656; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v657; // x19
  HoldReinforcementsData_o *v658; // x20
  System_Int32_array **v659; // x0
  System_String_array **v660; // x2
  System_String_array **v661; // x3
  System_Boolean_array **v662; // x4
  System_Int32_array **v663; // x5
  System_Int32_array *v664; // x6
  System_Int32_array *v665; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v666; // x19
  System_String_array **v667; // x2
  System_String_array **v668; // x3
  System_Boolean_array **v669; // x4
  System_Int32_array **v670; // x5
  System_Int32_array *v671; // x6
  System_Int32_array *v672; // x7
  System_String_array **v673; // x2
  System_String_array **v674; // x3
  System_Boolean_array **v675; // x4
  System_Int32_array **v676; // x5
  System_Int32_array *v677; // x6
  System_Int32_array *v678; // x7
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x21
  __int64 v680; // x8
  unsigned __int64 v681; // x23
  WarBoardUiData_SaveData_o *v682; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v683; // x19
  WarBoardUiData_o *v684; // x20
  System_Int32_array **bgAnimationInfo; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v686; // x8
  WarBoardData_WarBoardLocalSaveData_o *v687; // x19
  System_String_array **v688; // x2
  System_String_array **v689; // x3
  System_Boolean_array **v690; // x4
  System_Int32_array **v691; // x5
  System_Int32_array *v692; // x6
  System_Int32_array *v693; // x7
  __int64 v694; // x0
  __int64 v695; // x0
  BattleServantConfConponent_o *p_latestBattlePieceUniqueIndexes; // [xsp+10h] [xbp-170h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+18h] [xbp-168h]
  BattleServantConfConponent_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  BattleServantConfConponent_o *p_bgAnimationInfo_k__BackingField; // [xsp+28h] [xbp-158h]
  BattleServantConfConponent_o *p_listUiData; // [xsp+30h] [xbp-150h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v701; // [xsp+38h] [xbp-148h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v702; // [xsp+40h] [xbp-140h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+48h] [xbp-138h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+50h] [xbp-130h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v705; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v706; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v707; // [xsp+68h] [xbp-118h]
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+70h] [xbp-110h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v709; // [xsp+78h] [xbp-108h]
  WarBoardData_Fields *p_fields; // [xsp+80h] [xbp-100h]
  WarBoardCommonReleaseMaster_o *v711; // [xsp+88h] [xbp-F8h]
  signed __int64 v712; // [xsp+90h] [xbp-F0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+98h] [xbp-E8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v714; // [xsp+A0h] [xbp-E0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v715; // [xsp+A8h] [xbp-D8h]
  WarBoardStageLayoutEntity_array *v716; // [xsp+B0h] [xbp-D0h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+B8h] [xbp-C8h]
  BattleServantConfConponent_o *p_listPrevCond; // [xsp+C0h] [xbp-C0h]
  BattleServantConfConponent_o *p_reinforcementsSaveList; // [xsp+C8h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D0h] [xbp-B0h]
  int32_t questPhase; // [xsp+DCh] [xbp-A4h]
  WarBoardData_o *v722; // [xsp+E0h] [xbp-A0h]
  char v723; // [xsp+ECh] [xbp-94h]
  int32_t v724; // [xsp+ECh] [xbp-94h]
  struct WarBoardData_WarBoardLocalSaveData_o **v725; // [xsp+F0h] [xbp-90h]
  int32_t questId; // [xsp+F0h] [xbp-90h]
  __int64 v727; // [xsp+F8h] [xbp-88h]
  WarBoardDataEntity_o *v728; // [xsp+F8h] [xbp-88h]
  int v729; // [xsp+100h] [xbp-80h]
  WarBoardUserMasterData_o *v730; // [xsp+100h] [xbp-80h]
  struct WarBoardData_WarBoardLocalSaveData_o **v731; // [xsp+100h] [xbp-80h]
  struct WarBoardPieceData_SaveData_array *v733; // [xsp+108h] [xbp-78h]
  bool isChangeName; // [xsp+114h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF
  int32_t condGroup[3]; // [xsp+124h] [xbp-5Ch] BYREF

  if ( (byte_4186650 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Resize_WarBoardBossBattleData___, stage);
    sub_B2C35C(&Method_System_Array_Resize_WarBoardSquareIndexData___, v10);
    sub_B2C35C(&Method_System_Array_Sort_WarBoardPieceData___, v11);
    sub_B2C35C(&Method_System_Array_Sort_WarBoardStageLayoutEntity___, v12);
    sub_B2C35C(&Method_BasicHelper_Any_WarBoardPieceData___, v13);
    sub_B2C35C(&Method_System_Comparison_WarBoardStageLayoutEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Comparison_WarBoardPieceData___ctor__, v15);
    sub_B2C35C(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo, v16);
    sub_B2C35C(&System_Comparison_WarBoardPieceData__TypeInfo, v17);
    sub_B2C35C(&System_Convert_TypeInfo, v18);
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v19);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___, v20);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v21);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___, v22);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v23);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, v24);
    sub_B2C35C(&DataManager_TypeInfo, v25);
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__, v28);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v29);
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v30);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___, v31);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___, v32);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, v33);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v34);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v35);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___, v36);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v37);
    sub_B2C35C(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___, v38);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___, v39);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___, v40);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___, v41);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v42);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___, v43);
    sub_B2C35C(&Method_System_Func_WarBoardUserTreasureData__bool___ctor__, v44);
    sub_B2C35C(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v45);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v46);
    sub_B2C35C(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__, v47);
    sub_B2C35C(&Method_System_Func_WarBoardStageNpcEntity__uint___ctor__, v48);
    sub_B2C35C(&Method_System_Func_WarBoardStageNpcEntity__int___ctor__, v49);
    sub_B2C35C(&Method_System_Func_WarBoardActionPointEntity__uint___ctor__, v50);
    sub_B2C35C(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v51);
    sub_B2C35C(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v52);
    sub_B2C35C(&System_Func_WarBoardActionPointEntity__uint__TypeInfo, v53);
    sub_B2C35C(&System_Func_WarBoardUserTreasureData__bool__TypeInfo, v54);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v55);
    sub_B2C35C(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v56);
    sub_B2C35C(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo, v57);
    sub_B2C35C(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v58);
    sub_B2C35C(&System_Func_WarBoardUserWallData__bool__TypeInfo, v59);
    sub_B2C35C(&System_Func_WarBoardStageNpcEntity__int__TypeInfo, v60);
    sub_B2C35C(&System_Func_WarBoardUserServantData__bool__TypeInfo, v61);
    sub_B2C35C(&HoldReinforcementsData_TypeInfo, v62);
    sub_B2C35C(&int___TypeInfo, v63);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v64);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, v65);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, v66);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardItemData__Add__, v67);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, v68);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, v69);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__, v70);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v71);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v72);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardWallData__Add__, v73);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__, v74);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v75);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v76);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__, v77);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v78);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__, v79);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__, v80);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__, v81);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v82);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__, v83);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__, v84);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v85);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__, v86);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v87);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__, v88);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__, v89);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__, v90);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__, v91);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__, v92);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__, v93);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v94);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardUiData__TypeInfo, v95);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v96);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v97);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardItemData__TypeInfo, v98);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v99);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo, v100);
    sub_B2C35C(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v101);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardWallData__TypeInfo, v102);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo, v103);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardEventData__TypeInfo, v104);
    sub_B2C35C(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___, v105);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v106);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v107);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v108);
    sub_B2C35C(&Method_WarBoardData___c___ctor_b__77_0__, v109);
    sub_B2C35C(&Method_WarBoardData___c___ctor_b__77_1__, v110);
    sub_B2C35C(&Method_WarBoardData___c___ctor_b__77_2__, v111);
    sub_B2C35C(&Method_WarBoardData___c___ctor_b__77_3__, v112);
    sub_B2C35C(&Method_WarBoardData___c___ctor_b__77_4__, v113);
    sub_B2C35C(&Method_WarBoardData___c___ctor_b__77_9__, v114);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__, v115);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__, v116);
    sub_B2C35C(&WarBoardData___c__DisplayClass77_0_TypeInfo, v117);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__, v118);
    sub_B2C35C(&WarBoardData___c__DisplayClass77_1_TypeInfo, v119);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__, v120);
    sub_B2C35C(&WarBoardData___c__DisplayClass77_2_TypeInfo, v121);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__, v122);
    sub_B2C35C(&WarBoardData___c__DisplayClass77_3_TypeInfo, v123);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__, v124);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__, v125);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__, v126);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__, v127);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__, v128);
    sub_B2C35C(&WarBoardData___c__DisplayClass77_4_TypeInfo, v129);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__, v130);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__, v131);
    sub_B2C35C(&WarBoardData___c__DisplayClass77_5_TypeInfo, v132);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v133);
    sub_B2C35C(&uint___TypeInfo, v134);
    sub_B2C35C(&WarBoardBossBattleData_TypeInfo, v135);
    sub_B2C35C(&Method_WarBoardData_ComparePiece__, v136);
    sub_B2C35C(&WarBoardData_TypeInfo, v137);
    sub_B2C35C(&WarBoardEffectData_TypeInfo, v138);
    sub_B2C35C(&WarBoardEventData_TypeInfo, v139);
    sub_B2C35C(&WarBoardItemData_TypeInfo, v140);
    sub_B2C35C(&WarBoardData_WarBoardLocalSaveData_TypeInfo, v141);
    sub_B2C35C(&WarBoardPieceData_TypeInfo, v142);
    sub_B2C35C(&WarBoardPrevCondData_TypeInfo, v143);
    sub_B2C35C(&WarBoardSquareData_TypeInfo, v144);
    sub_B2C35C(&WarBoardSquareIndexData_TypeInfo, v145);
    sub_B2C35C(&WarBoardTreasureData_TypeInfo, v146);
    sub_B2C35C(&WarBoardUiData_TypeInfo, v147);
    sub_B2C35C(&WarBoardWallData_TypeInfo, v148);
    byte_4186650 = 1;
  }
  entity = 0LL;
  isChangeName = 0;
  v149 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v149,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v149;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (System_Int32_array **)v149,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  v156 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v156,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v156;
  p_listEvent = &this->fields.listEvent;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listEvent,
    (System_Int32_array **)v156,
    v157,
    v158,
    v159,
    v160,
    v161,
    v162);
  *(_QWORD *)&this->fields.winCondId = -1LL;
  v163 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  this->fields.latestPieceActionSquareIndexes = v163;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.latestPieceActionSquareIndexes,
    (System_Int32_array **)v163,
    v164,
    v165,
    v166,
    v167,
    v168,
    v169);
  v170 = (struct System_UInt32_array *)sub_B2C374(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v170;
  p_latestBattlePieceUniqueIndexes = (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v170,
    v171,
    v172,
    v173,
    v174,
    v175,
    v176);
  v177 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v177,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v177;
  p_listPrevCond = (BattleServantConfConponent_o *)&this->fields.listPrevCond;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)v177,
    v178,
    v179,
    v180,
    v181,
    v182,
    v183);
  v184 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v184,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v184;
  p_reinforcementsSaveList = (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList,
    (System_Int32_array **)v184,
    v185,
    v186,
    v187,
    v188,
    v189,
    v190);
  v191 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v191,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v191;
  p_playedStageReinforcementsList = (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList,
    (System_Int32_array **)v191,
    v192,
    v193,
    v194,
    v195,
    v196,
    v197);
  v198 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v198,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v198;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)v198,
    v199,
    v200,
    v201,
    v202,
    v203,
    v204);
  v205 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v205,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v205;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.masterExistsForce,
    (System_Int32_array **)v205,
    v206,
    v207,
    v208,
    v209,
    v210,
    v211);
  v212 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v212,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v212;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsAppointmentSquareList,
    (System_Int32_array **)v212,
    v213,
    v214,
    v215,
    v216,
    v217,
    v218);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v219 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v219 = WarBoardData___c_TypeInfo;
  }
  static_fields = v219->static_fields;
  _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v219->vtable._0_Equals.methodPtr) & 4) != 0 && !v219->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v219);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v222 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_WarBoardStageLayoutEntity__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__77_0,
      v222,
      Method_WarBoardData___c___ctor_b__77_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_WarBoardStageLayoutEntity___ctor__);
    v223 = WarBoardData___c_TypeInfo->static_fields;
    v223->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v223->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v224,
      v225,
      v226,
      v227,
      v228,
      v229);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)layoutEntities,
    (System_Comparison_T__o *)_9__77_0,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)stage,
    v230,
    v231,
    v232,
    v233,
    v234,
    v235);
  if ( !layoutEntities )
    goto LABEL_331;
  v716 = layoutEntities;
  v238 = *(_QWORD *)&layoutEntities->max_length;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  MasterData_WarQuestSelectionMaster = (struct WarBoardStageNpcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.stageNpcMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v240,
    v241,
    v242,
    v243,
    v244,
    v245);
  if ( !stage )
    goto LABEL_331;
  Instance = (__int64)this->fields.stageNpcMaster;
  v729 = v238;
  if ( !Instance )
    goto LABEL_331;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0LL);
  v247 = WarBoardData___c_TypeInfo;
  v248 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v247 = WarBoardData___c_TypeInfo;
  }
  v249 = v247->static_fields;
  _9__77_1 = v249->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v247->vtable._0_Equals.methodPtr) & 4) != 0 && !v247->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v247);
      v249 = WarBoardData___c_TypeInfo->static_fields;
    }
    v251 = (Il2CppObject *)v249->__9;
    _9__77_1 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B2C42C(System_Func_WarBoardStageNpcEntity__uint__TypeInfo);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_1,
      v251,
      Method_WarBoardData___c___ctor_b__77_1__,
      (const MethodInfo_27146C4 *)Method_System_Func_WarBoardStageNpcEntity__uint___ctor__);
    v252 = WarBoardData___c_TypeInfo->static_fields;
    v252->__9__77_1 = _9__77_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v252->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v253,
      v254,
      v255,
      v256,
      v257,
      v258);
  }
  v259 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                           v248,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_1A9B2B0 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v259;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.npcEntityDict,
    (System_Int32_array **)v259,
    v260,
    v261,
    v262,
    v263,
    v264,
    v265);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_331;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0LL);
  v267 = WarBoardData___c_TypeInfo;
  v268 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v267 = WarBoardData___c_TypeInfo;
  }
  v269 = v267->static_fields;
  _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)v269->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v267->vtable._0_Equals.methodPtr) & 4) != 0 && !v267->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v267);
      v269 = WarBoardData___c_TypeInfo->static_fields;
    }
    v271 = (Il2CppObject *)v269->__9;
    _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B2C42C(System_Func_WarBoardActionPointEntity__uint__TypeInfo);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_2,
      v271,
      Method_WarBoardData___c___ctor_b__77_2__,
      (const MethodInfo_27146C4 *)Method_System_Func_WarBoardActionPointEntity__uint___ctor__);
    v272 = WarBoardData___c_TypeInfo->static_fields;
    v272->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v272->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v273,
      v274,
      v275,
      v276,
      v277,
      v278);
  }
  v279 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                              v268,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_1A9B2B0 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v279;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.actionPointEntityDict,
    (System_Int32_array **)v279,
    v280,
    v281,
    v282,
    v283,
    v284,
    v285);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_331;
  Values = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
             (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)Instance,
             (const MethodInfo_2DC4D20 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v287 = WarBoardData___c_TypeInfo;
  v288 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v287 = WarBoardData___c_TypeInfo;
  }
  v289 = v287->static_fields;
  _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v289->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( (BYTE3(v287->vtable._0_Equals.methodPtr) & 4) != 0 && !v287->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v287);
      v289 = WarBoardData___c_TypeInfo->static_fields;
    }
    v291 = (Il2CppObject *)v289->__9;
    _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_3,
      v291,
      Method_WarBoardData___c___ctor_b__77_3__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v292 = WarBoardData___c_TypeInfo->static_fields;
    v292->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v292->__9__77_3,
      (System_Int32_array **)_9__77_3,
      v293,
      v294,
      v295,
      v296,
      v297,
      v298);
  }
  p_bgAnimationInfo_k__BackingField = (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField;
  Instance = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
               v288,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_1A92CB0 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_331;
  v300 = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
           npcEntityDict,
           (const MethodInfo_2DC4D20 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v301 = WarBoardData___c_TypeInfo;
  v302 = (System_Collections_Generic_IEnumerable_TSource__o *)v300;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v301 = WarBoardData___c_TypeInfo;
  }
  v303 = v301->static_fields;
  _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v303->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( (BYTE3(v301->vtable._0_Equals.methodPtr) & 4) != 0 && !v301->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v301);
      v303 = WarBoardData___c_TypeInfo->static_fields;
    }
    v305 = (Il2CppObject *)v303->__9;
    _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardStageNpcEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_4,
      v305,
      Method_WarBoardData___c___ctor_b__77_4__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v306 = WarBoardData___c_TypeInfo->static_fields;
    v306->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v306->__9__77_4,
      (System_Int32_array **)_9__77_4,
      v307,
      v308,
      v309,
      v310,
      v311,
      v312);
  }
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
                                               v302,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_1A92CB0 *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  v701 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v711 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v714 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v714,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v709 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v709,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v715 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v715,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v706 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardItemData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v706,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v702 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTreasureData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v702,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v707 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardWallData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v707,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v705 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardEffectData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v705,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v313 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v313 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v313->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
  v722 = this;
  p_listUiData = (BattleServantConfConponent_o *)&this->fields.listUiData;
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_331;
    v315 = (const MethodInfo *)WarBoardData_TypeInfo;
    if ( serverData->fields.progressType == 3 )
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave(v315);
    }
    else
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
        v315 = (const MethodInfo *)WarBoardData_TypeInfo;
      }
      image = (System_String_o *)v315[2].klass->_1.image;
      if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
      }
      String = EncryptedPlayerPrefs__GetString(image, 0LL);
      if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !System_Convert_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      }
      v320 = System_Convert__FromBase64String(String, 0LL);
      v321 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo);
      MiniMessagePack_MiniMessagePacker___ctor(v321, 0LL);
      if ( !v321 )
        goto LABEL_331;
      v322 = MiniMessagePack_MiniMessagePacker__UnpackClass_WarBoardData_WarBoardLocalSaveData_(
               v321,
               v320,
               (const MethodInfo_1AB259C *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = v322;
      p_localSaveData = &this->fields.localSaveData;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)p_localSaveData,
        (System_Int32_array **)v322,
        v324,
        v325,
        v326,
        v327,
        v328,
        v329);
      v330 = *p_localSaveData;
      v725 = p_localSaveData;
      if ( *p_localSaveData
        && v330->fields.questId == serverData->fields.questId
        && v330->fields.questPhase == serverData->fields.questPhase
        && v330->fields.stageId == serverData->fields.stageId )
      {
        if ( v330->fields.localSaveTiming == 6
          && (v330->fields.turn != serverData->fields.turn
           || v330->fields.turnForceId != serverData->fields.turnForceId
           || v330->fields.turnGroupId != serverData->fields.turnGroupId) )
        {
          v330->fields.localSaveTiming = 7;
        }
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !*p_localSaveData )
          goto LABEL_331;
        if ( !Instance )
          goto LABEL_331;
        Instance = (__int64)WarBoardManager__CheckAndLoadCacheServerData(
                              (WarBoardManager_o *)Instance,
                              serverData,
                              (*p_localSaveData)->fields.localSaveTiming,
                              0LL);
        v727 = Instance;
        if ( !*p_localSaveData )
          goto LABEL_331;
        pieceSaves = (*p_localSaveData)->fields.pieceSaves;
        if ( !pieceSaves )
          goto LABEL_331;
        if ( (int)pieceSaves->max_length < 1 )
        {
LABEL_107:
          if ( !*p_localSaveData )
            goto LABEL_331;
          itemSaves = (*p_localSaveData)->fields.itemSaves;
          if ( !itemSaves )
            goto LABEL_331;
          if ( (int)itemSaves->max_length < 1 )
          {
LABEL_117:
            if ( !v727 )
              goto LABEL_331;
            v358 = (BattleServantConfConponent_o *)(v727 + 40);
            v359 = p_localSaveData;
            if ( *(_QWORD *)(v727 + 40) )
            {
              if ( !*p_localSaveData )
                goto LABEL_331;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_331;
              if ( (int)treasureSaves->max_length >= 1 )
              {
                v723 = 0;
                v361 = 0LL;
                do
                {
                  v362 = sub_B2C42C(WarBoardData___c__DisplayClass77_2_TypeInfo);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v362, 0LL);
                  if ( v361 >= treasureSaves->max_length )
                    goto LABEL_332;
                  if ( !v362 )
                    goto LABEL_331;
                  v369 = (System_Int32_array **)treasureSaves->m_Items[v361];
                  *(_QWORD *)(v362 + 16) = v369;
                  v370 = v362 + 16;
                  sub_B2C2F8((BattleServantConfConponent_o *)(v362 + 16), v369, v363, v364, v365, v366, v367, v368);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v358->klass;
                  v372 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v372,
                    (Il2CppObject *)v362,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                        klass,
                                        (System_Func_TSource__bool__o *)v372,
                                        (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v370 )
                      goto LABEL_331;
                    if ( !*(_BYTE *)(*(_QWORD *)v370 + 20LL) )
                    {
                      *(_BYTE *)(Instance + 20) = 0;
                      v723 = 1;
                    }
                  }
                  ++v361;
                }
                while ( (__int64)v361 < (int)treasureSaves->max_length );
                v359 = p_localSaveData;
                if ( (v723 & 1) != 0 )
                {
                  v373 = WarBoardData___c_TypeInfo;
                  v374 = (System_Collections_Generic_IEnumerable_TSource__o *)v358->klass;
                  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v373 = WarBoardData___c_TypeInfo;
                  }
                  v375 = v373->static_fields;
                  _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v375->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( (BYTE3(v373->vtable._0_Equals.methodPtr) & 4) != 0 && !v373->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v373);
                      v375 = WarBoardData___c_TypeInfo->static_fields;
                    }
                    v377 = (Il2CppObject *)v375->__9;
                    _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      _9__77_9,
                      v377,
                      Method_WarBoardData___c___ctor_b__77_9__,
                      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                    v378 = WarBoardData___c_TypeInfo->static_fields;
                    v378->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_B2C2F8(
                      (BattleServantConfConponent_o *)&v378->__9__77_9,
                      (System_Int32_array **)_9__77_9,
                      v379,
                      v380,
                      v381,
                      v382,
                      v383,
                      v384);
                  }
                  v385 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                           v374,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v386 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v385,
                                                  (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v358->klass = (BattleServantConfConponent_c *)v386;
                  sub_B2C2F8(v358, v386, v387, v388, v389, v390, v391, v392);
                }
              }
            }
            if ( !*v359 )
              goto LABEL_331;
            wallSaves = (*v359)->fields.wallSaves;
            if ( !wallSaves )
              goto LABEL_331;
            if ( (int)wallSaves->max_length < 1 )
            {
LABEL_149:
              if ( !*p_localSaveData )
                goto LABEL_331;
              v405 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_WarBoardSquareIndexData_(
                (WarBoardSquareIndexData_array **)(v727 + 88),
                v405,
                (const MethodInfo_23C235C *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              if ( v405 >= 1 )
              {
                v406 = 0LL;
                v407 = v405;
                v408 = 8LL;
                while ( *v725 )
                {
                  squareIndexInfo = (*v725)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v406 >= squareIndexInfo->max_length )
                    goto LABEL_332;
                  v410 = *(unsigned int **)(v727 + 88);
                  v411 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v408 * 4);
                  v412 = (WarBoardSquareIndexData_o *)sub_B2C42C(WarBoardSquareIndexData_TypeInfo);
                  WarBoardSquareIndexData___ctor_27803928(v412, v411, 0LL);
                  if ( !v410 )
                    break;
                  if ( v412 )
                  {
                    Instance = sub_B2C41C(v412, *(_QWORD *)(*(_QWORD *)v410 + 64LL));
                    if ( !Instance )
                    {
LABEL_333:
                      v695 = sub_B2C454();
                      sub_B2C400(v695, 0LL);
                    }
                  }
                  if ( v406 >= v410[6] )
                    goto LABEL_332;
                  *(_QWORD *)&v410[v408] = v412;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v410[v408],
                    (System_Int32_array **)v412,
                    v413,
                    v414,
                    v415,
                    v416,
                    v417,
                    v418);
                  ++v406;
                  v408 += 2LL;
                  if ( (__int64)v406 >= v407 )
                    goto LABEL_160;
                }
                goto LABEL_331;
              }
LABEL_160:
              if ( !*v725 )
                goto LABEL_331;
              v317 = (WarBoardDataEntity_o *)v727;
              v419 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*v725)->fields.bossBattleInfo,
                       (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_WarBoardSquareIndexData_(
                (WarBoardSquareIndexData_array **)(v727 + 96),
                v419,
                (const MethodInfo_23C235C *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v419 >= 1 )
              {
                v420 = 0LL;
                v421 = v419;
                v422 = 8LL;
                do
                {
                  if ( !*v725 )
                    goto LABEL_331;
                  bossBattleInfo = (*v725)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_331;
                  if ( v420 >= bossBattleInfo->max_length )
                    goto LABEL_332;
                  v424 = *(unsigned int **)(v727 + 96);
                  v425 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v422 * 4);
                  v426 = (WarBoardBossBattleData_o *)sub_B2C42C(WarBoardBossBattleData_TypeInfo);
                  WarBoardBossBattleData___ctor_22488388(v426, v425, v427);
                  if ( !v424 )
                    goto LABEL_331;
                  if ( v426 )
                  {
                    Instance = sub_B2C41C(v426, *(_QWORD *)(*(_QWORD *)v424 + 64LL));
                    if ( !Instance )
                      goto LABEL_333;
                  }
                  if ( v420 >= v424[6] )
                    goto LABEL_332;
                  *(_QWORD *)&v424[v422] = v426;
                  sub_B2C2F8(
                    (BattleServantConfConponent_o *)&v424[v422],
                    (System_Int32_array **)v426,
                    v428,
                    v429,
                    v430,
                    v431,
                    v432,
                    v433);
                  ++v420;
                  v422 += 2LL;
                }
                while ( (__int64)v420 < v421 );
                v317 = (WarBoardDataEntity_o *)v727;
              }
              layoutEntities = v716;
              goto LABEL_178;
            }
            v394 = 0LL;
            while ( 1 )
            {
              v395 = sub_B2C42C(WarBoardData___c__DisplayClass77_3_TypeInfo);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v395, 0LL);
              if ( v394 >= wallSaves->max_length )
                break;
              if ( !v395 )
                goto LABEL_331;
              v402 = (System_Int32_array **)wallSaves->m_Items[v394];
              *(_QWORD *)(v395 + 16) = v402;
              sub_B2C2F8((BattleServantConfConponent_o *)(v395 + 16), v402, v396, v397, v398, v399, v400, v401);
              v403 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v727 + 48);
              v404 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserWallData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v404,
                (Il2CppObject *)v395,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v403,
                                    (System_Func_TSource__bool__o *)v404,
                                    (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v395 + 16),
                  0LL);
              if ( (__int64)++v394 >= (int)wallSaves->max_length )
                goto LABEL_149;
            }
          }
          else
          {
            v347 = 0LL;
            while ( 1 )
            {
              v348 = sub_B2C42C(WarBoardData___c__DisplayClass77_1_TypeInfo);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v348, 0LL);
              if ( v347 >= itemSaves->max_length )
                break;
              if ( !v348 )
                goto LABEL_331;
              v355 = (System_Int32_array **)itemSaves->m_Items[v347];
              *(_QWORD *)(v348 + 16) = v355;
              sub_B2C2F8((BattleServantConfConponent_o *)(v348 + 16), v355, v349, v350, v351, v352, v353, v354);
              if ( !v727 )
                goto LABEL_331;
              v356 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v727 + 32);
              v357 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v357,
                (Il2CppObject *)v348,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v356,
                                    (System_Func_TSource__bool__o *)v357,
                                    (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v348 + 16),
                  0LL);
              if ( (__int64)++v347 >= (int)itemSaves->max_length )
                goto LABEL_117;
            }
          }
        }
        else
        {
          v332 = 0LL;
          while ( 1 )
          {
            v333 = sub_B2C42C(WarBoardData___c__DisplayClass77_0_TypeInfo);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v333, 0LL);
            if ( v332 >= pieceSaves->max_length )
              break;
            if ( !v333 )
              goto LABEL_331;
            v340 = (System_Int32_array **)pieceSaves->m_Items[v332];
            *(_QWORD *)(v333 + 16) = v340;
            v341 = (WarBoardPieceData_SaveData_o **)(v333 + 16);
            sub_B2C2F8((BattleServantConfConponent_o *)(v333 + 16), v340, v334, v335, v336, v337, v338, v339);
            if ( !*(_QWORD *)(v333 + 16) || !v727 )
              goto LABEL_331;
            if ( *(_DWORD *)(*(_QWORD *)(v333 + 16) + 24LL) )
            {
              v342 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v727 + 16);
              v343 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserServantData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v343,
                (Il2CppObject *)v333,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v342,
                                    (System_Func_TSource__bool__o *)v343,
                                    (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v341, 0LL);
            }
            else
            {
              v344 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v727 + 24);
              v345 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserMasterData__bool__TypeInfo);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v345,
                (Il2CppObject *)v333,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v344,
                                    (System_Func_TSource__bool__o *)v345,
                                    (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v341, 0LL);
            }
            if ( (__int64)++v332 >= (int)pieceSaves->max_length )
              goto LABEL_107;
          }
        }
LABEL_332:
        v694 = sub_B2C460(Instance);
        sub_B2C400(v694, 0LL);
      }
      v434 = WarBoardData_TypeInfo;
      if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave((const MethodInfo *)v434);
      *p_localSaveData = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)p_localSaveData, 0LL, v435, v436, v437, v438, v439, v440);
    }
    v317 = serverData;
LABEL_178:
    v316 = v729;
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_331;
    goto LABEL_179;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_331;
  v316 = v729;
  v317 = serverData;
  if ( !Instance )
    goto LABEL_331;
LABEL_179:
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v317, v317->fields.progressType != 3, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v317, 0LL);
  v728 = v317;
  if ( v316 >= 1 )
  {
    p_enemyDeck = &v317->fields.enemyDeck;
    v724 = 0;
    p_myDeck = &v317->fields.myDeck;
    v441 = 0LL;
    v442 = v316;
    v712 = v316;
    do
    {
      v443 = sub_B2C42C(WarBoardData___c__DisplayClass77_4_TypeInfo);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v443, 0LL);
      if ( v441 >= layoutEntities->max_length )
        goto LABEL_332;
      if ( !v443 )
        goto LABEL_331;
      v450 = (System_Int32_array **)layoutEntities->m_Items[v441];
      *(_QWORD *)(v443 + 16) = v450;
      v451 = (WarBoardStageLayoutEntity_o **)(v443 + 16);
      sub_B2C2F8((BattleServantConfConponent_o *)(v443 + 16), v450, v444, v445, v446, v447, v448, v449);
      v452 = *(WarBoardStageLayoutEntity_o **)(v443 + 16);
      v453 = (WarBoardSquareData_o *)sub_B2C42C(WarBoardSquareData_TypeInfo);
      WarBoardSquareData___ctor(v453, v452, roadEntities, 0LL);
      if ( v441 )
      {
        if ( (unsigned int)(v441 - 1) >= layoutEntities->max_length )
          goto LABEL_332;
        v455 = *((_QWORD *)&layoutEntities->max_length + v441);
        if ( !v455 )
          goto LABEL_331;
        v456 = *v451;
        if ( !*v451 )
          goto LABEL_331;
        if ( *(_DWORD *)(v455 + 20) == v456->fields.squareIndex )
          goto LABEL_196;
      }
      else
      {
        v456 = *v451;
        if ( !*v451 )
          goto LABEL_331;
      }
      throughCondId = (const MethodInfo *)(unsigned int)v456->fields.throughCondId;
      if ( (_DWORD)throughCondId )
      {
        Instance = (__int64)v711;
        if ( !v711 )
          goto LABEL_331;
        condGroup[0] = 0;
        if ( !WarBoardCommonReleaseMaster__IsOpen_22500540(v711, (int32_t)throughCondId, condGroup, v454) )
        {
          Instance = (__int64)v709;
          if ( !v709 )
            goto LABEL_331;
          v460 = (EventMissionProgressRequest_Argument_ProgressData_o *)v453;
          v461 = (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
          goto LABEL_243;
        }
      }
      Instance = (__int64)v714;
      if ( !v714 )
        goto LABEL_331;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v714,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v453,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
      v456 = *v451;
      if ( !*v451 )
        goto LABEL_331;
LABEL_196:
      if ( v456->fields.isPiecePut )
      {
        questId = v317->fields.questId;
        questPhase = v317->fields.questPhase;
        if ( v456->fields.pieceIndex )
        {
          svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v317->fields.svtInfo;
          v458 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserServantData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v458,
            (Il2CppObject *)v443,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
            (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
          v459 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   svtInfo,
                   (System_Func_TSource__bool__o *)v458,
                   (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
          Instance = 0LL;
        }
        else
        {
          masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v317->fields.masterInfo;
          v463 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserMasterData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v463,
            (Il2CppObject *)v443,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
            (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
          Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                masterInfo,
                                (System_Func_TSource__bool__o *)v463,
                                (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
          v459 = 0LL;
        }
        v464 = *v451;
        if ( !*v451 )
          goto LABEL_331;
        v465 = p_enemyDeck;
        v730 = (WarBoardUserMasterData_o *)Instance;
        if ( !v464->fields.forceId )
        {
          v465 = p_enemyDeck;
          if ( !v464->fields.pieceIndex )
            v465 = p_myDeck;
        }
        v466 = *v465;
        Type = Follower__getType(v464->fields.followerType, 0LL);
        IsNpc = Follower__IsNpc(Type, 0LL);
        progressType = v317->fields.progressType;
        v470 = *v451;
        v471 = IsNpc;
        v472 = *p_npcEntityDict;
        v473 = (WarBoardPieceData_o *)sub_B2C42C(WarBoardPieceData_TypeInfo);
        v474 = v473;
        v475 = progressType == 3;
        if ( v471 )
        {
          WarBoardPieceData___ctor(v473, v470, (WarBoardUserServantData_o *)v459, v730, v466, v475, v472, v724, 0LL);
          if ( !v474 )
            goto LABEL_331;
          v317 = v728;
          layoutEntities = v716;
          Instance = (__int64)Master_WarQuestSelectionMaster;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_331;
          Entity_20112236 = NpcFollowerMaster__GetEntity_20112236(
                              Master_WarQuestSelectionMaster,
                              questId,
                              questPhase,
                              v474->fields._npcId_k__BackingField,
                              0LL);
          if ( Entity_20112236 )
          {
            v477 = Entity_20112236;
            v474->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_20112236, 0LL);
            v474->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v477, 0LL);
          }
          if ( WarBoardPieceData__get_isPlayerGroup(v474, 0LL) )
          {
            Instance = (__int64)v701;
            if ( !v701 )
              goto LABEL_331;
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   v701,
                   &entity,
                   v474->fields._npcId_k__BackingField,
                   (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            {
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_331;
              NpcServantFollowerEntity__GetFollowerName_20113708(
                (NpcServantFollowerEntity_o *)entity,
                v474->fields._npcId_k__BackingField,
                questId,
                questPhase,
                &isChangeName,
                0LL);
              if ( isChangeName )
              {
                Instance = (__int64)v474->fields._battleServant_k__BackingField;
                if ( !Instance )
                  goto LABEL_331;
                BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
              }
            }
          }
          Instance = (__int64)v715;
          if ( !v715 )
            goto LABEL_331;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v715,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v474,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
          ++v724;
        }
        else
        {
          WarBoardPieceData___ctor(v473, v470, (WarBoardUserServantData_o *)v459, v730, v466, v475, v472, -1, 0LL);
          if ( !v474 )
            goto LABEL_331;
          v317 = v728;
          layoutEntities = v716;
          if ( WarBoardPieceData__get_isMaster(v474, 0LL) )
          {
            Instance = (__int64)*p_masterExistsForce;
            if ( !*p_masterExistsForce )
              goto LABEL_331;
            if ( !System_Collections_Generic_List_int___Contains(
                    (System_Collections_Generic_List_int__o *)Instance,
                    v474->fields._forceId_k__BackingField,
                    (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_331;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)Instance,
                v474->fields._forceId_k__BackingField,
                (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          Instance = (__int64)v715;
          if ( !v715 )
            goto LABEL_331;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v715,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v474,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
        v442 = v712;
      }
      v478 = *v451;
      if ( !*v451 )
        goto LABEL_331;
      switch ( v478->fields.type )
      {
        case 2:
          getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v317->fields.getItemInfo;
          v480 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserGetItemData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v480,
            (Il2CppObject *)v443,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
            (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
          v481 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   getItemInfo,
                   (System_Func_TSource__bool__o *)v480,
                   (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
          v482 = *(WarBoardStageLayoutEntity_o **)(v443 + 16);
          v483 = (WarBoardUserGetItemData_o *)v481;
          v484 = (WarBoardItemData_o *)sub_B2C42C(WarBoardItemData_TypeInfo);
          WarBoardItemData___ctor(v484, v482, v483, 0LL);
          Instance = (__int64)v706;
          if ( !v706 )
            goto LABEL_331;
          v485 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
          goto LABEL_242;
        case 3:
          v484 = (WarBoardItemData_o *)sub_B2C42C(WarBoardEffectData_TypeInfo);
          WarBoardEffectData___ctor((WarBoardEffectData_o *)v484, v478, 0LL);
          Instance = (__int64)v705;
          if ( !v705 )
            goto LABEL_331;
          v485 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
          goto LABEL_242;
        case 4:
          treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v317->fields.treasureInfo;
          if ( !treasureInfo )
            goto LABEL_236;
          v487 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserTreasureData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v487,
            (Il2CppObject *)v443,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
            (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
          if ( System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                 treasureInfo,
                 (System_Func_TSource__bool__o *)v487,
                 (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___) )
          {
            goto LABEL_244;
          }
          v478 = *v451;
LABEL_236:
          v484 = (WarBoardItemData_o *)sub_B2C42C(WarBoardTreasureData_TypeInfo);
          WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v484, v478, 0LL);
          Instance = (__int64)v702;
          if ( !v702 )
            goto LABEL_331;
          v485 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_242:
          v461 = (const MethodInfo_2EF4460 *)*v485;
          v460 = (EventMissionProgressRequest_Argument_ProgressData_o *)v484;
          break;
        case 5:
          wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v317->fields.wallInfo;
          v489 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserWallData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v489,
            (Il2CppObject *)v443,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
            (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
          v490 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   wallInfo,
                   (System_Func_TSource__bool__o *)v489,
                   (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
          v491 = *(WarBoardStageLayoutEntity_o **)(v443 + 16);
          v492 = (WarBoardUserWallData_o *)v490;
          v484 = (WarBoardItemData_o *)sub_B2C42C(WarBoardWallData_TypeInfo);
          WarBoardWallData___ctor((WarBoardWallData_o *)v484, v491, v492, 0LL);
          Instance = (__int64)v707;
          if ( !v707 )
            goto LABEL_331;
          v485 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
          goto LABEL_242;
        default:
          goto LABEL_244;
      }
LABEL_243:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        v460,
        v461);
LABEL_244:
      ++v441;
    }
    while ( (__int64)v441 < v442 );
  }
  Instance = (__int64)v714;
  if ( !v714 )
    goto LABEL_331;
  v493 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v714,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v722->fields.squares = (struct WarBoardSquareData_array *)v493;
  sub_B2C2F8((BattleServantConfConponent_o *)&v722->fields.squares, v493, v494, v495, v496, v497, v498, v499);
  Instance = (__int64)v709;
  if ( !v709 )
    goto LABEL_331;
  v500 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v709,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v722->fields.condSquares = (struct WarBoardSquareData_array *)v500;
  sub_B2C2F8((BattleServantConfConponent_o *)&v722->fields.condSquares, v500, v501, v502, v503, v504, v505, v506);
  Instance = (__int64)v715;
  if ( !v715 )
    goto LABEL_331;
  v507 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v715,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v722->fields.pieces = (struct WarBoardPieceData_array *)v507;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v722->fields.pieces;
  sub_B2C2F8((BattleServantConfConponent_o *)&v722->fields.pieces, v507, v509, v510, v511, v512, v513, v514);
  pieces = (BattleBuffData_BuffData_array *)v722->fields.pieces;
  v516 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_WarBoardPieceData__TypeInfo);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v516,
    (Il2CppObject *)v722,
    Method_WarBoardData_ComparePiece__,
    (const MethodInfo_25D8DF8 *)Method_System_Comparison_WarBoardPieceData___ctor__);
  System_Array__Sort_BattleBuffData_BuffData_(
    pieces,
    (System_Comparison_T__o *)v516,
    (const MethodInfo_23CBA5C *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v706;
  if ( !v706 )
    goto LABEL_331;
  v517 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v706,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v722->fields.items = (struct WarBoardItemData_array *)v517;
  sub_B2C2F8((BattleServantConfConponent_o *)&v722->fields.items, v517, v518, v519, v520, v521, v522, v523);
  Instance = (__int64)v702;
  if ( !v702 )
    goto LABEL_331;
  v524 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v702,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v722->fields.treasures = (struct WarBoardTreasureData_array *)v524;
  sub_B2C2F8((BattleServantConfConponent_o *)&v722->fields.treasures, v524, v525, v526, v527, v528, v529, v530);
  Instance = (__int64)v705;
  if ( !v705 )
    goto LABEL_331;
  v531 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v705,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v722->fields.effects = (struct WarBoardEffectData_array *)v531;
  sub_B2C2F8((BattleServantConfConponent_o *)&v722->fields.effects, v531, v532, v533, v534, v535, v536, v537);
  Instance = (__int64)v707;
  if ( !v707 )
    goto LABEL_331;
  v538 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v707,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v722->fields.walls = (struct WarBoardWallData_array *)v538;
  sub_B2C2F8((BattleServantConfConponent_o *)&v722->fields.walls, v538, v539, v540, v541, v542, v543, v544);
  v722->fields.serverData = v317;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v722->fields.serverData,
    (System_Int32_array **)v317,
    v545,
    v546,
    v547,
    v548,
    v549,
    v550);
  if ( v317->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v722, throughCondId);
  localSaveData = v722->fields.localSaveData;
  if ( localSaveData )
  {
    v552 = localSaveData->fields.pieceSaves;
    v731 = &v722->fields.localSaveData;
    if ( v552 )
    {
      if ( (int)v552->max_length >= 1 )
      {
        v553 = &WarBoardData___c__DisplayClass77_5_TypeInfo;
        v554 = 0LL;
        m_Items = v552->m_Items;
        v733 = localSaveData->fields.pieceSaves;
        do
        {
          v556 = sub_B2C42C(*v553);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v556, 0LL);
          if ( v554 >= v552->max_length )
            goto LABEL_332;
          if ( !v556 )
            goto LABEL_331;
          v563 = (System_Int32_array **)m_Items[v554];
          *(_QWORD *)(v556 + 16) = v563;
          v564 = (WarBoardPieceData_SaveData_o **)(v556 + 16);
          sub_B2C2F8((BattleServantConfConponent_o *)(v556 + 16), v563, v557, v558, v559, v560, v561, v562);
          v565 = *p_pieces;
          v566 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v566,
            (Il2CppObject *)v556,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
          if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v565,
                  (System_Func_T__bool__o *)v566,
                  (const MethodInfo_1726758 *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v567 = (System_Collections_Generic_IEnumerable_TSource__o *)v317->fields.svtInfo;
            v568 = m_Items;
            v569 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserServantData__bool__TypeInfo);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v569,
              (Il2CppObject *)v556,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
            v570 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                     v567,
                     (System_Func_TSource__bool__o *)v569,
                     (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v571 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v571,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v571 )
              goto LABEL_331;
            v572 = v553;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v571,
              *p_pieces,
              (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_331;
            id = p_fields->stageEntity->fields.id;
            v574 = *v564;
            v575 = (WarBoardPieceData_o *)sub_B2C42C(WarBoardPieceData_TypeInfo);
            WarBoardPieceData___ctor_22459860(v575, id, (WarBoardUserServantData_o *)v570, v574, 0LL, -1, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v571,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v575,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
            v576 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v571,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v576;
            sub_B2C2F8((BattleServantConfConponent_o *)p_pieces, v576, v577, v578, v579, v580, v581, v582);
            v317 = v728;
            v553 = v572;
            m_Items = v568;
            v552 = v733;
          }
          Instance = (__int64)*v564;
          if ( !*v564 )
            goto LABEL_331;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v722, 0LL);
          Instance = (__int64)*v564;
          if ( !*v564 )
            goto LABEL_331;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0LL);
        }
        while ( (__int64)++v554 < (int)v552->max_length );
      }
      if ( *v731 )
      {
        v583 = (*v731)->fields.itemSaves;
        if ( v583 )
        {
          max_length = v583->max_length;
          if ( max_length >= 1 )
          {
            v585 = 0;
            while ( v585 < max_length )
            {
              v586 = (__int64)v583 + 8 * (int)v585;
              v587 = *(WarBoardItemData_SaveData_o **)(v586 + 32);
              if ( !v587 )
                goto LABEL_331;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v586 + 32), v722, 0LL);
              WarBoardItemData_SaveData__Load(v587, 0LL);
              max_length = v583->max_length;
              if ( (int)++v585 >= max_length )
                goto LABEL_274;
            }
            goto LABEL_332;
          }
LABEL_274:
          if ( *v731 )
          {
            v588 = (*v731)->fields.treasureSaves;
            if ( v588 )
            {
              v589 = v588->max_length;
              if ( v589 >= 1 )
              {
                v590 = 0;
                while ( v590 < v589 )
                {
                  v591 = (__int64)v588 + 8 * (int)v590;
                  v592 = *(WarBoardTreasureData_SaveData_o **)(v591 + 32);
                  if ( !v592 )
                    goto LABEL_331;
                  WarBoardTreasureData_SaveData__SetOwner(*(WarBoardTreasureData_SaveData_o **)(v591 + 32), v722, 0LL);
                  WarBoardTreasureData_SaveData__Load(v592, 0LL);
                  v589 = v588->max_length;
                  if ( (int)++v590 >= v589 )
                    goto LABEL_281;
                }
                goto LABEL_332;
              }
LABEL_281:
              if ( *v731 )
              {
                v593 = (*v731)->fields.wallSaves;
                if ( v593 )
                {
                  v594 = v593->max_length;
                  if ( v594 >= 1 )
                  {
                    v595 = 0;
                    while ( v595 < v594 )
                    {
                      v596 = (__int64)v593 + 8 * (int)v595;
                      v597 = *(WarBoardWallData_SaveData_o **)(v596 + 32);
                      if ( !v597 )
                        goto LABEL_331;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v596 + 32), v722, 0LL);
                      WarBoardWallData_SaveData__Load(v597, 0LL);
                      v594 = v593->max_length;
                      if ( (int)++v595 >= v594 )
                        goto LABEL_288;
                    }
                    goto LABEL_332;
                  }
LABEL_288:
                  if ( *v731 )
                  {
                    squareSaves = (*v731)->fields.squareSaves;
                    if ( squareSaves )
                    {
                      v599 = squareSaves->max_length;
                      if ( v599 >= 1 )
                      {
                        v600 = 0;
                        while ( v600 < v599 )
                        {
                          v601 = (__int64)squareSaves + 8 * (int)v600;
                          v602 = *(WarBoardSquareData_SaveData_o **)(v601 + 32);
                          if ( !v602 )
                            goto LABEL_331;
                          WarBoardSquareData_SaveData__SetOwner(
                            *(WarBoardSquareData_SaveData_o **)(v601 + 32),
                            v722,
                            0LL);
                          WarBoardSquareData_SaveData__Load(v602, 0LL);
                          v599 = squareSaves->max_length;
                          if ( (int)++v600 >= v599 )
                            goto LABEL_295;
                        }
                        goto LABEL_332;
                      }
LABEL_295:
                      if ( *v731 )
                      {
                        v722->fields.isPlayedHalfDeadMessage = (*v731)->fields.isPlayedHalfDeadMessage;
                        v603 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardEventData__TypeInfo);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v603,
                          (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v722->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v603;
                        sub_B2C2F8(
                          (BattleServantConfConponent_o *)p_listEvent,
                          (System_Int32_array **)v603,
                          v604,
                          v605,
                          v606,
                          v607,
                          v608,
                          v609);
                        v616 = v722->fields.localSaveData;
                        if ( v616 )
                        {
                          eventSaves = v616->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v618 = *(_QWORD *)&eventSaves->max_length;
                            if ( (int)v618 >= 1 )
                            {
                              v619 = 0LL;
                              while ( v619 < (unsigned int)v618 )
                              {
                                v620 = eventSaves->m_Items[v619];
                                v621 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_listEvent;
                                v622 = (WarBoardEventData_o *)sub_B2C42C(WarBoardEventData_TypeInfo);
                                WarBoardEventData___ctor_18084744(v622, v620, 0LL);
                                if ( !v621 )
                                  goto LABEL_331;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v621,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v622,
                                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
                                LODWORD(v618) = eventSaves->max_length;
                                if ( (__int64)++v619 >= (int)v618 )
                                  goto LABEL_303;
                              }
                              goto LABEL_332;
                            }
LABEL_303:
                            v623 = *v731;
                            if ( *v731 )
                            {
                              v722->fields.winCondId = v623->fields.winCondId;
                              latestPieceActionSquareIndexes = (System_Int32_array **)v623->fields.latestPieceActionSquareIndexes;
                              v722->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)latestPieceActionSquareIndexes;
                              sub_B2C2F8(
                                (BattleServantConfConponent_o *)p_latestPieceActionSquareIndexes,
                                latestPieceActionSquareIndexes,
                                v610,
                                v611,
                                v612,
                                v613,
                                v614,
                                v615);
                              v631 = v722->fields.localSaveData;
                              if ( v631 )
                              {
                                latestBattlePieceUniqueIndexes = (System_Int32_array **)v631->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = (BattleServantConfConponent_c *)latestBattlePieceUniqueIndexes;
                                sub_B2C2F8(
                                  p_latestBattlePieceUniqueIndexes,
                                  latestBattlePieceUniqueIndexes,
                                  v625,
                                  v626,
                                  v627,
                                  v628,
                                  v629,
                                  v630);
                                v633 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo);
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                  v633,
                                  (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (BattleServantConfConponent_c *)v633;
                                sub_B2C2F8(
                                  p_listPrevCond,
                                  (System_Int32_array **)v633,
                                  v634,
                                  v635,
                                  v636,
                                  v637,
                                  v638,
                                  v639);
                                if ( *v731 )
                                {
                                  prevCondSaves = (*v731)->fields.prevCondSaves;
                                  if ( prevCondSaves )
                                  {
                                    v641 = *(_QWORD *)&prevCondSaves->max_length;
                                    if ( (int)v641 >= 1 )
                                    {
                                      v642 = 0LL;
                                      while ( v642 < (unsigned int)v641 )
                                      {
                                        v643 = prevCondSaves->m_Items[v642];
                                        v644 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listPrevCond->klass;
                                        v645 = (WarBoardPrevCondData_o *)sub_B2C42C(WarBoardPrevCondData_TypeInfo);
                                        WarBoardPrevCondData___ctor_27739392(v645, v643, 0LL);
                                        if ( !v644 )
                                          goto LABEL_331;
                                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                          v644,
                                          (EventMissionProgressRequest_Argument_ProgressData_o *)v645,
                                          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
                                        LODWORD(v641) = prevCondSaves->max_length;
                                        if ( (__int64)++v642 >= (int)v641 )
                                          goto LABEL_312;
                                      }
                                      goto LABEL_332;
                                    }
LABEL_312:
                                    v646 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo);
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                      v646,
                                      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (BattleServantConfConponent_c *)v646;
                                    sub_B2C2F8(
                                      p_reinforcementsSaveList,
                                      (System_Int32_array **)v646,
                                      v647,
                                      v648,
                                      v649,
                                      v650,
                                      v651,
                                      v652);
                                    if ( *v731 )
                                    {
                                      reinforcementsSaves = (*v731)->fields.reinforcementsSaves;
                                      if ( reinforcementsSaves )
                                      {
                                        v654 = *(_QWORD *)&reinforcementsSaves->max_length;
                                        if ( (int)v654 >= 1 )
                                        {
                                          v655 = 0LL;
                                          while ( v655 < (unsigned int)v654 )
                                          {
                                            v656 = reinforcementsSaves->m_Items[v655];
                                            v657 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_reinforcementsSaveList->klass;
                                            v658 = (HoldReinforcementsData_o *)sub_B2C42C(HoldReinforcementsData_TypeInfo);
                                            HoldReinforcementsData___ctor_27361744(v658, v656, 0LL);
                                            if ( !v657 )
                                              goto LABEL_331;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v657,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v658,
                                              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
                                            LODWORD(v654) = reinforcementsSaves->max_length;
                                            if ( (__int64)++v655 >= (int)v654 )
                                              goto LABEL_319;
                                          }
                                          goto LABEL_332;
                                        }
LABEL_319:
                                        if ( *v731 )
                                        {
                                          v659 = (System_Int32_array **)System_Linq_Enumerable__ToList_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)(*v731)->fields.playedReinforcements,
                                                                          (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (BattleServantConfConponent_c *)v659;
                                          sub_B2C2F8(
                                            p_playedStageReinforcementsList,
                                            v659,
                                            v660,
                                            v661,
                                            v662,
                                            v663,
                                            v664,
                                            v665);
                                          v666 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardUiData__TypeInfo);
                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                            v666,
                                            (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (BattleServantConfConponent_c *)v666;
                                          sub_B2C2F8(
                                            p_listUiData,
                                            (System_Int32_array **)v666,
                                            v667,
                                            v668,
                                            v669,
                                            v670,
                                            v671,
                                            v672);
                                          if ( *v731 )
                                          {
                                            uiDataSaves = (*v731)->fields.uiDataSaves;
                                            if ( uiDataSaves )
                                            {
                                              v680 = *(_QWORD *)&uiDataSaves->max_length;
                                              if ( (int)v680 >= 1 )
                                              {
                                                v681 = 0LL;
                                                while ( v681 < (unsigned int)v680 )
                                                {
                                                  v682 = uiDataSaves->m_Items[v681];
                                                  v683 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listUiData->klass;
                                                  v684 = (WarBoardUiData_o *)sub_B2C42C(WarBoardUiData_TypeInfo);
                                                  WarBoardUiData___ctor_26815256(v684, v682, 0LL);
                                                  if ( !v683 )
                                                    goto LABEL_331;
                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                    v683,
                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v684,
                                                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
                                                  LODWORD(v680) = uiDataSaves->max_length;
                                                  if ( (__int64)++v681 >= (int)v680 )
                                                    goto LABEL_327;
                                                }
                                                goto LABEL_332;
                                              }
LABEL_327:
                                              if ( *v731 )
                                              {
                                                bgAnimationInfo = (System_Int32_array **)(*v731)->fields.bgAnimationInfo;
                                                p_bgAnimationInfo_k__BackingField->klass = (BattleServantConfConponent_c *)bgAnimationInfo;
                                                sub_B2C2F8(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  bgAnimationInfo,
                                                  v673,
                                                  v674,
                                                  v675,
                                                  v676,
                                                  v677,
                                                  v678);
                                                v686 = *v731;
                                                if ( *v731 )
                                                {
                                                  v722->fields._ContinueConsumeType_k__BackingField = v686->fields.continueConsumeType;
                                                  v722->fields._IsContinue_k__BackingField = v686->fields.isContinue;
                                                  v722->fields._IsNextTurn_k__BackingField = v686->fields.isNextTurn;
                                                  v722->fields.localSaveTiming = v686->fields.localSaveTiming;
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
LABEL_331:
    sub_B2C434(Instance, throughCondId);
  }
  v687 = (WarBoardData_WarBoardLocalSaveData_o *)sub_B2C42C(WarBoardData_WarBoardLocalSaveData_TypeInfo);
  WarBoardData_WarBoardLocalSaveData___ctor_20854684(v687, v722, 0LL);
  v722->fields.localSaveData = v687;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v722->fields.localSaveData,
    (System_Int32_array **)v687,
    v688,
    v689,
    v690,
    v691,
    v692,
    v693);
}


void __fastcall WarBoardData__AddPlayedEventData(
        WarBoardData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x0

  if ( (byte_418668B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, eventData);
    byte_418668B = 1;
  }
  listEvent = this->fields.listEvent;
  if ( !listEvent )
    sub_B2C434(0LL, eventData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listEvent,
    (EventMissionProgressRequest_Argument_ProgressData_o *)eventData,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
}


WarBoardPieceData_array *__fastcall WarBoardData__AddReinforcementPieces(
        WarBoardData_o *this,
        WarBoardDataEntity_o *serverData,
        WarBoardUserServantData_array *reinfoSvtInfo,
        System_Int32_array *indexList,
        WarBoardStageReinforcementsEntity_o *reinfoStage,
        const MethodInfo *method)
{
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
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x25
  __int64 Instance; // x0
  __int64 v28; // x1
  NpcFollowerMaster_o *v29; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x24
  __int64 v31; // x8
  unsigned __int64 v32; // x23
  WarBoardUserServantData_o *v33; // x22
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v35; // x8
  __int64 v36; // x9
  WarBoardReinforcementsMaster_o *v37; // x19
  struct System_Collections_Generic_List_int__o *reinforcementsAppointmentSquareList; // x25
  WarBoardReinforcementsEntity_o *v39; // x20
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  int32_t v41; // w21
  int32_t v42; // w25
  WarBoardPieceData_o *v43; // x27
  NpcFollowerEntity_o *Entity_20112236; // x0
  NpcFollowerEntity_o *v45; // x20
  struct WarBoardPieceData_array **p_pieces; // x20
  struct WarBoardPieceData_array *v47; // x0
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
  System_Int32_array **svtInfo; // x1
  __int64 v61; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  unsigned __int64 v69; // x23
  signed __int64 v70; // x24
  __int64 v71; // x25
  struct WarBoardData_WarBoardLocalSaveData_o *v72; // x8
  struct WarBoardPieceData_array *v73; // x9
  unsigned int *pieceSaves; // x27
  WarBoardPieceData_o *v75; // x22
  WarBoardPieceData_SaveData_o *v76; // x21
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v84; // x0
  __int64 v85; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v86; // [xsp+8h] [xbp-B8h]
  WarBoardDataEntity_o *v87; // [xsp+10h] [xbp-B0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-A8h]
  System_Int32_array *v89; // [xsp+20h] [xbp-A0h]
  WarBoardUserServantData_array *v90; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v91; // [xsp+30h] [xbp-90h]
  WarBoardUserServantData_o **m_Items; // [xsp+38h] [xbp-88h]
  int32_t questPhase; // [xsp+40h] [xbp-80h]
  int32_t questId; // [xsp+44h] [xbp-7Ch]
  WarBoardStageReinforcementsEntity_o *stageReinforcementsEntity; // [xsp+48h] [xbp-78h]
  int32_t *v96; // [xsp+50h] [xbp-70h]
  bool isChangeName; // [xsp+5Ch] [xbp-64h] BYREF
  UserServantEntity_o *v98; // [xsp+60h] [xbp-60h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4186689 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, serverData);
    sub_B2C35C(&Method_DataManager_GetMaster_NpcFollowerMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v12);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__RemoveAt__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v21);
    sub_B2C35C(&WarBoardPieceData_SaveData___TypeInfo, v22);
    sub_B2C35C(&WarBoardPieceData_SaveData_TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&WarBoardPieceData_TypeInfo, v25);
    byte_4186689 = 1;
  }
  entity = 0LL;
  v98 = 0LL;
  isChangeName = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !serverData )
    goto LABEL_60;
  v87 = serverData;
  v29 = (NpcFollowerMaster_o *)Instance;
  questId = serverData->fields.questId;
  questPhase = serverData->fields.questPhase;
  v86 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v86,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_60;
  v31 = *(_QWORD *)&reinfoSvtInfo->max_length;
  v91 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v30;
  if ( (int)v31 >= 1 )
  {
    v32 = 0LL;
    stageReinforcementsEntity = reinfoStage;
    v96 = &indexList->m_Items[1];
    m_Items = reinfoSvtInfo->m_Items;
    v89 = indexList;
    v90 = reinfoSvtInfo;
    do
    {
      if ( v32 >= (unsigned int)v31 )
      {
LABEL_61:
        v84 = sub_B2C460(Instance);
        sub_B2C400(v84, 0LL);
      }
      v33 = m_Items[v32];
      if ( v33 )
      {
        if ( !reinfoStage || !indexList )
          goto LABEL_60;
      }
      else
      {
        if ( !reinfoStage )
          goto LABEL_60;
        reinforcementsIds = reinfoStage->fields.reinforcementsIds;
        if ( !reinforcementsIds || !indexList )
          goto LABEL_60;
        if ( v32 >= indexList->max_length )
          goto LABEL_61;
        if ( v96[v32] < (signed int)reinforcementsIds->max_length )
          goto LABEL_43;
      }
      if ( v32 >= indexList->max_length )
        goto LABEL_61;
      v35 = reinfoStage->fields.reinforcementsIds;
      if ( !v35 )
        goto LABEL_60;
      v36 = v96[v32];
      if ( (unsigned int)v36 >= v35->max_length )
        goto LABEL_61;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_60;
      v37 = Master_WarQuestSelectionMaster;
      Instance = WarBoardReinforcementsMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   v35->m_Items[v36 + 1],
                   0LL);
      reinforcementsAppointmentSquareList = this->fields.reinforcementsAppointmentSquareList;
      if ( !reinforcementsAppointmentSquareList )
        goto LABEL_60;
      v39 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      if ( !reinforcementsAppointmentSquareList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      if ( v32 >= indexList->max_length )
        goto LABEL_61;
      v41 = reinforcementsAppointmentSquareList->fields._items->m_Items[1];
      v42 = v96[v32];
      v43 = (WarBoardPieceData_o *)sub_B2C42C(WarBoardPieceData_TypeInfo);
      WarBoardPieceData___ctor_22458612(v43, stageReinforcementsEntity, v39, v33, npcEntityDict, v32, v41, v42, 0LL);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_60;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_2F68CB0 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v91;
      if ( !v43 || !v29 )
        goto LABEL_60;
      Master_WarQuestSelectionMaster = v37;
      Entity_20112236 = NpcFollowerMaster__GetEntity_20112236(
                          v29,
                          questId,
                          questPhase,
                          v43->fields._npcId_k__BackingField,
                          0LL);
      if ( Entity_20112236 )
      {
        v45 = Entity_20112236;
        v43->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_20112236, 0LL);
        v43->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v45, 0LL);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v43, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                     MasterData_WarQuestSelectionMaster,
                     &v98,
                     v43->fields._npcId_k__BackingField,
                     (const MethodInfo_24E4354 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v98;
          if ( !v98 )
            goto LABEL_60;
          Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_20113708(
                                (NpcServantFollowerEntity_o *)v98,
                                v43->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0LL);
          if ( isChangeName )
          {
            Instance = (__int64)v43->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_60;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
          }
        }
      }
      if ( !v91 )
        goto LABEL_60;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v91,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      reinfoStage = stageReinforcementsEntity;
      indexList = v89;
      reinfoSvtInfo = v90;
LABEL_43:
      LODWORD(v31) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v32 < (int)v31 );
  }
  if ( !v86 )
    goto LABEL_60;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v86,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v86,
    (System_Collections_Generic_IEnumerable_T__o *)v30,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v47 = (struct WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v86,
                                            (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = v47;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.pieces,
    (System_Int32_array **)v47,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = (System_Int32_array **)v87->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_B2C2F8((BattleServantConfConponent_o *)(Instance + 16), svtInfo, v54, v55, v56, v57, v58, v59),
        !*p_pieces)
    || (v61 = *(_QWORD *)&(*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_B2C374(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v61),
        !localSaveData) )
  {
LABEL_60:
    sub_B2C434(Instance, v28);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&localSaveData->fields.pieceSaves,
    (System_Int32_array **)Instance,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  if ( (int)v61 >= 1 )
  {
    v69 = 0LL;
    v70 = (int)v61;
    v71 = 8LL;
    do
    {
      v72 = this->fields.localSaveData;
      if ( !v72 )
        goto LABEL_60;
      v73 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_60;
      if ( v69 >= v73->max_length )
        goto LABEL_61;
      pieceSaves = (unsigned int *)v72->fields.pieceSaves;
      v75 = *(WarBoardPieceData_o **)((char *)&v73->obj.klass + v71 * 4);
      v76 = (WarBoardPieceData_SaveData_o *)sub_B2C42C(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_22648500(v76, v75, 0LL);
      if ( !pieceSaves )
        goto LABEL_60;
      if ( v76 )
      {
        Instance = sub_B2C41C(v76, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v85 = sub_B2C454();
          sub_B2C400(v85, 0LL);
        }
      }
      if ( v69 >= pieceSaves[6] )
        goto LABEL_61;
      *(_QWORD *)&pieceSaves[v71] = v76;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&pieceSaves[v71],
        (System_Int32_array **)v76,
        v77,
        v78,
        v79,
        v80,
        v81,
        v82);
      ++v69;
      v71 += 2LL;
    }
    while ( (__int64)v69 < v70 );
  }
  Instance = (__int64)v91;
  if ( !v91 )
    goto LABEL_60;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v91,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__AddSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
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
  WarBoardData___c__DisplayClass173_0_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v24; // x22
  System_Collections_Generic_List_int__o *v25; // x21
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4186690 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__, v7);
    sub_B2C35C(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__, v14);
    sub_B2C35C(&WarBoardData___c__DisplayClass173_0_TypeInfo, v15);
    byte_4186690 = 1;
  }
  v16 = (WarBoardData___c__DisplayClass173_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass173_0_TypeInfo);
  WarBoardData___c__DisplayClass173_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  v16->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v21,
                                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v24 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v25,
    v24,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  if ( !v25 )
LABEL_10:
    sub_B2C434(v17, v18);
  if ( !System_Collections_Generic_List_int___Contains(
          v25,
          effectId,
          (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Add(
      v25,
      effectId,
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    v26 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v25,
                                   (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v26;
    sub_B2C2F8(p_isExecute, v26, v27, v28, v29, v30, v31, v32);
  }
}


void __fastcall WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v16; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__191_0; // x20
  Il2CppObject *v19; // x21
  struct WarBoardData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  WarBoardData___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  struct WarBoardData___c_StaticFields *v30; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__191_1; // x20
  Il2CppObject *v32; // x21
  struct WarBoardData___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  WarBoardData___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_T__o *v42; // x19
  struct WarBoardData___c_StaticFields *v43; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_2; // x20
  Il2CppObject *v45; // x21
  struct WarBoardData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_418669F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_BattleBuffData___ctor__, method);
    sub_B2C35C(&System_Action_BattleBuffData__TypeInfo, v3);
    sub_B2C35C(&Method_BasicHelper_ForEach_BattleBuffData___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_BattleBuffData___, v6);
    sub_B2C35C(&Method_System_Func_BattleBuffData__bool___ctor__, v7);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__, v8);
    sub_B2C35C(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo, v9);
    sub_B2C35C(&System_Func_BattleBuffData__bool__TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, v11);
    sub_B2C35C(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, v12);
    sub_B2C35C(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, v13);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v14);
    byte_418669F = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v16 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v16 = WarBoardData___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_WarBoardPieceData__BattleBuffData__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__191_0,
      v19,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_0__,
      (const MethodInfo_2713350 *)Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__);
    v20 = WarBoardData___c_TypeInfo->static_fields;
    v20->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__191_0,
      (System_Int32_array **)_9__191_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v28 = WarBoardData___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v28 = WarBoardData___c_TypeInfo;
  }
  v30 = v28->static_fields;
  _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v30->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v30 = WarBoardData___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBuffData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__191_1,
      v32,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_BattleBuffData__bool___ctor__);
    v33 = WarBoardData___c_TypeInfo->static_fields;
    v33->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v33->__9__191_1,
      (System_Int32_array **)_9__191_1,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v29,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v41 = WarBoardData___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_T__o *)v40;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v41 = WarBoardData___c_TypeInfo;
  }
  v43 = v41->static_fields;
  _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v43->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v43 = WarBoardData___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_BattleBuffData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__191_2,
      v45,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_2__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_BattleBuffData___ctor__);
    v46 = WarBoardData___c_TypeInfo->static_fields;
    v46->__9__191_2 = (struct System_Action_BattleBuffData__o *)_9__191_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v46->__9__191_2,
      (System_Int32_array **)_9__191_2,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v42,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_BattleBuffData___);
}


void __fastcall WarBoardData__CheckItem(
        WarBoardData_o *this,
        System_Collections_Generic_List_WarBoardTaskBase__o *taskList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardTaskBase__o *v3; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 AliveServantPieces; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int v11; // w8
  __int64 v12; // x21
  const MethodInfo_2841668 **v13; // x26
  unsigned int v14; // w27
  WarBoardPieceData_o *v15; // x22
  __int64 v16; // x23
  WarBoardManager_o *v17; // x24
  const MethodInfo_2155668 *v18; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x24
  const MethodInfo_2841668 **v20; // x19
  WebViewManager_o *Instance; // x25
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  __int64 v28; // x26
  __int64 v29; // x0
  __int64 v30; // x0
  WarBoardData_o *v31; // [xsp+8h] [xbp-68h]
  System_Nullable_Vector3__o v32; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o v33; // 0:x3.8
  System_Nullable_Vector3__o v34; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v3 = taskList;
  if ( (byte_4186656 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, taskList);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v7);
    byte_4186656 = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_24:
    sub_B2C434(AliveServantPieces, v9);
  v11 = *(_DWORD *)(AliveServantPieces + 24);
  v12 = AliveServantPieces;
  if ( v11 >= 1 )
  {
    v13 = (const MethodInfo_2841668 **)&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
    v14 = 0;
    v31 = this;
    while ( v14 < v11 )
    {
      v15 = *(WarBoardPieceData_o **)(v12 + 8LL * (int)v14 + 32);
      if ( !v15 )
        goto LABEL_24;
      AliveServantPieces = (__int64)WarBoardData__GetItem(this, v15->fields._nowSquareIndex_k__BackingField, v10);
      if ( AliveServantPieces )
      {
        v16 = AliveServantPieces;
        AliveServantPieces = WarBoardItemData__get_Acquired((WarBoardItemData_o *)AliveServantPieces, 0LL);
        if ( (AliveServantPieces & 1) == 0 )
        {
          AliveServantPieces = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance(*v13);
          if ( !*(_QWORD *)(v16 + 56) )
            goto LABEL_24;
          v17 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(
                                          *(UnityEngine_Component_o **)(v16 + 56),
                                          0LL);
          if ( !AliveServantPieces )
            goto LABEL_24;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0LL);
          *(_QWORD *)&v34.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v34.fields.value.fields.x = &v32;
          *(_QWORD *)&v32.fields.value.fields.x = 0LL;
          *(_QWORD *)&v32.fields.value.fields.z = 0LL;
          System_Nullable_Vector3____ctor(v34, localPosition, v18);
          if ( !v17 )
            goto LABEL_24;
          v33 = 0LL;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           v17,
                                                                                           v32,
                                                                                           v33,
                                                                                           1,
                                                                                           0,
                                                                                           1,
                                                                                           0LL);
          if ( v3 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v3,
              CameraPerformanceTask,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          }
          else
          {
            v20 = v13;
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance(*v13);
            AliveServantPieces = sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
            if ( !AliveServantPieces )
              goto LABEL_24;
            v28 = AliveServantPieces;
            if ( CameraPerformanceTask )
            {
              AliveServantPieces = sub_B2C41C(CameraPerformanceTask, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v30 = sub_B2C454();
                sub_B2C400(v30, 0LL);
              }
            }
            if ( !*(_DWORD *)(v28 + 24) )
              break;
            *(_QWORD *)(v28 + 32) = CameraPerformanceTask;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(v28 + 32),
              (System_Int32_array **)CameraPerformanceTask,
              v22,
              v23,
              v24,
              v25,
              v26,
              v27);
            if ( !Instance )
              goto LABEL_24;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v28, 0LL);
            v13 = v20;
            v3 = 0LL;
            this = v31;
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v16, v15, v3, 0, 0LL);
        }
      }
      v11 = *(_DWORD *)(v12 + 24);
      if ( (int)++v14 >= v11 )
        return;
    }
    v29 = sub_B2C460(AliveServantPieces);
    sub_B2C400(v29, 0LL);
  }
}


bool __fastcall WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v16; // w24
  int v17; // w23
  int32_t i; // w20
  int32_t v19; // w21
  int v20; // w8
  void *v21; // x22
  unsigned int v22; // w25
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v24; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v27; // x21
  struct WarBoardData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x0
  int32_t condGroup; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418665B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int____67413720, v5);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v6);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardData___c__CheckWinCond_b__98_0__, v8);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v9);
    byte_418665B = 1;
  }
  condGroup = 0;
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_22500540(
              (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster,
              this->fields.winCondId,
              &condGroup,
              v12) )
        return 0;
      result = 1;
      this->fields.winCondGroup = condGroup;
      return result;
    }
LABEL_41:
    sub_B2C434(Master_WarQuestSelectionMaster, v11);
  }
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v17 = 0;
    v16 = 0;
    goto LABEL_31;
  }
  maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
  v16 = 0;
  v17 = 0;
  for ( i = 1; i <= maxForceId_k__BackingField; ++i )
  {
    if ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
      continue;
    v19 = 0;
    do
    {
      Master_WarQuestSelectionMaster = WarBoardData__GetPieces_22505868(this, i, v19, v2);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_41;
      v20 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
      v21 = Master_WarQuestSelectionMaster;
      if ( v20 >= 1 )
      {
        v22 = 0;
        do
        {
          if ( v22 >= v20 )
          {
            v35 = sub_B2C460(Master_WarQuestSelectionMaster);
            sub_B2C400(v35, 0LL);
          }
          Master_WarQuestSelectionMaster = (void *)*((_QWORD *)v21 + (int)v22 + 4);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_41;
          if ( !*((_BYTE *)Master_WarQuestSelectionMaster + 60) && !*((_BYTE *)Master_WarQuestSelectionMaster + 120) )
          {
            Master_WarQuestSelectionMaster = (void *)WarBoardPieceData__get_isMaster(
                                                       (WarBoardPieceData_o *)Master_WarQuestSelectionMaster,
                                                       0LL);
            if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
              ++v16;
            else
              ++v17;
          }
          v20 = *((_DWORD *)v21 + 6);
        }
        while ( (int)++v22 < v20 );
      }
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      ++v19;
    }
    while ( v19 <= maxGroupId_k__BackingField );
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  }
LABEL_31:
  masterExistsForce = this->fields.masterExistsForce;
  v24 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v24 = WarBoardData___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__98_0 = static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__98_0 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__98_0,
      v27,
      Method_WarBoardData___c__CheckWinCond_b__98_0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v28 = WarBoardData___c_TypeInfo->static_fields;
    v28->__9__98_0 = _9__98_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__98_0,
      (System_Int32_array **)_9__98_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  return (v16 == 0) & (System_Linq_Enumerable__Count_int__27839656(
                         (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
                         (System_Func_TSource__bool__o *)_9__98_0,
                         (const MethodInfo_1A8CCA8 *)Method_System_Linq_Enumerable_Count_int____67413720) > 0) | (v17 == 0);
}


void __fastcall WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_UInt32_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4186693 & 1) == 0 )
  {
    sub_B2C35C(&uint___TypeInfo, method);
    byte_4186693 = 1;
  }
  v3 = (struct System_UInt32_array *)sub_B2C374(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
}


int32_t __fastcall WarBoardData__ComparePiece(
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

  if ( !a || (this = (WarBoardData_o *)WarBoardPieceData__get_isMaster(a, 0LL), !b) )
    sub_B2C434(this, a);
  if ( (((unsigned int)this ^ WarBoardPieceData__get_isMaster(b, 0LL)) & 1) == 0 )
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
  isServant = WarBoardPieceData__get_isServant(a, 0LL);
  if ( ((isServant ^ WarBoardPieceData__get_isServant(b, 0LL)) & 1) != 0 )
  {
    if ( WarBoardPieceData__get_isMaster(a, 0LL) )
      return 1;
    else
      return WarBoardPieceData__get_isMaster(b, 0LL) << 31 >> 31;
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


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData__CreateBattleParticipantInfo(
        WarBoardData_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v6; // x21

  if ( (byte_41866A7 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardData_BattleParticipantInfo_TypeInfo, attackPieceData);
    byte_41866A7 = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_B2C42C(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0LL);
  return v6;
}


void __fastcall WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4186653 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B2C35C(&WarBoardData_TypeInfo, v2);
    byte_4186653 = 1;
  }
  v3 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v3 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v3->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SetInt(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 1, 0LL);
}


WarBoardWaitTime_o *__fastcall WarBoardData__CreateEventBossUIDataTask(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  System_Delegate_o *v8; // x21
  WarBoardData___c_c *v9; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v12; // x23
  struct WarBoardData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarBoardData_o *v28; // x0
  int32_t v29; // w1
  const MethodInfo *v30; // x2

  if ( (byte_4186683 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, method);
    sub_B2C35C(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__, v2);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v3);
    sub_B2C35C(&WarBoardWaitTime_TypeInfo, v4);
    byte_4186683 = 1;
  }
  v5 = sub_B2C42C(WarBoardWaitTime_TypeInfo);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v5, 0.0, 0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  v8 = *(System_Delegate_o **)(v5 + 40);
  v9 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__152_0 = static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v12,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0LL);
    v13 = WarBoardData___c_TypeInfo->static_fields;
    v13->__9__152_0 = _9__152_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__152_0,
      (System_Int32_array **)_9__152_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = (System_Int32_array **)System_Delegate__Combine(v8, (System_Delegate_o *)_9__152_0, 0LL);
  if ( v20 && *v20 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v28 = (WarBoardData_o *)sub_B2C728(v20);
    return (WarBoardWaitTime_o *)WarBoardData__GetStageBossData(v28, v29, v30);
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v20;
    sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), v20, v21, v22, v23, v24, v25, v26);
    return (WarBoardWaitTime_o *)v5;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__DelSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
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
  WarBoardData___c__DisplayClass174_0_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v24; // x22
  System_Collections_Generic_List_int__o *v25; // x21
  System_Int32_array **v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7

  if ( (byte_4186691 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__, v7);
    sub_B2C35C(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor___67311384, v12);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__, v14);
    sub_B2C35C(&WarBoardData___c__DisplayClass174_0_TypeInfo, v15);
    byte_4186691 = 1;
  }
  v16 = (WarBoardData___c__DisplayClass174_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass174_0_TypeInfo);
  WarBoardData___c__DisplayClass174_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  v16->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardSquareIndexData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v21,
                                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v24 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v25 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_49702036(
    v25,
    v24,
    (const MethodInfo_2F66494 *)Method_System_Collections_Generic_List_int___ctor___67311384);
  if ( !v25 )
LABEL_10:
    sub_B2C434(v17, v18);
  if ( System_Collections_Generic_List_int___Contains(
         v25,
         effectId,
         (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v25,
      effectId,
      (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
    v26 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v25,
                                   (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v26;
    sub_B2C2F8(p_isExecute, v26, v27, v28, v29, v30, v31, v32);
  }
}


void __fastcall WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4186654 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B2C35C(&WarBoardData_TypeInfo, v2);
    byte_4186654 = 1;
  }
  v3 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v3 = WarBoardData_TypeInfo;
  }
  AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = v3->static_fields->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__DeleteKey(AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY, 0LL);
}


void __fastcall WarBoardData__DeleteLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19

  if ( (byte_4186652 & 1) == 0 )
  {
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B2C35C(&WarBoardData_TypeInfo, v2);
    byte_4186652 = 1;
  }
  v3 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v3 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v3->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__DeleteKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
}


// local variable allocation has failed, the output may be wrong!
WarBoardActionPointEntity_o *__fastcall WarBoardData__GetActionPointEntity(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *actionPointEntityDict; // x0
  WarBoardStageNpcEntity_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_4186658 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_4186658 = 1;
  }
  value = 0LL;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_B2C434(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2DC6CA0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v9; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__110_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4186667 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, v6);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v7);
    byte_4186667 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__110_0,
      v12,
      Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v13 = WarBoardData___c_TypeInfo->static_fields;
    v13->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__110_0,
      (System_Int32_array **)_9__110_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v20,
                                                                   (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v9; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__107_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4186664 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardData___c__GetAlivePieces_b__107_0__, v6);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v7);
    byte_4186664 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__107_0,
      v12,
      Method_WarBoardData___c__GetAlivePieces_b__107_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v13 = WarBoardData___c_TypeInfo->static_fields;
    v13->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__107_0,
      (System_Int32_array **)_9__107_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v20,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v9; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__109_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4186666 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__, v6);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v7);
    byte_4186666 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__109_0,
      v12,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v13 = WarBoardData___c_TypeInfo->static_fields;
    v13->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__109_0,
      (System_Int32_array **)_9__109_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v20,
                                                                   (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v9; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__108_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_4186665 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, v6);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v7);
    byte_4186665 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__108_0,
      v12,
      Method_WarBoardData___c__GetAliveServantPieces_b__108_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v13 = WarBoardData___c_TypeInfo->static_fields;
    v13->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__108_0,
      (System_Int32_array **)_9__108_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v20,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardEffectData_array *__fastcall WarBoardData__GetAllEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


WarBoardItemData_array *__fastcall WarBoardData__GetAllItems(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.items;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAllPieces(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.pieces;
}


int32_t __fastcall WarBoardData__GetAttackCost(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.attackCost;
  return (int)ActionPointEntity;
}


int32_t __fastcall WarBoardData__GetBaseActionPoint(
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


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardData__GetClearedTurn(WarBoardData_o *this, int32_t condId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass183_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20
  peRenderTexture_ChangeLayerObject_o *v14; // x0

  if ( (byte_4186697 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__, *(_QWORD *)&condId);
    sub_B2C35C(&Method_System_Predicate_WarBoardPrevCondData___ctor__, v5);
    sub_B2C35C(&System_Predicate_WarBoardPrevCondData__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass183_0_TypeInfo, v8);
    byte_4186697 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass183_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass183_0_TypeInfo);
  WarBoardData___c__DisplayClass183_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.condId = condId,
        listPrevCond = this->fields.listPrevCond,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardPrevCondData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardPrevCondData___ctor__),
        !listPrevCond) )
  {
    sub_B2C434(v10, v11);
  }
  v14 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listPrevCond,
          (System_Predicate_T__o *)v13,
          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v14 )
    return HIDWORD(v14->fields.gameObject);
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareData_o *__fastcall WarBoardData__GetCondSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass130_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4186675 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardSquareData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardSquareData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass130_0_TypeInfo, v8);
    byte_4186675 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass130_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass130_0_TypeInfo);
  WarBoardData___c__DisplayClass130_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v13,
                                   (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *__fastcall WarBoardData__GetCondSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.condSquares;
}


System_Int32_array *__fastcall WarBoardData__GetDeploySquareIds(
        WarBoardData_o *this,
        System_Int32_array_array *squareIds,
        const MethodInfo *method)
{
  System_Int32_array_array *v3; // x22
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x21
  void *Piece_22512764; // x0
  __int64 value; // x1
  int max_length; // w8
  unsigned int v18; // w25
  System_Int32_array *v19; // x28
  unsigned __int64 v20; // x27
  WarBoardData___c__DisplayClass133_0_o *v21; // x22
  const MethodInfo *v22; // x2
  int32_t v23; // w1
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v27; // x24
  System_Func_int__bool__o *v28; // x23
  __int64 v30; // x0
  System_Int32_array_array *v31; // [xsp+8h] [xbp-58h]

  v3 = squareIds;
  if ( (byte_4186677 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int___, squareIds);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__, v11);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__, v12);
    sub_B2C35C(&WarBoardData___c__DisplayClass133_0_TypeInfo, v13);
    byte_4186677 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_27;
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    v31 = v3;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
LABEL_26:
        v30 = sub_B2C460(Piece_22512764);
        sub_B2C400(v30, 0LL);
      }
      v19 = v3->m_Items[v18];
      if ( !v19 )
        break;
      if ( (int)v19->max_length < 1 )
      {
        value = 0xFFFFFFFFLL;
        if ( !v14 )
          break;
      }
      else
      {
        v20 = 0LL;
        do
        {
          v21 = (WarBoardData___c__DisplayClass133_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass133_0_TypeInfo);
          WarBoardData___c__DisplayClass133_0___ctor(v21, 0LL);
          if ( v20 >= v19->max_length )
            goto LABEL_26;
          if ( !v21 )
            goto LABEL_27;
          v23 = v19->m_Items[v20 + 1];
          v21->fields.value = v23;
          Piece_22512764 = WarBoardData__GetPiece_22512764(this, v23, v22);
          if ( !Piece_22512764 )
          {
            Piece_22512764 = WarBoardData__GetUnusedTreasure(this, v21->fields.value, v24);
            if ( !Piece_22512764 )
            {
              Piece_22512764 = WarBoardData__GetWall(this, v21->fields.value, 0, v25);
              if ( !Piece_22512764 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v27 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v27,
                  (Il2CppObject *)v21,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
                Piece_22512764 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v27,
                                           (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_22512764 & 1) == 0 )
                {
                  v28 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
                  System_Func_int__bool____ctor(
                    v28,
                    (Il2CppObject *)v21,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
                  Piece_22512764 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v14,
                                             (System_Func_T__bool__o *)v28,
                                             (const MethodInfo_1726368 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_22512764 & 1) == 0 )
                  {
                    value = (unsigned int)v21->fields.value;
                    goto LABEL_20;
                  }
                }
              }
            }
          }
          ++v20;
        }
        while ( (__int64)v20 < (int)v19->max_length );
        value = 0xFFFFFFFFLL;
LABEL_20:
        v3 = v31;
        if ( !v14 )
          break;
      }
      System_Collections_Generic_List_int___Add(
        v14,
        value,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = v3->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_24;
    }
LABEL_27:
    sub_B2C434(Piece_22512764, value);
  }
LABEL_24:
  if ( !v14 )
    goto LABEL_27;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186680 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186680 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                stageEntity->fields.editBgmId,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B2C434(Instance, v6);
  }
  return 0LL;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetEditableServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v9; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__120_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_418666D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, v6);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v7);
    byte_418666D = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__120_0,
      v12,
      Method_WarBoardData___c__GetEditableServantPieces_b__120_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v13 = WarBoardData___c_TypeInfo->static_fields;
    v13->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__120_0,
      (System_Int32_array **)_9__120_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v20,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEffectData_o *__fastcall WarBoardData__GetEffect(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass142_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_418667C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardEffectData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardEffectData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass142_0_TypeInfo, v8);
    byte_418667C = 1;
  }
  v9 = (WarBoardData___c__DisplayClass142_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass142_0_TypeInfo);
  WarBoardData___c__DisplayClass142_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardEffectData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardEffectData__bool___ctor__);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   effects,
                                   (System_Func_TSource__bool__o *)v13,
                                   (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
}


WarBoardEffectData_array *__fastcall WarBoardData__GetEffects(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.effects;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetEventBossPiece(
        WarBoardData_o *this,
        int32_t stageBossIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass105_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4186662 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass105_0_TypeInfo, v8);
    byte_4186662 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass105_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass105_0_TypeInfo);
  WarBoardData___c__DisplayClass105_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v13,
                                  (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetExpensiveIcon(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x22
  int max_length; // w8
  unsigned int v5; // w24
  int32_t iconId; // w23
  int v7; // w19
  int32_t Rarity; // w20
  WarBoardTreasureData_SaveData_o *v9; // x21
  __int64 v11; // x0

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
      {
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
      }
      v9 = treasureSaves->m_Items[v5];
      if ( !v9 )
        break;
      if ( v9->fields.isUse )
      {
        if ( WarBoardTreasureData_SaveData__get_Rarity(v9, 0LL) > Rarity
          || (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Rarity(v9, 0LL), (_DWORD)this == Rarity)
          && (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v9, 0LL), (int)this > v7) )
        {
          iconId = v9->fields.iconId;
          Rarity = WarBoardTreasureData_SaveData__get_Rarity(v9, 0LL);
          this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v9, 0LL);
          v7 = (int)this;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v5 >= max_length )
        return iconId + 1;
    }
LABEL_17:
    sub_B2C434(this, method);
  }
  iconId = 0;
  return iconId + 1;
}


void __fastcall WarBoardData__GetHoldReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinforcementsDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
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
  WarBoardData___c__DisplayClass188_0_o *v42; // x23
  void *v43; // x0
  __int64 v44; // x1
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__188_0; // x24
  Il2CppObject *v48; // x25
  struct WarBoardData___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v56; // x22
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v63; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v64; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  int v66; // w26
  __int64 v67; // x24
  __int64 v68; // x0
  __int64 v69; // x1
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **current; // x1
  HoldReinforcementsData_o **v77; // x22
  __int64 v78; // x0
  __int64 v79; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v81; // x0
  __int64 v82; // x1
  const MethodInfo *v83; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v85; // x1
  const MethodInfo *v86; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v89; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v91; // x1
  struct System_Int32_array *v92; // x8
  __int64 v93; // x9
  _BOOL4 v94; // w25
  WebViewManager_o *Instance; // x0
  __int64 v96; // x1
  _BOOL8 IsPlayerTurn; // x0
  __int64 v98; // x1
  __int64 v99; // x10
  int max_length; // w11
  int v101; // w10
  System_Collections_Generic_List_T__o *v102; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v103; // x26
  bool v104; // w0
  __int64 v105; // x1
  _BOOL8 v106; // x0
  __int64 v107; // x1
  Il2CppObject *v108; // x24
  System_Collections_Generic_List_int__o *v109; // x25
  System_Collections_Generic_List_int__o *v110; // x26
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x0
  __int64 v114; // x1
  System_Int32_array **v115; // x0
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  __int64 v122; // x0
  __int64 v123; // x1
  __int64 v124; // x0
  __int64 v125; // x1
  __int64 v126; // x8
  System_Int32_array **v127; // x0
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  WebViewManager_o *v134; // x0
  __int64 v135; // x1
  __int64 v136; // x8
  __int64 v137; // x9
  System_Collections_Generic_List_int__o *v138; // x0
  __int64 v139; // x1
  int v140; // w8
  __int64 v141; // x24
  __int64 v142; // x0
  __int64 v143; // x1
  __int64 v144; // x0
  System_String_array **v145; // x2
  System_String_array **v146; // x3
  System_Boolean_array **v147; // x4
  System_Int32_array **v148; // x5
  System_Int32_array *v149; // x6
  System_Int32_array *v150; // x7
  __int64 v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  __int64 v158; // x8
  __int64 v159; // x1
  WebViewManager_o *v160; // x0
  __int64 v161; // x1
  __int64 v162; // x8
  __int64 v163; // x9
  System_Collections_Generic_List_int__o *v164; // x0
  __int64 v165; // x1
  __int64 v166; // x0
  __int64 v167; // x0
  int v168; // w26
  __int64 v169; // x0
  __int64 v170; // x0
  __int64 v171; // x0
  __int64 v172; // x0
  __int64 v173; // x0
  __int64 v174; // x0
  __int64 v175; // x0
  int v176; // [xsp+14h] [xbp-CCh]
  int v177; // [xsp+1Ch] [xbp-C4h]
  _BYTE v179[36]; // [xsp+28h] [xbp-B8h] BYREF
  int v180; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v181; // [xsp+50h] [xbp-90h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v183; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_418669C & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_ReinforcementsData___, reinforcementsDatas);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__, v15);
    sub_B2C35C(&Method_System_Func_ReinforcementsData__bool___ctor__, v16);
    sub_B2C35C(&Method_System_Func_HoldReinforcementsData__bool___ctor__, v17);
    sub_B2C35C(&System_Func_ReinforcementsData__bool__TypeInfo, v18);
    sub_B2C35C(&System_Func_HoldReinforcementsData__bool__TypeInfo, v19);
    sub_B2C35C(&int___TypeInfo, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__AddRange__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__, v29);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_B2C35C(&System_Collections_Generic_List_ReinforcementsData__TypeInfo, v31);
    sub_B2C35C(&Method_System_Predicate_HoldReinforcementsData___ctor__, v32);
    sub_B2C35C(&System_Predicate_HoldReinforcementsData__TypeInfo, v33);
    sub_B2C35C(&ReinforcementsData_TypeInfo, v34);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v35);
    sub_B2C35C(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, v36);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__, v37);
    sub_B2C35C(&WarBoardData___c__DisplayClass188_0_TypeInfo, v38);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__, v39);
    sub_B2C35C(&WarBoardData___c__DisplayClass188_1_TypeInfo, v40);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v41);
    byte_418669C = 1;
  }
  memset(&v183, 0, sizeof(v183));
  entity = 0LL;
  memset(&v181, 0, sizeof(v181));
  v180 = 0;
  v42 = (WarBoardData___c__DisplayClass188_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass188_0_TypeInfo);
  WarBoardData___c__DisplayClass188_0___ctor(v42, 0LL);
  if ( !v42 )
    goto LABEL_123;
  v42->fields.targetStageReinforcementsId = targetStageReinforcementsId;
  reinforcementsSaveList = this->fields.reinforcementsSaveList;
  v43 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v43 = WarBoardData___c_TypeInfo;
  }
  static_fields = (struct WarBoardData___c_StaticFields *)*((_QWORD *)v43 + 23);
  _9__188_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__188_0;
  if ( !_9__188_0 )
  {
    if ( (*((_BYTE *)v43 + 307) & 4) != 0 && !*((_DWORD *)v43 + 56) )
    {
      j_il2cpp_runtime_class_init_0(v43);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__188_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_HoldReinforcementsData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__188_0,
      v48,
      Method_WarBoardData___c__GetHoldReinforcements_b__188_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_HoldReinforcementsData___ctor__);
    v49 = WarBoardData___c_TypeInfo->static_fields;
    v49->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)_9__188_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v49->__9__188_0,
      (System_Int32_array **)_9__188_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_123;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)reinforcementsSaveList,
    (System_Predicate_T__o *)_9__188_0,
    (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v56 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ReinforcementsData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v56,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v56;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)reinforcementsDatas,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  v63 = this->fields.reinforcementsSaveList;
  if ( (v42->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v64 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_HoldReinforcementsData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v64,
      (Il2CppObject *)v42,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      (const MethodInfo_2711C04 *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
    v65 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v63,
            (System_Func_TSource__bool__o *)v64,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v43 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
            v65,
            (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v63 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v43;
  }
  if ( !v63 )
LABEL_123:
    sub_B2C434(v43, v44);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v179,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v63,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v177 = 0;
  v66 = 0;
  v183 = *(System_Collections_Generic_List_Enumerator_T__o *)v179;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v183,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v67 = sub_B2C42C(WarBoardData___c__DisplayClass188_1_TypeInfo);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v67, 0LL);
    if ( !v67 )
      sub_B2C434(v68, v69);
    current = (System_Int32_array **)v183.fields.current;
    *(_QWORD *)(v67 + 16) = v183.fields.current;
    v77 = (HoldReinforcementsData_o **)(v67 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v67 + 16), current, v70, v71, v72, v73, v74, v75);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_B2C434(v78, v79);
    if ( !*v77 )
      sub_B2C434(v78, v79);
    if ( !mst )
      sub_B2C434(v78, v79);
    v81 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v77)->fields._id_k__BackingField,
            0LL);
    if ( v81 )
    {
      if ( !entity )
        sub_B2C434(v81, v82);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v83);
      if ( !entity )
        sub_B2C434(DeploySquareIds, v85);
      if ( !*v77 )
        sub_B2C434(DeploySquareIds, v85);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_B2C434(DeploySquareIds, v85);
      index_k__BackingField = (*v77)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= limitNums->max_length )
      {
        v169 = sub_B2C460(DeploySquareIds);
        sub_B2C400(v169, 0LL);
      }
      v89 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField + 1] < 1 )
      {
        v94 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v86);
        if ( !ReinfocementsPieces )
          sub_B2C434(0LL, v91);
        if ( !entity )
          sub_B2C434(ReinfocementsPieces, v91);
        if ( !*v77 )
          sub_B2C434(ReinfocementsPieces, v91);
        v92 = entity->fields.limitNums;
        if ( !v92 )
          sub_B2C434(ReinfocementsPieces, v91);
        v93 = (*v77)->fields._index_k__BackingField;
        if ( (unsigned int)v93 >= v92->max_length )
        {
          v170 = sub_B2C460(ReinfocementsPieces);
          sub_B2C400(v170, 0LL);
        }
        v94 = v92->m_Items[v93 + 1] <= (signed int)ReinfocementsPieces->max_length;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_B2C434(0LL, v96);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0LL);
      if ( !entity )
        sub_B2C434(IsPlayerTurn, v98);
      if ( !v89 )
        sub_B2C434(IsPlayerTurn, v98);
      if ( !*v77 )
        sub_B2C434(IsPlayerTurn, v98);
      v99 = (*v77)->fields._index_k__BackingField;
      max_length = v89->max_length;
      if ( (int)v99 >= max_length )
      {
        v101 = 0;
      }
      else
      {
        if ( (unsigned int)v99 >= max_length )
        {
          v171 = sub_B2C460(IsPlayerTurn);
          sub_B2C400(v171, 0LL);
        }
        v101 = v89->m_Items[v99 + 1] >= 0 && !v94;
      }
      if ( v101 & (IsPlayerTurn ^ (entity->fields.forceId != 0)) )
      {
        v176 = v66;
        v102 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v103 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ReinforcementsData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v103,
          (Il2CppObject *)v67,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          (const MethodInfo_2711C04 *)Method_System_Func_ReinforcementsData__bool___ctor__);
        v104 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 v102,
                 (System_Func_T__bool__o *)v103,
                 (const MethodInfo_17266AC *)Method_BasicHelper_Any_ReinforcementsData___);
        v66 = v176;
        if ( !v104 )
          goto LABEL_70;
        if ( !*reinforcementsDatas )
          sub_B2C434(0LL, v105);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v179,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*reinforcementsDatas,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
        v181 = *(System_Collections_Generic_List_Enumerator_T__o *)v179;
        while ( 1 )
        {
          v106 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v181,
                   (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
          if ( !v106 )
            break;
          v108 = v181.fields.current;
          if ( !v181.fields.current )
            sub_B2C434(v106, v107);
          if ( !*v77 )
            sub_B2C434(v106, v107);
          if ( LODWORD(v181.fields.current[1].klass) == (*v77)->fields._id_k__BackingField )
          {
            v109 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v109,
              (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
            v110 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
            System_Collections_Generic_List_int____ctor(
              v110,
              (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v109 )
              sub_B2C434(v111, v112);
            System_Collections_Generic_List_int___AddRange(
              v109,
              (System_Collections_Generic_IEnumerable_T__o *)v108[1].monitor,
              (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v77 )
              sub_B2C434(v113, v114);
            System_Collections_Generic_List_int___Add(
              v109,
              (*v77)->fields._index_k__BackingField,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            v115 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v109,
                                            (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
            v108[1].monitor = v115;
            sub_B2C2F8((BattleServantConfConponent_o *)&v108[1].monitor, v115, v116, v117, v118, v119, v120, v121);
            if ( !v110 )
              sub_B2C434(v122, v123);
            System_Collections_Generic_List_int___AddRange(
              v110,
              (System_Collections_Generic_IEnumerable_T__o *)v108[2].klass,
              (const MethodInfo_2F6724C *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v77 )
              sub_B2C434(v124, v125);
            v126 = (*v77)->fields._index_k__BackingField;
            if ( (unsigned int)v126 >= v89->max_length )
            {
              v166 = sub_B2C460(v124);
              sub_B2C400(v166, 0LL);
            }
            System_Collections_Generic_List_int___Add(
              v110,
              v89->m_Items[v126 + 1],
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            v127 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v110,
                                            (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
            v108[2].klass = (Il2CppClass *)v127;
            sub_B2C2F8((BattleServantConfConponent_o *)&v108[2], v127, v128, v129, v130, v131, v132, v133);
            v134 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( !v134 )
              sub_B2C434(0LL, v135);
            v136 = *(_QWORD *)&v134[4].fields.m_CachedPtr;
            if ( !v136 )
              sub_B2C434(v134, v135);
            if ( !*v77 )
              sub_B2C434(v134, v135);
            v137 = (*v77)->fields._index_k__BackingField;
            if ( (unsigned int)v137 >= v89->max_length )
            {
              v167 = sub_B2C460(v134);
              sub_B2C400(v167, 0LL);
            }
            v138 = *(System_Collections_Generic_List_int__o **)(v136 + 232);
            if ( !v138 )
              sub_B2C434(0LL, v135);
            System_Collections_Generic_List_int___Add(
              v138,
              v89->m_Items[v137 + 1],
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            if ( !*v77 )
              sub_B2C434(0LL, v139);
            HoldReinforcementsData__DecreaseHoldNum(*v77, 0LL);
            break;
          }
        }
        *(_DWORD *)&v179[4 * v177 + 24] = 727;
        v66 = ++v180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v181,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        if ( v66 )
        {
          v140 = v66 - 1;
          v177 = v66;
          if ( *(_DWORD *)&v179[4 * v66 + 20] != 727 )
            goto LABEL_70;
          v180 = --v66;
          v177 = v140;
        }
        else
        {
          v177 = 0;
LABEL_70:
          v141 = sub_B2C42C(ReinforcementsData_TypeInfo);
          ReinforcementsData___ctor((ReinforcementsData_o *)v141, 0LL);
          if ( !entity )
            sub_B2C434(v142, v143);
          if ( !v141 )
            sub_B2C434(v142, v143);
          *(_DWORD *)(v141 + 16) = entity->fields.id;
          v144 = sub_B2C374(int___TypeInfo, 1LL);
          if ( !*v77 )
            sub_B2C434(v144, v144);
          if ( !v144 )
            sub_B2C434(0LL, 0LL);
          if ( !*(_DWORD *)(v144 + 24) )
          {
            v173 = sub_B2C460(v144);
            sub_B2C400(v173, 0LL);
          }
          *(_DWORD *)(v144 + 32) = (*v77)->fields._index_k__BackingField;
          *(_QWORD *)(v141 + 24) = v144;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v141 + 24),
            (System_Int32_array **)v144,
            v145,
            v146,
            v147,
            v148,
            v149,
            v150);
          v151 = sub_B2C374(int___TypeInfo, 1LL);
          if ( !*v77 )
            sub_B2C434(v151, v151);
          v158 = (*v77)->fields._index_k__BackingField;
          if ( (unsigned int)v158 >= v89->max_length )
          {
            v174 = sub_B2C460(v151);
            sub_B2C400(v174, 0LL);
          }
          if ( !v151 )
            sub_B2C434(0LL, 0LL);
          if ( !*(_DWORD *)(v151 + 24) )
          {
            v172 = sub_B2C460(v151);
            sub_B2C400(v172, 0LL);
          }
          *(_DWORD *)(v151 + 32) = v89->m_Items[v158 + 1];
          *(_QWORD *)(v141 + 32) = v151;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v141 + 32),
            (System_Int32_array **)v151,
            v152,
            v153,
            v154,
            v155,
            v156,
            v157);
          if ( !*reinforcementsDatas )
            sub_B2C434(0LL, v159);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*reinforcementsDatas,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v141,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
          v160 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v160 )
            sub_B2C434(0LL, v161);
          v162 = *(_QWORD *)&v160[4].fields.m_CachedPtr;
          if ( !v162 )
            sub_B2C434(v160, v161);
          if ( !*v77 )
            sub_B2C434(v160, v161);
          v163 = (*v77)->fields._index_k__BackingField;
          if ( (unsigned int)v163 >= v89->max_length )
          {
            v175 = sub_B2C460(v160);
            sub_B2C400(v175, 0LL);
          }
          v164 = *(System_Collections_Generic_List_int__o **)(v162 + 232);
          if ( !v164 )
            sub_B2C434(0LL, v161);
          System_Collections_Generic_List_int___Add(
            v164,
            v89->m_Items[v163 + 1],
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !*v77 )
            sub_B2C434(0LL, v165);
          HoldReinforcementsData__DecreaseHoldNum(*v77, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v179[4 * v177 + 24] = 755;
  v168 = ++v180;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v183,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v168 && *(_DWORD *)&v179[4 * v168 + 20] == 755 )
    v180 = v168 - 1;
}


int32_t __fastcall WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_4186688 & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_B2C35C(
                               &Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__,
                               method);
    byte_4186688 = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_B2C434(this, method);
  return reinforcementsSaveList->fields._size;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall WarBoardData__GetInRangeSquareIndecies(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
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
  WarBoardData___c__DisplayClass123_0_o *v19; // x19
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x4
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v23; // x20
  WarBoardData___c_c *v24; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__123_0; // x21
  Il2CppObject *v27; // x22
  struct WarBoardData___c_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  System_Func_int__bool__o *v36; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4186670 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___, *(_QWORD *)&start);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_B2C35C(&Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__, v11);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v12);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v13);
    sub_B2C35C(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo, v14);
    sub_B2C35C(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, v15);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__, v16);
    sub_B2C35C(&WarBoardData___c__DisplayClass123_0_TypeInfo, v17);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v18);
    byte_4186670 = 1;
  }
  rangeSearches = 0LL;
  v19 = (WarBoardData___c__DisplayClass123_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass123_0_TypeInfo);
  WarBoardData___c__DisplayClass123_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B2C434(v20, v21);
  v19->fields.start = start;
  v19->fields.ignoreStart = ignoreStart;
  rangeSearches = 0LL;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v22);
  v23 = rangeSearches;
  if ( !rangeSearches )
    return 0LL;
  v24 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v24 = WarBoardData___c_TypeInfo;
  }
  static_fields = v24->static_fields;
  _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v24);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__123_0,
      v27,
      Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__);
    v28 = WarBoardData___c_TypeInfo->static_fields;
    v28->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v28->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_1A967E8 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v36 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v36,
    (Il2CppObject *)v19,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
  v37 = System_Linq_Enumerable__Where_int_(
          v35,
          (System_Func_TSource__bool__o *)v36,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v37,
           (const MethodInfo_1A9AE24 *)Method_System_Linq_Enumerable_ToArray_int___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareData_array *__fastcall WarBoardData__GetInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardSquareData_array *result; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v15; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4186671 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___, *(_QWORD *)&start);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___, v9);
    sub_B2C35C(&Method_System_Func_int__WarBoardSquareData___ctor__, v10);
    sub_B2C35C(&System_Func_int__WarBoardSquareData__TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardData__GetInRangeSquares_b__124_0__, v12);
    byte_4186671 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v14 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v15 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B2C42C(System_Func_int__WarBoardSquareData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v15,
      (Il2CppObject *)this,
      Method_WarBoardData__GetInRangeSquares_b__124_0__,
      (const MethodInfo_270D828 *)Method_System_Func_int__WarBoardSquareData___ctor__);
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 v14,
                                                                 (System_Func_TSource__TResult__o *)v15,
                                                                 (const MethodInfo_1A95A8C *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v16,
                                         (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarBoardItemData_o *__fastcall WarBoardData__GetItem(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass135_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4186678 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardItemData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardItemData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass135_0_TypeInfo, v8);
    byte_4186678 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass135_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass135_0_TypeInfo);
  WarBoardData___c__DisplayClass135_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardItemData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardItemData__bool___ctor__);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 items,
                                 (System_Func_TSource__bool__o *)v13,
                                 (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
}


int32_t __fastcall WarBoardData__GetItemCost(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  WarBoardActionPointEntity_o *ActionPointEntity; // x0

  ActionPointEntity = WarBoardData__GetActionPointEntity(this, forceId, groupId, method);
  if ( ActionPointEntity )
    LODWORD(ActionPointEntity) = ActionPointEntity->fields.itemCost;
  return (int)ActionPointEntity;
}


WarBoardItemData_array *__fastcall WarBoardData__GetItems(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.items;
}


uint32_t __fastcall WarBoardData__GetLastSelectPieceUniqueIndex(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_B2C434(this, method);
  return localSaveData->fields.lastSelectPieceUniqueIndex;
}


System_UInt32_array *__fastcall WarBoardData__GetLatestBattlePieceUniqueIndexes(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields.latestBattlePieceUniqueIndexes;
}


System_Int32_array *__fastcall WarBoardData__GetLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields.latestPieceActionSquareIndexes;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardData__GetMoveCost(
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
WarBoardStageNpcEntity_o *__fastcall WarBoardData__GetNpcEntity(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x0
  WarBoardStageNpcEntity_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = groupId;
  if ( (byte_4186657 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_4186657 = 1;
  }
  value = 0LL;
  npcEntityDict = this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_B2C434(0LL, *(_QWORD *)&forceId);
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2DC6CA0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return value;
}


int32_t __fastcall WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_B2C434(this, method);
  return stageEntity->fields.partySkillId;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPicesForRange(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  const MethodInfo *v15; // x4
  System_Int32_array **v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_418666B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__, v12);
    sub_B2C35C(&WarBoardData___c__DisplayClass118_0_TypeInfo, v13);
    byte_418666B = 1;
  }
  v14 = sub_B2C42C(WarBoardData___c__DisplayClass118_0_TypeInfo);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v14, 0LL);
  v16 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v15);
  if ( !v14 )
    sub_B2C434(v16, v17);
  *(_QWORD *)(v14 + 16) = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), v16, v18, v19, v20, v21, v22, v23);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v26,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPicesForRangeIsAlive(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        bool ignoreStart,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x23
  const MethodInfo *v15; // x4
  System_Int32_array **v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_418666C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__, v12);
    sub_B2C35C(&WarBoardData___c__DisplayClass119_0_TypeInfo, v13);
    byte_418666C = 1;
  }
  v14 = sub_B2C42C(WarBoardData___c__DisplayClass119_0_TypeInfo);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v14, 0LL);
  v16 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v15);
  if ( !v14 )
    sub_B2C434(v16, v17);
  *(_QWORD *)(v14 + 16) = v16;
  sub_B2C2F8((BattleServantConfConponent_o *)(v14 + 16), v16, v18, v19, v20, v21, v22, v23);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v25,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v26,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        bool ignoreDead,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WarBoardData___c__DisplayClass100_0_o *v16; // x24
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20

  if ( (byte_418665D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v11);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__, v13);
    sub_B2C35C(&WarBoardData___c__DisplayClass100_0_TypeInfo, v14);
    sub_B2C35C(&WarBoardPieceData_TypeInfo, v15);
    byte_418665D = 1;
  }
  v16 = (WarBoardData___c__DisplayClass100_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass100_0_TypeInfo);
  WarBoardData___c__DisplayClass100_0___ctor(v16, 0LL);
  if ( !v16 )
    sub_B2C434(v17, v18);
  v16->fields.ignoreDead = ignoreDead;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  v16->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v20,
                                  (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceDispPriority(
        WarBoardData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  WarBoardPieceData_array *AlivePieces; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20

  if ( (byte_418667F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_FindIndex_WarBoardPieceData___, piece);
    sub_B2C35C(&Method_System_Predicate_WarBoardPieceData___ctor__, v5);
    sub_B2C35C(&System_Predicate_WarBoardPieceData__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass145_0_TypeInfo, v8);
    byte_418667F = 1;
  }
  v9 = sub_B2C42C(WarBoardData___c__DisplayClass145_0_TypeInfo);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = piece;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)piece, v12, v13, v14, v15, v16, v17);
  AlivePieces = WarBoardData__GetAlivePieces(this, v18);
  v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardPieceData__TypeInfo);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardPieceData___ctor__);
  return System_Array__FindIndex_WarBoardPieceData_(
           AlivePieces,
           (System_Predicate_T__o *)v20,
           (const MethodInfo_1FFC870 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_B2C434(this, method);
  return pieces->max_length;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPieceOnDisplay(
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

  if ( (byte_4186660 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&forceId);
    byte_4186660 = 1;
  }
  result = WarBoardData__GetPiece(this, forceId, groupId, index, 0, v5);
  if ( result )
  {
    v11 = result;
    if ( !result->fields._isDead_k__BackingField )
      return v11;
    pieceComponent = (UnityEngine_Object_o *)result->fields.pieceComponent;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(pieceComponent, 0LL, 0LL) )
      return v11;
    gameObject = (UnityEngine_Component_o *)v11->fields.pieceComponent;
    if ( !gameObject
      || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
    {
      sub_B2C434(gameObject, v13);
    }
    activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy((UnityEngine_GameObject_o *)gameObject, 0LL);
    result = 0LL;
    if ( activeInHierarchy )
      return v11;
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardData__GetPiecePosition(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  WarBoardData___c__DisplayClass99_0_o *v14; // x23
  __int64 UniqueIndex; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20
  WarBoardData_SquareRangeSearch_o *v19; // x0

  if ( (byte_418665C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v9);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__, v11);
    sub_B2C35C(&WarBoardData___c__DisplayClass99_0_TypeInfo, v12);
    sub_B2C35C(&WarBoardPieceData_TypeInfo, v13);
    byte_418665C = 1;
  }
  v14 = (WarBoardData___c__DisplayClass99_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass99_0_TypeInfo);
  WarBoardData___c__DisplayClass99_0___ctor(v14, 0LL);
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  if ( !v14 )
    sub_B2C434(UniqueIndex, v16);
  v14->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v19 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          pieces,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v19 )
    return v19[2].fields.squareIndex;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_22512764(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass101_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_418665E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass101_0_TypeInfo, v8);
    byte_418665E = 1;
  }
  v9 = (WarBoardData___c__DisplayClass101_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass101_0_TypeInfo);
  WarBoardData___c__DisplayClass101_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v13,
                                  (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_22553560(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass102_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_418665F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&uniqueIndex);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__, v9);
    sub_B2C35C(&WarBoardData___c__DisplayClass102_0_TypeInfo, v10);
    byte_418665F = 1;
  }
  v11 = (WarBoardData___c__DisplayClass102_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass102_0_TypeInfo);
  WarBoardData___c__DisplayClass102_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.uniqueIndex = uniqueIndex;
  v11->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v15,
                                  (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces(
        WarBoardData_o *this,
        int32_t forceId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardData___c__DisplayClass116_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4186669 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v6);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__, v8);
    sub_B2C35C(&WarBoardData___c__DisplayClass116_0_TypeInfo, v9);
    byte_4186669 = 1;
  }
  v10 = (WarBoardData___c__DisplayClass116_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass116_0_TypeInfo);
  WarBoardData___c__DisplayClass116_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v15,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces_22505868(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  unsigned __int8 v4; // w19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardData___c__DisplayClass117_0_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0

  v4 = groupId;
  if ( (byte_418666A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v7);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v9);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__, v10);
    sub_B2C35C(&WarBoardData___c__DisplayClass117_0_TypeInfo, v11);
    byte_418666A = 1;
  }
  v12 = (WarBoardData___c__DisplayClass117_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass117_0_TypeInfo);
  WarBoardData___c__DisplayClass117_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B2C434(v13, v14);
  v12->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v17 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v16,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v17,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *__fastcall WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4186681 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4186681 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                stageEntity->fields.playBgmId,
                                (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B2C434(Instance, v6);
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_418669A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_418669A = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B2C434(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventData_o *__fastcall WarBoardData__GetPlayedEventData(
        WarBoardData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass164_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_418668A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData__Find__, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Predicate_WarBoardEventData___ctor__, v5);
    sub_B2C35C(&System_Predicate_WarBoardEventData__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass164_0_TypeInfo, v8);
    byte_418668A = 1;
  }
  v9 = (WarBoardData___c__DisplayClass164_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass164_0_TypeInfo);
  WarBoardData___c__DisplayClass164_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.eventId = eventId,
        listEvent = this->fields.listEvent,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardEventData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardEventData___ctor__),
        !listEvent) )
  {
    sub_B2C434(v10, v11);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEvent,
                                  (System_Predicate_T__o *)v13,
                                  (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v8; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__104_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardData___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4186661 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, method);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v3);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v4);
    sub_B2C35C(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, v5);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v6);
    byte_4186661 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v8 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v8 = WarBoardData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__104_0,
      v11,
      Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v12 = WarBoardData___c_TypeInfo->static_fields;
    v12->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__104_0,
      (System_Int32_array **)_9__104_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v9; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__121_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_418666E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__, v6);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v7);
    byte_418666E = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v9 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__121_0,
      v12,
      Method_WarBoardData___c__GetPlayerPieces_b__121_0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v13 = WarBoardData___c_TypeInfo->static_fields;
    v13->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->__9__121_0,
      (System_Int32_array **)_9__121_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v20,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *__fastcall WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x20
  System_Collections_Generic_List_int__o *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  __int64 v15; // x8
  WarBoardCommonReleaseMaster_o *v16; // x21
  unsigned __int64 v17; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v19; // x22
  unsigned int v20; // w25
  __int64 v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  __int64 v24; // x0

  if ( (byte_4186695 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, commonReleaseIds);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4186695 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_23;
  v15 = *(_QWORD *)&commonReleaseIds->max_length;
  if ( (int)v15 >= 1 )
  {
    v16 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v17 = 0LL;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)v15 )
        goto LABEL_24;
      if ( !v16 )
        goto LABEL_23;
      Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                                   v16,
                                                                                   commonReleaseIds->m_Items[v17 + 1],
                                                                                   v14);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_23;
      size = Master_WarQuestSelectionMaster->fields._size;
      v19 = Master_WarQuestSelectionMaster;
      if ( size >= 1 )
        break;
LABEL_20:
      LODWORD(v15) = commonReleaseIds->max_length;
      if ( (__int64)++v17 >= (int)v15 )
        goto LABEL_21;
    }
    v20 = 0;
    while ( v20 < size )
    {
      v21 = *((_QWORD *)&v19->fields._syncRoot + (int)v20);
      if ( !v21 )
        goto LABEL_23;
      if ( (unsigned int)(*(_DWORD *)(v21 + 28) - 7) <= 1 )
      {
        if ( !v11 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v11,
          *(_DWORD *)(v21 + 40),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      size = v19->fields._size;
      if ( (int)++v20 >= size )
        goto LABEL_20;
    }
LABEL_24:
    v24 = sub_B2C460(Master_WarQuestSelectionMaster);
    sub_B2C400(v24, 0LL);
  }
LABEL_21:
  v22 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_1A8D698 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                                               v22,
                                                                               (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  return System_Collections_Generic_List_int___ToArray(
           Master_WarQuestSelectionMaster,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardData__GetRandomGutsCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( localSaveData )
    return localSaveData->fields.randGutsCount;
  else
    return 0;
}


int32_t __fastcall WarBoardData__GetRandomLogicCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( localSaveData )
    return localSaveData->fields.randLogicCount;
  else
    return 0;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetReinfocementsPieces(
        WarBoardData_o *this,
        int32_t stageReinfoId,
        int32_t reinfoIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  const MethodInfo *v11; // x1
  WarBoardPieceData_array *AlivePieces; // x0
  WarBoardPieceData_o *v13; // x1
  int max_length; // w8
  WarBoardPieceData_array *v15; // x22
  unsigned int v16; // w23
  __int64 v18; // x0

  if ( (byte_418666F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, *(_QWORD *)&stageReinfoId);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    byte_418666F = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v11);
  if ( !AlivePieces )
    goto LABEL_15;
  max_length = AlivePieces->max_length;
  v15 = AlivePieces;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v18 = sub_B2C460(AlivePieces);
        sub_B2C400(v18, 0LL);
      }
      v13 = v15->m_Items[v16];
      if ( !v13 )
        break;
      if ( v13->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v13->fields._ReinfoIndex_k__BackingField == reinfoIndex )
      {
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      }
      max_length = v15->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B2C434(AlivePieces, v13);
  }
LABEL_13:
  if ( !v10 )
    goto LABEL_15;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


void __fastcall WarBoardData__GetReinforcements(
        WarBoardData_o *this,
        System_Collections_Generic_List_ReinforcementsData__o **reinfoDatas,
        WarBoardStageReinforcementsMaster_o *mst,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
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
  WarBoardData___c__DisplayClass189_0_o *v25; // x27
  WarBoardStageReinforcementsEntity_o *ReinfocementsPieces; // x0
  __int64 v27; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  const MethodInfo *v30; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v32; // x25
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x26
  const MethodInfo *v40; // x3
  __int64 v41; // x8
  int32_t v42; // w2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v45; // x8
  struct System_Int32_array *v46; // x9
  __int64 v47; // x10
  _BOOL4 v48; // w23
  _BOOL4 IsOnce; // w27
  const MethodInfo *v50; // x1
  __int64 v51; // x21
  System_Func_int__bool__o *v52; // x22
  System_Int32_array *v53; // x28
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  _BOOL4 v60; // w28
  System_Collections_Generic_List_T__o *v61; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v62; // x21
  const MethodInfo *v63; // x3
  __int64 v64; // x8
  __int64 v65; // x9
  __int64 v66; // x8
  WarBoardStageReinforcementsEntity_c *klass; // x8
  __int64 v68; // x9
  __int64 v69; // x20
  System_Int32_array **v70; // x0
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x0
  WarBoardData___c__DisplayClass189_0_Fields *v85; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_int__o *v86; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v87; // [xsp+10h] [xbp-60h]

  if ( (byte_418669D & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, reinfoDatas);
    sub_B2C35C(&Method_BasicHelper_Any_ReinforcementsData___, v8);
    sub_B2C35C(&Method_System_Func_ReinforcementsData__bool___ctor__, v9);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v10);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v11);
    sub_B2C35C(&System_Func_ReinforcementsData__bool__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B2C35C(&ReinforcementsData_TypeInfo, v19);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__, v21);
    sub_B2C35C(&WarBoardData___c__DisplayClass189_0_TypeInfo, v22);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__, v23);
    sub_B2C35C(&WarBoardData___c__DisplayClass189_1_TypeInfo, v24);
    byte_418669D = 1;
  }
  v25 = (WarBoardData___c__DisplayClass189_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass189_0_TypeInfo);
  WarBoardData___c__DisplayClass189_0___ctor(v25, 0LL);
  if ( !v25 )
    goto LABEL_51;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !mst )
    goto LABEL_51;
  p_fields = &v25->fields;
  if ( WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
         mst,
         &v25->fields.stageEntity,
         stageEntity->fields.id,
         targetStageReinforcementsId,
         0LL) )
  {
    v87 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v87,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    v86 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v86,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !p_fields->stageEntity )
      goto LABEL_51;
    v85 = &v25->fields;
    DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v30);
    v32 = sub_B2C42C(WarBoardData___c__DisplayClass189_1_TypeInfo);
    WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v32, 0LL);
    if ( !v32 )
      goto LABEL_51;
    *(_QWORD *)(v32 + 24) = v25;
    v39 = v32 + 24;
    sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 24), (System_Int32_array **)v25, v33, v34, v35, v36, v37, v38);
    v41 = *(_QWORD *)(v32 + 24);
    *(_DWORD *)(v32 + 16) = 0;
    if ( !v41 )
      goto LABEL_51;
    v42 = 0;
    while ( 1 )
    {
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v41 + 16);
      if ( !ReinfocementsPieces )
        goto LABEL_51;
      reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
      if ( !reinforcementsIds )
        goto LABEL_51;
      if ( v42 >= (signed int)reinforcementsIds->max_length )
        break;
      limitNums = ReinfocementsPieces->fields.limitNums;
      if ( !limitNums )
        goto LABEL_51;
      if ( v42 >= limitNums->max_length )
        goto LABEL_52;
      if ( limitNums->m_Items[v42 + 1] < 1 )
      {
        v48 = 0;
      }
      else
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                       this,
                                                                       ReinfocementsPieces->fields.id,
                                                                       v42,
                                                                       v40);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        if ( !*(_QWORD *)v39 )
          goto LABEL_51;
        v45 = ReinfocementsPieces;
        ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v39 + 16LL);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        v46 = ReinfocementsPieces->fields.limitNums;
        if ( !v46 )
          goto LABEL_51;
        v47 = *(int *)(v32 + 16);
        if ( (unsigned int)v47 >= v46->max_length )
          goto LABEL_52;
        v48 = v46->m_Items[v47 + 1] <= v45->fields.forceId;
      }
      IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0LL);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v50);
      v51 = *(_QWORD *)v39;
      if ( !*(_QWORD *)v39 )
        goto LABEL_51;
      v52 = *(System_Func_int__bool__o **)(v51 + 24);
      v53 = (System_Int32_array *)ReinfocementsPieces;
      if ( !v52 )
      {
        v52 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v52,
          (Il2CppObject *)v51,
          Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
        *(_QWORD *)(v51 + 24) = v52;
        sub_B2C2F8((BattleServantConfConponent_o *)(v51 + 24), (System_Int32_array **)v52, v54, v55, v56, v57, v58, v59);
      }
      v60 = BasicHelper__Any_int__24273940(
              v53,
              (System_Func_T__bool__o *)v52,
              (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
      v61 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
      v62 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_ReinforcementsData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v62,
        (Il2CppObject *)v32,
        Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
        (const MethodInfo_2711C04 *)Method_System_Func_ReinforcementsData__bool___ctor__);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                                     v61,
                                                                     (System_Func_T__bool__o *)v62,
                                                                     (const MethodInfo_17266AC *)Method_BasicHelper_Any_ReinforcementsData___);
      if ( !DeploySquareIds )
        goto LABEL_51;
      v64 = *(int *)(v32 + 16);
      if ( (unsigned int)v64 >= DeploySquareIds->max_length )
        goto LABEL_52;
      if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v60 || v48 || DeploySquareIds->m_Items[v64 + 1] < 0) )
      {
        if ( !*(_QWORD *)v39 )
          goto LABEL_51;
        v65 = *(_QWORD *)(*(_QWORD *)v39 + 16LL);
        if ( !v65 )
          goto LABEL_51;
        WarBoardData__SaveHoldReinforcements(this, *(_DWORD *)(v65 + 20), v64, v63);
      }
      else
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v87;
        if ( !v87 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v87,
          v64,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        v66 = *(int *)(v32 + 16);
        if ( (unsigned int)v66 >= DeploySquareIds->max_length )
        {
LABEL_52:
          v84 = sub_B2C460(ReinfocementsPieces);
          sub_B2C400(v84, 0LL);
        }
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v86;
        if ( !v86 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v86,
          DeploySquareIds->m_Items[v66 + 1],
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        klass = ReinfocementsPieces[6].klass;
        if ( !klass )
          goto LABEL_51;
        v68 = *(int *)(v32 + 16);
        if ( (unsigned int)v68 >= DeploySquareIds->max_length )
          goto LABEL_52;
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)klass->_2.genericContainerHandle;
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          DeploySquareIds->m_Items[v68 + 1],
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v41 = *(_QWORD *)(v32 + 24);
      v42 = *(_DWORD *)(v32 + 16) + 1;
      *(_DWORD *)(v32 + 16) = v42;
      if ( !v41 )
        goto LABEL_51;
    }
    if ( !v87 )
      goto LABEL_51;
    if ( v87->fields._size >= 1 )
    {
      v69 = sub_B2C42C(ReinforcementsData_TypeInfo);
      ReinforcementsData___ctor((ReinforcementsData_o *)v69, 0LL);
      if ( v85->stageEntity )
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v87;
        if ( v69 )
        {
          *(_DWORD *)(v69 + 16) = v85->stageEntity->fields.id;
          v70 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v87,
                                         (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
          *(_QWORD *)(v69 + 24) = v70;
          sub_B2C2F8((BattleServantConfConponent_o *)(v69 + 24), v70, v71, v72, v73, v74, v75, v76);
          ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v86;
          if ( v86 )
          {
            v77 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                           v86,
                                           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
            *(_QWORD *)(v69 + 32) = v77;
            sub_B2C2F8((BattleServantConfConponent_o *)(v69 + 32), v77, v78, v79, v80, v81, v82, v83);
            ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas;
            if ( *reinfoDatas )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReinfocementsPieces,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v69,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
              return;
            }
          }
        }
      }
LABEL_51:
      sub_B2C434(ReinfocementsPieces, v27);
    }
  }
}


UnityEngine_Vector2_o __fastcall WarBoardData__GetSaveCameraPos(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_B2C434(this, method);
  x = localSaveData->fields.cameraPos.fields.x;
  y = localSaveData->fields.cameraPos.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall WarBoardData__GetSaveCameraSize(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    sub_B2C434(this, method);
  return localSaveData->fields.cameraSize;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetServantPieces(
        WarBoardData_o *this,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WarBoardData___c__DisplayClass106_0_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4186663 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, isPlayerGroup);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool___ctor__, v6);
    sub_B2C35C(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__, v8);
    sub_B2C35C(&WarBoardData___c__DisplayClass106_0_TypeInfo, v9);
    byte_4186663 = 1;
  }
  v10 = (WarBoardData___c__DisplayClass106_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass106_0_TypeInfo);
  WarBoardData___c__DisplayClass106_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B2C434(v11, v12);
  v10->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v15 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v15,
                                      (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


WarBoardDataEntity_o *__fastcall WarBoardData__GetServerData(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.serverData;
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareData_o *__fastcall WarBoardData__GetSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass128_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4186674 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardSquareData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardSquareData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass128_0_TypeInfo, v8);
    byte_4186674 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass128_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass128_0_TypeInfo);
  WarBoardData___c__DisplayClass128_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardSquareData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   squares,
                                   (System_Func_TSource__bool__o *)v13,
                                   (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
}


WarBoardSquareData_array *__fastcall WarBoardData__GetSquares(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.squares;
}


// local variable allocation has failed, the output may be wrong!
WarBoardUserServantData_o *__fastcall WarBoardData__GetStageBossData(
        WarBoardData_o *this,
        int32_t stageBossIdx,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass153_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_4186684 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIdx);
    sub_B2C35C(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardUserServantData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass153_0_TypeInfo, v8);
    byte_4186684 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass153_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass153_0_TypeInfo);
  WarBoardData___c__DisplayClass153_0___ctor(v9, 0LL);
  if ( !v9 || (v9->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0LL) )
    sub_B2C434(v10, v11);
  svtInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.svtInfo;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserServantData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
  return (WarBoardUserServantData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v14,
                                        (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardTreasureData_o *__fastcall WarBoardData__GetTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass137_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_4186679 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardTreasureData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardTreasureData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass137_0_TypeInfo, v8);
    byte_4186679 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass137_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass137_0_TypeInfo);
  WarBoardData___c__DisplayClass137_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v13,
                                     (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v12; // w21
  WarBoardTreasureData_SaveData_o *v13; // x8
  __int64 v15; // x0

  if ( (byte_4186668 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v5);
    byte_4186668 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_15;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_15;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v15 = sub_B2C460(v7);
        sub_B2C400(v15, 0LL);
      }
      v13 = treasureSaves->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.isUse )
      {
        if ( !v6 )
          break;
        System_Collections_Generic_List_int___Add(
          v6,
          v13->fields.treasureId,
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B2C434(v7, v8);
  }
LABEL_13:
  if ( !v6 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


WarBoardTreasureData_array *__fastcall WarBoardData__GetTreasures(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.treasures;
}


// local variable allocation has failed, the output may be wrong!
WarBoardUiData_o *__fastcall WarBoardData__GetUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass193_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v13; // x20

  if ( (byte_41866A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Predicate_WarBoardUiData___ctor__, v5);
    sub_B2C35C(&System_Predicate_WarBoardUiData__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass193_0_TypeInfo, v8);
    byte_41866A1 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass193_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass193_0_TypeInfo);
  WarBoardData___c__DisplayClass193_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.squareIndex = squareIndex,
        listUiData = this->fields.listUiData,
        v13 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B2C434(v10, v11);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v13,
                               (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData_22580048(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v19; // x20

  if ( (byte_41866A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, pieceIndex);
    sub_B2C35C(&Method_System_Predicate_WarBoardUiData___ctor__, v5);
    sub_B2C35C(&System_Predicate_WarBoardUiData__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass194_0_TypeInfo, v8);
    byte_41866A2 = 1;
  }
  v9 = sub_B2C42C(WarBoardData___c__DisplayClass194_0_TypeInfo);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = pieceIndex,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)pieceIndex,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        listUiData = this->fields.listUiData,
        v19 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardUiData__TypeInfo),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v19,
          (Il2CppObject *)v9,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B2C434(v10, v11);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v19,
                               (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardTreasureData_o *__fastcall WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardData___c__DisplayClass138_0_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v13; // x20

  if ( (byte_418667A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardTreasureData__bool___ctor__, v5);
    sub_B2C35C(&System_Func_WarBoardTreasureData__bool__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__, v7);
    sub_B2C35C(&WarBoardData___c__DisplayClass138_0_TypeInfo, v8);
    byte_418667A = 1;
  }
  v9 = (WarBoardData___c__DisplayClass138_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass138_0_TypeInfo);
  WarBoardData___c__DisplayClass138_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  v9->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v13 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardTreasureData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v13,
                                     (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t stageId; // w21
  WarBoardEventScriptMaster_o *v16; // x20
  int v17; // w8
  void *v18; // x21
  unsigned int v19; // w23
  __int64 v20; // x22
  __int64 v21; // x25
  __int64 v22; // x8
  unsigned __int64 v23; // x26
  __int64 v24; // x25
  __int64 v25; // x8
  unsigned __int64 v26; // x26
  int v27; // w8
  void *v28; // x22
  unsigned int v29; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  __int64 v32; // x0

  if ( (byte_4186694 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardEventMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___, v3);
    sub_B2C35C(&DataManager_TypeInfo, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4186694 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_41;
  stageId = serverData->fields.stageId;
  v16 = (WarBoardEventScriptMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_41;
  Master_WarQuestSelectionMaster = WarBoardEventMaster__GetListByStageId(
                                     (WarBoardEventMaster_o *)Master_WarQuestSelectionMaster,
                                     stageId,
                                     0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_41;
  v17 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
  v18 = Master_WarQuestSelectionMaster;
  if ( v17 >= 1 )
  {
    v19 = 0;
    do
    {
      if ( v19 >= v17 )
        goto LABEL_42;
      v20 = *((_QWORD *)v18 + (int)v19 + 4);
      if ( !v20 )
        goto LABEL_41;
      v21 = *(_QWORD *)(v20 + 56);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v21 + 24);
        if ( v22 )
        {
          if ( (int)v22 >= 1 )
          {
            v23 = 0LL;
            while ( v23 < (unsigned int)v22 )
            {
              v13 = *(unsigned int *)(v21 + 32 + 4 * v23);
              if ( (int)v13 >= 1 )
              {
                if ( !v11 )
                  goto LABEL_41;
                System_Collections_Generic_List_int___Add(
                  v11,
                  v13,
                  (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                LODWORD(v22) = *(_DWORD *)(v21 + 24);
              }
              if ( (__int64)++v23 >= (int)v22 )
                goto LABEL_22;
            }
LABEL_42:
            v32 = sub_B2C460(Master_WarQuestSelectionMaster);
            sub_B2C400(v32, 0LL);
          }
LABEL_22:
          v24 = *(_QWORD *)(v20 + 48);
          if ( !v24 )
            goto LABEL_41;
          v25 = *(_QWORD *)(v24 + 24);
          if ( (int)v25 >= 1 )
          {
            v26 = 0LL;
            while ( 1 )
            {
              if ( v26 >= (unsigned int)v25 )
                goto LABEL_42;
              if ( !v16 )
                goto LABEL_41;
              Master_WarQuestSelectionMaster = WarBoardEventScriptMaster__GetList(
                                                 v16,
                                                 *(_DWORD *)(v24 + 4 * v26 + 32),
                                                 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_41;
              v27 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
              v28 = Master_WarQuestSelectionMaster;
              if ( v27 >= 1 )
                break;
LABEL_37:
              LODWORD(v25) = *(_DWORD *)(v24 + 24);
              if ( (__int64)++v26 >= (int)v25 )
                goto LABEL_38;
            }
            v29 = 0;
            while ( v29 < v27 )
            {
              Master_WarQuestSelectionMaster = (void *)*((_QWORD *)v28 + (int)v29 + 4);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_41;
              if ( *((_DWORD *)Master_WarQuestSelectionMaster + 6) == 2 )
              {
                Master_WarQuestSelectionMaster = (void *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                                           (WarBoardEventScriptEntity_o *)Master_WarQuestSelectionMaster,
                                                           0LL);
                if ( ((unsigned int)Master_WarQuestSelectionMaster & 0x80000000) == 0 )
                {
                  if ( !v11 )
                    goto LABEL_41;
                  System_Collections_Generic_List_int___Add(
                    v11,
                    (int32_t)Master_WarQuestSelectionMaster,
                    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
                }
              }
              v27 = *((_DWORD *)v28 + 6);
              if ( (int)++v29 >= v27 )
                goto LABEL_37;
            }
            goto LABEL_42;
          }
        }
      }
LABEL_38:
      v17 = *((_DWORD *)v18 + 6);
    }
    while ( (int)++v19 < v17 );
  }
  v30 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_1A8D698 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_WarQuestSelectionMaster = System_Linq_Enumerable__ToList_int_(
                                     v30,
                                     (const MethodInfo_1A9DCD4 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_41:
    sub_B2C434(Master_WarQuestSelectionMaster, v13);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardWallData_o *__fastcall WarBoardData__GetWall(
        WarBoardData_o *this,
        int32_t squareIndex,
        bool ignoreDestroy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass140_0_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_418667B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Func_WarBoardWallData__bool___ctor__, v7);
    sub_B2C35C(&System_Func_WarBoardWallData__bool__TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__, v9);
    sub_B2C35C(&WarBoardData___c__DisplayClass140_0_TypeInfo, v10);
    byte_418667B = 1;
  }
  v11 = (WarBoardData___c__DisplayClass140_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass140_0_TypeInfo);
  WarBoardData___c__DisplayClass140_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B2C434(v12, v13);
  v11->fields.squareIndex = squareIndex;
  v11->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardWallData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardWallData__bool___ctor__);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 walls,
                                 (System_Func_TSource__bool__o *)v15,
                                 (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
}


int32_t __fastcall WarBoardData__GetWallAttackCost(
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


WarBoardWallData_array *__fastcall WarBoardData__GetWalls(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.walls;
}


int32_t __fastcall WarBoardData__GetWinCondGroup(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.winCondGroup;
}


int32_t __fastcall WarBoardData__GetWinCondId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields.winCondId;
}


bool __fastcall WarBoardData__HasNewWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardManager_c *v3; // x0

  if ( (byte_418668C & 1) == 0 )
  {
    sub_B2C35C(&WarBoardManager_TypeInfo, method);
    byte_418668C = 1;
  }
  v3 = WarBoardManager_TypeInfo;
  if ( (BYTE3(WarBoardManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardManager_TypeInfo);
    v3 = WarBoardManager_TypeInfo;
  }
  return UnityEngine_PlayerPrefs__GetInt(v3->static_fields->SAVE_KEY_WAR_BOARD_CONFIRMED_RULE, -1, 0LL) != this->fields.winCondId;
}


void __fastcall WarBoardData__InitPrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardData_o *UseCommonReleaseIds; // x0
  const MethodInfo *v5; // x2
  System_Int32_array *PrevCondIds; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  System_Int32_array *v9; // x20
  unsigned __int64 v10; // x24
  int32_t v11; // w23
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v13; // x22
  __int64 v14; // x0

  if ( (byte_4186696 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, method);
    sub_B2C35C(&WarBoardPrevCondData_TypeInfo, v3);
    byte_4186696 = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v5);
  if ( !PrevCondIds )
    goto LABEL_11;
  v8 = *(_QWORD *)&PrevCondIds->max_length;
  v9 = PrevCondIds;
  if ( (int)v8 >= 1 )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v8 )
      {
        v14 = sub_B2C460(PrevCondIds);
        sub_B2C400(v14, 0LL);
      }
      v11 = v9->m_Items[v10 + 1];
      listPrevCond = this->fields.listPrevCond;
      v13 = (WarBoardPrevCondData_o *)sub_B2C42C(WarBoardPrevCondData_TypeInfo);
      WarBoardPrevCondData___ctor_27739336(v13, v11, -1, 0LL);
      if ( !listPrevCond )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listPrevCond,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
      LODWORD(v8) = v9->max_length;
      if ( (__int64)++v10 >= (int)v8 )
        return;
    }
LABEL_11:
    sub_B2C434(PrevCondIds, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData__IsBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  WarBoardData___c__DisplayClass172_0_o *v16; // x23
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v17; // x0
  __int64 v18; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v23; // x21
  Il2CppObject *v24; // x20
  System_Xml_Schema_XmlSchemaObject_o *valuea; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418668F & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_B2C35C(&System_Convert_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v11);
    sub_B2C35C(&Method_System_Func_WarBoardBossBattleData__bool___ctor__, v12);
    sub_B2C35C(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v13);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__, v14);
    sub_B2C35C(&WarBoardData___c__DisplayClass172_0_TypeInfo, v15);
    byte_418668F = 1;
  }
  valuea = 0LL;
  v16 = (WarBoardData___c__DisplayClass172_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass172_0_TypeInfo);
  WarBoardData___c__DisplayClass172_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_18;
  v16->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_18;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v21,
                                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return value == 0;
  v23 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
  v17 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  if ( !v17 )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          v17,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  v17 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&v23->fields.isExecute;
  if ( !v17 )
LABEL_18:
    sub_B2C434(v17, v18);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          v17,
          (System_Xml_XmlQualifiedName_o *)key,
          &valuea,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v24 = (Il2CppObject *)valuea;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v24, 0LL) == value;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData__IsDefenseTarget(
        WarBoardData_o *this,
        System_Int32_array **data,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  _QWORD **v12; // x24
  __int64 v13; // x23
  __int16 v14; // w8
  __int64 v15; // x23
  __int64 v16; // x23
  __int64 v17; // x23
  System_Int32_array **v18; // x8
  System_Int32_array *v19; // x1
  WarBoardStageNpcMaster_o *stageNpcMaster; // x0
  __int64 v21; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Int32_array *DefenseTarget; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418668D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_int___, data);
    byte_418668D = 1;
  }
  entity = 0LL;
  v12 = (_QWORD **)Method_System_Array_Empty_int___;
  v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v14 = *(_WORD *)(v13 + 306);
  if ( (v14 & 1) == 0 )
  {
    sub_AC505C(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v14 = *(_WORD *)(v13 + 306);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = *v12[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AC505C(*v12[6]);
    if ( !*(_DWORD *)(v15 + 224) )
    {
      v16 = *v12[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AC505C(*v12[6]);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = *v12[6];
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AC505C(*v12[6]);
  v18 = *(System_Int32_array ***)(v17 + 184);
  v19 = *v18;
  *data = *v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)data,
    (System_Int32_array **)v19,
    *(System_String_array ***)&forceId,
    *(System_String_array ***)&groupId,
    (System_Boolean_array **)method,
    v5,
    v6,
    v7);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    goto LABEL_24;
  stageNpcMaster = this->fields.stageNpcMaster;
  if ( !stageNpcMaster )
    goto LABEL_24;
  if ( WarBoardStageNpcMaster__TryGetEntity(stageNpcMaster, &entity, stageEntity->fields.id, forceId, groupId, 0LL) )
  {
    stageNpcMaster = (WarBoardStageNpcMaster_o *)entity;
    if ( !entity )
      goto LABEL_24;
    DefenseTarget = WarBoardStageNpcEntity__GetDefenseTarget(entity, 0LL);
    *data = DefenseTarget;
    sub_B2C2F8((BattleServantConfConponent_o *)data, (System_Int32_array **)DefenseTarget, v24, v25, v26, v27, v28, v29);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)*data,
                                                 0LL);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_24:
    sub_B2C434(stageNpcMaster, v21);
  return ((*data)->max_length & 1) == 0;
}


bool __fastcall WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_22505868; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21
  __int64 v14; // x0

  Pieces_22505868 = WarBoardData__GetPieces_22505868(this, 0, 0, v2);
  if ( !Pieces_22505868 )
LABEL_19:
    sub_B2C434(Pieces_22505868, v5);
  max_length = Pieces_22505868->max_length;
  v7 = Pieces_22505868;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
    {
      v14 = sub_B2C460(Pieces_22505868);
      sub_B2C400(v14, 0LL);
    }
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_19;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_22505868 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0LL);
      if ( ((unsigned __int8)Pieces_22505868 & 1) == 0 )
      {
        Pieces_22505868 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0LL);
        if ( ((unsigned __int8)Pieces_22505868 & 1) != 0 )
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


bool __fastcall WarBoardData__IsPlayedEnemyHalfDeadMessage(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v7; // w25
  int v8; // w24
  int32_t i; // w20
  int32_t v10; // w21
  WarBoardPieceData_array *Pieces_22505868; // x0
  __int64 v12; // x1
  int max_length; // w8
  WarBoardPieceData_array *v14; // x22
  unsigned int v15; // w26
  Il2CppClass **v16; // x8
  Il2CppClass *v17; // x23
  int v18; // w8
  __int64 v19; // x0

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
          Pieces_22505868 = WarBoardData__GetPieces_22505868(this, i, v10, v2);
          if ( !Pieces_22505868 )
            goto LABEL_28;
          max_length = Pieces_22505868->max_length;
          v14 = Pieces_22505868;
          if ( max_length >= 1 )
          {
            v15 = 0;
            while ( 1 )
            {
              if ( v15 >= max_length )
              {
                v19 = sub_B2C460(Pieces_22505868);
                sub_B2C400(v19, 0LL);
              }
              v16 = &v14->obj.klass + (int)v15;
              v17 = v16[4];
              if ( !v17 )
                break;
              Pieces_22505868 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v16[4],
                                                             0LL);
              if ( ((unsigned __int8)Pieces_22505868 & 1) == 0 && !LOBYTE(v17->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v17->_1.this_arg.bits + 4);
              }
              max_length = v14->max_length;
              if ( (int)++v15 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_B2C434(Pieces_22505868, v12);
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
  if ( v18 >> 1 < v8 )
  {
    this->fields.isPlayedHalfDeadMessage = 1;
    return 0;
  }
  return result;
}


bool __fastcall WarBoardData__IsReachableWinConditions(WarBoardData_o *this, const MethodInfo *method)
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  WarBoardCommonReleaseEntity_array *List; // x20
  System_Collections_Generic_Dictionary_int__bool__o *v19; // x19
  int max_length; // w8
  unsigned int v21; // w21
  int32_t *v22; // x25
  int32_t v23; // w8
  int32_t v24; // w1
  const MethodInfo_2E1CBE0 *v25; // x3
  bool v26; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v27; // x0
  WarBoardData___c_c *v28; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v31; // x21
  struct WarBoardData___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x0

  if ( (byte_4186659 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____, v9);
    sub_B2C35C(&Method_System_Func_KeyValuePair_int__bool___bool___ctor__, v10);
    sub_B2C35C(&System_Func_KeyValuePair_int__bool___bool__TypeInfo, v11);
    sub_B2C35C(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__, v12);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v13);
    byte_4186659 = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) != 0 )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_36;
  List = WarBoardCommonReleaseMaster__GetList(
           (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster,
           this->fields.winCondId,
           v16);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0LL) )
    return 0;
  v19 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__bool__TypeInfo);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v19,
    (const MethodInfo_2E1C05C *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_36:
    sub_B2C434(Master_WarQuestSelectionMaster, v15);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= max_length )
      {
        v39 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v39, 0LL);
      }
      v22 = (int32_t *)List->m_Items[v21];
      if ( !v22 || !v19 )
        goto LABEL_36;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v19,
              v22[6],
              (const MethodInfo_2E1CE80 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                      v19,
                                                                      v22[6],
                                                                      (const MethodInfo_2E1CB48 *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
LABEL_26:
      max_length = List->max_length;
      if ( (int)++v21 >= max_length )
        goto LABEL_27;
    }
    v23 = v22[7];
    if ( v23 == 1 )
    {
      v24 = v22[6];
      v25 = (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v26 = v22[10] == 0;
    }
    else
    {
      if ( v23 != 5 )
      {
        v24 = v22[6];
        v25 = (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v27 = v19;
        v26 = 0;
        goto LABEL_25;
      }
      v24 = v22[6];
      v25 = (const MethodInfo_2E1CBE0 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v26 = v22[10] < 1;
    }
    v27 = v19;
LABEL_25:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v27, v24, v26, v25);
    goto LABEL_26;
  }
LABEL_27:
  v28 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v28 = WarBoardData___c_TypeInfo;
  }
  static_fields = v28->static_fields;
  _9__95_0 = static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v31 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_B2C42C(System_Func_KeyValuePair_int__bool___bool__TypeInfo);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v31,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      (const MethodInfo_27032FC *)Method_System_Func_KeyValuePair_int__bool___bool___ctor__);
    v32 = WarBoardData___c_TypeInfo->static_fields;
    v32->__9__95_0 = _9__95_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v32->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v19,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_1738BB0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardData__IsReinforcementsApper(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        int32_t targetStageReinforcementsId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardData___c__DisplayClass190_0_o *v15; // x24
  WarBoardStageReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  struct WarBoardStageEntity_o *stageEntity; // x8
  void **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v21; // x1
  System_Int32_array *PlayReinforcements; // x25
  System_Func_int__bool__o *v23; // x26
  const MethodInfo *v24; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v26; // w9
  bool result; // w0
  const MethodInfo *v28; // x3
  void *v29; // x8
  __int64 v30; // x9
  WarBoardStageReinforcementsMaster_o *v31; // x21
  int32_t v32; // w22
  __int64 v33; // x9
  __int64 v34; // x9
  _BOOL4 v35; // w9
  __int64 v36; // x0

  if ( (byte_418669E & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, *(_QWORD *)&forceId);
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v11);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__, v13);
    sub_B2C35C(&WarBoardData___c__DisplayClass190_0_TypeInfo, v14);
    byte_418669E = 1;
  }
  v15 = (WarBoardData___c__DisplayClass190_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass190_0_TypeInfo);
  WarBoardData___c__DisplayClass190_0___ctor(v15, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !v15 )
    goto LABEL_33;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  p_entity = (void **)&v15->fields.entity;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          Master_WarQuestSelectionMaster,
          &v15->fields.entity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0LL) )
    return 0;
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)*p_entity;
  if ( !*p_entity
    || (IsOnce = WarBoardStageReinforcementsEntity__IsOnce(
                   (WarBoardStageReinforcementsEntity_o *)Master_WarQuestSelectionMaster,
                   0LL),
        PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v21),
        v23 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo),
        System_Func_int__bool____ctor(
          v23,
          (Il2CppObject *)v15,
          Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
          (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__),
        Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__24273940(
                                                                                  PlayReinforcements,
                                                                                  (System_Func_T__bool__o *)v23,
                                                                                  (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496),
        (entity = v15->fields.entity) == 0LL) )
  {
LABEL_33:
    sub_B2C434(Master_WarQuestSelectionMaster, v17);
  }
  v26 = IsOnce & (unsigned __int8)Master_WarQuestSelectionMaster;
  result = 0;
  if ( (v26 & 1) == 0 && entity->fields.forceId == forceId && entity->fields.groupId == groupId )
  {
    Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                                              this,
                                                                              entity->fields.squareIds,
                                                                              v24);
    v29 = *p_entity;
    if ( *p_entity )
    {
      v30 = *((_QWORD *)v29 + 5);
      if ( v30 )
      {
        v31 = Master_WarQuestSelectionMaster;
        v32 = 0;
        while ( v32 < *(_DWORD *)(v30 + 24) )
        {
          v33 = *((_QWORD *)v29 + 8);
          if ( !v33 )
            goto LABEL_33;
          if ( (unsigned int)v32 >= *(_DWORD *)(v33 + 24) )
          {
LABEL_37:
            v36 = sub_B2C460(Master_WarQuestSelectionMaster);
            sub_B2C400(v36, 0LL);
          }
          if ( *(int *)(v33 + 4LL * v32 + 32) < 1 )
          {
            v35 = 0;
            if ( !v31 )
              goto LABEL_33;
          }
          else
          {
            Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                                                      this,
                                                                                      *((_DWORD *)v29 + 5),
                                                                                      v32,
                                                                                      v28);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_33;
            v29 = *p_entity;
            if ( !*p_entity )
              goto LABEL_33;
            v34 = *((_QWORD *)v29 + 8);
            if ( !v34 )
              goto LABEL_33;
            if ( (unsigned int)v32 >= *(_DWORD *)(v34 + 24) )
              goto LABEL_37;
            v35 = *(_DWORD *)(v34 + 4LL * v32 + 32) <= SLODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField);
            if ( !v31 )
              goto LABEL_33;
          }
          if ( (unsigned int)v32 >= LODWORD(v31->fields._MasterName_k__BackingField) )
            goto LABEL_37;
          if ( !v35 && (*((_DWORD *)&v31->fields.list + v32) & 0x80000000) == 0 )
            return 1;
          v30 = *((_QWORD *)v29 + 5);
          ++v32;
          if ( !v30 )
            goto LABEL_33;
        }
        return 0;
      }
    }
    goto LABEL_33;
  }
  return result;
}


bool __fastcall WarBoardData__IsWin(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  __int64 v13; // x1
  System_Type_o *Type; // x20
  intptr_t v15; // w21
  System_Type_o *TypeFromHandle; // x1
  bool v17; // w20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF
  System_RuntimeTypeHandle_o v20; // 0:w0.4

  if ( (byte_418665A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B2C35C(&System_Type_TypeInfo, v8);
    sub_B2C35C(&WarBoardChangeWinConditionTask_var, v9);
    byte_418665A = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0LL, 0LL);
  Instance = (WebViewManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                                   (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarBoardManager__AddTask_18201492((WarBoardManager_o *)Instance, 0, EventTasks, 0LL);
  }
  if ( !EventTasks )
LABEL_22:
    sub_B2C434(Instance, v11);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTasks,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__) )
  {
    if ( !v19.fields.current )
      sub_B2C434(0LL, v13);
    Type = System_Object__GetType(v19.fields.current, 0LL);
    v15 = (int)WarBoardChangeWinConditionTask_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v20.fields.value = v15;
    TypeFromHandle = System_Type__GetTypeFromHandle(v20, 0LL);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0LL) )
    {
      v17 = 0;
      this->fields.winCondGroup = -1;
      goto LABEL_19;
    }
  }
  v17 = 1;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v17;
}


void __fastcall WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  WarBoardCommonReleaseMaster_o *v10; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x3
  Il2CppObject *current; // x21
  int32_t klass; // w1
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+0h] [xbp-40h] BYREF
  int32_t condGroup; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_4186698 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v7);
    byte_4186698 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_B2C434(Master_WarQuestSelectionMaster, v9);
  v10 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.listPrevCond,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  while ( 1 )
  {
    v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v11 )
      break;
    current = v18.fields.current;
    if ( !v18.fields.current )
      sub_B2C434(v11, v12);
    if ( (HIDWORD(v18.fields.current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v10 )
        sub_B2C434(v11, v12);
      klass = (int32_t)v18.fields.current[1].klass;
      condGroup = 0;
      if ( WarBoardCommonReleaseMaster__IsOpen_22500540(v10, klass, &condGroup, v13) )
      {
        serverData = this->fields.serverData;
        if ( serverData )
          turn = serverData->fields.turn;
        else
          turn = 0;
        WarBoardPrevCondData__SetClearedTurn((WarBoardPrevCondData_o *)current, turn, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData__LoadBattleParticipantInfo(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(this->fields.latestBattlePieceUniqueIndexes, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__LocalSave(WarBoardData_o *this, bool onBoardSkillUpdate, const MethodInfo *method)
{
  WarBoardData_o *v4; // x19
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
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  WarBoardData_o **p_localSaveData; // x23
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x21
  int max_length; // w8
  unsigned int v56; // w22
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *actionPointEntityDict; // x21
  int entries; // w8
  unsigned int v59; // w22
  struct WarBoardPieceData_array *pieces; // x21
  int v61; // w8
  unsigned int v62; // w22
  struct WarBoardSquareData_array *squares; // x21
  int v64; // w8
  unsigned int v65; // w22
  struct WarBoardSquareData_array *condSquares; // x21
  int v67; // w8
  unsigned int v68; // w22
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v70; // x9
  struct WarBoardDataEntity_o *v71; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v72; // x9
  struct WarBoardDataEntity_o *v73; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v74; // x9
  WarBoardData_o *v75; // x21
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v76; // x8
  UnityEngine_Vector2_o *v77; // x22
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v79; // x8
  WarBoardData_o *v80; // x22
  float ZoomSize; // s0
  WarBoardData_o *v82; // x20
  WarBoardData_o *v83; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v84; // x20
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v86; // x21
  __int64 v87; // x0
  __int64 v88; // x1
  WarBoardData_o *v89; // x21
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v110; // x20
  Il2CppObject *v111; // x22
  WarBoardPrevCondData_SaveData_o *v112; // x21
  __int64 v113; // x0
  __int64 v114; // x1
  WarBoardData_o *v115; // x21
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v122; // x20
  Il2CppObject *v123; // x22
  HoldReinforcementsData_SaveData_o *v124; // x21
  __int64 v125; // x0
  __int64 v126; // x1
  WarBoardData_o *v127; // x21
  System_String_array **v128; // x2
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v134; // x20
  System_String_array **v135; // x2
  System_String_array **v136; // x3
  System_Boolean_array **v137; // x4
  System_Int32_array **v138; // x5
  System_Int32_array *v139; // x6
  System_Int32_array *v140; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v141; // x20
  Il2CppObject *v142; // x22
  WarBoardUiData_SaveData_o *v143; // x21
  __int64 v144; // x0
  __int64 v145; // x1
  WarBoardData_o *v146; // x21
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  struct WarBoardDataEntity_o *v153; // x8
  unsigned int v154; // w0
  WarBoardData_o *v155; // x21
  int v156; // w20
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  unsigned __int64 v163; // x22
  signed __int64 v164; // x24
  __int64 v165; // x25
  struct WarBoardDataEntity_o *v166; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x27
  WarBoardSquareIndexData_o *v169; // x21
  WarBoardSquareIndexData_SaveData_o *v170; // x20
  System_String_array **v171; // x2
  System_String_array **v172; // x3
  System_Boolean_array **v173; // x4
  System_Int32_array **v174; // x5
  System_Int32_array *v175; // x6
  System_Int32_array *v176; // x7
  struct WarBoardDataEntity_o *v177; // x8
  unsigned int v178; // w0
  WarBoardData_o *v179; // x21
  int v180; // w20
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_String_array **v187; // x2
  System_String_array **v188; // x3
  System_Boolean_array **v189; // x4
  System_Int32_array **v190; // x5
  System_Int32_array *v191; // x6
  System_Int32_array *v192; // x7
  unsigned __int64 v193; // x22
  signed __int64 v194; // x24
  __int64 v195; // x25
  struct WarBoardDataEntity_o *v196; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x27
  WarBoardBossBattleData_o *v199; // x21
  WarBoardBossBattleData_SaveData_o *v200; // x20
  System_String_array **v201; // x2
  System_String_array **v202; // x3
  System_Boolean_array **v203; // x4
  System_Int32_array **v204; // x5
  System_Int32_array *v205; // x6
  System_Int32_array *v206; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v208; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v209; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v210; // x8
  MiniMessagePack_MiniMessagePacker_o *v211; // x19
  System_Byte_array *v212; // x19
  WarBoardData_c *v213; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v215; // x19
  __int64 v216; // x0
  __int64 v217; // x0
  _BYTE v218[40]; // [xsp+0h] [xbp-100h] BYREF
  int v219; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o v220; // [xsp+30h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v221; // [xsp+50h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v222; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v223; // [xsp+90h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4186651 & 1) == 0 )
  {
    sub_B2C35C(&System_Convert_TypeInfo, onBoardSkillUpdate);
    sub_B2C35C(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, v6);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__, v30);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v31);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__, v32);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__, v33);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__, v34);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__, v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__, v36);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo, v37);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo, v38);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo, v39);
    sub_B2C35C(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo, v40);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v41);
    sub_B2C35C(&WarBoardSquareIndexData_SaveData___TypeInfo, v42);
    sub_B2C35C(&WarBoardBossBattleData_SaveData___TypeInfo, v43);
    sub_B2C35C(&WarBoardUiData_SaveData_TypeInfo, v44);
    sub_B2C35C(&WarBoardEventData_SaveData_TypeInfo, v45);
    sub_B2C35C(&WarBoardSquareIndexData_SaveData_TypeInfo, v46);
    sub_B2C35C(&WarBoardPrevCondData_SaveData_TypeInfo, v47);
    sub_B2C35C(&HoldReinforcementsData_SaveData_TypeInfo, v48);
    sub_B2C35C(&WarBoardBossBattleData_SaveData_TypeInfo, v49);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v50);
    this = (WarBoardData_o *)sub_B2C35C(&WarBoardData_TypeInfo, v51);
    byte_4186651 = 1;
  }
  memset(&v223, 0, sizeof(v223));
  memset(&v222, 0, sizeof(v222));
  memset(&v221, 0, sizeof(v221));
  memset(&v220, 0, sizeof(v220));
  v219 = 0;
  p_localSaveData = (WarBoardData_o **)&v4->fields.localSaveData;
  localSaveData = v4->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_143;
  pieceSaves = localSaveData->fields.pieceSaves;
  if ( !pieceSaves )
    goto LABEL_143;
  max_length = pieceSaves->max_length;
  if ( max_length >= 1 )
  {
    v56 = 0;
    while ( v56 < max_length )
    {
      this = (WarBoardData_o *)pieceSaves->m_Items[v56];
      if ( !this )
        goto LABEL_143;
      WarBoardPieceData_SaveData__Save((WarBoardPieceData_SaveData_o *)this, 0LL);
      max_length = pieceSaves->max_length;
      if ( (int)++v56 >= max_length )
        goto LABEL_10;
    }
LABEL_144:
    v216 = sub_B2C460(this);
    sub_B2C400(v216, 0LL);
  }
LABEL_10:
  if ( !*p_localSaveData )
    goto LABEL_143;
  actionPointEntityDict = (*p_localSaveData)->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    goto LABEL_143;
  entries = (int)actionPointEntityDict->fields.entries;
  if ( entries >= 1 )
  {
    v59 = 0;
    while ( v59 < entries )
    {
      this = (WarBoardData_o *)*((_QWORD *)&actionPointEntityDict->fields.count + (int)v59);
      if ( !this )
        goto LABEL_143;
      WarBoardItemData_SaveData__Save((WarBoardItemData_SaveData_o *)this, 0LL);
      entries = (int)actionPointEntityDict->fields.entries;
      if ( (int)++v59 >= entries )
        goto LABEL_17;
    }
    goto LABEL_144;
  }
LABEL_17:
  if ( !*p_localSaveData )
    goto LABEL_143;
  pieces = (*p_localSaveData)->fields.pieces;
  if ( !pieces )
    goto LABEL_143;
  v61 = pieces->max_length;
  if ( v61 >= 1 )
  {
    v62 = 0;
    while ( v62 < v61 )
    {
      this = (WarBoardData_o *)pieces->m_Items[v62];
      if ( !this )
        goto LABEL_143;
      WarBoardTreasureData_SaveData__Save((WarBoardTreasureData_SaveData_o *)this, 0LL);
      v61 = pieces->max_length;
      if ( (int)++v62 >= v61 )
        goto LABEL_24;
    }
    goto LABEL_144;
  }
LABEL_24:
  if ( !*p_localSaveData )
    goto LABEL_143;
  squares = (*p_localSaveData)->fields.squares;
  if ( !squares )
    goto LABEL_143;
  v64 = squares->max_length;
  if ( v64 >= 1 )
  {
    v65 = 0;
    while ( v65 < v64 )
    {
      this = (WarBoardData_o *)squares->m_Items[v65];
      if ( !this )
        goto LABEL_143;
      WarBoardWallData_SaveData__Save((WarBoardWallData_SaveData_o *)this, 0LL);
      v64 = squares->max_length;
      if ( (int)++v65 >= v64 )
        goto LABEL_31;
    }
    goto LABEL_144;
  }
LABEL_31:
  if ( !*p_localSaveData )
    goto LABEL_143;
  condSquares = (*p_localSaveData)->fields.condSquares;
  if ( !condSquares )
    goto LABEL_143;
  v67 = condSquares->max_length;
  if ( v67 >= 1 )
  {
    v68 = 0;
    while ( v68 < v67 )
    {
      this = (WarBoardData_o *)condSquares->m_Items[v68];
      if ( !this )
        goto LABEL_143;
      WarBoardSquareData_SaveData__Save((WarBoardSquareData_SaveData_o *)this, 0LL);
      v67 = condSquares->max_length;
      if ( (int)++v68 >= v67 )
        goto LABEL_38;
    }
    goto LABEL_144;
  }
LABEL_38:
  this = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  serverData = v4->fields.serverData;
  if ( !serverData )
    goto LABEL_143;
  v70 = v4->fields.localSaveData;
  if ( !v70 )
    goto LABEL_143;
  v70->fields.turn = serverData->fields.turn;
  v71 = v4->fields.serverData;
  if ( !v71 )
    goto LABEL_143;
  v72 = v4->fields.localSaveData;
  if ( !v72 )
    goto LABEL_143;
  v72->fields.turnForceId = v71->fields.turnForceId;
  v73 = v4->fields.serverData;
  if ( !v73 )
    goto LABEL_143;
  v74 = v4->fields.localSaveData;
  if ( !v74 )
    goto LABEL_143;
  v75 = this;
  v74->fields.turnGroupId = v73->fields.turnGroupId;
  if ( !this )
    goto LABEL_143;
  v76 = this->fields.actionPointEntityDict;
  if ( !v76 )
    goto LABEL_143;
  this = (WarBoardData_o *)v76->fields.values;
  if ( !this )
    goto LABEL_143;
  v77 = (UnityEngine_Vector2_o *)*p_localSaveData;
  ScrlPos = MapScroll__GetScrlPos((MapScroll_o *)this, 0LL);
  if ( !v77 )
    goto LABEL_143;
  v77[9] = ScrlPos;
  v79 = v75->fields.actionPointEntityDict;
  if ( !v79 )
    goto LABEL_143;
  this = (WarBoardData_o *)v79->fields._syncRoot;
  if ( !this )
    goto LABEL_143;
  v80 = *p_localSaveData;
  ZoomSize = MapZoom__GetZoomSize((MapZoom_o *)this, 0LL);
  if ( !v80 )
    goto LABEL_143;
  *(float *)&v80->fields.treasures = ZoomSize;
  if ( !*p_localSaveData )
    goto LABEL_143;
  HIDWORD((*p_localSaveData)->fields.treasures) = HIDWORD(v75[3].fields.stageNpcMaster);
  if ( !*p_localSaveData )
    goto LABEL_143;
  BYTE4((*p_localSaveData)->fields.effects) = onBoardSkillUpdate;
  v82 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetLogicCount(0LL);
  if ( !v82 )
    goto LABEL_143;
  LODWORD(v82->fields.serverData) = (_DWORD)this;
  v83 = *p_localSaveData;
  this = (WarBoardData_o *)BattleRandom__GetGutsCount(0LL);
  if ( !v83 )
    goto LABEL_143;
  HIDWORD(v83->fields.serverData) = (_DWORD)this;
  if ( !*p_localSaveData )
    goto LABEL_143;
  LOBYTE((*p_localSaveData)->fields._bgAnimationInfo_k__BackingField) = v4->fields.isPlayedHalfDeadMessage;
  v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v84,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v218,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v223 = *(System_Collections_Generic_List_Enumerator_T__o *)v218;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v223,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v223.fields.current;
    v86 = (WarBoardEventData_SaveData_o *)sub_B2C42C(WarBoardEventData_SaveData_TypeInfo);
    WarBoardEventData_SaveData___ctor_20857948(v86, (WarBoardEventData_o *)current, 0LL);
    if ( !v84 )
      sub_B2C434(v87, v88);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v84,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v86,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
  }
  *(_DWORD *)&v218[4 * v219++ + 24] = 482;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v223,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( v219 && *(_DWORD *)&v218[4 * v219 + 20] == 482 )
    --v219;
  if ( !v84 )
    goto LABEL_143;
  v89 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v84,
                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v89 )
    goto LABEL_143;
  v89->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v89->fields.localSaveData,
    (System_Int32_array **)this,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_143;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)latestPieceActionSquareIndexes,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_143;
  latestBattlePieceUniqueIndexes = (System_Int32_array **)v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.isPlayedHalfDeadMessage,
    latestBattlePieceUniqueIndexes,
    v103,
    v104,
    v105,
    v106,
    v107,
    v108);
  v110 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v110,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v218,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v222 = *(System_Collections_Generic_List_Enumerator_T__o *)v218;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v222,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v111 = v222.fields.current;
    v112 = (WarBoardPrevCondData_SaveData_o *)sub_B2C42C(WarBoardPrevCondData_SaveData_TypeInfo);
    WarBoardPrevCondData_SaveData___ctor_22650752(v112, (WarBoardPrevCondData_o *)v111, 0LL);
    if ( !v110 )
      sub_B2C434(v113, v114);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v110,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v112,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
  }
  *(_DWORD *)&v218[4 * v219++ + 24] = 618;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v222,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( v219 && *(_DWORD *)&v218[4 * v219 + 20] == 618 )
    --v219;
  if ( !v110 )
    goto LABEL_143;
  v115 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v110,
                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v115 )
    goto LABEL_143;
  v115->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v115->fields.listEvent,
    (System_Int32_array **)this,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v122 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v122,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v218,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v221 = *(System_Collections_Generic_List_Enumerator_T__o *)v218;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v221,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v123 = v221.fields.current;
    v124 = (HoldReinforcementsData_SaveData_o *)sub_B2C42C(HoldReinforcementsData_SaveData_TypeInfo);
    HoldReinforcementsData_SaveData___ctor_18300276(v124, (HoldReinforcementsData_o *)v123, 0LL);
    if ( !v122 )
      sub_B2C434(v125, v126);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v122,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v124,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
  }
  *(_DWORD *)&v218[4 * v219++ + 24] = 703;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v221,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v219 && *(_DWORD *)&v218[4 * v219 + 20] == 703 )
    --v219;
  if ( !v122 )
    goto LABEL_143;
  v127 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v122,
                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v127 )
    goto LABEL_143;
  *(_QWORD *)&v127->fields.winCondId = this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v127->fields.winCondId,
    (System_Int32_array **)this,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_143;
  v134 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v134 )
    goto LABEL_143;
  v134->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v134->fields.playedReinforcements,
    (System_Int32_array **)this,
    v135,
    v136,
    v137,
    v138,
    v139,
    v140);
  v141 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v141,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v218,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v220 = *(System_Collections_Generic_List_Enumerator_T__o *)v218;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v220,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v142 = v220.fields.current;
    v143 = (WarBoardUiData_SaveData_o *)sub_B2C42C(WarBoardUiData_SaveData_TypeInfo);
    WarBoardUiData_SaveData___ctor_22661860(v143, (WarBoardUiData_o *)v142, 0LL);
    if ( !v141 )
      sub_B2C434(v144, v145);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v141,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v143,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
  }
  *(_DWORD *)&v218[4 * v219++ + 24] = 812;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v220,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( v219 && *(_DWORD *)&v218[4 * v219 + 20] == 812 )
    --v219;
  if ( !v141 )
    goto LABEL_143;
  v146 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v141,
                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v146
    || (v146->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v146->fields.latestBattlePieceUniqueIndexes,
          (System_Int32_array **)this,
          v147,
          v148,
          v149,
          v150,
          v151,
          v152),
        (v153 = v4->fields.serverData) == 0LL)
    || (v154 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v153->fields.squareIndexInfo,
                 (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v155 = *p_localSaveData,
        v156 = v154,
        this = (WarBoardData_o *)sub_B2C374(WarBoardSquareIndexData_SaveData___TypeInfo, v154),
        !v155) )
  {
LABEL_143:
    sub_B2C434(this, onBoardSkillUpdate);
  }
  v155->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v155->fields.reinforcementsSaveList,
    (System_Int32_array **)this,
    v157,
    v158,
    v159,
    v160,
    v161,
    v162);
  if ( v156 >= 1 )
  {
    v163 = 0LL;
    v164 = v156;
    v165 = 8LL;
    while ( *p_localSaveData )
    {
      v166 = v4->fields.serverData;
      if ( !v166 )
        break;
      squareIndexInfo = v166->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v163 >= squareIndexInfo->max_length )
        goto LABEL_144;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v169 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v165 * 4);
      v170 = (WarBoardSquareIndexData_SaveData_o *)sub_B2C42C(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_22656852(v170, v169, 0LL);
      if ( !reinforcementsSaveList )
        break;
      if ( v170 )
      {
        this = (WarBoardData_o *)sub_B2C41C(v170, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_149:
          v217 = sub_B2C454();
          sub_B2C400(v217, 0LL);
        }
      }
      if ( v163 >= reinforcementsSaveList[6] )
        goto LABEL_144;
      *(_QWORD *)&reinforcementsSaveList[v165] = v170;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&reinforcementsSaveList[v165],
        (System_Int32_array **)v170,
        v171,
        v172,
        v173,
        v174,
        v175,
        v176);
      ++v163;
      v165 += 2LL;
      if ( (__int64)v163 >= v164 )
        goto LABEL_114;
    }
    goto LABEL_143;
  }
LABEL_114:
  v177 = v4->fields.serverData;
  if ( !v177 )
    goto LABEL_143;
  v178 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v177->fields.bossBattleInfo,
           (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v179 = *p_localSaveData;
  v180 = v178;
  this = (WarBoardData_o *)sub_B2C374(WarBoardBossBattleData_SaveData___TypeInfo, v178);
  if ( !v179 )
    goto LABEL_143;
  v179->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v179->fields.playedStageReinforcementsList,
    (System_Int32_array **)this,
    v181,
    v182,
    v183,
    v184,
    v185,
    v186);
  this = *p_localSaveData;
  if ( v180 >= 1 )
  {
    v193 = 0LL;
    v194 = v180;
    v195 = 32LL;
    while ( this )
    {
      v196 = v4->fields.serverData;
      if ( !v196 )
        break;
      bossBattleInfo = v196->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v193 >= bossBattleInfo->max_length )
        goto LABEL_144;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v199 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v195);
      v200 = (WarBoardBossBattleData_SaveData_o *)sub_B2C42C(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_20840436(v200, v199, 0LL);
      if ( !playedStageReinforcementsList )
        break;
      if ( v200 )
      {
        this = (WarBoardData_o *)sub_B2C41C(v200, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_149;
      }
      if ( v193 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_144;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v195) = (System_Collections_Generic_List_int__c *)v200;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)((char *)playedStageReinforcementsList + v195),
        (System_Int32_array **)v200,
        v201,
        v202,
        v203,
        v204,
        v205,
        v206);
      this = *p_localSaveData;
      ++v193;
      v195 += 8LL;
      if ( (__int64)v193 >= v194 )
        goto LABEL_127;
    }
    goto LABEL_143;
  }
LABEL_127:
  if ( !this )
    goto LABEL_143;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)bgAnimationInfo_k__BackingField,
    v187,
    v188,
    v189,
    v190,
    v191,
    v192);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  v208 = v4->fields.localSaveData;
  if ( !v208 )
    goto LABEL_143;
  v208->fields.isContinue = v4->fields._IsContinue_k__BackingField;
  v209 = v4->fields.localSaveData;
  if ( !v209 )
    goto LABEL_143;
  v209->fields.isNextTurn = v4->fields._IsNextTurn_k__BackingField;
  v210 = v4->fields.localSaveData;
  if ( !v210 )
    goto LABEL_143;
  v210->fields.localSaveTiming = v4->fields.localSaveTiming;
  v211 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v211, 0LL);
  if ( !v211 )
    goto LABEL_143;
  v212 = MiniMessagePack_MiniMessagePacker__PackClass(v211, (Il2CppObject *)*p_localSaveData, 0LL);
  v213 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v213 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v213->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v215 = System_Convert__ToBase64String(v212, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v215, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SaveHoldReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        int32_t index,
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
  WarBoardData___c__DisplayClass187_0_o *v17; // x20
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v18; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x22
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w21
  int32_t v25; // w22
  HoldReinforcementsData_o *v26; // x20
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418669B & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_HoldReinforcementsData___, *(_QWORD *)&stageReinforcementsId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v9);
    sub_B2C35C(&Method_System_Func_HoldReinforcementsData__bool___ctor__, v10);
    sub_B2C35C(&System_Func_HoldReinforcementsData__bool__TypeInfo, v11);
    sub_B2C35C(&HoldReinforcementsData_TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v14);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__, v15);
    sub_B2C35C(&WarBoardData___c__DisplayClass187_0_TypeInfo, v16);
    byte_418669B = 1;
  }
  memset(&v27, 0, sizeof(v27));
  v17 = (WarBoardData___c__DisplayClass187_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass187_0_TypeInfo);
  WarBoardData___c__DisplayClass187_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_17;
  v17->fields.stageReinforcementsId = stageReinforcementsId;
  v17->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_HoldReinforcementsData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v21,
          (const MethodInfo_17266AC *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v24 = v17->fields.stageReinforcementsId;
    v25 = v17->fields.index;
    v26 = (HoldReinforcementsData_o *)sub_B2C42C(HoldReinforcementsData_TypeInfo);
    HoldReinforcementsData___ctor_27361816(v26, v24, v25, 1, 0LL);
    v18 = this->fields.reinforcementsSaveList;
    if ( v18 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v26,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
      return;
    }
LABEL_17:
    sub_B2C434(v18, v19);
  }
  v18 = this->fields.reinforcementsSaveList;
  if ( !v18 )
    goto LABEL_17;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v27,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v27,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v22 )
      break;
    if ( !v27.fields.current )
      sub_B2C434(v22, v23);
    if ( LODWORD(v27.fields.current[1].klass) == v17->fields.stageReinforcementsId
      && HIDWORD(v27.fields.current[1].klass) == v17->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v27.fields.current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SavePlayReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_4186699 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&stageReinforcementsId);
    byte_4186699 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B2C434(0LL, *(_QWORD *)&stageReinforcementsId);
  System_Collections_Generic_List_int___Add(
    playedStageReinforcementsList,
    stageReinforcementsId,
    (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SearchInRangeSquares(
        WarBoardData_o *this,
        int32_t start,
        int32_t range,
        System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o **rangeSearches,
        const MethodInfo *method)
{
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
  WarBoardData___c__DisplayClass125_0_o *v21; // x21
  WarBoardData_SquareRangeSearch_o *v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v26; // x24
  WarBoardSquareData_o *v27; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x24
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v35; // x25
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v36; // x24
  int32_t v37; // w26
  WarBoardData_SquareRangeSearch_o *v38; // x25
  struct System_Int32_array *linkedSquares; // x8
  __int64 v40; // x8
  __int64 v41; // x20
  __int64 i; // x27
  __int64 v43; // x24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  __int64 v50; // x23
  struct System_Int32_array *v51; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v52; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v53; // x26
  const MethodInfo *v54; // x4
  System_Collections_Generic_List_T__o *v55; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v56; // x26
  struct System_Int32_array *v57; // x8
  __int64 v58; // x8
  __int64 v59; // x0

  if ( (byte_4186672 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___, *(_QWORD *)&start);
    sub_B2C35C(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___, v9);
    sub_B2C35C(&Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__, v10);
    sub_B2C35C(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__, v13);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v14);
    sub_B2C35C(&WarBoardData_SquareRangeSearch_TypeInfo, v15);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__, v16);
    sub_B2C35C(&WarBoardData___c__DisplayClass125_0_TypeInfo, v17);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__, v18);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__, v19);
    sub_B2C35C(&WarBoardData___c__DisplayClass125_1_TypeInfo, v20);
    byte_4186672 = 1;
  }
  v21 = (WarBoardData___c__DisplayClass125_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass125_0_TypeInfo);
  WarBoardData___c__DisplayClass125_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_26;
  v21->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v24);
  if ( Square )
  {
    v26 = *rangeSearches;
    v27 = Square;
    if ( !*rangeSearches )
    {
      v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v28,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v28;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)rangeSearches,
        (System_Int32_array **)v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v26 = *rangeSearches;
    }
    v35 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v35,
      (Il2CppObject *)v21,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
    v22 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v26,
            (System_Func_TSource__bool__o *)v35,
            (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v22 )
    {
      v22->fields.range = range;
    }
    else
    {
      v36 = *rangeSearches;
      v37 = v21->fields.start;
      v38 = (WarBoardData_SquareRangeSearch_o *)sub_B2C42C(WarBoardData_SquareRangeSearch_TypeInfo);
      WarBoardData_SquareRangeSearch___ctor(v38, v37, range, 0LL);
      if ( !v36 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v36,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v38,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    }
    v21->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v27->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_26;
      v40 = *(_QWORD *)&linkedSquares->max_length;
      if ( (int)v40 >= 1 )
      {
        v41 = (int)v40;
        for ( i = 8LL; ; ++i )
        {
          v43 = sub_B2C42C(WarBoardData___c__DisplayClass125_1_TypeInfo);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v43, 0LL);
          if ( !v43 )
            break;
          *(_QWORD *)(v43 + 24) = v21;
          v50 = v43 + 24;
          sub_B2C2F8(
            (BattleServantConfConponent_o *)(v43 + 24),
            (System_Int32_array **)v21,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49);
          v51 = v27->fields.linkedSquares;
          if ( !v51 )
            break;
          if ( i - 8 >= (unsigned __int64)v51->max_length )
            goto LABEL_27;
          *(_DWORD *)(v43 + 16) = *((_DWORD *)&v51->obj.klass + i);
          v52 = *rangeSearches;
          v53 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v53,
            (Il2CppObject *)v43,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            (const MethodInfo_2711C04 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
          v22 = (WarBoardData_SquareRangeSearch_o *)System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                                                      (System_Func_TSource__bool__o *)v53,
                                                      (const MethodInfo_173783C *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v22 & 1) != 0
            || (v55 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v56 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo),
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  v56,
                  (Il2CppObject *)v43,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  (const MethodInfo_2711C04 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__),
                v22 = (WarBoardData_SquareRangeSearch_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                            v55,
                                                            (System_Func_T__bool__o *)v56,
                                                            (const MethodInfo_17266AC *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v22 & 1) != 0) )
          {
            v57 = v27->fields.linkedSquares;
            if ( !v57 )
              break;
            if ( i - 8 >= (unsigned __int64)v57->max_length )
            {
LABEL_27:
              v59 = sub_B2C460(v22);
              sub_B2C400(v59, 0LL);
            }
            if ( !*(_QWORD *)v50 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              *((_DWORD *)&v57->obj.klass + i),
              *(_DWORD *)(*(_QWORD *)v50 + 20LL),
              rangeSearches,
              v54);
          }
          v58 = i - 7;
          if ( v58 >= v41 )
            return;
        }
LABEL_26:
        sub_B2C434(v22, v23);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall WarBoardData__SearchNearestEmptySquare(
        WarBoardData_o *this,
        int32_t destination,
        int32_t current,
        System_Func_WarBoardPieceData__bool__o *checkReplaceFunc,
        const MethodInfo *method)
{
  int32_t v7; // w22
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
  System_Collections_Generic_Queue_int__o *v19; // x21
  WarBoardPieceData_o *Piece_22512764; // x0
  __int64 v21; // x1
  System_Collections_Generic_HashSet_int__o *v22; // x23
  const MethodInfo *v23; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v25; // x2
  WarBoardSquareData_o *v26; // x24
  WarBoardPieceData_o *v27; // x25
  struct System_Int32_array *linkedSquares; // x24
  __int64 v29; // x8
  unsigned __int64 v30; // x25
  int32_t v31; // w22
  __int64 v33; // x0

  v7 = destination;
  if ( (byte_4186673 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__bool__Invoke__, *(_QWORD *)&destination);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_HashSet_int___ctor___67287824, v11);
    sub_B2C35C(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_int__Contains__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_int__Dequeue__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_int__Enqueue__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_int___ctor___67338888, v16);
    sub_B2C35C(&Method_System_Collections_Generic_Queue_int__get_Count__, v17);
    sub_B2C35C(&System_Collections_Generic_Queue_int__TypeInfo, v18);
    byte_4186673 = 1;
  }
  if ( v7 != current )
  {
    v19 = (System_Collections_Generic_Queue_int__o *)sub_B2C42C(System_Collections_Generic_Queue_int__TypeInfo);
    System_Collections_Generic_Queue_int____ctor(
      v19,
      (const MethodInfo_295C0DC *)Method_System_Collections_Generic_Queue_int___ctor___67338888);
    if ( !v19 )
LABEL_24:
      sub_B2C434(Piece_22512764, v21);
    System_Collections_Generic_Queue_int___Enqueue(
      v19,
      v7,
      (const MethodInfo_295C67C *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v22 = (System_Collections_Generic_HashSet_int__o *)sub_B2C42C(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v22,
      (const MethodInfo_2D85080 *)Method_System_Collections_Generic_HashSet_int___ctor___67287824);
    if ( v19->fields._size >= 1 )
    {
      do
      {
        v7 = System_Collections_Generic_Queue_int___Dequeue(
               v19,
               (const MethodInfo_295C888 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, v7, v23);
        if ( !Square )
          break;
        v26 = Square;
        Piece_22512764 = WarBoardData__GetPiece_22512764(this, v7, v25);
        if ( !Piece_22512764 )
          return v7;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v27 = Piece_22512764;
        Piece_22512764 = (WarBoardPieceData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                                  (System_Func_BattleBuffData_BuffData__bool__o *)checkReplaceFunc,
                                                  (BattleBuffData_BuffData_o *)Piece_22512764,
                                                  (const MethodInfo_2711C18 *)Method_System_Func_WarBoardPieceData__bool__Invoke__);
        if ( ((unsigned __int8)Piece_22512764 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v27, -1, 0LL);
          return v7;
        }
        if ( !v22 )
          goto LABEL_24;
        Piece_22512764 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v22,
                                                  v7,
                                                  (const MethodInfo_2D8625C *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v26->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        v29 = *(_QWORD *)&linkedSquares->max_length;
        if ( (int)v29 >= 1 )
        {
          v30 = 0LL;
          do
          {
            if ( v30 >= (unsigned int)v29 )
            {
              v33 = sub_B2C460(Piece_22512764);
              sub_B2C400(v33, 0LL);
            }
            v31 = linkedSquares->m_Items[v30 + 1];
            Piece_22512764 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v22,
                                                      v31,
                                                      (const MethodInfo_2D85704 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_22512764 & 1) == 0 )
            {
              Piece_22512764 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v19,
                                                        v31,
                                                        (const MethodInfo_295C998 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_22512764 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v19,
                  v31,
                  (const MethodInfo_295C67C *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(v29) = linkedSquares->max_length;
            ++v30;
          }
          while ( (__int64)v30 < (int)v29 );
        }
      }
      while ( v19->fields._size > 0 );
    }
    return -1;
  }
  return v7;
}


void __fastcall WarBoardData__SetBgAnimationInfo(
        WarBoardData_o *this,
        System_String_o *objectName,
        System_String_o *animName,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *bgAnimationInfo_k__BackingField; // x0

  if ( (byte_41866A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, objectName);
    byte_41866A6 = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_B2C434(0LL, objectName);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)bgAnimationInfo_k__BackingField,
    (System_Xml_XmlQualifiedName_o *)objectName,
    (System_Xml_Schema_XmlSchemaObject_o *)animName,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__SetContinue(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *PlayerPieces; // x20
  WarBoardData___c_c *v12; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__82_0; // x21
  Il2CppObject *v15; // x22
  struct WarBoardData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WarBoardItemData_o *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x3
  WarBoardItemData_c *klass; // x8
  WarBoardItemData_o *v27; // x20
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x3
  __int64 v33; // x20
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x3
  __int64 v39; // x8
  unsigned __int64 v40; // x10
  int *v41; // x11
  __int64 v42; // x0
  WarBoardPieceData_o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v51; // w20
  __int64 v52; // x0

  if ( (byte_4186655 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___, method);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__int___ctor__, v3);
    sub_B2C35C(&System_Func_WarBoardPieceData__int__TypeInfo, v4);
    sub_B2C35C(&System_IDisposable_TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v7);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardData___c__SetContinue_b__82_0__, v9);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v10);
    byte_4186655 = 1;
  }
  PlayerPieces = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardData__GetPlayerPieces(this, method);
  v12 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_WarBoardPieceData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__82_0,
      v15,
      Method_WarBoardData___c__SetContinue_b__82_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v16 = WarBoardData___c_TypeInfo->static_fields;
    v16->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v16->__9__82_0,
      (System_Int32_array **)_9__82_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (WarBoardItemData_o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                PlayerPieces,
                                (System_Func_TSource__TKey__o *)_9__82_0,
                                (const MethodInfo_1A93658 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  if ( !v23 )
    goto LABEL_48;
  klass = v23->klass;
  v27 = v23;
  if ( *(_WORD *)&v23->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v23->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v30 = sub_AC5258(v23, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL, v25);
  }
  v33 = (*(__int64 (__fastcall **)(WarBoardItemData_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( !v33 )
    sub_B2C434(0LL, v31);
  while ( 1 )
  {
    v34 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v35 = 0LL;
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v35;
        v36 += 4;
        if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_23;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_23:
      v37 = sub_AC5258(v33, System_Collections_IEnumerator_TypeInfo, 0LL, v32);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v40 = 0LL;
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v41 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v40;
        v41 += 4;
        if ( v40 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_30;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_30:
      v42 = sub_AC5258(v33, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL, v38);
    }
    v43 = (WarBoardPieceData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v33, *(_QWORD *)(v42 + 8));
    if ( !v43 )
      sub_B2C434(0LL, v44);
    WarBoardPieceData__SetContinue(v43, 0LL);
  }
  v45 = *(_QWORD *)v33;
  if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
  {
    v46 = 0LL;
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      ++v46;
      v47 += 4;
      if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
        goto LABEL_38;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_38:
    v48 = sub_AC5258(v33, System_IDisposable_TypeInfo, 0LL, v38);
  }
  v23 = (WarBoardItemData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v33, *(_QWORD *)(v48 + 8));
  items = this->fields.items;
  if ( !items )
LABEL_48:
    sub_B2C434(v23, v24);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v51 = 0;
    while ( 1 )
    {
      if ( v51 >= max_length )
      {
        v52 = sub_B2C460(v23);
        sub_B2C400(v52, 0LL);
      }
      v23 = items->m_Items[v51];
      if ( !v23 )
        break;
      WarBoardItemData__ResetItem(v23, 0LL);
      max_length = items->max_length;
      if ( (int)++v51 >= max_length )
        return;
    }
    goto LABEL_48;
  }
}


void __fastcall WarBoardData__SetPlayerMasterUserEquip(
        WarBoardData_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct WarBoardPieceData_array *pieces; // x20
  WarBoardData___c_c *v10; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__144_0; // x21
  Il2CppObject *v13; // x22
  struct WarBoardData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  WarBoardPieceData_o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0

  if ( (byte_418667E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Find_WarBoardPieceData___, userEquipId);
    sub_B2C35C(&Method_System_Predicate_WarBoardPieceData___ctor__, v5);
    sub_B2C35C(&System_Predicate_WarBoardPieceData__TypeInfo, v6);
    sub_B2C35C(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, v7);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v8);
    byte_418667E = 1;
  }
  pieces = this->fields.pieces;
  v10 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v10 = WarBoardData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__144_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__144_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__144_0,
      v13,
      Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v14 = WarBoardData___c_TypeInfo->static_fields;
    v14->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v14->__9__144_0,
      (System_Int32_array **)_9__144_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (WarBoardPieceData_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                                             (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)pieces,
                                                                             (System_Predicate_T__o *)_9__144_0,
                                                                             (const MethodInfo_1FFC1B4 *)Method_System_Array_Find_WarBoardPieceData___);
  if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    WarBoardPieceData__SetMasterEquip(USFGOPlayStandardCutInLimitCount_OverwriteCutIn, userEquipId, 0LL);
}


void __fastcall WarBoardData__SetRequest(WarBoardData_o *this, RequestBase_o *request, const MethodInfo *method)
{
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
  System_Collections_Generic_IEnumerable_T__o *pieces; // x21
  WarBoardData___c_c *v31; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__156_0; // x22
  Il2CppObject *v34; // x23
  struct WarBoardData___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  Il2CppObject *v42; // x0
  __int64 v43; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v46; // x21
  System_Byte_array *v47; // x21
  System_String_o *v48; // x0
  struct WarBoardDataEntity_o *v49; // x8
  Il2CppObject *v50; // x0
  System_Byte_array *v51; // x0
  System_Byte_array *v52; // x0
  System_String_o *v53; // x0
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v55; // x0
  struct WarBoardData___c_StaticFields *v56; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__156_1; // x24
  System_String_o *v58; // x22
  System_String_o *v59; // x21
  Il2CppObject *v60; // x1
  Il2CppObject *v61; // x25
  struct WarBoardData___c_StaticFields *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v69; // x0
  WarBoardData___c_c *v70; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x23
  struct WarBoardData___c_StaticFields *v72; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__156_2; // x24
  Il2CppObject *v74; // x25
  struct WarBoardData___c_StaticFields *v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  System_String_array *v83; // x0
  Il2CppObject *v84; // x0
  System_Byte_array *v85; // x21
  System_Byte_array *v86; // x21
  System_String_o *v87; // x0
  struct WarBoardDataEntity_o *v88; // x8
  Il2CppObject *v89; // x21
  Il2CppObject *v90; // x0
  System_Byte_array *v91; // x21
  System_Byte_array *v92; // x21
  System_String_o *v93; // x0
  struct WarBoardDataEntity_o *v94; // x8
  Il2CppObject *v95; // x0
  System_Byte_array *v96; // x0
  System_Byte_array *v97; // x0
  System_String_o *v98; // x0
  struct WarBoardDataEntity_o *v99; // x8
  Il2CppObject *v100; // x0
  System_Byte_array *v101; // x0
  System_Byte_array *v102; // x0
  System_String_o *v103; // x2

  if ( (byte_4186687 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_WarBoardPieceData___ctor__, request);
    sub_B2C35C(&System_Action_WarBoardPieceData__TypeInfo, v5);
    sub_B2C35C(&Method_BasicHelper_ForEach_WarBoardPieceData___, v6);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v7);
    sub_B2C35C(&System_Convert_TypeInfo, v8);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___, v9);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_string___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_string___, v11);
    sub_B2C35C(&Method_System_Func_WarBoardItemData__string___ctor__, v12);
    sub_B2C35C(&Method_System_Func_string__bool___ctor__, v13);
    sub_B2C35C(&System_Func_WarBoardItemData__string__TypeInfo, v14);
    sub_B2C35C(&System_Func_string__bool__TypeInfo, v15);
    sub_B2C35C(&JsonManager_TypeInfo, v16);
    sub_B2C35C(&Method_WarBoardData___c__SetRequest_b__156_0__, v17);
    sub_B2C35C(&Method_WarBoardData___c__SetRequest_b__156_1__, v18);
    sub_B2C35C(&Method_WarBoardData___c__SetRequest_b__156_2__, v19);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v20);
    sub_B2C35C(&StringLiteral_16887/*"bossBattleInfo"*/, v21);
    sub_B2C35C(&StringLiteral_22469/*"svtInfo"*/, v22);
    sub_B2C35C(&StringLiteral_20399/*"masterInfo"*/, v23);
    sub_B2C35C(&StringLiteral_23194/*"wallInfo"*/, v24);
    sub_B2C35C(&StringLiteral_21168/*"null"*/, v25);
    sub_B2C35C(&StringLiteral_22242/*"squareIndexInfo"*/, v26);
    sub_B2C35C(&StringLiteral_19002/*"getItemInfo"*/, v27);
    sub_B2C35C(&StringLiteral_699/*","*/, v28);
    sub_B2C35C(&StringLiteral_15827/*"[{0}]"*/, v29);
    byte_4186687 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces;
  v31 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v31 = WarBoardData___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__156_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__156_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_WarBoardPieceData__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__156_0,
      v34,
      Method_WarBoardData___c__SetRequest_b__156_0__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_WarBoardPieceData___ctor__);
    v35 = WarBoardData___c_TypeInfo->static_fields;
    v35->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__156_0,
      (System_Int32_array **)_9__156_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_63;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v42 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0LL);
  if ( !request )
    goto LABEL_63;
  v46 = RequestBase__PackToMessagePack(request, v42, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v47 = CatAndMouseGame__CatGame5Bytes(v46, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v48 = System_Convert__ToBase64String(v47, 0LL);
  RequestBase__addField_31051928(request, (System_String_o *)StringLiteral_22469/*"svtInfo"*/, v48, 0LL);
  v49 = this->fields.serverData;
  if ( !v49 )
    goto LABEL_63;
  v50 = (Il2CppObject *)JsonManager__toJson(&v49->fields.masterInfo->obj, 0, 0, 0LL);
  v51 = RequestBase__PackToMessagePack(request, v50, 0LL);
  v52 = CatAndMouseGame__CatGame5Bytes(v51, 0LL);
  v53 = System_Convert__ToBase64String(v52, 0LL);
  RequestBase__addField_31051928(request, (System_String_o *)StringLiteral_20399/*"masterInfo"*/, v53, 0LL);
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  if ( !items )
    goto LABEL_63;
  if ( items[1].monitor )
  {
    v55 = WarBoardData___c_TypeInfo;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v55 = WarBoardData___c_TypeInfo;
    }
    v56 = v55->static_fields;
    _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v56->__9__156_1;
    v58 = (System_String_o *)StringLiteral_699/*","*/;
    v59 = (System_String_o *)StringLiteral_15827/*"[{0}]"*/;
    if ( !_9__156_1 )
    {
      if ( (BYTE3(v55->vtable._0_Equals.methodPtr) & 4) != 0 && !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v56 = WarBoardData___c_TypeInfo->static_fields;
      }
      v61 = (Il2CppObject *)v56->__9;
      _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_WarBoardItemData__string__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__156_1,
        v61,
        Method_WarBoardData___c__SetRequest_b__156_1__,
        (const MethodInfo_2713350 *)Method_System_Func_WarBoardItemData__string___ctor__);
      v62 = WarBoardData___c_TypeInfo->static_fields;
      v62->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v62->__9__156_1,
        (System_Int32_array **)_9__156_1,
        v63,
        v64,
        v65,
        v66,
        v67,
        v68);
    }
    v69 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v70 = WarBoardData___c_TypeInfo;
    v71 = (System_Collections_Generic_IEnumerable_TSource__o *)v69;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v70 = WarBoardData___c_TypeInfo;
    }
    v72 = v70->static_fields;
    _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v72->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( (BYTE3(v70->vtable._0_Equals.methodPtr) & 4) != 0 && !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70);
        v72 = WarBoardData___c_TypeInfo->static_fields;
      }
      v74 = (Il2CppObject *)v72->__9;
      _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_string__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__156_2,
        v74,
        Method_WarBoardData___c__SetRequest_b__156_2__,
        (const MethodInfo_2711C04 *)Method_System_Func_string__bool___ctor__);
      v75 = WarBoardData___c_TypeInfo->static_fields;
      v75->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v75->__9__156_2,
        (System_Int32_array **)_9__156_2,
        v76,
        v77,
        v78,
        v79,
        v80,
        v81);
    }
    v82 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v71,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_string___);
    v83 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v82,
                                   (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_string___);
    v84 = (Il2CppObject *)System_String__Join(v58, v83, 0LL);
    v60 = (Il2CppObject *)System_String__Format(v59, v84, 0LL);
  }
  else
  {
    v60 = (Il2CppObject *)StringLiteral_21168/*"null"*/;
  }
  v85 = RequestBase__PackToMessagePack(request, v60, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v86 = CatAndMouseGame__CatGame5Bytes(v85, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v87 = System_Convert__ToBase64String(v86, 0LL);
  RequestBase__addField_31051928(request, (System_String_o *)StringLiteral_19002/*"getItemInfo"*/, v87, 0LL);
  v88 = this->fields.serverData;
  if ( !v88 )
    goto LABEL_63;
  v89 = &v88->fields.wallInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v90 = (Il2CppObject *)JsonManager__toJson(v89, 0, 0, 0LL);
  v91 = RequestBase__PackToMessagePack(request, v90, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v92 = CatAndMouseGame__CatGame5Bytes(v91, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v93 = System_Convert__ToBase64String(v92, 0LL);
  RequestBase__addField_31051928(request, (System_String_o *)StringLiteral_23194/*"wallInfo"*/, v93, 0LL);
  v94 = this->fields.serverData;
  if ( !v94
    || (v95 = (Il2CppObject *)JsonManager__toJson(&v94->fields.squareIndexInfo->obj, 0, 0, 0LL),
        v96 = RequestBase__PackToMessagePack(request, v95, 0LL),
        v97 = CatAndMouseGame__CatGame5Bytes(v96, 0LL),
        v98 = System_Convert__ToBase64String(v97, 0LL),
        RequestBase__addField_31051928(request, (System_String_o *)StringLiteral_22242/*"squareIndexInfo"*/, v98, 0LL),
        (v99 = this->fields.serverData) == 0LL) )
  {
LABEL_63:
    sub_B2C434(v42, v43);
  }
  v100 = (Il2CppObject *)JsonManager__toJson(&v99->fields.bossBattleInfo->obj, 0, 0, 0LL);
  v101 = RequestBase__PackToMessagePack(request, v100, 0LL);
  v102 = CatAndMouseGame__CatGame5Bytes(v101, 0LL);
  v103 = System_Convert__ToBase64String(v102, 0LL);
  RequestBase__addField_31051928(request, (System_String_o *)StringLiteral_16887/*"bossBattleInfo"*/, v103, 0LL);
}


void __fastcall WarBoardData__SetUiDataFromLocalData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x5
  Il2CppObject *current; // x23
  __int64 klass_low; // x1
  WarBoardSquareData_o *Square; // x0
  __int64 v16; // x1
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v19; // w9
  WarBoardPieceData_o *Piece; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *v22; // x20
  _BOOL8 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  WarBoardControlUiDataComponent_c *v26; // x0
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_41866A5 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v5);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    sub_B2C35C(&WarBoardControlUiDataComponent_TypeInfo, v7);
    byte_41866A5 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  listUiData = this->fields.listUiData;
  if ( !listUiData )
    sub_B2C434(0LL, method);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v30,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiData,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v31 = v30;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v31,
           (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v9 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B2C434(v9, v10);
    klass_low = LODWORD(v31.fields.current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v31.fields.current[1].monitor;
      if ( !monitor )
        sub_B2C434(v9, klass_low);
      v19 = monitor[6];
      if ( !v19 )
      {
        v28 = sub_B2C460(v9);
        sub_B2C400(v28, 0LL);
      }
      if ( v19 == 1 )
      {
        v29 = sub_B2C460(v9);
        sub_B2C400(v29, 0LL);
      }
      if ( v19 <= 2 )
      {
        v27 = sub_B2C460(v9);
        sub_B2C400(v27, 0LL);
      }
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v12);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_B2C434(Piece, v21);
LABEL_17:
        v22 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 22);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v23 = UnityEngine_Object__op_Equality(v22, 0LL, 0LL);
        if ( !v23 )
        {
          if ( !v22 )
            sub_B2C434(v23, v24);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v22,
            (System_String_array *)current[2].klass,
            v25);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass_low, v11);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_B2C434(Square, v16);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  v26 = WarBoardControlUiDataComponent_TypeInfo;
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__ResumeUiDataAll((const MethodInfo *)v26);
}


void __fastcall WarBoardData__ShowConsumedPieceActionPointPopup(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict,
        const MethodInfo *method)
{
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
  __int64 v15; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v16; // x0
  __int64 v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Func_bool__o *v30; // x20
  UnityEngine_WaitUntil_o *v31; // x21
  __int64 v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Delegate_o *v39; // x22
  WarBoardTaskBase_TaskCallback_o *v40; // x23
  System_Int32_array **v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  WebViewManager_o *Instance; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v49; // x21
  __int64 v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x0
  __int64 v58; // x0
  WarBoardData_o *v59; // x0
  const MethodInfo *v60; // x1

  if ( (byte_4186685 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__,
      consumedPieceActionPointDict);
    sub_B2C35C(&Method_System_Func_bool___ctor__, v5);
    sub_B2C35C(&System_Func_bool__TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B2C35C(&WarBoardTaskBase_TaskCallback_TypeInfo, v8);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__, v9);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__, v10);
    sub_B2C35C(&WarBoardData___c__DisplayClass154_0_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v12);
    sub_B2C35C(&WarBoardCallbackTask_TypeInfo, v13);
    sub_B2C35C(&WarBoardTaskBase___TypeInfo, v14);
    byte_4186685 = 1;
  }
  v15 = sub_B2C42C(WarBoardData___c__DisplayClass154_0_TypeInfo);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_15;
  *(_QWORD *)(v15 + 24) = consumedPieceActionPointDict;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)consumedPieceActionPointDict,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)(v15 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  v16 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)(v15 + 24);
  if ( !v16 )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         v16,
         (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) >= 1 )
  {
    *(_BYTE *)(v15 + 16) = 0;
    v30 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v30,
      (Il2CppObject *)v15,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v31 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v31, v30, 0LL);
    v32 = sub_B2C42C(WarBoardCallbackTask_TypeInfo);
    WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v32, 0LL);
    *(_QWORD *)(v32 + 56) = v31;
    sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 56), (System_Int32_array **)v31, v33, v34, v35, v36, v37, v38);
    if ( !v32 )
      goto LABEL_15;
    v39 = *(System_Delegate_o **)(v32 + 32);
    v40 = (WarBoardTaskBase_TaskCallback_o *)sub_B2C42C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v40,
      (Il2CppObject *)v15,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
      0LL);
    v41 = (System_Int32_array **)System_Delegate__Combine(v39, (System_Delegate_o *)v40, 0LL);
    if ( !v41 || *v41 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v32 + 32) = v41;
      sub_B2C2F8((BattleServantConfConponent_o *)(v32 + 32), v41, v42, v43, v44, v45, v46, v47);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C374(WarBoardTaskBase___TypeInfo, 1LL);
      if ( v16 )
      {
        v49 = v16;
        v50 = sub_B2C41C(v32, v16->klass->_1.element_class);
        if ( !v50 )
        {
          v57 = sub_B2C454();
          sub_B2C400(v57, 0LL);
        }
        if ( !LODWORD(v49->fields.entries) )
        {
          v58 = sub_B2C460(v50);
          sub_B2C400(v58, 0LL);
        }
        *(_QWORD *)&v49->fields.count = v32;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&v49->fields.count,
          (System_Int32_array **)v32,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        if ( Instance )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v49, 0LL);
          return;
        }
      }
LABEL_15:
      sub_B2C434(v16, v17);
    }
    v59 = (WarBoardData_o *)sub_B2C728(v41);
    WarBoardData__CreateEventBossUIDataTask(v59, v60);
  }
}


System_String_o *__fastcall WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *serverData; // x19

  if ( (byte_4186686 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, method);
    sub_B2C35C(&string_TypeInfo, v3);
    byte_4186686 = 1;
  }
  serverData = (Il2CppObject *)this->fields.serverData;
  if ( !serverData )
    return string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(serverData, 0, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateBossInfo(
        WarBoardData_o *this,
        int32_t bossId,
        System_String_o *key,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  WarBoardData___c__DisplayClass171_0_o *v15; // x23
  System_Xml_Schema_XmlSchemaObject_o *v16; // x0
  __int64 v17; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v22; // x21
  int32_t v23; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418668E & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_B2C35C(&Method_System_Func_WarBoardBossBattleData__bool___ctor__, v10);
    sub_B2C35C(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v11);
    sub_B2C35C(&int_TypeInfo, v12);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__, v13);
    sub_B2C35C(&WarBoardData___c__DisplayClass171_0_TypeInfo, v14);
    byte_418668E = 1;
  }
  v15 = (WarBoardData___c__DisplayClass171_0_o *)sub_B2C42C(WarBoardData___c__DisplayClass171_0_TypeInfo);
  WarBoardData___c__DisplayClass171_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_9;
  v15->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardBossBattleData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v20,
                                                                     (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  v22 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v23 = value;
  v16 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  if ( !v22 )
LABEL_9:
    sub_B2C434(v16, v17);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v22,
    (System_Xml_XmlQualifiedName_o *)key,
    v16,
    (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v16; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__192_0; // x20
  Il2CppObject *v19; // x21
  struct WarBoardData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v27; // x0
  WarBoardData___c_c *v28; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x19
  struct WarBoardData___c_StaticFields *v30; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__192_1; // x20
  Il2CppObject *v32; // x21
  struct WarBoardData___c_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  WarBoardData___c_c *v41; // x8
  System_Collections_Generic_IEnumerable_T__o *v42; // x19
  struct WarBoardData___c_StaticFields *v43; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__192_2; // x20
  Il2CppObject *v45; // x21
  struct WarBoardData___c_StaticFields *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_41866A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_WarBoardPieceBaseComponent___ctor__, method);
    sub_B2C35C(&System_Action_WarBoardPieceBaseComponent__TypeInfo, v3);
    sub_B2C35C(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___, v6);
    sub_B2C35C(&Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__, v7);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__, v8);
    sub_B2C35C(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo, v9);
    sub_B2C35C(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo, v10);
    sub_B2C35C(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, v11);
    sub_B2C35C(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, v12);
    sub_B2C35C(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, v13);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v14);
    byte_41866A0 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v16 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v16 = WarBoardData___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B2C42C(System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__192_0,
      v19,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__,
      (const MethodInfo_2713350 *)Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__);
    v20 = WarBoardData___c_TypeInfo->static_fields;
    v20->__9__192_0 = (struct System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__o *)_9__192_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v20->__9__192_0,
      (System_Int32_array **)_9__192_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_1A96D40 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v28 = WarBoardData___c_TypeInfo;
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v28 = WarBoardData___c_TypeInfo;
  }
  v30 = v28->static_fields;
  _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v30->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v30 = WarBoardData___c_TypeInfo->static_fields;
    }
    v32 = (Il2CppObject *)v30->__9;
    _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardPieceBaseComponent__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__192_1,
      v32,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__,
      (const MethodInfo_2711C04 *)Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__);
    v33 = WarBoardData___c_TypeInfo->static_fields;
    v33->__9__192_1 = (struct System_Func_WarBoardPieceBaseComponent__bool__o *)_9__192_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v33->__9__192_1,
      (System_Int32_array **)_9__192_1,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39);
  }
  v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v29,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_1A9F3E4 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v41 = WarBoardData___c_TypeInfo;
  v42 = (System_Collections_Generic_IEnumerable_T__o *)v40;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v41 = WarBoardData___c_TypeInfo;
  }
  v43 = v41->static_fields;
  _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v43->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v41);
      v43 = WarBoardData___c_TypeInfo->static_fields;
    }
    v45 = (Il2CppObject *)v43->__9;
    _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B2C42C(System_Action_WarBoardPieceBaseComponent__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__192_2,
      v45,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__,
      (const MethodInfo_24BBAD8 *)Method_System_Action_WarBoardPieceBaseComponent___ctor__);
    v46 = WarBoardData___c_TypeInfo->static_fields;
    v46->__9__192_2 = (struct System_Action_WarBoardPieceBaseComponent__o *)_9__192_2;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v46->__9__192_2,
      (System_Int32_array **)_9__192_2,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v42,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_1727C50 *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void __fastcall WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
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
  __int64 v19; // x20
  System_Collections_Generic_List_long__o *v20; // x21
  const MethodInfo *v21; // x1
  void *EditableServantPieces; // x0
  __int64 v23; // x1
  int v24; // w8
  void *v25; // x22
  unsigned int v26; // w23
  __int64 v27; // x25
  __int64 v28; // x22
  __int64 v29; // x22
  System_Collections_Generic_IEnumerable_TSource__o *Entities_34331576; // x21
  WarBoardData___c_c *v31; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__143_0; // x22
  Il2CppObject *v34; // x23
  struct WarBoardData___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v48; // x22
  __int64 v49; // x0

  if ( (byte_418667D & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_UserServantEntity___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v5);
    sub_B2C35C(&Method_System_Func_UserServantEntity__int___ctor__, v6);
    sub_B2C35C(&Method_System_Func_UserServantEntity__bool___ctor__, v7);
    sub_B2C35C(&System_Func_UserServantEntity__bool__TypeInfo, v8);
    sub_B2C35C(&System_Func_UserServantEntity__int__TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v13);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    sub_B2C35C(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, v15);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__, v16);
    sub_B2C35C(&WarBoardData___c__DisplayClass143_0_TypeInfo, v17);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v18);
    byte_418667D = 1;
  }
  v19 = sub_B2C42C(WarBoardData___c__DisplayClass143_0_TypeInfo);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v19, 0LL);
  v20 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v20,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v21);
  if ( !EditableServantPieces )
    goto LABEL_28;
  v24 = *((_DWORD *)EditableServantPieces + 6);
  v25 = EditableServantPieces;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= v24 )
      {
        v49 = sub_B2C460(EditableServantPieces);
        sub_B2C400(v49, 0LL);
      }
      v27 = *((_QWORD *)v25 + (int)v26 + 4);
      if ( !v27 || !v20 )
        break;
      System_Collections_Generic_List_long___Add(
        v20,
        *(_QWORD *)(v27 + 224),
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      System_Collections_Generic_List_long___Add(
        v20,
        *(_QWORD *)(v27 + 232),
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        goto LABEL_10;
    }
LABEL_28:
    sub_B2C434(EditableServantPieces, v23);
  }
LABEL_10:
  v28 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
    sub_AC505C(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v29 = **(_QWORD **)(v28 + 192);
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AC505C(v29);
  EditableServantPieces = **(void ***)(v29 + 184);
  if ( !EditableServantPieces )
    goto LABEL_28;
  EditableServantPieces = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)EditableServantPieces,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_28;
  Entities_34331576 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__GetEntities_34331576(
                                                                             (UserServantMaster_o *)EditableServantPieces,
                                                                             v20,
                                                                             0LL);
  v31 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v31 = WarBoardData___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__143_0,
      v34,
      Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_UserServantEntity__int___ctor__);
    v35 = WarBoardData___c_TypeInfo->static_fields;
    v35->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v35->__9__143_0,
      (System_Int32_array **)_9__143_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  EditableServantPieces = (void *)System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                    Entities_34331576,
                                    (System_Func_TSource__int__o *)_9__143_0,
                                    (const MethodInfo_1A9A55C *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_28;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_28;
  EditableServantPieces = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)EditableServantPieces,
                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v19 )
    goto LABEL_28;
  *(_QWORD *)(v19 + 16) = EditableServantPieces;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v19 + 16),
    (System_Int32_array **)EditableServantPieces,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v48 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_UserServantEntity__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v48,
    (Il2CppObject *)v19,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    (const MethodInfo_2711C04 *)Method_System_Func_UserServantEntity__bool___ctor__);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                                       Entities_34331576,
                                                       (System_Func_TSource__bool__o *)v48,
                                                       (const MethodInfo_1A8D348 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateFromServerData(
        WarBoardData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        bool forceUpdate,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  WarBoardDataEntity_o **p_serverData; // x21
  WarBoardManager_TaskMultiList_o *v41; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *isPlayerGroup; // x0
  const MethodInfo *v44; // x1
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v47; // x22
  unsigned int v48; // w19
  bool v49; // w26
  WarBoardPieceData_o *v50; // x28
  WarBoardManager_TaskList_o *v51; // x20
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v53; // x22
  WarBoardEvalValueSquare_EvalValueSquare_o *v54; // x2
  Il2CppObject *current; // x25
  WarBoardManager_TaskList_o *v56; // x26
  __int64 v57; // x0
  __int64 v58; // x1
  Il2CppClass *v59; // x0
  __int64 v60; // x0
  __int64 v61; // x1
  char v62; // w8
  int monitor_high; // w20
  Il2CppClass *klass; // x0
  Il2CppClass *v65; // x0
  const MethodInfo *v66; // x2
  System_Collections_Generic_IEnumerable_T__o *v67; // x0
  WarBoardDataEntity_o *v68; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *EventBossUIDataTask; // x0
  WarBoardWaitNonBlockingTaskEnd_o *v70; // x20
  struct WarBoardItemData_array *items; // x19
  int v72; // w8
  unsigned int v73; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v75; // x24
  __int64 v76; // x20
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v84; // x21
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v86; // x23
  WarBoardData_SquareRangeSearch_o *v87; // x0
  WarBoardData_SquareRangeSearch_o *v88; // x8
  int32_t range; // w1
  __int64 v90; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v91; // [xsp+0h] [xbp-B0h]
  WarBoardData_o *v92; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v93; // [xsp+10h] [xbp-A0h]
  WarBoardManager_TaskMultiList_o *v94; // [xsp+18h] [xbp-98h]
  WarBoardDataEntity_o *v95; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v96; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v97; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4186682 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__, warBoardDataEntity);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__, v14);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo, v15);
    sub_B2C35C(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__, v18);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__,
      v19);
    sub_B2C35C(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v20);
    sub_B2C35C(&System_Func_WarBoardUserWallData__bool__TypeInfo, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v27);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v28);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v30);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v31);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v32);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo, v33);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v34);
    sub_B2C35C(&WarBoardManager_TaskList_TypeInfo, v35);
    sub_B2C35C(&WarBoardManager_TaskMultiList_TypeInfo, v36);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__, v37);
    sub_B2C35C(&WarBoardData___c__DisplayClass151_0_TypeInfo, v38);
    sub_B2C35C(&WarBoardWaitNonBlockingTaskEnd_TypeInfo, v39);
    byte_4186682 = 1;
  }
  memset(&v97, 0, sizeof(v97));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  v95 = warBoardDataEntity;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.serverData,
    (System_Int32_array **)warBoardDataEntity,
    (System_String_array **)forceUpdate,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v91 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardTaskBase__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v91,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v94 = (WarBoardManager_TaskMultiList_o *)sub_B2C42C(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v94, 0LL);
  v41 = (WarBoardManager_TaskMultiList_o *)sub_B2C42C(WarBoardManager_TaskMultiList_TypeInfo);
  WarBoardManager_TaskMultiList___ctor(v41, 0LL);
  v93 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v93,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v92 = this;
  if ( !pieces )
    goto LABEL_71;
  max_length = pieces->max_length;
  v47 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v93;
  if ( max_length >= 1 )
  {
    v48 = 0;
    v49 = forceUpdate;
    while ( v48 < max_length )
    {
      v50 = pieces->m_Items[v48];
      v51 = (WarBoardManager_TaskList_o *)sub_B2C42C(WarBoardManager_TaskList_TypeInfo);
      WarBoardManager_TaskList___ctor(v51, 0LL);
      if ( !v50 )
        goto LABEL_71;
      WarBoardPieceData__UpdateFromServerData(
        v50,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v42,
        v51,
        v49,
        0LL);
      if ( !v51 )
        goto LABEL_71;
      if ( v51->fields._size >= 1 )
      {
        if ( v50->fields._isDead_k__BackingField )
        {
          if ( !v41 )
            goto LABEL_71;
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v41;
        }
        else
        {
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v94;
          if ( !v94 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          isPlayerGroup,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v51,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardPieceData__get_isPlayerGroup(v50, 0LL);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardPieceData__get_isMaster(v50, 0LL);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v50->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v47 )
            goto LABEL_71;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  v47,
                  v50->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_2E649C0 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v50->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v53 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v53,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v54 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v53;
            v47 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v93;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v93,
              ConsumedRecoverDonotActCost_k__BackingField,
              v54,
              (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item((System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v47, v50->fields._ConsumedRecoverDonotActCost_k__BackingField, (const MethodInfo_2E64688 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_71;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            isPlayerGroup,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v50,
            (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      max_length = pieces->max_length;
      if ( (int)++v48 >= max_length )
        goto LABEL_25;
    }
LABEL_72:
    v90 = sub_B2C460(isPlayerGroup);
    sub_B2C400(v90, 0LL);
  }
LABEL_25:
  if ( !v42 )
    goto LABEL_71;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v96,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v42,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v97 = v96;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v97,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v97.fields.current;
    v56 = (WarBoardManager_TaskList_o *)sub_B2C42C(WarBoardManager_TaskList_TypeInfo);
    WarBoardManager_TaskList___ctor(v56, 0LL);
    if ( !current )
      sub_B2C434(v57, v58);
    if ( ((__int64)current[1].monitor & 0x80000000) != 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B2C434(0LL, v58);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0LL,
          v56,
          0xFFFFFFFFLL,
          0LL,
          1LL,
          *((_QWORD *)klass->_1.image + 102));
      }
      v65 = current[1].klass;
      if ( !v65 )
        sub_B2C434(0LL, v58);
      v60 = (*((__int64 (**)(void))v65->_1.image + 103))();
      v62 = 1;
      if ( !v56 )
LABEL_74:
        sub_B2C434(v60, v61);
    }
    else
    {
      v59 = current[1].klass;
      if ( !v59 )
        sub_B2C434(0LL, v58);
      v60 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v59->_1.image
             + 101))(
              v59,
              HIDWORD(current[1].monitor),
              0LL,
              v56,
              0xFFFFFFFFLL,
              0LL,
              1LL,
              *((_QWORD *)v59->_1.image + 102));
      v62 = 0;
      if ( !v56 )
        goto LABEL_74;
    }
    if ( v56->fields._size >= 1 )
    {
      if ( (v62 & 1) != 0 )
      {
        if ( !v41 )
          sub_B2C434(v60, v61);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v41,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      else
      {
        if ( !v94 )
          sub_B2C434(v60, v61);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v94,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v97,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v93 )
    goto LABEL_71;
  isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(v93, (const MethodInfo_2E64348 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v92,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v93,
      v66);
  if ( !v94 )
    goto LABEL_71;
  isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardManager_TaskMultiList__SortedFlatted(v94, 0LL);
  if ( !v91 )
    goto LABEL_71;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v91,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v41 )
    goto LABEL_71;
  v67 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v41, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v91,
    v67,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v68 = v95;
  if ( v91->fields._size >= 1 )
  {
    EventBossUIDataTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardData__CreateEventBossUIDataTask(
                                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                                   v44);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v91,
      EventBossUIDataTask,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v70 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_B2C42C(WarBoardWaitNonBlockingTaskEnd_TypeInfo);
    WarBoardWaitNonBlockingTaskEnd___ctor(v70, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v91,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v70,
      (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_71;
    WarBoardManager__InsertTask_18194508(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v91,
      0LL);
  }
  items = v92->fields.items;
  if ( !items )
    goto LABEL_71;
  v72 = items->max_length;
  if ( v72 >= 1 )
  {
    v73 = 0;
    while ( v73 < v72 )
    {
      isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)items->m_Items[v73];
      if ( !isPlayerGroup )
        goto LABEL_71;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *p_serverData, 0LL);
      v72 = items->max_length;
      if ( (int)++v73 >= v72 )
        goto LABEL_59;
    }
    goto LABEL_72;
  }
LABEL_59:
  walls = v92->fields.walls;
  if ( !walls )
LABEL_71:
    sub_B2C434(isPlayerGroup, v44);
  if ( (int)walls->max_length >= 1 )
  {
    v75 = 0LL;
    while ( 1 )
    {
      v76 = sub_B2C42C(WarBoardData___c__DisplayClass151_0_TypeInfo);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v76, 0LL);
      if ( v75 >= walls->max_length )
        goto LABEL_72;
      if ( !v76 )
        goto LABEL_71;
      v83 = (System_Int32_array **)walls->m_Items[v75];
      *(_QWORD *)(v76 + 16) = v83;
      v84 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v76 + 16);
      sub_B2C2F8((BattleServantConfConponent_o *)(v76 + 16), v83, v77, v78, v79, v80, v81, v82);
      if ( !v68 )
        goto LABEL_71;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v68->fields.wallInfo;
      v86 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_WarBoardUserWallData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v86,
        (Il2CppObject *)v76,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        (const MethodInfo_2711C04 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
      v87 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
              wallInfo,
              (System_Func_TSource__bool__o *)v86,
              (const MethodInfo_1A9113C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v87 )
      {
        v88 = v87;
        isPlayerGroup = *v84;
        if ( !*v84 )
          goto LABEL_71;
        range = v88->fields.range;
        if ( isPlayerGroup->fields._size > range )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, range, 0LL);
      }
      v68 = v95;
      if ( (__int64)++v75 >= (int)walls->max_length )
        return;
    }
  }
}


void __fastcall WarBoardData__UpdateLatestBattlePieceUniqueIndexes(
        WarBoardData_o *this,
        WarBoardData_BattleParticipantInfo_o *participantInfo,
        const MethodInfo *method)
{
  struct System_UInt32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( !participantInfo )
    sub_B2C434(this, 0LL);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateLatestPieceActionSquareIndexes(
        WarBoardData_o *this,
        int32_t fromSquareIndex,
        int32_t toSquareIndex,
        const MethodInfo *method)
{
  struct System_Int32_array *v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  il2cpp_array_size_t max_length; // w8
  __int64 v16; // x0

  if ( (byte_4186692 & 1) == 0 )
  {
    sub_B2C35C(&int___TypeInfo, *(_QWORD *)&fromSquareIndex);
    byte_4186692 = 1;
  }
  v7 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_B2C434(0LL, v8);
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = fromSquareIndex, max_length == 1) )
  {
    v16 = sub_B2C460(v7);
    sub_B2C400(v16, 0LL);
  }
  v7->m_Items[2] = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = v7;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.latestPieceActionSquareIndexes,
    (System_Int32_array **)v7,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateLinkedSquareList(
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
    WarBoardSquareData__UpdateLinkedSquareList(Square, squareIndex2, 0LL);
    WarBoardSquareData__UpdateLinkedSquareList(CondSquare, squareIndex1, 0LL);
  }
}


void __fastcall WarBoardData__UpdateSquareList(
        WarBoardData_o *this,
        WarBoardSquareData_o *square,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *squares; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  struct WarBoardSquareData_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v22; // x21
  System_Int32_array **v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_4186676 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, square);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___67326264, v7);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v8);
    byte_4186676 = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v10 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v10,
    squares,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___67326264);
  if ( !v10 )
    goto LABEL_6;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)square,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
  v13 = (struct WarBoardSquareData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                             (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = v13;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.squares,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (BattleServantConfConponent_o *)&this->fields.condSquares;
  v22 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardSquareData__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v22,
    condSquares,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___67326264);
  if ( !v22 )
LABEL_6:
    sub_B2C434(v11, v12);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v22,
    (WarBoardManager_TaskList_o *)square,
    (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v23 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v22,
                                 (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (BattleServantConfConponent_c *)v23;
  sub_B2C2F8(p_condSquares, v23, v24, v25, v26, v27, v28, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__UpdateUiData(
        WarBoardData_o *this,
        int32_t squareIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardUiData_o *UiData; // x0
  WarBoardManager_TaskList_o *v10; // x1
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v12; // x22

  if ( (byte_41866A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, *(_QWORD *)&squareIndex);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_B2C35C(&WarBoardUiData_TypeInfo, v8);
    byte_41866A3 = 1;
  }
  UiData = WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v10 = (WarBoardManager_TaskList_o *)UiData;
  if ( UiData )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys(UiData, setKeys, 0LL);
      return;
    }
    UiData = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UiData,
        v10,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B2C434(UiData, v10);
  }
  if ( max_length )
  {
    v12 = (WarBoardUiData_o *)sub_B2C42C(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_26815340(v12, squareIndex, setKeys, 0LL);
    UiData = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UiData,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall WarBoardData__UpdateUiData_22534228(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardUiData_o *UiData_22580048; // x0
  WarBoardManager_TaskList_o *v10; // x1
  il2cpp_array_size_t max_length; // w8
  WarBoardUiData_o *v12; // x22

  if ( (byte_41866A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, pieceIndex);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_B2C35C(&WarBoardUiData_TypeInfo, v8);
    byte_41866A4 = 1;
  }
  UiData_22580048 = WarBoardData__GetUiData_22580048(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v10 = (WarBoardManager_TaskList_o *)UiData_22580048;
  if ( UiData_22580048 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys(UiData_22580048, setKeys, 0LL);
      return;
    }
    UiData_22580048 = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData_22580048 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UiData_22580048,
        v10,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B2C434(UiData_22580048, v10);
  }
  if ( max_length )
  {
    v12 = (WarBoardUiData_o *)sub_B2C42C(WarBoardUiData_TypeInfo);
    WarBoardUiData___ctor_26815424(v12, pieceIndex, setKeys, 0LL);
    UiData_22580048 = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData_22580048 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UiData_22580048,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v12,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall WarBoardData__UpdateWinCondId(
        WarBoardData_o *this,
        int32_t overWriteWinCondId,
        const MethodInfo *method)
{
  this->fields.winCondId = overWriteWinCondId;
}


int32_t __fastcall WarBoardData__get_ContinueConsumeType(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._ContinueConsumeType_k__BackingField;
}


int32_t __fastcall WarBoardData__get_CurrentMemberCount(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentMemberCount_k__BackingField;
}


int32_t __fastcall WarBoardData__get_CurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentPartyCost_k__BackingField;
}


int32_t __fastcall WarBoardData__get_FormationLimitCost(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( stageEntity )
    return stageEntity->fields.formationCost;
  else
    return 0;
}


bool __fastcall WarBoardData__get_IsContinue(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._IsContinue_k__BackingField;
}


bool __fastcall WarBoardData__get_IsEmptyMember(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentMemberCount_k__BackingField < 1;
}


bool __fastcall WarBoardData__get_IsNextTurn(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._IsNextTurn_k__BackingField;
}


bool __fastcall WarBoardData__get_IsPartyCostOver(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x9

  stageEntity = this->fields.stageEntity;
  if ( stageEntity )
    LODWORD(stageEntity) = stageEntity->fields.formationCost;
  return this->fields._CurrentPartyCost_k__BackingField > (int)stageEntity;
}


System_Collections_Generic_List_int__o *__fastcall WarBoardData__get_MasterExistsForce(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields.masterExistsForce;
}


int64_t __fastcall WarBoardData__get_PlayerMasterUserEquipId(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct WarBoardPieceData_array *pieces; // x19
  WarBoardData___c_c *v8; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__62_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardData___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int64_t result; // x0

  if ( (byte_418664F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Find_WarBoardPieceData___, method);
    sub_B2C35C(&Method_System_Predicate_WarBoardPieceData___ctor__, v3);
    sub_B2C35C(&System_Predicate_WarBoardPieceData__TypeInfo, v4);
    sub_B2C35C(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, v5);
    sub_B2C35C(&WarBoardData___c_TypeInfo, v6);
    byte_418664F = 1;
  }
  pieces = this->fields.pieces;
  v8 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v8 = WarBoardData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_WarBoardPieceData__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__62_0,
      v11,
      Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__,
      (const MethodInfo_2952BE4 *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v12 = WarBoardData___c_TypeInfo->static_fields;
    v12->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->__9__62_0,
      (System_Int32_array **)_9__62_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  result = (int64_t)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_1FFC1B4 *)Method_System_Array_Find_WarBoardPieceData___);
  if ( result )
    return *(_QWORD *)(result + 240);
  return result;
}


int32_t __fastcall WarBoardData__get_TurnCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardDataEntity_o *serverData; // x8

  serverData = this->fields.serverData;
  if ( serverData )
    return serverData->fields.turn;
  else
    return 0;
}


System_Collections_Generic_Dictionary_string__object__o *__fastcall WarBoardData__get_bgAnimationInfo(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  return this->fields._bgAnimationInfo_k__BackingField;
}


int32_t __fastcall WarBoardData__get_id(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_B2C434(this, method);
  return stageEntity->fields.id;
}


int32_t __fastcall WarBoardData__get_maxForceId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._maxForceId_k__BackingField;
}


int32_t __fastcall WarBoardData__get_maxGroupId(WarBoardData_o *this, const MethodInfo *method)
{
  return this->fields._maxGroupId_k__BackingField;
}


void __fastcall WarBoardData__set_ContinueConsumeType(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ContinueConsumeType_k__BackingField = value;
}


void __fastcall WarBoardData__set_CurrentMemberCount(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentMemberCount_k__BackingField = value;
}


void __fastcall WarBoardData__set_CurrentPartyCost(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._CurrentPartyCost_k__BackingField = value;
}


void __fastcall WarBoardData__set_IsContinue(WarBoardData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsContinue_k__BackingField = value;
}


void __fastcall WarBoardData__set_IsNextTurn(WarBoardData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsNextTurn_k__BackingField = value;
}


void __fastcall WarBoardData__set_bgAnimationInfo(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_string__object__o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._bgAnimationInfo_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardData__set_maxForceId(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._maxForceId_k__BackingField = value;
}


void __fastcall WarBoardData__set_maxGroupId(WarBoardData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._maxGroupId_k__BackingField = value;
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v7; // x0
  const MethodInfo *v8; // x3
  struct WarBoardPieceData_array *v9; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(v7, attackPieceData, targetPieceData, v8);
  this->fields._Participants_k__BackingField = v9;
  sub_B2C2F8(&this->fields, v9);
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor_20853524(
        WarBoardData_BattleParticipantInfo_o *this,
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *v11; // x21
  WebViewManager_o *Instance; // x0
  __int64 v13; // x1
  struct WarBoardData_o *v14; // x1
  System_Func_uint__WarBoardPieceData__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  struct WarBoardPieceData_array *v17; // x0

  if ( (byte_418573B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___, uniqueIndexArray);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v5);
    sub_B2C35C(&Method_System_Func_uint__WarBoardPieceData___ctor__, v6);
    sub_B2C35C(&System_Func_uint__WarBoardPieceData__TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B2C35C(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__, v9);
    sub_B2C35C(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v10);
    byte_418573B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *)sub_B2C42C(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo);
  WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(v11, 0LL);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( (int)uniqueIndexArray->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v11 )
    {
      v14 = *(struct WarBoardData_o **)&Instance[4].fields.m_CachedPtr;
      v11->fields.warBoardData = v14;
      sub_B2C2F8(&v11->fields, v14);
      v15 = (System_Func_uint__WarBoardPieceData__o *)sub_B2C42C(System_Func_uint__WarBoardPieceData__TypeInfo);
      System_Func_uint__WarBoardPieceData____ctor(
        v15,
        (Il2CppObject *)v11,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        (const MethodInfo_271938C *)Method_System_Func_uint__WarBoardPieceData___ctor__);
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v15,
                                                                   (const MethodInfo_1A97A9C *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v17 = (struct WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                v16,
                                                (const MethodInfo_1A9AFC8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = v17;
      sub_B2C2F8(&this->fields, v17);
      return;
    }
LABEL_9:
    sub_B2C434(Instance, v13);
  }
  this->fields._Invalid_k__BackingField = 1;
}


WarBoardPieceData_array *__fastcall WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  WarBoardData_o *Instance; // x0
  __int64 v13; // x1
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardData_o *v15; // x20
  unsigned __int64 v16; // x23
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // x24
  WarBoardManager_TaskList_o *v18; // x21
  __int64 v20; // x0

  if ( (byte_418573D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, attackPieceData);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_418573D = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WarBoardPieceData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v11
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)attackPieceData,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)targetPieceData,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        (Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || !targetPieceData
    || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL
    || (Instance = (WarBoardData_o *)WarBoardData__GetPicesForRangeIsAlive(
                                       Instance,
                                       targetPieceData->fields._nowSquareIndex_k__BackingField,
                                       1,
                                       1,
                                       0LL)) == 0LL )
  {
LABEL_19:
    sub_B2C434(Instance, v13);
  }
  stageNpcMaster = Instance->fields.stageNpcMaster;
  v15 = Instance;
  if ( (int)stageNpcMaster >= 1 )
  {
    v16 = 0LL;
    p_npcEntityDict = &Instance->fields.npcEntityDict;
    do
    {
      if ( v16 >= (unsigned int)stageNpcMaster )
      {
        v20 = sub_B2C460(Instance);
        sub_B2C400(v20, 0LL);
      }
      v18 = (WarBoardManager_TaskList_o *)p_npcEntityDict[v16];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                     (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v11,
                                     v18,
                                     (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v18 )
          goto LABEL_19;
        Instance = (WarBoardData_o *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v18, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (WarBoardData_o *)WarBoardPieceData__HasAvailableWarBoardNotAttackedBuff(
                                         (WarBoardPieceData_o *)v18,
                                         0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      LODWORD(stageNpcMaster) = v15->fields.stageNpcMaster;
      ++v16;
    }
    while ( (__int64)v16 < (int)stageNpcMaster );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  WarBoardData_BattleParticipantInfo_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_418573E & 1) == 0 )
  {
    sub_B2C35C(&WarBoardData_BattleParticipantInfo_TypeInfo, method);
    byte_418573E = 1;
  }
  v3 = (WarBoardData_BattleParticipantInfo_o *)sub_B2C42C(WarBoardData_BattleParticipantInfo_TypeInfo);
  WarBoardData_BattleParticipantInfo___ctor_20853524(v3, uniqueIndexArray, v4);
  return v3;
}


System_UInt32_array *__fastcall WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  WarBoardData_BattleParticipantInfo___c_c *v9; // x0
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardStageNpcEntity__uint__o *_9__14_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x0

  if ( (byte_418573C & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_uint___, v3);
    sub_B2C35C(&Method_System_Func_WarBoardPieceData__uint___ctor__, v4);
    sub_B2C35C(&System_Func_WarBoardPieceData__uint__TypeInfo, v5);
    sub_B2C35C(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__, v6);
    sub_B2C35C(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v7);
    byte_418573C = 1;
  }
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  v9 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  if ( (BYTE3(WarBoardData_BattleParticipantInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
    v9 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B2C42C(System_Func_WarBoardPieceData__uint__TypeInfo);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__14_0,
      v12,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      (const MethodInfo_27146C4 *)Method_System_Func_WarBoardPieceData__uint___ctor__);
    v13 = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    v13->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_B2C2F8(&v13->__9__14_0, _9__14_0);
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardPieceData__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_1A97298 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v14,
           (const MethodInfo_1A9B0E0 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8
  __int64 v4; // x0

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_B2C434(this, method);
  if ( !Participants_k__BackingField->max_length )
  {
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8
  __int64 v4; // x0

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_B2C434(this, method);
  if ( Participants_k__BackingField->max_length <= 1 )
  {
    v4 = sub_B2C460(this);
    sub_B2C400(v4, 0LL);
  }
  return Participants_k__BackingField->m_Items[1];
}


bool __fastcall WarBoardData_BattleParticipantInfo__get_Invalid(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Invalid_k__BackingField;
}


WarBoardPieceData_array *__fastcall WarBoardData_BattleParticipantInfo__get_Participants(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._Participants_k__BackingField;
}


void __fastcall WarBoardData_BattleParticipantInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x0

  if ( (byte_41855FF & 1) == 0 )
  {
    sub_B2C35C(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v1);
    byte_41855FF = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardData_BattleParticipantInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall WarBoardData_BattleParticipantInfo___c___ctor(
        WarBoardData_BattleParticipantInfo___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


uint32_t __fastcall WarBoardData_BattleParticipantInfo___c___ToUniqueIndexArray_b__14_0(
        WarBoardData_BattleParticipantInfo___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._uniqueIndex_k__BackingField;
}


void __fastcall WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo___c__DisplayClass13_0____ctor_b__0(
        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *this,
        uint32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_B2C434(0LL, x);
  return WarBoardData__GetPiece_22553560(warBoardData, x, 0, 0LL);
}


void __fastcall WarBoardData_SquareRangeSearch___ctor(
        WarBoardData_SquareRangeSearch_o *this,
        int32_t position,
        int32_t range,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareIndex = position;
  this->fields.range = range;
}


void __fastcall WarBoardData_WarBoardDeadBreakList___ctor(
        WarBoardData_WarBoardDeadBreakList_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor(
        WarBoardData_WarBoardLocalSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.questId = 0LL;
  this->fields.stageId = 0;
  this->fields.pieceSaves = 0LL;
  sub_B2C2F8(&this->fields.pieceSaves, 0LL);
  this->fields.itemSaves = 0LL;
  sub_B2C2F8(&this->fields.itemSaves, 0LL);
  this->fields.treasureSaves = 0LL;
  sub_B2C2F8(&this->fields.treasureSaves, 0LL);
  this->fields.wallSaves = 0LL;
  sub_B2C2F8(&this->fields.wallSaves, 0LL);
  this->fields.squareSaves = 0LL;
  sub_B2C2F8(&this->fields.squareSaves, 0LL);
  this->fields.cameraPos = UnityEngine_Vector2__get_zero(0LL);
  this->fields.cameraSize = 0.0;
  this->fields.onBoardSkillUpdate = 0;
  *(_QWORD *)&this->fields.turn = 0xFFFFFFFF00000000LL;
  this->fields.turnGroupId = -1;
  this->fields.eventSaves = 0LL;
  this->fields.isPlayedHalfDeadMessage = 0;
  *(_QWORD *)&this->fields.randLogicCount = 0LL;
  sub_B2C2F8(&this->fields.eventSaves, 0LL);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0LL;
  sub_B2C2F8(&this->fields.latestBattlePieceUniqueIndexes, 0LL);
  this->fields.prevCondSaves = 0LL;
  sub_B2C2F8(&this->fields.prevCondSaves, 0LL);
  this->fields.reinforcementsSaves = 0LL;
  sub_B2C2F8(&this->fields.reinforcementsSaves, 0LL);
  this->fields.playedReinforcements = 0LL;
  sub_B2C2F8(&this->fields.playedReinforcements, 0LL);
  this->fields.uiDataSaves = 0LL;
  sub_B2C2F8(&this->fields.uiDataSaves, 0LL);
  this->fields.bgAnimationInfo = 0LL;
  sub_B2C2F8(&this->fields.bgAnimationInfo, 0LL);
  this->fields.squareIndexInfo = 0LL;
  sub_B2C2F8(&this->fields.squareIndexInfo, 0LL);
  this->fields.bossBattleInfo = 0LL;
  sub_B2C2F8(&this->fields.bossBattleInfo, 0LL);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor_20854684(
        WarBoardData_WarBoardLocalSaveData_o *this,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
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
  __int64 GutsCount; // x0
  __int64 v38; // x1
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardDataEntity_o *v40; // x8
  struct WarBoardDataEntity_o *v41; // x8
  struct WarBoardDataEntity_o *v42; // x8
  struct WarBoardDataEntity_o *v43; // x8
  struct WarBoardDataEntity_o *v44; // x8
  struct WarBoardPieceData_array *pieces; // x8
  __int64 v46; // x22
  struct WarBoardPieceData_SaveData_array *v47; // x0
  unsigned __int64 v48; // x24
  signed __int64 v49; // x25
  __int64 v50; // x26
  struct WarBoardPieceData_array *v51; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x20
  WarBoardPieceData_o *v53; // x23
  WarBoardPieceData_SaveData_o *v54; // x22
  struct WarBoardItemData_array *items; // x8
  __int64 v56; // x22
  struct WarBoardItemData_SaveData_array *v57; // x0
  unsigned __int64 v58; // x24
  signed __int64 v59; // x25
  __int64 v60; // x26
  struct WarBoardItemData_array *v61; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x20
  WarBoardItemData_o *v63; // x23
  WarBoardItemData_SaveData_o *v64; // x22
  const MethodInfo *v65; // x2
  struct WarBoardTreasureData_array *treasures; // x8
  __int64 v67; // x22
  struct WarBoardTreasureData_SaveData_array *v68; // x0
  unsigned __int64 v69; // x24
  signed __int64 v70; // x25
  __int64 v71; // x26
  struct WarBoardTreasureData_array *v72; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  WarBoardTreasureData_o *v74; // x23
  WarBoardTreasureData_SaveData_o *v75; // x22
  struct WarBoardWallData_array *walls; // x8
  __int64 v77; // x22
  struct WarBoardWallData_SaveData_array *v78; // x0
  unsigned __int64 v79; // x24
  signed __int64 v80; // x25
  __int64 v81; // x26
  struct WarBoardWallData_array *v82; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x20
  WarBoardWallData_o *v84; // x23
  WarBoardWallData_SaveData_o *v85; // x22
  struct WarBoardSquareData_array *squares; // x8
  __int64 v87; // x22
  struct WarBoardSquareData_SaveData_array *v88; // x0
  unsigned __int64 v89; // x24
  signed __int64 v90; // x25
  __int64 v91; // x26
  struct WarBoardSquareData_array *v92; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  WarBoardSquareData_o *v94; // x23
  WarBoardSquareData_SaveData_o *v95; // x22
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  int size; // w22
  struct WarBoardEventData_SaveData_array *v98; // x0
  struct WarBoardEventData_SaveData_array **p_eventSaves; // x21
  __int64 v100; // x24
  __int64 v101; // x27
  __int64 v102; // x25
  struct System_Collections_Generic_List_WarBoardEventData__o *v103; // x22
  unsigned int *v104; // x28
  WarBoardEventData_o *v105; // x23
  WarBoardEventData_SaveData_o *v106; // x22
  const MethodInfo *v107; // x2
  __int64 v108; // x8
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  int v112; // w22
  __int64 v113; // x0
  __int64 v114; // x24
  __int64 v115; // x27
  __int64 v116; // x25
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *v117; // x22
  unsigned int *prevCondSaves; // x28
  WarBoardPrevCondData_o *v119; // x23
  WarBoardPrevCondData_SaveData_o *v120; // x22
  __int64 v121; // x8
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  int v123; // w22
  __int64 v124; // x0
  __int64 v125; // x24
  __int64 v126; // x27
  __int64 v127; // x25
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v128; // x22
  unsigned int *reinforcementsSaves; // x28
  HoldReinforcementsData_o *v130; // x23
  HoldReinforcementsData_SaveData_o *v131; // x22
  __int64 v132; // x8
  System_Int32_array *v133; // x0
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  int v135; // w22
  __int64 v136; // x0
  __int64 v137; // x24
  __int64 v138; // x27
  __int64 v139; // x25
  struct System_Collections_Generic_List_WarBoardUiData__o *v140; // x22
  unsigned int *uiDataSaves; // x28
  WarBoardUiData_o *v142; // x23
  WarBoardUiData_SaveData_o *v143; // x22
  __int64 v144; // x8
  struct WarBoardDataEntity_o *v145; // x8
  int32_t v146; // w22
  __int64 v147; // x0
  unsigned __int64 v148; // x24
  signed __int64 v149; // x25
  __int64 v150; // x26
  struct WarBoardDataEntity_o *v151; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  unsigned int *v153; // x20
  WarBoardSquareIndexData_o *v154; // x23
  WarBoardSquareIndexData_SaveData_o *v155; // x22
  struct WarBoardDataEntity_o *v156; // x8
  int32_t v157; // w22
  __int64 v158; // x0
  unsigned __int64 v159; // x24
  signed __int64 v160; // x25
  __int64 v161; // x26
  struct WarBoardDataEntity_o *v162; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  unsigned int *v164; // x20
  WarBoardBossBattleData_o *v165; // x23
  WarBoardBossBattleData_SaveData_o *v166; // x22
  const MethodInfo *v167; // x2
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v169; // x0
  __int64 v170; // x0
  WarBoardData_WarBoardLocalSaveData_o *v171; // [xsp+8h] [xbp-58h]

  if ( (byte_418573F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, warBoardData);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__, v14);
    sub_B2C35C(&WarBoardUiData_SaveData___TypeInfo, v15);
    sub_B2C35C(&WarBoardSquareData_SaveData___TypeInfo, v16);
    sub_B2C35C(&WarBoardTreasureData_SaveData___TypeInfo, v17);
    sub_B2C35C(&WarBoardSquareIndexData_SaveData___TypeInfo, v18);
    sub_B2C35C(&HoldReinforcementsData_SaveData___TypeInfo, v19);
    sub_B2C35C(&WarBoardItemData_SaveData___TypeInfo, v20);
    sub_B2C35C(&WarBoardBossBattleData_SaveData___TypeInfo, v21);
    sub_B2C35C(&WarBoardEventData_SaveData___TypeInfo, v22);
    sub_B2C35C(&WarBoardPrevCondData_SaveData___TypeInfo, v23);
    sub_B2C35C(&WarBoardPieceData_SaveData___TypeInfo, v24);
    sub_B2C35C(&WarBoardWallData_SaveData___TypeInfo, v25);
    sub_B2C35C(&WarBoardItemData_SaveData_TypeInfo, v26);
    sub_B2C35C(&WarBoardPieceData_SaveData_TypeInfo, v27);
    sub_B2C35C(&WarBoardWallData_SaveData_TypeInfo, v28);
    sub_B2C35C(&WarBoardUiData_SaveData_TypeInfo, v29);
    sub_B2C35C(&WarBoardTreasureData_SaveData_TypeInfo, v30);
    sub_B2C35C(&WarBoardEventData_SaveData_TypeInfo, v31);
    sub_B2C35C(&WarBoardSquareData_SaveData_TypeInfo, v32);
    sub_B2C35C(&WarBoardSquareIndexData_SaveData_TypeInfo, v33);
    sub_B2C35C(&WarBoardPrevCondData_SaveData_TypeInfo, v34);
    sub_B2C35C(&HoldReinforcementsData_SaveData_TypeInfo, v35);
    sub_B2C35C(&WarBoardBossBattleData_SaveData_TypeInfo, v36);
    byte_418573F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !warBoardData )
    goto LABEL_128;
  serverData = warBoardData->fields.serverData;
  if ( !serverData )
    goto LABEL_128;
  this->fields.questId = serverData->fields.questId;
  v40 = warBoardData->fields.serverData;
  if ( !v40 )
    goto LABEL_128;
  this->fields.questPhase = v40->fields.questPhase;
  v41 = warBoardData->fields.serverData;
  if ( !v41 )
    goto LABEL_128;
  this->fields.stageId = v41->fields.stageId;
  v42 = warBoardData->fields.serverData;
  if ( !v42 )
    goto LABEL_128;
  this->fields.turn = v42->fields.turn;
  v43 = warBoardData->fields.serverData;
  if ( !v43 )
    goto LABEL_128;
  this->fields.turnForceId = v43->fields.turnForceId;
  v44 = warBoardData->fields.serverData;
  if ( !v44 )
    goto LABEL_128;
  this->fields.turnGroupId = v44->fields.turnGroupId;
  pieces = warBoardData->fields.pieces;
  if ( !pieces )
    goto LABEL_128;
  v46 = *(_QWORD *)&pieces->max_length;
  v47 = (struct WarBoardPieceData_SaveData_array *)sub_B2C374(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v46);
  this->fields.pieceSaves = v47;
  sub_B2C2F8(&this->fields.pieceSaves, v47);
  if ( (int)v46 >= 1 )
  {
    v48 = 0LL;
    v49 = (int)v46;
    v50 = 32LL;
    while ( 1 )
    {
      v51 = warBoardData->fields.pieces;
      if ( !v51 )
        break;
      if ( v48 >= v51->max_length )
        goto LABEL_129;
      pieceSaves = this->fields.pieceSaves;
      v53 = *(WarBoardPieceData_o **)((char *)&v51->obj.klass + v50);
      v54 = (WarBoardPieceData_SaveData_o *)sub_B2C42C(WarBoardPieceData_SaveData_TypeInfo);
      WarBoardPieceData_SaveData___ctor_22648500(v54, v53, 0LL);
      if ( !pieceSaves )
        break;
      if ( v54 )
      {
        GutsCount = sub_B2C41C(v54, pieceSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
        {
LABEL_130:
          v170 = sub_B2C454();
          sub_B2C400(v170, 0LL);
        }
      }
      if ( v48 >= pieceSaves->max_length )
      {
LABEL_129:
        v169 = sub_B2C460(GutsCount);
        sub_B2C400(v169, 0LL);
      }
      *(Il2CppClass **)((char *)&pieceSaves->obj.klass + v50) = (Il2CppClass *)v54;
      sub_B2C2F8((char *)pieceSaves + v50, v54);
      ++v48;
      v50 += 8LL;
      if ( (__int64)v48 >= v49 )
        goto LABEL_20;
    }
LABEL_128:
    sub_B2C434(GutsCount, v38);
  }
LABEL_20:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_128;
  v56 = *(_QWORD *)&items->max_length;
  v57 = (struct WarBoardItemData_SaveData_array *)sub_B2C374(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v56);
  this->fields.itemSaves = v57;
  sub_B2C2F8(&this->fields.itemSaves, v57);
  if ( (int)v56 >= 1 )
  {
    v58 = 0LL;
    v59 = (int)v56;
    v60 = 32LL;
    do
    {
      v61 = warBoardData->fields.items;
      if ( !v61 )
        goto LABEL_128;
      if ( v58 >= v61->max_length )
        goto LABEL_129;
      itemSaves = this->fields.itemSaves;
      v63 = *(WarBoardItemData_o **)((char *)&v61->obj.klass + v60);
      v64 = (WarBoardItemData_SaveData_o *)sub_B2C42C(WarBoardItemData_SaveData_TypeInfo);
      WarBoardItemData_SaveData___ctor_20857852(v64, v63, v65);
      if ( !itemSaves )
        goto LABEL_128;
      if ( v64 )
      {
        GutsCount = sub_B2C41C(v64, itemSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v58 >= itemSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&itemSaves->obj.klass + v60) = (Il2CppClass *)v64;
      sub_B2C2F8((char *)itemSaves + v60, v64);
      ++v58;
      v60 += 8LL;
    }
    while ( (__int64)v58 < v59 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_128;
  v67 = *(_QWORD *)&treasures->max_length;
  v68 = (struct WarBoardTreasureData_SaveData_array *)sub_B2C374(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v67);
  this->fields.treasureSaves = v68;
  sub_B2C2F8(&this->fields.treasureSaves, v68);
  if ( (int)v67 >= 1 )
  {
    v69 = 0LL;
    v70 = (int)v67;
    v71 = 32LL;
    do
    {
      v72 = warBoardData->fields.treasures;
      if ( !v72 )
        goto LABEL_128;
      if ( v69 >= v72->max_length )
        goto LABEL_129;
      treasureSaves = this->fields.treasureSaves;
      v74 = *(WarBoardTreasureData_o **)((char *)&v72->obj.klass + v71);
      v75 = (WarBoardTreasureData_SaveData_o *)sub_B2C42C(WarBoardTreasureData_SaveData_TypeInfo);
      WarBoardTreasureData_SaveData___ctor_22661452(v75, v74, 0LL);
      if ( !treasureSaves )
        goto LABEL_128;
      if ( v75 )
      {
        GutsCount = sub_B2C41C(v75, treasureSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v69 >= treasureSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&treasureSaves->obj.klass + v71) = (Il2CppClass *)v75;
      sub_B2C2F8((char *)treasureSaves + v71, v75);
      ++v69;
      v71 += 8LL;
    }
    while ( (__int64)v69 < v70 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_128;
  v77 = *(_QWORD *)&walls->max_length;
  v78 = (struct WarBoardWallData_SaveData_array *)sub_B2C374(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v77);
  this->fields.wallSaves = v78;
  sub_B2C2F8(&this->fields.wallSaves, v78);
  if ( (int)v77 >= 1 )
  {
    v79 = 0LL;
    v80 = (int)v77;
    v81 = 32LL;
    do
    {
      v82 = warBoardData->fields.walls;
      if ( !v82 )
        goto LABEL_128;
      if ( v79 >= v82->max_length )
        goto LABEL_129;
      wallSaves = this->fields.wallSaves;
      v84 = *(WarBoardWallData_o **)((char *)&v82->obj.klass + v81);
      v85 = (WarBoardWallData_SaveData_o *)sub_B2C42C(WarBoardWallData_SaveData_TypeInfo);
      WarBoardWallData_SaveData___ctor_20630872(v85, v84, 0LL);
      if ( !wallSaves )
        goto LABEL_128;
      if ( v85 )
      {
        GutsCount = sub_B2C41C(v85, wallSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v79 >= wallSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&wallSaves->obj.klass + v81) = (Il2CppClass *)v85;
      sub_B2C2F8((char *)wallSaves + v81, v85);
      ++v79;
      v81 += 8LL;
    }
    while ( (__int64)v79 < v80 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_128;
  v87 = *(_QWORD *)&squares->max_length;
  v88 = (struct WarBoardSquareData_SaveData_array *)sub_B2C374(
                                                      WarBoardSquareData_SaveData___TypeInfo,
                                                      (unsigned int)v87);
  this->fields.squareSaves = v88;
  sub_B2C2F8(&this->fields.squareSaves, v88);
  if ( (int)v87 >= 1 )
  {
    v89 = 0LL;
    v90 = (int)v87;
    v91 = 32LL;
    do
    {
      v92 = warBoardData->fields.squares;
      if ( !v92 )
        goto LABEL_128;
      if ( v89 >= v92->max_length )
        goto LABEL_129;
      squareSaves = this->fields.squareSaves;
      v94 = *(WarBoardSquareData_o **)((char *)&v92->obj.klass + v91);
      v95 = (WarBoardSquareData_SaveData_o *)sub_B2C42C(WarBoardSquareData_SaveData_TypeInfo);
      WarBoardSquareData_SaveData___ctor_22656520(v95, v94, 0LL);
      if ( !squareSaves )
        goto LABEL_128;
      if ( v95 )
      {
        GutsCount = sub_B2C41C(v95, squareSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v89 >= squareSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&squareSaves->obj.klass + v91) = (Il2CppClass *)v95;
      sub_B2C2F8((char *)squareSaves + v91, v95);
      ++v89;
      v91 += 8LL;
    }
    while ( (__int64)v89 < v90 );
  }
  this->fields.cameraPos = UnityEngine_Vector2__get_zero(0LL);
  *(_QWORD *)&this->fields.cameraSize = 3212836864LL;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.randLogicCount = BattleRandom__GetLogicCount(0LL);
  GutsCount = BattleRandom__GetGutsCount(0LL);
  this->fields.randGutsCount = GutsCount;
  this->fields.isPlayedHalfDeadMessage = warBoardData->fields.isPlayedHalfDeadMessage;
  listEvent = warBoardData->fields.listEvent;
  if ( !listEvent )
    goto LABEL_128;
  size = listEvent->fields._size;
  v98 = (struct WarBoardEventData_SaveData_array *)sub_B2C374(WarBoardEventData_SaveData___TypeInfo, (unsigned int)size);
  this->fields.eventSaves = v98;
  p_eventSaves = &this->fields.eventSaves;
  v171 = this;
  sub_B2C2F8(&this->fields.eventSaves, v98);
  if ( size >= 1 )
  {
    v100 = size;
    v101 = 4LL;
    v102 = 8LL;
    do
    {
      v103 = warBoardData->fields.listEvent;
      if ( !v103 )
        goto LABEL_128;
      v104 = (unsigned int *)*p_eventSaves;
      if ( v101 - 4 >= (unsigned __int64)(unsigned int)v103->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v105 = (WarBoardEventData_o *)*((_QWORD *)&v103->fields._items->obj.klass + v101);
      v106 = (WarBoardEventData_SaveData_o *)sub_B2C42C(WarBoardEventData_SaveData_TypeInfo);
      WarBoardEventData_SaveData___ctor_20857948(v106, v105, v107);
      if ( !v104 )
        goto LABEL_128;
      if ( v106 )
      {
        GutsCount = sub_B2C41C(v106, *(_QWORD *)(*(_QWORD *)v104 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v101 - 4 >= (unsigned __int64)v104[6] )
        goto LABEL_129;
      *(_QWORD *)&v104[2 * v101] = v106;
      sub_B2C2F8(&v104[v102], v106);
      v108 = v101 - 3;
      ++v101;
      v102 += 2LL;
    }
    while ( v108 < v100 );
  }
  v171->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  v171->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_B2C2F8(&v171->fields.latestPieceActionSquareIndexes, latestPieceActionSquareIndexes);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  v171->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_B2C2F8(&v171->fields.latestBattlePieceUniqueIndexes, latestBattlePieceUniqueIndexes);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_128;
  v112 = listPrevCond->fields._size;
  v113 = sub_B2C374(WarBoardPrevCondData_SaveData___TypeInfo, (unsigned int)v112);
  v171->fields.prevCondSaves = (struct WarBoardPrevCondData_SaveData_array *)v113;
  sub_B2C2F8(&v171->fields.prevCondSaves, v113);
  if ( v112 >= 1 )
  {
    v114 = v112;
    v115 = 4LL;
    v116 = 8LL;
    do
    {
      v117 = warBoardData->fields.listPrevCond;
      if ( !v117 )
        goto LABEL_128;
      prevCondSaves = (unsigned int *)v171->fields.prevCondSaves;
      if ( v115 - 4 >= (unsigned __int64)(unsigned int)v117->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v119 = (WarBoardPrevCondData_o *)*((_QWORD *)&v117->fields._items->obj.klass + v115);
      v120 = (WarBoardPrevCondData_SaveData_o *)sub_B2C42C(WarBoardPrevCondData_SaveData_TypeInfo);
      WarBoardPrevCondData_SaveData___ctor_22650752(v120, v119, 0LL);
      if ( !prevCondSaves )
        goto LABEL_128;
      if ( v120 )
      {
        GutsCount = sub_B2C41C(v120, *(_QWORD *)(*(_QWORD *)prevCondSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v115 - 4 >= (unsigned __int64)prevCondSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&prevCondSaves[2 * v115] = v120;
      sub_B2C2F8(&prevCondSaves[v116], v120);
      v121 = v115 - 3;
      ++v115;
      v116 += 2LL;
    }
    while ( v121 < v114 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_128;
  v123 = reinforcementsSaveList->fields._size;
  v124 = sub_B2C374(HoldReinforcementsData_SaveData___TypeInfo, (unsigned int)v123);
  v171->fields.reinforcementsSaves = (struct HoldReinforcementsData_SaveData_array *)v124;
  sub_B2C2F8(&v171->fields.reinforcementsSaves, v124);
  if ( v123 >= 1 )
  {
    v125 = v123;
    v126 = 4LL;
    v127 = 8LL;
    do
    {
      v128 = warBoardData->fields.reinforcementsSaveList;
      if ( !v128 )
        goto LABEL_128;
      reinforcementsSaves = (unsigned int *)v171->fields.reinforcementsSaves;
      if ( v126 - 4 >= (unsigned __int64)(unsigned int)v128->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v130 = (HoldReinforcementsData_o *)*((_QWORD *)&v128->fields._items->obj.klass + v126);
      v131 = (HoldReinforcementsData_SaveData_o *)sub_B2C42C(HoldReinforcementsData_SaveData_TypeInfo);
      HoldReinforcementsData_SaveData___ctor_18300276(v131, v130, 0LL);
      if ( !reinforcementsSaves )
        goto LABEL_128;
      if ( v131 )
      {
        GutsCount = sub_B2C41C(v131, *(_QWORD *)(*(_QWORD *)reinforcementsSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v126 - 4 >= (unsigned __int64)reinforcementsSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&reinforcementsSaves[2 * v126] = v131;
      sub_B2C2F8(&reinforcementsSaves[v127], v131);
      v132 = v126 - 3;
      ++v126;
      v127 += 2LL;
    }
    while ( v132 < v125 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_128;
  v133 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
  v171->fields.playedReinforcements = v133;
  sub_B2C2F8(&v171->fields.playedReinforcements, v133);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_128;
  v135 = listUiData->fields._size;
  v136 = sub_B2C374(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v135);
  v171->fields.uiDataSaves = (struct WarBoardUiData_SaveData_array *)v136;
  sub_B2C2F8(&v171->fields.uiDataSaves, v136);
  if ( v135 >= 1 )
  {
    v137 = v135;
    v138 = 4LL;
    v139 = 8LL;
    do
    {
      v140 = warBoardData->fields.listUiData;
      if ( !v140 )
        goto LABEL_128;
      uiDataSaves = (unsigned int *)v171->fields.uiDataSaves;
      if ( v138 - 4 >= (unsigned __int64)(unsigned int)v140->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v142 = (WarBoardUiData_o *)*((_QWORD *)&v140->fields._items->obj.klass + v138);
      v143 = (WarBoardUiData_SaveData_o *)sub_B2C42C(WarBoardUiData_SaveData_TypeInfo);
      WarBoardUiData_SaveData___ctor_22661860(v143, v142, 0LL);
      if ( !uiDataSaves )
        goto LABEL_128;
      if ( v143 )
      {
        GutsCount = sub_B2C41C(v143, *(_QWORD *)(*(_QWORD *)uiDataSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v138 - 4 >= (unsigned __int64)uiDataSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&uiDataSaves[2 * v138] = v143;
      sub_B2C2F8(&uiDataSaves[v139], v143);
      v144 = v138 - 3;
      ++v138;
      v139 += 2LL;
    }
    while ( v144 < v137 );
  }
  v145 = warBoardData->fields.serverData;
  if ( !v145 )
    goto LABEL_128;
  v146 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v145->fields.squareIndexInfo,
           (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v147 = sub_B2C374(WarBoardSquareIndexData_SaveData___TypeInfo, (unsigned int)v146);
  v171->fields.squareIndexInfo = (struct WarBoardSquareIndexData_SaveData_array *)v147;
  sub_B2C2F8(&v171->fields.squareIndexInfo, v147);
  if ( v146 >= 1 )
  {
    v148 = 0LL;
    v149 = v146;
    v150 = 8LL;
    do
    {
      v151 = warBoardData->fields.serverData;
      if ( !v151 )
        goto LABEL_128;
      squareIndexInfo = v151->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_128;
      if ( v148 >= squareIndexInfo->max_length )
        goto LABEL_129;
      v153 = (unsigned int *)v171->fields.squareIndexInfo;
      v154 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v150 * 4);
      v155 = (WarBoardSquareIndexData_SaveData_o *)sub_B2C42C(WarBoardSquareIndexData_SaveData_TypeInfo);
      WarBoardSquareIndexData_SaveData___ctor_22656852(v155, v154, 0LL);
      if ( !v153 )
        goto LABEL_128;
      if ( v155 )
      {
        GutsCount = sub_B2C41C(v155, *(_QWORD *)(*(_QWORD *)v153 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v148 >= v153[6] )
        goto LABEL_129;
      *(_QWORD *)&v153[v150] = v155;
      sub_B2C2F8(&v153[v150], v155);
      ++v148;
      v150 += 2LL;
    }
    while ( (__int64)v148 < v149 );
  }
  v156 = warBoardData->fields.serverData;
  if ( !v156 )
    goto LABEL_128;
  v157 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v156->fields.bossBattleInfo,
           (const MethodInfo_1A8C590 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v158 = sub_B2C374(WarBoardBossBattleData_SaveData___TypeInfo, (unsigned int)v157);
  v171->fields.bossBattleInfo = (struct WarBoardBossBattleData_SaveData_array *)v158;
  sub_B2C2F8(&v171->fields.bossBattleInfo, v158);
  if ( v157 >= 1 )
  {
    v159 = 0LL;
    v160 = v157;
    v161 = 8LL;
    do
    {
      v162 = warBoardData->fields.serverData;
      if ( !v162 )
        goto LABEL_128;
      bossBattleInfo = v162->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_128;
      if ( v159 >= bossBattleInfo->max_length )
        goto LABEL_129;
      v164 = (unsigned int *)v171->fields.bossBattleInfo;
      v165 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v161 * 4);
      v166 = (WarBoardBossBattleData_SaveData_o *)sub_B2C42C(WarBoardBossBattleData_SaveData_TypeInfo);
      WarBoardBossBattleData_SaveData___ctor_20840436(v166, v165, v167);
      if ( !v164 )
        goto LABEL_128;
      if ( v166 )
      {
        GutsCount = sub_B2C41C(v166, *(_QWORD *)(*(_QWORD *)v164 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v159 >= v164[6] )
        goto LABEL_129;
      *(_QWORD *)&v164[v161] = v166;
      sub_B2C2F8(&v164[v161], v166);
      ++v159;
      v161 += 2LL;
    }
    while ( (__int64)v159 < v160 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&v171->fields.isContinue = 0;
  v171->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
  v171->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
}


void __fastcall WarBoardData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x0

  if ( (byte_4185730 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardData___c_TypeInfo, v1);
    byte_4185730 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(WarBoardData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = WarBoardData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardData___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall WarBoardData___c___ctor(WarBoardData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_0(
        WarBoardData___c_o *this,
        WarBoardStageLayoutEntity_o *x,
        WarBoardStageLayoutEntity_o *y,
        const MethodInfo *method)
{
  if ( !x || !y )
    sub_B2C434(this, x);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.forceId;
}


int32_t __fastcall WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.groupId;
}


bool __fastcall WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.isReceived;
}


BattleBuffData_o *__fastcall WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_BuffData(p, 0LL);
}


bool __fastcall WarBoardData___c___BuffTurnProgressing_b__191_1(
        WarBoardData___c_o *this,
        BattleBuffData_o *b,
        const MethodInfo *method)
{
  return b != 0LL;
}


void __fastcall WarBoardData___c___BuffTurnProgressing_b__191_2(
        WarBoardData___c_o *this,
        BattleBuffData_o *b,
        const MethodInfo *method)
{
  if ( !b )
    sub_B2C434(this, 0LL);
  BattleBuffData__BoardTurnProgressing(b, 0LL);
}


bool __fastcall WarBoardData___c___CheckWinCond_b__98_0(WarBoardData___c_o *this, int32_t x, const MethodInfo *method)
{
  return x > 0;
}


void __fastcall WarBoardData___c___CreateEventBossUIDataTask_b__152_0(
        WarBoardData___c_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v3; // x1
  WarBoardManager_o *v4; // x19

  if ( (byte_4185732 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4185732 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v3);
  v4 = (WarBoardManager_o *)Instance;
  WarBoardManager__UpdateEventBossUIData((WarBoardManager_o *)Instance, 0LL);
  WarBoardManager__SaveEventBossUIData(
    v4,
    v4->fields._EventId_k__BackingField,
    v4->fields._StageId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall WarBoardData___c___GetAliveEnemyServantPieces_b__110_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isEnemyServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAlivePieces_b__107_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return !x->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAliveServantPieces_b__108_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetHoldReinforcements_b__188_0(
        WarBoardData___c_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t __fastcall WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.squareIndex;
}


bool __fastcall WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


bool __fastcall WarBoardData___c___GetPlayerPieces_b__121_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_isPlayerGroup(x, 0LL) && x->fields._iconId_k__BackingField != 0;
}


bool __fastcall WarBoardData___c___IsReachableWinConditions_b__95_0(
        WarBoardData___c_o *this,
        System_Collections_Generic_KeyValuePair_int__bool__o status,
        const MethodInfo *method)
{
  bool value; // x19^4

  value = status.fields.value;
  if ( (byte_4185731 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, status);
    byte_4185731 = 1;
  }
  return value;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._index_k__BackingField;
}


bool __fastcall WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


void __fastcall WarBoardData___c___SetRequest_b__156_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  WarBoardPieceData__SetServarData(x, 0LL);
}


System_String_o *__fastcall WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return WarBoardItemData__ToJson(x, 0LL);
}


bool __fastcall WarBoardData___c___SetRequest_b__156_2(
        WarBoardData___c_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  return !System_String__IsNullOrEmpty(x, 0LL);
}


WarBoardPieceBaseComponent_o *__fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_B2C434(this, 0LL);
  return p->fields.pieceComponent;
}


bool __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *v6; // x19

  if ( (byte_4185733 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, c);
    byte_4185733 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL);
  if ( !v4 )
    return 0;
  if ( !c )
    sub_B2C434(v4, v5);
  v6 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))c->klass->vtable._4_get_BuffTrunNotice.method)(
                                 c,
                                 c->klass->vtable._5_Initialize.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v6, 0LL, 0LL);
}


void __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_2(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *n,
        const MethodInfo *method)
{
  if ( !n
    || (this = (WarBoardData___c_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer, const MethodInfo *))n->klass->vtable._4_get_BuffTrunNotice.method)(
                                       n,
                                       n->klass->vtable._5_Initialize.methodPtr,
                                       method)) == 0LL )
  {
    sub_B2C434(this, n);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0LL);
}


int32_t __fastcall WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return UserServantEntity__getCost(x, 0LL);
}


bool __fastcall WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass100_0___ctor(
        WarBoardData___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass100_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass100_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.ignoreDead )
  {
    if ( x )
      return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
LABEL_8:
    sub_B2C434(this, x);
  }
  if ( !x )
    goto LABEL_8;
  if ( x->fields._isDead_k__BackingField )
    return 0;
  return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}


void __fastcall WarBoardData___c__DisplayClass101_0___ctor(
        WarBoardData___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass101_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass101_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._nowSquareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass102_0___ctor(
        WarBoardData___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass102_0___GetPiece_b__0(
        WarBoardData___c__DisplayClass102_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !this->fields.ignoreDead )
  {
    if ( x )
      return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueIndex;
LABEL_8:
    sub_B2C434(this, x);
  }
  if ( !x )
    goto LABEL_8;
  if ( x->fields._isDead_k__BackingField )
    return 0;
  return x->fields._uniqueIndex_k__BackingField == this->fields.uniqueIndex;
}


void __fastcall WarBoardData___c__DisplayClass105_0___ctor(
        WarBoardData___c__DisplayClass105_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass105_0___GetEventBossPiece_b__0(
        WarBoardData___c__DisplayClass105_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return WarBoardPieceData__get_StageBossIdx(x, 0LL) == this->fields.stageBossIndex;
}


void __fastcall WarBoardData___c__DisplayClass106_0___ctor(
        WarBoardData___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass106_0___GetServantPieces_b__0(
        WarBoardData___c__DisplayClass106_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return ((WarBoardPieceData__get_isPlayerGroup(x, 0LL) ^ !this->fields.isPlayerGroup) & 1) != 0
      && WarBoardPieceData__get_isServant(x, 0LL)
      && x->fields._iconId_k__BackingField != 0;
}


void __fastcall WarBoardData___c__DisplayClass116_0___ctor(
        WarBoardData___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass116_0___GetPieces_b__0(
        WarBoardData___c__DisplayClass116_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return (x->fields._uniqueIndex_k__BackingField & 0xFF000000) == this->fields.forceIdOnly;
}


void __fastcall WarBoardData___c__DisplayClass117_0___ctor(
        WarBoardData___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass117_0___GetPieces_b__0(
        WarBoardData___c__DisplayClass117_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return (x->fields._uniqueIndex_k__BackingField & 0xFFFF0000) == this->fields.forceAndGroup;
}


void __fastcall WarBoardData___c__DisplayClass118_0___ctor(
        WarBoardData___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass118_0___GetPicesForRange_b__0(
        WarBoardData___c__DisplayClass118_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass118_0_o *v4; // x20

  v4 = this;
  if ( (byte_4185734 & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_4185734 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall WarBoardData___c__DisplayClass119_0___ctor(
        WarBoardData___c__DisplayClass119_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass119_0___GetPicesForRangeIsAlive_b__0(
        WarBoardData___c__DisplayClass119_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass119_0_o *v4; // x20

  v4 = this;
  if ( (byte_4185735 & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_B2C35C(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_4185735 = 1;
  }
  if ( !x )
    sub_B2C434(this, x);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1A8A3F4 *)Method_System_Linq_Enumerable_Contains_int___);
}


void __fastcall WarBoardData___c__DisplayClass123_0___ctor(
        WarBoardData___c__DisplayClass123_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass123_0___GetInRangeSquareIndecies_b__1(
        WarBoardData___c__DisplayClass123_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.ignoreStart && this->fields.start != x || !this->fields.ignoreStart;
}


void __fastcall WarBoardData___c__DisplayClass125_0___ctor(
        WarBoardData___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass125_0___SearchInRangeSquares_b__0(
        WarBoardData___c__DisplayClass125_0_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.squareIndex == this->fields.start;
}


void __fastcall WarBoardData___c__DisplayClass125_1___ctor(
        WarBoardData___c__DisplayClass125_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass125_1___SearchInRangeSquares_b__1(
        WarBoardData___c__DisplayClass125_1_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.squareIndex != this->fields.position;
}


bool __fastcall WarBoardData___c__DisplayClass125_1___SearchInRangeSquares_b__2(
        WarBoardData___c__DisplayClass125_1_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  struct WarBoardData___c__DisplayClass125_0_o *CS___8__locals1; // x8

  if ( !x )
    goto LABEL_7;
  if ( x->fields.squareIndex == this->fields.position )
  {
    CS___8__locals1 = this->fields.CS___8__locals1;
    if ( CS___8__locals1 )
      return x->fields.range < CS___8__locals1->fields.nextRange;
LABEL_7:
    sub_B2C434(this, x);
  }
  return 0;
}


void __fastcall WarBoardData___c__DisplayClass128_0___ctor(
        WarBoardData___c__DisplayClass128_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass128_0___GetSquare_b__0(
        WarBoardData___c__DisplayClass128_0_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass130_0___ctor(
        WarBoardData___c__DisplayClass130_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass130_0___GetCondSquare_b__0(
        WarBoardData___c__DisplayClass130_0_o *this,
        WarBoardSquareData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass133_0___ctor(
        WarBoardData___c__DisplayClass133_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass133_0___GetDeploySquareIds_b__0(
        WarBoardData___c__DisplayClass133_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.value == x;
}


bool __fastcall WarBoardData___c__DisplayClass133_0___GetDeploySquareIds_b__1(
        WarBoardData___c__DisplayClass133_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.value == x;
}


void __fastcall WarBoardData___c__DisplayClass135_0___ctor(
        WarBoardData___c__DisplayClass135_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass135_0___GetItem_b__0(
        WarBoardData___c__DisplayClass135_0_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass137_0___ctor(
        WarBoardData___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass137_0___GetTreasure_b__0(
        WarBoardData___c__DisplayClass137_0_o *this,
        WarBoardTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass138_0___ctor(
        WarBoardData___c__DisplayClass138_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass138_0___GetUnusedTreasure_b__0(
        WarBoardData___c__DisplayClass138_0_o *this,
        WarBoardTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return !x->fields._isUse_k__BackingField && x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass140_0___ctor(
        WarBoardData___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass140_0___GetWall_b__0(
        WarBoardData___c__DisplayClass140_0_o *this,
        WarBoardWallData_o *x,
        const MethodInfo *method)
{
  if ( this->fields.ignoreDestroy )
  {
    if ( x )
      return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
LABEL_8:
    sub_B2C434(this, x);
  }
  if ( !x )
    goto LABEL_8;
  if ( !x->fields._isDestroy_k__BackingField )
    return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
  return 0;
}


void __fastcall WarBoardData___c__DisplayClass142_0___ctor(
        WarBoardData___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass142_0___GetEffect_b__0(
        WarBoardData___c__DisplayClass142_0_o *this,
        WarBoardEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass143_0___ctor(
        WarBoardData___c__DisplayClass143_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass143_0___UpdateCurrentPartyCost_b__1(
        WarBoardData___c__DisplayClass143_0_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  WarBoardData___c__DisplayClass143_0_o *v4; // x20
  __int64 v5; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *svtMaster; // x20
  __int64 v7; // x19
  __int64 v8; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16

  v4 = this;
  if ( (byte_4185736 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_B2C35C(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      v5);
    byte_4185736 = 1;
  }
  if ( !x )
    goto LABEL_10;
  svtMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)v4->fields.svtMaster;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v10.fields.currentCryptoKey = v8;
  *(_QWORD *)&v10.fields.fakeValue = v7;
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                    v10,
                                                    0LL);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B2C434(this, x);
  }
  return ServantEntity__get_IsServant((ServantEntity_o *)this, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass145_0___ctor(
        WarBoardData___c__DisplayClass145_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass145_0___GetPieceDispPriority_b__0(
        WarBoardData___c__DisplayClass145_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_B2C434(this, x);
  return x->fields._uniqueIndex_k__BackingField == piece->fields._uniqueIndex_k__BackingField;
}


void __fastcall WarBoardData___c__DisplayClass151_0___ctor(
        WarBoardData___c__DisplayClass151_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass151_0___UpdateFromServerData_b__0(
        WarBoardData___c__DisplayClass151_0_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardWallData_o *wall; // x8

  if ( !x || (wall = this->fields.wall) == 0LL )
    sub_B2C434(this, x);
  return x->fields.id == wall->fields._wallId_k__BackingField;
}


void __fastcall WarBoardData___c__DisplayClass153_0___ctor(
        WarBoardData___c__DisplayClass153_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass153_0___GetStageBossData_b__0(
        WarBoardData___c__DisplayClass153_0_o *this,
        WarBoardUserServantData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.stageBossIdx == this->fields.stageBossIdx;
}


void __fastcall WarBoardData___c__DisplayClass154_0___ctor(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__0(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  return this->fields.consumedPiecePopupClose;
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__1(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  WebViewManager_o *Instance; // x0
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v12; // x20
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v15; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4185737 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_bool___ctor__, method);
    sub_B2C35C(&System_Action_bool__TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v4);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__, v9);
    byte_4185737 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v12 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_B2C42C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      (const MethodInfo_24B7B90 *)Method_System_Action_bool___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B2C2F8(&this->fields.__9__2, _9__2);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_1A8EDE4 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v15 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_1A8EDE4 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                 (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_2EF46E0 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v12) )
  {
    sub_B2C434(Only, value);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v12,
    _9__2,
    v15,
    (System_Collections_ObjectModel_ReadOnlyCollection_WarBoardPieceData__o *)Only,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__2(
        WarBoardData___c__DisplayClass154_0_o *this,
        bool _,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v9; // x20

  if ( (byte_4185738 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, _);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B2C35C(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__, v5);
    byte_4185738 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v9 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B2C2F8(&this->fields.__9__3, _9__3);
  }
  if ( !v9 )
    sub_B2C434(Instance, v7);
  WarBoardManager__HideConsumedPieceActionPointPopup(v9, _9__3, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0
  Il2CppObject *value; // x1
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_4185739 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__, method);
    sub_B2C35C(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v3);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v4);
    byte_4185739 = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_1A8EDE4 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  value = KeyValuePair_int__object.fields.value;
  _4__this = *(WarBoardData_o **)&KeyValuePair_int__object.fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)consumedPieceActionPointDict,
          KeyValuePair_int__object.fields.key,
          (const MethodInfo_2E66128 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(_4__this, value);
  }
  WarBoardData__ShowConsumedPieceActionPointPopup(_4__this, this->fields.consumedPieceActionPointDict, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass164_0___ctor(
        WarBoardData___c__DisplayClass164_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass164_0___GetPlayedEventData_b__0(
        WarBoardData___c__DisplayClass164_0_o *this,
        WarBoardEventData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B2C434(this, 0LL);
  return a->fields._eventId_k__BackingField == this->fields.eventId;
}


void __fastcall WarBoardData___c__DisplayClass171_0___ctor(
        WarBoardData___c__DisplayClass171_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass171_0___UpdateBossInfo_b__0(
        WarBoardData___c__DisplayClass171_0_o *this,
        WarBoardBossBattleData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.bossIdx == this->fields.bossId;
}


void __fastcall WarBoardData___c__DisplayClass172_0___ctor(
        WarBoardData___c__DisplayClass172_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass172_0___IsBossInfo_b__0(
        WarBoardData___c__DisplayClass172_0_o *this,
        WarBoardBossBattleData_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_B2C434(this, 0LL);
  return n->fields.bossIdx == this->fields.bossId;
}


void __fastcall WarBoardData___c__DisplayClass173_0___ctor(
        WarBoardData___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass173_0___AddSquareInfo_b__0(
        WarBoardData___c__DisplayClass173_0_o *this,
        WarBoardSquareIndexData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.squareIndex == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass174_0___ctor(
        WarBoardData___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass174_0___DelSquareInfo_b__0(
        WarBoardData___c__DisplayClass174_0_o *this,
        WarBoardSquareIndexData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.squareIndex == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass183_0___ctor(
        WarBoardData___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass183_0___GetClearedTurn_b__0(
        WarBoardData___c__DisplayClass183_0_o *this,
        WarBoardPrevCondData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B2C434(this, 0LL);
  return a->fields._condId_k__BackingField == this->fields.condId;
}


void __fastcall WarBoardData___c__DisplayClass187_0___ctor(
        WarBoardData___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass187_0___SaveHoldReinforcements_b__0(
        WarBoardData___c__DisplayClass187_0_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._id_k__BackingField == this->fields.stageReinforcementsId
      && x->fields._index_k__BackingField == this->fields.index;
}


void __fastcall WarBoardData___c__DisplayClass188_0___ctor(
        WarBoardData___c__DisplayClass188_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass188_0___GetHoldReinforcements_b__1(
        WarBoardData___c__DisplayClass188_0_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields._id_k__BackingField == this->fields.targetStageReinforcementsId;
}


void __fastcall WarBoardData___c__DisplayClass188_1___ctor(
        WarBoardData___c__DisplayClass188_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass188_1___GetHoldReinforcements_b__2(
        WarBoardData___c__DisplayClass188_1_o *this,
        ReinforcementsData_o *x,
        const MethodInfo *method)
{
  struct HoldReinforcementsData_o *pram; // x8

  if ( !x || (pram = this->fields.pram) == 0LL )
    sub_B2C434(this, x);
  return x->fields.stageReinforcementId == pram->fields._id_k__BackingField;
}


void __fastcall WarBoardData___c__DisplayClass189_0___ctor(
        WarBoardData___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass189_0___GetReinforcements_b__0(
        WarBoardData___c__DisplayClass189_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_B2C434(this, x);
  return stageEntity->fields.id == x;
}


void __fastcall WarBoardData___c__DisplayClass189_1___ctor(
        WarBoardData___c__DisplayClass189_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass189_1___GetReinforcements_b__1(
        WarBoardData___c__DisplayClass189_1_o *this,
        ReinforcementsData_o *x,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  _QWORD *monitor; // x8
  __int64 v9; // x8
  System_Int32_array *reinforcementsIdx; // x20
  System_Func_int__bool__o *klass; // x22

  v4 = (Il2CppObject *)this;
  if ( (byte_418573A & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Any_int____67380496, x);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v5);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v6);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_B2C35C(
                                                      &Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
                                                      v7);
    byte_418573A = 1;
  }
  if ( !x || (monitor = v4[1].monitor) == 0LL || (v9 = monitor[2]) == 0 )
    sub_B2C434(this, x);
  if ( x->fields.stageReinforcementId != *(_DWORD *)(v9 + 20) )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  klass = (System_Func_int__bool__o *)v4[2].klass;
  if ( !klass )
  {
    klass = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      klass,
      v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B2C2F8(&v4[2], klass);
  }
  return BasicHelper__Any_int__24273940(
           reinforcementsIdx,
           (System_Func_T__bool__o *)klass,
           (const MethodInfo_1726414 *)Method_BasicHelper_Any_int____67380496);
}


bool __fastcall WarBoardData___c__DisplayClass189_1___GetReinforcements_b__2(
        WarBoardData___c__DisplayClass189_1_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.i == x;
}


void __fastcall WarBoardData___c__DisplayClass190_0___ctor(
        WarBoardData___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass190_0___IsReinforcementsApper_b__0(
        WarBoardData___c__DisplayClass190_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardStageReinforcementsEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_B2C434(this, x);
  return entity->fields.id == x;
}


void __fastcall WarBoardData___c__DisplayClass193_0___ctor(
        WarBoardData___c__DisplayClass193_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass193_0___GetUiData_b__0(
        WarBoardData___c__DisplayClass193_0_o *this,
        WarBoardUiData_o *a,
        const MethodInfo *method)
{
  if ( !a )
    sub_B2C434(this, 0LL);
  return a->fields._squareIndex_k__BackingField == this->fields.squareIndex;
}


void __fastcall WarBoardData___c__DisplayClass194_0___ctor(
        WarBoardData___c__DisplayClass194_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass194_0___GetUiData_b__0(
        WarBoardData___c__DisplayClass194_0_o *this,
        WarBoardUiData_o *a,
        const MethodInfo *method)
{
  struct System_Int32_array *pieceIndex_k__BackingField; // x8
  unsigned int max_length; // w10
  struct System_Int32_array *pieceIndex; // x9
  unsigned int v6; // w11
  __int64 v8; // x0

  if ( !a )
    goto LABEL_16;
  pieceIndex_k__BackingField = a->fields._pieceIndex_k__BackingField;
  if ( !pieceIndex_k__BackingField )
    return 0;
  max_length = pieceIndex_k__BackingField->max_length;
  if ( !max_length )
    goto LABEL_15;
  pieceIndex = this->fields.pieceIndex;
  if ( !pieceIndex )
LABEL_16:
    sub_B2C434(this, a);
  v6 = pieceIndex->max_length;
  if ( !v6 )
    goto LABEL_15;
  if ( pieceIndex_k__BackingField->m_Items[1] == pieceIndex->m_Items[1] )
  {
    if ( max_length <= 1 || v6 <= 1 )
      goto LABEL_15;
    if ( pieceIndex_k__BackingField->m_Items[2] == pieceIndex->m_Items[2] )
    {
      if ( max_length > 2 && v6 > 2 )
        return pieceIndex_k__BackingField->m_Items[3] == pieceIndex->m_Items[3];
LABEL_15:
      v8 = sub_B2C460(this);
      sub_B2C400(v8, 0LL);
    }
  }
  return 0;
}


void __fastcall WarBoardData___c__DisplayClass77_0___ctor(
        WarBoardData___c__DisplayClass77_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__5(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_B2C434(this, x);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_B2C434(this, x);
  return x->fields.forceId == piece->fields.forceId
      && x->fields.groupId == piece->fields.groupId
      && x->fields.pieceIndex == piece->fields.pieceIndex;
}


void __fastcall WarBoardData___c__DisplayClass77_1___ctor(
        WarBoardData___c__DisplayClass77_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_1____ctor_b__7(
        WarBoardData___c__DisplayClass77_1_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  struct WarBoardItemData_SaveData_o *item; // x8

  if ( !x || (item = this->fields.item) == 0LL )
    sub_B2C434(this, x);
  return x->fields.pieceIndex == item->fields.pieceIndex;
}


void __fastcall WarBoardData___c__DisplayClass77_2___ctor(
        WarBoardData___c__DisplayClass77_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_2____ctor_b__8(
        WarBoardData___c__DisplayClass77_2_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  struct WarBoardTreasureData_SaveData_o *treasure; // x8

  if ( !x || (treasure = this->fields.treasure) == 0LL )
    sub_B2C434(this, x);
  return x->fields.treasureId == treasure->fields.treasureId;
}


void __fastcall WarBoardData___c__DisplayClass77_3___ctor(
        WarBoardData___c__DisplayClass77_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_3____ctor_b__10(
        WarBoardData___c__DisplayClass77_3_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardWallData_SaveData_o *wall; // x8

  if ( !x || (wall = this->fields.wall) == 0LL )
    sub_B2C434(this, x);
  return x->fields.id == wall->fields.wallId && wall->fields.squareIndex == x->fields.beforeSquareIndex;
}


void __fastcall WarBoardData___c__DisplayClass77_4___ctor(
        WarBoardData___c__DisplayClass77_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__11(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B2C434(this, x);
  return x->fields.treasureId == layout->fields.effectId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B2C434(this, x);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B2C434(this, x);
  return x->fields.forceId == layout->fields.forceId
      && x->fields.groupId == layout->fields.groupId
      && x->fields.pieceIndex == layout->fields.pieceIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__14(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserGetItemData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B2C434(this, x);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B2C434(this, x);
  return x->fields.id == layout->fields.effectId;
}


void __fastcall WarBoardData___c__DisplayClass77_5___ctor(
        WarBoardData___c__DisplayClass77_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass77_5____ctor_b__16(
        WarBoardData___c__DisplayClass77_5_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_B2C434(this, x);
  return x->fields._forceId_k__BackingField == piece->fields.forceId
      && x->fields._groupId_k__BackingField == piece->fields.groupId
      && x->fields._index_k__BackingField == piece->fields.pieceIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_5____ctor_b__17(
        WarBoardData___c__DisplayClass77_5_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_B2C434(this, x);
  return x->fields.forceId == piece->fields.forceId
      && x->fields.groupId == piece->fields.groupId
      && x->fields.pieceIndex == piece->fields.pieceIndex;
}


void __fastcall WarBoardData___c__DisplayClass99_0___ctor(
        WarBoardData___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardData___c__DisplayClass99_0___GetPiecePosition_b__0(
        WarBoardData___c__DisplayClass99_0_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}