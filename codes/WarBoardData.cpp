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

  if ( (byte_421345A & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardData_TypeInfo, v1);
    sub_B0D8A4(&StringLiteral_1670/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/, v8);
    sub_B0D8A4(&StringLiteral_15278/*"WARBOARDDATA_SAVEDATA"*/, v9);
    byte_421345A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardData_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15278/*"WARBOARDDATA_SAVEDATA"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15278/*"WARBOARDDATA_SAVEDATA"*/;
  sub_B0D840(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WarBoardData_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_1670/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  v12->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_1670/*"AFTER_CONTINUE_DEVICE_FOR_WARBOARD"*/;
  sub_B0D840(
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
  WarBoardStageLayoutEntity_array *v7; // x23
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
  __int64 v156; // x1
  __int64 v157; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v158; // x19
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  struct System_Int32_array *v165; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  struct System_UInt32_array *v172; // x0
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  __int64 v179; // x1
  __int64 v180; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v181; // x19
  System_String_array **v182; // x2
  System_String_array **v183; // x3
  System_Boolean_array **v184; // x4
  System_Int32_array **v185; // x5
  System_Int32_array *v186; // x6
  System_Int32_array *v187; // x7
  __int64 v188; // x1
  __int64 v189; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v190; // x19
  System_String_array **v191; // x2
  System_String_array **v192; // x3
  System_Boolean_array **v193; // x4
  System_Int32_array **v194; // x5
  System_Int32_array *v195; // x6
  System_Int32_array *v196; // x7
  __int64 v197; // x1
  __int64 v198; // x2
  System_Collections_Generic_List_int__o *v199; // x19
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  __int64 v206; // x1
  __int64 v207; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v208; // x19
  System_String_array **v209; // x2
  System_String_array **v210; // x3
  System_Boolean_array **v211; // x4
  System_Int32_array **v212; // x5
  System_Int32_array *v213; // x6
  System_Int32_array *v214; // x7
  __int64 v215; // x1
  __int64 v216; // x2
  System_Collections_Generic_List_int__o *v217; // x19
  System_String_array **v218; // x2
  System_String_array **v219; // x3
  System_Boolean_array **v220; // x4
  System_Int32_array **v221; // x5
  System_Int32_array *v222; // x6
  System_Int32_array *v223; // x7
  __int64 v224; // x1
  __int64 v225; // x2
  System_Collections_Generic_List_int__o *v226; // x19
  System_String_array **v227; // x2
  System_String_array **v228; // x3
  System_Boolean_array **v229; // x4
  System_Int32_array **v230; // x5
  System_Int32_array *v231; // x6
  System_Int32_array *v232; // x7
  __int64 v233; // x1
  __int64 v234; // x2
  WarBoardData___c_c *v235; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__77_0; // x19
  Il2CppObject *v238; // x20
  struct WarBoardData___c_StaticFields *v239; // x0
  System_String_array **v240; // x2
  System_String_array **v241; // x3
  System_Boolean_array **v242; // x4
  System_Int32_array **v243; // x5
  System_Int32_array *v244; // x6
  System_Int32_array *v245; // x7
  System_String_array **v246; // x2
  System_String_array **v247; // x3
  System_Boolean_array **v248; // x4
  System_Int32_array **v249; // x5
  System_Int32_array *v250; // x6
  System_Int32_array *v251; // x7
  __int64 Instance; // x0
  __int64 v253; // x20
  struct WarBoardStageNpcMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v255; // x2
  System_String_array **v256; // x3
  System_Boolean_array **v257; // x4
  System_Int32_array **v258; // x5
  System_Int32_array *v259; // x6
  System_Int32_array *v260; // x7
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  __int64 v262; // x1
  __int64 v263; // x2
  WarBoardData___c_c *v264; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v265; // x21
  struct WarBoardData___c_StaticFields *v266; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_1; // x19
  Il2CppObject *v268; // x20
  struct WarBoardData___c_StaticFields *v269; // x0
  System_String_array **v270; // x2
  System_String_array **v271; // x3
  System_Boolean_array **v272; // x4
  System_Int32_array **v273; // x5
  System_Int32_array *v274; // x6
  System_Int32_array *v275; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v276; // x0
  System_String_array **v277; // x2
  System_String_array **v278; // x3
  System_Boolean_array **v279; // x4
  System_Int32_array **v280; // x5
  System_Int32_array *v281; // x6
  System_Int32_array *v282; // x7
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  __int64 v284; // x1
  __int64 v285; // x2
  WarBoardData___c_c *v286; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v287; // x21
  struct WarBoardData___c_StaticFields *v288; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_2; // x19
  Il2CppObject *v290; // x20
  struct WarBoardData___c_StaticFields *v291; // x0
  System_String_array **v292; // x2
  System_String_array **v293; // x3
  System_Boolean_array **v294; // x4
  System_Int32_array **v295; // x5
  System_Int32_array *v296; // x6
  System_Int32_array *v297; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v298; // x0
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v306; // x1
  __int64 v307; // x2
  WarBoardData___c_c *v308; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v309; // x21
  struct WarBoardData___c_StaticFields *v310; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_3; // x19
  Il2CppObject *v312; // x20
  struct WarBoardData___c_StaticFields *v313; // x0
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v321; // x0
  __int64 v322; // x1
  __int64 v323; // x2
  WarBoardData___c_c *v324; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v325; // x21
  struct WarBoardData___c_StaticFields *v326; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_4; // x19
  Il2CppObject *v328; // x20
  struct WarBoardData___c_StaticFields *v329; // x0
  System_String_array **v330; // x2
  System_String_array **v331; // x3
  System_Boolean_array **v332; // x4
  System_Int32_array **v333; // x5
  System_Int32_array *v334; // x6
  System_Int32_array *v335; // x7
  __int64 v336; // x1
  __int64 v337; // x2
  __int64 v338; // x1
  __int64 v339; // x2
  __int64 v340; // x1
  __int64 v341; // x2
  __int64 v342; // x1
  __int64 v343; // x2
  __int64 v344; // x1
  __int64 v345; // x2
  __int64 v346; // x1
  __int64 v347; // x2
  __int64 v348; // x1
  __int64 v349; // x2
  WarBoardData_c *v350; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  const MethodInfo *v352; // x0
  int v353; // w19
  WarBoardDataEntity_o *v354; // x25
  System_String_o *image; // x19
  System_String_o *String; // x19
  System_Byte_array *v357; // x19
  __int64 v358; // x1
  __int64 v359; // x2
  MiniMessagePack_MiniMessagePacker_o *v360; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v361; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x24
  System_String_array **v363; // x2
  System_String_array **v364; // x3
  System_Boolean_array **v365; // x4
  System_Int32_array **v366; // x5
  System_Int32_array *v367; // x6
  System_Int32_array *v368; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v369; // x8
  __int64 v370; // x1
  __int64 v371; // x2
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x23
  unsigned __int64 v373; // x26
  __int64 v374; // x21
  System_String_array **v375; // x2
  System_String_array **v376; // x3
  System_Boolean_array **v377; // x4
  System_Int32_array **v378; // x5
  System_Int32_array *v379; // x6
  System_Int32_array *v380; // x7
  System_Int32_array **v381; // x1
  WarBoardPieceData_SaveData_o **v382; // x20
  __int64 v383; // x1
  __int64 v384; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v385; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v386; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v387; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v388; // x22
  struct WarBoardItemData_SaveData_array *itemSaves; // x23
  unsigned __int64 v390; // x26
  __int64 v391; // x20
  System_String_array **v392; // x2
  System_String_array **v393; // x3
  System_Boolean_array **v394; // x4
  System_Int32_array **v395; // x5
  System_Int32_array *v396; // x6
  System_Int32_array *v397; // x7
  System_Int32_array **v398; // x1
  __int64 v399; // x1
  __int64 v400; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v401; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v402; // x22
  BattleServantConfConponent_o *v403; // x21
  struct WarBoardData_WarBoardLocalSaveData_o **v404; // x23
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  unsigned __int64 v406; // x26
  __int64 v407; // x19
  System_String_array **v408; // x2
  System_String_array **v409; // x3
  System_Boolean_array **v410; // x4
  System_Int32_array **v411; // x5
  System_Int32_array *v412; // x6
  System_Int32_array *v413; // x7
  System_Int32_array **v414; // x1
  __int64 v415; // x20
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x22
  __int64 v417; // x1
  __int64 v418; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v419; // x23
  WarBoardData___c_c *v420; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v421; // x22
  struct WarBoardData___c_StaticFields *v422; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__77_9; // x19
  Il2CppObject *v424; // x20
  struct WarBoardData___c_StaticFields *v425; // x0
  System_String_array **v426; // x2
  System_String_array **v427; // x3
  System_Boolean_array **v428; // x4
  System_Int32_array **v429; // x5
  System_Int32_array *v430; // x6
  System_Int32_array *v431; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v432; // x0
  System_Int32_array **v433; // x0
  System_String_array **v434; // x2
  System_String_array **v435; // x3
  System_Boolean_array **v436; // x4
  System_Int32_array **v437; // x5
  System_Int32_array *v438; // x6
  System_Int32_array *v439; // x7
  struct WarBoardWallData_SaveData_array *wallSaves; // x23
  unsigned __int64 v441; // x25
  __int64 v442; // x19
  System_String_array **v443; // x2
  System_String_array **v444; // x3
  System_Boolean_array **v445; // x4
  System_Int32_array **v446; // x5
  System_Int32_array *v447; // x6
  System_Int32_array *v448; // x7
  System_Int32_array **v449; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v450; // x21
  __int64 v451; // x1
  __int64 v452; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v453; // x22
  int v454; // w19
  __int64 v455; // x1
  __int64 v456; // x2
  unsigned __int64 v457; // x22
  signed __int64 v458; // x23
  __int64 v459; // x24
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v461; // x26
  WarBoardSquareIndexData_SaveData_o *v462; // x20
  WarBoardSquareIndexData_o *v463; // x19
  System_String_array **v464; // x2
  System_String_array **v465; // x3
  System_Boolean_array **v466; // x4
  System_Int32_array **v467; // x5
  System_Int32_array *v468; // x6
  System_Int32_array *v469; // x7
  int v470; // w19
  __int64 v471; // x1
  __int64 v472; // x2
  unsigned __int64 v473; // x22
  signed __int64 v474; // x23
  __int64 v475; // x24
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v477; // x26
  WarBoardBossBattleData_SaveData_o *v478; // x20
  WarBoardBossBattleData_o *v479; // x19
  const MethodInfo *v480; // x2
  System_String_array **v481; // x2
  System_String_array **v482; // x3
  System_Boolean_array **v483; // x4
  System_Int32_array **v484; // x5
  System_Int32_array *v485; // x6
  System_Int32_array *v486; // x7
  WarBoardData_c *v487; // x0
  System_String_array **v488; // x2
  System_String_array **v489; // x3
  System_Boolean_array **v490; // x4
  System_Int32_array **v491; // x5
  System_Int32_array *v492; // x6
  System_Int32_array *v493; // x7
  __int64 v494; // x1
  __int64 v495; // x2
  unsigned __int64 v496; // x28
  signed __int64 v497; // x22
  __int64 v498; // x26
  System_String_array **v499; // x2
  System_String_array **v500; // x3
  System_Boolean_array **v501; // x4
  System_Int32_array **v502; // x5
  System_Int32_array *v503; // x6
  System_Int32_array *v504; // x7
  System_Int32_array **v505; // x1
  WarBoardStageLayoutEntity_o **v506; // x21
  WarBoardStageLayoutEntity_o *v507; // x19
  __int64 v508; // x1
  __int64 v509; // x2
  WarBoardSquareData_o *v510; // x20
  const MethodInfo *v511; // x3
  __int64 v512; // x9
  WarBoardStageLayoutEntity_o *v513; // x8
  int32_t throughCondId; // w1
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v516; // x20
  WarBoardData_SquareRangeSearch_o *v517; // x20
  EventMissionProgressRequest_Argument_ProgressData_o *v518; // x1
  const MethodInfo_2FC56E8 *v519; // x2
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v521; // x20
  WarBoardStageLayoutEntity_o *v522; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v523; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v524; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  int32_t progressType; // w23
  WarBoardStageLayoutEntity_o *v528; // x19
  bool v529; // w24
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v530; // x25
  __int64 v531; // x1
  __int64 v532; // x2
  WarBoardPieceData_o *v533; // x0
  WarBoardPieceData_o *v534; // x22
  bool v535; // w5
  NpcFollowerEntity_o *Entity_19793912; // x0
  NpcFollowerEntity_o *v537; // x19
  WarBoardStageLayoutEntity_o *v538; // x20
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v540; // x20
  WarBoardData_SquareRangeSearch_o *v541; // x0
  WarBoardStageLayoutEntity_o *v542; // x20
  WarBoardUserGetItemData_o *v543; // x21
  __int64 v544; // x1
  __int64 v545; // x2
  WarBoardItemData_o *v546; // x19
  __int64 *v547; // x8
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v549; // x20
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v551; // x20
  WarBoardData_SquareRangeSearch_o *v552; // x0
  WarBoardStageLayoutEntity_o *v553; // x20
  WarBoardUserWallData_o *v554; // x21
  __int64 v555; // x1
  __int64 v556; // x2
  System_Int32_array **v557; // x0
  System_String_array **v558; // x2
  System_String_array **v559; // x3
  System_Boolean_array **v560; // x4
  System_Int32_array **v561; // x5
  System_Int32_array *v562; // x6
  System_Int32_array *v563; // x7
  System_Int32_array **v564; // x0
  System_String_array **v565; // x2
  System_String_array **v566; // x3
  System_Boolean_array **v567; // x4
  System_Int32_array **v568; // x5
  System_Int32_array *v569; // x6
  System_Int32_array *v570; // x7
  System_Int32_array **v571; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x22
  System_String_array **v573; // x2
  System_String_array **v574; // x3
  System_Boolean_array **v575; // x4
  System_Int32_array **v576; // x5
  System_Int32_array *v577; // x6
  System_Int32_array *v578; // x7
  BattleBuffData_BuffData_array *pieces; // x19
  __int64 v580; // x1
  __int64 v581; // x2
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v582; // x20
  System_Int32_array **v583; // x0
  System_String_array **v584; // x2
  System_String_array **v585; // x3
  System_Boolean_array **v586; // x4
  System_Int32_array **v587; // x5
  System_Int32_array *v588; // x6
  System_Int32_array *v589; // x7
  System_Int32_array **v590; // x0
  System_String_array **v591; // x2
  System_String_array **v592; // x3
  System_Boolean_array **v593; // x4
  System_Int32_array **v594; // x5
  System_Int32_array *v595; // x6
  System_Int32_array *v596; // x7
  System_Int32_array **v597; // x0
  System_String_array **v598; // x2
  System_String_array **v599; // x3
  System_Boolean_array **v600; // x4
  System_Int32_array **v601; // x5
  System_Int32_array *v602; // x6
  System_Int32_array *v603; // x7
  System_Int32_array **v604; // x0
  System_String_array **v605; // x2
  System_String_array **v606; // x3
  System_Boolean_array **v607; // x4
  System_Int32_array **v608; // x5
  System_Int32_array *v609; // x6
  System_Int32_array *v610; // x7
  System_String_array **v611; // x2
  System_String_array **v612; // x3
  System_Boolean_array **v613; // x4
  System_Int32_array **v614; // x5
  System_Int32_array *v615; // x6
  System_Int32_array *v616; // x7
  const MethodInfo *v617; // x1
  __int64 v618; // x2
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *v620; // x28
  WarBoardData___c__DisplayClass77_5_c **v621; // x26
  unsigned __int64 v622; // x27
  WarBoardPieceData_SaveData_o **m_Items; // x21
  __int64 v624; // x20
  System_String_array **v625; // x2
  System_String_array **v626; // x3
  System_Boolean_array **v627; // x4
  System_Int32_array **v628; // x5
  System_Int32_array *v629; // x6
  System_Int32_array *v630; // x7
  System_Int32_array **v631; // x1
  WarBoardPieceData_SaveData_o **v632; // x23
  System_Collections_Generic_IEnumerable_T__o *v633; // x19
  __int64 v634; // x1
  __int64 v635; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v636; // x24
  __int64 v637; // x1
  __int64 v638; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v639; // x19
  WarBoardPieceData_SaveData_o **v640; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v641; // x24
  WarBoardData_SquareRangeSearch_o *v642; // x24
  __int64 v643; // x1
  __int64 v644; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v645; // x20
  WarBoardData___c__DisplayClass77_5_c **v646; // x21
  __int64 v647; // x1
  __int64 v648; // x2
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v650; // x25
  WarBoardPieceData_o *v651; // x26
  System_Int32_array **v652; // x0
  System_String_array **v653; // x2
  System_String_array **v654; // x3
  System_Boolean_array **v655; // x4
  System_Int32_array **v656; // x5
  System_Int32_array *v657; // x6
  System_Int32_array *v658; // x7
  struct WarBoardItemData_SaveData_array *v659; // x20
  int max_length; // w8
  unsigned int v661; // w21
  __int64 v662; // x8
  WarBoardItemData_SaveData_o *v663; // x19
  struct WarBoardTreasureData_SaveData_array *v664; // x20
  int v665; // w8
  unsigned int v666; // w21
  __int64 v667; // x8
  WarBoardTreasureData_SaveData_o *v668; // x19
  struct WarBoardWallData_SaveData_array *v669; // x20
  int v670; // w8
  unsigned int v671; // w21
  __int64 v672; // x8
  WarBoardWallData_SaveData_o *v673; // x19
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  int v675; // w8
  unsigned int v676; // w21
  __int64 v677; // x8
  WarBoardSquareData_SaveData_o *v678; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v679; // x19
  System_String_array **v680; // x2
  System_String_array **v681; // x3
  System_Boolean_array **v682; // x4
  System_Int32_array **v683; // x5
  System_Int32_array *v684; // x6
  System_Int32_array *v685; // x7
  __int64 v686; // x1
  System_String_array **v687; // x2
  System_String_array **v688; // x3
  System_Boolean_array **v689; // x4
  System_Int32_array **v690; // x5
  System_Int32_array *v691; // x6
  System_Int32_array *v692; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v693; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x21
  __int64 v695; // x8
  unsigned __int64 v696; // x23
  WarBoardEventData_SaveData_o *v697; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v698; // x19
  WarBoardEventData_o *v699; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v700; // x8
  System_Int32_array **latestPieceActionSquareIndexes; // x1
  System_String_array **v702; // x2
  System_String_array **v703; // x3
  System_Boolean_array **v704; // x4
  System_Int32_array **v705; // x5
  System_Int32_array *v706; // x6
  System_Int32_array *v707; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v708; // x8
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  __int64 v710; // x1
  __int64 v711; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v712; // x19
  System_String_array **v713; // x2
  System_String_array **v714; // x3
  System_Boolean_array **v715; // x4
  System_Int32_array **v716; // x5
  System_Int32_array *v717; // x6
  System_Int32_array *v718; // x7
  __int64 v719; // x1
  __int64 v720; // x2
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x21
  __int64 v722; // x8
  unsigned __int64 v723; // x23
  WarBoardPrevCondData_SaveData_o *v724; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v725; // x19
  WarBoardPrevCondData_o *v726; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v727; // x19
  System_String_array **v728; // x2
  System_String_array **v729; // x3
  System_Boolean_array **v730; // x4
  System_Int32_array **v731; // x5
  System_Int32_array *v732; // x6
  System_Int32_array *v733; // x7
  __int64 v734; // x1
  __int64 v735; // x2
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x21
  __int64 v737; // x8
  unsigned __int64 v738; // x23
  HoldReinforcementsData_SaveData_o *v739; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v740; // x19
  HoldReinforcementsData_o *v741; // x20
  System_Int32_array **v742; // x0
  System_String_array **v743; // x2
  System_String_array **v744; // x3
  System_Boolean_array **v745; // x4
  System_Int32_array **v746; // x5
  System_Int32_array *v747; // x6
  System_Int32_array *v748; // x7
  __int64 v749; // x1
  __int64 v750; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v751; // x19
  System_String_array **v752; // x2
  System_String_array **v753; // x3
  System_Boolean_array **v754; // x4
  System_Int32_array **v755; // x5
  System_Int32_array *v756; // x6
  System_Int32_array *v757; // x7
  __int64 v758; // x1
  System_String_array **v759; // x2
  System_String_array **v760; // x3
  System_Boolean_array **v761; // x4
  System_Int32_array **v762; // x5
  System_Int32_array *v763; // x6
  System_Int32_array *v764; // x7
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x21
  __int64 v766; // x8
  unsigned __int64 v767; // x23
  WarBoardUiData_SaveData_o *v768; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v769; // x19
  WarBoardUiData_o *v770; // x20
  System_Int32_array **bgAnimationInfo; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v772; // x8
  WarBoardData_WarBoardLocalSaveData_o *v773; // x19
  System_String_array **v774; // x2
  System_String_array **v775; // x3
  System_Boolean_array **v776; // x4
  System_Int32_array **v777; // x5
  System_Int32_array *v778; // x6
  System_Int32_array *v779; // x7
  __int64 v780; // x0
  __int64 v781; // x0
  BattleServantConfConponent_o *p_latestBattlePieceUniqueIndexes; // [xsp+10h] [xbp-170h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+18h] [xbp-168h]
  BattleServantConfConponent_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  BattleServantConfConponent_o *p_bgAnimationInfo_k__BackingField; // [xsp+28h] [xbp-158h]
  BattleServantConfConponent_o *p_listUiData; // [xsp+30h] [xbp-150h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v787; // [xsp+38h] [xbp-148h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v788; // [xsp+40h] [xbp-140h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+48h] [xbp-138h]
  struct System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+50h] [xbp-130h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v791; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v792; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v793; // [xsp+68h] [xbp-118h]
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+70h] [xbp-110h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v795; // [xsp+78h] [xbp-108h]
  WarBoardData_Fields *p_fields; // [xsp+80h] [xbp-100h]
  WarBoardCommonReleaseMaster_o *v797; // [xsp+88h] [xbp-F8h]
  signed __int64 v798; // [xsp+90h] [xbp-F0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+98h] [xbp-E8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v800; // [xsp+A0h] [xbp-E0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v801; // [xsp+A8h] [xbp-D8h]
  WarBoardStageLayoutEntity_array *v802; // [xsp+B0h] [xbp-D0h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+B8h] [xbp-C8h]
  BattleServantConfConponent_o *p_listPrevCond; // [xsp+C0h] [xbp-C0h]
  BattleServantConfConponent_o *p_reinforcementsSaveList; // [xsp+C8h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D0h] [xbp-B0h]
  int32_t questPhase; // [xsp+DCh] [xbp-A4h]
  WarBoardData_o *v808; // [xsp+E0h] [xbp-A0h]
  char v809; // [xsp+ECh] [xbp-94h]
  int32_t v810; // [xsp+ECh] [xbp-94h]
  struct WarBoardData_WarBoardLocalSaveData_o **v811; // [xsp+F0h] [xbp-90h]
  int32_t questId; // [xsp+F0h] [xbp-90h]
  __int64 v813; // [xsp+F8h] [xbp-88h]
  WarBoardDataEntity_o *v814; // [xsp+F8h] [xbp-88h]
  int v815; // [xsp+100h] [xbp-80h]
  WarBoardUserMasterData_o *v816; // [xsp+100h] [xbp-80h]
  struct WarBoardData_WarBoardLocalSaveData_o **v817; // [xsp+100h] [xbp-80h]
  struct WarBoardPieceData_SaveData_array *v819; // [xsp+108h] [xbp-78h]
  bool isChangeName; // [xsp+114h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF
  int32_t condGroup[3]; // [xsp+124h] [xbp-5Ch] BYREF

  v7 = layoutEntities;
  if ( (byte_4213402 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Resize_WarBoardBossBattleData___, stage);
    sub_B0D8A4(&Method_System_Array_Resize_WarBoardSquareIndexData___, v10);
    sub_B0D8A4(&Method_System_Array_Sort_WarBoardPieceData___, v11);
    sub_B0D8A4(&Method_System_Array_Sort_WarBoardStageLayoutEntity___, v12);
    sub_B0D8A4(&Method_BasicHelper_Any_WarBoardPieceData___, v13);
    sub_B0D8A4(&Method_System_Comparison_WarBoardStageLayoutEntity___ctor__, v14);
    sub_B0D8A4(&Method_System_Comparison_WarBoardPieceData___ctor__, v15);
    sub_B0D8A4(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo, v16);
    sub_B0D8A4(&System_Comparison_WarBoardPieceData__TypeInfo, v17);
    sub_B0D8A4(&System_Convert_TypeInfo, v18);
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v19);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___, v20);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v21);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___, v22);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v23);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, v24);
    sub_B0D8A4(&DataManager_TypeInfo, v25);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__, v28);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v29);
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v30);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___, v31);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___, v32);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, v33);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v34);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v35);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___, v36);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v37);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___, v38);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___, v39);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___, v40);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___, v41);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v42);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___, v43);
    sub_B0D8A4(&Method_System_Func_WarBoardUserTreasureData__bool___ctor__, v44);
    sub_B0D8A4(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v45);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v46);
    sub_B0D8A4(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__, v47);
    sub_B0D8A4(&Method_System_Func_WarBoardStageNpcEntity__uint___ctor__, v48);
    sub_B0D8A4(&Method_System_Func_WarBoardStageNpcEntity__int___ctor__, v49);
    sub_B0D8A4(&Method_System_Func_WarBoardActionPointEntity__uint___ctor__, v50);
    sub_B0D8A4(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v51);
    sub_B0D8A4(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v52);
    sub_B0D8A4(&System_Func_WarBoardActionPointEntity__uint__TypeInfo, v53);
    sub_B0D8A4(&System_Func_WarBoardUserTreasureData__bool__TypeInfo, v54);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v55);
    sub_B0D8A4(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v56);
    sub_B0D8A4(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo, v57);
    sub_B0D8A4(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v58);
    sub_B0D8A4(&System_Func_WarBoardUserWallData__bool__TypeInfo, v59);
    sub_B0D8A4(&System_Func_WarBoardStageNpcEntity__int__TypeInfo, v60);
    sub_B0D8A4(&System_Func_WarBoardUserServantData__bool__TypeInfo, v61);
    sub_B0D8A4(&HoldReinforcementsData_TypeInfo, v62);
    sub_B0D8A4(&int___TypeInfo, v63);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v64);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, v65);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, v66);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardItemData__Add__, v67);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, v68);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, v69);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__, v70);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v71);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v72);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardWallData__Add__, v73);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__, v74);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v75);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v76);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__, v77);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v78);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__, v79);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__, v80);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__, v81);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v82);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__, v83);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__, v84);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v85);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__, v86);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v87);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__, v88);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__, v89);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__, v90);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__, v91);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__, v92);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__, v93);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v94);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardUiData__TypeInfo, v95);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v96);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v97);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardItemData__TypeInfo, v98);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v99);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo, v100);
    sub_B0D8A4(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v101);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardWallData__TypeInfo, v102);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo, v103);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardEventData__TypeInfo, v104);
    sub_B0D8A4(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___, v105);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v106);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v107);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v108);
    sub_B0D8A4(&Method_WarBoardData___c___ctor_b__77_0__, v109);
    sub_B0D8A4(&Method_WarBoardData___c___ctor_b__77_1__, v110);
    sub_B0D8A4(&Method_WarBoardData___c___ctor_b__77_2__, v111);
    sub_B0D8A4(&Method_WarBoardData___c___ctor_b__77_3__, v112);
    sub_B0D8A4(&Method_WarBoardData___c___ctor_b__77_4__, v113);
    sub_B0D8A4(&Method_WarBoardData___c___ctor_b__77_9__, v114);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__, v115);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__, v116);
    sub_B0D8A4(&WarBoardData___c__DisplayClass77_0_TypeInfo, v117);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__, v118);
    sub_B0D8A4(&WarBoardData___c__DisplayClass77_1_TypeInfo, v119);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__, v120);
    sub_B0D8A4(&WarBoardData___c__DisplayClass77_2_TypeInfo, v121);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__, v122);
    sub_B0D8A4(&WarBoardData___c__DisplayClass77_3_TypeInfo, v123);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__, v124);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__, v125);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__, v126);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__, v127);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__, v128);
    sub_B0D8A4(&WarBoardData___c__DisplayClass77_4_TypeInfo, v129);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__, v130);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__, v131);
    sub_B0D8A4(&WarBoardData___c__DisplayClass77_5_TypeInfo, v132);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v133);
    sub_B0D8A4(&uint___TypeInfo, v134);
    sub_B0D8A4(&WarBoardBossBattleData_TypeInfo, v135);
    sub_B0D8A4(&Method_WarBoardData_ComparePiece__, v136);
    sub_B0D8A4(&WarBoardData_TypeInfo, v137);
    sub_B0D8A4(&WarBoardEffectData_TypeInfo, v138);
    sub_B0D8A4(&WarBoardEventData_TypeInfo, v139);
    sub_B0D8A4(&WarBoardItemData_TypeInfo, v140);
    sub_B0D8A4(&WarBoardData_WarBoardLocalSaveData_TypeInfo, v141);
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v142);
    sub_B0D8A4(&WarBoardPrevCondData_TypeInfo, v143);
    sub_B0D8A4(&WarBoardSquareData_TypeInfo, v144);
    sub_B0D8A4(&WarBoardSquareIndexData_TypeInfo, v145);
    sub_B0D8A4(&WarBoardTreasureData_TypeInfo, v146);
    sub_B0D8A4(&WarBoardUiData_TypeInfo, v147);
    sub_B0D8A4(&WarBoardWallData_TypeInfo, v148);
    byte_4213402 = 1;
  }
  entity = 0LL;
  isChangeName = 0;
  v149 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                         System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                         stage,
                                                                                         layoutEntities);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v149,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v149;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (System_Int32_array **)v149,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  v158 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardEventData__TypeInfo,
                                                                                                   v156,
                                                                                                   v157);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v158,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v158;
  p_listEvent = &this->fields.listEvent;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listEvent,
    (System_Int32_array **)v158,
    v159,
    v160,
    v161,
    v162,
    v163,
    v164);
  *(_QWORD *)&this->fields.winCondId = -1LL;
  v165 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  this->fields.latestPieceActionSquareIndexes = v165;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.latestPieceActionSquareIndexes,
    (System_Int32_array **)v165,
    v166,
    v167,
    v168,
    v169,
    v170,
    v171);
  v172 = (struct System_UInt32_array *)sub_B0D8BC(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v172;
  p_latestBattlePieceUniqueIndexes = (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v172,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  v181 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo,
                                                                                                   v179,
                                                                                                   v180);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v181,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v181;
  p_listPrevCond = (BattleServantConfConponent_o *)&this->fields.listPrevCond;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)v181,
    v182,
    v183,
    v184,
    v185,
    v186,
    v187);
  v190 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_HoldReinforcementsData__TypeInfo,
                                                                                                   v188,
                                                                                                   v189);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v190,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v190;
  p_reinforcementsSaveList = (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList,
    (System_Int32_array **)v190,
    v191,
    v192,
    v193,
    v194,
    v195,
    v196);
  v199 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v197, v198);
  System_Collections_Generic_List_int____ctor(
    v199,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v199;
  p_playedStageReinforcementsList = (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList,
    (System_Int32_array **)v199,
    v200,
    v201,
    v202,
    v203,
    v204,
    v205);
  v208 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardUiData__TypeInfo,
                                                                                                   v206,
                                                                                                   v207);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v208,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v208;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)v208,
    v209,
    v210,
    v211,
    v212,
    v213,
    v214);
  v217 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v215, v216);
  System_Collections_Generic_List_int____ctor(
    v217,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v217;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.masterExistsForce,
    (System_Int32_array **)v217,
    v218,
    v219,
    v220,
    v221,
    v222,
    v223);
  v226 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v224, v225);
  System_Collections_Generic_List_int____ctor(
    v226,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v226;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsAppointmentSquareList,
    (System_Int32_array **)v226,
    v227,
    v228,
    v229,
    v230,
    v231,
    v232);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v235 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v235 = WarBoardData___c_TypeInfo;
  }
  static_fields = v235->static_fields;
  _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v235->vtable._0_Equals.methodPtr) & 4) != 0 && !v235->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v235);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v238 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                           System_Comparison_WarBoardStageLayoutEntity__TypeInfo,
                                                                           v233,
                                                                           v234);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__77_0,
      v238,
      Method_WarBoardData___c___ctor_b__77_0__,
      (const MethodInfo_2412E90 *)Method_System_Comparison_WarBoardStageLayoutEntity___ctor__);
    v239 = WarBoardData___c_TypeInfo->static_fields;
    v239->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v239->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v240,
      v241,
      v242,
      v243,
      v244,
      v245);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)v7,
    (System_Comparison_T__o *)_9__77_0,
    (const MethodInfo_23398EC *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)stage,
    v246,
    v247,
    v248,
    v249,
    v250,
    v251);
  if ( !v7 )
    goto LABEL_331;
  v802 = v7;
  v253 = *(_QWORD *)&v7->max_length;
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  MasterData_WarQuestSelectionMaster = (struct WarBoardStageNpcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = MasterData_WarQuestSelectionMaster;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.stageNpcMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v255,
    v256,
    v257,
    v258,
    v259,
    v260);
  if ( !stage )
    goto LABEL_331;
  Instance = (__int64)this->fields.stageNpcMaster;
  v815 = v253;
  if ( !Instance )
    goto LABEL_331;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(
                            (WarBoardStageNpcMaster_o *)Instance,
                            stage->fields.id,
                            0LL);
  v264 = WarBoardData___c_TypeInfo;
  v265 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v264 = WarBoardData___c_TypeInfo;
  }
  v266 = v264->static_fields;
  _9__77_1 = v266->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v264->vtable._0_Equals.methodPtr) & 4) != 0 && !v264->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v264);
      v266 = WarBoardData___c_TypeInfo->static_fields;
    }
    v268 = (Il2CppObject *)v266->__9;
    _9__77_1 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B0D974(
                                                                System_Func_WarBoardStageNpcEntity__uint__TypeInfo,
                                                                v262,
                                                                v263);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_1,
      v268,
      Method_WarBoardData___c___ctor_b__77_1__,
      (const MethodInfo_261B478 *)Method_System_Func_WarBoardStageNpcEntity__uint___ctor__);
    v269 = WarBoardData___c_TypeInfo->static_fields;
    v269->__9__77_1 = _9__77_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v269->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v270,
      v271,
      v272,
      v273,
      v274,
      v275);
  }
  v276 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                           v265,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_1B5657C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v276;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.npcEntityDict,
    (System_Int32_array **)v276,
    v277,
    v278,
    v279,
    v280,
    v281,
    v282);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !Instance )
    goto LABEL_331;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(
                                  (WarBoardActionPointMaster_o *)Instance,
                                  stage->fields.id,
                                  0LL);
  v286 = WarBoardData___c_TypeInfo;
  v287 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v286 = WarBoardData___c_TypeInfo;
  }
  v288 = v286->static_fields;
  _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)v288->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v286->vtable._0_Equals.methodPtr) & 4) != 0 && !v286->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v286);
      v288 = WarBoardData___c_TypeInfo->static_fields;
    }
    v290 = (Il2CppObject *)v288->__9;
    _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B0D974(
                                                                System_Func_WarBoardActionPointEntity__uint__TypeInfo,
                                                                v284,
                                                                v285);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_2,
      v290,
      Method_WarBoardData___c___ctor_b__77_2__,
      (const MethodInfo_261B478 *)Method_System_Func_WarBoardActionPointEntity__uint___ctor__);
    v291 = WarBoardData___c_TypeInfo->static_fields;
    v291->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v291->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v292,
      v293,
      v294,
      v295,
      v296,
      v297);
  }
  v298 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                              v287,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_1B5657C *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v298;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.actionPointEntityDict,
    (System_Int32_array **)v298,
    v299,
    v300,
    v301,
    v302,
    v303,
    v304);
  Instance = (__int64)this->fields.npcEntityDict;
  if ( !Instance )
    goto LABEL_331;
  Values = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
             (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)Instance,
             (const MethodInfo_2E2832C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v308 = WarBoardData___c_TypeInfo;
  v309 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v308 = WarBoardData___c_TypeInfo;
  }
  v310 = v308->static_fields;
  _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v310->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( (BYTE3(v308->vtable._0_Equals.methodPtr) & 4) != 0 && !v308->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v308);
      v310 = WarBoardData___c_TypeInfo->static_fields;
    }
    v312 = (Il2CppObject *)v310->__9;
    _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_WarBoardStageNpcEntity__int__TypeInfo,
                                                                                 v306,
                                                                                 v307);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_3,
      v312,
      Method_WarBoardData___c___ctor_b__77_3__,
      (const MethodInfo_2619564 *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v313 = WarBoardData___c_TypeInfo->static_fields;
    v313->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v313->__9__77_3,
      (System_Int32_array **)_9__77_3,
      v314,
      v315,
      v316,
      v317,
      v318,
      v319);
  }
  p_bgAnimationInfo_k__BackingField = (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField;
  Instance = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
               v309,
               (System_Func_TSource__int__o *)_9__77_3,
               (const MethodInfo_1B4DF7C *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  npcEntityDict = this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = Instance;
  if ( !npcEntityDict )
    goto LABEL_331;
  v321 = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
           npcEntityDict,
           (const MethodInfo_2E2832C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v324 = WarBoardData___c_TypeInfo;
  v325 = (System_Collections_Generic_IEnumerable_TSource__o *)v321;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v324 = WarBoardData___c_TypeInfo;
  }
  v326 = v324->static_fields;
  _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v326->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( (BYTE3(v324->vtable._0_Equals.methodPtr) & 4) != 0 && !v324->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v324);
      v326 = WarBoardData___c_TypeInfo->static_fields;
    }
    v328 = (Il2CppObject *)v326->__9;
    _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_WarBoardStageNpcEntity__int__TypeInfo,
                                                                                 v322,
                                                                                 v323);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_4,
      v328,
      Method_WarBoardData___c___ctor_b__77_4__,
      (const MethodInfo_2619564 *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v329 = WarBoardData___c_TypeInfo->static_fields;
    v329->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v329->__9__77_4,
      (System_Int32_array **)_9__77_4,
      v330,
      v331,
      v332,
      v333,
      v334,
      v335);
  }
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
                                               v325,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_1B4DF7C *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  v787 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)Instance,
                                                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v797 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v800 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                                                                   v336,
                                                                                                   v337);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v800,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v795 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B0D974(
                                                                         System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                                         v338,
                                                                         v339);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v795,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v801 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                   v340,
                                                                                                   v341);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v801,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v792 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B0D974(
                                                                         System_Collections_Generic_List_WarBoardItemData__TypeInfo,
                                                                         v342,
                                                                         v343);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v792,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v788 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B0D974(
                                                                         System_Collections_Generic_List_WarBoardTreasureData__TypeInfo,
                                                                         v344,
                                                                         v345);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v788,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v793 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B0D974(
                                                                         System_Collections_Generic_List_WarBoardWallData__TypeInfo,
                                                                         v346,
                                                                         v347);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v793,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v791 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardEffectData__TypeInfo,
                                                                                                   v348,
                                                                                                   v349);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v791,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v350 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v350 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v350->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  Instance = EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0LL);
  v808 = this;
  p_listUiData = (BattleServantConfConponent_o *)&this->fields.listUiData;
  if ( (Instance & 1) != 0 )
  {
    if ( !serverData )
      goto LABEL_331;
    v352 = (const MethodInfo *)WarBoardData_TypeInfo;
    if ( serverData->fields.progressType == 3 )
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave(v352);
    }
    else
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
        v352 = (const MethodInfo *)WarBoardData_TypeInfo;
      }
      image = (System_String_o *)v352[2].klass->_1.image;
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
      v357 = System_Convert__FromBase64String(String, 0LL);
      v360 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v358, v359);
      MiniMessagePack_MiniMessagePacker___ctor(v360, 0LL);
      if ( !v360 )
        goto LABEL_331;
      v361 = MiniMessagePack_MiniMessagePacker__UnpackClass_WarBoardData_WarBoardLocalSaveData_(
               v360,
               v357,
               (const MethodInfo_2047E34 *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = v361;
      p_localSaveData = &this->fields.localSaveData;
      sub_B0D840(
        (BattleServantConfConponent_o *)p_localSaveData,
        (System_Int32_array **)v361,
        v363,
        v364,
        v365,
        v366,
        v367,
        v368);
      v369 = *p_localSaveData;
      v811 = p_localSaveData;
      if ( *p_localSaveData
        && v369->fields.questId == serverData->fields.questId
        && v369->fields.questPhase == serverData->fields.questPhase
        && v369->fields.stageId == serverData->fields.stageId )
      {
        if ( v369->fields.localSaveTiming == 6
          && (v369->fields.turn != serverData->fields.turn
           || v369->fields.turnForceId != serverData->fields.turnForceId
           || v369->fields.turnGroupId != serverData->fields.turnGroupId) )
        {
          v369->fields.localSaveTiming = 7;
        }
        Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !*p_localSaveData )
          goto LABEL_331;
        if ( !Instance )
          goto LABEL_331;
        Instance = (__int64)WarBoardManager__CheckAndLoadCacheServerData(
                              (WarBoardManager_o *)Instance,
                              serverData,
                              (*p_localSaveData)->fields.localSaveTiming,
                              0LL);
        v813 = Instance;
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
            if ( !v813 )
              goto LABEL_331;
            v403 = (BattleServantConfConponent_o *)(v813 + 40);
            v404 = p_localSaveData;
            if ( *(_QWORD *)(v813 + 40) )
            {
              if ( !*p_localSaveData )
                goto LABEL_331;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_331;
              if ( (int)treasureSaves->max_length >= 1 )
              {
                v809 = 0;
                v406 = 0LL;
                do
                {
                  v407 = sub_B0D974(WarBoardData___c__DisplayClass77_2_TypeInfo, v370, v371);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v407, 0LL);
                  if ( v406 >= treasureSaves->max_length )
                    goto LABEL_332;
                  if ( !v407 )
                    goto LABEL_331;
                  v414 = (System_Int32_array **)treasureSaves->m_Items[v406];
                  *(_QWORD *)(v407 + 16) = v414;
                  v415 = v407 + 16;
                  sub_B0D840((BattleServantConfConponent_o *)(v407 + 16), v414, v408, v409, v410, v411, v412, v413);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)v403->klass;
                  v419 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                              System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                                                              v417,
                                                                                              v418);
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v419,
                    (Il2CppObject *)v407,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                  Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                        klass,
                                        (System_Func_TSource__bool__o *)v419,
                                        (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( Instance )
                  {
                    if ( !*(_QWORD *)v415 )
                      goto LABEL_331;
                    if ( !*(_BYTE *)(*(_QWORD *)v415 + 20LL) )
                    {
                      *(_BYTE *)(Instance + 20) = 0;
                      v809 = 1;
                    }
                  }
                  ++v406;
                }
                while ( (__int64)v406 < (int)treasureSaves->max_length );
                v404 = p_localSaveData;
                if ( (v809 & 1) != 0 )
                {
                  v420 = WarBoardData___c_TypeInfo;
                  v421 = (System_Collections_Generic_IEnumerable_TSource__o *)v403->klass;
                  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v420 = WarBoardData___c_TypeInfo;
                  }
                  v422 = v420->static_fields;
                  _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v422->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( (BYTE3(v420->vtable._0_Equals.methodPtr) & 4) != 0 && !v420->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v420);
                      v422 = WarBoardData___c_TypeInfo->static_fields;
                    }
                    v424 = (Il2CppObject *)v422->__9;
                    _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                                    System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                                                                    v370,
                                                                                                    v371);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      _9__77_9,
                      v424,
                      Method_WarBoardData___c___ctor_b__77_9__,
                      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                    v425 = WarBoardData___c_TypeInfo->static_fields;
                    v425->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_B0D840(
                      (BattleServantConfConponent_o *)&v425->__9__77_9,
                      (System_Int32_array **)_9__77_9,
                      v426,
                      v427,
                      v428,
                      v429,
                      v430,
                      v431);
                  }
                  v432 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                           v421,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v433 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v432,
                                                  (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  v403->klass = (BattleServantConfConponent_c *)v433;
                  sub_B0D840(v403, v433, v434, v435, v436, v437, v438, v439);
                }
              }
            }
            if ( !*v404 )
              goto LABEL_331;
            wallSaves = (*v404)->fields.wallSaves;
            if ( !wallSaves )
              goto LABEL_331;
            if ( (int)wallSaves->max_length < 1 )
            {
LABEL_149:
              if ( !*p_localSaveData )
                goto LABEL_331;
              v454 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_WarBoardSquareIndexData_(
                (WarBoardSquareIndexData_array **)(v813 + 88),
                v454,
                (const MethodInfo_232FE10 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              if ( v454 >= 1 )
              {
                v457 = 0LL;
                v458 = v454;
                v459 = 8LL;
                while ( *v811 )
                {
                  squareIndexInfo = (*v811)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v457 >= squareIndexInfo->max_length )
                    goto LABEL_332;
                  v461 = *(unsigned int **)(v813 + 88);
                  v462 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v459 * 4);
                  v463 = (WarBoardSquareIndexData_o *)sub_B0D974(WarBoardSquareIndexData_TypeInfo, v455, v456);
                  WarBoardSquareIndexData___ctor_27846384(v463, v462, 0LL);
                  if ( !v461 )
                    break;
                  if ( v463 )
                  {
                    Instance = sub_B0D964(v463, *(_QWORD *)(*(_QWORD *)v461 + 64LL));
                    if ( !Instance )
                    {
LABEL_333:
                      v781 = sub_B0D99C();
                      sub_B0D948(v781, 0LL);
                    }
                  }
                  if ( v457 >= v461[6] )
                    goto LABEL_332;
                  *(_QWORD *)&v461[v459] = v463;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)&v461[v459],
                    (System_Int32_array **)v463,
                    v464,
                    v465,
                    v466,
                    v467,
                    v468,
                    v469);
                  ++v457;
                  v459 += 2LL;
                  if ( (__int64)v457 >= v458 )
                    goto LABEL_160;
                }
                goto LABEL_331;
              }
