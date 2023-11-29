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

  if ( (byte_40F89F7 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardData_TypeInfo, v1);
    sub_B16FFC(&StringLiteral_1664, v8);
    sub_B16FFC(&StringLiteral_15171, v9);
    byte_40F89F7 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarBoardData_TypeInfo->static_fields;
  v11 = (System_Int32_array **)StringLiteral_15171;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_15171;
  sub_B16F98(static_fields, v11, v2, v3, v4, v5, v6, v7);
  v12 = WarBoardData_TypeInfo->static_fields;
  v13 = (System_Int32_array **)StringLiteral_1664;
  v12->AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY = (struct System_String_o *)StringLiteral_1664;
  sub_B16F98(
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
  __int64 v158; // x3
  __int64 v159; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v160; // x19
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  __int64 v167; // x2
  struct System_Int32_array *v168; // x0
  System_String_array **v169; // x2
  System_String_array **v170; // x3
  System_Boolean_array **v171; // x4
  System_Int32_array **v172; // x5
  System_Int32_array *v173; // x6
  System_Int32_array *v174; // x7
  __int64 v175; // x2
  struct System_UInt32_array *v176; // x0
  System_String_array **v177; // x2
  System_String_array **v178; // x3
  System_Boolean_array **v179; // x4
  System_Int32_array **v180; // x5
  System_Int32_array *v181; // x6
  System_Int32_array *v182; // x7
  __int64 v183; // x1
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v187; // x19
  System_String_array **v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  __int64 v194; // x1
  __int64 v195; // x2
  __int64 v196; // x3
  __int64 v197; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v198; // x19
  System_String_array **v199; // x2
  System_String_array **v200; // x3
  System_Boolean_array **v201; // x4
  System_Int32_array **v202; // x5
  System_Int32_array *v203; // x6
  System_Int32_array *v204; // x7
  __int64 v205; // x1
  __int64 v206; // x2
  __int64 v207; // x3
  __int64 v208; // x4
  System_Collections_Generic_List_int__o *v209; // x19
  System_String_array **v210; // x2
  System_String_array **v211; // x3
  System_Boolean_array **v212; // x4
  System_Int32_array **v213; // x5
  System_Int32_array *v214; // x6
  System_Int32_array *v215; // x7
  __int64 v216; // x1
  __int64 v217; // x2
  __int64 v218; // x3
  __int64 v219; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v220; // x19
  System_String_array **v221; // x2
  System_String_array **v222; // x3
  System_Boolean_array **v223; // x4
  System_Int32_array **v224; // x5
  System_Int32_array *v225; // x6
  System_Int32_array *v226; // x7
  __int64 v227; // x1
  __int64 v228; // x2
  __int64 v229; // x3
  __int64 v230; // x4
  System_Collections_Generic_List_int__o *v231; // x19
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  __int64 v238; // x1
  __int64 v239; // x2
  __int64 v240; // x3
  __int64 v241; // x4
  System_Collections_Generic_List_int__o *v242; // x19
  System_String_array **v243; // x2
  System_String_array **v244; // x3
  System_Boolean_array **v245; // x4
  System_Int32_array **v246; // x5
  System_Int32_array *v247; // x6
  System_Int32_array *v248; // x7
  __int64 v249; // x1
  __int64 v250; // x2
  __int64 v251; // x3
  __int64 v252; // x4
  WarBoardData___c_c *v253; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__77_0; // x19
  Il2CppObject *v256; // x20
  struct WarBoardData___c_StaticFields *v257; // x0
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  System_String_array **v264; // x2
  System_String_array **v265; // x3
  System_Boolean_array **v266; // x4
  System_Int32_array **v267; // x5
  System_Int32_array *v268; // x6
  System_Int32_array *v269; // x7
  __int64 v270; // x20
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v272; // x0
  struct WarBoardStageNpcMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_array **v274; // x2
  System_String_array **v275; // x3
  System_Boolean_array **v276; // x4
  System_Int32_array **v277; // x5
  System_Int32_array *v278; // x6
  System_Int32_array *v279; // x7
  WarBoardStageNpcMaster_o *stageNpcMaster; // x0
  System_Collections_Generic_IEnumerable_WarBoardStageNpcEntity__o *WarBoardStageEntities; // x0
  __int64 v282; // x1
  __int64 v283; // x2
  __int64 v284; // x3
  __int64 v285; // x4
  WarBoardData___c_c *v286; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v287; // x21
  struct WarBoardData___c_StaticFields *v288; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_1; // x19
  Il2CppObject *v290; // x20
  struct WarBoardData___c_StaticFields *v291; // x0
  System_String_array **v292; // x2
  System_String_array **v293; // x3
  System_Boolean_array **v294; // x4
  System_Int32_array **v295; // x5
  System_Int32_array *v296; // x6
  System_Int32_array *v297; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v298; // x0
  System_String_array **v299; // x2
  System_String_array **v300; // x3
  System_Boolean_array **v301; // x4
  System_Int32_array **v302; // x5
  System_Int32_array *v303; // x6
  System_Int32_array *v304; // x7
  WebViewManager_o *v305; // x0
  WarBoardActionPointMaster_o *v306; // x0
  System_Collections_Generic_IEnumerable_WarBoardActionPointEntity__o *WarBoardActionPointEntities; // x0
  __int64 v308; // x1
  __int64 v309; // x2
  __int64 v310; // x3
  __int64 v311; // x4
  WarBoardData___c_c *v312; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v313; // x21
  struct WarBoardData___c_StaticFields *v314; // x9
  System_Func_WarBoardStageNpcEntity__uint__o *_9__77_2; // x19
  Il2CppObject *v316; // x20
  struct WarBoardData___c_StaticFields *v317; // x0
  System_String_array **v318; // x2
  System_String_array **v319; // x3
  System_Boolean_array **v320; // x4
  System_Int32_array **v321; // x5
  System_Int32_array *v322; // x6
  System_Int32_array *v323; // x7
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *v324; // x0
  System_String_array **v325; // x2
  System_String_array **v326; // x3
  System_Boolean_array **v327; // x4
  System_Int32_array **v328; // x5
  System_Int32_array *v329; // x6
  System_Int32_array *v330; // x7
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  __int64 v333; // x1
  __int64 v334; // x2
  __int64 v335; // x3
  __int64 v336; // x4
  WarBoardData___c_c *v337; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v338; // x21
  struct WarBoardData___c_StaticFields *v339; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_3; // x19
  Il2CppObject *v341; // x20
  struct WarBoardData___c_StaticFields *v342; // x0
  System_String_array **v343; // x2
  System_String_array **v344; // x3
  System_Boolean_array **v345; // x4
  System_Int32_array **v346; // x5
  System_Int32_array *v347; // x6
  System_Int32_array *v348; // x7
  int32_t v349; // w0
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v350; // x8
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *v351; // x0
  __int64 v352; // x1
  __int64 v353; // x2
  __int64 v354; // x3
  __int64 v355; // x4
  WarBoardData___c_c *v356; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v357; // x21
  struct WarBoardData___c_StaticFields *v358; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__77_4; // x19
  Il2CppObject *v360; // x20
  struct WarBoardData___c_StaticFields *v361; // x0
  System_String_array **v362; // x2
  System_String_array **v363; // x3
  System_Boolean_array **v364; // x4
  System_Int32_array **v365; // x5
  System_Int32_array *v366; // x6
  System_Int32_array *v367; // x7
  WebViewManager_o *v368; // x0
  __int64 v369; // x1
  __int64 v370; // x2
  __int64 v371; // x3
  __int64 v372; // x4
  __int64 v373; // x1
  __int64 v374; // x2
  __int64 v375; // x3
  __int64 v376; // x4
  __int64 v377; // x1
  __int64 v378; // x2
  __int64 v379; // x3
  __int64 v380; // x4
  __int64 v381; // x1
  __int64 v382; // x2
  __int64 v383; // x3
  __int64 v384; // x4
  __int64 v385; // x1
  __int64 v386; // x2
  __int64 v387; // x3
  __int64 v388; // x4
  __int64 v389; // x1
  __int64 v390; // x2
  __int64 v391; // x3
  __int64 v392; // x4
  __int64 v393; // x1
  __int64 v394; // x2
  __int64 v395; // x3
  __int64 v396; // x4
  WarBoardData_c *v397; // x0
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x19
  const MethodInfo *v399; // x0
  WebViewManager_o *v400; // x0
  int v401; // w19
  WarBoardDataEntity_o *v402; // x25
  System_String_o *image; // x19
  System_String_o *String; // x19
  System_Byte_array *v405; // x19
  __int64 v406; // x1
  __int64 v407; // x2
  __int64 v408; // x3
  __int64 v409; // x4
  MiniMessagePack_MiniMessagePacker_o *v410; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v411; // x0
  struct WarBoardData_WarBoardLocalSaveData_o **p_localSaveData; // x24
  System_String_array **v413; // x2
  System_String_array **v414; // x3
  System_Boolean_array **v415; // x4
  System_Int32_array **v416; // x5
  System_Int32_array *v417; // x6
  System_Int32_array *v418; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v419; // x8
  WebViewManager_o *v420; // x0
  __int64 v421; // x1
  __int64 v422; // x2
  __int64 v423; // x3
  __int64 v424; // x4
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x23
  unsigned __int64 v426; // x26
  __int64 v427; // x21
  __int64 v428; // x0
  const MethodInfo *v429; // x1
  System_String_array **v430; // x2
  System_String_array **v431; // x3
  System_Boolean_array **v432; // x4
  System_Int32_array **v433; // x5
  System_Int32_array *v434; // x6
  System_Int32_array *v435; // x7
  System_Int32_array **v436; // x1
  WarBoardPieceData_SaveData_o **v437; // x20
  __int64 v438; // x1
  __int64 v439; // x2
  __int64 v440; // x3
  __int64 v441; // x4
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v443; // x22
  WarBoardData_SquareRangeSearch_o *v444; // x0
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v446; // x22
  WarBoardData_SquareRangeSearch_o *v447; // x0
  struct WarBoardItemData_SaveData_array *itemSaves; // x23
  unsigned __int64 v449; // x26
  __int64 v450; // x20
  System_String_array **v451; // x3
  System_Boolean_array **v452; // x4
  System_Int32_array **v453; // x5
  System_Int32_array *v454; // x6
  System_Int32_array *v455; // x7
  System_Int32_array **v456; // x1
  __int64 v457; // x1
  __int64 v458; // x2
  __int64 v459; // x3
  __int64 v460; // x4
  System_Collections_Generic_IEnumerable_TSource__o *getItemInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v462; // x22
  WarBoardData_SquareRangeSearch_o *v463; // x0
  BattleServantConfConponent_o *p_treasureInfo; // x21
  struct WarBoardData_WarBoardLocalSaveData_o **v465; // x23
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x28
  unsigned __int64 v467; // x26
  __int64 v468; // x19
  System_String_array **v469; // x3
  System_Boolean_array **v470; // x4
  System_Int32_array **v471; // x5
  System_Int32_array *v472; // x6
  System_Int32_array *v473; // x7
  System_Int32_array **v474; // x1
  __int64 v475; // x20
  System_Collections_Generic_IEnumerable_TSource__o *klass; // x22
  __int64 v477; // x1
  __int64 v478; // x2
  __int64 v479; // x3
  __int64 v480; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v481; // x23
  WarBoardData_SquareRangeSearch_o *v482; // x0
  WarBoardData___c_c *v483; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v484; // x22
  struct WarBoardData___c_StaticFields *v485; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__77_9; // x19
  Il2CppObject *v487; // x20
  struct WarBoardData___c_StaticFields *v488; // x0
  System_String_array **v489; // x2
  System_String_array **v490; // x3
  System_Boolean_array **v491; // x4
  System_Int32_array **v492; // x5
  System_Int32_array *v493; // x6
  System_Int32_array *v494; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v495; // x0
  System_Int32_array **v496; // x0
  System_String_array **v497; // x2
  System_String_array **v498; // x3
  System_Boolean_array **v499; // x4
  System_Int32_array **v500; // x5
  System_Int32_array *v501; // x6
  System_Int32_array *v502; // x7
  struct WarBoardWallData_SaveData_array *wallSaves; // x23
  unsigned __int64 v504; // x25
  __int64 v505; // x19
  System_String_array **v506; // x3
  System_Boolean_array **v507; // x4
  System_Int32_array **v508; // x5
  System_Int32_array *v509; // x6
  System_Int32_array *v510; // x7
  System_Int32_array **v511; // x1
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x21
  __int64 v513; // x1
  __int64 v514; // x2
  __int64 v515; // x3
  __int64 v516; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v517; // x22
  WarBoardData_SquareRangeSearch_o *v518; // x0
  int v519; // w19
  __int64 v520; // x3
  __int64 v521; // x4
  unsigned __int64 v522; // x22
  signed __int64 v523; // x23
  __int64 v524; // x24
  struct WarBoardSquareIndexData_SaveData_array *squareIndexInfo; // x8
  unsigned int *v526; // x26
  WarBoardSquareIndexData_SaveData_o *v527; // x20
  WarBoardSquareIndexData_o *v528; // x19
  System_String_array **v529; // x3
  System_Boolean_array **v530; // x4
  System_Int32_array **v531; // x5
  System_Int32_array *v532; // x6
  System_Int32_array *v533; // x7
  int v534; // w19
  __int64 v535; // x3
  __int64 v536; // x4
  unsigned __int64 v537; // x22
  signed __int64 v538; // x23
  __int64 v539; // x24
  struct WarBoardBossBattleData_SaveData_array *bossBattleInfo; // x8
  unsigned int *v541; // x26
  WarBoardBossBattleData_SaveData_o *v542; // x20
  WarBoardBossBattleData_o *v543; // x19
  const MethodInfo *v544; // x2
  System_String_array **v545; // x3
  System_Boolean_array **v546; // x4
  System_Int32_array **v547; // x5
  System_Int32_array *v548; // x6
  System_Int32_array *v549; // x7
  WarBoardData_c *v550; // x0
  System_String_array **v551; // x2
  System_String_array **v552; // x3
  System_Boolean_array **v553; // x4
  System_Int32_array **v554; // x5
  System_Int32_array *v555; // x6
  System_Int32_array *v556; // x7
  WebViewManager_o *v557; // x0
  const MethodInfo *v558; // x3
  __int64 v559; // x4
  unsigned __int64 v560; // x28
  signed __int64 v561; // x22
  __int64 v562; // x26
  System_String_array **v563; // x3
  System_Boolean_array **v564; // x4
  System_Int32_array **v565; // x5
  System_Int32_array *v566; // x6
  System_Int32_array *v567; // x7
  System_Int32_array **v568; // x1
  WarBoardStageLayoutEntity_o **v569; // x21
  WarBoardStageLayoutEntity_o *v570; // x19
  __int64 v571; // x1
  __int64 v572; // x2
  __int64 v573; // x3
  __int64 v574; // x4
  WarBoardSquareData_o *v575; // x20
  __int64 v576; // x9
  WarBoardStageLayoutEntity_o *v577; // x8
  int32_t throughCondId; // w1
  System_Collections_Generic_IEnumerable_TSource__o *v579; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v580; // x20
  WarBoardData_SquareRangeSearch_o *v581; // x20
  WarBoardData_SquareRangeSearch_o *v582; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v583; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v584; // x1
  const MethodInfo_2F25CD8 *v585; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v586; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v587; // x20
  WarBoardStageLayoutEntity_o *v588; // x8
  WarBoardDataEntity_WarBoardDeckData_o **v589; // x9
  WarBoardDataEntity_WarBoardDeckData_o *v590; // x27
  int32_t Type; // w0
  bool IsNpc; // w0
  int32_t progressType; // w23
  WarBoardStageLayoutEntity_o *v594; // x19
  bool v595; // w24
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *v596; // x25
  __int64 v597; // x1
  __int64 v598; // x2
  __int64 v599; // x3
  __int64 v600; // x4
  WarBoardPieceData_o *v601; // x0
  WarBoardPieceData_o *v602; // x22
  bool v603; // w5
  NpcFollowerEntity_o *Entity_21217012; // x0
  NpcFollowerEntity_o *v605; // x19
  BattleServantData_o *battleServant_k__BackingField; // x0
  WarBoardStageLayoutEntity_o *v607; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v608; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v609; // x20
  WarBoardData_SquareRangeSearch_o *v610; // x0
  WarBoardStageLayoutEntity_o *v611; // x20
  WarBoardUserGetItemData_o *v612; // x21
  __int64 v613; // x1
  __int64 v614; // x2
  __int64 v615; // x3
  __int64 v616; // x4
  WarBoardItemData_o *v617; // x19
  __int64 *v618; // x8
  System_Collections_Generic_IEnumerable_TSource__o *treasureInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v620; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v621; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v622; // x20
  WarBoardData_SquareRangeSearch_o *v623; // x0
  WarBoardStageLayoutEntity_o *v624; // x20
  WarBoardUserWallData_o *v625; // x21
  __int64 v626; // x1
  __int64 v627; // x2
  __int64 v628; // x3
  __int64 v629; // x4
  System_Int32_array **v630; // x0
  System_String_array **v631; // x2
  System_String_array **v632; // x3
  System_Boolean_array **v633; // x4
  System_Int32_array **v634; // x5
  System_Int32_array *v635; // x6
  System_Int32_array *v636; // x7
  System_Int32_array **v637; // x0
  System_String_array **v638; // x2
  System_String_array **v639; // x3
  System_Boolean_array **v640; // x4
  System_Int32_array **v641; // x5
  System_Int32_array *v642; // x6
  System_Int32_array *v643; // x7
  System_Int32_array **v644; // x0
  System_Collections_Generic_IEnumerable_T__o **p_pieces; // x22
  System_String_array **v646; // x2
  System_String_array **v647; // x3
  System_Boolean_array **v648; // x4
  System_Int32_array **v649; // x5
  System_Int32_array *v650; // x6
  System_Int32_array *v651; // x7
  BattleBuffData_BuffData_array *pieces; // x19
  __int64 v653; // x1
  __int64 v654; // x2
  __int64 v655; // x3
  __int64 v656; // x4
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *v657; // x20
  System_Int32_array **v658; // x0
  System_String_array **v659; // x2
  System_String_array **v660; // x3
  System_Boolean_array **v661; // x4
  System_Int32_array **v662; // x5
  System_Int32_array *v663; // x6
  System_Int32_array *v664; // x7
  System_Int32_array **v665; // x0
  System_String_array **v666; // x2
  System_String_array **v667; // x3
  System_Boolean_array **v668; // x4
  System_Int32_array **v669; // x5
  System_Int32_array *v670; // x6
  System_Int32_array *v671; // x7
  System_Int32_array **v672; // x0
  System_String_array **v673; // x2
  System_String_array **v674; // x3
  System_Boolean_array **v675; // x4
  System_Int32_array **v676; // x5
  System_Int32_array *v677; // x6
  System_Int32_array *v678; // x7
  System_Int32_array **v679; // x0
  System_String_array **v680; // x2
  System_String_array **v681; // x3
  System_Boolean_array **v682; // x4
  System_Int32_array **v683; // x5
  System_Int32_array *v684; // x6
  System_Int32_array *v685; // x7
  System_String_array **v686; // x2
  System_String_array **v687; // x3
  System_Boolean_array **v688; // x4
  System_Int32_array **v689; // x5
  System_Int32_array *v690; // x6
  System_Int32_array *v691; // x7
  __int64 v692; // x3
  __int64 v693; // x4
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardPieceData_SaveData_array *v695; // x28
  WarBoardData___c__DisplayClass77_5_c **v696; // x26
  unsigned __int64 v697; // x27
  WarBoardPieceData_SaveData_o **m_Items; // x21
  __int64 v699; // x20
  System_String_array **v700; // x3
  System_Boolean_array **v701; // x4
  System_Int32_array **v702; // x5
  System_Int32_array *v703; // x6
  System_Int32_array *v704; // x7
  System_Int32_array **v705; // x1
  WarBoardPieceData_SaveData_o **v706; // x23
  System_Collections_Generic_IEnumerable_T__o *v707; // x19
  __int64 v708; // x1
  __int64 v709; // x2
  __int64 v710; // x3
  __int64 v711; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v712; // x24
  __int64 v713; // x1
  __int64 v714; // x2
  __int64 v715; // x3
  __int64 v716; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v717; // x19
  WarBoardPieceData_SaveData_o **v718; // x28
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v719; // x24
  WarBoardData_SquareRangeSearch_o *v720; // x24
  __int64 v721; // x1
  __int64 v722; // x2
  __int64 v723; // x3
  __int64 v724; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v725; // x20
  WarBoardData___c__DisplayClass77_5_c **v726; // x21
  __int64 v727; // x1
  __int64 v728; // x2
  __int64 v729; // x3
  __int64 v730; // x4
  int32_t id; // w19
  WarBoardPieceData_SaveData_o *v732; // x25
  WarBoardPieceData_o *v733; // x26
  System_Int32_array **v734; // x0
  System_String_array **v735; // x2
  System_String_array **v736; // x3
  System_Boolean_array **v737; // x4
  System_Int32_array **v738; // x5
  System_Int32_array *v739; // x6
  System_Int32_array *v740; // x7
  struct WarBoardItemData_SaveData_array *v741; // x20
  int max_length; // w8
  unsigned int v743; // w21
  __int64 v744; // x8
  WarBoardItemData_SaveData_o *v745; // x19
  struct WarBoardTreasureData_SaveData_array *v746; // x20
  int v747; // w8
  unsigned int v748; // w21
  __int64 v749; // x8
  WarBoardTreasureData_SaveData_o *v750; // x19
  struct WarBoardWallData_SaveData_array *v751; // x20
  int v752; // w8
  unsigned int v753; // w21
  __int64 v754; // x8
  WarBoardWallData_SaveData_o *v755; // x19
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  int v757; // w8
  unsigned int v758; // w21
  __int64 v759; // x8
  WarBoardSquareData_SaveData_o *v760; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v761; // x19
  System_String_array **v762; // x2
  System_String_array **v763; // x3
  System_Boolean_array **v764; // x4
  System_Int32_array **v765; // x5
  System_Int32_array *v766; // x6
  System_Int32_array *v767; // x7
  System_String_array **v768; // x3
  System_Boolean_array **v769; // x4
  System_Int32_array **v770; // x5
  System_Int32_array *v771; // x6
  System_Int32_array *v772; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v773; // x8
  struct WarBoardEventData_SaveData_array *eventSaves; // x21
  __int64 v775; // x8
  unsigned __int64 v776; // x23
  WarBoardEventData_SaveData_o *v777; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v778; // x19
  WarBoardEventData_o *v779; // x20
  struct WarBoardData_WarBoardLocalSaveData_o *v780; // x8
  System_Int32_array **latestPieceActionSquareIndexes; // x1
  System_String_array **v782; // x2
  System_String_array **v783; // x3
  System_Boolean_array **v784; // x4
  System_Int32_array **v785; // x5
  System_Int32_array *v786; // x6
  System_Int32_array *v787; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v788; // x8
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  __int64 v790; // x1
  __int64 v791; // x2
  __int64 v792; // x3
  __int64 v793; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v794; // x19
  System_String_array **v795; // x2
  System_String_array **v796; // x3
  System_Boolean_array **v797; // x4
  System_Int32_array **v798; // x5
  System_Int32_array *v799; // x6
  System_Int32_array *v800; // x7
  __int64 v801; // x3
  __int64 v802; // x4
  struct WarBoardPrevCondData_SaveData_array *prevCondSaves; // x21
  __int64 v804; // x8
  unsigned __int64 v805; // x23
  WarBoardPrevCondData_SaveData_o *v806; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v807; // x19
  WarBoardPrevCondData_o *v808; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v809; // x19
  System_String_array **v810; // x2
  System_String_array **v811; // x3
  System_Boolean_array **v812; // x4
  System_Int32_array **v813; // x5
  System_Int32_array *v814; // x6
  System_Int32_array *v815; // x7
  __int64 v816; // x3
  __int64 v817; // x4
  struct HoldReinforcementsData_SaveData_array *reinforcementsSaves; // x21
  __int64 v819; // x8
  unsigned __int64 v820; // x23
  HoldReinforcementsData_SaveData_o *v821; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v822; // x19
  HoldReinforcementsData_o *v823; // x20
  System_Int32_array **v824; // x0
  System_String_array **v825; // x2
  System_String_array **v826; // x3
  System_Boolean_array **v827; // x4
  System_Int32_array **v828; // x5
  System_Int32_array *v829; // x6
  System_Int32_array *v830; // x7
  __int64 v831; // x1
  __int64 v832; // x2
  __int64 v833; // x3
  __int64 v834; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v835; // x19
  System_String_array **v836; // x2
  System_String_array **v837; // x3
  System_Boolean_array **v838; // x4
  System_Int32_array **v839; // x5
  System_Int32_array *v840; // x6
  System_Int32_array *v841; // x7
  System_String_array **v842; // x3
  System_Boolean_array **v843; // x4
  System_Int32_array **v844; // x5
  System_Int32_array *v845; // x6
  System_Int32_array *v846; // x7
  struct WarBoardUiData_SaveData_array *uiDataSaves; // x21
  __int64 v848; // x8
  unsigned __int64 v849; // x23
  WarBoardUiData_SaveData_o *v850; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v851; // x19
  WarBoardUiData_o *v852; // x20
  System_Int32_array **bgAnimationInfo; // x1
  struct WarBoardData_WarBoardLocalSaveData_o *v854; // x8
  WarBoardData_WarBoardLocalSaveData_o *v855; // x19
  System_String_array **v856; // x2
  System_String_array **v857; // x3
  System_Boolean_array **v858; // x4
  System_Int32_array **v859; // x5
  System_Int32_array *v860; // x6
  System_Int32_array *v861; // x7
  BattleServantConfConponent_o *p_latestBattlePieceUniqueIndexes; // [xsp+10h] [xbp-170h]
  struct System_Int32_array **p_latestPieceActionSquareIndexes; // [xsp+18h] [xbp-168h]
  BattleServantConfConponent_o *p_playedStageReinforcementsList; // [xsp+20h] [xbp-160h]
  BattleServantConfConponent_o *p_bgAnimationInfo_k__BackingField; // [xsp+28h] [xbp-158h]
  BattleServantConfConponent_o *p_listUiData; // [xsp+30h] [xbp-150h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v867; // [xsp+38h] [xbp-148h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v868; // [xsp+40h] [xbp-140h]
  WarBoardDataEntity_WarBoardDeckData_o **p_myDeck; // [xsp+48h] [xbp-138h]
  System_Collections_Generic_List_int__o **p_masterExistsForce; // [xsp+50h] [xbp-130h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v871; // [xsp+58h] [xbp-128h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v872; // [xsp+60h] [xbp-120h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v873; // [xsp+68h] [xbp-118h]
  NpcFollowerMaster_o *Master_WarQuestSelectionMaster; // [xsp+70h] [xbp-110h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v875; // [xsp+78h] [xbp-108h]
  WarBoardData_Fields *p_fields; // [xsp+80h] [xbp-100h]
  WarBoardCommonReleaseMaster_o *v877; // [xsp+88h] [xbp-F8h]
  signed __int64 v878; // [xsp+90h] [xbp-F0h]
  struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o **p_npcEntityDict; // [xsp+98h] [xbp-E8h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v880; // [xsp+A0h] [xbp-E0h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v881; // [xsp+A8h] [xbp-D8h]
  WarBoardStageLayoutEntity_array *v882; // [xsp+B0h] [xbp-D0h]
  WarBoardDataEntity_WarBoardDeckData_o **p_enemyDeck; // [xsp+B8h] [xbp-C8h]
  BattleServantConfConponent_o *p_listPrevCond; // [xsp+C0h] [xbp-C0h]
  BattleServantConfConponent_o *p_reinforcementsSaveList; // [xsp+C8h] [xbp-B8h]
  struct System_Collections_Generic_List_WarBoardEventData__o **p_listEvent; // [xsp+D0h] [xbp-B0h]
  int32_t questPhase; // [xsp+DCh] [xbp-A4h]
  WarBoardData_o *v888; // [xsp+E0h] [xbp-A0h]
  char v889; // [xsp+ECh] [xbp-94h]
  int32_t v890; // [xsp+ECh] [xbp-94h]
  struct WarBoardData_WarBoardLocalSaveData_o **v891; // [xsp+F0h] [xbp-90h]
  int32_t questId; // [xsp+F0h] [xbp-90h]
  WarBoardDataEntity_o *v893; // [xsp+F8h] [xbp-88h]
  WarBoardDataEntity_o *v894; // [xsp+F8h] [xbp-88h]
  int v895; // [xsp+100h] [xbp-80h]
  WarBoardUserMasterData_o *v896; // [xsp+100h] [xbp-80h]
  struct WarBoardData_WarBoardLocalSaveData_o **v897; // [xsp+100h] [xbp-80h]
  struct WarBoardPieceData_SaveData_array *v899; // [xsp+108h] [xbp-78h]
  bool isChangeName; // [xsp+114h] [xbp-6Ch] BYREF
  UserServantEntity_o *entity; // [xsp+118h] [xbp-68h] BYREF
  int32_t condGroup[3]; // [xsp+124h] [xbp-5Ch] BYREF

  v7 = layoutEntities;
  if ( (byte_40F899F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Resize_WarBoardBossBattleData___, stage);
    sub_B16FFC(&Method_System_Array_Resize_WarBoardSquareIndexData___, v10);
    sub_B16FFC(&Method_System_Array_Sort_WarBoardPieceData___, v11);
    sub_B16FFC(&Method_System_Array_Sort_WarBoardStageLayoutEntity___, v12);
    sub_B16FFC(&Method_BasicHelper_Any_WarBoardPieceData___, v13);
    sub_B16FFC(&Method_System_Comparison_WarBoardStageLayoutEntity___ctor__, v14);
    sub_B16FFC(&Method_System_Comparison_WarBoardPieceData___ctor__, v15);
    sub_B16FFC(&System_Comparison_WarBoardStageLayoutEntity__TypeInfo, v16);
    sub_B16FFC(&System_Comparison_WarBoardPieceData__TypeInfo, v17);
    sub_B16FFC(&System_Convert_TypeInfo, v18);
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, v19);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardActionPointMaster___, v20);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardStageDetailMaster___, v21);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarBoardStageNpcMaster___, v22);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, v23);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, v24);
    sub_B16FFC(&DataManager_TypeInfo, v25);
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__, v28);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v29);
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v30);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___, v31);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___, v32);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___, v33);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v34);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v35);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___, v36);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v37);
    sub_B16FFC(&Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___, v38);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___, v39);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___, v40);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___, v41);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v42);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___, v43);
    sub_B16FFC(&Method_System_Func_WarBoardUserTreasureData__bool___ctor__, v44);
    sub_B16FFC(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v45);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v46);
    sub_B16FFC(&Method_System_Func_WarBoardUserGetItemData__bool___ctor__, v47);
    sub_B16FFC(&Method_System_Func_WarBoardStageNpcEntity__uint___ctor__, v48);
    sub_B16FFC(&Method_System_Func_WarBoardStageNpcEntity__int___ctor__, v49);
    sub_B16FFC(&Method_System_Func_WarBoardActionPointEntity__uint___ctor__, v50);
    sub_B16FFC(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v51);
    sub_B16FFC(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v52);
    sub_B16FFC(&System_Func_WarBoardActionPointEntity__uint__TypeInfo, v53);
    sub_B16FFC(&System_Func_WarBoardUserTreasureData__bool__TypeInfo, v54);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v55);
    sub_B16FFC(&System_Func_WarBoardUserGetItemData__bool__TypeInfo, v56);
    sub_B16FFC(&System_Func_WarBoardStageNpcEntity__uint__TypeInfo, v57);
    sub_B16FFC(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v58);
    sub_B16FFC(&System_Func_WarBoardUserWallData__bool__TypeInfo, v59);
    sub_B16FFC(&System_Func_WarBoardStageNpcEntity__int__TypeInfo, v60);
    sub_B16FFC(&System_Func_WarBoardUserServantData__bool__TypeInfo, v61);
    sub_B16FFC(&HoldReinforcementsData_TypeInfo, v62);
    sub_B16FFC(&int___TypeInfo, v63);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v64);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, v65);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, v66);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardItemData__Add__, v67);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, v68);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, v69);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTreasureData__Add__, v70);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v71);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v72);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardWallData__Add__, v73);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEffectData__Add__, v74);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v75);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v76);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__, v77);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v78);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardItemData__ToArray__, v79);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__, v80);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardWallData__ToArray__, v81);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v82);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData___ctor__, v83);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__, v84);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v85);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardItemData___ctor__, v86);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v87);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData___ctor__, v88);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__, v89);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardWallData___ctor__, v90);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEffectData___ctor__, v91);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__, v92);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor__, v93);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v94);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardUiData__TypeInfo, v95);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v96);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v97);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardItemData__TypeInfo, v98);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v99);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTreasureData__TypeInfo, v100);
    sub_B16FFC(&System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v101);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardWallData__TypeInfo, v102);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardEffectData__TypeInfo, v103);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardEventData__TypeInfo, v104);
    sub_B16FFC(&Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___, v105);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v106);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v107);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v108);
    sub_B16FFC(&Method_WarBoardData___c___ctor_b__77_0__, v109);
    sub_B16FFC(&Method_WarBoardData___c___ctor_b__77_1__, v110);
    sub_B16FFC(&Method_WarBoardData___c___ctor_b__77_2__, v111);
    sub_B16FFC(&Method_WarBoardData___c___ctor_b__77_3__, v112);
    sub_B16FFC(&Method_WarBoardData___c___ctor_b__77_4__, v113);
    sub_B16FFC(&Method_WarBoardData___c___ctor_b__77_9__, v114);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__, v115);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__, v116);
    sub_B16FFC(&WarBoardData___c__DisplayClass77_0_TypeInfo, v117);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__, v118);
    sub_B16FFC(&WarBoardData___c__DisplayClass77_1_TypeInfo, v119);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__, v120);
    sub_B16FFC(&WarBoardData___c__DisplayClass77_2_TypeInfo, v121);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__, v122);
    sub_B16FFC(&WarBoardData___c__DisplayClass77_3_TypeInfo, v123);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__, v124);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__, v125);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__, v126);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__, v127);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__, v128);
    sub_B16FFC(&WarBoardData___c__DisplayClass77_4_TypeInfo, v129);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__, v130);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__, v131);
    sub_B16FFC(&WarBoardData___c__DisplayClass77_5_TypeInfo, v132);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v133);
    sub_B16FFC(&uint___TypeInfo, v134);
    sub_B16FFC(&WarBoardBossBattleData_TypeInfo, v135);
    sub_B16FFC(&Method_WarBoardData_ComparePiece__, v136);
    sub_B16FFC(&WarBoardData_TypeInfo, v137);
    sub_B16FFC(&WarBoardEffectData_TypeInfo, v138);
    sub_B16FFC(&WarBoardEventData_TypeInfo, v139);
    sub_B16FFC(&WarBoardItemData_TypeInfo, v140);
    sub_B16FFC(&WarBoardData_WarBoardLocalSaveData_TypeInfo, v141);
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v142);
    sub_B16FFC(&WarBoardPrevCondData_TypeInfo, v143);
    sub_B16FFC(&WarBoardSquareData_TypeInfo, v144);
    sub_B16FFC(&WarBoardSquareIndexData_TypeInfo, v145);
    sub_B16FFC(&WarBoardTreasureData_TypeInfo, v146);
    sub_B16FFC(&WarBoardUiData_TypeInfo, v147);
    sub_B16FFC(&WarBoardWallData_TypeInfo, v148);
    byte_40F899F = 1;
  }
  entity = 0LL;
  isChangeName = 0;
  v149 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                         System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                         stage,
                                                                                         layoutEntities,
                                                                                         roadEntities,
                                                                                         serverData);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v149,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields._bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_Dictionary_string__object__o *)v149;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField,
    (System_Int32_array **)v149,
    v150,
    v151,
    v152,
    v153,
    v154,
    v155);
  v160 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardEventData__TypeInfo,
                                                                                                   v156,
                                                                                                   v157,
                                                                                                   v158,
                                                                                                   v159);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v160,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
  this->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v160;
  p_listEvent = &this->fields.listEvent;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listEvent,
    (System_Int32_array **)v160,
    v161,
    v162,
    v163,
    v164,
    v165,
    v166);
  *(_QWORD *)&this->fields.winCondId = -1LL;
  v168 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, v167);
  this->fields.latestPieceActionSquareIndexes = v168;
  p_latestPieceActionSquareIndexes = &this->fields.latestPieceActionSquareIndexes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.latestPieceActionSquareIndexes,
    (System_Int32_array **)v168,
    v169,
    v170,
    v171,
    v172,
    v173,
    v174);
  v176 = (struct System_UInt32_array *)sub_B17014(uint___TypeInfo, 0LL, v175);
  this->fields.latestBattlePieceUniqueIndexes = v176;
  p_latestBattlePieceUniqueIndexes = (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v176,
    v177,
    v178,
    v179,
    v180,
    v181,
    v182);
  v187 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo,
                                                                                                   v183,
                                                                                                   v184,
                                                                                                   v185,
                                                                                                   v186);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v187,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
  this->fields.listPrevCond = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v187;
  p_listPrevCond = (BattleServantConfConponent_o *)&this->fields.listPrevCond;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)v187,
    v188,
    v189,
    v190,
    v191,
    v192,
    v193);
  v198 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_HoldReinforcementsData__TypeInfo,
                                                                                                   v194,
                                                                                                   v195,
                                                                                                   v196,
                                                                                                   v197);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v198,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
  this->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v198;
  p_reinforcementsSaveList = (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsSaveList,
    (System_Int32_array **)v198,
    v199,
    v200,
    v201,
    v202,
    v203,
    v204);
  v209 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v205,
                                                     v206,
                                                     v207,
                                                     v208);
  System_Collections_Generic_List_int____ctor(
    v209,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playedStageReinforcementsList = v209;
  p_playedStageReinforcementsList = (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playedStageReinforcementsList,
    (System_Int32_array **)v209,
    v210,
    v211,
    v212,
    v213,
    v214,
    v215);
  v220 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardUiData__TypeInfo,
                                                                                                   v216,
                                                                                                   v217,
                                                                                                   v218,
                                                                                                   v219);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v220,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
  this->fields.listUiData = (struct System_Collections_Generic_List_WarBoardUiData__o *)v220;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listUiData,
    (System_Int32_array **)v220,
    v221,
    v222,
    v223,
    v224,
    v225,
    v226);
  v231 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v227,
                                                     v228,
                                                     v229,
                                                     v230);
  System_Collections_Generic_List_int____ctor(
    v231,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.masterExistsForce = v231;
  p_masterExistsForce = &this->fields.masterExistsForce;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.masterExistsForce,
    (System_Int32_array **)v231,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
  v242 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                     System_Collections_Generic_List_int__TypeInfo,
                                                     v238,
                                                     v239,
                                                     v240,
                                                     v241);
  System_Collections_Generic_List_int____ctor(
    v242,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.reinforcementsAppointmentSquareList = v242;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.reinforcementsAppointmentSquareList,
    (System_Int32_array **)v242,
    v243,
    v244,
    v245,
    v246,
    v247,
    v248);
  this->fields.localSaveTiming = 1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v253 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v253 = WarBoardData___c_TypeInfo;
  }
  static_fields = v253->static_fields;
  _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__77_0;
  if ( !_9__77_0 )
  {
    if ( (BYTE3(v253->vtable._0_Equals.methodPtr) & 4) != 0 && !v253->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v253);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v256 = (Il2CppObject *)static_fields->__9;
    _9__77_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                           System_Comparison_WarBoardStageLayoutEntity__TypeInfo,
                                                                           v249,
                                                                           v250,
                                                                           v251,
                                                                           v252);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__77_0,
      v256,
      Method_WarBoardData___c___ctor_b__77_0__,
      (const MethodInfo_25BFD48 *)Method_System_Comparison_WarBoardStageLayoutEntity___ctor__);
    v257 = WarBoardData___c_TypeInfo->static_fields;
    v257->__9__77_0 = (struct System_Comparison_WarBoardStageLayoutEntity__o *)_9__77_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v257->__9__77_0,
      (System_Int32_array **)_9__77_0,
      v258,
      v259,
      v260,
      v261,
      v262,
      v263);
  }
  System_Array__Sort_BattleBuffData_BuffData_(
    (BattleBuffData_BuffData_array *)v7,
    (System_Comparison_T__o *)_9__77_0,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_WarBoardStageLayoutEntity___);
  this->fields.stageEntity = stage;
  p_fields = &this->fields;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)stage,
    v264,
    v265,
    v266,
    v267,
    v268,
    v269);
  if ( !v7 )
    goto LABEL_331;
  v882 = v7;
  v270 = *(_QWORD *)&v7->max_length;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_331;
  DataManager__GetMasterData_WarQuestSelectionMaster_(
    (DataManager_o *)Instance,
    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardStageDetailMaster___);
  v272 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v272 )
    goto LABEL_331;
  MasterData_WarQuestSelectionMaster = (struct WarBoardStageNpcMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)v272,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardStageNpcMaster___);
  this->fields.stageNpcMaster = MasterData_WarQuestSelectionMaster;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.stageNpcMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v274,
    v275,
    v276,
    v277,
    v278,
    v279);
  if ( !stage )
    goto LABEL_331;
  stageNpcMaster = this->fields.stageNpcMaster;
  v895 = v270;
  if ( !stageNpcMaster )
    goto LABEL_331;
  WarBoardStageEntities = WarBoardStageNpcMaster__GetWarBoardStageEntities(stageNpcMaster, stage->fields.id, 0LL);
  v286 = WarBoardData___c_TypeInfo;
  v287 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardStageEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v286 = WarBoardData___c_TypeInfo;
  }
  v288 = v286->static_fields;
  _9__77_1 = v288->__9__77_1;
  if ( !_9__77_1 )
  {
    if ( (BYTE3(v286->vtable._0_Equals.methodPtr) & 4) != 0 && !v286->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v286);
      v288 = WarBoardData___c_TypeInfo->static_fields;
    }
    v290 = (Il2CppObject *)v288->__9;
    _9__77_1 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B170CC(
                                                                System_Func_WarBoardStageNpcEntity__uint__TypeInfo,
                                                                v282,
                                                                v283,
                                                                v284,
                                                                v285);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_1,
      v290,
      Method_WarBoardData___c___ctor_b__77_1__,
      (const MethodInfo_2B6D600 *)Method_System_Func_WarBoardStageNpcEntity__uint___ctor__);
    v291 = WarBoardData___c_TypeInfo->static_fields;
    v291->__9__77_1 = _9__77_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v291->__9__77_1,
      (System_Int32_array **)_9__77_1,
      v292,
      v293,
      v294,
      v295,
      v296,
      v297);
  }
  v298 = (struct System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                           v287,
                                                                                           (System_Func_TSource__TKey__o *)_9__77_1,
                                                                                           (const MethodInfo_19C4EB4 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardStageNpcEntity__uint___);
  this->fields.npcEntityDict = v298;
  p_npcEntityDict = &this->fields.npcEntityDict;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.npcEntityDict,
    (System_Int32_array **)v298,
    v299,
    v300,
    v301,
    v302,
    v303,
    v304);
  v305 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v305 )
    goto LABEL_331;
  v306 = (WarBoardActionPointMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                          (DataManager_o *)v305,
                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarBoardActionPointMaster___);
  if ( !v306 )
    goto LABEL_331;
  WarBoardActionPointEntities = WarBoardActionPointMaster__GetWarBoardActionPointEntities(v306, stage->fields.id, 0LL);
  v312 = WarBoardData___c_TypeInfo;
  v313 = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardActionPointEntities;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v312 = WarBoardData___c_TypeInfo;
  }
  v314 = v312->static_fields;
  _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)v314->__9__77_2;
  if ( !_9__77_2 )
  {
    if ( (BYTE3(v312->vtable._0_Equals.methodPtr) & 4) != 0 && !v312->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v312);
      v314 = WarBoardData___c_TypeInfo->static_fields;
    }
    v316 = (Il2CppObject *)v314->__9;
    _9__77_2 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B170CC(
                                                                System_Func_WarBoardActionPointEntity__uint__TypeInfo,
                                                                v308,
                                                                v309,
                                                                v310,
                                                                v311);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__77_2,
      v316,
      Method_WarBoardData___c___ctor_b__77_2__,
      (const MethodInfo_2B6D600 *)Method_System_Func_WarBoardActionPointEntity__uint___ctor__);
    v317 = WarBoardData___c_TypeInfo->static_fields;
    v317->__9__77_2 = (struct System_Func_WarBoardActionPointEntity__uint__o *)_9__77_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v317->__9__77_2,
      (System_Int32_array **)_9__77_2,
      v318,
      v319,
      v320,
      v321,
      v322,
      v323);
  }
  v324 = (struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *)System_Linq_Enumerable__ToDictionary_WarBoardStageNpcEntity__uint_(
                                                                                              v313,
                                                                                              (System_Func_TSource__TKey__o *)_9__77_2,
                                                                                              (const MethodInfo_19C4EB4 *)Method_System_Linq_Enumerable_ToDictionary_WarBoardActionPointEntity__uint___);
  this->fields.actionPointEntityDict = v324;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.actionPointEntityDict,
    (System_Int32_array **)v324,
    v325,
    v326,
    v327,
    v328,
    v329,
    v330);
  npcEntityDict = this->fields.npcEntityDict;
  if ( !npcEntityDict )
    goto LABEL_331;
  Values = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
             npcEntityDict,
             (const MethodInfo_2D65BDC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v337 = WarBoardData___c_TypeInfo;
  v338 = (System_Collections_Generic_IEnumerable_TSource__o *)Values;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v337 = WarBoardData___c_TypeInfo;
  }
  v339 = v337->static_fields;
  _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v339->__9__77_3;
  if ( !_9__77_3 )
  {
    if ( (BYTE3(v337->vtable._0_Equals.methodPtr) & 4) != 0 && !v337->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v337);
      v339 = WarBoardData___c_TypeInfo->static_fields;
    }
    v341 = (Il2CppObject *)v339->__9;
    _9__77_3 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_WarBoardStageNpcEntity__int__TypeInfo,
                                                                                 v333,
                                                                                 v334,
                                                                                 v335,
                                                                                 v336);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_3,
      v341,
      Method_WarBoardData___c___ctor_b__77_3__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v342 = WarBoardData___c_TypeInfo->static_fields;
    v342->__9__77_3 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v342->__9__77_3,
      (System_Int32_array **)_9__77_3,
      v343,
      v344,
      v345,
      v346,
      v347,
      v348);
  }
  p_bgAnimationInfo_k__BackingField = (BattleServantConfConponent_o *)&this->fields._bgAnimationInfo_k__BackingField;
  v349 = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
           v338,
           (System_Func_TSource__int__o *)_9__77_3,
           (const MethodInfo_19BCDAC *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v350 = this->fields.npcEntityDict;
  this->fields._maxForceId_k__BackingField = v349;
  if ( !v350 )
    goto LABEL_331;
  v351 = System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___get_Values(
           v350,
           (const MethodInfo_2D65BDC *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Values__);
  v356 = WarBoardData___c_TypeInfo;
  v357 = (System_Collections_Generic_IEnumerable_TSource__o *)v351;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v356 = WarBoardData___c_TypeInfo;
  }
  v358 = v356->static_fields;
  _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v358->__9__77_4;
  if ( !_9__77_4 )
  {
    if ( (BYTE3(v356->vtable._0_Equals.methodPtr) & 4) != 0 && !v356->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v356);
      v358 = WarBoardData___c_TypeInfo->static_fields;
    }
    v360 = (Il2CppObject *)v358->__9;
    _9__77_4 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_WarBoardStageNpcEntity__int__TypeInfo,
                                                                                 v352,
                                                                                 v353,
                                                                                 v354,
                                                                                 v355);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__77_4,
      v360,
      Method_WarBoardData___c___ctor_b__77_4__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardStageNpcEntity__int___ctor__);
    v361 = WarBoardData___c_TypeInfo->static_fields;
    v361->__9__77_4 = (struct System_Func_WarBoardStageNpcEntity__int__o *)_9__77_4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v361->__9__77_4,
      (System_Int32_array **)_9__77_4,
      v362,
      v363,
      v364,
      v365,
      v366,
      v367);
  }
  this->fields._maxGroupId_k__BackingField = System_Linq_Enumerable__Max_BattleBuffData_BuffData_(
                                               v357,
                                               (System_Func_TSource__int__o *)_9__77_4,
                                               (const MethodInfo_19BCDAC *)Method_System_Linq_Enumerable_Max_WarBoardStageNpcEntity___);
  v368 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v368 )
    goto LABEL_331;
  v867 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                  (DataManager_o *)v368,
                                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (NpcFollowerMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  v877 = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  v880 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                                                                   v369,
                                                                                                   v370,
                                                                                                   v371,
                                                                                                   v372);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v880,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v875 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B170CC(
                                                                         System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                                         v373,
                                                                         v374,
                                                                         v375,
                                                                         v376);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v875,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor__);
  v881 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                   v377,
                                                                                                   v378,
                                                                                                   v379,
                                                                                                   v380);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v881,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v872 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B170CC(
                                                                         System_Collections_Generic_List_WarBoardItemData__TypeInfo,
                                                                         v381,
                                                                         v382,
                                                                         v383,
                                                                         v384);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v872,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardItemData___ctor__);
  v868 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B170CC(
                                                                         System_Collections_Generic_List_WarBoardTreasureData__TypeInfo,
                                                                         v385,
                                                                         v386,
                                                                         v387,
                                                                         v388);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v868,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTreasureData___ctor__);
  v873 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)sub_B170CC(
                                                                         System_Collections_Generic_List_WarBoardWallData__TypeInfo,
                                                                         v389,
                                                                         v390,
                                                                         v391,
                                                                         v392);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v873,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardWallData___ctor__);
  v871 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardEffectData__TypeInfo,
                                                                                                   v393,
                                                                                                   v394,
                                                                                                   v395,
                                                                                                   v396);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v871,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardEffectData___ctor__);
  v397 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v397 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v397->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  v888 = this;
  p_listUiData = (BattleServantConfConponent_o *)&this->fields.listUiData;
  if ( EncryptedPlayerPrefs__HasKey(WARBOARDDATA_SAVEDATA_KEY, 0LL) )
  {
    if ( !serverData )
      goto LABEL_331;
    v399 = (const MethodInfo *)WarBoardData_TypeInfo;
    if ( serverData->fields.progressType == 3 )
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave(v399);
    }
    else
    {
      if ( (WORD1(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
        v399 = (const MethodInfo *)WarBoardData_TypeInfo;
      }
      image = (System_String_o *)v399[2].klass->_1.image;
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
      v405 = System_Convert__FromBase64String(String, 0LL);
      v410 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                      MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                      v406,
                                                      v407,
                                                      v408,
                                                      v409);
      MiniMessagePack_MiniMessagePacker___ctor(v410, 0LL);
      if ( !v410 )
        goto LABEL_331;
      v411 = MiniMessagePack_MiniMessagePacker__UnpackClass_WarBoardData_WarBoardLocalSaveData_(
               v410,
               v405,
               (const MethodInfo_19DB9FC *)Method_MiniMessagePack_MiniMessagePacker_UnpackClass_WarBoardData_WarBoardLocalSaveData___);
      this->fields.localSaveData = v411;
      p_localSaveData = &this->fields.localSaveData;
      sub_B16F98(
        (BattleServantConfConponent_o *)p_localSaveData,
        (System_Int32_array **)v411,
        v413,
        v414,
        v415,
        v416,
        v417,
        v418);
      v419 = *p_localSaveData;
      v891 = p_localSaveData;
      if ( *p_localSaveData
        && v419->fields.questId == serverData->fields.questId
        && v419->fields.questPhase == serverData->fields.questPhase
        && v419->fields.stageId == serverData->fields.stageId )
      {
        if ( v419->fields.localSaveTiming == 6
          && (v419->fields.turn != serverData->fields.turn
           || v419->fields.turnForceId != serverData->fields.turnForceId
           || v419->fields.turnGroupId != serverData->fields.turnGroupId) )
        {
          v419->fields.localSaveTiming = 7;
        }
        v420 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !*p_localSaveData )
          goto LABEL_331;
        if ( !v420 )
          goto LABEL_331;
        v893 = WarBoardManager__CheckAndLoadCacheServerData(
                 (WarBoardManager_o *)v420,
                 serverData,
                 (*p_localSaveData)->fields.localSaveTiming,
                 0LL);
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
            if ( !v893 )
              goto LABEL_331;
            p_treasureInfo = (BattleServantConfConponent_o *)&v893->fields.treasureInfo;
            v465 = p_localSaveData;
            if ( v893->fields.treasureInfo )
            {
              if ( !*p_localSaveData )
                goto LABEL_331;
              treasureSaves = (*p_localSaveData)->fields.treasureSaves;
              if ( !treasureSaves )
                goto LABEL_331;
              if ( (int)treasureSaves->max_length >= 1 )
              {
                v889 = 0;
                v467 = 0LL;
                do
                {
                  v468 = sub_B170CC(WarBoardData___c__DisplayClass77_2_TypeInfo, v421, v422, v423, v424);
                  WarBoardData___c__DisplayClass77_2___ctor((WarBoardData___c__DisplayClass77_2_o *)v468, 0LL);
                  if ( v467 >= treasureSaves->max_length )
                    goto LABEL_332;
                  if ( !v468 )
                    goto LABEL_331;
                  v474 = (System_Int32_array **)treasureSaves->m_Items[v467];
                  *(_QWORD *)(v468 + 16) = v474;
                  v475 = v468 + 16;
                  sub_B16F98((BattleServantConfConponent_o *)(v468 + 16), v474, v430, v469, v470, v471, v472, v473);
                  klass = (System_Collections_Generic_IEnumerable_TSource__o *)p_treasureInfo->klass;
                  v481 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                              System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                                                              v477,
                                                                                              v478,
                                                                                              v479,
                                                                                              v480);
                  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                    v481,
                    (Il2CppObject *)v468,
                    Method_WarBoardData___c__DisplayClass77_2___ctor_b__8__,
                    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                  v482 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                           klass,
                           (System_Func_TSource__bool__o *)v481,
                           (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___);
                  if ( v482 )
                  {
                    if ( !*(_QWORD *)v475 )
                      goto LABEL_331;
                    if ( !*(_BYTE *)(*(_QWORD *)v475 + 20LL) )
                    {
                      LOBYTE(v482->fields.range) = 0;
                      v889 = 1;
                    }
                  }
                  ++v467;
                }
                while ( (__int64)v467 < (int)treasureSaves->max_length );
                v465 = p_localSaveData;
                if ( (v889 & 1) != 0 )
                {
                  v483 = WarBoardData___c_TypeInfo;
                  v484 = (System_Collections_Generic_IEnumerable_TSource__o *)p_treasureInfo->klass;
                  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
                    v483 = WarBoardData___c_TypeInfo;
                  }
                  v485 = v483->static_fields;
                  _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v485->__9__77_9;
                  if ( !_9__77_9 )
                  {
                    if ( (BYTE3(v483->vtable._0_Equals.methodPtr) & 4) != 0 && !v483->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(v483);
                      v485 = WarBoardData___c_TypeInfo->static_fields;
                    }
                    v487 = (Il2CppObject *)v485->__9;
                    _9__77_9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                                    System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                                                                    v421,
                                                                                                    v422,
                                                                                                    v423,
                                                                                                    v424);
                    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                      _9__77_9,
                      v487,
                      Method_WarBoardData___c___ctor_b__77_9__,
                      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
                    v488 = WarBoardData___c_TypeInfo->static_fields;
                    v488->__9__77_9 = (struct System_Func_WarBoardUserTreasureData__bool__o *)_9__77_9;
                    sub_B16F98(
                      (BattleServantConfConponent_o *)&v488->__9__77_9,
                      (System_Int32_array **)_9__77_9,
                      v489,
                      v490,
                      v491,
                      v492,
                      v493,
                      v494);
                  }
                  v495 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                           v484,
                           (System_Func_TSource__bool__o *)_9__77_9,
                           (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardUserTreasureData___);
                  v496 = (System_Int32_array **)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                  v495,
                                                  (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardUserTreasureData___);
                  p_treasureInfo->klass = (BattleServantConfConponent_c *)v496;
                  sub_B16F98(p_treasureInfo, v496, v497, v498, v499, v500, v501, v502);
                }
              }
            }
            if ( !*v465 )
              goto LABEL_331;
            wallSaves = (*v465)->fields.wallSaves;
            if ( !wallSaves )
              goto LABEL_331;
            if ( (int)wallSaves->max_length < 1 )
            {
LABEL_149:
              if ( !*p_localSaveData )
                goto LABEL_331;
              v519 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*p_localSaveData)->fields.squareIndexInfo,
                       (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData_SaveData___);
              System_Array__Resize_WarBoardSquareIndexData_(
                &v893->fields.squareIndexInfo,
                v519,
                (const MethodInfo_24FD6E4 *)Method_System_Array_Resize_WarBoardSquareIndexData___);
              if ( v519 >= 1 )
              {
                v522 = 0LL;
                v523 = v519;
                v524 = 8LL;
                while ( *v891 )
                {
                  squareIndexInfo = (*v891)->fields.squareIndexInfo;
                  if ( !squareIndexInfo )
                    break;
                  if ( v522 >= squareIndexInfo->max_length )
                    goto LABEL_332;
                  v526 = (unsigned int *)v893->fields.squareIndexInfo;
                  v527 = *(WarBoardSquareIndexData_SaveData_o **)((char *)&squareIndexInfo->obj.klass + v524 * 4);
                  v528 = (WarBoardSquareIndexData_o *)sub_B170CC(
                                                        WarBoardSquareIndexData_TypeInfo,
                                                        v429,
                                                        v430,
                                                        v520,
                                                        v521);
                  WarBoardSquareIndexData___ctor_28224588(v528, v527, 0LL);
                  if ( !v526 )
                    break;
                  if ( v528 )
                  {
                    v428 = sub_B170BC(v528, *(_QWORD *)(*(_QWORD *)v526 + 64LL));
                    if ( !v428 )
                    {
LABEL_333:
                      sub_B170F4(v428);
                      sub_B170A0();
                    }
                  }
                  if ( v522 >= v526[6] )
                    goto LABEL_332;
                  *(_QWORD *)&v526[v524] = v528;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v526[v524],
                    (System_Int32_array **)v528,
                    v430,
                    v529,
                    v530,
                    v531,
                    v532,
                    v533);
                  ++v522;
                  v524 += 2LL;
                  if ( (__int64)v522 >= v523 )
                    goto LABEL_160;
                }
                goto LABEL_331;
              }
LABEL_160:
              if ( !*v891 )
                goto LABEL_331;
              v402 = v893;
              v534 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)(*v891)->fields.bossBattleInfo,
                       (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData_SaveData___);
              System_Array__Resize_WarBoardSquareIndexData_(
                (WarBoardSquareIndexData_array **)&v893->fields.bossBattleInfo,
                v534,
                (const MethodInfo_24FD6E4 *)Method_System_Array_Resize_WarBoardBossBattleData___);
              if ( v534 >= 1 )
              {
                v537 = 0LL;
                v538 = v534;
                v539 = 8LL;
                do
                {
                  if ( !*v891 )
                    goto LABEL_331;
                  bossBattleInfo = (*v891)->fields.bossBattleInfo;
                  if ( !bossBattleInfo )
                    goto LABEL_331;
                  if ( v537 >= bossBattleInfo->max_length )
                    goto LABEL_332;
                  v541 = (unsigned int *)v893->fields.bossBattleInfo;
                  v542 = *(WarBoardBossBattleData_SaveData_o **)((char *)&bossBattleInfo->obj.klass + v539 * 4);
                  v543 = (WarBoardBossBattleData_o *)sub_B170CC(WarBoardBossBattleData_TypeInfo, v429, v430, v535, v536);
                  WarBoardBossBattleData___ctor_22580592(v543, v542, v544);
                  if ( !v541 )
                    goto LABEL_331;
                  if ( v543 )
                  {
                    v428 = sub_B170BC(v543, *(_QWORD *)(*(_QWORD *)v541 + 64LL));
                    if ( !v428 )
                      goto LABEL_333;
                  }
                  if ( v537 >= v541[6] )
                    goto LABEL_332;
                  *(_QWORD *)&v541[v539] = v543;
                  sub_B16F98(
                    (BattleServantConfConponent_o *)&v541[v539],
                    (System_Int32_array **)v543,
                    v430,
                    v545,
                    v546,
                    v547,
                    v548,
                    v549);
                  ++v537;
                  v539 += 2LL;
                }
                while ( (__int64)v537 < v538 );
                v402 = v893;
              }
              v7 = v882;
              goto LABEL_178;
            }
            v504 = 0LL;
            while ( 1 )
            {
              v505 = sub_B170CC(WarBoardData___c__DisplayClass77_3_TypeInfo, v421, v422, v423, v424);
              WarBoardData___c__DisplayClass77_3___ctor((WarBoardData___c__DisplayClass77_3_o *)v505, 0LL);
              if ( v504 >= wallSaves->max_length )
                break;
              if ( !v505 )
                goto LABEL_331;
              v511 = (System_Int32_array **)wallSaves->m_Items[v504];
              *(_QWORD *)(v505 + 16) = v511;
              sub_B16F98((BattleServantConfConponent_o *)(v505 + 16), v511, v430, v506, v507, v508, v509, v510);
              wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v893->fields.wallInfo;
              v517 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                          System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                                                          v513,
                                                                                          v514,
                                                                                          v515,
                                                                                          v516);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v517,
                (Il2CppObject *)v505,
                Method_WarBoardData___c__DisplayClass77_3___ctor_b__10__,
                (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
              v518 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                       wallInfo,
                       (System_Func_TSource__bool__o *)v517,
                       (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
              if ( v518 )
                WarBoardUserWallData__SetSaveData(
                  (WarBoardUserWallData_o *)v518,
                  *(WarBoardWallData_SaveData_o **)(v505 + 16),
                  0LL);
              if ( (__int64)++v504 >= (int)wallSaves->max_length )
                goto LABEL_149;
            }
          }
          else
          {
            v449 = 0LL;
            while ( 1 )
            {
              v450 = sub_B170CC(WarBoardData___c__DisplayClass77_1_TypeInfo, v421, v422, v423, v424);
              WarBoardData___c__DisplayClass77_1___ctor((WarBoardData___c__DisplayClass77_1_o *)v450, 0LL);
              if ( v449 >= itemSaves->max_length )
                break;
              if ( !v450 )
                goto LABEL_331;
              v456 = (System_Int32_array **)itemSaves->m_Items[v449];
              *(_QWORD *)(v450 + 16) = v456;
              sub_B16F98((BattleServantConfConponent_o *)(v450 + 16), v456, v430, v451, v452, v453, v454, v455);
              if ( !v893 )
                goto LABEL_331;
              getItemInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v893->fields.getItemInfo;
              v462 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                          System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                                                          v457,
                                                                                          v458,
                                                                                          v459,
                                                                                          v460);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v462,
                (Il2CppObject *)v450,
                Method_WarBoardData___c__DisplayClass77_1___ctor_b__7__,
                (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
              v463 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                       getItemInfo,
                       (System_Func_TSource__bool__o *)v462,
                       (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
              if ( v463 )
                WarBoardUserGetItemData__SetSaveData(
                  (WarBoardUserGetItemData_o *)v463,
                  *(WarBoardItemData_SaveData_o **)(v450 + 16),
                  0LL);
              if ( (__int64)++v449 >= (int)itemSaves->max_length )
                goto LABEL_117;
            }
          }
        }
        else
        {
          v426 = 0LL;
          while ( 1 )
          {
            v427 = sub_B170CC(WarBoardData___c__DisplayClass77_0_TypeInfo, v421, v422, v423, v424);
            WarBoardData___c__DisplayClass77_0___ctor((WarBoardData___c__DisplayClass77_0_o *)v427, 0LL);
            if ( v426 >= pieceSaves->max_length )
              break;
            if ( !v427 )
              goto LABEL_331;
            v436 = (System_Int32_array **)pieceSaves->m_Items[v426];
            *(_QWORD *)(v427 + 16) = v436;
            v437 = (WarBoardPieceData_SaveData_o **)(v427 + 16);
            sub_B16F98((BattleServantConfConponent_o *)(v427 + 16), v436, v430, v431, v432, v433, v434, v435);
            if ( !*(_QWORD *)(v427 + 16) || !v893 )
              goto LABEL_331;
            if ( *(_DWORD *)(*(_QWORD *)(v427 + 16) + 24LL) )
            {
              svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v893->fields.svtInfo;
              v443 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                          System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                                          v438,
                                                                                          v439,
                                                                                          v440,
                                                                                          v441);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v443,
                (Il2CppObject *)v427,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__6__,
                (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
              v444 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                       svtInfo,
                       (System_Func_TSource__bool__o *)v443,
                       (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
              if ( v444 )
                WarBoardUserServantData__SetSaveData((WarBoardUserServantData_o *)v444, *v437, 0LL);
            }
            else
            {
              masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v893->fields.masterInfo;
              v446 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                          System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                                                          v438,
                                                                                          v439,
                                                                                          v440,
                                                                                          v441);
              System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                v446,
                (Il2CppObject *)v427,
                Method_WarBoardData___c__DisplayClass77_0___ctor_b__5__,
                (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
              v447 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                       masterInfo,
                       (System_Func_TSource__bool__o *)v446,
                       (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
              if ( v447 )
                WarBoardUserMasterData__SetSaveData((WarBoardUserMasterData_o *)v447, *v437, 0LL);
            }
            if ( (__int64)++v426 >= (int)pieceSaves->max_length )
              goto LABEL_107;
          }
        }
LABEL_332:
        sub_B17100(v428, v429, v430);
        sub_B170A0();
      }
      v550 = WarBoardData_TypeInfo;
      if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
      }
      WarBoardData__DeleteLocalSave((const MethodInfo *)v550);
      *p_localSaveData = 0LL;
      sub_B16F98((BattleServantConfConponent_o *)p_localSaveData, 0LL, v551, v552, v553, v554, v555, v556);
    }
    v402 = serverData;
LABEL_178:
    v401 = v895;
    v400 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v400 )
      goto LABEL_331;
    goto LABEL_179;
  }
  v400 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !serverData )
    goto LABEL_331;
  v401 = v895;
  v402 = serverData;
  if ( !v400 )
    goto LABEL_331;
LABEL_179:
  WarBoardManager__InitializeLogic((WarBoardManager_o *)v400, v402, v402->fields.progressType != 3, 0LL);
  v557 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !v557 )
    goto LABEL_331;
  WarBoardManager__UpdateServerData((WarBoardManager_o *)v557, v402, 0LL);
  v894 = v402;
  if ( v401 >= 1 )
  {
    p_enemyDeck = &v402->fields.enemyDeck;
    v890 = 0;
    p_myDeck = &v402->fields.myDeck;
    v560 = 0LL;
    v561 = v401;
    v878 = v401;
    do
    {
      v562 = sub_B170CC(WarBoardData___c__DisplayClass77_4_TypeInfo, v429, v430, v558, v559);
      WarBoardData___c__DisplayClass77_4___ctor((WarBoardData___c__DisplayClass77_4_o *)v562, 0LL);
      if ( v560 >= v7->max_length )
        goto LABEL_332;
      if ( !v562 )
        goto LABEL_331;
      v568 = (System_Int32_array **)v7->m_Items[v560];
      *(_QWORD *)(v562 + 16) = v568;
      v569 = (WarBoardStageLayoutEntity_o **)(v562 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v562 + 16), v568, v430, v563, v564, v565, v566, v567);
      v570 = *(WarBoardStageLayoutEntity_o **)(v562 + 16);
      v575 = (WarBoardSquareData_o *)sub_B170CC(WarBoardSquareData_TypeInfo, v571, v572, v573, v574);
      WarBoardSquareData___ctor(v575, v570, roadEntities, 0LL);
      if ( v560 )
      {
        if ( (unsigned int)(v560 - 1) >= v7->max_length )
          goto LABEL_332;
        v576 = *((_QWORD *)&v7->max_length + v560);
        if ( !v576 )
          goto LABEL_331;
        v577 = *v569;
        if ( !*v569 )
          goto LABEL_331;
        if ( *(_DWORD *)(v576 + 20) == v577->fields.squareIndex )
          goto LABEL_196;
      }
      else
      {
        v577 = *v569;
        if ( !*v569 )
          goto LABEL_331;
      }
      throughCondId = v577->fields.throughCondId;
      if ( throughCondId )
      {
        if ( !v877 )
          goto LABEL_331;
        condGroup[0] = 0;
        if ( !WarBoardCommonReleaseMaster__IsOpen_22592744(v877, throughCondId, condGroup, v558) )
        {
          v583 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v875;
          if ( !v875 )
            goto LABEL_331;
          v584 = (EventMissionProgressRequest_Argument_ProgressData_o *)v575;
          v585 = (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__;
          goto LABEL_243;
        }
      }
      if ( !v880 )
        goto LABEL_331;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v880,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v575,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
      v577 = *v569;
      if ( !*v569 )
        goto LABEL_331;
LABEL_196:
      if ( v577->fields.isPiecePut )
      {
        questId = v402->fields.questId;
        questPhase = v402->fields.questPhase;
        if ( v577->fields.pieceIndex )
        {
          v579 = (System_Collections_Generic_IEnumerable_TSource__o *)v402->fields.svtInfo;
          v580 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                                      v429,
                                                                                      v430,
                                                                                      v558,
                                                                                      v559);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v580,
            (Il2CppObject *)v562,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__13__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
          v581 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   v579,
                   (System_Func_TSource__bool__o *)v580,
                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
          v582 = 0LL;
        }
        else
        {
          v586 = (System_Collections_Generic_IEnumerable_TSource__o *)v402->fields.masterInfo;
          v587 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                                                      v429,
                                                                                      v430,
                                                                                      v558,
                                                                                      v559);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v587,
            (Il2CppObject *)v562,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__12__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
          v582 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   v586,
                   (System_Func_TSource__bool__o *)v587,
                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
          v581 = 0LL;
        }
        v588 = *v569;
        if ( !*v569 )
          goto LABEL_331;
        v589 = p_enemyDeck;
        v896 = (WarBoardUserMasterData_o *)v582;
        if ( !v588->fields.forceId )
        {
          v589 = p_enemyDeck;
          if ( !v588->fields.pieceIndex )
            v589 = p_myDeck;
        }
        v590 = *v589;
        Type = Follower__getType(v588->fields.followerType, 0LL);
        IsNpc = Follower__IsNpc(Type, 0LL);
        progressType = v402->fields.progressType;
        v594 = *v569;
        v595 = IsNpc;
        v596 = *p_npcEntityDict;
        v601 = (WarBoardPieceData_o *)sub_B170CC(WarBoardPieceData_TypeInfo, v597, v598, v599, v600);
        v602 = v601;
        v603 = progressType == 3;
        if ( v595 )
        {
          WarBoardPieceData___ctor(v601, v594, (WarBoardUserServantData_o *)v581, v896, v590, v603, v596, v890, 0LL);
          if ( !v602 )
            goto LABEL_331;
          v402 = v894;
          v7 = v882;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_331;
          Entity_21217012 = NpcFollowerMaster__GetEntity_21217012(
                              Master_WarQuestSelectionMaster,
                              questId,
                              questPhase,
                              v602->fields._npcId_k__BackingField,
                              0LL);
          if ( Entity_21217012 )
          {
            v605 = Entity_21217012;
            v602->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_21217012, 0LL);
            v602->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v605, 0LL);
          }
          if ( WarBoardPieceData__get_isPlayerGroup(v602, 0LL) )
          {
            if ( !v867 )
              goto LABEL_331;
            if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                   v867,
                   &entity,
                   v602->fields._npcId_k__BackingField,
                   (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
            {
              if ( !entity )
                goto LABEL_331;
              NpcServantFollowerEntity__GetFollowerName_21218484(
                (NpcServantFollowerEntity_o *)entity,
                v602->fields._npcId_k__BackingField,
                questId,
                questPhase,
                &isChangeName,
                0LL);
              if ( isChangeName )
              {
                battleServant_k__BackingField = v602->fields._battleServant_k__BackingField;
                if ( !battleServant_k__BackingField )
                  goto LABEL_331;
                BattleServantData__ClearOverwriteServantName(battleServant_k__BackingField, 0LL);
              }
            }
          }
          if ( !v881 )
            goto LABEL_331;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v881,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v602,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
          ++v890;
        }
        else
        {
          WarBoardPieceData___ctor(v601, v594, (WarBoardUserServantData_o *)v581, v896, v590, v603, v596, -1, 0LL);
          if ( !v602 )
            goto LABEL_331;
          v402 = v894;
          v7 = v882;
          if ( WarBoardPieceData__get_isMaster(v602, 0LL) )
          {
            if ( !*p_masterExistsForce )
              goto LABEL_331;
            if ( !System_Collections_Generic_List_int___Contains(
                    *p_masterExistsForce,
                    v602->fields._forceId_k__BackingField,
                    (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
            {
              if ( !*p_masterExistsForce )
                goto LABEL_331;
              System_Collections_Generic_List_int___Add(
                *p_masterExistsForce,
                v602->fields._forceId_k__BackingField,
                (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            }
          }
          if ( !v881 )
            goto LABEL_331;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v881,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v602,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
        v561 = v878;
      }
      v607 = *v569;
      if ( !*v569 )
        goto LABEL_331;
      switch ( v607->fields.type )
      {
        case 2:
          v608 = (System_Collections_Generic_IEnumerable_TSource__o *)v402->fields.getItemInfo;
          v609 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_WarBoardUserGetItemData__bool__TypeInfo,
                                                                                      v429,
                                                                                      v430,
                                                                                      v558,
                                                                                      v559);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v609,
            (Il2CppObject *)v562,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__14__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserGetItemData__bool___ctor__);
          v610 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   v608,
                   (System_Func_TSource__bool__o *)v609,
                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserGetItemData___);
          v611 = *(WarBoardStageLayoutEntity_o **)(v562 + 16);
          v612 = (WarBoardUserGetItemData_o *)v610;
          v617 = (WarBoardItemData_o *)sub_B170CC(WarBoardItemData_TypeInfo, v613, v614, v615, v616);
          WarBoardItemData___ctor(v617, v611, v612, 0LL);
          v583 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v872;
          if ( !v872 )
            goto LABEL_331;
          v618 = &Method_System_Collections_Generic_List_WarBoardItemData__Add__;
          goto LABEL_242;
        case 3:
          v617 = (WarBoardItemData_o *)sub_B170CC(WarBoardEffectData_TypeInfo, v429, v430, v558, v559);
          WarBoardEffectData___ctor((WarBoardEffectData_o *)v617, v607, 0LL);
          v583 = v871;
          if ( !v871 )
            goto LABEL_331;
          v618 = &Method_System_Collections_Generic_List_WarBoardEffectData__Add__;
          goto LABEL_242;
        case 4:
          treasureInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v402->fields.treasureInfo;
          if ( !treasureInfo )
            goto LABEL_236;
          v620 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_WarBoardUserTreasureData__bool__TypeInfo,
                                                                                      v429,
                                                                                      v430,
                                                                                      v558,
                                                                                      v559);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v620,
            (Il2CppObject *)v562,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__11__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserTreasureData__bool___ctor__);
          if ( System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                 treasureInfo,
                 (System_Func_TSource__bool__o *)v620,
                 (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserTreasureData___) )
          {
            goto LABEL_244;
          }
          v607 = *v569;
LABEL_236:
          v617 = (WarBoardItemData_o *)sub_B170CC(WarBoardTreasureData_TypeInfo, v429, v430, v558, v559);
          WarBoardTreasureData___ctor((WarBoardTreasureData_o *)v617, v607, 0LL);
          v583 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v868;
          if ( !v868 )
            goto LABEL_331;
          v618 = &Method_System_Collections_Generic_List_WarBoardTreasureData__Add__;
LABEL_242:
          v585 = (const MethodInfo_2F25CD8 *)*v618;
          v584 = (EventMissionProgressRequest_Argument_ProgressData_o *)v617;
          break;
        case 5:
          v621 = (System_Collections_Generic_IEnumerable_TSource__o *)v402->fields.wallInfo;
          v622 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                                                      v429,
                                                                                      v430,
                                                                                      v558,
                                                                                      v559);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v622,
            (Il2CppObject *)v562,
            Method_WarBoardData___c__DisplayClass77_4___ctor_b__15__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
          v623 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                   v621,
                   (System_Func_TSource__bool__o *)v622,
                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
          v624 = *(WarBoardStageLayoutEntity_o **)(v562 + 16);
          v625 = (WarBoardUserWallData_o *)v623;
          v617 = (WarBoardItemData_o *)sub_B170CC(WarBoardWallData_TypeInfo, v626, v627, v628, v629);
          WarBoardWallData___ctor((WarBoardWallData_o *)v617, v624, v625, 0LL);
          v583 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v873;
          if ( !v873 )
            goto LABEL_331;
          v618 = &Method_System_Collections_Generic_List_WarBoardWallData__Add__;
          goto LABEL_242;
        default:
          goto LABEL_244;
      }
LABEL_243:
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(v583, v584, v585);
LABEL_244:
      ++v560;
    }
    while ( (__int64)v560 < v561 );
  }
  if ( !v880 )
    goto LABEL_331;
  v630 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v880,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v888->fields.squares = (struct WarBoardSquareData_array *)v630;
  sub_B16F98((BattleServantConfConponent_o *)&v888->fields.squares, v630, v631, v632, v633, v634, v635, v636);
  if ( !v875 )
    goto LABEL_331;
  v637 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v875,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  v888->fields.condSquares = (struct WarBoardSquareData_array *)v637;
  sub_B16F98((BattleServantConfConponent_o *)&v888->fields.condSquares, v637, v638, v639, v640, v641, v642, v643);
  if ( !v881 )
    goto LABEL_331;
  v644 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v881,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  v888->fields.pieces = (struct WarBoardPieceData_array *)v644;
  p_pieces = (System_Collections_Generic_IEnumerable_T__o **)&v888->fields.pieces;
  sub_B16F98((BattleServantConfConponent_o *)&v888->fields.pieces, v644, v646, v647, v648, v649, v650, v651);
  pieces = (BattleBuffData_BuffData_array *)v888->fields.pieces;
  v657 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B170CC(
                                                                     System_Comparison_WarBoardPieceData__TypeInfo,
                                                                     v653,
                                                                     v654,
                                                                     v655,
                                                                     v656);
  System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
    v657,
    (Il2CppObject *)v888,
    Method_WarBoardData_ComparePiece__,
    (const MethodInfo_25BFD48 *)Method_System_Comparison_WarBoardPieceData___ctor__);
  System_Array__Sort_BattleBuffData_BuffData_(
    pieces,
    (System_Comparison_T__o *)v657,
    (const MethodInfo_2506BD4 *)Method_System_Array_Sort_WarBoardPieceData___);
  if ( !v872 )
    goto LABEL_331;
  v658 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v872,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardItemData__ToArray__);
  v888->fields.items = (struct WarBoardItemData_array *)v658;
  sub_B16F98((BattleServantConfConponent_o *)&v888->fields.items, v658, v659, v660, v661, v662, v663, v664);
  if ( !v868 )
    goto LABEL_331;
  v665 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v868,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardTreasureData__ToArray__);
  v888->fields.treasures = (struct WarBoardTreasureData_array *)v665;
  sub_B16F98((BattleServantConfConponent_o *)&v888->fields.treasures, v665, v666, v667, v668, v669, v670, v671);
  if ( !v871 )
    goto LABEL_331;
  v672 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v871,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardEffectData__ToArray__);
  v888->fields.effects = (struct WarBoardEffectData_array *)v672;
  sub_B16F98((BattleServantConfConponent_o *)&v888->fields.effects, v672, v673, v674, v675, v676, v677, v678);
  if ( !v873 )
    goto LABEL_331;
  v679 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  v873,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardWallData__ToArray__);
  v888->fields.walls = (struct WarBoardWallData_array *)v679;
  sub_B16F98((BattleServantConfConponent_o *)&v888->fields.walls, v679, v680, v681, v682, v683, v684, v685);
  v888->fields.serverData = v402;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v888->fields.serverData,
    (System_Int32_array **)v402,
    v686,
    v687,
    v688,
    v689,
    v690,
    v691);
  if ( v402->fields.progressType == 3 )
    WarBoardData__InitPrevCondData(v888, v429);
  localSaveData = v888->fields.localSaveData;
  if ( localSaveData )
  {
    v695 = localSaveData->fields.pieceSaves;
    v897 = &v888->fields.localSaveData;
    if ( v695 )
    {
      if ( (int)v695->max_length >= 1 )
      {
        v696 = &WarBoardData___c__DisplayClass77_5_TypeInfo;
        v697 = 0LL;
        m_Items = v695->m_Items;
        v899 = localSaveData->fields.pieceSaves;
        do
        {
          v699 = sub_B170CC(*v696, v429, v430, v692, v693);
          WarBoardData___c__DisplayClass77_5___ctor((WarBoardData___c__DisplayClass77_5_o *)v699, 0LL);
          if ( v697 >= v695->max_length )
            goto LABEL_332;
          if ( !v699 )
            goto LABEL_331;
          v705 = (System_Int32_array **)m_Items[v697];
          *(_QWORD *)(v699 + 16) = v705;
          v706 = (WarBoardPieceData_SaveData_o **)(v699 + 16);
          sub_B16F98((BattleServantConfConponent_o *)(v699 + 16), v705, v430, v700, v701, v702, v703, v704);
          v707 = *p_pieces;
          v712 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                      System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                      v708,
                                                                                      v709,
                                                                                      v710,
                                                                                      v711);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v712,
            (Il2CppObject *)v699,
            Method_WarBoardData___c__DisplayClass77_5___ctor_b__16__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
          if ( !BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                  (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v707,
                  (System_Func_T__bool__o *)v712,
                  (const MethodInfo_18B6074 *)Method_BasicHelper_Any_WarBoardPieceData___) )
          {
            v717 = (System_Collections_Generic_IEnumerable_TSource__o *)v402->fields.svtInfo;
            v718 = m_Items;
            v719 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                        System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                                        v713,
                                                                                        v714,
                                                                                        v715,
                                                                                        v716);
            System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
              v719,
              (Il2CppObject *)v699,
              Method_WarBoardData___c__DisplayClass77_5___ctor_b__17__,
              (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
            v720 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                     v717,
                     (System_Func_TSource__bool__o *)v719,
                     (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
            v725 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v721, v722, v723, v724);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v725,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            if ( !v725 )
              goto LABEL_331;
            v726 = v696;
            System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
              (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v725,
              *p_pieces,
              (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
            if ( !p_fields->stageEntity )
              goto LABEL_331;
            id = p_fields->stageEntity->fields.id;
            v732 = *v706;
            v733 = (WarBoardPieceData_o *)sub_B170CC(WarBoardPieceData_TypeInfo, v727, v728, v729, v730);
            WarBoardPieceData___ctor_22206560(v733, id, (WarBoardUserServantData_o *)v720, v732, 0LL, -1, 0LL);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v725,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v733,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
            v734 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v725,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
            *p_pieces = (System_Collections_Generic_IEnumerable_T__o *)v734;
            sub_B16F98((BattleServantConfConponent_o *)p_pieces, v734, v735, v736, v737, v738, v739, v740);
            v402 = v894;
            v696 = v726;
            m_Items = v718;
            v695 = v899;
          }
          if ( !*v706 )
            goto LABEL_331;
          WarBoardPieceData_SaveData__SetOwner(*v706, v888, 0LL);
          if ( !*v706 )
            goto LABEL_331;
          WarBoardPieceData_SaveData__Load(*v706, 0LL);
        }
        while ( (__int64)++v697 < (int)v695->max_length );
      }
      if ( *v897 )
      {
        v741 = (*v897)->fields.itemSaves;
        if ( v741 )
        {
          max_length = v741->max_length;
          if ( max_length >= 1 )
          {
            v743 = 0;
            while ( v743 < max_length )
            {
              v744 = (__int64)v741 + 8 * (int)v743;
              v745 = *(WarBoardItemData_SaveData_o **)(v744 + 32);
              if ( !v745 )
                goto LABEL_331;
              WarBoardItemData_SaveData__SetOwner(*(WarBoardItemData_SaveData_o **)(v744 + 32), v888, 0LL);
              WarBoardItemData_SaveData__Load(v745, 0LL);
              max_length = v741->max_length;
              if ( (int)++v743 >= max_length )
                goto LABEL_274;
            }
            goto LABEL_332;
          }
LABEL_274:
          if ( *v897 )
          {
            v746 = (*v897)->fields.treasureSaves;
            if ( v746 )
            {
              v747 = v746->max_length;
              if ( v747 >= 1 )
              {
                v748 = 0;
                while ( v748 < v747 )
                {
                  v749 = (__int64)v746 + 8 * (int)v748;
                  v750 = *(WarBoardTreasureData_SaveData_o **)(v749 + 32);
                  if ( !v750 )
                    goto LABEL_331;
                  WarBoardTreasureData_SaveData__SetOwner(*(WarBoardTreasureData_SaveData_o **)(v749 + 32), v888, 0LL);
                  WarBoardTreasureData_SaveData__Load(v750, 0LL);
                  v747 = v746->max_length;
                  if ( (int)++v748 >= v747 )
                    goto LABEL_281;
                }
                goto LABEL_332;
              }
LABEL_281:
              if ( *v897 )
              {
                v751 = (*v897)->fields.wallSaves;
                if ( v751 )
                {
                  v752 = v751->max_length;
                  if ( v752 >= 1 )
                  {
                    v753 = 0;
                    while ( v753 < v752 )
                    {
                      v754 = (__int64)v751 + 8 * (int)v753;
                      v755 = *(WarBoardWallData_SaveData_o **)(v754 + 32);
                      if ( !v755 )
                        goto LABEL_331;
                      WarBoardWallData_SaveData__SetOwner(*(WarBoardWallData_SaveData_o **)(v754 + 32), v888, 0LL);
                      WarBoardWallData_SaveData__Load(v755, 0LL);
                      v752 = v751->max_length;
                      if ( (int)++v753 >= v752 )
                        goto LABEL_288;
                    }
                    goto LABEL_332;
                  }
LABEL_288:
                  if ( *v897 )
                  {
                    squareSaves = (*v897)->fields.squareSaves;
                    if ( squareSaves )
                    {
                      v757 = squareSaves->max_length;
                      if ( v757 >= 1 )
                      {
                        v758 = 0;
                        while ( v758 < v757 )
                        {
                          v759 = (__int64)squareSaves + 8 * (int)v758;
                          v760 = *(WarBoardSquareData_SaveData_o **)(v759 + 32);
                          if ( !v760 )
                            goto LABEL_331;
                          WarBoardSquareData_SaveData__SetOwner(
                            *(WarBoardSquareData_SaveData_o **)(v759 + 32),
                            v888,
                            0LL);
                          WarBoardSquareData_SaveData__Load(v760, 0LL);
                          v757 = squareSaves->max_length;
                          if ( (int)++v758 >= v757 )
                            goto LABEL_295;
                        }
                        goto LABEL_332;
                      }
LABEL_295:
                      if ( *v897 )
                      {
                        v888->fields.isPlayedHalfDeadMessage = (*v897)->fields.isPlayedHalfDeadMessage;
                        v761 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardEventData__TypeInfo, v429, v430, v692, v693);
                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                          v761,
                          (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardEventData___ctor__);
                        v888->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v761;
                        sub_B16F98(
                          (BattleServantConfConponent_o *)p_listEvent,
                          (System_Int32_array **)v761,
                          v762,
                          v763,
                          v764,
                          v765,
                          v766,
                          v767);
                        v773 = v888->fields.localSaveData;
                        if ( v773 )
                        {
                          eventSaves = v773->fields.eventSaves;
                          if ( eventSaves )
                          {
                            v775 = *(_QWORD *)&eventSaves->max_length;
                            if ( (int)v775 >= 1 )
                            {
                              v776 = 0LL;
                              while ( v776 < (unsigned int)v775 )
                              {
                                v777 = eventSaves->m_Items[v776];
                                v778 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*p_listEvent;
                                v779 = (WarBoardEventData_o *)sub_B170CC(
                                                                WarBoardEventData_TypeInfo,
                                                                v429,
                                                                v430,
                                                                v768,
                                                                v769);
                                WarBoardEventData___ctor_17981888(v779, v777, 0LL);
                                if ( !v778 )
                                  goto LABEL_331;
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                  v778,
                                  (EventMissionProgressRequest_Argument_ProgressData_o *)v779,
                                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
                                LODWORD(v775) = eventSaves->max_length;
                                if ( (__int64)++v776 >= (int)v775 )
                                  goto LABEL_303;
                              }
                              goto LABEL_332;
                            }
LABEL_303:
                            v780 = *v897;
                            if ( *v897 )
                            {
                              v888->fields.winCondId = v780->fields.winCondId;
                              latestPieceActionSquareIndexes = (System_Int32_array **)v780->fields.latestPieceActionSquareIndexes;
                              v888->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)latestPieceActionSquareIndexes;
                              sub_B16F98(
                                (BattleServantConfConponent_o *)p_latestPieceActionSquareIndexes,
                                latestPieceActionSquareIndexes,
                                v430,
                                v768,
                                v769,
                                v770,
                                v771,
                                v772);
                              v788 = v888->fields.localSaveData;
                              if ( v788 )
                              {
                                latestBattlePieceUniqueIndexes = (System_Int32_array **)v788->fields.latestBattlePieceUniqueIndexes;
                                p_latestBattlePieceUniqueIndexes->klass = (BattleServantConfConponent_c *)latestBattlePieceUniqueIndexes;
                                sub_B16F98(
                                  p_latestBattlePieceUniqueIndexes,
                                  latestBattlePieceUniqueIndexes,
                                  v782,
                                  v783,
                                  v784,
                                  v785,
                                  v786,
                                  v787);
                                v794 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardPrevCondData__TypeInfo, v790, v791, v792, v793);
                                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                  v794,
                                  (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPrevCondData___ctor__);
                                p_listPrevCond->klass = (BattleServantConfConponent_c *)v794;
                                sub_B16F98(
                                  p_listPrevCond,
                                  (System_Int32_array **)v794,
                                  v795,
                                  v796,
                                  v797,
                                  v798,
                                  v799,
                                  v800);
                                if ( *v897 )
                                {
                                  prevCondSaves = (*v897)->fields.prevCondSaves;
                                  if ( prevCondSaves )
                                  {
                                    v804 = *(_QWORD *)&prevCondSaves->max_length;
                                    if ( (int)v804 >= 1 )
                                    {
                                      v805 = 0LL;
                                      while ( v805 < (unsigned int)v804 )
                                      {
                                        v806 = prevCondSaves->m_Items[v805];
                                        v807 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listPrevCond->klass;
                                        v808 = (WarBoardPrevCondData_o *)sub_B170CC(
                                                                           WarBoardPrevCondData_TypeInfo,
                                                                           v429,
                                                                           v430,
                                                                           v801,
                                                                           v802);
                                        WarBoardPrevCondData___ctor_28160052(v808, v806, 0LL);
                                        if ( !v807 )
                                          goto LABEL_331;
                                        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                          v807,
                                          (EventMissionProgressRequest_Argument_ProgressData_o *)v808,
                                          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
                                        LODWORD(v804) = prevCondSaves->max_length;
                                        if ( (__int64)++v805 >= (int)v804 )
                                          goto LABEL_312;
                                      }
                                      goto LABEL_332;
                                    }
LABEL_312:
                                    v809 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_HoldReinforcementsData__TypeInfo, v429, v430, v801, v802);
                                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                      v809,
                                      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_HoldReinforcementsData___ctor__);
                                    p_reinforcementsSaveList->klass = (BattleServantConfConponent_c *)v809;
                                    sub_B16F98(
                                      p_reinforcementsSaveList,
                                      (System_Int32_array **)v809,
                                      v810,
                                      v811,
                                      v812,
                                      v813,
                                      v814,
                                      v815);
                                    if ( *v897 )
                                    {
                                      reinforcementsSaves = (*v897)->fields.reinforcementsSaves;
                                      if ( reinforcementsSaves )
                                      {
                                        v819 = *(_QWORD *)&reinforcementsSaves->max_length;
                                        if ( (int)v819 >= 1 )
                                        {
                                          v820 = 0LL;
                                          while ( v820 < (unsigned int)v819 )
                                          {
                                            v821 = reinforcementsSaves->m_Items[v820];
                                            v822 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_reinforcementsSaveList->klass;
                                            v823 = (HoldReinforcementsData_o *)sub_B170CC(
                                                                                 HoldReinforcementsData_TypeInfo,
                                                                                 v429,
                                                                                 v430,
                                                                                 v816,
                                                                                 v817);
                                            HoldReinforcementsData___ctor_28887752(v823, v821, 0LL);
                                            if ( !v822 )
                                              goto LABEL_331;
                                            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                              v822,
                                              (EventMissionProgressRequest_Argument_ProgressData_o *)v823,
                                              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
                                            LODWORD(v819) = reinforcementsSaves->max_length;
                                            if ( (__int64)++v820 >= (int)v819 )
                                              goto LABEL_319;
                                          }
                                          goto LABEL_332;
                                        }
LABEL_319:
                                        if ( *v897 )
                                        {
                                          v824 = (System_Int32_array **)System_Linq_Enumerable__ToList_int_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)(*v897)->fields.playedReinforcements,
                                                                          (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
                                          p_playedStageReinforcementsList->klass = (BattleServantConfConponent_c *)v824;
                                          sub_B16F98(
                                            p_playedStageReinforcementsList,
                                            v824,
                                            v825,
                                            v826,
                                            v827,
                                            v828,
                                            v829,
                                            v830);
                                          v835 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardUiData__TypeInfo, v831, v832, v833, v834);
                                          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                                            v835,
                                            (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardUiData___ctor__);
                                          p_listUiData->klass = (BattleServantConfConponent_c *)v835;
                                          sub_B16F98(
                                            p_listUiData,
                                            (System_Int32_array **)v835,
                                            v836,
                                            v837,
                                            v838,
                                            v839,
                                            v840,
                                            v841);
                                          if ( *v897 )
                                          {
                                            uiDataSaves = (*v897)->fields.uiDataSaves;
                                            if ( uiDataSaves )
                                            {
                                              v848 = *(_QWORD *)&uiDataSaves->max_length;
                                              if ( (int)v848 >= 1 )
                                              {
                                                v849 = 0LL;
                                                while ( v849 < (unsigned int)v848 )
                                                {
                                                  v850 = uiDataSaves->m_Items[v849];
                                                  v851 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)p_listUiData->klass;
                                                  v852 = (WarBoardUiData_o *)sub_B170CC(
                                                                               WarBoardUiData_TypeInfo,
                                                                               v429,
                                                                               v430,
                                                                               v842,
                                                                               v843);
                                                  WarBoardUiData___ctor_26378148(v852, v850, 0LL);
                                                  if ( !v851 )
                                                    goto LABEL_331;
                                                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                                                    v851,
                                                    (EventMissionProgressRequest_Argument_ProgressData_o *)v852,
                                                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
                                                  LODWORD(v848) = uiDataSaves->max_length;
                                                  if ( (__int64)++v849 >= (int)v848 )
                                                    goto LABEL_327;
                                                }
                                                goto LABEL_332;
                                              }
LABEL_327:
                                              if ( *v897 )
                                              {
                                                bgAnimationInfo = (System_Int32_array **)(*v897)->fields.bgAnimationInfo;
                                                p_bgAnimationInfo_k__BackingField->klass = (BattleServantConfConponent_c *)bgAnimationInfo;
                                                sub_B16F98(
                                                  p_bgAnimationInfo_k__BackingField,
                                                  bgAnimationInfo,
                                                  v430,
                                                  v842,
                                                  v843,
                                                  v844,
                                                  v845,
                                                  v846);
                                                v854 = *v897;
                                                if ( *v897 )
                                                {
                                                  v888->fields._ContinueConsumeType_k__BackingField = v854->fields.continueConsumeType;
                                                  v888->fields._IsContinue_k__BackingField = v854->fields.isContinue;
                                                  v888->fields._IsNextTurn_k__BackingField = v854->fields.isNextTurn;
                                                  v888->fields.localSaveTiming = v854->fields.localSaveTiming;
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
    sub_B170D4();
  }
  v855 = (WarBoardData_WarBoardLocalSaveData_o *)sub_B170CC(
                                                   WarBoardData_WarBoardLocalSaveData_TypeInfo,
                                                   v429,
                                                   v430,
                                                   v692,
                                                   v693);
  WarBoardData_WarBoardLocalSaveData___ctor_20740420(v855, v888, 0LL);
  v888->fields.localSaveData = v855;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v888->fields.localSaveData,
    (System_Int32_array **)v855,
    v856,
    v857,
    v858,
    v859,
    v860,
    v861);
}


void __fastcall WarBoardData__AddPlayedEventData(
        WarBoardData_o *this,
        WarBoardEventData_o *eventData,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x0

  if ( (byte_40F89DA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData__Add__, eventData);
    byte_40F89DA = 1;
  }
  listEvent = this->fields.listEvent;
  if ( !listEvent )
    sub_B170D4();
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listEvent,
    (EventMissionProgressRequest_Argument_ProgressData_o *)eventData,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardEventData__Add__);
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
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *v28; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  NpcFollowerMaster_o *v33; // x26
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x24
  __int64 v39; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  __int64 v42; // x8
  unsigned __int64 v43; // x23
  WarBoardUserServantData_o *v44; // x22
  struct System_Int32_array *reinforcementsIds; // x8
  struct System_Int32_array *v46; // x8
  __int64 v47; // x9
  WarBoardReinforcementsMaster_o *v48; // x19
  __int64 v49; // x3
  __int64 v50; // x4
  struct System_Collections_Generic_List_int__o *reinforcementsAppointmentSquareList; // x25
  WarBoardReinforcementsEntity_o *v52; // x20
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcEntityDict; // x24
  int32_t v54; // w21
  int32_t v55; // w25
  WarBoardPieceData_o *v56; // x27
  System_Collections_Generic_List_int__o *v57; // x0
  NpcFollowerEntity_o *Entity_21217012; // x0
  NpcFollowerEntity_o *v59; // x20
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct WarBoardPieceData_array **p_pieces; // x20
  struct WarBoardPieceData_array *v62; // x0
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
  struct WarBoardDataEntity_o *v75; // x0
  System_Int32_array **svtInfo; // x1
  __int64 v77; // x2
  __int64 v78; // x21
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x22
  System_Int32_array **v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  __int64 v87; // x3
  __int64 v88; // x4
  unsigned __int64 v89; // x23
  signed __int64 v90; // x24
  __int64 v91; // x25
  struct WarBoardData_WarBoardLocalSaveData_o *v92; // x8
  struct WarBoardPieceData_array *v93; // x9
  unsigned int *pieceSaves; // x27
  WarBoardPieceData_o *v95; // x22
  WarBoardPieceData_SaveData_o *v96; // x21
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *v103; // [xsp+8h] [xbp-B8h]
  WarBoardDataEntity_o *v104; // [xsp+10h] [xbp-B0h]
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // [xsp+18h] [xbp-A8h]
  System_Int32_array *v106; // [xsp+20h] [xbp-A0h]
  WarBoardUserServantData_array *v107; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *v108; // [xsp+30h] [xbp-90h]
  WarBoardUserServantData_o **m_Items; // [xsp+38h] [xbp-88h]
  int32_t questPhase; // [xsp+40h] [xbp-80h]
  int32_t questId; // [xsp+44h] [xbp-7Ch]
  WarBoardStageReinforcementsEntity_o *stageReinforcementsEntity; // [xsp+48h] [xbp-78h]
  int32_t *v113; // [xsp+50h] [xbp-70h]
  bool isChangeName; // [xsp+5Ch] [xbp-64h] BYREF
  UserServantEntity_o *v115; // [xsp+60h] [xbp-60h] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40F89D8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_NpcServantFollowerMaster___, serverData);
    sub_B16FFC(&Method_DataManager_GetMaster_NpcFollowerMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v12);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__RemoveAt__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v21);
    sub_B16FFC(&WarBoardPieceData_SaveData___TypeInfo, v22);
    sub_B16FFC(&WarBoardPieceData_SaveData_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v25);
    byte_40F89D8 = 1;
  }
  entity = 0LL;
  v115 = 0LL;
  isChangeName = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_NpcServantFollowerMaster___);
  v28 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_NpcFollowerMaster___);
  if ( !serverData )
    goto LABEL_60;
  v104 = serverData;
  v33 = (NpcFollowerMaster_o *)v28;
  questId = serverData->fields.questId;
  questPhase = serverData->fields.questPhase;
  v103 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)sub_B170CC(
                                                                             System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                             v29,
                                                                             v30,
                                                                             v31,
                                                                             v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v103,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  v34,
                                                                                                  v35,
                                                                                                  v36,
                                                                                                  v37);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !reinfoSvtInfo )
    goto LABEL_60;
  v42 = *(_QWORD *)&reinfoSvtInfo->max_length;
  v108 = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v38;
  if ( (int)v42 >= 1 )
  {
    v43 = 0LL;
    stageReinforcementsEntity = reinfoStage;
    v113 = &indexList->m_Items[1];
    m_Items = reinfoSvtInfo->m_Items;
    v106 = indexList;
    v107 = reinfoSvtInfo;
    do
    {
      if ( v43 >= (unsigned int)v42 )
      {
LABEL_61:
        sub_B17100(v39, v40, v41);
        sub_B170A0();
      }
      v44 = m_Items[v43];
      if ( v44 )
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
        if ( v43 >= indexList->max_length )
          goto LABEL_61;
        if ( v113[v43] < (signed int)reinforcementsIds->max_length )
          goto LABEL_43;
      }
      if ( v43 >= indexList->max_length )
        goto LABEL_61;
      v46 = reinfoStage->fields.reinforcementsIds;
      if ( !v46 )
        goto LABEL_60;
      v47 = v113[v43];
      if ( (unsigned int)v47 >= v46->max_length )
        goto LABEL_61;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_60;
      v48 = Master_WarQuestSelectionMaster;
      v39 = WarBoardReinforcementsMaster__TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              v46->m_Items[v47 + 1],
              0LL);
      reinforcementsAppointmentSquareList = this->fields.reinforcementsAppointmentSquareList;
      if ( !reinforcementsAppointmentSquareList )
        goto LABEL_60;
      v52 = entity;
      npcEntityDict = this->fields.npcEntityDict;
      if ( !reinforcementsAppointmentSquareList->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      if ( v43 >= indexList->max_length )
        goto LABEL_61;
      v54 = reinforcementsAppointmentSquareList->fields._items->m_Items[1];
      v55 = v113[v43];
      v56 = (WarBoardPieceData_o *)sub_B170CC(WarBoardPieceData_TypeInfo, v40, v41, v49, v50);
      WarBoardPieceData___ctor_22205312(v56, stageReinforcementsEntity, v52, v44, npcEntityDict, v43, v54, v55, 0LL);
      v57 = this->fields.reinforcementsAppointmentSquareList;
      if ( !v57 )
        goto LABEL_60;
      System_Collections_Generic_List_int___RemoveAt(
        v57,
        0,
        (const MethodInfo_2F121A8 *)Method_System_Collections_Generic_List_int__RemoveAt__);
      v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108;
      if ( !v56 || !v33 )
        goto LABEL_60;
      Master_WarQuestSelectionMaster = v48;
      Entity_21217012 = NpcFollowerMaster__GetEntity_21217012(
                          v33,
                          questId,
                          questPhase,
                          v56->fields._npcId_k__BackingField,
                          0LL);
      if ( Entity_21217012 )
      {
        v59 = Entity_21217012;
        v56->fields._npcImageSvtId_k__BackingField = NpcFollowerEntity__GetImageSvtId(Entity_21217012, 0LL);
        v56->fields._npcDispLimitCount_k__BackingField = NpcFollowerEntity__GetDispLimitCnt(v59, 0LL);
      }
      if ( WarBoardPieceData__get_isPlayerGroup(v56, 0LL) )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          goto LABEL_60;
        if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &v115,
               v56->fields._npcId_k__BackingField,
               (const MethodInfo_266F60C *)Method_DataMasterBase_NpcServantFollowerMaster__NpcServantFollowerEntity__long__TryGetEntity__) )
        {
          if ( !v115 )
            goto LABEL_60;
          NpcServantFollowerEntity__GetFollowerName_21218484(
            (NpcServantFollowerEntity_o *)v115,
            v56->fields._npcId_k__BackingField,
            questId,
            questPhase,
            &isChangeName,
            0LL);
          if ( isChangeName )
          {
            battleServant_k__BackingField = v56->fields._battleServant_k__BackingField;
            if ( !battleServant_k__BackingField )
              goto LABEL_60;
            BattleServantData__ClearOverwriteServantName(battleServant_k__BackingField, 0LL);
          }
        }
      }
      if ( !v108 )
        goto LABEL_60;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v108,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      reinfoStage = stageReinforcementsEntity;
      indexList = v106;
      reinfoSvtInfo = v107;
LABEL_43:
      LODWORD(v42) = reinfoSvtInfo->max_length;
    }
    while ( (__int64)++v43 < (int)v42 );
  }
  if ( !v103 )
    goto LABEL_60;
  p_pieces = &this->fields.pieces;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v103,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    v103,
    (System_Collections_Generic_IEnumerable_T__o *)v38,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardPieceData__AddRange__);
  v62 = (struct WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v103,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
  this->fields.pieces = v62;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.pieces,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v75 = this->fields.serverData;
  if ( !v75
    || (svtInfo = (System_Int32_array **)v104->fields.svtInfo,
        v75->fields.svtInfo = (struct WarBoardUserServantData_array *)svtInfo,
        sub_B16F98((BattleServantConfConponent_o *)&v75->fields, svtInfo, v69, v70, v71, v72, v73, v74),
        !*p_pieces)
    || (v78 = *(_QWORD *)&(*p_pieces)->max_length,
        localSaveData = this->fields.localSaveData,
        v80 = (System_Int32_array **)sub_B17014(WarBoardPieceData_SaveData___TypeInfo, (unsigned int)v78, v77),
        !localSaveData) )
  {
LABEL_60:
    sub_B170D4();
  }
  localSaveData->fields.pieceSaves = (struct WarBoardPieceData_SaveData_array *)v80;
  sub_B16F98((BattleServantConfConponent_o *)&localSaveData->fields.pieceSaves, v80, v81, v82, v83, v84, v85, v86);
  if ( (int)v78 >= 1 )
  {
    v89 = 0LL;
    v90 = (int)v78;
    v91 = 8LL;
    do
    {
      v92 = this->fields.localSaveData;
      if ( !v92 )
        goto LABEL_60;
      v93 = *p_pieces;
      if ( !*p_pieces )
        goto LABEL_60;
      if ( v89 >= v93->max_length )
        goto LABEL_61;
      pieceSaves = (unsigned int *)v92->fields.pieceSaves;
      v95 = *(WarBoardPieceData_o **)((char *)&v93->obj.klass + v91 * 4);
      v96 = (WarBoardPieceData_SaveData_o *)sub_B170CC(WarBoardPieceData_SaveData_TypeInfo, v40, v41, v87, v88);
      WarBoardPieceData_SaveData___ctor_20437896(v96, v95, 0LL);
      if ( !pieceSaves )
        goto LABEL_60;
      if ( v96 )
      {
        v39 = sub_B170BC(v96, *(_QWORD *)(*(_QWORD *)pieceSaves + 64LL));
        if ( !v39 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v89 >= pieceSaves[6] )
        goto LABEL_61;
      *(_QWORD *)&pieceSaves[v91] = v96;
      sub_B16F98(
        (BattleServantConfConponent_o *)&pieceSaves[v91],
        (System_Int32_array **)v96,
        v41,
        v97,
        v98,
        v99,
        v100,
        v101);
      ++v89;
      v91 += 2LL;
    }
    while ( (__int64)v89 < v90 );
  }
  if ( !v108 )
    goto LABEL_60;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      v108,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__AddSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WarBoardData___c__DisplayClass173_0_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v31; // x22
  System_Collections_Generic_List_int__o *v32; // x21
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F89DF & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__, v15);
    sub_B16FFC(&WarBoardData___c__DisplayClass173_0_TypeInfo, v16);
    byte_40F89DF = 1;
  }
  v17 = (WarBoardData___c__DisplayClass173_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass173_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   *(_QWORD *)&effectId,
                                                   method,
                                                   v4);
  WarBoardData___c__DisplayClass173_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  v17->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardSquareIndexData__bool__TypeInfo,
                                                                             v18,
                                                                             v19,
                                                                             v20,
                                                                             v21);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass173_0__AddSquareInfo_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v24,
                                                                     (const MethodInfo_18B650C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v31 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v32 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor_49346956(
    v32,
    v31,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  if ( !v32 )
LABEL_10:
    sub_B170D4();
  if ( !System_Collections_Generic_List_int___Contains(
          v32,
          effectId,
          (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Add(
      v32,
      effectId,
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    v33 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v32,
                                   (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v33;
    sub_B16F98(p_isExecute, v33, v34, v35, v36, v37, v38, v39);
  }
}


void __fastcall WarBoardData__BuffTurnProgressing(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v19; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__191_0; // x20
  Il2CppObject *v22; // x21
  struct WarBoardData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  WarBoardData___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  struct WarBoardData___c_StaticFields *v37; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__191_1; // x20
  Il2CppObject *v39; // x21
  struct WarBoardData___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  WarBoardData___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_T__o *v53; // x19
  struct WarBoardData___c_StaticFields *v54; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__191_2; // x20
  Il2CppObject *v56; // x21
  struct WarBoardData___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7

  if ( (byte_40F89EE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_BattleBuffData___ctor__, method);
    sub_B16FFC(&System_Action_BattleBuffData__TypeInfo, v6);
    sub_B16FFC(&Method_BasicHelper_ForEach_BattleBuffData___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_BattleBuffData___, v9);
    sub_B16FFC(&Method_System_Func_BattleBuffData__bool___ctor__, v10);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__, v11);
    sub_B16FFC(&System_Func_WarBoardPieceData__BattleBuffData__TypeInfo, v12);
    sub_B16FFC(&System_Func_BattleBuffData__bool__TypeInfo, v13);
    sub_B16FFC(&Method_WarBoardData___c__BuffTurnProgressing_b__191_0__, v14);
    sub_B16FFC(&Method_WarBoardData___c__BuffTurnProgressing_b__191_1__, v15);
    sub_B16FFC(&Method_WarBoardData___c__BuffTurnProgressing_b__191_2__, v16);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v17);
    byte_40F89EE = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v19 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v19 = WarBoardData___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__191_0;
  if ( !_9__191_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__191_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                  System_Func_WarBoardPieceData__BattleBuffData__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__191_0,
      v22,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_WarBoardPieceData__BattleBuffData___ctor__);
    v23 = WarBoardData___c_TypeInfo->static_fields;
    v23->__9__191_0 = (struct System_Func_WarBoardPieceData__BattleBuffData__o *)_9__191_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__191_0,
      (System_Int32_array **)_9__191_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__191_0,
          (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__BattleBuffData___);
  v35 = WarBoardData___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v35 = WarBoardData___c_TypeInfo;
  }
  v37 = v35->static_fields;
  _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v37->__9__191_1;
  if ( !_9__191_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v37 = WarBoardData___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__191_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_BattleBuffData__bool__TypeInfo,
                                                                                     v31,
                                                                                     v32,
                                                                                     v33,
                                                                                     v34);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__191_1,
      v39,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_BattleBuffData__bool___ctor__);
    v40 = WarBoardData___c_TypeInfo->static_fields;
    v40->__9__191_1 = (struct System_Func_BattleBuffData__bool__o *)_9__191_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__191_1,
      (System_Int32_array **)_9__191_1,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v36,
          (System_Func_TSource__bool__o *)_9__191_1,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_BattleBuffData___);
  v52 = WarBoardData___c_TypeInfo;
  v53 = (System_Collections_Generic_IEnumerable_T__o *)v47;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v52 = WarBoardData___c_TypeInfo;
  }
  v54 = v52->static_fields;
  _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v54->__9__191_2;
  if ( !_9__191_2 )
  {
    if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v54 = WarBoardData___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)v54->__9;
    _9__191_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_BattleBuffData__TypeInfo,
                                                                                       v48,
                                                                                       v49,
                                                                                       v50,
                                                                                       v51);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__191_2,
      v56,
      Method_WarBoardData___c__BuffTurnProgressing_b__191_2__,
      (const MethodInfo_24B7310 *)Method_System_Action_BattleBuffData___ctor__);
    v57 = WarBoardData___c_TypeInfo->static_fields;
    v57->__9__191_2 = (struct System_Action_BattleBuffData__o *)_9__191_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v57->__9__191_2,
      (System_Int32_array **)_9__191_2,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v53,
    (System_Action_T__o *)_9__191_2,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_BattleBuffData___);
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
  MethodInfo *v10; // x2
  int v11; // w8
  __int64 v12; // x21
  const MethodInfo_2A54F38 **v13; // x26
  unsigned int v14; // w27
  WarBoardPieceData_o *v15; // x22
  __int64 v16; // x23
  WebViewManager_o *Instance; // x0
  WarBoardManager_o *v18; // x24
  UnityEngine_Transform_o *transform; // x0
  const MethodInfo_29CF778 *v20; // x2
  EventMissionProgressRequest_Argument_ProgressData_o *CameraPerformanceTask; // x24
  const MethodInfo_2A54F38 **v22; // x19
  WebViewManager_o *v23; // x25
  __int64 v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x26
  WarBoardData_o *v31; // [xsp+8h] [xbp-68h]
  System_Nullable_Vector3__o v32; // [xsp+10h] [xbp-60h] BYREF
  System_Nullable_float__o v33; // 0:x3.8
  System_Nullable_Vector3__o v34; // 0:x0.16
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  v3 = taskList;
  if ( (byte_40F89A5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, taskList);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v7);
    byte_40F89A5 = 1;
  }
  AliveServantPieces = (__int64)WarBoardData__GetAliveServantPieces(this, (const MethodInfo *)taskList);
  if ( !AliveServantPieces )
LABEL_24:
    sub_B170D4();
  v11 = *(_DWORD *)(AliveServantPieces + 24);
  v12 = AliveServantPieces;
  if ( v11 >= 1 )
  {
    v13 = (const MethodInfo_2A54F38 **)&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance(*v13);
          if ( !*(_QWORD *)(v16 + 56) )
            goto LABEL_24;
          v18 = (WarBoardManager_o *)Instance;
          transform = UnityEngine_Component__get_transform(*(UnityEngine_Component_o **)(v16 + 56), 0LL);
          if ( !transform )
            goto LABEL_24;
          localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
          *(_QWORD *)&v34.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
          *(_QWORD *)&v34.fields.value.fields.x = &v32;
          *(_QWORD *)&v32.fields.value.fields.x = 0LL;
          *(_QWORD *)&v32.fields.value.fields.z = 0LL;
          System_Nullable_Vector3____ctor(v34, localPosition, v20);
          if ( !v18 )
            goto LABEL_24;
          v33 = 0LL;
          CameraPerformanceTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardManager__GetCameraPerformanceTask(
                                                                                           v18,
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
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
          }
          else
          {
            v22 = v13;
            v23 = SingletonMonoBehaviour_WebViewManager___get_Instance(*v13);
            AliveServantPieces = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v24);
            if ( !AliveServantPieces )
              goto LABEL_24;
            v30 = AliveServantPieces;
            if ( CameraPerformanceTask )
            {
              AliveServantPieces = sub_B170BC(CameraPerformanceTask, *(_QWORD *)(*(_QWORD *)AliveServantPieces + 64LL));
              if ( !AliveServantPieces )
              {
                sub_B170F4(0LL);
                sub_B170A0();
              }
            }
            if ( !*(_DWORD *)(v30 + 24) )
              break;
            *(_QWORD *)(v30 + 32) = CameraPerformanceTask;
            sub_B16F98(
              (BattleServantConfConponent_o *)(v30 + 32),
              (System_Int32_array **)CameraPerformanceTask,
              (System_String_array **)v10,
              v25,
              v26,
              v27,
              v28,
              v29);
            if ( !v23 )
              goto LABEL_24;
            WarBoardManager__AddTask((WarBoardManager_o *)v23, 0, (WarBoardTaskBase_array *)v30, 0LL);
            v13 = v22;
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
    sub_B17100(AliveServantPieces, v9, v10);
    sub_B170A0();
  }
}


bool __fastcall WarBoardData__CheckWinCond(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardCommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v13; // x3
  bool result; // w0
  int32_t maxForceId_k__BackingField; // w9
  int32_t maxGroupId_k__BackingField; // w8
  int v17; // w24
  int v18; // w23
  int32_t i; // w20
  int32_t v20; // w21
  WarBoardPieceData_array *Pieces_22598072; // x0
  int max_length; // w8
  WarBoardPieceData_array *v23; // x22
  unsigned int v24; // w25
  struct System_Collections_Generic_List_int__o *masterExistsForce; // x19
  WarBoardData___c_c *v26; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__98_0; // x20
  Il2CppObject *v29; // x21
  struct WarBoardData___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t condGroup; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40F89AA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int____66838552, v7);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v8);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardData___c__CheckWinCond_b__98_0__, v10);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v11);
    byte_40F89AA = 1;
  }
  condGroup = 0;
  if ( (this->fields.winCondId & 0x80000000) == 0 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_WarQuestSelectionMaster = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
    condGroup = -1;
    if ( Master_WarQuestSelectionMaster )
    {
      if ( !WarBoardCommonReleaseMaster__IsOpen_22592744(
              Master_WarQuestSelectionMaster,
              this->fields.winCondId,
              &condGroup,
              v13) )
        return 0;
      result = 1;
      this->fields.winCondGroup = condGroup;
      return result;
    }
LABEL_41:
    sub_B170D4();
  }
  maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  if ( maxForceId_k__BackingField < 1 )
  {
    v18 = 0;
    v17 = 0;
    goto LABEL_31;
  }
  maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
  v17 = 0;
  v18 = 0;
  for ( i = 1; i <= maxForceId_k__BackingField; ++i )
  {
    if ( (maxGroupId_k__BackingField & 0x80000000) != 0 )
      continue;
    v20 = 0;
    do
    {
      Pieces_22598072 = WarBoardData__GetPieces_22598072(this, i, v20, v3);
      if ( !Pieces_22598072 )
        goto LABEL_41;
      max_length = Pieces_22598072->max_length;
      v23 = Pieces_22598072;
      if ( max_length >= 1 )
      {
        v24 = 0;
        do
        {
          if ( v24 >= max_length )
          {
            sub_B17100(Pieces_22598072, method, v2);
            sub_B170A0();
          }
          Pieces_22598072 = (WarBoardPieceData_array *)v23->m_Items[v24];
          if ( !Pieces_22598072 )
            goto LABEL_41;
          if ( !BYTE4(Pieces_22598072->m_Items[3]) && !LOBYTE(Pieces_22598072->m_Items[11]) )
          {
            Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                           (WarBoardPieceData_o *)Pieces_22598072,
                                                           0LL);
            if ( ((unsigned __int8)Pieces_22598072 & 1) != 0 )
              ++v17;
            else
              ++v18;
          }
          max_length = v23->max_length;
        }
        while ( (int)++v24 < max_length );
      }
      maxGroupId_k__BackingField = this->fields._maxGroupId_k__BackingField;
      ++v20;
    }
    while ( v20 <= maxGroupId_k__BackingField );
    maxForceId_k__BackingField = this->fields._maxForceId_k__BackingField;
  }
LABEL_31:
  masterExistsForce = this->fields.masterExistsForce;
  v26 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v26 = WarBoardData___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__98_0 = static_fields->__9__98_0;
  if ( !_9__98_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__98_0 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, method, v2, v3, v4);
    System_Func_int__bool____ctor(
      _9__98_0,
      v29,
      Method_WarBoardData___c__CheckWinCond_b__98_0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v30 = WarBoardData___c_TypeInfo->static_fields;
    v30->__9__98_0 = _9__98_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->__9__98_0,
      (System_Int32_array **)_9__98_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  return (v17 == 0) & (System_Linq_Enumerable__Count_int__26035184(
                         (System_Collections_Generic_IEnumerable_TSource__o *)masterExistsForce,
                         (System_Func_TSource__bool__o *)_9__98_0,
                         (const MethodInfo_18D43F0 *)Method_System_Linq_Enumerable_Count_int____66838552) > 0) | (v18 == 0);
}


void __fastcall WarBoardData__ClearLastBattlePieceUniqueIndexes(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_UInt32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_40F89E2 & 1) == 0 )
  {
    sub_B16FFC(&uint___TypeInfo, method);
    byte_40F89E2 = 1;
  }
  v4 = (struct System_UInt32_array *)sub_B17014(uint___TypeInfo, 0LL, v2);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


int32_t __fastcall WarBoardData__ComparePiece(
        WarBoardData_o *this,
        WarBoardPieceData_o *a,
        WarBoardPieceData_o *b,
        const MethodInfo *method)
{
  _BOOL4 isMaster; // w0
  _BOOL4 isServant; // w21
  int32_t result; // w0
  int32_t forceId_k__BackingField; // w8
  int32_t v10; // w9
  int32_t groupId_k__BackingField; // w8
  int32_t index_k__BackingField; // w9
  int32_t v13; // w8
  int32_t v14; // w9
  int32_t v15; // w8
  int32_t v16; // w9

  if ( !a || (isMaster = WarBoardPieceData__get_isMaster(a, 0LL), !b) )
    sub_B170D4();
  if ( ((isMaster ^ WarBoardPieceData__get_isMaster(b, 0LL)) & 1) == 0 )
  {
    forceId_k__BackingField = a->fields._forceId_k__BackingField;
    v10 = b->fields._forceId_k__BackingField;
    result = v10 - forceId_k__BackingField;
    if ( v10 != forceId_k__BackingField )
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
  v13 = a->fields._forceId_k__BackingField;
  v14 = b->fields._forceId_k__BackingField;
  result = v14 - v13;
  if ( v14 == v13 )
  {
    v15 = a->fields._groupId_k__BackingField;
    v16 = b->fields._groupId_k__BackingField;
    result = v16 - v15;
    if ( v16 == v15 )
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
  __int64 v4; // x4
  WarBoardData_BattleParticipantInfo_o *v7; // x21

  if ( (byte_40F89F6 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardData_BattleParticipantInfo_TypeInfo, attackPieceData);
    byte_40F89F6 = 1;
  }
  v7 = (WarBoardData_BattleParticipantInfo_o *)sub_B170CC(
                                                 WarBoardData_BattleParticipantInfo_TypeInfo,
                                                 attackPieceData,
                                                 targetPieceData,
                                                 method,
                                                 v4);
  WarBoardData_BattleParticipantInfo___ctor(v7, attackPieceData, targetPieceData, 0LL);
  return v7;
}


void __fastcall WarBoardData__CreateContinueDeviceSaveData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_40F89A2 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B16FFC(&WarBoardData_TypeInfo, v2);
    byte_40F89A2 = 1;
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Delegate_o *v13; // x21
  WarBoardData___c_c *v14; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  WarBoardTaskBase_TaskCallback_o *_9__152_0; // x22
  Il2CppObject *v17; // x23
  struct WarBoardData___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  WarBoardData_o *v33; // x0
  int32_t v34; // w1
  const MethodInfo *v35; // x2

  if ( (byte_40F89D2 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, method);
    sub_B16FFC(&Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__, v5);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v6);
    sub_B16FFC(&WarBoardWaitTime_TypeInfo, v7);
    byte_40F89D2 = 1;
  }
  v8 = sub_B170CC(WarBoardWaitTime_TypeInfo, method, v2, v3, v4);
  WarBoardWaitTime___ctor((WarBoardWaitTime_o *)v8, 0.0, 0LL);
  if ( !v8 )
    sub_B170D4();
  v13 = *(System_Delegate_o **)(v8 + 40);
  v14 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v14 = WarBoardData___c_TypeInfo;
  }
  static_fields = v14->static_fields;
  _9__152_0 = static_fields->__9__152_0;
  if ( !_9__152_0 )
  {
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__152_0 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v9, v10, v11, v12);
    WarBoardTaskBase_TaskCallback___ctor(
      _9__152_0,
      v17,
      Method_WarBoardData___c__CreateEventBossUIDataTask_b__152_0__,
      0LL);
    v18 = WarBoardData___c_TypeInfo->static_fields;
    v18->__9__152_0 = _9__152_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__152_0,
      (System_Int32_array **)_9__152_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Int32_array **)System_Delegate__Combine(v13, (System_Delegate_o *)_9__152_0, 0LL);
  if ( v25 && *v25 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
  {
    v33 = (WarBoardData_o *)sub_B173C8(v25);
    return (WarBoardWaitTime_o *)WarBoardData__GetStageBossData(v33, v34, v35);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v25;
    sub_B16F98((BattleServantConfConponent_o *)(v8 + 40), v25, v26, v27, v28, v29, v30, v31);
    return (WarBoardWaitTime_o *)v8;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__DelSquareInfo(
        WarBoardData_o *this,
        int32_t squareIndex,
        int32_t effectId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  WarBoardData___c__DisplayClass174_0_o *v17; // x22
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *squareIndexInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x21
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  BattleServantConfConponent_o *p_isExecute; // x20
  System_Collections_Generic_IEnumerable_T__o *v31; // x22
  System_Collections_Generic_List_int__o *v32; // x21
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F89E0 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_WarBoardSquareIndexData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardSquareIndexData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_WarBoardSquareIndexData__bool__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor___66737200, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__, v15);
    sub_B16FFC(&WarBoardData___c__DisplayClass174_0_TypeInfo, v16);
    byte_40F89E0 = 1;
  }
  v17 = (WarBoardData___c__DisplayClass174_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass174_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   *(_QWORD *)&effectId,
                                                   method,
                                                   v4);
  WarBoardData___c__DisplayClass174_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_10;
  v17->fields.squareIndex = squareIndex;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_10;
  squareIndexInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.squareIndexInfo;
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardSquareIndexData__bool__TypeInfo,
                                                                             v18,
                                                                             v19,
                                                                             v20,
                                                                             v21);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v17,
    Method_WarBoardData___c__DisplayClass174_0__DelSquareInfo_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardSquareIndexData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     squareIndexInfo,
                                                                     (System_Func_T__bool__o *)v24,
                                                                     (const MethodInfo_18B650C *)Method_BasicHelper_Find_WarBoardSquareIndexData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  p_isExecute = (BattleServantConfConponent_o *)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v31 = *(System_Collections_Generic_IEnumerable_T__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v32 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v26,
                                                    v27,
                                                    v28,
                                                    v29);
  System_Collections_Generic_List_int____ctor_49346956(
    v32,
    v31,
    (const MethodInfo_2F0F98C *)Method_System_Collections_Generic_List_int___ctor___66737200);
  if ( !v32 )
LABEL_10:
    sub_B170D4();
  if ( System_Collections_Generic_List_int___Contains(
         v32,
         effectId,
         (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
  {
    System_Collections_Generic_List_int___Remove(
      v32,
      effectId,
      (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
    v33 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                   v32,
                                   (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
    p_isExecute->klass = (BattleServantConfConponent_c *)v33;
    sub_B16F98(p_isExecute, v33, v34, v35, v36, v37, v38, v39);
  }
}


void __fastcall WarBoardData__DeleteAfterContinueDeviceLocalSave(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  WarBoardData_c *v3; // x0
  System_String_o *AFTER_CONTINUE_DEVICE_FOR_WARBOARD_KEY; // x19

  if ( (byte_40F89A3 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B16FFC(&WarBoardData_TypeInfo, v2);
    byte_40F89A3 = 1;
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

  if ( (byte_40F89A1 & 1) == 0 )
  {
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v1);
    sub_B16FFC(&WarBoardData_TypeInfo, v2);
    byte_40F89A1 = 1;
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
  if ( (byte_40F89A7 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_40F89A7 = 1;
  }
  value = 0LL;
  actionPointEntityDict = (System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *)this->fields.actionPointEntityDict;
  if ( !actionPointEntityDict )
    sub_B170D4();
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    actionPointEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2D67B5C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__TryGetValue__);
  return (WarBoardActionPointEntity_o *)value;
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAliveEnemyServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v12; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__110_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F89B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__, v9);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v10);
    byte_40F89B6 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__110_0;
  if ( !_9__110_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__110_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__110_0,
      v15,
      Method_WarBoardData___c__GetAliveEnemyServantPieces_b__110_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v16 = WarBoardData___c_TypeInfo->static_fields;
    v16->__9__110_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__110_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__110_0,
      (System_Int32_array **)_9__110_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__110_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v23,
                                                                   (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAlivePieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v12; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__107_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F89B3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__GetAlivePieces_b__107_0__, v9);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v10);
    byte_40F89B3 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__107_0;
  if ( !_9__107_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__107_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__107_0,
      v15,
      Method_WarBoardData___c__GetAlivePieces_b__107_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v16 = WarBoardData___c_TypeInfo->static_fields;
    v16->__9__107_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__107_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__107_0,
      (System_Int32_array **)_9__107_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__107_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v23,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Collections_Generic_List_WarBoardPieceData__o *__fastcall WarBoardData__GetAlivePlayerGroupServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v12; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__109_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F89B5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_WarBoardPieceData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__, v9);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v10);
    byte_40F89B5 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__109_0;
  if ( !_9__109_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__109_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__109_0,
      v15,
      Method_WarBoardData___c__GetAlivePlayerGroupServantPieces_b__109_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v16 = WarBoardData___c_TypeInfo->static_fields;
    v16->__9__109_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__109_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__109_0,
      (System_Int32_array **)_9__109_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__109_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (System_Collections_Generic_List_WarBoardPieceData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                   v23,
                                                                   (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetAliveServantPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v12; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__108_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F89B4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__GetAliveServantPieces_b__108_0__, v9);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v10);
    byte_40F89B4 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__108_0;
  if ( !_9__108_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__108_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__108_0,
      v15,
      Method_WarBoardData___c__GetAliveServantPieces_b__108_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v16 = WarBoardData___c_TypeInfo->static_fields;
    v16->__9__108_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__108_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__108_0,
      (System_Int32_array **)_9__108_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__108_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v23,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass183_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20
  peRenderTexture_ChangeLayerObject_o *v18; // x0

  if ( (byte_40F89E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__, *(_QWORD *)&condId);
    sub_B16FFC(&Method_System_Predicate_WarBoardPrevCondData___ctor__, v7);
    sub_B16FFC(&System_Predicate_WarBoardPrevCondData__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass183_0_TypeInfo, v10);
    byte_40F89E6 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass183_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass183_0_TypeInfo,
                                                   *(_QWORD *)&condId,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass183_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.condId = condId,
        listPrevCond = this->fields.listPrevCond,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_WarBoardPrevCondData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_WarBoardData___c__DisplayClass183_0__GetClearedTurn_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardPrevCondData___ctor__),
        !listPrevCond) )
  {
    sub_B170D4();
  }
  v18 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listPrevCond,
          (System_Predicate_T__o *)v17,
          (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Find__);
  if ( v18 )
    return HIDWORD(v18->fields.gameObject);
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardSquareData_o *__fastcall WarBoardData__GetCondSquare(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass130_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_IEnumerable_TSource__o *condSquares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F89C4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardSquareData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardSquareData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass130_0_TypeInfo, v10);
    byte_40F89C4 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass130_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass130_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass130_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.squareIndex = squareIndex;
  condSquares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.condSquares;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardSquareData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass130_0__GetCondSquare_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   condSquares,
                                   (System_Func_TSource__bool__o *)v17,
                                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  System_Int32_array_array *v5; // x22
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_int__o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  const MethodInfo *v20; // x3
  __int64 v21; // x4
  int max_length; // w8
  unsigned int v23; // w25
  int32_t value; // w1
  System_Int32_array *v25; // x28
  unsigned __int64 v26; // x27
  WarBoardData___c__DisplayClass133_0_o *v27; // x22
  int32_t v28; // w1
  System_Collections_Generic_List_T__o *reinforcementsAppointmentSquareList; // x23
  System_Func_int__bool__o *v30; // x24
  System_Func_int__bool__o *v31; // x23
  System_Int32_array_array *v33; // [xsp+8h] [xbp-58h]

  v5 = squareIds;
  if ( (byte_40F89C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int___, squareIds);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__, v13);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__, v14);
    sub_B16FFC(&WarBoardData___c__DisplayClass133_0_TypeInfo, v15);
    byte_40F89C6 = 1;
  }
  v16 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    squareIds,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v5 )
    goto LABEL_27;
  max_length = v5->max_length;
  if ( max_length >= 1 )
  {
    v23 = 0;
    v33 = v5;
    while ( 1 )
    {
      if ( v23 >= max_length )
      {
LABEL_26:
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      v25 = v5->m_Items[v23];
      if ( !v25 )
        break;
      if ( (int)v25->max_length < 1 )
      {
        value = -1;
        if ( !v16 )
          break;
      }
      else
      {
        v26 = 0LL;
        do
        {
          v27 = (WarBoardData___c__DisplayClass133_0_o *)sub_B170CC(
                                                           WarBoardData___c__DisplayClass133_0_TypeInfo,
                                                           v18,
                                                           v19,
                                                           v20,
                                                           v21);
          WarBoardData___c__DisplayClass133_0___ctor(v27, 0LL);
          if ( v26 >= v25->max_length )
            goto LABEL_26;
          if ( !v27 )
            goto LABEL_27;
          v28 = v25->m_Items[v26 + 1];
          v27->fields.value = v28;
          if ( !WarBoardData__GetPiece_22604968(this, v28, v19)
            && !WarBoardData__GetUnusedTreasure(this, v27->fields.value, v19)
            && !WarBoardData__GetWall(this, v27->fields.value, 0, v20) )
          {
            reinforcementsAppointmentSquareList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsAppointmentSquareList;
            v30 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v18, v19, v20, v21);
            System_Func_int__bool____ctor(
              v30,
              (Il2CppObject *)v27,
              Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__0__,
              (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
            if ( !BasicHelper__Any_int_(
                    reinforcementsAppointmentSquareList,
                    (System_Func_T__bool__o *)v30,
                    (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___) )
            {
              v31 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v18, v19, v20, v21);
              System_Func_int__bool____ctor(
                v31,
                (Il2CppObject *)v27,
                Method_WarBoardData___c__DisplayClass133_0__GetDeploySquareIds_b__1__,
                (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
              if ( !BasicHelper__Any_int_(
                      (System_Collections_Generic_List_T__o *)v16,
                      (System_Func_T__bool__o *)v31,
                      (const MethodInfo_18B5C84 *)Method_BasicHelper_Any_int___) )
              {
                value = v27->fields.value;
                goto LABEL_20;
              }
            }
          }
          ++v26;
        }
        while ( (__int64)v26 < (int)v25->max_length );
        value = -1;
LABEL_20:
        v5 = v33;
        if ( !v16 )
          break;
      }
      System_Collections_Generic_List_int___Add(
        v16,
        value,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      max_length = v5->max_length;
      if ( (int)++v23 >= max_length )
        goto LABEL_24;
    }
LABEL_27:
    sub_B170D4();
  }
LABEL_24:
  if ( !v16 )
    goto LABEL_27;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_String_o *__fastcall WarBoardData__GetEditBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F89CF & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F89CF = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_11;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         stageEntity->fields.editBgmId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B170D4();
  }
  return 0LL;
}


WarBoardPieceData_array *__fastcall WarBoardData__GetEditableServantPieces(
        WarBoardData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v12; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__120_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F89BC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__GetEditableServantPieces_b__120_0__, v9);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v10);
    byte_40F89BC = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__120_0;
  if ( !_9__120_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__120_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__120_0,
      v15,
      Method_WarBoardData___c__GetEditableServantPieces_b__120_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v16 = WarBoardData___c_TypeInfo->static_fields;
    v16->__9__120_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__120_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__120_0,
      (System_Int32_array **)_9__120_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__120_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v23,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEffectData_o *__fastcall WarBoardData__GetEffect(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass142_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_IEnumerable_TSource__o *effects; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F89CB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardEffectData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardEffectData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass142_0_TypeInfo, v10);
    byte_40F89CB = 1;
  }
  v11 = (WarBoardData___c__DisplayClass142_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass142_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass142_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.squareIndex = squareIndex;
  effects = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.effects;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardEffectData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass142_0__GetEffect_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardEffectData__bool___ctor__);
  return (WarBoardEffectData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   effects,
                                   (System_Func_TSource__bool__o *)v17,
                                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardEffectData___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass105_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F89B1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&stageBossIndex);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass105_0_TypeInfo, v10);
    byte_40F89B1 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass105_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass105_0_TypeInfo,
                                                   *(_QWORD *)&stageBossIndex,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass105_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.stageBossIndex = stageBossIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass105_0__GetEventBossPiece_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v17,
                                  (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetExpensiveIcon(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x22
  int max_length; // w8
  unsigned int v6; // w24
  int32_t iconId; // w23
  int v8; // w19
  int32_t Rarity; // w20
  WarBoardTreasureData_SaveData_o *v10; // x21

  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_17;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_17;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v6 = 0;
    iconId = 0;
    v8 = -1;
    Rarity = -1;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v10 = treasureSaves->m_Items[v6];
      if ( !v10 )
        break;
      if ( v10->fields.isUse )
      {
        if ( WarBoardTreasureData_SaveData__get_Rarity(v10, 0LL) > Rarity
          || (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Rarity(v10, 0LL), (_DWORD)this == Rarity)
          && (this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v10, 0LL), (int)this > v8) )
        {
          iconId = v10->fields.iconId;
          Rarity = WarBoardTreasureData_SaveData__get_Rarity(v10, 0LL);
          this = (WarBoardData_o *)WarBoardTreasureData_SaveData__get_Effect(v10, 0LL);
          v8 = (int)this;
        }
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v6 >= max_length )
        return iconId + 1;
    }
LABEL_17:
    sub_B170D4();
  }
  iconId = 0;
  return iconId + 1;
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x22
  WarBoardData___c_c *v48; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__188_0; // x24
  Il2CppObject *v51; // x25
  struct WarBoardData___c_StaticFields *v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v63; // x22
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v75; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  int v77; // w26
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  __int64 v82; // x24
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **current; // x1
  HoldReinforcementsData_o **v90; // x22
  struct WarBoardStageEntity_o *stageEntity; // x8
  const MethodInfo *v92; // x2
  System_Int32_array *DeploySquareIds; // x0
  __int64 v94; // x1
  const MethodInfo *v95; // x3
  struct System_Int32_array *limitNums; // x9
  __int64 index_k__BackingField; // x2
  System_Int32_array *v98; // x23
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  struct System_Int32_array *v102; // x8
  __int64 v103; // x9
  _BOOL4 v104; // w25
  WebViewManager_o *Instance; // x0
  _BOOL8 IsPlayerTurn; // x0
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  __int64 v110; // x4
  __int64 v111; // x10
  int max_length; // w11
  int v113; // w10
  System_Collections_Generic_List_T__o *v114; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v115; // x26
  bool v116; // w0
  __int64 v117; // x1
  __int64 v118; // x2
  __int64 v119; // x3
  __int64 v120; // x4
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  Il2CppObject *v125; // x24
  System_Collections_Generic_List_int__o *v126; // x25
  __int64 v127; // x1
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  System_Collections_Generic_List_int__o *v131; // x26
  System_Int32_array **v132; // x0
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  __int64 v139; // x0
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x8
  System_Int32_array **v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  WebViewManager_o *v150; // x0
  __int64 v151; // x1
  __int64 v152; // x2
  void *monitor; // x8
  __int64 v154; // x9
  System_Collections_Generic_List_int__o *v155; // x0
  int v156; // w8
  __int64 v157; // x24
  __int64 v158; // x2
  __int64 v159; // x0
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  __int64 v166; // x2
  __int64 v167; // x0
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  __int64 v174; // x8
  WebViewManager_o *v175; // x0
  __int64 v176; // x1
  __int64 v177; // x2
  void *v178; // x8
  __int64 v179; // x9
  System_Collections_Generic_List_int__o *v180; // x0
  int v181; // w26
  int v182; // [xsp+14h] [xbp-CCh]
  int v183; // [xsp+1Ch] [xbp-C4h]
  _BYTE v185[36]; // [xsp+28h] [xbp-B8h] BYREF
  int v186; // [xsp+4Ch] [xbp-94h]
  System_Collections_Generic_List_Enumerator_T__o v187; // [xsp+50h] [xbp-90h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+68h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v189; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_40F89EB & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_ReinforcementsData___, reinforcementsDatas);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_HoldReinforcementsData___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__get_Current__, v15);
    sub_B16FFC(&Method_System_Func_ReinforcementsData__bool___ctor__, v16);
    sub_B16FFC(&Method_System_Func_HoldReinforcementsData__bool___ctor__, v17);
    sub_B16FFC(&System_Func_ReinforcementsData__bool__TypeInfo, v18);
    sub_B16FFC(&System_Func_HoldReinforcementsData__bool__TypeInfo, v19);
    sub_B16FFC(&int___TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_ReinforcementsData___ctor__, v29);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v30);
    sub_B16FFC(&System_Collections_Generic_List_ReinforcementsData__TypeInfo, v31);
    sub_B16FFC(&Method_System_Predicate_HoldReinforcementsData___ctor__, v32);
    sub_B16FFC(&System_Predicate_HoldReinforcementsData__TypeInfo, v33);
    sub_B16FFC(&ReinforcementsData_TypeInfo, v34);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v35);
    sub_B16FFC(&Method_WarBoardData___c__GetHoldReinforcements_b__188_0__, v36);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__, v37);
    sub_B16FFC(&WarBoardData___c__DisplayClass188_0_TypeInfo, v38);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__, v39);
    sub_B16FFC(&WarBoardData___c__DisplayClass188_1_TypeInfo, v40);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v41);
    byte_40F89EB = 1;
  }
  memset(&v189, 0, sizeof(v189));
  entity = 0LL;
  memset(&v187, 0, sizeof(v187));
  v186 = 0;
  v42 = (WarBoardData___c__DisplayClass188_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass188_0_TypeInfo,
                                                   reinforcementsDatas,
                                                   mst,
                                                   *(_QWORD *)&targetStageReinforcementsId,
                                                   method);
  WarBoardData___c__DisplayClass188_0___ctor(v42, 0LL);
  if ( !v42 )
    goto LABEL_123;
  v42->fields.targetStageReinforcementsId = targetStageReinforcementsId;
  reinforcementsSaveList = this->fields.reinforcementsSaveList;
  v48 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v48 = WarBoardData___c_TypeInfo;
  }
  static_fields = v48->static_fields;
  _9__188_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__188_0;
  if ( !_9__188_0 )
  {
    if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v48);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)static_fields->__9;
    _9__188_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_HoldReinforcementsData__TypeInfo,
                                                                           v43,
                                                                           v44,
                                                                           v45,
                                                                           v46);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__188_0,
      v51,
      Method_WarBoardData___c__GetHoldReinforcements_b__188_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_HoldReinforcementsData___ctor__);
    v52 = WarBoardData___c_TypeInfo->static_fields;
    v52->__9__188_0 = (struct System_Predicate_HoldReinforcementsData__o *)_9__188_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v52->__9__188_0,
      (System_Int32_array **)_9__188_0,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
  }
  if ( !reinforcementsSaveList )
    goto LABEL_123;
  System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
    (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)reinforcementsSaveList,
    (System_Predicate_T__o *)_9__188_0,
    (const MethodInfo_2F27828 *)Method_System_Collections_Generic_List_HoldReinforcementsData__RemoveAll__);
  v63 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ReinforcementsData__TypeInfo,
                                                                                                  v59,
                                                                                                  v60,
                                                                                                  v61,
                                                                                                  v62);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v63,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ReinforcementsData___ctor__);
  *reinforcementsDatas = (System_Collections_Generic_List_ReinforcementsData__o *)v63;
  sub_B16F98(
    (BattleServantConfConponent_o *)reinforcementsDatas,
    (System_Int32_array **)v63,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  v74 = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.reinforcementsSaveList;
  if ( (v42->fields.targetStageReinforcementsId & 0x80000000) == 0 )
  {
    v75 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_HoldReinforcementsData__bool__TypeInfo,
                                                                               v70,
                                                                               v71,
                                                                               v72,
                                                                               v73);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v75,
      (Il2CppObject *)v42,
      Method_WarBoardData___c__DisplayClass188_0__GetHoldReinforcements_b__1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
    v76 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v74,
            (System_Func_TSource__bool__o *)v75,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_HoldReinforcementsData___);
    v74 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                 v76,
                                                                 (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_HoldReinforcementsData___);
  }
  if ( !v74 )
LABEL_123:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v185,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v74,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v183 = 0;
  v77 = 0;
  v189 = *(System_Collections_Generic_List_Enumerator_T__o *)v185;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v189,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v82 = sub_B170CC(WarBoardData___c__DisplayClass188_1_TypeInfo, v78, v79, v80, v81);
    WarBoardData___c__DisplayClass188_1___ctor((WarBoardData___c__DisplayClass188_1_o *)v82, 0LL);
    if ( !v82 )
      sub_B170D4();
    current = (System_Int32_array **)v189.fields.current;
    *(_QWORD *)(v82 + 16) = v189.fields.current;
    v90 = (HoldReinforcementsData_o **)(v82 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v82 + 16), current, v83, v84, v85, v86, v87, v88);
    stageEntity = this->fields.stageEntity;
    if ( !stageEntity )
      sub_B170D4();
    if ( !*v90 )
      sub_B170D4();
    if ( !mst )
      sub_B170D4();
    if ( WarBoardStageReinforcementsMaster__TryGetEntity(
           mst,
           &entity,
           stageEntity->fields.id,
           (*v90)->fields._id_k__BackingField,
           0LL) )
    {
      if ( !entity )
        sub_B170D4();
      DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v92);
      if ( !entity )
        sub_B170D4();
      if ( !*v90 )
        sub_B170D4();
      limitNums = entity->fields.limitNums;
      if ( !limitNums )
        sub_B170D4();
      index_k__BackingField = (*v90)->fields._index_k__BackingField;
      if ( (unsigned int)index_k__BackingField >= limitNums->max_length )
      {
        sub_B17100(DeploySquareIds, v94, index_k__BackingField);
        sub_B170A0();
      }
      v98 = DeploySquareIds;
      if ( limitNums->m_Items[index_k__BackingField + 1] < 1 )
      {
        v104 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(this, entity->fields.id, index_k__BackingField, v95);
        if ( !ReinfocementsPieces )
          sub_B170D4();
        if ( !entity )
          sub_B170D4();
        if ( !*v90 )
          sub_B170D4();
        v102 = entity->fields.limitNums;
        if ( !v102 )
          sub_B170D4();
        v103 = (*v90)->fields._index_k__BackingField;
        if ( (unsigned int)v103 >= v102->max_length )
        {
          sub_B17100(ReinfocementsPieces, v100, v101);
          sub_B170A0();
        }
        v104 = v102->m_Items[v103 + 1] <= (signed int)ReinfocementsPieces->max_length;
      }
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        sub_B170D4();
      IsPlayerTurn = WarBoardManager__IsPlayerTurn((WarBoardManager_o *)Instance, 0LL);
      if ( !entity )
        sub_B170D4();
      if ( !v98 )
        sub_B170D4();
      if ( !*v90 )
        sub_B170D4();
      v111 = (*v90)->fields._index_k__BackingField;
      max_length = v98->max_length;
      if ( (int)v111 >= max_length )
      {
        v113 = 0;
      }
      else
      {
        if ( (unsigned int)v111 >= max_length )
        {
          sub_B17100(IsPlayerTurn, v107, v108);
          sub_B170A0();
        }
        v113 = v98->m_Items[v111 + 1] >= 0 && !v104;
      }
      if ( v113 & (IsPlayerTurn ^ (entity->fields.forceId != 0)) )
      {
        v182 = v77;
        v114 = (System_Collections_Generic_List_T__o *)*reinforcementsDatas;
        v115 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                    System_Func_ReinforcementsData__bool__TypeInfo,
                                                                                    v107,
                                                                                    v108,
                                                                                    v109,
                                                                                    v110);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v115,
          (Il2CppObject *)v82,
          Method_WarBoardData___c__DisplayClass188_1__GetHoldReinforcements_b__2__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_ReinforcementsData__bool___ctor__);
        v116 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                 v114,
                 (System_Func_T__bool__o *)v115,
                 (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_ReinforcementsData___);
        v77 = v182;
        if ( !v116 )
          goto LABEL_70;
        if ( !*reinforcementsDatas )
          sub_B170D4();
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v185,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)*reinforcementsDatas,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ReinforcementsData__GetEnumerator__);
        v187 = *(System_Collections_Generic_List_Enumerator_T__o *)v185;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v187,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__MoveNext__) )
        {
          v125 = v187.fields.current;
          if ( !v187.fields.current )
            sub_B170D4();
          if ( !*v90 )
            sub_B170D4();
          if ( LODWORD(v187.fields.current[1].klass) == (*v90)->fields._id_k__BackingField )
          {
            v126 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                               System_Collections_Generic_List_int__TypeInfo,
                                                               v121,
                                                               v122,
                                                               v123,
                                                               v124);
            System_Collections_Generic_List_int____ctor(
              v126,
              (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
            v131 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                               System_Collections_Generic_List_int__TypeInfo,
                                                               v127,
                                                               v128,
                                                               v129,
                                                               v130);
            System_Collections_Generic_List_int____ctor(
              v131,
              (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
            if ( !v126 )
              sub_B170D4();
            System_Collections_Generic_List_int___AddRange(
              v126,
              (System_Collections_Generic_IEnumerable_T__o *)v125[1].monitor,
              (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v90 )
              sub_B170D4();
            System_Collections_Generic_List_int___Add(
              v126,
              (*v90)->fields._index_k__BackingField,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            v132 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v126,
                                            (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
            v125[1].monitor = v132;
            sub_B16F98((BattleServantConfConponent_o *)&v125[1].monitor, v132, v133, v134, v135, v136, v137, v138);
            if ( !v131 )
              sub_B170D4();
            System_Collections_Generic_List_int___AddRange(
              v131,
              (System_Collections_Generic_IEnumerable_T__o *)v125[2].klass,
              (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( !*v90 )
              sub_B170D4();
            v142 = (*v90)->fields._index_k__BackingField;
            if ( (unsigned int)v142 >= v98->max_length )
            {
              sub_B17100(v139, v140, v141);
              sub_B170A0();
            }
            System_Collections_Generic_List_int___Add(
              v131,
              v98->m_Items[v142 + 1],
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            v143 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v131,
                                            (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
            v125[2].klass = (Il2CppClass *)v143;
            sub_B16F98((BattleServantConfConponent_o *)&v125[2], v143, v144, v145, v146, v147, v148, v149);
            v150 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
            if ( !v150 )
              sub_B170D4();
            monitor = v150[4].monitor;
            if ( !monitor )
              sub_B170D4();
            if ( !*v90 )
              sub_B170D4();
            v154 = (*v90)->fields._index_k__BackingField;
            if ( (unsigned int)v154 >= v98->max_length )
            {
              sub_B17100(v150, v151, v152);
              sub_B170A0();
            }
            v155 = (System_Collections_Generic_List_int__o *)*((_QWORD *)monitor + 29);
            if ( !v155 )
              sub_B170D4();
            System_Collections_Generic_List_int___Add(
              v155,
              v98->m_Items[v154 + 1],
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            if ( !*v90 )
              sub_B170D4();
            HoldReinforcementsData__DecreaseHoldNum(*v90, 0LL);
            break;
          }
        }
        *(_DWORD *)&v185[4 * v183 + 24] = 727;
        v77 = ++v186;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v187,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ReinforcementsData__Dispose__);
        if ( v77 )
        {
          v156 = v77 - 1;
          v183 = v77;
          if ( *(_DWORD *)&v185[4 * v77 + 20] != 727 )
            goto LABEL_70;
          v186 = --v77;
          v183 = v156;
        }
        else
        {
          v183 = 0;
LABEL_70:
          v157 = sub_B170CC(ReinforcementsData_TypeInfo, v117, v118, v119, v120);
          ReinforcementsData___ctor((ReinforcementsData_o *)v157, 0LL);
          if ( !entity )
            sub_B170D4();
          if ( !v157 )
            sub_B170D4();
          *(_DWORD *)(v157 + 16) = entity->fields.id;
          v159 = sub_B17014(int___TypeInfo, 1LL, v158);
          if ( !*v90 )
            sub_B170D4();
          if ( !v159 )
            sub_B170D4();
          if ( !*(_DWORD *)(v159 + 24) )
          {
            sub_B17100(v159, v159, v160);
            sub_B170A0();
          }
          *(_DWORD *)(v159 + 32) = (*v90)->fields._index_k__BackingField;
          *(_QWORD *)(v157 + 24) = v159;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v157 + 24),
            (System_Int32_array **)v159,
            v160,
            v161,
            v162,
            v163,
            v164,
            v165);
          v167 = sub_B17014(int___TypeInfo, 1LL, v166);
          if ( !*v90 )
            sub_B170D4();
          v174 = (*v90)->fields._index_k__BackingField;
          if ( (unsigned int)v174 >= v98->max_length )
          {
            sub_B17100(v167, v167, v168);
            sub_B170A0();
          }
          if ( !v167 )
            sub_B170D4();
          if ( !*(_DWORD *)(v167 + 24) )
          {
            sub_B17100(v167, v167, v168);
            sub_B170A0();
          }
          *(_DWORD *)(v167 + 32) = v98->m_Items[v174 + 1];
          *(_QWORD *)(v157 + 32) = v167;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v157 + 32),
            (System_Int32_array **)v167,
            v168,
            v169,
            v170,
            v171,
            v172,
            v173);
          if ( !*reinforcementsDatas )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*reinforcementsDatas,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v157,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
          v175 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v175 )
            sub_B170D4();
          v178 = v175[4].monitor;
          if ( !v178 )
            sub_B170D4();
          if ( !*v90 )
            sub_B170D4();
          v179 = (*v90)->fields._index_k__BackingField;
          if ( (unsigned int)v179 >= v98->max_length )
          {
            sub_B17100(v175, v176, v177);
            sub_B170A0();
          }
          v180 = (System_Collections_Generic_List_int__o *)*((_QWORD *)v178 + 29);
          if ( !v180 )
            sub_B170D4();
          System_Collections_Generic_List_int___Add(
            v180,
            v98->m_Items[v179 + 1],
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          if ( !*v90 )
            sub_B170D4();
          HoldReinforcementsData__DecreaseHoldNum(*v90, 0LL);
        }
      }
    }
  }
  *(_DWORD *)&v185[4 * v183 + 24] = 755;
  v181 = ++v186;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v189,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v181 && *(_DWORD *)&v185[4 * v181 + 20] == 755 )
    v186 = v181 - 1;
}


int32_t __fastcall WarBoardData__GetHoldReinforcementsCount(WarBoardData_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8

  if ( (byte_40F89D7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__, method);
    byte_40F89D7 = 1;
  }
  reinforcementsSaveList = this->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    sub_B170D4();
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
  const MethodInfo *v20; // x4
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v25; // x20
  WarBoardData___c_c *v26; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__123_0; // x21
  Il2CppObject *v29; // x22
  struct WarBoardData___c_StaticFields *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Func_int__bool__o *v42; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *rangeSearches; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F89BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___, *(_QWORD *)&start);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_int___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v10);
    sub_B16FFC(&Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__, v11);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v12);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v13);
    sub_B16FFC(&System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo, v14);
    sub_B16FFC(&Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__, v15);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__, v16);
    sub_B16FFC(&WarBoardData___c__DisplayClass123_0_TypeInfo, v17);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v18);
    byte_40F89BF = 1;
  }
  rangeSearches = 0LL;
  v19 = (WarBoardData___c__DisplayClass123_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass123_0_TypeInfo,
                                                   *(_QWORD *)&start,
                                                   *(_QWORD *)&range,
                                                   ignoreStart,
                                                   method);
  WarBoardData___c__DisplayClass123_0___ctor(v19, 0LL);
  if ( !v19 )
    sub_B170D4();
  v19->fields.start = start;
  v19->fields.ignoreStart = ignoreStart;
  rangeSearches = 0LL;
  WarBoardData__SearchInRangeSquares(this, start, range, &rangeSearches, v20);
  v25 = rangeSearches;
  if ( !rangeSearches )
    return 0LL;
  v26 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v26 = WarBoardData___c_TypeInfo;
  }
  static_fields = v26->static_fields;
  _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__123_0;
  if ( !_9__123_0 )
  {
    if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) != 0 && !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v29 = (Il2CppObject *)static_fields->__9;
    _9__123_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                  System_Func_WarBoardData_SquareRangeSearch__int__TypeInfo,
                                                                                  v21,
                                                                                  v22,
                                                                                  v23,
                                                                                  v24);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__123_0,
      v29,
      Method_WarBoardData___c__GetInRangeSquareIndecies_b__123_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardData_SquareRangeSearch__int___ctor__);
    v30 = WarBoardData___c_TypeInfo->static_fields;
    v30->__9__123_0 = (struct System_Func_WarBoardData_SquareRangeSearch__int__o *)_9__123_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v30->__9__123_0,
      (System_Int32_array **)_9__123_0,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_BattleLogicBuff_ReduceHpProcess_BuffInfo__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v25,
                                                               (System_Func_TSource__TResult__o *)_9__123_0,
                                                               (const MethodInfo_19C05C4 *)Method_System_Linq_Enumerable_Select_WarBoardData_SquareRangeSearch__int___);
  v42 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v38, v39, v40, v41);
  System_Func_int__bool____ctor(
    v42,
    (Il2CppObject *)v19,
    Method_WarBoardData___c__DisplayClass123_0__GetInRangeSquareIndecies_b__1__,
    (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
  v43 = System_Linq_Enumerable__Where_int_(
          v37,
          (System_Func_TSource__bool__o *)v42,
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v43,
           (const MethodInfo_19C4A28 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_int__BattleActionData_SideEffectData__o *v19; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  if ( (byte_40F89C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___, *(_QWORD *)&start);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___, v9);
    sub_B16FFC(&Method_System_Func_int__WarBoardSquareData___ctor__, v10);
    sub_B16FFC(&System_Func_int__WarBoardSquareData__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardData__GetInRangeSquares_b__124_0__, v12);
    byte_40F89C0 = 1;
  }
  result = (WarBoardSquareData_array *)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, method);
  if ( result )
  {
    v18 = (System_Collections_Generic_IEnumerable_TSource__o *)result;
    v19 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                   System_Func_int__WarBoardSquareData__TypeInfo,
                                                                   v14,
                                                                   v15,
                                                                   v16,
                                                                   v17);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v19,
      (Il2CppObject *)this,
      Method_WarBoardData__GetInRangeSquares_b__124_0__,
      (const MethodInfo_2B66764 *)Method_System_Func_int__WarBoardSquareData___ctor__);
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                                 v18,
                                                                 (System_Func_TSource__TResult__o *)v19,
                                                                 (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__WarBoardSquareData___);
    return (WarBoardSquareData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                         v20,
                                         (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardSquareData___);
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
WarBoardItemData_o *__fastcall WarBoardData__GetItem(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass135_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_IEnumerable_TSource__o *items; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F89C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardItemData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardItemData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass135_0_TypeInfo, v10);
    byte_40F89C7 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass135_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass135_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass135_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.squareIndex = squareIndex;
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardItemData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass135_0__GetItem_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardItemData__bool___ctor__);
  return (WarBoardItemData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 items,
                                 (System_Func_TSource__bool__o *)v17,
                                 (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardItemData___);
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
    sub_B170D4();
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
  if ( (byte_40F89A6 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__,
      *(_QWORD *)&forceId);
    byte_40F89A6 = 1;
  }
  value = 0LL;
  npcEntityDict = this->fields.npcEntityDict;
  if ( !npcEntityDict )
    sub_B170D4();
  System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity___TryGetValue(
    npcEntityDict,
    (forceId << 24) | (v4 << 16),
    &value,
    (const MethodInfo_2D67B5C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__TryGetValue__);
  return value;
}


int32_t __fastcall WarBoardData__GetPartySkillId(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardStageEntity_o *stageEntity; // x8

  stageEntity = this->fields.stageEntity;
  if ( !stageEntity )
    sub_B170D4();
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
  __int64 v26; // x3
  __int64 v27; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_40F89BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__, v12);
    sub_B16FFC(&WarBoardData___c__DisplayClass118_0_TypeInfo, v13);
    byte_40F89BA = 1;
  }
  v14 = sub_B170CC(
          WarBoardData___c__DisplayClass118_0_TypeInfo,
          *(_QWORD *)&start,
          *(_QWORD *)&range,
          ignoreStart,
          method);
  WarBoardData___c__DisplayClass118_0___ctor((WarBoardData___c__DisplayClass118_0_o *)v14, 0LL);
  v16 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v15);
  if ( !v14 )
    sub_B170D4();
  *(_QWORD *)(v14 + 16) = v16;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), v16, v17, v18, v19, v20, v21, v22);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v24,
                                                                             v25,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass118_0__GetPicesForRange_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v29,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v26; // x3
  __int64 v27; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0

  if ( (byte_40F89BB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&start);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v9);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__, v12);
    sub_B16FFC(&WarBoardData___c__DisplayClass119_0_TypeInfo, v13);
    byte_40F89BB = 1;
  }
  v14 = sub_B170CC(
          WarBoardData___c__DisplayClass119_0_TypeInfo,
          *(_QWORD *)&start,
          *(_QWORD *)&range,
          ignoreStart,
          method);
  WarBoardData___c__DisplayClass119_0___ctor((WarBoardData___c__DisplayClass119_0_o *)v14, 0LL);
  v16 = (System_Int32_array **)WarBoardData__GetInRangeSquareIndecies(this, start, range, ignoreStart, v15);
  if ( !v14 )
    sub_B170D4();
  *(_QWORD *)(v14 + 16) = v16;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), v16, v17, v18, v19, v20, v21, v22);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v24,
                                                                             v25,
                                                                             v26,
                                                                             v27);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v28,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass119_0__GetPicesForRangeIsAlive_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v29 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v29,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x20

  if ( (byte_40F89AC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v11);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__, v13);
    sub_B16FFC(&WarBoardData___c__DisplayClass100_0_TypeInfo, v14);
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v15);
    byte_40F89AC = 1;
  }
  v16 = (WarBoardData___c__DisplayClass100_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass100_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId,
                                                   *(_QWORD *)&index,
                                                   ignoreDead);
  WarBoardData___c__DisplayClass100_0___ctor(v16, 0LL);
  if ( !v16 )
    sub_B170D4();
  v16->fields.ignoreDead = ignoreDead;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  v16->fields.uniqueId = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v18,
                                                                             v19,
                                                                             v20,
                                                                             v21);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass100_0__GetPiece_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v22,
                                  (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceDispPriority(
        WarBoardData_o *this,
        WarBoardPieceData_o *piece,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x1
  WarBoardPieceData_array *AlivePieces; // x19
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v24; // x20

  if ( (byte_40F89CE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_FindIndex_WarBoardPieceData___, piece);
    sub_B16FFC(&Method_System_Predicate_WarBoardPieceData___ctor__, v7);
    sub_B16FFC(&System_Predicate_WarBoardPieceData__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass145_0_TypeInfo, v10);
    byte_40F89CE = 1;
  }
  v11 = sub_B170CC(WarBoardData___c__DisplayClass145_0_TypeInfo, piece, method, v3, v4);
  WarBoardData___c__DisplayClass145_0___ctor((WarBoardData___c__DisplayClass145_0_o *)v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  *(_QWORD *)(v11 + 16) = piece;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)piece, v12, v13, v14, v15, v16, v17);
  AlivePieces = WarBoardData__GetAlivePieces(this, v18);
  v24 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                   System_Predicate_WarBoardPieceData__TypeInfo,
                                                                   v20,
                                                                   v21,
                                                                   v22,
                                                                   v23);
  System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
    v24,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass145_0__GetPieceDispPriority_b__0__,
    (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardPieceData___ctor__);
  return System_Array__FindIndex_WarBoardPieceData_(
           AlivePieces,
           (System_Predicate_T__o *)v24,
           (const MethodInfo_20448A4 *)Method_System_Array_FindIndex_WarBoardPieceData___);
}


int32_t __fastcall WarBoardData__GetPieceMaxDispPriotiry(WarBoardData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_array *pieces; // x8

  pieces = this->fields.pieces;
  if ( !pieces )
    sub_B170D4();
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
  UnityEngine_Component_o *v13; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  bool activeInHierarchy; // w8

  if ( (byte_40F89AF & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&forceId);
    byte_40F89AF = 1;
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
    v13 = (UnityEngine_Component_o *)v11->fields.pieceComponent;
    if ( !v13 || (gameObject = UnityEngine_Component__get_gameObject(v13, 0LL)) == 0LL )
      sub_B170D4();
    activeInHierarchy = UnityEngine_GameObject__get_activeInHierarchy(gameObject, 0LL);
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
  uint32_t UniqueIndex; // w0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v21; // x20
  WarBoardData_SquareRangeSearch_o *v22; // x0

  if ( (byte_40F89AB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v9);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__, v11);
    sub_B16FFC(&WarBoardData___c__DisplayClass99_0_TypeInfo, v12);
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v13);
    byte_40F89AB = 1;
  }
  v14 = (WarBoardData___c__DisplayClass99_0_o *)sub_B170CC(
                                                  WarBoardData___c__DisplayClass99_0_TypeInfo,
                                                  *(_QWORD *)&forceId,
                                                  *(_QWORD *)&groupId,
                                                  *(_QWORD *)&index,
                                                  method);
  WarBoardData___c__DisplayClass99_0___ctor(v14, 0LL);
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  UniqueIndex = WarBoardPieceData__GetUniqueIndex(forceId, groupId, index, 0LL);
  if ( !v14 )
    sub_B170D4();
  v14->fields.uniqueId = UniqueIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v21 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v16,
                                                                             v17,
                                                                             v18,
                                                                             v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_WarBoardData___c__DisplayClass99_0__GetPiecePosition_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v22 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          pieces,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
  if ( v22 )
    return v22[2].fields.squareIndex;
  else
    return -1;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_22604968(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass101_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F89AD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass101_0_TypeInfo, v10);
    byte_40F89AD = 1;
  }
  v11 = (WarBoardData___c__DisplayClass101_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass101_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass101_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.squareIndex = squareIndex;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass101_0__GetPiece_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v17,
                                  (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_o *__fastcall WarBoardData__GetPiece_22645764(
        WarBoardData_o *this,
        uint32_t uniqueIndex,
        bool ignoreDead,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardData___c__DisplayClass102_0_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20

  if ( (byte_40F89AE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, *(_QWORD *)&uniqueIndex);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__, v10);
    sub_B16FFC(&WarBoardData___c__DisplayClass102_0_TypeInfo, v11);
    byte_40F89AE = 1;
  }
  v12 = (WarBoardData___c__DisplayClass102_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass102_0_TypeInfo,
                                                   *(_QWORD *)&uniqueIndex,
                                                   ignoreDead,
                                                   method,
                                                   v4);
  WarBoardData___c__DisplayClass102_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.uniqueIndex = uniqueIndex;
  v12->fields.ignoreDead = ignoreDead;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v13,
                                                                             v14,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass102_0__GetPiece_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)v18,
                                  (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces(
        WarBoardData_o *this,
        int32_t forceId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardData___c__DisplayClass116_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_40F89B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v7);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__, v10);
    sub_B16FFC(&WarBoardData___c__DisplayClass116_0_TypeInfo, v11);
    byte_40F89B8 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass116_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass116_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass116_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.forceIdOnly = forceId << 24;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v13,
                                                                             v14,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass116_0__GetPieces_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v19 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v19,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetPieces_22598072(
        WarBoardData_o *this,
        int32_t forceId,
        int32_t groupId,
        const MethodInfo *method)
{
  __int64 v4; // x4
  unsigned __int8 v5; // w19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  WarBoardData___c__DisplayClass117_0_o *v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0

  v5 = groupId;
  if ( (byte_40F89B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v8);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v9);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__, v11);
    sub_B16FFC(&WarBoardData___c__DisplayClass117_0_TypeInfo, v12);
    byte_40F89B9 = 1;
  }
  v13 = (WarBoardData___c__DisplayClass117_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass117_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId,
                                                   method,
                                                   v4);
  WarBoardData___c__DisplayClass117_0___ctor(v13, 0LL);
  if ( !v13 )
    sub_B170D4();
  v13->fields.forceAndGroup = (forceId << 24) | (v5 << 16);
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v14,
                                                                             v15,
                                                                             v16,
                                                                             v17);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)v13,
    Method_WarBoardData___c__DisplayClass117_0__GetPieces_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v20,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_String_o *__fastcall WarBoardData__GetPlayBgmName(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F89D0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40F89D0 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_11;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         stageEntity->fields.playBgmId,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return entity->fields.age;
LABEL_11:
    sub_B170D4();
  }
  return 0LL;
}


System_Int32_array *__fastcall WarBoardData__GetPlayReinforcements(WarBoardData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_40F89E9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_40F89E9 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           playedStageReinforcementsList,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardEventData_o *__fastcall WarBoardData__GetPlayedEventData(
        WarBoardData_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass164_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F89D9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData__Find__, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Predicate_WarBoardEventData___ctor__, v7);
    sub_B16FFC(&System_Predicate_WarBoardEventData__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass164_0_TypeInfo, v10);
    byte_40F89D9 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass164_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass164_0_TypeInfo,
                                                   *(_QWORD *)&eventId,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass164_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.eventId = eventId,
        listEvent = this->fields.listEvent,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_WarBoardEventData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_WarBoardData___c__DisplayClass164_0__GetPlayedEventData_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardEventData___ctor__),
        !listEvent) )
  {
    sub_B170D4();
  }
  return (WarBoardEventData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                  (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listEvent,
                                  (System_Predicate_T__o *)v17,
                                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardEventData__Find__);
}


WarBoardPieceData_o *__fastcall WarBoardData__GetPlayerMasterPiece(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v11; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__104_0; // x20
  Il2CppObject *v14; // x21
  struct WarBoardData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F89B0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___, method);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v6);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__, v8);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v9);
    byte_40F89B0 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v11 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v11 = WarBoardData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__104_0;
  if ( !_9__104_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__104_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__104_0,
      v14,
      Method_WarBoardData___c__GetPlayerMasterPiece_b__104_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v15 = WarBoardData___c_TypeInfo->static_fields;
    v15->__9__104_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__104_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__104_0,
      (System_Int32_array **)_9__104_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return (WarBoardPieceData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                  pieces,
                                  (System_Func_TSource__bool__o *)_9__104_0,
                                  (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPieceData___);
}


WarBoardPieceData_array *__fastcall WarBoardData__GetPlayerPieces(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v12; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__121_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F89BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__GetPlayerPieces_b__121_0__, v9);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v10);
    byte_40F89BD = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v12 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__121_0;
  if ( !_9__121_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__121_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                                     method,
                                                                                     v2,
                                                                                     v3,
                                                                                     v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__121_0,
      v15,
      Method_WarBoardData___c__GetPlayerPieces_b__121_0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
    v16 = WarBoardData___c_TypeInfo->static_fields;
    v16->__9__121_0 = (struct System_Func_WarBoardPieceData__bool__o *)_9__121_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__121_0,
      (System_Int32_array **)_9__121_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)_9__121_0,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v23,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
}


System_Int32_array *__fastcall WarBoardData__GetPrevCondIds(
        WarBoardData_o *this,
        System_Int32_array *commonReleaseIds,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x20
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  WarBoardCommonReleaseMaster_o *v18; // x21
  unsigned __int64 v19; // x23
  int v20; // w8
  void *v21; // x22
  unsigned int v22; // w25
  __int64 v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Collections_Generic_List_int__o *v25; // x0

  if ( (byte_40F89E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, commonReleaseIds);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_int___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v12);
    byte_40F89E4 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    commonReleaseIds,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !commonReleaseIds )
    goto LABEL_23;
  v17 = *(_QWORD *)&commonReleaseIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
    v19 = 0LL;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        goto LABEL_24;
      if ( !v18 )
        goto LABEL_23;
      Master_WarQuestSelectionMaster = WarBoardCommonReleaseMaster__GetList(
                                         v18,
                                         commonReleaseIds->m_Items[v19 + 1],
                                         v16);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_23;
      v20 = *((_DWORD *)Master_WarQuestSelectionMaster + 6);
      v21 = Master_WarQuestSelectionMaster;
      if ( v20 >= 1 )
        break;
LABEL_20:
      LODWORD(v17) = commonReleaseIds->max_length;
      if ( (__int64)++v19 >= (int)v17 )
        goto LABEL_21;
    }
    v22 = 0;
    while ( v22 < v20 )
    {
      v23 = *((_QWORD *)v21 + (int)v22 + 4);
      if ( !v23 )
        goto LABEL_23;
      if ( (unsigned int)(*(_DWORD *)(v23 + 28) - 7) <= 1 )
      {
        if ( !v13 )
          goto LABEL_23;
        System_Collections_Generic_List_int___Add(
          v13,
          *(_DWORD *)(v23 + 40),
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
        goto LABEL_20;
    }
LABEL_24:
    sub_B17100(Master_WarQuestSelectionMaster, v15, v16);
    sub_B170A0();
  }
LABEL_21:
  v24 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v13,
          (const MethodInfo_18D4DE0 *)Method_System_Linq_Enumerable_Distinct_int___);
  v25 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                    v24,
                                                    (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v25 )
LABEL_23:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x21
  const MethodInfo *v12; // x1
  WarBoardPieceData_array *AlivePieces; // x0
  WarBoardPieceData_o *v14; // x1
  __int64 v15; // x2
  int max_length; // w8
  WarBoardPieceData_array *v17; // x22
  unsigned int v18; // w23

  if ( (byte_40F89BE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, *(_QWORD *)&stageReinfoId);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v10);
    byte_40F89BE = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  *(_QWORD *)&stageReinfoId,
                                                                                                  *(_QWORD *)&reinfoIndex,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  AlivePieces = WarBoardData__GetAlivePieces(this, v12);
  if ( !AlivePieces )
    goto LABEL_15;
  max_length = AlivePieces->max_length;
  v17 = AlivePieces;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
      {
        sub_B17100(AlivePieces, v14, v15);
        sub_B170A0();
      }
      v14 = v17->m_Items[v18];
      if ( !v14 )
        break;
      if ( v14->fields._StageReinfoId_k__BackingField == stageReinfoId
        && v14->fields._ReinfoIndex_k__BackingField == reinfoIndex )
      {
        if ( !v11 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
      }
      max_length = v17->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_13:
  if ( !v11 )
    goto LABEL_15;
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v11,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
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
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardData___c__DisplayClass189_0_Fields *p_fields; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  const MethodInfo *v36; // x2
  System_Int32_array *DeploySquareIds; // x24
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x25
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  __int64 v49; // x26
  __int64 v50; // x1
  const MethodInfo *v51; // x3
  __int64 v52; // x4
  __int64 v53; // x8
  __int64 v54; // x2
  WebViewManager_o *Instance; // x0
  struct System_Int32_array *webViewBase; // x8
  struct System_Int32_array *titleLabel; // x8
  WarBoardPieceData_array *ReinfocementsPieces; // x0
  WarBoardPieceData_array *v59; // x8
  struct System_Int32_array *v60; // x9
  __int64 v61; // x10
  _BOOL4 v62; // w23
  _BOOL4 IsOnce; // w27
  const MethodInfo *v64; // x1
  System_Int32_array *PlayReinforcements; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  __int64 v69; // x4
  __int64 v70; // x21
  System_Func_int__bool__o *v71; // x22
  System_Int32_array *v72; // x28
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  _BOOL4 v79; // w28
  System_Collections_Generic_List_T__o *v80; // x19
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v85; // x21
  const MethodInfo *v86; // x3
  __int64 v87; // x8
  __int64 v88; // x9
  __int64 v89; // x8
  struct System_Int32_array *monitor; // x8
  __int64 v91; // x9
  System_Collections_Generic_List_int__o *v92; // x0
  __int64 v93; // x20
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x0
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  WarBoardData___c__DisplayClass189_0_Fields *v108; // [xsp+0h] [xbp-70h]
  System_Collections_Generic_List_int__o *v109; // [xsp+8h] [xbp-68h]
  System_Collections_Generic_List_int__o *v110; // [xsp+10h] [xbp-60h]

  if ( (byte_40F89EC & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, reinfoDatas);
    sub_B16FFC(&Method_BasicHelper_Any_ReinforcementsData___, v8);
    sub_B16FFC(&Method_System_Func_ReinforcementsData__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v10);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_ReinforcementsData__bool__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_ReinforcementsData__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v17);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_B16FFC(&ReinforcementsData_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__, v21);
    sub_B16FFC(&WarBoardData___c__DisplayClass189_0_TypeInfo, v22);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__, v23);
    sub_B16FFC(&WarBoardData___c__DisplayClass189_1_TypeInfo, v24);
    byte_40F89EC = 1;
  }
  v25 = (WarBoardData___c__DisplayClass189_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass189_0_TypeInfo,
                                                   reinfoDatas,
                                                   mst,
                                                   *(_QWORD *)&targetStageReinforcementsId,
                                                   method);
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
    v110 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v28,
                                                       v29,
                                                       v30,
                                                       v31);
    System_Collections_Generic_List_int____ctor(
      v110,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    v109 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                       System_Collections_Generic_List_int__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34,
                                                       v35);
    System_Collections_Generic_List_int____ctor(
      v109,
      (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
    if ( !p_fields->stageEntity )
      goto LABEL_51;
    v108 = &v25->fields;
    DeploySquareIds = WarBoardData__GetDeploySquareIds(this, p_fields->stageEntity->fields.squareIds, v36);
    v42 = sub_B170CC(WarBoardData___c__DisplayClass189_1_TypeInfo, v38, v39, v40, v41);
    WarBoardData___c__DisplayClass189_1___ctor((WarBoardData___c__DisplayClass189_1_o *)v42, 0LL);
    if ( !v42 )
      goto LABEL_51;
    *(_QWORD *)(v42 + 24) = v25;
    v49 = v42 + 24;
    sub_B16F98((BattleServantConfConponent_o *)(v42 + 24), (System_Int32_array **)v25, v43, v44, v45, v46, v47, v48);
    v53 = *(_QWORD *)(v42 + 24);
    *(_DWORD *)(v42 + 16) = 0;
    if ( !v53 )
      goto LABEL_51;
    v54 = 0LL;
    while ( 1 )
    {
      Instance = *(WebViewManager_o **)(v53 + 16);
      if ( !Instance )
        goto LABEL_51;
      webViewBase = (struct System_Int32_array *)Instance->fields.webViewBase;
      if ( !webViewBase )
        goto LABEL_51;
      if ( (int)v54 >= (signed int)webViewBase->max_length )
        break;
      titleLabel = (struct System_Int32_array *)Instance->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_51;
      if ( (unsigned int)v54 >= titleLabel->max_length )
        goto LABEL_52;
      if ( titleLabel->m_Items[(int)v54 + 1] < 1 )
      {
        v62 = 0;
      }
      else
      {
        ReinfocementsPieces = WarBoardData__GetReinfocementsPieces(
                                this,
                                *((_DWORD *)&Instance->fields.SingletonMonoBehaviour_WebViewManager__Fields + 1),
                                v54,
                                v51);
        if ( !ReinfocementsPieces )
          goto LABEL_51;
        if ( !*(_QWORD *)v49 )
          goto LABEL_51;
        v59 = ReinfocementsPieces;
        Instance = *(WebViewManager_o **)(*(_QWORD *)v49 + 16LL);
        if ( !Instance )
          goto LABEL_51;
        v60 = (struct System_Int32_array *)Instance->fields.titleLabel;
        if ( !v60 )
          goto LABEL_51;
        v61 = *(int *)(v42 + 16);
        if ( (unsigned int)v61 >= v60->max_length )
          goto LABEL_52;
        v62 = v60->m_Items[v61 + 1] <= (signed int)v59->max_length;
      }
      IsOnce = WarBoardStageReinforcementsEntity__IsOnce((WarBoardStageReinforcementsEntity_o *)Instance, 0LL);
      PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v64);
      v70 = *(_QWORD *)v49;
      if ( !*(_QWORD *)v49 )
        goto LABEL_51;
      v71 = *(System_Func_int__bool__o **)(v70 + 24);
      v72 = PlayReinforcements;
      if ( !v71 )
      {
        v71 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v66, v67, v68, v69);
        System_Func_int__bool____ctor(
          v71,
          (Il2CppObject *)v70,
          Method_WarBoardData___c__DisplayClass189_0__GetReinforcements_b__0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
        *(_QWORD *)(v70 + 24) = v71;
        sub_B16F98((BattleServantConfConponent_o *)(v70 + 24), (System_Int32_array **)v71, v73, v74, v75, v76, v77, v78);
      }
      v79 = BasicHelper__Any_int__25910576(
              v72,
              (System_Func_T__bool__o *)v71,
              (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
      v80 = (System_Collections_Generic_List_T__o *)*reinfoDatas;
      v85 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_ReinforcementsData__bool__TypeInfo,
                                                                                 v81,
                                                                                 v82,
                                                                                 v83,
                                                                                 v84);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v85,
        (Il2CppObject *)v42,
        Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__1__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_ReinforcementsData__bool___ctor__);
      Instance = (WebViewManager_o *)BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                                       v80,
                                       (System_Func_T__bool__o *)v85,
                                       (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_ReinforcementsData___);
      if ( !DeploySquareIds )
        goto LABEL_51;
      v87 = *(int *)(v42 + 16);
      if ( (unsigned int)v87 >= DeploySquareIds->max_length )
        goto LABEL_52;
      if ( (unsigned __int8)Instance & 1 | (IsOnce && v79 || v62 || DeploySquareIds->m_Items[v87 + 1] < 0) )
      {
        if ( !*(_QWORD *)v49 )
          goto LABEL_51;
        v88 = *(_QWORD *)(*(_QWORD *)v49 + 16LL);
        if ( !v88 )
          goto LABEL_51;
        WarBoardData__SaveHoldReinforcements(this, *(_DWORD *)(v88 + 20), v87, v86);
      }
      else
      {
        if ( !v110 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v110,
          v87,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        v89 = *(int *)(v42 + 16);
        if ( (unsigned int)v89 >= DeploySquareIds->max_length )
        {
LABEL_52:
          sub_B17100(Instance, v50, v54);
          sub_B170A0();
        }
        if ( !v109 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v109,
          DeploySquareIds->m_Items[v89 + 1],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        if ( !Instance )
          goto LABEL_51;
        monitor = (struct System_Int32_array *)Instance[4].monitor;
        if ( !monitor )
          goto LABEL_51;
        v91 = *(int *)(v42 + 16);
        if ( (unsigned int)v91 >= DeploySquareIds->max_length )
          goto LABEL_52;
        v92 = *(System_Collections_Generic_List_int__o **)&monitor->m_Items[51];
        if ( !v92 )
          goto LABEL_51;
        System_Collections_Generic_List_int___Add(
          v92,
          DeploySquareIds->m_Items[v91 + 1],
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v53 = *(_QWORD *)(v42 + 24);
      v54 = (unsigned int)(*(_DWORD *)(v42 + 16) + 1);
      *(_DWORD *)(v42 + 16) = v54;
      if ( !v53 )
        goto LABEL_51;
    }
    if ( !v110 )
      goto LABEL_51;
    if ( v110->fields._size >= 1 )
    {
      v93 = sub_B170CC(ReinforcementsData_TypeInfo, v50, v54, v51, v52);
      ReinforcementsData___ctor((ReinforcementsData_o *)v93, 0LL);
      if ( v108->stageEntity )
      {
        if ( v93 )
        {
          *(_DWORD *)(v93 + 16) = v108->stageEntity->fields.id;
          v94 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                         v110,
                                         (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
          *(_QWORD *)(v93 + 24) = v94;
          sub_B16F98((BattleServantConfConponent_o *)(v93 + 24), v94, v95, v96, v97, v98, v99, v100);
          if ( v109 )
          {
            v101 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                            v109,
                                            (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
            *(_QWORD *)(v93 + 32) = v101;
            sub_B16F98((BattleServantConfConponent_o *)(v93 + 32), v101, v102, v103, v104, v105, v106, v107);
            if ( *reinfoDatas )
            {
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)*reinfoDatas,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v93,
                (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ReinforcementsData__Add__);
              return;
            }
          }
        }
      }
LABEL_51:
      sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return localSaveData->fields.cameraSize;
}


// local variable allocation has failed, the output may be wrong!
WarBoardPieceData_array *__fastcall WarBoardData__GetServantPieces(
        WarBoardData_o *this,
        bool isPlayerGroup,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardData___c__DisplayClass106_0_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_40F89B2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, isPlayerGroup);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceData___, v7);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__, v10);
    sub_B16FFC(&WarBoardData___c__DisplayClass106_0_TypeInfo, v11);
    byte_40F89B2 = 1;
  }
  v12 = (WarBoardData___c__DisplayClass106_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass106_0_TypeInfo,
                                                   isPlayerGroup,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass106_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.isPlayerGroup = isPlayerGroup;
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v13,
                                                                             v14,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass106_0__GetServantPieces_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  v19 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          pieces,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceData___);
  return (WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                      v19,
                                      (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass128_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_IEnumerable_TSource__o *squares; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F89C3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardSquareData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardSquareData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass128_0_TypeInfo, v10);
    byte_40F89C3 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass128_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass128_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass128_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.squareIndex = squareIndex;
  squares = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.squares;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardSquareData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass128_0__GetSquare_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardSquareData__bool___ctor__);
  return (WarBoardSquareData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                   squares,
                                   (System_Func_TSource__bool__o *)v17,
                                   (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardSquareData___);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass153_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *svtInfo; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20

  if ( (byte_40F89D3 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_WarBoardUserServantData___, *(_QWORD *)&stageBossIdx);
    sub_B16FFC(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardUserServantData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass153_0_TypeInfo, v10);
    byte_40F89D3 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass153_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass153_0_TypeInfo,
                                                   *(_QWORD *)&stageBossIdx,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass153_0___ctor(v11, 0LL);
  if ( !v11 || (v11->fields.stageBossIdx = stageBossIdx, (serverData = this->fields.serverData) == 0LL) )
    sub_B170D4();
  svtInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.svtInfo;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass153_0__GetStageBossData_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
  return (WarBoardUserServantData_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                        svtInfo,
                                        (System_Func_T__bool__o *)v18,
                                        (const MethodInfo_18B650C *)Method_BasicHelper_Find_WarBoardUserServantData___);
}


// local variable allocation has failed, the output may be wrong!
WarBoardTreasureData_o *__fastcall WarBoardData__GetTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass137_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F89C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardTreasureData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardTreasureData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass137_0_TypeInfo, v10);
    byte_40F89C8 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass137_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass137_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass137_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardTreasureData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass137_0__GetTreasure_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v17,
                                     (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetTreasureIdList(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_int__o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  struct WarBoardData_WarBoardLocalSaveData_o *localSaveData; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  int max_length; // w8
  unsigned int v16; // w21
  WarBoardTreasureData_SaveData_o *v17; // x8

  if ( (byte_40F89B7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v8);
    byte_40F89B7 = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                   System_Collections_Generic_List_int__TypeInfo,
                                                   method,
                                                   v2,
                                                   v3,
                                                   v4);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  localSaveData = this->fields.localSaveData;
  if ( !localSaveData )
    goto LABEL_15;
  treasureSaves = localSaveData->fields.treasureSaves;
  if ( !treasureSaves )
    goto LABEL_15;
  max_length = treasureSaves->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v17 = treasureSaves->m_Items[v16];
      if ( !v17 )
        break;
      if ( v17->fields.isUse )
      {
        if ( !v9 )
          break;
        System_Collections_Generic_List_int___Add(
          v9,
          v17->fields.treasureId,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = treasureSaves->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_13;
    }
LABEL_15:
    sub_B170D4();
  }
LABEL_13:
  if ( !v9 )
    goto LABEL_15;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass193_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v17; // x20

  if ( (byte_40F89F0 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Predicate_WarBoardUiData___ctor__, v7);
    sub_B16FFC(&System_Predicate_WarBoardUiData__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass193_0_TypeInfo, v10);
    byte_40F89F0 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass193_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass193_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass193_0___ctor(v11, 0LL);
  if ( !v11
    || (v11->fields.squareIndex = squareIndex,
        listUiData = this->fields.listUiData,
        v17 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_WarBoardUiData__TypeInfo,
                                                                         v12,
                                                                         v13,
                                                                         v14,
                                                                         v15),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_WarBoardData___c__DisplayClass193_0__GetUiData_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B170D4();
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v17,
                               (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


WarBoardUiData_o *__fastcall WarBoardData__GetUiData_22672252(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v23; // x20

  if ( (byte_40F89F1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__Find__, pieceIndex);
    sub_B16FFC(&Method_System_Predicate_WarBoardUiData___ctor__, v7);
    sub_B16FFC(&System_Predicate_WarBoardUiData__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass194_0_TypeInfo, v10);
    byte_40F89F1 = 1;
  }
  v11 = sub_B170CC(WarBoardData___c__DisplayClass194_0_TypeInfo, pieceIndex, method, v3, v4);
  WarBoardData___c__DisplayClass194_0___ctor((WarBoardData___c__DisplayClass194_0_o *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = pieceIndex,
        sub_B16F98(
          (BattleServantConfConponent_o *)(v11 + 16),
          (System_Int32_array **)pieceIndex,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        listUiData = this->fields.listUiData,
        v23 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                         System_Predicate_WarBoardUiData__TypeInfo,
                                                                         v19,
                                                                         v20,
                                                                         v21,
                                                                         v22),
        System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
          v23,
          (Il2CppObject *)v11,
          Method_WarBoardData___c__DisplayClass194_0__GetUiData_b__0__,
          (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardUiData___ctor__),
        !listUiData) )
  {
    sub_B170D4();
  }
  return (WarBoardUiData_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                               (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)listUiData,
                               (System_Predicate_T__o *)v23,
                               (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_WarBoardUiData__Find__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardTreasureData_o *__fastcall WarBoardData__GetUnusedTreasure(
        WarBoardData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WarBoardData___c__DisplayClass138_0_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_IEnumerable_TSource__o *treasures; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_40F89C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardTreasureData__bool___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardTreasureData__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__, v9);
    sub_B16FFC(&WarBoardData___c__DisplayClass138_0_TypeInfo, v10);
    byte_40F89C9 = 1;
  }
  v11 = (WarBoardData___c__DisplayClass138_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass138_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   method,
                                                   v3,
                                                   v4);
  WarBoardData___c__DisplayClass138_0___ctor(v11, 0LL);
  if ( !v11 )
    sub_B170D4();
  v11->fields.squareIndex = squareIndex;
  treasures = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.treasures;
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardTreasureData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v11,
    Method_WarBoardData___c__DisplayClass138_0__GetUnusedTreasure_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardTreasureData__bool___ctor__);
  return (WarBoardTreasureData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                     treasures,
                                     (System_Func_TSource__bool__o *)v17,
                                     (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardTreasureData___);
}


System_Int32_array *__fastcall WarBoardData__GetUseCommonReleaseIds(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x19
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t stageId; // w21
  WarBoardEventScriptMaster_o *v18; // x20
  WarBoardEventMaster_o *v19; // x0
  WarBoardEventScriptEntity_o *ListByStageId; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  int warBoardEventAction; // w8
  WarBoardEventScriptEntity_o *v24; // x21
  unsigned int v25; // w23
  __int64 v26; // x22
  __int64 v27; // x25
  __int64 v28; // x8
  unsigned __int64 v29; // x26
  __int64 v30; // x25
  __int64 v31; // x8
  unsigned __int64 v32; // x26
  int v33; // w8
  WarBoardEventScriptEntity_o *v34; // x22
  unsigned int v35; // w27
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_List_int__o *v37; // x0

  if ( (byte_40F89E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardEventMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardEventScriptMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Distinct_int___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_int___, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_40F89E3 = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardEventScriptMaster___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_41;
  stageId = serverData->fields.stageId;
  v18 = (WarBoardEventScriptMaster_o *)Master_WarQuestSelectionMaster;
  v19 = (WarBoardEventMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardEventMaster___);
  if ( !v19 )
    goto LABEL_41;
  ListByStageId = (WarBoardEventScriptEntity_o *)WarBoardEventMaster__GetListByStageId(v19, stageId, 0LL);
  if ( !ListByStageId )
    goto LABEL_41;
  warBoardEventAction = ListByStageId->fields.warBoardEventAction;
  v24 = ListByStageId;
  if ( warBoardEventAction >= 1 )
  {
    v25 = 0;
    do
    {
      if ( v25 >= warBoardEventAction )
        goto LABEL_42;
      v26 = *((_QWORD *)&v24->fields.script + (int)v25);
      if ( !v26 )
        goto LABEL_41;
      v27 = *(_QWORD *)(v26 + 56);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 24);
        if ( v28 )
        {
          if ( (int)v28 >= 1 )
          {
            v29 = 0LL;
            while ( v29 < (unsigned int)v28 )
            {
              v21 = *(unsigned int *)(v27 + 32 + 4 * v29);
              if ( (int)v21 >= 1 )
              {
                if ( !v14 )
                  goto LABEL_41;
                System_Collections_Generic_List_int___Add(
                  v14,
                  v21,
                  (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                LODWORD(v28) = *(_DWORD *)(v27 + 24);
              }
              if ( (__int64)++v29 >= (int)v28 )
                goto LABEL_22;
            }
LABEL_42:
            sub_B17100(ListByStageId, v21, v22);
            sub_B170A0();
          }
LABEL_22:
          v30 = *(_QWORD *)(v26 + 48);
          if ( !v30 )
            goto LABEL_41;
          v31 = *(_QWORD *)(v30 + 24);
          if ( (int)v31 >= 1 )
          {
            v32 = 0LL;
            while ( 1 )
            {
              if ( v32 >= (unsigned int)v31 )
                goto LABEL_42;
              if ( !v18 )
                goto LABEL_41;
              ListByStageId = (WarBoardEventScriptEntity_o *)WarBoardEventScriptMaster__GetList(
                                                               v18,
                                                               *(_DWORD *)(v30 + 4 * v32 + 32),
                                                               0LL);
              if ( !ListByStageId )
                goto LABEL_41;
              v33 = ListByStageId->fields.warBoardEventAction;
              v34 = ListByStageId;
              if ( v33 >= 1 )
                break;
LABEL_37:
              LODWORD(v31) = *(_DWORD *)(v30 + 24);
              if ( (__int64)++v32 >= (int)v31 )
                goto LABEL_38;
            }
            v35 = 0;
            while ( v35 < v33 )
            {
              ListByStageId = (WarBoardEventScriptEntity_o *)*((_QWORD *)&v34->fields.script + (int)v35);
              if ( !ListByStageId )
                goto LABEL_41;
              if ( ListByStageId->fields.warBoardEventAction == 2 )
              {
                ListByStageId = (WarBoardEventScriptEntity_o *)WarBoardEventScriptEntity__GetChangeWinCondition(
                                                                 ListByStageId,
                                                                 0LL);
                if ( ((unsigned int)ListByStageId & 0x80000000) == 0 )
                {
                  if ( !v14 )
                    goto LABEL_41;
                  System_Collections_Generic_List_int___Add(
                    v14,
                    (int32_t)ListByStageId,
                    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
                }
              }
              v33 = v34->fields.warBoardEventAction;
              if ( (int)++v35 >= v33 )
                goto LABEL_37;
            }
            goto LABEL_42;
          }
        }
      }
LABEL_38:
      warBoardEventAction = v24->fields.warBoardEventAction;
    }
    while ( (int)++v25 < warBoardEventAction );
  }
  v36 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v14,
          (const MethodInfo_18D4DE0 *)Method_System_Linq_Enumerable_Distinct_int___);
  v37 = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_int_(
                                                    v36,
                                                    (const MethodInfo_19C78D8 *)Method_System_Linq_Enumerable_ToList_int___);
  if ( !v37 )
LABEL_41:
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           v37,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardWallData_o *__fastcall WarBoardData__GetWall(
        WarBoardData_o *this,
        int32_t squareIndex,
        bool ignoreDestroy,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WarBoardData___c__DisplayClass140_0_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Collections_Generic_IEnumerable_TSource__o *walls; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x20

  if ( (byte_40F89CA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Func_WarBoardWallData__bool___ctor__, v8);
    sub_B16FFC(&System_Func_WarBoardWallData__bool__TypeInfo, v9);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__, v10);
    sub_B16FFC(&WarBoardData___c__DisplayClass140_0_TypeInfo, v11);
    byte_40F89CA = 1;
  }
  v12 = (WarBoardData___c__DisplayClass140_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass140_0_TypeInfo,
                                                   *(_QWORD *)&squareIndex,
                                                   ignoreDestroy,
                                                   method,
                                                   v4);
  WarBoardData___c__DisplayClass140_0___ctor(v12, 0LL);
  if ( !v12 )
    sub_B170D4();
  v12->fields.squareIndex = squareIndex;
  v12->fields.ignoreDestroy = ignoreDestroy;
  walls = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.walls;
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardWallData__bool__TypeInfo,
                                                                             v13,
                                                                             v14,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardData___c__DisplayClass140_0__GetWall_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardWallData__bool___ctor__);
  return (WarBoardWallData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                 walls,
                                 (System_Func_TSource__bool__o *)v18,
                                 (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardWallData___);
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

  if ( (byte_40F89DB & 1) == 0 )
  {
    sub_B16FFC(&WarBoardManager_TypeInfo, method);
    byte_40F89DB = 1;
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
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x8
  System_Int32_array *v12; // x20
  unsigned __int64 v13; // x24
  int32_t v14; // w23
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x21
  WarBoardPrevCondData_o *v16; // x22

  if ( (byte_40F89E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__, method);
    sub_B16FFC(&WarBoardPrevCondData_TypeInfo, v3);
    byte_40F89E5 = 1;
  }
  UseCommonReleaseIds = (WarBoardData_o *)WarBoardData__GetUseCommonReleaseIds(this, method);
  PrevCondIds = WarBoardData__GetPrevCondIds(UseCommonReleaseIds, (System_Int32_array *)UseCommonReleaseIds, v5);
  if ( !PrevCondIds )
    goto LABEL_11;
  v11 = *(_QWORD *)&PrevCondIds->max_length;
  v12 = PrevCondIds;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)v11 )
      {
        sub_B17100(PrevCondIds, v7, v8);
        sub_B170A0();
      }
      v14 = v12->m_Items[v13 + 1];
      listPrevCond = this->fields.listPrevCond;
      v16 = (WarBoardPrevCondData_o *)sub_B170CC(WarBoardPrevCondData_TypeInfo, v7, v8, v9, v10);
      WarBoardPrevCondData___ctor_28159996(v16, v14, -1, 0LL);
      if ( !listPrevCond )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)listPrevCond,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v16,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__Add__);
      LODWORD(v11) = v12->max_length;
      if ( (__int64)++v13 >= (int)v11 )
        return;
    }
LABEL_11:
    sub_B170D4();
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
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v23; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *v25; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v26; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v27; // x0
  Il2CppObject *v28; // x20
  System_Xml_Schema_XmlSchemaObject_o *valuea; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40F89DE & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_B16FFC(&System_Convert_TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v11);
    sub_B16FFC(&Method_System_Func_WarBoardBossBattleData__bool___ctor__, v12);
    sub_B16FFC(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v13);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__, v14);
    sub_B16FFC(&WarBoardData___c__DisplayClass172_0_TypeInfo, v15);
    byte_40F89DE = 1;
  }
  valuea = 0LL;
  v16 = (WarBoardData___c__DisplayClass172_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass172_0_TypeInfo,
                                                   *(_QWORD *)&bossId,
                                                   key,
                                                   *(_QWORD *)&value,
                                                   method);
  WarBoardData___c__DisplayClass172_0___ctor(v16, 0LL);
  if ( !v16 )
    goto LABEL_18;
  v16->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_18;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v23 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardBossBattleData__bool__TypeInfo,
                                                                             v17,
                                                                             v18,
                                                                             v19,
                                                                             v20);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v23,
    (Il2CppObject *)v16,
    Method_WarBoardData___c__DisplayClass172_0__IsBossInfo_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v23,
                                                                     (const MethodInfo_18B650C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return value == 0;
  v25 = USFGOActorBattleActionEventConditional_OverwriteParamCondition;
  v26 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  if ( !v26 )
    goto LABEL_18;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          v26,
          (System_Xml_XmlQualifiedName_o *)key,
          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
    return value == 0;
  v27 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&v25->fields.isExecute;
  if ( !v27 )
LABEL_18:
    sub_B170D4();
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          v27,
          (System_Xml_XmlQualifiedName_o *)key,
          &valuea,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return value == 0;
  v28 = (Il2CppObject *)valuea;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32(v28, 0LL) == value;
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
  struct WarBoardStageEntity_o *stageEntity; // x8
  WarBoardStageNpcMaster_o *stageNpcMaster; // x0
  System_Int32_array *DefenseTarget; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  WarBoardStageNpcEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F89DC & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, data);
    byte_40F89DC = 1;
  }
  entity = 0LL;
  v12 = (_QWORD **)Method_System_Array_Empty_int___;
  v13 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v14 = *(_WORD *)(v13 + 306);
  if ( (v14 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v14 = *(_WORD *)(v13 + 306);
  }
  if ( (v14 & 0x400) != 0 )
  {
    v15 = *v12[6];
    if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
      sub_AAFCFC(*v12[6]);
    if ( !*(_DWORD *)(v15 + 224) )
    {
      v16 = *v12[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AAFCFC(*v12[6]);
      j_il2cpp_runtime_class_init_0(v16);
    }
  }
  v17 = *v12[6];
  if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
    sub_AAFCFC(*v12[6]);
  v18 = *(System_Int32_array ***)(v17 + 184);
  v19 = *v18;
  *data = *v18;
  sub_B16F98(
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
    if ( !entity )
      goto LABEL_24;
    DefenseTarget = WarBoardStageNpcEntity__GetDefenseTarget(entity, 0LL);
    *data = DefenseTarget;
    sub_B16F98((BattleServantConfConponent_o *)data, (System_Int32_array **)DefenseTarget, v23, v24, v25, v26, v27, v28);
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)*data, 0LL) )
    return 0;
  if ( !*data )
LABEL_24:
    sub_B170D4();
  return ((*data)->max_length & 1) == 0;
}


bool __fastcall WarBoardData__IsLose(WarBoardData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  WarBoardPieceData_array *Pieces_22598072; // x0
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  int max_length; // w8
  WarBoardPieceData_array *v8; // x20
  int v9; // w24
  int v10; // w22
  int v11; // w23
  WarBoardPieceData_o *v12; // x21

  Pieces_22598072 = WarBoardData__GetPieces_22598072(this, 0, 0, v2);
  if ( !Pieces_22598072 )
LABEL_19:
    sub_B170D4();
  max_length = Pieces_22598072->max_length;
  v8 = Pieces_22598072;
  if ( max_length < 1 )
    return 1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  do
  {
    if ( v9 >= (unsigned int)max_length )
    {
      sub_B17100(Pieces_22598072, v5, v6);
      sub_B170A0();
    }
    v12 = v8->m_Items[v9];
    if ( !v12 )
      goto LABEL_19;
    if ( !v12->fields._isDead_k__BackingField )
    {
      Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailablePermanentSleepBuff(v12, 0LL);
      if ( ((unsigned __int8)Pieces_22598072 & 1) == 0 )
      {
        Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(v12, 0LL);
        if ( ((unsigned __int8)Pieces_22598072 & 1) != 0 )
          ++v11;
        else
          ++v10;
      }
    }
    max_length = v8->max_length;
    ++v9;
  }
  while ( v9 < max_length );
  if ( v11 )
    return !v10 && !WarBoardData__IsReachableWinConditions(this, v5);
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
  WarBoardPieceData_array *Pieces_22598072; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  int max_length; // w8
  WarBoardPieceData_array *v15; // x22
  unsigned int v16; // w26
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x23
  int v19; // w8

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
          Pieces_22598072 = WarBoardData__GetPieces_22598072(this, i, v10, v2);
          if ( !Pieces_22598072 )
            goto LABEL_28;
          max_length = Pieces_22598072->max_length;
          v15 = Pieces_22598072;
          if ( max_length >= 1 )
          {
            v16 = 0;
            while ( 1 )
            {
              if ( v16 >= max_length )
              {
                sub_B17100(Pieces_22598072, v12, v13);
                sub_B170A0();
              }
              v17 = &v15->obj.klass + (int)v16;
              v18 = v17[4];
              if ( !v18 )
                break;
              Pieces_22598072 = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                             (WarBoardPieceData_o *)v17[4],
                                                             0LL);
              if ( ((unsigned __int8)Pieces_22598072 & 1) == 0 && !LOBYTE(v18->_1.klass) )
              {
                ++v7;
                v8 += *((unsigned __int8 *)&v18->_1.this_arg.bits + 4);
              }
              max_length = v15->max_length;
              if ( (int)++v16 >= max_length )
                goto LABEL_16;
            }
LABEL_28:
            sub_B170D4();
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
    v19 = v7;
  else
    v19 = v7 + 1;
  result = 1;
  if ( v19 >> 1 < v8 )
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
  WarBoardCommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v15; // x2
  WarBoardCommonReleaseEntity_array *List; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_Dictionary_int__bool__o *v22; // x19
  _BOOL8 Item; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  int max_length; // w8
  unsigned int v29; // w21
  int32_t *v30; // x25
  int32_t v31; // w8
  int32_t v32; // w1
  const MethodInfo_2DD5654 *v33; // x3
  bool v34; // w2
  System_Collections_Generic_Dictionary_int__bool__o *v35; // x0
  WarBoardData___c_c *v36; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_KeyValuePair_int__bool___bool__o *_9__95_0; // x20
  Il2CppObject *v39; // x21
  struct WarBoardData___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7

  if ( (byte_40F89A8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__get_Item__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____, v9);
    sub_B16FFC(&Method_System_Func_KeyValuePair_int__bool___bool___ctor__, v10);
    sub_B16FFC(&System_Func_KeyValuePair_int__bool___bool__TypeInfo, v11);
    sub_B16FFC(&Method_WarBoardData___c__IsReachableWinConditions_b__95_0__, v12);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v13);
    byte_40F89A8 = 1;
  }
  if ( (this->fields.winCondId & 0x80000000) != 0 )
    return 1;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardCommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_36;
  List = WarBoardCommonReleaseMaster__GetList(Master_WarQuestSelectionMaster, this->fields.winCondId, v15);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)List, 0LL) )
    return 0;
  v22 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_B170CC(
                                                                System_Collections_Generic_Dictionary_int__bool__TypeInfo,
                                                                v17,
                                                                v18,
                                                                v19,
                                                                v20);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v22,
    (const MethodInfo_2DD4AD0 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  if ( !List )
LABEL_36:
    sub_B170D4();
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= max_length )
      {
        sub_B17100(Item, v24, v25);
        sub_B170A0();
      }
      v30 = (int32_t *)List->m_Items[v29];
      if ( !v30 || !v22 )
        goto LABEL_36;
      if ( !System_Collections_Generic_Dictionary_int__bool___ContainsKey(
              v22,
              v30[6],
              (const MethodInfo_2DD58F4 *)Method_System_Collections_Generic_Dictionary_int__bool__ContainsKey__) )
        break;
      Item = System_Collections_Generic_Dictionary_int__bool___get_Item(
               v22,
               v30[6],
               (const MethodInfo_2DD55BC *)Method_System_Collections_Generic_Dictionary_int__bool__get_Item__);
      if ( Item )
        break;
LABEL_26:
      max_length = List->max_length;
      if ( (int)++v29 >= max_length )
        goto LABEL_27;
    }
    v31 = v30[7];
    if ( v31 == 1 )
    {
      v32 = v30[6];
      v33 = (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v34 = v30[10] == 0;
    }
    else
    {
      if ( v31 != 5 )
      {
        v32 = v30[6];
        v33 = (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
        v35 = v22;
        v34 = 0;
        goto LABEL_25;
      }
      v32 = v30[6];
      v33 = (const MethodInfo_2DD5654 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__;
      v34 = v30[10] < 1;
    }
    v35 = v22;
LABEL_25:
    System_Collections_Generic_Dictionary_int__bool___set_Item(v35, v32, v34, v33);
    goto LABEL_26;
  }
LABEL_27:
  v36 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v36 = WarBoardData___c_TypeInfo;
  }
  static_fields = v36->static_fields;
  _9__95_0 = static_fields->__9__95_0;
  if ( !_9__95_0 )
  {
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)static_fields->__9;
    _9__95_0 = (System_Func_KeyValuePair_int__bool___bool__o *)sub_B170CC(
                                                                 System_Func_KeyValuePair_int__bool___bool__TypeInfo,
                                                                 v24,
                                                                 v25,
                                                                 v26,
                                                                 v27);
    System_Func_KeyValuePair_int__bool___bool____ctor(
      _9__95_0,
      v39,
      Method_WarBoardData___c__IsReachableWinConditions_b__95_0__,
      (const MethodInfo_2B5D544 *)Method_System_Func_KeyValuePair_int__bool___bool___ctor__);
    v40 = WarBoardData___c_TypeInfo->static_fields;
    v40->__9__95_0 = _9__95_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__95_0,
      (System_Int32_array **)_9__95_0,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  return System_Linq_Enumerable__Any_KeyValuePair_int__bool__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v22,
           (System_Func_TSource__bool__o *)_9__95_0,
           (const MethodInfo_18C8448 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__bool____);
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
  WarBoardStageReinforcementsEntity_o **p_entity; // x20
  bool IsOnce; // w23
  const MethodInfo *v20; // x1
  System_Int32_array *PlayReinforcements; // x25
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Func_int__bool__o *v26; // x26
  bool v27; // w0
  const MethodInfo *v28; // x2
  struct WarBoardStageReinforcementsEntity_o *entity; // x8
  bool v30; // w9
  bool result; // w0
  _DWORD *DeploySquareIds; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  const MethodInfo *v35; // x3
  WarBoardStageReinforcementsEntity_o *v36; // x8
  struct System_Int32_array *reinforcementsIds; // x9
  _DWORD *v38; // x21
  int32_t v39; // w22
  struct System_Int32_array *limitNums; // x9
  struct System_Int32_array *v41; // x9
  _BOOL4 v42; // w9

  if ( (byte_40F89ED & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, *(_QWORD *)&forceId);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v11);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__, v13);
    sub_B16FFC(&WarBoardData___c__DisplayClass190_0_TypeInfo, v14);
    byte_40F89ED = 1;
  }
  v15 = (WarBoardData___c__DisplayClass190_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass190_0_TypeInfo,
                                                   *(_QWORD *)&forceId,
                                                   *(_QWORD *)&groupId,
                                                   *(_QWORD *)&targetStageReinforcementsId,
                                                   method);
  WarBoardData___c__DisplayClass190_0___ctor(v15, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !v15 )
    goto LABEL_33;
  stageEntity = this->fields.stageEntity;
  if ( !stageEntity || !Master_WarQuestSelectionMaster )
    goto LABEL_33;
  p_entity = &v15->fields.entity;
  if ( !WarBoardStageReinforcementsMaster__TryGetReleaseEntity(
          Master_WarQuestSelectionMaster,
          &v15->fields.entity,
          stageEntity->fields.id,
          targetStageReinforcementsId,
          0LL) )
    return 0;
  if ( !*p_entity
    || (IsOnce = WarBoardStageReinforcementsEntity__IsOnce(*p_entity, 0LL),
        PlayReinforcements = WarBoardData__GetPlayReinforcements(this, v20),
        v26 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, v22, v23, v24, v25),
        System_Func_int__bool____ctor(
          v26,
          (Il2CppObject *)v15,
          Method_WarBoardData___c__DisplayClass190_0__IsReinforcementsApper_b__0__,
          (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__),
        v27 = BasicHelper__Any_int__25910576(
                PlayReinforcements,
                (System_Func_T__bool__o *)v26,
                (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656),
        (entity = v15->fields.entity) == 0LL) )
  {
LABEL_33:
    sub_B170D4();
  }
  v30 = IsOnce && v27;
  result = 0;
  if ( !v30 && entity->fields.forceId == forceId && entity->fields.groupId == groupId )
  {
    DeploySquareIds = WarBoardData__GetDeploySquareIds(this, entity->fields.squareIds, v28);
    v36 = *p_entity;
    if ( *p_entity )
    {
      reinforcementsIds = v36->fields.reinforcementsIds;
      if ( reinforcementsIds )
      {
        v38 = DeploySquareIds;
        v39 = 0;
        while ( v39 < (signed int)reinforcementsIds->max_length )
        {
          limitNums = v36->fields.limitNums;
          if ( !limitNums )
            goto LABEL_33;
          if ( v39 >= limitNums->max_length )
          {
LABEL_37:
            sub_B17100(DeploySquareIds, v33, v34);
            sub_B170A0();
          }
          if ( limitNums->m_Items[v39 + 1] < 1 )
          {
            v42 = 0;
            if ( !v38 )
              goto LABEL_33;
          }
          else
          {
            DeploySquareIds = WarBoardData__GetReinfocementsPieces(this, v36->fields.id, v39, v35);
            if ( !DeploySquareIds )
              goto LABEL_33;
            v36 = *p_entity;
            if ( !*p_entity )
              goto LABEL_33;
            v41 = v36->fields.limitNums;
            if ( !v41 )
              goto LABEL_33;
            if ( v39 >= v41->max_length )
              goto LABEL_37;
            v42 = v41->m_Items[v39 + 1] <= DeploySquareIds[6];
            if ( !v38 )
              goto LABEL_33;
          }
          if ( (unsigned int)v39 >= v38[6] )
            goto LABEL_37;
          if ( !v42 && (v38[v39 + 8] & 0x80000000) == 0 )
            return 1;
          reinforcementsIds = v36->fields.reinforcementsIds;
          ++v39;
          if ( !reinforcementsIds )
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
  WebViewManager_o *v12; // x0
  System_Type_o *Type; // x20
  intptr_t v14; // w21
  System_Type_o *TypeFromHandle; // x1
  bool v16; // w20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-48h] BYREF
  System_RuntimeTypeHandle_o v19; // 0:w0.4

  if ( (byte_40F89A9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_WarBoardTaskBase___, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__get_Current__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v7);
    sub_B16FFC(&System_Type_TypeInfo, v8);
    sub_B16FFC(&WarBoardChangeWinConditionTask_var, v9);
    byte_40F89A9 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( !WarBoardData__CheckWinCond(this, method) )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  EventTasks = WarBoardManager__GetEventTasks((WarBoardManager_o *)Instance, 28, 0LL, 0LL);
  if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
         (System_Collections_Generic_IEnumerable_TSource__o *)EventTasks,
         (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_WarBoardTaskBase___) )
  {
    v12 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v12 )
      goto LABEL_22;
    WarBoardManager__AddTask_18098600((WarBoardManager_o *)v12, 0, EventTasks, 0LL);
  }
  if ( !EventTasks )
LABEL_22:
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EventTasks,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardTaskBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B170D4();
    Type = System_Object__GetType(v18.fields.current, 0LL);
    v14 = (int)WarBoardChangeWinConditionTask_var;
    if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v19.fields.value = v14;
    TypeFromHandle = System_Type__GetTypeFromHandle(v19, 0LL);
    if ( System_Type__op_Equality(Type, TypeFromHandle, 0LL) )
    {
      v16 = 0;
      this->fields.winCondGroup = -1;
      goto LABEL_19;
    }
  }
  v16 = 1;
LABEL_19:
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardTaskBase__Dispose__);
  return v16;
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
  const MethodInfo *v10; // x3
  Il2CppObject *current; // x21
  int32_t klass; // w1
  struct WarBoardDataEntity_o *serverData; // x8
  int32_t turn; // w1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+0h] [xbp-40h] BYREF
  int32_t condGroup; // [xsp+1Ch] [xbp-24h] BYREF

  if ( (byte_40F89E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v7);
    byte_40F89E7 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardCommonReleaseMaster___);
  if ( !this->fields.listPrevCond )
    sub_B170D4();
  v9 = (WarBoardCommonReleaseMaster_o *)Master_WarQuestSelectionMaster;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v15,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.listPrevCond,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v15,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    current = v15.fields.current;
    if ( !v15.fields.current )
      sub_B170D4();
    if ( (HIDWORD(v15.fields.current[1].klass) & 0x80000000) != 0 )
    {
      if ( !v9 )
        sub_B170D4();
      klass = (int32_t)v15.fields.current[1].klass;
      condGroup = 0;
      if ( WarBoardCommonReleaseMaster__IsOpen_22592744(v9, klass, &condGroup, v10) )
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
    &v15,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
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
  WarBoardPieceData_SaveData_o *v57; // x0
  struct System_Collections_Generic_Dictionary_uint__WarBoardActionPointEntity__o *actionPointEntityDict; // x21
  int entries; // w8
  unsigned int v60; // w22
  WarBoardItemData_SaveData_o *v61; // x0
  struct WarBoardPieceData_array *pieces; // x21
  int v63; // w8
  unsigned int v64; // w22
  WarBoardTreasureData_SaveData_o *v65; // x0
  struct WarBoardSquareData_array *squares; // x21
  int v67; // w8
  unsigned int v68; // w22
  WarBoardWallData_SaveData_o *v69; // x0
  struct WarBoardSquareData_array *condSquares; // x21
  int v71; // w8
  unsigned int v72; // w22
  WarBoardSquareData_SaveData_o *v73; // x0
  WebViewManager_o *Instance; // x0
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v76; // x9
  struct WarBoardDataEntity_o *v77; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v78; // x9
  struct WarBoardDataEntity_o *v79; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v80; // x9
  WebViewManager_o *v81; // x21
  struct UIWidget_o *webViewBase; // x8
  MapScroll_o *mGo; // x0
  UnityEngine_Vector2_o *v84; // x22
  UnityEngine_Vector2_o ScrlPos; // kr00_8
  struct UIWidget_o *v86; // x8
  MapZoom_o *mTrans; // x0
  WarBoardData_o *v88; // x22
  float ZoomSize; // s0
  WarBoardData_o *v90; // x20
  int32_t LogicCount; // w0
  WarBoardData_o *v92; // x20
  int32_t GutsCount; // w0
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v98; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *listEvent; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  Il2CppObject *current; // x22
  WarBoardEventData_SaveData_o *v105; // x21
  WarBoardData_o *v106; // x21
  System_Int32_array **v107; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v120; // x0
  System_Int32_array **latestPieceActionSquareIndexes; // x1
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  struct WarBoardData_WarBoardLocalSaveData_o *v128; // x0
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v134; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *listPrevCond; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  Il2CppObject *v140; // x22
  WarBoardPrevCondData_SaveData_o *v141; // x21
  WarBoardData_o *v142; // x21
  System_Int32_array **v143; // x0
  System_String_array **v144; // x2
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v154; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *reinforcementsSaveList; // x0
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x3
  __int64 v159; // x4
  Il2CppObject *v160; // x22
  HoldReinforcementsData_SaveData_o *v161; // x21
  WarBoardData_o *v162; // x21
  System_Int32_array **v163; // x0
  System_String_array **v164; // x2
  System_String_array **v165; // x3
  System_Boolean_array **v166; // x4
  System_Int32_array **v167; // x5
  System_Int32_array *v168; // x6
  System_Int32_array *v169; // x7
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0
  struct WarBoardData_WarBoardLocalSaveData_o *v171; // x20
  System_Int32_array **v172; // x0
  System_String_array **v173; // x2
  System_String_array **v174; // x3
  System_Boolean_array **v175; // x4
  System_Int32_array **v176; // x5
  System_Int32_array *v177; // x6
  System_Int32_array *v178; // x7
  __int64 v179; // x1
  __int64 v180; // x2
  __int64 v181; // x3
  __int64 v182; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v183; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *listUiData; // x0
  __int64 v185; // x1
  __int64 v186; // x2
  __int64 v187; // x3
  __int64 v188; // x4
  Il2CppObject *v189; // x22
  WarBoardUiData_SaveData_o *v190; // x21
  WarBoardData_o *v191; // x21
  System_Int32_array **v192; // x0
  System_String_array **v193; // x2
  System_String_array **v194; // x3
  System_Boolean_array **v195; // x4
  System_Int32_array **v196; // x5
  System_Int32_array *v197; // x6
  System_Int32_array *v198; // x7
  struct WarBoardDataEntity_o *v199; // x8
  unsigned int v200; // w0
  WarBoardData_o *v201; // x21
  int v202; // w20
  __int64 v203; // x2
  System_Int32_array **v204; // x0
  System_String_array **v205; // x2
  System_String_array **v206; // x3
  System_Boolean_array **v207; // x4
  System_Int32_array **v208; // x5
  System_Int32_array *v209; // x6
  System_Int32_array *v210; // x7
  __int64 v211; // x3
  __int64 v212; // x4
  unsigned __int64 v213; // x22
  signed __int64 v214; // x24
  __int64 v215; // x25
  struct WarBoardDataEntity_o *v216; // x9
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x9
  unsigned int *v218; // x27
  WarBoardSquareIndexData_o *v219; // x21
  WarBoardSquareIndexData_SaveData_o *v220; // x20
  System_String_array **v221; // x3
  System_Boolean_array **v222; // x4
  System_Int32_array **v223; // x5
  System_Int32_array *v224; // x6
  System_Int32_array *v225; // x7
  struct WarBoardDataEntity_o *v226; // x8
  unsigned int v227; // w0
  WarBoardData_o *v228; // x21
  int v229; // w20
  __int64 v230; // x2
  System_Int32_array **v231; // x0
  System_String_array **v232; // x2
  System_String_array **v233; // x3
  System_Boolean_array **v234; // x4
  System_Int32_array **v235; // x5
  System_Int32_array *v236; // x6
  System_Int32_array *v237; // x7
  System_String_array **v238; // x3
  System_Boolean_array **v239; // x4
  System_Int32_array **v240; // x5
  System_Int32_array *v241; // x6
  System_Int32_array *v242; // x7
  unsigned __int64 v243; // x22
  signed __int64 v244; // x24
  __int64 v245; // x25
  struct WarBoardDataEntity_o *v246; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  struct System_Collections_Generic_List_int__o *v248; // x27
  WarBoardBossBattleData_o *v249; // x21
  WarBoardBossBattleData_SaveData_o *v250; // x20
  System_String_array **v251; // x3
  System_Boolean_array **v252; // x4
  System_Int32_array **v253; // x5
  System_Int32_array *v254; // x6
  System_Int32_array *v255; // x7
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *bgAnimationInfo_k__BackingField; // x1
  __int64 v257; // x1
  __int64 v258; // x2
  __int64 v259; // x3
  __int64 v260; // x4
  struct WarBoardData_WarBoardLocalSaveData_o *v261; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v262; // x8
  struct WarBoardData_WarBoardLocalSaveData_o *v263; // x8
  MiniMessagePack_MiniMessagePacker_o *v264; // x19
  System_Byte_array *v265; // x19
  WarBoardData_c *v266; // x8
  System_String_o *WARBOARDDATA_SAVEDATA_KEY; // x20
  System_String_o *v268; // x19
  _BYTE v269[40]; // [xsp+0h] [xbp-100h] BYREF
  int v270; // [xsp+28h] [xbp-D8h]
  System_Collections_Generic_List_Enumerator_T__o v271; // [xsp+30h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v272; // [xsp+50h] [xbp-B0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v273; // [xsp+70h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v274; // [xsp+90h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_40F89A0 & 1) == 0 )
  {
    sub_B16FFC(&System_Convert_TypeInfo, onBoardSkillUpdate);
    sub_B16FFC(&EncryptedPlayerPrefs_TypeInfo, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__get_Current__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__get_Current__, v18);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__, v30);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v31);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__, v32);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__, v33);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__, v34);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__, v35);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__, v36);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo, v37);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo, v38);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo, v39);
    sub_B16FFC(&System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo, v40);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v41);
    sub_B16FFC(&WarBoardSquareIndexData_SaveData___TypeInfo, v42);
    sub_B16FFC(&WarBoardBossBattleData_SaveData___TypeInfo, v43);
    sub_B16FFC(&WarBoardUiData_SaveData_TypeInfo, v44);
    sub_B16FFC(&WarBoardEventData_SaveData_TypeInfo, v45);
    sub_B16FFC(&WarBoardSquareIndexData_SaveData_TypeInfo, v46);
    sub_B16FFC(&WarBoardPrevCondData_SaveData_TypeInfo, v47);
    sub_B16FFC(&HoldReinforcementsData_SaveData_TypeInfo, v48);
    sub_B16FFC(&WarBoardBossBattleData_SaveData_TypeInfo, v49);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v50);
    this = (WarBoardData_o *)sub_B16FFC(&WarBoardData_TypeInfo, v51);
    byte_40F89A0 = 1;
  }
  memset(&v274, 0, sizeof(v274));
  memset(&v273, 0, sizeof(v273));
  memset(&v272, 0, sizeof(v272));
  memset(&v271, 0, sizeof(v271));
  v270 = 0;
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
      v57 = pieceSaves->m_Items[v56];
      if ( !v57 )
        goto LABEL_143;
      WarBoardPieceData_SaveData__Save(v57, 0LL);
      max_length = pieceSaves->max_length;
      if ( (int)++v56 >= max_length )
        goto LABEL_10;
    }
LABEL_144:
    sub_B17100(this, onBoardSkillUpdate, method);
    sub_B170A0();
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
    v60 = 0;
    while ( v60 < entries )
    {
      v61 = (WarBoardItemData_SaveData_o *)*((_QWORD *)&actionPointEntityDict->fields.count + (int)v60);
      if ( !v61 )
        goto LABEL_143;
      WarBoardItemData_SaveData__Save(v61, 0LL);
      entries = (int)actionPointEntityDict->fields.entries;
      if ( (int)++v60 >= entries )
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
  v63 = pieces->max_length;
  if ( v63 >= 1 )
  {
    v64 = 0;
    while ( v64 < v63 )
    {
      v65 = (WarBoardTreasureData_SaveData_o *)pieces->m_Items[v64];
      if ( !v65 )
        goto LABEL_143;
      WarBoardTreasureData_SaveData__Save(v65, 0LL);
      v63 = pieces->max_length;
      if ( (int)++v64 >= v63 )
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
  v67 = squares->max_length;
  if ( v67 >= 1 )
  {
    v68 = 0;
    while ( v68 < v67 )
    {
      v69 = (WarBoardWallData_SaveData_o *)squares->m_Items[v68];
      if ( !v69 )
        goto LABEL_143;
      WarBoardWallData_SaveData__Save(v69, 0LL);
      v67 = squares->max_length;
      if ( (int)++v68 >= v67 )
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
  v71 = condSquares->max_length;
  if ( v71 >= 1 )
  {
    v72 = 0;
    while ( v72 < v71 )
    {
      v73 = (WarBoardSquareData_SaveData_o *)condSquares->m_Items[v72];
      if ( !v73 )
        goto LABEL_143;
      WarBoardSquareData_SaveData__Save(v73, 0LL);
      v71 = condSquares->max_length;
      if ( (int)++v72 >= v71 )
        goto LABEL_38;
    }
    goto LABEL_144;
  }
LABEL_38:
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  serverData = v4->fields.serverData;
  if ( !serverData )
    goto LABEL_143;
  v76 = v4->fields.localSaveData;
  if ( !v76 )
    goto LABEL_143;
  v76->fields.turn = serverData->fields.turn;
  v77 = v4->fields.serverData;
  if ( !v77 )
    goto LABEL_143;
  v78 = v4->fields.localSaveData;
  if ( !v78 )
    goto LABEL_143;
  v78->fields.turnForceId = v77->fields.turnForceId;
  v79 = v4->fields.serverData;
  if ( !v79 )
    goto LABEL_143;
  v80 = v4->fields.localSaveData;
  if ( !v80 )
    goto LABEL_143;
  v81 = Instance;
  v80->fields.turnGroupId = v79->fields.turnGroupId;
  if ( !Instance )
    goto LABEL_143;
  webViewBase = Instance->fields.webViewBase;
  if ( !webViewBase )
    goto LABEL_143;
  mGo = (MapScroll_o *)webViewBase->fields.mGo;
  if ( !mGo )
    goto LABEL_143;
  v84 = (UnityEngine_Vector2_o *)*p_localSaveData;
  ScrlPos = MapScroll__GetScrlPos(mGo, 0LL);
  if ( !v84 )
    goto LABEL_143;
  v84[9] = ScrlPos;
  v86 = v81->fields.webViewBase;
  if ( !v86 )
    goto LABEL_143;
  mTrans = (MapZoom_o *)v86->fields.mTrans;
  if ( !mTrans )
    goto LABEL_143;
  v88 = *p_localSaveData;
  ZoomSize = MapZoom__GetZoomSize(mTrans, 0LL);
  if ( !v88 )
    goto LABEL_143;
  *(float *)&v88->fields.treasures = ZoomSize;
  if ( !*p_localSaveData )
    goto LABEL_143;
  HIDWORD((*p_localSaveData)->fields.treasures) = HIDWORD(v81[7].fields.baseWindow);
  if ( !*p_localSaveData )
    goto LABEL_143;
  BYTE4((*p_localSaveData)->fields.effects) = onBoardSkillUpdate;
  v90 = *p_localSaveData;
  LogicCount = BattleRandom__GetLogicCount(0LL);
  if ( !v90 )
    goto LABEL_143;
  LODWORD(v90->fields.serverData) = LogicCount;
  v92 = *p_localSaveData;
  GutsCount = BattleRandom__GetGutsCount(0LL);
  if ( !v92 )
    goto LABEL_143;
  HIDWORD(v92->fields.serverData) = GutsCount;
  if ( !*p_localSaveData )
    goto LABEL_143;
  LOBYTE((*p_localSaveData)->fields._bgAnimationInfo_k__BackingField) = v4->fields.isPlayedHalfDeadMessage;
  v98 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardEventData_SaveData__TypeInfo,
                                                                                                  v94,
                                                                                                  v95,
                                                                                                  v96,
                                                                                                  v97);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v98,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData___ctor__);
  listEvent = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.listEvent;
  if ( !listEvent )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v269,
    listEvent,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardEventData__GetEnumerator__);
  v274 = *(System_Collections_Generic_List_Enumerator_T__o *)v269;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v274,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__MoveNext__) )
  {
    current = v274.fields.current;
    v105 = (WarBoardEventData_SaveData_o *)sub_B170CC(WarBoardEventData_SaveData_TypeInfo, v100, v101, v102, v103);
    WarBoardEventData_SaveData___ctor_20743684(v105, (WarBoardEventData_o *)current, 0LL);
    if ( !v98 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v98,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v105,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__Add__);
  }
  *(_DWORD *)&v269[4 * v270++ + 24] = 482;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v274,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardEventData__Dispose__);
  if ( v270 && *(_DWORD *)&v269[4 * v270 + 20] == 482 )
    --v270;
  if ( !v98 )
    goto LABEL_143;
  v106 = *p_localSaveData;
  v107 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v98,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardEventData_SaveData__ToArray__);
  if ( !v106 )
    goto LABEL_143;
  v106->fields.localSaveData = (struct WarBoardData_WarBoardLocalSaveData_o *)v107;
  sub_B16F98((BattleServantConfConponent_o *)&v106->fields.localSaveData, v107, v108, v109, v110, v111, v112, v113);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._maxForceId_k__BackingField = v4->fields.winCondId;
  v120 = v4->fields.localSaveData;
  if ( !v120 )
    goto LABEL_143;
  latestPieceActionSquareIndexes = (System_Int32_array **)v4->fields.latestPieceActionSquareIndexes;
  v120->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)latestPieceActionSquareIndexes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v120->fields.latestPieceActionSquareIndexes,
    latestPieceActionSquareIndexes,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  v128 = v4->fields.localSaveData;
  if ( !v128 )
    goto LABEL_143;
  latestBattlePieceUniqueIndexes = (System_Int32_array **)v4->fields.latestBattlePieceUniqueIndexes;
  v128->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)latestBattlePieceUniqueIndexes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v128->fields.latestBattlePieceUniqueIndexes,
    latestBattlePieceUniqueIndexes,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v134 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardPrevCondData_SaveData__TypeInfo,
                                                                                                   v130,
                                                                                                   v131,
                                                                                                   v132,
                                                                                                   v133);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v134,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData___ctor__);
  listPrevCond = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v269,
    listPrevCond,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardPrevCondData__GetEnumerator__);
  v273 = *(System_Collections_Generic_List_Enumerator_T__o *)v269;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v273,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__MoveNext__) )
  {
    v140 = v273.fields.current;
    v141 = (WarBoardPrevCondData_SaveData_o *)sub_B170CC(WarBoardPrevCondData_SaveData_TypeInfo, v136, v137, v138, v139);
    WarBoardPrevCondData_SaveData___ctor_20440148(v141, (WarBoardPrevCondData_o *)v140, 0LL);
    if ( !v134 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v134,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v141,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__Add__);
  }
  *(_DWORD *)&v269[4 * v270++ + 24] = 618;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v273,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardPrevCondData__Dispose__);
  if ( v270 && *(_DWORD *)&v269[4 * v270 + 20] == 618 )
    --v270;
  if ( !v134 )
    goto LABEL_143;
  v142 = *p_localSaveData;
  v143 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v134,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPrevCondData_SaveData__ToArray__);
  if ( !v142 )
    goto LABEL_143;
  v142->fields.listEvent = (struct System_Collections_Generic_List_WarBoardEventData__o *)v143;
  sub_B16F98((BattleServantConfConponent_o *)&v142->fields.listEvent, v143, v144, v145, v146, v147, v148, v149);
  v154 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_HoldReinforcementsData_SaveData__TypeInfo,
                                                                                                   v150,
                                                                                                   v151,
                                                                                                   v152,
                                                                                                   v153);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v154,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData___ctor__);
  reinforcementsSaveList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v269,
    reinforcementsSaveList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  v272 = *(System_Collections_Generic_List_Enumerator_T__o *)v269;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v272,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    v160 = v272.fields.current;
    v161 = (HoldReinforcementsData_SaveData_o *)sub_B170CC(
                                                  HoldReinforcementsData_SaveData_TypeInfo,
                                                  v156,
                                                  v157,
                                                  v158,
                                                  v159);
    HoldReinforcementsData_SaveData___ctor_18605036(v161, (HoldReinforcementsData_o *)v160, 0LL);
    if ( !v154 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v154,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v161,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__Add__);
  }
  *(_DWORD *)&v269[4 * v270++ + 24] = 703;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v272,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
  if ( v270 && *(_DWORD *)&v269[4 * v270 + 20] == 703 )
    --v270;
  if ( !v154 )
    goto LABEL_143;
  v162 = *p_localSaveData;
  v163 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v154,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_HoldReinforcementsData_SaveData__ToArray__);
  if ( !v162 )
    goto LABEL_143;
  *(_QWORD *)&v162->fields.winCondId = v163;
  sub_B16F98((BattleServantConfConponent_o *)&v162->fields.winCondId, v163, v164, v165, v166, v167, v168, v169);
  playedStageReinforcementsList = v4->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_143;
  v171 = v4->fields.localSaveData;
  v172 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                  playedStageReinforcementsList,
                                  (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v171 )
    goto LABEL_143;
  v171->fields.playedReinforcements = (struct System_Int32_array *)v172;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v171->fields.playedReinforcements,
    v172,
    v173,
    v174,
    v175,
    v176,
    v177,
    v178);
  v183 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardUiData_SaveData__TypeInfo,
                                                                                                   v179,
                                                                                                   v180,
                                                                                                   v181,
                                                                                                   v182);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v183,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData___ctor__);
  listUiData = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v4->fields.listUiData;
  if ( !listUiData )
    goto LABEL_143;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v269,
    listUiData,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v271 = *(System_Collections_Generic_List_Enumerator_T__o *)v269;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v271,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__) )
  {
    v189 = v271.fields.current;
    v190 = (WarBoardUiData_SaveData_o *)sub_B170CC(WarBoardUiData_SaveData_TypeInfo, v185, v186, v187, v188);
    WarBoardUiData_SaveData___ctor_20451276(v190, (WarBoardUiData_o *)v189, 0LL);
    if ( !v183 )
      sub_B170D4();
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v183,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v190,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__Add__);
  }
  *(_DWORD *)&v269[4 * v270++ + 24] = 812;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v271,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  if ( v270 && *(_DWORD *)&v269[4 * v270 + 20] == 812 )
    --v270;
  if ( !v183 )
    goto LABEL_143;
  v191 = *p_localSaveData;
  v192 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v183,
                                  (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardUiData_SaveData__ToArray__);
  if ( !v191
    || (v191->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)v192,
        sub_B16F98(
          (BattleServantConfConponent_o *)&v191->fields.latestBattlePieceUniqueIndexes,
          v192,
          v193,
          v194,
          v195,
          v196,
          v197,
          v198),
        (v199 = v4->fields.serverData) == 0LL)
    || (v200 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v199->fields.squareIndexInfo,
                 (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___),
        v201 = *p_localSaveData,
        v202 = v200,
        v204 = (System_Int32_array **)sub_B17014(WarBoardSquareIndexData_SaveData___TypeInfo, v200, v203),
        !v201) )
  {
LABEL_143:
    sub_B170D4();
  }
  v201->fields.reinforcementsSaveList = (struct System_Collections_Generic_List_HoldReinforcementsData__o *)v204;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v201->fields.reinforcementsSaveList,
    v204,
    v205,
    v206,
    v207,
    v208,
    v209,
    v210);
  if ( v202 >= 1 )
  {
    v213 = 0LL;
    v214 = v202;
    v215 = 8LL;
    while ( *p_localSaveData )
    {
      v216 = v4->fields.serverData;
      if ( !v216 )
        break;
      squareIndexInfo = v216->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        break;
      if ( v213 >= squareIndexInfo->max_length )
        goto LABEL_144;
      v218 = (unsigned int *)(*p_localSaveData)->fields.reinforcementsSaveList;
      v219 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v215 * 4);
      v220 = (WarBoardSquareIndexData_SaveData_o *)sub_B170CC(
                                                     WarBoardSquareIndexData_SaveData_TypeInfo,
                                                     onBoardSkillUpdate,
                                                     method,
                                                     v211,
                                                     v212);
      WarBoardSquareIndexData_SaveData___ctor_20446248(v220, v219, 0LL);
      if ( !v218 )
        break;
      if ( v220 )
      {
        this = (WarBoardData_o *)sub_B170BC(v220, *(_QWORD *)(*(_QWORD *)v218 + 64LL));
        if ( !this )
        {
LABEL_149:
          sub_B170F4(this);
          sub_B170A0();
        }
      }
      if ( v213 >= v218[6] )
        goto LABEL_144;
      *(_QWORD *)&v218[v215] = v220;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v218[v215],
        (System_Int32_array **)v220,
        (System_String_array **)method,
        v221,
        v222,
        v223,
        v224,
        v225);
      ++v213;
      v215 += 2LL;
      if ( (__int64)v213 >= v214 )
        goto LABEL_114;
    }
    goto LABEL_143;
  }
LABEL_114:
  v226 = v4->fields.serverData;
  if ( !v226 )
    goto LABEL_143;
  v227 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v226->fields.bossBattleInfo,
           (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v228 = *p_localSaveData;
  v229 = v227;
  v231 = (System_Int32_array **)sub_B17014(WarBoardBossBattleData_SaveData___TypeInfo, v227, v230);
  if ( !v228 )
    goto LABEL_143;
  v228->fields.playedStageReinforcementsList = (struct System_Collections_Generic_List_int__o *)v231;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v228->fields.playedStageReinforcementsList,
    v231,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
  this = *p_localSaveData;
  if ( v229 >= 1 )
  {
    v243 = 0LL;
    v244 = v229;
    v245 = 32LL;
    while ( this )
    {
      v246 = v4->fields.serverData;
      if ( !v246 )
        break;
      bossBattleInfo = v246->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        break;
      if ( v243 >= bossBattleInfo->max_length )
        goto LABEL_144;
      v248 = this->fields.playedStageReinforcementsList;
      v249 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v245);
      v250 = (WarBoardBossBattleData_SaveData_o *)sub_B170CC(
                                                    WarBoardBossBattleData_SaveData_TypeInfo,
                                                    onBoardSkillUpdate,
                                                    method,
                                                    v238,
                                                    v239);
      WarBoardBossBattleData_SaveData___ctor_20726172(v250, v249, 0LL);
      if ( !v248 )
        break;
      if ( v250 )
      {
        this = (WarBoardData_o *)sub_B170BC(v250, v248->klass->_1.element_class);
        if ( !this )
          goto LABEL_149;
      }
      if ( v243 >= (unsigned int)v248->fields._size )
        goto LABEL_144;
      *(System_Collections_Generic_List_int__c **)((char *)&v248->klass + v245) = (System_Collections_Generic_List_int__c *)v250;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)v248 + v245),
        (System_Int32_array **)v250,
        (System_String_array **)method,
        v251,
        v252,
        v253,
        v254,
        v255);
      this = *p_localSaveData;
      ++v243;
      v245 += 8LL;
      if ( (__int64)v243 >= v244 )
        goto LABEL_127;
    }
    goto LABEL_143;
  }
LABEL_127:
  if ( !this )
    goto LABEL_143;
  bgAnimationInfo_k__BackingField = (struct System_Collections_Generic_List_WarBoardPrevCondData__o *)v4->fields._bgAnimationInfo_k__BackingField;
  this->fields.listPrevCond = bgAnimationInfo_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.listPrevCond,
    (System_Int32_array **)bgAnimationInfo_k__BackingField,
    (System_String_array **)method,
    v238,
    v239,
    v240,
    v241,
    v242);
  if ( !*p_localSaveData )
    goto LABEL_143;
  (*p_localSaveData)->fields._CurrentMemberCount_k__BackingField = v4->fields._ContinueConsumeType_k__BackingField;
  v261 = v4->fields.localSaveData;
  if ( !v261 )
    goto LABEL_143;
  v261->fields.isContinue = v4->fields._IsContinue_k__BackingField;
  v262 = v4->fields.localSaveData;
  if ( !v262 )
    goto LABEL_143;
  v262->fields.isNextTurn = v4->fields._IsNextTurn_k__BackingField;
  v263 = v4->fields.localSaveData;
  if ( !v263 )
    goto LABEL_143;
  v263->fields.localSaveTiming = v4->fields.localSaveTiming;
  v264 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                  MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                  v257,
                                                  v258,
                                                  v259,
                                                  v260);
  MiniMessagePack_MiniMessagePacker___ctor(v264, 0LL);
  if ( !v264 )
    goto LABEL_143;
  v265 = MiniMessagePack_MiniMessagePacker__PackClass(v264, (Il2CppObject *)*p_localSaveData, 0LL);
  v266 = WarBoardData_TypeInfo;
  if ( (BYTE3(WarBoardData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarBoardData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_TypeInfo);
    v266 = WarBoardData_TypeInfo;
  }
  WARBOARDDATA_SAVEDATA_KEY = v266->static_fields->WARBOARDDATA_SAVEDATA_KEY;
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v268 = System_Convert__ToBase64String(v265, 0LL);
  if ( (BYTE3(EncryptedPlayerPrefs_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !EncryptedPlayerPrefs_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EncryptedPlayerPrefs_TypeInfo);
  }
  EncryptedPlayerPrefs__SetString(WARBOARDDATA_SAVEDATA_KEY, v268, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SaveHoldReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  WarBoardData___c__DisplayClass187_0_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_List_T__o *reinforcementsSaveList; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v29; // x0
  int32_t v30; // w21
  int32_t v31; // w22
  HoldReinforcementsData_o *v32; // x20
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v33; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F89EA & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_HoldReinforcementsData___, *(_QWORD *)&stageReinforcementsId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__get_Current__, v10);
    sub_B16FFC(&Method_System_Func_HoldReinforcementsData__bool___ctor__, v11);
    sub_B16FFC(&System_Func_HoldReinforcementsData__bool__TypeInfo, v12);
    sub_B16FFC(&HoldReinforcementsData_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData__Add__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__, v15);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__, v16);
    sub_B16FFC(&WarBoardData___c__DisplayClass187_0_TypeInfo, v17);
    byte_40F89EA = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v18 = (WarBoardData___c__DisplayClass187_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass187_0_TypeInfo,
                                                   *(_QWORD *)&stageReinforcementsId,
                                                   *(_QWORD *)&index,
                                                   method,
                                                   v4);
  WarBoardData___c__DisplayClass187_0___ctor(v18, 0LL);
  if ( !v18 )
    goto LABEL_17;
  v18->fields.stageReinforcementsId = stageReinforcementsId;
  v18->fields.index = index;
  reinforcementsSaveList = (System_Collections_Generic_List_T__o *)this->fields.reinforcementsSaveList;
  v24 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_HoldReinforcementsData__bool__TypeInfo,
                                                                             v19,
                                                                             v20,
                                                                             v21,
                                                                             v22);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v24,
    (Il2CppObject *)v18,
    Method_WarBoardData___c__DisplayClass187_0__SaveHoldReinforcements_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_HoldReinforcementsData__bool___ctor__);
  if ( !BasicHelper__Any_WarBoardData_SquareRangeSearch_(
          reinforcementsSaveList,
          (System_Func_T__bool__o *)v24,
          (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_HoldReinforcementsData___) )
  {
    v30 = v18->fields.stageReinforcementsId;
    v31 = v18->fields.index;
    v32 = (HoldReinforcementsData_o *)sub_B170CC(HoldReinforcementsData_TypeInfo, v25, v26, v27, v28);
    HoldReinforcementsData___ctor_28887824(v32, v30, v31, 1, 0LL);
    v33 = this->fields.reinforcementsSaveList;
    if ( v33 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v33,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v32,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_HoldReinforcementsData__Add__);
      return;
    }
LABEL_17:
    sub_B170D4();
  }
  v29 = this->fields.reinforcementsSaveList;
  if ( !v29 )
    goto LABEL_17;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v34,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v29,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_HoldReinforcementsData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v34,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__MoveNext__) )
  {
    if ( !v34.fields.current )
      sub_B170D4();
    if ( LODWORD(v34.fields.current[1].klass) == v18->fields.stageReinforcementsId
      && HIDWORD(v34.fields.current[1].klass) == v18->fields.index )
    {
      HoldReinforcementsData__IncreaseHoldNum((HoldReinforcementsData_o *)v34.fields.current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_HoldReinforcementsData__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardData__SavePlayReinforcements(
        WarBoardData_o *this,
        int32_t stageReinforcementsId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0

  if ( (byte_40F89E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, *(_QWORD *)&stageReinforcementsId);
    byte_40F89E8 = 1;
  }
  playedStageReinforcementsList = this->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    sub_B170D4();
  System_Collections_Generic_List_int___Add(
    playedStageReinforcementsList,
    stageReinforcementsId,
    (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
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
  const MethodInfo *v22; // x2
  WarBoardSquareData_o *Square; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v28; // x24
  WarBoardSquareData_o *v29; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x24
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x25
  WarBoardData_SquareRangeSearch_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  const MethodInfo *v42; // x4
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v43; // x24
  int32_t v44; // w26
  WarBoardData_SquareRangeSearch_o *v45; // x25
  struct System_Int32_array *linkedSquares; // x8
  __int64 v47; // x8
  __int64 v48; // x20
  __int64 i; // x27
  __int64 v50; // x24
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  __int64 v57; // x23
  _BOOL8 v58; // x0
  __int64 v59; // x3
  __int64 v60; // x4
  struct System_Int32_array *v61; // x8
  System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *v62; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v63; // x26
  __int64 v64; // x3
  System_Collections_Generic_List_T__o *v65; // x25
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v66; // x26
  struct System_Int32_array *v67; // x8
  __int64 v68; // x8

  if ( (byte_40F89C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___, *(_QWORD *)&start);
    sub_B16FFC(&Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___, v9);
    sub_B16FFC(&Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__, v10);
    sub_B16FFC(&System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v14);
    sub_B16FFC(&WarBoardData_SquareRangeSearch_TypeInfo, v15);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__, v16);
    sub_B16FFC(&WarBoardData___c__DisplayClass125_0_TypeInfo, v17);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__, v18);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__, v19);
    sub_B16FFC(&WarBoardData___c__DisplayClass125_1_TypeInfo, v20);
    byte_40F89C1 = 1;
  }
  v21 = (WarBoardData___c__DisplayClass125_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass125_0_TypeInfo,
                                                   *(_QWORD *)&start,
                                                   *(_QWORD *)&range,
                                                   rangeSearches,
                                                   method);
  WarBoardData___c__DisplayClass125_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_26;
  v21->fields.start = start;
  Square = WarBoardData__GetSquare(this, start, v22);
  if ( Square )
  {
    v28 = *rangeSearches;
    v29 = Square;
    if ( !*rangeSearches )
    {
      v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardData_SquareRangeSearch__TypeInfo, v24, v25, v26, v27);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v30,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch___ctor__);
      *rangeSearches = (System_Collections_Generic_List_WarBoardData_SquareRangeSearch__o *)v30;
      sub_B16F98(
        (BattleServantConfConponent_o *)rangeSearches,
        (System_Int32_array **)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      v28 = *rangeSearches;
    }
    v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                                               v24,
                                                                               v25,
                                                                               v26,
                                                                               v27);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v37,
      (Il2CppObject *)v21,
      Method_WarBoardData___c__DisplayClass125_0__SearchInRangeSquares_b__0__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
    v38 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v28,
            (System_Func_TSource__bool__o *)v37,
            (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardData_SquareRangeSearch___);
    if ( v38 )
    {
      v38->fields.range = range;
    }
    else
    {
      v43 = *rangeSearches;
      v44 = v21->fields.start;
      v45 = (WarBoardData_SquareRangeSearch_o *)sub_B170CC(WarBoardData_SquareRangeSearch_TypeInfo, v39, v40, v41, v42);
      WarBoardData_SquareRangeSearch___ctor(v45, v44, range, 0LL);
      if ( !v43 )
        goto LABEL_26;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v43,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v45,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardData_SquareRangeSearch__Add__);
    }
    v21->fields.nextRange = range - 1;
    if ( range - 1 >= 0 )
    {
      linkedSquares = v29->fields.linkedSquares;
      if ( !linkedSquares )
        goto LABEL_26;
      v47 = *(_QWORD *)&linkedSquares->max_length;
      if ( (int)v47 >= 1 )
      {
        v48 = (int)v47;
        for ( i = 8LL; ; ++i )
        {
          v50 = sub_B170CC(WarBoardData___c__DisplayClass125_1_TypeInfo, v39, v40, v41, v42);
          WarBoardData___c__DisplayClass125_1___ctor((WarBoardData___c__DisplayClass125_1_o *)v50, 0LL);
          if ( !v50 )
            break;
          *(_QWORD *)(v50 + 24) = v21;
          v57 = v50 + 24;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v50 + 24),
            (System_Int32_array **)v21,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56);
          v61 = v29->fields.linkedSquares;
          if ( !v61 )
            break;
          if ( i - 8 >= (unsigned __int64)v61->max_length )
            goto LABEL_27;
          *(_DWORD *)(v50 + 16) = *((_DWORD *)&v61->obj.klass + i);
          v62 = *rangeSearches;
          v63 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                                                     v39,
                                                                                     v40,
                                                                                     v59,
                                                                                     v60);
          System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
            v63,
            (Il2CppObject *)v50,
            Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__1__,
            (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__);
          v58 = System_Linq_Enumerable__All_WarBoardManager_WarBoardOnboardSkillTarget_(
                  (System_Collections_Generic_IEnumerable_TSource__o *)v62,
                  (System_Func_TSource__bool__o *)v63,
                  (const MethodInfo_18C70D4 *)Method_System_Linq_Enumerable_All_WarBoardData_SquareRangeSearch___);
          if ( v58
            || (v65 = (System_Collections_Generic_List_T__o *)*rangeSearches,
                v66 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                           System_Func_WarBoardData_SquareRangeSearch__bool__TypeInfo,
                                                                                           v39,
                                                                                           v40,
                                                                                           v64,
                                                                                           v42),
                System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
                  v66,
                  (Il2CppObject *)v50,
                  Method_WarBoardData___c__DisplayClass125_1__SearchInRangeSquares_b__2__,
                  (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardData_SquareRangeSearch__bool___ctor__),
                v58 = BasicHelper__Any_WarBoardData_SquareRangeSearch_(
                        v65,
                        (System_Func_T__bool__o *)v66,
                        (const MethodInfo_18B5FC8 *)Method_BasicHelper_Any_WarBoardData_SquareRangeSearch___)) )
          {
            v67 = v29->fields.linkedSquares;
            if ( !v67 )
              break;
            if ( i - 8 >= (unsigned __int64)v67->max_length )
            {
LABEL_27:
              sub_B17100(v58, v39, v40);
              sub_B170A0();
            }
            if ( !*(_QWORD *)v57 )
              break;
            WarBoardData__SearchInRangeSquares(
              this,
              *((_DWORD *)&v67->obj.klass + i),
              *(_DWORD *)(*(_QWORD *)v57 + 20LL),
              rangeSearches,
              v42);
          }
          v68 = i - 7;
          if ( v68 >= v48 )
            return;
        }
LABEL_26:
        sub_B170D4();
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
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_HashSet_int__o *v24; // x23
  const MethodInfo *v25; // x2
  WarBoardSquareData_o *Square; // x0
  const MethodInfo *v27; // x2
  WarBoardSquareData_o *v28; // x24
  BattleBuffData_BuffData_o *Piece_22604968; // x0
  WarBoardPieceData_o *v30; // x25
  _BOOL8 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  struct System_Int32_array *linkedSquares; // x24
  __int64 v35; // x8
  unsigned __int64 v36; // x25
  int32_t v37; // w22

  v7 = destination;
  if ( (byte_40F89C2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool__Invoke__, *(_QWORD *)&destination);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Add__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int__Contains__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_int___ctor___66713944, v11);
    sub_B16FFC(&System_Collections_Generic_HashSet_int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_int__Contains__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_int__Dequeue__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_int__Enqueue__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_int___ctor___66764480, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_int__get_Count__, v17);
    sub_B16FFC(&System_Collections_Generic_Queue_int__TypeInfo, v18);
    byte_40F89C2 = 1;
  }
  if ( v7 != current )
  {
    v19 = (System_Collections_Generic_Queue_int__o *)sub_B170CC(
                                                       System_Collections_Generic_Queue_int__TypeInfo,
                                                       *(_QWORD *)&destination,
                                                       *(_QWORD *)&current,
                                                       checkReplaceFunc,
                                                       method);
    System_Collections_Generic_Queue_int____ctor(
      v19,
      (const MethodInfo_2B146FC *)Method_System_Collections_Generic_Queue_int___ctor___66764480);
    if ( !v19 )
LABEL_24:
      sub_B170D4();
    System_Collections_Generic_Queue_int___Enqueue(
      v19,
      v7,
      (const MethodInfo_2B14C9C *)Method_System_Collections_Generic_Queue_int__Enqueue__);
    v24 = (System_Collections_Generic_HashSet_int__o *)sub_B170CC(
                                                         System_Collections_Generic_HashSet_int__TypeInfo,
                                                         v20,
                                                         v21,
                                                         v22,
                                                         v23);
    System_Collections_Generic_HashSet_int____ctor(
      v24,
      (const MethodInfo_21D7F80 *)Method_System_Collections_Generic_HashSet_int___ctor___66713944);
    if ( v19->fields._size >= 1 )
    {
      do
      {
        v7 = System_Collections_Generic_Queue_int___Dequeue(
               v19,
               (const MethodInfo_2B14EA8 *)Method_System_Collections_Generic_Queue_int__Dequeue__);
        Square = WarBoardData__GetSquare(this, v7, v25);
        if ( !Square )
          break;
        v28 = Square;
        Piece_22604968 = (BattleBuffData_BuffData_o *)WarBoardData__GetPiece_22604968(this, v7, v27);
        if ( !Piece_22604968 )
          return v7;
        if ( !checkReplaceFunc )
          goto LABEL_24;
        v30 = (WarBoardPieceData_o *)Piece_22604968;
        if ( System_Func_BattleBuffData_BuffData__bool___Invoke(
               (System_Func_BattleBuffData_BuffData__bool__o *)checkReplaceFunc,
               Piece_22604968,
               (const MethodInfo_2B6AB54 *)Method_System_Func_WarBoardPieceData__bool__Invoke__) )
        {
          WarBoardPieceData__SetSquareIndex(v30, -1, 0LL);
          return v7;
        }
        if ( !v24 )
          goto LABEL_24;
        v31 = System_Collections_Generic_HashSet_int___Add(
                v24,
                v7,
                (const MethodInfo_21D915C *)Method_System_Collections_Generic_HashSet_int__Add__);
        linkedSquares = v28->fields.linkedSquares;
        if ( !linkedSquares )
          goto LABEL_24;
        v35 = *(_QWORD *)&linkedSquares->max_length;
        if ( (int)v35 >= 1 )
        {
          v36 = 0LL;
          do
          {
            if ( v36 >= (unsigned int)v35 )
            {
              sub_B17100(v31, v32, v33);
              sub_B170A0();
            }
            v37 = linkedSquares->m_Items[v36 + 1];
            v31 = System_Collections_Generic_HashSet_int___Contains(
                    v24,
                    v37,
                    (const MethodInfo_21D8604 *)Method_System_Collections_Generic_HashSet_int__Contains__);
            if ( !v31 )
            {
              v31 = System_Collections_Generic_Queue_int___Contains(
                      v19,
                      v37,
                      (const MethodInfo_2B14FB8 *)Method_System_Collections_Generic_Queue_int__Contains__);
              if ( !v31 )
                System_Collections_Generic_Queue_int___Enqueue(
                  v19,
                  v37,
                  (const MethodInfo_2B14C9C *)Method_System_Collections_Generic_Queue_int__Enqueue__);
            }
            LODWORD(v35) = linkedSquares->max_length;
            ++v36;
          }
          while ( (__int64)v36 < (int)v35 );
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

  if ( (byte_40F89F5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, objectName);
    byte_40F89F5 = 1;
  }
  bgAnimationInfo_k__BackingField = this->fields._bgAnimationInfo_k__BackingField;
  if ( !bgAnimationInfo_k__BackingField )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)bgAnimationInfo_k__BackingField,
    (System_Xml_XmlQualifiedName_o *)objectName,
    (System_Xml_Schema_XmlSchemaObject_o *)animName,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Collections_Generic_IEnumerable_TSource__o *PlayerPieces; // x20
  WarBoardData___c_c *v16; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__82_0; // x21
  Il2CppObject *v19; // x22
  struct WarBoardData___c_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v27; // x0
  System_Linq_IOrderedEnumerable_TSource__c *klass; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v29; // x20
  unsigned __int64 v30; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v33; // x20
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  WarBoardPieceData_o *v42; // x0
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  struct WarBoardItemData_array *items; // x19
  int max_length; // w8
  unsigned int v52; // w20
  WarBoardItemData_o *v53; // x0

  if ( (byte_40F89A4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___, method);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__int___ctor__, v3);
    sub_B16FFC(&System_Func_WarBoardPieceData__int__TypeInfo, v4);
    sub_B16FFC(&System_IDisposable_TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, v6);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, v7);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__SetContinue_b__82_0__, v9);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v10);
    byte_40F89A4 = 1;
  }
  PlayerPieces = (System_Collections_Generic_IEnumerable_TSource__o *)WarBoardData__GetPlayerPieces(this, method);
  v16 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v16 = WarBoardData___c_TypeInfo;
  }
  static_fields = v16->static_fields;
  _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__82_0;
  if ( !_9__82_0 )
  {
    if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v19 = (Il2CppObject *)static_fields->__9;
    _9__82_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_WarBoardPieceData__int__TypeInfo,
                                                                                 v11,
                                                                                 v12,
                                                                                 v13,
                                                                                 v14);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__82_0,
      v19,
      Method_WarBoardData___c__SetContinue_b__82_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_WarBoardPieceData__int___ctor__);
    v20 = WarBoardData___c_TypeInfo->static_fields;
    v20->__9__82_0 = (struct System_Func_WarBoardPieceData__int__o *)_9__82_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v20->__9__82_0,
      (System_Int32_array **)_9__82_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = System_Linq_Enumerable__OrderBy_QuestPhaseDetailEntity_BoardInfo__int_(
          PlayerPieces,
          (System_Func_TSource__TKey__o *)_9__82_0,
          (const MethodInfo_19BD754 *)Method_System_Linq_Enumerable_OrderBy_WarBoardPieceData__int___);
  if ( !v27 )
    goto LABEL_48;
  klass = v27->klass;
  v29 = v27;
  if ( *(_WORD *)&v27->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_WarBoardPieceData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo )
    {
      ++v30;
      p_offset += 4;
      if ( v30 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
        goto LABEL_16;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_16:
    p_method = sub_AAFEF8(v27, System_Collections_Generic_IEnumerable_WarBoardPieceData__TypeInfo, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(System_Linq_IOrderedEnumerable_TSource__o *, _QWORD))p_method)(
          v29,
          *(_QWORD *)(p_method + 8));
  if ( !v33 )
    sub_B170D4();
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
      v37 = sub_AAFEF8(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v33;
    if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_WarBoardPieceData__c **)v40 - 1) != System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
          goto LABEL_30;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_30:
      v41 = sub_AAFEF8(v33, System_Collections_Generic_IEnumerator_WarBoardPieceData__TypeInfo, 0LL);
    }
    v42 = (WarBoardPieceData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
    if ( !v42 )
      sub_B170D4();
    WarBoardPieceData__SetContinue(v42, 0LL);
  }
  v43 = *(_QWORD *)v33;
  if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
  {
    v44 = 0LL;
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      ++v44;
      v45 += 4;
      if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
        goto LABEL_38;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_38:
    v46 = sub_AAFEF8(v33, System_IDisposable_TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v33, *(_QWORD *)(v46 + 8));
  items = this->fields.items;
  if ( !items )
LABEL_48:
    sub_B170D4();
  max_length = items->max_length;
  if ( max_length >= 1 )
  {
    v52 = 0;
    while ( 1 )
    {
      if ( v52 >= max_length )
      {
        sub_B17100(v47, v48, v49);
        sub_B170A0();
      }
      v53 = items->m_Items[v52];
      if ( !v53 )
        break;
      WarBoardItemData__ResetItem(v53, 0LL);
      max_length = items->max_length;
      if ( (int)++v52 >= max_length )
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  struct WarBoardPieceData_array *pieces; // x20
  WarBoardData___c_c *v12; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__144_0; // x21
  Il2CppObject *v15; // x22
  struct WarBoardData___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  WarBoardPieceData_o *USFGOPlayStandardCutInLimitCount_OverwriteCutIn; // x0

  if ( (byte_40F89CD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_WarBoardPieceData___, userEquipId);
    sub_B16FFC(&Method_System_Predicate_WarBoardPieceData___ctor__, v7);
    sub_B16FFC(&System_Predicate_WarBoardPieceData__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__, v9);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v10);
    byte_40F89CD = 1;
  }
  pieces = this->fields.pieces;
  v12 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v12 = WarBoardData___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__144_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__144_0;
  if ( !_9__144_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__144_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_WarBoardPieceData__TypeInfo,
                                                                           userEquipId,
                                                                           method,
                                                                           v3,
                                                                           v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__144_0,
      v15,
      Method_WarBoardData___c__SetPlayerMasterUserEquip_b__144_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v16 = WarBoardData___c_TypeInfo->static_fields;
    v16->__9__144_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__144_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__144_0,
      (System_Int32_array **)_9__144_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  USFGOPlayStandardCutInLimitCount_OverwriteCutIn = (WarBoardPieceData_o *)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                                                                             (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)pieces,
                                                                             (System_Predicate_T__o *)_9__144_0,
                                                                             (const MethodInfo_20441E8 *)Method_System_Array_Find_WarBoardPieceData___);
  if ( USFGOPlayStandardCutInLimitCount_OverwriteCutIn )
    WarBoardPieceData__SetMasterEquip(USFGOPlayStandardCutInLimitCount_OverwriteCutIn, userEquipId, 0LL);
}


void __fastcall WarBoardData__SetRequest(WarBoardData_o *this, RequestBase_o *request, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_IEnumerable_T__o *pieces; // x21
  WarBoardData___c_c *v33; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__156_0; // x22
  Il2CppObject *v36; // x23
  struct WarBoardData___c_StaticFields *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct WarBoardDataEntity_o *serverData; // x8
  Il2CppObject *p_obj; // x21
  Il2CppObject *v46; // x0
  System_Byte_array *v47; // x21
  System_Byte_array *v48; // x21
  System_String_o *v49; // x0
  struct WarBoardDataEntity_o *v50; // x8
  Il2CppObject *v51; // x0
  System_Byte_array *v52; // x0
  System_Byte_array *v53; // x0
  System_String_o *v54; // x0
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  System_Collections_Generic_IEnumerable_TSource__o *items; // x23
  WarBoardData___c_c *v60; // x0
  struct WarBoardData___c_StaticFields *v61; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__156_1; // x24
  System_String_o *v63; // x22
  System_String_o *v64; // x21
  Il2CppObject *v65; // x1
  Il2CppObject *v66; // x25
  struct WarBoardData___c_StaticFields *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v74; // x0
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x3
  __int64 v78; // x4
  WarBoardData___c_c *v79; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x23
  struct WarBoardData___c_StaticFields *v81; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__156_2; // x24
  Il2CppObject *v83; // x25
  struct WarBoardData___c_StaticFields *v84; // x0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  System_String_array *v92; // x0
  Il2CppObject *v93; // x0
  System_Byte_array *v94; // x21
  System_Byte_array *v95; // x21
  System_String_o *v96; // x0
  struct WarBoardDataEntity_o *v97; // x8
  Il2CppObject *v98; // x21
  Il2CppObject *v99; // x0
  System_Byte_array *v100; // x21
  System_Byte_array *v101; // x21
  System_String_o *v102; // x0
  struct WarBoardDataEntity_o *v103; // x8
  Il2CppObject *v104; // x0
  System_Byte_array *v105; // x0
  System_Byte_array *v106; // x0
  System_String_o *v107; // x0
  struct WarBoardDataEntity_o *v108; // x8
  Il2CppObject *v109; // x0
  System_Byte_array *v110; // x0
  System_Byte_array *v111; // x0
  System_String_o *v112; // x2

  if ( (byte_40F89D6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_WarBoardPieceData___ctor__, request);
    sub_B16FFC(&System_Action_WarBoardPieceData__TypeInfo, v7);
    sub_B16FFC(&Method_BasicHelper_ForEach_WarBoardPieceData___, v8);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v9);
    sub_B16FFC(&System_Convert_TypeInfo, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardItemData__string___, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_string___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_string___, v13);
    sub_B16FFC(&Method_System_Func_WarBoardItemData__string___ctor__, v14);
    sub_B16FFC(&Method_System_Func_string__bool___ctor__, v15);
    sub_B16FFC(&System_Func_WarBoardItemData__string__TypeInfo, v16);
    sub_B16FFC(&System_Func_string__bool__TypeInfo, v17);
    sub_B16FFC(&JsonManager_TypeInfo, v18);
    sub_B16FFC(&Method_WarBoardData___c__SetRequest_b__156_0__, v19);
    sub_B16FFC(&Method_WarBoardData___c__SetRequest_b__156_1__, v20);
    sub_B16FFC(&Method_WarBoardData___c__SetRequest_b__156_2__, v21);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_16821, v23);
    sub_B16FFC(&StringLiteral_22377, v24);
    sub_B16FFC(&StringLiteral_20316, v25);
    sub_B16FFC(&StringLiteral_23100, v26);
    sub_B16FFC(&StringLiteral_21080, v27);
    sub_B16FFC(&StringLiteral_22150, v28);
    sub_B16FFC(&StringLiteral_18930, v29);
    sub_B16FFC(&StringLiteral_698, v30);
    sub_B16FFC(&StringLiteral_15764, v31);
    byte_40F89D6 = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_T__o *)this->fields.pieces;
  v33 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v33 = WarBoardData___c_TypeInfo;
  }
  static_fields = v33->static_fields;
  _9__156_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( (BYTE3(v33->vtable._0_Equals.methodPtr) & 4) != 0 && !v33->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v33);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v36 = (Il2CppObject *)static_fields->__9;
    _9__156_0 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_WarBoardPieceData__TypeInfo,
                                                                                       request,
                                                                                       method,
                                                                                       v3,
                                                                                       v4);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__156_0,
      v36,
      Method_WarBoardData___c__SetRequest_b__156_0__,
      (const MethodInfo_24B7310 *)Method_System_Action_WarBoardPieceData___ctor__);
    v37 = WarBoardData___c_TypeInfo->static_fields;
    v37->__9__156_0 = (struct System_Action_WarBoardPieceData__o *)_9__156_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v37->__9__156_0,
      (System_Int32_array **)_9__156_0,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    pieces,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_WarBoardPieceData___);
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_63;
  p_obj = &serverData->fields.svtInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v46 = (Il2CppObject *)JsonManager__toJson(p_obj, 0, 0, 0LL);
  if ( !request )
    goto LABEL_63;
  v47 = RequestBase__PackToMessagePack(request, v46, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v48 = CatAndMouseGame__CatGame5Bytes(v47, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v49 = System_Convert__ToBase64String(v48, 0LL);
  RequestBase__addField_30957164(request, (System_String_o *)StringLiteral_22377, v49, 0LL);
  v50 = this->fields.serverData;
  if ( !v50 )
    goto LABEL_63;
  v51 = (Il2CppObject *)JsonManager__toJson(&v50->fields.masterInfo->obj, 0, 0, 0LL);
  v52 = RequestBase__PackToMessagePack(request, v51, 0LL);
  v53 = CatAndMouseGame__CatGame5Bytes(v52, 0LL);
  v54 = System_Convert__ToBase64String(v53, 0LL);
  RequestBase__addField_30957164(request, (System_String_o *)StringLiteral_20316, v54, 0LL);
  items = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.items;
  if ( !items )
    goto LABEL_63;
  if ( items[1].monitor )
  {
    v60 = WarBoardData___c_TypeInfo;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v60 = WarBoardData___c_TypeInfo;
    }
    v61 = v60->static_fields;
    _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)v61->__9__156_1;
    v63 = (System_String_o *)StringLiteral_698;
    v64 = (System_String_o *)StringLiteral_15764;
    if ( !_9__156_1 )
    {
      if ( (BYTE3(v60->vtable._0_Equals.methodPtr) & 4) != 0 && !v60->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v60);
        v61 = WarBoardData___c_TypeInfo->static_fields;
      }
      v66 = (Il2CppObject *)v61->__9;
      _9__156_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                    System_Func_WarBoardItemData__string__TypeInfo,
                                                                                                    v55,
                                                                                                    v56,
                                                                                                    v57,
                                                                                                    v58);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__156_1,
        v66,
        Method_WarBoardData___c__SetRequest_b__156_1__,
        (const MethodInfo_2B6C28C *)Method_System_Func_WarBoardItemData__string___ctor__);
      v67 = WarBoardData___c_TypeInfo->static_fields;
      v67->__9__156_1 = (struct System_Func_WarBoardItemData__string__o *)_9__156_1;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v67->__9__156_1,
        (System_Int32_array **)_9__156_1,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
    }
    v74 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
            items,
            (System_Func_TSource__TResult__o *)_9__156_1,
            (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_WarBoardItemData__string___);
    v79 = WarBoardData___c_TypeInfo;
    v80 = (System_Collections_Generic_IEnumerable_TSource__o *)v74;
    if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !WarBoardData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
      v79 = WarBoardData___c_TypeInfo;
    }
    v81 = v79->static_fields;
    _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v81->__9__156_2;
    if ( !_9__156_2 )
    {
      if ( (BYTE3(v79->vtable._0_Equals.methodPtr) & 4) != 0 && !v79->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v79);
        v81 = WarBoardData___c_TypeInfo->static_fields;
      }
      v83 = (Il2CppObject *)v81->__9;
      _9__156_2 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                       System_Func_string__bool__TypeInfo,
                                                                                       v75,
                                                                                       v76,
                                                                                       v77,
                                                                                       v78);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__156_2,
        v83,
        Method_WarBoardData___c__SetRequest_b__156_2__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_string__bool___ctor__);
      v84 = WarBoardData___c_TypeInfo->static_fields;
      v84->__9__156_2 = (struct System_Func_string__bool__o *)_9__156_2;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v84->__9__156_2,
        (System_Int32_array **)_9__156_2,
        v85,
        v86,
        v87,
        v88,
        v89,
        v90);
    }
    v91 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v80,
            (System_Func_TSource__bool__o *)_9__156_2,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_string___);
    v92 = (System_String_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                   v91,
                                   (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_string___);
    v93 = (Il2CppObject *)System_String__Join(v63, v92, 0LL);
    v65 = (Il2CppObject *)System_String__Format(v64, v93, 0LL);
  }
  else
  {
    v65 = (Il2CppObject *)StringLiteral_21080;
  }
  v94 = RequestBase__PackToMessagePack(request, v65, 0LL);
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
  RequestBase__addField_30957164(request, (System_String_o *)StringLiteral_18930, v96, 0LL);
  v97 = this->fields.serverData;
  if ( !v97 )
    goto LABEL_63;
  v98 = &v97->fields.wallInfo->obj;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v99 = (Il2CppObject *)JsonManager__toJson(v98, 0, 0, 0LL);
  v100 = RequestBase__PackToMessagePack(request, v99, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v101 = CatAndMouseGame__CatGame5Bytes(v100, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v102 = System_Convert__ToBase64String(v101, 0LL);
  RequestBase__addField_30957164(request, (System_String_o *)StringLiteral_23100, v102, 0LL);
  v103 = this->fields.serverData;
  if ( !v103
    || (v104 = (Il2CppObject *)JsonManager__toJson(&v103->fields.squareIndexInfo->obj, 0, 0, 0LL),
        v105 = RequestBase__PackToMessagePack(request, v104, 0LL),
        v106 = CatAndMouseGame__CatGame5Bytes(v105, 0LL),
        v107 = System_Convert__ToBase64String(v106, 0LL),
        RequestBase__addField_30957164(request, (System_String_o *)StringLiteral_22150, v107, 0LL),
        (v108 = this->fields.serverData) == 0LL) )
  {
LABEL_63:
    sub_B170D4();
  }
  v109 = (Il2CppObject *)JsonManager__toJson(&v108->fields.bossBattleInfo->obj, 0, 0, 0LL);
  v110 = RequestBase__PackToMessagePack(request, v109, 0LL);
  v111 = CatAndMouseGame__CatGame5Bytes(v110, 0LL);
  v112 = System_Convert__ToBase64String(v111, 0LL);
  RequestBase__addField_30957164(request, (System_String_o *)StringLiteral_16821, v112, 0LL);
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
  __int64 klass_low; // x1
  WarBoardSquareData_o *Square; // x0
  void *pieceComponent; // x8
  _DWORD *monitor; // x8
  unsigned int v17; // w9
  WarBoardPieceData_o *Piece; // x0
  WarBoardControlUiDataComponent_o *v19; // x20
  const MethodInfo *v20; // x2
  WarBoardControlUiDataComponent_c *v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40F89F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&WarBoardControlUiDataComponent_TypeInfo, v7);
    byte_40F89F4 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  listUiData = this->fields.listUiData;
  if ( !listUiData )
    sub_B170D4();
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)listUiData,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardUiData__GetEnumerator__);
  v23 = v22;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v23,
           (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__MoveNext__);
    if ( !v9 )
      break;
    current = v23.fields.current;
    if ( !v23.fields.current )
      sub_B170D4();
    klass_low = LODWORD(v23.fields.current[1].klass);
    if ( (klass_low & 0x80000000) != 0 )
    {
      monitor = v23.fields.current[1].monitor;
      if ( !monitor )
        sub_B170D4();
      v17 = monitor[6];
      if ( !v17 )
      {
        sub_B17100(v9, klass_low, v10);
        sub_B170A0();
      }
      if ( v17 == 1 )
      {
        sub_B17100(v9, klass_low, v10);
        sub_B170A0();
      }
      if ( v17 <= 2 )
      {
        sub_B17100(v9, klass_low, v10);
        sub_B170A0();
      }
      Piece = WarBoardData__GetPiece(this, monitor[8], monitor[9], monitor[10], 1, v11);
      if ( Piece )
      {
        pieceComponent = Piece->fields.pieceComponent;
        if ( !pieceComponent )
          sub_B170D4();
LABEL_17:
        v19 = (WarBoardControlUiDataComponent_o *)*((_QWORD *)pieceComponent + 22);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
        {
          if ( !v19 )
            sub_B170D4();
          WarBoardControlUiDataComponent__SetUiDataFromLocalData(v19, (System_String_array *)current[2].klass, v20);
        }
      }
    }
    else
    {
      Square = WarBoardData__GetSquare(this, klass_low, v10);
      if ( Square )
      {
        pieceComponent = Square->fields.squareComponent;
        if ( !pieceComponent )
          sub_B170D4();
        goto LABEL_17;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardUiData__Dispose__);
  v21 = WarBoardControlUiDataComponent_TypeInfo;
  if ( (BYTE3(WarBoardControlUiDataComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardControlUiDataComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardControlUiDataComponent_TypeInfo);
  }
  WarBoardControlUiDataComponent__ResumeUiDataAll((const MethodInfo *)v21);
}


void __fastcall WarBoardData__ShowConsumedPieceActionPointPopup(
        WarBoardData_o *this,
        System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x19
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
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Func_bool__o *v35; // x20
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  UnityEngine_WaitUntil_o *v40; // x21
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Delegate_o *v56; // x22
  WarBoardTaskBase_TaskCallback_o *v57; // x23
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  WebViewManager_o *Instance; // x19
  __int64 v66; // x2
  __int64 v67; // x0
  __int64 v68; // x21
  __int64 v69; // x0
  __int64 v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  WarBoardData_o *v77; // x0
  const MethodInfo *v78; // x1

  if ( (byte_40F89D4 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__,
      consumedPieceActionPointDict);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v7);
    sub_B16FFC(&System_Func_bool__TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v10);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__, v11);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__, v12);
    sub_B16FFC(&WarBoardData___c__DisplayClass154_0_TypeInfo, v13);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v14);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v15);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v16);
    byte_40F89D4 = 1;
  }
  v17 = sub_B170CC(WarBoardData___c__DisplayClass154_0_TypeInfo, consumedPieceActionPointDict, method, v3, v4);
  WarBoardData___c__DisplayClass154_0___ctor((WarBoardData___c__DisplayClass154_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_15;
  *(_QWORD *)(v17 + 24) = consumedPieceActionPointDict;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v17 + 24),
    (System_Int32_array **)consumedPieceActionPointDict,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  *(_QWORD *)(v17 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  v30 = *(System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o **)(v17 + 24);
  if ( !v30 )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         v30,
         (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) >= 1 )
  {
    *(_BYTE *)(v17 + 16) = 0;
    v35 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v31, v32, v33, v34);
    System_Func_bool____ctor(
      v35,
      (Il2CppObject *)v17,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__0__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v40 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v36, v37, v38, v39);
    UnityEngine_WaitUntil___ctor(v40, v35, 0LL);
    v45 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v41, v42, v43, v44);
    WarBoardTaskBase___ctor((WarBoardTaskBase_o *)v45, 0LL);
    *(_QWORD *)(v45 + 56) = v40;
    sub_B16F98((BattleServantConfConponent_o *)(v45 + 56), (System_Int32_array **)v40, v46, v47, v48, v49, v50, v51);
    if ( !v45 )
      goto LABEL_15;
    v56 = *(System_Delegate_o **)(v45 + 32);
    v57 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(WarBoardTaskBase_TaskCallback_TypeInfo, v52, v53, v54, v55);
    WarBoardTaskBase_TaskCallback___ctor(
      v57,
      (Il2CppObject *)v17,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__1__,
      0LL);
    v58 = (System_Int32_array **)System_Delegate__Combine(v56, (System_Delegate_o *)v57, 0LL);
    if ( !v58 || *v58 == (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
    {
      *(_QWORD *)(v45 + 32) = v58;
      sub_B16F98((BattleServantConfConponent_o *)(v45 + 32), v58, v59, v60, v61, v62, v63, v64);
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      v67 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v66);
      if ( v67 )
      {
        v68 = v67;
        v69 = sub_B170BC(v45, *(_QWORD *)(*(_QWORD *)v67 + 64LL));
        if ( !v69 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        if ( !*(_DWORD *)(v68 + 24) )
        {
          sub_B17100(v69, v70, v71);
          sub_B170A0();
        }
        *(_QWORD *)(v68 + 32) = v45;
        sub_B16F98((BattleServantConfConponent_o *)(v68 + 32), (System_Int32_array **)v45, v71, v72, v73, v74, v75, v76);
        if ( Instance )
        {
          WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v68, 0LL);
          return;
        }
      }
LABEL_15:
      sub_B170D4();
    }
    v77 = (WarBoardData_o *)sub_B173C8(v58);
    WarBoardData__CreateEventBossUIDataTask(v77, v78);
  }
}


System_String_o *__fastcall WarBoardData__ToJson(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *serverData; // x19

  if ( (byte_40F89D5 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, method);
    sub_B16FFC(&string_TypeInfo, v3);
    byte_40F89D5 = 1;
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct WarBoardDataEntity_o *serverData; // x8
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *bossBattleInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x22
  WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_o *USFGOActorBattleActionEventConditional_OverwriteParamCondition; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v24; // x21
  System_Xml_Schema_XmlSchemaObject_o *v25; // x0
  int32_t v26; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F89DD & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Find_WarBoardBossBattleData___, *(_QWORD *)&bossId);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v9);
    sub_B16FFC(&Method_System_Func_WarBoardBossBattleData__bool___ctor__, v10);
    sub_B16FFC(&System_Func_WarBoardBossBattleData__bool__TypeInfo, v11);
    sub_B16FFC(&int_TypeInfo, v12);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__, v13);
    sub_B16FFC(&WarBoardData___c__DisplayClass171_0_TypeInfo, v14);
    byte_40F89DD = 1;
  }
  v15 = (WarBoardData___c__DisplayClass171_0_o *)sub_B170CC(
                                                   WarBoardData___c__DisplayClass171_0_TypeInfo,
                                                   *(_QWORD *)&bossId,
                                                   key,
                                                   *(_QWORD *)&value,
                                                   method);
  WarBoardData___c__DisplayClass171_0___ctor(v15, 0LL);
  if ( !v15 )
    goto LABEL_9;
  v15->fields.bossId = bossId;
  serverData = this->fields.serverData;
  if ( !serverData )
    goto LABEL_9;
  bossBattleInfo = (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)serverData->fields.bossBattleInfo;
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardBossBattleData__bool__TypeInfo,
                                                                             v16,
                                                                             v17,
                                                                             v18,
                                                                             v19);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v15,
    Method_WarBoardData___c__DisplayClass171_0__UpdateBossInfo_b__0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardBossBattleData__bool___ctor__);
  USFGOActorBattleActionEventConditional_OverwriteParamCondition = BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                                                     bossBattleInfo,
                                                                     (System_Func_T__bool__o *)v22,
                                                                     (const MethodInfo_18B650C *)Method_BasicHelper_Find_WarBoardBossBattleData___);
  if ( !USFGOActorBattleActionEventConditional_OverwriteParamCondition )
    return;
  v24 = *(System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o **)&USFGOActorBattleActionEventConditional_OverwriteParamCondition->fields.isExecute;
  v26 = value;
  v25 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
  if ( !v24 )
LABEL_9:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v24,
    (System_Xml_XmlQualifiedName_o *)key,
    v25,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
}


void __fastcall WarBoardData__UpdateBuffTurnNoticeDisp(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  System_Collections_Generic_IEnumerable_TSource__o *pieces; // x19
  WarBoardData___c_c *v19; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__192_0; // x20
  Il2CppObject *v22; // x21
  struct WarBoardData___c_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TResult__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  WarBoardData___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  struct WarBoardData___c_StaticFields *v37; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__192_1; // x20
  Il2CppObject *v39; // x21
  struct WarBoardData___c_StaticFields *v40; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  WarBoardData___c_c *v52; // x8
  System_Collections_Generic_IEnumerable_T__o *v53; // x19
  struct WarBoardData___c_StaticFields *v54; // x9
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *_9__192_2; // x20
  Il2CppObject *v56; // x21
  struct WarBoardData___c_StaticFields *v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7

  if ( (byte_40F89EF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_WarBoardPieceBaseComponent___ctor__, method);
    sub_B16FFC(&System_Action_WarBoardPieceBaseComponent__TypeInfo, v6);
    sub_B16FFC(&Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___, v9);
    sub_B16FFC(&Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__, v10);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__, v11);
    sub_B16FFC(&System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo, v12);
    sub_B16FFC(&System_Func_WarBoardPieceBaseComponent__bool__TypeInfo, v13);
    sub_B16FFC(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__, v14);
    sub_B16FFC(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__, v15);
    sub_B16FFC(&Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__, v16);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v17);
    byte_40F89EF = 1;
  }
  pieces = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.pieces;
  v19 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v19 = WarBoardData___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__192_0;
  if ( !_9__192_0 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v22 = (Il2CppObject *)static_fields->__9;
    _9__192_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                  System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__192_0,
      v22,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_0__,
      (const MethodInfo_2B6C28C *)Method_System_Func_WarBoardPieceData__WarBoardPieceBaseComponent___ctor__);
    v23 = WarBoardData___c_TypeInfo->static_fields;
    v23->__9__192_0 = (struct System_Func_WarBoardPieceData__WarBoardPieceBaseComponent__o *)_9__192_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v23->__9__192_0,
      (System_Int32_array **)_9__192_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
          pieces,
          (System_Func_TSource__TResult__o *)_9__192_0,
          (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__WarBoardPieceBaseComponent___);
  v35 = WarBoardData___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)v30;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v35 = WarBoardData___c_TypeInfo;
  }
  v37 = v35->static_fields;
  _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v37->__9__192_1;
  if ( !_9__192_1 )
  {
    if ( (BYTE3(v35->vtable._0_Equals.methodPtr) & 4) != 0 && !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35);
      v37 = WarBoardData___c_TypeInfo->static_fields;
    }
    v39 = (Il2CppObject *)v37->__9;
    _9__192_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                     System_Func_WarBoardPieceBaseComponent__bool__TypeInfo,
                                                                                     v31,
                                                                                     v32,
                                                                                     v33,
                                                                                     v34);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__192_1,
      v39,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceBaseComponent__bool___ctor__);
    v40 = WarBoardData___c_TypeInfo->static_fields;
    v40->__9__192_1 = (struct System_Func_WarBoardPieceBaseComponent__bool__o *)_9__192_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v40->__9__192_1,
      (System_Int32_array **)_9__192_1,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46);
  }
  v47 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v36,
          (System_Func_TSource__bool__o *)_9__192_1,
          (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_WarBoardPieceBaseComponent___);
  v52 = WarBoardData___c_TypeInfo;
  v53 = (System_Collections_Generic_IEnumerable_T__o *)v47;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v52 = WarBoardData___c_TypeInfo;
  }
  v54 = v52->static_fields;
  _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)v54->__9__192_2;
  if ( !_9__192_2 )
  {
    if ( (BYTE3(v52->vtable._0_Equals.methodPtr) & 4) != 0 && !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v54 = WarBoardData___c_TypeInfo->static_fields;
    }
    v56 = (Il2CppObject *)v54->__9;
    _9__192_2 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                                       System_Action_WarBoardPieceBaseComponent__TypeInfo,
                                                                                       v48,
                                                                                       v49,
                                                                                       v50,
                                                                                       v51);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      _9__192_2,
      v56,
      Method_WarBoardData___c__UpdateBuffTurnNoticeDisp_b__192_2__,
      (const MethodInfo_24B7310 *)Method_System_Action_WarBoardPieceBaseComponent___ctor__);
    v57 = WarBoardData___c_TypeInfo->static_fields;
    v57->__9__192_2 = (struct System_Action_WarBoardPieceBaseComponent__o *)_9__192_2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v57->__9__192_2,
      (System_Int32_array **)_9__192_2,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
  }
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v53,
    (System_Action_T__o *)_9__192_2,
    (const MethodInfo_18B756C *)Method_BasicHelper_ForEach_WarBoardPieceBaseComponent___);
}


void __fastcall WarBoardData__UpdateCurrentPartyCost(WarBoardData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  System_Collections_Generic_List_long__o *v27; // x21
  const MethodInfo *v28; // x1
  WarBoardPieceData_array *EditableServantPieces; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  int max_length; // w8
  WarBoardPieceData_array *v33; // x22
  unsigned int v34; // w23
  WarBoardPieceData_o *v35; // x25
  __int64 v36; // x22
  __int64 v37; // x22
  DataManager_o *v38; // x0
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  System_Collections_Generic_IEnumerable_TSource__o *Entities_34340040; // x21
  WarBoardData___c_c *v45; // x8
  struct WarBoardData___c_StaticFields *static_fields; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__143_0; // x22
  Il2CppObject *v48; // x23
  struct WarBoardData___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int32_t v56; // w0
  WebViewManager_o *Instance; // x0
  System_Int32_array **v58; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x3
  __int64 v68; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v69; // x22

  if ( (byte_40F89CC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_UserServantEntity___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v8);
    sub_B16FFC(&Method_System_Func_UserServantEntity__int___ctor__, v9);
    sub_B16FFC(&Method_System_Func_UserServantEntity__bool___ctor__, v10);
    sub_B16FFC(&System_Func_UserServantEntity__bool__TypeInfo, v11);
    sub_B16FFC(&System_Func_UserServantEntity__int__TypeInfo, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_long___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_long__TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__, v18);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__, v19);
    sub_B16FFC(&WarBoardData___c__DisplayClass143_0_TypeInfo, v20);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v21);
    byte_40F89CC = 1;
  }
  v22 = sub_B170CC(WarBoardData___c__DisplayClass143_0_TypeInfo, method, v2, v3, v4);
  WarBoardData___c__DisplayClass143_0___ctor((WarBoardData___c__DisplayClass143_0_o *)v22, 0LL);
  v27 = (System_Collections_Generic_List_long__o *)sub_B170CC(
                                                     System_Collections_Generic_List_long__TypeInfo,
                                                     v23,
                                                     v24,
                                                     v25,
                                                     v26);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_2F15744 *)Method_System_Collections_Generic_List_long___ctor__);
  EditableServantPieces = WarBoardData__GetEditableServantPieces(this, v28);
  if ( !EditableServantPieces )
    goto LABEL_28;
  max_length = EditableServantPieces->max_length;
  v33 = EditableServantPieces;
  if ( max_length >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      if ( v34 >= max_length )
      {
        sub_B17100(EditableServantPieces, v30, v31);
        sub_B170A0();
      }
      v35 = v33->m_Items[v34];
      if ( !v35 || !v27 )
        break;
      System_Collections_Generic_List_long___Add(
        v27,
        v35->fields._UserServantId_k__BackingField,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      System_Collections_Generic_List_long___Add(
        v27,
        v35->fields._UserServantEquipId_k__BackingField,
        (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
      max_length = v33->max_length;
      if ( (int)++v34 >= max_length )
        goto LABEL_10;
    }
LABEL_28:
    sub_B170D4();
  }
LABEL_10:
  v36 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v36 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v37 = **(_QWORD **)(v36 + 192);
  if ( (*(_BYTE *)(v37 + 306) & 1) == 0 )
    sub_AAFCFC(v37);
  v38 = **(DataManager_o ***)(v37 + 184);
  if ( !v38 )
    goto LABEL_28;
  MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                v38,
                                                                (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_28;
  Entities_34340040 = (System_Collections_Generic_IEnumerable_TSource__o *)UserServantMaster__GetEntities_34340040(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             v27,
                                                                             0LL);
  v45 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v45 = WarBoardData___c_TypeInfo;
  }
  static_fields = v45->static_fields;
  _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__143_0;
  if ( !_9__143_0 )
  {
    if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v48 = (Il2CppObject *)static_fields->__9;
    _9__143_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                  System_Func_UserServantEntity__int__TypeInfo,
                                                                                  v40,
                                                                                  v41,
                                                                                  v42,
                                                                                  v43);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__143_0,
      v48,
      Method_WarBoardData___c__UpdateCurrentPartyCost_b__143_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_UserServantEntity__int___ctor__);
    v49 = WarBoardData___c_TypeInfo->static_fields;
    v49->__9__143_0 = (struct System_Func_UserServantEntity__int__o *)_9__143_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v49->__9__143_0,
      (System_Int32_array **)_9__143_0,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55);
  }
  v56 = System_Linq_Enumerable__Sum_WarBoardAIRoute_RouteData_(
          Entities_34340040,
          (System_Func_TSource__int__o *)_9__143_0,
          (const MethodInfo_19C4240 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  if ( !this )
    goto LABEL_28;
  this->fields._CurrentPartyCost_k__BackingField = v56;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_28;
  v58 = (System_Int32_array **)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                 (DataManager_o *)Instance,
                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !v22 )
    goto LABEL_28;
  *(_QWORD *)(v22 + 16) = v58;
  sub_B16F98((BattleServantConfConponent_o *)(v22 + 16), v58, v59, v60, v61, v62, v63, v64);
  v69 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_UserServantEntity__bool__TypeInfo,
                                                                             v65,
                                                                             v66,
                                                                             v67,
                                                                             v68);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v69,
    (Il2CppObject *)v22,
    Method_WarBoardData___c__DisplayClass143_0__UpdateCurrentPartyCost_b__1__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_UserServantEntity__bool___ctor__);
  this->fields._CurrentMemberCount_k__BackingField = System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
                                                       Entities_34340040,
                                                       (System_Func_TSource__bool__o *)v69,
                                                       (const MethodInfo_18D4A90 *)Method_System_Linq_Enumerable_Count_UserServantEntity___);
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
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  __int64 v48; // x4
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x3
  __int64 v52; // x4
  WarBoardManager_TaskMultiList_o *v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v62; // x27
  _BOOL8 isPlayerGroup; // x0
  const MethodInfo *range; // x1
  System_String_array **v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  struct WarBoardPieceData_array *pieces; // x25
  int max_length; // w8
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *v70; // x22
  unsigned int v71; // w19
  bool v72; // w26
  WarBoardPieceData_o *v73; // x28
  WarBoardManager_TaskList_o *v74; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  __int64 v79; // x4
  int32_t ConsumedRecoverDonotActCost_k__BackingField; // w20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v81; // x22
  WarBoardEvalValueSquare_EvalValueSquare_o *v82; // x2
  WarBoardEvalValueSquare_EvalValueSquare_o *Item; // x0
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  Il2CppObject *current; // x25
  WarBoardManager_TaskList_o *v89; // x26
  Il2CppClass *v90; // x0
  char v91; // w8
  int monitor_high; // w20
  Il2CppClass *klass; // x0
  Il2CppClass *v94; // x0
  const MethodInfo *v95; // x2
  System_Collections_Generic_IEnumerable_T__o *v96; // x0
  System_Collections_Generic_IEnumerable_T__o *v97; // x0
  __int64 v98; // x3
  __int64 v99; // x4
  WarBoardDataEntity_o *v100; // x22
  EventMissionProgressRequest_Argument_ProgressData_o *EventBossUIDataTask; // x0
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x3
  __int64 v105; // x4
  WarBoardWaitNonBlockingTaskEnd_o *v106; // x20
  WebViewManager_o *Instance; // x0
  struct WarBoardItemData_array *items; // x19
  int v109; // w8
  unsigned int v110; // w20
  WarBoardItemData_o *v111; // x0
  struct WarBoardWallData_array *walls; // x19
  unsigned __int64 v113; // x24
  __int64 v114; // x20
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  System_Int32_array **v120; // x1
  WarBoardWallData_o **v121; // x21
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  System_Collections_Generic_IEnumerable_TSource__o *wallInfo; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v127; // x23
  WarBoardData_SquareRangeSearch_o *v128; // x0
  WarBoardData_SquareRangeSearch_o *v129; // x8
  WarBoardWallData_o *v130; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v131; // [xsp+0h] [xbp-B0h]
  WarBoardData_o *v132; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v133; // [xsp+10h] [xbp-A0h]
  WarBoardManager_TaskMultiList_o *v134; // [xsp+18h] [xbp-98h]
  WarBoardDataEntity_o *v135; // [xsp+20h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v136; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v137; // [xsp+40h] [xbp-70h] BYREF

  if ( (byte_40F89D1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__, warBoardDataEntity);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__, v14);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo, v15);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___, v16);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__, v17);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__, v18);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__get_Current__,
      v19);
    sub_B16FFC(&Method_System_Func_WarBoardUserWallData__bool___ctor__, v20);
    sub_B16FFC(&System_Func_WarBoardUserWallData__bool__TypeInfo, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__, v22);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__Add__, v25);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v28);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardTaskBase__get_Count__, v30);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardTaskBase__TypeInfo, v31);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v32);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo, v33);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v34);
    sub_B16FFC(&WarBoardManager_TaskList_TypeInfo, v35);
    sub_B16FFC(&WarBoardManager_TaskMultiList_TypeInfo, v36);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__, v37);
    sub_B16FFC(&WarBoardData___c__DisplayClass151_0_TypeInfo, v38);
    sub_B16FFC(&WarBoardWaitNonBlockingTaskEnd_TypeInfo, v39);
    byte_40F89D1 = 1;
  }
  memset(&v137, 0, sizeof(v137));
  p_serverData = &this->fields.serverData;
  if ( !this->fields.serverData )
    return;
  this->fields.serverData = warBoardDataEntity;
  v135 = warBoardDataEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.serverData,
    (System_Int32_array **)warBoardDataEntity,
    (System_String_array **)forceUpdate,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  v131 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_WarBoardTaskBase__TypeInfo,
                                                                                                   v41,
                                                                                                   v42,
                                                                                                   v43,
                                                                                                   v44);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v131,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardTaskBase___ctor__);
  v134 = (WarBoardManager_TaskMultiList_o *)sub_B170CC(WarBoardManager_TaskMultiList_TypeInfo, v45, v46, v47, v48);
  WarBoardManager_TaskMultiList___ctor(v134, 0LL);
  v53 = (WarBoardManager_TaskMultiList_o *)sub_B170CC(WarBoardManager_TaskMultiList_TypeInfo, v49, v50, v51, v52);
  WarBoardManager_TaskMultiList___ctor(v53, 0LL);
  v133 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                    System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___TypeInfo,
                                                                                                    v54,
                                                                                                    v55,
                                                                                                    v56,
                                                                                                    v57);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v133,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData____ctor__);
  v62 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__TypeInfo,
                                                                                                  v58,
                                                                                                  v59,
                                                                                                  v60,
                                                                                                  v61);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v62,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList___ctor__);
  pieces = this->fields.pieces;
  v132 = this;
  if ( !pieces )
    goto LABEL_71;
  max_length = pieces->max_length;
  v70 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v133;
  if ( max_length >= 1 )
  {
    v71 = 0;
    v72 = forceUpdate;
    while ( v71 < max_length )
    {
      v73 = pieces->m_Items[v71];
      v74 = (WarBoardManager_TaskList_o *)sub_B170CC(WarBoardManager_TaskList_TypeInfo, range, v65, v66, v67);
      WarBoardManager_TaskList___ctor(v74, 0LL);
      if ( !v73 )
        goto LABEL_71;
      WarBoardPieceData__UpdateFromServerData(
        v73,
        *p_serverData,
        (System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *)v62,
        v74,
        v72,
        0LL);
      if ( !v74 )
        goto LABEL_71;
      if ( v74->fields._size >= 1 )
      {
        if ( v73->fields._isDead_k__BackingField )
        {
          if ( !v53 )
            goto LABEL_71;
          v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v53;
        }
        else
        {
          v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v134;
          if ( !v134 )
            goto LABEL_71;
        }
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v75,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      isPlayerGroup = WarBoardPieceData__get_isPlayerGroup(v73, 0LL);
      if ( isPlayerGroup )
      {
        isPlayerGroup = WarBoardPieceData__get_isMaster(v73, 0LL);
        if ( !isPlayerGroup && v73->fields._IsDispConsumedPieceActionPoint_k__BackingField )
        {
          if ( !v70 )
            goto LABEL_71;
          if ( !System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData___ContainsKey(
                  v70,
                  v73->fields._ConsumedRecoverDonotActCost_k__BackingField,
                  (const MethodInfo_2DE9630 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___ContainsKey__) )
          {
            ConsumedRecoverDonotActCost_k__BackingField = v73->fields._ConsumedRecoverDonotActCost_k__BackingField;
            v81 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v76, v77, v78, v79);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v81,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
            v82 = (WarBoardEvalValueSquare_EvalValueSquare_o *)v81;
            v70 = (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_RouteData__o *)v133;
            System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
              v133,
              ConsumedRecoverDonotActCost_k__BackingField,
              v82,
              (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Add__);
          }
          Item = System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Item(
                   (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v70,
                   v73->fields._ConsumedRecoverDonotActCost_k__BackingField,
                   (const MethodInfo_2DE92F8 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Item__);
          if ( !Item )
            goto LABEL_71;
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      max_length = pieces->max_length;
      if ( (int)++v71 >= max_length )
        goto LABEL_25;
    }
LABEL_72:
    sub_B17100(isPlayerGroup, range, v65);
    sub_B170A0();
  }
LABEL_25:
  if ( !v62 )
    goto LABEL_71;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v136,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v62,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__GetEnumerator__);
  v137 = v136;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v137,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__MoveNext__) )
  {
    current = v137.fields.current;
    v89 = (WarBoardManager_TaskList_o *)sub_B170CC(WarBoardManager_TaskList_TypeInfo, v84, v85, v86, v87);
    WarBoardManager_TaskList___ctor(v89, 0LL);
    if ( !current )
      sub_B170D4();
    if ( ((__int64)current[1].monitor & 0x80000000) != 0 )
    {
      monitor_high = HIDWORD(current[1].monitor);
      if ( monitor_high >= 1 )
      {
        klass = current[1].klass;
        if ( !klass )
          sub_B170D4();
        (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))klass->_1.image
         + 101))(
          klass,
          (unsigned int)monitor_high,
          0LL,
          v89,
          0xFFFFFFFFLL,
          0LL,
          1LL,
          *((_QWORD *)klass->_1.image + 102));
      }
      v94 = current[1].klass;
      if ( !v94 )
        sub_B170D4();
      (*((void (**)(void))v94->_1.image + 103))();
      v91 = 1;
      if ( !v89 )
LABEL_74:
        sub_B170D4();
    }
    else
    {
      v90 = current[1].klass;
      if ( !v90 )
        sub_B170D4();
      (*((void (__fastcall **)(Il2CppClass *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, _QWORD))v90->_1.image
       + 101))(
        v90,
        HIDWORD(current[1].monitor),
        0LL,
        v89,
        0xFFFFFFFFLL,
        0LL,
        1LL,
        *((_QWORD *)v90->_1.image + 102));
      v91 = 0;
      if ( !v89 )
        goto LABEL_74;
    }
    if ( v89->fields._size >= 1 )
    {
      if ( (v91 & 1) != 0 )
      {
        if ( !v53 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v53,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
      else
      {
        if ( !v134 )
          sub_B170D4();
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v134,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v137,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WarBoardData_WarBoardDeadBreakList__Dispose__);
  if ( !v133 )
    goto LABEL_71;
  if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___get_Count(
         v133,
         (const MethodInfo_2DE8FB8 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___get_Count__) >= 1 )
    WarBoardData__ShowConsumedPieceActionPointPopup(
      v132,
      (System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *)v133,
      v95);
  if ( !v134 )
    goto LABEL_71;
  v96 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v134, 0LL);
  if ( !v131 )
    goto LABEL_71;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v131,
    v96,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  if ( !v53 )
    goto LABEL_71;
  v97 = (System_Collections_Generic_IEnumerable_T__o *)WarBoardManager_TaskMultiList__SortedFlatted(v53, 0LL);
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v131,
    v97,
    (const MethodInfo_2F25F28 *)Method_System_Collections_Generic_List_WarBoardTaskBase__AddRange__);
  v100 = v135;
  if ( v131->fields._size >= 1 )
  {
    EventBossUIDataTask = (EventMissionProgressRequest_Argument_ProgressData_o *)WarBoardData__CreateEventBossUIDataTask(
                                                                                   (WarBoardData_o *)isPlayerGroup,
                                                                                   range);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v131,
      EventBossUIDataTask,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    v106 = (WarBoardWaitNonBlockingTaskEnd_o *)sub_B170CC(
                                                 WarBoardWaitNonBlockingTaskEnd_TypeInfo,
                                                 v102,
                                                 v103,
                                                 v104,
                                                 v105);
    WarBoardWaitNonBlockingTaskEnd___ctor(v106, 0LL);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v131,
      (EventMissionProgressRequest_Argument_ProgressData_o *)v106,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardTaskBase__Add__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_71;
    WarBoardManager__InsertTask_18091616(
      (WarBoardManager_o *)Instance,
      0,
      (System_Collections_Generic_List_WarBoardTaskBase__o *)v131,
      0LL);
  }
  items = v132->fields.items;
  if ( !items )
    goto LABEL_71;
  v109 = items->max_length;
  if ( v109 >= 1 )
  {
    v110 = 0;
    while ( v110 < v109 )
    {
      v111 = items->m_Items[v110];
      if ( !v111 )
        goto LABEL_71;
      WarBoardItemData__UpdateFromServerData(v111, *p_serverData, 0LL);
      v109 = items->max_length;
      if ( (int)++v110 >= v109 )
        goto LABEL_59;
    }
    goto LABEL_72;
  }
LABEL_59:
  walls = v132->fields.walls;
  if ( !walls )
LABEL_71:
    sub_B170D4();
  if ( (int)walls->max_length >= 1 )
  {
    v113 = 0LL;
    while ( 1 )
    {
      v114 = sub_B170CC(WarBoardData___c__DisplayClass151_0_TypeInfo, range, v65, v98, v99);
      WarBoardData___c__DisplayClass151_0___ctor((WarBoardData___c__DisplayClass151_0_o *)v114, 0LL);
      if ( v113 >= walls->max_length )
        goto LABEL_72;
      if ( !v114 )
        goto LABEL_71;
      v120 = (System_Int32_array **)walls->m_Items[v113];
      *(_QWORD *)(v114 + 16) = v120;
      v121 = (WarBoardWallData_o **)(v114 + 16);
      sub_B16F98((BattleServantConfConponent_o *)(v114 + 16), v120, v65, v115, v116, v117, v118, v119);
      if ( !v100 )
        goto LABEL_71;
      wallInfo = (System_Collections_Generic_IEnumerable_TSource__o *)v100->fields.wallInfo;
      v127 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                  System_Func_WarBoardUserWallData__bool__TypeInfo,
                                                                                  v122,
                                                                                  v123,
                                                                                  v124,
                                                                                  v125);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v127,
        (Il2CppObject *)v114,
        Method_WarBoardData___c__DisplayClass151_0__UpdateFromServerData_b__0__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserWallData__bool___ctor__);
      v128 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
               wallInfo,
               (System_Func_TSource__bool__o *)v127,
               (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserWallData___);
      if ( v128 )
      {
        v129 = v128;
        v130 = *v121;
        if ( !*v121 )
          goto LABEL_71;
        range = (const MethodInfo *)(unsigned int)v129->fields.range;
        if ( v130->fields._breakPoint_k__BackingField > (int)range )
          WarBoardWallData__SetBreakPoint(v130, (int32_t)range, 0LL);
      }
      v100 = v135;
      if ( (__int64)++v113 >= (int)walls->max_length )
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
    sub_B170D4();
  v4 = WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(participantInfo, 0LL);
  this->fields.latestBattlePieceUniqueIndexes = v4;
  sub_B16F98(
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

  if ( (byte_40F89E1 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, *(_QWORD *)&fromSquareIndex);
    byte_40F89E1 = 1;
  }
  v7 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 2LL, *(_QWORD *)&toSquareIndex);
  if ( !v7 )
    sub_B170D4();
  max_length = v7->max_length;
  if ( !max_length || (v7->m_Items[1] = fromSquareIndex, max_length == 1) )
  {
    sub_B17100(v7, v7, v8);
    sub_B170A0();
  }
  v7->m_Items[2] = toSquareIndex;
  this->fields.latestPieceActionSquareIndexes = v7;
  sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_T__o *squares; // x23
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v12; // x22
  struct WarBoardSquareData_array *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattleServantConfConponent_o *p_condSquares; // x19
  System_Collections_Generic_IEnumerable_T__o *condSquares; // t1
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v26; // x21
  System_Int32_array **v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_40F89C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardSquareData__Add__, square);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardSquareData__Remove__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardSquareData___ctor___66752000, v9);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardSquareData__TypeInfo, v10);
    byte_40F89C5 = 1;
  }
  squares = (System_Collections_Generic_IEnumerable_T__o *)this->fields.squares;
  v12 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                                          square,
                                                                          method,
                                                                          v3,
                                                                          v4);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v12,
    squares,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___66752000);
  if ( !v12 )
    goto LABEL_6;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v12,
    (EventMissionProgressRequest_Argument_ProgressData_o *)square,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardSquareData__Add__);
  v13 = (struct WarBoardSquareData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                             (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                             (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  this->fields.squares = v13;
  sub_B16F98(
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
  v26 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_WarBoardSquareData__TypeInfo,
                                                                          v22,
                                                                          v23,
                                                                          v24,
                                                                          v25);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v26,
    condSquares,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_WarBoardSquareData___ctor___66752000);
  if ( !v26 )
LABEL_6:
    sub_B170D4();
  System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
    (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v26,
    (WarBoardManager_TaskList_o *)square,
    (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_WarBoardSquareData__Remove__);
  v27 = (System_Int32_array **)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                 (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
                                 (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardSquareData__ToArray__);
  p_condSquares->klass = (BattleServantConfConponent_c *)v27;
  sub_B16F98(p_condSquares, v27, v28, v29, v30, v31, v32, v33);
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
  __int64 v11; // x3
  __int64 v12; // x4
  il2cpp_array_size_t max_length; // w8
  WarBoardManager_TaskList_o *v14; // x1
  WarBoardUiData_o *v15; // x22
  struct System_Collections_Generic_List_WarBoardUiData__o *v16; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *listUiData; // x0

  if ( (byte_40F89F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, *(_QWORD *)&squareIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_B16FFC(&WarBoardUiData_TypeInfo, v8);
    byte_40F89F2 = 1;
  }
  UiData = WarBoardData__GetUiData(this, squareIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v14 = (WarBoardManager_TaskList_o *)UiData;
  if ( UiData )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys(UiData, setKeys, 0LL);
      return;
    }
    listUiData = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.listUiData;
    if ( listUiData )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        listUiData,
        v14,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  if ( max_length )
  {
    v15 = (WarBoardUiData_o *)sub_B170CC(WarBoardUiData_TypeInfo, 0LL, v10, v11, v12);
    WarBoardUiData___ctor_26378232(v15, squareIndex, setKeys, 0LL);
    v16 = this->fields.listUiData;
    if ( v16 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
      return;
    }
    goto LABEL_13;
  }
}


void __fastcall WarBoardData__UpdateUiData_22626432(
        WarBoardData_o *this,
        System_Int32_array *pieceIndex,
        System_String_array *setKeys,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WarBoardUiData_o *UiData_22672252; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  il2cpp_array_size_t max_length; // w8
  WarBoardManager_TaskList_o *v14; // x1
  WarBoardUiData_o *v15; // x22
  struct System_Collections_Generic_List_WarBoardUiData__o *v16; // x0
  System_Collections_Generic_List_WarBoardManager_TaskList__o *listUiData; // x0

  if ( (byte_40F89F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__Add__, pieceIndex);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__Remove__, v7);
    sub_B16FFC(&WarBoardUiData_TypeInfo, v8);
    byte_40F89F3 = 1;
  }
  UiData_22672252 = WarBoardData__GetUiData_22672252(this, pieceIndex, (const MethodInfo *)setKeys);
  if ( !setKeys )
    goto LABEL_13;
  max_length = setKeys->max_length;
  v14 = (WarBoardManager_TaskList_o *)UiData_22672252;
  if ( UiData_22672252 )
  {
    if ( max_length )
    {
      WarBoardUiData__SetKeys(UiData_22672252, setKeys, 0LL);
      return;
    }
    listUiData = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.listUiData;
    if ( listUiData )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        listUiData,
        v14,
        (const MethodInfo_2F27684 *)Method_System_Collections_Generic_List_WarBoardUiData__Remove__);
      return;
    }
LABEL_13:
    sub_B170D4();
  }
  if ( max_length )
  {
    v15 = (WarBoardUiData_o *)sub_B170CC(WarBoardUiData_TypeInfo, 0LL, v10, v11, v12);
    WarBoardUiData___ctor_26378316(v15, pieceIndex, setKeys, 0LL);
    v16 = this->fields.listUiData;
    if ( v16 )
    {
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v16,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardUiData__Add__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct WarBoardPieceData_array *pieces; // x19
  WarBoardData___c_c *v11; // x0
  struct WarBoardData___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__62_0; // x20
  Il2CppObject *v14; // x21
  struct WarBoardData___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int64_t result; // x0

  if ( (byte_40F899E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Find_WarBoardPieceData___, method);
    sub_B16FFC(&Method_System_Predicate_WarBoardPieceData___ctor__, v6);
    sub_B16FFC(&System_Predicate_WarBoardPieceData__TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__, v8);
    sub_B16FFC(&WarBoardData___c_TypeInfo, v9);
    byte_40F899E = 1;
  }
  pieces = this->fields.pieces;
  v11 = WarBoardData___c_TypeInfo;
  if ( (BYTE3(WarBoardData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData___c_TypeInfo);
    v11 = WarBoardData___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__62_0;
  if ( !_9__62_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = WarBoardData___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__62_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_WarBoardPieceData__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__62_0,
      v14,
      Method_WarBoardData___c__get_PlayerMasterUserEquipId_b__62_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_WarBoardPieceData___ctor__);
    v15 = WarBoardData___c_TypeInfo->static_fields;
    v15->__9__62_0 = (struct System_Predicate_WarBoardPieceData__o *)_9__62_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__62_0,
      (System_Int32_array **)_9__62_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  result = (int64_t)System_Array__Find_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_(
                      (WellFired_USFGOPlayStandardCutInLimitCount_OverwriteCutIn_array *)pieces,
                      (System_Predicate_T__o *)_9__62_0,
                      (const MethodInfo_20441E8 *)Method_System_Array_Find_WarBoardPieceData___);
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
    sub_B170D4();
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
  sub_B16F98(
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(v7, attackPieceData, targetPieceData, v8);
  this->fields._Participants_k__BackingField = v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v10, v11, v12, v13, v14, v15);
}


void __fastcall WarBoardData_BattleParticipantInfo___ctor_20739260(
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
  __int64 v13; // x3
  __int64 v14; // x4
  __int64 v15; // x21
  WebViewManager_o *Instance; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **monitor; // x1
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Func_uint__WarBoardPieceData__o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  struct WarBoardPieceData_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40F7ADD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___, uniqueIndexArray);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___, v5);
    sub_B16FFC(&Method_System_Func_uint__WarBoardPieceData___ctor__, v6);
    sub_B16FFC(&System_Func_uint__WarBoardPieceData__TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B16FFC(&Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__, v9);
    sub_B16FFC(&WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v10);
    byte_40F7ADD = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v15 = sub_B170CC(WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_TypeInfo, v11, v12, v13, v14);
  WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor(
    (WarBoardData_BattleParticipantInfo___c__DisplayClass13_0_o *)v15,
    0LL);
  if ( !uniqueIndexArray )
    goto LABEL_9;
  if ( (int)uniqueIndexArray->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( Instance && v15 )
    {
      monitor = (System_Int32_array **)Instance[4].monitor;
      *(_QWORD *)(v15 + 16) = monitor;
      sub_B16F98((BattleServantConfConponent_o *)(v15 + 16), monitor, v17, v18, v19, v20, v21, v22);
      v28 = (System_Func_uint__WarBoardPieceData__o *)sub_B170CC(
                                                        System_Func_uint__WarBoardPieceData__TypeInfo,
                                                        v24,
                                                        v25,
                                                        v26,
                                                        v27);
      System_Func_uint__WarBoardPieceData____ctor(
        v28,
        (Il2CppObject *)v15,
        Method_WarBoardData_BattleParticipantInfo___c__DisplayClass13_0___ctor_b__0__,
        (const MethodInfo_2B722C8 *)Method_System_Func_uint__WarBoardPieceData___ctor__);
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_uint__WarBoardPieceData_(
                                                                   (System_Collections_Generic_IEnumerable_TSource__o *)uniqueIndexArray,
                                                                   (System_Func_TSource__TResult__o *)v28,
                                                                   (const MethodInfo_19C1878 *)Method_System_Linq_Enumerable_Select_uint__WarBoardPieceData___);
      v30 = (struct WarBoardPieceData_array *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                v29,
                                                (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardPieceData___);
      this->fields._Participants_k__BackingField = v30;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields,
        (System_Int32_array **)v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36);
      return;
    }
LABEL_9:
    sub_B170D4();
  }
  this->fields._Invalid_k__BackingField = 1;
}


WarBoardPieceData_array *__fastcall WarBoardData_BattleParticipantInfo__AggregateBattleParticipants(
        WarBoardData_BattleParticipantInfo_o *this,
        WarBoardPieceData_o *attackPieceData,
        WarBoardPieceData_o *targetPieceData,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x19
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  WarBoardPieceData_array *PicesForRangeIsAlive; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x8
  WarBoardPieceData_array *v19; // x20
  unsigned __int64 v20; // x23
  WarBoardPieceData_o **m_Items; // x24
  WarBoardManager_TaskList_o *v22; // x21

  if ( (byte_40F7ADF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__Add__, attackPieceData);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__Contains__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_WarBoardPieceData__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    byte_40F7ADF = 1;
  }
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WarBoardPieceData__TypeInfo,
                                                                                                  attackPieceData,
                                                                                                  targetPieceData,
                                                                                                  method,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WarBoardPieceData___ctor__);
  if ( !v12
    || (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)attackPieceData,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          (EventMissionProgressRequest_Argument_ProgressData_o *)targetPieceData,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || !targetPieceData
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL
    || (PicesForRangeIsAlive = WarBoardData__GetPicesForRangeIsAlive(
                                 monitor,
                                 targetPieceData->fields._nowSquareIndex_k__BackingField,
                                 1,
                                 1,
                                 0LL)) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  v18 = *(_QWORD *)&PicesForRangeIsAlive->max_length;
  v19 = PicesForRangeIsAlive;
  if ( (int)v18 >= 1 )
  {
    v20 = 0LL;
    m_Items = PicesForRangeIsAlive->m_Items;
    do
    {
      if ( v20 >= (unsigned int)v18 )
      {
        sub_B17100(PicesForRangeIsAlive, v16, v17);
        sub_B170A0();
      }
      v22 = (WarBoardManager_TaskList_o *)m_Items[v20];
      PicesForRangeIsAlive = (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                          (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v12,
                                                          v22,
                                                          (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_WarBoardPieceData__Contains__);
      if ( ((unsigned __int8)PicesForRangeIsAlive & 1) == 0 )
      {
        if ( !v22 )
          goto LABEL_19;
        PicesForRangeIsAlive = (WarBoardPieceData_array *)WarBoardPieceData__get_isMaster(
                                                            (WarBoardPieceData_o *)v22,
                                                            0LL);
        if ( ((unsigned __int8)PicesForRangeIsAlive & 1) == 0 )
        {
          PicesForRangeIsAlive = (WarBoardPieceData_array *)WarBoardPieceData__HasAvailableWarBoardNotAttackedBuff(
                                                              (WarBoardPieceData_o *)v22,
                                                              0LL);
          if ( ((unsigned __int8)PicesForRangeIsAlive & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v12,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardPieceData__Add__);
        }
      }
      LODWORD(v18) = v19->max_length;
      ++v20;
    }
    while ( (__int64)v20 < (int)v18 );
  }
  return (WarBoardPieceData_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v12,
                                      (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_WarBoardPieceData__ToArray__);
}


WarBoardData_BattleParticipantInfo_o *__fastcall WarBoardData_BattleParticipantInfo__LoadFromUniqueIndex(
        System_UInt32_array *uniqueIndexArray,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  WarBoardData_BattleParticipantInfo_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_40F7AE0 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardData_BattleParticipantInfo_TypeInfo, method);
    byte_40F7AE0 = 1;
  }
  v6 = (WarBoardData_BattleParticipantInfo_o *)sub_B170CC(
                                                 WarBoardData_BattleParticipantInfo_TypeInfo,
                                                 method,
                                                 v2,
                                                 v3,
                                                 v4);
  WarBoardData_BattleParticipantInfo___ctor_20739260(v6, uniqueIndexArray, v7);
  return v6;
}


System_UInt32_array *__fastcall WarBoardData_BattleParticipantInfo__ToUniqueIndexArray(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Participants_k__BackingField; // x19
  WarBoardData_BattleParticipantInfo___c_c *v12; // x0
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *static_fields; // x8
  System_Func_WarBoardStageNpcEntity__uint__o *_9__14_0; // x20
  Il2CppObject *v15; // x21
  struct WarBoardData_BattleParticipantInfo___c_StaticFields *v16; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0

  if ( (byte_40F7ADE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_uint___, v6);
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__uint___ctor__, v7);
    sub_B16FFC(&System_Func_WarBoardPieceData__uint__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__, v9);
    sub_B16FFC(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v10);
    byte_40F7ADE = 1;
  }
  Participants_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields._Participants_k__BackingField;
  v12 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  if ( (BYTE3(WarBoardData_BattleParticipantInfo___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardData_BattleParticipantInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardData_BattleParticipantInfo___c_TypeInfo);
    v12 = WarBoardData_BattleParticipantInfo___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)static_fields->__9__14_0;
  if ( !_9__14_0 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__14_0 = (System_Func_WarBoardStageNpcEntity__uint__o *)sub_B170CC(
                                                                System_Func_WarBoardPieceData__uint__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    System_Func_WarBoardStageNpcEntity__uint____ctor(
      _9__14_0,
      v15,
      Method_WarBoardData_BattleParticipantInfo___c__ToUniqueIndexArray_b__14_0__,
      (const MethodInfo_2B6D600 *)Method_System_Func_WarBoardPieceData__uint___ctor__);
    v16 = WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
    v16->__9__14_0 = (struct System_Func_WarBoardPieceData__uint__o *)_9__14_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v16->__9__14_0,
      (System_Int32_array **)_9__14_0,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardPieceData__uint_(
                                                               Participants_k__BackingField,
                                                               (System_Func_TSource__TResult__o *)_9__14_0,
                                                               (const MethodInfo_19C1074 *)Method_System_Linq_Enumerable_Select_WarBoardPieceData__uint___);
  return System_Linq_Enumerable__ToArray_uint_(
           v23,
           (const MethodInfo_19C4CE4 *)Method_System_Linq_Enumerable_ToArray_uint___);
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Attacker(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_B170D4();
  if ( !Participants_k__BackingField->max_length )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
  }
  return Participants_k__BackingField->m_Items[0];
}


WarBoardPieceData_o *__fastcall WarBoardData_BattleParticipantInfo__get_Defender(
        WarBoardData_BattleParticipantInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardPieceData_array *Participants_k__BackingField; // x8

  Participants_k__BackingField = this->fields._Participants_k__BackingField;
  if ( !Participants_k__BackingField )
    sub_B170D4();
  if ( Participants_k__BackingField->max_length <= 1 )
  {
    sub_B17100(this, method, v2);
    sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_41066BE & 1) == 0 )
  {
    sub_B16FFC(&WarBoardData_BattleParticipantInfo___c_TypeInfo, v1);
    byte_41066BE = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardData_BattleParticipantInfo___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardData_BattleParticipantInfo___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
    sub_B170D4();
  return WarBoardData__GetPiece_22645764(warBoardData, x, 0, 0LL);
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
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
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
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  *(_QWORD *)&this->fields.questId = 0LL;
  this->fields.stageId = 0;
  this->fields.pieceSaves = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.pieceSaves, 0LL, v3, v4, v5, v6, v7, v8);
  this->fields.itemSaves = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.itemSaves, 0LL, v9, v10, v11, v12, v13, v14);
  this->fields.treasureSaves = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.treasureSaves, 0LL, v15, v16, v17, v18, v19, v20);
  this->fields.wallSaves = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.wallSaves, 0LL, v21, v22, v23, v24, v25, v26);
  this->fields.squareSaves = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.squareSaves, 0LL, v27, v28, v29, v30, v31, v32);
  this->fields.cameraPos = UnityEngine_Vector2__get_zero(0LL);
  this->fields.cameraSize = 0.0;
  this->fields.onBoardSkillUpdate = 0;
  *(_QWORD *)&this->fields.turn = 0xFFFFFFFF00000000LL;
  this->fields.turnGroupId = -1;
  this->fields.eventSaves = 0LL;
  this->fields.isPlayedHalfDeadMessage = 0;
  *(_QWORD *)&this->fields.randLogicCount = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.eventSaves, 0LL, v33, v34, v35, v36, v37, v38);
  this->fields.winCondId = -1;
  this->fields.latestBattlePieceUniqueIndexes = 0LL;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.latestBattlePieceUniqueIndexes,
    0LL,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields.prevCondSaves = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.prevCondSaves, 0LL, v45, v46, v47, v48, v49, v50);
  this->fields.reinforcementsSaves = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.reinforcementsSaves, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.playedReinforcements = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.playedReinforcements, 0LL, v57, v58, v59, v60, v61, v62);
  this->fields.uiDataSaves = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.uiDataSaves, 0LL, v63, v64, v65, v66, v67, v68);
  this->fields.bgAnimationInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bgAnimationInfo, 0LL, v69, v70, v71, v72, v73, v74);
  this->fields.squareIndexInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.squareIndexInfo, 0LL, v75, v76, v77, v78, v79, v80);
  this->fields.bossBattleInfo = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.bossBattleInfo, 0LL, v81, v82, v83, v84, v85, v86);
}


void __fastcall WarBoardData_WarBoardLocalSaveData___ctor_20740420(
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
  __int64 v37; // x2
  struct WarBoardDataEntity_o *serverData; // x8
  struct WarBoardDataEntity_o *v39; // x8
  struct WarBoardDataEntity_o *v40; // x8
  struct WarBoardDataEntity_o *v41; // x8
  struct WarBoardDataEntity_o *v42; // x8
  struct WarBoardDataEntity_o *v43; // x8
  struct WarBoardPieceData_array *pieces; // x8
  __int64 v45; // x22
  struct WarBoardPieceData_SaveData_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x0
  __int64 v54; // x1
  System_String_array **v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  unsigned __int64 v58; // x24
  signed __int64 v59; // x25
  __int64 v60; // x26
  struct WarBoardPieceData_array *v61; // x8
  struct WarBoardPieceData_SaveData_array *pieceSaves; // x20
  WarBoardPieceData_o *v63; // x23
  WarBoardPieceData_SaveData_o *v64; // x22
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  struct WarBoardItemData_array *items; // x8
  __int64 v71; // x22
  struct WarBoardItemData_SaveData_array *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  __int64 v79; // x3
  __int64 v80; // x4
  unsigned __int64 v81; // x24
  signed __int64 v82; // x25
  __int64 v83; // x26
  struct WarBoardItemData_array *v84; // x8
  struct WarBoardItemData_SaveData_array *itemSaves; // x20
  WarBoardItemData_o *v86; // x23
  WarBoardItemData_SaveData_o *v87; // x22
  const MethodInfo *v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct WarBoardTreasureData_array *treasures; // x8
  __int64 v95; // x22
  struct WarBoardTreasureData_SaveData_array *v96; // x0
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  __int64 v103; // x3
  __int64 v104; // x4
  unsigned __int64 v105; // x24
  signed __int64 v106; // x25
  __int64 v107; // x26
  struct WarBoardTreasureData_array *v108; // x8
  struct WarBoardTreasureData_SaveData_array *treasureSaves; // x20
  WarBoardTreasureData_o *v110; // x23
  WarBoardTreasureData_SaveData_o *v111; // x22
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  struct WarBoardWallData_array *walls; // x8
  __int64 v118; // x22
  struct WarBoardWallData_SaveData_array *v119; // x0
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  __int64 v126; // x3
  __int64 v127; // x4
  unsigned __int64 v128; // x24
  signed __int64 v129; // x25
  __int64 v130; // x26
  struct WarBoardWallData_array *v131; // x8
  struct WarBoardWallData_SaveData_array *wallSaves; // x20
  WarBoardWallData_o *v133; // x23
  WarBoardWallData_SaveData_o *v134; // x22
  System_String_array **v135; // x3
  System_Boolean_array **v136; // x4
  System_Int32_array **v137; // x5
  System_Int32_array *v138; // x6
  System_Int32_array *v139; // x7
  struct WarBoardSquareData_array *squares; // x8
  __int64 v141; // x22
  struct WarBoardSquareData_SaveData_array *v142; // x0
  System_String_array **v143; // x2
  System_String_array **v144; // x3
  System_Boolean_array **v145; // x4
  System_Int32_array **v146; // x5
  System_Int32_array *v147; // x6
  System_Int32_array *v148; // x7
  __int64 v149; // x3
  __int64 v150; // x4
  unsigned __int64 v151; // x24
  signed __int64 v152; // x25
  __int64 v153; // x26
  struct WarBoardSquareData_array *v154; // x8
  struct WarBoardSquareData_SaveData_array *squareSaves; // x20
  WarBoardSquareData_o *v156; // x23
  WarBoardSquareData_SaveData_o *v157; // x22
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  __int64 v163; // x2
  struct System_Collections_Generic_List_WarBoardEventData__o *listEvent; // x8
  int size; // w22
  struct WarBoardEventData_SaveData_array *v166; // x0
  struct WarBoardEventData_SaveData_array **p_eventSaves; // x21
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  __int64 v174; // x1
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  __int64 v181; // x24
  __int64 v182; // x27
  __int64 v183; // x25
  struct System_Collections_Generic_List_WarBoardEventData__o *v184; // x22
  unsigned int *v185; // x28
  WarBoardEventData_o *v186; // x23
  WarBoardEventData_SaveData_o *v187; // x22
  const MethodInfo *v188; // x2
  System_String_array **v189; // x3
  System_Boolean_array **v190; // x4
  System_Int32_array **v191; // x5
  System_Int32_array *v192; // x6
  System_Int32_array *v193; // x7
  __int64 v194; // x8
  System_Int32_array **latestPieceActionSquareIndexes; // x1
  System_Int32_array **latestBattlePieceUniqueIndexes; // x1
  System_String_array **v197; // x2
  System_String_array **v198; // x3
  System_Boolean_array **v199; // x4
  System_Int32_array **v200; // x5
  System_Int32_array *v201; // x6
  System_Int32_array *v202; // x7
  __int64 v203; // x2
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *listPrevCond; // x8
  int v205; // w22
  System_Int32_array **v206; // x0
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  __int64 v213; // x1
  __int64 v214; // x2
  __int64 v215; // x3
  __int64 v216; // x4
  __int64 v217; // x24
  __int64 v218; // x27
  __int64 v219; // x25
  struct System_Collections_Generic_List_WarBoardPrevCondData__o *v220; // x22
  unsigned int *prevCondSaves; // x28
  WarBoardPrevCondData_o *v222; // x23
  WarBoardPrevCondData_SaveData_o *v223; // x22
  System_String_array **v224; // x3
  System_Boolean_array **v225; // x4
  System_Int32_array **v226; // x5
  System_Int32_array *v227; // x6
  System_Int32_array *v228; // x7
  __int64 v229; // x8
  struct System_Collections_Generic_List_HoldReinforcementsData__o *reinforcementsSaveList; // x8
  int v231; // w22
  System_Int32_array **v232; // x0
  System_String_array **v233; // x2
  System_String_array **v234; // x3
  System_Boolean_array **v235; // x4
  System_Int32_array **v236; // x5
  System_Int32_array *v237; // x6
  System_Int32_array *v238; // x7
  __int64 v239; // x1
  __int64 v240; // x2
  __int64 v241; // x3
  __int64 v242; // x4
  __int64 v243; // x24
  __int64 v244; // x27
  __int64 v245; // x25
  struct System_Collections_Generic_List_HoldReinforcementsData__o *v246; // x22
  unsigned int *reinforcementsSaves; // x28
  HoldReinforcementsData_o *v248; // x23
  HoldReinforcementsData_SaveData_o *v249; // x22
  System_String_array **v250; // x3
  System_Boolean_array **v251; // x4
  System_Int32_array **v252; // x5
  System_Int32_array *v253; // x6
  System_Int32_array *v254; // x7
  __int64 v255; // x8
  System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x0
  System_Int32_array **v257; // x0
  System_String_array **v258; // x2
  System_String_array **v259; // x3
  System_Boolean_array **v260; // x4
  System_Int32_array **v261; // x5
  System_Int32_array *v262; // x6
  System_Int32_array *v263; // x7
  __int64 v264; // x2
  struct System_Collections_Generic_List_WarBoardUiData__o *listUiData; // x8
  int v266; // w22
  System_Int32_array **v267; // x0
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  __int64 v274; // x1
  __int64 v275; // x2
  __int64 v276; // x3
  __int64 v277; // x4
  __int64 v278; // x24
  __int64 v279; // x27
  __int64 v280; // x25
  struct System_Collections_Generic_List_WarBoardUiData__o *v281; // x22
  unsigned int *uiDataSaves; // x28
  WarBoardUiData_o *v283; // x23
  WarBoardUiData_SaveData_o *v284; // x22
  System_String_array **v285; // x3
  System_Boolean_array **v286; // x4
  System_Int32_array **v287; // x5
  System_Int32_array *v288; // x6
  System_Int32_array *v289; // x7
  __int64 v290; // x8
  struct WarBoardDataEntity_o *v291; // x8
  int32_t v292; // w22
  __int64 v293; // x2
  System_Int32_array **v294; // x0
  System_String_array **v295; // x2
  System_String_array **v296; // x3
  System_Boolean_array **v297; // x4
  System_Int32_array **v298; // x5
  System_Int32_array *v299; // x6
  System_Int32_array *v300; // x7
  __int64 v301; // x3
  __int64 v302; // x4
  unsigned __int64 v303; // x24
  signed __int64 v304; // x25
  __int64 v305; // x26
  struct WarBoardDataEntity_o *v306; // x8
  struct WarBoardSquareIndexData_array *squareIndexInfo; // x8
  unsigned int *v308; // x20
  WarBoardSquareIndexData_o *v309; // x23
  WarBoardSquareIndexData_SaveData_o *v310; // x22
  System_String_array **v311; // x3
  System_Boolean_array **v312; // x4
  System_Int32_array **v313; // x5
  System_Int32_array *v314; // x6
  System_Int32_array *v315; // x7
  struct WarBoardDataEntity_o *v316; // x8
  int32_t v317; // w22
  __int64 v318; // x2
  System_Int32_array **v319; // x0
  System_String_array **v320; // x2
  System_String_array **v321; // x3
  System_Boolean_array **v322; // x4
  System_Int32_array **v323; // x5
  System_Int32_array *v324; // x6
  System_Int32_array *v325; // x7
  __int64 v326; // x3
  __int64 v327; // x4
  unsigned __int64 v328; // x24
  signed __int64 v329; // x25
  __int64 v330; // x26
  struct WarBoardDataEntity_o *v331; // x8
  struct WarBoardBossBattleData_array *bossBattleInfo; // x8
  unsigned int *v333; // x20
  WarBoardBossBattleData_o *v334; // x23
  WarBoardBossBattleData_SaveData_o *v335; // x22
  const MethodInfo *v336; // x2
  System_String_array **v337; // x3
  System_Boolean_array **v338; // x4
  System_Int32_array **v339; // x5
  System_Int32_array *v340; // x6
  System_Int32_array *v341; // x7
  int32_t ContinueConsumeType_k__BackingField; // w8
  WarBoardData_WarBoardLocalSaveData_o *v343; // [xsp+8h] [xbp-58h]

  if ( (byte_40F7AE1 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___, warBoardData);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData__get_Count__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardEventData__get_Item__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_HoldReinforcementsData__get_Item__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardUiData__get_Item__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPrevCondData__get_Item__, v14);
    sub_B16FFC(&WarBoardUiData_SaveData___TypeInfo, v15);
    sub_B16FFC(&WarBoardSquareData_SaveData___TypeInfo, v16);
    sub_B16FFC(&WarBoardTreasureData_SaveData___TypeInfo, v17);
    sub_B16FFC(&WarBoardSquareIndexData_SaveData___TypeInfo, v18);
    sub_B16FFC(&HoldReinforcementsData_SaveData___TypeInfo, v19);
    sub_B16FFC(&WarBoardItemData_SaveData___TypeInfo, v20);
    sub_B16FFC(&WarBoardBossBattleData_SaveData___TypeInfo, v21);
    sub_B16FFC(&WarBoardEventData_SaveData___TypeInfo, v22);
    sub_B16FFC(&WarBoardPrevCondData_SaveData___TypeInfo, v23);
    sub_B16FFC(&WarBoardPieceData_SaveData___TypeInfo, v24);
    sub_B16FFC(&WarBoardWallData_SaveData___TypeInfo, v25);
    sub_B16FFC(&WarBoardItemData_SaveData_TypeInfo, v26);
    sub_B16FFC(&WarBoardPieceData_SaveData_TypeInfo, v27);
    sub_B16FFC(&WarBoardWallData_SaveData_TypeInfo, v28);
    sub_B16FFC(&WarBoardUiData_SaveData_TypeInfo, v29);
    sub_B16FFC(&WarBoardTreasureData_SaveData_TypeInfo, v30);
    sub_B16FFC(&WarBoardEventData_SaveData_TypeInfo, v31);
    sub_B16FFC(&WarBoardSquareData_SaveData_TypeInfo, v32);
    sub_B16FFC(&WarBoardSquareIndexData_SaveData_TypeInfo, v33);
    sub_B16FFC(&WarBoardPrevCondData_SaveData_TypeInfo, v34);
    sub_B16FFC(&HoldReinforcementsData_SaveData_TypeInfo, v35);
    sub_B16FFC(&WarBoardBossBattleData_SaveData_TypeInfo, v36);
    byte_40F7AE1 = 1;
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
  v46 = (struct WarBoardPieceData_SaveData_array *)sub_B17014(
                                                     WarBoardPieceData_SaveData___TypeInfo,
                                                     (unsigned int)v45,
                                                     v37);
  this->fields.pieceSaves = v46;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.pieceSaves,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( (int)v45 >= 1 )
  {
    v58 = 0LL;
    v59 = (int)v45;
    v60 = 32LL;
    while ( 1 )
    {
      v61 = warBoardData->fields.pieces;
      if ( !v61 )
        break;
      if ( v58 >= v61->max_length )
        goto LABEL_129;
      pieceSaves = this->fields.pieceSaves;
      v63 = *(WarBoardPieceData_o **)((char *)&v61->obj.klass + v60);
      v64 = (WarBoardPieceData_SaveData_o *)sub_B170CC(WarBoardPieceData_SaveData_TypeInfo, v54, v55, v56, v57);
      WarBoardPieceData_SaveData___ctor_20437896(v64, v63, 0LL);
      if ( !pieceSaves )
        break;
      if ( v64 )
      {
        v53 = sub_B170BC(v64, pieceSaves->obj.klass->_1.element_class);
        if ( !v53 )
        {
LABEL_130:
          sub_B170F4(v53);
          sub_B170A0();
        }
      }
      if ( v58 >= pieceSaves->max_length )
      {
LABEL_129:
        sub_B17100(v53, v54, v55);
        sub_B170A0();
      }
      *(Il2CppClass **)((char *)&pieceSaves->obj.klass + v60) = (Il2CppClass *)v64;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)pieceSaves + v60),
        (System_Int32_array **)v64,
        v55,
        v65,
        v66,
        v67,
        v68,
        v69);
      ++v58;
      v60 += 8LL;
      if ( (__int64)v58 >= v59 )
        goto LABEL_20;
    }
LABEL_128:
    sub_B170D4();
  }
LABEL_20:
  items = warBoardData->fields.items;
  if ( !items )
    goto LABEL_128;
  v71 = *(_QWORD *)&items->max_length;
  v72 = (struct WarBoardItemData_SaveData_array *)sub_B17014(
                                                    WarBoardItemData_SaveData___TypeInfo,
                                                    (unsigned int)v71,
                                                    v55);
  this->fields.itemSaves = v72;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemSaves,
    (System_Int32_array **)v72,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  if ( (int)v71 >= 1 )
  {
    v81 = 0LL;
    v82 = (int)v71;
    v83 = 32LL;
    do
    {
      v84 = warBoardData->fields.items;
      if ( !v84 )
        goto LABEL_128;
      if ( v81 >= v84->max_length )
        goto LABEL_129;
      itemSaves = this->fields.itemSaves;
      v86 = *(WarBoardItemData_o **)((char *)&v84->obj.klass + v83);
      v87 = (WarBoardItemData_SaveData_o *)sub_B170CC(WarBoardItemData_SaveData_TypeInfo, v54, v55, v79, v80);
      WarBoardItemData_SaveData___ctor_20743588(v87, v86, v88);
      if ( !itemSaves )
        goto LABEL_128;
      if ( v87 )
      {
        v53 = sub_B170BC(v87, itemSaves->obj.klass->_1.element_class);
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v81 >= itemSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&itemSaves->obj.klass + v83) = (Il2CppClass *)v87;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)itemSaves + v83),
        (System_Int32_array **)v87,
        v55,
        v89,
        v90,
        v91,
        v92,
        v93);
      ++v81;
      v83 += 8LL;
    }
    while ( (__int64)v81 < v82 );
  }
  treasures = warBoardData->fields.treasures;
  if ( !treasures )
    goto LABEL_128;
  v95 = *(_QWORD *)&treasures->max_length;
  v96 = (struct WarBoardTreasureData_SaveData_array *)sub_B17014(
                                                        WarBoardTreasureData_SaveData___TypeInfo,
                                                        (unsigned int)v95,
                                                        v55);
  this->fields.treasureSaves = v96;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.treasureSaves,
    (System_Int32_array **)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
  if ( (int)v95 >= 1 )
  {
    v105 = 0LL;
    v106 = (int)v95;
    v107 = 32LL;
    do
    {
      v108 = warBoardData->fields.treasures;
      if ( !v108 )
        goto LABEL_128;
      if ( v105 >= v108->max_length )
        goto LABEL_129;
      treasureSaves = this->fields.treasureSaves;
      v110 = *(WarBoardTreasureData_o **)((char *)&v108->obj.klass + v107);
      v111 = (WarBoardTreasureData_SaveData_o *)sub_B170CC(WarBoardTreasureData_SaveData_TypeInfo, v54, v55, v103, v104);
      WarBoardTreasureData_SaveData___ctor_20450868(v111, v110, 0LL);
      if ( !treasureSaves )
        goto LABEL_128;
      if ( v111 )
      {
        v53 = sub_B170BC(v111, treasureSaves->obj.klass->_1.element_class);
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v105 >= treasureSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&treasureSaves->obj.klass + v107) = (Il2CppClass *)v111;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)treasureSaves + v107),
        (System_Int32_array **)v111,
        v55,
        v112,
        v113,
        v114,
        v115,
        v116);
      ++v105;
      v107 += 8LL;
    }
    while ( (__int64)v105 < v106 );
  }
  walls = warBoardData->fields.walls;
  if ( !walls )
    goto LABEL_128;
  v118 = *(_QWORD *)&walls->max_length;
  v119 = (struct WarBoardWallData_SaveData_array *)sub_B17014(
                                                     WarBoardWallData_SaveData___TypeInfo,
                                                     (unsigned int)v118,
                                                     v55);
  this->fields.wallSaves = v119;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.wallSaves,
    (System_Int32_array **)v119,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  if ( (int)v118 >= 1 )
  {
    v128 = 0LL;
    v129 = (int)v118;
    v130 = 32LL;
    do
    {
      v131 = warBoardData->fields.walls;
      if ( !v131 )
        goto LABEL_128;
      if ( v128 >= v131->max_length )
        goto LABEL_129;
      wallSaves = this->fields.wallSaves;
      v133 = *(WarBoardWallData_o **)((char *)&v131->obj.klass + v130);
      v134 = (WarBoardWallData_SaveData_o *)sub_B170CC(WarBoardWallData_SaveData_TypeInfo, v54, v55, v126, v127);
      WarBoardWallData_SaveData___ctor_20454096(v134, v133, 0LL);
      if ( !wallSaves )
        goto LABEL_128;
      if ( v134 )
      {
        v53 = sub_B170BC(v134, wallSaves->obj.klass->_1.element_class);
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v128 >= wallSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&wallSaves->obj.klass + v130) = (Il2CppClass *)v134;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)wallSaves + v130),
        (System_Int32_array **)v134,
        v55,
        v135,
        v136,
        v137,
        v138,
        v139);
      ++v128;
      v130 += 8LL;
    }
    while ( (__int64)v128 < v129 );
  }
  squares = warBoardData->fields.squares;
  if ( !squares )
    goto LABEL_128;
  v141 = *(_QWORD *)&squares->max_length;
  v142 = (struct WarBoardSquareData_SaveData_array *)sub_B17014(
                                                       WarBoardSquareData_SaveData___TypeInfo,
                                                       (unsigned int)v141,
                                                       v55);
  this->fields.squareSaves = v142;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.squareSaves,
    (System_Int32_array **)v142,
    v143,
    v144,
    v145,
    v146,
    v147,
    v148);
  if ( (int)v141 >= 1 )
  {
    v151 = 0LL;
    v152 = (int)v141;
    v153 = 32LL;
    do
    {
      v154 = warBoardData->fields.squares;
      if ( !v154 )
        goto LABEL_128;
      if ( v151 >= v154->max_length )
        goto LABEL_129;
      squareSaves = this->fields.squareSaves;
      v156 = *(WarBoardSquareData_o **)((char *)&v154->obj.klass + v153);
      v157 = (WarBoardSquareData_SaveData_o *)sub_B170CC(WarBoardSquareData_SaveData_TypeInfo, v54, v55, v149, v150);
      WarBoardSquareData_SaveData___ctor_20445916(v157, v156, 0LL);
      if ( !squareSaves )
        goto LABEL_128;
      if ( v157 )
      {
        v53 = sub_B170BC(v157, squareSaves->obj.klass->_1.element_class);
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v151 >= squareSaves->max_length )
        goto LABEL_129;
      *(Il2CppClass **)((char *)&squareSaves->obj.klass + v153) = (Il2CppClass *)v157;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)squareSaves + v153),
        (System_Int32_array **)v157,
        v55,
        v158,
        v159,
        v160,
        v161,
        v162);
      ++v151;
      v153 += 8LL;
    }
    while ( (__int64)v151 < v152 );
  }
  this->fields.cameraPos = UnityEngine_Vector2__get_zero(0LL);
  *(_QWORD *)&this->fields.cameraSize = 3212836864LL;
  this->fields.onBoardSkillUpdate = 0;
  this->fields.randLogicCount = BattleRandom__GetLogicCount(0LL);
  this->fields.randGutsCount = BattleRandom__GetGutsCount(0LL);
  this->fields.isPlayedHalfDeadMessage = warBoardData->fields.isPlayedHalfDeadMessage;
  listEvent = warBoardData->fields.listEvent;
  if ( !listEvent )
    goto LABEL_128;
  size = listEvent->fields._size;
  v166 = (struct WarBoardEventData_SaveData_array *)sub_B17014(
                                                      WarBoardEventData_SaveData___TypeInfo,
                                                      (unsigned int)size,
                                                      v163);
  this->fields.eventSaves = v166;
  p_eventSaves = &this->fields.eventSaves;
  v343 = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventSaves,
    (System_Int32_array **)v166,
    v168,
    v169,
    v170,
    v171,
    v172,
    v173);
  if ( size >= 1 )
  {
    v181 = size;
    v182 = 4LL;
    v183 = 8LL;
    do
    {
      v184 = warBoardData->fields.listEvent;
      if ( !v184 )
        goto LABEL_128;
      v185 = (unsigned int *)*p_eventSaves;
      if ( v182 - 4 >= (unsigned __int64)(unsigned int)v184->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v186 = (WarBoardEventData_o *)*((_QWORD *)&v184->fields._items->obj.klass + v182);
      v187 = (WarBoardEventData_SaveData_o *)sub_B170CC(WarBoardEventData_SaveData_TypeInfo, v174, v175, v176, v177);
      WarBoardEventData_SaveData___ctor_20743684(v187, v186, v188);
      if ( !v185 )
        goto LABEL_128;
      if ( v187 )
      {
        v53 = sub_B170BC(v187, *(_QWORD *)(*(_QWORD *)v185 + 64LL));
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v182 - 4 >= (unsigned __int64)v185[6] )
        goto LABEL_129;
      *(_QWORD *)&v185[2 * v182] = v187;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v185[v183],
        (System_Int32_array **)v187,
        v55,
        v189,
        v190,
        v191,
        v192,
        v193);
      v194 = v182 - 3;
      ++v182;
      v183 += 2LL;
    }
    while ( v194 < v181 );
  }
  v343->fields.winCondId = warBoardData->fields.winCondId;
  latestPieceActionSquareIndexes = (System_Int32_array **)warBoardData->fields.latestPieceActionSquareIndexes;
  v343->fields.latestPieceActionSquareIndexes = (struct System_Int32_array *)latestPieceActionSquareIndexes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v343->fields.latestPieceActionSquareIndexes,
    latestPieceActionSquareIndexes,
    v175,
    v176,
    v177,
    v178,
    v179,
    v180);
  latestBattlePieceUniqueIndexes = (System_Int32_array **)warBoardData->fields.latestBattlePieceUniqueIndexes;
  v343->fields.latestBattlePieceUniqueIndexes = (struct System_UInt32_array *)latestBattlePieceUniqueIndexes;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v343->fields.latestBattlePieceUniqueIndexes,
    latestBattlePieceUniqueIndexes,
    v197,
    v198,
    v199,
    v200,
    v201,
    v202);
  listPrevCond = warBoardData->fields.listPrevCond;
  if ( !listPrevCond )
    goto LABEL_128;
  v205 = listPrevCond->fields._size;
  v206 = (System_Int32_array **)sub_B17014(WarBoardPrevCondData_SaveData___TypeInfo, (unsigned int)v205, v203);
  v343->fields.prevCondSaves = (struct WarBoardPrevCondData_SaveData_array *)v206;
  sub_B16F98((BattleServantConfConponent_o *)&v343->fields.prevCondSaves, v206, v207, v208, v209, v210, v211, v212);
  if ( v205 >= 1 )
  {
    v217 = v205;
    v218 = 4LL;
    v219 = 8LL;
    do
    {
      v220 = warBoardData->fields.listPrevCond;
      if ( !v220 )
        goto LABEL_128;
      prevCondSaves = (unsigned int *)v343->fields.prevCondSaves;
      if ( v218 - 4 >= (unsigned __int64)(unsigned int)v220->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v222 = (WarBoardPrevCondData_o *)*((_QWORD *)&v220->fields._items->obj.klass + v218);
      v223 = (WarBoardPrevCondData_SaveData_o *)sub_B170CC(
                                                  WarBoardPrevCondData_SaveData_TypeInfo,
                                                  v213,
                                                  v214,
                                                  v215,
                                                  v216);
      WarBoardPrevCondData_SaveData___ctor_20440148(v223, v222, 0LL);
      if ( !prevCondSaves )
        goto LABEL_128;
      if ( v223 )
      {
        v53 = sub_B170BC(v223, *(_QWORD *)(*(_QWORD *)prevCondSaves + 64LL));
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v218 - 4 >= (unsigned __int64)prevCondSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&prevCondSaves[2 * v218] = v223;
      sub_B16F98(
        (BattleServantConfConponent_o *)&prevCondSaves[v219],
        (System_Int32_array **)v223,
        v55,
        v224,
        v225,
        v226,
        v227,
        v228);
      v229 = v218 - 3;
      ++v218;
      v219 += 2LL;
    }
    while ( v229 < v217 );
  }
  reinforcementsSaveList = warBoardData->fields.reinforcementsSaveList;
  if ( !reinforcementsSaveList )
    goto LABEL_128;
  v231 = reinforcementsSaveList->fields._size;
  v232 = (System_Int32_array **)sub_B17014(HoldReinforcementsData_SaveData___TypeInfo, (unsigned int)v231, v214);
  v343->fields.reinforcementsSaves = (struct HoldReinforcementsData_SaveData_array *)v232;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v343->fields.reinforcementsSaves,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237,
    v238);
  if ( v231 >= 1 )
  {
    v243 = v231;
    v244 = 4LL;
    v245 = 8LL;
    do
    {
      v246 = warBoardData->fields.reinforcementsSaveList;
      if ( !v246 )
        goto LABEL_128;
      reinforcementsSaves = (unsigned int *)v343->fields.reinforcementsSaves;
      if ( v244 - 4 >= (unsigned __int64)(unsigned int)v246->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v248 = (HoldReinforcementsData_o *)*((_QWORD *)&v246->fields._items->obj.klass + v244);
      v249 = (HoldReinforcementsData_SaveData_o *)sub_B170CC(
                                                    HoldReinforcementsData_SaveData_TypeInfo,
                                                    v239,
                                                    v240,
                                                    v241,
                                                    v242);
      HoldReinforcementsData_SaveData___ctor_18605036(v249, v248, 0LL);
      if ( !reinforcementsSaves )
        goto LABEL_128;
      if ( v249 )
      {
        v53 = sub_B170BC(v249, *(_QWORD *)(*(_QWORD *)reinforcementsSaves + 64LL));
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v244 - 4 >= (unsigned __int64)reinforcementsSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&reinforcementsSaves[2 * v244] = v249;
      sub_B16F98(
        (BattleServantConfConponent_o *)&reinforcementsSaves[v245],
        (System_Int32_array **)v249,
        v55,
        v250,
        v251,
        v252,
        v253,
        v254);
      v255 = v244 - 3;
      ++v244;
      v245 += 2LL;
    }
    while ( v255 < v243 );
  }
  playedStageReinforcementsList = warBoardData->fields.playedStageReinforcementsList;
  if ( !playedStageReinforcementsList )
    goto LABEL_128;
  v257 = (System_Int32_array **)System_Collections_Generic_List_int___ToArray(
                                  playedStageReinforcementsList,
                                  (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  v343->fields.playedReinforcements = (struct System_Int32_array *)v257;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v343->fields.playedReinforcements,
    v257,
    v258,
    v259,
    v260,
    v261,
    v262,
    v263);
  listUiData = warBoardData->fields.listUiData;
  if ( !listUiData )
    goto LABEL_128;
  v266 = listUiData->fields._size;
  v267 = (System_Int32_array **)sub_B17014(WarBoardUiData_SaveData___TypeInfo, (unsigned int)v266, v264);
  v343->fields.uiDataSaves = (struct WarBoardUiData_SaveData_array *)v267;
  sub_B16F98((BattleServantConfConponent_o *)&v343->fields.uiDataSaves, v267, v268, v269, v270, v271, v272, v273);
  if ( v266 >= 1 )
  {
    v278 = v266;
    v279 = 4LL;
    v280 = 8LL;
    do
    {
      v281 = warBoardData->fields.listUiData;
      if ( !v281 )
        goto LABEL_128;
      uiDataSaves = (unsigned int *)v343->fields.uiDataSaves;
      if ( v279 - 4 >= (unsigned __int64)(unsigned int)v281->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v283 = (WarBoardUiData_o *)*((_QWORD *)&v281->fields._items->obj.klass + v279);
      v284 = (WarBoardUiData_SaveData_o *)sub_B170CC(WarBoardUiData_SaveData_TypeInfo, v274, v275, v276, v277);
      WarBoardUiData_SaveData___ctor_20451276(v284, v283, 0LL);
      if ( !uiDataSaves )
        goto LABEL_128;
      if ( v284 )
      {
        v53 = sub_B170BC(v284, *(_QWORD *)(*(_QWORD *)uiDataSaves + 64LL));
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v279 - 4 >= (unsigned __int64)uiDataSaves[6] )
        goto LABEL_129;
      *(_QWORD *)&uiDataSaves[2 * v279] = v284;
      sub_B16F98(
        (BattleServantConfConponent_o *)&uiDataSaves[v280],
        (System_Int32_array **)v284,
        v55,
        v285,
        v286,
        v287,
        v288,
        v289);
      v290 = v279 - 3;
      ++v279;
      v280 += 2LL;
    }
    while ( v290 < v278 );
  }
  v291 = warBoardData->fields.serverData;
  if ( !v291 )
    goto LABEL_128;
  v292 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v291->fields.squareIndexInfo,
           (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_WarBoardSquareIndexData___);
  v294 = (System_Int32_array **)sub_B17014(WarBoardSquareIndexData_SaveData___TypeInfo, (unsigned int)v292, v293);
  v343->fields.squareIndexInfo = (struct WarBoardSquareIndexData_SaveData_array *)v294;
  sub_B16F98((BattleServantConfConponent_o *)&v343->fields.squareIndexInfo, v294, v295, v296, v297, v298, v299, v300);
  if ( v292 >= 1 )
  {
    v303 = 0LL;
    v304 = v292;
    v305 = 8LL;
    do
    {
      v306 = warBoardData->fields.serverData;
      if ( !v306 )
        goto LABEL_128;
      squareIndexInfo = v306->fields.squareIndexInfo;
      if ( !squareIndexInfo )
        goto LABEL_128;
      if ( v303 >= squareIndexInfo->max_length )
        goto LABEL_129;
      v308 = (unsigned int *)v343->fields.squareIndexInfo;
      v309 = *(WarBoardSquareIndexData_o **)((char *)&squareIndexInfo->obj.klass + v305 * 4);
      v310 = (WarBoardSquareIndexData_SaveData_o *)sub_B170CC(
                                                     WarBoardSquareIndexData_SaveData_TypeInfo,
                                                     v54,
                                                     v55,
                                                     v301,
                                                     v302);
      WarBoardSquareIndexData_SaveData___ctor_20446248(v310, v309, 0LL);
      if ( !v308 )
        goto LABEL_128;
      if ( v310 )
      {
        v53 = sub_B170BC(v310, *(_QWORD *)(*(_QWORD *)v308 + 64LL));
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v303 >= v308[6] )
        goto LABEL_129;
      *(_QWORD *)&v308[v305] = v310;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v308[v305],
        (System_Int32_array **)v310,
        v55,
        v311,
        v312,
        v313,
        v314,
        v315);
      ++v303;
      v305 += 2LL;
    }
    while ( (__int64)v303 < v304 );
  }
  v316 = warBoardData->fields.serverData;
  if ( !v316 )
    goto LABEL_128;
  v317 = System_Linq_Enumerable__Count_WarBoardSquareIndexData_SaveData_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v316->fields.bossBattleInfo,
           (const MethodInfo_18D3CD8 *)Method_System_Linq_Enumerable_Count_WarBoardBossBattleData___);
  v319 = (System_Int32_array **)sub_B17014(WarBoardBossBattleData_SaveData___TypeInfo, (unsigned int)v317, v318);
  v343->fields.bossBattleInfo = (struct WarBoardBossBattleData_SaveData_array *)v319;
  sub_B16F98((BattleServantConfConponent_o *)&v343->fields.bossBattleInfo, v319, v320, v321, v322, v323, v324, v325);
  if ( v317 >= 1 )
  {
    v328 = 0LL;
    v329 = v317;
    v330 = 8LL;
    do
    {
      v331 = warBoardData->fields.serverData;
      if ( !v331 )
        goto LABEL_128;
      bossBattleInfo = v331->fields.bossBattleInfo;
      if ( !bossBattleInfo )
        goto LABEL_128;
      if ( v328 >= bossBattleInfo->max_length )
        goto LABEL_129;
      v333 = (unsigned int *)v343->fields.bossBattleInfo;
      v334 = *(WarBoardBossBattleData_o **)((char *)&bossBattleInfo->obj.klass + v330 * 4);
      v335 = (WarBoardBossBattleData_SaveData_o *)sub_B170CC(
                                                    WarBoardBossBattleData_SaveData_TypeInfo,
                                                    v54,
                                                    v55,
                                                    v326,
                                                    v327);
      WarBoardBossBattleData_SaveData___ctor_20726172(v335, v334, v336);
      if ( !v333 )
        goto LABEL_128;
      if ( v335 )
      {
        v53 = sub_B170BC(v335, *(_QWORD *)(*(_QWORD *)v333 + 64LL));
        if ( !v53 )
          goto LABEL_130;
      }
      if ( v328 >= v333[6] )
        goto LABEL_129;
      *(_QWORD *)&v333[v330] = v335;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v333[v330],
        (System_Int32_array **)v335,
        v55,
        v337,
        v338,
        v339,
        v340,
        v341);
      ++v328;
      v330 += 2LL;
    }
    while ( (__int64)v328 < v329 );
  }
  ContinueConsumeType_k__BackingField = warBoardData->fields._ContinueConsumeType_k__BackingField;
  *(_WORD *)&v343->fields.isContinue = 0;
  v343->fields.continueConsumeType = ContinueConsumeType_k__BackingField;
  v343->fields.localSaveTiming = warBoardData->fields.localSaveTiming;
}


void __fastcall WarBoardData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7AD2 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardData___c_TypeInfo, v1);
    byte_40F7AD2 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.squareIndex - y->fields.squareIndex;
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_1(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


uint32_t __fastcall WarBoardData___c____ctor_b__77_2(
        WarBoardData___c_o *this,
        WarBoardActionPointEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return (x->fields.forceId << 24) | ((unsigned __int8)x->fields.groupId << 16);
}


int32_t __fastcall WarBoardData___c____ctor_b__77_3(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.forceId;
}


int32_t __fastcall WarBoardData___c____ctor_b__77_4(
        WarBoardData___c_o *this,
        WarBoardStageNpcEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.groupId;
}


bool __fastcall WarBoardData___c____ctor_b__77_9(
        WarBoardData___c_o *this,
        WarBoardUserTreasureData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.isReceived;
}


BattleBuffData_o *__fastcall WarBoardData___c___BuffTurnProgressing_b__191_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *p,
        const MethodInfo *method)
{
  if ( !p )
    sub_B170D4();
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
    sub_B170D4();
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

  if ( (byte_40F7AD4 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F7AD4 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
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
    sub_B170D4();
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isEnemyServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAlivePieces_b__107_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return !x->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardData___c___GetAlivePlayerGroupServantPieces_b__109_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetAliveServantPieces_b__108_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return !x->fields._isDead_k__BackingField && WarBoardPieceData__get_isServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetEditableServantPieces_b__120_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return WarBoardPieceData__get_isPlayerServant(x, 0LL);
}


bool __fastcall WarBoardData___c___GetHoldReinforcements_b__188_0(
        WarBoardData___c_o *this,
        HoldReinforcementsData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields._holdNum_k__BackingField < 1;
}


int32_t __fastcall WarBoardData___c___GetInRangeSquareIndecies_b__123_0(
        WarBoardData___c_o *this,
        WarBoardData_SquareRangeSearch_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.squareIndex;
}


bool __fastcall WarBoardData___c___GetPlayerMasterPiece_b__104_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


bool __fastcall WarBoardData___c___GetPlayerPieces_b__121_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return WarBoardPieceData__get_isPlayerGroup(x, 0LL) && x->fields._iconId_k__BackingField != 0;
}


bool __fastcall WarBoardData___c___IsReachableWinConditions_b__95_0(
        WarBoardData___c_o *this,
        System_Collections_Generic_KeyValuePair_int__bool__o status,
        const MethodInfo *method)
{
  bool value; // x19^4

  value = status.fields.value;
  if ( (byte_40F7AD3 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__bool__get_Value__, status);
    byte_40F7AD3 = 1;
  }
  return value;
}


int32_t __fastcall WarBoardData___c___SetContinue_b__82_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields._index_k__BackingField;
}


bool __fastcall WarBoardData___c___SetPlayerMasterUserEquip_b__144_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return WarBoardPieceData__get_isPlayerMaster(x, 0LL);
}


void __fastcall WarBoardData___c___SetRequest_b__156_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  WarBoardPieceData__SetServarData(x, 0LL);
}


System_String_o *__fastcall WarBoardData___c___SetRequest_b__156_1(
        WarBoardData___c_o *this,
        WarBoardItemData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
  return p->fields.pieceComponent;
}


bool __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_1(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *c,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x19

  if ( (byte_40F7AD5 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, c);
    byte_40F7AD5 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)c, 0LL, 0LL) )
    return 0;
  if ( !c )
    sub_B170D4();
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))c->klass->vtable._4_get_BuffTrunNotice.method)(
                                 c,
                                 c->klass->vtable._5_Initialize.methodPtr);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(v4, 0LL, 0LL);
}


void __fastcall WarBoardData___c___UpdateBuffTurnNoticeDisp_b__192_2(
        WarBoardData___c_o *this,
        WarBoardPieceBaseComponent_o *n,
        const MethodInfo *method)
{
  WarBoardServantPieceBuffTurnComponent_o *v3; // x0

  if ( !n
    || (v3 = (WarBoardServantPieceBuffTurnComponent_o *)((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer, const MethodInfo *))n->klass->vtable._4_get_BuffTrunNotice.method)(
                                                          n,
                                                          n->klass->vtable._5_Initialize.methodPtr,
                                                          method)) == 0LL )
  {
    sub_B170D4();
  }
  WarBoardServantPieceBuffTurnComponent__UpdateDisp(v3, 1, 0LL);
}


int32_t __fastcall WarBoardData___c___UpdateCurrentPartyCost_b__143_0(
        WarBoardData___c_o *this,
        UserServantEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return UserServantEntity__getCost(x, 0LL);
}


bool __fastcall WarBoardData___c___get_PlayerMasterUserEquipId_b__62_0(
        WarBoardData___c_o *this,
        WarBoardPieceData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  if ( (byte_40F7AD6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_40F7AD6 = 1;
  }
  if ( !x )
    sub_B170D4();
  return System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
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
  if ( (byte_40F7AD7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, x);
    byte_40F7AD7 = 1;
  }
  if ( !x )
    sub_B170D4();
  return !x->fields._isDead_k__BackingField
      && System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.inRangeSquaers,
           x->fields._nowSquareIndex_k__BackingField,
           (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v5; // x1
  struct ServantMaster_o *svtMaster; // x20
  __int64 v7; // x19
  __int64 v8; // x21
  int32_t v9; // w0
  ServantEntity_o *Entity; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v12; // 0:x0.16

  if ( (byte_40F7AD8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, x);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_40F7AD8 = 1;
  }
  if ( !x )
    goto LABEL_10;
  svtMaster = this->fields.svtMaster;
  v8 = *(_QWORD *)&x->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&x->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v12.fields.currentCryptoKey = v8;
  *(_QWORD *)&v12.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v12, 0LL);
  if ( !svtMaster
    || (Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)svtMaster,
                                      v9,
                                      (const MethodInfo_266F388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL )
  {
LABEL_10:
    sub_B170D4();
  }
  return ServantEntity__get_IsServant(Entity, 0LL);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_bool__o *_9__2; // x21
  WarBoardManager_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int32_t key; // w0
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x8
  int32_t v25; // w19
  System_Collections_Generic_KeyValuePair_int__object__o KeyValuePair_int__object; // kr00_16
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only; // x0

  if ( (byte_40F7AD9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v4);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Value__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__, v9);
    byte_40F7AD9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__2 = this->fields.__9__2;
  v16 = (WarBoardManager_o *)Instance;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v11, v12, v13, v14);
    System_Action_bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__2__,
      (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.consumedPieceActionPointDict,
          (const MethodInfo_18D652C *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  v25 = key;
  KeyValuePair_int__object = System_Linq_Enumerable__First_KeyValuePair_int__object__(
                               (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
                               (const MethodInfo_18D652C *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____);
  if ( !KeyValuePair_int__object.fields.value
    || (Only = System_Collections_Generic_List_WarBoardAIRoute_RouteData___AsReadOnly(
                 (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)KeyValuePair_int__object.fields.value,
                 (const MethodInfo_2F25F58 *)Method_System_Collections_Generic_List_WarBoardPieceData__AsReadOnly__),
        !v16) )
  {
    sub_B170D4();
  }
  WarBoardManager__ShowConsumedPieceActionPointPopup(
    v16,
    _9__2,
    v25,
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *_9__3; // x22
  WarBoardManager_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F7ADA & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, _);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__, v5);
    byte_40F7ADA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__3 = this->fields.__9__3;
  v12 = (WarBoardManager_o *)Instance;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      _9__3,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass154_0__ShowConsumedPieceActionPointPopup_b__3__,
      0LL);
    this->fields.__9__3 = _9__3;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__3,
      (System_Int32_array **)_9__3,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v12 )
    sub_B170D4();
  WarBoardManager__HideConsumedPieceActionPointPopup(v12, _9__3, 0LL);
}


void __fastcall WarBoardData___c__DisplayClass154_0___ShowConsumedPieceActionPointPopup_b__3(
        WarBoardData___c__DisplayClass154_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___o *consumedPieceActionPointDict; // x20
  int32_t key; // w0
  WarBoardData_o *_4__this; // x0

  if ( (byte_40F7ADB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____, v3);
    sub_B16FFC(&Method_System_Collections_Generic_KeyValuePair_int__List_WarBoardPieceData___get_Key__, v4);
    byte_40F7ADB = 1;
  }
  this->fields.consumedPiecePopupClose = 1;
  consumedPieceActionPointDict = this->fields.consumedPieceActionPointDict;
  key = System_Linq_Enumerable__First_KeyValuePair_int__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)consumedPieceActionPointDict,
          (const MethodInfo_18D652C *)Method_System_Linq_Enumerable_First_KeyValuePair_int__List_WarBoardPieceData_____).fields.key;
  if ( !consumedPieceActionPointDict
    || (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Remove(
          (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)consumedPieceActionPointDict,
          key,
          (const MethodInfo_2DEAD98 *)Method_System_Collections_Generic_Dictionary_int__List_WarBoardPieceData___Remove__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct WarBoardData___c__DisplayClass189_0_o *CS___8__locals1; // x8
  struct WarBoardStageReinforcementsEntity_o *stageEntity; // x8
  System_Int32_array *reinforcementsIdx; // x20
  System_Func_int__bool__o *_9__2; // x22
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40F7ADC & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_int____66805656, x);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v7);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v8);
    sub_B16FFC(&Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__, v9);
    byte_40F7ADC = 1;
  }
  if ( !x
    || (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL
    || (stageEntity = CS___8__locals1->fields.stageEntity) == 0LL )
  {
    sub_B170D4();
  }
  if ( x->fields.stageReinforcementId != stageEntity->fields.id )
    return 0;
  reinforcementsIdx = x->fields.reinforcementsIdx;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Func_int__bool__o *)sub_B170CC(System_Func_int__bool__TypeInfo, x, method, v3, v4);
    System_Func_int__bool____ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_WarBoardData___c__DisplayClass189_1__GetReinforcements_b__2__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    this->fields.__9__2 = _9__2;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__2,
      (System_Int32_array **)_9__2,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
  }
  return BasicHelper__Any_int__25910576(
           reinforcementsIdx,
           (System_Func_T__bool__o *)_9__2,
           (const MethodInfo_18B5D30 *)Method_BasicHelper_Any_int____66805656);
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
      sub_B17100(this, a, method);
      sub_B170A0();
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
    sub_B170D4();
  return x->fields.forceId == piece->fields.forceId && x->fields.groupId == piece->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_0____ctor_b__6(
        WarBoardData___c__DisplayClass77_0_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *piece; // x8

  if ( !x || (piece = this->fields.piece) == 0LL )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.treasureId == layout->fields.effectId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__12(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B170D4();
  return x->fields.forceId == layout->fields.forceId && x->fields.groupId == layout->fields.groupId;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__13(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.squareIndex == layout->fields.squareIndex;
}


bool __fastcall WarBoardData___c__DisplayClass77_4____ctor_b__15(
        WarBoardData___c__DisplayClass77_4_o *this,
        WarBoardUserWallData_o *x,
        const MethodInfo *method)
{
  struct WarBoardStageLayoutEntity_o *layout; // x8

  if ( !x || (layout = this->fields.layout) == 0LL )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return !x->fields._isDead_k__BackingField && x->fields._uniqueIndex_k__BackingField == this->fields.uniqueId;
}