LABEL_160:
              if ( !*v811 )
                goto LABEL_331;
              v354 = (WarBoardDataEntity_o *)v813;
              v470 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*v811)->fields.bossBattleInfo,
                       (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_WarBoardSquareIndexData_(
                (WarBoardSquareIndexData_array **)(v813 + 96),
                v470,
                (const MethodInfo_232FE10 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v470 >= 1 )
              {
                v473 = 0LL;
                v474 = v470;
                v475 = 8LL;
                do
                {
                  if ( !*v811 )
                    goto LABEL_331;
                  bossBattleInfo = (*v811)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_331;
                  if ( v473 >= bossBattleInfo->max_length )
                    goto LABEL_332;
                  v477 = *(unsigned int **)(v813 + 96);
                  v478 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v475 * 4);
                  v479 = (WarBoardBossBattleData_o *)sub_B0D974(WarBoardBossBattleData_TypeInfo, v471, v472);
                  WarBoardBossBattleData___ctor_22049224(v479, v478, v480);
                  if ( !v477 )
                    goto LABEL_331;
                  if ( v479 )
                  {
                    Instance = sub_B0D964(v479, *(_QWORD *)(*(_QWORD *)v477 + 64LL));
                    if ( !Instance )
                      goto LABEL_333;
                  }
                  if ( v473 >= v477[6] )
                    goto LABEL_332;
                  *(_QWORD *)&v477[v475] = v479;
                  sub_B0D840(
                    (BattleServantConfConponent_o *)&v477[v475],
                    (System_Int32_array **)v479,
                    v481,
                    v482,
                    v483,
                    v484,
                    v485,
                    v486);
                  ++v473;
                  v475 += 2LL;
                }
                while ( (__int64)v473 < v474 );
                v354 = (WarBoardDataEntity_o *)v813;
              }
              v7 = v802;
              goto LABEL_178;
            }
            v441 = 0LL;
            while ( 1 )
            {
              v442 = sub_B0D974(WarBoardData___c__DisplayClass77_3_TypeInfo, v370, v371);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v442, 0LL);
              if ( v441 >= wallSaves->max_length )
                break;
              if ( !v442 )
                goto LABEL_331;
              v449 = (System_Int32_array **)wallSaves->m_Items[v441];
              *(_QWORD *)(v442 + 16) = v449;
              sub_B0D840((BattleServantConfConponent_o *)(v442 + 16), v449, v443, v444, v445, v446, v447, v448);
              v450 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v813 + 48);
              v453 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                          System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                                                          v451,
                                                                                          v452);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v453,
                (Il2CppObject *)v442,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v450,
                                    (System_Func_TSource__bool__o *)v453,
                                    (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( Instance )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)Instance,
                  *(WarBoardWallData_SaveData_o **)(v442 + 16),
                  0LL);
              if ( (__int64)++v441 >= (int)wallSaves->max_length )
                goto LABEL_149;
            }
          }
          else
          {
            v390 = 0LL;
            while ( 1 )
            {
              v391 = sub_B0D974(WarBoardData___c__DisplayClass77_1_TypeInfo, v370, v371);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v391, 0LL);
              if ( v390 >= itemSaves->max_length )
                break;
              if ( !v391 )
                goto LABEL_331;
              v398 = (System_Int32_array **)itemSaves->m_Items[v390];
              *(_QWORD *)(v391 + 16) = v398;
              sub_B0D840((BattleServantConfConponent_o *)(v391 + 16), v398, v392, v393, v394, v395, v396, v397);
              if ( !v813 )
                goto LABEL_331;
              v401 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v813 + 32);
              v402 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                          System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                                                          v399,
                                                                                          v400);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v402,
                (Il2CppObject *)v391,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v401,
                                    (System_Func_TSource__bool__o *)v402,
                                    (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( Instance )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)Instance,
                  *(WarBoardItemData_SaveData_o **)(v391 + 16),
                  0LL);
              if ( (__int64)++v390 >= (int)itemSaves->max_length )
                goto LABEL_117;
            }
          }
        }
        else
        {
          v373 = 0LL;
          while ( 1 )
          {
            v374 = sub_B0D974(WarBoardData___c__DisplayClass77_0_TypeInfo, v370, v371);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v374, 0LL);
            if ( v373 >= pieceSaves->max_length )
              break;
            if ( !v374 )
              goto LABEL_331;
            v381 = (System_Int32_array **)pieceSaves->m_Items[v373];
            *(_QWORD *)(v374 + 16) = v381;
            v382 = (WarBoardPieceData_SaveData_o **)(v374 + 16);
            sub_B0D840((BattleServantConfConponent_o *)(v374 + 16), v381, v375, v376, v377, v378, v379, v380);
            if ( !*(_QWORD *)(v374 + 16) || !v813 )
              goto LABEL_331;
            if ( *(_DWORD *)(*(_QWORD *)(v374 + 16) + 24LL) )
            {
              v385 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v813 + 16);
              v386 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                          System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                                          v383,
                                                                                          v384);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v386,
                (Il2CppObject *)v374,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v385,
                                    (System_Func_TSource__bool__o *)v386,
                                    (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( Instance )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)Instance, *v382, 0LL);
            }
            else
            {
              v387 = *(System_Collections_Generic_IEnumerable_TSource__o **)(v813 + 24);
              v388 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                          System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                                                          v383,
                                                                                          v384);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v388,
                (Il2CppObject *)v374,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
              Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                    v387,
                                    (System_Func_TSource__bool__o *)v388,
                                    (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( Instance )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)Instance, *v382, 0LL);
            }
            if ( (__int64)++v373 >= (int)pieceSaves->max_length )
              goto LABEL_107;
          }
        }
LABEL_332:
        v780 = sub_B0D9A8(Instance);
        sub_B0D948(v780, 0LL);
      }
      v487 = WarBoardData_TypeInfo;
      if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave((const MethodInfo *)v487);
      *p_localSaveData = 0LL;
      sub_B0D840((BattleServantConfConponent_o *)p_localSaveData, 0LL, v488, v489, v490, v491, v492, v493);
    }
    v354 = serverData;
LABEL_178:
    v353 = v815;
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_331;
    goto LABEL_179;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_331;
  v353 = v815;
  v354 = serverData;
  if ( !Instance )
    goto LABEL_331;
LABEL_179:
  WarBoardManager__InitializeLogic((WarBoardManager_o *)Instance, v354, v354->fields.progressType != 3, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)Instance, v354, 0LL);
  v814 = v354;
  if ( v353 >= 1 )
  {
    p_enemyDeck = &v354->fields.enemyDeck;
    v810 = 0;
    p_myDeck = &v354->fields.myDeck;
    v496 = 0LL;
    v497 = v353;
    v798 = v353;
    do
    {
      v498 = sub_B0D974(WarBoardData___c__DisplayClass77_4_TypeInfo, v494, v495);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v498, 0LL);
      if ( v496 >= v7->max_length )
        goto LABEL_332;
      if ( !v498 )
        goto LABEL_331;
      v505 = (System_Int32_array **)v7->m_Items[v496];
      *(_QWORD *)(v498 + 16) = v505;
      v506 = (WarBoardStageLayoutEntity_o **)(v498 + 16);
      sub_B0D840((BattleServantConfConponent_o *)(v498 + 16), v505, v499, v500, v501, v502, v503, v504);
      v507 = *(WarBoardStageLayoutEntity_o **)(v498 + 16);
      v510 = (WarBoardSquareData_o *)sub_B0D974(WarBoardSquareData_TypeInfo, v508, v509);
      WarBoardSquareData___ctor(v510, v507, roadEntities, 0LL);
      if ( v496 )
      {
        if ( (unsigned int)(v496 - 1) >= v7->max_length )
          goto LABEL_332;
        v512 = *((_QWORD *)&v7->max_length + v496);
        if ( !v512 )
          goto LABEL_331;
        v513 = *v506;
        if ( !*v506 )
          goto LABEL_331;
        if ( *(_DWORD *)(v512 + 20) == v513->fields.squareIndex )
          goto LABEL_196;
      }
      else
      {
        v513 = *v506;
        if ( !*v506 )
          goto LABEL_331;
      }
      throughCondId = v513->fields.throughCondId;
      if ( throughCondId )
      {
        Instance = (__int64)v797;
        if ( !v797 )
          goto LABEL_331;
        condGroup[0] = 0;
        if ( !WarBoardCommonReleaseMaster__IsOpen_22061376(v797, throughCondId, condGroup, v511) )
        {
          Instance = (__int64)v795;
          if ( !v795 )
            goto LABEL_331;
          v518 = (EventMissionProgressRequest_Argument_ProgressData_o *)v510;
          v519 = (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
          goto LABEL_243;
        }
      }
      Instance = (__int64)v800;
      if ( !v800 )
        goto LABEL_331;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v800,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v510,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
      v513 = *v506;
      if ( !*v506 )
        goto LABEL_331;
LABEL_196:
      if ( v513->fields.isPiecePut )
      {
        questId = v354->fields.questId;
        questPhase = v354->fields.questPhase;
        if ( v513->fields.pieceIndex )
        {
          svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v354->fields.svtInfo;
          v516 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                                      v494,
                                                                                      v495);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v516,
            (Il2CppObject *)v498,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
            (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
          v517 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   svtInfo,
                   (System_Func_TSource__bool__o *)v516,
                   (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
          Instance = 0LL;
        }
        else
        {
          masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v354->fields.masterInfo;
          v521 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                                                      v494,
                                                                                      v495);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v521,
            (Il2CppObject *)v498,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
            (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
          Instance = (__int64)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                masterInfo,
                                (System_Func_TSource__bool__o *)v521,
                                (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
          v517 = 0LL;
        }
        v522 = *v506;
        if ( !*v506 )
          goto LABEL_331;
        v523 = p_enemyDeck;
        v816 = (WarBoardUserMasterData_o *)Instance;
        if ( !v522->fields.forceId )
        {
          v523 = p_enemyDeck;
          if ( !v522->fields.pieceIndex )
            v523 = p_myDeck;
        }
        v524 = *v523;
        Type = Follower__getType(v522->fields.followerType, 0LL);
        IsNpc = Follower__IsNpc(Type, 0LL);
        progressType = v354->fields.progressType;
        v528 = *v506;
        v529 = IsNpc;
        v530 = *p_npcEntityDict;
        v533 = (WarBoardPieceData_o *)sub_B0D974(WarBoardPieceData_TypeInfo, v531, v532);
        v534 = v533;
        v535 = progressType == 3;
        if ( v529 )
        {
          WarBoardPieceData___ctor(v533, v528, (WarBoardUserServantData_o *)v517, v816, v524, v535, v530, v810, 0LL);
          if ( !v534 )
            goto LABEL_331;
          v354 = v814;
          v7 = v802;
          Instance = (__int64)Master_WarQuestSelectionMaster;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_331;
          Entity_19793912 = NpcFollowerMaster__GetEntity_19793912(
                              Master_WarQuestSelectionMaster,
                              questId,
                              questPhase,
                              v534->fields._npcId_k__BackingField,
                              0LL);
          if ( Entity_19793912 )
          {
            v537 = Entity_19793912;
            v534->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_19793912, 0LL);
            v534->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v537, 0LL);
          }
          if ( WarBoardPieceData__get_isPlayerGroup(v534, 0LL) )
          {
            Instance = (__int64)v787;
            if ( !v787 )
              goto LABEL_331;
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   v787,
                   &entity,
                   v534->fields._npcId_k__BackingField,
                   (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            {
              Instance = (__int64)entity;
              if ( !entity )
                goto LABEL_331;
              NpcServantFollowerEntity__GetFollowerName_19795384(
                (NpcServantFollowerEntity_o *)entity,
                v534->fields._npcId_k__BackingField,
                questId,
                questPhase,
                &isChangeName,
                0LL);
              if ( isChangeName )
              {
                Instance = (__int64)v534->fields._battleServant_k__BackingField;
                if ( !Instance )
                  goto LABEL_331;
                BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
              }
            }
          }
          Instance = (__int64)v801;
          if ( !v801 )
            goto LABEL_331;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v801,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v534,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
          ++v810;
        }
        else
        {
          WarBoardPieceData___ctor(v533, v528, (WarBoardUserServantData_o *)v517, v816, v524, v535, v530, -1, 0LL);
          if ( !v534 )
            goto LABEL_331;
          v354 = v814;
          v7 = v802;
          if ( WarBoardPieceData__get_isMaster(v534, 0LL) )
          {
            Instance = (__int64)*p_masterExistsForce;
            if ( !*p_masterExistsForce )
              goto LABEL_331;
            if ( !System_Collections_Generic_List_int___Contains(
                    (System_Collections_Generic_List_int__o *)Instance,
                    v534->fields._forceId_k__BackingField,
                    (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              Instance = (__int64)*p_masterExistsForce;
              if ( !*p_masterExistsForce )
                goto LABEL_331;
              System_Collections_Generic_List_int___Add(
                (System_Collections_Generic_List_int__o *)Instance,
                v534->fields._forceId_k__BackingField,
                (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          Instance = (__int64)v801;
          if ( !v801 )
            goto LABEL_331;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v801,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v534,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
        v497 = v798;
      }
      v538 = *v506;
      if ( !*v506 )
        goto LABEL_331;
      switch ( v538->fields.type )
      {
        case 2:
          getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v354->fields.getItemInfo;
          v540 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                                                      v494,
                                                                                      v495);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v540,
            (Il2CppObject *)v498,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
            (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
          v541 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   getItemInfo,
                   (System_Func_TSource__bool__o *)v540,
                   (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
          v542 = *(WarBoardStageLayoutEntity_o **)(v498 + 16);
          v543 = (WarBoardUserGetItemData_o *)v541;
          v546 = (WarBoardItemData_o *)sub_B0D974(WarBoardItemData_TypeInfo, v544, v545);
          WarBoardItemData___ctor(v546, v542, v543, 0LL);
          Instance = (__int64)v792;
          if ( !v792 )
            goto LABEL_331;
          v547 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
          goto LABEL_242;
        case 3:
          v546 = (WarBoardItemData_o *)sub_B0D974(WarBoardEffectData_TypeInfo, v494, v495);
          WarBoardEffectData___ctor((WarBoardEffectData_o *)v546, v538, 0LL);
          Instance = (__int64)v791;
          if ( !v791 )
            goto LABEL_331;
          v547 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
          goto LABEL_242;
        case 4:
          treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v354->fields.treasureInfo;
          if ( !treasureInfo )
            goto LABEL_236;
          v549 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                                                      v494,
                                                                                      v495);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v549,
            (Il2CppObject *)v498,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
            (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
          if ( System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                 treasureInfo,
                 (System_Func_TSource__bool__o *)v549,
                 (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___) )
          {
            goto LABEL_244;
          }
          v538 = *v506;
LABEL_236:
          v546 = (WarBoardItemData_o *)sub_B0D974(WarBoardTreasureData_TypeInfo, v494, v495);
          WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v546, v538, 0LL);
          Instance = (__int64)v788;
          if ( !v788 )
            goto LABEL_331;
          v547 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_242:
          v519 = (const MethodInfo_2FC56E8 *)*v547;
          v518 = (EventMissionProgressRequest_Argument_ProgressData_o *)v546;
          break;
        case 5:
          wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v354->fields.wallInfo;
          v551 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                                                      v494,
                                                                                      v495);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v551,
            (Il2CppObject *)v498,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
            (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
          v552 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   wallInfo,
                   (System_Func_TSource__bool__o *)v551,
                   (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
          v553 = *(WarBoardStageLayoutEntity_o **)(v498 + 16);
          v554 = (WarBoardUserWallData_o *)v552;
          v546 = (WarBoardItemData_o *)sub_B0D974(WarBoardWallData_TypeInfo, v555, v556);
          WarBoardWallData___ctor((WarBoardWallData_o *)v546, v553, v554, 0LL);
          Instance = (__int64)v793;
          if ( !v793 )
            goto LABEL_331;
          v547 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
          goto LABEL_242;
        default:
          goto LABEL_244;
      }
LABEL_243:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Instance,
        v518,
        v519);
LABEL_244:
      ++v496;
    }
    while ( (__int64)v496 < v497 );
  }
  Instance = (__int64)v800;
  if ( !v800 )
    goto LABEL_331;
  v557 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v800,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v808->fields.squares = (struct WarBoardSquareData_array *)v557;
  sub_B0D840((BattleServantConfConponent_o *)&v808->fields.squares, v557, v558, v559, v560, v561, v562, v563);
  Instance = (__int64)v795;
  if ( !v795 )
    goto LABEL_331;
  v564 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v795,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v808->fields.condSquares = (struct WarBoardSquareData_array *)v564;
  sub_B0D840((BattleServantConfConponent_o *)&v808->fields.condSquares, v564, v565, v566, v567, v568, v569, v570);
  Instance = (__int64)v801;
  if ( !v801 )
    goto LABEL_331;
  v571 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v801,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v808->fields.pieces = (struct WarBoardPieceData_array *)v571;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v808->fields.pieces;
  sub_B0D840((BattleServantConfConponent_o *)&v808->fields.pieces, v571, v573, v574, v575, v576, v577, v578);
  pieces = (BattleBuffData_BuffData_array *)v808->fields.pieces;
  v582 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B0D974(
                                                                     System_Comparison_WarBoardPieceData__TypeInfo,
                                                                     v580,
                                                                     v581);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v582,
    (Il2CppObject *)v808,
    Method_WarBoardData_ComparePiece__,
    (const MethodInfo_2412E90 *)Method_System_Comparison_WarBoardPieceData___ctor__);
  System_Array__Sort_BattleBuffData_BuffData_(
    pieces,
    (System_Comparison_T__o *)v582,
    (const MethodInfo_23398EC *)Method_System_Array_Sort_WarBoardPieceData___);
  Instance = (__int64)v792;
  if ( !v792 )
    goto LABEL_331;
  v583 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v792,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v808->fields.items = (struct WarBoardItemData_array *)v583;
  sub_B0D840((BattleServantConfConponent_o *)&v808->fields.items, v583, v584, v585, v586, v587, v588, v589);
  Instance = (__int64)v788;
  if ( !v788 )
    goto LABEL_331;
  v590 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v788,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v808->fields.treasures = (struct WarBoardTreasureData_array *)v590;
  sub_B0D840((BattleServantConfConponent_o *)&v808->fields.treasures, v590, v591, v592, v593, v594, v595, v596);
  Instance = (__int64)v791;
  if ( !v791 )
    goto LABEL_331;
  v597 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v791,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v808->fields.effects = (struct WarBoardEffectData_array *)v597;
  sub_B0D840((BattleServantConfConponent_o *)&v808->fields.effects, v597, v598, v599, v600, v601, v602, v603);
  Instance = (__int64)v793;
  if ( !v793 )
    goto LABEL_331;
  v604 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v793,
                                  (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v808->fields.walls = (struct WarBoardWallData_array *)v604;
  sub_B0D840((BattleServantConfConponent_o *)&v808->fields.walls, v604, v605, v606, v607, v608, v609, v610);
  v808->fields.serverData = v354;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v808->fields.serverData,
    (System_Int32_array **)v354,
    v611,
    v612,
    v613,
    v614,
    v615,
    v616);
  if ( v354->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v808, v617);
  localSaveData = v808->fields.localSaveData;
  if ( localSaveData )
  {
    v620 = localSaveData->fields.pieceSaves;
    v817 = &v808->fields.localSaveData;
    if ( v620 )
    {
      if ( (int)v620->max_length >= 1 )
      {
        v621 = &WarBoardData___c__DisplayClass77_5_TypeInfo;
        v622 = 0LL;
        m_Items = v620->m_Items;
        v819 = localSaveData->fields.pieceSaves;
        do
        {
          v624 = sub_B0D974(*v621, v617, v618);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v624, 0LL);
          if ( v622 >= v620->max_length )
            goto LABEL_332;
          if ( !v624 )
            goto LABEL_331;
          v631 = (System_Int32_array **)m_Items[v622];
          *(_QWORD *)(v624 + 16) = v631;
          v632 = (WarBoardPieceData_SaveData_o **)(v624 + 16);
          sub_B0D840((BattleServantConfConponent_o *)(v624 + 16), v631, v625, v626, v627, v628, v629, v630);
          v633 = *p_pieces;
          v636 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                      v634,
                                                                                      v635);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v636,
            (Il2CppObject *)v624,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
          if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v633,
                  (System_Func_T__bool__o *)v636,
                  (const MethodInfo_17071E4 *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v639 = (System_Collections_Generic_IEnumerable_TSource__o *)v354->fields.svtInfo;
            v640 = m_Items;
            v641 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                        System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                                        v637,
                                                                                        v638);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v641,
              (Il2CppObject *)v624,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
            v642 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                     v639,
                     (System_Func_TSource__bool__o *)v641,
                     (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v645 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v643, v644);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v645,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v645 )
              goto LABEL_331;
            v646 = v621;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v645,
              *p_pieces,
              (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_331;
            id = p_fields->stageEntity->fields.id;
            v650 = *v632;
            v651 = (WarBoardPieceData_o *)sub_B0D974(WarBoardPieceData_TypeInfo, v647, v648);
            WarBoardPieceData___ctor_22020696(v651, id, (WarBoardUserServantData_o *)v642, v650, 0LL, -1, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v645,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v651,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
            v652 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v645,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v652;
            sub_B0D840((BattleServantConfConponent_o *)p_pieces, v652, v653, v654, v655, v656, v657, v658);
            v354 = v814;
            v621 = v646;
            m_Items = v640;
            v620 = v819;
          }
          Instance = (__int64)*v632;
          if ( !*v632 )
            goto LABEL_331;
          WarBoardPieceData_SaveData__SetOwner((WarBoardPieceData_SaveData_o *)Instance, v808, 0LL);
          Instance = (__int64)*v632;
          if ( !*v632 )
            goto LABEL_331;
          WarBoardPieceData_SaveData__Load((WarBoardPieceData_SaveData_o *)Instance, 0LL);
        }
        while ( (__int64)++v622 < (int)v620->max_length );
      }
      if ( *v817 )
      {
        v659 = (*v817)->fields.itemSaves;
        if ( v659 )
        {
          max_length = v659->max_length;
          if ( max_length >= 1 )
          {
            v661 = 0;
            while ( v661 < max_length )
            {
              v662 = (__int64)v659 + 8 * (int)v661;
              v663 = *(WarBoardItemData_SaveData_o **)(v662 + 32);
              if ( !v663 )
                goto LABEL_331;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v662 + 32), v808, 0LL);
              WarBoardItemData_SaveData__Load(v663, 0LL);
              max_length = v659->max_length;
              if ( (int)++v661 >= max_length )
                goto LABEL_274;
            }
            goto LABEL_332;
          }
LABEL_274:
          if ( *v817 )
          {
            v664 = (*v817)->fields.treasureSaves;
            if ( v664 )
            {
              v665 = v664->max_length;
              if ( v665 >= 1 )
              {
                v666 = 0;
                while ( v666 < v665 )
                {
                  v667 = (__int64)v664 + 8 * (int)v666;
                  v668 = *(WarBoardTreasureData_SaveData_o **)(v667 + 32);
                  if ( !v668 )
                    goto LABEL_331;
                  WarBoardTreasureData_SaveData__SetOwner(*(WarBoardTreasureData_SaveData_o **)(v667 + 32), v808, 0LL);
                  WarBoardTreasureData_SaveData__Load(v668, 0LL);
                  v665 = v664->max_length;
                  if ( (int)++v666 >= v665 )
                    goto LABEL_281;
                }
                goto LABEL_332;
              }
LABEL_281:
              if ( *v817 )
              {
                v669 = (*v817)->fields.wallSaves;
                if ( v669 )
                {
                  v670 = v669->max_length;
                  if ( v670 >= 1 )
                  {
                    v671 = 0;
                    while ( v671 < v670 )
                    {
                      v672 = (__int64)v669 + 8 * (int)v671;
                      v673 = *(WarBoardWallData_SaveData_o **)(v672 + 32);
                      if ( !v673 )
                        goto LABEL_331;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v672 + 32), v808, 0LL);
                      WarBoardWallData_SaveData__Load(v673, 0LL);
                      v670 = v669->max_length;
                      if ( (int)++v671 >= v670 )
                        goto LABEL_288;
                    }
                    goto LABEL_332;
                  }
LABEL_288:
                  if ( *v817 )
                  {
                    squareSaves = (*v817)->fields.squareSaves;
                    if ( squareSaves )
                    {
                      v675 = squareSaves->max_length;
                      if ( v675 >= 1 )
                      {
                        v676 = 0;
                        while ( v676 < v675 )
                        {
                          v677 = (__int64)squareSaves + 8 * (int)v676;
                          v678 = *(WarBoardSquareData_SaveData_o **)(v677 + 32);
                          if ( !v678 )
                            goto LABEL_331;
                          WarBoardSquareData_SaveData__SetOwner(
                            *(WarBoardSquareData_SaveData_o **)(v677 + 32),
                            v808,
                            0LL);
                          WarBoardSquareData_SaveData__Load(v678, 0LL);
                          v675 = squareSaves->max_length;
                          if ( (int)++v676 >= v675 )
                            goto LABEL_295;
                        }
                        goto LABEL_332;
                      }
LABEL_295:
                      if ( *v817 )
                      {
                        v808->fields.isPlayedHalfDeadMessage = (*v817)->fields.isPlayedHalfDeadMessage;
                        v679 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_WarBoardEventData__TypeInfo, v617, v618);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v679,
                          (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v808->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v679;
                        sub_B0D840(
                          (BattleServantConfConponent_o *)p_listEvent,
                          (System_Int32_array **)v679,
                          v680,
                          v681,
                          v682,
                          v683,
                          v684,
                          v685);
                        v693 = v808->fields.localSaveData;
                        if ( v693 )
                        {
                          eventSaves = v693->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v695 = *(_QWORD *)&eventSaves->max_length;
                            if ( (int)v695 >= 1 )
                            {
                              v696 = 0LL;
                              while ( v696 < (unsigned int)v695 )
                              {
                                v697 = eventSaves->m_Items[v696];
                                v698 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_listEvent;
                                v699 = (WarBoardEventData_o *)sub_B0D974(WarBoardEventData_TypeInfo, v686, v687);
                                WarBoardEventData___ctor_17633500(v699, v697, 0LL);
                                if ( !v698 )
                                  goto LABEL_331;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v698,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v699,
                                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
                                LODWORD(v695) = eventSaves->max_length;
                                if ( (__int64)++v696 >= (int)v695 )
                                  goto LABEL_303;
                              }
                              goto LABEL_332;
                            }
LABEL_303:
                            v700 = *v817;
                            if ( *v817 )
                            {
                              v808->fields.winCondId = v700->fields.winCondId;
                              latestPieceActionSquareIndexes = (System_Int32_array **)v700->fields.latestPieceActionSquareIndexes;
                              v808->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)latestPieceActionSquareIndexes;
                              sub_B0D840(
                                (BattleServantConfConponent_o *)p_latestPieceActionSquareIndexes,
                                latestPieceActionSquareIndexes,
                                v687,
                                v688,
                                v689,
                                v690,
                                v691,
                                v692);
                              v708 = v808->fields.localSaveData;
                              if ( v708 )
                              {
                                latestBattlePieceUniqueIndexes = (System_Int32_array **)v708->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = (BattleServantConfConponent_c *)latestBattlePieceUniqueIndexes;
                                sub_B0D840(
                                  p_latestBattlePieceUniqueIndexes,
                                  latestBattlePieceUniqueIndexes,
                                  v702,
                                  v703,
                                  v704,
                                  v705,
                                  v706,
                                  v707);
                                v712 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v710, v711);
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                  v712,
                                  (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (BattleServantConfConponent_c *)v712;
                                sub_B0D840(
                                  p_listPrevCond,
                                  (System_Int32_array **)v712,
                                  v713,
                                  v714,
                                  v715,
                                  v716,
                                  v717,
                                  v718);
                                if ( *v817 )
                                {
                                  prevCondSaves = (*v817)->fields.prevCondSaves;
                                  if ( prevCondSaves )
                                  {
                                    v722 = *(_QWORD *)&prevCondSaves->max_length;
                                    if ( (int)v722 >= 1 )
                                    {
                                      v723 = 0LL;
                                      while ( v723 < (unsigned int)v722 )
                                      {
                                        v724 = prevCondSaves->m_Items[v723];
                                        v725 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listPrevCond->klass;
                                        v726 = (WarBoardPrevCondData_o *)sub_B0D974(
                                                                           WarBoardPrevCondData_TypeInfo,
                                                                           v719,
                                                                           v720);
                                        WarBoardPrevCondData___ctor_27781848(v726, v724, 0LL);
                                        if ( !v725 )
                                          goto LABEL_331;
                                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                          v725,
                                          (EventMissionProgressRequest_Argument_ProgressData_o *)v726,
                                          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
                                        LODWORD(v722) = prevCondSaves->max_length;
                                        if ( (__int64)++v723 >= (int)v722 )
                                          goto LABEL_312;
                                      }
                                      goto LABEL_332;
                                    }
LABEL_312:
                                    v727 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v719, v720);
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                      v727,
                                      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (BattleServantConfConponent_c *)v727;
                                    sub_B0D840(
                                      p_reinforcementsSaveList,
                                      (System_Int32_array **)v727,
                                      v728,
                                      v729,
                                      v730,
                                      v731,
                                      v732,
                                      v733);
                                    if ( *v817 )
                                    {
                                      reinforcementsSaves = (*v817)->fields.reinforcementsSaves;
                                      if ( reinforcementsSaves )
                                      {
                                        v737 = *(_QWORD *)&reinforcementsSaves->max_length;
                                        if ( (int)v737 >= 1 )
                                        {
                                          v738 = 0LL;
                                          while ( v738 < (unsigned int)v737 )
                                          {
                                            v739 = reinforcementsSaves->m_Items[v738];
                                            v740 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_reinforcementsSaveList->klass;
                                            v741 = (HoldReinforcementsData_o *)sub_B0D974(
                                                                                 HoldReinforcementsData_TypeInfo,
                                                                                 v734,
                                                                                 v735);
                                            HoldReinforcementsData___ctor_26820864(v741, v739, 0LL);
                                            if ( !v740 )
                                              goto LABEL_331;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v740,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v741,
                                              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
                                            LODWORD(v737) = reinforcementsSaves->max_length;
                                            if ( (__int64)++v738 >= (int)v737 )
                                              goto LABEL_319;
                                          }
                                          goto LABEL_332;
                                        }
LABEL_319:
                                        if ( *v817 )
                                        {
                                          v742 = (System_Int32_array **)System_Linq_Enumerable__ToList_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)(*v817)->fields.playedReinforcements,
                                                                          (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (BattleServantConfConponent_c *)v742;
                                          sub_B0D840(
                                            p_playedStageReinforcementsList,
                                            v742,
                                            v743,
                                            v744,
                                            v745,
                                            v746,
                                            v747,
                                            v748);
                                          v751 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_WarBoardUiData__TypeInfo, v749, v750);
                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                            v751,
                                            (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (BattleServantConfConponent_c *)v751;
                                          sub_B0D840(
                                            p_listUiData,
                                            (System_Int32_array **)v751,
                                            v752,
                                            v753,
                                            v754,
                                            v755,
                                            v756,
                                            v757);
                                          if ( *v817 )
                                          {
                                            uiDataSaves = (*v817)->fields.uiDataSaves;
                                            if ( uiDataSaves )
                                            {
                                              v766 = *(_QWORD *)&uiDataSaves->max_length;
                                              if ( (int)v766 >= 1 )
                                              {
                                                v767 = 0LL;
                                                while ( v767 < (unsigned int)v766 )
                                                {
                                                  v768 = uiDataSaves->m_Items[v767];
                                                  v769 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listUiData->klass;
                                                  v770 = (WarBoardUiData_o *)sub_B0D974(
                                                                               WarBoardUiData_TypeInfo,
                                                                               v758,
                                                                               v759);
                                                  WarBoardUiData___ctor_26260812(v770, v768, 0LL);
                                                  if ( !v769 )
                                                    goto LABEL_331;
                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                    v769,
                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v770,
                                                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
                                                  LODWORD(v766) = uiDataSaves->max_length;
                                                  if ( (__int64)++v767 >= (int)v766 )
                                                    goto LABEL_327;
                                                }
                                                goto LABEL_332;
                                              }
LABEL_327:
                                              if ( *v817 )
                                              {
                                                bgAnimationInfo = (System_Int32_array **)(*v817)->fields.bgAnimationInfo;
                                                p_bgAnimationInfo_k__BackingField->klass = (BattleServantConfConponent_c *)bgAnimationInfo;
                                                sub_B0D840(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  bgAnimationInfo,
                                                  v759,
                                                  v760,
                                                  v761,
                                                  v762,
                                                  v763,
                                                  v764);
                                                v772 = *v817;
                                                if ( *v817 )
                                                {
                                                  v808->fields._ContinueConsumeType_k__BackingField = v772->fields.continueConsumeType;
                                                  v808->fields._IsContinue_k__BackingField = v772->fields.isContinue;
                                                  v808->fields._IsNextTurn_k__BackingField = v772->fields.isNextTurn;
                                                  v808->fields.localSaveTiming = v772->fields.localSaveTiming;
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
    sub_B0D97C(Instance);
  }
  v773 = (WarBoardData_WarBoardLocalSaveData_o *)sub_B0D974(WarBoardData_WarBoardLocalSaveData_TypeInfo, v617, v618);
  WarBoardData_WarBoardLocalSaveData___ctor_20599232(v773, v808, 0LL);
  v808->fields.localSaveData = v773;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v808->fields.localSaveData,
    (System_Int32_array **)v773,
    v774,
    v775,
    v776,
    v777,
    v778,
    v779);
}


void __fastcall WarBoardData__AddPlayedEventData(
        WarBoardData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x0

  if ( (byte_421343D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, eventData);
    byte_421343D = 1;
  }
  listEvent = this->fields.listEvent;
  if ( !listEvent )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listEvent,
    (EventMissionProgressRequest_Argument_ProgressData_o *)eventData,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
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
  __int64 v29; // x2
  NpcFollowerMaster_o *v30; // x26
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x24
  __int64 v34; // x8
  unsigned __int64 v35; // x23
  WarBoardUserServantData_o *v36; // x22
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v38; // x8
  __int64 v39; // x9
  WarBoardReinforcementsMaster_o *v40; // x19
  __int64 v41; // x1
  __int64 v42; // x2
  struct System_Collections_Generic_List_int__o *reinforcementsAppointmentSquareList; // x25
  WarBoardReinforcementsEntity_o *v44; // x20
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  int32_t v46; // w21
  int32_t v47; // w25
  WarBoardPieceData_o *v48; // x27
  NpcFollowerEntity_o *Entity_19793912; // x0
  NpcFollowerEntity_o *v50; // x20
  struct WarBoardPieceData_array **p_pieces; // x20
  struct WarBoardPieceData_array *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **svtInfo; // x1
  __int64 v66; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x1
  __int64 v75; // x2
  unsigned __int64 v76; // x23
  signed __int64 v77; // x24
  __int64 v78; // x25
  struct WarBoardData_WarBoardLocalSaveData_o *v79; // x8
  struct WarBoardPieceData_array *v80; // x9
  unsigned int *pieceSaves; // x27
  WarBoardPieceData_o *v82; // x22
  WarBoardPieceData_SaveData_o *v83; // x21
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  __int64 v91; // x0
  __int64 v92; // x0
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v93; // [xsp+8h] [xbp-B8h]
  WarBoardDataEntity_o *v94; // [xsp+10h] [xbp-B0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-A8h]
  System_Int32_array *v96; // [xsp+20h] [xbp-A0h]
  WarBoardUserServantData_array *v97; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v98; // [xsp+30h] [xbp-90h]
  WarBoardUserServantData_o **m_Items; // [xsp+38h] [xbp-88h]
  int32_t questPhase; // [xsp+40h] [xbp-80h]
  int32_t questId; // [xsp+44h] [xbp-7Ch]
  WarBoardStageReinforcementsEntity_o *stageReinforcementsEntity; // [xsp+48h] [xbp-78h]
  int32_t *v103; // [xsp+50h] [xbp-70h]
  bool isChangeName; // [xsp+5Ch] [xbp-64h] BYREF
  UserServantEntity_o *v105; // [xsp+60h] [xbp-60h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_421343B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, serverData);
    sub_B0D8A4(&Method_DataManager_GetMaster_NpcFollowerMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v12);
    sub_B0D8A4(&DataManager_TypeInfo, v13);
    sub_B0D8A4(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__RemoveAt__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v21);
    sub_B0D8A4(&WarBoardPieceData_SaveData___TypeInfo, v22);
    sub_B0D8A4(&WarBoardPieceData_SaveData_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v25);
    byte_421343B = 1;
  }
  entity = 0LL;
  v105 = 0LL;
  isChangeName = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  Instance = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !serverData )
    goto LABEL_60;
  v94 = serverData;
  v30 = (NpcFollowerMaster_o *)Instance;
  questId = serverData->fields.questId;
  questPhase = serverData->fields.questPhase;
  v93 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                            v28,
                                                                            v29);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v93,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_60;
  v34 = *(_QWORD *)&reinfoSvtInfo->max_length;
  v98 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v33;
  if ( (int)v34 >= 1 )
  {
    v35 = 0LL;
    stageReinforcementsEntity = reinfoStage;
    v103 = &indexList->m_Items[1];
    m_Items = reinfoSvtInfo->m_Items;
    v96 = indexList;
    v97 = reinfoSvtInfo;
    do
    {
      if ( v35 >= (unsigned int)v34 )
      {
LABEL_61:
        v91 = sub_B0D9A8(Instance);
        sub_B0D948(v91, 0LL);
      }
      v36 = m_Items[v35];
      if ( v36 )
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
        if ( v35 >= indexList->max_length )
          goto LABEL_61;
        if ( v103[v35] < (signed int)reinforcementsIds->max_length )
          goto LABEL_43;
      }
      if ( v35 >= indexList->max_length )
        goto LABEL_61;
      v38 = reinfoStage->fields.reinforcementsIds;
      if ( !v38 )
        goto LABEL_60;
      v39 = v103[v35];
      if ( (unsigned int)v39 >= v38->max_length )
        goto LABEL_61;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_60;
      v40 = Master_WarQuestSelectionMaster;
      Instance = WarBoardReinforcementsMaster__TryGetEntity(
                   Master_WarQuestSelectionMaster,
                   &entity,
                   v38->m_Items[v39 + 1],
                   0LL);
      reinforcementsAppointmentSquareList = this->fields.reinforcementsAppointmentSquareList;
      if ( !reinforcementsAppointmentSquareList )
        goto LABEL_60;
      v44 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      if ( !reinforcementsAppointmentSquareList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      if ( v35 >= indexList->max_length )
        goto LABEL_61;
      v46 = reinforcementsAppointmentSquareList->fields._items->m_Items[1];
      v47 = v103[v35];
      v48 = (WarBoardPieceData_o *)sub_B0D974(WarBoardPieceData_TypeInfo, v41, v42);
      WarBoardPieceData___ctor_22019448(v48, stageReinforcementsEntity, v44, v36, npcEntityDict, v35, v46, v47, 0LL);
      Instance = (__int64)this->fields.reinforcementsAppointmentSquareList;
      if ( !Instance )
        goto LABEL_60;
      System_Collections_Generic_List_int___RemoveAt(
        (System_Collections_Generic_List_int__o *)Instance,
        0,
        (const MethodInfo_2FB1BB8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v98;
      if ( !v48 || !v30 )
        goto LABEL_60;
      Master_WarQuestSelectionMaster = v40;
      Entity_19793912 = NpcFollowerMaster__GetEntity_19793912(
                          v30,
                          questId,
                          questPhase,
                          v48->fields._npcId_k__BackingField,
                          0LL);
      if ( Entity_19793912 )
      {
        v50 = Entity_19793912;
        v48->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_19793912, 0LL);
        v48->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v50, 0LL);
      }
      Instance = WarBoardPieceData__get_isPlayerGroup(v48, 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = (__int64)MasterData_WarQuestSelectionMaster;
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        Instance = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                     MasterData_WarQuestSelectionMaster,
                     &v105,
                     v48->fields._npcId_k__BackingField,
                     (const MethodInfo_2669E58 *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__);
        if ( (Instance & 1) != 0 )
        {
          Instance = (__int64)v105;
          if ( !v105 )
            goto LABEL_60;
          Instance = (__int64)NpcServantFollowerEntity__GetFollowerName_19795384(
                                (NpcServantFollowerEntity_o *)v105,
                                v48->fields._npcId_k__BackingField,
                                questId,
                                questPhase,
                                &isChangeName,
                                0LL);
          if ( isChangeName )
          {
            Instance = (__int64)v48->fields._battleServant_k__BackingField;
            if ( !Instance )
              goto LABEL_60;
            BattleServantData__ClearOverwriteServantName((BattleServantData_o *)Instance, 0LL);
          }
        }
      }
      if ( !v98 )
        goto LABEL_60;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v98,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v48,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      reinfoStage = stageReinforcementsEntity;
      indexList = v96;
      reinfoSvtInfo = v97;
LABEL_43:
      LODWORD(v34) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v35 < (int)v34 );
  }
  if ( !v93 )
    goto LABEL_60;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v93,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v93,
    (System_Collections_Generic_IEnumerable_T__o *)v33,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v52 = (struct WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v93,
                                            (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = v52;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.pieces,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  Instance = (__int64)this->fields.serverData;
  if ( !Instance
    || (svtInfo = (System_Int32_array **)v94->fields.svtInfo,
        *(_QWORD *)(Instance + 16) = svtInfo,
        sub_B0D840((BattleServantConfConponent_o *)(Instance + 16), svtInfo, v59, v60, v61, v62, v63, v64),
        !*p_pieces)
    || (v66 = *(_QWORD *)&(*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        Instance = sub_B0D8BC(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v66),
        !localSaveData) )
  {
LABEL_60:
    sub_B0D97C(Instance);
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)Instance;
  sub_B0D840(
    (BattleServantConfConponent_o *)&localSaveData->fields.pieceSaves,
    (System_Int32_array **)Instance,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  if ( (int)v66 >= 1 )
  {
    v76 = 0LL;
    v77 = (int)v66;
    v78 = 8LL;
    do
    {
      v79 = this->fields.localSaveData;
      if ( !v79 )
        goto LABEL_60;
      v80 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_60;
      if ( v76 >= v80->max_length )
        goto LABEL_61;
      pieceSaves = (unsigned int *)v79->fields.pieceSaves;
      v82 = *(WarBoardPieceData_o **)((char *)&v80->obj.klass + v78 * 4);
      v83 = (WarBoardPieceData_SaveData_o *)sub_B0D974(WarBoardPieceData_SaveData_TypeInfo, v74, v75);
      WarBoardPieceData_SaveData___ctor_22736960(v83, v82, 0LL);
      if ( !pieceSaves )
        goto LABEL_60;
      if ( v83 )
      {
        Instance = sub_B0D964(v83, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !Instance )
        {
          v92 = sub_B0D99C();
          sub_B0D948(v92, 0LL);
        }
      }
      if ( v76 >= pieceSaves[6] )
        goto LABEL_61;
      *(_QWORD *)&pieceSaves[v78] = v83;
      sub_B0D840(
        (BattleServantConfConponent_o *)&pieceSaves[v78],
        (System_Int32_array **)v83,
        v84,
        v85,
        v86,
        v87,
        v88,
        v89);
      ++v76;
      v78 += 2LL;
    }
    while ( (__int64)v76 < v77 );
  }
  Instance = (__int64)v98;
  if ( !v98 )
    goto LABEL_60;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v98,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
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
  __int64 v19; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v27; // x22
  System_Collections_Generic_List_int__o *v28; // x21
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4213442 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__, v14);
    sub_B0D8A4(&WarBoardData___c__DisplayClass173_0_TypeInfo, v15);
    byte_4213442 = 1;
  }
  v16 = (WarBoardData___c__DisplayClass173_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass173_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   *(_QWORD *)&effectId);
  WarBoardData___c__DisplayClass173_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  v16->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardSquareIndexData__bool__TypeInfo,
                                                                             v18,
                                                                             v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v22,
                                                                     (const MethodInfo_170767C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v27 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v28 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v24, v25);
  System_Collections_Generic_List_int____ctor_50000796(
    v28,
    v27,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  if ( !v28 )
LABEL_10:
    sub_B0D97C(v17);
  if ( !System_Collections_Generic_List_int___Contains(
          v28,
          effectId,
          (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Add(
      v28,
      effectId,
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    v29 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v28,
                                   (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v29;
    sub_B0D840(p_isExecute, v29, v30, v31, v32, v33, v34, v35);
  }
}


void __fastcall WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v17; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__191_0; // x20
  Il2CppObject *v20; // x21
  struct WarBoardData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  WarBoardData___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  struct WarBoardData___c_StaticFields *v33; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__191_1; // x20
  Il2CppObject *v35; // x21
  struct WarBoardData___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  WarBoardData___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_T__o *v47; // x19
  struct WarBoardData___c_StaticFields *v48; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_2; // x20
  Il2CppObject *v50; // x21
  struct WarBoardData___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_4213451 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_BattleBuffData___ctor__, method);
    sub_B0D8A4(&System_Action_BattleBuffData__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_BattleBuffData___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_BattleBuffData___, v7);
    sub_B0D8A4(&Method_System_Func_BattleBuffData__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__, v9);
    sub_B0D8A4(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo, v10);
    sub_B0D8A4(&System_Func_BattleBuffData__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, v12);
    sub_B0D8A4(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, v13);
    sub_B0D8A4(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, v14);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v15);
    byte_4213451 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v17 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v17 = WarBoardData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                  System_Func_WarBoardPieceData__BattleBuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__191_0,
      v20,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_0__,
      (const MethodInfo_261A104 *)Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__);
    v21 = WarBoardData___c_TypeInfo->static_fields;
    v21->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__191_0,
      (System_Int32_array **)_9__191_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v31 = WarBoardData___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v31 = WarBoardData___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v33->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v33 = WarBoardData___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_BattleBuffData__bool__TypeInfo,
                                                                                     v29,
                                                                                     v30);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__191_1,
      v35,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_BattleBuffData__bool___ctor__);
    v36 = WarBoardData___c_TypeInfo->static_fields;
    v36->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v36->__9__191_1,
      (System_Int32_array **)_9__191_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v32,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v46 = WarBoardData___c_TypeInfo;
  v47 = (System_Collections_Generic_IEnumerable_T__o *)v43;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v46 = WarBoardData___c_TypeInfo;
  }
  v48 = v46->static_fields;
  _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v48->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v48 = WarBoardData___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)v48->__9;
    _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                       System_Action_BattleBuffData__TypeInfo,
                                                                                       v44,
                                                                                       v45);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__191_2,
      v50,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_2__,
      (const MethodInfo_246EA3C *)Method_System_Action_BattleBuffData___ctor__);
    v51 = WarBoardData___c_TypeInfo->static_fields;
    v51->__9__191_2 = (struct System_Action_BattleBuffData__o *)_9__191_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v51->__9__191_2,
      (System_Int32_array **)_9__191_2,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v47,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_BattleBuffData___);
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
  const MethodInfo *v9; // x2
  int v10; // w8
  __int64 v11; // x21
  const MethodInfo_2A71064 **v12; // x26
  unsigned int v13; // w27
  WarBoardPieceData_o *v14; // x22
  __int64 v15; // x23
  WarBoardManager_o *v16; // x24
  const MethodInfo_299B944 *v17; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x24
  const MethodInfo_2A71064 **v19; // x19
  WebViewManager_o *Instance; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x26
  __int64 v28; // x0
  __int64 v29; // x0
  WarBoardData_o *v30; // [xsp+8h] [xbp-68h]
  System_Nullable_Vector3__o v31; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o v32; // 0:x3.8
  System_Nullable_Vector3__o v33; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v3 = taskList;
  if ( (byte_4213408 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, taskList);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v7);
    byte_4213408 = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_24:
    sub_B0D97C(AliveServantPieces);
  v10 = *(_DWORD *)(AliveServantPieces + 24);
  v11 = AliveServantPieces;
  if ( v10 >= 1 )
  {
    v12 = (const MethodInfo_2A71064 **)&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
    v13 = 0;
    v30 = this;
    while ( v13 < v10 )
    {
      v14 = *(WarBoardPieceData_o **)(v11 + 8LL * (int)v13 + 32);
      if ( !v14 )
        goto LABEL_24;
      AliveServantPieces = (__int64)WarBoardData__GetItem(this, v14->fields._nowSquareIndex_k__BackingField, v9);
      if ( AliveServantPieces )
      {
        v15 = AliveServantPieces;
        AliveServantPieces = WarBoardItemData__get_Acquired((WarBoardItemData_o *)AliveServantPieces, 0LL);
        if ( (AliveServantPieces & 1) == 0 )
        {
          AliveServantPieces = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance(*v12);
          if ( !*(_QWORD *)(v15 + 56) )
            goto LABEL_24;
          v16 = (WarBoardManager_o *)AliveServantPieces;
          AliveServantPieces = (__int64)UnityEngine_Component__get_transform(
                                          *(UnityEngine_Component_o **)(v15 + 56),
                                          0LL);
          if ( !AliveServantPieces )
            goto LABEL_24;
          localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)AliveServantPieces, 0LL);
          *(_QWORD *)&v33.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v33.fields.value.fields.x = &v31;
          *(_QWORD *)&v31.fields.value.fields.x = 0LL;
          *(_QWORD *)&v31.fields.value.fields.z = 0LL;
          System_Nullable_Vector3____ctor(v33, localPosition, v17);
          if ( !v16 )
            goto LABEL_24;
          v32 = 0LL;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           v16,
                                                                                           v31,
                                                                                           v32,
                                                                                           1,
                                                                                           0,
                                                                                           1,
                                                                                           0LL);
          if ( v3 )
          {
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v3,
              CameraPerformanceTask,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          }
          else
          {
            v19 = v12;
            Instance = SingletonMonoBehaviour_WebViewManager___get_Instance(*v12);
            AliveServantPieces = sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
            if ( !AliveServantPieces )
              goto LABEL_24;
            v27 = AliveServantPieces;
            if ( CameraPerformanceTask )
            {
              AliveServantPieces = sub_B0D964(CameraPerformanceTask, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                v29 = sub_B0D99C();
                sub_B0D948(v29, 0LL);
              }
            }
            if ( !*(_DWORD *)(v27 + 24) )
              break;
            *(_QWORD *)(v27 + 32) = CameraPerformanceTask;
            sub_B0D840(
              (BattleServantConfConponent_o *)(v27 + 32),
              (System_Int32_array **)CameraPerformanceTask,
              v21,
              v22,
              v23,
              v24,
              v25,
              v26);
            if ( !Instance )
              goto LABEL_24;
            WarBoardManager__AddTask((WarBoardManager_o *)Instance, 0, (WarBoardTaskBase_array *)v27, 0LL);
            v12 = v19;
            v3 = 0LL;
            this = v30;
          }
          AliveServantPieces = WarBoardItemData__Get((WarBoardItemData_o *)v15, v14, v3, 0, 0LL);
        }
      }
      v10 = *(_DWORD *)(v11 + 24);
      if ( (int)++v13 >= v10 )
        return;
    }
    v28 = sub_B0D9A8(AliveServantPieces);
    sub_B0D948(v28, 0LL);
  }
}


bool __fastcall WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *Master_WarQuestSelectionMaster; // x0
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

  if ( (byte_421340D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_int____67988208, v6);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_WarBoardData___c__CheckWinCond_b__98_0__, v9);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v10);
    byte_421340D = 1;
  }
  condGroup = 0;
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_22061376(
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
      Master_WarQuestSelectionMaster = WarBoardData__GetPieces_22066704(this, i, v19, v3);
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
            v35 = sub_B0D9A8(Master_WarQuestSelectionMaster);
            sub_B0D948(v35, 0LL);
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
    _9__98_0 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, method, v2);
    System_Func_int__bool____ctor(
      _9__98_0,
      v27,
      Method_WarBoardData___c__CheckWinCond_b__98_0__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v28 = WarBoardData___c_TypeInfo->static_fields;
    v28->__9__98_0 = _9__98_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v28->__9__98_0,
      (System_Int32_array **)_9__98_0,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
  }
  return (v16 == 0) & (System_Linq_Enumerable__Count_int__28606324(
                         (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
                         (System_Func_TSource__bool__o *)_9__98_0,
                         (const MethodInfo_1B47F74 *)Method_System_Linq_Enumerable_Count_int____67988208) > 0) | (v17 == 0);
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

  if ( (byte_4213445 & 1) == 0 )
  {
    sub_B0D8A4(&uint___TypeInfo, method);
    byte_4213445 = 1;
  }
  v3 = (struct System_UInt32_array *)sub_B0D8BC(uint___TypeInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v3;
  sub_B0D840(
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
    sub_B0D97C(this);
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

  if ( (byte_4213459 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardData_BattleParticipantInfo_TypeInfo, attackPieceData);
    byte_4213459 = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_B0D974(
                                                 WarBoardData_BattleParticipantInfo_TypeInfo,
                                                 attackPieceData,
                                                 targetPieceData);
  WarBoardData_BattleParticipantInfo___ctor(v6, attackPieceData, targetPieceData, 0LL);
  return v6;
}


void __fastcall WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4213405 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B0D8A4(&WarBoardData_TypeInfo, v2);
    byte_4213405 = 1;
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
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  System_Delegate_o *v10; // x21
  WarBoardData___c_c *v11; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v14; // x23
  struct WarBoardData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  WarBoardData_o *v30; // x0
  int32_t v31; // w1
  const MethodInfo *v32; // x2

  if ( (byte_4213435 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, method);
    sub_B0D8A4(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__, v3);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v4);
    sub_B0D8A4(&WarBoardWaitTime_TypeInfo, v5);
    byte_4213435 = 1;
  }
  v6 = sub_B0D974(WarBoardWaitTime_TypeInfo, method, v2);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v6, 0.0, 0LL);
  if ( !v6 )
    sub_B0D97C(v7);
  v10 = *(System_Delegate_o **)(v6 + 40);
  v11 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v11 = WarBoardData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__152_0 = static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v8, v9);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v14,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0LL);
    v15 = WarBoardData___c_TypeInfo->static_fields;
    v15->__9__152_0 = _9__152_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v15->__9__152_0,
      (System_Int32_array **)_9__152_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  v22 = (System_Int32_array **)System_Delegate__Combine(v10, (System_Delegate_o *)_9__152_0, 0LL);
  if ( v22 && *v22 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v30 = (WarBoardData_o *)sub_B0DC70(v22);
    return (WarBoardWaitTime_o *)WarBoardData__GetStageBossData(v30, v31, v32);
  }
  else
  {
    *(_QWORD *)(v6 + 40) = v22;
    sub_B0D840((BattleServantConfConponent_o *)(v6 + 40), v22, v23, v24, v25, v26, v27, v28);
    return (WarBoardWaitTime_o *)v6;
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
  __int64 v19; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v27; // x22
  System_Collections_Generic_List_int__o *v28; // x21
  System_Int32_array **v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  if ( (byte_4213443 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor___67884944, v12);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__, v14);
    sub_B0D8A4(&WarBoardData___c__DisplayClass174_0_TypeInfo, v15);
    byte_4213443 = 1;
  }
  v16 = (WarBoardData___c__DisplayClass174_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass174_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   *(_QWORD *)&effectId);
  WarBoardData___c__DisplayClass174_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_10;
  v16->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardSquareIndexData__bool__TypeInfo,
                                                                             v18,
                                                                             v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v22,
                                                                     (const MethodInfo_170767C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v27 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v28 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v24, v25);
  System_Collections_Generic_List_int____ctor_50000796(
    v28,
    v27,
    (const MethodInfo_2FAF39C *)Method_System_Collections_Generic_List_int___ctor___67884944);
  if ( !v28 )
LABEL_10:
    sub_B0D97C(v17);
  if ( System_Collections_Generic_List_int___Contains(
         v28,
         effectId,
         (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v28,
      effectId,
      (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
    v29 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v28,
                                   (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v29;
    sub_B0D840(p_isExecute, v29, v30, v31, v32, v33, v34, v35);
  }
}


void __fastcall WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_4213406 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B0D8A4(&WarBoardData_TypeInfo, v2);
    byte_4213406 = 1;
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

  if ( (byte_4213404 & 1) == 0 )
  {
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B0D8A4(&WarBoardData_TypeInfo, v2);
    byte_4213404 = 1;
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
  if ( (byte_421340A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_421340A = 1;
  }
  value = 0LL;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2E2A2AC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v10; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__110_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4213419 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, v7);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v8);
    byte_4213419 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v10 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v10 = WarBoardData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__110_0,
      v13,
      Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v14 = WarBoardData___c_TypeInfo->static_fields;
    v14->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__110_0,
      (System_Int32_array **)_9__110_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v21,
                                                                   (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v10; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__107_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4213416 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__GetAlivePieces_b__107_0__, v7);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v8);
    byte_4213416 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v10 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v10 = WarBoardData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__107_0,
      v13,
      Method_WarBoardData___c__GetAlivePieces_b__107_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v14 = WarBoardData___c_TypeInfo->static_fields;
    v14->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__107_0,
      (System_Int32_array **)_9__107_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v21,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v10; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__109_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4213418 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__, v7);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v8);
    byte_4213418 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v10 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v10 = WarBoardData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__109_0,
      v13,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v14 = WarBoardData___c_TypeInfo->static_fields;
    v14->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__109_0,
      (System_Int32_array **)_9__109_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v21,
                                                                   (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v10; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__108_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4213417 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, v7);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v8);
    byte_4213417 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v10 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v10 = WarBoardData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__108_0,
      v13,
      Method_WarBoardData___c__GetAliveServantPieces_b__108_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v14 = WarBoardData___c_TypeInfo->static_fields;
    v14->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__108_0,
      (System_Int32_array **)_9__108_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v21,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20
  peRenderTexture_ChangeLayerObject_o *v15; // x0

  if ( (byte_4213449 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__, *(_QWORD *)&condId);
    sub_B0D8A4(&Method_System_Predicate_WarBoardPrevCondData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_WarBoardPrevCondData__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass183_0_TypeInfo, v8);
    byte_4213449 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass183_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass183_0_TypeInfo,
                                                  *(_QWORD *)&condId,
                                                  method);
  WarBoardData___c__DisplayClass183_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.condId = condId,
        listPrevCond = this->fields.listPrevCond,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_WarBoardPrevCondData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_WarBoardPrevCondData___ctor__),
        !listPrevCond) )
  {
    sub_B0D97C(v10);
  }
  v15 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listPrevCond,
          (System_Predicate_T__o *)v14,
          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v15 )
    return HIDWORD(v15->fields.gameObject);
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_4213427 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardSquareData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardSquareData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass130_0_TypeInfo, v8);
    byte_4213427 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass130_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass130_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass130_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardSquareData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v14,
                                   (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  void *Piece_22073600; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  int max_length; // w8
  unsigned int v19; // w25
  int32_t value; // w1
  System_Int32_array *v21; // x28
  unsigned __int64 v22; // x27
  WarBoardData___c__DisplayClass133_0_o *v23; // x22
  const MethodInfo *v24; // x2
  int32_t v25; // w1
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v28; // x24
  System_Func_int__bool__o *v29; // x23
  __int64 v31; // x0
  System_Int32_array_array *v32; // [xsp+8h] [xbp-58h]

  v3 = squareIds;
  if ( (byte_4213429 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int___, squareIds);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__, v11);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__, v12);
    sub_B0D8A4(&WarBoardData___c__DisplayClass133_0_TypeInfo, v13);
    byte_4213429 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    squareIds,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_27;
  max_length = v3->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0;
    v32 = v3;
    while ( 1 )
    {
      if ( v19 >= max_length )
      {
LABEL_26:
        v31 = sub_B0D9A8(Piece_22073600);
        sub_B0D948(v31, 0LL);
      }
      v21 = v3->m_Items[v19];
      if ( !v21 )
        break;
      if ( (int)v21->max_length < 1 )
      {
        value = -1;
        if ( !v14 )
          break;
      }
      else
      {
        v22 = 0LL;
        do
        {
          v23 = (WarBoardData___c__DisplayClass133_0_o *)sub_B0D974(
                                                           WarBoardData___c__DisplayClass133_0_TypeInfo,
                                                           v16,
                                                           v17);
          WarBoardData___c__DisplayClass133_0___ctor(v23, 0LL);
          if ( v22 >= v21->max_length )
            goto LABEL_26;
          if ( !v23 )
            goto LABEL_27;
          v25 = v21->m_Items[v22 + 1];
          v23->fields.value = v25;
          Piece_22073600 = WarBoardData__GetPiece_22073600(this, v25, v24);
          if ( !Piece_22073600 )
          {
            Piece_22073600 = WarBoardData__GetUnusedTreasure(this, v23->fields.value, v17);
            if ( !Piece_22073600 )
            {
              Piece_22073600 = WarBoardData__GetWall(this, v23->fields.value, 0, v26);
              if ( !Piece_22073600 )
              {
                reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
                v28 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v16, v17);
                System_Func_int__bool____ctor(
                  v28,
                  (Il2CppObject *)v23,
                  Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
                  (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
                Piece_22073600 = (void *)BasicHelper__Any_int_(
                                           reinforcementsAppointmentSquareList,
                                           (System_Func_T__bool__o *)v28,
                                           (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___);
                if ( ((unsigned __int8)Piece_22073600 & 1) == 0 )
                {
                  v29 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v16, v17);
                  System_Func_int__bool____ctor(
                    v29,
                    (Il2CppObject *)v23,
                    Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
                  Piece_22073600 = (void *)BasicHelper__Any_int_(
                                             (System_Collections_Generic_List_T__o *)v14,
                                             (System_Func_T__bool__o *)v29,
                                             (const MethodInfo_1706DF4 *)Method_BasicHelper_Any_int___);
                  if ( ((unsigned __int8)Piece_22073600 & 1) == 0 )
                  {
                    value = v23->fields.value;
                    goto LABEL_20;
                  }
                }
              }
            }
          }
          ++v22;
        }
        while ( (__int64)v22 < (int)v21->max_length );
        value = -1;
LABEL_20:
        v3 = v32;
        if ( !v14 )
          break;
      }
      System_Collections_Generic_List_int___Add(
        v14,
        value,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = v3->max_length;
      if ( (int)++v19 >= max_length )
        goto LABEL_24;
    }
LABEL_27:
    sub_B0D97C(Piece_22073600);
  }
LABEL_24:
  if ( !v14 )
    goto LABEL_27;
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213432 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4213432 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                stageEntity->fields.editBgmId,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B0D97C(Instance);
  }
  return 0LL;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetEditableServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v10; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__120_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_421341F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, v7);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v8);
    byte_421341F = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v10 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v10 = WarBoardData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__120_0,
      v13,
      Method_WarBoardData___c__GetEditableServantPieces_b__120_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v14 = WarBoardData___c_TypeInfo->static_fields;
    v14->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__120_0,
      (System_Int32_array **)_9__120_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v21,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_421342E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardEffectData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardEffectData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass142_0_TypeInfo, v8);
    byte_421342E = 1;
  }
  v9 = (WarBoardData___c__DisplayClass142_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass142_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass142_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardEffectData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardEffectData__bool___ctor__);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   effects,
                                   (System_Func_TSource__bool__o *)v14,
                                   (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_4213414 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass105_0_TypeInfo, v8);
    byte_4213414 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass105_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass105_0_TypeInfo,
                                                  *(_QWORD *)&stageBossIndex,
                                                  method);
  WarBoardData___c__DisplayClass105_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v14,
                                  (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
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
    sub_B0D97C(this);
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
  __int64 v45; // x2
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x22
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__188_0; // x24
  Il2CppObject *v49; // x25
  struct WarBoardData___c_StaticFields *v50; // x0
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x22
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  __int64 v66; // x1
  __int64 v67; // x2
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v68; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v69; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  int v71; // w26
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x24
  __int64 v75; // x0
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  System_Int32_array **current; // x1
  HoldReinforcementsData_o **v83; // x22
  __int64 v84; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  _BOOL8 v86; // x0
  const MethodInfo *v87; // x2
  System_Int32_array *DeploySquareIds; // x0
  const MethodInfo *v89; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v92; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  struct System_Int32_array *v94; // x8
  __int64 v95; // x9
  _BOOL4 v96; // w25
  WebViewManager_o *Instance; // x0
  _BOOL8 IsPlayerTurn; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x10
  int max_length; // w11
  int v103; // w10
  System_Collections_Generic_List_T__o *v104; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v105; // x26
  bool v106; // w0
  __int64 v107; // x1
  __int64 v108; // x2
  _BOOL8 v109; // x0
  __int64 v110; // x1
  __int64 v111; // x2
  Il2CppObject *v112; // x24
  System_Collections_Generic_List_int__o *v113; // x25
  __int64 v114; // x1
  __int64 v115; // x2
  System_Collections_Generic_List_int__o *v116; // x26
  __int64 v117; // x0
  __int64 v118; // x0
  System_Int32_array **v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x0
  __int64 v127; // x0
  __int64 v128; // x8
  System_Int32_array **v129; // x0
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  WebViewManager_o *v136; // x0
  __int64 v137; // x8
  __int64 v138; // x9
  System_Collections_Generic_List_int__o *v139; // x0
  int v140; // w8
  __int64 v141; // x24
  __int64 v142; // x0
  __int64 v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  __int64 v150; // x0
  System_String_array **v151; // x2
  System_String_array **v152; // x3
  System_Boolean_array **v153; // x4
  System_Int32_array **v154; // x5
  System_Int32_array *v155; // x6
  System_Int32_array *v156; // x7
  __int64 v157; // x8
  WebViewManager_o *v158; // x0
  __int64 v159; // x8
  __int64 v160; // x9
  System_Collections_Generic_List_int__o *v161; // x0
  __int64 v162; // x0
  __int64 v163; // x0
  int v164; // w26
  __int64 v165; // x0
  __int64 v166; // x0
  __int64 v167; // x0
  __int64 v168; // x0
  __int64 v169; // x0
  __int64 v170; // x0
  __int64 v171; // x0
  int v172; // [xsp+14h] [xbp-CCh]
  int v173; // [xsp+1Ch] [xbp-C4h]
  _BYTE v175[36]; // [xsp+28h] [xbp-B8h] BYREF
  int v176; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v177; // [xsp+50h] [xbp-90h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v179; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_421344E & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_ReinforcementsData___, reinforcementsDatas);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__, v15);
    sub_B0D8A4(&Method_System_Func_ReinforcementsData__bool___ctor__, v16);
    sub_B0D8A4(&Method_System_Func_HoldReinforcementsData__bool___ctor__, v17);
    sub_B0D8A4(&System_Func_ReinforcementsData__bool__TypeInfo, v18);
    sub_B0D8A4(&System_Func_HoldReinforcementsData__bool__TypeInfo, v19);
    sub_B0D8A4(&int___TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__, v29);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_B0D8A4(&System_Collections_Generic_List_ReinforcementsData__TypeInfo, v31);
    sub_B0D8A4(&Method_System_Predicate_HoldReinforcementsData___ctor__, v32);
    sub_B0D8A4(&System_Predicate_HoldReinforcementsData__TypeInfo, v33);
    sub_B0D8A4(&ReinforcementsData_TypeInfo, v34);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v35);
    sub_B0D8A4(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, v36);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__, v37);
    sub_B0D8A4(&WarBoardData___c__DisplayClass188_0_TypeInfo, v38);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__, v39);
    sub_B0D8A4(&WarBoardData___c__DisplayClass188_1_TypeInfo, v40);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v41);
    byte_421344E = 1;
  }
  memset(&v179, 0, sizeof(v179));
  entity = 0LL;
  memset(&v177, 0, sizeof(v177));
  v176 = 0;
  v42 = (WarBoardData___c__DisplayClass188_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass188_0_TypeInfo,
                                                   reinforcementsDatas,
                                                   mst);
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
    v49 = (Il2CppObject *)static_fields->__9;
    _9__188_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_HoldReinforcementsData__TypeInfo,
                                                                           v44,
                                                                           v45);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__188_0,
      v49,
      Method_WarBoardData___c__GetHoldReinforcements_b__188_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_HoldReinforcementsData___ctor__);
    v50 = WarBoardData___c_TypeInfo->static_fields;
    v50->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)_9__188_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v50->__9__188_0,
      (System_Int32_array **)_9__188_0,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_123;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)reinforcementsSaveList,
    (System_Predicate_T__o *)_9__188_0,
    (const MethodInfo_2FC7238 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ReinforcementsData__TypeInfo,
                                                                                                  v57,
                                                                                                  v58);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v59;
  sub_B0D840(
    (BattleServantConfConponent_o *)reinforcementsDatas,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v68 = this->fields.reinforcementsSaveList;
  if ( (v42->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v69 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_HoldReinforcementsData__bool__TypeInfo,
                                                                               v66,
                                                                               v67);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v69,
      (Il2CppObject *)v42,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      (const MethodInfo_26189B8 *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
    v70 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v68,
            (System_Func_TSource__bool__o *)v69,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v43 = System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
            v70,
            (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
    v68 = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v43;
  }
  if ( !v68 )
LABEL_123:
    sub_B0D97C(v43);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v175,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v68,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v173 = 0;
  v71 = 0;
  v179 = *(System_Collections_Generic_List_Enumerator_T__o *)v175;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v179,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v74 = sub_B0D974(WarBoardData___c__DisplayClass188_1_TypeInfo, v72, v73);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v74, 0LL);
    if ( !v74 )
      sub_B0D97C(v75);
    current = (System_Int32_array **)v179.fields.current;
    *(_QWORD *)(v74 + 16) = v179.fields.current;
    v83 = (HoldReinforcementsData_o **)(v74 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v74 + 16), current, v76, v77, v78, v79, v80, v81);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_B0D97C(v84);
    if ( !*v83 )
      sub_B0D97C(v84);
    if ( !mst )
      sub_B0D97C(v84);
    v86 = WarBoardStageReinforcementsMaster__TryGetEntity(
            mst,
            &entity,
            stageEntity->fields.id,
            (*v83)->fields._id_k__BackingField,
            0LL);
    if ( v86 )
    {
      if ( !entity )
        sub_B0D97C(v86);
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v87);
      if ( !entity )
        sub_B0D97C(DeploySquareIds);
      if ( !*v83 )
        sub_B0D97C(DeploySquareIds);
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_B0D97C(DeploySquareIds);
      index_k__BackingField = (*v83)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= limitNums->max_length )
      {
        v165 = sub_B0D9A8(DeploySquareIds);
        sub_B0D948(v165, 0LL);
      }
      v92 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField + 1] < 1 )
      {
        v96 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v89);
        if ( !ReinfocementsPieces )
          sub_B0D97C(0LL);
        if ( !entity )
          sub_B0D97C(ReinfocementsPieces);
        if ( !*v83 )
          sub_B0D97C(ReinfocementsPieces);
        v94 = entity->fields.limitNums;
        if ( !v94 )
          sub_B0D97C(ReinfocementsPieces);
        v95 = (*v83)->fields._index_k__BackingField;
        if ( (unsigned int)v95 >= v94->max_length )
        {
          v166 = sub_B0D9A8(ReinfocementsPieces);
          sub_B0D948(v166, 0LL);
        }
        v96 = v94->m_Items[v95 + 1] <= (signed int)ReinfocementsPieces->max_length;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_B0D97C(0LL);
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0LL);
      if ( !entity )
        sub_B0D97C(IsPlayerTurn);
      if ( !v92 )
        sub_B0D97C(IsPlayerTurn);
      if ( !*v83 )
        sub_B0D97C(IsPlayerTurn);
      v101 = (*v83)->fields._index_k__BackingField;
      max_length = v92->max_length;
      if ( (int)v101 >= max_length )
      {
        v103 = 0;
      }
      else
      {
        if ( (unsigned int)v101 >= max_length )
        {
          v167 = sub_B0D9A8(IsPlayerTurn);
          sub_B0D948(v167, 0LL);
        }
        v103 = v92->m_Items[v101 + 1] >= 0 && !v96;
      }
      if ( v103 & (IsPlayerTurn ^ (entity->fields.forceId != 0)) )
      {
        v172 = v71;
        v104 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v105 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_ReinforcementsData__bool__TypeInfo,
                                                                                    v99,
                                                                                    v100);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v105,
          (Il2CppObject *)v74,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          (const MethodInfo_26189B8 *)Method_System_Func_ReinforcementsData__bool___ctor__);
        v106 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 v104,
                 (System_Func_T__bool__o *)v105,
                 (const MethodInfo_1707138 *)Method_BasicHelper_Any_ReinforcementsData___);
        v71 = v172;
        if ( !v106 )
          goto LABEL_70;
        if ( !*reinforcementsDatas )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v175,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*reinforcementsDatas,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
        v177 = *(System_Collections_Generic_List_Enumerator_T__o *)v175;
        while ( 1 )
        {
          v109 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v177,
                   (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__);
          if ( !v109 )
            break;
          v112 = v177.fields.current;
          if ( !v177.fields.current )
            sub_B0D97C(v109);
          if ( !*v83 )
            sub_B0D97C(v109);
          if ( LODWORD(v177.fields.current[1].klass) == (*v83)->fields._id_k__BackingField )
          {
            v113 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                               System_Collections_Generic_List_int__TypeInfo,
                                                               v110,
                                                               v111);
            System_Collections_Generic_List_int____ctor(
              v113,
              (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
            v116 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                               System_Collections_Generic_List_int__TypeInfo,
                                                               v114,
                                                               v115);
            System_Collections_Generic_List_int____ctor(
              v116,
              (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v113 )
              sub_B0D97C(v117);
            System_Collections_Generic_List_int___AddRange(
              v113,
              (System_Collections_Generic_IEnumerable_T__o *)v112[1].monitor,
              (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v83 )
              sub_B0D97C(v118);
            System_Collections_Generic_List_int___Add(
              v113,
              (*v83)->fields._index_k__BackingField,
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            v119 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v113,
                                            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
            v112[1].monitor = v119;
            sub_B0D840((BattleServantConfConponent_o *)&v112[1].monitor, v119, v120, v121, v122, v123, v124, v125);
            if ( !v116 )
              sub_B0D97C(v126);
            System_Collections_Generic_List_int___AddRange(
              v116,
              (System_Collections_Generic_IEnumerable_T__o *)v112[2].klass,
              (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v83 )
              sub_B0D97C(v127);
            v128 = (*v83)->fields._index_k__BackingField;
            if ( (unsigned int)v128 >= v92->max_length )
            {
              v162 = sub_B0D9A8(v127);
              sub_B0D948(v162, 0LL);
            }
            System_Collections_Generic_List_int___Add(
              v116,
              v92->m_Items[v128 + 1],
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            v129 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v116,
                                            (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
            v112[2].klass = (Il2CppClass *)v129;
            sub_B0D840((BattleServantConfConponent_o *)&v112[2], v129, v130, v131, v132, v133, v134, v135);
            v136 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( !v136 )
              sub_B0D97C(0LL);
            v137 = *(_QWORD *)&v136[4].fields.m_CachedPtr;
            if ( !v137 )
              sub_B0D97C(v136);
            if ( !*v83 )
              sub_B0D97C(v136);
            v138 = (*v83)->fields._index_k__BackingField;
            if ( (unsigned int)v138 >= v92->max_length )
            {
              v163 = sub_B0D9A8(v136);
              sub_B0D948(v163, 0LL);
            }
            v139 = *(System_Collections_Generic_List_int__o **)(v137 + 232);
            if ( !v139 )
              sub_B0D97C(0LL);
            System_Collections_Generic_List_int___Add(
              v139,
              v92->m_Items[v138 + 1],
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            if ( !*v83 )
              sub_B0D97C(0LL);
            HoldReinforcementsData__DecreaseHoldNum(*v83, 0LL);
            break;
          }
        }
        *(_DWORD *)&v175[4 * v173 + 24] = 727;
        v71 = ++v176;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v177,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        if ( v71 )
        {
          v140 = v71 - 1;
          v173 = v71;
          if ( *(_DWORD *)&v175[4 * v71 + 20] != 727 )
            goto LABEL_70;
          v176 = --v71;
          v173 = v140;
        }
        else
        {
          v173 = 0;
LABEL_70:
          v141 = sub_B0D974(ReinforcementsData_TypeInfo, v107, v108);
          ReinforcementsData___ctor((ReinforcementsData_o *)v141, 0LL);
          if ( !entity )
            sub_B0D97C(v142);
          if ( !v141 )
            sub_B0D97C(v142);
          *(_DWORD *)(v141 + 16) = entity->fields.id;
          v143 = sub_B0D8BC(int___TypeInfo, 1LL);
          if ( !*v83 )
            sub_B0D97C(v143);
          if ( !v143 )
            sub_B0D97C(0LL);
          if ( !*(_DWORD *)(v143 + 24) )
          {
            v169 = sub_B0D9A8(v143);
            sub_B0D948(v169, 0LL);
          }
          *(_DWORD *)(v143 + 32) = (*v83)->fields._index_k__BackingField;
          *(_QWORD *)(v141 + 24) = v143;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v141 + 24),
            (System_Int32_array **)v143,
            v144,
            v145,
            v146,
            v147,
            v148,
            v149);
          v150 = sub_B0D8BC(int___TypeInfo, 1LL);
          if ( !*v83 )
            sub_B0D97C(v150);
          v157 = (*v83)->fields._index_k__BackingField;
          if ( (unsigned int)v157 >= v92->max_length )
          {
            v170 = sub_B0D9A8(v150);
            sub_B0D948(v170, 0LL);
          }
          if ( !v150 )
            sub_B0D97C(0LL);
          if ( !*(_DWORD *)(v150 + 24) )
          {
            v168 = sub_B0D9A8(v150);
            sub_B0D948(v168, 0LL);
          }
          *(_DWORD *)(v150 + 32) = v92->m_Items[v157 + 1];
          *(_QWORD *)(v141 + 32) = v150;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v141 + 32),
            (System_Int32_array **)v150,
            v151,
            v152,
            v153,
            v154,
            v155,
            v156);
          if ( !*reinforcementsDatas )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*reinforcementsDatas,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v141,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
          v158 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v158 )
            sub_B0D97C(0LL);
          v159 = *(_QWORD *)&v158[4].fields.m_CachedPtr;
          if ( !v159 )
            sub_B0D97C(v158);
          if ( !*v83 )
            sub_B0D97C(v158);
          v160 = (*v83)->fields._index_k__BackingField;
          if ( (unsigned int)v160 >= v92->max_length )
          {
            v171 = sub_B0D9A8(v158);
            sub_B0D948(v171, 0LL);
          }
          v161 = *(System_Collections_Generic_List_int__o **)(v159 + 232);
          if ( !v161 )
            sub_B0D97C(0LL);
          System_Collections_Generic_List_int___Add(
            v161,
            v92->m_Items[v160 + 1],
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !*v83 )
            sub_B0D97C(0LL);
          HoldReinforcementsData__DecreaseHoldNum(*v83, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v175[4 * v173 + 24] = 755;
  v164 = ++v176;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v179,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v164 && *(_DWORD *)&v175[4 * v164 + 20] == 755 )
    v176 = v164 - 1;
}


int32_t __fastcall WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  WarBoardData_o *v2; // x19
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  v2 = this;
  if ( (byte_421343A & 1) == 0 )
  {
    this = (WarBoardData_o *)sub_B0D8A4(
                               &Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__,
                               method);
    byte_421343A = 1;
  }
  reinforcementsSaveList = v2->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_B0D97C(this);
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
  const MethodInfo *v21; // x4
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v24; // x20
  WarBoardData___c_c *v25; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__123_0; // x21
  Il2CppObject *v28; // x22
  struct WarBoardData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x20
  __int64 v37; // x1
  __int64 v38; // x2
  System_Func_int__bool__o *v39; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4213422 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___, *(_QWORD *)&start);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_B0D8A4(&Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v13);
    sub_B0D8A4(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo, v14);
    sub_B0D8A4(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, v15);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__, v16);
    sub_B0D8A4(&WarBoardData___c__DisplayClass123_0_TypeInfo, v17);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v18);
    byte_4213422 = 1;
  }
  rangeSearches = 0LL;
  v19 = (WarBoardData___c__DisplayClass123_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass123_0_TypeInfo,
                                                   *(_QWORD *)&start,
                                                   *(_QWORD *)&range);
  WarBoardData___c__DisplayClass123_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B0D97C(v20);
  v19->fields.start = start;
  v19->fields.ignoreStart = ignoreStart;
  rangeSearches = 0LL;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v21);
  v24 = rangeSearches;
  if ( !rangeSearches )
    return 0LL;
  v25 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v25 = WarBoardData___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                  System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo,
                                                                                  v22,
                                                                                  v23);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__123_0,
      v28,
      Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__,
      (const MethodInfo_2619564 *)Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__);
    v29 = WarBoardData___c_TypeInfo->static_fields;
    v29->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v29->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_1B51AB4 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v39 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v37, v38);
  System_Func_int__bool____ctor(
    v39,
    (Il2CppObject *)v19,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
  v40 = System_Linq_Enumerable__Where_int_(
          v36,
          (System_Func_TSource__bool__o *)v39,
          (const MethodInfo_1B5A41C *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v40,
           (const MethodInfo_1B560F0 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4213423 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___, *(_QWORD *)&start);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___, v9);
    sub_B0D8A4(&Method_System_Func_int__WarBoardSquareData___ctor__, v10);
    sub_B0D8A4(&System_Func_int__WarBoardSquareData__TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardData__GetInRangeSquares_b__124_0__, v12);
    byte_4213423 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v16 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v17 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                   System_Func_int__WarBoardSquareData__TypeInfo,
                                                                   v14,
                                                                   v15);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v17,
      (Il2CppObject *)this,
      Method_WarBoardData__GetInRangeSquares_b__124_0__,
      (const MethodInfo_26145DC *)Method_System_Func_int__WarBoardSquareData___ctor__);
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 v16,
                                                                 (System_Func_TSource__TResult__o *)v17,
                                                                 (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v18,
                                         (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_421342A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardItemData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardItemData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass135_0_TypeInfo, v8);
    byte_421342A = 1;
  }
  v9 = (WarBoardData___c__DisplayClass135_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass135_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass135_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardItemData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardItemData__bool___ctor__);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 items,
                                 (System_Func_TSource__bool__o *)v14,
                                 (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
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
    sub_B0D97C(this);
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
  if ( (byte_4213409 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_4213409 = 1;
  }
  value = 0LL;
  npcEntityDict = this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2E2A2AC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return value;
}


int32_t __fastcall WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_B0D97C(this);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_421341D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__, v12);
    sub_B0D8A4(&WarBoardData___c__DisplayClass118_0_TypeInfo, v13);
    byte_421341D = 1;
  }
  v14 = sub_B0D974(WarBoardData___c__DisplayClass118_0_TypeInfo, *(_QWORD *)&start, *(_QWORD *)&range);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v14, 0LL);
  v16 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v15);
  if ( !v14 )
    sub_B0D97C(v16);
  *(_QWORD *)(v14 + 16) = v16;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), v16, v17, v18, v19, v20, v21, v22);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v24,
                                                                             v25);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v27,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v24; // x1
  __int64 v25; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0

  if ( (byte_421341E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__, v12);
    sub_B0D8A4(&WarBoardData___c__DisplayClass119_0_TypeInfo, v13);
    byte_421341E = 1;
  }
  v14 = sub_B0D974(WarBoardData___c__DisplayClass119_0_TypeInfo, *(_QWORD *)&start, *(_QWORD *)&range);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v14, 0LL);
  v16 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v15);
  if ( !v14 )
    sub_B0D97C(v16);
  *(_QWORD *)(v14 + 16) = v16;
  sub_B0D840((BattleServantConfConponent_o *)(v14 + 16), v16, v17, v18, v19, v20, v21, v22);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v24,
                                                                             v25);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v27 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v26,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v27,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20

  if ( (byte_421340F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__, v13);
    sub_B0D8A4(&WarBoardData___c__DisplayClass100_0_TypeInfo, v14);
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v15);
    byte_421340F = 1;
  }
  v16 = (WarBoardData___c__DisplayClass100_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass100_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId);
  WarBoardData___c__DisplayClass100_0___ctor(v16, 0LL);
  if ( !v16 )
    sub_B0D97C(v17);
  v16->fields.ignoreDead = ignoreDead;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  v16->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v21,
                                  (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  const MethodInfo *v17; // x1
  WarBoardPieceData_array *AlivePieces; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v21; // x20

  if ( (byte_4213431 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_FindIndex_WarBoardPieceData___, piece);
    sub_B0D8A4(&Method_System_Predicate_WarBoardPieceData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_WarBoardPieceData__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass145_0_TypeInfo, v8);
    byte_4213431 = 1;
  }
  v9 = sub_B0D974(WarBoardData___c__DisplayClass145_0_TypeInfo, piece, method);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  *(_QWORD *)(v9 + 16) = piece;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)piece, v11, v12, v13, v14, v15, v16);
  AlivePieces = WarBoardData__GetAlivePieces(this, v17);
  v21 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                   System_Predicate_WarBoardPieceData__TypeInfo,
                                                                   v19,
                                                                   v20);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v21,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    (const MethodInfo_2AF7E30 *)Method_System_Predicate_WarBoardPieceData___ctor__);
  return System_Array__FindIndex_WarBoardPieceData_(
           AlivePieces,
           (System_Predicate_T__o *)v21,
           (const MethodInfo_1F68E64 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_B0D97C(this);
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
  UnityEngine_Component_o *gameObject; // x0
  bool activeInHierarchy; // w8

  if ( (byte_4213412 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&forceId);
    byte_4213412 = 1;
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
      sub_B0D97C(gameObject);
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
  __int64 v17; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20
  WarBoardData_SquareRangeSearch_o *v20; // x0

  if ( (byte_421340E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v9);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__, v11);
    sub_B0D8A4(&WarBoardData___c__DisplayClass99_0_TypeInfo, v12);
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v13);
    byte_421340E = 1;
  }
  v14 = (WarBoardData___c__DisplayClass99_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass99_0_TypeInfo,
                                                  *(_QWORD *)&forceId,
                                                  *(_QWORD *)&groupId);
  WarBoardData___c__DisplayClass99_0___ctor(v14, 0LL);
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  if ( !v14 )
    sub_B0D97C(UniqueIndex);
  v14->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v16,
                                                                             v17);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v20 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          pieces,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v20 )
    return v20[2].fields.squareIndex;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_22073600(
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_4213410 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass101_0_TypeInfo, v8);
    byte_4213410 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass101_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass101_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass101_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v14,
                                  (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_22114396(
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
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_4213411 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&uniqueIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__, v9);
    sub_B0D8A4(&WarBoardData___c__DisplayClass102_0_TypeInfo, v10);
    byte_4213411 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass102_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass102_0_TypeInfo,
                                                   *(_QWORD *)&uniqueIndex,
                                                   ignoreDead);
  WarBoardData___c__DisplayClass102_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.uniqueIndex = uniqueIndex;
  v11->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v13,
                                                                             v14);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v16,
                                  (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
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
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_421341B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__, v8);
    sub_B0D8A4(&WarBoardData___c__DisplayClass116_0_TypeInfo, v9);
    byte_421341B = 1;
  }
  v10 = (WarBoardData___c__DisplayClass116_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass116_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   method);
  WarBoardData___c__DisplayClass116_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v12,
                                                                             v13);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v16,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces_22066704(
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
  __int64 v15; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  v4 = groupId;
  if ( (byte_421341C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v7);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v9);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__, v10);
    sub_B0D8A4(&WarBoardData___c__DisplayClass117_0_TypeInfo, v11);
    byte_421341C = 1;
  }
  v12 = (WarBoardData___c__DisplayClass117_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass117_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId);
  WarBoardData___c__DisplayClass117_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B0D97C(v13);
  v12->fields.forceAndGroup = (forceId << 24) | (v4 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v18 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v18,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *__fastcall WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213433 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4213433 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Instance )
    goto LABEL_11;
  Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                &entity,
                                stageEntity->fields.playBgmId,
                                (const MethodInfo_2669C30 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B0D97C(Instance);
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_421344C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_421344C = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B0D97C(0LL);
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_421343C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData__Find__, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Predicate_WarBoardEventData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_WarBoardEventData__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass164_0_TypeInfo, v8);
    byte_421343C = 1;
  }
  v9 = (WarBoardData___c__DisplayClass164_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass164_0_TypeInfo,
                                                  *(_QWORD *)&eventId,
                                                  method);
  WarBoardData___c__DisplayClass164_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.eventId = eventId,
        listEvent = this->fields.listEvent,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_WarBoardEventData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_WarBoardEventData___ctor__),
        !listEvent) )
  {
    sub_B0D97C(v10);
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEvent,
                                  (System_Predicate_T__o *)v14,
                                  (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v9; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__104_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_4213413 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, method);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v4);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, v6);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v7);
    byte_4213413 = 1;
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
  _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__104_0,
      v12,
      Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v13 = WarBoardData___c_TypeInfo->static_fields;
    v13->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__104_0,
      (System_Int32_array **)_9__104_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v10; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__121_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardData___c_StaticFields *v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0

  if ( (byte_4213420 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__, v7);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v8);
    byte_4213420 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v10 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v10 = WarBoardData___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__121_0,
      v13,
      Method_WarBoardData___c__GetPlayerPieces_b__121_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v14 = WarBoardData___c_TypeInfo->static_fields;
    v14->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v14->__9__121_0,
      (System_Int32_array **)_9__121_0,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
  }
  v21 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v21,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  WarBoardCommonReleaseMaster_o *v15; // x21
  unsigned __int64 v16; // x23
  int size; // w8
  System_Collections_Generic_List_int__o *v18; // x22
  unsigned int v19; // w25
  __int64 v20; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  __int64 v23; // x0

  if ( (byte_4213447 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, commonReleaseIds);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v10);
    byte_4213447 = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    commonReleaseIds,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_23;
  v14 = *(_QWORD *)&commonReleaseIds->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v14 )
        goto LABEL_24;
      if ( !v15 )
        goto LABEL_23;
      Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)WarBoardCommonReleaseMaster__GetList(
                                                                                   v15,
                                                                                   commonReleaseIds->m_Items[v16 + 1],
                                                                                   v13);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_23;
      size = Master_WarQuestSelectionMaster->fields._size;
      v18 = Master_WarQuestSelectionMaster;
      if ( size >= 1 )
        break;
LABEL_20:
      LODWORD(v14) = commonReleaseIds->max_length;
      if ( (__int64)++v16 >= (int)v14 )
        goto LABEL_21;
    }
    v19 = 0;
    while ( v19 < size )
    {
      v20 = *((_QWORD *)&v18->fields._syncRoot + (int)v19);
      if ( !v20 )
        goto LABEL_23;
      if ( (unsigned int)(*(_DWORD *)(v20 + 28) - 7) <= 1 )
      {
        if ( !v11 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v11,
          *(_DWORD *)(v20 + 40),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      size = v18->fields._size;
      if ( (int)++v19 >= size )
        goto LABEL_20;
    }
LABEL_24:
    v23 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v23, 0LL);
  }
LABEL_21:
  v21 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_WarQuestSelectionMaster = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                                               v21,
                                                                               (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_23:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  return System_Collections_Generic_List_int___ToArray(
           Master_WarQuestSelectionMaster,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  int max_length; // w8
  WarBoardPieceData_array *v14; // x22
  unsigned int v15; // w23
  WarBoardPieceData_o *v16; // x1
  __int64 v18; // x0

  if ( (byte_4213421 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, *(_QWORD *)&stageReinfoId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    byte_4213421 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  *(_QWORD *)&stageReinfoId,
                                                                                                  *(_QWORD *)&reinfoIndex);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v11);
  if ( !AlivePieces )
    goto LABEL_15;
  max_length = AlivePieces->max_length;
  v14 = AlivePieces;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
      {
        v18 = sub_B0D9A8(AlivePieces);
        sub_B0D948(v18, 0LL);
      }
      v16 = v14->m_Items[v15];
      if ( !v16 )
        break;
      if ( v16->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v16->fields._ReinfoIndex_k__BackingField == reinfoIndex )
      {
        if ( !v10 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v10,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B0D97C(AlivePieces);
  }
LABEL_13:
  if ( !v10 )
    goto LABEL_15;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
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
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  const MethodInfo *v33; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x25
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x26
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  __int64 v47; // x8
  __int64 v48; // x2
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *limitNums; // x8
  WarBoardStageReinforcementsEntity_o *v51; // x8
  struct System_Int32_array *v52; // x9
  __int64 v53; // x10
  _BOOL4 v54; // w23
  _BOOL4 IsOnce; // w27
  const MethodInfo *v56; // x1
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x21
  System_Func_int__bool__o *v60; // x22
  System_Int32_array *v61; // x28
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  _BOOL4 v68; // w28
  System_Collections_Generic_List_T__o *v69; // x19
  __int64 v70; // x1
  __int64 v71; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v72; // x21
  const MethodInfo *v73; // x3
  __int64 v74; // x8
  __int64 v75; // x9
  __int64 v76; // x8
  WarBoardStageReinforcementsEntity_c *klass; // x8
  __int64 v78; // x9
  __int64 v79; // x20
  System_Int32_array **v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  __int64 v94; // x0
  WarBoardData___c__DisplayClass189_0_Fields *v95; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_int__o *v96; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v97; // [xsp+10h] [xbp-60h]

  if ( (byte_421344F & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, reinfoDatas);
    sub_B0D8A4(&Method_BasicHelper_Any_ReinforcementsData___, v8);
    sub_B0D8A4(&Method_System_Func_ReinforcementsData__bool___ctor__, v9);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v11);
    sub_B0D8A4(&System_Func_ReinforcementsData__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B0D8A4(&ReinforcementsData_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__, v21);
    sub_B0D8A4(&WarBoardData___c__DisplayClass189_0_TypeInfo, v22);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__, v23);
    sub_B0D8A4(&WarBoardData___c__DisplayClass189_1_TypeInfo, v24);
    byte_421344F = 1;
  }
  v25 = (WarBoardData___c__DisplayClass189_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass189_0_TypeInfo,
                                                   reinfoDatas,
                                                   mst);
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
    v97 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v29, v30);
    System_Collections_Generic_List_int____ctor(
      v97,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    v96 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v31, v32);
    System_Collections_Generic_List_int____ctor(
      v96,
      (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !p_fields->stageEntity )
      goto LABEL_51;
    v95 = &v25->fields;
    DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v33);
    v37 = sub_B0D974(WarBoardData___c__DisplayClass189_1_TypeInfo, v35, v36);
    WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v37, 0LL);
    if ( !v37 )
      goto LABEL_51;
    *(_QWORD *)(v37 + 24) = v25;
    v44 = v37 + 24;
    sub_B0D840((BattleServantConfConponent_o *)(v37 + 24), (System_Int32_array **)v25, v38, v39, v40, v41, v42, v43);
    v47 = *(_QWORD *)(v37 + 24);
    *(_DWORD *)(v37 + 16) = 0;
    if ( !v47 )
      goto LABEL_51;
    v48 = 0LL;
    while ( 1 )
    {
      ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(v47 + 16);
      if ( !ReinfocementsPieces )
        goto LABEL_51;
      reinforcementsIds = ReinfocementsPieces->fields.reinforcementsIds;
      if ( !reinforcementsIds )
        goto LABEL_51;
      if ( (int)v48 >= (signed int)reinforcementsIds->max_length )
        break;
      limitNums = ReinfocementsPieces->fields.limitNums;
      if ( !limitNums )
        goto LABEL_51;
      if ( (unsigned int)v48 >= limitNums->max_length )
        goto LABEL_52;
      if ( limitNums->m_Items[(int)v48 + 1] < 1 )
      {
        v54 = 0;
      }
      else
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetReinfocementsPieces(
                                                                       this,
                                                                       ReinfocementsPieces->fields.id,
                                                                       v48,
                                                                       v46);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        if ( !*(_QWORD *)v44 )
          goto LABEL_51;
        v51 = ReinfocementsPieces;
        ReinfocementsPieces = *(WarBoardStageReinforcementsEntity_o **)(*(_QWORD *)v44 + 16LL);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        v52 = ReinfocementsPieces->fields.limitNums;
        if ( !v52 )
          goto LABEL_51;
        v53 = *(int *)(v37 + 16);
        if ( (unsigned int)v53 >= v52->max_length )
          goto LABEL_52;
        v54 = v52->m_Items[v53 + 1] <= v51->fields.forceId;
      }
      IsOnce = WarBoardStageReinforcementsEntity__IsOnce(ReinfocementsPieces, 0LL);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)WarBoardData__GetPlayReinforcements(this, v56);
      v59 = *(_QWORD *)v44;
      if ( !*(_QWORD *)v44 )
        goto LABEL_51;
      v60 = *(System_Func_int__bool__o **)(v59 + 24);
      v61 = (System_Int32_array *)ReinfocementsPieces;
      if ( !v60 )
      {
        v60 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v57, v58);
        System_Func_int__bool____ctor(
          v60,
          (Il2CppObject *)v59,
          Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
        *(_QWORD *)(v59 + 24) = v60;
        sub_B0D840((BattleServantConfConponent_o *)(v59 + 24), (System_Int32_array **)v60, v62, v63, v64, v65, v66, v67);
      }
      v68 = BasicHelper__Any_int__24145568(
              v61,
              (System_Func_T__bool__o *)v60,
              (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
      v69 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
      v72 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_ReinforcementsData__bool__TypeInfo,
                                                                                 v70,
                                                                                 v71);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v72,
        (Il2CppObject *)v37,
        Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
        (const MethodInfo_26189B8 *)Method_System_Func_ReinforcementsData__bool___ctor__);
      ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                                     v69,
                                                                     (System_Func_T__bool__o *)v72,
                                                                     (const MethodInfo_1707138 *)Method_BasicHelper_Any_ReinforcementsData___);
      if ( !DeploySquareIds )
        goto LABEL_51;
      v74 = *(int *)(v37 + 16);
      if ( (unsigned int)v74 >= DeploySquareIds->max_length )
        goto LABEL_52;
      if ( (unsigned __int8)ReinfocementsPieces & 1 | (IsOnce && v68 || v54 || DeploySquareIds->m_Items[v74 + 1] < 0) )
      {
        if ( !*(_QWORD *)v44 )
          goto LABEL_51;
        v75 = *(_QWORD *)(*(_QWORD *)v44 + 16LL);
        if ( !v75 )
          goto LABEL_51;
        WarBoardData__SaveHoldReinforcements(this, *(_DWORD *)(v75 + 20), v74, v73);
      }
      else
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v97;
        if ( !v97 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v97,
          v74,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        v76 = *(int *)(v37 + 16);
        if ( (unsigned int)v76 >= DeploySquareIds->max_length )
        {
LABEL_52:
          v94 = sub_B0D9A8(ReinfocementsPieces);
          sub_B0D948(v94, 0LL);
        }
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v96;
        if ( !v96 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v96,
          DeploySquareIds->m_Items[v76 + 1],
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        klass = ReinfocementsPieces[6].klass;
        if ( !klass )
          goto LABEL_51;
        v78 = *(int *)(v37 + 16);
        if ( (unsigned int)v78 >= DeploySquareIds->max_length )
          goto LABEL_52;
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)klass->_2.genericContainerHandle;
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          (System_Collections_Generic_List_int__o *)ReinfocementsPieces,
          DeploySquareIds->m_Items[v78 + 1],
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v47 = *(_QWORD *)(v37 + 24);
      v48 = (unsigned int)(*(_DWORD *)(v37 + 16) + 1);
      *(_DWORD *)(v37 + 16) = v48;
      if ( !v47 )
        goto LABEL_51;
    }
    if ( !v97 )
      goto LABEL_51;
    if ( v97->fields._size >= 1 )
    {
      v79 = sub_B0D974(ReinforcementsData_TypeInfo, v45, v48);
      ReinforcementsData___ctor((ReinforcementsData_o *)v79, 0LL);
      if ( v95->stageEntity )
      {
        ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v97;
        if ( v79 )
        {
          *(_DWORD *)(v79 + 16) = v95->stageEntity->fields.id;
          v80 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v97,
                                         (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
          *(_QWORD *)(v79 + 24) = v80;
          sub_B0D840((BattleServantConfConponent_o *)(v79 + 24), v80, v81, v82, v83, v84, v85, v86);
          ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)v96;
          if ( v96 )
          {
            v87 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                           v96,
                                           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
            *(_QWORD *)(v79 + 32) = v87;
            sub_B0D840((BattleServantConfConponent_o *)(v79 + 32), v87, v88, v89, v90, v91, v92, v93);
            ReinfocementsPieces = (WarBoardStageReinforcementsEntity_o *)*reinfoDatas;
            if ( *reinfoDatas )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)ReinfocementsPieces,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v79,
                (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
              return;
            }
          }
        }
      }
LABEL_51:
      sub_B0D97C(ReinfocementsPieces);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_4213415 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, isPlayerGroup);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v5);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__, v8);
    sub_B0D8A4(&WarBoardData___c__DisplayClass106_0_TypeInfo, v9);
    byte_4213415 = 1;
  }
  v10 = (WarBoardData___c__DisplayClass106_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass106_0_TypeInfo,
                                                   isPlayerGroup,
                                                   method);
  WarBoardData___c__DisplayClass106_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v12,
                                                                             v13);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v16 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v16,
                                      (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_4213426 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardSquareData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardSquareData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass128_0_TypeInfo, v8);
    byte_4213426 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass128_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass128_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass128_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardSquareData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   squares,
                                   (System_Func_TSource__bool__o *)v14,
                                   (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  __int64 v12; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x20

  if ( (byte_4213436 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIdx);
    sub_B0D8A4(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardUserServantData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass153_0_TypeInfo, v8);
    byte_4213436 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass153_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass153_0_TypeInfo,
                                                  *(_QWORD *)&stageBossIdx,
                                                  method);
  WarBoardData___c__DisplayClass153_0___ctor(v9, 0LL);
  if ( !v9 || (v9->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0LL) )
    sub_B0D97C(v10);
  svtInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.svtInfo;
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
  return (WarBoardUserServantData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v15,
                                        (const MethodInfo_170767C *)Method_BasicHelper_Find_WarBoardUserServantData___);
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_421342B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardTreasureData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardTreasureData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass137_0_TypeInfo, v8);
    byte_421342B = 1;
  }
  v9 = (WarBoardData___c__DisplayClass137_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass137_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass137_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardTreasureData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v14,
                                     (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_int__o *v7; // x19
  __int64 v8; // x0
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v12; // w21
  WarBoardTreasureData_SaveData_o *v13; // x8
  __int64 v15; // x0

  if ( (byte_421341A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v6);
    byte_421341A = 1;
  }
  v7 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
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
        v15 = sub_B0D9A8(v8);
        sub_B0D948(v15, 0LL);
      }
      v13 = treasureSaves->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.isUse )
      {
        if ( !v7 )
          break;
        System_Collections_Generic_List_int___Add(
          v7,
          v13->fields.treasureId,
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B0D97C(v8);
  }
LABEL_13:
  if ( !v7 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v7,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v12; // x2
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v14; // x20

  if ( (byte_4213453 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Predicate_WarBoardUiData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_WarBoardUiData__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass193_0_TypeInfo, v8);
    byte_4213453 = 1;
  }
  v9 = (WarBoardData___c__DisplayClass193_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass193_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass193_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.squareIndex = squareIndex,
        listUiData = this->fields.listUiData,
        v14 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_WarBoardUiData__TypeInfo,
                                                                         v11,
                                                                         v12),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v14,
          (Il2CppObject *)v9,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B0D97C(v10);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v14,
                               (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData_22140884(
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v20; // x20

  if ( (byte_4213454 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, pieceIndex);
    sub_B0D8A4(&Method_System_Predicate_WarBoardUiData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_WarBoardUiData__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass194_0_TypeInfo, v8);
    byte_4213454 = 1;
  }
  v9 = sub_B0D974(WarBoardData___c__DisplayClass194_0_TypeInfo, pieceIndex, method);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = pieceIndex,
        sub_B0D840(
          (BattleServantConfConponent_o *)(v9 + 16),
          (System_Int32_array **)pieceIndex,
          v11,
          v12,
          v13,
          v14,
          v15,
          v16),
        listUiData = this->fields.listUiData,
        v20 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                         System_Predicate_WarBoardUiData__TypeInfo,
                                                                         v18,
                                                                         v19),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v20,
          (Il2CppObject *)v9,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          (const MethodInfo_2AF7E30 *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B0D97C(v10);
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v20,
                               (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
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
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x20

  if ( (byte_421342C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardTreasureData__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardTreasureData__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__, v7);
    sub_B0D8A4(&WarBoardData___c__DisplayClass138_0_TypeInfo, v8);
    byte_421342C = 1;
  }
  v9 = (WarBoardData___c__DisplayClass138_0_o *)sub_B0D974(
                                                  WarBoardData___c__DisplayClass138_0_TypeInfo,
                                                  *(_QWORD *)&squareIndex,
                                                  method);
  WarBoardData___c__DisplayClass138_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardTreasureData__bool__TypeInfo,
                                                                             v11,
                                                                             v12);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v14,
                                     (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x19
  void *Master_WarQuestSelectionMaster; // x0
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
  int32_t v24; // w1
  __int64 v25; // x25
  __int64 v26; // x8
  unsigned __int64 v27; // x26
  int v28; // w8
  void *v29; // x22
  unsigned int v30; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v33; // x0

  if ( (byte_4213446 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardEventMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___, v4);
    sub_B0D8A4(&DataManager_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_int___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v11);
    byte_4213446 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_41;
  stageId = serverData->fields.stageId;
  v16 = (WarBoardEventScriptMaster_o *)Master_WarQuestSelectionMaster;
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardEventMaster___);
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
              v24 = *(_DWORD *)(v21 + 32 + 4 * v23);
              if ( v24 >= 1 )
              {
                if ( !v12 )
                  goto LABEL_41;
                System_Collections_Generic_List_int___Add(
                  v12,
                  v24,
                  (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                LODWORD(v22) = *(_DWORD *)(v21 + 24);
              }
              if ( (__int64)++v23 >= (int)v22 )
                goto LABEL_22;
            }
LABEL_42:
            v33 = sub_B0D9A8(Master_WarQuestSelectionMaster);
            sub_B0D948(v33, 0LL);
          }
LABEL_22:
          v25 = *(_QWORD *)(v20 + 48);
          if ( !v25 )
            goto LABEL_41;
          v26 = *(_QWORD *)(v25 + 24);
          if ( (int)v26 >= 1 )
          {
            v27 = 0LL;
            while ( 1 )
            {
              if ( v27 >= (unsigned int)v26 )
                goto LABEL_42;
              if ( !v16 )
                goto LABEL_41;
              Master_WarQuestSelectionMaster = WarBoardEventScriptMaster__GetList(
                                                 v16,
                                                 *(_DWORD *)(v25 + 4 * v27 + 32),
                                                 0LL);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_41;
              v28 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
              v29 = Master_WarQuestSelectionMaster;
              if ( v28 >= 1 )
                break;
LABEL_37:
              LODWORD(v26) = *(_DWORD *)(v25 + 24);
              if ( (__int64)++v27 >= (int)v26 )
                goto LABEL_38;
            }
            v30 = 0;
            while ( v30 < v28 )
            {
              Master_WarQuestSelectionMaster = (void *)*((_QWORD *)v29 + (int)v30 + 4);
              if ( !Master_WarQuestSelectionMaster )
                goto LABEL_41;
              if ( *((_DWORD *)Master_WarQuestSelectionMaster + 6) == 2 )
              {
                Master_WarQuestSelectionMaster = (void *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                                           (WarBoardEventScriptEntity_o *)Master_WarQuestSelectionMaster,
                                                           0LL);
                if ( ((unsigned int)Master_WarQuestSelectionMaster & 0x80000000) == 0 )
                {
                  if ( !v12 )
                    goto LABEL_41;
                  System_Collections_Generic_List_int___Add(
                    v12,
                    (int32_t)Master_WarQuestSelectionMaster,
                    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
                }
              }
              v28 = *((_DWORD *)v29 + 6);
              if ( (int)++v30 >= v28 )
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
  v31 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v12,
          (const MethodInfo_1B48964 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_WarQuestSelectionMaster = System_Linq_Enumerable__ToList_int_(
                                     v31,
                                     (const MethodInfo_1B58FA0 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !Master_WarQuestSelectionMaster )
LABEL_41:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  return System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_421342D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Func_WarBoardWallData__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_WarBoardWallData__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__, v9);
    sub_B0D8A4(&WarBoardData___c__DisplayClass140_0_TypeInfo, v10);
    byte_421342D = 1;
  }
  v11 = (WarBoardData___c__DisplayClass140_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass140_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   ignoreDestroy);
  WarBoardData___c__DisplayClass140_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B0D97C(v12);
  v11->fields.squareIndex = squareIndex;
  v11->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardWallData__bool__TypeInfo,
                                                                             v13,
                                                                             v14);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardWallData__bool___ctor__);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 walls,
                                 (System_Func_TSource__bool__o *)v16,
                                 (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
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

  if ( (byte_421343E & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardManager_TypeInfo, method);
    byte_421343E = 1;
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
  __int64 v8; // x2
  __int64 v9; // x8
  System_Int32_array *v10; // x20
  unsigned __int64 v11; // x24
  int32_t v12; // w23
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v14; // x22
  __int64 v15; // x0

  if ( (byte_4213448 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, method);
    sub_B0D8A4(&WarBoardPrevCondData_TypeInfo, v3);
    byte_4213448 = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v5);
  if ( !PrevCondIds )
    goto LABEL_11;
  v9 = *(_QWORD *)&PrevCondIds->max_length;
  v10 = PrevCondIds;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
      {
        v15 = sub_B0D9A8(PrevCondIds);
        sub_B0D948(v15, 0LL);
      }
      v12 = v10->m_Items[v11 + 1];
      listPrevCond = this->fields.listPrevCond;
      v14 = (WarBoardPrevCondData_o *)sub_B0D974(WarBoardPrevCondData_TypeInfo, v7, v8);
      WarBoardPrevCondData___ctor_27781792(v14, v12, -1, 0LL);
      if ( !listPrevCond )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listPrevCond,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
      LODWORD(v9) = v10->max_length;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
LABEL_11:
    sub_B0D97C(PrevCondIds);
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
  __int64 v19; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v24; // x21
  Il2CppObject *v25; // x20
  System_Xml_Schema_XmlSchemaObject_o *valuea; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4213441 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_B0D8A4(&System_Convert_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v11);
    sub_B0D8A4(&Method_System_Func_WarBoardBossBattleData__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__, v14);
    sub_B0D8A4(&WarBoardData___c__DisplayClass172_0_TypeInfo, v15);
    byte_4213441 = 1;
  }
  valuea = 0LL;
  v16 = (WarBoardData___c__DisplayClass172_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass172_0_TypeInfo,
                                                   *(_QWORD *)&bossId,
                                                   key);
  WarBoardData___c__DisplayClass172_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_18;
  v16->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_18;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardBossBattleData__bool__TypeInfo,
                                                                             v18,
                                                                             v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v22,
                                                                     (const MethodInfo_170767C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return value == 0;
  v24 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
  v17 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  if ( !v17 )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          v17,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  v17 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&v24->fields.isExecute;
  if ( !v17 )
LABEL_18:
    sub_B0D97C(v17);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          v17,
          (System_Xml_XmlQualifiedName_o *)key,
          &valuea,
          (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v25 = (Il2CppObject *)valuea;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v25, 0LL) == value;
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
  struct WarBoardStageEntity_o *stageEntity; // x8
  System_Int32_array *DefenseTarget; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421343F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, data);
    byte_421343F = 1;
  }
  entity = 0LL;
  v12 = (_QWORD **)Method_System_Array_Empty_int___;
  v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v14 = *(_WORD *)(v13 + 306);
  if ( (v14 & 1) == 0 )
  {
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v14 = *(_WORD *)(v13 + 306);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = *v12[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AA65A4(*v12[6]);
    if ( !*(_DWORD *)(v15 + 224) )
    {
      v16 = *v12[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AA65A4(*v12[6]);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = *v12[6];
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AA65A4(*v12[6]);
  v18 = *(System_Int32_array ***)(v17 + 184);
  v19 = *v18;
  *data = *v18;
  sub_B0D840(
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
    sub_B0D840((BattleServantConfConponent_o *)data, (System_Int32_array **)DefenseTarget, v23, v24, v25, v26, v27, v28);
  }
  stageNpcMaster = (WarBoardStageNpcMaster_o *)BasicHelper__IsNullOrEmpty(
                                                 (System_Collections_ICollection_o *)*data,
                                                 0LL);
  if ( ((unsigned __int8)stageNpcMaster & 1) != 0 )
    return 0;
  if ( !*data )
LABEL_24:
    sub_B0D97C(stageNpcMaster);
  return ((*data)->max_length & 1) == 0;
}


bool __fastcall WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_22066704; // x0
  const MethodInfo *v5; // x1
  int max_length; // w8
  WarBoardPieceData_array *v7; // x20
  int v8; // w24
  int v9; // w22
  int v10; // w23
  WarBoardPieceData_o *v11; // x21
  __int64 v14; // x0

  Pieces_22066704 = WarBoardData__GetPieces_22066704(this, 0, 0, v2);
  if ( !Pieces_22066704 )
LABEL_19:
    sub_B0D97C(Pieces_22066704);
  max_length = Pieces_22066704->max_length;
  v7 = Pieces_22066704;
  if ( max_length < 1 )
    return 1;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  do
  {
    if ( v8 >= (unsigned int)max_length )
    {
      v14 = sub_B0D9A8(Pieces_22066704);
      sub_B0D948(v14, 0LL);
    }
    v11 = v7->m_Items[v8];
    if ( !v11 )
      goto LABEL_19;
    if ( !v11->fields._isDead_k__BackingField )
    {
      Pieces_22066704 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v11, 0LL);
      if ( ((unsigned __int8)Pieces_22066704 & 1) == 0 )
      {
        Pieces_22066704 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v11, 0LL);
        if ( ((unsigned __int8)Pieces_22066704 & 1) != 0 )
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
  WarBoardPieceData_array *Pieces_22066704; // x0
  int max_length; // w8
  WarBoardPieceData_array *v13; // x22
  unsigned int v14; // w26
  Il2CppClass **v15; // x8
  Il2CppClass *v16; // x23
  int v17; // w8
  __int64 v18; // x0

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
          Pieces_22066704 = WarBoardData__GetPieces_22066704(this, i, v10, v2);
          if ( !Pieces_22066704 )
            goto LABEL_28;
          max_length = Pieces_22066704->max_length;
          v13 = Pieces_22066704;
          if ( max_length >= 1 )
          {
            v14 = 0;
            while ( 1 )
            {
              if ( v14 >= max_length )
              {
                v18 = sub_B0D9A8(Pieces_22066704);
                sub_B0D948(v18, 0LL);
              }
              v15 = &v13->obj.klass + (int)v14;
              v16 = v15[4];
              if ( !v16 )
                break;
              Pieces_22066704 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v15[4],
                                                             0LL);
              if ( ((unsigned __int8)Pieces_22066704 & 1) == 0 && !LOBYTE(v16->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v16->_1.this_arg.bits + 4);
              }
              max_length = v13->max_length;
              if ( (int)++v14 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_B0D97C(Pieces_22066704);
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
    v17 = v7;
  else
    v17 = v7 + 1;
  result = 1;
  if ( v17 >> 1 < v8 )
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
  const MethodInfo *v15; // x2
  WarBoardCommonReleaseEntity_array *List; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_Dictionary_int__bool__o *v20; // x19
  __int64 v21; // x1
  __int64 v22; // x2
  int max_length; // w8
  unsigned int v24; // w21
  int32_t *v25; // x25
  int32_t v26; // w8
  int32_t v27; // w1
  const MethodInfo_2E61EF4 *v28; // x3
  bool v29; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v30; // x0
  WarBoardData___c_c *v31; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v34; // x21
  struct WarBoardData___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  __int64 v42; // x0

  if ( (byte_421340B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____, v9);
    sub_B0D8A4(&Method_System_Func_KeyValuePair_int__bool___bool___ctor__, v10);
    sub_B0D8A4(&System_Func_KeyValuePair_int__bool___bool__TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__, v12);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v13);
    byte_421340B = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) != 0 )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_36;
  List = WarBoardCommonReleaseMaster__GetList(
           (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster,
           this->fields.winCondId,
           v15);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0LL) )
    return 0;
  v20 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B0D974(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v17,
                                                                v18);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v20,
    (const MethodInfo_2E61370 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_36:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
      {
        v42 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v42, 0LL);
      }
      v25 = (int32_t *)List->m_Items[v24];
      if ( !v25 || !v20 )
        goto LABEL_36;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v20,
              v25[6],
              (const MethodInfo_2E62194 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)System_Collections_Generic_Dictionary_int__bool___get_Item(
                                                                      v20,
                                                                      v25[6],
                                                                      (const MethodInfo_2E61E5C *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
        break;
LABEL_26:
      max_length = List->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_27;
    }
    v26 = v25[7];
    if ( v26 == 1 )
    {
      v27 = v25[6];
      v28 = (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v29 = v25[10] == 0;
    }
    else
    {
      if ( v26 != 5 )
      {
        v27 = v25[6];
        v28 = (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v30 = v20;
        v29 = 0;
        goto LABEL_25;
      }
      v27 = v25[6];
      v28 = (const MethodInfo_2E61EF4 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v29 = v25[10] < 1;
    }
    v30 = v20;
LABEL_25:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v30, v27, v29, v28);
    goto LABEL_26;
  }
LABEL_27:
  v31 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v31 = WarBoardData___c_TypeInfo;
  }
  static_fields = v31->static_fields;
  _9__95_0 = static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_B0D974(
                                                                 System_Func_KeyValuePair_int__bool___bool__TypeInfo,
                                                                 v21,
                                                                 v22);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v34,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      (const MethodInfo_260A0B0 *)Method_System_Func_KeyValuePair_int__bool___bool___ctor__);
    v35 = WarBoardData___c_TypeInfo->static_fields;
    v35->__9__95_0 = _9__95_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v35->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v20,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_1719AA0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
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
  struct WarBoardStageEntity_o *stageEntity; // x8
  void **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v20; // x1
  System_Int32_array *PlayReinforcements; // x25
  __int64 v22; // x1
  __int64 v23; // x2
  System_Func_int__bool__o *v24; // x26
  const MethodInfo *v25; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  char v27; // w9
  bool result; // w0
  const MethodInfo *v29; // x3
  void *v30; // x8
  __int64 v31; // x9
  WarBoardStageReinforcementsMaster_o *v32; // x21
  int32_t v33; // w22
  __int64 v34; // x9
  __int64 v35; // x9
  _BOOL4 v36; // w9
  __int64 v37; // x0

  if ( (byte_4213450 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, *(_QWORD *)&forceId);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v11);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__, v13);
    sub_B0D8A4(&WarBoardData___c__DisplayClass190_0_TypeInfo, v14);
    byte_4213450 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass190_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass190_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId);
  WarBoardData___c__DisplayClass190_0___ctor(v15, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
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
        PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v20),
        v24 = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, v22, v23),
        System_Func_int__bool____ctor(
          v24,
          (Il2CppObject *)v15,
          Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
          (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__),
        Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)BasicHelper__Any_int__24145568(
                                                                                  PlayReinforcements,
                                                                                  (System_Func_T__bool__o *)v24,
                                                                                  (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312),
        (entity = v15->fields.entity) == 0LL) )
  {
LABEL_33:
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  v27 = IsOnce & (unsigned __int8)Master_WarQuestSelectionMaster;
  result = 0;
  if ( (v27 & 1) == 0 && entity->fields.forceId == forceId && entity->fields.groupId == groupId )
  {
    Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetDeploySquareIds(
                                                                              this,
                                                                              entity->fields.squareIds,
                                                                              v25);
    v30 = *p_entity;
    if ( *p_entity )
    {
      v31 = *((_QWORD *)v30 + 5);
      if ( v31 )
      {
        v32 = Master_WarQuestSelectionMaster;
        v33 = 0;
        while ( v33 < *(_DWORD *)(v31 + 24) )
        {
          v34 = *((_QWORD *)v30 + 8);
          if ( !v34 )
            goto LABEL_33;
          if ( (unsigned int)v33 >= *(_DWORD *)(v34 + 24) )
          {
LABEL_37:
            v37 = sub_B0D9A8(Master_WarQuestSelectionMaster);
            sub_B0D948(v37, 0LL);
          }
          if ( *(int *)(v34 + 4LL * v33 + 32) < 1 )
          {
            v36 = 0;
            if ( !v32 )
              goto LABEL_33;
          }
          else
          {
            Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)WarBoardData__GetReinfocementsPieces(
                                                                                      this,
                                                                                      *((_DWORD *)v30 + 5),
                                                                                      v33,
                                                                                      v29);
            if ( !Master_WarQuestSelectionMaster )
              goto LABEL_33;
            v30 = *p_entity;
            if ( !*p_entity )
              goto LABEL_33;
            v35 = *((_QWORD *)v30 + 8);
            if ( !v35 )
              goto LABEL_33;
            if ( (unsigned int)v33 >= *(_DWORD *)(v35 + 24) )
              goto LABEL_37;
            v36 = *(_DWORD *)(v35 + 4LL * v33 + 32) <= SLODWORD(Master_WarQuestSelectionMaster->fields._MasterName_k__BackingField);
            if ( !v32 )
              goto LABEL_33;
          }
          if ( (unsigned int)v33 >= LODWORD(v32->fields._MasterName_k__BackingField) )
            goto LABEL_37;
          if ( !v36 && (*((_DWORD *)&v32->fields.list + v33) & 0x80000000) == 0 )
            return 1;
          v31 = *((_QWORD *)v30 + 5);
          ++v33;
          if ( !v31 )
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
  System_Collections_Generic_List_WarBoardTaskBase__o *EventTasks; // x20
  System_Type_o *Type; // x20
  intptr_t v13; // w21
  System_Type_o *TypeFromHandle; // x1
  bool v15; // w20
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-48h] BYREF
  System_RuntimeTypeHandle_o v18; // 0:w0.4

  if ( (byte_421340C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B0D8A4(&System_Type_TypeInfo, v8);
    sub_B0D8A4(&WarBoardChangeWinConditionTask_var, v9);
    byte_421340C = 1;
  }
  memset(&v17, 0, sizeof(v17));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0LL, 0LL);
  Instance = (WebViewManager_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                                   (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
                                   (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_22;
    WarBoardManager__AddTask_17750248((WarBoardManager_o *)Instance, 0, EventTasks, 0LL);
  }
  if ( !EventTasks )
LABEL_22:
    sub_B0D97C(Instance);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTasks,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v17,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__) )
  {
    if ( !v17.fields.current )
      sub_B0D97C(0LL);
    Type = System_Object__GetType(v17.fields.current, 0LL);
    v13 = (int)WarBoardChangeWinConditionTask_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v18.fields.value = v13;
    TypeFromHandle = System_Type__GetTypeFromHandle(v18, 0LL);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0LL) )
    {
      v15 = 0;
      this->fields.winCondGroup = -1;
      goto LABEL_19;
    }
  }
  v15 = 1;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v17,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v15;
}


void __fastcall WarBoardData__JudgePrevCondData(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  WarBoardCommonReleaseMaster_o *v9; // x20
  _BOOL8 v10; // x0
  const MethodInfo *v11; // x3
  Il2CppObject *current; // x21
  int32_t klass; // w1
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_T__o v16; // [xsp+0h] [xbp-40h] BYREF
  int32_t condGroup; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_421344A & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v7);
    byte_421344A = 1;
  }
  memset(&v16, 0, sizeof(v16));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_B0D97C(Master_WarQuestSelectionMaster);
  v9 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v16,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.listPrevCond,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v16,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__);
    if ( !v10 )
      break;
    current = v16.fields.current;
    if ( !v16.fields.current )
      sub_B0D97C(v10);
    if ( (HIDWORD(v16.fields.current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v9 )
        sub_B0D97C(v10);
      klass = (int32_t)v16.fields.current[1].klass;
      condGroup = 0;
      if ( WarBoardCommonReleaseMaster__IsOpen_22061376(v9, klass, &condGroup, v11) )
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
    &v16,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
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
  __int64 v84; // x1
  __int64 v85; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v86; // x20
  __int64 v87; // x1
  __int64 v88; // x2
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v90; // x21
  __int64 v91; // x0
  WarBoardData_o *v92; // x21
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *latestPieceActionSquareIndexes; // x1
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  __int64 v113; // x1
  __int64 v114; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v115; // x20
  __int64 v116; // x1
  __int64 v117; // x2
  Il2CppObject *v118; // x22
  WarBoardPrevCondData_SaveData_o *v119; // x21
  __int64 v120; // x0
  WarBoardData_o *v121; // x21
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  __int64 v128; // x1
  __int64 v129; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v130; // x20
  __int64 v131; // x1
  __int64 v132; // x2
  Il2CppObject *v133; // x22
  HoldReinforcementsData_SaveData_o *v134; // x21
  __int64 v135; // x0
  WarBoardData_o *v136; // x21
  System_String_array **v137; // x2
  System_String_array **v138; // x3
  System_Boolean_array **v139; // x4
  System_Int32_array **v140; // x5
  System_Int32_array *v141; // x6
  System_Int32_array *v142; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v143; // x20
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  __int64 v150; // x1
  __int64 v151; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v152; // x20
  __int64 v153; // x1
  __int64 v154; // x2
  Il2CppObject *v155; // x22
  WarBoardUiData_SaveData_o *v156; // x21
  __int64 v157; // x0
  WarBoardData_o *v158; // x21
  System_String_array **v159; // x2
  System_String_array **v160; // x3
  System_Boolean_array **v161; // x4
  System_Int32_array **v162; // x5
  System_Int32_array *v163; // x6
  System_Int32_array *v164; // x7
  struct WarBoardDataEntity_o *v165; // x8
  unsigned int v166; // w0
  WarBoardData_o *v167; // x21
  int v168; // w20
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  __int64 v175; // x1
  __int64 v176; // x2
  unsigned __int64 v177; // x22
  signed __int64 v178; // x24
  __int64 v179; // x25
  struct WarBoardDataEntity_o *v180; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *reinforcementsSaveList; // x27
  WarBoardSquareIndexData_o *v183; // x21
  WarBoardSquareIndexData_SaveData_o *v184; // x20
  System_String_array **v185; // x2
  System_String_array **v186; // x3
  System_Boolean_array **v187; // x4
  System_Int32_array **v188; // x5
  System_Int32_array *v189; // x6
  System_Int32_array *v190; // x7
  struct WarBoardDataEntity_o *v191; // x8
  unsigned int v192; // w0
  WarBoardData_o *v193; // x21
  int v194; // w20
  System_String_array **v195; // x2
  System_String_array **v196; // x3
  System_Boolean_array **v197; // x4
  System_Int32_array **v198; // x5
  System_Int32_array *v199; // x6
  System_Int32_array *v200; // x7
  __int64 v201; // x1
  System_String_array **v202; // x2
  System_String_array **v203; // x3
  System_Boolean_array **v204; // x4
  System_Int32_array **v205; // x5
  System_Int32_array *v206; // x6
  System_Int32_array *v207; // x7
  unsigned __int64 v208; // x22
  signed __int64 v209; // x24
  __int64 v210; // x25
  struct WarBoardDataEntity_o *v211; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x27
  WarBoardBossBattleData_o *v214; // x21
  WarBoardBossBattleData_SaveData_o *v215; // x20
  System_String_array **v216; // x2
  System_String_array **v217; // x3
  System_Boolean_array **v218; // x4
  System_Int32_array **v219; // x5
  System_Int32_array *v220; // x6
  System_Int32_array *v221; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  __int64 v223; // x1
  __int64 v224; // x2
  struct WarBoardData_WarBoardLocalSaveData_o *v225; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v226; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v227; // x8
  MiniMessagePack_MiniMessagePacker_o *v228; // x19
  System_Byte_array *v229; // x19
  WarBoardData_c *v230; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v232; // x19
  __int64 v233; // x0
  __int64 v234; // x0
  _BYTE v235[40]; // [xsp+0h] [xbp-100h] BYREF
  int v236; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o v237; // [xsp+30h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v238; // [xsp+50h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v239; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v240; // [xsp+90h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_4213403 & 1) == 0 )
  {
    sub_B0D8A4(&System_Convert_TypeInfo, onBoardSkillUpdate);
    sub_B0D8A4(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__, v30);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v31);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__, v32);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__, v33);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__, v34);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__, v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__, v36);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo, v37);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo, v38);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo, v39);
    sub_B0D8A4(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo, v40);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v41);
    sub_B0D8A4(&WarBoardSquareIndexData_SaveData___TypeInfo, v42);
    sub_B0D8A4(&WarBoardBossBattleData_SaveData___TypeInfo, v43);
    sub_B0D8A4(&WarBoardUiData_SaveData_TypeInfo, v44);
    sub_B0D8A4(&WarBoardEventData_SaveData_TypeInfo, v45);
    sub_B0D8A4(&WarBoardSquareIndexData_SaveData_TypeInfo, v46);
    sub_B0D8A4(&WarBoardPrevCondData_SaveData_TypeInfo, v47);
    sub_B0D8A4(&HoldReinforcementsData_SaveData_TypeInfo, v48);
    sub_B0D8A4(&WarBoardBossBattleData_SaveData_TypeInfo, v49);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v50);
    this = (WarBoardData_o *)sub_B0D8A4(&WarBoardData_TypeInfo, v51);
    byte_4213403 = 1;
  }
  memset(&v240, 0, sizeof(v240));
  memset(&v239, 0, sizeof(v239));
  memset(&v238, 0, sizeof(v238));
  memset(&v237, 0, sizeof(v237));
  v236 = 0;
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
    v233 = sub_B0D9A8(this);
    sub_B0D948(v233, 0LL);
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
  this = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  v86 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo,
                                                                                                  v84,
                                                                                                  v85);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v86,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listEvent;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v235,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v240 = *(System_Collections_Generic_List_Enumerator_T__o *)v235;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v240,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v240.fields.current;
    v90 = (WarBoardEventData_SaveData_o *)sub_B0D974(WarBoardEventData_SaveData_TypeInfo, v87, v88);
    WarBoardEventData_SaveData___ctor_20602496(v90, (WarBoardEventData_o *)current, 0LL);
    if ( !v86 )
      sub_B0D97C(v91);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v86,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v90,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
  }
  *(_DWORD *)&v235[4 * v236++ + 24] = 482;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v240,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( v236 && *(_DWORD *)&v235[4 * v236 + 20] == 482 )
    --v236;
  if ( !v86 )
    goto LABEL_143;
  v92 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v86,
                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v92 )
    goto LABEL_143;
  v92->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)this;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v92->fields.localSaveData,
    (System_Int32_array **)this,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_143;
  latestPieceActionSquareIndexes = (struct System_Collections_Generic_List_WarBoardUiData__o *)v4->fields.latestPieceActionSquareIndexes;
  this->fields.listUiData = latestPieceActionSquareIndexes;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)latestPieceActionSquareIndexes,
    v99,
    v100,
    v101,
    v102,
    v103,
    v104);
  this = (WarBoardData_o *)v4->fields.localSaveData;
  if ( !this )
    goto LABEL_143;
  latestBattlePieceUniqueIndexes = (System_Int32_array **)v4->fields.latestBattlePieceUniqueIndexes;
  *(_QWORD *)&this->fields.isPlayedHalfDeadMessage = latestBattlePieceUniqueIndexes;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.isPlayedHalfDeadMessage,
    latestBattlePieceUniqueIndexes,
    v106,
    v107,
    v108,
    v109,
    v110,
    v111);
  v115 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo,
                                                                                                   v113,
                                                                                                   v114);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v115,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listPrevCond;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v235,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v239 = *(System_Collections_Generic_List_Enumerator_T__o *)v235;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v239,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v118 = v239.fields.current;
    v119 = (WarBoardPrevCondData_SaveData_o *)sub_B0D974(WarBoardPrevCondData_SaveData_TypeInfo, v116, v117);
    WarBoardPrevCondData_SaveData___ctor_22739212(v119, (WarBoardPrevCondData_o *)v118, 0LL);
    if ( !v115 )
      sub_B0D97C(v120);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v115,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v119,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
  }
  *(_DWORD *)&v235[4 * v236++ + 24] = 618;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v239,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( v236 && *(_DWORD *)&v235[4 * v236 + 20] == 618 )
    --v236;
  if ( !v115 )
    goto LABEL_143;
  v121 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v115,
                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v121 )
    goto LABEL_143;
  v121->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)this;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v121->fields.listEvent,
    (System_Int32_array **)this,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v130 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo,
                                                                                                   v128,
                                                                                                   v129);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v130,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.reinforcementsSaveList;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v235,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v238 = *(System_Collections_Generic_List_Enumerator_T__o *)v235;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v238,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v133 = v238.fields.current;
    v134 = (HoldReinforcementsData_SaveData_o *)sub_B0D974(HoldReinforcementsData_SaveData_TypeInfo, v131, v132);
    HoldReinforcementsData_SaveData___ctor_17862392(v134, (HoldReinforcementsData_o *)v133, 0LL);
    if ( !v130 )
      sub_B0D97C(v135);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v130,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v134,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
  }
  *(_DWORD *)&v235[4 * v236++ + 24] = 703;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v238,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v236 && *(_DWORD *)&v235[4 * v236 + 20] == 703 )
    --v236;
  if ( !v130 )
    goto LABEL_143;
  v136 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v130,
                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v136 )
    goto LABEL_143;
  *(_QWORD *)&v136->fields.winCondId = this;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v136->fields.winCondId,
    (System_Int32_array **)this,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  this = (WarBoardData_o *)v4->fields.playedStageReinforcementsList;
  if ( !this )
    goto LABEL_143;
  v143 = v4->fields.localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_int___ToArray(
                             (System_Collections_Generic_List_int__o *)this,
                             (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v143 )
    goto LABEL_143;
  v143->fields.playedReinforcements = (struct System_Int32_array *)this;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v143->fields.playedReinforcements,
    (System_Int32_array **)this,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  v152 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo,
                                                                                                   v150,
                                                                                                   v151);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v152,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  this = (WarBoardData_o *)v4->fields.listUiData;
  if ( !this )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v235,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v237 = *(System_Collections_Generic_List_Enumerator_T__o *)v235;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v237,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v155 = v237.fields.current;
    v156 = (WarBoardUiData_SaveData_o *)sub_B0D974(WarBoardUiData_SaveData_TypeInfo, v153, v154);
    WarBoardUiData_SaveData___ctor_19714036(v156, (WarBoardUiData_o *)v155, 0LL);
    if ( !v152 )
      sub_B0D97C(v157);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v152,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v156,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
  }
  *(_DWORD *)&v235[4 * v236++ + 24] = 812;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v237,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( v236 && *(_DWORD *)&v235[4 * v236 + 20] == 812 )
    --v236;
  if ( !v152 )
    goto LABEL_143;
  v158 = *p_localSaveData;
  this = (WarBoardData_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v152,
                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v158
    || (v158->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)this,
        sub_B0D840(
          (BattleServantConfConponent_o *)&v158->fields.latestBattlePieceUniqueIndexes,
          (System_Int32_array **)this,
          v159,
          v160,
          v161,
          v162,
          v163,
          v164),
        (v165 = v4->fields.serverData) == 0LL)
    || (v166 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v165->fields.squareIndexInfo,
                 (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v167 = *p_localSaveData,
        v168 = v166,
        this = (WarBoardData_o *)sub_B0D8BC(WarBoardSquareIndexData_SaveData___TypeInfo, v166),
        !v167) )
  {
LABEL_143:
    sub_B0D97C(this);
  }
  v167->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)this;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v167->fields.reinforcementsSaveList,
    (System_Int32_array **)this,
    v169,
    v170,
    v171,
    v172,
    v173,
    v174);
  if ( v168 >= 1 )
  {
    v177 = 0LL;
    v178 = v168;
    v179 = 8LL;
    while ( *p_localSaveData )
    {
      v180 = v4->fields.serverData;
      if ( !v180 )
        break;
      squareIndexInfo = v180->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v177 >= squareIndexInfo->max_length )
        goto LABEL_144;
      reinforcementsSaveList = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v183 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v179 * 4);
      v184 = (WarBoardSquareIndexData_SaveData_o *)sub_B0D974(WarBoardSquareIndexData_SaveData_TypeInfo, v175, v176);
      WarBoardSquareIndexData_SaveData___ctor_22745312(v184, v183, 0LL);
      if ( !reinforcementsSaveList )
        break;
      if ( v184 )
      {
        this = (WarBoardData_o *)sub_B0D964(v184, *(_QWORD *)(*(_QWORD *)reinforcementsSaveList + 64LL));
        if ( !this )
        {
LABEL_149:
          v234 = sub_B0D99C();
          sub_B0D948(v234, 0LL);
        }
      }
      if ( v177 >= reinforcementsSaveList[6] )
        goto LABEL_144;
      *(_QWORD *)&reinforcementsSaveList[v179] = v184;
      sub_B0D840(
        (BattleServantConfConponent_o *)&reinforcementsSaveList[v179],
        (System_Int32_array **)v184,
        v185,
        v186,
        v187,
        v188,
        v189,
        v190);
      ++v177;
      v179 += 2LL;
      if ( (__int64)v177 >= v178 )
        goto LABEL_114;
    }
    goto LABEL_143;
  }
LABEL_114:
  v191 = v4->fields.serverData;
  if ( !v191 )
    goto LABEL_143;
  v192 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v191->fields.bossBattleInfo,
           (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v193 = *p_localSaveData;
  v194 = v192;
  this = (WarBoardData_o *)sub_B0D8BC(WarBoardBossBattleData_SaveData___TypeInfo, v192);
  if ( !v193 )
    goto LABEL_143;
  v193->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)this;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v193->fields.playedStageReinforcementsList,
    (System_Int32_array **)this,
    v195,
    v196,
    v197,
    v198,
    v199,
    v200);
  this = *p_localSaveData;
  if ( v194 >= 1 )
  {
    v208 = 0LL;
    v209 = v194;
    v210 = 32LL;
    while ( this )
    {
      v211 = v4->fields.serverData;
      if ( !v211 )
        break;
      bossBattleInfo = v211->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v208 >= bossBattleInfo->max_length )
        goto LABEL_144;
      playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
      v214 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v210);
      v215 = (WarBoardBossBattleData_SaveData_o *)sub_B0D974(WarBoardBossBattleData_SaveData_TypeInfo, v201, v202);
      WarBoardBossBattleData_SaveData___ctor_20584984(v215, v214, 0LL);
      if ( !playedStageReinforcementsList )
        break;
      if ( v215 )
      {
        this = (WarBoardData_o *)sub_B0D964(v215, playedStageReinforcementsList->klass->_1.element_class);
        if ( !this )
          goto LABEL_149;
      }
      if ( v208 >= (unsigned int)playedStageReinforcementsList->fields._size )
        goto LABEL_144;
      *(System_Collections_Generic_List_int__c **)((char *)&playedStageReinforcementsList->klass + v210) = (System_Collections_Generic_List_int__c *)v215;
      sub_B0D840(
        (BattleServantConfConponent_o *)((char *)playedStageReinforcementsList + v210),
        (System_Int32_array **)v215,
        v216,
        v217,
        v218,
        v219,
        v220,
        v221);
      this = *p_localSaveData;
      ++v208;
      v210 += 8LL;
      if ( (__int64)v208 >= v209 )
        goto LABEL_127;
    }
    goto LABEL_143;
  }
LABEL_127:
  if ( !this )
    goto LABEL_143;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)bgAnimationInfo_k__BackingField,
    v202,
    v203,
    v204,
    v205,
    v206,
    v207);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  v225 = v4->fields.localSaveData;
  if ( !v225 )
    goto LABEL_143;
  v225->fields.isContinue = v4->fields._IsContinue_k__BackingField;
  v226 = v4->fields.localSaveData;
  if ( !v226 )
    goto LABEL_143;
  v226->fields.isNextTurn = v4->fields._IsNextTurn_k__BackingField;
  v227 = v4->fields.localSaveData;
  if ( !v227 )
    goto LABEL_143;
  v227->fields.localSaveTiming = v4->fields.localSaveTiming;
  v228 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v223, v224);
  MiniMessagePack_MiniMessagePacker___ctor(v228, 0LL);
  if ( !v228 )
    goto LABEL_143;
  v229 = MiniMessagePack_MiniMessagePacker__PackClass(v228, (Il2CppObject *)*p_localSaveData, 0LL);
  v230 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v230 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v230->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v232 = System_Convert__ToBase64String(v229, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v232, 0LL);
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
  __int64 v20; // x2
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x22
  __int64 v23; // x1
  __int64 v24; // x2
  _BOOL8 v25; // x0
  int32_t v26; // w21
  int32_t v27; // w22
  HoldReinforcementsData_o *v28; // x20
  System_Collections_Generic_List_Enumerator_T__o v29; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421344D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_HoldReinforcementsData___, *(_QWORD *)&stageReinforcementsId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v9);
    sub_B0D8A4(&Method_System_Func_HoldReinforcementsData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_HoldReinforcementsData__bool__TypeInfo, v11);
    sub_B0D8A4(&HoldReinforcementsData_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v14);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__, v15);
    sub_B0D8A4(&WarBoardData___c__DisplayClass187_0_TypeInfo, v16);
    byte_421344D = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v17 = (WarBoardData___c__DisplayClass187_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass187_0_TypeInfo,
                                                   *(_QWORD *)&stageReinforcementsId,
                                                   *(_QWORD *)&index);
  WarBoardData___c__DisplayClass187_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_17;
  v17->fields.stageReinforcementsId = stageReinforcementsId;
  v17->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_HoldReinforcementsData__bool__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v22,
          (const MethodInfo_1707138 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v26 = v17->fields.stageReinforcementsId;
    v27 = v17->fields.index;
    v28 = (HoldReinforcementsData_o *)sub_B0D974(HoldReinforcementsData_TypeInfo, v23, v24);
    HoldReinforcementsData___ctor_26820936(v28, v26, v27, 1, 0LL);
    v18 = this->fields.reinforcementsSaveList;
    if ( v18 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
      return;
    }
LABEL_17:
    sub_B0D97C(v18);
  }
  v18 = this->fields.reinforcementsSaveList;
  if ( !v18 )
    goto LABEL_17;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v29,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  while ( 1 )
  {
    v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v29,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__);
    if ( !v25 )
      break;
    if ( !v29.fields.current )
      sub_B0D97C(v25);
    if ( LODWORD(v29.fields.current[1].klass) == v17->fields.stageReinforcementsId
      && HIDWORD(v29.fields.current[1].klass) == v17->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v29.fields.current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v29,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SavePlayReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_421344B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&stageReinforcementsId);
    byte_421344B = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_int___Add(
    playedStageReinforcementsList,
    stageReinforcementsId,
    (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
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
  const MethodInfo *v23; // x2
  WarBoardSquareData_o *Square; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v27; // x24
  WarBoardSquareData_o *v28; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x24
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v36; // x25
  __int64 v37; // x1
  __int64 v38; // x2
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v39; // x24
  int32_t v40; // w26
  WarBoardData_SquareRangeSearch_o *v41; // x25
  struct System_Int32_array *linkedSquares; // x8
  __int64 v43; // x8
  __int64 v44; // x20
  __int64 i; // x27
  __int64 v46; // x24
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  struct System_Int32_array *v56; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v57; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v58; // x26
  __int64 v59; // x1
  __int64 v60; // x2
  const MethodInfo *v61; // x4
  System_Collections_Generic_List_T__o *v62; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v63; // x26
  struct System_Int32_array *v64; // x8
  __int64 v65; // x8
  __int64 v66; // x0

  if ( (byte_4213424 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___, *(_QWORD *)&start);
    sub_B0D8A4(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___, v9);
    sub_B0D8A4(&Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__, v13);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v14);
    sub_B0D8A4(&WarBoardData_SquareRangeSearch_TypeInfo, v15);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__, v16);
    sub_B0D8A4(&WarBoardData___c__DisplayClass125_0_TypeInfo, v17);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__, v18);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__, v19);
    sub_B0D8A4(&WarBoardData___c__DisplayClass125_1_TypeInfo, v20);
    byte_4213424 = 1;
  }
  v21 = (WarBoardData___c__DisplayClass125_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass125_0_TypeInfo,
                                                   *(_QWORD *)&start,
                                                   *(_QWORD *)&range);
  WarBoardData___c__DisplayClass125_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_26;
  v21->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v23);
  if ( Square )
  {
    v27 = *rangeSearches;
    v28 = Square;
    if ( !*rangeSearches )
    {
      v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v25, v26);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v29,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v29;
      sub_B0D840(
        (BattleServantConfConponent_o *)rangeSearches,
        (System_Int32_array **)v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35);
      v27 = *rangeSearches;
    }
    v36 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                                               v25,
                                                                               v26);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v36,
      (Il2CppObject *)v21,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
    v22 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v27,
            (System_Func_TSource__bool__o *)v36,
            (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v22 )
    {
      v22->fields.range = range;
    }
    else
    {
      v39 = *rangeSearches;
      v40 = v21->fields.start;
      v41 = (WarBoardData_SquareRangeSearch_o *)sub_B0D974(WarBoardData_SquareRangeSearch_TypeInfo, v37, v38);
      WarBoardData_SquareRangeSearch___ctor(v41, v40, range, 0LL);
      if ( !v39 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v39,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v41,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    }
    v21->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v28->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_26;
      v43 = *(_QWORD *)&linkedSquares->max_length;
      if ( (int)v43 >= 1 )
      {
        v44 = (int)v43;
        for ( i = 8LL; ; ++i )
        {
          v46 = sub_B0D974(WarBoardData___c__DisplayClass125_1_TypeInfo, v37, v38);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v46, 0LL);
          if ( !v46 )
            break;
          *(_QWORD *)(v46 + 24) = v21;
          v53 = v46 + 24;
          sub_B0D840(
            (BattleServantConfConponent_o *)(v46 + 24),
            (System_Int32_array **)v21,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52);
          v56 = v28->fields.linkedSquares;
          if ( !v56 )
            break;
          if ( i - 8 >= (unsigned __int64)v56->max_length )
            goto LABEL_27;
          *(_DWORD *)(v46 + 16) = *((_DWORD *)&v56->obj.klass + i);
          v57 = *rangeSearches;
          v58 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                                                     v54,
                                                                                     v55);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v58,
            (Il2CppObject *)v46,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            (const MethodInfo_26189B8 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
          v22 = (WarBoardData_SquareRangeSearch_o *)System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                      (System_Collections_Generic_IEnumerable_TSource__o *)v57,
                                                      (System_Func_TSource__bool__o *)v58,
                                                      (const MethodInfo_171872C *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( ((unsigned __int8)v22 & 1) != 0
            || (v62 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v63 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                           System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                                                           v59,
                                                                                           v60),
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  v63,
                  (Il2CppObject *)v46,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  (const MethodInfo_26189B8 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__),
                v22 = (WarBoardData_SquareRangeSearch_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                                            v62,
                                                            (System_Func_T__bool__o *)v63,
                                                            (const MethodInfo_1707138 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___),
                ((unsigned __int8)v22 & 1) != 0) )
          {
            v64 = v28->fields.linkedSquares;
            if ( !v64 )
              break;
            if ( i - 8 >= (unsigned __int64)v64->max_length )
            {
LABEL_27:
              v66 = sub_B0D9A8(v22);
              sub_B0D948(v66, 0LL);
            }
            if ( !*(_QWORD *)v53 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              *((_DWORD *)&v64->obj.klass + i),
              *(_DWORD *)(*(_QWORD *)v53 + 20LL),
              rangeSearches,
              v61);
          }
          v65 = i - 7;
          if ( v65 >= v44 )
            return;
        }
LABEL_26:
        sub_B0D97C(v22);
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
  WarBoardPieceData_o *Piece_22073600; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_HashSet_int__o *v23; // x23
  const MethodInfo *v24; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v26; // x2
  WarBoardSquareData_o *v27; // x24
  WarBoardPieceData_o *v28; // x25
  struct System_Int32_array *linkedSquares; // x24
  __int64 v30; // x8
  unsigned __int64 v31; // x25
  int32_t v32; // w22
  __int64 v34; // x0

  v7 = destination;
  if ( (byte_4213425 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool__Invoke__, *(_QWORD *)&destination);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_int___ctor___67861296, v11);
    sub_B0D8A4(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_int__Contains__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_int__Dequeue__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_int__Enqueue__, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_int___ctor___67912480, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_int__get_Count__, v17);
    sub_B0D8A4(&System_Collections_Generic_Queue_int__TypeInfo, v18);
    byte_4213425 = 1;
  }
  if ( v7 != current )
  {
    v19 = (System_Collections_Generic_Queue_int__o *)sub_B0D974(
                                                       System_Collections_Generic_Queue_int__TypeInfo,
                                                       *(_QWORD *)&destination,
                                                       *(_QWORD *)&current);
    System_Collections_Generic_Queue_int____ctor(
      v19,
      (const MethodInfo_2B01328 *)Method_System_Collections_Generic_Queue_int___ctor___67912480);
    if ( !v19 )
LABEL_24:
      sub_B0D97C(Piece_22073600);
    System_Collections_Generic_Queue_int___Enqueue(
      v19,
      v7,
      (const MethodInfo_2B018C8 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v23 = (System_Collections_Generic_HashSet_int__o *)sub_B0D974(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v21,
                                                         v22);
    System_Collections_Generic_HashSet_int____ctor(
      v23,
      (const MethodInfo_2C74FFC *)Method_System_Collections_Generic_HashSet_int___ctor___67861296);
    if ( v19->fields._size >= 1 )
    {
      do
      {
        v7 = System_Collections_Generic_Queue_int___Dequeue(
               v19,
               (const MethodInfo_2B01AD4 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, v7, v24);
        if ( !Square )
          break;
        v27 = Square;
        Piece_22073600 = WarBoardData__GetPiece_22073600(this, v7, v26);
        if ( !Piece_22073600 )
          return v7;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v28 = Piece_22073600;
        Piece_22073600 = (WarBoardPieceData_o *)System_Func_BattleBuffData_BuffData__bool___Invoke(
                                                  (System_Func_BattleBuffData_BuffData__bool__o *)checkReplaceFunc,
                                                  (BattleBuffData_BuffData_o *)Piece_22073600,
                                                  (const MethodInfo_26189CC *)Method_System_Func_WarBoardPieceData__bool__Invoke__);
        if ( ((unsigned __int8)Piece_22073600 & 1) != 0 )
        {
          WarBoardPieceData__SetSquareIndex(v28, -1, 0LL);
          return v7;
        }
        if ( !v23 )
          goto LABEL_24;
        Piece_22073600 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Add(
                                                  v23,
                                                  v7,
                                                  (const MethodInfo_2C761D8 *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v27->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        v30 = *(_QWORD *)&linkedSquares->max_length;
        if ( (int)v30 >= 1 )
        {
          v31 = 0LL;
          do
          {
            if ( v31 >= (unsigned int)v30 )
            {
              v34 = sub_B0D9A8(Piece_22073600);
              sub_B0D948(v34, 0LL);
            }
            v32 = linkedSquares->m_Items[v31 + 1];
            Piece_22073600 = (WarBoardPieceData_o *)System_Collections_Generic_HashSet_int___Contains(
                                                      v23,
                                                      v32,
                                                      (const MethodInfo_2C75680 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( ((unsigned __int8)Piece_22073600 & 1) == 0 )
            {
              Piece_22073600 = (WarBoardPieceData_o *)System_Collections_Generic_Queue_int___Contains(
                                                        v19,
                                                        v32,
                                                        (const MethodInfo_2B01BE4 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( ((unsigned __int8)Piece_22073600 & 1) == 0 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v19,
                  v32,
                  (const MethodInfo_2B018C8 *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(v30) = linkedSquares->max_length;
            ++v31;
          }
          while ( (__int64)v31 < (int)v30 );
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

  if ( (byte_4213458 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, objectName);
    byte_4213458 = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)bgAnimationInfo_k__BackingField,
    (System_Xml_XmlQualifiedName_o *)objectName,
    (System_Xml_Schema_XmlSchemaObject_o *)animName,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PlayerPieces; // x20
  WarBoardData___c_c *v14; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__82_0; // x21
  Il2CppObject *v17; // x22
  struct WarBoardData___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  WarBoardItemData_o *v25; // x0
  WarBoardItemData_c *klass; // x8
  WarBoardItemData_o *v27; // x20
  unsigned __int64 v28; // x10
  int32_t *p_offset; // x11
  __int64 v30; // x0
  __int64 v31; // x20
  __int64 v32; // x8
  unsigned __int64 v33; // x10
  int *v34; // x11
  __int64 v35; // x0
  __int64 v36; // x8
  unsigned __int64 v37; // x10
  int *v38; // x11
  __int64 v39; // x0
  WarBoardPieceData_o *v40; // x0
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v47; // w20
  __int64 v48; // x0

  if ( (byte_4213407 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___, method);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__int___ctor__, v3);
    sub_B0D8A4(&System_Func_WarBoardPieceData__int__TypeInfo, v4);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B0D8A4(&Method_WarBoardData___c__SetContinue_b__82_0__, v9);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v10);
    byte_4213407 = 1;
  }
  PlayerPieces = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardData__GetPlayerPieces(this, method);
  v14 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v14 = WarBoardData___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_WarBoardPieceData__int__TypeInfo,
                                                                                 v11,
                                                                                 v12);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__82_0,
      v17,
      Method_WarBoardData___c__SetContinue_b__82_0__,
      (const MethodInfo_2619564 *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v18 = WarBoardData___c_TypeInfo->static_fields;
    v18->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v18->__9__82_0,
      (System_Int32_array **)_9__82_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (WarBoardItemData_o *)System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
                                PlayerPieces,
                                (System_Func_TSource__TKey__o *)_9__82_0,
                                (const MethodInfo_1B4E924 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  if ( !v25 )
    goto LABEL_48;
  klass = v25->klass;
  v27 = v25;
  if ( *(_WORD *)&v25->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v28;
      p_offset += 4;
      if ( v28 >= *(unsigned __int16 *)&v25->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    v30 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_16:
    v30 = sub_AA67A0(v25, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(WarBoardItemData_o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( !v31 )
    sub_B0D97C(0LL);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v33 = 0LL;
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v33;
        v34 += 4;
        if ( v33 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_23;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_23:
      v35 = sub_AA67A0(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
    {
      v37 = 0LL;
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v38 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v37;
        v38 += 4;
        if ( v37 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
          goto LABEL_30;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_30:
      v39 = sub_AA67A0(v31, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v40 = (WarBoardPieceData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
    if ( !v40 )
      sub_B0D97C(0LL);
    WarBoardPieceData__SetContinue(v40, 0LL);
  }
  v41 = *(_QWORD *)v31;
  if ( *(_WORD *)(*(_QWORD *)v31 + 298LL) )
  {
    v42 = 0LL;
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      ++v42;
      v43 += 4;
      if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v31 + 298LL) )
        goto LABEL_38;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_38:
    v44 = sub_AA67A0(v31, System_IDisposable_TypeInfo, 0LL);
  }
  v25 = (WarBoardItemData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v31, *(_QWORD *)(v44 + 8));
  items = this->fields.items;
  if ( !items )
LABEL_48:
    sub_B0D97C(v25);
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v47 = 0;
    while ( 1 )
    {
      if ( v47 >= max_length )
      {
        v48 = sub_B0D9A8(v25);
        sub_B0D948(v48, 0LL);
      }
      v25 = items->m_Items[v47];
      if ( !v25 )
        break;
      WarBoardItemData__ResetItem(v25, 0LL);
      max_length = items->max_length;
      if ( (int)++v47 >= max_length )
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

  if ( (byte_4213430 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Find_WarBoardPieceData___, userEquipId);
    sub_B0D8A4(&Method_System_Predicate_WarBoardPieceData___ctor__, v5);
    sub_B0D8A4(&System_Predicate_WarBoardPieceData__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, v7);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v8);
    byte_4213430 = 1;
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
    _9__144_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_WarBoardPieceData__TypeInfo,
                                                                           userEquipId,
                                                                           method);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__144_0,
      v13,
      Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v14 = WarBoardData___c_TypeInfo->static_fields;
    v14->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_B0D840(
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
                                                                             (const MethodInfo_1F687A8 *)Method_System_Array_Find_WarBoardPieceData___);
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
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  System_Byte_array *v45; // x21
  System_Byte_array *v46; // x21
  System_String_o *v47; // x0
  struct WarBoardDataEntity_o *v48; // x8
  Il2CppObject *v49; // x0
  System_Byte_array *v50; // x0
  System_Byte_array *v51; // x0
  System_String_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v56; // x0
  struct WarBoardData___c_StaticFields *v57; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__156_1; // x24
  System_String_o *v59; // x22
  System_String_o *v60; // x21
  Il2CppObject *v61; // x1
  Il2CppObject *v62; // x25
  struct WarBoardData___c_StaticFields *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v70; // x0
  __int64 v71; // x1
  __int64 v72; // x2
  WarBoardData___c_c *v73; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x23
  struct WarBoardData___c_StaticFields *v75; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__156_2; // x24
  Il2CppObject *v77; // x25
  struct WarBoardData___c_StaticFields *v78; // x0
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  System_String_array *v86; // x0
  Il2CppObject *v87; // x0
  System_Byte_array *v88; // x21
  System_Byte_array *v89; // x21
  System_String_o *v90; // x0
  struct WarBoardDataEntity_o *v91; // x8
  Il2CppObject *v92; // x21
  Il2CppObject *v93; // x0
  System_Byte_array *v94; // x21
  System_Byte_array *v95; // x21
  System_String_o *v96; // x0
  struct WarBoardDataEntity_o *v97; // x8
  Il2CppObject *v98; // x0
  System_Byte_array *v99; // x0
  System_Byte_array *v100; // x0
  System_String_o *v101; // x0
  struct WarBoardDataEntity_o *v102; // x8
  Il2CppObject *v103; // x0
  System_Byte_array *v104; // x0
  System_Byte_array *v105; // x0
  System_String_o *v106; // x2

  if ( (byte_4213439 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_WarBoardPieceData___ctor__, request);
    sub_B0D8A4(&System_Action_WarBoardPieceData__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_WarBoardPieceData___, v6);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v7);
    sub_B0D8A4(&System_Convert_TypeInfo, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_string___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_string___, v11);
    sub_B0D8A4(&Method_System_Func_WarBoardItemData__string___ctor__, v12);
    sub_B0D8A4(&Method_System_Func_string__bool___ctor__, v13);
    sub_B0D8A4(&System_Func_WarBoardItemData__string__TypeInfo, v14);
    sub_B0D8A4(&System_Func_string__bool__TypeInfo, v15);
    sub_B0D8A4(&JsonManager_TypeInfo, v16);
    sub_B0D8A4(&Method_WarBoardData___c__SetRequest_b__156_0__, v17);
    sub_B0D8A4(&Method_WarBoardData___c__SetRequest_b__156_1__, v18);
    sub_B0D8A4(&Method_WarBoardData___c__SetRequest_b__156_2__, v19);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v20);
    sub_B0D8A4(&StringLiteral_16937/*"bossBattleInfo"*/, v21);
    sub_B0D8A4(&StringLiteral_22545/*"svtInfo"*/, v22);
    sub_B0D8A4(&StringLiteral_20462/*"masterInfo"*/, v23);
    sub_B0D8A4(&StringLiteral_23272/*"wallInfo"*/, v24);
    sub_B0D8A4(&StringLiteral_21237/*"null"*/, v25);
    sub_B0D8A4(&StringLiteral_22317/*"squareIndexInfo"*/, v26);
    sub_B0D8A4(&StringLiteral_19060/*"getItemInfo"*/, v27);
    sub_B0D8A4(&StringLiteral_705/*","*/, v28);
    sub_B0D8A4(&StringLiteral_15874/*"[{0}]"*/, v29);
    byte_4213439 = 1;
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
    _9__156_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                       System_Action_WarBoardPieceData__TypeInfo,
                                                                                       request,
                                                                                       method);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__156_0,
      v34,
      Method_WarBoardData___c__SetRequest_b__156_0__,
      (const MethodInfo_246EA3C *)Method_System_Action_WarBoardPieceData___ctor__);
    v35 = WarBoardData___c_TypeInfo->static_fields;
    v35->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_B0D840(
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
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_63;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v42 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0LL);
  if ( !request )
    goto LABEL_63;
  v45 = RequestBase__PackToMessagePack(request, v42, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v46 = CatAndMouseGame__CatGame5Bytes(v45, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v47 = System_Convert__ToBase64String(v46, 0LL);
  RequestBase__addField_30435648(request, (System_String_o *)StringLiteral_22545/*"svtInfo"*/, v47, 0LL);
  v48 = this->fields.serverData;
  if ( !v48 )
    goto LABEL_63;
  v49 = (Il2CppObject *)JsonManager__toJson(&v48->fields.masterInfo->obj, 0, 0, 0LL);
  v50 = RequestBase__PackToMessagePack(request, v49, 0LL);
  v51 = CatAndMouseGame__CatGame5Bytes(v50, 0LL);
  v52 = System_Convert__ToBase64String(v51, 0LL);
  RequestBase__addField_30435648(request, (System_String_o *)StringLiteral_20462/*"masterInfo"*/, v52, 0LL);
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  if ( !items )
    goto LABEL_63;
  if ( items[1].monitor )
  {
    v56 = WarBoardData___c_TypeInfo;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v56 = WarBoardData___c_TypeInfo;
    }
    v57 = v56->static_fields;
    _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v57->__9__156_1;
    v59 = (System_String_o *)StringLiteral_705/*","*/;
    v60 = (System_String_o *)StringLiteral_15874/*"[{0}]"*/;
    if ( !_9__156_1 )
    {
      if ( (BYTE3(v56->vtable._0_Equals.methodPtr) & 4) != 0 && !v56->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v56);
        v57 = WarBoardData___c_TypeInfo->static_fields;
      }
      v62 = (Il2CppObject *)v57->__9;
      _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                    System_Func_WarBoardItemData__string__TypeInfo,
                                                                                                    v53,
                                                                                                    v54);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__156_1,
        v62,
        Method_WarBoardData___c__SetRequest_b__156_1__,
        (const MethodInfo_261A104 *)Method_System_Func_WarBoardItemData__string___ctor__);
      v63 = WarBoardData___c_TypeInfo->static_fields;
      v63->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v63->__9__156_1,
        (System_Int32_array **)_9__156_1,
        v64,
        v65,
        v66,
        v67,
        v68,
        v69);
    }
    v70 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v73 = WarBoardData___c_TypeInfo;
    v74 = (System_Collections_Generic_IEnumerable_TSource__o *)v70;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v73 = WarBoardData___c_TypeInfo;
    }
    v75 = v73->static_fields;
    _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v75->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v73);
        v75 = WarBoardData___c_TypeInfo->static_fields;
      }
      v77 = (Il2CppObject *)v75->__9;
      _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                       System_Func_string__bool__TypeInfo,
                                                                                       v71,
                                                                                       v72);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__156_2,
        v77,
        Method_WarBoardData___c__SetRequest_b__156_2__,
        (const MethodInfo_26189B8 *)Method_System_Func_string__bool___ctor__);
      v78 = WarBoardData___c_TypeInfo->static_fields;
      v78->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v78->__9__156_2,
        (System_Int32_array **)_9__156_2,
        v79,
        v80,
        v81,
        v82,
        v83,
        v84);
    }
    v85 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v74,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_string___);
    v86 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v85,
                                   (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_string___);
    v87 = (Il2CppObject *)System_String__Join(v59, v86, 0LL);
    v61 = (Il2CppObject *)System_String__Format(v60, v87, 0LL);
  }
  else
  {
    v61 = (Il2CppObject *)StringLiteral_21237/*"null"*/;
  }
  v88 = RequestBase__PackToMessagePack(request, v61, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v89 = CatAndMouseGame__CatGame5Bytes(v88, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v90 = System_Convert__ToBase64String(v89, 0LL);
  RequestBase__addField_30435648(request, (System_String_o *)StringLiteral_19060/*"getItemInfo"*/, v90, 0LL);
  v91 = this->fields.serverData;
  if ( !v91 )
    goto LABEL_63;
  v92 = &v91->fields.wallInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v93 = (Il2CppObject *)JsonManager__toJson(v92, 0, 0, 0LL);
  v94 = RequestBase__PackToMessagePack(request, v93, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v95 = CatAndMouseGame__CatGame5Bytes(v94, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v96 = System_Convert__ToBase64String(v95, 0LL);
  RequestBase__addField_30435648(request, (System_String_o *)StringLiteral_23272/*"wallInfo"*/, v96, 0LL);
  v97 = this->fields.serverData;
  if ( !v97
    || (v98 = (Il2CppObject *)JsonManager__toJson(&v97->fields.squareIndexInfo->obj, 0, 0, 0LL),
        v99 = RequestBase__PackToMessagePack(request, v98, 0LL),
        v100 = CatAndMouseGame__CatGame5Bytes(v99, 0LL),
        v101 = System_Convert__ToBase64String(v100, 0LL),
        RequestBase__addField_30435648(request, (System_String_o *)StringLiteral_22317/*"squareIndexInfo"*/, v101, 0LL),
        (v102 = this->fields.serverData) == 0LL) )
  {
LABEL_63:
    sub_B0D97C(v42);
  }
  v103 = (Il2CppObject *)JsonManager__toJson(&v102->fields.bossBattleInfo->obj, 0, 0, 0LL);
  v104 = RequestBase__PackToMessagePack(request, v103, 0LL);
  v105 = CatAndMouseGame__CatGame5Bytes(v104, 0LL);
  v106 = System_Convert__ToBase64String(v105, 0LL);
  RequestBase__addField_30435648(request, (System_String_o *)StringLiteral_16937/*"bossBattleInfo"*/, v106, 0LL);
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
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x5
  Il2CppObject *current; // x23
  int32_t klass; // w1
  WarBoardSquareData_o *Square; // x0
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v17; // w9
  WarBoardPieceData_o *Piece; // x0
  UnityEngine_Object_o *v19; // x20
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x2
  WarBoardControlUiDataComponent_c *v22; // x0
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4213457 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&WarBoardControlUiDataComponent_TypeInfo, v7);
    byte_4213457 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  listUiData = this->fields.listUiData;
  if ( !listUiData )
    sub_B0D97C(0LL);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v26,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiData,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v27,
           (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v9 )
      break;
    current = v27.fields.current;
    if ( !v27.fields.current )
      sub_B0D97C(v9);
    klass = (int32_t)v27.fields.current[1].klass;
    if ( (klass & 0x80000000) != 0 )
    {
      monitor = v27.fields.current[1].monitor;
      if ( !monitor )
        sub_B0D97C(v9);
      v17 = monitor[6];
      if ( !v17 )
      {
        v24 = sub_B0D9A8(v9);
        sub_B0D948(v24, 0LL);
      }
      if ( v17 == 1 )
      {
        v25 = sub_B0D9A8(v9);
        sub_B0D948(v25, 0LL);
      }
      if ( v17 <= 2 )
      {
        v23 = sub_B0D9A8(v9);
        sub_B0D948(v23, 0LL);
      }
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v11);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_B0D97C(Piece);
LABEL_17:
        v19 = (UnityEngine_Object_o *)*((_QWORD *)pieceComponent + 22);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v20 = UnityEngine_Object__op_Equality(v19, 0LL, 0LL);
        if ( !v20 )
        {
          if ( !v19 )
            sub_B0D97C(v20);
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(
            (WarBoardControlUiDataComponent_o *)v19,
            (System_String_array *)current[2].klass,
            v21);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass, v10);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_B0D97C(Square);
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v27,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  v22 = WarBoardControlUiDataComponent_TypeInfo;
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__ResumeUiDataAll((const MethodInfo *)v22);
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  System_Func_bool__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  UnityEngine_WaitUntil_o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  __int64 v44; // x1
  __int64 v45; // x2
  System_Delegate_o *v46; // x22
  WarBoardTaskBase_TaskCallback_o *v47; // x23
  System_Int32_array **v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  WebViewManager_o *Instance; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v56; // x21
  __int64 v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  __int64 v64; // x0
  __int64 v65; // x0
  WarBoardData_o *v66; // x0
  const MethodInfo *v67; // x1

  if ( (byte_4213437 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__,
      consumedPieceActionPointDict);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v5);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v8);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__, v9);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__, v10);
    sub_B0D8A4(&WarBoardData___c__DisplayClass154_0_TypeInfo, v11);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v12);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v13);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v14);
    byte_4213437 = 1;
  }
  v15 = sub_B0D974(WarBoardData___c__DisplayClass154_0_TypeInfo, consumedPieceActionPointDict, method);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_15;
  *(_QWORD *)(v15 + 24) = consumedPieceActionPointDict;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v15 + 24),
    (System_Int32_array **)consumedPieceActionPointDict,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  *(_QWORD *)(v15 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 32), (System_Int32_array **)this, v23, v24, v25, v26, v27, v28);
  v16 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)(v15 + 24);
  if ( !v16 )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         v16,
         (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) >= 1 )
  {
    *(_BYTE *)(v15 + 16) = 0;
    v31 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v29, v30);
    System_Func_bool____ctor(
      v31,
      (Il2CppObject *)v15,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
      (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
    v34 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v32, v33);
    UnityEngine_WaitUntil___ctor(v34, v31, 0LL);
    v37 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v35, v36);
    WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v37, 0LL);
    *(_QWORD *)(v37 + 56) = v34;
    sub_B0D840((BattleServantConfConponent_o *)(v37 + 56), (System_Int32_array **)v34, v38, v39, v40, v41, v42, v43);
    if ( !v37 )
      goto LABEL_15;
    v46 = *(System_Delegate_o **)(v37 + 32);
    v47 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v44, v45);
    WarBoardTaskBase_TaskCallback___ctor(
      v47,
      (Il2CppObject *)v15,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
      0LL);
    v48 = (System_Int32_array **)System_Delegate__Combine(v46, (System_Delegate_o *)v47, 0LL);
    if ( !v48 || *v48 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v37 + 32) = v48;
      sub_B0D840((BattleServantConfConponent_o *)(v37 + 32), v48, v49, v50, v51, v52, v53, v54);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      v16 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
      if ( v16 )
      {
        v56 = v16;
        v57 = sub_B0D964(v37, v16->klass->_1.element_class);
        if ( !v57 )
        {
          v64 = sub_B0D99C();
          sub_B0D948(v64, 0LL);
        }
        if ( !LODWORD(v56->fields.entries) )
        {
          v65 = sub_B0D9A8(v57);
          sub_B0D948(v65, 0LL);
        }
        *(_QWORD *)&v56->fields.count = v37;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v56->fields.count,
          (System_Int32_array **)v37,
          v58,
          v59,
          v60,
          v61,
          v62,
          v63);
        if ( Instance )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v56, 0LL);
          return;
        }
      }
LABEL_15:
      sub_B0D97C(v16);
    }
    v66 = (WarBoardData_o *)sub_B0DC70(v48);
    WarBoardData__CreateEventBossUIDataTask(v66, v67);
  }
}


System_String_o *__fastcall WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *serverData; // x19

  if ( (byte_4213438 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, method);
    sub_B0D8A4(&string_TypeInfo, v3);
    byte_4213438 = 1;
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
  __int64 v18; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v23; // x21
  int32_t v24; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4213440 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_B0D8A4(&Method_System_Func_WarBoardBossBattleData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v11);
    sub_B0D8A4(&int_TypeInfo, v12);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__, v13);
    sub_B0D8A4(&WarBoardData___c__DisplayClass171_0_TypeInfo, v14);
    byte_4213440 = 1;
  }
  v15 = (WarBoardData___c__DisplayClass171_0_o *)sub_B0D974(
                                                   WarBoardData___c__DisplayClass171_0_TypeInfo,
                                                   *(_QWORD *)&bossId,
                                                   key);
  WarBoardData___c__DisplayClass171_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_9;
  v15->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardBossBattleData__bool__TypeInfo,
                                                                             v17,
                                                                             v18);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v21,
                                                                     (const MethodInfo_170767C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  v23 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v24 = value;
  v16 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  if ( !v23 )
LABEL_9:
    sub_B0D97C(v16);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v23,
    (System_Xml_XmlQualifiedName_o *)key,
    v16,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v17; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__192_0; // x20
  Il2CppObject *v20; // x21
  struct WarBoardData___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  WarBoardData___c_c *v31; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  struct WarBoardData___c_StaticFields *v33; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__192_1; // x20
  Il2CppObject *v35; // x21
  struct WarBoardData___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v44; // x1
  __int64 v45; // x2
  WarBoardData___c_c *v46; // x8
  System_Collections_Generic_IEnumerable_T__o *v47; // x19
  struct WarBoardData___c_StaticFields *v48; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__192_2; // x20
  Il2CppObject *v50; // x21
  struct WarBoardData___c_StaticFields *v51; // x0
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7

  if ( (byte_4213452 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_WarBoardPieceBaseComponent___ctor__, method);
    sub_B0D8A4(&System_Action_WarBoardPieceBaseComponent__TypeInfo, v4);
    sub_B0D8A4(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___, v7);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__, v8);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__, v9);
    sub_B0D8A4(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo, v10);
    sub_B0D8A4(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo, v11);
    sub_B0D8A4(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, v12);
    sub_B0D8A4(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, v13);
    sub_B0D8A4(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, v14);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v15);
    byte_4213452 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v17 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v17 = WarBoardData___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                  System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__192_0,
      v20,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__,
      (const MethodInfo_261A104 *)Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__);
    v21 = WarBoardData___c_TypeInfo->static_fields;
    v21->__9__192_0 = (struct System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__o *)_9__192_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v21->__9__192_0,
      (System_Int32_array **)_9__192_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v31 = WarBoardData___c_TypeInfo;
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)v28;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v31 = WarBoardData___c_TypeInfo;
  }
  v33 = v31->static_fields;
  _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v33->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v33 = WarBoardData___c_TypeInfo->static_fields;
    }
    v35 = (Il2CppObject *)v33->__9;
    _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                     System_Func_WarBoardPieceBaseComponent__bool__TypeInfo,
                                                                                     v29,
                                                                                     v30);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__192_1,
      v35,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__);
    v36 = WarBoardData___c_TypeInfo->static_fields;
    v36->__9__192_1 = (struct System_Func_WarBoardPieceBaseComponent__bool__o *)_9__192_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v36->__9__192_1,
      (System_Int32_array **)_9__192_1,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
  }
  v43 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v32,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v46 = WarBoardData___c_TypeInfo;
  v47 = (System_Collections_Generic_IEnumerable_T__o *)v43;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v46 = WarBoardData___c_TypeInfo;
  }
  v48 = v46->static_fields;
  _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v48->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( (BYTE3(v46->vtable._0_Equals.methodPtr) & 4) != 0 && !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v48 = WarBoardData___c_TypeInfo->static_fields;
    }
    v50 = (Il2CppObject *)v48->__9;
    _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                       System_Action_WarBoardPieceBaseComponent__TypeInfo,
                                                                                       v44,
                                                                                       v45);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__192_2,
      v50,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__,
      (const MethodInfo_246EA3C *)Method_System_Action_WarBoardPieceBaseComponent___ctor__);
    v51 = WarBoardData___c_TypeInfo->static_fields;
    v51->__9__192_2 = (struct System_Action_WarBoardPieceBaseComponent__o *)_9__192_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v51->__9__192_2,
      (System_Int32_array **)_9__192_2,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v47,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void __fastcall WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_long__o *v23; // x21
  const MethodInfo *v24; // x1
  void *EditableServantPieces; // x0
  int v26; // w8
  void *v27; // x22
  unsigned int v28; // w23
  __int64 v29; // x25
  __int64 v30; // x22
  __int64 v31; // x22
  __int64 v32; // x1
  __int64 v33; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Entities_34310852; // x21
  WarBoardData___c_c *v35; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__143_0; // x22
  Il2CppObject *v38; // x23
  struct WarBoardData___c_StaticFields *v39; // x0
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
  __int64 v52; // x1
  __int64 v53; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v54; // x22
  __int64 v55; // x0

  if ( (byte_421342F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_UserServantEntity___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v6);
    sub_B0D8A4(&Method_System_Func_UserServantEntity__int___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_UserServantEntity__bool___ctor__, v8);
    sub_B0D8A4(&System_Func_UserServantEntity__bool__TypeInfo, v9);
    sub_B0D8A4(&System_Func_UserServantEntity__int__TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_long___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, v16);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__, v17);
    sub_B0D8A4(&WarBoardData___c__DisplayClass143_0_TypeInfo, v18);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v19);
    byte_421342F = 1;
  }
  v20 = sub_B0D974(WarBoardData___c__DisplayClass143_0_TypeInfo, method, v2);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v20, 0LL);
  v23 = (System_Collections_Generic_List_long__o *)sub_B0D974(System_Collections_Generic_List_long__TypeInfo, v21, v22);
  System_Collections_Generic_List_long____ctor(
    v23,
    (const MethodInfo_2FB5154 *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v24);
  if ( !EditableServantPieces )
    goto LABEL_28;
  v26 = *((_DWORD *)EditableServantPieces + 6);
  v27 = EditableServantPieces;
  if ( v26 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= v26 )
      {
        v55 = sub_B0D9A8(EditableServantPieces);
        sub_B0D948(v55, 0LL);
      }
      v29 = *((_QWORD *)v27 + (int)v28 + 4);
      if ( !v29 || !v23 )
        break;
      System_Collections_Generic_List_long___Add(
        v23,
        *(_QWORD *)(v29 + 224),
        (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      System_Collections_Generic_List_long___Add(
        v23,
        *(_QWORD *)(v29 + 232),
        (const MethodInfo_2FB5EB0 *)Method_System_Collections_Generic_List_long__Add__);
      v26 = *((_DWORD *)v27 + 6);
      if ( (int)++v28 >= v26 )
        goto LABEL_10;
    }
LABEL_28:
    sub_B0D97C(EditableServantPieces);
  }
LABEL_10:
  v30 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v31 = **(_QWORD **)(v30 + 192);
  if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
    sub_AA65A4(v31);
  EditableServantPieces = **(void ***)(v31 + 184);
  if ( !EditableServantPieces )
    goto LABEL_28;
  EditableServantPieces = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)EditableServantPieces,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !EditableServantPieces )
    goto LABEL_28;
  Entities_34310852 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__GetEntities_34310852(
                                                                             (UserServantMaster_o *)EditableServantPieces,
                                                                             v23,
                                                                             0LL);
  v35 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v35 = WarBoardData___c_TypeInfo;
  }
  static_fields = v35->static_fields;
  _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v38 = (Il2CppObject *)static_fields->__9;
    _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                  System_Func_UserServantEntity__int__TypeInfo,
                                                                                  v32,
                                                                                  v33);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__143_0,
      v38,
      Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__,
      (const MethodInfo_2619564 *)Method_System_Func_UserServantEntity__int___ctor__);
    v39 = WarBoardData___c_TypeInfo->static_fields;
    v39->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v39->__9__143_0,
      (System_Int32_array **)_9__143_0,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
  }
  EditableServantPieces = (void *)System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
                                    Entities_34310852,
                                    (System_Func_TSource__int__o *)_9__143_0,
                                    (const MethodInfo_1B55828 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_28;
  this->fields._CurrentPartyCost_k__BackingField = (int)EditableServantPieces;
  EditableServantPieces = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !EditableServantPieces )
    goto LABEL_28;
  EditableServantPieces = DataManager__GetMasterData_WarQuestSelectionMaster_(
                            (DataManager_o *)EditableServantPieces,
                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v20 )
    goto LABEL_28;
  *(_QWORD *)(v20 + 16) = EditableServantPieces;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v20 + 16),
    (System_Int32_array **)EditableServantPieces,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v54 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_UserServantEntity__bool__TypeInfo,
                                                                             v52,
                                                                             v53);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v54,
    (Il2CppObject *)v20,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_UserServantEntity__bool___ctor__);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                                       Entities_34310852,
                                                       (System_Func_TSource__bool__o *)v54,
                                                       (const MethodInfo_1B48614 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
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
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  WarBoardManager_TaskMultiList_o *v47; // x23
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v52; // x27
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *isPlayerGroup; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v58; // x22
  unsigned int v59; // w19
  bool v60; // w26
  WarBoardPieceData_o *v61; // x28
  WarBoardManager_TaskList_o *v62; // x20
  __int64 v63; // x1
  __int64 v64; // x2
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v66; // x22
  WarBoardEvalValueSquare_EvalValueSquare_o *v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  Il2CppObject *current; // x25
  WarBoardManager_TaskList_o *v71; // x26
  __int64 v72; // x0
  Il2CppClass *v73; // x0
  __int64 v74; // x0
  char v75; // w8
  int monitor_high; // w20
  Il2CppClass *klass; // x0
  Il2CppClass *v78; // x0
  const MethodInfo *v79; // x2
  System_Collections_Generic_IEnumerable_T__o *v80; // x0
  const MethodInfo *range; // x1
  __int64 v82; // x2
  WarBoardDataEntity_o *v83; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *EventBossUIDataTask; // x0
  __int64 v85; // x1
  __int64 v86; // x2
  WarBoardWaitNonBlockingTaskEnd_o *v87; // x20
  struct WarBoardItemData_array *items; // x19
  int v89; // w8
  unsigned int v90; // w20
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v92; // x24
  __int64 v93; // x20
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  System_Int32_array **v100; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **v101; // x21
  __int64 v102; // x1
  __int64 v103; // x2
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v105; // x23
  WarBoardData_SquareRangeSearch_o *v106; // x0
  WarBoardData_SquareRangeSearch_o *v107; // x8
  __int64 v108; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v109; // [xsp+0h] [xbp-B0h]
  WarBoardData_o *v110; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v111; // [xsp+10h] [xbp-A0h]
  WarBoardManager_TaskMultiList_o *v112; // [xsp+18h] [xbp-98h]
  WarBoardDataEntity_o *v113; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v114; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v115; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_4213434 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__, warBoardDataEntity);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__, v14);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo, v15);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__, v18);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__,
      v19);
    sub_B0D8A4(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v20);
    sub_B0D8A4(&System_Func_WarBoardUserWallData__bool__TypeInfo, v21);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v22);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v27);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v30);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v31);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v32);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo, v33);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v34);
    sub_B0D8A4(&WarBoardManager_TaskList_TypeInfo, v35);
    sub_B0D8A4(&WarBoardManager_TaskMultiList_TypeInfo, v36);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__, v37);
    sub_B0D8A4(&WarBoardData___c__DisplayClass151_0_TypeInfo, v38);
    sub_B0D8A4(&WarBoardWaitNonBlockingTaskEnd_TypeInfo, v39);
    byte_4213434 = 1;
  }
  memset(&v115, 0, sizeof(v115));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  v113 = warBoardDataEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.serverData,
    (System_Int32_array **)warBoardDataEntity,
    (System_String_array **)forceUpdate,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v109 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                   v41,
                                                                                                   v42);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v109,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v112 = (WarBoardManager_TaskMultiList_o *)sub_B0D974(WarBoardManager_TaskMultiList_TypeInfo, v43, v44);
  WarBoardManager_TaskMultiList___ctor(v112, 0LL);
  v47 = (WarBoardManager_TaskMultiList_o *)sub_B0D974(WarBoardManager_TaskMultiList_TypeInfo, v45, v46);
  WarBoardManager_TaskMultiList___ctor(v47, 0LL);
  v111 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                    System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo,
                                                                                                    v48,
                                                                                                    v49);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v111,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v52 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo,
                                                                                                  v50,
                                                                                                  v51);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v52,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v110 = this;
  if ( !pieces )
    goto LABEL_71;
  max_length = pieces->max_length;
  v58 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v111;
  if ( max_length >= 1 )
  {
    v59 = 0;
    v60 = forceUpdate;
    while ( v59 < max_length )
    {
      v61 = pieces->m_Items[v59];
      v62 = (WarBoardManager_TaskList_o *)sub_B0D974(WarBoardManager_TaskList_TypeInfo, v54, v55);
      WarBoardManager_TaskList___ctor(v62, 0LL);
      if ( !v61 )
        goto LABEL_71;
      WarBoardPieceData__UpdateFromServerData(
        v61,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v52,
        v62,
        v60,
        0LL);
      if ( !v62 )
        goto LABEL_71;
      if ( v62->fields._size >= 1 )
      {
        if ( v61->fields._isDead_k__BackingField )
        {
          if ( !v47 )
            goto LABEL_71;
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v47;
        }
        else
        {
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v112;
          if ( !v112 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          isPlayerGroup,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v62,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardPieceData__get_isPlayerGroup(v61, 0LL);
      if ( ((unsigned __int8)isPlayerGroup & 1) != 0 )
      {
        isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardPieceData__get_isMaster(v61, 0LL);
        if ( ((unsigned __int8)isPlayerGroup & 1) == 0 && v61->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v58 )
            goto LABEL_71;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  v58,
                  v61->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_2E9069C *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v61->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v66 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v63, v64);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v66,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v67 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v66;
            v58 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v111;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v111,
              ConsumedRecoverDonotActCost_k__BackingField,
              v67,
              (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item((System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v58, v61->fields._ConsumedRecoverDonotActCost_k__BackingField, (const MethodInfo_2E90364 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !isPlayerGroup )
            goto LABEL_71;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            isPlayerGroup,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
            (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      max_length = pieces->max_length;
      if ( (int)++v59 >= max_length )
        goto LABEL_25;
    }
LABEL_72:
    v108 = sub_B0D9A8(isPlayerGroup);
    sub_B0D948(v108, 0LL);
  }
LABEL_25:
  if ( !v52 )
    goto LABEL_71;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v114,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v52,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v115 = v114;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v115,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v115.fields.current;
    v71 = (WarBoardManager_TaskList_o *)sub_B0D974(WarBoardManager_TaskList_TypeInfo, v68, v69);
    WarBoardManager_TaskList___ctor(v71, 0LL);
    if ( !current )
      sub_B0D97C(v72);
    if ( ((__int64)current[1].monitor & 0x80000000) != 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B0D97C(0LL);
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0LL,
          v71,
          0xFFFFFFFFLL,
          0LL,
          1LL,
          *((_QWORD *)klass->_1.image + 102));
      }
      v78 = current[1].klass;
      if ( !v78 )
        sub_B0D97C(0LL);
      v74 = (*((__int64 (**)(void))v78->_1.image + 103))();
      v75 = 1;
      if ( !v71 )
LABEL_74:
        sub_B0D97C(v74);
    }
    else
    {
      v73 = current[1].klass;
      if ( !v73 )
        sub_B0D97C(0LL);
      v74 = (*((__int64 (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v73->_1.image
             + 101))(
              v73,
              HIDWORD(current[1].monitor),
              0LL,
              v71,
              0xFFFFFFFFLL,
              0LL,
              1LL,
              *((_QWORD *)v73->_1.image + 102));
      v75 = 0;
      if ( !v71 )
        goto LABEL_74;
    }
    if ( v71->fields._size >= 1 )
    {
      if ( (v75 & 1) != 0 )
      {
        if ( !v47 )
          sub_B0D97C(v74);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v47,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      else
      {
        if ( !v112 )
          sub_B0D97C(v74);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v112,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v71,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v115,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v111 )
    goto LABEL_71;
  isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(v111, (const MethodInfo_2E90024 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__);
  if ( (int)isPlayerGroup >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v110,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v111,
      v79);
  if ( !v112 )
    goto LABEL_71;
  isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)WarBoardManager_TaskMultiList__SortedFlatted(v112, 0LL);
  if ( !v109 )
    goto LABEL_71;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v109,
    (System_Collections_Generic_IEnumerable_T__o *)isPlayerGroup,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v47 )
    goto LABEL_71;
  v80 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v47, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v109,
    v80,
    (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v83 = v113;
  if ( v109->fields._size >= 1 )
  {
    EventBossUIDataTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardData__CreateEventBossUIDataTask(
                                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                                   range);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v109,
      EventBossUIDataTask,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v87 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_B0D974(WarBoardWaitNonBlockingTaskEnd_TypeInfo, v85, v86);
    WarBoardWaitNonBlockingTaskEnd___ctor(v87, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v109,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v87,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !isPlayerGroup )
      goto LABEL_71;
    WarBoardManager__InsertTask_17743264(
      (WarBoardManager_o *)isPlayerGroup,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v109,
      0LL);
  }
  items = v110->fields.items;
  if ( !items )
    goto LABEL_71;
  v89 = items->max_length;
  if ( v89 >= 1 )
  {
    v90 = 0;
    while ( v90 < v89 )
    {
      isPlayerGroup = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)items->m_Items[v90];
      if ( !isPlayerGroup )
        goto LABEL_71;
      WarBoardItemData__UpdateFromServerData((WarBoardItemData_o *)isPlayerGroup, *p_serverData, 0LL);
      v89 = items->max_length;
      if ( (int)++v90 >= v89 )
        goto LABEL_59;
    }
    goto LABEL_72;
  }
LABEL_59:
  walls = v110->fields.walls;
  if ( !walls )
LABEL_71:
    sub_B0D97C(isPlayerGroup);
  if ( (int)walls->max_length >= 1 )
  {
    v92 = 0LL;
    while ( 1 )
    {
      v93 = sub_B0D974(WarBoardData___c__DisplayClass151_0_TypeInfo, range, v82);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v93, 0LL);
      if ( v92 >= walls->max_length )
        goto LABEL_72;
      if ( !v93 )
        goto LABEL_71;
      v100 = (System_Int32_array **)walls->m_Items[v92];
      *(_QWORD *)(v93 + 16) = v100;
      v101 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)(v93 + 16);
      sub_B0D840((BattleServantConfConponent_o *)(v93 + 16), v100, v94, v95, v96, v97, v98, v99);
      if ( !v83 )
        goto LABEL_71;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v83->fields.wallInfo;
      v105 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                  System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                                                  v102,
                                                                                  v103);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v105,
        (Il2CppObject *)v93,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
      v106 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
               wallInfo,
               (System_Func_TSource__bool__o *)v105,
               (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v106 )
      {
        v107 = v106;
        isPlayerGroup = *v101;
        if ( !*v101 )
          goto LABEL_71;
        range = (const MethodInfo *)(unsigned int)v107->fields.range;
        if ( isPlayerGroup->fields._size > (int)range )
          WarBoardWallData__SetBreakPoint((WarBoardWallData_o *)isPlayerGroup, (int32_t)range, 0LL);
      }
      v83 = v113;
      if ( (__int64)++v92 >= (int)walls->max_length )
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
    sub_B0D97C(this);
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_B0D840(
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
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  il2cpp_array_size_t max_length; // w8
  __int64 v15; // x0

  if ( (byte_4213444 & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, *(_QWORD *)&fromSquareIndex);
    byte_4213444 = 1;
  }
  v7 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 2LL);
  if ( !v7 )
    sub_B0D97C(0LL);
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = fromSquareIndex, max_length == 1) )
  {
    v15 = sub_B0D9A8(v7);
    sub_B0D948(v15, 0LL);
  }
  v7->m_Items[2] = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = v7;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.latestPieceActionSquareIndexes,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  struct WarBoardSquareData_array *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  BattleServantConfConponent_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  __int64 v21; // x1
  __int64 v22; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v23; // x21
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4213428 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, square);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___67899856, v7);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v8);
    byte_4213428 = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v10 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                                          square,
                                                                          method);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v10,
    squares,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___67899856);
  if ( !v10 )
    goto LABEL_6;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v10,
    (EventMissionProgressRequest_Argument_ProgressData_o *)square,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
  v12 = (struct WarBoardSquareData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                             (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = v12;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.squares,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  condSquares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.condSquares;
  p_condSquares = (BattleServantConfConponent_o *)&this->fields.condSquares;
  v23 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                                          v21,
                                                                          v22);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v23,
    condSquares,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___67899856);
  if ( !v23 )
LABEL_6:
    sub_B0D97C(v11);
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v23,
    (WarBoardManager_TaskList_o *)square,
    (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v24 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v23,
                                 (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (BattleServantConfConponent_c *)v24;
  sub_B0D840(p_condSquares, v24, v25, v26, v27, v28, v29, v30);
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
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // w8
  WarBoardManager_TaskList_o *v12; // x1
  WarBoardUiData_o *v13; // x22

  if ( (byte_4213455 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, *(_QWORD *)&squareIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_B0D8A4(&WarBoardUiData_TypeInfo, v8);
    byte_4213455 = 1;
  }
  UiData = WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v12 = (WarBoardManager_TaskList_o *)UiData;
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
        v12,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B0D97C(UiData);
  }
  if ( max_length )
  {
    v13 = (WarBoardUiData_o *)sub_B0D974(WarBoardUiData_TypeInfo, 0LL, v10);
    WarBoardUiData___ctor_26260896(v13, squareIndex, setKeys, 0LL);
    UiData = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UiData,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall WarBoardData__UpdateUiData_22095064(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardUiData_o *UiData_22140884; // x0
  __int64 v10; // x2
  il2cpp_array_size_t max_length; // w8
  WarBoardManager_TaskList_o *v12; // x1
  WarBoardUiData_o *v13; // x22

  if ( (byte_4213456 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, pieceIndex);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_B0D8A4(&WarBoardUiData_TypeInfo, v8);
    byte_4213456 = 1;
  }
  UiData_22140884 = WarBoardData__GetUiData_22140884(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v12 = (WarBoardManager_TaskList_o *)UiData_22140884;
  if ( UiData_22140884 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys(UiData_22140884, setKeys, 0LL);
      return;
    }
    UiData_22140884 = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData_22140884 )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)UiData_22140884,
        v12,
        (const MethodInfo_2FC7094 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B0D97C(UiData_22140884);
  }
  if ( max_length )
  {
    v13 = (WarBoardUiData_o *)sub_B0D974(WarBoardUiData_TypeInfo, 0LL, v10);
    WarBoardUiData___ctor_26260980(v13, pieceIndex, setKeys, 0LL);
    UiData_22140884 = (WarBoardUiData_o *)this->fields.listUiData;
    if ( UiData_22140884 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)UiData_22140884,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct WarBoardPieceData_array *pieces; // x19
  WarBoardData___c_c *v9; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__62_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardData___c_StaticFields *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int64_t result; // x0

  if ( (byte_4213401 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Find_WarBoardPieceData___, method);
    sub_B0D8A4(&Method_System_Predicate_WarBoardPieceData___ctor__, v4);
    sub_B0D8A4(&System_Predicate_WarBoardPieceData__TypeInfo, v5);
    sub_B0D8A4(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, v6);
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v7);
    byte_4213401 = 1;
  }
  pieces = this->fields.pieces;
  v9 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v9 = WarBoardData___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_WarBoardPieceData__TypeInfo,
                                                                          method,
                                                                          v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__62_0,
      v12,
      Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v13 = WarBoardData___c_TypeInfo->static_fields;
    v13->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v13->__9__62_0,
      (System_Int32_array **)_9__62_0,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  result = (int64_t)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_1F687A8 *)Method_System_Array_Find_WarBoardPieceData___);
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
    sub_B0D97C(this);
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
  sub_B0D840(
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
  sub_B0D840(&this->fields, v9);
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor_20598072(
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
  __int64 v11; // x1
  __int64 v12; // x2
  WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *v13; // x21
  WebViewManager_o *Instance; // x0
  struct WarBoardData_o *v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_uint__WarBoardPieceData__o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  struct WarBoardPieceData_array *v20; // x0

  if ( (byte_42126B2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___, uniqueIndexArray);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v5);
    sub_B0D8A4(&Method_System_Func_uint__WarBoardPieceData___ctor__, v6);
    sub_B0D8A4(&System_Func_uint__WarBoardPieceData__TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B0D8A4(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__, v9);
    sub_B0D8A4(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v10);
    byte_42126B2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v13 = (WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *)sub_B0D974(
                                                                        WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo,
                                                                        v11,
                                                                        v12);
  WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(v13, 0LL);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( (int)uniqueIndexArray->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v13 )
    {
      v15 = *(struct WarBoardData_o **)&Instance[4].fields.m_CachedPtr;
      v13->fields.warBoardData = v15;
      sub_B0D840(&v13->fields, v15);
      v18 = (System_Func_uint__WarBoardPieceData__o *)sub_B0D974(
                                                        System_Func_uint__WarBoardPieceData__TypeInfo,
                                                        v16,
                                                        v17);
      System_Func_uint__WarBoardPieceData____ctor(
        v18,
        (Il2CppObject *)v13,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        (const MethodInfo_2620140 *)Method_System_Func_uint__WarBoardPieceData___ctor__);
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v18,
                                                                   (const MethodInfo_1B52D68 *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v20 = (struct WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                v19,
                                                (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = v20;
      sub_B0D840(&this->fields, v20);
      return;
    }
LABEL_9:
    sub_B0D97C(Instance);
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
  struct WarBoardStageNpcMaster_o *stageNpcMaster; // x8
  WarBoardData_o *v14; // x20
  unsigned __int64 v15; // x23
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // x24
  WarBoardManager_TaskList_o *v17; // x21
  __int64 v19; // x0

  if ( (byte_42126B4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, attackPieceData);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v10);
    byte_42126B4 = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  attackPieceData,
                                                                                                  targetPieceData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v11
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)attackPieceData,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)targetPieceData,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        (Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
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
    sub_B0D97C(Instance);
  }
  stageNpcMaster = Instance->fields.stageNpcMaster;
  v14 = Instance;
  if ( (int)stageNpcMaster >= 1 )
  {
    v15 = 0LL;
    p_npcEntityDict = &Instance->fields.npcEntityDict;
    do
    {
      if ( v15 >= (unsigned int)stageNpcMaster )
      {
        v19 = sub_B0D9A8(Instance);
        sub_B0D948(v19, 0LL);
      }
      v17 = (WarBoardManager_TaskList_o *)p_npcEntityDict[v15];
      Instance = (WarBoardData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                     (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v11,
                                     v17,
                                     (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
        if ( !v17 )
          goto LABEL_19;
        Instance = (WarBoardData_o *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)v17, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (WarBoardData_o *)WarBoardPieceData__HasAvailableWarBoardNotAttackedBuff(
                                         (WarBoardPieceData_o *)v17,
                                         0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v11,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v17,
              (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      LODWORD(stageNpcMaster) = v14->fields.stageNpcMaster;
      ++v15;
    }
    while ( (__int64)v15 < (int)stageNpcMaster );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                      (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_BattleParticipantInfo_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_42126B5 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardData_BattleParticipantInfo_TypeInfo, method);
    byte_42126B5 = 1;
  }
  v4 = (WarBoardData_BattleParticipantInfo_o *)sub_B0D974(WarBoardData_BattleParticipantInfo_TypeInfo, method, v2);
  WarBoardData_BattleParticipantInfo___ctor_20598072(v4, uniqueIndexArray, v5);
  return v4;
}


System_UInt32_array *__fastcall WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  WarBoardData_BattleParticipantInfo___c_c *v10; // x0
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardStageNpcEntity__uint__o *_9__14_0; // x20
  Il2CppObject *v13; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *v14; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_42126B3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_uint___, v4);
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__uint___ctor__, v5);
    sub_B0D8A4(&System_Func_WarBoardPieceData__uint__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__, v7);
    sub_B0D8A4(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v8);
    byte_42126B3 = 1;
  }
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  v10 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  if ( (BYTE3(WarBoardData_BattleParticipantInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
    v10 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B0D974(
                                                                System_Func_WarBoardPieceData__uint__TypeInfo,
                                                                method,
                                                                v2);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__14_0,
      v13,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      (const MethodInfo_261B478 *)Method_System_Func_WarBoardPieceData__uint___ctor__);
    v14 = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    v14->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_B0D840(&v14->__9__14_0, _9__14_0);
  }
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardPieceData__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_1B52564 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v15,
           (const MethodInfo_1B563AC *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8
  __int64 v4; // x0

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_B0D97C(this);
  if ( !Participants_k__BackingField->max_length )
  {
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
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
    sub_B0D97C(this);
  if ( Participants_k__BackingField->max_length <= 1 )
  {
    v4 = sub_B0D9A8(this);
    sub_B0D948(v4, 0LL);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x0

  if ( (byte_4211FD6 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v1);
    byte_4211FD6 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardData_BattleParticipantInfo___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardData_BattleParticipantInfo___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  return WarBoardData__GetPiece_22114396(warBoardData, x, 0, 0LL);
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
  sub_B0D840(&this->fields.pieceSaves, 0LL);
  this->fields.itemSaves = 0LL;
  sub_B0D840(&this->fields.itemSaves, 0LL);
  this->fields.treasureSaves = 0LL;
  sub_B0D840(&this->fields.treasureSaves, 0LL);
  this->fields.wallSaves = 0LL;
  sub_B0D840(&this->fields.wallSaves, 0LL);
  this->fields.squareSaves = 0LL;
  sub_B0D840(&this->fields.squareSaves, 0LL);
  this->fields.cameraPos = UnityEngine_Vector2__get_zero(0LL);
  this->fields.cameraSize = 0.0;
  this->fields.onBoardSkillUpdate = 0;
  *(_QWORD *)&this->fields.turn = 0xFFFFFFFF00000000LL;
  this->fields.turnGroupId = -1;
  this->fields.eventSaves = 0LL;
  this->fields.isPlayedHalfDeadMessage = 0;
  *(_QWORD *)&this->fields.randLogicCount = 0LL;
  sub_B0D840(&this->fields.eventSaves, 0LL);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0LL;
  sub_B0D840(&this->fields.latestBattlePieceUniqueIndexes, 0LL);
  this->fields.prevCondSaves = 0LL;
  sub_B0D840(&this->fields.prevCondSaves, 0LL);
  this->fields.reinforcementsSaves = 0LL;
  sub_B0D840(&this->fields.reinforcementsSaves, 0LL);
  this->fields.playedReinforcements = 0LL;
  sub_B0D840(&this->fields.playedReinforcements, 0LL);
  this->fields.uiDataSaves = 0LL;
  sub_B0D840(&this->fields.uiDataSaves, 0LL);
  this->fields.bgAnimationInfo = 0LL;
  sub_B0D840(&this->fields.bgAnimationInfo, 0LL);
  this->fields.squareIndexInfo = 0LL;
  sub_B0D840(&this->fields.squareIndexInfo, 0LL);
  this->fields.bossBattleInfo = 0LL;
  sub_B0D840(&this->fields.bossBattleInfo, 0LL);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor_20599232(
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
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardDataEntity_o *v39; // x8
  struct WarBoardDataEntity_o *v40; // x8
  struct WarBoardDataEntity_o *v41; // x8
  struct WarBoardDataEntity_o *v42; // x8
  struct WarBoardDataEntity_o *v43; // x8
  struct WarBoardPieceData_array *pieces; // x8
  __int64 v45; // x22
  struct WarBoardPieceData_SaveData_array *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  unsigned __int64 v49; // x24
  signed __int64 v50; // x25
  __int64 v51; // x26
  struct WarBoardPieceData_array *v52; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x20
  WarBoardPieceData_o *v54; // x23
  WarBoardPieceData_SaveData_o *v55; // x22
  struct WarBoardItemData_array *items; // x8
  __int64 v57; // x22
  struct WarBoardItemData_SaveData_array *v58; // x0
  __int64 v59; // x1
  __int64 v60; // x2
  unsigned __int64 v61; // x24
  signed __int64 v62; // x25
  __int64 v63; // x26
  struct WarBoardItemData_array *v64; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x20
  WarBoardItemData_o *v66; // x23
  WarBoardItemData_SaveData_o *v67; // x22
  const MethodInfo *v68; // x2
  struct WarBoardTreasureData_array *treasures; // x8
  __int64 v70; // x22
  struct WarBoardTreasureData_SaveData_array *v71; // x0
  __int64 v72; // x1
  __int64 v73; // x2
  unsigned __int64 v74; // x24
  signed __int64 v75; // x25
  __int64 v76; // x26
  struct WarBoardTreasureData_array *v77; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  WarBoardTreasureData_o *v79; // x23
  WarBoardTreasureData_SaveData_o *v80; // x22
  struct WarBoardWallData_array *walls; // x8
  __int64 v82; // x22
  struct WarBoardWallData_SaveData_array *v83; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  unsigned __int64 v86; // x24
  signed __int64 v87; // x25
  __int64 v88; // x26
  struct WarBoardWallData_array *v89; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x20
  WarBoardWallData_o *v91; // x23
  WarBoardWallData_SaveData_o *v92; // x22
  struct WarBoardSquareData_array *squares; // x8
  __int64 v94; // x22
  struct WarBoardSquareData_SaveData_array *v95; // x0
  __int64 v96; // x1
  __int64 v97; // x2
  unsigned __int64 v98; // x24
  signed __int64 v99; // x25
  __int64 v100; // x26
  struct WarBoardSquareData_array *v101; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  WarBoardSquareData_o *v103; // x23
  WarBoardSquareData_SaveData_o *v104; // x22
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  int size; // w22
  struct WarBoardEventData_SaveData_array *v107; // x0
  struct WarBoardEventData_SaveData_array **p_eventSaves; // x21
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x24
  __int64 v112; // x27
  __int64 v113; // x25
  struct System_Collections_Generic_List_WarBoardEventData__o *v114; // x22
  unsigned int *v115; // x28
  WarBoardEventData_o *v116; // x23
  WarBoardEventData_SaveData_o *v117; // x22
  const MethodInfo *v118; // x2
  __int64 v119; // x8
  struct System_Int32_array *latestPieceActionSquareIndexes; // x1
  struct System_UInt32_array *latestBattlePieceUniqueIndexes; // x1
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  int v123; // w22
  __int64 v124; // x0
  __int64 v125; // x1
  __int64 v126; // x2
  __int64 v127; // x24
  __int64 v128; // x27
  __int64 v129; // x25
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *v130; // x22
  unsigned int *prevCondSaves; // x28
  WarBoardPrevCondData_o *v132; // x23
  WarBoardPrevCondData_SaveData_o *v133; // x22
  __int64 v134; // x8
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  int v136; // w22
  __int64 v137; // x0
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x24
  __int64 v141; // x27
  __int64 v142; // x25
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v143; // x22
  unsigned int *reinforcementsSaves; // x28
  HoldReinforcementsData_o *v145; // x23
  HoldReinforcementsData_SaveData_o *v146; // x22
  __int64 v147; // x8
  System_Int32_array *v148; // x0
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  int v150; // w22
  __int64 v151; // x0
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x24
  __int64 v155; // x27
  __int64 v156; // x25
  struct System_Collections_Generic_List_WarBoardUiData__o *v157; // x22
  unsigned int *uiDataSaves; // x28
  WarBoardUiData_o *v159; // x23
  WarBoardUiData_SaveData_o *v160; // x22
  __int64 v161; // x8
  struct WarBoardDataEntity_o *v162; // x8
  int32_t v163; // w22
  __int64 v164; // x0
  __int64 v165; // x1
  __int64 v166; // x2
  unsigned __int64 v167; // x24
  signed __int64 v168; // x25
  __int64 v169; // x26
  struct WarBoardDataEntity_o *v170; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  unsigned int *v172; // x20
  WarBoardSquareIndexData_o *v173; // x23
  WarBoardSquareIndexData_SaveData_o *v174; // x22
  struct WarBoardDataEntity_o *v175; // x8
  int32_t v176; // w22
  __int64 v177; // x0
  __int64 v178; // x1
  __int64 v179; // x2
  unsigned __int64 v180; // x24
  signed __int64 v181; // x25
  __int64 v182; // x26
  struct WarBoardDataEntity_o *v183; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  unsigned int *v185; // x20
  WarBoardBossBattleData_o *v186; // x23
  WarBoardBossBattleData_SaveData_o *v187; // x22
  const MethodInfo *v188; // x2
  int32_t ContinueConsumeType_k__BackingField; // w8
  __int64 v190; // x0
  __int64 v191; // x0
  WarBoardData_WarBoardLocalSaveData_o *v192; // [xsp+8h] [xbp-58h]

  if ( (byte_42126B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, warBoardData);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__, v14);
    sub_B0D8A4(&WarBoardUiData_SaveData___TypeInfo, v15);
    sub_B0D8A4(&WarBoardSquareData_SaveData___TypeInfo, v16);
    sub_B0D8A4(&WarBoardTreasureData_SaveData___TypeInfo, v17);
    sub_B0D8A4(&WarBoardSquareIndexData_SaveData___TypeInfo, v18);
    sub_B0D8A4(&HoldReinforcementsData_SaveData___TypeInfo, v19);
    sub_B0D8A4(&WarBoardItemData_SaveData___TypeInfo, v20);
    sub_B0D8A4(&WarBoardBossBattleData_SaveData___TypeInfo, v21);
    sub_B0D8A4(&WarBoardEventData_SaveData___TypeInfo, v22);
    sub_B0D8A4(&WarBoardPrevCondData_SaveData___TypeInfo, v23);
    sub_B0D8A4(&WarBoardPieceData_SaveData___TypeInfo, v24);
    sub_B0D8A4(&WarBoardWallData_SaveData___TypeInfo, v25);
    sub_B0D8A4(&WarBoardItemData_SaveData_TypeInfo, v26);
    sub_B0D8A4(&WarBoardPieceData_SaveData_TypeInfo, v27);
    sub_B0D8A4(&WarBoardWallData_SaveData_TypeInfo, v28);
    sub_B0D8A4(&WarBoardUiData_SaveData_TypeInfo, v29);
    sub_B0D8A4(&WarBoardTreasureData_SaveData_TypeInfo, v30);
    sub_B0D8A4(&WarBoardEventData_SaveData_TypeInfo, v31);
    sub_B0D8A4(&WarBoardSquareData_SaveData_TypeInfo, v32);
    sub_B0D8A4(&WarBoardSquareIndexData_SaveData_TypeInfo, v33);
    sub_B0D8A4(&WarBoardPrevCondData_SaveData_TypeInfo, v34);
    sub_B0D8A4(&HoldReinforcementsData_SaveData_TypeInfo, v35);
    sub_B0D8A4(&WarBoardBossBattleData_SaveData_TypeInfo, v36);
    byte_42126B6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !warBoardData )
    goto LABEL_128;
  serverData = warBoardData->fields.serverData;
  if ( !serverData )
    goto LABEL_128;
  this->fields.questId = serverData->fields.questId;
  v39 = warBoardData->fields.serverData;
  if ( !v39 )
    goto LABEL_128;
  this->fields.questPhase = v39->fields.questPhase;
  v40 = warBoardData->fields.serverData;
  if ( !v40 )
    goto LABEL_128;
  this->fields.stageId = v40->fields.stageId;
  v41 = warBoardData->fields.serverData;
  if ( !v41 )
    goto LABEL_128;
  this->fields.turn = v41->fields.turn;
  v42 = warBoardData->fields.serverData;
  if ( !v42 )
    goto LABEL_128;
  this->fields.turnForceId = v42->fields.turnForceId;
  v43 = warBoardData->fields.serverData;
  if ( !v43 )
    goto LABEL_128;
  this->fields.turnGroupId = v43->fields.turnGroupId;
  pieces = warBoardData->fields.pieces;
  if ( !pieces )
    goto LABEL_128;
  v45 = *(_QWORD *)&pieces->max_length;
  v46 = (struct WarBoardPieceData_SaveData_array *)sub_B0D8BC(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v45);
  this->fields.pieceSaves = v46;
  sub_B0D840(&this->fields.pieceSaves, v46);
  if ( (int)v45 >= 1 )
  {
    v49 = 0LL;
    v50 = (int)v45;
    v51 = 32LL;
    while ( 1 )
    {
      v52 = warBoardData->fields.pieces;
      if ( !v52 )
        break;
      if ( v49 >= v52->max_length )
        goto LABEL_129;
      pieceSaves = this->fields.pieceSaves;
      v54 = *(WarBoardPieceData_o **)((char *)&v52->obj.klass + v51);
      v55 = (WarBoardPieceData_SaveData_o *)sub_B0D974(WarBoardPieceData_SaveData_TypeInfo, v47, v48);
      WarBoardPieceData_SaveData___ctor_22736960(v55, v54, 0LL);
      if ( !pieceSaves )
        break;
      if ( v55 )
      {
        GutsCount = sub_B0D964(v55, pieceSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
        {
LABEL_130:
          v191 = sub_B0D99C();
          sub_B0D948(v191, 0LL);
        }
      }
      if ( v49 >= pieceSaves->max_length )
      {
LABEL_129:
        v190 = sub_B0D9A8(GutsCount);
        sub_B0D948(v190, 0LL);
      }
      *(Il2CppClass **)((char *)&pieceSaves->obj.klass + v51) = (Il2CppClass *)v55;
      sub_B0D840((char *)pieceSaves + v51, v55);
      ++v49;
      v51 += 8LL;
      if ( (__int64)v49 >= v50 )
        goto LABEL_20;
    }
LABEL_128:
    sub_B0D97C(GutsCount);
  }
LABEL_20:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_128;
  v57 = *(_QWORD *)&items->max_length;
  v58 = (struct WarBoardItemData_SaveData_array *)sub_B0D8BC(WarBoardItemData_SaveData___TypeInfo, (unsigned int)v57);
  this->fields.itemSaves = v58;
  sub_B0D840(&this->fields.itemSaves, v58);
  if ( (int)v57 >= 1 )
  {
    v61 = 0LL;
    v62 = (int)v57;
    v63 = 32LL;
    do
    {
      v64 = warBoardData->fields.items;
      if ( !v64 )
        goto LABEL_128;
      if ( v61 >= v64->max_length )
        goto LABEL_129;
      itemSaves = this->fields.itemSaves;
      v66 = *(WarBoardItemData_o **)((char *)&v64->obj.klass + v63);
      v67 = (WarBoardItemData_SaveData_o *)sub_B0D974(WarBoardItemData_SaveData_TypeInfo, v59, v60);
      WarBoardItemData_SaveData___ctor_20602400(v67, v66, v68);
      if ( !itemSaves )
        goto LABEL_128;
      if ( v67 )
      {
        GutsCount = sub_B0D964(v67, itemSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v61 >= itemSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&itemSaves->obj.klass + v63) = (Il2CppClass *)v67;
      sub_B0D840((char *)itemSaves + v63, v67);
      ++v61;
      v63 += 8LL;
    }
    while ( (__int64)v61 < v62 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_128;
  v70 = *(_QWORD *)&treasures->max_length;
  v71 = (struct WarBoardTreasureData_SaveData_array *)sub_B0D8BC(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v70);
  this->fields.treasureSaves = v71;
  sub_B0D840(&this->fields.treasureSaves, v71);
  if ( (int)v70 >= 1 )
  {
    v74 = 0LL;
    v75 = (int)v70;
    v76 = 32LL;
    do
    {
      v77 = warBoardData->fields.treasures;
      if ( !v77 )
        goto LABEL_128;
      if ( v74 >= v77->max_length )
        goto LABEL_129;
      treasureSaves = this->fields.treasureSaves;
      v79 = *(WarBoardTreasureData_o **)((char *)&v77->obj.klass + v76);
      v80 = (WarBoardTreasureData_SaveData_o *)sub_B0D974(WarBoardTreasureData_SaveData_TypeInfo, v72, v73);
      WarBoardTreasureData_SaveData___ctor_19713628(v80, v79, 0LL);
      if ( !treasureSaves )
        goto LABEL_128;
      if ( v80 )
      {
        GutsCount = sub_B0D964(v80, treasureSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v74 >= treasureSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&treasureSaves->obj.klass + v76) = (Il2CppClass *)v80;
      sub_B0D840((char *)treasureSaves + v76, v80);
      ++v74;
      v76 += 8LL;
    }
    while ( (__int64)v74 < v75 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_128;
  v82 = *(_QWORD *)&walls->max_length;
  v83 = (struct WarBoardWallData_SaveData_array *)sub_B0D8BC(WarBoardWallData_SaveData___TypeInfo, (unsigned int)v82);
  this->fields.wallSaves = v83;
  sub_B0D840(&this->fields.wallSaves, v83);
  if ( (int)v82 >= 1 )
  {
    v86 = 0LL;
    v87 = (int)v82;
    v88 = 32LL;
    do
    {
      v89 = warBoardData->fields.walls;
      if ( !v89 )
        goto LABEL_128;
      if ( v86 >= v89->max_length )
        goto LABEL_129;
      wallSaves = this->fields.wallSaves;
      v91 = *(WarBoardWallData_o **)((char *)&v89->obj.klass + v88);
      v92 = (WarBoardWallData_SaveData_o *)sub_B0D974(WarBoardWallData_SaveData_TypeInfo, v84, v85);
      WarBoardWallData_SaveData___ctor_19716856(v92, v91, 0LL);
      if ( !wallSaves )
        goto LABEL_128;
      if ( v92 )
      {
        GutsCount = sub_B0D964(v92, wallSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v86 >= wallSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&wallSaves->obj.klass + v88) = (Il2CppClass *)v92;
      sub_B0D840((char *)wallSaves + v88, v92);
      ++v86;
      v88 += 8LL;
    }
    while ( (__int64)v86 < v87 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_128;
  v94 = *(_QWORD *)&squares->max_length;
  v95 = (struct WarBoardSquareData_SaveData_array *)sub_B0D8BC(
                                                      WarBoardSquareData_SaveData___TypeInfo,
                                                      (unsigned int)v94);
  this->fields.squareSaves = v95;
  sub_B0D840(&this->fields.squareSaves, v95);
  if ( (int)v94 >= 1 )
  {
    v98 = 0LL;
    v99 = (int)v94;
    v100 = 32LL;
    do
    {
      v101 = warBoardData->fields.squares;
      if ( !v101 )
        goto LABEL_128;
      if ( v98 >= v101->max_length )
        goto LABEL_129;
      squareSaves = this->fields.squareSaves;
      v103 = *(WarBoardSquareData_o **)((char *)&v101->obj.klass + v100);
      v104 = (WarBoardSquareData_SaveData_o *)sub_B0D974(WarBoardSquareData_SaveData_TypeInfo, v96, v97);
      WarBoardSquareData_SaveData___ctor_22744980(v104, v103, 0LL);
      if ( !squareSaves )
        goto LABEL_128;
      if ( v104 )
      {
        GutsCount = sub_B0D964(v104, squareSaves->obj.klass->_1.element_class);
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v98 >= squareSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&squareSaves->obj.klass + v100) = (Il2CppClass *)v104;
      sub_B0D840((char *)squareSaves + v100, v104);
      ++v98;
      v100 += 8LL;
    }
    while ( (__int64)v98 < v99 );
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
  v107 = (struct WarBoardEventData_SaveData_array *)sub_B0D8BC(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size);
  this->fields.eventSaves = v107;
  p_eventSaves = &this->fields.eventSaves;
  v192 = this;
  sub_B0D840(&this->fields.eventSaves, v107);
  if ( size >= 1 )
  {
    v111 = size;
    v112 = 4LL;
    v113 = 8LL;
    do
    {
      v114 = warBoardData->fields.listEvent;
      if ( !v114 )
        goto LABEL_128;
      v115 = (unsigned int *)*p_eventSaves;
      if ( v112 - 4 >= (unsigned __int64)(unsigned int)v114->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v116 = (WarBoardEventData_o *)*((_QWORD *)&v114->fields._items->obj.klass + v112);
      v117 = (WarBoardEventData_SaveData_o *)sub_B0D974(WarBoardEventData_SaveData_TypeInfo, v109, v110);
      WarBoardEventData_SaveData___ctor_20602496(v117, v116, v118);
      if ( !v115 )
        goto LABEL_128;
      if ( v117 )
      {
        GutsCount = sub_B0D964(v117, *(_QWORD *)(*(_QWORD *)v115 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v112 - 4 >= (unsigned __int64)v115[6] )
        goto LABEL_129;
      *(_QWORD *)&v115[2 * v112] = v117;
      sub_B0D840(&v115[v113], v117);
      v119 = v112 - 3;
      ++v112;
      v113 += 2LL;
    }
    while ( v119 < v111 );
  }
  v192->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = warBoardData->fields.latestPieceActionSquareIndexes;
  v192->fields.latestPieceActionSquareIndexes = latestPieceActionSquareIndexes;
  sub_B0D840(&v192->fields.latestPieceActionSquareIndexes, latestPieceActionSquareIndexes);
  latestBattlePieceUniqueIndexes = warBoardData->fields.latestBattlePieceUniqueIndexes;
  v192->fields.latestBattlePieceUniqueIndexes = latestBattlePieceUniqueIndexes;
  sub_B0D840(&v192->fields.latestBattlePieceUniqueIndexes, latestBattlePieceUniqueIndexes);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_128;
  v123 = listPrevCond->fields._size;
  v124 = sub_B0D8BC(WarBoardPrevCondData_SaveData___TypeInfo, (unsigned int)v123);
  v192->fields.prevCondSaves = (struct WarBoardPrevCondData_SaveData_array *)v124;
  sub_B0D840(&v192->fields.prevCondSaves, v124);
  if ( v123 >= 1 )
  {
    v127 = v123;
    v128 = 4LL;
    v129 = 8LL;
    do
    {
      v130 = warBoardData->fields.listPrevCond;
      if ( !v130 )
        goto LABEL_128;
      prevCondSaves = (unsigned int *)v192->fields.prevCondSaves;
      if ( v128 - 4 >= (unsigned __int64)(unsigned int)v130->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v132 = (WarBoardPrevCondData_o *)*((_QWORD *)&v130->fields._items->obj.klass + v128);
      v133 = (WarBoardPrevCondData_SaveData_o *)sub_B0D974(WarBoardPrevCondData_SaveData_TypeInfo, v125, v126);
      WarBoardPrevCondData_SaveData___ctor_22739212(v133, v132, 0LL);
      if ( !prevCondSaves )
        goto LABEL_128;
      if ( v133 )
      {
        GutsCount = sub_B0D964(v133, *(_QWORD *)(*(_QWORD *)prevCondSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v128 - 4 >= (unsigned __int64)prevCondSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&prevCondSaves[2 * v128] = v133;
      sub_B0D840(&prevCondSaves[v129], v133);
      v134 = v128 - 3;
      ++v128;
      v129 += 2LL;
    }
    while ( v134 < v127 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_128;
  v136 = reinforcementsSaveList->fields._size;
  v137 = sub_B0D8BC(HoldReinforcementsData_SaveData___TypeInfo, (unsigned int)v136);
  v192->fields.reinforcementsSaves = (struct HoldReinforcementsData_SaveData_array *)v137;
  sub_B0D840(&v192->fields.reinforcementsSaves, v137);
  if ( v136 >= 1 )
  {
    v140 = v136;
    v141 = 4LL;
    v142 = 8LL;
    do
    {
      v143 = warBoardData->fields.reinforcementsSaveList;
      if ( !v143 )
        goto LABEL_128;
      reinforcementsSaves = (unsigned int *)v192->fields.reinforcementsSaves;
      if ( v141 - 4 >= (unsigned __int64)(unsigned int)v143->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v145 = (HoldReinforcementsData_o *)*((_QWORD *)&v143->fields._items->obj.klass + v141);
      v146 = (HoldReinforcementsData_SaveData_o *)sub_B0D974(HoldReinforcementsData_SaveData_TypeInfo, v138, v139);
      HoldReinforcementsData_SaveData___ctor_17862392(v146, v145, 0LL);
      if ( !reinforcementsSaves )
        goto LABEL_128;
      if ( v146 )
      {
        GutsCount = sub_B0D964(v146, *(_QWORD *)(*(_QWORD *)reinforcementsSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v141 - 4 >= (unsigned __int64)reinforcementsSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&reinforcementsSaves[2 * v141] = v146;
      sub_B0D840(&reinforcementsSaves[v142], v146);
      v147 = v141 - 3;
      ++v141;
      v142 += 2LL;
    }
    while ( v147 < v140 );
  }
  GutsCount = (__int64)warBoardData->fields.playedStageReinforcementsList;
  if ( !GutsCount )
    goto LABEL_128;
  v148 = System_Collections_Generic_List_int___ToArray(
           (System_Collections_Generic_List_int__o *)GutsCount,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  v192->fields.playedReinforcements = v148;
  sub_B0D840(&v192->fields.playedReinforcements, v148);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_128;
  v150 = listUiData->fields._size;
  v151 = sub_B0D8BC(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v150);
  v192->fields.uiDataSaves = (struct WarBoardUiData_SaveData_array *)v151;
  sub_B0D840(&v192->fields.uiDataSaves, v151);
  if ( v150 >= 1 )
  {
    v154 = v150;
    v155 = 4LL;
    v156 = 8LL;
    do
    {
      v157 = warBoardData->fields.listUiData;
      if ( !v157 )
        goto LABEL_128;
      uiDataSaves = (unsigned int *)v192->fields.uiDataSaves;
      if ( v155 - 4 >= (unsigned __int64)(unsigned int)v157->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v159 = (WarBoardUiData_o *)*((_QWORD *)&v157->fields._items->obj.klass + v155);
      v160 = (WarBoardUiData_SaveData_o *)sub_B0D974(WarBoardUiData_SaveData_TypeInfo, v152, v153);
      WarBoardUiData_SaveData___ctor_19714036(v160, v159, 0LL);
      if ( !uiDataSaves )
        goto LABEL_128;
      if ( v160 )
      {
        GutsCount = sub_B0D964(v160, *(_QWORD *)(*(_QWORD *)uiDataSaves + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v155 - 4 >= (unsigned __int64)uiDataSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&uiDataSaves[2 * v155] = v160;
      sub_B0D840(&uiDataSaves[v156], v160);
      v161 = v155 - 3;
      ++v155;
      v156 += 2LL;
    }
    while ( v161 < v154 );
  }
  v162 = warBoardData->fields.serverData;
  if ( !v162 )
    goto LABEL_128;
  v163 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v162->fields.squareIndexInfo,
           (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v164 = sub_B0D8BC(WarBoardSquareIndexData_SaveData___TypeInfo, (unsigned int)v163);
  v192->fields.squareIndexInfo = (struct WarBoardSquareIndexData_SaveData_array *)v164;
  sub_B0D840(&v192->fields.squareIndexInfo, v164);
  if ( v163 >= 1 )
  {
    v167 = 0LL;
    v168 = v163;
    v169 = 8LL;
    do
    {
      v170 = warBoardData->fields.serverData;
      if ( !v170 )
        goto LABEL_128;
      squareIndexInfo = v170->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_128;
      if ( v167 >= squareIndexInfo->max_length )
        goto LABEL_129;
      v172 = (unsigned int *)v192->fields.squareIndexInfo;
      v173 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v169 * 4);
      v174 = (WarBoardSquareIndexData_SaveData_o *)sub_B0D974(WarBoardSquareIndexData_SaveData_TypeInfo, v165, v166);
      WarBoardSquareIndexData_SaveData___ctor_22745312(v174, v173, 0LL);
      if ( !v172 )
        goto LABEL_128;
      if ( v174 )
      {
        GutsCount = sub_B0D964(v174, *(_QWORD *)(*(_QWORD *)v172 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v167 >= v172[6] )
        goto LABEL_129;
      *(_QWORD *)&v172[v169] = v174;
      sub_B0D840(&v172[v169], v174);
      ++v167;
      v169 += 2LL;
    }
    while ( (__int64)v167 < v168 );
  }
  v175 = warBoardData->fields.serverData;
  if ( !v175 )
    goto LABEL_128;
  v176 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v175->fields.bossBattleInfo,
           (const MethodInfo_1B4785C *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v177 = sub_B0D8BC(WarBoardBossBattleData_SaveData___TypeInfo, (unsigned int)v176);
  v192->fields.bossBattleInfo = (struct WarBoardBossBattleData_SaveData_array *)v177;
  sub_B0D840(&v192->fields.bossBattleInfo, v177);
  if ( v176 >= 1 )
  {
    v180 = 0LL;
    v181 = v176;
    v182 = 8LL;
    do
    {
      v183 = warBoardData->fields.serverData;
      if ( !v183 )
        goto LABEL_128;
      bossBattleInfo = v183->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_128;
      if ( v180 >= bossBattleInfo->max_length )
        goto LABEL_129;
      v185 = (unsigned int *)v192->fields.bossBattleInfo;
      v186 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v182 * 4);
      v187 = (WarBoardBossBattleData_SaveData_o *)sub_B0D974(WarBoardBossBattleData_SaveData_TypeInfo, v178, v179);
      WarBoardBossBattleData_SaveData___ctor_20584984(v187, v186, v188);
      if ( !v185 )
        goto LABEL_128;
      if ( v187 )
      {
        GutsCount = sub_B0D964(v187, *(_QWORD *)(*(_QWORD *)v185 + 64LL));
        if ( !GutsCount )
          goto LABEL_130;
      }
      if ( v180 >= v185[6] )
        goto LABEL_129;
      *(_QWORD *)&v185[v182] = v187;
      sub_B0D840(&v185[v182], v187);
      ++v180;
      v182 += 2LL;
    }
    while ( (__int64)v180 < v181 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&v192->fields.isContinue = 0;
  v192->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
  v192->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
}


void __fastcall WarBoardData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct WarBoardData___c_StaticFields *static_fields; // x0

  if ( (byte_42126A7 & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardData___c_TypeInfo, v1);
    byte_42126A7 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = WarBoardData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardData___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.forceId;
}


int32_t __fastcall WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.groupId;
}


bool __fastcall WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.isReceived;
}


BattleBuffData_o *__fastcall WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  WarBoardManager_o *v3; // x19

  if ( (byte_42126A9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_42126A9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
  v3 = (WarBoardManager_o *)Instance;
  WarBoardManager__UpdateEventBossUIData((WarBoardManager_o *)Instance, 0LL);
  WarBoardManager__SaveEventBossUIData(
    v3,
    v3->fields._EventId_k__BackingField,
    v3->fields._StageId_k__BackingField,
    0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
}


bool __fastcall WarBoardData___c___GetAliveEnemyServantPieces_b__110_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isEnemyServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAlivePieces_b__107_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return !x->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAliveServantPieces_b__108_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetHoldReinforcements_b__188_0(
        WarBoardData___c_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t __fastcall WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.squareIndex;
}


bool __fastcall WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


bool __fastcall WarBoardData___c___GetPlayerPieces_b__121_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return WarBoardPieceData__get_isPlayerGroup(x, 0LL) && x->fields._iconId_k__BackingField != 0;
}


bool __fastcall WarBoardData___c___IsReachableWinConditions_b__95_0(
        WarBoardData___c_o *this,
        System_Collections_Generic_KeyValuePair_int__bool__o status,
        const MethodInfo *method)
{
  bool value; // x19^4

  value = status.fields.value;
  if ( (byte_42126A8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, status);
    byte_42126A8 = 1;
  }
  return value;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields._index_k__BackingField;
}


bool __fastcall WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


void __fastcall WarBoardData___c___SetRequest_b__156_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  WarBoardPieceData__SetServarData(x, 0LL);
}


System_String_o *__fastcall WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return p->fields.pieceComponent;
}


bool __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *v5; // x19

  if ( (byte_42126AA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, c);
    byte_42126AA = 1;
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
    sub_B0D97C(v4);
  v5 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))c->klass->vtable._4_get_BuffTrunNotice.method)(
                                 c,
                                 c->klass->vtable._5_Initialize.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v5, 0LL, 0LL);
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
    sub_B0D97C(this);
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp((WarBoardServantPieceBuffTurnComponent_o *)this, 1, 0LL);
}


int32_t __fastcall WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return UserServantEntity__getCost(x, 0LL);
}


bool __fastcall WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_42126AB & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass118_0_o *)sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_42126AB = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_42126AC & 1) == 0 )
  {
    this = (WarBoardData___c__DisplayClass119_0_o *)sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_42126AC = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_42126AD & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    this = (WarBoardData___c__DisplayClass143_0_o *)sub_B0D8A4(
                                                      &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                      v5);
    byte_42126AD = 1;
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
  this = (WarBoardData___c__DisplayClass143_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                                    v10,
                                                    0LL);
  if ( !svtMaster
    || (this = (WarBoardData___c__DisplayClass143_0_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                          svtMaster,
                                                          (int32_t)this,
                                                          (const MethodInfo_2669BD4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v11; // x1
  __int64 v12; // x2
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v14; // x20
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v17; // w19
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16

  if ( (byte_42126AE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__, v9);
    byte_42126AE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v14 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v11, v12);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B0D840(&this->fields.__9__2, _9__2);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_1B4A0B0 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v17 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_1B4A0B0 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  Only = *(System_Collections_ObjectModel_ReadOnlyCollection_T__o **)&KeyValuePair_int__object.fields.key;
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                 (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_2FC5968 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v14) )
  {
    sub_B0D97C(Only);
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v14,
    _9__2,
    v17,
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
  __int64 v8; // x2
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v10; // x20

  if ( (byte_42126AF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, _);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B0D8A4(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__, v5);
    byte_42126AF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v10 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B0D840(&this->fields.__9__3, _9__3);
  }
  if ( !v10 )
    sub_B0D97C(Instance);
  WarBoardManager__HideConsumedPieceActionPointPopup(v10, _9__3, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  WarBoardData_o *_4__this; // x0

  if ( (byte_42126B0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v4);
    byte_42126B0 = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  _4__this = (WarBoardData_o *)*(_OWORD *)&System_Linq_Enumerable__First_KeyValuePair_int__object__(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                                             (const MethodInfo_1B4A0B0 *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)consumedPieceActionPointDict,
          (int32_t)_4__this,
          (const MethodInfo_2E91E04 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(_4__this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  if ( (byte_42126B1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_int____67954312, x);
    sub_B0D8A4(&Method_System_Func_int__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_int__bool__TypeInfo, v6);
    this = (WarBoardData___c__DisplayClass189_1_o *)sub_B0D8A4(
                                                      &Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
                                                      v7);
    byte_42126B1 = 1;
  }
  if ( !x || (monitor = v4[1].monitor) == 0LL || (v9 = monitor[2]) == 0 )
    sub_B0D97C(this);
  if ( x->fields.stageReinforcementId != *(_DWORD *)(v9 + 20) )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  klass = (System_Func_int__bool__o *)v4[2].klass;
  if ( !klass )
  {
    klass = (System_Func_int__bool__o *)sub_B0D974(System_Func_int__bool__TypeInfo, x, method);
    System_Func_int__bool____ctor(
      klass,
      v4,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      (const MethodInfo_26136E4 *)Method_System_Func_int__bool___ctor__);
    v4[2].klass = (Il2CppClass *)klass;
    sub_B0D840(&v4[2], klass);
  }
  return BasicHelper__Any_int__24145568(
           reinforcementsIdx,
           (System_Func_T__bool__o *)klass,
           (const MethodInfo_1706EA0 *)Method_BasicHelper_Any_int____67954312);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
      v8 = sub_B0D9A8(this);
      sub_B0D948(v8, 0LL);
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
    sub_B0D97C(this);
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.treasureId == layout->fields.effectId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B0D97C(this);
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}